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
   {OV(   1), 713},
   {OV(  14), 300}, 
   {OV(  16), 290},
   {OV(  19), 280},
   {OV(  23), 270},
   {OV(  27), 260},
   {OV(  31), 250},
  
  { OV(  29), 247 }, //265
  { OV(  31), 243 }, //260
  { OV(  34), 238 }, //255
  { OV(  37), 234 }, //250 
  { OV(  40), 230 }, //245 
  { OV(  43), 226 }, //240 
  { OV(  47), 222 }, //235 
  { OV(  51), 218 }, //230 
  { OV(  56), 214 }, //225 
  { OV(  61), 210 }, //220 
  { OV(  67), 205 }, //215 
  { OV(  73), 201 }, //210 
  { OV(  78), 196 }, //205 
  { OV(  86), 192 }, //200 
  { OV( 100), 187 }, //195 
  { OV( 105), 183 }, //190 
  { OV( 116), 178 }, //185 
  { OV( 128), 173 }, //180 
  { OV( 154), 165 }, //170 
  { OV( 188), 155 }, //160 
  { OV( 230), 145 }, //150 
  { OV( 277), 136 }, //140 
  { OV( 336), 126 }, //130 
  { OV( 401), 116 }, //120 
  { OV( 475), 106 }, //110 
  { OV( 556),  96 }, //100 
  { OV( 636),  86 }, // 90 
  { OV( 711),  76 }, // 80
  { OV( 784),  67 }, // 70
  { OV( 847),  58 }, // 60
  { OV( 897),  48 }, // 50
  { OV( 936),  38 }, // 40 
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
