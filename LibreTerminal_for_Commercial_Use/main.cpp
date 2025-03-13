#include <iostream> //include the iostream library (main library for input/output)
#include <string> //include the string library (to string variables)
#include <windows.h> //include the windows library (to use windows functions)
#include <cstdlib> //include the cstdlib library (to use system functions)
#include <thread> //include the thread library (to use thread functions)
#include <chrono> //include the chrono library (to use time functions)
#include "LibreTerminalHeaders/othrFOSS-LT.h" //include the header file with anything that doesn't fit in the other categories
#include "LibreTerminalHeaders/networkFOSS-LT.h" //include the header file with anything that has to do with networking
#include "LibreTerminalHeaders/systmFOSS-LT.h" //include the header file with anything that has to do with the system
#include "LibreTerminalHeaders/management.h" //include the header file for software management

//------------------------------------------------------------------------------------------------------

class kernel {
public: //doesn't need to be but yes
    static int krnl(){
        std::cout << "011011   O1O1O  00111  10111        0      001011\n";
        std::cout << "1        1   O  1      0            0        00\n";
        std::cout << "0101     O   1   001    101  ______ 1        11\n";
        std::cout << "1        O   1      1      0        1        10\n";
        std::cout << "1        1O1OO  01101  10110        011011   01\n";
        std::cout << "                                               \n";
        std::cout << "                                    ~ Free and Open Source Software - Libre Terminal\n"; //yes i did :)
        system("TITLE Libre Terminal"); //set the title of the terminal to "Libre Terminal"
        std::this_thread::sleep_for(std::chrono::milliseconds(3000)); //wait for 3000 milliseconds (3 seconds)
        system("cls"); //clear screen

        std::string command; //declare command as a string

        while (true) { // Infinite loop

            std::cout << "$>"; //looks good ig :)
            std::getline(std::cin, command); // Use getline to capture the entire command

            if (command == "exit" || command == "0o0001" || command == "quitToDesktop") {
                quitToDesktop(); //execute command
            }
            else if (command == "parrot" || command == "0o0002" || command == "animatedParrot") {
                parrot(); //execute command
            }
            else if (command == ""){}
            //nothing
            else if (command == "Help"){
                listCommands(); //execute the command
            }
            else if (command == "ping" || command == "0n0001") {
                ping(); //execute command
            }
            else if (command == "ip" || command == "showip" || command == "show ip" || command == "show_ip"){
                show_ip(); //execute command
            }
            else if (command == "stats" || command == "netstats" || command == "stat" || command == "netStats" || command == "netStat"){
                stats(); //execute command
            }
            else if (command == "trcrt" || command == "traceroute"){
                traceRoute(); //execute command
            }
            else if (command == "showSystemInfo" || command == "info" || command == "ssi" || command == "systemInfo" || command == "showInfo"){
                showSystemInfo(); //execute command
            }
            else if (command == "color" || command == "Color" || command == "clr"){
                changeColor(); //execute command
            }
            else if (command == "run" || command == "file" || command == "openFile"){
                openFile(); //execute command
            }
            else if (command == "compileCPP" || command == "compileC++"){
                compileCPP(); //execute command
            }
            else if (command == "name" || command == "Name"){
                showName(); //execute command
            }
            else if (command == "listFiles" || command == "list"){
                listFiles(); //execute command
            }
            else if (command == "browseFiles" || command == "changeDirectory" || command == "cd"){
                browseFiles(); //execute command
            }
            else if (command == "fileTree" || command == "tree" || command == "allFiles"){
                fileTree(); //execute command
            }
            else if (command == "@<SAFEMODE-OFF>"){
                safeModeOFF(); //execute command
            }
            else if (command == "@<SAFEMODE-ON>"){
                safeModeON(); //execute command
            }
            else if (command == "@<allowFileManagement-FALSE>"){
                allowFileManagementFALSE(); //execute command
            }
            else if (command == "@<allowFileManagement-TRUE>"){
                allowFileManagementTRUE(); //execute command
            }
            else if (command == "removeFile" || command == "rf"){
                removeFile(); //execute command
            }
            else if (command == "fileManagement" || command == "manageFile" || command == "mf"){
                fileManagement(); //execute command
            }

            else {
                std::cout << "Unknown command; Enter \"Help\" to see available commands.\n";
            }

        }

        return 0; //succesful
    }
};

//------------------------------------------------------------------------------------------------------

int main() {

    kernel::krnl(); //call the kernel

    return 0; //return 0 (success)

}