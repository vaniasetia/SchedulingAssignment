# CPU Scheduling Algorithms Assignment

## Overview
In this assignment, you will implement four different CPU scheduling algorithms: First-Come, First-Served (FCFS), Round Robin, Shortest Job First (SJF), and Shortest Job Remaining First (SJRF). You will be provided with boilerplate code that includes a class for each algorithm with three functions: `void insertProcess(int id, int timeRequired)`, `int getCurrentProcess()`, and `void incrementTime()`.

## Details
- You will implement the four scheduling algorithms in the `FCFS`, `RoundRobin`, `SJF`, and `SJRF` classes.
- The `insertProcess` function will be called to insert a new process into the scheduler. The `id` parameter is the unique identifier for the process, and the `timeRequired` parameter is the amount of time required to complete the process.
- The `getCurrentProcess` function will return the ID of the current process that should be executed. If there are no processes in the scheduler, this function should return -1.
- The `incrementTime` function will be called to increment the time by one unit. This function should be used to update the scheduler's state based on the current time.
- You should implement the scheduling algorithms in such a way that the `getCurrentProcess` function returns the correct process ID based on the scheduling algorithm being used.
- You should implement the scheduling algorithms in such a way that the `incrementTime` function updates the scheduler's state based on the scheduling algorithm being used.
- You should implement the scheduling algorithms in such a way that the processes are executed in the correct order based on the scheduling algorithm being used.

## Instructions
- You should implement the four scheduling algorithms in the `FCFS`, `RoundRobin`, `SJF`, and `SJRF` classes.
- You should not modify the `tests` directory
- You can add any required data structures or helper functions to the classes by modifying the `.h` files.
- You should implement the logic in the `.cpp` files.

## Testing
From the root ddirectory fo the project, run the following commands to test your implementation:
```
make
./tests/test
```

