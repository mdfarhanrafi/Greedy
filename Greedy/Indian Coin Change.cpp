

//Problem
//You are given an array of denominations and a value X. You need to find the
//minimum number of coins to make value X.

/*
  Approach
1. Start from the largest value, till we can include it, take it.
2. Else move on the smaller value.


*/

#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define ff first
#define se second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define sp ' ' 
#define nl endl 
#define vi vector<int> 
#define vs vector<string> 
#define mai map<ll,int> 
#define mas map<string ,int> 
#define ss  string 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
 if(n==1) return false;
 if(n==2) return true;
 for(int i=2;i*i<=n;i++){
 if(n%i==0)return false;
 }
 return true;
}

int main(){
fast
  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
int t=1;
//cin>>t;
while(t--){

     int n; cin >> n;
     vector<int> a(n);
     for(int i=0; i<n; i++) {
      cin >> a[i];
     }
     int val; cin >> val;
     sort(a.rbegin(), a.rend());
     int ans = 0;

     for(int i=0; i<n; i++) {
     int currCoin = a[i];
     ans += val/currCoin;
     val %= currCoin;
     if(val==0)
     break;
    }
     cout << ans << endl;












}
 return 0;

}
