public class Exercicio4 {
    public static void main(String[] args) {
        int termo1 = 1, termo2 = 0, soma = 0;
        while(soma < 100){
            System.out.print(soma+" ");
            soma = termo1 + termo2;
            termo1 = termo2;
            termo2 = soma;       
        }
    }
}