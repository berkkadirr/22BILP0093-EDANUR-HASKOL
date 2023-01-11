#include <stdio.h>


int main () {
	
	int kenar1, kenar2, kenar3;
	printf("1. kenari girin: ");
	scanf("%d",&kenar1);
	printf("2. kenari girin: ");
	scanf("%d",&kenar2);
	printf("3. kenari girin: ");
	scanf("%d",&kenar3);
	
	if ((kenar1==kenar2) && (kenar2==kenar3))
	printf("\n esitkenar ucgen");
	
	else if ((kenar1 == kenar2) || (kenar1 == kenar3) || (kenar2 == kenar3))
	printf("\n ikizkenar ucgen");
	
    return 0;
}
