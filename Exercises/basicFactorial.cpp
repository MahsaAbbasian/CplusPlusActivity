#include <iostream>
using namespace std;

int facttorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * facttorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << facttorial(n) << endl;
    return 0;
}
