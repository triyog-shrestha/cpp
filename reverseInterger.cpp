#include <iostream>
using namespace std;

int main(){
    int num = 123456789;
    int rev = 0;
    while (num!=0){
        rev = rev * 10 + (num%10);
        num = num/10;
    }

    cout << rev << endl;

}