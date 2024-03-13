ABC.exe:main.o sum2.o palindrome.o big3.o fact.o reverse.o
	gcc -o ABC.exe main.o sum2.o palindrome.o big3.o fact.o reverse.o

main.o:main.c
	gcc -c main.c
sum2.o:sum2.c
	gcc -c sum2.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
reverse.o:reverse.c
	gcc -c reverse.c

