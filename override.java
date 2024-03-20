class parent{
    void display()
    {
        System.out.println("Iam lokesh ");
    }
}
class child extends parent{
    void display()
    {
        System.out.println("Iam lokesh child");
    }
}
class overriding{
    public static void main(String[] args){
        parent obj1= new parent();
        obj1.display();
        child obj2= new child();
        obj2.display();

    }
}
