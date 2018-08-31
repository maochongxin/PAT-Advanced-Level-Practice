#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    
    char num[105];
    scanf("%s",num);
    int sum = 0;
    for(int i = 0; i < strlen(num); i++) {
        sum += num[i] - '0';
    }
    if(sum == 0) {
        cout << "zero";
        return 0;
    }
    char str[10];
    int t = 0;
    while(sum) {
        str[t++] = sum % 10 + '0';
        sum /= 10;
    }
    for(int i = t - 1; i >= 0; i--) {
        if(i == t - 1) {
            switch(str[i]) {
                case '1':
                    cout << "one";
                    break;
                case '2':
                    cout << "two";
                    break;
                case '3':
                    cout << "three";
                    break;
                case '4':
                    cout << "four";
                    break;
                case '5':
                    cout << "five";
                    break;
                case '6':
                    cout << "six";
                    break;
                case '7':
                    cout << "seven";
                    break;
                case '8':
                    cout << "eight";
                    break;
                case '9':
                    cout << "nine";
                    break;
                case '0':
                    cout << "zero";
                    break;
            }
        } else {
            switch(str[i]) {
                case '1':
                    cout << " one";
                    break;
                case '2':
                    cout << " two";
                    break;
                case '3':
                    cout << " three";
                    break;
                case '4':
                    cout << " four";
                    break;
                case '5':
                    cout << " five";
                    break;
                case '6':
                    cout << " six";
                    break;
                case '7':
                    cout << " seven";
                    break;
                case '8':
                    cout << " eight";
                    break;
                case '9':
                    cout << " nine";
                    break;
                case '0':
                    cout << " zero";
                    break;
            }
        }
    }
    
    return 0;
}
