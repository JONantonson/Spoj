#include<iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int> tab, range;
    unsigned gates, temporary;
    cin >> gates;
    if(gates < 1 || gates > 10) return 0;
    while(cin >> temporary)
    {
        if(temporary > 1000000 || temporary < 1) return 0;
        tab.push_back(temporary);
    }
    if(tab.size() <= gates) return 0;
    for(std::vector<int>::iterator it = tab.begin(); it != (tab.end() - gates); it++)
    {
        if( (*it + 30) > (*(it + gates)) )
        {
            range.push_back(*(it + gates));
            range.push_back(*it + 30);
        }
    }
    if(range.empty()) return 0;
    std::vector<int>::iterator y = range.begin() + 1, first = range.begin();
    cout << "[" << *first << ",";
    while(1)
    {
        if (y == range.end() - 1)
        {
            cout << *y << ")" << endl;
            break;
        }
        if(*y < *(y + 1))
        {
            cout << *y << ")" << endl;
            first = y + 1;
            cout << "[" << *first << ",";
        }
        y+=2;
    }
    return 0;
}
