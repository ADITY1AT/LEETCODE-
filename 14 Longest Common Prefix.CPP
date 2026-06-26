class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a;
        for(int i=0;i<strs[0].size();i++){
            bool match=true;
            char ch=strs[0][i];

            for(int j=1;j<strs.size();j++){
                if(ch != strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false){
                break;
            }
            else{
                a+=ch;
            }
        }
        return a;
        
    }
};
