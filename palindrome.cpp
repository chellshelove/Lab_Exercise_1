#include <iostream>
#include <string>
using namespace std;
 
string isPalindrome(string S)
{
    
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return "Yes";
    }
    else {
        return "No";
    }
}
 
int main()
{
    string S = "CLSTTCST";
    cout << isPalindrome(S);
 
    return 0;
}