public class LivroDeNotas {

    // Variável de instância
    // Instância é sinônimo de objeto
    // Modificador de acesso
    // Encapsulamento

    private String nomeDoCurso;

    public void exibirMensagem(){
        System.out.printf("Bem-vindo ao livro de notas do curso %s", getNomeDoCurso());
    }

    // Métodos Getters/Setters

    // Getter
    public String getNomeDoCurso() {
        return nomeDoCurso;
    }

    // Setter
    public void setNomeDoCurso(String nomeDoCurso) {
        //shadowing
        this.nomeDoCurso = nomeDoCurso;
    }

    // Construtor padrão
    LivroDeNotas(String nomeDoCurso){
        // Shadowing
        this.nomeDoCurso = nomeDoCurso;
    }
}