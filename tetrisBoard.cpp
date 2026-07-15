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
    for (int i = 0; i<3; ++i){
        int xp = 1;
        int yp = 1;

        board[xp][yp] = 2;

        while (xp < board.size() - 2) {
            system("clear");

            makeGrid(board);

            this_thread::sleep_for(chrono::milliseconds(500));

            board[xp][yp] = 0;
            xp++;
            board[xp][yp] = 2;
        }
    }
}