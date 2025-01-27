/*-----------------------------------------------------------------------

Problem Title: Deque-STL
Problem Link: https://www.hackerrank.com/challenges/deque-stl
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{

    deque<int> dq(k);

    int i;

    for (i = 0; i < k; i++) {
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(i);
    }

    for (; i < n; i++) {

        printf("%i ", arr[dq.front()]);

        while ((!dq.empty()) && dq.front() <= i - k)
            dq.pop_front();

        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(i);
    }

    printf("%i\n", arr[dq.front()]);
}

int main()
{

    int t;

    cin >> t;

    while (t > 0) {

        int n, k;

        cin >> n >> k;

        int i;

        int arr[n];

        for (i = 0; i < n; i++)

            cin >> arr[i];

        printKMax(arr, n, k);

        t--;
    }

    return 0;
}