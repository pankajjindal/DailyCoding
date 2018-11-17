import java.lang.reflect.*;

class student {
     public String getName(){
         return null;
    }
    public int getRollNo(){
         return 10;
    }
}

class Test{
     public static void main(String[] args) throws Exception
     {
     int count=0;
     Class c = Class.forName("student");
     Method[] m = c.getDeclaredMethods();
     for(Method m1:m){
         count++;
         System.out.println(m1.getName());
     }
     System.out.println("the count is :" +count);
     
     count =0;
     Class c1 = Class.forName("java.lang.Object");
     Method[] m2 = c1.getDeclaredMethods();
     for(Method m1:m2){
         count++;
         System.out.println(m1.getName());
     }
     System.out.println("the count is :" +count);
     
     count =0;
     Class c3 = Class.forName("java.lang.String");
     Method[] m4 = c3.getDeclaredMethods();
     for(Method m1:m4){
         count++;
         System.out.println(m1.getName());
     }
     System.out.println("the count is :" +count);
}
}