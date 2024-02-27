#include <iostream>
#include <vector>

std::vector<int> generateArray(int x) {
    std::vector<int> arr(20);
    arr[0] = x;

    for (int i = 2; i <= 20; i++) {
        arr[i-1] = arr[i-2]*(i-10) + x;
    }
    return arr;
}

int main() {
    int x, p, q, r;
    std::cin >> x;
    std::cin >> p >> q >> r;

    std::vector<int> arr = generateArray(x);
    int sum = arr[p-1] + arr[q-1] + arr[r-1];
    std::cout << sum << std::endl;

    return 0;
}