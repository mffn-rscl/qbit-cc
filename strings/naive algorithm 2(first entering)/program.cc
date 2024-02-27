#include <iostream>
#include <string>

int main() {
    std::string P, T;
    std::cin >> P >> T;

    bool yes = false;
    int index = 0;

    for (int i = 0; i <= T.length() - P.length(); ++i) {
        yes = true;
        for (int j = P.length() - 1; j >= 0; --j) {
            std::cout << P[j];
            if (P[j] != T[i + j]) {
                yes = false;
                break;
            }
        }

        if (yes) {
            index = i + 1;
            break;
        }
    }

    std::cout << std::endl;
    if (yes) {
        std::cout << index << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}