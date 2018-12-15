// A Simple Java program to show working of user defined 
// Generic classes 
   
// We use < > to specify Parameter type 
class TestMemory<T> 
{ 
    // An object of type T is declared 
    T obj; 
    TestMemory(T obj) {  this.obj = obj;  }  // constructor 
    public T getObject()  { return this.obj; } 
} 

class Student{
    String name;
    int roolno;
}
// Driver class to test above 
class TestMemoryMain 
{ 
    public static void main (String[] args) 
    { 
        double mb = 1024*1024;
	    Runtime r = Runtime.getRuntime();
        // instance of Integer type 
        TestMemory <Integer> iObj = new TestMemory<Integer>(15); 
        System.out.println(iObj.getObject()); 
   
        // instance of String type 
        TestMemory <String> sObj = 
                          new TestMemory<String>("GeeksForGeeks"); 
        System.out.println(sObj.getObject()); 

	    System.out.print("Max memory in mb " +r.maxMemory()/mb);
        System.out.println( " in bytes " +r.maxMemory());
        System.out.println("Intial memory" +r.totalMemory()/mb );
        System.out.println(" in bytes " +r.totalMemory());
        System.out.println("Free memory in mb " +r.freeMemory()/mb ); 
        System.out.println("Free memory" +r.freeMemory() ); 
	//System.out.println(sObj.getObject());

        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        
        System.out.println("after making 3 student object");
        Runtime r1 = Runtime.getRuntime();
        System.out.print("Max memory in mb " +r1.maxMemory()/mb);
        System.out.println( " in bytes " +r1.maxMemory());
        System.out.println("Intial memory" +r1.totalMemory()/mb );
        System.out.println(" in bytes " +r1.totalMemory());
        System.out.println("Free memory in mb " +r1.freeMemory()/mb ); 
        System.out.println("Free memory" +r1.freeMemory() ); 


    } 
}
