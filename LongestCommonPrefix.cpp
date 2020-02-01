class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n  = strs.size();
        if(n==0)  // checks for zero length;
        {
            return "";
            }
        if(n==1) // agr length 1 hua
        {
            return strs[0]; // return string of length 1;
        }
        sort(strs.begin(),strs.end()); // sorting according to the size of string 
        int en = min(strs[0].size(),strs[n-1].size()); // select min size strign 
        string first  = strs[0],last = strs[n-1]; // assigned first and last string size 
        int i=0;    // for iterations 0 to till end of substrig
        while(i<en&&first[i]==last[i]) // check wether size of small size string is less then                                           //i and  first string char is eaual to last strings first char;   if yes increment i++;
            i++;

        string pre = first.substr(0,i); // compute prefix of smalles string which is common substring for all strings
        return pre; // return common prefix.
        
    }
};
