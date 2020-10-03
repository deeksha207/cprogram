/*
Given two random integer arrays, print their intersection. That is, print all the elements that are present in both the given arrays.
Input arrays can contain duplicate elements.
Note : Order of elements are not important
*/

#include <stdio.h>
void intersection(int values1[],int size1,int values2[],int size2){
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2;j++){
                if(values1[i]==values2[j]){
                    printf(values2[j]);
                    values2[j]=-9999;
                    break;
                }
            }
        }
}
int main() {
  int values1[5];
  int values2[5];

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values1[i]);
  }
  
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values2[i]);
  }
  
  return 0;
}
