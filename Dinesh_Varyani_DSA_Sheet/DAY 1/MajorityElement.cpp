//Boyer-Moore Voting algortihm
//Time complexity = O(N)
//Space complexity = O(1)

int majorityElement(vector<int>& nums) {
    int ans = nums[0];
    int count = 0;
    for(int &num : nums){
        if(ans == num){
            count++;
        }else{
            count--;
            if(count < 0){
                ans = num;
                count = 1;
            }
        }
    }
    return ans;
}



//Using unordered map
//Time complexity = O(N)
//Space complexity = O(N)

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>map;
        for(int it : nums){
            map[it]++;
        }
        for(auto it : map){
            if(it.second > n/2){
                return it.first;
            }
        }
        return -1;
}



//using sorting
//Time complexity = O(NlogN)
int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
}