class Point{
public:
    Point();
    Point(int, int);
    int getX();
    int getY();
    void moveTo(int, int);
    float distanceTo(Point&);
    void print();
private:
    int x,y;
    
};

