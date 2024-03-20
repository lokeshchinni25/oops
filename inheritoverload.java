class A {
    public void add(int a, int b) {
        System.out.println(a + " + " + b + " = " + (a + b));
    }

    public void add(int a, int b, int c) {
        System.out.println(a + " + " + b + " + " + c + " = " + (a + b));
    }
}

class B extends A {
    public void add(double a, double b) {
        System.out.println(a + " - " + b + " = " + (a - b));
    }

    public void add(double a, double b, double c) {
        System.out.println(a + " + " + b + " + " + c + " = " + (a + b));
    }
}

class methodOverloadingin {
    public static void main(String[] args) {
        B obj = new B();
        obj.add(45, 42);
        obj.add(35.78, 92.36);
        obj.add(101.12, 61.64, 47.45);
    }
}
