//import java.Math.*;
public class js {
    private double a;
    private double b;
    private double c;
    public js(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    public double geta() {
        return a;
    }
    public double getb() {
        return b;
    }
    public double getc() {
        return c;
    }
    public double area() {
        double s = (a + b + c) / 2;
        double sa = s * (s - a) * (s - b) * (s - c);
        double result = Math.sqrt(sa);
        return result;
    }
    public double slength() {
        return a + b + c;
    }
}
