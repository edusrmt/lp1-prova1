#include <iostream>

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

        L = new Window[n];

        for (int i = 0; i < n; i++) {            
            cin >> id >> x1 >> y1 >> x2 >> y2 >> level;
            Coordinate cood1 = {x1, y1};
            Coordinate cood2 = {x2, y2};
            Window win = {id, cood1, cood2, level};
            L[i] = win;           
            //cout << L[i].id << " " << L[i].p1.x << " "<< L[i].p1.y << " "<< L[i].p2.x << " "<< L[i].p2.y << " "<< L[i].level << " added !" << endl;
        }

        for (int i = 0; i < m; i++) {
            cin >> xm >> ym;
            Coordinate click = {xm, ym};
            Window *first = L;
            Window *last = first + ((n + 1) * sizeof(Window));

            vector<Window> subL = onClick(L, n, click);
            Window clicked = inFront(subL);
        }
    }

    return 0;
}