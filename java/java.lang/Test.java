class Test2{
    int i;
    Test2(int i)
    {
        this.i=i;
    }

    public String toString(){
        return i + " ";
    }

    public int hashCode(){
        return i ;
    }

    public static void main(String[] args)
    {
        Test2 t1 = new Test2(10);
        Test2 t2 = new Test2(100);

        System.out.println(t1);
        System.out.println(t2);

    }
}

//why is this code giving run time error ?
/*
Error: A JNI error has occurred, please check your installation and try again
Exception in thread "main" java.lang.UnsupportedClassVersionError: Test has been compiled by a more recent version of the Java Runtime (class file version 55.0), this version of the Java Runtime only recognizes class file versions up to 53.0
	at java.lang.ClassLoader.defineClass1(java.base@9-internal/Native Method)
	at java.lang.ClassLoader.defineClass(java.base@9-internal/ClassLoader.java:939)
	at java.security.SecureClassLoader.defineClass(java.base@9-internal/SecureClassLoader.java:152)
	at jdk.internal.loader.BuiltinClassLoader.defineClass(java.base@9-internal/BuiltinClassLoader.java:553)
	at jdk.internal.loader.BuiltinClassLoader.access$200(java.base@9-internal/BuiltinClassLoader.java:88)
	at jdk.internal.loader.BuiltinClassLoader$3.run(java.base@9-internal/BuiltinClassLoader.java:466)
	at jdk.internal.loader.BuiltinClassLoader$3.run(java.base@9-internal/BuiltinClassLoader.java:460)
	at java.security.AccessController.doPrivileged(java.base@9-internal/Native Method)
	at jdk.internal.loader.BuiltinClassLoader.findClassOnClassPathOrNull(java.base@9-internal/BuiltinClassLoader.java:459)
	at jdk.internal.loader.BuiltinClassLoader.loadClassOrNull(java.base@9-internal/BuiltinClassLoader.java:406)
	at jdk.internal.loader.BuiltinClassLoader.loadClass(java.base@9-internal/BuiltinClassLoader.java:364)
	at jdk.internal.loader.ClassLoaders$AppClassLoader.loadClass(java.base@9-internal/ClassLoaders.java:184)
	at java.lang.ClassLoader.loadClass(java.base@9-internal/ClassLoader.java:419)
	at sun.launcher.LauncherHelper.loadMainClass(java.base@9-internal/LauncherHelper.java:585)
	at sun.launcher.LauncherHelper.checkAndLoadMain(java.base@9-internal/LauncherHelper.java:497)

*/
