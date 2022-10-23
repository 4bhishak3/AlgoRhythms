/*
Consider a game where there are n children (numbered 1,2,…,n) in a circle. During the game, every second child is removed from the circle, until there are no children left. 
Your task is to process q queries of the form: "when there are n children, who is the kth child that will be removed?"
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        if (n % 2 != 0) {
            cout << (2 * k) % n << endl;
        } else {
            cout << (2 * k) % (n + 1) << endl;
        }
    }
    return 0;
}
