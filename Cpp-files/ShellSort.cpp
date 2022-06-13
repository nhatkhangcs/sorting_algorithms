#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int next_Incre(int k){
    return log2(k)/log2(3);
}

void sort_seg(vector<int> &temp, int seg, int k, int n){
    int curr = seg + k;
    while(curr < n){
        int here = temp[curr];
        int step = curr - k;
        while(step >= 0 && here < temp[step]){
            temp[step + k] = temp[step];
            step--;
        }

        temp[step + k] = here;
        curr = curr + k;
    }
}

void InsertSort(vector<int> &temp, int n){
    int k = log2(n)/log2(3);
    while(k >= 1){
        int seg = 1;
        while(seg <= k){
            sort_seg(temp, seg, k, n);
            seg = seg + 1;
        }
        k = next_Incre(k);
    }
}
