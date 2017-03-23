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
      if(sum <= 100000) {
        sum+=(sum/100)*2;
      }
      else (sum+=(sum/100)*3;
    };
    if ((srok >= 121) && (srok < 241)) {
      if ((sum <= 100000) {
	  sum+=(sum/100)*6;
	}
	else (sum+=(sum/100)*8;
    };
    if (srok >= 241) {
      if (sum <= 100000){
        sum+=(sum/100)*12;
      }
      else (sum+=(sum/100)*15;
    };
    printf("Deposit amount at the end: \n%.0f\n ", sum);
}
