
#include <iostream>
using namespace std;

long long get_modulo(long long base, int power, long long mod) {
    if(base < 0 || power < 0 || mod < 1){
        return -1;
    }
    long long result = 1 % mod;

    for (int i = 0; i < power; i++) {
        result = (result * base) % mod;
    }

    return result;
}

int main() {
    long long base, mod;
    int power;

    cout << "Enter Base, Power and mod: ";
    cin >> base >> power >> mod;

    long long result = get_modulo(base, power, mod);

    cout << "Result: " << result << endl;

    return 0;
}
