#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Point{
    int x,y;
};


bool compCord(Point p, Point q){
    return(p.x > q.x);
}

int main()
{
    cout<<"Sort in Array: "<<endl;
    int arr[] = {9,21,47,4,5,87,11};
    sort(arr, arr+7, greater<int>());
    for(auto i : arr)
    {
        cout<<i<<" ";
    }


    cout<<endl<<endl<<"Sort in Vector: "<<endl;
    vector<int> v={89,6,7,24,84,65,745,0};
    sort(v.begin(), v.end());
    for(auto i : v)
    {
        cout<<i<<" ";
    }


    cout<<endl<<endl<<"Sort with custom function: "<<endl;
    Point a[] ={{5,9},{7,6},{1,9},{3,8}};
    sort(a, a+4, compCord());
    for(auto i : a)
    {
        cout<<i.x<<" "<<i.y<<" "<<endl;
    }
}