#include <iostream>
#include <string>
using namespace std;

// base class or main or parent or original class
class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea constructor called" << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method" << endl;
    }
    virtual void serve() const
    {
        cout << "Sreving " << servings << " cup of tea with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea Destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green tea constructor called" << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
    }

    ~GreenTea()
    {
        cout << "Green tea destructor called" << endl;
    }
};
class MasalaChai : public Tea
{
public:
    MasalaChai(int serve) : Tea("Masala Tea", serve)
    {
        cout << "Masala tea constructor called" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << " with spices and milk" << endl;
    }

    ~MasalaChai()
    {
        cout << "Masala tea destructor called" << endl;
    }
};

int main()
{
    // GreenTea greenTea(2);
    // MasalaChai masalaChai(5);

    // using pointers
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaChai(3);
    tea1->brew();
    tea1->serve();
    
    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
}