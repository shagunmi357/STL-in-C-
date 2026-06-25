#include<bits/stdc++.h>
using namespace std;
int main(){
    pair <int,int> p = {1,3};
    pair <int,string> st = {2,"Hello"};
    pair <int , pair <int, int>> Sp = {1, {2,3}};
    pair <int , int > arr[] = {{1,2} ,{2,3}, {3,4}};

    cout<< st.first << " " << st.second<< endl;

    cout<< Sp.first<< " "<< Sp.second.first << Sp.second.second << endl;

    cout << arr[1].first<< " "<< arr[2].second<<endl;

    cout<< p.first<< " "<< p.second << endl;

    return 0;
}