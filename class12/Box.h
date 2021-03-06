using namespace std;
class Box{
    public:
        Box();
        Box(int w, int h, int d);
        Box(const Box&);
        virtual ~Box(); //virtual destructor
        int volume() const;
        virtual void print(); //virtual --> dynamic binding
        void set(int, int, int);
        bool compare(Box);
        bool operator>(const Box&) const;
        bool operator>(int) const;
    private:
        int w,h,d;
};
