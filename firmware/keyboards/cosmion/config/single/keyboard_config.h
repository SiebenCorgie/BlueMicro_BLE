/*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"


#define KEYBOARD_SIDE SINGLE
// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  SINGLE

#define DEVICE_NAME_R                         "Cosmion_R"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_L                        "Cosmion_L"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                         "Cosmion"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "Cosmion_V1"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "siebencorgie.rs"                      /**< Manufacturer. Will be passed to Device Information Service. */



#define KEYMAP( \
      k00, k01, k02, k03, k04, k05,     k06, k07, k08, k09, k10, k11, \
      k12, k13, k14, k15, k16, k17,     k18, k19, k20, k21, k22, k23, \
      k24, k25, k26, k27, k28, k29,     k30, k31, k32, k33, k34, k35, \
      k36, k37, k38, k39, k40, k41,     k42, k43, k44, k45, k46, k47 \
) \
{ \
    { k00, k08, k16, k24, k32, k40 }, \
    { k01, k09, k17, k25, k33, k41 }, \
    { k02, k10, k18, k26, k34, k42 }, \
    { k03, k11, k19, k27, k35, k43 }, \
    { k04, k12, k20, k28, k36, k44 }, \
    { k05, k13, k21, k29, k37, k45 }, \
    { k06, k14, k22, k30, k38, k46 }, \
    { k07, k15, k23, k31, k39, k47 } \
}


#endif /* KEYBOARD_CONFIG_H */
