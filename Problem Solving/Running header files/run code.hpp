#pragma once

#include <bits/stdc++.h>
using namespace std;

#define ii int
#define ll long long
#define dd double
#define ff float
#define c char

#define in_arr  for(long long i=0 ;i<num ; i++){cin>>arr1[i];}
#define in_num_arr ll num ; cin>>num;ll arr1[num]; in_arr;
#define out_arr  for(long long i=0 ; i<num ; i++){cout<<arr1[i]<<" ";}
#define out_revers_arr  for(long long i=num-1 ; i>=0 ; i--){cout<<arr1[i]<<" ";}

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >


void Badawi(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin),
    freopen("output.txt", "w", stdout);
  #endif
}