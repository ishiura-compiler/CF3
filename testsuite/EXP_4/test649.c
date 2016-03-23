
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

uint16_t x1 = UINT16_MAX;
volatile int8_t x4 = INT8_MIN;
uint8_t x30 = UINT8_MAX;
int32_t t3 = -1;
int64_t x79 = -1258630562893433954LL;
uint8_t x114 = UINT8_MAX;
int16_t x118 = INT16_MIN;
volatile int32_t t8 = -41;
int32_t t9 = -52683;
static int64_t x137 = 2780860234154538LL;
int8_t x138 = INT8_MIN;
int32_t x142 = -15156494;
int32_t x151 = INT32_MAX;
volatile int64_t t12 = -108191924448819363LL;
int64_t x171 = INT64_MIN;
static volatile int64_t t13 = -369992LL;
uint16_t x211 = 2411U;
uint8_t x212 = 12U;
static int8_t x215 = INT8_MIN;
int32_t x216 = -20;
static int64_t x219 = 260241619LL;
int64_t x226 = -1LL;
uint32_t x248 = 7U;
volatile uint32_t t23 = 4152U;
volatile int16_t x276 = INT16_MIN;
static int32_t x281 = INT32_MIN;
volatile int64_t t30 = -432900805603LL;
static int32_t x313 = INT32_MAX;
volatile uint32_t t34 = 0U;
int8_t x329 = INT8_MIN;
static uint32_t x331 = 1718588894U;
static uint8_t x334 = 41U;
static int64_t t36 = -3185661LL;
uint32_t x348 = 1499796413U;
static int16_t x349 = 1;
volatile uint64_t t39 = 9401127040261992LLU;
static uint64_t x363 = 157345159LLU;
int16_t x417 = -29;
int16_t x427 = INT16_MIN;
int64_t t50 = 0LL;
int64_t t51 = 70992LL;
int16_t x531 = -1;
volatile uint32_t x538 = 2035399U;
uint32_t t55 = 779714150U;
volatile int64_t t56 = -12LL;
int64_t x553 = -3605LL;
int32_t x554 = INT32_MAX;
uint16_t x560 = 11U;
int8_t x584 = INT8_MIN;
volatile uint64_t t62 = 2194805LLU;
static volatile int8_t x601 = -1;
int32_t x604 = 16588;
static int16_t x616 = -1;
uint32_t x634 = 41U;
int8_t x645 = -1;
int32_t t67 = 7307723;
uint8_t x650 = UINT8_MAX;
uint64_t x661 = 484257LLU;
static volatile int8_t x685 = INT8_MIN;
volatile int8_t x688 = 13;
int64_t x735 = INT64_MIN;
uint32_t x745 = UINT32_MAX;
uint64_t x758 = 1702644LLU;
int64_t t78 = -36514739LL;
static int8_t x792 = -1;
int32_t t79 = -226083;
int32_t x794 = -32;
static uint64_t x815 = 164708911524166004LLU;
int8_t x836 = INT8_MIN;
uint8_t x862 = 14U;
static int16_t x863 = INT16_MIN;
static volatile int32_t x864 = -57;
int64_t x906 = INT64_MIN;
uint16_t x930 = UINT16_MAX;
uint8_t x976 = 9U;
static int64_t t94 = -49285892581LL;
int32_t x988 = -1;
int16_t x990 = -1;
int32_t x991 = INT32_MIN;
int64_t t97 = -1333LL;
volatile uint32_t x1095 = 7155230U;
static volatile uint32_t t101 = 30857664U;
int16_t x1101 = INT16_MAX;
static int32_t x1103 = INT32_MAX;
uint8_t x1121 = UINT8_MAX;
int8_t x1124 = 21;
static int16_t x1125 = INT16_MIN;
volatile uint32_t x1126 = 2888637U;
int16_t x1148 = -1;
uint64_t t105 = 953073960896773LLU;
volatile int32_t t106 = -6931160;
volatile int8_t x1185 = -1;
volatile uint8_t x1186 = UINT8_MAX;
int8_t x1187 = -1;
static volatile int8_t x1199 = INT8_MAX;
uint64_t t109 = 2937935895LLU;
int64_t x1223 = INT64_MIN;
int32_t x1225 = -1;
int32_t x1226 = INT32_MIN;
int32_t t111 = -7065947;
uint64_t x1233 = UINT64_MAX;
int64_t x1234 = -1LL;
int16_t x1235 = -3194;
static volatile uint64_t t112 = 30615527389427LLU;
int64_t x1254 = INT64_MIN;
static volatile int32_t t114 = -1;
int16_t x1261 = INT16_MAX;
int64_t t115 = 234294999LL;
static volatile uint32_t t116 = 6U;
static int32_t x1273 = 514419;
volatile uint32_t t117 = 83505U;
uint64_t t118 = 478797242816784376LLU;
int8_t x1290 = 3;
int64_t x1321 = INT64_MAX;
uint64_t t121 = 3LLU;
int16_t x1357 = INT16_MAX;
volatile int16_t x1358 = -1;
int64_t t123 = -12724772536LL;
int64_t x1363 = INT64_MAX;
int16_t x1393 = -751;
volatile int64_t x1395 = INT64_MIN;
volatile int64_t x1403 = -803782215597265278LL;
static int64_t t126 = -9LL;
static int16_t x1473 = INT16_MIN;
static volatile int32_t t131 = 33023;
int64_t x1479 = 554606597754232LL;
uint64_t t132 = 453265568425956LLU;
int32_t x1483 = -722359;
uint64_t t133 = 373LLU;
int16_t x1497 = INT16_MAX;
uint64_t t136 = 14424528858LLU;
uint8_t x1511 = UINT8_MAX;
uint8_t x1512 = 5U;
volatile int16_t x1515 = -91;
int8_t x1516 = -7;
static volatile int64_t t139 = -5LL;
int64_t x1529 = 569028227257130LL;
int32_t x1530 = 382090;
int8_t x1531 = INT8_MIN;
volatile int64_t t143 = 7620395124LL;
uint32_t x1558 = 67551448U;
volatile uint32_t t144 = 1819482U;
uint16_t x1565 = 7U;
static volatile int16_t x1573 = INT16_MIN;
int8_t x1578 = INT8_MIN;
static int16_t x1588 = INT16_MIN;
int16_t x1605 = INT16_MAX;
volatile int8_t x1609 = -21;
static int64_t x1611 = 51447569334352LL;
static int32_t x1613 = INT32_MIN;
volatile int8_t x1622 = INT8_MIN;
uint32_t t156 = 33412951U;
int8_t x1666 = -1;
static int64_t x1667 = INT64_MIN;
volatile int32_t x1668 = INT32_MIN;
volatile int64_t t159 = -9352510LL;
int32_t x1713 = 42599;
int8_t x1721 = -6;
int8_t x1724 = 42;
volatile uint64_t t162 = 1074423642624LLU;
uint8_t x1738 = 1U;
int64_t t164 = 1LL;
uint64_t t167 = 7879068LLU;
int64_t t169 = -35172395045799981LL;
int8_t x1785 = -1;
int8_t x1786 = 3;
uint64_t t170 = 1530582093LLU;
static int64_t x1791 = INT64_MAX;
static int32_t x1792 = -1;
int32_t x1798 = INT32_MAX;
volatile uint32_t t172 = 972293406U;
volatile uint32_t t174 = 9389U;
int16_t x1820 = -1;
volatile uint32_t x1829 = 13884U;
static volatile int32_t x1841 = 0;
uint64_t t178 = 799LLU;
volatile int32_t t179 = -8;
static int16_t x1862 = 1442;
uint64_t x1870 = 264788LLU;
volatile uint32_t x1872 = UINT32_MAX;
uint64_t t181 = 6575294499683993LLU;
static volatile int64_t x1893 = -268387551LL;
int32_t t183 = 75801;
volatile int8_t x1912 = -1;
int16_t x1941 = INT16_MIN;
uint64_t x1943 = 1116930990181834LLU;
int32_t x1950 = INT32_MIN;
int16_t x1962 = INT16_MAX;
int16_t x1963 = INT16_MIN;
int16_t x1965 = INT16_MAX;
volatile int16_t x1966 = INT16_MIN;
int64_t x1981 = INT64_MAX;
uint32_t x1982 = 5U;
volatile int64_t t192 = 598755051LL;
int64_t x2020 = -1LL;
uint64_t x2031 = 886092LLU;
volatile uint32_t t195 = 55619367U;
int16_t x2066 = 726;
uint64_t x2075 = 20317877544895LLU;


