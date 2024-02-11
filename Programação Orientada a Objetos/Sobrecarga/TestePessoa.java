public class TestePessoa {
    public static void main(String[] args) {
        var p1 = new Pessoa("Ana",18);
        var p2 = new Pessoa();
    }
}
class Pessoa{
    private String nome;
    private int idade;

    Pessoa(String nome, int idade){
        this.nome = nome;
        if(idade >= 18){
            this.idade = idade;
        }
    }
    Pessoa(int idade, String nome){
        this(nome, idade);
    }
    Pessoa (int idade){
        this(null,idade);
    }
    Pessoa(String nome){
        this(0,nome);
    }
    Pessoa(){}
}
class Personagem{
    final static int VALOR_ENERGIA_PADRAO = 10;
    final static int VALOR_FOME_PADRAO = 0;
    final static int VALOR_SONO_PADRAO = 0;

    String nome;
    int energia, fome, sono;

    Personagem (String nome, int energia, int fome, int sono){
        this.nome = nome;
        this.energia = energia;
        this.fome = fome;
        this.sono = sono;
    }

    Personagem(){
        // energia = 10;
        // fome = 0;
        // sono = 0;
        this(null, VALOR_ENERGIA_PADRAO, VALOR_FOME_PADRAO, VALOR_SONO_PADRAO);
    }

    Personagem(String nome){
        // this();
        // this.nome = nome;
        this(nome, VALOR_ENERGIA_PADRAO, VALOR_FOME_PADRAO, VALOR_SONO_PADRAO);
    }

}