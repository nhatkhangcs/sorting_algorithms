#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void InsertSort(vector<int> &temp, int n){
    int curr = 1;
    while(curr < n){
        int here = temp[curr];
        int step = curr - 1;
        while(step >= 0 && here < temp[step]){
            temp[step + 1] = temp[step];
            step--;        
        }

        temp[step + 1] = here;
        curr++;
    }
}
