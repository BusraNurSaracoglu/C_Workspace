#include <stdio.h>

// Kullan�c�dan a,b,c de�erleri alarak delta hesaplamas� ve deltan�n 0'dan b�y�k m� yoksa k����k m� oldu�unu sorgulayan program� yaz�n�z.


int main(int argc, char **argv){
	
	int a,b,c;
	int delta;
	
	printf("lutfen sirayla a,b,c degerlerini giriniz:");
	scanf("%d %d %d",&a,&b,&c); 
	
	delta = b*b - 4*a*c;
	printf("delta  : %d \n",delta);
	
	printf("delta sifirdan buyukse 1 kucukse 0 yazdir : %d", (delta >= 0));
	
	
	
	return 0;
	
}
