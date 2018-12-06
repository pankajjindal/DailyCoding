class StudentEquals{
      String name;
      int rollno;

      StudentEquals( String name , int rollno )
      {
          this.name = name;
          this.rollno = rollno;
      }

      public boolean equals(Object obj){
        try{
        String name1 = this.name;
        int rollno1 = this.rollno;

        StudentEquals s1 = (StudentEquals) obj;

        if( name1.equals(s1.name) && rollno1 == s1.rollno)
          return true;
        else
          return false;
      }
      catch (NullPointerException e){ return false;}
      catch (ClassCastException e){ return false;}


      }
     
      public static void main(String[] args)
      {

        StudentEquals s1 = new StudentEquals(" ram", 101);
        StudentEquals s2 = new StudentEquals ("shyam", 102);
        StudentEquals s3 = new StudentEquals ("ram", 101);
        StudentEquals s4 = s2;
        System.out.println(s1);
        System.out.println(s1.toString());
        System.out.println(s2);
        System.out.println(s1.equals(s2));
    // even though these objects are same but since only reference is compared this is false. This method needs to be overridden.
        System.out.println(s1.equals(s3));// even though these objects are same but since only reference is compared this is false. This method needs to be overridden.
        System.out.println(s2.equals(s4));
        System.out.println(s2.equals("shyam"));
        System.out.println(s2.equals(null));

   
      } 
}