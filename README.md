# simple_quine

Simple quine program in C.

Quine: https://en.wikipedia.org/wiki/Quine_(computing)

Javascript quine clock:  https://aem1k.com/qlock/

Inspired by the quine clock from tsoding: https://www.twitch.tv/videos/2170250815

Just run make. It compiles quine.c and then uses it to generate its own source in quine2.c
When you run it output is identical to its own source. The tsoding version is also a clock. 
But I just wanted the quine part in a non obfuscated form.

```
$ make
cc  -I/usr/local/opt/openssl/include -L/usr/local/opt/openssl/lib  quine.c   -o quine
./quine > quine2.c
cc  -I/usr/local/opt/openssl/include -L/usr/local/opt/openssl/lib  quine2.c   -o quine2
diff quine.c quine2.c
```
