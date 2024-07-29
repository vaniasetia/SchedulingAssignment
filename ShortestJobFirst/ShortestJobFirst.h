#ifndef SHORTESTJOBFIRST_H
#define SHORTESTJOBFIRST_H

#include <vector>
#include <algorithm>
#include "Process.h"

class ShortestJobFirst {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;
    std::vector<Process> processQueue; //a pq or sorted vetor
};

#endif // SHORTESTJOBFIRST_H