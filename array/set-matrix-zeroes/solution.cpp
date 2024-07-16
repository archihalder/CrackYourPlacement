#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Good
    // TC - O(n^2) on average; O(n^3) worst case - unordered_set.count()
    // SC - O(n)
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row, col;

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if((row.count(i) > 0) || (col.count(j) > 0))
                    matrix[i][j] = 0;
            }
        }
    }

    // Better
    // TC - O(n^2)
    // SC - O(n)
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> row(n, 1), col(m, 1);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(row[i] == 0 || col[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }

    // Optimal
    // TC - O(n^2)
    // SC - O(1)
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        bool row0 = false, col0 = false;

        // check for row0 and col0
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] == 0)
                col0 = true;
        }

        for(int j = 0; j < m; j++) {
            if(matrix[0][j] == 0)
                row0 = true;
        }

        // check the matrix except row0 and col0
        // store the zero indices in row0 and col0
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // modify the matrix except row0 and col0
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        // modify row0 and col0
        if(row0) {
            for(int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        if(col0) {
            for(int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};