#include <stdio.h>

// Sayýyý bit düzeyine çevirme

int main(){
	
	
	int sayi, geciciSayi , i=0;
	char bitArray[32];
	
	printf("bit duzeyine cevrilecek sayiyi giriniz : ");
	scanf("%d",&sayi);
	geciciSayi = sayi;
	
	
	while(geciciSayi !=0){
		if(geciciSayi%2 == 0){
			bitArray[i] = '0';
		}
		else{
			bitArray[i] = '1';
		}
		i++;
		geciciSayi = geciciSayi / 2 ;
		
	}
	
	printf(" %d sayisinin bit karsiligi", sayi);
	
	while(i>=0){

		printf("%c", bitArray[i]);
		i--;
	}
	
	
	
	
	
	
	
	
	
	/*
	32%2 = 0
	16%2 = 0
	8%2  = 0
	4%2  = 0
	2%2  = 0
	1%2  = 1
	0
	tersten yazdýrýyoruz.
	*/
	
	return 0 ;
	
	
}
