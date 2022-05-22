// Design Your own Manipulator to Provide the Following Output Specification For printing Money Value: 
// a) 10 Columns Width
// b) The Character '$' At the Beginning
// c) Two Digits Precision
// d) Filling of Unused Spaces with ' * '
// e) Trailing Zeros Shown

#include <bits/stdc++.h>
using namespace std;

int main()
{    
    cout << "$" << setw(10) << setprecision(2) << fixed << 12345.6789 << endl;
    return 0;
}

  