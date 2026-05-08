#ifndef MATHSNAKE_WINDOW_H
#define MATHSNAKE_WINDOW_H


class Window {
protected:
    int res; //resolution
    int fps;
public:
    Window(int res, int fps) : res(res), fps(fps) {};
};


#endif //MATHSNAKE_WINDOW_H
