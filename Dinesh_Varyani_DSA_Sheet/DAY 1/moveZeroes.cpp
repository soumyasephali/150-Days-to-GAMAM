//Using bruteforce
//TC = O(N*N)
//SC: O(1)


void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int times = 1; times <= n-1; times++){
            for(int i = 0; i < n-1; i++){
                if(nums[i] == 0 && nums[i+1] != 0){
                    swap(nums[i], nums[i+1]);
                }
                
            }
        }
}






//Optimal solution
//TC: O(N)
//SC: O(1)

void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }
        for( ; j<n; j++){
            nums[j] = 0;
        }
}