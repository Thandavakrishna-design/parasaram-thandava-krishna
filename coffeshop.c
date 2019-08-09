#include <stdio.h>

int main() {
    
	
  float amount,percent,value;
  int sum;
  scanf("%f %f,&amount,&percent");
  sum=0;
  while(amount!=0)
  {
  sum=sum+amount;
  value=(percent/100)*amount;
  amount=amount-value;
  printf("The amount necessary to order for free is: ",amount");
  }
  return 0;
}
