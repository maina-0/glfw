# _*_ MakeFile _*_

CC = clang
CFLAGS = -g -Wall -v -O2
LIBS = -lGL -lglfw -lleif -lclipboard -lm -lxcb

main: main.o
	$(CC) main.o -o main $(LIBS)

main.o: main.c 
	$(CC) $(CFLAGS) -c main.c -o main.o 

clean:
	rm -rf main main.o
