class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0) return false;
        stack<int>check;
        for(char c:s){
            if(c=='('||c=='['||c=='{'){
                check.push(c);
            }
            else{
                if(check.empty()) return false;
                if(c==')'&&check.top()!='('){
                    return false;
                }
                else if(c==']'&&check.top()!='['){
                    return false;
                }
                else if(c=='}'&&check.top()!='{'){
                    return false;
                }
                else{
                    check.pop();
                }
            }
        }
        return check.empty();   
    }
};