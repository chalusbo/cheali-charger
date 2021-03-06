/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef Turnigy_MEGA_400Wx2_H_
#define Turnigy_MEGA_400Wx2_H_

#include "GTPowerA6-10.h"

#define MAX_CHARGE_V            ANALOG_VOLT(25.300) //25.3V
#define MAX_CHARGE_I            ANALOG_AMP(20.000)  //20A
#define MAX_CHARGE_P            ANALOG_WATT(400.000)              //400W

#define MAX_DISCHARGE_P         ANALOG_WATT(25.000)               //25W
#define MAX_DISCHARGE_I         ANALOG_AMP(5.000)   //5A


#define SMPS_UPPERBOUND_VALUE               2048
#define MAX_CALIBRATION_SMPS_VALUE          (SMPS_UPPERBOUND_VALUE/16)
#define DISCHARGER_UPPERBOUND_VALUE         512
#define MAX_CALIBRATION_DISCHARGER_VALUE    (DISCHARGER_UPPERBOUND_VALUE/14)


#endif /* Turnigy_MEGA_400Wx2_H_ */
