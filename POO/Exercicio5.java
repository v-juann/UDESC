public class Exercicio5 {
    public static void main(String[] args) {
        for (int n = 2; n <= 100; n++) {
            int cont = 0;
            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    cont++;
                }
            }
            if (cont == 2) {
                System.out.print(n+" ");
            }
        }
    }
}