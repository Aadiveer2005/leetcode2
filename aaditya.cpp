class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>first;
        vector<int>second;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
               
                    first.push_back(i);
                }
            }
            for(int i=0;i<s.length();i++){
            int n=100000;
            

            for(int j=0;j<first.size();j++){
                
                 n=min(n,abs(i-first[j]));
            
            }
            
                second.push_back(n);
            }
          return second;
        
    }
};