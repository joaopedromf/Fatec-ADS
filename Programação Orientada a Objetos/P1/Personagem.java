public class Personagem {
 
  //atributos ou propriedades
  private String nome;
  private int energia = 10;
  private int fome = 0;
  private int sono = 0;
  private int item = 4;
  private boolean vivo = true;

  //construtor: lista de parâmetros vazia
  // Personagem(){

  // }
  public int getEnergia(){
    return energia;
  }

  public String getNome(){
    return nome;
  }

  public void setEnergia(int energia){
    this.energia = energia;
  }

  Personagem(String nome){
    this.nome = nome;
  }

  Personagem(String nome, int energia, int fome, int sono){
    this.nome = nome;
    if (energia >= 0 && energia <= 10)
      this.energia = energia;
    if (fome >= 0 && fome <= 10)
      this.fome = fome;
    if(sono >= 0 && sono <= 10)
      this.sono = sono;  

  }

  //comportamentos (métodos)
  void cacar(){
    if (vivo == true){
      System.out.println (nome + " caçando...");
      energia -= 2;
      item = item + 1;
      fome = Math.min(fome + 1, 10);
      sono = Math.min(sono + 1 ,10);
    }
  }

  void comer(){
      if (vivo == true){
        if (fome >= 1 && item >= 1){
          System.out.println(nome + " comendo...");
        // operador ternário
          energia = energia + 1 > 10 ? 10 : energia + 1;
          fome--;
          item--;
        }
        else if (item == 0){
          System.out.println(nome + " sem itens...");
        }
        else {
          System.out.println(nome + " sem fome...");
        }
      }
  }

  void dormir(){
    if(vivo == true){
      if(sono > 0){
        System.out.println(nome + " dormindo...");
        sono -= 1;
        energia = Math.min(10, energia + 1);
      }
      else{
        System.out.println(nome + " sem sono");
      }
    }
  }

  void exibirEstado(){
    System.out.printf(
      "%s: e: %d, f: %d, s: %d, i: %d\n",
      nome,
      energia,
      fome,
      sono,
      item
    );
  }

  int morrer(){
    if (energia <= 0 && vivo == true){
      System.out.println(nome + " morreu...");
      vivo = false;
      return 1;
    }
    return 0;
  }

  void atacar(String n1, int e1, String n2){
      
        System.out.println(n2 + " atacou " + n1);
        e1--;
        setEnergia(e1);
      
  }

}