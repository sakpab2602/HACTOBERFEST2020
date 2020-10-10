#include <bits/stdc++.h> 
#define ll long long int
using namespace std;

ll lead[200001];
struct lakeer
{
    ll a;
    ll b;
    ll weight;
};
bool comp(lakeer a, lakeer b)
{
    if(a.weight<b.weight)
     return true;
    return false;
}
ll find(ll bakra)
{
    if(lead[bakra]==-1)
     return bakra;
    return lead[bakra] = find(lead[bakra]);
}
int main() 
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    ll n,d;
    cin>>n>>d;
    std::vector<vector<ll>> x(n+1);
    for(int i=1;i<=n;i++)
     lead[i]=-1;
    lakeer arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i].a>>arr[i].b>>arr[i].weight;
    }
    ll weightsum=0;
    ll para,parb;
    sort(arr, arr+c, comp);
    for(int i=0;i<n;i++)
    {
        para = find(arr[i].a);
        parb = find(arr[i].b);
        if(para!=parb)
        {
            lead[para]=parb;
            weightsum+=arr[i].weight;
        }
    }
    cout<<weightsum<<"\n";
	return 0;
}
