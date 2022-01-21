// To print the butterfly shape number pattern:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms:";
    cin >> n;
    for (int i = 1; i <= n / 2+1; i++)
    {
        for (int j = 1; j <= n; j++)

        {
             if (j > i && j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;

    }


    for (int i = n/2; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > i && j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}
