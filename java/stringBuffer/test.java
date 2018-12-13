class test{
	public static void main(String[] args)
        {
		StringBuffer sb = new StringBuffer();
                System.out.println(sb.capacity());// 16
                sb.append("test").append("capacity").append("joins");// 16
                System.out.println(sb);

		
		StringBuffer sb1 = new StringBuffer("java");
                System.out.println(sb1.capacity());//21
                System.out.println(sb1.charAt(3));//a
                System.out.println(sb1.reverse());//avaj
                sb1.trimToSize();//
                System.out.println(sb1.capacity());//4

		StringBuffer sb2 = new StringBuffer("abcdefghijklmnop");
                System.out.println(sb2.capacity());//31
                StringBuffer sb21 = sb2.append("q");
                System.out.println(sb21.capacity());//31
                
		StringBuffer sb3 = new StringBuffer();
                sb3.ensureCapacity(1000);
                System.out.println(sb3.capacity());

        }
}



