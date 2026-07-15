#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
#include <vector>

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

    for(int i=0;i<3;i++){
        int row{1}, column{2};
        board[row][column]=2;
        while (row+1 < board.size()-1){
            if (board[row+1][column] == 0){
                board[row][column] = 0;
                row++;
                board[row][column] = 2;
                cout<<"\033[2J\033[H";
                makeGrid(board);
                this_thread::sleep_for(chrono::milliseconds(400));
            }
            else{
                break;
            }
        }
    }
}