public class TesteLivroDeNotas {
    public static void main(String[] args){
        String nomeDoCurso = javax.swing.JOptionPane.showInputDialog("Prof, qual o nome do curso?");
        LivroDeNotas livroDeNotas = new LivroDeNotas(nomeDoCurso);
        livroDeNotas.setNomeDoCurso(nomeDoCurso);
        livroDeNotas.exibirMensagem();
        System.out.println("\nA disciplina e " + livroDeNotas.getNomeDoCurso());
    }
}