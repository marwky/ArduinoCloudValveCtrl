// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>
#include "secrets/arduino-cloud-secrets.h"

const char DEVICE_LOGIN_NAME[]  = "c03b713e-bd34-4dcc-8364-500a9ceb4783";

const char SSID[] = SECRET_SSID;    // Network SSID (name)
const char PASS[] = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onValve1StateChange();
void onValve2StateChange();
void onValve1Change();
void onValve2Change();

int valve1_state;
int valve2_state;
bool valve1;
bool valve2;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(valve1_state, READWRITE, ON_CHANGE, onValve1StateChange);
  ArduinoCloud.addProperty(valve2_state, READWRITE, ON_CHANGE, onValve2StateChange);
  ArduinoCloud.addProperty(valve1, READWRITE, ON_CHANGE, onValve1Change);
  ArduinoCloud.addProperty(valve2, READWRITE, ON_CHANGE, onValve2Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);