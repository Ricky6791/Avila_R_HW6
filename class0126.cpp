#include <iostream>
using namespace std;

int oneToN(int n){
    if (n <= 1)
        return n;
    return n + oneToN(n-1);
}
int ones(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return ones(n/2) + ones(n%2);
    }
}

int main(){
    cout << oneToN(4) << endl;
    cout << ones(7);
}