#include <stdio.h>
#include <stdlib.h>
int proverka(float srok,float sum){
    if ((sum < 10000) || (srok < 0 || srok > 365)) {
    return 1;
    }
    else return 0;
}
int main() {
float srok, sum;
int check;
	do {
		printf ("Enter the deposit amount ");
    	scanf ("%f", &sum);
    	printf ("Enter the deposit term ");
    	scanf ("%f", &srok);
    	check=proverka(srok,sum);
        if (check == 1) {
            printf ("Invalid input\n");
        };
    } while (check);
    if (srok < 31) {
        sum-=sum/10;
    };
    if ((srok >= 31) && (srok < 121)) {
        sum+=sum/50;
    };
    if ((srok >= 121) && (srok < 241)) {
        sum+=(sum/100)*6;
    };
    if (srok >= 241) {
        sum+=(sum/100)*12;
    };
}
