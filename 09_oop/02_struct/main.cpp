#include <iostream>

using namespace std;

typedef struct Coordinates
{
    int x;
    int y;
}Point;

void drawLine(Point start, Point end){
    cout << " The Ending Co-ordinates are: " << start.x << " and " << start.y << endl;
    cout << " The Ending Co-ordinates are: " << end.x << " and " << end.y << endl;
}

int main(){
    Point p1;
    p1.x = 10;
    p1.y = 20;
    Point p2;
    p2.x = 30;
    p2.y = 40;
    drawLine(p1, p2);
}