#include <iostream>

using namespace std;

struct Position{
    int x,y;
};


Position rotateBy90Deg(const Position& position){
    return {-position.y, position.x};
};

int main(){
    int a,b;
    cout << "Enter the x position: \n";
    cin >> a;
    cout << "Enter the y position: \n";
    cin >> b;

    Position position = {a,b};

    Position rotated = rotateBy90Deg(position);

    cout << "Before rotating: " << '(' << position.x << ',' << position.y <<')' << '\n';
    cout << "After rotating: " << '(' << rotated.x << ',' << rotated.y <<')' << '\n';


}