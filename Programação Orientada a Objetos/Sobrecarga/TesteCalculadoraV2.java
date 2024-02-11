public class TesteCalculadoraV2 {
  public static void main(String[] args) {
    var c = new CalculadoraV2();
    float r1 = c.somar(2, 3);

    int r2 = c.somar(2, 3);

    c.somar(2, 3);

    System.out.println(c.somar(2, 3));
  }
}