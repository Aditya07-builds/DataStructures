#include <iostream>
#include <string>
using namespace std;

   //valid characters rakho
    bool validCharacter(char ch)
    {
        if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&& ch<='9') )
        {
            return 1;
        }
        else
            return 0;
    }
   //sabh lower case me krdo
   char lowerCase(char ch)
   {
    if ((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))
    {
        return ch;
    }
    else
    {
        ch=ch-'A'+'a';
        return ch;
    }
   }
   //palindrome hai ya nahi
    bool validPalindrome(string st)
    {
        int s =0;
        int e =st.size()-1;
        while(s<e)
        {
            if(st[s]!=st[e])
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }

   int main() {
        string s="A man, a plan, a canal: Panama@!";
        string temp= "";
        for(int i=0;i<s.size();i++)
        {
            if(validCharacter(s[i]))
            temp.push_back(s[i]);
            
        }
        for(int j=0;j<temp.size();j++)
        {
            temp[j]=lowerCase(temp[j]);
        }

        cout<< validPalindrome(temp);
        return 0;
    }
