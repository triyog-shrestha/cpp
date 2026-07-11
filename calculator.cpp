#include <ios>
#include <iostream>
#include <limits>
// #include <limits>
using namespace std;


int add(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
float quo(float a, float b);
void intro();
void options();
void validateNums(int a);

int main(){
    intro();
    while (true){
        int x,y,op;
        char ch;
    
        cout<<"Enter a number : ";
        while(!(cin>>x)){
            validateNums(y);
        }
        cout<<"Enter another number : ";
        while(!(cin>>y)){
            validateNums(y);
        }
        options();
        while (!(cin >> op)){
            validateNums(op);
        }

    
        if (op==1){
            cout<<"Sum of " << x <<" and " << y << " = " << add(x,y)<<endl;
        }
        else if (op==2){
            cout<<"Difference of " << x <<" and " << y << " = " << diff(x,y)<<endl;
        }
        else if (op==3){
            cout<<"Product of " << x <<" and " << y << " = " << mul(x,y)<<endl;
        }
        else if (op==4){
            cout<<"Quotient of " << x <<" and " << y << " = " << quo(x,y)<<endl;
        }
        else{
            cout << "An error occurred" <<endl;
        }
        cout<<"Do you want to continue?(y/n) : ";
        cin>>ch;

        if (ch=='n' || ch=='N'){
            break;
        }
    }
}




int add(int a, int b){
    return a+b;
}

int diff(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

float quo(float a, float b){
    return a/b;
}


void intro(){
    cout << "This is a simple calculator" << endl ;
}

void options(){
    cout << "Press 1 for addition " << endl;
    cout << "Press 2 for subtraction " << endl;
    cout << "Press 3 for multiplication " << endl;
    cout << "Press 4 for division " << endl;
}

void validateNums(int a){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Invalid input, enter a proper number: ";
}