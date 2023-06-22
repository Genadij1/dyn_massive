#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

void addRow(vector<vector<int>>& matrix, const vector<int>& row) {
    matrix.push_back(row);
}

int main()
{

        vector<vector<int>> matrix   { {1, 2, 3},
                                       {4, 5, 6} };

        vector<int> newRow = { 7, 8, 9 };

        addRow(matrix, newRow);

        for (const auto& row : matrix) {
            for (const auto& element : row) {
                cout << element << " ";
            }
            cout << endl;
        }

	system("pause>nul");
	return 0;
}