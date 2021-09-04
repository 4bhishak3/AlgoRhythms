#include <iostream>

void prime_factors(int N){
    for (int i = 2; i*i <= N; i++){
        if (N%i == 0){
            int count = 0;
            while (N%i == 0){
                count++;
                N/=i;
            }
            std::cout << "(" << i << "^" << count << ")";
        }
    }
    if (N>1)
        std::cout << "(" << N << "^" << 1 << ")\n";
}

int main(){
    int inp;
    std::cin >> inp;
    prime_factors(inp);
    return 0;
}