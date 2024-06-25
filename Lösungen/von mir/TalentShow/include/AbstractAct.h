#ifndef ABSTRACTACT_H
#define ABSTRACTACT_H

class AbstractAct;


class AbstractAct
{
public:
    AbstractAct(int intensity) : intensity(intensity) {};
    virtual ~AbstractAct() {};

    int getIntensity() const
    {
        return intensity;
    }


    virtual char getType() const = 0;

    virtual int getValue(const std::vector<AbstractAct*>&program, int index) const = 0;

protected:
    int intensity;

private:
};

#endif // ABSTRACTACT_H
