#include "RoundRobin.h"

void RoundRobin::insertProcess(int id, int timeRequired) {
    processQueue.push(Process(id, timeRequired));
    return;
}

int RoundRobin::getCurrentProcess() {
    if (processQueue.empty()) {
        return -1; // Return -1 if there are no processes
    }
    return processQueue.front().id;// gives current process id
    return 0;
}

void RoundRobin::incrementTime() {
    if (!processQueue.empty()) {
        processQueue.front().timeRequired -= 1; // this means that 1 unit of time has passed
        currentQuantum += 1; // Increment the current quantum time
        currentTime += 1; // Increment the current time
        if (processQueue.front().timeRequired <= 0) {
            // Process completetion, so pop it
            processQueue.pop();
            currentQuantum = 0; // Reset the quantum time for the next process
        } else if (currentQuantum >= quantum) {
            // Time quantum for the current process is over, move it to the back of the queue
            Process next  = processQueue.front(); //p is object for class process
            processQueue.pop();//popping the aerlier alreAdy executing one 
            processQueue.push(next);
            currentQuantum = 0; 
        }
    }
}
    
   
