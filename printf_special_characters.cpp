#include <stdio.h>


int main(int argc, char **argv){
	
	
	
	int sayiInt = 1234;
	
	printf("sayiInt 10luk taban: %d \n", sayiInt);
	printf("sayiInt 16lik taban: %X \n", sayiInt); //4D2
	printf("sayiInt 8lik taban: %o \n", sayiInt); //2322

	/*
	hexadecimal:
	1 2 3 4 5 6 7 8 9 A B C D E F
	octal:
	1 2 3 4 5 6 7
	
	*/
	
	
	
	
	float sayiFloat = 1.123456;
	printf("SayiFloat normal hali: %f\n", sayiFloat);
	printf("SayiFloat bilimsel hali: %e\n", sayiFloat);
	printf("SayiFloat bilimsel hali: %E\n", sayiFloat);
	printf("SayiFloat bilimsel hali: %g\n", sayiFloat);
	printf("SayiFloat bilimsel hali: %G\n", sayiFloat);
	// %g de hangisi k�saysa o yaz�l�r. yani float hali mi bilimsel hali mi
	
	
	
	printf("Merhaba Dunya \n"); // alt sat�ra ge�mek i�in
	printf("Merhaba \t Dunya\n"); // tab kadar bo�luk b�rak�r
	printf("Merhaba   \bDunya\n"); // backspace bir karakter geri siler
	printf("'Merhaba Dunya'\n"); // �ift t�rnak izin verilmiyor. Tek t�rnak kullan�labilir
	printf("Merhaba \\ Dunya \n"); // slash i�areti kullanmak i�in 2 tane koymak gerekiyor
	printf("\"Merhaba Dunya\"\n") ; // �ift t�rmak kullan�m�na izin veriliyor
	printf("Merhaba 5%%7 Dunya\n"); // mod ifadesini kullanabilmek i�in
	
	

	return 0;
}
