#include<stdio.h>

int main(){
	
	int cizgi=0;
	int satir=0;
	int sayi=0;
	int s=40;
 printf("\n Kac cizgi kullanilsin? : ");
 scanf("%i",&cizgi);
 
 if(cizgi > 20 )
 {
  printf("\n Cizgi sayisi cok fazla .");
  
  return 0;
 }
 
 for(satir =1;satir<=cizgi;satir++)
 {
  printf("\n");
for(sayi= 1; sayi <= satir;sayi++)
   printf("* ");
  for(sayi= satir-1; sayi >= 1;sayi--)
  printf("* ");
 s = s - 2;
 }
 
}
 
void bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac <= t;sayac++)
putchar(' ');
}

