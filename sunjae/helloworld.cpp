#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    printf("�ѱ� �׽�Ʈ�Դϴ�!");
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}