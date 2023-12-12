#ifndef _RELAY_H_
#define _RELAY_H_

/**
 * @brief Relay representation 
 * 
 */
class Relay {
public:
    Relay();
    ~Relay();

    void open();
    void close();
    bool get_status();

private:
    bool status;
};

#endif  // _Relay_H_
