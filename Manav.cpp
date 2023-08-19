#include <stdio.h>

/*
elma=30 , portakal=40 , kiraz=50 , para=100
elma+     kiraz+  portakal-
elma+     portakal+ kiraz-
kiraz+    portakal+ elma-
*/

int main() {
    int elma = 30;       // e ye bas
    int portakal = 40;   // p ye bas
    int kiraz = 50;      // k ye bas
    int para = 100;
    char siparis;
    int kalan_para = para; // Kalan para deðiþkeni

    while (kalan_para > 0) {
        printf("Siparis icin harf basiniz: (Elma:e, Portakal:p, Kiraz:k)");
        scanf(" %c", &siparis);
        printf("Siparisiniz: %c\n", siparis);

        if (siparis == 'e') {
            if (kalan_para >= elma) {
                printf("\nElma aldiniz");
                kalan_para = kalan_para - elma;
                printf("\nKalan PARA: %d\n", kalan_para);
            } else {
                printf("\nParan su an bu urune yetmiyor.\n");
                break; // Ýþlemi bitir
            }
        } else if (siparis == 'p') {
            if (kalan_para >= portakal) {
                printf("\nPortakal aldiniz");
                kalan_para = kalan_para - portakal;
                printf("\nKalan PARA: %d\n", kalan_para);
            } else {
                printf("\nParan su an bu urune yetmiyor.\n");
                break; // Ýþlemi bitir
            }
        } else if (siparis == 'k') {
            if (kalan_para >= kiraz) {
                printf("\nKiraz aldiniz");
                kalan_para = kalan_para - kiraz;
                printf("\nKalan PARA: %d\n", kalan_para);
            } else {
                printf("\nParan su an bu urune yetmiyor.\n");
                break; // Ýþlemi bitir
            }
        } else {
            printf("\nGecersiz harf girdiniz!\n");
        }
    }

    if (kalan_para <= 0) {
        printf("\nParaniz suan buradaki urunlere yetmiyor.\n");
    }

    printf("\nPARANIZ su an burdaki urunlere yetmiyor!\n");

    return 0;
}

