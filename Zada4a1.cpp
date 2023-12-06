#include <iostream>
using namespace std;
int numberOfDivisors(int n) {
    unsigned int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}
int main()
{
    unsigned int n, k, count=0;
    cin >> n >> k;
    for (int y = 1; y <= n;y++) {
        for (int x = 1; x <= y; x++) {
            if (k*numberOfDivisors(x)*numberOfDivisors(y)==x*y) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}

