#include<stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    int sum = 0;
    int now = 0;

    for(i = 0; i < n; i++) {
        int b = a[i] - now;
        if(b < 0) {
            b *= -1;
        }


        if(b > 5) {
            sum += (10 - b);
        } else {
            sum += b;
        }

        now = a[i];
    } 
    printf("%d\n", sum);
    return 0;
}