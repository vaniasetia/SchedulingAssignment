#include <iostream>
#include "FCFS.h"
#include "RoundRobin.h"
#include "ShortestJobFirst.h"
#include "ShortestJobRemainingFirst.h"

bool testFCFS() {
    FCFS scheduler;
    scheduler.insertProcess(1, 5);
    scheduler.insertProcess(2, 3);
    scheduler.insertProcess(3, 8);
    scheduler.insertProcess(4, 6);

    int expected[] = {1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4};
    int index = 0;

    while (scheduler.getCurrentProcess() != -1) {
        if (scheduler.getCurrentProcess() != expected[index++]) {
            return false;
        }
        scheduler.incrementTime();
    }

    return true;
}

bool testRoundRobin() {
    RoundRobin scheduler(2);
    scheduler.insertProcess(1, 5);
    scheduler.insertProcess(2, 3);
    scheduler.insertProcess(3, 8);
    scheduler.insertProcess(4, 6);

    int expected[] = {1, 1, 2, 2, 3, 3, 4, 4, 1, 1, 2, 3, 3, 4, 4, 1, 3, 3, 4, 4, 3, 3};
    int index = 0;

    while (scheduler.getCurrentProcess() != -1) {
        if (scheduler.getCurrentProcess() != expected[index++]) {
            return false;
        }
        scheduler.incrementTime();
    }

    return true;
}

bool testSJF() {
    ShortestJobFirst scheduler;
    scheduler.insertProcess(1, 5);
    scheduler.insertProcess(2, 3);
    scheduler.insertProcess(3, 8);
    scheduler.insertProcess(4, 6);

    int expected[] = {2, 2, 2, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3};
    int index = 0;

    while (scheduler.getCurrentProcess() != -1) {
        if (scheduler.getCurrentProcess() != expected[index++]) {
            return false;
        }
        scheduler.incrementTime();
    }

    return true;
}

bool testSJRF() {
    ShortestJobRemainingFirst scheduler;
    scheduler.insertProcess(1, 7);
    scheduler.insertProcess(2, 6);
    scheduler.insertProcess(3, 8);
    scheduler.insertProcess(4, 7);

    int expected[] = {2, 2, 2, 5, 5, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3};
    int index = 0;

    while (scheduler.getCurrentProcess() != -1) {
        if (scheduler.getCurrentProcess() != expected[index++]) {
            return false;
        }
        scheduler.incrementTime();
        if (index == 3) {
            scheduler.insertProcess(5, 2); // Injecting a new process in between
        }
    }

    return true;
}

void runTest(const std::string& testName, bool (*testFunc)(), int& passed, int& total) {
    total++;
    if (testFunc()) {
        std::cout << testName << ": Pass" << std::endl;
        passed++;
    } else {
        std::cout << testName << ": Fail" << std::endl;
    }
}

int main() {
    int passed = 0;
    int total = 0;

    runTest("Test FCFS", testFCFS, passed, total);
    runTest("Test Round Robin", testRoundRobin, passed, total);
    runTest("Test SJF", testSJF, passed, total);
    runTest("Test SJRF", testSJRF, passed, total);

    std::cout << "Total Tests Passed: " << passed << "/" << total << std::endl;
    std::cout << "Pass Percentage: " << (passed * 100.0 / total) << "%" << std::endl;

    return 0;
}
