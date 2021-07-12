#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MAX 500
char f[100000000000000000];
char c[100000000000000000];
using namespace std;
ll multiply(ll x, ll res[], ll res_size)
{
    ll carry = 0;
    for (ll i=0; i<res_size; i++)
    {
        ll prod = res[i] * x + carry;
          res[i] = prod % 10;


        carry  = prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

void factorial(ll n)
{

    ll res[MAX];
    res[0] = 1;
    ll res_size = 1;
  for (ll x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    ll co=0;
    for (ll i=res_size-1; i>=0; i--)
    {
        f[co]=(char)(res[i]+48);
        co++;
    }
}
//conversion
char reVal(ll num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
void strev(char *str)
{
    ll len = strlen(str);
    ll i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
char* fromDeci(char res[], ll base, ll inputNum)
{
    ll index = 0;
    ll coun=0;
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
    strev(res);
    return res;
}

int main()
{
    ll n,b;
    n=6;
    b=9;
    factorial(n);
    cout<<fromDeci(f, b, n);
}
