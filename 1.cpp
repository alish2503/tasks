#include <iostream>
#include <string>

std::string NumOfComps(int);

int main() {
    int n;
    std::cout << "Введите число компьютеров для склонения: ";
    std::cin >> n;
    std::cout << NumOfComps(n) << std::endl;
}

std::string NumOfComps(int num) {
    std::string comps = std::to_string(num) + " компьютер";
    int dig1 = num % 10;
    int dig2 = (num / 10) % 10;
    if ((dig2 != 1)) {
        if (dig1 > 1 && dig1 <= 4) return comps + "а";
        else if (dig1 == 1) return comps;
    }
    return comps + "ов";
}

