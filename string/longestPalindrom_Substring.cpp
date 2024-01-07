#include<iostream>
using namespace std;

bool isPalindrome(string s){
        string temp="";
        int start = 0 , end = s.length() - 1;

        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }

    string maxLength(string s,string t){
       
        int size1 = s.length(), size2 = t.length();
        return size1 >= size2 ? s : t;
       
    }

    
    string longestPalindrome(string s) 
    {
        if(s.length()==1) return s;
        if(!isPalindrome(s) && s.length() == 2) 
        {
            string m = "";
            m += s[0];
            return m;
        }
        if(isPalindrome(s)) return s;

        int window_size = 1;
       
        string ans = "";

        while(window_size < s.length()-1){

             string t = "";  
            for(int i=0;i<=window_size;i++)
                t += s[i];  
                int c = t.size();

            if(isPalindrome(t)) ans = maxLength(ans,t);

           
            for(int i=window_size+1; i<s.length() ;i++){
                t += s[i];
              
                t.erase(t.begin() + 0);
             

                if(isPalindrome(t))
                  ans = maxLength(ans,t);
             }
           
            

            window_size++;
        }

        return ans;
    }

    int main() 
    {
        string s;
        cout<<"Enter the string:";
          cin>>s;

        cout<<"your answer is:"<<longestPalindrome(s);

    }
