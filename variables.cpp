#include <stdio.h>


int main (int argc, char **argv){
	
	
	//degiskeninTipi degiskeninAdi = degiskeninDegeri;
	
	int sayi, sayi2 = 9; // tam say� ifadeler i�in
	float sayi3 = 5.7; // ondal�kl� say�lar i�in
	double sayi4 = 2.8; // ondal�kl� sayilar i�in
	char karakter = 'x' ; // karakterler i�in
	
	
	sayi = 5;
	
	printf("%d %i %.2f %.1lf %c\n", sayi,sayi2,sayi3,sayi4,karakter);
	
	// adreslerini yazd�rmak i�in
	// tam adresleri i�in # ifadesi kullan�l�yor.
	
	printf("%#X %#X %#X %#X %#X \n", &sayi, &sayi2, &sayi3, &sayi4, &karakter);
	
	// �S�MLEND�RME KURALLARI
	/*
	int sayi2 ; // tekrar tan�mlama yap�lam�yor
	int for; // keyword kullan�lamaz.
	int say�; // t�rk�e karakter kullan�lamaz
	int sayi 5; // bo�luk karakteri kullan�lamaz.
	int 2sayi; // isimlendirmede say� ile ba�lanamaz.
	
	*/
	
	
	
	
	return 0;
}
