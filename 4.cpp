#include <iostream>
#include <iomanip>

void Multtable(int);

int main() {
    int n;
    std::cout << "Введите число до которого нужна таблица умножения: ";
    std::cin >> n;
    std::cout << "Таблица умножения до числа: " << n << std::endl;
    Multtable(n);
}


void Multtable(int num) {
    int width = std::to_string(num*num).length() + 1;
    std::cout << std::setw(width) << ' ';
    for (int i = 1; i <= num; i++) std::cout << std::setw(width) << i;
    std::cout << std::endl;
    for (int i = 1; i <= num; i++) {
        std::cout << std::setw(width) << i;
        int res = 0;
        for (int j = 1; j <= num; j++) {
            res += i;
            std::cout << std::setw(width) << res;
        }
        std::cout << std::endl;
    }
}

