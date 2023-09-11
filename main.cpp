#include <iostream>
#include <vector>

double computeSum(const std::vector<double>& numbers) {
    double sum = 0.0;
    for (double num : numbers)
        sum += num;
    return sum;
}

int main() {
    std::vector<double> numbers = {1.5, 3.0, 4.5, 9.0, 10.5};
    double result = computeSum(numbers);

    std::cout << "The sum of the numbers is: " << result << '\n';
    return 0;
}
