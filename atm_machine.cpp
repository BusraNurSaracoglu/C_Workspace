#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv){
	
	
	float kullaniciBakiyesi = 1250.0 , kullaniciMiktar, gunlukLimit = 500, kullaniciGirisi;
	int islem;
	
	printf("\t Merhaba, Hosgeldiniz \n");
	printf("\t Para yatirmak icin 1, para cekmek icin 2, hesap bakiyesini goruntulemek icin 3'e basiniz.\n");
	scanf("%d",&islem);
	
	if(islem==1){
		
		printf("yatirmak istediginiz miktari giriniz: \n");
		scanf("%f", &kullaniciGirisi);
		
		if(kullaniciGirisi == 0){
			printf("\t Lutfen belirtilen surede bir para girisi yapiniz.\n");
			sleep(3); //  saniye boyunca program duracak
			scanf("%f", &kullaniciGirisi);
		}
		printf("\t Isleminiz basariyla gerceklestirilmistir. Tesekkur ederiz \n");
	
		kullaniciBakiyesi = kullaniciBakiyesi + kullaniciGirisi;
		printf("\tYeni bakiyeniz : %f", kullaniciBakiyesi);
	
	
	}
	else if(islem == 2){
		
		printf("\tCekmek istediginiz miktari giriniz:\n");
		scanf("%f",&kullaniciGirisi);
		
		
		if(kullaniciGirisi > kullaniciBakiyesi){
			printf("Hesabinizda yeteri kadar para bulunmamaktadir. Islem gerceklestirilemiyor\n");
		}
		else if(kullaniciGirisi>gunlukLimit)
		{
			printf("Gunluk limiti astiniz. Islem gerceklestirilemiyor.\n");
		}
		else{
			kullaniciBakiyesi = kullaniciBakiyesi - kullaniciGirisi;
			printf("\t Isleminiz basariyla gerceklestirildi. Tesekkur ederiz\n");
			printf("\t Yeni bakiyeniz : %.2f \n", kullaniciBakiyesi);
		}
	}
	else if(islem == 3){
		
		printf("\t Bakiyeniz : %.2f \n", kullaniciBakiyesi);
		
	}
	else{
		printf("\t Yanlis bir tuslama yaptiniz.\n");
	}
	
	
	
	
	return 0;
}
