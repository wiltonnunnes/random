C := gcc
OS = Linux

random.a: random.c
	$(C) -c random.c
	ar -crs $@ random.o

clean: random.o random.a
ifeq ($(OS), Windows_NT)
	del random.o random.a
else
	rm random.o
	rm random.a
endif