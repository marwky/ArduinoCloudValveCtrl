#ifndef _VALVE_H_
#define _VALVE_H_

/**
 * @brief Motorized ball valve representation 
 * 
 */
class Valve {
public:
    Valve();
    ~Valve();

    void open();
    void close();
    bool get_status();

private:
    bool status;
};

#endif  // _VALVE_H_
