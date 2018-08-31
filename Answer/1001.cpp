#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    int sum = 0;
    cin >> a >> b;
    sum = a + b;
    int flag = 1;
    if(sum < 0) {
        flag = 0;
    }
    if(!sum) {
        cout << "0";
        return 0;
    }
    sum = abs(sum);
    char str[100];
    int t = 0;
    while(sum) {
        str[t++] = sum % 10 + '0';
        sum /= 10;
    }
    if(!flag) {
        cout << "-";
    }
    for(int i = t - 1; i >= 0; i--) {
        cout << str[i];
        if(i % 3 == 0 && i) {
            cout << ",";
        }
    }
    return 0;
}
