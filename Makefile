# Это Makefile, он позволяет управлять проектом с помощью make 

# Для того, чтобы скомпилировать все исходные файлы
# необходимо вызвать команду make all.

all: hello fahr i2o nc nl stat power char extv sl
	@printf ''
	@printf '\nAll binaries were sucessfully built!\n'

# Для компиляции какой-то конкретной программы 
# необходимо передать имя программы системе make

hello:
	@gcc hello.c -o hello
	@printf 'hello binary was built\n'

fahr:
	@gcc fahr.c -o fahr
	@printf 'fahr binary was built\n'

i2o:
	@gcc i2o.c -o i2o
	@printf 'io binary was built\n'

nc:
	@gcc nc.c -o nc
	@printf 'nc binary was built\n'

nl:
	@gcc nl.c -o nl
	@printf 'nl binary was built\n'

wc:
	@gcc wc.c -o wc
	@printf 'wc binary was built\n'

stat:
	@gcc stat.c -o stat
	@printf 'stat binary was built\n'

power:
	@gcc power.c -o power
	@printf 'power binary was built\n'

char:
	@gcc char.c -o char
	@printf 'char binary was built\n'

extv:
	@gcc extv.c -o extv
	@printf 'extv binary was built\n'

sl:
	@gcc sl.c -o sl 
	@printf 'sl binary was built\n'


# Для очистки рабочего каталога (удаление бинарных файлов) выполните make clean

clean:
	@rm -f *.exe
	@printf '\nAll binaries were deleted!\n'