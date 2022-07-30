#include <stdio.h>

// EBOB EKOK HESAPLAMA


int main(){
	
	
	int sayi1,sayi2,EBOB,EKOK;
	int sayac,buyukSayi,kucukSayi;
	
	printf("2 adet sayi giriniz.\n");
	scanf("%d %d",&sayi1, &sayi2);
	
	
	if(sayi1>sayi2){
		
		buyukSayi = sayi1;
		kucukSayi = sayi2;
	}
	else{
		kucukSayi = sayi1;
		buyukSayi = sayi2;
	}
	

	
		
	// EKOK problem çözümü için:
	
	sayac = buyukSayi;
	
	while(1){
		
		if(sayac % buyukSayi == 0 &&  sayac%kucukSayi  == 0){
			EBOB = sayac;
			break;		
		}
		sayac++;
	}
	
	
	// EBOB problem çözümü için
	
	sayac = kucukSayi;
	
	while(1){
		
		if(buyukSayi %  sayac == 0 && kucukSayi % sayac   == 0){
			EKOK = sayac;
			break;
	
		}
		sayac--;
	}
	
	printf("EKOK : %d\n EBOB : %d\n", EKOK, EBOB);
	
	
	
	return 0;
}
