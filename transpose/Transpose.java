import java.util.Arrays;
class Transpose {

public static void main(String[] arg){
Transpose t = new Transpose();
int[][] matrix = {{1, 2, 3}, {4, 5, 6}};
matrix = t.transpose(matrix);
System.out.println(Arrays.deepToString(matrix));
}

public int[][] transpose(int[][] A) {
        //0ms runtime. Faster than 100% on leetcode problem 863
        int[][] B = new int[A[0].length][A.length];
        for(int i = 0; i < A.length; i++){
            for(int j = 0; j < B.length; j++){ 
                B[j][i] = A[i][j];
            }
        }
        return B;
    }
}
