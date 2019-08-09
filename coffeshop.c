#include <stdio.h>

int main(void) {
    
	// your code goes here
	float amount,percent,value;
  int sum;
  scanf("%f %f,&amount,&percent");
  sum=0;
  while(amount!=0)
  {
  sum=sum+amount;
  value=(percent/100)*amount;
  amount=amount-value;
  printf("the discount rate is: ",amount");
  return 0;
}
