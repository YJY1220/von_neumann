//구글링 3번..
//응... 나자신 초라하다
//다음에 java나 python으로 짤 때는 제대로 혼자 짜자..

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sudoku_arr[9][9] = { 0 };

void print_sudoku() 
{
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku_arr[i][j];
           
            if (j != 8)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void sudoku_slove(int row, int col)
{
    int used_num_arr[9] = { 0 };

    vector<int> each_round_can_vec;

    for (int i = 0; i < 9; i++)
    {
        if (sudoku_arr[row][i])
        {
            used_num_arr[sudoku_arr[row][i] - 1] = 1;
        }
        if (sudoku_arr[i][col])
        {
            used_num_arr[sudoku_arr[i][col] - 1] = 1;
        }
    }
 
    int sub_row = row / 3, sub_col = col / 3;
    
    sub_row *= 3;  sub_col *= 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            if (sudoku_arr[sub_row][sub_col + j])        used_num_arr[sudoku_arr[sub_row][sub_col + j] - 1] = 1;
        }
        sub_row++;
    }

    for (int i = 0; i < 9; i++)
    {
        if (!used_num_arr[i])
        {
            each_round_can_vec.push_back(i + 1);
        }
    }

    if (!each_round_can_vec.size()) return;

    int next_row = row, next_col = col;
   
    while (true)
    { 
        if ((++next_col) == 9)
        {
            next_row++;
            next_col = 0;

            if (next_row == 9)
            {
                sudoku_arr[row][col] = each_round_can_vec[0];
              
                print_sudoku();
                exit(0);
            }
        }

        if (next_row == 9) break;
        if (sudoku_arr[next_row][next_col] == 0) break;
    }


    for (int i = 0; i < each_round_can_vec.size(); i++) 
    {
        sudoku_arr[row][col] = each_round_can_vec[i];
        sudoku_slove(next_row, next_col);
        sudoku_arr[row][col] = 0;
    }

}

int main() 
{
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> sudoku_arr[i][j];
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sudoku_arr[i][j] == 0) 
            {
                sudoku_slove(i, j);
            }
        }
    }

    return 0;
}
