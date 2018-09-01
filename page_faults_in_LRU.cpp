#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int total, i, j, pageFaults = 0, flag = 0;
        cin >> total;
        int* pages = new int[total];
        for(i = 0; i < total; i++)
            cin >> pages[i];

        int capacity;
        cin >> capacity;
        int* frames = new int[capacity];
        for(i = 0; i<capacity; i++)
        {
            frames[i] = -1;
        }

        for(i = 0; i < total; i++)
        {
            flag = 0;
            int curr = pages[i];

            for(j = 0; j < capacity; j++)
            {
                if(frames[j] == curr)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
            {
                //found : no page fault
                for(int k = j; k < capacity; k++)
                {
                    frames[k] = frames[k+1];
                }
                frames[capacity - 1] = curr;
            }
            else
            {
                //not found : page fault
                pageFaults++;
                j = capacity - 1;
                for(int k = 0; k < j; k++)
                    frames[k] = frames[k+1];
                frames[j] = curr;
            }
        }
        cout << pageFaults << "\n";
    }
    return 0;
}
