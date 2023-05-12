#include <stdio.h>

// NOTE: コンパイル後のシンボルのプリフィックスに _ がつくのを避ける
void min_caml_print_int(long n) asm("min_caml_print_int");
void min_caml_print_newline() asm("min_caml_print_newline");

void min_caml_print_int(long n) {
  printf("%ld", n);
}

void min_caml_print_newline() {
  printf("\n");
}
