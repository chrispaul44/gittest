#include <stdio.h>


void add(int* a, int* b){
    int c, d;
    c = *a - *b;
    d = *a + *b;
    printf("a-b=%d\na+b=%d\n", c, d);
}

int main(){
    int a, b;
    a = 5;
    b = 6;
    add(&a,&b);
    return 0;
}

