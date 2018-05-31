/*-----------------------------------------------------------------------

Problem Title: Attending Workshops
Problem Link: https://www.hackerrank.com/challenges/attending-workshops
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


//Define the structs Workshop and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop {
    int start, duration, end;
};

struct Available_Workshops {
    int n;
    Workshop w[100000];
};

Available_Workshops* initialize(int start_time[], int duration[], int& n)
{
    Available_Workshops* ws = new Available_Workshops;

    ws->n = n;

    for (int i = 0; i < n; i++) {
        ws->w[i].start = start_time[i];
        ws->w[i].duration = duration[i];
        ws->w[i].end = start_time[i] + duration[i];
    }

    return ws;
}

bool comparator(Workshop& a, Workshop& b)
{
    return a.end < b.end;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{

    int n = ptr->n, max_workshops = 1;

    sort(ptr->w, (ptr->w) + n, comparator);

    Workshop* prev = &(ptr->w[0]);

    for (int i = 1; i < n; i++) {
        if (prev->end <= (ptr->w[i]).start) {
            prev = &(ptr->w[i]);
            max_workshops++;
        }
    }
    return max_workshops;
}