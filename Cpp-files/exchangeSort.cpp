#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ExchangeSort(vector <int> &num){
     int i, j;
     int temp;  
     int numLength = num.length( ); 
     for (i=0; i< (numLength -1); i++){
          for(j = (i+1); j < numLength; j++){
               if (num[i] < num[j]){
                   swap(num[i], num[j]);
               }
          }
     }
}
