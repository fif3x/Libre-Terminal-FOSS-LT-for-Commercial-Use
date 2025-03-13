#include "LibreTerminalHeaders/networkFOSS-LT.h"
#include <cstdlib>
#include <string>
#include <iostream>

void show_ip(){
    system("ipconfig"); //execute command
};
void ping(){
    std::string ip; //declare ip
    std::cout << "IP to ping: "; //ask for ip
    std::getline(std::cin, ip); //capture the entire ip with the function getline
    std::string pingCommand = "ping " + ip; //create the command
    system(pingCommand.c_str()); // Execute the command
};
void traceRoute(){
    std::string ip; //declare ip
    std::cout << "Enter ip to traceroute: "; //ask for ip to traceroute
    std::getline(std::cin, ip); //capture the entire ip with the function getline
    std::string traceRouteCommand = "tracert " + ip + " 4"; //create the command
    system(traceRouteCommand.c_str()); //execute the command
};
void stats(){
    system("netstat"); //execute command
};