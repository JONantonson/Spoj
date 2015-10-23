#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
    unsigned gates, temporary;
    cin >> gates;
    std::vector<int> tab, range;
    while(cin >> temporary)
            tab.push_back(temporary);
    for(std::vector<int>::iterator it = tab.begin(); it != (tab.end() - gates); it++)
    {
        if( (*it + 30) > (*(it + gates)) )
        {
            range.push_back(*(it + gates));
            range.push_back(*it + 30);
        }
    }
    std::vector<int>::iterator y = range.begin() + 1, first = range.begin();
    cout << "[" << *first << " - ";
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
            cout << "[" << *first << " - ";
        }
        y+=2;
    }
    return 0;
}
