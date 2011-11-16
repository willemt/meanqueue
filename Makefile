CC     = gcc


all: tests

main.c:
	sh make-tests.sh > main.c

tests: main.c meanqueue.o test_meanqueue.c CuTest.c main.c
	$(CC) -g -o $@ $^
	./tests

meanqueue.o: meanqueue.c
	$(CC) -g -c -o $@ $^

clean:
	rm -f main.c meanqueue.o tests
