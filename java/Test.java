import java.lang.reflect.*;

class student {
     public String getName(){
         return null;
    }
    public int getRollNo(){
         return 10;
    }
}

class Test{
     public static void main(String[] args) throws Exception
     {
     int count=0;
     Class c = Class.forName("student");
     Method[] m = c.getDeclaredMethods();
     for(Method m1:m){
         count++;
         System.out.println(m1.getName());
     }
     System.out.println("the count is :" +count);
     
     count =0;
     Class c1 = Class.forName("java.lang.Object");
     Method[] m2 = c1.getDeclaredMethods();
     for(Method m1:m2){
         count++;
         System.out.println(m1.getName());
     }
     System.out.println("the count is :" +count);
     
     count =0;
     Class c3 = Class.forName("java.lang.String");
     Method[] m4 = c3.getDeclaredMethods();
     for(Method m1:m4){
         count++;
         System.out.println(m1.getName());
     }
     System.out.println("the count is :" +count);
}
}

//Output
/*
getName
getRollNo
the count is :2
finalize
wait
wait
wait
equals
toString
hashCode
getClass
clone
notify
notifyAll
registerNatives
the count is :12
coder
equals
length
toString
hashCode
getChars
compareTo
compareTo
indexOf
indexOf
indexOf
indexOf
indexOf
checkIndex
valueOf
valueOf
valueOf
valueOf
valueOf
valueOf
valueOf
valueOf
valueOf
rangeCheck
isEmpty
charAt
codePointAt
codePointBefore
codePointCount
offsetByCodePoints
getBytes
getBytes
getBytes
getBytes
getBytes
contentEquals
contentEquals
nonSyncContentEquals
equalsIgnoreCase
compareToIgnoreCase
regionMatches
regionMatches
startsWith
startsWith
endsWith
lastIndexOf
lastIndexOf
lastIndexOf
lastIndexOf
lastIndexOf
substring
substring
subSequence
concat
replace
replace
matches
contains
replaceFirst
replaceAll
split
split
join
join
toLowerCase
toLowerCase
toUpperCase
toUpperCase
trim
chars
codePoints
toCharArray
format
format
copyValueOf
copyValueOf
intern
isLatin1
checkOffset
checkBoundsOffCount
checkBoundsBeginEnd
access$100
access$200
the count is :83
*/
