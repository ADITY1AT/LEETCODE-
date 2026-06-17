class Solution {
public:
    string convert(string s, int numRows) {
        string a;
     
        if(numRows==1){
            return s;
        }
        for(int j=0;j<numRows;j++){
            for(int i=j;i<s.size();){
              a+=s[i];

               if(j!=0 && j!=numRows-1 && i+2*numRows-2-2*j<s.size()){
                a+=s[i+2*numRows-2-2*j];
               }
               
              i=i+2*numRows-2;
                
            }
        }
        return a;

        
    }
};
