class Test{
    int i = 10 ;
    int j = 10;
    public static void main()
    {
    	Test t1 = new Test();
    	Test t2 = t1.clone()
    	t2.i = 888;
    	t2.j = 999;
    }
}