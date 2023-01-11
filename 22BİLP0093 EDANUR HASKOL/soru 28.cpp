#include<stdio.h>
int main(){
int checkPrimeNumber(int n);	
	int sayi1,sayi2,x,y;
	printf("Iki tam sayi girin :");
	scanf("%d%d",&sayi1,&sayi2);
	printf("%d ve %d arasindaki asal sayilar :",sayi1,sayi2);
	
	for(x=sayi1+1; x<sayi2; ++x ){
	}
	
	y=checkPrimeNumber(x);
	
	if(y==1)
	
	printf("%d",x);
	
	
return 0;	

}
int checkPrimeNumber(int n)
{
    int j, y = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            y=0;
            break;
        }
    }
    return y;
}
