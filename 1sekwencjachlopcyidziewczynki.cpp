#include <iostream>
#include <vector>

int main() {
    int onesandzeros, zeros;
    std::cin >> onesandzeros >> zeros;

    std::vector<int> sequence(onesandzeros);
    
    for (int i = 0; i < onesandzeros; ++i) {
        std::cin >> sequence[i];
    }

    int minRemovals = 0;
    int consecutiveZeros = 0;

    for (int i = onesandzeros - 1; i >= 0; --i) {
        if (sequence[i] == 0) {
            consecutiveZeros++;
            if (consecutiveZeros == zeros) {
                break;
            }
        } else {
            minRemovals++;
        }
    }

    if (consecutiveZeros == zeros) {
        std::cout << minRemovals << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
