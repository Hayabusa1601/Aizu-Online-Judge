#include<iostream>
using namespace std;

int main() {
    int w, m, s;
    cin >> w >> m >> s;
    int e = w - s;

    int ans = 0;
    if(m >= s) {
        ans++;
    }
    if(m >= e) {
        ans += 2;
    }    

    cout << ans << endl;
}