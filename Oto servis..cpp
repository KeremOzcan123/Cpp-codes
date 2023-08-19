//oto_servis.c
#include <stdio.h>
#include <string.h>

float masraf=0.0;
char* tip;

float tipten_masraf_hesapla(char tip[] ){
	if		( strcmp( tip , "otomobil"   )   == 0 )  { masraf=250.0; return masraf; } //  otomobil bakimi icin o ya bas
	else if ( strcmp( tip , "kamyon"     )   == 0 )  { masraf=400.0; return masraf; }// kamyon bakimi icin k ya bas
	else if ( strcmp( tip , "motosiklet" )   == 0 )  { masraf=100.0; return masraf; }//motosiklet bakimi icin m ye bas
	else return 0.0;
}
 void tipe_gore_bakim_yap( char arac_tipi[] ){
	if ( strcmp( tip , "otomobil"   )   == 0 )  { 
	   printf("\n Otomobilinizin benzin filtresi, motor yagi, yag filtresi, cam suyu , antifrizi degisti\n ");
	}
	else if ( strcmp( tip , "kamyon"     )   == 0 )  {
		printf("\n Kamyonunuzun Makaslari , mazot filtresi, hidrolik yagi, kompresor contasi , mazot filtresi degisti\n ");
	}
	else if ( strcmp( tip , "motosiklet" )   == 0 )  { 
	printf("\n Motosikletinizin fren balatalari , benzin filtresi, zincir yagi ve zinciri degisti , jant akoru yapildi\n ");
	 }

}

int main(){
	/// araç tipini taný ve tipine göre bakým seç
	tip="kamyon";
	masraf=  tipten_masraf_hesapla( tip );
	printf("%s Aracinin Masrafi: %.2f" ,tip,  masraf);
	
	// aracýn tipine göre bakýmýný yap
	tipe_gore_bakim_yap(tip);
	// aracýn tipine göre masrafýný muhasebeden düþ
	
}
