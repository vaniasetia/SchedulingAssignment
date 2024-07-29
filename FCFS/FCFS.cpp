#include "FCFS.h"

void FCFS::insertProcess(int id, int timeRequired) {
    process_queue.push(Process(id, timeRequired));
    return;
}

int FCFS::getCurrentProcess() {

    if (process_queue.empty()){
        return -1; //no processes have been pushed
    }

    return process_queue.front().id;
    // returns the id of the current process
    return 0;//idk the use of this
}

void FCFS::incrementTime() {
    if(!process_queue.empty()){
        process_queue.front().timeRequired -= 1; // this means that 1 unit of time has akready passed
        if(process_queue.front().timeRequired <= 0){ //When timeRequired = 0 -> the process has finished executing, and it can be removed 
            process_queue.pop();
        } 
        currentTime++;   
    }
    return;
}