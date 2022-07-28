#include <stdio.h>


int main(int argc, char **argv){
	

	int sayi = 5; // caseleri tetikleyecek deðer
	
	switch(sayi){
		
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
		default: // hiçbir case çalýþmazsa bu default degeri çalýþýr.
			printf("Yanlis bir deger girdiniz \n");
	
	}
	

	int sayi,sayi2;
	char islem;
	float sonuc=0;
	printf("Lutfen gireceginiz ifadeyi sayi/islem/sayi seklinde giriniz:");
	fflush(stdin); // buffer temizleniyor.
	scanf("%d%c%d",&sayi, &islem, &sayi2);
	
	switch(islem){
		
		case '+':
			sonuc = sayi + sayi2;
			break;
		case '-':
			sonuc = sayi - sayi2;
			break;
		case '*':
			sonuc = sayi * sayi2;
			break;
		case '/':
			sonuc = sayi / sayi2;
			break;
		case '%':
			sonuc = sayi % sayi2;
			break;
		default:
			printf("Hatali bir islem girdiniz.");
}
	printf("Sonucunuz: %f", sonuc);
			

	
	int haftaninGunu;
	printf("Lutfen 1-7 arasinda bir gun degeri giriniz.");
	scanf("%d",  &haftaninGunu);
	
	switch(haftaninGunu){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Haftaici \n");
			break;
			
		case 6:
		case 7:
			printf("Haftasonu \n");
			break;
			
		default:
			printf("Yanlis bir deger girdiniz.");
			
	}
	
	
	
	
	
	
	
	
	return 0 ;
}
