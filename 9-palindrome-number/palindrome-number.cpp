#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      string s = to_string(x); 
        vector<int> v1;
        for(int i =0;i<s.length(); i++){
            int j = s[i] - '0'; // Converts character '0'-'9' to integer 0-9
            v1.push_back(j);
        } 
        

        vector<int> v2;
        for(int i=s.length()-1;i>=0; i--){
            v2.push_back(v1[i]);
        }
        

        if(v1==v2){
            return true;
        }

    return false;

    }


};
//vector traverse karvao, aur ulta ek new vector mr daaldo