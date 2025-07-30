#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int operations()
{
    unordered_map<string, int> map;

    // insert
    pair<string, int> my_pair("apurv", 3);
    map.insert(my_pair);
    map["kulkarni"] = 4;

    // find or access
    cout << map["apurv"] << endl;
    cout << map.at("kulkarni") << endl;
}

int main()
{
    unordered_map<int, string> um = {{101, "DevOps"}, {102, "Digital Marketing"}, {103, "Software testing and quality analysis"}};

    unordered_map<int, string>::iterator i = um.begin();
    while (i != um.end())
    {
        cout << i->first << " ";
        cout << i->second << endl;
        i++;
    }
    cout << endl;
    um.at(102) = "DIM";
    um.insert(make_pair(104, "start up"));
    um.erase(101);

    unordered_map<int, string>::iterator j = um.begin();
    while (j != um.end())
    {
        cout << j->first << " ";
        cout << j->second << endl;
        j++;
    }

    operations();
}