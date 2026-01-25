nclude <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    int ttlF, ttlB, ttlM;
    cin >> ttlF>> ttlB>> ttlM;
    
    int pedF, pedB, pedM;
    cin >> pedF>> pedB>> pedM;
    
    int difF, difB, difM;
    difF = pedF - ttlF;
    if (difF < 0) difF =  0;
    difB = pedB - ttlB;
    if (difB < 0) difB =  0;
    difM = pedM - ttlM;
    if (difM < 0) difM =  0;
