#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    void iseven(int z);
    int m,n;
    cin>>m>>n;
    string int_map[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=m;i<=n;i++)
    if(i<=9)
    {
        cout << int_map[i-1] << endl;
    }
    else 
    {
     iseven(i);
    }
    
    return 0;
}
void iseven(int z)
{
    if(z%2==0)
        {
        cout<<"even"<<endl;
        }
        else 
        {
        cout<<"odd"<<endl;
        }
    }
