import java.lang.*;
//import java.lang.reflection;

class Student{
      String name;
      int rollno;
      
      Student( String name , int rollno)
      {
          this.name = name;
          this.rollno = rollno;
      }
       
}

/* Even though we are creating multiple objects of student but only one class object is created */.


class test4{
      public static void main (String[] args)
      {
	Student s1 = new Student("kali",101);
       	Student s2 = new Student("kali",101);
        Student s3 = new Student("kali",102);
        Class c1 = s1.getClass();//class Student
        Class c2 = s2.getClass();//class Student
        Class c3 = s2.getClass();//class Student
	System.out.println(c1.hashCode());//2094777811
	System.out.println(c2.hashCode());//2094777811
	System.out.println(c3.hashCode());//2094777811
        System.out.println(c2);//class Student
        System.out.println(c3);//class Student
        System.out.println(c1==c2);//TRUE
 	System.out.println(c1==c3);//TRUE
 
      }
       
} 
