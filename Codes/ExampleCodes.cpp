#include <stdio.h>

int main() {
    int r;
    float pi = 3.14159, alan;
    printf("Dairenin yarýçapýný giriniz:\n");
    scanf("%d", &r);
    alan = r * r * pi;
    printf("Dairenin alaný: %f", alan);
    return 0;
}

