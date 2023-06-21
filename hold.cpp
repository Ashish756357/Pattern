#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int row = n;
    while(row >= 1){
        
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }
        int p = 1;
        while(p<=2*(row-1)){
            cout<<"*";
            p++;
        }
        }
        cout<<endl;
        row--;
        return 0;
    }
/*
1234554321
1234**4321
123****321
12******21
1********1
  */
