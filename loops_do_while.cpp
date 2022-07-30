#include <stdio.h>



int main(){
	
/*
	while(kosul){
	
	}	
	
*/
	// WHILE DONGUSU
	
	int i=0;
	while(1){
		i++;
		if(i==10){
			break; // break görüldüðü zaman döngü sonlanýr.
		}
		
		if(i%2 ==0){
			continue; // alt satýrlar tamamen atlanýr. Döngü baþa döner.
			// o iterasyon sonlandýrýlýyor
		}
		printf("i sayisi:%d\n",i);
	}
	
	
	
	
	
	// DO-WHILE DONGUSU
	// do-while döngüsünde döngü 1 defa çalýþýyor kesinlikle !!!
	// aralarýndaki tek fark bu.
	// do kýsmýna yapýlacaklarý yazacaðýz.
/*
	{
		printf("i sayisi: %d",i);
		i++;
		do
	}while(i<0);
	
*/

	
	
	int sayi, geciciSayi,basamakSayisi;
	
	printf("lutfen bir sayi degeri giriniz:\n");
	scanf("%d",&sayi);
	
	geciciSayi = sayi;
	while(geciciSayi!=0){
		printf("%d", geciciSayi%10);
		geciciSayi/=10;
		basamakSayisi++;
	}
	printf("\n%d sayisi %d basamaklidir", sayi, basamakSayisi);
	
	
	
	

	
	return 0 ;
}
