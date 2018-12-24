#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int length;
    string A, B;
    cin >> length >> A >> B;

    int no_of_changes = 0;

    for(int i = 0; i < length; i++)
    {
        if(A[i] != B[i])
        {
            if(i + 1 < length && A[i + 1] != B[i + 1]) //swap
            {
                i++;
            }
            no_of_changes++;
        }
    }

    cout << no_of_changes;
    return 0;
}
