#ifndef PROCESS_H
#define PROCESS_H

class Process {
    public:
        int id;
        int timeRequired;
        Process(int id, int timeRequired) : id(id), timeRequired(timeRequired) {} //constructor having name Process and parameters id, timeRequired
        
        // Overload the > operator for comparison
        bool operator>(const Process& other) const {
            return timeRequired > other.timeRequired;
        }
};

#endif // PROCESS_H