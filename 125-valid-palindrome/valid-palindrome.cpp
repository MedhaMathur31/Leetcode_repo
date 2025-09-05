class Solution {
public:
    bool isPalindrome(string s) {
        //APPROACH 2
    //     transform(s.begin(), s.end(), s.begin(), ::tolower);
    //     s.erase(remove_if(s.begin(), s.end(), [](char c) {
    //     return !std::isalnum(c);
    // }), s.end());
    // cout<<s<<endl;

    // string rs = s;
    // reverse(rs.begin(), rs.end());
    // for(int i=0; i<s.size(); i++){
    //     if(rs[i]!=s[i]){
    //         return false;
    //         break;
    //     }
    // }

    //APPRAOCH 1
    // for(int i=0; i<s.size(); i++){
    //     for(int j=s.size()-1; j>=0; j++){
    //         if(s[i]==s[j]){
    //             cout<<s[i]<<" ";   
    //         }
    //         else{
    //             return false;
    //         }
    //     }
    // }

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove_if(s.begin(), s.end(), [](char c) {
        return !std::isalnum(c);
    }), s.end());
    cout<<s<<endl;

    int i=0, j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;


    }
};