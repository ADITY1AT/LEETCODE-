class Solution {
public:
    int maxArea(vector<int>& height) {
       int n= height.size();
       int maximum=INT_MIN;

       int altitude;
       int area;
        if(n==0){
            return 0;
        }

        if(n==1){
            return height[0];
        }
        int j=n-1;
        int i=0;

        while(i<n   && j>=0 && i<j){

            altitude=min(height[i],height[j]);

            area=altitude*(j-i);

            maximum=max(area,maximum);

           if(height[j]<height[i]){
            j--;

           } 
           else{
            i++;
           }


        }

        return maximum;

        
    }
};
