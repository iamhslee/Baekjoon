#include <stdio.h>

int a, b;

int main() {
    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;

        printf("%d\n", a + b);
    }

    return 0;
}