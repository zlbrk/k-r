all: hello fahr i2o nc nl stat

hello:
	gcc hello.c -o hello

fahr:
	gcc fahr.c -o fahr

i2o:
	gcc i2o.c -o i2o

nc:
	gcc nc.c -o nc

nl:
	gcc nl.c -o nl

wc:
	gcc wc.c -o wc

stat:
	gcc stat.c -o stat


clean:
	rm *.exe