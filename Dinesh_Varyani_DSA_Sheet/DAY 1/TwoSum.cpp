//Using BruteForce approach
//Time complexity = O(N*N)

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                return {i,j};                }
        }
    }
    return{};
}




//Using Sorting and Two Pointer Approach
//Time complexity = O(NlogN)

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int a[n];
    for(int i=0; i<n; i++){
        a[i]=nums[i];
    }
    vector<int>v;
    sort(nums.begin(), nums.end());
    int l=0, r=n-1;
    while(l<r){
        if(nums[l] + nums[r] == target){
            break;
        }
        else if(nums[l] + nums[r] < target){
            l++;
        }
        else{
            r--;
        }
    }
    for(int i=0; i<n; i++){
        if(nums[l] == a[i]){
            v.push_back(i);
        }
        else if(nums[r] == a[i]){
            v.push_back(i);
        }
    }
    return v;
}




//using Unordered Map
//Time complexity = 0(N)

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>map;
        vector<int>res;
        for(int i=0; i<nums.size(); i++){
            if(map.find(target - nums[i]) != map.end()){
                res.push_back(map[target - nums[i]]);
                res.push_back(i);
                return res;
            }else{
                map[nums[i]] = i;
            }
        }
        return res;
    }