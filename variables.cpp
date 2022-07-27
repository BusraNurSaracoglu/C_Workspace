#include <stdio.h>


int main (int argc, char **argv){
	
	
	//degiskeninTipi degiskeninAdi = degiskeninDegeri;
	
	int sayi, sayi2 = 9; // tam sayý ifadeler için
	float sayi3 = 5.7; // ondalýklý sayýlar için
	double sayi4 = 2.8; // ondalýklý sayilar için
	char karakter = 'x' ; // karakterler için
	
	
	sayi = 5;
	
	printf("%d %i %.2f %.1lf %c\n", sayi,sayi2,sayi3,sayi4,karakter);
	
	// adreslerini yazdýrmak için
	// tam adresleri için # ifadesi kullanýlýyor.
	
	printf("%#X %#X %#X %#X %#X \n", &sayi, &sayi2, &sayi3, &sayi4, &karakter);
	
	// ÝSÝMLENDÝRME KURALLARI
	/*
	int sayi2 ; // tekrar tanýmlama yapýlamýyor
	int for; // keyword kullanýlamaz.
	int sayý; // türkçe karakter kullanýlamaz
	int sayi 5; // boþluk karakteri kullanýlamaz.
	int 2sayi; // isimlendirmede sayý ile baþlanamaz.
	
	*/
	
	
	
	
	return 0;
}
