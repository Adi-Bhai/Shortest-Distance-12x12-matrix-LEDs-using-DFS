#include <iostream>

using namespace std;

/*
Grid Rules:
From a position, you can only move
- UP    : 2 squares
- DOWN  : 2 squares
- LEFT  : 1 square
- Right : 3 squares

*/

const int sizeOfGrid=12; // Size of Grid
int x; // 'x' is a variable for the grid which is always modifialble

int main(){
    int grid[sizeOfGrid][sizeOfGrid];
    for(int i=0;i<sizeOfGrid;i++)
        for(int j=0;j<sizeOfGrid;j++){
            cout<<"Enter the value for ["<<i<<","<<j<<"]"<<": "<<endl;
            cin>>grid[i][j];
        }

    for (int i = 0; i < sizeOfGrid; i++){
        cout<<"[";
        for (int j = 0; j < sizeOfGrid; j++){
            if (j != sizeOfGrid-1) cout << grid[i][j]<<", ";
            else cout<< grid[i][j];
        }
        cout<<"]"<<endl;
    }
    return 0;
}
