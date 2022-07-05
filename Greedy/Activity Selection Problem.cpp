/*  Problem: We are given n activities with their start and finish times. We have to select the
maximum number of activities such that no two selected activities overlap.
  
  Approch:
   1. Sort all the activities by their finish times
   2. Greedily select the first activity and jump on the next.
   3. If the starting time of current activity is greater than the ending time of
previously selected activity, then take it otherwise ignore it.




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

bool compare(pair<int,int> t1, pair<int,int> t2) {
if(t1.second == t2.second) {
t1.first < t2.first;
}
return t1.second < t2.second;
}
int main(){
fast
  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
  int n; cin >> n;
  vector<pair<int,int>> times;
  for(int i=0; i<n; i++) {
  int st, fn;
  cin >> st >> fn;
  times.push_back({st,fn});
 }
  sort(times.begin(), times.end(), compare);
  int ans = 1;
  int previousEndTime = times[0].second;
  for(int i=1; i<n; i++) {
  if(times[i].first >= previousEndTime) {
  ans++;
  previousEndTime = times[i].second;
  }
}
cout << ans << endl;

 return 0;

}
