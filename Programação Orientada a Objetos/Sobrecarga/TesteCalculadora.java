public class TesteCalculadora {
    public static void main(String[] args) {
        var calc = new Calculadora();

        System.out.println(calc.somar(2, 3));

        System.out.println(calc.somar(1.2f,3.4f));

        System.out.println(calc.somar("2","3"));

        System.out.println(calc.somar(new int []{1,2}));
    }
}