#include <stdio.h>



int main(int argc,char **argv){
	
	// ARÝTMETÝK OPERATÖRLER
	
	int sayi = 2, sayi2 = 55; // atama operatörü
	printf("%d %d %d \n", sayi, sayi2, sayi+ sayi2) ; // toplama
	printf("%d %d %d \n", sayi, sayi2, sayi- sayi2) ;// çýkarma
	printf("%d %d %d \n", sayi, sayi2, sayi* sayi2) ;// çarpma
	printf("%d %d %d \n", sayi, sayi2, sayi/ sayi2) ;// bölme
	printf("%d %d %d \n", sayi, sayi2, sayi% sayi2) ;// mod alma

	// atama operatörü ile kullaným
	int sonuc = 1;
	sonuc*=4; 
	sonuc*=3;
	sonuc*=2;
	printf("sonuc %d \n", sonuc); // sonuc = 24
	
	
	int i=5;
	printf("i degeri : %d\n", ++i); // önce artýrma sonra yazdýrma
	printf("i degeri : %d \n", i++);  // önce yazdýrma sonra artýrma

	
	// BÝT DÜZEYÝNDE ÝÞLEMLER
	
	int bitDuzeyi = 64;
	printf("Sola kaydirilmis sonuc : %d\n", bitDuzeyi<<1); // 2 ile çarpma anlamýna geliyor
	printf("Saga kaydirilmis sonuc : %d \n", bitDuzeyi>>1); // 2'ye bölme anlamýna geliyor
	
	
	//	64 = 01000 0000 = 2^6*1
	
	
	
	
	
	return 0;
}
