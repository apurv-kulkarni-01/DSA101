#include<iostream>
#include<vector>
using namespace std;



int main()
{
    // declaration 
    vector<int> vec;
    cout<<"Size of vector @ declaration: "<<vec.size()<<endl<<"NEVER USE sizeof() in vector"<<sizeof(vec)<<endl<<endl;

    // initialization 
    std::vector<int> v1 = { 1,2,3 };
    cout<<"Size of v1 @ declaration: "<<v1.size()<<endl;
    cout<<"at "<<v1.at(1)<<endl;    //out of bound safe - throws exception
    cout<<"[] "<<v1[1]<<endl<<endl;    //out of bound unsafe - throws random values

    cout<<"push_back initialized."<<endl<<endl;

    v1.push_back(4);    //append
    v1.push_back(5);    //append

    for(vector<int>::iterator i = v1.begin(); i!=v1.end(); i++)
    {
        cout<< *i <<" ";    //iterator i is a pointer to the container
    }
    cout<<endl<<endl;

    cout<<"pop_back initialized."<<endl<<endl;

    v1.pop_back();      //pop last element out   
    cout<<"Capacity: "<<v1.capacity()<<endl;

    for(vector<int>::iterator i = v1.begin(); i!=v1.end(); i++)
    {
        cout<< *i <<" ";    //iterator i is a pointer to the container
    }
    cout<<endl;

    // insert 
    vector<int>::iterator z = v1.begin();
    v1.insert(z, 69);

    cout<<endl;

    cout<<"insert initialized."<<endl<<endl;

    for(vector<int>::iterator i = v1.begin(); i!=v1.end(); i++)
    {
        cout<< *i <<" ";    //iterator i is a pointer to the container
    }
    cout<<endl;

    cout<<"Capacity: "<<v1.capacity()<<endl;

    // erase 
    vector<int>::iterator z1 = v1.begin();
    v1.erase(z1);

    cout<<endl;

    cout<<"erase initialized."<<endl<<endl;

    for(vector<int>::iterator i = v1.begin(); i!=v1.end(); i++)
    {
        cout<< *i <<" ";    //iterator i is a pointer to the container
    }
    cout<<endl;

    cout<<"Capacity: "<<v1.capacity()<<endl;    

    //swap - interchage values of 2 vectors

}