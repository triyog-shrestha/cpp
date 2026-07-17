#include <cstdlib>
#include <iostream>
using namespace std;
#include <vector>
#include <chrono>
#include <thread>

struct Point{
    int row,col;
};

void makeGrid(const vector<vector<int>>& board){
    for (const auto& row:board){
        for (int tile:row){
            switch (tile) {
                case 1: cout<<'#';break;
                case 0: cout<<'.';break;
                case 2: cout<<'=';break;
            
            }
            cout<<'\t';
        }
        cout<<'\n';
    }

}

vector<Point> tetromino(){
    vector<Point> i = {
        {1,1},
        {2,1},
        {3,1},
        {4,1}
    };
    return i;

}

int main(){
    vector<vector<int>> board = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
    };

    makeGrid(board);

    vector<Point> i = tetromino();
    
    while (i[3].row + 1 < board.size()-1) {
        for (Point& point : i){ //erase point 
            board[point.row][point.col] = 0; 
        };
        for (Point& point : i){
            point.row++;
        }; //make point
        for (Point& point : i){
            board[point.row][point.col] = 2; 
        };
        system("clear");
        
        makeGrid(board);
        this_thread::sleep_for(chrono::milliseconds(500));
    }

}


