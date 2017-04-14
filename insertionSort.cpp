/* 
 * File:   insertionSort.cpp
 * Author: abhishek
 *
 * Created on 6 April, 2017, 8:02 PM
 */

#include <cstdlib>
#include <bits/stdc++.h>
#define MAX 50
using namespace std;


/*
 * 
 */
int main() {

    int a[MAX] = {0};
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    //insertion sort begins
    
    for(int i=2; i<=n; i++){
        int key = a[i];
        int j = i-1;
        while(j>=1 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    
    for(int i =1; i<=n; i++)
        cout<<a[i]<<"  ";
    cout<<endl;
    
    return 0;
}

