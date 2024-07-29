CXX = g++-13
CXXFLAGS = -IFCFS -IRoundRobin -IShortestJobFirst -IShortestJobRemainingFirst -IProcess

all:
	$(CXX) $(CXXFLAGS) FCFS/FCFS.cpp RoundRobin/RoundRobin.cpp ShortestJobFirst/ShortestJobFirst.cpp ShortestJobRemainingFirst/ShortestJobRemainingFirst.cpp tests/main.cpp -o tests/test