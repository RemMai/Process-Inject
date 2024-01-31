//
// Created by RemMai on 2024/1/30.
//


#pragma once
#include <string>
#include "windows.h"
#ifndef PROCESSHELPER_H
#define PROCESSHELPER_H


namespace Cpp_Project_HookHeplers {
    class ProcessHelper {
    public:
        HWND FindProcess(int processId);
        HWND *GetAllProcesses();
    };

    class ProcessInfo {
        std::string name;
        int pid;

        HWND GetProcessId();
    };
} // Cpp_Project_HookHeplers


#endif //PROCESSHELPER_H
