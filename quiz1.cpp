#include <stdio.h>


int main(){
	
	

	int i,j, rows ;
	
	
	printf("Satir sayisini giriniz:");
	scanf("%d",&rows);
	
	
	for(i=1;i<(rows+1);++i){
		for(j=1;j<=i;++j){
			printf("* ");
		}
		printf("\n");
	}
	
	
	return 0;
}
