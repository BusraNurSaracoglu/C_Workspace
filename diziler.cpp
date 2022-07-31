#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Diziler ayný tipteki verileri birden fazla, sýralý ve bütün bir halde tutuyýr
// dizinin baþlangýç adresi bulunuyor. 1. eleman 0. index anlamýna geliyor.



int main(){
	
	
	int sayiDizisi[10] ;
	srand(time(NULL));
	
	/*
	sayiDizisi[0] = 1;
	sayiDizisi[1] = 2;
	sayiDizisi[2] = 3;
	sayiDizisi[3] = 4;
	sayiDizisi[4] = 5;

	
	//4byte*10 = 40 byte
	
	printf("dizinin kapladigi alan %d byte\n", sizeof(sayiDizisi));
	
	printf("Dizinin 1. elemaninin adresi  %#X ve degeri %d\n", &sayiDizisi[0], sayiDizisi[0]);
	printf("Dizinin 2. elemaninin adresi: %#X ve degeri %d\n", &sayiDizisi[1], sayiDizisi[1]);
	printf("Dizinin 3. elemaninin adresi: %#X ve degeri %d\n", &sayiDizisi[2], sayiDizisi[2]);
	printf("Dizinin 4. elemaninin adresi: %#X ve degeri %d\n", &sayiDizisi[3], sayiDizisi[3]);
	printf("Dizinin 5. elemaninin adresi: %#X ve degeri %d\n", &sayiDizisi[4], sayiDizisi[4]);
	printf("Dizinin 6. elemaninin adresi: %#X ve degeri %d\n", &sayiDizisi[5], sayiDizisi[5]);
	
	
	*/
	/*
	int i;
	
	for(i=0;i<10;i++){
		
		sayiDizisi[i] = pow(i,2);
		printf("%d. eleman %d\n",i+1, sayiDizisi[i]);
		
	}
	*/
	
	
	int toplam=0, ortalama, i, enBuyuk, enKucuk;
	int kullaniciGirisi;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&kullaniciGirisi);	
	
	for(i=0; i<10 ; i++){
		sayiDizisi[i] = rand()%100 ;
		printf("%d ",sayiDizisi[i]);
	}
	
	enBuyuk = sayiDizisi[0];
	enKucuk = sayiDizisi[0];
	
	for(i=0;i<10;i++){
		
		if(sayiDizisi[i]>enBuyuk){
			enBuyuk = sayiDizisi[i];
		}
		if(sayiDizisi[i]<enKucuk){
			enKucuk = sayiDizisi[i];
		}
		
		
		
		toplam+=sayiDizisi[i];
		printf("%d eleman eklendi yeni toplam %d\n", sayiDizisi[i], toplam);
	}
	ortalama = toplam/10;
	printf("Dizinin ortalamasi %d\n",ortalama);
	printf("En kucuk eleman %d \n",enKucuk);
	printf("En buyuk eleman %d \n",enBuyuk);

	for(i=0;i<10;i++){
		if(sayiDizisi[i]>=ortalama){
			printf("%d sayisi dizinin ortalamasindan buyuk esittir\n", sayiDizisi [i]);
		}
		else{
			printf("%d sayisi dizinin ortalamasindan kucuktur\n", sayiDizisi [i]);
		}
		
		if(sayiDizisi[i]%kullaniciGirisi == 0){
			printf("%d sayisi kullanicinin girdigi sayilarin bir katidir\n\n ", sayiDizisi[i]);
		}
		
	}
	
	
	
	
	
	
	return 0;
}
