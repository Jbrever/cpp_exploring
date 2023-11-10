#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // insert data into vector container
    
    v.push_back(20);
    v.emplace_back(30);
    cout << v[0]<<endl;

    // pair with vector

    vector<pair<int,int>> p;
    p.push_back({40,50});
    // p.emplace_back(60,70);
    cout<<p[0].first<<" "<<p[0].second<<endl;
      
    vector<int>he;
    he.push_back(10);
    he.push_back(20);

    cout<<he[1];




}