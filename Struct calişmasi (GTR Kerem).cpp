#include <stdio.h>

struct otomobil{
int motor_hacmi;
char* rengi;
float fiyat;

};

int main(){
struct otomobil GTR;
struct otomobil Ferrari;

GTR.motor_hacmi=3799;
GTR.rengi="gri";
GTR.fiyat= 6500.000;

Ferrari.motor_hacmi=3466;
Ferrari.rengi="kirmizi";
Ferrari.fiyat=4000.000;

printf("GTR GUNCEL FIYATI : %.2f" , GTR.fiyat );
printf("\n GTR motor hacmi : %d " , GTR.motor_hacmi);
printf("\n GTR rengi: %s",GTR.rengi );


printf("\n Ferrari:");
printf("\n Ferrari motor hacmi : %d " , Ferrari.motor_hacmi);
printf("\n Ferrari rengi: %s",Ferrari.rengi );

return 0;
}

