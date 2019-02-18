#include "com_example_Bar.h"

#include <stdio.h>

JNIEXPORT void JNICALL Java_com_example_Bar_nativeMethod(JNIEnv *env, jclass cls) {
    printf("nativeMethod\n");

    jmethodID bar = (*env)->GetStaticMethodID(env, cls, "bar", "()V");
    if ((*env)->ExceptionCheck(env)) return;

    (*env)->CallStaticVoidMethod(env, cls, bar);

    jmethodID foo = (*env)->GetStaticMethodID(env, cls, "foo", "()V");
    if ((*env)->ExceptionCheck(env)) return;

    (*env)->CallStaticVoidMethod(env, cls, foo);
}
