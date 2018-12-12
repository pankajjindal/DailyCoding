
final class finalimmutable{
    private int i;
    
    finalimmutable(int i){
     this.i = i;
    }

    public finalimmutable modify(int i){
     if( this.i==i)
       return this;
     else
      return (new finalimmutable(i));
    }

    public static void main(String[] args)
    {
        finalimmutable f1 = new finalimmutable(10);
        finalimmutable f2 = f1.modify(100);
        finalimmutable f3 = f1.modify(10);
        System.out.println ( f1==f2); // false because f2 is a new object
        System.out.println ( f1==f3); // true because f3 is same as f1
    }

}
