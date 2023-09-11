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
    std::vector<double> numbers;
    int n;

    std::cout << "Enter the number of elements(integer): ";
    std::cin >> n;

    std::cout << "Enter " << n << " numbers(floating point):\n";
    for (int i = 0; i < n; ++i) {
        double tmp;
        std::cin >> tmp;
        numbers.push_back(tmp)l
    }

    double sum = computeSum(numbers);
    double product = computeProduct(numbers);

    std::cout << "The sum of the numbers is: " << sum << '\n';
    std::cout << "The product of the numbers is: " << product << '\n';

    return 0;
}
