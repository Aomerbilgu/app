#include <iostream>
#include "commands.h"
#include <string>
#include <unordered_map>


// Global değişkenler
std::unordered_map<std::string, Command*> commandMaps[4];
int currentMenu;
std::string statecode;



// Komutları harita ile ilişkilendir
void initializeCommandMaps() {
    commandMaps[0] = {
        {"menu", new MenuCommand()},
        {"1", new PLCTestCommand()},
        {"2", new ChargerTestCommand()},
        {"3", new LEDTestCommand()},
    };

    commandMaps[1] = {
        {"menu", new MenuCommand()},
        {"1", new ekb_start_takeoff()},
        {"2", new drone_takeoff_complated()},
        {"3", new ekb_land_start()},
        {"4", new drone_land_completed()},
        {"5", new ekb_ready_takeoff()},
        {"6", new ekb_closed()},
        {"7", new ekb_ready_to_land()},
        {"8", new ekb_land_completed()},
        {"9", new ac220_lost()},
        {"10", new table_motor_alarm()},
        {"11", new x_axis_motor_alarm()},
        {"12", new y_axis_motor_alarm()},
        {"13", new doors_motor_alarm()},
        {"14", new table_limit_exceed_alarm()},
        {"15", new centering_limit_exceed_alarm()},
        {"16", new doors_limit_exceed_alarm()},
    };

    commandMaps[2] = {
        {"menu", new MenuCommand()},
        {"1", new read_status()},
        {"2", new start_charge()},
        {"3", new start_discharge()},
        {"4", new start_cycle()},
        {"5", new start_monitor()},
        {"6", new select_preset()},
        {"7", new press_enter()},
        {"8", new clear_error()},
        {"9", new stop()},
    };

    commandMaps[3] = {
        {"menu", new MenuCommand()},
        {"1", new green_on()},
        {"2", new green_off()},
        {"3", new green_blink()},
        {"4", new green_flash()},
        {"5", new red_on()},
        {"6", new red_off()},
        {"7", new red_blink()},
        {"8", new red_flash()},
        {"9", new orange_on()},
        {"10", new orange_off()},
        {"11", new orange_blink()},
        {"12", new orange_flash()},
    };
}

void MenuCommand::execute() {
    currentMenu=0;

    std::cout << "===============================" << std::endl;
    std::cout << "          COMMAND MENU       " << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << " - menu : Go to initial menu" << std::endl;

    std::cout << " - 1 : PLC TEST" << std::endl;
    std::cout << " - 2 : CHARGER TEST" << std::endl;
    std::cout << " - 3 : LED TEST" << std::endl;
   
    std::cout << " - exit : Programdan çıkar." << std::endl;
    std::cout << "===============================" << std::endl;
    
}

// PLC TEST menu
void PLCTestCommand::execute() {
    currentMenu=1;
    std::cout << "================================" << std::endl;
    std::cout << "      PLC TEST COMMAND MENU       " << std::endl;
    std::cout << "================================" << std::endl;
    std::cout << " - menu : Go to initial menu" << std::endl;
    std::cout << " - 1 : ekb_start_takeoff" << std::endl;
    std::cout << " - 2 : drone_takeoff_complated" << std::endl;
    std::cout << " - 3 : ekb_land_start" << std::endl;
    std::cout << " - 4 : drone_land_completed" << std::endl;

    std::cout << " - 5 : ERET, ekb_ready_takeoff" << std::endl;
    std::cout << " - 6 : ECLS, ekb_closed" << std::endl;
    std::cout << " - 7 : ERTL, ekb_ready_to_land" << std::endl;
    std::cout << " - 8 : ELCO, ekb_land_completed" << std::endl;

    std::cout << " - 9 : 220L, ac220_lost " << std::endl;
    std::cout << " - 10 : MTR1, table_motor_alarm" << std::endl;
    std::cout << " - 11 : MTR2, x_axis_motor_alarm" << std::endl;
    std::cout << " - 12 : MTR3, y_axis_motor_alarm" << std::endl;
    std::cout << " - 13 : MTR4, doors_motor_alarm" << std::endl;
    std::cout << " - 14 : LIMT, table_limit_exceed_alarm " << std::endl;
    std::cout << " - 15 : LIMM, centering_limit_exceed_alarm " << std::endl;
    std::cout << " - 16 : LIMK, doors_limit_exceed_alarm" << std::endl;

    std::cout << " - exit : Programdan çıkar." << std::endl;
    std::cout << "===============================" << std::endl;
}

void ChargerTestCommand::execute() {
    currentMenu=2;
    std::cout << "====================================" << std::endl;
    std::cout << "      Charger TEST COMMAND MENU       " << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << " - menu : Go to initial menu" << std::endl;
    std::cout << " - 1 : read_status" << std::endl;
    std::cout << " - 2 : start_charge" << std::endl;
    std::cout << " - 3 : start_discharge" << std::endl;
    std::cout << " - 4 : start_cycle" << std::endl;
    std::cout << " - 5 : start_monitor" << std::endl;
    std::cout << " - 6 : select_preset" << std::endl;
    std::cout << " - 7 : press_enter" << std::endl;
    std::cout << " - 8 : clear_error" << std::endl;
    std::cout << " - 9 : stop" << std::endl;

    std::cout << " - exit : Programdan çıkar." << std::endl;
    std::cout << "===============================" << std::endl;
}

