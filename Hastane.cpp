//konusan_2_func.c
#include <stdio.h>
#include <string.h>
 
void doktor( char brans[] ); 
 void hasta( char sikayet[]);
 // doktor func , hasta dan sonra yazýldý ama hasta içinden çaðýrýlsýn diye. 
 //en tepe adýndan bahsedilerek tanýtýldý 
 void hasta(char sikayet[]){
  if( strcmp( sikayet, "mide") ==0 ) doktor("Dahiliye");
else if(strcmp(sikayet, "goz")== 0 )doktor("Goz doktoru");
else if( strcmp(sikayet,"kalp")==0 ) doktor("kardiyoloji");
}

void doktor (char brans[]){
if (strcmp(brans, "Dahiliye") == 0 ) 
printf("Sana mide ilaci yazdim 1 ay boyunca aksatmadan 12sa arayla  tok karna kullanman gerekiyor.Iyi gunler.\n");
if (strcmp(brans, "Goz doktoru") ==0 ) 
printf("Gozlerin bozulmus miyop olmussun gozluk numaran 1,25'e 1,75 bunu gozlukcude yaptir ve televizyon izlerken,uzaga bakarken kullan ve yakina gozlukle bakma yoksa goz numaran buyur. Iyi gunler.\n");
if(strcmp(brans, "kardiyoloji" ) == 0) 
printf("kolestrol dusurucu ilac yazdim. duxüzenli kullan.Iyi gunle rkendine dikkatet.\n");
}

int main(){
 hasta("goz");

}
