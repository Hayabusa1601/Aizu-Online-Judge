#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0], min = a[0];
    long long sum = 0;
    for(int i = 1; i < n; i++) {

        if(max < a[i]) {
            max = a[i];
        }

 
        if(min > a[i]) {
            min = a[i];
        }
        sum += a[i];
    }
    sum += a[0];

    cout << min << " " << max << " " << sum << endl;

    return 0;
}