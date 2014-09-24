/*
 * Copyright (c) 2013 Geocent - Published under the MIT License.
 * See LICENSE for the full text of the license.
 */

#include <string>

#include "DefaultDevice.h"

const std::string DefaultDevice::displayDeviceName = "node-hmd default device";
const std::string DefaultDevice::deviceName = "Default Device";
const std::string DefaultDevice::deviceManufacturer = "Geocent LLC";

const std::string DefaultDevice::classToken = "default";

void DefaultDevice::getDeviceInfo(HMDDeviceInfo* deviceInfo) {
    deviceInfo->insertElement("displayDeviceName", displayDeviceName);
    deviceInfo->insertElement("productName", deviceName);
    deviceInfo->insertElement("manufacturer", deviceManufacturer);
    deviceInfo->insertElement("version", 1);
}

void DefaultDevice::getDeviceOrientation(HMDDeviceOrientation* deviceOrientation) {
    deviceOrientation->yaw = 0.0;
    deviceOrientation->pitch = 0.0;
    deviceOrientation->roll = 0.0;
}
