#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++)
        scanf("%d", &arr[i]);

    sort(arr.begin(), arr.end());

    printf("%d\n", arr[k - 1]);
    return 0;
}
