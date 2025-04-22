#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
private:
    double monthlyBonus;
    int reqTrainingHours;
    int atdTrainingHours;

public:
    TeamLeader() : ProductionWorker()
    {
        monthlyBonus = 0.0;
        reqTrainingHours = 0;
        atdTrainingHours = 0;
    }

    TeamLeader(std::string n, std::string id, std::string hDate, int s, double pRate, double b, int rTH, int aTH) : ProductionWorker(n, id, hDate, s, pRate)
    {
        monthlyBonus = b;
        reqTrainingHours = rTH;
        atdTrainingHours = aTH;
    }

    void setMonthlyBonus(double b)
    {
        monthlyBonus = b;
    }

    void setReqTrainingHours(int rTH)
    {
        reqTrainingHours = rTH;
    }

    void setAtdTrainingHours(int aTH)
    {
        atdTrainingHours = aTH;
    }

    double getMonthlyBonus() const
    {
        return monthlyBonus;
    }

    int getReqTrainingHours() const
    {
        return reqTrainingHours;
    }

    int getAtdTrainingHours() const
    {
        return atdTrainingHours;
    }
};

#endif