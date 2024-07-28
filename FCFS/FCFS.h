#ifndef FCFS_H
#define FCFS_H

#include <queue>

class FCFS {
public:
    void insertProcess(int id, int timeRequired);
    int getCurrentProcess();
    void incrementTime();

private:
    int currentTime = 0;
    // TODO: add any required data structures here
};

#endif // FCFS_H
