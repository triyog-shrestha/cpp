#include <iostream>
#include <vector>
using namespace std;

void makeGrid(const vector<vector<int>>& grid){
    for (const auto& row : grid){  //using & to pass by reference
        for(int tile : row){
            cout << (tile ? '#' : '.');
            cout << '\t';
        };
        cout << '\n';
        cout << '\v';
    };
}

int main(){
    vector<vector<int>> grid = {
        {1,1,1,1,1,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,1,1,1,1,1},
        
    };

    makeGrid(grid);
}

