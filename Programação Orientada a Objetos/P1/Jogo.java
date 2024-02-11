import java.util.Random;
public class Jogo {
  public static void main(String[] args) throws Exception {
    var gerador = new Random();
    var personagem = new Personagem("John");
    var personagem2 = new Personagem("Mathew");
    int personagens = 2;
    int mortos = 0;
    while(personagens != mortos){
      int duelo = gerador.nextInt(2);
      if(mortos == 0){
        switch(duelo){
          case 0:
          personagem2.atacar(personagem2.getNome(), personagem2.getEnergia(), personagem.getNome());
          mortos = mortos + personagem2.morrer(); 
          break;
          case 1:
          personagem.atacar(personagem.getNome(), personagem.getEnergia(), personagem2.getNome());
          mortos = mortos + personagem.morrer();
          break;
        }
      }
      int oQueFazer = gerador.nextInt(3); //[0..3[
      switch(oQueFazer){
        case 0:
          personagem.cacar();
          break;
        case 1:
        personagem.comer();
          break;
        case 2:
        personagem.dormir();
        break;
      }
      mortos = mortos + personagem.morrer();
      personagem.exibirEstado();    
      System.out.println("--------------------");
      int oQueFazer2 = gerador.nextInt(3); //[0..3[
      switch(oQueFazer2){
        case 0:
          personagem2.cacar();
          break;
        case 1:
        personagem2.comer();
          break;
        case 2:
        personagem2.dormir();
        break;
      }
      mortos = mortos + personagem2.morrer();
      personagem2.exibirEstado();    
      System.out.println("********************");
      Thread.sleep(4000);
    }
  }
}
