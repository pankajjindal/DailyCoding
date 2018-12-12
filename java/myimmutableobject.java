class myimmutableobject{
      public static void main(String[] args)
      {
          final StringBuffer sb = new StringBuffer("durga");
          
          sb.append("software");
          System.out.println(sb);//right even though final variable is declared.

          sb = new StringBuffer("test"); //compile time error

          
      }
}
