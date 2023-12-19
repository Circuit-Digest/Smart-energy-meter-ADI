// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "0615a07b-c3c7-42a6-b0f9-b627d57552c0";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onCurrentChange();
void onVoltageChange();
void onPowerChange();

CloudElectricCurrent current;
CloudElectricPotential voltage;
CloudPower power;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(current, READWRITE, ON_CHANGE, onCurrentChange);
  ArduinoCloud.addProperty(voltage, READWRITE, ON_CHANGE, onVoltageChange);
  ArduinoCloud.addProperty(power, READWRITE, ON_CHANGE, onPowerChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);