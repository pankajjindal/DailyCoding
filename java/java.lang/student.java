import java.lang.*;

class student {
	String name;
	int rollno;

	student (String name , int rollno)
	{
		this.name = name;
		this.rollno = rollno;
	}

	public String toString()
	{
		return "out";
	}

	public static void main (String[] args)
	{
		student s1 = new student(" ram", 101);
		student s2 = new student ("shyam", 102);
		student s3 = new student ("ram", 101);
		student s4 = s2;
		System.out.println(s1);
		System.out.println(s1.toString());
		System.out.println(s2);
		System.out.println(s1.equals(s2));
		// even though these objects are same but since only reference is compared this is false. This method needs to be overridden.
		System.out.println(s1.equals(s3));// even though these objects are same but since only reference is compared this is false. This method needs to be overridden.
		System.out.println(s2.equals(s4));

	}
}
