//Using sorting 
//TC: O(NlogN)
//SC: O(1)

vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(int i=0; i<n; i++){
            res.push_back(nums[i] * nums[i]);
        }
        sort(res.begin(), res.end());
        return res;
}




//Using two pointer 
//TC: O(N)
//SC: O(N)

vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int>res(n);
        int l = 0, r = n-1;
        for(int i=n-1; i >= 0; i--){
            if(abs(nums[l]) >= abs(nums[r])){
                res[i] = pow(nums[l], 2);
                l++;
            }
            else{
                res[i] = pow(nums[r], 2);
                r--;
            }
        }
        return res;
}