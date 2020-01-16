#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int data,ans,c,d,e,temp,temp2=0;
    vector<int> num;
    vector<int> num3;
    cin>>data>>ans;
    for(int i=0;i<data;i++)
    {
        cin>>c;
        num3.push_back(c);
        for(int o=0;o<c;o++)
        {
            cin>>temp;
            num.push_back(temp);
        }
    }

    for(int i=0;i<ans;i++)
    {
        cin>>d>>e;
        for(int o=0;o<d;o++)
        {
            temp2+=num3[o];
        }
        temp2=temp2+e;
        cout<<num[temp2]<<"\n";
        temp2=0;
    }
    return 0;
}


