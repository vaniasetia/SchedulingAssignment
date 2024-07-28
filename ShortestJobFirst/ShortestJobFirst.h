#ifndef SHORTESTJOBFIRST_H
#define SHORTESTJOBFIRST_H

#include <vector>
#include <algorithm>

class ShortestJobFirst {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;
    // TODO: add any required data structures here
};

#endif // SHORTESTJOBFIRST_H
