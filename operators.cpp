#include <stdio.h>



int main(int argc,char **argv){
	
	// AR�TMET�K OPERAT�RLER
	
	int sayi = 2, sayi2 = 55; // atama operat�r�
	printf("%d %d %d \n", sayi, sayi2, sayi+ sayi2) ; // toplama
	printf("%d %d %d \n", sayi, sayi2, sayi- sayi2) ;// ��karma
	printf("%d %d %d \n", sayi, sayi2, sayi* sayi2) ;// �arpma
	printf("%d %d %d \n", sayi, sayi2, sayi/ sayi2) ;// b�lme
	printf("%d %d %d \n", sayi, sayi2, sayi% sayi2) ;// mod alma

	// atama operat�r� ile kullan�m
	int sonuc = 1;
	sonuc*=4; 
	sonuc*=3;
	sonuc*=2;
	printf("sonuc %d \n", sonuc); // sonuc = 24
	
	
	int i=5;
	printf("i degeri : %d\n", ++i); // �nce art�rma sonra yazd�rma
	printf("i degeri : %d \n", i++);  // �nce yazd�rma sonra art�rma

	
	// B�T D�ZEY�NDE ��LEMLER
	
	int bitDuzeyi = 64;
	printf("Sola kaydirilmis sonuc : %d\n", bitDuzeyi<<1); // 2 ile �arpma anlam�na geliyor
	printf("Saga kaydirilmis sonuc : %d \n", bitDuzeyi>>1); // 2'ye b�lme anlam�na geliyor
	
	
	//	64 = 01000 0000 = 2^6*1
	
	
	
	
	
	return 0;
}
