#include <iostream>

int pow(int base, int power){
    int res = 1;
    while(power){
        if(power%2==1){
            res *= base; 
            power--;
        }
        else{
            base *= base;
            power /= 2;
        }
    }
    return res;
}

int main(){
    int base, exp;
    std::cin >> base;
    std::cin >> exp;
    std::cout << pow(base, exp) << std::endl;
}
