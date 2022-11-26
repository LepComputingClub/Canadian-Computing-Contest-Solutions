// John Liao

#include<bits/stdc++.h>

using namespace std;


int main() {
    int G, P, g, count = 0;
    cin >> G >> P;

    vector<int> gates;
    for (int i = 1; i <= G; i++) gates.push_back(i);


    vector<int>::iterator u;
    for (int i = 0; i < P; i++) {
        cin >> g;
        u = upper_bound(gates.begin(), gates.end(), g) - 1;
        
        if (u < gates.begin()) break;

        gates.erase(u);
        count += 1;
    }


    cout << count << endl;

    return 0;
}
