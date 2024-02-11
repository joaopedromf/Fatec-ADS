public class Personagem{
    //atributos
    private String nome;
    private int energia = 10;
    private int fome = 0;
    private int sono = 0;

    // construtor: lista de par�metros vazia
    // Personagem(){

    // }

    Personagem(String nome){
        this.nome = nome;
    }

    Personagem(String nome,int energia,int fome,int sono){
        this.nome = nome;
        if (energia >= 0 && energia <= 10)
            this.energia = energia;
        if (fome >= 0 && fome <= 10)
            this.fome = fome;
        if(sono >= 0 && sono <= 10)
            this.sono = sono; 
    }

    //m�todos
    void cacar(){
        if(energia>=2){
            System.out.println(nome + " ca�ando...");
            energia-=2; //energia = energia - 2;
        }
        else{
            System.out.println(nome + " sem energia para ca�ar...");
        }
        fome = Math.min(fome+1,10);
        sono = Math.min(sono+1,10);
    }

    void comer(){
        if(fome>0){
            System.out.println(nome + " comendo...");
            fome--;
            energia = Math.min(energia+1,10);
        }
        else{
            System.out.println(nome + " sem fome.");
        }
    }

    void dormir(){
        if(sono>0){
            System.out.println(nome + " dormindo...");
            sono-=1;
            energia = Math.min(energia+1,10);
        }
        else{
            System.out.println(nome + " sem sono.");
        }
    }

    void exibirEstado(){
        System.out.printf(
            "%s: e: %d, f: %d, s: %d\n",
            nome,
            energia,
            fome,
            sono
        );
    }
}