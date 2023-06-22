#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void addRow(vector<vector<int>>& matrix, const vector<int>& row, int position) {
    matrix.insert(matrix.begin() + position, row);
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3},
                                   {4, 5, 6} };

    vector<int> newRow = { 7, 8, 9 };
    int position = 1;

    addRow(matrix, newRow, position);

 
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    system("pause>nul");
    return 0;
}
