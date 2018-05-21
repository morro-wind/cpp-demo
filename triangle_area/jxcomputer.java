//import js.*;
public class jxcomputer {
    public static void main(String[] args) {
        js js = new js(3, 6, 8);
        double area = js.area();
        System.out.println("a b c 面积 周长");
        System.out.printf("%.0f %.0f %.0f %.2f %.1f", js.geta(), js.getb(), js.getc(), area, js.slength());
        System.out.println();
    }
}
