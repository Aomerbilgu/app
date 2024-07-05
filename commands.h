#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <unordered_map>
//#include "command.h"

// Command arayüzü
class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};

// Concrete Commands
class MenuCommand : public Command {
public:
    void execute() override;
};

class PLCTestCommand : public Command {
public:
    void execute() override;
};

class ChargerTestCommand : public Command {
public:
    void execute() override;
};

class LEDTestCommand : public Command {
public:
    void execute() override;
};

//PLC COMMANDS
class ekb_start_takeoff : public Command {
public:
    void execute() override;
};
class drone_takeoff_complated : public Command {
public:
    void execute() override;
};
class ekb_land_start : public Command {
public:
    void execute() override;
};
class drone_land_completed : public Command {
public:
    void execute() override;
};
class ekb_ready_takeoff : public Command {
public:
    void execute() override;
};
class ekb_closed : public Command {
public:
    void execute() override;
};
class ekb_ready_to_land : public Command {
public:
    void execute() override;
};
class ekb_land_completed : public Command {
public:
    void execute() override;
};
class ac220_lost : public Command {
public:
    void execute() override;
};
class table_motor_alarm : public Command {
public:
    void execute() override;
};
class x_axis_motor_alarm : public Command {
public:
    void execute() override;
};
class y_axis_motor_alarm : public Command {
public:
    void execute() override;
};
class doors_motor_alarm : public Command {
public:
    void execute() override;
};
class table_limit_exceed_alarm : public Command {
public:
    void execute() override;
};
class centering_limit_exceed_alarm : public Command {
public:
    void execute() override;
};
class doors_limit_exceed_alarm : public Command {
public:
    void execute() override;
};

//CHARGER COMMANDS
class read_status : public Command {
public:
    void execute() override;
};
class start_charge : public Command {
public:
    void execute() override;
};
class start_discharge : public Command {
public:
    void execute() override;
};
class start_cycle : public Command {
public:
    void execute() override;
};
class start_monitor : public Command {
public:
    void execute() override;
};
class select_preset : public Command {
public:
    void execute() override;
};
class press_enter : public Command {
public:
    void execute() override;
};
class clear_error : public Command {
public:
    void execute() override;
};
class stop : public Command {
public:
    void execute() override;
};


//LED COMMANDS
class green_on : public Command {
public:
    void execute() override;
};
class green_off : public Command {
public:
    void execute() override;
};
class green_blink : public Command {
public:
    void execute() override;
};
class green_flash : public Command {
public:
    void execute() override;
};
class red_on : public Command {
public:
    void execute() override;
};
class red_off : public Command {
public:
    void execute() override;
};
class red_blink : public Command {
public:
    void execute() override;
};
class red_flash : public Command {
public:
    void execute() override;
};
class orange_on : public Command {
public:
    void execute() override;
};
class orange_off : public Command {
public:
    void execute() override;
};
class orange_blink : public Command {
public:
    void execute() override;
};
class orange_flash : public Command {
public:
    void execute() override;
};



// Komutları işlemek için fonksiyon
bool processCommand(const std::string& command);

// Komut kabuğunu çalıştıran fonksiyon
void runCommandShell();

void initializeCommandMaps();


#endif // COMMANDS_H
