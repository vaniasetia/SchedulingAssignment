#include "ShortestJobFirst.h"

void ShortestJobFirst::insertProcess(int id, int timeRequired) {
    processQueue.push_back(Process(id, timeRequired));
    sort(processQueue.begin(), processQueue.end(), Process::compareProcesses);// make the queue sorted so that shortrest p is at front

    return;
}

int ShortestJobFirst::getCurrentProcess() {
    if (processQueue.empty()) {
        return -1;
    }
    return processQueue.front().id;
}

void ShortestJobFirst::incrementTime() {
    if (!processQueue.empty()) {
        processQueue.front().timeRequired -= 1; //this means that 1 unit of time has already passed
        if (processQueue.front().timeRequired <= 0) {
            processQueue.erase(processQueue.begin()); // Remove the process if it's completed
        }
        currentTime++;
    }
}

