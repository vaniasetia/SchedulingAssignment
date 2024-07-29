#ifndef ROUNDROBIN_H
#define ROUNDROBIN_H

#include <queue>
#include "Process.h"

class RoundRobin {
public:
    RoundRobin(int quantum) : quantum(quantum) {}
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int quantum;
    int currentTime = 0;
    int currentQuantum = 0;
    std::queue<Process> processQueue;
};


#endif // ROUNDROBIN_H