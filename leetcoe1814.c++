class Solution {
public:
    int MOD=1e9+7;
        int reverse(int num){
            int rem,rev=0;
            while(num!=0){
                rem=num%10;
                rev=rev*10+rem;
                num/=10;
            }
            return rev;
        }
    int countNicePairs(vector<int>& nums) {
        int n =nums.size();
        int result=0;
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            nums[i]=nums[i]-reverse(nums[i]);
        }
        for(int i =0;i<n;i++){
            result=(result+mp[nums[i]])%MOD;
            mp[nums[i]]++;
        }
        return result;
    }
};
