#include <stdio.h>
int yazili_1, yazili_2,yazili_3,yazili_4,proje_1 ;
double ortalama;

int main(){
    
    printf("1. YAZILI GIR:");
    scanf("%d", &yazili_1);
    
    printf("2. YAZILI GIR:");
    scanf("%d", &yazili_2);
    
     printf("3. YAZILI GIR:");
    scanf("%d", &yazili_3);
	
	printf("4. YAZILI GIR:");
    scanf("%d", &yazili_4);
	
	printf("1. PROJE GIR:");
    scanf("%d", &proje_1);
	
	printf("\n 1.YAZILINIZ: %d" , yazili_1);
    printf("\n 2.YAZILINIZ: %d" , yazili_2);
    printf("\n 3.YAZILINIZ: %d" , yazili_3);
    printf("\n 4.YAZILINIZ: %d" , yazili_4);
    printf("\n 1.PROJENIZ : %d" , proje_1);
	
	ortalama= (yazili_1+yazili_2+yazili_3+yazili_4+proje_1 ) /5.00;
    
    printf("\n ORTALAMANIZ: %f" , ortalama);
    
    if(ortalama < 60.00){
     printf("\n TESSEKKUR ALSAN SENIN ICIN DAHA IYI OLABILIRDI");

      
	}
	
	  }





