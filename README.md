# simple_quine

Simple quine program in C.

Inspired by the quine clock from tsoding: https://www.twitch.tv/videos/2170250815
Quine: https://en.wikipedia.org/wiki/Quine_(computing)

Just run make. It compiles quine.c and then uses it to generate its own source in quine2.c
When you run it output is identical to its own source. Tsoding is also a clock. But I just wanted
the quine part in a non obfuscated form.

```
$ make
cc  -I/usr/local/opt/openssl/include -L/usr/local/opt/openssl/lib  quine.c   -o quine
./quine > quine2.c
cc  -I/usr/local/opt/openssl/include -L/usr/local/opt/openssl/lib  quine2.c   -o quine2
diff quine.c quine2.c
```
