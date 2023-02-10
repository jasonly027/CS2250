#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

bool isUsed(char& address, vector<char>& used)
{
    for(auto &usedValues : used)
    {
        if(&address == &usedValues)
            return true;
    }
    return false;
}

int main() {
    vector<char> arr = {'A','A','A','A','B','B','B'};
    vector<bool> check(7, true);
    
    for(auto first=arr.begin(); first != arr.end(); ++first)
    {
        vector<char> used;
        cout << *first;
        used.push_back(*first);

        for(auto &second : arr)
        {
            if(isUsed(second,used))
            {
                continue;
            }
            cout << second;
            used.push_back(second);
            break;
        }
        
        
    }
    cout << endl;


    return 0;
}