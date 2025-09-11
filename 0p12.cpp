#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("Enter an integer: ");
    if (a<0) {
        a=-a;
    }
    printf("Absolute value: %d\n", a);
    return 0;
}
