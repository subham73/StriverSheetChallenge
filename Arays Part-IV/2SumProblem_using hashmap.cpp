vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;
   unordered_map<int, int>mp;
   for(int i = 0; i < arr.size(); i++){
      if(mp[s-arr[i]]){
         int occur = mp[s-arr[i]];
         while (occur--) {
           ans.push_back({min(arr[i], s-arr[i]), max(arr[i], s-arr[i])});
         //   mp[s-arr[i]] += 1;
         }
      }
      mp[arr[i]]++;
   }
   sort(ans.begin(), ans.end());
   return ans;

}