void LEDTestCommand::execute() {
    currentMenu=3;
    std::cout << "====================================" << std::endl;
    std::cout << "      LED TEST COMMAND MENU       " << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << " - menu : Go to initial menu" << std::endl;
    std::cout << " - 1 : green_on" << std::endl;
    std::cout << " - 2 : green_off" << std::endl;
    std::cout << " - 3 : green_blink" << std::endl;
    std::cout << " - 4 : green_flash" << std::endl;
    std::cout << " - 5 : red_on" << std::endl;
    std::cout << " - 6 : red_off" << std::endl;
    std::cout << " - 6 : red_blink" << std::endl;
    std::cout << " - 7 : red_flash" << std::endl;
    std::cout << " - 8 : orange_on" << std::endl;
    std::cout << " - 9 : orange_off" << std::endl;
    std::cout << " - 10 : orange_blink" << std::endl;
    std::cout << " - 11 : orange_flash" << std::endl;
    std::cout << " - exit : Programdan çıkar." << std::endl;
    std::cout << "===============================" << std::endl;
}


// PLC COMMANDS
void ekb_start_takeoff::execute() {
    std::cout << "ekb_start_takeoff test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl;
 }
void drone_takeoff_complated::execute() {
    std::cout << "ekb_start_takeoff test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void ekb_land_start::execute() {
    std::cout << "ekb_land_start test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void drone_land_completed::execute() {
    std::cout << "drone_land_completed test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void ekb_ready_takeoff::execute() {
    std::cout << "ekb_ready_takeoff test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void ekb_closed::execute() {
    std::cout << "ekb_closed test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void ekb_ready_to_land::execute() {
    std::cout << "ekb_ready_to_land test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void ekb_land_completed::execute() {
    std::cout << "ekb_land_completed test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void ac220_lost::execute() {
    std::cout << "ac220_lost test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void table_motor_alarm::execute() {
    std::cout << "table_motor_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void x_axis_motor_alarm::execute() {
    std::cout << "x_axis_motor_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void y_axis_motor_alarm::execute() {
    std::cout << "y_axis_motor_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void doors_motor_alarm::execute() {
    std::cout << "doors_motor_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void table_limit_exceed_alarm::execute() {
    std::cout << "table_limit_exceed_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void centering_limit_exceed_alarm::execute() {
    std::cout << "centering_limit_exceed_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void doors_limit_exceed_alarm::execute() {
    std::cout << "doors_limit_exceed_alarm test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }

 //CHARGER
void read_status::execute() {
    std::cout << "read_status test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void start_charge::execute() {
    std::cout << "start_charge test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void start_discharge::execute() {
    std::cout << "start_discharge test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void start_cycle::execute() {
    std::cout << "start_cycle test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void start_monitor::execute() {
    std::cout << "start_monitor test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void select_preset::execute() {
    std::cout << "select_preset test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void press_enter::execute() {
    std::cout << "press_enter test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void clear_error::execute() {
    std::cout << "clear_error test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void stop::execute() {
    std::cout << "stop test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }


//LED
void green_on::execute() {
    std::cout << "green_on test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void green_off::execute() {
    std::cout << "green_off test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void green_blink::execute() {
    std::cout << "green_blink test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void green_flash::execute() {
    std::cout << "green_flash test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void red_on::execute() {
    std::cout << "red_on test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; } 
void red_off::execute() {
    std::cout << "red_off test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void red_blink::execute() {
    std::cout << "red_blink test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void red_flash::execute() {
    std::cout << "red_flash test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void orange_on::execute() {
    std::cout << "orange_on test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
void orange_off::execute() {
    std::cout << "orange_off test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void orange_blink::execute() {
    std::cout << "orange_blink test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 void orange_flash::execute() {
    std::cout << "orange_flash test active" << std::endl;
    statecode="ABCD";
    std::cout << "State Code :" << statecode<< std::endl; }
 

bool processCommand(const std::string& command) {//????????
    auto it = commandMaps[currentMenu].find(command);

    if (it != commandMaps[currentMenu].end()) {
        it->second->execute();
        return true;
    } else if (command == "exit") {
        return false;
    } else {
        std::cout << "Bilinmeyen komut: " << command << std::endl;
        return true;
    }
}

void runCommandShell() {
    std::string command;

    std::cout << "=======================" << std::endl;
    std::cout << "     SAVX TEST CLI " << std::endl;
    std::cout << "=======================" << std::endl;
    
    initializeCommandMaps();

   // dynamic_cast<MenuCommand*>(commandMaps[0]["menu"])->execute();
    commandMaps[0]["menu"]->execute();


    
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (!processCommand(command)) {
            break;
        }
    }

    std::cout << "Programdan çıkılıyor..." << std::endl;

    // Temizlik (allocated memory cleanup)
    for (int i = 0; i < 4; i++) {
        for (auto& pair : commandMaps[i]) {
            delete pair.second;
        }
    }
    
}
