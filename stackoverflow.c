#include <stdio.h>

void hello(void) {
    fprintf(stderr, "hello!\n");
}

void func(void) {
    void* buf[10];
    static int i;

    for (i = 0; i < 100; i++) {
        buf[i] = hello;
        //printf("buf[%d].. %p\n", i, buf[i]);
    }
}

int main(void) {
    int buf[1000];

    //printf("&func_hello.. %p\n", &hello);
    func();

    return 0;
}
