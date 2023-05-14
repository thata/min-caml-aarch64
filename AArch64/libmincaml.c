#include <stdio.h>

// NOTE: コンパイル後のシンボルのプリフィックスに _ がつくのを避ける
void min_caml_print_int(long n) asm("min_caml_print_int");
void min_caml_print_newline() asm("min_caml_print_newline");
long* min_caml_create_array(long number_of_element, long init_value) asm("min_caml_create_array");
long min_caml_truncate() asm("min_caml_truncate");

void min_caml_print_int(long n) {
  printf("%ld", n);
}

void min_caml_print_newline() {
  printf("\n");
}

long* min_caml_create_array(long number_of_element, long init_value) {
  long *heap_ptr;

  // x27 に格納されたヒープのアドレスを heap_ptr へ書き出す
  asm volatile ("mov %0, x27" : "=r"(heap_ptr));

  // Array の先頭アドレスを取得
  long *array_ptr = heap_ptr;

  for (long i = 0l; i < number_of_element; i++) {
    // Array へ書き込んだ後、ヒープの先頭アドレスを8バイト進める
    *heap_ptr = init_value;
    heap_ptr += 1;
  }

  // ヒープの先頭アドレスを x27 に書き戻す
  asm volatile ("mov x27, %0" : : "r"(heap_ptr));

  return array_ptr;
}

// truncate
long min_caml_truncate(double d) {
  return (long)d;
}
