#include <stdio.h>
/*
请输入您想跳下的教学楼的每层窗户数与总楼层数
7 5
请输入您想位于的楼层
4
┌──────────────┐
│┌┐┌┐┌┐┌┐┌┐┌┐┌┐│
│└┘└┘└┘└┘└┘└┘└┘│
│┌┐┌┐┌┐┌┐┌┐┌┐┌┐│  ╰?╯
│└┘└┘└┘└┘└┘└┘└┘│   /
│┌┐┌┐┌┐┌┐┌┐┌┐┌┐│  /)
│└┘└┘└┘└┘└┘└┘└┘│
│┌┐┌┐┌┐┌┐┌┐┌┐┌┐│
│└┘└┘└┘└┘└┘└┘└┘│
│┌┐┌┐┌┐┌┐┌┐┌┐┌┐│
┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴──────────
复旦光华楼
一跃解千愁
*/
int main()
{
    printf("请输入您想跳下的教学楼的每层窗户数与总楼层数\n");
    int totalFloors, windowsEachFloor;
    scanf("%d %d", &windowsEachFloor, &totalFloors);
    printf("请输入您想位于的楼层\n");
    int youAtFloor;
    scanf("%d", &youAtFloor);

    if(totalFloors >= 1){
        printf("┌");
        for (int i=0; i<windowsEachFloor*2; ++i){
            printf("─");
        }
        printf("┐\n");
    }
    while(totalFloors > 0){
        printf("│");
        for (int i=0; i<windowsEachFloor; ++i){
            printf("┌┐");
        }
        printf("│");
        switch(youAtFloor - totalFloors){
        case 0:
            printf("  ╰ ?╯\n");
            break;
        case 1:
            printf("  /)\n");
            break;
        default:
            printf("\n");
            break;
        }

        if (totalFloors > 1){
            printf("│");
            for (int i=0; i<windowsEachFloor; ++i){
                printf("└┘");
            }
            printf("│");
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
        printf("┴");
    }
    for (int i=0; i<10; ++i){
        printf("─");
    }
    printf("\n");

    printf("复旦光华楼\n");
    printf("一跃解千愁\n");
    return 0;
}
