# Janela

This programming project implements a simple window management system (e.g. FluxBox). It is capable of, given a click coordinate, create a list of all windows hit by click and detect wich one was clicked (the one on top). After that, it moves this window up, overlaying all others. Finally, it sorts windows by their areas.

## Execution

To compile the program, you have to use this command into project's directory:

    g++ -std=c++11 ./janela.cpp ./main.cpp -I ./ -o janela

After that, you can use this command to execute the program:

    ./janela < input.dat

Notice input.dat can be any text file that follows the project's input standard. Another option is to insert inputs from terminal after running the program. For this, use the following command into project's directory:

    ./janela

## Input Standard

A test case is has to follow this structure:
- One line with two integers 0 ≤ W ≤ 7680 and 0 ≤ H ≤ 4320, where `W` is desktop's width and `H` is desktop's height;
- One line with two integers 1 ≤ n ≤ 200 and 1 ≤ m ≤ 100, where `n` is the amount of windows and `m` is the amount of clicks;
- One sequence of `n` lines, each one containing all info of one individual window, being it one string `id` and five integers `x1`, `y1`, `x2`, `y2` and `level`. The first four integers represents cartesian coordinates of lower left `p1(x1, y1)` and upper right `p2(x2, y2)` corners of the window. Coordinate values must be into the ranges 0 ≤ x1, x2 ≤ W and 0 ≤ y1, y2 ≤ H. `level` represents the layer where the window is positioned and must be into the range 0 ≤ l ≤ 200;
- One sequence of `m` lines, each one with two integers 0 ≤ xm ≤ W e 0 ≤ ym ≤ H, representing the cartesian coordinates of mouse clicks.

## Output Standard

For each mouse click, the program writes:

- One sequence of `t` lines, being `t` the amount of windows hit by the click. Each line contains all info of one individual window in the sequence of input. The printing sequence is determined by the layer of each window;
- The `id` of the window clicked - the one on top of hit windows. If none windows are hit, the program writes `no window clicked`.

After all clicks are processed, the program writes:

- One sequence of `s` lines, begin `s` the amount of valid windows from input sorted by `level`;
- One blank line;
- One sequence of `s` lines, begin `s` the amount of valid windows from input sorted by their areas.

## Author

Carlos Eduardo Alves Sarmento (< *cealvesarmento@gmail.com* >) ![Twitter Follow](https://img.shields.io/twitter/follow/edusrmt.svg?style=social)