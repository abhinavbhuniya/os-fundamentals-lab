#include <iostream>
#include <thread>

void worker() {
    std::cout << "Worker thread is running\n";
}

int main() {
    std::thread t(worker);
    t.join();
    std::cout << "Main thread finished\n";
    return 0;
}
