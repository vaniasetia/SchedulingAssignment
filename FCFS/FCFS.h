#ifndef FCFS_H
#define FCFS_H

#include <queue>
#include "Process.h"

class FCFS {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;
    std::queue<Process> process_queue;
    
};



#endif // FCFS_H