#include <stdio.h>		// standart io(GiriþÇýkýþ) iþlemleri
#include <unistd.h>    // sleep fonksiyonu bu kütüphane içerisinde tanýmlanmýþtýr
#include <Windows.h>

int i;
 
int main(){ 
 printf("                        __\n");
    printf("                    .-\"      \"-.\n");
    printf("                   /            \\\n");
    printf("       _          |              |          _\n");
    printf("      ( \\         |,  .-.  .-.  ,|         / )\n");
    printf("       > \"=._     | )(_/  \\_)( |     _.=\" <\n");
    printf("      (/\"=.\"=._ |/     /\\     \\| .=\".=\"\\_)\n");
    printf("             \"=._ (_     ^^     )\".=\"\n");
    printf("                 \"=\\_|IIIIII|_/=\"\n");
    printf("                .=\"| \\IIIIII/ |\"=.\n");
    printf("      _     .=\".=\"\\          /\"=.\"=.     _\n");
    printf("     ( \\_.=\".=\"     `--------`     \"=.\"=._/ )\n");
    printf("      > .=\"                            \"=. <\n");
    printf("     (/    Kerem virusu            \\)\n\n");


 	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    printf("\t !!!! UYARI: SiSTEMiNiZE KEREM VIRUSU BULASTI !!!! \n");	
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);



	
 
	 SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );
	 printf( "C:\\ HARRDISK FORMATLAMA BASLIYOR" );
	 
	 
	 for( i=1; i<50; i++ ){
	 	printf(".");usleep(40000);
	 }
	 printf("100%% TUM DOSYALAR TARANDI!!");
	 
	 printf( "\nC:\\ HARRDISK FORMATLANIYOR" );
	 
	 for( i=1; i<50; i++ ){
	 	printf(".");usleep(30000);
	 }
	 printf("100%% C:\\  HARDDISK TAMAMEN FORMATLANDI!");
	 
 
	sleep(1); 	
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
	printf("\n!!!!HERSEY SiLiNDi GECMiS OLSUN!!!!");	
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY );
}
