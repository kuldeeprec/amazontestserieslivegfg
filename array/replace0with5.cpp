#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
int convertFive(int num) {
    
    if (num == 0)
        return 0;
 
    int digit = num % 10;
    if (digit == 0)
        digit = 5;
 
    return convertFive(num / 10) * 10 + digit;

}