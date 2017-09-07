
PROJ_DIR=/home/km/calculator
STATIC_FLAG=-static
all:main

main:main.o
	gcc $(STATIC_FLAG) main.o -I $(PROJ_DIR)/inc/ -L $(PROJ_DIR)/lib/ -laddsub -o main

main.o:main.c
	gcc -c main.c -I $(PROJ_DIR)/inc

clean:
	rm *.o main

