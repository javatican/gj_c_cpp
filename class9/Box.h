
class Box{
public:
    Box();
    Box(int w, int h, int d);
    Box(const Box&);
    ~Box();
    int volume();
    void print();
    void set(int, int, int);
    bool compare(Box);
    
private:
    int w,h,d;
};
