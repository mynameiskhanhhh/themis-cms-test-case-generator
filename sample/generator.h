#include "Random.h"
#include<bits/stdc++.h>

int n;

/*
Subtask 1 (Tests 1-10): n <= 1000
Subtask 2 (Tests 11-20): n <= 10^5
*/

void makeTest(ofstream &input, int testId)  {
    if (testId <= 10) n = rnd.nextInt(1, 1000);
    else n = rnd.nextInt(50000, 100000);
    input << n << "\n";
    for (int i=0; i<n; i++) input << rnd.nextInt(1, 1e9) << " ";
}
