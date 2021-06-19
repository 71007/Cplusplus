# include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{

    int a,b;
    cout<<"Type your first number: "<<endl;
    cin>>a;

    cout<<"Type your second number: "<<endl;
    cin>>b;
    cout<<"Here's your solution: "<<add(a, b);

    return 0;
}