#include <stdio.h>



int main(){
	
	
	char ch;
	int boslukSayisi = 0;
	
	
	printf("Lutfen bosluk sayisi belirlenecek cumleyi giriniz:");
	
	do{
		ch=getchar();//karakter alma
		if(ch==' '){
			boslukSayisi++;
		}
		
	}while(ch!='\n');
	
	
	printf("Girdiginiz cumlede %d adet bosluk var", boslukSayisi);
	
	
	return 0;
}
