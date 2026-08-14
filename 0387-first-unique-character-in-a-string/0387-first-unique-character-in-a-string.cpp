class Solution {
public:
    int firstUniqChar(string s) {
        int sakshi[26]={0};
        for(char c : s){
            sakshi[c - 'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(sakshi[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
// leetcode => l-a = 108-97 = 11 +1
              //  e-a = 101 - 97 = 4 +1
                                   // +2
               // t => 