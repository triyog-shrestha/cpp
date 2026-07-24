#include <iostream>
using namespace std;


bool isPrime(int num){
    int count = 0;
    for (int i=1; i<=num; ++i ){
        if (num % i == 0){
            ++count;
        }
    }
    return (count == 2)? true : false;
}

int main(){
    cout << isPrime(2) <<endl;
    cout << isPrime(3) <<endl;
    cout << isPrime(4) <<endl;
    cout << isPrime(7) <<endl;
    cout << isPrime(9) <<endl;
    cout << isPrime(11) <<endl;
    cout << isPrime(15) <<endl;

}