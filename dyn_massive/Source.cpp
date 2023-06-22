#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void deleteRow(vector<vector<int>>& matrix, int rowNumber) {
    matrix.erase(matrix.begin() + rowNumber);
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9} };

    int rowToDelete = 1;

    deleteRow(matrix, rowToDelete);

    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    system("pause>nul");
    return 0;
}