void f0(void) {
    	int16_t x2 = -1;
	volatile int64_t x3 = INT64_MAX;
	volatile int64_t t0 = 116638629228751919LL;

    t0 = (x1%(x2%(x3/x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = -7525819LL;
	uint16_t x14 = 13608U;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 11U;
	int64_t t1 = 369571110196502648LL;

    t1 = (x13%(x14%(x15/x16)));

    if (t1 != -595LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x29 = 15U;
	int16_t x31 = INT16_MIN;
	volatile uint8_t x32 = 7U;
	uint32_t t2 = 14U;

    t2 = (x29%(x30%(x31/x32)));

    if (t2 != 15U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x45 = -1;
	static int16_t x46 = 1;
	int8_t x47 = INT8_MIN;
	volatile uint8_t x48 = 24U;

    t3 = (x45%(x46%(x47/x48)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x77 = INT16_MIN;
	uint8_t x78 = 44U;
	int32_t x80 = INT32_MAX;
	volatile int64_t t4 = 59LL;

    t4 = (x77%(x78%(x79/x80)));

    if (t4 != -32LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x93 = -1;
	int8_t x94 = INT8_MIN;
	uint64_t x95 = 2064443890259LLU;
	volatile int8_t x96 = INT8_MAX;
	uint64_t t5 = 66246LLU;

    t5 = (x93%(x94%(x95/x96)));

    if (t5 != 3547867375LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x97 = 25U;
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MAX;
	int16_t x100 = 7;
	static int32_t t6 = -45162;

    t6 = (x97%(x98%(x99/x100)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x113 = -3;
	int64_t x115 = INT64_MIN;
	static int8_t x116 = INT8_MAX;
	int64_t t7 = -21687793LL;

    t7 = (x113%(x114%(x115/x116)));

    if (t7 != -3LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x117 = 3U;
	int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;

    t8 = (x117%(x118%(x119/x120)));

    if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	static int16_t x135 = -12366;
	int32_t x136 = -1;

    t9 = (x133%(x134%(x135/x136)));

    if (t9 != -7296) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x139 = UINT32_MAX;
	static volatile uint8_t x140 = 11U;
	volatile int64_t t10 = -31LL;

    t10 = (x137%(x138%(x139/x140)));

    if (t10 != 206558170LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x141 = -1;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 11LLU;
	uint64_t t11 = 85233LLU;

    t11 = (x141%(x142%(x143/x144)));

    if (t11 != 333442531LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MIN;
	int32_t x152 = -359;

    t12 = (x149%(x150%(x151/x152)));

    if (t12 != 79LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 23524410U;
	int32_t x172 = INT32_MIN;

    t13 = (x169%(x170%(x171/x172)));

    if (t13 != 13524675LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x173 = -1LL;
	int32_t x174 = INT32_MAX;
	static int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MIN;
	int64_t t14 = -11248522LL;

    t14 = (x173%(x174%(x175/x176)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x177 = 0U;
	int8_t x178 = 11;
	int32_t x179 = INT32_MIN;
	static uint8_t x180 = 120U;
	volatile int32_t t15 = 33;

    t15 = (x177%(x178%(x179/x180)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x201 = 1795857460668LLU;
	int16_t x202 = 4666;
	int64_t x203 = INT64_MAX;
	int64_t x204 = 51LL;
	volatile uint64_t t16 = 2936812LLU;

    t16 = (x201%(x202%(x203/x204)));

    if (t16 != 3722LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x209 = INT64_MIN;
	static int32_t x210 = INT32_MIN;
	int64_t t17 = 440991LL;

    t17 = (x209%(x210%(x211/x212)));

    if (t17 != -32LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x213 = INT16_MAX;
	static volatile int8_t x214 = -1;
	volatile int32_t t18 = -14889;

    t18 = (x213%(x214%(x215/x216)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x217 = INT16_MAX;
	static int16_t x218 = 85;
	int16_t x220 = -1;
	int64_t t19 = -1203708545LL;

    t19 = (x217%(x218%(x219/x220)));

    if (t19 != 42LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x221 = -1;
	int32_t x222 = INT32_MAX;
	volatile int16_t x223 = INT16_MIN;
	uint64_t x224 = 14312835314860641LLU;
	volatile uint64_t t20 = 779846725522390LLU;

    t20 = (x221%(x222%(x223/x224)));

    if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x225 = INT64_MAX;
	int64_t x227 = -43929272417241605LL;
	int8_t x228 = -1;
	volatile int64_t t21 = 2894566230742LL;

    t21 = (x225%(x226%(x227/x228)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x241 = INT8_MIN;
	uint8_t x242 = 11U;
	static int64_t x243 = 2653749222744LL;
	volatile uint16_t x244 = 177U;
	volatile int64_t t22 = -1974303145LL;

    t22 = (x241%(x242%(x243/x244)));

    if (t22 != -7LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x245 = -15;
	uint8_t x246 = UINT8_MAX;
	uint8_t x247 = 54U;

    t23 = (x245%(x246%(x247/x248)));

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x265 = -1LL;
	int8_t x266 = -1;
	int16_t x267 = -8698;
	uint64_t x268 = 5722LLU;
	uint64_t t24 = 13075132592LLU;

    t24 = (x265%(x266%(x267/x268)));

    if (t24 != 7477LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x273 = INT8_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	static int32_t x275 = INT32_MIN;
	volatile uint64_t t25 = 2222456509161805464LLU;

    t25 = (x273%(x274%(x275/x276)));

    if (t25 != 65408LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x282 = 2LLU;
	int32_t x283 = -232286;
	int8_t x284 = 21;
	uint64_t t26 = 9LLU;

    t26 = (x281%(x282%(x283/x284)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x285 = -1;
	volatile int32_t x286 = INT32_MIN;
	uint64_t x287 = 3401110336853082LLU;
	static int32_t x288 = INT32_MAX;
	uint64_t t27 = 4084LLU;

    t27 = (x285%(x286%(x287/x288)));

    if (t27 != 135631LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x289 = INT16_MAX;
	int32_t x290 = -5400997;
	int16_t x291 = INT16_MAX;
	uint16_t x292 = 75U;
	int32_t t28 = 10;

    t28 = (x289%(x290%(x291/x292)));

    if (t28 != 172) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x293 = INT8_MAX;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int16_t x296 = 4840;
	uint64_t t29 = 46955LLU;

    t29 = (x293%(x294%(x295/x296)));

    if (t29 != 127LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x297 = 4;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;

    t30 = (x297%(x298%(x299/x300)));

    if (t30 != 4LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x301 = UINT8_MAX;
	int16_t x302 = -1;
	uint32_t x303 = 2542U;
	uint32_t x304 = 170U;
	volatile uint32_t t31 = 76675U;

    t31 = (x301%(x302%(x303/x304)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x309 = 8514056155LL;
	int32_t x310 = -1;
	int64_t x311 = INT64_MIN;
	volatile int32_t x312 = -4023048;
	int64_t t32 = 81759LL;

    t32 = (x309%(x310%(x311/x312)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x314 = -1995621LL;
	uint16_t x315 = 5U;
	int32_t x316 = -1;
	volatile int64_t t33 = -188590LL;

    t33 = (x313%(x314%(x315/x316)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x321 = 195606875U;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;

    t34 = (x321%(x322%(x323/x324)));

    if (t34 != 50435U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x330 = 10826329LLU;
	volatile uint16_t x332 = UINT16_MAX;
	volatile uint64_t t35 = 38449841LLU;

    t35 = (x329%(x330%(x331/x332)));

    if (t35 != 13738LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x333 = -1;
	int64_t x335 = 428086LL;
	int16_t x336 = INT16_MIN;

    t36 = (x333%(x334%(x335/x336)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x337 = INT32_MIN;
	volatile uint16_t x338 = 346U;
	int16_t x339 = INT16_MIN;
	static uint16_t x340 = 1U;
	int32_t t37 = -102;

    t37 = (x337%(x338%(x339/x340)));

    if (t37 != -48) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x345 = 26210022889LLU;
	volatile int32_t x346 = -25695;
	static uint32_t x347 = UINT32_MAX;
	volatile uint64_t t38 = 4LLU;

    t38 = (x345%(x346%(x347/x348)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x350 = 3187420109280168LLU;
	static volatile uint32_t x351 = 4188596U;
	uint32_t x352 = 11U;

    t39 = (x349%(x350%(x351/x352)));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x361 = -1;
	uint64_t x362 = 8309LLU;
	int32_t x364 = 1;
	volatile uint64_t t40 = 831975741757LLU;

    t40 = (x361%(x362%(x363/x364)));

    if (t40 != 2164LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = UINT32_MAX;
	static uint64_t x375 = UINT64_MAX;
	volatile uint64_t x376 = 174336351LLU;
	volatile uint64_t t41 = 4150780624773LLU;

    t41 = (x373%(x374%(x375/x376)));

    if (t41 != 65535LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x381 = 32480U;
	int8_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 6639LLU;
	uint64_t t42 = 343LLU;

    t42 = (x381%(x382%(x383/x384)));

    if (t42 != 2795LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x385 = 23LL;
	int64_t x386 = INT64_MAX;
	int32_t x387 = 64;
	static int64_t x388 = -1LL;
	volatile int64_t t43 = 1LL;

    t43 = (x385%(x386%(x387/x388)));

    if (t43 != 23LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x393 = INT64_MIN;
	uint8_t x394 = 7U;
	int32_t x395 = INT32_MAX;
	int64_t x396 = -1LL;
	volatile int64_t t44 = 4221LL;

    t44 = (x393%(x394%(x395/x396)));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MAX;
	static volatile int64_t t45 = 749962588114993694LL;

    t45 = (x409%(x410%(x411/x412)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x418 = INT16_MAX;
	static volatile int8_t x419 = -1;
	volatile uint32_t x420 = 161U;
	volatile uint32_t t46 = 27U;

    t46 = (x417%(x418%(x419/x420)));

    if (t46 != 32742U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -14081175;
	int8_t x423 = -24;
	int64_t x424 = -1LL;
	static volatile int64_t t47 = -12878310597025LL;

    t47 = (x421%(x422%(x423/x424)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x425 = -114921695855155LL;
	volatile int8_t x426 = INT8_MIN;
	static volatile int16_t x428 = 1;
	volatile int64_t t48 = -2596537466084177596LL;

    t48 = (x425%(x426%(x427/x428)));

    if (t48 != -51LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x437 = INT64_MAX;
	uint16_t x438 = UINT16_MAX;
	uint64_t x439 = 48618049LLU;
	uint8_t x440 = 66U;
	volatile uint64_t t49 = 1759399905761748LLU;

    t49 = (x437%(x438%(x439/x440)));

    if (t49 != 32767LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x457 = -6980125936218031LL;
	volatile int64_t x458 = INT64_MIN;
	int16_t x459 = 3130;
	uint32_t x460 = 3U;

    t50 = (x457%(x458%(x459/x460)));

    if (t50 != -31LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = INT64_MAX;
	volatile uint16_t x511 = 33U;
	static volatile int64_t x512 = -1LL;

    t51 = (x509%(x510%(x511/x512)));

    if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x521 = INT64_MAX;
	int16_t x522 = 1;
	int64_t x523 = INT64_MIN;
	uint64_t x524 = 1141339541631082148LLU;
	volatile uint64_t t52 = 15017848128076804LLU;

    t52 = (x521%(x522%(x523/x524)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x525 = -5140;
	int32_t x526 = INT32_MAX;
	static volatile int8_t x527 = INT8_MIN;
	int32_t x528 = -15;
	int32_t t53 = 16270;

    t53 = (x525%(x526%(x527/x528)));

    if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x529 = 3362LL;
	static int16_t x530 = -1;
	uint32_t x532 = 354U;
	int64_t t54 = 534741867LL;

    t54 = (x529%(x530%(x531/x532)));

    if (t54 != 257LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x537 = INT16_MIN;
	uint8_t x539 = UINT8_MAX;
	volatile int8_t x540 = -1;

    t55 = (x537%(x538%(x539/x540)));

    if (t55 != 242638U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x549 = INT8_MIN;
	static volatile int64_t x550 = -27LL;
	volatile int64_t x551 = INT64_MAX;
	int16_t x552 = 31;

    t56 = (x549%(x550%(x551/x552)));

    if (t56 != -20LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x555 = UINT32_MAX;
	int16_t x556 = INT16_MAX;
	int64_t t57 = -178275839LL;

    t57 = (x553%(x554%(x555/x556)));

    if (t57 != -3605LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x557 = INT16_MIN;
	static volatile uint32_t x558 = 663603015U;
	volatile int64_t x559 = 391482600LL;
	int64_t t58 = -638249604472918LL;

    t58 = (x557%(x558%(x559/x560)));

    if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x565 = 2U;
	int8_t x566 = -2;
	static int64_t x567 = INT64_MIN;
	int8_t x568 = -5;
	volatile int64_t t59 = -65340867120LL;

    t59 = (x565%(x566%(x567/x568)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x581 = UINT8_MAX;
	static uint32_t x582 = 8947U;
	int32_t x583 = INT32_MAX;
	uint32_t t60 = 358219805U;

    t60 = (x581%(x582%(x583/x584)));

    if (t60 != 255U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x593 = 492;
	volatile uint8_t x594 = 53U;
	int64_t x595 = 1458416751LL;
	static uint16_t x596 = 6U;
	volatile int64_t t61 = -3732102LL;

    t61 = (x593%(x594%(x595/x596)));

    if (t61 != 15LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x597 = UINT64_MAX;
	static int32_t x598 = INT32_MIN;
	volatile int64_t x599 = INT64_MIN;
	volatile uint16_t x600 = UINT16_MAX;

    t62 = (x597%(x598%(x599/x600)));

    if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x602 = 168774026094735LL;
	uint64_t x603 = 271689814LLU;
	uint64_t t63 = 134748837367225904LLU;

    t63 = (x601%(x602%(x603/x604)));

    if (t63 != 376LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x613 = 22U;
	static int32_t x614 = INT32_MAX;
	static volatile int16_t x615 = -589;
	int32_t t64 = -552;

    t64 = (x613%(x614%(x615/x616)));

    if (t64 != 22) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x633 = -1;
	volatile uint64_t x635 = UINT64_MAX;
	volatile int32_t x636 = INT32_MAX;
	static volatile uint64_t t65 = 5265665603LLU;

    t65 = (x633%(x634%(x635/x636)));

    if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x637 = -108469140238125877LL;
	uint64_t x638 = UINT64_MAX;
	volatile int16_t x639 = 129;
	int8_t x640 = 6;
	uint64_t t66 = 139392LLU;

    t66 = (x637%(x638%(x639/x640)));

    if (t66 != 9LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x646 = UINT16_MAX;
	static volatile int32_t x647 = -421863349;
	uint16_t x648 = 5105U;

    t67 = (x645%(x646%(x647/x648)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x649 = INT16_MAX;
	static int8_t x651 = INT8_MIN;
	uint8_t x652 = 44U;
	volatile int32_t t68 = -282040;

    t68 = (x649%(x650%(x651/x652)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x662 = -1;
	int32_t x663 = 103731776;
	uint32_t x664 = 2U;
	uint64_t t69 = 1095692856994250LLU;

    t69 = (x661%(x662%(x663/x664)));

    if (t69 != 484257LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x669 = 24;
	int8_t x670 = INT8_MAX;
	volatile int8_t x671 = 59;
	static uint16_t x672 = 2U;
	volatile int32_t t70 = 0;

    t70 = (x669%(x670%(x671/x672)));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x686 = -302514761659070LL;
	int32_t x687 = INT32_MIN;
	static int64_t t71 = -700031130797LL;

    t71 = (x685%(x686%(x687/x688)));

    if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x717 = INT16_MAX;
	volatile int64_t x718 = 122759461216969LL;
	volatile uint8_t x719 = UINT8_MAX;
	static int8_t x720 = 1;
	volatile int64_t t72 = 5847LL;

    t72 = (x717%(x718%(x719/x720)));

    if (t72 != 63LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x721 = -1;
	uint8_t x722 = 114U;
	static volatile uint64_t x723 = UINT64_MAX;
	volatile uint32_t x724 = 36U;
	uint64_t t73 = 6LLU;

    t73 = (x721%(x722%(x723/x724)));

    if (t73 != 111LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x733 = INT16_MAX;
	int8_t x734 = INT8_MIN;
	static int64_t x736 = 125075763758739LL;
	static int64_t t74 = -1052873162203856861LL;

    t74 = (x733%(x734%(x735/x736)));

    if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x746 = 1;
	volatile int16_t x747 = INT16_MIN;
	volatile uint8_t x748 = 12U;
	static uint32_t t75 = 931079U;

    t75 = (x745%(x746%(x747/x748)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x749 = 52U;
	uint32_t x750 = 29U;
	int16_t x751 = INT16_MIN;
	uint16_t x752 = 17U;
	volatile uint32_t t76 = 114185U;

    t76 = (x749%(x750%(x751/x752)));

    if (t76 != 23U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x757 = INT64_MIN;
	int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MIN;
	volatile uint64_t t77 = 11442183199LLU;

    t77 = (x757%(x758%(x759/x760)));

    if (t77 != 8LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x769 = 26;
	int8_t x770 = -1;
	int64_t x771 = INT64_MAX;
	uint16_t x772 = UINT16_MAX;

    t78 = (x769%(x770%(x771/x772)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x789 = INT8_MIN;
	uint16_t x790 = 699U;
	int8_t x791 = 6;

    t79 = (x789%(x790%(x791/x792)));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x793 = -1;
	int16_t x795 = INT16_MIN;
	volatile uint32_t x796 = 60845204U;
	static uint32_t t80 = 9U;

    t80 = (x793%(x794%(x795/x796)));

    if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x797 = 7369009U;
	static volatile uint16_t x798 = UINT16_MAX;
	uint32_t x799 = UINT32_MAX;
	volatile uint32_t x800 = 224170U;
	uint32_t t81 = 1211U;

    t81 = (x797%(x798%(x799/x800)));

    if (t81 != 3997U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x801 = 3456U;
	uint8_t x802 = UINT8_MAX;
	int8_t x803 = 44;
	uint16_t x804 = 21U;
	static uint32_t t82 = 200U;

    t82 = (x801%(x802%(x803/x804)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x813 = -2;
	uint32_t x814 = UINT32_MAX;
	volatile uint64_t x816 = 43LLU;
	volatile uint64_t t83 = 634179146042219544LLU;

    t83 = (x813%(x814%(x815/x816)));

    if (t83 != 4294967294LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x825 = INT64_MAX;
	uint8_t x826 = 33U;
	static uint16_t x827 = UINT16_MAX;
	int16_t x828 = INT16_MAX;
	int64_t t84 = 63240206349439LL;

    t84 = (x825%(x826%(x827/x828)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x833 = INT8_MIN;
	static uint64_t x834 = 10735492631661460LLU;
	static volatile int32_t x835 = INT32_MIN;
	uint64_t t85 = 16075LLU;

    t85 = (x833%(x834%(x835/x836)));

    if (t85 != 9712228LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x841 = -352784221LL;
	int64_t x842 = INT64_MAX;
	uint64_t x843 = UINT64_MAX;
	int8_t x844 = 10;
	uint64_t t86 = 5189LLU;

    t86 = (x841%(x842%(x843/x844)));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x861 = INT64_MAX;
	int64_t t87 = -37597947418772324LL;

    t87 = (x861%(x862%(x863/x864)));

    if (t87 != 7LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x865 = 3;
	static int64_t x866 = 134159666238LL;
	static uint8_t x867 = 30U;
	static volatile int8_t x868 = -1;
	static volatile int64_t t88 = 1LL;

    t88 = (x865%(x866%(x867/x868)));

    if (t88 != 3LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x873 = 55U;
	int8_t x874 = -1;
	static int64_t x875 = INT64_MAX;
	volatile int32_t x876 = INT32_MIN;
	volatile int64_t t89 = 15169006892116177LL;

    t89 = (x873%(x874%(x875/x876)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x905 = UINT8_MAX;
	static uint32_t x907 = UINT32_MAX;
	volatile uint16_t x908 = UINT16_MAX;
	static volatile int64_t t90 = -351895882LL;

    t90 = (x905%(x906%(x907/x908)));

    if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x929 = 1U;
	int16_t x931 = INT16_MAX;
	int8_t x932 = -1;
	int32_t t91 = 48;

    t91 = (x929%(x930%(x931/x932)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x941 = -1;
	volatile int16_t x942 = -11982;
	int16_t x943 = -1;
	uint32_t x944 = 1185782U;
	static uint32_t t92 = 437U;

    t92 = (x941%(x942%(x943/x944)));

    if (t92 != 1527U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x949 = INT64_MAX;
	uint32_t x950 = 67U;
	int64_t x951 = INT64_MIN;
	uint32_t x952 = 5U;
	volatile int64_t t93 = -62606765480162960LL;

    t93 = (x949%(x950%(x951/x952)));

    if (t93 != 41LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x973 = 1850445LL;
	int16_t x974 = INT16_MIN;
	volatile uint16_t x975 = 14725U;

    t94 = (x973%(x974%(x975/x976)));

    if (t94 != 45LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x981 = -1;
	uint64_t x982 = UINT64_MAX;
	int16_t x983 = INT16_MAX;
	int8_t x984 = -9;
	uint64_t t95 = 96090LLU;

    t95 = (x981%(x982%(x983/x984)));

    if (t95 != 822LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x985 = INT16_MAX;
	int8_t x986 = -1;
	int64_t x987 = -62403LL;
	volatile int64_t t96 = -125979429975LL;

    t96 = (x985%(x986%(x987/x988)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x989 = INT32_MIN;
	int64_t x992 = -1LL;

    t97 = (x989%(x990%(x991/x992)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x993 = INT8_MIN;
	static int64_t x994 = INT64_MIN;
	uint64_t x995 = 115799640843702LLU;
	volatile int32_t x996 = 307;
	uint64_t t98 = 297589980055594LLU;

    t98 = (x993%(x994%(x995/x996)));

    if (t98 != 11361517268LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x1073 = 1;
	int64_t x1074 = -953110384344757LL;
	int32_t x1075 = -16005;
	int8_t x1076 = 1;
	volatile int64_t t99 = -111LL;

    t99 = (x1073%(x1074%(x1075/x1076)));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x1077 = INT8_MIN;
	int64_t x1078 = INT64_MIN;
	static volatile uint64_t x1079 = 6478535LLU;
	uint32_t x1080 = 674316U;
	static uint64_t t100 = 496118593940LLU;

    t100 = (x1077%(x1078%(x1079/x1080)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x1093 = INT8_MAX;
	uint8_t x1094 = UINT8_MAX;
	volatile uint16_t x1096 = 3U;

    t101 = (x1093%(x1094%(x1095/x1096)));

    if (t101 != 127U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x1102 = INT16_MIN;
	int8_t x1104 = INT8_MIN;
	int32_t t102 = -641552;

    t102 = (x1101%(x1102%(x1103/x1104)));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x1122 = -4493481278879217LL;
	uint64_t x1123 = UINT64_MAX;
	static volatile uint64_t t103 = 2108054031166340580LLU;

    t103 = (x1121%(x1122%(x1123/x1124)));

    if (t103 != 255LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x1127 = INT64_MAX;
	volatile int32_t x1128 = -1;
	static volatile int64_t t104 = 3521895431096001LL;

    t104 = (x1125%(x1126%(x1127/x1128)));

    if (t104 != -32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x1145 = UINT16_MAX;
	uint64_t x1146 = UINT64_MAX;
	uint16_t x1147 = UINT16_MAX;

    t105 = (x1145%(x1146%(x1147/x1148)));

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x1153 = UINT16_MAX;
	int32_t x1154 = INT32_MAX;
	static int16_t x1155 = INT16_MIN;
	static int8_t x1156 = INT8_MAX;

    t106 = (x1153%(x1154%(x1155/x1156)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x1188 = 1792508672534LLU;
	uint64_t t107 = 2297658LLU;

    t107 = (x1185%(x1186%(x1187/x1188)));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x1197 = 32U;
	volatile uint8_t x1198 = UINT8_MAX;
	int16_t x1200 = -1;
	int32_t t108 = 861;

    t108 = (x1197%(x1198%(x1199/x1200)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x1209 = INT16_MAX;
	int32_t x1210 = INT32_MIN;
	volatile uint64_t x1211 = UINT64_MAX;
	volatile int64_t x1212 = 2643878846LL;

    t109 = (x1209%(x1210%(x1211/x1212)));

    if (t109 != 32767LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x1221 = INT8_MIN;
	int16_t x1222 = -1;
	int16_t x1224 = INT16_MIN;
	int64_t t110 = 26676LL;

    t110 = (x1221%(x1222%(x1223/x1224)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x1227 = 265411994;
	static int8_t x1228 = -62;

    t111 = (x1225%(x1226%(x1227/x1228)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x1236 = 3;

    t112 = (x1233%(x1234%(x1235/x1236)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x1253 = -1;
	static int16_t x1255 = INT16_MIN;
	int16_t x1256 = 80;
	static volatile int64_t t113 = 100823330882LL;

    t113 = (x1253%(x1254%(x1255/x1256)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x1257 = UINT16_MAX;
	static int32_t x1258 = 55;
	volatile uint16_t x1259 = 414U;
	volatile uint16_t x1260 = 28U;

    t114 = (x1257%(x1258%(x1259/x1260)));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x1262 = 83563U;
	int64_t x1263 = INT64_MIN;
	uint8_t x1264 = UINT8_MAX;

    t115 = (x1261%(x1262%(x1263/x1264)));

    if (t115 != 32767LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x1269 = 0U;
	int16_t x1270 = -73;
	int8_t x1271 = INT8_MAX;
	int32_t x1272 = -1;

    t116 = (x1269%(x1270%(x1271/x1272)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x1274 = UINT32_MAX;
	int16_t x1275 = INT16_MIN;
	uint32_t x1276 = 2126340738U;

    t117 = (x1273%(x1274%(x1275/x1276)));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x1277 = INT64_MAX;
	int32_t x1278 = INT32_MIN;
	uint64_t x1279 = 851LLU;
	int32_t x1280 = 1;

    t118 = (x1277%(x1278%(x1279/x1280)));

    if (t118 != 25LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x1289 = INT32_MAX;
	int32_t x1291 = 46400;
	static int8_t x1292 = INT8_MIN;
	volatile int32_t t119 = -8767;

    t119 = (x1289%(x1290%(x1291/x1292)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x1297 = -1;
	volatile int16_t x1298 = INT16_MIN;
	volatile int32_t x1299 = INT32_MIN;
	uint16_t x1300 = 6U;
	volatile int32_t t120 = -31988947;

    t120 = (x1297%(x1298%(x1299/x1300)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x1322 = UINT32_MAX;
	uint64_t x1323 = 6148135230209165458LLU;
	int64_t x1324 = 440872236LL;

    t121 = (x1321%(x1322%(x1323/x1324)));

    if (t121 != 2147483647LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1353 = INT16_MIN;
	static int16_t x1354 = 11;
	int32_t x1355 = INT32_MIN;
	uint8_t x1356 = UINT8_MAX;
	int32_t t122 = 3414928;

    t122 = (x1353%(x1354%(x1355/x1356)));

    if (t122 != -10) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x1359 = 3721;
	int64_t x1360 = -116LL;

    t123 = (x1357%(x1358%(x1359/x1360)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1361 = 1808U;
	uint64_t x1362 = 88LLU;
	uint32_t x1364 = 1U;
	static volatile uint64_t t124 = 179053863390LLU;

    t124 = (x1361%(x1362%(x1363/x1364)));

    if (t124 != 48LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x1394 = 2530U;
	int32_t x1396 = INT32_MAX;
	volatile int64_t t125 = -186777028784770LL;

    t125 = (x1393%(x1394%(x1395/x1396)));

    if (t125 != -751LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x1401 = INT64_MAX;
	int64_t x1402 = -1LL;
	static uint8_t x1404 = 1U;

    t126 = (x1401%(x1402%(x1403/x1404)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x1409 = -1;
	static uint64_t x1410 = 37531444706237LLU;
	static uint64_t x1411 = 129365173893892360LLU;
	uint16_t x1412 = 180U;
	uint64_t t127 = 285740991035234994LLU;

    t127 = (x1409%(x1410%(x1411/x1412)));

    if (t127 != 1469149359878LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1413 = INT8_MIN;
	uint16_t x1414 = 29604U;
	uint16_t x1415 = 7U;
	int32_t x1416 = 1;
	volatile int32_t t128 = 1531862;

    t128 = (x1413%(x1414%(x1415/x1416)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1445 = 44848564LL;
	volatile int16_t x1446 = 504;
	volatile uint64_t x1447 = 2084939045LLU;
	uint16_t x1448 = 4U;
	uint64_t t129 = 330LLU;

    t129 = (x1445%(x1446%(x1447/x1448)));

    if (t129 != 124LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x1453 = UINT64_MAX;
	int32_t x1454 = -4;
	uint32_t x1455 = 3U;
	int64_t x1456 = -1LL;
	static uint64_t t130 = 893540996660LLU;

    t130 = (x1453%(x1454%(x1455/x1456)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x1474 = INT16_MIN;
	int16_t x1475 = -357;
	uint8_t x1476 = 6U;

    t131 = (x1473%(x1474%(x1475/x1476)));

    if (t131 != -16) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x1477 = INT32_MIN;
	volatile uint64_t x1478 = 487LLU;
	int8_t x1480 = -10;

    t132 = (x1477%(x1478%(x1479/x1480)));

    if (t132 != 117LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x1481 = INT16_MAX;
	volatile uint64_t x1482 = 15242648506LLU;
	uint64_t x1484 = 3LLU;

    t133 = (x1481%(x1482%(x1483/x1484)));

    if (t133 != 32767LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x1485 = 15023LLU;
	int32_t x1486 = -167430836;
	int32_t x1487 = INT32_MAX;
	int64_t x1488 = 132LL;
	volatile uint64_t t134 = 1LLU;

    t134 = (x1485%(x1486%(x1487/x1488)));

    if (t134 != 15023LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1489 = UINT8_MAX;
	int32_t x1490 = 4852713;
	uint16_t x1491 = 542U;
	uint32_t x1492 = 39U;
	volatile uint32_t t135 = 2U;

    t135 = (x1489%(x1490%(x1491/x1492)));

    if (t135 != 7U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1498 = 5LLU;
	int16_t x1499 = -2004;
	static uint16_t x1500 = 32U;

    t136 = (x1497%(x1498%(x1499/x1500)));

    if (t136 != 2LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1505 = -8;
	uint8_t x1506 = UINT8_MAX;
	int32_t x1507 = 3283974;
	int16_t x1508 = 15;
	int32_t t137 = -1260;

    t137 = (x1505%(x1506%(x1507/x1508)));

    if (t137 != -8) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x1509 = INT32_MAX;
	int8_t x1510 = INT8_MIN;
	int32_t t138 = -3742569;

    t138 = (x1509%(x1510%(x1511/x1512)));

    if (t138 != 23) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x1513 = INT64_MIN;
	int64_t x1514 = INT64_MAX;

    t139 = (x1513%(x1514%(x1515/x1516)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x1517 = INT16_MIN;
	int64_t x1518 = -71809989726345825LL;
	static int32_t x1519 = 3206;
	volatile int8_t x1520 = -1;
	int64_t t140 = -2422255336611947163LL;

    t140 = (x1517%(x1518%(x1519/x1520)));

    if (t140 != -825LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1532 = 1;
	static volatile int64_t t141 = -2102794234678605085LL;

    t141 = (x1529%(x1530%(x1531/x1532)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1537 = 51;
	uint8_t x1538 = 1U;
	static int32_t x1539 = 128617259;
	uint8_t x1540 = UINT8_MAX;
	volatile int32_t t142 = 3864;

    t142 = (x1537%(x1538%(x1539/x1540)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x1549 = UINT8_MAX;
	int32_t x1550 = INT32_MIN;
	volatile int64_t x1551 = -5468490948LL;
	uint8_t x1552 = 53U;

    t143 = (x1549%(x1550%(x1551/x1552)));

    if (t143 != 255LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x1557 = 1U;
	static int16_t x1559 = -1;
	uint32_t x1560 = 16915U;

    t144 = (x1557%(x1558%(x1559/x1560)));

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x1566 = UINT64_MAX;
	int32_t x1567 = INT32_MIN;
	uint8_t x1568 = UINT8_MAX;
	uint64_t t145 = 136143375077LLU;

    t145 = (x1565%(x1566%(x1567/x1568)));

    if (t145 != 7LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1574 = 1U;
	uint32_t x1575 = UINT32_MAX;
	uint16_t x1576 = 201U;
	uint32_t t146 = 2046568U;

    t146 = (x1573%(x1574%(x1575/x1576)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1577 = -444;
	int16_t x1579 = INT16_MIN;
	static int64_t x1580 = -1LL;
	volatile int64_t t147 = -1722LL;

    t147 = (x1577%(x1578%(x1579/x1580)));

    if (t147 != -60LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1581 = -1;
	int32_t x1582 = -7198038;
	int8_t x1583 = 8;
	int16_t x1584 = -1;
	int32_t t148 = -2;

    t148 = (x1581%(x1582%(x1583/x1584)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1585 = -5;
	int16_t x1586 = INT16_MIN;
	int32_t x1587 = INT32_MIN;
	int32_t t149 = 1;

    t149 = (x1585%(x1586%(x1587/x1588)));

    if (t149 != -5) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1601 = INT32_MIN;
	uint64_t x1602 = UINT64_MAX;
	int64_t x1603 = INT64_MAX;
	uint32_t x1604 = 137U;
	uint64_t t150 = 393537819774677642LLU;

    t150 = (x1601%(x1602%(x1603/x1604)));

    if (t150 != 9LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1606 = 26;
	static volatile uint8_t x1607 = 114U;
	uint16_t x1608 = 35U;
	volatile int32_t t151 = -28756;

    t151 = (x1605%(x1606%(x1607/x1608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x1610 = 1317126410069943778LLU;
	static uint32_t x1612 = 883800U;
	volatile uint64_t t152 = 230556504625847215LLU;

    t152 = (x1609%(x1610%(x1611/x1612)));

    if (t152 != 383837LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1614 = -1LL;
	int64_t x1615 = 848508557409346773LL;
	volatile uint64_t x1616 = 6LLU;
	static volatile uint64_t t153 = 0LLU;

    t153 = (x1613%(x1614%(x1615/x1616)));

    if (t153 != 41105101985779793LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1621 = -1;
	int64_t x1623 = INT64_MAX;
	static uint32_t x1624 = 481572433U;
	volatile int64_t t154 = -7104801281LL;

    t154 = (x1621%(x1622%(x1623/x1624)));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1625 = INT8_MIN;
	int64_t x1626 = INT64_MAX;
	int64_t x1627 = 1110766700LL;
	uint16_t x1628 = UINT16_MAX;
	int64_t t155 = 3365196369793LL;

    t155 = (x1625%(x1626%(x1627/x1628)));

    if (t155 != -128LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1637 = 168550626;
	int32_t x1638 = 446807744;
	int8_t x1639 = INT8_MIN;
	uint32_t x1640 = 8052U;

    t156 = (x1637%(x1638%(x1639/x1640)));

    if (t156 != 123920U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1665 = 4233U;
	int64_t t157 = -104LL;

    t157 = (x1665%(x1666%(x1667/x1668)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1685 = 6608087018012491358LLU;
	uint64_t x1686 = 35552LLU;
	int64_t x1687 = INT64_MAX;
	int64_t x1688 = 6824818865LL;
	volatile uint64_t t158 = 17399333256351186LLU;

    t158 = (x1685%(x1686%(x1687/x1688)));

    if (t158 != 29310LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1697 = 89U;
	volatile int8_t x1698 = INT8_MAX;
	int64_t x1699 = -5970939766882560LL;
	volatile int32_t x1700 = INT32_MIN;

    t159 = (x1697%(x1698%(x1699/x1700)));

    if (t159 != 89LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1714 = 10870184LL;
	uint32_t x1715 = 426U;
	static uint8_t x1716 = 10U;
	int64_t t160 = -7LL;

    t160 = (x1713%(x1714%(x1715/x1716)));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1722 = INT64_MIN;
	volatile uint64_t x1723 = 826405744583061LLU;
	uint64_t t161 = 1413685411554LLU;

    t161 = (x1721%(x1722%(x1723/x1724)));

    if (t161 != 4817699214410LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1729 = UINT8_MAX;
	uint64_t x1730 = 952738290901LLU;
	static int8_t x1731 = INT8_MIN;
	uint64_t x1732 = 199525000257130473LLU;

    t162 = (x1729%(x1730%(x1731/x1732)));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1733 = UINT16_MAX;
	volatile int64_t x1734 = -1LL;
	int16_t x1735 = INT16_MIN;
	int8_t x1736 = INT8_MIN;
	int64_t t163 = -762402671460LL;

    t163 = (x1733%(x1734%(x1735/x1736)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1737 = INT16_MIN;
	int64_t x1739 = -166173LL;
	int8_t x1740 = INT8_MIN;

    t164 = (x1737%(x1738%(x1739/x1740)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x1745 = -218653;
	uint8_t x1746 = 5U;
	int16_t x1747 = INT16_MIN;
	static int8_t x1748 = -5;
	volatile int32_t t165 = 2966;

    t165 = (x1745%(x1746%(x1747/x1748)));

    if (t165 != -3) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x1761 = UINT32_MAX;
	static int64_t x1762 = -1LL;
	int64_t x1763 = 821LL;
	int16_t x1764 = -1;
	volatile int64_t t166 = 2866986657004421LL;

    t166 = (x1761%(x1762%(x1763/x1764)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1769 = UINT64_MAX;
	int8_t x1770 = INT8_MAX;
	volatile uint64_t x1771 = UINT64_MAX;
	uint64_t x1772 = 11836459823LLU;

    t167 = (x1769%(x1770%(x1771/x1772)));

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1773 = -21847LL;
	static uint8_t x1774 = 54U;
	static uint16_t x1775 = UINT16_MAX;
	int16_t x1776 = -1;
	static int64_t t168 = 12615768LL;

    t168 = (x1773%(x1774%(x1775/x1776)));

    if (t168 != -31LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1781 = UINT32_MAX;
	static int16_t x1782 = INT16_MIN;
	int16_t x1783 = INT16_MIN;
	int64_t x1784 = 2472LL;

    t169 = (x1781%(x1782%(x1783/x1784)));

    if (t169 != 7LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1787 = UINT64_MAX;
	volatile int64_t x1788 = 57859018651LL;

    t170 = (x1785%(x1786%(x1787/x1788)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1789 = 71273964LLU;
	volatile int16_t x1790 = INT16_MIN;
	static uint64_t t171 = 79LLU;

    t171 = (x1789%(x1790%(x1791/x1792)));

    if (t171 != 71273964LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1797 = 59U;
	int32_t x1799 = INT32_MIN;
	int32_t x1800 = 101;

    t172 = (x1797%(x1798%(x1799/x1800)));

    if (t172 != 26U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1801 = 3489988260406940LLU;
	int8_t x1802 = -1;
	static uint16_t x1803 = 239U;
	uint8_t x1804 = 103U;
	volatile uint64_t t173 = 71289549313477893LLU;

    t173 = (x1801%(x1802%(x1803/x1804)));

    if (t173 != 3489988260406940LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1809 = INT8_MIN;
	uint32_t x1810 = 51U;
	int8_t x1811 = INT8_MIN;
	static volatile int32_t x1812 = -1;

    t174 = (x1809%(x1810%(x1811/x1812)));

    if (t174 != 26U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1817 = INT64_MIN;
	volatile uint32_t x1818 = 328563U;
	int8_t x1819 = INT8_MIN;
	volatile int64_t t175 = -13584LL;

    t175 = (x1817%(x1818%(x1819/x1820)));

    if (t175 != -3LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1830 = INT8_MIN;
	int8_t x1831 = -1;
	static uint32_t x1832 = 3101731U;
	volatile uint32_t t176 = 590150376U;

    t176 = (x1829%(x1830%(x1831/x1832)));

    if (t176 != 364U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x1842 = UINT16_MAX;
	static int64_t x1843 = 13594267112429LL;
	int32_t x1844 = INT32_MIN;
	static volatile int64_t t177 = 17080811292LL;

    t177 = (x1841%(x1842%(x1843/x1844)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1849 = UINT32_MAX;
	int64_t x1850 = -1LL;
	static uint64_t x1851 = 46921580219LLU;
	static int16_t x1852 = 957;

    t178 = (x1849%(x1850%(x1851/x1852)));

    if (t178 != 2185956LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1853 = 40220159;
	int32_t x1854 = -1;
	volatile int16_t x1855 = INT16_MAX;
	volatile uint8_t x1856 = UINT8_MAX;

    t179 = (x1853%(x1854%(x1855/x1856)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1861 = UINT64_MAX;
	int32_t x1863 = INT32_MIN;
	volatile int8_t x1864 = INT8_MIN;
	uint64_t t180 = 7302892LLU;

    t180 = (x1861%(x1862%(x1863/x1864)));

    if (t180 != 981LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1869 = INT32_MIN;
	int64_t x1871 = INT64_MAX;

    t181 = (x1869%(x1870%(x1871/x1872)));

    if (t181 != 138112LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1894 = UINT8_MAX;
	int32_t x1895 = INT32_MIN;
	static uint64_t x1896 = 11627LLU;
	volatile uint64_t t182 = 143325876708558138LLU;

    t182 = (x1893%(x1894%(x1895/x1896)));

    if (t182 != 205LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1897 = 32;
	int16_t x1898 = -1;
	int16_t x1899 = INT16_MAX;
	static int8_t x1900 = INT8_MIN;

    t183 = (x1897%(x1898%(x1899/x1900)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1905 = 23484134179518702LLU;
	int64_t x1906 = -419281778601339133LL;
	int64_t x1907 = INT64_MIN;
	int32_t x1908 = 273;
	uint64_t t184 = 16869714LLU;

    t184 = (x1905%(x1906%(x1907/x1908)));

    if (t184 != 23484134179518702LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1909 = 1212551549LL;
	volatile int32_t x1910 = 775;
	uint16_t x1911 = 193U;
	volatile int64_t t185 = -63883125115874LL;

    t185 = (x1909%(x1910%(x1911/x1912)));

    if (t185 != 2LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1929 = 405940U;
	volatile uint32_t x1930 = UINT32_MAX;
	int32_t x1931 = INT32_MIN;
	uint16_t x1932 = UINT16_MAX;
	uint32_t t186 = 1983U;

    t186 = (x1929%(x1930%(x1931/x1932)));

    if (t186 != 12736U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1937 = 1U;
	int16_t x1938 = -15559;
	volatile int32_t x1939 = INT32_MAX;
	int16_t x1940 = -1;
	static volatile int32_t t187 = -231699938;

    t187 = (x1937%(x1938%(x1939/x1940)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x1942 = UINT16_MAX;
	volatile uint8_t x1944 = UINT8_MAX;
	volatile uint64_t t188 = 139039933355LLU;

    t188 = (x1941%(x1942%(x1943/x1944)));

    if (t188 != 32768LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1949 = -1;
	uint64_t x1951 = UINT64_MAX;
	static volatile int16_t x1952 = INT16_MAX;
	volatile uint64_t t189 = 222925759176103LLU;

    t189 = (x1949%(x1950%(x1951/x1952)));

    if (t189 != 70366596169759LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1961 = INT8_MIN;
	static volatile uint8_t x1964 = 5U;
	int32_t t190 = 6043153;

    t190 = (x1961%(x1962%(x1963/x1964)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1967 = INT8_MIN;
	volatile uint64_t x1968 = 30422466549442LLU;
	uint64_t t191 = 11801582474LLU;

    t191 = (x1965%(x1966%(x1967/x1968)));

    if (t191 != 32767LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1983 = 11;
	int32_t x1984 = -1;

    t192 = (x1981%(x1982%(x1983/x1984)));

    if (t192 != 2LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x2017 = INT8_MIN;
	static int8_t x2018 = INT8_MIN;
	volatile int16_t x2019 = INT16_MAX;
	int64_t t193 = -6263898LL;

    t193 = (x2017%(x2018%(x2019/x2020)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x2029 = INT64_MIN;
	int8_t x2030 = INT8_MAX;
	int64_t x2032 = 4156LL;
	uint64_t t194 = 645LLU;

    t194 = (x2029%(x2030%(x2031/x2032)));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x2033 = 148;
	volatile uint32_t x2034 = 2423U;
	uint32_t x2035 = 1262006089U;
	static uint8_t x2036 = 6U;

    t195 = (x2033%(x2034%(x2035/x2036)));

    if (t195 != 148U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x2057 = -1;
	int32_t x2058 = INT32_MIN;
	volatile uint16_t x2059 = 60U;
	static int32_t x2060 = 1;
	int32_t t196 = 84379;

    t196 = (x2057%(x2058%(x2059/x2060)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x2061 = -3053;
	int16_t x2062 = INT16_MIN;
	int64_t x2063 = 549189542LL;
	volatile uint16_t x2064 = UINT16_MAX;
	volatile int64_t t197 = 3329905626948499LL;

    t197 = (x2061%(x2062%(x2063/x2064)));

    if (t197 != -3053LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x2065 = UINT8_MAX;
	int32_t x2067 = 14351649;
	int32_t x2068 = 14;
	int32_t t198 = -25118307;

    t198 = (x2065%(x2066%(x2067/x2068)));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x2073 = -1;
	uint32_t x2074 = 1119169739U;
	uint16_t x2076 = UINT16_MAX;
	static uint64_t t199 = 1754LLU;

    t199 = (x2073%(x2074%(x2075/x2076)));

    if (t199 != 181336840LLU) { NG(); } else { ; }
	
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

