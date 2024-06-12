#include <iostream>
struct process;

struct semaphore {
	int value;
	struct process* L;
};

struct process{
	int pid;
};

int main() {
	semaphore mutex;
	mutex.value = 1;

}
