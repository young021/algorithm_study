//2016�� ��¥�� ����
#include<stdio.h>

int main(void){
    int month,day;
    while(1){
    printf("���� �Է��ϼ��� : ");
    scanf("%d",&month);
    if(0>month||month>12){
        printf("�ٽ� �Է����ּ���\n");
    }
    else break;
    }
    switch (month){
    case 1:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 2:
          while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>29)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
        day = day+31 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 3:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
        day = day+60 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 4:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>30)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+91 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 5:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
        day = day+121 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 6:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>30)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+152 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 7:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+182 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 8:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+213 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 9:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>30)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+244 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 10:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+274 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 11:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>30)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+305 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
    case 12:
        while(1){
            printf("��¥�� �Է��ϼ��� : ");
            scanf("%d",&day);
            if(0>day||day>31)
            {
                printf("�߸��Է� �ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
            }
            else break;
        }
          day = day+335 ;
        day = day%7 ;
        if(day==1) printf("FRI");
        if(day==2) printf("SAT");
        if(day==3) printf("SUN");        if(day==4) printf("MON");        if(day==5) printf("TUE");        if(day==6) printf("WED");        if(day==0) printf("THU");
        break;
}
return 0;
}
