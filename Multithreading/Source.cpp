#include <iostream>
#include <thread>
#include <mutex>

// You can use std::lock_guard if you want to be exception safe
std::mutex m;
int i = 0;

void RunThread() {
	// Thread gets a hold of the resources and locks it. The other threads wait while the thread executes
	m.lock();
	std::cout << i << " using resources" << std::endl;
	// No other thread can access variables i until m.unlock() is called
	i++;
	// Now other threads can access the lock
	m.unlock();
}

int main() {

	// threads unused and all functions doing nothing.

	// thread1 begins to go for resources
	std::thread thread1(RunThread);
	// thread2 begins to go for resources
	std::thread thread2(RunThread);
	// thread3 begins to go for resources
	std::thread thread3(RunThread);

	// thread1 finishes using resources
	thread1.join();
	// thread2 finishes using resources
	thread2.join();
	// thread3 finishes using resources
	thread3.join();

	return 0;
}