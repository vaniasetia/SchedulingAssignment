CXX = g++
CXXFLAGS = -IFCFS -IRoundRobin -IShortestJobFirst -IShortestJobRemainingFirst

all:
	$(CXX) $(CXXFLAGS) FCFS/FCFS.cpp RoundRobin/RoundRobin.cpp ShortestJobFirst/ShortestJobFirst.cpp ShortestJobRemainingFirst/ShortestJobRemainingFirst.cpp tests/main.cpp -o tests/test