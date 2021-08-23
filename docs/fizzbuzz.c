#include <stdio.h>

// Write `fizzbuzz` that does everything up to 500.
// - If `x` is divisible by `3`: `print fizz`
// - If `x` is divisible by `5`: `print buzz`
// - If `x` is divisible by `15`: `print fizzbuzz`
// - Else print the number `x`


void comparison(int num);

int main(){
    for(int x = 0; x <= 500; x++){
        comparison(x);
    }
    return 0;
}

void comparison(int num){
    if (num % 15 == 0) printf("fizzbuzz\n");
    else if (num % 5 == 0) printf("buzz\n");
    else if (num % 3 == 0) printf("fizz\n");
    else printf("%d\n", num);
}
