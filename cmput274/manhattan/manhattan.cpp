#include <iostream>
using namespace std;

int main() {
    int m,x,y;
    cin >> m;
    int res[m],xp[m],yp[m];
    for (int i = 0; i < m; i++) {
        cin >> xp[i] >> yp[i];
    }
    
        cin >> xp >> yp;
    for (int i = 0; i < m; i++) {
        res[i] = 0;
        if (xp >= x) res[i] += xp - x;
        else res[i] += x - xp;
        if (yp >= y) res[i] += yp - y;
        else res[i] += y - yp;     
    }
    for (int i = 0; i < m; i++) {
        cout << res[i] << " ";
    }
    return 0;
}