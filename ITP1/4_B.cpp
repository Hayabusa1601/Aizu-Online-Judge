#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

    double r;
    cin >> r;
    double s = 3.141592653589 * r * r;
    double l = 2 * 3.141592653589 * r;

    printf("%.6lf %.6lf\n", s,l);
    return 0;

}