package com.example;

public class Bar extends Foo {
    private native static void nativeMethod();

    static {
        System.loadLibrary("native");
        nativeMethod();
    }

    static void bar() {
        System.out.println("bar");
    }
}
