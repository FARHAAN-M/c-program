#include <stdio.h>

int main() {
    int a, cube;
    printf("Enter an integer: ");
    scanf("%d", &a);
    cube = a* a * a;
    printf("Cube of %d is %d\n", a, cube);
    return 0;
}
