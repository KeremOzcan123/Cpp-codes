#include <stdio.h>
#include <string.h>

float masraf = 0.0;
char* tip;
float bakiye = 0.0;
char* Odeme_turu;

float tipten_masraf_hesapla(char tip[]) {
    if      (strcmp(tip, "otomobil") == 0  ){masraf = 250.0;return masraf;} //  otomobil bakimi icin o ya bas
	else if (strcmp(tip, "kamyon")   == 0  ){masraf = 400.0;return masraf;} // kamyon bakimi icin k ya bas
	else if (strcmp(tip, "motosiklet") == 0){masraf = 100.0;return masraf;} //motosiklet bakimi icin m ye bas
	else return 0.0;
}
void tipe_gore_bakim_yap(char arac_tipi[]) {
    if ( strcmp( tip, "otomobil"  )   == 0 ) {
       printf("\n Otomobilinizin benzin filtresi, motor yagi, yag filtresi, cam suyu, antifrizi degisti\n ");
    
	} else if (strcmp(tip, "kamyon") == 0) {
       printf("\n Kamyonunuzun Makaslari, mazot filtresi, hidrolik yagi, kompresor contasi, mazot filtresi degisti\n ");
    
	} else if (strcmp(tip, "motosiklet") == 0) {
       printf("\n Motosikletinizin fren balatalari, benzin filtresi, zincir yagi ve zinciri degisti, jant akoru yapildi\n ");
    }
}

void bakiye_yukle(float miktar) {
    
	bakiye += miktar;
    printf("Yeni bakiye: %\n", bakiye);
}

void masraftan_dus(float miktar) {
    masraf -= miktar;
    printf("Masraftan %.2f TL dusuldu\n", miktar);
}

int main() {
    /// ara� tipini tan� ve tipine g�re bak�m se�
    tip = "motosiklet";
    masraf = tipten_masraf_hesapla(tip);
    printf("%s Aracinin Masrafi: %.2f\n", tip, masraf);
    
    // arac�n tipine g�re bak�m�n� yap
    tipe_gore_bakim_yap(tip);
    
    // arac�n tipine g�re masraf�n� muhasebeden d��
    float girilen_bakiye;
    printf("\n bakiye giriniz lutfen:");
	 scanf("%f", &girilen_bakiye);
	
	
	// Bakiye y�kleme i�lemi
  
    return 0;
}

