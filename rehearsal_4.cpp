#include <iostream>
#include <string>
using namespace std;
string compress(string x)
{
    string s = "";
    int J = x.size();
    int i = 0;
    while(i < J )
    {
        if( i%3 == 0)
        {   s = s + x[i];
            i++;
        }else{
            i++;
        }   
    }
    
    return s;

}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
