class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n;
        n=nums.size();
        int i,zero=0,one=0,two=0;
        for(i=0;i<n;i++){
            if(nums[i]==0)
                zero++;
            else if(nums[i]==1)
                one++;
            else
                two++;
        }
        i=0;
        while(zero>0){
            nums[i]=0;
            i++;
            zero--;   
        }
        while(one>0){
            nums[i]=1;
            i++;
            one--;    
        }
        while(two>0){
            nums[i]=2;
            i++;
            two--;
        }
        
    }
};