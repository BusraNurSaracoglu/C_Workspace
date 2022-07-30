#include <stdio.h>


// ASAL SAYI SORGULAMA


int main(){
	
	
	int sorgulanacakSayi, i , bolunduMu = 0; // bolunurse 1 olacak
	printf("Lutfen sorgulanacak sayiyi giriniz: \n");
	scanf("%d",&sorgulanacakSayi);
	
	for(i=2;i<sorgulanacakSayi;i++){
		
		if(sorgulanacakSayi%i == 0){
			bolunduMu = 1;
		}			
	}
	
	if(bolunduMu == 1){
		printf("%d sayisi asal sayi degildir.", sorgulanacakSayi);
	}
	else{
		printf("%d sayisi asal sayidir.", sorgulanacakSayi);
	}
		
	
	
	return 0;
}
