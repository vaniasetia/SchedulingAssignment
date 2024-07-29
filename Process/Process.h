#ifndef PROCESS_H
#define PROCESS_H

class Process{
    public:
        int id;
        int timeRequired;
        Process(int id, int timeRequired) : id(id), timeRequired(timeRequired) {} //constructor having name Process and parameters id, timeRequired
        static bool compareProcesses(const Process &a, const Process &b) {
            return a.timeRequired < b.timeRequired;
        }
};

#endif // PROCESS_H