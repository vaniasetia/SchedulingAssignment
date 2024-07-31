#include "ShortestJobRemainingFirst.h"

void ShortestJobRemainingFirst::insertProcess(int id, int timeRequired) {
    processQueue.push(Process(id, timeRequired));

    return;
}

int ShortestJobRemainingFirst::getCurrentProcess() {
   if (processQueue.empty()) {
        return -1;
    }
    return processQueue.top().id;
   
}

void ShortestJobRemainingFirst::incrementTime() {
    while (!processQueue.empty()) {
        auto currentProcess = processQueue.top();// Get the current process
        processQueue.pop();// Remove the process from the queue
        
        int remainingTime = currentProcess.timeRequired; // Remaining time of the current process
        int processId = currentProcess.id; // Id of the current process

        remainingTime--;
        currentTime++;

        if (remainingTime > 0) {
            processQueue.push(Process(processId, remainingTime)); // Add the process back to the queue
        }

       //some process is running
    } 
    
}
