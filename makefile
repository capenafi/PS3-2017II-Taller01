all : main2
main2 : main2.o
	gcc -o main2 main2.o
main2.o : main2.c
	gcc -c main2.c
clean :
	rm main2 *.o
