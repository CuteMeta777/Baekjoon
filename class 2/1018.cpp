#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int assess_cut_board(int pivot_row, int pivot_col, const vector<string>& original_board, const vector<string>& answer_board_w, const vector<string>& answer_board_b)
{
    int paint_count_w;
    int paint_count_b;
    int min_paint_count;

    vector<string> cut_board(8);

    // init cut_board
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cut_board[i][j] = original_board[pivot_row + i][pivot_col + j];

    // try painting white
    paint_count_w = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j ++)
            if (cut_board[i][j] != answer_board_w[i][j])
                paint_count_w++;

    // try painting black
    paint_count_b = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j ++)
            if (cut_board[i][j] != answer_board_b[i][j])
                paint_count_b++;

    // return min_paint_count
    min_paint_count = min(paint_count_w, paint_count_b);
    return min_paint_count;
}

int solution(int row, int col, const vector<string>& original_board)
{
    // answer_board_w[0][0] is 'W'.
    vector<string> answer_board_w(8);
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            answer_board_w[i][j] = ((i + j) % 2) ? 'B' : 'W';

    // answer_board_b[0][0] is 'B'.
    vector<string> answer_board_b(8);
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            answer_board_b[i][j] = ((i + j) % 2) ? 'W' : 'B';

    int result = 32; // init with possible-max-value;
    int calculated_value;
    for (int i = 0; i <= row - 8; i++)
        for (int j = 0; j <= col - 8; j++)
        {
            calculated_value = assess_cut_board(i, j, original_board, answer_board_w, answer_board_b);
            if (result > calculated_value)
                result = calculated_value;
        }
    
    return result;
}

int main(void)
{
    int row, col;
    cin >> row >> col;

    vector<string> original_board(row);
    for (string& e : original_board)
        cin >> e;

    cout << solution(row, col, original_board);

    return 0;
}