#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n < 0) {
        cout << "Error: negative exponent not supported.\n";
        return -1;
    }
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    cin >> x >> n;
    int result = power(x, n);
    if (result != -1)
        cout << "power is equal " << result << endl;

    return 0;
}
