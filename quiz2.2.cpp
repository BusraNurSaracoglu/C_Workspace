#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Kullan�c�dan rastgele �retilen bir say�n�n ka� basamakl� oldu�unu bulunuz. Max 5 basamakl� olabilir.

int main(int argc, char **argv){
	
	
	
	int sayi, sonuc;
	
	printf("Lutfen basamagini hesaplamak istediginiz sayiyi giriniz :\n ");
	scanf("%d",&sayi);

	
	sonuc = sayi / 10000;

	if( sonuc > 0 ){
		printf("Sayi 5 basamaklidir.\n");
	}
	else if((sayi / 1000 )>0){
		printf("Sayi 4 basamaklidir.\n");
	}
	else if((sayi / 100 )>0){
		printf("Sayi 3 basamaklidir.\n");
	}
	
	else if((sayi / 10 )>0){
		printf("Sayi 2 basamaklidir.\n");
	}
	
	else{
		printf("Sayi 1 basamaklidir.\n");		
	}
	
	return 0;
}
