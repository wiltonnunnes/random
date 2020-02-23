C := gcc

random.a: random.c
	$(C) -c random.c
	ar -crs $@ random.o

clean: random.o random.a
	del random.o random.a