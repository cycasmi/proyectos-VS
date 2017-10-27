class Graphic
{
protected:
    int popularity;
    
public:
    virtual void printMe() = 0;
    virtual void getPopularity() = 0;
};
