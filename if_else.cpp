#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
	
	/*
	
	int sayi,sayi2;
	
	srand(time(NULL)); // her seferinde farkl� de�erler �retiyor.
	sayi=rand()%100 ; // 0 ile 100 aras�nda random say�lar �retiyor.
	// E�er 5 ile 100 aras�nda �retmek isteseydik %100 + 5 yazmam�z gerekiyordu
	// Ayn� �ekilde 2 ile 200 aras�nda �retmek isteseydik %200 + 2 yazmam�z gerekiyordu.
	
	sayi2=rand()%100;
	printf("Birinci sayi: %d, Ikinci sayi:%d \n", sayi,sayi2);
	
	if(sayi<sayi2){
		printf("%d degeri %d degerinden kucuktur", sayi,sayi2);
	}
	else if(sayi == sayi2){
		printf("%d degeri %d degerine esittir." , sayi,sayi2);
	}
	else{
		printf("%d degeri %d degerinden buyuktur", sayi,sayi2);
	}
	
	*/
	
	/*
	int sayi;
	srand(time(NULL));
	sayi=rand()%1000;
	printf("Olusturulan sayi: %d", sayi);
	
	if(sayi%2 == 0){
		printf("%d Sayisi cifttir",sayi);
	}
	else{
		printf("%d Sayisi tektir", sayi);
	}
	
	
	*/
	
	
	
	
	
	float sayi,sayi2;
	float sonuc;
	char ch;
	
	
	printf("lutfen sirasiyla 2 adet sayi giriniz \n");
	scanf("%d %d", &sayi,&sayi2);
	
	printf("Lutfen yapmak istediginiz islemi seciniz(+,-,*,/):\n");
	fflush(stdin); // buffer� temizlemek i�in
	
	scanf("%c",&ch);
	
	if(ch == '+'){
		sonuc = sayi+sayi2;
		printf("Toplama sonucu: %.2f", sonuc);
	}
	else if( ch == '-'){
		sonuc = sayi - sayi2;
		printf("Cikarma sonucu: %.2f", sonuc);
	}
	else if( ch == '*'){
		sonuc = sayi * sayi2;
		printf("Carpma sonucu: %.2f", sonuc);
	}
	else if( ch == '/'){
		sonuc = sayi / sayi2;
		printf("Bolme sonucu: %.2f", sonuc);
	}
	else{
		printf("Hatali bir tuslama yaptiniz! Dikkat edin!");
	}
	
	
	
	
	
	return 0;
}
