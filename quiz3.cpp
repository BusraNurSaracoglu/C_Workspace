#include <stdio.h>
#include <math.h>

// Kullanýcýdan veri alarak  dairenin çevresini ve yarý çapýný hesaplayan programý hazýrlayýn.

int main(){
	

	float pi, r;
	
	
	
	printf("Lutfen hesaplamak istediginz dairenin yaricapini giriniz:");
	scanf("%f",&r);
	printf("Lutfen hesaplamak istediginiz pi sayisinin degerini giriniz:");
	scanf("%f",&pi);
	
	float daire_cevresi, daire_alani, daire_alani2;
	
	daire_cevresi = 2*pi*r;
	daire_alani   = pi*r*r;
	daire_alani2  = pi*pow(r,2);
	
	printf("Dairenin cevresi : %f \n Dairenin alani : %f \n Dairenin kutuphane ile hesaplanmis alani : %f", daire_cevresi, daire_alani, daire_alani2);
	
	
	
	
	
	return 0;
	
}
