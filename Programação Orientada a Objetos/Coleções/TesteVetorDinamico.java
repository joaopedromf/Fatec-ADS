import java.util.Random;

import javax.xml.namespace.QName;

public class TesteVetorDinamico {
    public static void main(String[] args) throws Exception {
        //1. Construir um vetor dinâmico
        var v = new VetorDinamico();
        var gerador = new java.util.Random();
        //2. Loop Infinito
        while(true){
            Boolean ehParaAdicionar = gerador.nextDouble() <= 0.7;
            if (ehParaAdicionar){
                System.out.println("ADICIONANDO...");
        //3. Gerar um valor aleatório entre 1 e 6
                var numero = gerador.nextInt(6) + 1;
        //4. Adicionar no VetorDinamico
                v.adicionar(numero);
            }
            else {
                System.out.println("REMOVENDO...");
                v.remover();
            }
        //5. Exibir o estado do VetorDinamico
            System.out.println(v);
            System.out.println("**************************");
        //6. Dormir por 5 segundos
            Thread.sleep(3000);
        }
    }
    
}
