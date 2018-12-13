// A Simple Java program to demonstrate that NOT using 
// generics can cause run time exceptions 
import java.util.*; 
  
class generics4 
{ 
    public static void main(String[] args) 
    { 
        // Creatinga an ArrayList without any type specified 
        ArrayList al = new ArrayList(); 
  
        al.add("Sachin"); 
        al.add("Rahul"); 
        al.add(10); // Compiler allows this called autoboxing 
  
        String s1 = (String)al.get(0); 
        String s2 = (String)al.get(1); 
 
        System.out.println(s1); 
        System.out.println(s2); 

        
        //String s3 = (String)al.get(2); // RE:ClassCastException
 
        //int i = al.get(2); //RE:Object cannot be converted to int

        //Integer i = Integer.intValue(al.get(2)); //RE:Object cannot be converted to int
        
    } 
} 

//we have no suitable way to get the value of al(2) since we do not know if its a int
//this is where we generics fail so we need to be precise in defining.(correct this of needed)
