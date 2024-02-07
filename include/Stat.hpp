#pragma once

class Stat {
public:
    int getStat(); // return temp stat if present 
    int getMod(); // return temp mod if present
    void setStat(int newStat);
    void setTempStat(int tempStat);
    void removeTempStat();
};