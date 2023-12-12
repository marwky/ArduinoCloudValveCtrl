#ifndef _LIMIT_SWITCH_H_
#define _LIMIT_SWITCH_H_

/**
 * @brief Relay representation 
 * 
 */
class LimitSwitch {
public:
    LimitSwitch();
    ~LimitSwitch();

    bool get_status();

private:
    bool status;

    
};

#endif  // _LIMIT_SWITCH_H_
