#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int count = 0;
    ifstream File("text.txt");
    if(File.is_open()){
        string word;
        while(File >> word){
            count++;
        }
    }else{
        cout <<" Unable to the flie";
    }
    cout <<"The number of words are " <<count << endl;
    return 0 ;
}