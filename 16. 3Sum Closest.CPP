class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minimum=INT_MAX;
        vector<int> arr;
        int closest_SUM;
        
#
        sort(nums.begin(),nums.end());
        int i=0;
     
        int j=i+1;
        int k=nums.size()-1;

        for(i=0;i<nums.size()-2;i++){

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

           
            int j=i+1;
            int k=nums.size()-1;

        while(  j<k ){

                int sum=nums[i]+nums[j]+nums[k];
                int difference=abs(target-sum);

                if(difference<minimum){
                    minimum=difference;
                    closest_SUM=sum;
                }
               
               
                if(sum==target){
                    return target;
                }

                if(sum>target){
                    
                
                

               
                k--;
            }


            else if(sum < target){
                 
                    
                
                

                j++;
               
               
            }
            

        }

       
        
          

}
 return  closest_SUM;
        
 
        
    }
    
};

        
    
