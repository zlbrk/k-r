# Это Makefile, он позволяет управлять проектом с помощью make 

# Для того, чтобы скомпилировать все исходные файлы
# необходимо вызвать команду make all.

all: hello fahr i2o nc nl stat power char extv

# Для компиляции какой-то конкретной программы 
# необходимо передать имя программы системе make

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

power:
	gcc power.c -o power

char:
	gcc char.c -o char

extv:
	gcc extv.c -o extv

# Для очистки рабочего каталога (удаление бинарных файлов) выполните make clean

clean:
	rm *.exe