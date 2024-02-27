#include <iostream>
#include <vector>
using namespace std;

void PrintVector(const vector<long long> &a) {
    for (long long v : a) {
        cout << v << " ";
    }
    cout << endl;
}

int main() {
    long long x;
    cin >> x;
    vector<long long> a(10);
    a[0] = x;

    for (int i = 1; i < a.size(); i++) {
        a[i] = a[i - 1] * a[i - 1] % 100 - 5 * a[i - 1] + 6;
    }

    PrintVector(a);
    
    return 0;
}
