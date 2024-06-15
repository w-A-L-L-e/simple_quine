#include <stdio.h>
#include <string.h>

int main(){
  const char* src = "?"; /* replace ? with a string that is this entire source code
                            and in this src blob string replace \n with \\n, " with \" and \ with \\ */

  size_t src_n = strlen(src);
  for (size_t i=0; i < src_n; ++i) {
    if (src[i] == 63) { // 63 is ascii for ? so when we encounter it we make a copy and escape the special chars above
      for(size_t j=0; j < src_n; ++j) {
        switch(src[j]) {
          case '\n': printf("\\n"); break;
          case '"': printf("\\\""); break;
          case '\\': printf("\\\\"); break;
          default: printf("%c", src[j]);
        }
      }
    }
    else { 
      printf("%c", src[i]);
    }
  }
}
