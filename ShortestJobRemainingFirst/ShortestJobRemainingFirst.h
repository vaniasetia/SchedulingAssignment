#ifndef SHORTESTJOBREMAININGFIRST_H
#define SHORTESTJOBREMAININGFIRST_H

#include <vector>
#include <algorithm>
#include "Process.h"

class ShortestJobRemainingFirst {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;
    std::vector<Process> processQueue;
};

#endif // SHORTESTJOBREMAININGFIRST_H
