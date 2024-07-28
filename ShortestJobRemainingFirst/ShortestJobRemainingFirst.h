#ifndef SHORTESTJOBREMAININGFIRST_H
#define SHORTESTJOBREMAININGFIRST_H

#include <vector>
#include <algorithm>

class ShortestJobRemainingFirst {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;
    // TODO: add any required data structures here
};

#endif // SHORTESTJOBREMAININGFIRST_H
