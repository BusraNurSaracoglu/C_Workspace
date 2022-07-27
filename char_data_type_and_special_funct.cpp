#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	
	
	char karakter = 'a' ;
	char karakterDizisi[] = "1234.1234"; //string ifade
	
	printf("%c karakterinin hafizada kapladigi alan %d \n", karakter, sizeof(karakter));
	printf("%c karakterinin decimal karsiligi: %d, hexadecimal karsiligi : %X \n",karakter,karakter,karakter);
	
	// 0 dönerse yanlýþ, 0 dýþýnda dönerse doðru
	// isalpha alfabetik karakter mi deðil mi olduðunu sorguluyor.
	printf("karakter icin isalpha sonucu %d \n" , isalpha(karakter) ); // alfabetik mi deðil mi bunu kontrol ediyor
	printf("sayi icin isalpha sonucu %d  \n ", isalpha('5')); 
	printf("karakter icin isdigit sonucu %d \n" , isdigit(karakter) ); // nümerik mi deðil mi?
	printf("sayi icin isdigit sonucu %d \n" , isdigit('5') );
	printf("karakter icin isalnum sonucu %d \n" , isalnum(karakter) ); // ya alfabetik ya da nümerik olmasý gerekiyor deðilse yanlýþ döndürüyor
	printf("sayi icin isalnum sonucu %d \n" , isalnum('5') );
	printf("+ icin isalnum sonucu %d \n" , isalnum('+') );
	printf("H icin islower sonucu %d \n" , islower('H') ); // harf küçük mü
	printf("h icin islower sonucu %d \n" , islower('h') );
	printf("h icin isupper sonucu %d \n" , isupper('h') ); // harf büyük mü
	printf("H icin isupper sonucu %d \n" , isupper('H') );
	printf("h icin toupper sonucu %c \n" , toupper('h') ); // küçük ->> büyük
	printf("H icin tolower sonucu %c \n" , tolower('H') ); // büyük -->> küçük
	
	
	int tamSayi;
	float ondalikliSayi;
	
	tamSayi = atoi(karakterDizisi); // string ifadeyi tam sayiya çevirir
	ondalikliSayi = atof(karakterDizisi);
	
	printf("tam sayi hali %d \n", tamSayi);
	printf("ondalik sayi hali %f",ondalikliSayi );
	
	
	
	




	
	
	
	
	return 0;
	
	
}
