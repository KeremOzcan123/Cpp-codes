#include <stdio.h>

char ajanda[7][2][20]={

{"pazartesi","piknik"},
{"sali","ders_calis"},
{"carsamba","robot tasarla"},
{"persembe","ev temizligi"},
{"cuma","cum cikisi kod yaz"},
{"cumartesi","mangal"},
{"pazar","zabaaa gadar ders"}
};

int i,dizi_boyutu;

int main(){
dizi_boyutu=sizeof(ajanda) / sizeof(ajanda[0]);

printf("%d",dizi_boyutu);

for( i=0 ; i<dizi_boyutu ;i++){
	printf("\n %d.gun:%s:%s", i+1 , ajanda [i][0] , ajanda[i][1]);
	
	
}
}


