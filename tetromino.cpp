#include <cstdlib>
#include <iostream>
using namespace std;
#include <vector>
#include <chrono>
#include <thread>

struct Point{
    int row,col;
};

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

//erase the previous point before moving down
void erasePoint(vector<Point>& i, vector<vector<int>>& board){
    for (Point& point : i){
        board[point.row][point.col] = 0;
    };
}

//move the tetromino points down
void movePoint(vector<Point>& i){
    for (Point& point : i){
        point.row++;
    };
}

//make the new point
void makePoint(vector<Point>& i, vector<vector<int>>& board){
    for (Point& point : i){
        board[point.row][point.col] = 2;
    };
}


//calculate the lowest point of the tetromino
int calcLowest(const vector<Point>& i){

    int lowest = i[0].row;
    
    for (Point p : i){
        lowest = max(lowest, p.row);
    };
    return lowest;
}


//check if the current point is part of the piece
bool isCurrentPiece(const vector<Point>& i, int row, int col){
    for (const Point& p : i){
        if (p.row == row && p.col == col){
            return true;
        }
    }

    return false;
}

//check it it can move down
bool canMoveDown(const vector<Point>& i){
    for (const Point& p : i){
        int nextRow = p.row + 1;
        if (isCurrentPiece(i,nextRow, p.col)){
            continue;
        }

        if (board[nextRow][p.col] != 0){
            return false;
        }
    }
    return true;
}


//makes the tetris grid
void makeGrid(){
    for (const auto& row:board){
        for (int tile:row){
            switch (tile) {
                case 1: cout<<'_';break;
                case 0: cout<<' ';break;
                case 2: cout<<"[]";break;
            
            }
            cout<<'\t';
        }
        cout<<'\n';
    }

}


//makes the tetrominoes
vector<Point> tetromino(){
    vector<Point> o = {
        {1,1},
        {1,2},
        {2,1},
        {2,2}
    };

    vector<Point> i = {
        {1,1},
        {2,1},
        {3,1},
        {3,2}
    };
    return i;

}

int main(){
    vector<Point> i = tetromino();
    makePoint(i, board);

    while (true)
    {
        system("clear");
        makeGrid();
        this_thread::sleep_for(chrono::milliseconds(500));

        if (!canMoveDown(i))
            break;

        erasePoint(i, board);
        movePoint(i);
        makePoint(i, board);
    }

}


