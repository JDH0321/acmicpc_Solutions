#include <iostream>
using namespace std;

int main(void)
{
    int N, mode;
    unsigned long long arr[20] = {0};
    cin >> N >> mode;

    arr[1] = 1;
    for(int i = 2 ; i < N ; i++)
    {
        arr[i] = i * arr[i-1];
    }

    if(mode == 1)
    {
        int k;
        cin >> k;


    }
    else
    {
        int su[21] = {0};
        for(int i = 1 ; i <= N ; i++)
            cin >> su[i];

        
    }

    return 0;
}
