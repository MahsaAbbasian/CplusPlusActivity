//Iterating over collections (e.g., vectors)
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    for (int num : numbers) {
        std::cout << num << "n ";
    }

    return 0;
}
