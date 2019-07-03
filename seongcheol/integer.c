#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b){
	long long answer = 0;
	int c = 0;
	if (a>b){
		for(c=b;c<=a;c++)
		{
			answer += c ;
		}
	}
	else if(a<b){
		for(c=a;c<=b;c++)
		{
			answer += c;
		}
	}
	else {
		answer = a;
	}

	return answer;
}
int main()
{
	int a,b;
	long long c;
	scanf("%d %d", &a,&b);

	c = solution(a,b);

	printf("%u" , c);


	return 0;
}
