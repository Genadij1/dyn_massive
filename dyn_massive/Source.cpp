#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void addRowToBeginning(std::vector<std::vector<int>>& matrix, const std::vector<int>& row) {
    matrix.insert(matrix.begin(), row);
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3},
                                            {4, 5, 6} };

    vector<int> newRow = { 7, 8, 9 };

    addRowToBeginning(matrix, newRow);

    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
