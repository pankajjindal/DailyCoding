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
    int rollno;
    Student(String name, int rollno){
        this.name = name;
        this.rollno = rollno;
    }
    Student(){}
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

        Student s4 = new Student("k", 101);
        Student s5 = new Student("duga", 102);
        Student s6 = new Student("laura", 103);
        Student s7 = new Student("t", 101);
        Student s8 = new Student("dtga", 102);
        Student s9 = new Student("laura", 103);
         Student s91 = new Student("laura", 1039);
          Student s92 = new Student("laura", 1037);
           Student s93 = new Student("laura", 1036);
            Student s94 = new Student("laura", 1035);
             Student s95 = new Student("laura", 1034);


        Runtime r2 = Runtime.getRuntime();
        System.out.print("Max memory in mb " +r2.maxMemory()/mb);
        System.out.println( " in bytes " +r2.maxMemory());
        System.out.println("Intial memory" +r2.totalMemory()/mb );
        System.out.println(" in bytes " +r2.totalMemory());
        System.out.println("Free memory in mb " +r2.freeMemory()/mb ); 
        System.out.println("Free memory" +r2.freeMemory() ); 


    } 
}
