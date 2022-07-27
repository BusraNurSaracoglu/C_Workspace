#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	
	
	char karakter = 'a' ;
	char karakterDizisi[] = "1234.1234"; //string ifade
	
	printf("%c karakterinin hafizada kapladigi alan %d \n", karakter, sizeof(karakter));
	printf("%c karakterinin decimal karsiligi: %d, hexadecimal karsiligi : %X \n",karakter,karakter,karakter);
	
	// 0 d�nerse yanl��, 0 d���nda d�nerse do�ru
	// isalpha alfabetik karakter mi de�il mi oldu�unu sorguluyor.
	printf("karakter icin isalpha sonucu %d \n" , isalpha(karakter) ); // alfabetik mi de�il mi bunu kontrol ediyor
	printf("sayi icin isalpha sonucu %d  \n ", isalpha('5')); 
	printf("karakter icin isdigit sonucu %d \n" , isdigit(karakter) ); // n�merik mi de�il mi?
	printf("sayi icin isdigit sonucu %d \n" , isdigit('5') );
	printf("karakter icin isalnum sonucu %d \n" , isalnum(karakter) ); // ya alfabetik ya da n�merik olmas� gerekiyor de�ilse yanl�� d�nd�r�yor
	printf("sayi icin isalnum sonucu %d \n" , isalnum('5') );
	printf("+ icin isalnum sonucu %d \n" , isalnum('+') );
	printf("H icin islower sonucu %d \n" , islower('H') ); // harf k���k m�
	printf("h icin islower sonucu %d \n" , islower('h') );
	printf("h icin isupper sonucu %d \n" , isupper('h') ); // harf b�y�k m�
	printf("H icin isupper sonucu %d \n" , isupper('H') );
	printf("h icin toupper sonucu %c \n" , toupper('h') ); // k���k ->> b�y�k
	printf("H icin tolower sonucu %c \n" , tolower('H') ); // b�y�k -->> k���k
	
	
	int tamSayi;
	float ondalikliSayi;
	
	tamSayi = atoi(karakterDizisi); // string ifadeyi tam sayiya �evirir
	ondalikliSayi = atof(karakterDizisi);
	
	printf("tam sayi hali %d \n", tamSayi);
	printf("ondalik sayi hali %f",ondalikliSayi );
	
	
	
	




	
	
	
	
	return 0;
	
	
}
