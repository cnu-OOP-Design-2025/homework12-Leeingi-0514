
#include <iostream>
#include <fstream>
#include <mutex>
#include <thread>
#include <string>

class Logger {
private:
    static std::unique_ptr<Logger> instance;
    static std::mutex init_mtx;
    static std::mutex write_mtx;
    std::ofstream logFile;


public:
    static Logger* getInstance(const std::string& filename = "Test/output2.txt") {
        return nullptr;
    }

    void log(const std::string& message) {
        /* TODO */
    }

};

std::unique_ptr<Logger> Logger::instance;
std::mutex Logger::init_mtx;
std::mutex Logger::write_mtx;

