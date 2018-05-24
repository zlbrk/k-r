all: hello fahr i2o nc

hello:
	gcc hello.c -o hello

fahr:
	gcc fahr.c -o fahr

i2o:
	gcc i2o.c -o i2o

nc:
	gcc nc.c -o nc

clean:
	rm *.exe