//약수합
#include<stdio.h>

int main(void){

    int input;
    int sum =0;

    while(1){
        printf("정수를 입력해주세요 : ");
        scanf("%d",&input);
        if (input<0||input>3000)
        {
            printf("잘못입력 하셨습니다. 다시 입력해주세요\n");

        }
        else break;
    }

   for(int a=1;a<=input;a++)
    {
        if(input%a==0)
        {
            sum += a;
        }
    }

    printf("합은 : %d", sum);

    return 0;
}
