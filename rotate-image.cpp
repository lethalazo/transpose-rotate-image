#include <iostream>
#include <string>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
	vector<vector<int>> resultant;
	int size = matrix.size();
	resultant.resize(size, vector<int>(size));
	for(int i = 0;  i < size; i++){
		for(int j = 0; j < size; j++){
			resultant.at(j).at(size - i - 1) = matrix.at(i).at(j);
		}
	}
	matrix = resultant;
}

int main() {
	vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	rotate(matrix);
}
