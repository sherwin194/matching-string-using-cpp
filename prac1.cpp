#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    string str = "10001111110";
    string str1 = "01111110";
    string a="";
  
    // Find first occurrence of "01111110"
    size_t found = str.find(str1);
    if (found != string::npos)
        cout << "First occurrence is " << found << endl;
        
    for(int i=0;i<found+6;i++){
        a+=str[i];
    }
    a+="0";
    for(int i=found+6;i<=str.length();i++){
        a+=str[i];
    }
    cout<<a;
    // Find next occurrence of "01111110". Note here we pass
    // "01111110" as C style string.
    char arr[] = "geeks";
    found = str.find(arr, found+1);
    if (found != string::npos)
        cout << "Next occurrence is " << found << endl;
  
    return 0;
}