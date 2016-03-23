
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = UINT32_MAX;
uint32_t t0 = 999U;
uint16_t x11 = 111U;
int64_t t1 = 2874156LL;
int32_t x18 = INT32_MAX;
uint64_t t2 = 194268979466LLU;
static int8_t x34 = 21;
int32_t x36 = INT32_MIN;
static int32_t t3 = 62;
int64_t x53 = 905664393044LL;
int32_t x55 = INT32_MAX;
int64_t t4 = -54630LL;
int8_t x58 = INT8_MAX;
static int16_t x85 = INT16_MIN;
uint16_t x92 = UINT16_MAX;
volatile int32_t t9 = -112312;
int32_t x100 = INT32_MIN;
uint32_t x117 = 987734U;
uint16_t x148 = 1U;
int64_t x152 = 113017814105090LL;
static uint16_t x162 = UINT16_MAX;
int64_t x191 = INT64_MIN;
volatile int32_t t22 = -15659;
int64_t x196 = 6LL;
uint8_t x204 = UINT8_MAX;
static volatile uint32_t t24 = 23395U;
int8_t x211 = INT8_MAX;
int32_t x214 = 194045;
static int64_t x273 = -1LL;
int64_t t31 = -2535325662667LL;
uint16_t x286 = 108U;
static int32_t x287 = 5227;
uint16_t x289 = 5055U;
int8_t x292 = -1;
uint16_t x299 = 103U;
volatile uint8_t x300 = 0U;
uint32_t x318 = 1U;
int32_t x319 = 216;
volatile uint32_t t35 = 17408U;
int32_t x321 = INT32_MAX;
static uint8_t x326 = UINT8_MAX;
uint64_t x327 = 363927LLU;
int32_t x332 = 23734;
volatile int64_t t38 = -801379LL;
volatile int32_t x333 = -84929;
uint32_t x342 = 8371459U;
uint16_t x350 = 2U;
static int32_t x352 = -1;
static volatile int16_t x359 = INT16_MIN;
static volatile int32_t t42 = -1617;
static int8_t x365 = INT8_MIN;
uint16_t x372 = 62U;
uint8_t x374 = 0U;
static volatile int64_t x377 = -1LL;
int32_t x394 = 218301;
uint64_t x397 = UINT64_MAX;
uint64_t x446 = 39361913LLU;
volatile uint64_t t52 = 7LLU;
int32_t x466 = 14332;
volatile int32_t x468 = INT32_MIN;
volatile int32_t t53 = 49;
int64_t t55 = -266296LL;
uint16_t x500 = 4U;
uint32_t x505 = 771U;
uint16_t x506 = 481U;
volatile uint16_t x513 = 3517U;
int8_t x514 = INT8_MAX;
static int32_t x516 = -2911465;
uint8_t x525 = 41U;
uint16_t x531 = 497U;
int64_t x533 = -1LL;
int32_t x534 = INT32_MAX;
static volatile int32_t t63 = -120984912;
static int32_t x559 = -1;
uint64_t x570 = 1618658LLU;
int32_t x571 = INT32_MAX;
uint64_t x598 = UINT64_MAX;
uint64_t t67 = 2915992LLU;
static int32_t x607 = -1;
int8_t x609 = 1;
static volatile int64_t t69 = 0LL;
int16_t x619 = -1;
uint32_t t70 = 28419616U;
int16_t x621 = INT16_MAX;
volatile int32_t t71 = 4;
static int64_t t72 = -66776256LL;
static int8_t x683 = 28;
static uint32_t x684 = UINT32_MAX;
int16_t x688 = INT16_MIN;
int8_t x696 = -21;
static int64_t x703 = INT64_MIN;
static uint64_t x713 = 402462LLU;
uint64_t x722 = UINT64_MAX;
static int64_t x736 = INT64_MIN;
volatile uint64_t t84 = 400679246717691095LLU;
int8_t x765 = INT8_MAX;
static uint32_t x769 = 978753714U;
volatile uint16_t x772 = UINT16_MAX;
volatile int32_t x785 = INT32_MIN;
int32_t x788 = -1;
int32_t t90 = 1;
int32_t x795 = INT32_MIN;
static volatile uint64_t x799 = 218333478431529905LLU;
static uint32_t x801 = 451744510U;
volatile int64_t x806 = 683LL;
uint8_t x818 = 3U;
int8_t x831 = INT8_MIN;
static int8_t x840 = -4;
uint16_t x901 = 0U;
uint8_t x902 = UINT8_MAX;
volatile int64_t x903 = 631LL;
int64_t x905 = 481192515880612LL;
int16_t x907 = INT16_MIN;
uint8_t x911 = UINT8_MAX;
uint32_t x924 = UINT32_MAX;
uint16_t x926 = 0U;
int16_t x931 = INT16_MIN;
int8_t x932 = INT8_MIN;
volatile uint64_t t112 = 880717229324714223LLU;
uint8_t x945 = 3U;
int16_t x946 = 3309;
int32_t t113 = -332;
volatile uint64_t x973 = 118LLU;
int8_t x977 = 0;
int32_t t115 = -458693374;
static volatile int64_t t116 = -302404590LL;
uint16_t x999 = UINT16_MAX;
volatile int16_t x1020 = -1;
volatile int16_t x1027 = 5809;
int32_t x1047 = -1;
uint32_t x1053 = UINT32_MAX;
uint32_t x1054 = 381484U;
uint32_t x1055 = UINT32_MAX;
static uint32_t t122 = 613231215U;
uint32_t x1058 = UINT32_MAX;
uint64_t x1060 = 466195076LLU;
volatile uint32_t t123 = 24539814U;
int16_t x1071 = -12379;
uint64_t x1082 = 22943205756299272LLU;
int32_t t127 = 3932;
static volatile uint64_t t128 = 862864LLU;
int8_t x1114 = INT8_MAX;
volatile uint64_t t130 = 14248643LLU;
uint16_t x1122 = UINT16_MAX;
int32_t t131 = 58284;
uint16_t x1130 = 6U;
volatile uint32_t t133 = 187074U;
volatile int32_t x1141 = INT32_MIN;
volatile uint64_t t134 = 446LLU;
static uint64_t x1146 = UINT64_MAX;
static volatile uint64_t t135 = 11880355596545LLU;
uint64_t x1154 = UINT64_MAX;
static uint64_t x1157 = UINT64_MAX;
int64_t x1169 = INT64_MIN;
int64_t x1180 = -1LL;
static int16_t x1195 = 120;
uint16_t x1196 = 1U;
uint64_t x1213 = 538287081119058LLU;
volatile uint64_t x1214 = 937339LLU;
int8_t x1217 = -1;
uint64_t x1219 = 1863641577LLU;
uint32_t t142 = 856287478U;
int16_t x1227 = INT16_MAX;
static uint8_t x1245 = 15U;
int8_t x1253 = 10;
volatile int32_t t146 = 11;
int64_t x1265 = -1LL;
uint32_t x1271 = 295916U;
static uint8_t x1276 = UINT8_MAX;
uint64_t x1277 = 1019463733LLU;
static int16_t x1304 = INT16_MIN;
uint64_t t152 = 5LLU;
int16_t x1314 = 1876;
volatile int32_t x1315 = INT32_MIN;
uint8_t x1316 = UINT8_MAX;
int16_t x1329 = INT16_MIN;
int32_t x1331 = -1;
static volatile uint32_t t154 = 29542644U;
int16_t x1347 = INT16_MAX;
static int32_t x1348 = -352625;
volatile int32_t x1353 = -1;
static volatile uint32_t x1355 = 3134U;
volatile int32_t t157 = -3388;
volatile uint16_t x1371 = 344U;
int32_t t159 = -244;
volatile uint64_t t160 = 331099LLU;
int8_t x1410 = 0;
uint32_t x1411 = UINT32_MAX;
static int32_t t165 = 120851098;
volatile uint64_t t166 = 359173629324872788LLU;
uint16_t x1440 = 4U;
int16_t x1455 = -1;
uint32_t t170 = 2112U;
static int8_t x1457 = 0;
uint64_t x1474 = UINT64_MAX;
int32_t x1479 = INT32_MIN;
uint16_t x1493 = 13U;
int64_t x1497 = -1062170321931LL;
uint64_t t177 = 21413448264LLU;
int8_t x1505 = 0;
int8_t x1512 = -6;
volatile int32_t t179 = -243627701;
int8_t x1523 = -37;
volatile int64_t t181 = INT64_MIN;
volatile uint64_t x1540 = 7931LLU;
uint64_t x1557 = 12348351227647736LLU;
uint8_t x1573 = 120U;
int16_t x1575 = -38;
uint32_t x1576 = UINT32_MAX;
int16_t x1578 = 6;
int32_t x1579 = -1;
volatile int32_t t187 = 3;
volatile int64_t x1588 = INT64_MIN;
uint16_t x1595 = UINT16_MAX;
int32_t x1599 = INT32_MIN;
int16_t x1609 = INT16_MAX;
int8_t x1625 = INT8_MIN;
int32_t x1627 = -1;
volatile uint32_t t195 = 1892U;
int16_t x1629 = INT16_MIN;
uint64_t x1630 = UINT64_MAX;
int8_t x1640 = INT8_MIN;
static uint8_t x1646 = 6U;


