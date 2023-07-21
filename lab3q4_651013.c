#include <stdio.h>
int main() {
	int a,count = 0,sum = 0;
	float average ;
	printf("enter a number : ");
        while(1){
	   scanf("%d" ,&a);
	   if(a<=0){
	      break;
	   }
	   sum+=a;
	   count++;
	}
	if(count==0){
		printf("no data to calculate");
	}else{
		average = sum / count;
		printf("summation = %d\n",sum);
		printf("average = %lf\n",average);
	}
	return 0;
}
