//�����
#include<stdio.h>

int main(void){

    int input;
    int sum =0;

    while(1){
        printf("������ �Է����ּ��� : ");
        scanf("%d",&input);
        if (input<0||input>3000)
        {
            printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է����ּ���\n");

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

    printf("���� : %d", sum);

    return 0;
}
