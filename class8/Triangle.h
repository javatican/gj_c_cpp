class Triangle{
  public:
    Point p[3];
    float side[3];
    Triangle(Point&, Point&, Point&);
    float* get3Sides();
    void print();
};