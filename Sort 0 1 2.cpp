#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l = 0, m = 0 , h = n-1;

   while(m <= h){
      int ele = arr[m];
      switch(ele){
         case 0 : 
            swap(arr[l++], arr[m++]);
            break;
         case 1 : 
            m++; 
            break;
         case 2 :
            swap(arr[h--], arr[m]);
            break;
      }
   }
}