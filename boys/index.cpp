#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int g, b;
    cin >> g >> b;
    while (true)
    {
        if (g == -1 && b == -1)
            break;
        else
        {
            int r;
            if (g > b)
                r = ceil((double)g / (b + 1));
            else
                r = ceil((double)b / (g + 1));
            cout << r << endl;
        }
    }
    return 0;
}