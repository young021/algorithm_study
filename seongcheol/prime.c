//1부터 입력한숫자까지 소수구해서 합

#include<stdio.h>
int Prime(int n){
    int count_f,count_t=0;

    for(int i=2;i<=n;i++)
	{
		if(i==2 || i==3)
            count_f = 1;
		else if(i%2==0 || i%3 == 0 )
			count_f = 0;
		else
            count_f = 1;

        count_t += count_f;
	}
	return count_t;
}
int main()
{
	int a,b =0;


	scanf("%d", &a);

    b = Prime(a);

    printf("%d",b);


	return 0;
}

