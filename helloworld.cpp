#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int16_t> haha{3,2,4};

    vector<string> msg{"Hello", "C++", "World", "from", "VS Code!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}