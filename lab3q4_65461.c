#include <stdio.h>
int main() {
	float n;
	float sum = 0;
	float count = 0;
	while(1) {
		printf("enter a number : ");
		scanf("%f",&n);
		if(n<1) break;
		sum += n;
		count ++;
	}
	printf("summation = %f\n",sum);
	printf("mean = %f\n",sum/count);
	return 0;
}
