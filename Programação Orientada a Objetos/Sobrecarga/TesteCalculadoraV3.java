public class TesteCalculadoraV3 {
    public static void main(String[] args) {
        var calc = new CalculadoraV3();
        int [] vetor = new int[2];
        vetor[0] = 5;
        vetor[1] = 7;
        System.out.println(calc.somar(vetor));

        int a = 5, b = 7, c = 9, d = 2;
        // calc.somar(new int[]{a,b,c,d});
        System.out.println(calc.somar(a,b,c,d));
        System.out.println(calc.somar(1));
        System.out.println(calc.somar(2,3));
        System.out.println(calc.somar());
    }
}
