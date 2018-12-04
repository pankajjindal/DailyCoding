// A Simple Java program to show working of user defined 
// Generic classes 
   
// We use < > to specify Parameter type 
class Generics1<T> 
{ 
    // An object of type T is declared 
    T obj; 
    Generics1(T obj) {  this.obj = obj;  }  // constructor 
    public T getObject()  { return this.obj; } 
} 
   
// Driver class to test above 
class Main 
{ 
    public static void main (String[] args) 
    { 
        double mb = 1024*1024;
	Runtime r = Runtime.getRuntime();
        // instance of Integer type 
        Generics1 <Integer> iObj = new Generics1<Integer>(15); 
        System.out.println(iObj.getObject()); 
   
        // instance of String type 
        Generics1 <String> sObj = 
                          new Generics1<String>("GeeksForGeeks"); 
        System.out.println(sObj.getObject()); 

	System.out.println("Max memory" +r.maxMemory()/mb " in bytes " +r.maxMemory());
        System.out.println("Intial memory" +r.totalMemory()/mb " in bytes " +r.totalMemory());
        System.out.println("Free memory" +r.freeMemory()/mb);  
	//System.out.println(sObj.getObject());
    } 
}
