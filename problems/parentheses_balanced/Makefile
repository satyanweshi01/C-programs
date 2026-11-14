CFLAGS = -Wno-implicit-function-declaration #for more common parameter during compilation 

all: final

final: main.o is_parentheses_balanced.o
	@echo "Linking and producing the final program"
	gcc $(CFLAGS) main.o is_parentheses_balanced.o -o ../bin/is_parentheses_balanced
	rm main.o is_parentheses_balanced.o

main.o: main.c 
	@echo "Compiling the main.c file"
	gcc $(CFLAGS) -c main.c

is_parentheses_balanced.o: is_parentheses_balanced.c 
	@echo "Compiling the is_parentheses_balanced.c file"
	gcc $(CFLAGS) -c is_parentheses_balanced.c

clean: 
	@echo "Removing everything except the source files"
	rm main.o is_parentheses_balanced.o

