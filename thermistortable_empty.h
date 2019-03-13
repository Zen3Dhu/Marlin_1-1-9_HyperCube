/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Trianglelab ATC Semitec 104GT-2 104NT-4-R025H42G
const short temptable_99[][2] PROGMEM = {
  { OV(   1), 713},
  { OV(  14), 300}, 
  { OV(  16), 290},
  { OV(  19), 280},
  { OV(  23), 270},
  { OV(  27), 260},
  { OV(  31), 250}, 
  { OV(    ),     }, //265
  { OV(    ),     }, //260
  { OV(    ),     }, //255
  { OV(    ),     }, //250 
  { OV(    ),     }, //245 
  { OV(    ),     }, //240 
  { OV(    ),     }, //235 
  { OV(    ),     }, //230 
  { OV(    ),     }, //225 
  { OV(    ),     }, //220 
  { OV(    ),     }, //215 
  { OV(    ),     }, //210 
  { OV(    ),     }, //205 
  { OV(    ),     }, //200 
  { OV(    ),     }, //195 
  { OV(    ),     }, //190 
  { OV(    ),     }, //185 
  { OV(    ),     }, //180 
  { OV(    ),     }, //170 
  { OV(    ),     }, //160 
  { OV(    ),     }, //150 
  { OV(    ),     }, //140 
  { OV(    ),     }, //130 
  { OV(    ),     }, //120 
  { OV(    ),     }, //110 
  { OV(    ),     }, //100 
  { OV(    ),     }, // 90 
  { OV(    ),     }, // 80
  { OV(    ),     }, // 70
  { OV(    ),     }, // 60
  { OV(    ),     }, // 50
  { OV(    ),     }, // 40 
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
