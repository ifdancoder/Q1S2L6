#include <string>
#include <iostream>
#include <fstream>

using namespace std;

namespace std {
    class endllManip
    {
    public:
        friend ostream& operator<< (ostream& out, const endllManip& endll);
    };

    ostream& operator<< (ostream& out, const endllManip& endll)
    {
        out << endl << endl << flush;
        return out;
    }
    endllManip endll;
}

int getInt()
{
    string tmp;
    bool f = true;

    while (f)
    {
        f = false;
        cout << "Input: ";
        cin >> tmp;
        for (int i = 0; i < tmp.size(); i++)
        {
            if (!isdigit(tmp[i]))
            {
                f = true;
                cerr << "Invalid input. Try again" << endl;
                break;
            }
        }
    }
    return stoi(tmp);
}

int main()
{
    // #1
    int integer = getInt();
    cout << "Your number is " << integer;

    // #2. Запихал свой манипулятор в пространство имен std))
    cout << endll;
    return 0;
}