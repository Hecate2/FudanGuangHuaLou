#include <stdio.h>
/*
�������������µĽ�ѧ¥��ÿ�㴰��������¥����
7 5
����������λ�ڵ�¥��
4
��������������������������������
��������������������������������
��������������������������������
��������������������������������  �t?�s
��������������������������������   /
��������������������������������  /)
��������������������������������
��������������������������������
��������������������������������
��������������������������������
�ةةةةةةةةةةةةةةةة�������������������
�����⻪¥
һԾ��ǧ��
*/
int main()
{
    printf("�������������µĽ�ѧ¥��ÿ�㴰��������¥����\n");
    int totalFloors, windowsEachFloor;
    scanf("%d %d", &windowsEachFloor, &totalFloors);
    printf("����������λ�ڵ�¥��\n");
    int youAtFloor;
    scanf("%d", &youAtFloor);

    if(totalFloors >= 1){
        printf("��");
        for (int i=0; i<windowsEachFloor*2; ++i){
            printf("��");
        }
        printf("��\n");
    }
    while(totalFloors > 0){
        printf("��");
        for (int i=0; i<windowsEachFloor; ++i){
            printf("����");
        }
        printf("��");
        switch(youAtFloor - totalFloors){
        case 0:
            printf("  �t ?�s\n");
            break;
        case 1:
            printf("  /)\n");
            break;
        default:
            printf("\n");
            break;
        }

        if (totalFloors > 1){
            printf("��");
            for (int i=0; i<windowsEachFloor; ++i){
                printf("����");
            }
            printf("��");
            switch(youAtFloor - totalFloors){
            case 0:
                printf("   /\n");
                break;
            default:
                printf("\n");
                break;
            }
        }
        else{
            // do nothing
        }

        totalFloors -= 1;
    }
    for (int i=0; i<windowsEachFloor*2 + 2; ++i){
        printf("��");
    }
    for (int i=0; i<10; ++i){
        printf("��");
    }
    printf("\n");

    printf("�����⻪¥\n");
    printf("һԾ��ǧ��\n");
    return 0;
}
