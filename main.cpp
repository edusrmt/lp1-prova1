#include <iostream>
#include <algorithm>

#include "janela.hpp"

using namespace janela;
using namespace std;

int main () {
    int W, H;
    int n, m;
    std::string id;
    int x1, y1, x2, y2, level;
    int xm, ym;

    Window *L;

    while (cin >> W >> H) {
        cin >> n >> m;

        vector<Window> L;

        for (int i = 0; i < n; i++) {            
            cin >> id >> x1 >> y1 >> x2 >> y2 >> level;

            if (x1 > x2 || x1 < 0 || y1 < 0 || x1 > W || y1 > H || x2 < 0 || y2 < 0 || x2 > W || y2 > H) {
                continue;
            }

            Coordinate cood1 = {x1, y1};
            Coordinate cood2 = {x2, y2};
            Window win = {id, cood1, cood2, level};
            L.push_back(win);
        }

        sort(L.begin(), L.end(), compareLevels);

        for (int i = 0; i < m; i++) {
            cin >> xm >> ym;
            Coordinate click = {xm, ym};

            vector<Window> subL = onClick(L, click);

            if (subL.size() == 0) {
                cout << "no window clicked" << endl;
            } else {

                for (Window w : subL) {
                    cout << w.id << " " << w.p1.x << " " << w.p1.y << " " << w.p2.x << " " << w.p2.y << " " << w.level << endl;
                }

                L = moveUp(L, subL[0].level);  

                cout << subL[0].id << endl;                   
            } 
        }

        for (Window w : L) {
            cout << w.id << " " << w.p1.x << " " << w.p1.y << " " << w.p2.x << " " << w.p2.y << " " << w.level << endl;
        }
    }

    return 0;
}