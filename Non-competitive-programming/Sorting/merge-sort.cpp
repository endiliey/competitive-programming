#include <iostream>

using std::cout; using std::cin; using std::endl;

void Merge(int s[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - (m + 1) + 1;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (int i = 0; i < n1; i++)
        L[i] = s[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = s[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] > R[j])
        {
            s[k] = R[j];
            j++;
        }
        else
        {
            s[k] = L[i];
            i++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        s[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        s[k] = R[j];
        j++;
        k++;
    }

}

void MergeSort(int s[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    else
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        MergeSort(s, l, m);
        MergeSort(s, m + 1, r);

        Merge(s, l, m, r);
    }
}

int main()
{
    int n = 9;
    int v1[n] = {5, 6, 7, 3, 2, 1, 8, 4, 9};

    cout << "Before sorting: " << endl;
    for (auto val : v1)
    {
        cout << val << " ";
    }

    cout << endl;
    // Merge-sort
    MergeSort(v1, 0, 8);

    cout << "After sorting: " << endl;
    for (auto val : v1)
    {
        cout << val << " ";
    }

    return 0;
}
