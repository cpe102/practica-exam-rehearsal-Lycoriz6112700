#include<iostream>
using namespace std;
int main()
{
    float GPA;
    string name;
    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your GPA?: ";
    cin >> GPA;
    if(GPA >= 3.50)
    {
        cout << name << " InW Jrim Jrim!!!";
    }else{
        cout << "Try harder, " << name << "!!!";
    }

    return 0;
}
