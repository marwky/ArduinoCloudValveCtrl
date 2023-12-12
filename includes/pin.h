
#ifndef _PIN_H_
#define _PIN_H_

/**
 * @brief Pin representation 
 * 
 */
class Pin {
public:

    enum Mode {
        INPUT_PIN,
        OUTPUT_PIN
    };

    Pin(uint8_t pin, Mode mode);
    ~Pin();

    bool read();
    void write(bool val);
    void set();
    void clr();

private:
    uint8_t mId;
    Mode mMode;
};

#endif  // _PIN_H_
