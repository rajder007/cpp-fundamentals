#include <iostream>
#include <memory>
// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

std::shared_ptr<int> calculateProduct(int number_one, int number_two) {
    auto result = std::make_shared(number_one * number_two);
    return result;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
