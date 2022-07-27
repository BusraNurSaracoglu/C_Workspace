#include <stdio.h>

// Kullanıcıdan vize, final notlarının yüzdeleriyle birlikte ortalamalarını hesaplayınız. Dersin çan degerine göre dersi geciyorsa 1, kalıyorsa 0 yazdırınız.


int main(int argc, char **argv){
	
	
	
	int vize, final, ortalama, can;
	
	printf("lutfen vize notunuzu giriniz:");
	scanf("%d", &vize);
	
	printf("lutfen final notunuzu giriniz:");
	scanf("%d", &final);
	
	
	printf("Vize ve final notlariniz su sekildedir \n vize: %d , final: %d\n",vize,final);
	
	printf("Dersinizin can degerini giriniz:");
	scanf("%d",&can);
	printf("Dersinizin can degeri su sekildedir \n can: %\nn", can);
	
	ortalama = vize*6/10 + final*4/10;
	
	printf("Ortalamaniz su sekildedir : %d \n", ortalama);
	printf("Dersten kaldiysaniz 0, dersi basariyla verdiyseniz 1 ciktisi alacaksiniz \n %d", ortalama>=can);
	
	
	
	return 0;
}
