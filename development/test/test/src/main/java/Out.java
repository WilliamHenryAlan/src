public class Out {
    public static void main(String[] args) {
        String str = "hello";
        str = reverse(str);
        System.out.println(str);
    }

    public static void add(int[] arr) {
        arr[0] = 1;
    }
    public static int add(int a,int b) {
        return a + b;
    }
    public static String reverse(String s) {
        char[] str = s.toCharArray();
        int l = 0,r = str.length - 1;
        while (l < r) {
            char t = str[l];
            str[l] = str[r];
            str[r] = t;
            ++l;
            --r;
        }
        return new String(str);
    }
}
