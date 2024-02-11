public class Calculadora{

    public int somar(int a, int b){
        return a + b;
    }

    public int somar(int a, int b, int c){
        return a + b + c;
    }

    public float somar(float a, float b){
        return a + b;
    }

    public int somar(String a, String b){
        return Integer.parseInt(a) + Integer.parseInt(b);
    }

    public int somar(String a, int b){
        return Integer.parseInt(a) + b;
    }

    public int somar(int a, String b){
        return a + Integer.parseInt(b);
    }

    public int somar(int [] inteiros){
        int res = 0;
        for(int inteiro : inteiros){
            res += inteiro;
        }
        return res;
    }
}