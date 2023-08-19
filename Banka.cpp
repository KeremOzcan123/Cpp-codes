#include <stdio.h>

int tutar;

 void banknot_hesapla(int para){
 
 
 int banknotlar[6] = {200, 100, 50, 20, 10, 5 };
    int banknot_sayisi[6] = {0};

    
	
	for (int i = 0; i <= 5 ; i++) {
        banknot_sayisi[i] = para / banknotlar[i];
        para = para%banknotlar[i];

 

 if (banknot_sayisi[i] > 0) {
      printf("%d TL banknotlar: %d\n", banknotlar[i], banknot_sayisi[i]);
        }
 }
 
  if (para > 0) {
            printf("Uzgunum ama %d TL tutarinda banknot yok ve bozuk para da veremiyoruz kusura kalmayin.Iyi gunler.\n", para );
    }
    
}

int main() {
	int para;
	printf("banknot degeri girin:");
	scanf("%d",&para);
	 
    banknot_hesapla(para);
    
    return 0;
}
