class Solution {
public:
    // function for generating each element 
    int ncr(int r , int c){
        int res = 1;
        for(int i = 0; i < c; i++){
            res = res* (r-i);
            res = res / (i+1);
        }
        return res;
    }
    // generating each row
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
           vector<int> ans;
           for(int i = 0;i<n;i++){
               ans.push_back(ncr( (n-1) , i ));
           }
           return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i = 0;i<numRows;i++){
            result.push_back(nthRowOfPascalTriangle(i+1));
        }
        return result;
    }
};