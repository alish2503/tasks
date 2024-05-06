#include <iostream>
#include <vector>

std::vector<int> GetPrimes(int, int);

int main() {
    int a, b;
    std::cout << "Введите границы списка для поиска простых чисел: ";
    std::cin >> a; std::cin >> b;
    std::vector<int> primes = GetPrimes(a, b);
    std::cout << "Список простых чисел: ";
    for (int i = 0; i < primes.size(); i++) std::cout << primes[i] << ' ';
    std::cout << std::endl;
}

std::vector<int> GetPrimes(int a, int b) {
    std::vector<int> primes;
    bool IsPrime = true;
    if (a == 1) a++;
    else if (!a) a += 2;
    for (int i = a; i <= b; i++) {
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                IsPrime = false;
                break;
            }
        }
        if (IsPrime) primes.push_back(i);
        IsPrime = true;
    }
    return primes;
}