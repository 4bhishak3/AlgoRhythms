#include <iostream>
#include <vector>

bool not_prime[90000001];
std::vector<int> prime_arr;

void sieve(){
    int maxN = 90000000;

    not_prime[0] = not_prime[1] = true;

    for(int i = 2; i*i <= maxN; i++){
        if(!not_prime[i]){
            for(int j = i*i; j <= maxN; j+=i){
                not_prime[j] = true;
            }
        }
    }

    for(int i = 2; i <= maxN; i++){
        if(!not_prime[i])
            prime_arr.push_back(i);
    }
}

int main(){
    int t,a;
    sieve();
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> a;
        std::cout << prime_arr[a-1] << "\n"; 
    }
    return 0;
}