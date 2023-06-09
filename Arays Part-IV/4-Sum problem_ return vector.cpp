class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        vector<vector<int>>ans; 

        int n = arr.size();
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n; i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
            for(int j = i+1; j < n; j++){
                if(j > i+1 && arr[j] == arr[j-1]) continue;
                int l = j+1, r = n-1;
                while(l < r){
                    long long sum = arr[i] ;
                    sum += arr[j]; 
                    sum += arr[l]; 
                    sum += arr[r];
                    if(sum == target){
                        ans.push_back({arr[i], arr[j], arr[l], arr[r]});
                        l++, r--;
                        while(l < r && arr[l] == arr[l-1]) l++;
                        while(l < r && arr[r] == arr[r+1]) r--;
                    }
                    else if( sum < target)
                        l++;
                    else  r--;
                }
            }
        }
        return ans;
    }
};