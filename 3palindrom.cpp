#include <bits//stdc++.h>
using namespace std;
int main()
{
    string s = "KAJAK";
    int flaga = 1;
    int p,k;
    p=0;
    k= s.size() -1];
    cout << p << ' ' << k << "/n";
    while (p<k)
    {
        if(s[p] != s[k]) flaga = 0;
        p++;
        k--;
    }
    if (flaga ==1) count << "PALINDROM";
    else cout << "NIE PALINDROM";
}
