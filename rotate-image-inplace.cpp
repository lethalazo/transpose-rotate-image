#include <iostream>
#include <string>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int size = matrix.size();
    for(int i = 0;  i < size; i++){
        for(int j = i + 1; j < matrix.at(i).size(); j++){
            int temp1 = matrix.at(j).at(i);
            matrix.at(j).at(i) = matrix.at(i).at(j);
            matrix.at(i).at(j) = temp1;
        }
    }
    for(int i = 0;  i < size; i++){
		int j = 0;
		int k = size-1;
    	while( j < k){
			int temp = matrix.at(i).at(j);
			matrix.at(i).at(j) = matrix.at(i).at(k);
			matrix.at(i).at(k) = temp;
			j++;
			k--;
        }
    }
}

int main() {
	vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	rotate(matrix);
}