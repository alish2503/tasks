#include <iostream>
#include <vector>
#include <set>

int gcd2(int, int);
int gcd(std::vector<int>&);
std::set<int> fact(std::vector<int>&);

int main() {
    int n, el;
    std::cout << "Введите количество чисел списка: ";
    std::cin >> n;
    std::vector<int> divid(n);
    std::cout << "Введите числа: ";
    for (int i = 0; i < n; i++) {
        std::cin >> el;
        divid[i] = el;
    }
    std::cout << "Список общих делителей: ";
    std::set<int> divis = fact(divid);
    for (auto &el : divis) std::cout << el << ' ';
    std::cout << std::endl;
}

int gcd2(int a, int b) {
    if (!a && b) return b;
    else if (a && !b) return a;
    if (a == b) return a;
    else if (a > b) return gcd2(a - b, b);
    return gcd2(a, b - a);
}
int gcd(std::vector<int> &divid) {
    int n = divid.size()-1;
    int res;
    for (int i = 0; i < n; i++) {
        res = gcd2(divid[i], divid[i+1]);
        divid[i+1] = res;
    }
    return res;
}
std::set<int> fact(std::vector<int> &divid) {
    int Gcd = gcd(divid);
    std::set<int> divis;
    for (int i = 2; i * i <= Gcd; i++) {
        if (Gcd % i == 0) {
            divis.insert(i);
            divis.insert(Gcd / i);
        }
    }
    divis.insert(Gcd);
    return divis;
}
