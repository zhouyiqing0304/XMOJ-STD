#include<bits/stdc++.h>
using namespace std;
int row_num, col_num, cnt;
char grid[60][60], temp[60][60];
bool is_valid(int delta_x, int delta_y){
    if(delta_x == 0 && delta_y == 0) return false;
    int total = cnt;
    memcpy(temp, grid, sizeof(grid));
    for(int x = 1; x <= row_num; x++)
        for(int y = 1; y <= col_num; y++){
            int new_x = x + delta_x, new_y = y + delta_y;
            if(new_x < 1 || new_x > row_num || new_y < 1 || new_y > col_num) continue;
            if(temp[x][y] == '#' && temp[new_x][new_y] == '#') temp[x][y] = 'R', temp[new_x][new_y] = 'B', total -= 2;
        }
    return total == 0;
}
int main(){
    cin >> row_num >> col_num;
    for(int i = 1; i <= row_num; i++)
        for(int j = 1; j <= col_num; ++j){
            cin >> grid[i][j];
            if(grid[i][j] == '#') cnt++;
        }
    if(cnt >= 2 && cnt % 2 == 0)
        for(int delta_x = -row_num + 1; delta_x <= row_num - 1; delta_x++)
            for(int delta_y = -col_num + 1; delta_y <= col_num - 1; delta_y++)
                if(is_valid(delta_x, delta_y)){
                    cout << "YES" << endl;
                    return 0;
                }
    cout << "NO";
    return 0;
}

