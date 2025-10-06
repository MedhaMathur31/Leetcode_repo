class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        //APPROACH 1 - Wrong answer
        // char i = word1[0];
        // char j = word2[0];
        // string ans;
        // ans.push_back(i);
        // ans.push_back(j);

        // int g;
        // if(word1.size() >= word2.size()){
        //     g = word1.size();
        // }
        // else{
        //     g = word2.size();
        // }

        // for(int a=1; a<g; a++){
        //     ans.push_back(i);
        //     ans.push_back(j);
        //     if(i < word1.size()){
        //         i=word1[a];
        //     }
        //     else continue;
        //     if(j < word2.size()){
        //         j = word2[a];
        //     }
        //     else continue;
        // }   

        int i=0, j=0;
        string ans;

        while(i < word1.size() || j < word2.size()){
            if(i < word1.size()){
                ans.push_back(word1[i++]);
            }
            if(j < word2.size()){
                ans.push_back(word2[j++]);
            }
        }


    return ans;
    }
};