#include <iostream>
#include <string>
#include <windows.h>

std::string author = "t.me/Bengamin_Button t.me/XillenAdapter";

class RemoteAdmin {
public:
    void executeCommand(const std::string& cmd) {
        std::cout << "Выполнение команды: " << cmd << std::endl;
        system(cmd.c_str());
    }
    void getSystemInfo() {
        std::cout << "Информация о системе:" << std::endl;
        executeCommand("systeminfo");
    }
    void listProcesses() {
        std::cout << "Список процессов:" << std::endl;
        executeCommand("tasklist");
    }
};

int main() {
    std::cout << author << std::endl;
    RemoteAdmin admin;
    admin.getSystemInfo();
    admin.listProcesses();
    return 0;
}

