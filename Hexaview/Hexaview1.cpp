/* Given a String S, find the length of the middle word. If the 
number of words are even, then there are two middle words,
return whichever is more in length.
Example:
Input: Hexaview is Hiring. 
Output: 2
Explanation: S contains 3 words, so middle word is 2nd i.e. “is”, and its length is 2.
Input: Hexaview Hires the Best.
Output: 5
Explanation: S contains 4 words, so, there are two middle words: “Hires” and “the”, “Hires” is 
more in length (5 compared to 3), hence output is 5.*/

#include<iostream>
using namespace std;

int getMaxMiddleLength(string s)
{
    int n = s.length();
    int i=0, count=1;

    while(i<n)
    {
        if(s[i] == ' ')
            count++;
        i++;
    }
    
    int j=0, c=0, max=-1;
    int cLetters = 0;

    while(j < n)
    {
        if(j == ' ')
            c++;
        if(c == count/2-1)
        {
            //int cLetters = 0;
            if(j != ' ')
                cLetters++;
            else //if(j == ' ')
                if(max < cLetters);
                {
                    max = cLetters;
                    cLetters = 0;
                }     
            if(c == count/2+1) 
                break;
        }
        j++;
    }


    return max;
}

int main()
{
    string s ;
    getline(cin, s);
    cout << getMaxMiddleLength(s);

}