void f0(void) {
    	int32_t x1 = 37;
	int16_t x3 = -1;
	volatile int8_t x4 = -32;

    t0 = (x1*(x2>>(x3>x4)));

    if (t0 != 2147483611U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x9 = UINT32_MAX;
	int64_t x10 = 2LL;
	int32_t x12 = 51;

    t1 = (x9*(x10>>(x11>x12)));

    if (t1 != 4294967295LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = UINT64_MAX;
	volatile int16_t x19 = -1;
	int64_t x20 = -2299125LL;

    t2 = (x17*(x18>>(x19>x20)));

    if (t2 != 18446744072635809793LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x33 = UINT8_MAX;
	int8_t x35 = -1;

    t3 = (x33*(x34>>(x35>x36)));

    if (t3 != 2550) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x54 = 15U;
	static int32_t x56 = -1;

    t4 = (x53*(x54>>(x55>x56)));

    if (t4 != 6339650751308LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x57 = UINT8_MAX;
	int8_t x59 = INT8_MAX;
	static int32_t x60 = -1;
	volatile int32_t t5 = -1;

    t5 = (x57*(x58>>(x59>x60)));

    if (t5 != 16065) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x69 = INT64_MIN;
	uint8_t x70 = 1U;
	uint64_t x71 = 2001805439392LLU;
	volatile int64_t x72 = -1LL;
	static volatile int64_t t6 = INT64_MIN;

    t6 = (x69*(x70>>(x71>x72)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x73 = -1;
	static int16_t x74 = INT16_MAX;
	uint16_t x75 = 24946U;
	int16_t x76 = 0;
	volatile int32_t t7 = 2592768;

    t7 = (x73*(x74>>(x75>x76)));

    if (t7 != -16383) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x86 = 5944LLU;
	static volatile int32_t x87 = INT32_MAX;
	static int16_t x88 = INT16_MAX;
	static uint64_t t8 = 154LLU;

    t8 = (x85*(x86>>(x87>x88)));

    if (t8 != 18446744073612165120LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x89 = -1;
	volatile int8_t x90 = INT8_MAX;
	volatile int8_t x91 = INT8_MIN;

    t9 = (x89*(x90>>(x91>x92)));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x97 = INT16_MIN;
	static uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 18428U;
	int32_t t10 = -1043692850;

    t10 = (x97*(x98>>(x99>x100)));

    if (t10 != -8355840) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x109 = INT8_MAX;
	int32_t x110 = 33039230;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = 7693103LL;
	volatile int32_t t11 = 1;

    t11 = (x109*(x110>>(x111>x112)));

    if (t11 != 2097991105) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = 1;
	int64_t x115 = 4294240437613731LL;
	volatile int8_t x116 = 45;
	int64_t t12 = -8469LL;

    t12 = (x113*(x114>>(x115>x116)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x118 = 27;
	volatile uint32_t x119 = 437673659U;
	int64_t x120 = INT64_MAX;
	uint32_t t13 = 9941U;

    t13 = (x117*(x118>>(x119>x120)));

    if (t13 != 26668818U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x121 = 34362141802524LLU;
	volatile int16_t x122 = INT16_MAX;
	static uint8_t x123 = 4U;
	int8_t x124 = INT8_MAX;
	uint64_t t14 = 2629LLU;

    t14 = (x121*(x122>>(x123>x124)));

    if (t14 != 1125944300443303908LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x145 = -1LL;
	uint64_t x146 = UINT64_MAX;
	uint16_t x147 = UINT16_MAX;
	volatile uint64_t t15 = 17906314716038285LLU;

    t15 = (x145*(x146>>(x147>x148)));

    if (t15 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x149 = INT16_MAX;
	static uint8_t x150 = 13U;
	uint16_t x151 = 17U;
	static int32_t t16 = 834752840;

    t16 = (x149*(x150>>(x151>x152)));

    if (t16 != 425971) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x157 = 10316;
	static volatile int8_t x158 = INT8_MAX;
	int32_t x159 = -1;
	int64_t x160 = 60000LL;
	volatile int32_t t17 = -31800;

    t17 = (x157*(x158>>(x159>x160)));

    if (t17 != 1310132) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x161 = UINT32_MAX;
	static uint64_t x163 = 2LLU;
	int64_t x164 = INT64_MIN;
	volatile uint32_t t18 = 3610295U;

    t18 = (x161*(x162>>(x163>x164)));

    if (t18 != 4294901761U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x177 = INT16_MIN;
	static uint64_t x178 = UINT64_MAX;
	volatile uint64_t x179 = 264549592989930LLU;
	uint8_t x180 = 9U;
	uint64_t t19 = 350784550LLU;

    t19 = (x177*(x178>>(x179>x180)));

    if (t19 != 32768LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x181 = INT16_MIN;
	static uint32_t x182 = UINT32_MAX;
	int8_t x183 = 7;
	int8_t x184 = -1;
	volatile uint32_t t20 = 230749U;

    t20 = (x181*(x182>>(x183>x184)));

    if (t20 != 32768U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x185 = 83U;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = 17;
	static volatile int32_t x188 = -5573364;
	volatile uint32_t t21 = 2U;

    t21 = (x185*(x186>>(x187>x188)));

    if (t21 != 10541U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x189 = UINT16_MAX;
	static uint8_t x190 = 3U;
	uint8_t x192 = 0U;

    t22 = (x189*(x190>>(x191>x192)));

    if (t22 != 196605) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x193 = -24;
	static int16_t x194 = INT16_MAX;
	int16_t x195 = 1;
	int32_t t23 = -1901278;

    t23 = (x193*(x194>>(x195>x196)));

    if (t23 != -786408) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x201 = UINT16_MAX;
	static uint32_t x202 = 1007018U;
	volatile int8_t x203 = INT8_MAX;

    t24 = (x201*(x202>>(x203>x204)));

    if (t24 != 1570415190U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x205 = -1;
	static int64_t x206 = 3830228832LL;
	volatile int32_t x207 = -3477;
	volatile int16_t x208 = INT16_MIN;
	static int64_t t25 = -1553307926643048130LL;

    t25 = (x205*(x206>>(x207>x208)));

    if (t25 != -1915114416LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x209 = INT8_MIN;
	static uint32_t x210 = UINT32_MAX;
	int16_t x212 = INT16_MAX;
	uint32_t t26 = 691U;

    t26 = (x209*(x210>>(x211>x212)));

    if (t26 != 128U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x213 = -3329LL;
	int32_t x215 = -2;
	volatile int32_t x216 = INT32_MIN;
	int64_t t27 = 7496695LL;

    t27 = (x213*(x214>>(x215>x216)));

    if (t27 != -322986238LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x221 = -1;
	static int32_t x222 = 2469;
	uint16_t x223 = 3670U;
	int8_t x224 = INT8_MIN;
	int32_t t28 = -20693460;

    t28 = (x221*(x222>>(x223>x224)));

    if (t28 != -1234) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x229 = -1;
	static volatile int64_t x230 = 2661841294LL;
	uint64_t x231 = UINT64_MAX;
	static volatile uint16_t x232 = 5U;
	volatile int64_t t29 = -909395313417885LL;

    t29 = (x229*(x230>>(x231>x232)));

    if (t29 != -1330920647LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x253 = 10U;
	static uint32_t x254 = 2195U;
	static uint8_t x255 = 2U;
	int32_t x256 = -1;
	static volatile uint32_t t30 = 753275U;

    t30 = (x253*(x254>>(x255>x256)));

    if (t30 != 10970U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MIN;
	volatile uint64_t x276 = UINT64_MAX;

    t31 = (x273*(x274>>(x275>x276)));

    if (t31 != -4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x285 = -25;
	int16_t x288 = INT16_MIN;
	static int32_t t32 = -1037350;

    t32 = (x285*(x286>>(x287>x288)));

    if (t32 != -1350) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = INT8_MAX;
	static volatile uint64_t t33 = 88646342993232LLU;

    t33 = (x289*(x290>>(x291>x292)));

    if (t33 != 9223372036854770753LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x297 = -24542884;
	volatile uint8_t x298 = 61U;
	int32_t t34 = 1438;

    t34 = (x297*(x298>>(x299>x300)));

    if (t34 != -736286520) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x317 = -51;
	int32_t x320 = -1;

    t35 = (x317*(x318>>(x319>x320)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x322 = UINT64_MAX;
	uint64_t x323 = 195LLU;
	uint8_t x324 = UINT8_MAX;
	uint64_t t36 = 4797713986151855LLU;

    t36 = (x321*(x322>>(x323>x324)));

    if (t36 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x325 = -2;
	uint64_t x328 = 7521492545276LLU;
	volatile int32_t t37 = 28544923;

    t37 = (x325*(x326>>(x327>x328)));

    if (t37 != -510) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x329 = -102114799731LL;
	int8_t x330 = 24;
	uint32_t x331 = 249623859U;

    t38 = (x329*(x330>>(x331>x332)));

    if (t38 != -1225377596772LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x334 = INT8_MAX;
	volatile int64_t x335 = INT64_MAX;
	static int32_t x336 = 70130;
	volatile int32_t t39 = 604538;

    t39 = (x333*(x334>>(x335>x336)));

    if (t39 != -5350527) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x341 = UINT8_MAX;
	int32_t x343 = 4088221;
	int16_t x344 = INT16_MAX;
	volatile uint32_t t40 = 28311U;

    t40 = (x341*(x342>>(x343>x344)));

    if (t40 != 1067360895U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x349 = -1LL;
	static int64_t x351 = 10822269LL;
	int64_t t41 = -2939230411LL;

    t41 = (x349*(x350>>(x351>x352)));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x357 = INT16_MAX;
	int16_t x358 = 38;
	int64_t x360 = -195441157971755627LL;

    t42 = (x357*(x358>>(x359>x360)));

    if (t42 != 622573) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x366 = 1U;
	int8_t x367 = INT8_MIN;
	static int8_t x368 = 1;
	volatile int32_t t43 = -5089016;

    t43 = (x365*(x366>>(x367>x368)));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x369 = 694909395LLU;
	static uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MAX;
	volatile uint64_t t44 = 131564204730LLU;

    t44 = (x369*(x370>>(x371>x372)));

    if (t44 != 1492306561909163565LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x373 = -1;
	uint8_t x375 = 0U;
	uint32_t x376 = 140U;
	volatile int32_t t45 = -1;

    t45 = (x373*(x374>>(x375>x376)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x378 = 1U;
	static volatile int32_t x379 = 6556;
	static int32_t x380 = -547;
	volatile int64_t t46 = 1033442439LL;

    t46 = (x377*(x378>>(x379>x380)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x389 = 90LLU;
	int16_t x390 = INT16_MAX;
	int8_t x391 = -24;
	static int8_t x392 = INT8_MIN;
	volatile uint64_t t47 = 312LLU;

    t47 = (x389*(x390>>(x391>x392)));

    if (t47 != 1474470LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x393 = -1;
	static int32_t x395 = -82753854;
	static uint32_t x396 = 1U;
	volatile int32_t t48 = 265;

    t48 = (x393*(x394>>(x395>x396)));

    if (t48 != -109150) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x398 = 4545086386LLU;
	static int16_t x399 = -1;
	volatile uint64_t x400 = 28787553253LLU;
	uint64_t t49 = 236171341244052LLU;

    t49 = (x397*(x398>>(x399>x400)));

    if (t49 != 18446744071437008423LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x401 = 478U;
	uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = 786169659LLU;
	uint64_t t50 = 1585LLU;

    t50 = (x401*(x402>>(x403>x404)));

    if (t50 != 18446744073709551138LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x421 = 1761714423991057542LLU;
	uint64_t x422 = 25695451983004LLU;
	volatile uint64_t x423 = UINT64_MAX;
	uint32_t x424 = 13083380U;
	uint64_t t51 = 766847350139502788LLU;

    t51 = (x421*(x422>>(x423>x424)));

    if (t51 != 16845271994241676500LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x445 = 12084U;
	int64_t x447 = -30980797877LL;
	int16_t x448 = INT16_MIN;

    t52 = (x445*(x446>>(x447>x448)));

    if (t52 != 475649356692LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x465 = 44U;
	uint16_t x467 = 110U;

    t53 = (x465*(x466>>(x467>x468)));

    if (t53 != 315304) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x485 = INT8_MIN;
	volatile int32_t x486 = 2796757;
	static int8_t x487 = INT8_MIN;
	int16_t x488 = 716;
	volatile int32_t t54 = -33;

    t54 = (x485*(x486>>(x487>x488)));

    if (t54 != -357984896) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x493 = -1;
	int64_t x494 = INT64_MAX;
	uint8_t x495 = 101U;
	int32_t x496 = INT32_MIN;

    t55 = (x493*(x494>>(x495>x496)));

    if (t55 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x497 = -1;
	static uint16_t x498 = 275U;
	uint16_t x499 = 492U;
	int32_t t56 = -10037565;

    t56 = (x497*(x498>>(x499>x500)));

    if (t56 != -137) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x501 = 50617923LLU;
	int64_t x502 = INT64_MAX;
	int8_t x503 = INT8_MIN;
	volatile uint32_t x504 = UINT32_MAX;
	volatile uint64_t t57 = 269450099134LLU;

    t57 = (x501*(x502>>(x503>x504)));

    if (t57 != 9223372036804157885LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x507 = -7;
	static int8_t x508 = -1;
	volatile uint32_t t58 = 480U;

    t58 = (x505*(x506>>(x507>x508)));

    if (t58 != 370851U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x515 = -1;
	int32_t t59 = 2634415;

    t59 = (x513*(x514>>(x515>x516)));

    if (t59 != 221571) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x526 = 101996657518663559LLU;
	static uint8_t x527 = UINT8_MAX;
	static int16_t x528 = INT16_MIN;
	volatile uint64_t t60 = 3979241LLU;

    t60 = (x525*(x526>>(x527>x528)));

    if (t60 != 2090931479132602939LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x529 = INT32_MAX;
	volatile int32_t x530 = 1;
	int64_t x532 = INT64_MIN;
	volatile int32_t t61 = 37007067;

    t61 = (x529*(x530>>(x531>x532)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x535 = -1LL;
	volatile int64_t x536 = -1773487LL;
	volatile int64_t t62 = 34418185196828LL;

    t62 = (x533*(x534>>(x535>x536)));

    if (t62 != -1073741823LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x545 = -1;
	int16_t x546 = INT16_MAX;
	uint8_t x547 = 0U;
	int16_t x548 = INT16_MAX;

    t63 = (x545*(x546>>(x547>x548)));

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x557 = INT16_MAX;
	static uint32_t x558 = 11575U;
	static int16_t x560 = INT16_MIN;
	uint32_t t64 = 3U;

    t64 = (x557*(x558>>(x559>x560)));

    if (t64 != 189622629U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile uint32_t x572 = 140U;
	volatile uint64_t t65 = 299780619054083LLU;

    t65 = (x569*(x570>>(x571>x572)));

    if (t65 != 3476041585895055LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x573 = 441U;
	volatile uint16_t x574 = UINT16_MAX;
	int16_t x575 = INT16_MIN;
	uint32_t x576 = UINT32_MAX;
	static volatile int32_t t66 = -6604;

    t66 = (x573*(x574>>(x575>x576)));

    if (t66 != 28900935) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x597 = UINT64_MAX;
	volatile int8_t x599 = -7;
	volatile int64_t x600 = INT64_MIN;

    t67 = (x597*(x598>>(x599>x600)));

    if (t67 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x605 = INT16_MAX;
	static uint16_t x606 = 6134U;
	uint8_t x608 = UINT8_MAX;
	static int32_t t68 = 377929;

    t68 = (x605*(x606>>(x607>x608)));

    if (t68 != 200992778) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x610 = 102559004997027LL;
	uint32_t x611 = UINT32_MAX;
	volatile int16_t x612 = -636;

    t69 = (x609*(x610>>(x611>x612)));

    if (t69 != 51279502498513LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x617 = UINT8_MAX;
	uint32_t x618 = 406U;
	uint8_t x620 = 0U;

    t70 = (x617*(x618>>(x619>x620)));

    if (t70 != 103530U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x622 = INT16_MAX;
	int8_t x623 = 1;
	int64_t x624 = -371443686LL;

    t71 = (x621*(x622>>(x623>x624)));

    if (t71 != 536821761) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x629 = -867399701574025LL;
	int32_t x630 = 0;
	static int64_t x631 = -8282050039106821LL;
	volatile int32_t x632 = 6;

    t72 = (x629*(x630>>(x631>x632)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x637 = INT64_MAX;
	uint64_t x638 = 8LLU;
	int32_t x639 = 580;
	uint16_t x640 = 20350U;
	uint64_t t73 = 466120612438LLU;

    t73 = (x637*(x638>>(x639>x640)));

    if (t73 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x645 = INT32_MIN;
	static volatile uint32_t x646 = UINT32_MAX;
	int8_t x647 = INT8_MIN;
	volatile int64_t x648 = -1LL;
	volatile uint32_t t74 = 863U;

    t74 = (x645*(x646>>(x647>x648)));

    if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x649 = INT16_MAX;
	volatile int32_t x650 = 8;
	uint32_t x651 = 6U;
	int16_t x652 = INT16_MIN;
	static volatile int32_t t75 = 1349222;

    t75 = (x649*(x650>>(x651>x652)));

    if (t75 != 262136) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x661 = INT16_MIN;
	static uint16_t x662 = 3U;
	uint64_t x663 = 134356372LLU;
	static int64_t x664 = -656244LL;
	volatile int32_t t76 = -345;

    t76 = (x661*(x662>>(x663>x664)));

    if (t76 != -98304) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x681 = INT16_MAX;
	volatile uint8_t x682 = 68U;
	int32_t t77 = -287;

    t77 = (x681*(x682>>(x683>x684)));

    if (t77 != 2228156) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x685 = -1;
	static volatile uint32_t x686 = 99658U;
	int8_t x687 = INT8_MIN;
	static volatile uint32_t t78 = 1U;

    t78 = (x685*(x686>>(x687>x688)));

    if (t78 != 4294917467U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint64_t x694 = 433350LLU;
	uint64_t x695 = UINT64_MAX;
	volatile uint64_t t79 = 69784584419LLU;

    t79 = (x693*(x694>>(x695>x696)));

    if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x701 = INT32_MAX;
	static volatile uint64_t x702 = 337LLU;
	uint16_t x704 = UINT16_MAX;
	static volatile uint64_t t80 = 12593LLU;

    t80 = (x701*(x702>>(x703>x704)));

    if (t80 != 723701989039LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x709 = -1;
	int32_t x710 = INT32_MAX;
	int64_t x711 = INT64_MAX;
	int16_t x712 = INT16_MIN;
	int32_t t81 = 63;

    t81 = (x709*(x710>>(x711>x712)));

    if (t81 != -1073741823) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x714 = UINT32_MAX;
	uint32_t x715 = 1U;
	static int16_t x716 = 8714;
	static volatile uint64_t t82 = 4224446930209052LLU;

    t82 = (x713*(x714>>(x715>x716)));

    if (t82 != 1728561127480290LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x721 = INT8_MAX;
	int32_t x723 = 100;
	int32_t x724 = -111179;
	static volatile uint64_t t83 = 31599545636LLU;

    t83 = (x721*(x722>>(x723>x724)));

    if (t83 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x733 = 835LLU;
	static uint16_t x734 = 617U;
	int16_t x735 = INT16_MAX;

    t84 = (x733*(x734>>(x735>x736)));

    if (t84 != 257180LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x757 = 116;
	uint32_t x758 = UINT32_MAX;
	volatile int8_t x759 = 22;
	static int64_t x760 = 3LL;
	uint32_t t85 = 165U;

    t85 = (x757*(x758>>(x759>x760)));

    if (t85 != 4294967180U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x761 = INT64_MIN;
	uint32_t x762 = 0U;
	uint16_t x763 = UINT16_MAX;
	uint32_t x764 = 9316741U;
	volatile int64_t t86 = 1035LL;

    t86 = (x761*(x762>>(x763>x764)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x766 = 4;
	static int16_t x767 = -644;
	static int32_t x768 = -17;
	volatile int32_t t87 = -4713570;

    t87 = (x765*(x766>>(x767>x768)));

    if (t87 != 508) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x770 = 899U;
	volatile int64_t x771 = INT64_MIN;
	uint32_t t88 = 14791173U;

    t88 = (x769*(x770>>(x771>x772)));

    if (t88 != 3726260502U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x781 = INT8_MAX;
	int8_t x782 = INT8_MAX;
	int64_t x783 = 533045903907044LL;
	volatile int32_t x784 = 521;
	volatile int32_t t89 = 7880251;

    t89 = (x781*(x782>>(x783>x784)));

    if (t89 != 8001) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x786 = 1;
	volatile uint8_t x787 = 3U;

    t90 = (x785*(x786>>(x787>x788)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x793 = UINT32_MAX;
	uint8_t x794 = UINT8_MAX;
	int16_t x796 = INT16_MIN;
	static uint32_t t91 = 206399U;

    t91 = (x793*(x794>>(x795>x796)));

    if (t91 != 4294967041U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x797 = -2;
	int16_t x798 = 303;
	int64_t x800 = INT64_MAX;
	volatile int32_t t92 = -166076319;

    t92 = (x797*(x798>>(x799>x800)));

    if (t92 != -606) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x802 = 6867379U;
	int64_t x803 = INT64_MIN;
	int64_t x804 = INT64_MIN;
	volatile uint32_t t93 = 96U;

    t93 = (x801*(x802>>(x803>x804)));

    if (t93 != 2933765530U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x805 = INT32_MIN;
	static int32_t x807 = INT32_MAX;
	uint16_t x808 = 254U;
	int64_t t94 = 6227LL;

    t94 = (x805*(x806>>(x807>x808)));

    if (t94 != -732291923968LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x813 = INT64_MIN;
	uint8_t x814 = 0U;
	uint32_t x815 = 258317816U;
	int32_t x816 = INT32_MIN;
	int64_t t95 = -50807738LL;

    t95 = (x813*(x814>>(x815>x816)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x817 = 326904562540021LLU;
	int64_t x819 = -1LL;
	uint32_t x820 = 52U;
	volatile uint64_t t96 = 585693925926314277LLU;

    t96 = (x817*(x818>>(x819>x820)));

    if (t96 != 980713687620063LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x825 = INT16_MIN;
	static volatile int16_t x826 = INT16_MAX;
	int8_t x827 = INT8_MAX;
	int16_t x828 = INT16_MIN;
	static int32_t t97 = -447841;

    t97 = (x825*(x826>>(x827>x828)));

    if (t97 != -536838144) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x829 = INT8_MIN;
	uint8_t x830 = 112U;
	int64_t x832 = INT64_MIN;
	int32_t t98 = -55;

    t98 = (x829*(x830>>(x831>x832)));

    if (t98 != -7168) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x833 = INT64_MIN;
	uint64_t x834 = UINT64_MAX;
	int64_t x835 = INT64_MIN;
	int32_t x836 = INT32_MIN;
	volatile uint64_t t99 = 3LLU;

    t99 = (x833*(x834>>(x835>x836)));

    if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x837 = 3U;
	uint16_t x838 = 69U;
	static volatile uint16_t x839 = 2768U;
	int32_t t100 = 3;

    t100 = (x837*(x838>>(x839>x840)));

    if (t100 != 102) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x849 = INT32_MAX;
	uint32_t x850 = 415U;
	int64_t x851 = -1LL;
	static int64_t x852 = INT64_MIN;
	volatile uint32_t t101 = 21U;

    t101 = (x849*(x850>>(x851>x852)));

    if (t101 != 2147483441U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x853 = 34457LL;
	uint64_t x854 = 13416LLU;
	int16_t x855 = INT16_MAX;
	static volatile uint8_t x856 = UINT8_MAX;
	uint64_t t102 = 240471508806937417LLU;

    t102 = (x853*(x854>>(x855>x856)));

    if (t102 != 231137556LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x861 = 53402519655260LL;
	uint8_t x862 = 6U;
	volatile uint64_t x863 = 4314LLU;
	uint32_t x864 = UINT32_MAX;
	static int64_t t103 = -573262519887040LL;

    t103 = (x861*(x862>>(x863>x864)));

    if (t103 != 320415117931560LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x877 = 310LLU;
	volatile uint8_t x878 = 3U;
	int16_t x879 = INT16_MIN;
	static int8_t x880 = INT8_MAX;
	volatile uint64_t t104 = 1372050657LLU;

    t104 = (x877*(x878>>(x879>x880)));

    if (t104 != 930LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x893 = -1654943;
	static uint8_t x894 = 1U;
	int8_t x895 = INT8_MIN;
	int32_t x896 = 14822;
	volatile int32_t t105 = 231111035;

    t105 = (x893*(x894>>(x895>x896)));

    if (t105 != -1654943) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x904 = 18438U;
	volatile int32_t t106 = -227;

    t106 = (x901*(x902>>(x903>x904)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x906 = 72U;
	volatile int64_t x908 = 370LL;
	volatile int64_t t107 = 25725723LL;

    t107 = (x905*(x906>>(x907>x908)));

    if (t107 != 34645861143404064LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x909 = 3099269579303556LLU;
	volatile uint16_t x910 = 99U;
	int32_t x912 = INT32_MIN;
	volatile uint64_t t108 = 237991LLU;

    t108 = (x909*(x910>>(x911>x912)));

    if (t108 != 151864209385874244LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x917 = 1U;
	int64_t x918 = INT64_MAX;
	uint16_t x919 = UINT16_MAX;
	int8_t x920 = INT8_MIN;
	static int64_t t109 = 44421175581LL;

    t109 = (x917*(x918>>(x919>x920)));

    if (t109 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x921 = INT16_MIN;
	volatile int16_t x922 = 301;
	int16_t x923 = 0;
	int32_t t110 = 22334452;

    t110 = (x921*(x922>>(x923>x924)));

    if (t110 != -9863168) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x925 = -5;
	int32_t x927 = -1;
	int64_t x928 = INT64_MAX;
	int32_t t111 = -275475776;

    t111 = (x925*(x926>>(x927>x928)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x929 = 15U;
	uint64_t x930 = UINT64_MAX;

    t112 = (x929*(x930>>(x931>x932)));

    if (t112 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x947 = -31728LL;
	int16_t x948 = -1;

    t113 = (x945*(x946>>(x947>x948)));

    if (t113 != 9927) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x974 = 8132;
	int16_t x975 = 3;
	uint32_t x976 = 0U;
	volatile uint64_t t114 = 7610033001500588001LLU;

    t114 = (x973*(x974>>(x975>x976)));

    if (t114 != 479788LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x978 = UINT16_MAX;
	uint32_t x979 = UINT32_MAX;
	volatile uint16_t x980 = 3786U;

    t115 = (x977*(x978>>(x979>x980)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x985 = -58LL;
	static uint32_t x986 = 52627480U;
	int64_t x987 = -1LL;
	int16_t x988 = 90;

    t116 = (x985*(x986>>(x987>x988)));

    if (t116 != -3052393840LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x997 = INT16_MIN;
	int16_t x998 = INT16_MAX;
	static int8_t x1000 = INT8_MIN;
	volatile int32_t t117 = 0;

    t117 = (x997*(x998>>(x999>x1000)));

    if (t117 != -536838144) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x1005 = -1202;
	int64_t x1006 = 3192LL;
	static int32_t x1007 = -1;
	uint16_t x1008 = UINT16_MAX;
	volatile int64_t t118 = -140978728596523277LL;

    t118 = (x1005*(x1006>>(x1007>x1008)));

    if (t118 != -3836784LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x1017 = INT8_MIN;
	int32_t x1018 = 218;
	volatile int32_t x1019 = INT32_MIN;
	int32_t t119 = 1624;

    t119 = (x1017*(x1018>>(x1019>x1020)));

    if (t119 != -27904) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x1025 = INT32_MIN;
	uint64_t x1026 = 3788LLU;
	static int16_t x1028 = INT16_MIN;
	volatile uint64_t t120 = 183606883392997LLU;

    t120 = (x1025*(x1026>>(x1027>x1028)));

    if (t120 != 18446740006375522304LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x1045 = 2U;
	uint8_t x1046 = 5U;
	static volatile int64_t x1048 = -1LL;
	volatile int32_t t121 = -595;

    t121 = (x1045*(x1046>>(x1047>x1048)));

    if (t121 != 10) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x1056 = -109;

    t122 = (x1053*(x1054>>(x1055>x1056)));

    if (t122 != 4294776554U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x1057 = -473755;
	int16_t x1059 = INT16_MAX;

    t123 = (x1057*(x1058>>(x1059>x1060)));

    if (t123 != 473755U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x1069 = 1558LL;
	uint64_t x1070 = 55167326894139LLU;
	static int8_t x1072 = -3;
	volatile uint64_t t124 = 370755443014LLU;

    t124 = (x1069*(x1070>>(x1071>x1072)));

    if (t124 != 85950695301068562LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x1081 = INT32_MIN;
	static int8_t x1083 = INT8_MAX;
	uint32_t x1084 = 45U;
	volatile uint64_t t125 = 56602921LLU;

    t125 = (x1081*(x1082>>(x1083>x1084)));

    if (t125 != 12157684888799019008LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1089 = 2190377853731LL;
	uint16_t x1090 = 6208U;
	int16_t x1091 = INT16_MIN;
	volatile int32_t x1092 = INT32_MIN;
	int64_t t126 = -531LL;

    t126 = (x1089*(x1090>>(x1091>x1092)));

    if (t126 != 6798932857981024LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x1093 = 69U;
	int32_t x1094 = 6057;
	static volatile int32_t x1095 = 1;
	int64_t x1096 = -1LL;

    t127 = (x1093*(x1094>>(x1095>x1096)));

    if (t127 != 208932) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1097 = INT16_MIN;
	uint64_t x1098 = UINT64_MAX;
	int32_t x1099 = INT32_MIN;
	volatile uint8_t x1100 = 2U;

    t128 = (x1097*(x1098>>(x1099>x1100)));

    if (t128 != 32768LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1101 = 3852U;
	static uint64_t x1102 = UINT64_MAX;
	static uint32_t x1103 = UINT32_MAX;
	static int8_t x1104 = -1;
	static uint64_t t129 = 823993679884LLU;

    t129 = (x1101*(x1102>>(x1103>x1104)));

    if (t129 != 18446744073709547764LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x1113 = 2LLU;
	uint8_t x1115 = 9U;
	volatile int32_t x1116 = INT32_MIN;

    t130 = (x1113*(x1114>>(x1115>x1116)));

    if (t130 != 126LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1121 = 20982U;
	static volatile int8_t x1123 = INT8_MIN;
	volatile uint8_t x1124 = 0U;

    t131 = (x1121*(x1122>>(x1123>x1124)));

    if (t131 != 1375055370) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1129 = UINT32_MAX;
	int8_t x1131 = -1;
	volatile uint64_t x1132 = UINT64_MAX;
	uint32_t t132 = 1664387203U;

    t132 = (x1129*(x1130>>(x1131>x1132)));

    if (t132 != 4294967290U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x1137 = -1;
	uint32_t x1138 = 10914929U;
	static int32_t x1139 = 292587;
	static int64_t x1140 = -1LL;

    t133 = (x1137*(x1138>>(x1139>x1140)));

    if (t133 != 4289509832U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1142 = UINT64_MAX;
	static uint32_t x1143 = UINT32_MAX;
	static uint16_t x1144 = 5U;

    t134 = (x1141*(x1142>>(x1143>x1144)));

    if (t134 != 2147483648LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x1145 = 6708892379789562LLU;
	int64_t x1147 = 78LL;
	static uint16_t x1148 = 74U;

    t135 = (x1145*(x1146>>(x1147>x1148)));

    if (t135 != 18440035181329762054LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x1153 = INT64_MIN;
	uint8_t x1155 = 9U;
	volatile int32_t x1156 = INT32_MAX;
	volatile uint64_t t136 = 198466LLU;

    t136 = (x1153*(x1154>>(x1155>x1156)));

    if (t136 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x1158 = 296U;
	int16_t x1159 = INT16_MAX;
	int16_t x1160 = INT16_MIN;
	volatile uint64_t t137 = 30966244217086LLU;

    t137 = (x1157*(x1158>>(x1159>x1160)));

    if (t137 != 18446744073709551468LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1170 = 2;
	volatile uint64_t x1171 = 19165051520763716LLU;
	static int64_t x1172 = 12953LL;
	volatile int64_t t138 = INT64_MIN;

    t138 = (x1169*(x1170>>(x1171>x1172)));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1177 = 446U;
	uint64_t x1178 = 4437779046163332LLU;
	volatile uint8_t x1179 = UINT8_MAX;
	volatile uint64_t t139 = 4304181611635552051LLU;

    t139 = (x1177*(x1178>>(x1179>x1180)));

    if (t139 != 989624727294423036LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x1193 = -10224070LL;
	uint8_t x1194 = 1U;
	volatile int64_t t140 = 20824429LL;

    t140 = (x1193*(x1194>>(x1195>x1196)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x1215 = 8196334412550212LL;
	int16_t x1216 = -2;
	uint64_t t141 = 1693435900218LLU;

    t141 = (x1213*(x1214>>(x1215>x1216)));

    if (t141 != 12470795062763622794LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x1218 = 15U;
	static int16_t x1220 = -31;

    t142 = (x1217*(x1218>>(x1219>x1220)));

    if (t142 != 4294967281U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x1225 = INT16_MIN;
	volatile uint64_t x1226 = 5LLU;
	int16_t x1228 = INT16_MIN;
	volatile uint64_t t143 = 2290846105LLU;

    t143 = (x1225*(x1226>>(x1227>x1228)));

    if (t143 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1241 = 422274737262LL;
	int16_t x1242 = 1;
	int16_t x1243 = -2;
	int32_t x1244 = INT32_MIN;
	int64_t t144 = 23881LL;

    t144 = (x1241*(x1242>>(x1243>x1244)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x1246 = 15;
	static volatile int64_t x1247 = 276542LL;
	int32_t x1248 = -1;
	volatile int32_t t145 = 504;

    t145 = (x1245*(x1246>>(x1247>x1248)));

    if (t145 != 105) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x1254 = INT16_MAX;
	static int64_t x1255 = 9613245603LL;
	uint64_t x1256 = 153216062LLU;

    t146 = (x1253*(x1254>>(x1255>x1256)));

    if (t146 != 163830) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1266 = UINT32_MAX;
	int64_t x1267 = -2253407106LL;
	int32_t x1268 = INT32_MIN;
	static volatile int64_t t147 = -1012057391466LL;

    t147 = (x1265*(x1266>>(x1267>x1268)));

    if (t147 != -4294967295LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x1269 = 2U;
	static int8_t x1270 = INT8_MAX;
	volatile int64_t x1272 = INT64_MIN;
	static int32_t t148 = -15034979;

    t148 = (x1269*(x1270>>(x1271>x1272)));

    if (t148 != 126) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x1273 = 0;
	int16_t x1274 = INT16_MAX;
	int8_t x1275 = INT8_MAX;
	volatile int32_t t149 = 9;

    t149 = (x1273*(x1274>>(x1275>x1276)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x1278 = 3U;
	int32_t x1279 = INT32_MIN;
	static uint32_t x1280 = 307U;
	volatile uint64_t t150 = 334LLU;

    t150 = (x1277*(x1278>>(x1279>x1280)));

    if (t150 != 1019463733LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1297 = -1;
	int32_t x1298 = INT32_MAX;
	int32_t x1299 = INT32_MIN;
	uint32_t x1300 = UINT32_MAX;
	volatile int32_t t151 = 5473963;

    t151 = (x1297*(x1298>>(x1299>x1300)));

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1301 = UINT64_MAX;
	uint8_t x1302 = UINT8_MAX;
	uint16_t x1303 = UINT16_MAX;

    t152 = (x1301*(x1302>>(x1303>x1304)));

    if (t152 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1313 = 1839176248LLU;
	volatile uint64_t t153 = 8619718253424106LLU;

    t153 = (x1313*(x1314>>(x1315>x1316)));

    if (t153 != 3450294641248LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1330 = 24807U;
	int16_t x1332 = INT16_MAX;

    t154 = (x1329*(x1330>>(x1331>x1332)));

    if (t154 != 3482091520U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1345 = INT64_MIN;
	uint64_t x1346 = UINT64_MAX;
	static volatile uint64_t t155 = 7262075512LLU;

    t155 = (x1345*(x1346>>(x1347>x1348)));

    if (t155 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1349 = 1722U;
	uint8_t x1350 = UINT8_MAX;
	volatile uint16_t x1351 = 10426U;
	static int32_t x1352 = INT32_MIN;
	volatile uint32_t t156 = 27913723U;

    t156 = (x1349*(x1350>>(x1351>x1352)));

    if (t156 != 218694U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1354 = INT8_MAX;
	int8_t x1356 = INT8_MIN;

    t157 = (x1353*(x1354>>(x1355>x1356)));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1357 = 11U;
	uint64_t x1358 = 1060016602072445LLU;
	int64_t x1359 = INT64_MIN;
	uint8_t x1360 = UINT8_MAX;
	static volatile uint64_t t158 = 337337729480061661LLU;

    t158 = (x1357*(x1358>>(x1359>x1360)));

    if (t158 != 11660182622796895LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1369 = -7;
	int8_t x1370 = INT8_MAX;
	int16_t x1372 = INT16_MIN;

    t159 = (x1369*(x1370>>(x1371>x1372)));

    if (t159 != -441) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x1373 = UINT64_MAX;
	int32_t x1374 = INT32_MAX;
	int32_t x1375 = -1;
	volatile uint64_t x1376 = UINT64_MAX;

    t160 = (x1373*(x1374>>(x1375>x1376)));

    if (t160 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1377 = 12LLU;
	static volatile uint64_t x1378 = UINT64_MAX;
	uint8_t x1379 = 1U;
	uint32_t x1380 = 14U;
	uint64_t t161 = 565531054257516LLU;

    t161 = (x1377*(x1378>>(x1379>x1380)));

    if (t161 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1381 = 12343560;
	static uint64_t x1382 = 123894907409694LLU;
	int64_t x1383 = 32665726130LL;
	int64_t x1384 = -1LL;
	uint64_t t162 = 2326837239586847LLU;

    t162 = (x1381*(x1382>>(x1383>x1384)));

    if (t162 != 8335604630909619064LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1385 = 4;
	uint64_t x1386 = UINT64_MAX;
	static int64_t x1387 = -1LL;
	int8_t x1388 = -1;
	volatile uint64_t t163 = 2420LLU;

    t163 = (x1385*(x1386>>(x1387>x1388)));

    if (t163 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1405 = -1;
	static int64_t x1406 = 1942254762682245883LL;
	int16_t x1407 = -1;
	uint32_t x1408 = UINT32_MAX;
	int64_t t164 = -7140542948LL;

    t164 = (x1405*(x1406>>(x1407>x1408)));

    if (t164 != -1942254762682245883LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x1409 = 111;
	static int32_t x1412 = -16291;

    t165 = (x1409*(x1410>>(x1411>x1412)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1425 = 242LLU;
	uint16_t x1426 = 127U;
	static uint32_t x1427 = UINT32_MAX;
	int8_t x1428 = INT8_MIN;

    t166 = (x1425*(x1426>>(x1427>x1428)));

    if (t166 != 15246LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1433 = -3;
	static volatile uint64_t x1434 = 76245509996300LLU;
	volatile int64_t x1435 = INT64_MIN;
	uint32_t x1436 = 124485U;
	static volatile uint64_t t167 = 13231709LLU;

    t167 = (x1433*(x1434>>(x1435>x1436)));

    if (t167 != 18446515337179562716LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x1437 = UINT32_MAX;
	uint8_t x1438 = 54U;
	uint8_t x1439 = UINT8_MAX;
	static uint32_t t168 = 449U;

    t168 = (x1437*(x1438>>(x1439>x1440)));

    if (t168 != 4294967269U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1445 = INT32_MIN;
	int16_t x1446 = 0;
	int64_t x1447 = INT64_MIN;
	static int16_t x1448 = INT16_MAX;
	int32_t t169 = 1;

    t169 = (x1445*(x1446>>(x1447>x1448)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1453 = -1;
	volatile uint32_t x1454 = 23050340U;
	int16_t x1456 = INT16_MAX;

    t170 = (x1453*(x1454>>(x1455>x1456)));

    if (t170 != 4271916956U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1458 = UINT64_MAX;
	int64_t x1459 = -1LL;
	static int16_t x1460 = INT16_MIN;
	volatile uint64_t t171 = 9242310739268LLU;

    t171 = (x1457*(x1458>>(x1459>x1460)));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x1465 = UINT32_MAX;
	int8_t x1466 = INT8_MAX;
	int64_t x1467 = -4376683101LL;
	static int8_t x1468 = INT8_MIN;
	static uint32_t t172 = 2021U;

    t172 = (x1465*(x1466>>(x1467>x1468)));

    if (t172 != 4294967169U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1473 = 2U;
	static int64_t x1475 = -1LL;
	uint8_t x1476 = 4U;
	volatile uint64_t t173 = 537887993984650LLU;

    t173 = (x1473*(x1474>>(x1475>x1476)));

    if (t173 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1477 = 145046629195244339LLU;
	volatile uint16_t x1478 = 13U;
	int8_t x1480 = INT8_MAX;
	uint64_t t174 = 32586LLU;

    t174 = (x1477*(x1478>>(x1479>x1480)));

    if (t174 != 1885606179538176407LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x1485 = INT8_MAX;
	uint32_t x1486 = 93742683U;
	int8_t x1487 = INT8_MIN;
	int8_t x1488 = INT8_MIN;
	static uint32_t t175 = 30U;

    t175 = (x1485*(x1486>>(x1487>x1488)));

    if (t175 != 3315386149U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1494 = 0;
	volatile uint8_t x1495 = 2U;
	int16_t x1496 = INT16_MIN;
	int32_t t176 = 51307587;

    t176 = (x1493*(x1494>>(x1495>x1496)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1498 = UINT64_MAX;
	uint32_t x1499 = UINT32_MAX;
	uint32_t x1500 = 350031U;

    t177 = (x1497*(x1498>>(x1499>x1500)));

    if (t177 != 9223373099025097739LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1506 = 1296U;
	volatile int16_t x1507 = INT16_MAX;
	static int32_t x1508 = 3;
	static int32_t t178 = 1013432;

    t178 = (x1505*(x1506>>(x1507>x1508)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1509 = INT8_MIN;
	static int16_t x1510 = INT16_MAX;
	int64_t x1511 = INT64_MIN;

    t179 = (x1509*(x1510>>(x1511>x1512)));

    if (t179 != -4194176) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1517 = 638055U;
	uint64_t x1518 = 12053516265071406LLU;
	int64_t x1519 = -1LL;
	int32_t x1520 = INT32_MAX;
	static uint64_t t180 = 7874LLU;

    t180 = (x1517*(x1518>>(x1519>x1520)));

    if (t180 != 16960785846962483074LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1521 = INT64_MIN;
	uint32_t x1522 = 1U;
	static int16_t x1524 = -1;

    t181 = (x1521*(x1522>>(x1523>x1524)));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x1537 = -1LL;
	volatile int16_t x1538 = INT16_MAX;
	uint8_t x1539 = 7U;
	static int64_t t182 = 1696601LL;

    t182 = (x1537*(x1538>>(x1539>x1540)));

    if (t182 != -32767LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1541 = INT32_MIN;
	volatile uint64_t x1542 = 236901819326LLU;
	volatile uint8_t x1543 = 1U;
	static volatile uint64_t x1544 = 2049924907LLU;
	uint64_t t183 = 568311096LLU;

    t183 = (x1541*(x1542>>(x1543>x1544)));

    if (t183 != 7766050879832064000LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1553 = INT16_MIN;
	uint8_t x1554 = 18U;
	static int8_t x1555 = -3;
	int64_t x1556 = INT64_MAX;
	volatile int32_t t184 = 881;

    t184 = (x1553*(x1554>>(x1555>x1556)));

    if (t184 != -589824) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1558 = UINT16_MAX;
	static volatile uint64_t x1559 = UINT64_MAX;
	uint16_t x1560 = 19104U;
	volatile uint64_t t185 = 33468871LLU;

    t185 = (x1557*(x1558>>(x1559>x1560)));

    if (t185 != 17236799128432781576LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x1574 = 15U;
	int32_t t186 = -338072622;

    t186 = (x1573*(x1574>>(x1575>x1576)));

    if (t186 != 1800) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1577 = INT16_MAX;
	volatile int32_t x1580 = 17;

    t187 = (x1577*(x1578>>(x1579>x1580)));

    if (t187 != 196602) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1581 = UINT8_MAX;
	volatile uint16_t x1582 = 6U;
	int16_t x1583 = -1;
	static int8_t x1584 = -20;
	volatile int32_t t188 = 132999402;

    t188 = (x1581*(x1582>>(x1583>x1584)));

    if (t188 != 765) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1585 = INT16_MIN;
	int16_t x1586 = INT16_MAX;
	int16_t x1587 = -39;
	int32_t t189 = -8038;

    t189 = (x1585*(x1586>>(x1587>x1588)));

    if (t189 != -536838144) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1593 = 702;
	volatile uint64_t x1594 = 1083254510397130458LLU;
	int16_t x1596 = INT16_MAX;
	volatile uint64_t t190 = 446LLU;

    t190 = (x1593*(x1594>>(x1595>x1596)));

    if (t190 != 11287451675201758438LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1597 = 0U;
	static uint8_t x1598 = 60U;
	int16_t x1600 = -54;
	int32_t t191 = 37;

    t191 = (x1597*(x1598>>(x1599>x1600)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1605 = 466U;
	static uint32_t x1606 = UINT32_MAX;
	uint16_t x1607 = 14549U;
	uint32_t x1608 = 75U;
	uint32_t t192 = 363969U;

    t192 = (x1605*(x1606>>(x1607>x1608)));

    if (t192 != 4294966830U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x1610 = 86315307943924LL;
	static uint16_t x1611 = 408U;
	int64_t x1612 = -1LL;
	volatile int64_t t193 = 7674250565221968LL;

    t193 = (x1609*(x1610>>(x1611>x1612)));

    if (t193 != 1414146847699278854LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x1621 = UINT8_MAX;
	uint32_t x1622 = 1395350U;
	static int8_t x1623 = INT8_MIN;
	uint64_t x1624 = 2838339LLU;
	static uint32_t t194 = 717859U;

    t194 = (x1621*(x1622>>(x1623>x1624)));

    if (t194 != 177907125U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1626 = UINT32_MAX;
	uint32_t x1628 = UINT32_MAX;

    t195 = (x1625*(x1626>>(x1627>x1628)));

    if (t195 != 128U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1631 = 940;
	int64_t x1632 = -653LL;
	static volatile uint64_t t196 = 793472LLU;

    t196 = (x1629*(x1630>>(x1631>x1632)));

    if (t196 != 32768LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x1637 = INT8_MIN;
	uint32_t x1638 = 16595U;
	int16_t x1639 = INT16_MIN;
	volatile uint32_t t197 = 817652266U;

    t197 = (x1637*(x1638>>(x1639>x1640)));

    if (t197 != 4292843136U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x1645 = -3;
	volatile int16_t x1647 = INT16_MAX;
	uint32_t x1648 = UINT32_MAX;
	volatile int32_t t198 = -5;

    t198 = (x1645*(x1646>>(x1647>x1648)));

    if (t198 != -18) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1653 = -1;
	int16_t x1654 = INT16_MAX;
	uint16_t x1655 = UINT16_MAX;
	volatile uint64_t x1656 = UINT64_MAX;
	int32_t t199 = 64;

    t199 = (x1653*(x1654>>(x1655>x1656)));

    if (t199 != -32767) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

