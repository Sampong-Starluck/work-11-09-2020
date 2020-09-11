#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <unordered_map>

using namespace std;

// int main()
// {
//     int arr[] = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
//     int index, value;
//     cout << "Enter the position that you desire(smaller that 9): ";
//     cin >> index;
//     cout << "Enter the value that you want to input: ";
//     cin >> value;
//     cout << "Original array: ";
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     for(int i = 10-1;i > index ;i++)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[index] = value;
//     cout << "New array: \t";
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int j = 0, k = 0, n;
//     int arr[10], arr2[10], arr3[10];
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter the number in index " << i << ": ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             arr2[j] = arr[i];
//             j++;
//         }
//         else
//         {
//             arr3[k] = arr[i];
//             k++;
//         }
//     }
//     cout << "\nThe even numbers: ";
//     for(int i = 0;i < j;i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     cout << "\nThe odd numbers: ";
//     for(int i = 0;i < k;i++)
//     {
//         cout << arr3[i] << " ";
//     }
// }

/*count display and remove the duplicate element from array 
and 
count display the distinct element in array*/

void removeDuplicate(int arr[],int n)
{
    // Hash map which will store the elements which has appeared previously.
    unordered_map<int, bool> mp;

    for (int i = 0; i < n; ++i)
    {
        // Print the element if it is there in the hash map
        if (mp.find(arr[i]) == mp.end())
        {
            cout << arr[i] << " ";
        }
        // Insert the element in the hash map
        mp[arr[i]] = true;
    }
}

int main()
{
    int arrays[20], size, count;
    cout << "Enter the size of arrays: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number: ";
        cin >> arrays[i];
    }
    for(int i = 0;i < size;i++)
    {
        for(int j = i+1;j < size;j++)
        {
            if (arrays[i] == arrays[j])
            {
                count++;
                break;
            }
        }
    }
    cout << "There are " << count << " duplicated element in array." << endl;
    cout << "After remove the duplicated elements: ";
    removeDuplicate(arrays, size);
}