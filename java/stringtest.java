
class stringtest{

	public static void main (String[] args)
        {
	    String s1 = new String("durga");
            String s2 = s1.toUpperCase();
            String s3 = s1.toLowerCase();
            String s4 = s2.toLowerCase();
            System.out.println(s1==s2); //false
            System.out.println(s1==s3); //true
            System.out.println(s1==s4); //false create a new object hence false

            String s5 = "durga";
            System.out.println(s1.equals(s5));//true
            System.out.println(s5.equals(s2));//false

	}
}
