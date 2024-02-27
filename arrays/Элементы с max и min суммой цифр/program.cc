#include <iostream>
#include <sstream>
#include <vector>

int digit_sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int length;
    std::cin >> length;
    std::cin.ignore(); // consume newline

    std::vector<int> a;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    int num;
    while (iss >> num) {
        a.push_back(num);
    }

    int max = -10001, max_index = 0, min = 10001, min_index = 0;
    for (int i = 0; i < length; i++) {
        int sum = digit_sum(std::abs(a[i]));
        if (sum > max) {
            max = sum;
            max_index = i;
        }
        if (sum < min) {
            min = sum;
            min_index = i;
        }
        if (sum == min) {
            if (a[i] < a[min_index]) {
                min = sum;
                min_index = i;
            }
        }
        if (sum == max) {
            if (a[i] > a[max_index]) {
                max = sum;
                max_index = i;
            }
        }
    }
    std::cout << a[min_index] << std::endl;
    std::cout << a[max_index] << std::endl;

    return 0;
}
