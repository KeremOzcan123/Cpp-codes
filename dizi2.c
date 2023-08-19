

	

 //dizi2.c
#include <stdio.h>
int i;

char* fener[]={  
		"tadic", "dzeko", "irfan" , "altay" , "fred" , "szymanski" ,
		"livakovic" , "ismail" , "ferdi"  , "mert hakan", "mert" 
	};

char* galata[]={
		"muslera"  ,"icardi" , "mertens" ,"kerem" , "gomis" , 
		"victor" , "boey"  , "mehmet" , "abdulkerim","yagiz" ,"uygar"
};

void galata_tek(){
	//  galatasaray takýmýnýn 1-3-5-7-9   numaralý oyuncularýndan 5 kiþilik takým yap
		for(  i=0; i<=10 ; i++ ) if( i%2 != 0 ) printf("%d-%s \t", i , galata[i]  );  	 
}

void galata_cift(){
	for(i=0;i<10;i++)  if( i%2 == 0 ) printf("%d -%s \t", i , galata[i]); 
}

void fener_tek(){
	//  fener takýmýnýn 1-3-5-7-9   numaralý oyuncularýndan 5 kiþilik takým yap
		for(  i=0; i<=10 ; i++ ) if( i%2 != 0 ) printf("%d-%s \t", i , fener[i]  );  	 
}

void fener_cift(){
	for(i=0;i<10;i++)  if( i%2 == 0 ) printf("%d -%s \t", i , fener[i]); 
}

int main(){
	printf("GALTASARAY CIFTLER TAKIMI\n"); galata_cift();
	printf("\nGALTASARAY TEKLER TAKIMI\n"); galata_tek();
	
	printf("\nFENERBAHCE TEKLER TAKIMI\n"); fener_tek();
	printf("\nFENERBAHCE CIFTLER TAKIMI\n"); fener_cift();
}
