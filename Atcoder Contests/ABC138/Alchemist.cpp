#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  float x;
  cin>>n;
  vector <float> vi;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    vi.emplace_back(x);
  }

  sort(vi.begin(),vi.end());

   float temp = (vi[0]+vi[1])/2;

  for(int i=1;i<n-1;i++)
  {
    temp=(temp+vi[i+1])/2;
  }

  cout<<temp;
}
