JAVA_HOME := $(shell /usr/libexec/java_home -v 1.8)

all: libnative.dylib

header:
	javah -cp ../out/production/jni1 com.example.Bar

libnative.dylib: com_example_Bar.c
	gcc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin com_example_Bar.c -o ../out/$@

run:
	java -Djava.library.path=`pwd`../out/ -cp ../out/production/jni1 com.example.Main

main:
	native-image --server-shutdown-all
	native-image -Djava.library.path=`pwd`/../out/ -cp ../out/production/jni1 com.example.Main ../out/main

main-delayed:
	native-image --server-shutdown-all
	native-image --delay-class-initialization-to-runtime=com.example.Bar -cp ../out/production/jni1 com.example.Main ../out/main-delayed
