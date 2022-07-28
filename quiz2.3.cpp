#include <stdio.h>

// Fiyat hesaplama programý hazýrlayýnýz. Kullanýcýdan taksit tutari isteyin ve buna göre ücret artýþýnda bulunun. Özel kart kullanýmýnda indirim tahsis edin.


int main(int argc, char **argv){
	
	
	
	
	float fiyat;
	int   taksit,kart;
	
	printf("Fiyat belirleme makinesine hosgeldiniz.\nLutfen uzerinde islem yapacaginiz fiyat tutarini giriniz: \n");
	scanf("%f", &fiyat);
	
	
	printf("Girmis oldugunuz tutar %.2f seklindedir.\n\n", fiyat);
	
	fflush(stdin);
	
	printf("Fiyat icin taksit tutari giriniz (1-6 arasinda bir deger olmalidir)\n");
	scanf("%d", &taksit);

	printf("Girmis oldugunuz taksit tutari su sekildedir : %d \n \n", taksit);

	
	switch(taksit){
		
		case 1:
			fiyat = fiyat;
			printf("Urunun fiyati olmustur : %2.f\n", fiyat);
			break;
		case 2:
			fiyat = fiyat + fiyat*2/10;
			printf("Urunun fiyati olmustur : %2.f\n", fiyat);
			break;
		case 3:
			fiyat = fiyat + fiyat*3/10;
			printf("Urunun fiyati olmustur : %2.f\n", fiyat);
			break;
		case 4:
			fiyat = fiyat + fiyat*4/10;
			printf("Urunun fiyati olmustur : %2.f\n", fiyat);
			break;
		case 5:
			fiyat = fiyat + fiyat*5/10;
			printf("Urunun fiyati olmustur : %2.f\n", fiyat);
			break;
		case 6:
			fiyat = fiyat + fiyat*6/10;		
			printf("Urunun fiyati  %2.f olmustur. \n", fiyat);	
			break;
		default:
			printf("Yanlis bir taksit tutarý girdiniz.\n");	
			break;	
	}
	
	printf("Ozel alisveris kartiniz bulunmakta midir?\nEvet icin 1'i Hayir icin 2'yi tuslayiniz.\n\n");
	scanf("%d",&kart);
	
	fflush(stdin);
	
	if(kart == 1){
		
		fiyat = fiyat - fiyat/2;
		printf("%%50 indirim fiyata uygulanmistir.\nSon guncellenen fiyat %.2f kadardir.", fiyat);
	}
	else{
		printf("Fiyat tutarinda bir degisiklik olmamistir.\nSon guncellenen fiyat %.2f kadardir.", fiyat);
	}
	
	
	



	return 0;	
}

