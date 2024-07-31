#ifndef SHORTESTJOBREMAININGFIRST_H
#define SHORTESTJOBREMAININGFIRST_H

#include <vector>
#include <algorithm>
#include <queue>
#include "Process.h"

class ShortestJobRemainingFirst {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;

    std::priority_queue <Process, std::vector<Process>, Process::compareProcesses> processQueue; // Min-heap
};

#endif // SHORTESTJOBREMAININGFIRST_H
