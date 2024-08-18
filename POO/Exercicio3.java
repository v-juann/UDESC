public class Exercicio3 {
    public static void main(String[] args) {
        boolean x = false, y = false, z = false;
        System.out.println(x+" e "+y+" ou "+z+" = "+((x&&y)||z));
        System.out.println(x+" e "+y+" ou "+!z+" = "+((x&&y)||!z));
        System.out.println(x+" e "+!y+" ou "+z+" = "+((x&&!y)||z));
        System.out.println(x+" e "+!y+" ou "+!z+" = "+((x&&!y)||!z));
        System.out.println(!x+" e "+y+" ou "+z+" = "+((!x&&y)||z));
        System.out.println(!x+" e "+y+" ou "+!z+" = "+((!x&&y)||!z));
        System.out.println(!x+" e "+!y+" ou "+z+" = "+((!x&&!y)||z));
        System.out.println(!x+" e "+!y+" ou "+!z+" = "+((!x&&!y)||!z));
    }
}