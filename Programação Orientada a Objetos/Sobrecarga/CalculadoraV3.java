public class CalculadoraV3 {
    public void  a(int... b){}

    public int somar(int... elementos){
        var res = 0;
        // enhanced for (Java 5)
        // for each
        int i = 0;
        for(int elemento : elementos){
            i++;
            if(i % 2 == 0)
                res += elemento;
        }
        for(i=0; i < elementos.length; i++){
            res += elementos[i];
        }
        return res;
    }
}
