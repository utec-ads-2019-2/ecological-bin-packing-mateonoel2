#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int b1; int g1; int c1;
    int b2; int g2; int c2;
    int b3; int g3; int c3;

    string output, bins[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};

    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){

    int move[6];
    long int min = 1000000000000000000;
    int bin=0;

    move[0] = b2 + b3 + c1 + c3 + g1 + g2;
    move[1] = b2 + b3 + g1 + g3 + c1 + c2;
    move[2] = c2 + c3 + b1 + b3 + g1 + g2;
    move[3] = c2 + c3 + g1 + g3 + b1 + b2;
    move[4] = g2 + g3 + b1 + b3 + c1 + c2;
    move[5] = g2 + g3 + c1 + c3 + b1 + b2;

    for(int i=0; i<6; i++){
        if (min > move[i]){
            min = move[i];
            bin = i;
        }
    }
    cout << bins[bin] <<" "<< min << '\n' ;
    }
    return 0;
}
