#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector<int> nums = {55, 82, 1, 1, 6};   
    int largest = 0;
    int secLargest = 0;
    for (int i : nums){
        if (i > largest){
            secLargest = largest;
            largest = i;
        }
        else if (i < largest && i > secLargest){
            secLargest = i;
        }
    }
    cout << secLargest << endl;
}