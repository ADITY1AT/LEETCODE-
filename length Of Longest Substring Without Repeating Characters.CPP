class Solution {
public:
//    int lengthOfLongestSubstring(string s) {
//         unordered_map<char,int > map;
//        int count=0;
//         int maxlength=INT_MIN;

//         for(int i=0;i<s.size();i++){
//             if(map.find(s[i]) != map.end()  && map[s[i]] >=count ){
//                 count=map[s[i]]+1;
//             }
//             else{
//                  maxlength=max(maxlength,i-count+1);
//             }

//             map[s[i]]=i;

//         }
//         return  maxlength==INT_MIN?0:maxlength;
// }
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int len=0;
        unordered_map<char,int>mp;
        int last_track=0;
        int i=0;
        for(char c: s){
            if(mp.find(c)!=mp.end() && mp[c] >= last_track){
               last_track=mp[c]+1;
            }
            else len=max(len,i-last_track+1);

            mp[c]=i;
            i++;

            
        }
        return len;
        
    }
};
