#include<iostream>

using namespace std;

int main() {
int a[3];

cin >> a[0] >> a[1] >> a[2];

for(int i = 0; i < 3; i++) {
    for(int j = i; j < 3; j++) {
        if(a[i] > a[j]) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;

        }
    }
}

cout << a[0] << " " << a[1] << " " << a[2] << endl;
return 0;
}