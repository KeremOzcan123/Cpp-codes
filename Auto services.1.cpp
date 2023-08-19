#include <stdio.h>
#include <string.h>

float masraf = 0.0;
char* tip;
float bakiye = 0.0;
char* odeme_turu;

float tipten_masraf_hesapla(char tip[]) {
    if (strcmp(tip, "otomobil") == 0) {masraf = 250.0;return masraf;} 
	else if (strcmp(tip, "kamyon") == 0) {masraf = 400.0;return masraf;}  
	else if (strcmp(tip, "motosiklet") == 0) {masraf = 100.0;return masraf;} 
	else {return 0.0;}
}

void tipe_gore_bakim_yap(char arac_tipi[]) {
    if (strcmp(tip, "otomobil") == 0) {
     printf("\n Otomobilinizin benzin filtresi, motor yagi, yag filtresi, cam suyu, antifrizi degisti\n ");
    
	} else if (strcmp(tip, "kamyon") == 0) {
        	printf("\n Kamyonunuzun Makaslari, mazot filtresi, hidrolik yagi, kompresor contasi, mazot filtresi degisti\n ");
    } 
	else if (strcmp(tip, "motosiklet") == 0) {
        printf("\n Motosikletinizin fren balatalari, benzin filtresi, zincir yagi ve zinciri degisti, jant akoru yapildi\n ");
    }
}

void bakiye_yukle(float miktar) {
    bakiye += miktar;
    printf("%.2f liraniz muhasebede odendi , iyi gunler.\n", miktar);
}

void masraftan_dus(float miktar) {
    masraf -= miktar;
    printf("Masraftan %.2f TL dusuldu\n", miktar);
}

int main() {
    /// araç tipini taný ve tipine göre bakým seç
    tip = "motosiklet";
    masraf = tipten_masraf_hesapla(tip);
    printf("%s Aracinin Masrafi: %.2f\n", tip, masraf);
    
    // aracýn tipine göre bakýmýný yap
    tipe_gore_bakim_yap(tip);
    
    // aracýn tipine göre masrafýný muhasebeden düþ
    
    // Ödeme türü sorgusu
        odeme_turu = "Nakit";
        if (strcmp(odeme_turu, "Nakit") == 0) {
        char yaninizda_para_var_mi;
        printf("Yaninizda para var mi? (V/Y): ");
        scanf(" %c", &yaninizda_para_var_mi);
        if (yaninizda_para_var_mi == 'V') {
        printf("Nakit odemeniz muhasebede yapildi.Sagolun iyi gunler. \n");
        } else if (yaninizda_para_var_mi == 'Y') {
        printf("Kredi ile odemeniz gerekecek\n");
        odeme_turu = "Kredi";
        }
    }
    
    // Kredi ile ödeme
            if (strcmp(odeme_turu, "Kredi") == 0) {
            if (masraf <= bakiye) {
            printf("Kredi karti ile odeme yapilacak\n");
            } else {
            printf("Bakiyeniz yetersiz. Bakiye giriniz: ");
            scanf("%f", &bakiye);
            bakiye_yukle(bakiye);
        }
    }
    
    return 0;
}

