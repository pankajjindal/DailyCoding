// Java program to demonstrate Autoboxing 
import java.util.List;
import java.util.ArrayList; 
class Autoboxing 
{ 
    public static void main(String[] args) 
    { 
        char ch = 'a'; 
  
        // Autoboxing- primitive to Character object conversion 
        Character a = ch; 
  
        ArrayList<Integer> arrayList = new ArrayList<Integer>(); 
  
        // Autoboxing because ArrayList stores only objects 
        arrayList.add(25); 
  
        // printing the values from object 
        System.out.println(arrayList.get(0));//25 

        List<Integer> li = new ArrayList<>();
        for (int i = 1; i < 5; i += 2){
            li.add(Integer.valueOf(i));//[1, 1, 3, 3]
	    li.add(i);//[1, 1, 3, 3]	
	}

	System.out.println(li);//
    } 
} 

/*
Autoboxing is convertion from primitive type to an object.
Although you add the int values as primitive types, rather than Integer objects, to li, 
the code compiles. Because li is a list of Integer objects, not a list of int values, 
you may wonder why the Java compiler does not issue a compile-time error. 
The compiler does not generate an error because it creates an Integer object from i and adds the object to li. 
Thus, the compiler converts the previous code to the following at runtime:

List<Integer> li = new ArrayList<>();
for (int i = 1; i < 50; i += 2)
    li.add(Integer.valueOf(i));

Converting a primitive value (an int, for example) into an object of the
corresponding wrapper class (Integer) is called autoboxing.
The Java compiler applies autoboxing when a primitive value is:

Passed as a parameter to a method that expects an object of the corresponding wrapper class.
Assigned to a variable of the corresponding wrapper class.

Difference between List and ArrayList ?
BASIS FOR COMPARISON	LIST	                                        ARRAYLIST
Basic	                List is an Interface	                        ArrayList is a standard Collection Class.
Syntax	                interface List	                                class ArrayList
Extend/Implement	List interface extends Collection Framework.	ArrayList extends AbstractList and implements List Interface.
Namespace	        System.Collections.Generic.	                System.Collections.
Work	                It is used to create a list of elements (objects) 
                        which are associated with their index numbers.	ArrayList is used to create a dynamic array that contains objects.
*/
