public class BoxandUnbox {
    public static void main(String[] args)
    {
        //Boxing
        Integer x = new Integer(50);
        Integer y = new Integer(25);
        //UnBoxing
        int z=y;
        System.out.println("Boxed Value : "+x);
        System.out.println("UnBoxed Value : "+z);
    }
}
