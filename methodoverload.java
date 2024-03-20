class methodoverloading {
    public static void display(int a){
        System.out.println("Got Integer data "+a);
    }
    public static void display(String a){
        System.out.println("Got String object "+a);
    }
    public static void display(float a){
        System.out.println("Got float data "+a);
    }
    public static void main(String[] args) {
        display(45);
        display("Iam lokesh");
        display(7.6f);
    }
}
