#include<bits/stdc++.h>
using namespace std;


bool isPreOfBST(vector<int>& pre){

int n=pre.size();
stack<int>s;
int root=INT_MIN;
for(int i=0;i < n;i++){
  if(pre[i] < root)  //check whether the right of root is greater or not
    return false;

  while(!s.empty() && s.top() < pre[i]){
    root=s.top();
    s.pop();
  }
  s.push(pre[i]);
}
return true;
}

int main(){

int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i < n;i++)
  cin>>v[i];
  cout<<isPreOfBST(v)<<endl;
}

  return 0;
}
