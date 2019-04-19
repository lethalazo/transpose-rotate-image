#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int size = matrix.size();
    vector<vector<int>> transpose(matrix.at(0).size(), vector<int>(size));
    for(int i = 0;  i < size; i++){
        for(int j = 0; j < matrix.at(i).size(); j++){
            transpose.at(j).at(i) = matrix.at(i).at(j);
        }
    }
    return transpose;
}

int main() {
	vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	transpose(matrix);
}