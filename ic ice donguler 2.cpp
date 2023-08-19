#include <stdio.h>
char * kelime[7]={"m","e","r","h","a","b","a"};
int i,j;


int main(){
	for(i=0;i<7;i++){
		for(j=0;j<i+1;j++){
			
			
			printf("%s", kelime[i]);
        }
        printf("\n");
   }
}
