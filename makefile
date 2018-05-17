safeinputc: safeinputc.c
	gcc -g $^ -o $@ -lm -std="c99"

.PHONY: clean run

clean:
	-rm safeinputc

run:
	./safeinputc



