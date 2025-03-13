#include "LibreTerminalHeaders/othrFOSS-LT.h"
#include "LibreTerminalHeaders/management.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <string>
#include <fstream>

bool allowFileManagement = false; //set allowFileManagement to false

std::string fileName; //create the string filename

void quitToDesktop(){
    exit(0); //execute the command
};
void allowFileManagementTRUE(){
    allowFileManagement = true; //set allowFileManagement to true
}
void allowFileManagementFALSE(){
    allowFileManagement = false; //set allowFileManagement to false
}
void parrot(){
    system("curl parrot.live"); //execute the command
};
void changeColor(){
    std::string color; //string color
    std::cout << "Color you want to change to (If you don't know, you can type Help to list commands.): "; //ask for the color
    std::getline(std::cin, color); //get the input
    if (color == "black" || color == "Black"){
        system("color 0"); //execute the command
    }
    else if (color == "blue" || color == "Blue"){
        system("color 1"); //execute the command
    }
    else if (color == "green" || color == "Green"){
        system("color 2"); //execute the command
    }
    else if (color == "aqua" || color == "Aqua"){
        system("color 3"); //execute the command
    }
    else if (color == "red" || color == "Red"){
        system("color 4"); //execute the command
    }
    else if (color == "purple" || color == "Purple"){
        system("color 5"); //execute the command
    }
    else if (color == "yellow" || color == "Yellow"){
        system("color 6"); //execute the command
    }
    else if (color == "white" || color == "White"){
        system("color 7"); //execute the command
    }
    else if (color == "gray" || color == "Gray"){
        system("color 8"); //execute the command
    }
    else if (color == "light_blue" || color == "Light_Blue"){
        system("color 9"); //execute the command
    }
    else if (color == "light_green" || color == "Light_Green"){
        system("color A"); //execute the command
    }
    else if (color == "light_aqua" || color == "Light_Aqua"){
        system("color B"); //execute the command
    }
    else if (color == "light_red" || color == "Light_Red"){
        system("color C"); //execute the command
    }
    else if (color == "light_purple" || color == "Light_Red"){
        system("color D"); //execute the command
    }
    else if (color == "light_yellow" || color == "Light_Yellow"){
       system("color E"); //execute the command
    }
    else if (color == "bright_white" || color == "Bright_White"){
        system("color F"); //execute the command
    }
};
void listCommands(){
    std::cout << "Commands:" << std::endl;
    std::cout << "1.show ip - shows IP (ipconfig)" << std::endl;
    std::cout << "2.exit - Exit program" << std::endl;
    std::cout << "3.parrot - shows a colourful animated parrot (curl parrot.live)" << std::endl;
    std::cout << "4.ping - pings an IP that is chosen" << std::endl;
    std::cout << "5.color - changes the terminal colors" << std::endl;
    std::cout << "-----color options: black, blue, green, aqua, red, purple, yellow, white, gray, light_blue, light_green, light_aqua, light_red, light_purple, light_yellow, bright_white" << std::endl;
    std::cout << "6.traceroute - traces an IP" << std::endl;
    std::cout << "7.systemInfo - shows the information of your system | alternatives to call the command: info, ssi, showSystemInfo, showInfo" << std::endl;
    std::cout << "8.netstats - shows the stats of your network | alternatives to call the command: stats, stat, netStats, netStat" << std::endl;
    std::cout << "9.run - runs a file with a specific path given | alternatives to call the command: file, openFile" << std::endl;
    std::cout << "10.compileCPP - compiles a C++ file with a specific path given | alternatives to call the command: compileC++" << std::endl;
    std::cout << "11.name - shows Hostname" <<  std::endl;
    std::cout << "12.listFiles - shows a list of the files in a current directory" << std::endl;
    std::cout << "13.browseFiles - you browse files with this command" << std::endl;
    std::cout << "14.fileTree - shows you a tree of all the files" << std::endl;
    std::cout << "15. @<SAFEMODE-OFF> - turns off safemode NOTE: IT ALLOWS YOU TO USE COMMANDS THAT MAY HARM FILES/YOUR COMPUTER/ANYTHING! - to revert: @<SAFEMODE-ON>" << std::endl;
    std::cout << "16. removeFile - removes a file | NEEDS SAFEMODE TO BE TURNED OFF | alternatives to call the command: rf" << std::endl;
    std::cout << "17. @<allowFileManagement-FALSE> - sets allowFileManagement to false - to revert: @<allowFileManagement-TRUE>" << std::endl;
    std::cout << "18. manageFile - manages files (writing, reading) | alternatives to call command: fileManagement, mf" << std::endl;
};
void fileManagement(){
    std::string operation; //string operation
    std::string text; //string text
    std::cout << "Select operation: 1) Write to/Create a file, 2) Read from a file: "; //ask for the operation
    getline(std::cin, operation); //capture the operation with the function getline
    if (operation == "1"){
        std::cout << "File name (must be in same folder as the .exe file): "; //ask for the file name
        std::getline(std::cin, fileName); //capture the file name with the function getline
        std::ofstream file(fileName);  //create/find the file
        std::cout << "Message: "; //ask for the message
        std::string message; //string message
        std::getline(std::cin, message); //capture the message with the function getline
        file << message; //write the message to the file
        file.close(); //close the file
    }
    if (operation == "2"){
        std::cout << "File name (must be in same folder as the .exe file): "; //ask for the file name
        std::getline(std::cin, fileName); //capture the file name with the function getline
        std::ifstream file(fileName); //open the file
        while (getline(file, text)){ 
            std::cout << text; //read the file and output it
        }
        std::cout << "\n";
    }
    
};