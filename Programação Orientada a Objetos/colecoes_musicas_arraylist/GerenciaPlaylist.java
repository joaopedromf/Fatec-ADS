import java.util.ArrayList;
import java.util.List;
import java.util.LinkedList;
import java.util.Collections;
import static javax.swing.JOptionPane.showMessageDialog;
import static javax.swing.JOptionPane.showInputDialog;
import static java.lang.Integer.parseInt;
import java.util.Collection;
public class GerenciaPlaylist {
    public static void main(String[] args) {
        //generics
        //List <Musica> musicas = new LinkedList <>();  //operador diamante se a Lista é de <Musica>, então a LinkedList também é, possbilitando escrever apenas <>
        var musicas = new ArrayList<Musica>();
        String menu = "1-Adicionar\n2-Ver música\n3-Avaliar música\n4-Excluir música\n0-Sair";
        // musicas.add(new Musica());
         
        int op;
        do{
            op = parseInt(showInputDialog(menu));
            switch(op){
                case 1:{
                    //1 . Pegar os dados da música
                    var titulo = showInputDialog("Titulo?");
                    //2. Construir um objeto Musica
                    var musica = new Musica(titulo);
                    //3. Adicionar na coleção com add
                    musicas.add(musica);
                    //4. Avisar o usuário que deu certo
                    showMessageDialog(null, "Boa mlk adicionou");
                    break;
                }
                case 2:{
                    var sb = new StringBuilder("");
                    Collections.sort(musicas);
                    //for each ou enhanced for (C#: foreach)
                    for(Musica m : musicas){
                        sb.append(m)
                        .append("\n")
                        .append("***************************")
                        .append("\n");
                    }
                    //for normal
                    // for (int i = 0; i <= musicas.size();i++){
                    //     sb.append(musicas.get(i - 1))
                    //     .append("\n")
                    //     .append("**************************");
                    // }
                    showMessageDialog(null, sb);
                    break;
                }
                case 3:{
                    //ordenar por avaliação
                    Collection.sort(musicas.new ComparadorPortTitulo());
                    var sb = new StringBuilder("");
                    for (Musica m : musicas){
                        sb
                        .append(m)
                        .append("\n")
                        .append("***************************")
                        .append("\n");
                    }

                }
            }
        } while (op != 0);
    }
}
