import java.util.Scanner;
import java.util.Random;
import java.math.BigInteger;

public class TrabalhoSDI{
    public static void main(String[] args){
        Random rnd = new Random();

        // Ajustar tamanho dos primos para reduzir o tempo de execução
        int bitLength = 12;

        try (Scanner input = new Scanner(System.in)) {

            // Obtém a string de entrada do usuário
            System.out.println("Digite uma string:\n");
            String entrada = input.nextLine();
            
            // Conversão da entrada em código ASCII
            BigInteger codigoAscii = new BigInteger(conversaoAscii(entrada));

            // Inicia os primos p, q e o módulo n
            BigInteger n = BigInteger.ZERO, p = BigInteger.ZERO, q = BigInteger.ZERO;

            // Garantindo que n é maior que o código ASCII
            while(n.compareTo(codigoAscii) < 0){
                p = BigInteger.probablePrime(bitLength, rnd);
                q = BigInteger.probablePrime(bitLength, rnd);
                n = p.multiply(q);
            }

            // Cálculo da função totiente, expoentes público e privado
            BigInteger phi = (p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
            BigInteger publicExpoent = publicExpoent(phi);
            BigInteger privateExpoent = privateExpoent(publicExpoent, phi);
            
            // Criptografia e Descriptografia
            BigInteger msgCriptografada = cripto(n, publicExpoent, privateExpoent, codigoAscii);
            String msgDescriptografada = desconversaoAscii(descripto(msgCriptografada, privateExpoent, n));

            // Saída
            System.out.println(
            "\nEntrada: " + entrada + 
            "\nCodigo ASCII: " + codigoAscii +
            "\nCriptografada: " + msgCriptografada + 
            "\nChave Publica: (" + n + ", " + publicExpoent + ")" +
            "\nChave Privada: (" + n + ", " + privateExpoent + ")" +
            "\nDescriptografada (ASCII): " + descripto(msgCriptografada, privateExpoent, n) + 
            "\nDescriptografada (Texto): " + msgDescriptografada);
        }
        catch (Exception e) {
            System.out.println("Erro ao obter entrada: " + e.getMessage());
        }
    };
    
    public static String conversaoAscii(String entrada){
        String codigo = new String();
        for(int i = 0; i < entrada.length(); i++){
            int caractere = entrada.charAt(i);
            codigo += caractere;
        }
        return codigo;
    };
    
    public static String desconversaoAscii(BigInteger entrada){
        String codAscii = entrada.toString();
        String stringConvertida = new String();

        for(int i = 0; i <= codAscii.length()-2; i+=2){
            int caractere = Integer.parseInt(codAscii.substring(i, i+2));
            if(caractere < 32){
                caractere = Integer.parseInt(codAscii.substring(i, i+3));
                i++;
            }
            stringConvertida += (char) caractere;
        }

        return stringConvertida;
    };

    public static BigInteger cripto(BigInteger n, BigInteger publicExpoent, BigInteger privateExpoent, BigInteger entrada){        
        BigInteger C = entrada.modPow(publicExpoent, n);        
        return C;
    };

    public static BigInteger descripto(BigInteger C, BigInteger privateExpoent, BigInteger n){
        BigInteger M = C.modPow(privateExpoent, n);
        return M;
    };
 
    public static BigInteger privateExpoent(BigInteger publicExpoent, BigInteger phi){
        BigInteger d = publicExpoent.modInverse(phi);
        return d;
    };
    
    public static BigInteger publicExpoent(BigInteger phi){
        BigInteger e = BigInteger.valueOf(2);
        while(e.gcd(phi).intValue() != 1){
            e = e.add(BigInteger.ONE);
        }
        return e;
    };
};
