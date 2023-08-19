//diziler_array.c
#include <stdio.h>

char*gunler[]= {"pazartesi", "sali" , "carsamba", "persembe", "cuma" , "cumartesi", "pazar"};
              //0.index ,  1.index , 2.index , 3.index , 4.index,5.index,6.index
    //dizi index numaralarý int(tamsayý) tipindedir . bu bu yüzden for gibi döngülerde kullanýlabilir.
// diziler her zaman 0.index'ten baþlar
int main(){

int i;

for(i=0; i<7 ; i++  ){  /// Bu da olur : for(i=0; i<=6; i++ ){
       printf("%d.gun:" "%s\n" ,i+1 , gunler[i]);
	   


}
}
