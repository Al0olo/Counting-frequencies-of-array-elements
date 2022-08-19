#include <iostream>
#include <vector>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    fastread();
    int arr[100];
    int freq[100] = { 0 };
    bool visited[100] = { 0 };

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[arr[i]])
            continue;

        cout << arr[i] << " " << freq[arr[i]] << endl;
        visited[arr[i]] = 1;
        
    }

    return 0;
}
