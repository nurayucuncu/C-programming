#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi1, sayi2, toplam;

    printf("ilk sayi giriniz: ");
    scanf("%d", &sayi1);
    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    int toplamSayi = sayi1 + sayi2;

    if (toplamSayi % 3 == 0) {
        if (sayi1 > sayi2) {
            toplam = sayi1 - sayi2;
        } else {
            toplam = sayi2 - sayi1;
        }
    } else if (toplamSayi % 3 == 1) {
        if (sayi1 > sayi2) {
            toplam = sayi2 - sayi1;
        } else {
            toplam = sayi1 - sayi2;
        }
    } else if (toplamSayi % 3 == 2) {
        if (sayi1 > sayi2) {
            toplam = sayi1 * 2;
        } else {
            toplam = sayi2 * 2;
        }
    }

    printf("Toplam: %d\n", toplam);
    
    return 0;
}

