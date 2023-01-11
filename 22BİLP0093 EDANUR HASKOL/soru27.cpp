#include<stdio.h>
int main(){
	
	int sayi=0;
	int us=0;
	long int sonuc=1;
	int n=0;
	
	printf("bir sayinin kuvvetini alma\n");
	printf("bir sayi gir\n");
	scanf("%d",&sayi);
	
	printf("kacinci kuvveti alinacak \n:");
	scanf("%d",&us);
	
	for(n=1;n<=us;n++){
	sonuc=sonuc*sayi;
	}
	printf("\n %i^%i \t\t=%li\n\n",sayi,us,sonuc);
	
	printf("pow(%d,%d)\t=%li",sayi,us,int(pow(sayi,us)));
	
	return 0;
	}
