#include<iostream>
using namespace std;

int main() {
    int La, Lo;
    cin >> La >> Lo;

    La /= 3600;
    Lo /= 3600;

    cout << (int)La << " " << (int)Lo << endl;
    return 0;
}