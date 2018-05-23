all: hello fahr i2o

hello:
	gcc hello.c -o hello

fahr:
	gcc fahr.c -o fahr

i2o:
	gcc i2o.c -o i2o

clean:
	rm *.exe