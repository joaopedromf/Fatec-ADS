import javax.crypto.MacSpi;

//generics
public class Musica implements Comparable <Musica>{
    private String titulo;
    private int avaliacao;

    public Musica(){}

    public Musica(String titulo){
        this(titulo, 0);
    }

    public Musica(String titulo, int avaliacao){
        setTitulo(titulo);
        setAvaliacao(avaliacao);
    }

    public void setTitulo(String titulo){
        this.titulo = titulo;
    }

    public void setAvaliacao(int avaliacao){
        this.avaliacao = avaliacao;
    }

    public int getAvaliacao() {
        return avaliacao;
    }
    
    @Override
    public String toString(){
        return String.format(
            "(%s, %d)",
            titulo,
            avaliacao
        );
    }

    @Override
    public int compareTo(Musica o){
        return o.titulo.compareTo(this.titulo);
    } 

    // m1 = "(One, 5)";
    // m2 = "(Sunflower, 7)";
    // m1.compareTo(m2);
    
}