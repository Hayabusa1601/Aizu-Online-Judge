#include<stdio.h>

int main(void){
    int h, mi, flag = 0;
    int n;
    scanf("%d %d %d", &h, &mi, &n);

    int ab[n][2];
    int i,j;
    for(i = 0; i < n; i++) {
        scanf("%d %d", &ab[i][0], &ab[i][1]);
    }

    int m;
    scanf("%d", &m);
    int cd[m][2];
    for(i = 0; i < m; i++) {
        scanf("%d %d", &cd[i][0], &cd[i][1]);
    }

    ab[0][1] += 11;
    if(ab[0][1] >= 60) {
        ab[0][0] += 1;
        ab[0][1] -= 60;
    }
    printf("シオカワ駅到着: %d %d\n", ab[0][0], ab[0][1]);

    for(i = 0; i < m; i++) {
        printf("cd[%d][0] cd[%d][1]: %d %d\n", i, i, cd[i][0], cd[i][1]);

        if(ab[0][0] < cd[i][0]) {
            cd[i][1] += 10;
           if(cd[i][1] >= 60) {
            cd[i][0] += 1;
            cd[i][1] -= 60;
           }
            printf("操作後cdA: %d %d\n", cd[i][0], cd[i][1]);
            flag = 1;
            break;

        }else if(ab[0][0] == cd[i][0]) {
            if(ab[0][1] <= cd[i][1]) {
            cd[i][1] += 10;
           if(cd[i][1] >= 60) {
            cd[i][0] += 1;
            cd[i][1] -= 60;
           }
            printf("操作後cdB: %d %d\n", cd[i][0], cd[i][1]);
            flag = 1;
            break;
        }
   
    }}
     if(flag == 0) {
            cd[i][0] = 13;
            cd[i][1] = 59;
        }

    printf("操作後cd: %d %d\n", cd[i][0], cd[i][1]);
    
    if(cd[i][0] > h) {
        printf("%d\n", 0);

    }else if(cd[i][0] < h) {
        printf("%d\n", 1);

    } else if(cd[i][0] == h){
        if(cd[i][1] <= mi) {
        printf("%d\n", 1);
        }  else {
        printf("%d\n", 0);
        }
    }
    return 0;
    }