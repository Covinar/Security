#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    unsigned n;
    cout << "Enter n: ";
    cin >> n;

    vector<unsigned> numbers(n - 1);
    for (unsigned i = 0; i < n - 1; ++i) {
        numbers[i] = i + 1;
    }

    random_shuffle(numbers.begin(), numbers.end());

    unsigned missingIndex = rand() % n;
    unsigned missingValue = numbers[missingIndex];
    numbers.erase(numbers.begin() + missingIndex);

    cout << "The array:\n";
    for (const auto& num : numbers) {
        cout << num << ' ';
    }

    cout << "\nThe missing value is " << missingValue;

    return 0;
