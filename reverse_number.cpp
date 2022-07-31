#include <stdio.h>
// Sayýyý ters çevirme


int main(){
	
	
	int sayi, geciciSayi, sayininTersi = 0, kalan;
	
	printf("Tersi alinacak sayiyi giriniz: ");
	scanf("%d",&sayi);
	geciciSayi = sayi;
	
	
	while(geciciSayi !=0){
		kalan = geciciSayi%10;
		sayininTersi = sayininTersi*10 + kalan;
		geciciSayi/=10;
		
		
	}
	
	printf("Sayinin tersi %d", sayininTersi);
	
	
	/*
	
	geciciSayi = 1473
	kalan = 3
	sayininTersi = 0+3 = 3
	
	geciciSayi = 147
	kalan = 7
	sayininTersi = 3*10 + 7 = 37
	
	geciciSayi = 14
	kalan = 4
	sayininTersi = 37 *10+ 4 = 374
	
	geciciSayi = 1
	kalan = 1
	sayininTersi = 374*10 + 1 = 3741
	
	*/
	
	
	
	return 0;
}
