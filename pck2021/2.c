#include<stdio.h>

int main(void) {
    int a[4];
    int i,j;
    for(i = 0; i < 4; i++) scanf("%d", &a[i]);

    int ans = 1;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++){
            if(i == j) continue;
            if(a[i] == a[j]){
                break;
            }
        }
        if(j == 4) ans = 0;
    }
    
    printf("%d\n", ans);
    
}