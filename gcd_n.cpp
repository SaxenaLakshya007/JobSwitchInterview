#include <iostream>
#include <vector>

typedef long long ll;

ll gcd(ll a, ll b) {
    if (a == 0) return b; // base condition
    return gcd(b % a, a);
}

ll gcd_of_vector(const std::vector<ll> &store) {
    ll d = store[0];
    for (size_t i = 1; i < store.size(); i++) {
        d = gcd(d, store[i]);
    }
    return d;
}

int main() {
    std::ios_base::sync_with_stdio(false);

    std::cout << "How many numbers are there? ";
    ll num;
    if (!(std::cin >> num) || num <= 0) {
        std::cerr << "Invalid input. Please enter a positive integer for the number of numbers." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Enter your numbers:\n";
    std::vector<ll> store(num);
    for (int i = 0; i < num; i++) {
        std::cin >> store[i];
    }

    ll g_c_d = gcd_of_vector(store);
    std::cout << "GCD of these numbers is " << g_c_d << "\n";
    return 0;
}
