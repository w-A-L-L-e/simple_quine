all: compare

quine: quine.c

quine2.c: quine
	./quine > quine2.c

quine2: quine2.c

compare: quine.c quine2
	diff quine.c quine2.c

# TODO: we can also use a trick to make quine shorter is put include in gcc command:
# gcc quine.c -include stdio.h -include time.h -o quine

clean:
	@rm -vf quine quine2 quine2.c
