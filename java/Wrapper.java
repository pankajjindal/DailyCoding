class Wrapper {
     public static void main(String[] args)
     {
         Integer i = new Integer(10);// this is 1st constructor
         Integer is = new Integer("10"); //this is 2nd constructor of Integer class
         
         Boolean b = new Boolean(true);// this is the 1st constructor 
         Boolean b1 = new Boolean("true");//this is the 2nd contructor 
         
         Integer is1 = Integer.valueOf(25);

         System.out.println(i);
         System.out.println(is);
         System.out.println(is1);
         System.out.println(b1);
         System.out.println(b);
     }
}
