#include <iostream>
using namespace std;

void TOH(int n,char S,char D,char A)
{
    if (n==1)
    {
        cout << "Move from " << S << " to " << D <<".\n";
    }
    else
    {
        TOH(n-1,S,A,D);
        cout << "Move disk " << n << " from rod " << S <<
                                " to rod " << A << endl;
        TOH(n-1,A,D,S);
        cout << "Move disk " << n << " from rod " << A <<
                                " to rod " << D << endl;
    }
}
int main()
{
    int N;
    cout << "Enter the number of disc :: " << endl;
    cin>>N;
    TOH(N,'A','C','B');
    return 0;
}
