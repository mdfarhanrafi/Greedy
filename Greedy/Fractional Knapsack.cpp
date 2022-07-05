/*
Problem
We are given n items with {weight, value} of each item and the capacity of
knapsack (bori) W. We need to put these items in the knapsack such that the final
value of items in the knapsack is maximum.

Approach (Think greedily)
1. Calculate value per unit weight.
2.Sort in decreasing order according to value/weight.
3.Pick from the starting till our knapsack has capacity.

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
struct item {
double value, weight, valuePerWeight;
};
bool compare(item i1, item i2) {
return i1.valuePerWeight > i2.valuePerWeight;
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
    double W;
    vector<item> items;
    for(int i=0; i<n; i++) {
    double v,w;cin >> v >> w;
    items.push_back({v,w,v/w});
    }
    double W; cin >> W;
    sort(items.begin(), items.end(), compare);
    int ans = 0;
   for(int i=0; i<n; i++) {
   if(W >= items[i].weight) {
   W -= items[i].weight;
   ans += items[i].value;
   }
   else {
    ans += W * items[i].valuePerWeight;
    W = 0;
    break;
   }
}
  cout << ans << endl;



}
 return 0;

}
