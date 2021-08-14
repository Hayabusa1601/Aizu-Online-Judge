#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int d = a / b;
    int r = a % b;
    double f = (double)a / b;

    cout << d << " " << r << " ";
    printf("%.5lf\n", f);


    return 0;
}