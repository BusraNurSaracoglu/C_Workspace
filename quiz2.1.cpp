#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>



//  char ile ilgili bazý fonksiyonlarýn kullanýlabildiði seçenekli bir switch case yapýsý oluþturun.

int main(int argc, char **argv){
	
	
	
	char harf;
	int sec;
	
	printf("Lutfen bir harf giriniz.");
	scanf("%c", &harf);
	fflush(stdin);

	
	printf("Yapmak istediginiz islemi seciniz: \n");

	printf("\t Harfi kucultmek icin 1'i\n");
	printf("\t Harfi buyutmek icin 2'yi\n");
	printf("\t Harfin numeric olup olmadigini sorgulamak icin 3'u tuslayiniz\n");
	
	scanf("%d", &sec);
	fflush(stdin);
	
	
	switch (sec) {
	
		case 1:
			printf("%c harfi %c olmustur\n", harf, tolower(harf));
			break;
		case 2:
			printf("%c harfi %c olmustur\n", harf, toupper(harf));
			break;
		case 3:
			printf("%c harfi numeric ise 1 degilse 0 : \n %d", harf, isdigit(harf));
			break;
		default:
			printf("yanlis bir tuslama yaptiniz \n");
		
		
		
		
	}
	
	
	
	
	
	
	return 0;
}
