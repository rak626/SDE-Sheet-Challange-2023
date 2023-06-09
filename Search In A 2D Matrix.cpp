bool searchMatrix(vector<vector<int>>& mat, int target) {

    if (!mat.size())
        return false;
    int n = mat.size() , m = mat[0].size();
    int l = 0 , h = n * m - 1;
    while(l <= h){
        int mid = l + ((h - l) / 2);
        int cur = mat[mid / m] [mid % m];
        if(cur == target) return target;
        
        if ( target > cur)
            l = mid+ 1;
        else 
            h = mid-1;
    }
    return false;
}