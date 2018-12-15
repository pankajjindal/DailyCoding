import java.util.*;
class TestAl{
        public static void main(String[] args)
	{
             ArrayList<String> l = new ArrayList<String>();
	
	     //Can we do this ?
             ArrayList l = new ArrayList<String>(); // no compiler errro saying its an usafe operation
             
	     l.add(10);
             l.add("java");

             System.out.println(l.size());
             System.out.println(l);
	}

}
/*
TestAl.java:7: error: no suitable method found for add(int)
	     l.add(10);
	      ^
    method Collection.add(String) is not applicable
      (argument mismatch; int cannot be converted to String)
    method List.add(String) is not applicable
      (argument mismatch; int cannot be converted to String)
    method AbstractCollection.add(String) is not applicable
      (argument mismatch; int cannot be converted to String)
    method AbstractList.add(String) is not applicable
      (argument mismatch; int cannot be converted to String)
    method ArrayList.add(String) is not applicable
      (argument mismatch; int cannot be converted to String)
Note: Some messages have been simplified; recompile with -Xdiags:verbose to get full output
1 error
*/
