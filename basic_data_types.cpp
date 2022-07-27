#include <stdio.h>
#include <limits.h>


int main(int argc, char **argv){
	
	
	int sayi = 5;
	short int shortSayi;
	long int longSayi;
	long long int longlongSayi;
	
	float floatSayi = 1.34567891234;
	double doubleSayi = 1.234567891234444;
	
	
	

	printf("shortint kapladigi alan: %lu bit\n ", 8*sizeof(shortSayi));
	printf("longint kapladigi alan: %lu bit\n ", 8*sizeof(longSayi));
	printf("longlongint kapladigi alan: %lu bit\n ", 8*sizeof(longlongSayi));
	printf("int kapladigi alan: %lu bit\n ", 8*sizeof(sayi));
	printf("float kapladigi alan: %lu bit\n ", 8*sizeof(floatSayi));
	printf("double kapladigi alan: %lu bit\n ", 8*sizeof(doubleSayi));

	printf("float degeri :  %.12f \n", floatSayi);
	// float virgülden sonra 6 basamak için kesinlik veriyor
	// double ise 10 basamak kesinlik veriyor.
	
	printf("double degeri %.12f \n" , doubleSayi);
	
	
	int sayiDonusum = (int)floatSayi;
	printf("donusturulmul hali :  %d", sayiDonusum);
	
	float sayiDonusum2 = (float)sayi;
	printf("donusturulmul hali :  %f", sayiDonusum2);

	
	printf("shot maks aralik : %d \n", SHRT_MAX);
	printf("shot min aralik : %d \n", SHRT_MIN);

	
	
	
	return 0;
}
