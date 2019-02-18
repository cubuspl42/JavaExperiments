package com.example;

public class Bar {
    private native static void nativeMethod();

    static {
        System.loadLibrary("native");
        nativeMethod();
    }

    public static void foo() {
        System.out.println("foo");
    }
}
