#include <iostream>
#include <vector>

double computeSum(const std::vector<double>& numbers) {
    double sum = 0.0;
    for (double num : numbers)
        sum += num;
    return sum;
}

double computeProduct(const std::vector<double>& numbers) {
    double product = 1.0;
    for (double num : numbers)
        product *= num;
    return product;
}

int main() {
    std::vector<double> numbers = {1.5, 3.0, 4.5, 9.0, 10.5};
    double sum = computeSum(numbers);
    double product = computeProduct(numbers);

    std::cout << "The sum of the numbers is: " << sum << '\n';
    std::cout << "The product of the numbers is: " << product << '\n';

    return 0;
}
