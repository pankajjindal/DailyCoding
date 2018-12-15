import java.lang.*;

class Loader{
	public static void main(String[] args)
	{
		System.out.println(String.class.getClassLoader());//NULL->bootstrap
		System.out.println(Test.class.getClassLoader());//application
		System.out.println(Gen.class.getClassLoader());//application
		System.out.println(StringBuffer.class.getClassLoader());//Null->bootstrap
		System.out.println(Customer.class.getClassLoader());//Null->bootstrap




	}
}