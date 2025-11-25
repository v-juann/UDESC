/*Implemente um programa para criptografia e descriptografia de mensagens utilizando o
algoritmo RSA.
Você pode utilizar materiais de aula para auxílio, incluindo o Capítulo 10 do livro 
"Criptografia e Segurança de Redes: Princípios e Práticas" de William Stallings 2006.*/
import java.util.Scanner;
import java.util.Random;

public class TrabalhoSDI{
    public static void main(String[] args){
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Digite uma string:\n");
            String entrada = input.nextLine();
            
            conversaoAscii(entrada);
            cripto(entrada);
        }
    };

    public static void conversaoAscii(String entrada){
        for( int i = 0; i < entrada.length(); i++ ){
            int caractere = entrada.charAt(i);
            System.out.printf("%d ", caractere);
        }
    };

    public static void cripto(String entrada){
        int prime1 = primeGen(9999);
        int prime2 = primeGen(9999);
        int n = prime1 * prime2;
        int totient = (prime1-1) * (prime2-1);

        int publicExpoent = primeGen(totient);

    };

    public static int primeGen(int bound){
        Random rand = new Random();
        int z = rand.nextInt(bound) + 2;
        while (!isPrime(z)) {
            z = rand.nextInt(bound) + 2;
        }
        return z;
    };
    
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        if (num <= 3) {
            return true;
        }
        if (num % 2 == 0 || num % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= num; i = i + 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    };

    public static int privateExpoent(int e, int publicExpoent){
        int a = 1;
        while ( (a * e)  % publicExpoent)!= 1){
            a++;
        };
        return a;
    };
};