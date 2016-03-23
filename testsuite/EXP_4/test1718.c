
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

static int32_t x12 = INT32_MIN;
int32_t t1 = -3;
int16_t x25 = INT16_MAX;
int16_t x28 = INT16_MAX;
static int16_t x41 = -1;
volatile uint8_t x42 = 95U;
int16_t x45 = 209;
uint32_t x46 = 3893U;
int64_t x53 = INT64_MAX;
volatile uint8_t x54 = 1U;
uint32_t x67 = 13758962U;
int64_t x69 = INT64_MIN;
static int16_t x72 = -12830;
volatile int16_t x88 = INT16_MIN;
static volatile uint16_t x93 = 14091U;
int16_t x122 = 1098;
static int8_t x123 = INT8_MIN;
volatile int32_t x128 = -1;
static uint8_t x148 = 8U;
static int64_t x189 = INT64_MAX;
static int16_t x192 = INT16_MAX;
int64_t x196 = INT64_MIN;
int16_t x197 = INT16_MIN;
int32_t x204 = -1;
static uint32_t x207 = 1895U;
int32_t t31 = 439;
uint8_t x239 = UINT8_MAX;
int32_t t35 = -118600474;
uint16_t x246 = 6284U;
int16_t x248 = INT16_MAX;
static uint32_t x249 = UINT32_MAX;
int8_t x259 = 3;
int32_t t40 = -18487710;
int16_t x269 = 1;
static volatile int16_t x281 = INT16_MIN;
int8_t x283 = 15;
int8_t x289 = INT8_MIN;
static int16_t x291 = INT16_MAX;
int16_t x300 = INT16_MIN;
uint64_t x302 = UINT64_MAX;
int32_t x310 = 24;
static int16_t x312 = INT16_MAX;
int8_t x324 = INT8_MAX;
static uint8_t x328 = 1U;
volatile int32_t t53 = 35;
static int32_t x339 = -86071858;
int32_t t54 = -943;
static uint64_t x350 = 47561115832LLU;
volatile int8_t x352 = INT8_MIN;
int64_t x359 = -1LL;
uint64_t x370 = UINT64_MAX;
static int32_t t59 = -955;
uint8_t x382 = UINT8_MAX;
uint16_t x383 = 0U;
int32_t x393 = INT32_MAX;
volatile int8_t x411 = INT8_MIN;
int32_t x464 = 29;
int64_t x469 = INT64_MIN;
int8_t x475 = -28;
int32_t x477 = -1;
uint16_t x480 = UINT16_MAX;
int64_t x487 = -85093868LL;
volatile uint32_t x524 = UINT32_MAX;
volatile int32_t t80 = 51412278;
uint16_t x552 = UINT16_MAX;
volatile int64_t x558 = INT64_MAX;
volatile uint32_t x560 = UINT32_MAX;
static uint64_t x574 = 1006466933811LLU;
static volatile int32_t t87 = 0;
uint8_t x580 = UINT8_MAX;
static uint32_t x582 = 1U;
int8_t x583 = INT8_MIN;
int64_t x592 = -4880890532600472LL;
static uint32_t x595 = 72234044U;
int32_t t94 = 519666143;
uint16_t x630 = 494U;
volatile int16_t x635 = -104;
uint64_t x637 = UINT64_MAX;
volatile int8_t x642 = INT8_MAX;
uint8_t x654 = 3U;
uint8_t x655 = UINT8_MAX;
uint32_t x658 = 493321739U;
volatile uint64_t x674 = 1632154774052959LLU;
int8_t x676 = 6;
volatile int32_t t102 = 100206;
static int8_t x685 = INT8_MIN;
int32_t t103 = -513754092;
static uint32_t x689 = 52U;
volatile int32_t t108 = 4652201;
static int32_t t109 = 21;
int16_t x750 = 1314;
uint32_t x755 = 1193785U;
uint8_t x759 = 1U;
volatile int32_t t112 = 7;
uint64_t x766 = 36840LLU;
int16_t x773 = 59;
int16_t x801 = INT16_MAX;
int16_t x806 = 2932;
static int16_t x807 = INT16_MAX;
int8_t x809 = 9;
int64_t x812 = -416963742658464149LL;
static int8_t x820 = INT8_MIN;
int16_t x829 = INT16_MIN;
uint32_t x831 = UINT32_MAX;
volatile int32_t t125 = 30617;
int64_t x841 = INT64_MAX;
static volatile int16_t x843 = -1;
uint32_t x844 = UINT32_MAX;
int8_t x870 = 3;
volatile uint8_t x871 = 3U;
volatile uint64_t x890 = UINT64_MAX;
int64_t x891 = 163567073703986761LL;
int64_t x892 = INT64_MIN;
int32_t t133 = 425;
int16_t x897 = INT16_MAX;
int64_t x898 = 15LL;
static volatile int32_t x899 = 2;
int32_t x903 = -1;
volatile int32_t t136 = 1037015;
volatile uint32_t x919 = 943360252U;
volatile uint32_t x928 = 489U;
int32_t x955 = -1;
uint32_t x956 = 8U;
static int64_t x960 = INT64_MIN;
static uint16_t x976 = UINT16_MAX;
volatile int64_t x983 = INT64_MIN;
int64_t x990 = INT64_MAX;
int64_t x1003 = INT64_MAX;
int16_t x1005 = INT16_MAX;
int64_t x1007 = -1LL;
int64_t x1013 = 91507201090LL;
int8_t x1015 = 10;
int32_t t149 = -5913317;
volatile int32_t t150 = -7357;
int32_t t153 = -156863980;
static uint16_t x1041 = 2791U;
int32_t t154 = 45;
volatile uint64_t x1052 = 25525412928277LLU;
int64_t x1057 = INT64_MIN;
static int32_t t158 = 273;
static volatile int16_t x1085 = -1;
int32_t x1087 = -1;
uint32_t x1089 = 5761U;
static uint32_t x1092 = 160469U;
int32_t x1100 = INT32_MAX;
volatile int32_t t165 = 74860;
volatile int8_t x1121 = -40;
uint8_t x1122 = 0U;
int32_t x1126 = INT32_MAX;
uint64_t x1130 = UINT64_MAX;
int16_t x1132 = INT16_MIN;
uint64_t x1147 = UINT64_MAX;
uint16_t x1161 = UINT16_MAX;
int16_t x1200 = INT16_MIN;
int64_t x1201 = -1LL;
static uint64_t x1203 = UINT64_MAX;
volatile int32_t t176 = 219905;
volatile int64_t x1223 = -155633LL;
static int32_t t177 = -1784274;
uint16_t x1226 = 68U;
volatile uint8_t x1229 = UINT8_MAX;
volatile int32_t x1241 = -1;
uint8_t x1242 = 56U;
int32_t t180 = -5012;
int32_t x1251 = INT32_MAX;
uint64_t x1253 = UINT64_MAX;
int8_t x1256 = INT8_MIN;
int64_t x1272 = -1LL;
int8_t x1287 = INT8_MIN;
uint32_t x1290 = UINT32_MAX;
static uint16_t x1299 = 100U;
uint16_t x1300 = 113U;
volatile uint8_t x1307 = UINT8_MAX;
volatile int32_t t191 = -6;
volatile int32_t x1312 = INT32_MIN;
uint8_t x1318 = 0U;
volatile int32_t t195 = -275185;
static volatile int32_t t196 = -70931;
volatile int32_t t198 = 1807;
static int8_t x1359 = INT8_MIN;
uint16_t x1360 = 1U;


void f0(void) {
    	int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MAX;
	int64_t x7 = -67078434LL;
	static int8_t x8 = INT8_MAX;
	static volatile int32_t t0 = 457;

    t0 = (x5<=(x6>>(x7>x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 23248721LLU;
	static uint64_t x10 = 3LLU;
	int32_t x11 = INT32_MIN;

    t1 = (x9<=(x10>>(x11>x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MAX;
	uint16_t x15 = 368U;
	uint64_t x16 = 120415866971089LLU;
	int32_t t2 = -30668295;

    t2 = (x13<=(x14>>(x15>x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x21 = INT16_MAX;
	volatile uint32_t x22 = 2035242940U;
	static uint16_t x23 = 186U;
	static int8_t x24 = -1;
	static volatile int32_t t3 = 714393;

    t3 = (x21<=(x22>>(x23>x24)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x26 = UINT32_MAX;
	static uint32_t x27 = 429643557U;
	volatile int32_t t4 = 50;

    t4 = (x25<=(x26>>(x27>x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = 2214526128982288243LL;
	uint64_t x30 = 136437530205935LLU;
	static uint32_t x31 = 53367U;
	int16_t x32 = 13;
	volatile int32_t t5 = 188947;

    t5 = (x29<=(x30>>(x31>x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = -1;
	uint32_t x38 = 24U;
	volatile uint8_t x39 = 3U;
	static uint8_t x40 = 0U;
	static volatile int32_t t6 = -1675;

    t6 = (x37<=(x38>>(x39>x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x43 = INT16_MIN;
	int32_t x44 = -1;
	static int32_t t7 = 31465;

    t7 = (x41<=(x42>>(x43>x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x47 = -1;
	uint64_t x48 = 1279551721201LLU;
	static volatile int32_t t8 = 632927874;

    t8 = (x45<=(x46>>(x47>x48)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x55 = INT16_MAX;
	volatile uint32_t x56 = 158969440U;
	volatile int32_t t9 = -149;

    t9 = (x53<=(x54>>(x55>x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x65 = INT16_MAX;
	volatile uint32_t x66 = UINT32_MAX;
	volatile uint8_t x68 = 3U;
	int32_t t10 = -705277564;

    t10 = (x65<=(x66>>(x67>x68)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 862730LLU;
	volatile int32_t t11 = -147391831;

    t11 = (x69<=(x70>>(x71>x72)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x85 = INT8_MIN;
	static int64_t x86 = 809976819LL;
	int64_t x87 = 9774732345674774LL;
	int32_t t12 = -5942;

    t12 = (x85<=(x86>>(x87>x88)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x94 = INT8_MAX;
	int16_t x95 = -1;
	uint64_t x96 = 789243907017971LLU;
	volatile int32_t t13 = 9054065;

    t13 = (x93<=(x94>>(x95>x96)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MAX;
	int16_t x99 = INT16_MAX;
	static volatile uint64_t x100 = 769597LLU;
	int32_t t14 = -10;

    t14 = (x97<=(x98>>(x99>x100)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x117 = 0;
	uint16_t x118 = 36U;
	volatile uint64_t x119 = 4928677405632LLU;
	volatile int16_t x120 = -1;
	volatile int32_t t15 = -9;

    t15 = (x117<=(x118>>(x119>x120)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x121 = INT8_MIN;
	static int32_t x124 = -1;
	int32_t t16 = 794;

    t16 = (x121<=(x122>>(x123>x124)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x125 = 5227;
	volatile uint16_t x126 = 3958U;
	volatile uint8_t x127 = 14U;
	volatile int32_t t17 = 15;

    t17 = (x125<=(x126>>(x127>x128)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x129 = 2179934277812LLU;
	uint32_t x130 = 1010U;
	int64_t x131 = INT64_MAX;
	static volatile int64_t x132 = INT64_MIN;
	int32_t t18 = -879374208;

    t18 = (x129<=(x130>>(x131>x132)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x137 = INT32_MAX;
	int32_t x138 = INT32_MAX;
	int8_t x139 = 1;
	uint16_t x140 = 6U;
	static volatile int32_t t19 = -1282481;

    t19 = (x137<=(x138>>(x139>x140)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x141 = 136722693881079LLU;
	static int8_t x142 = 0;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 1141840113U;
	int32_t t20 = 1;

    t20 = (x141<=(x142>>(x143>x144)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x145 = INT64_MIN;
	int16_t x146 = 2753;
	int16_t x147 = INT16_MIN;
	volatile int32_t t21 = -750244369;

    t21 = (x145<=(x146>>(x147>x148)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x149 = -4;
	int32_t x150 = INT32_MAX;
	static int8_t x151 = INT8_MAX;
	int32_t x152 = -1;
	int32_t t22 = 397776962;

    t22 = (x149<=(x150>>(x151>x152)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x157 = 284U;
	int64_t x158 = INT64_MAX;
	volatile uint8_t x159 = UINT8_MAX;
	static int32_t x160 = INT32_MAX;
	volatile int32_t t23 = 3;

    t23 = (x157<=(x158>>(x159>x160)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x165 = 28123U;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -49271;
	uint32_t x168 = 1093417U;
	volatile int32_t t24 = -56457;

    t24 = (x165<=(x166>>(x167>x168)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x181 = -1;
	uint8_t x182 = 7U;
	static int32_t x183 = INT32_MIN;
	static int64_t x184 = -1LL;
	int32_t t25 = 1811746;

    t25 = (x181<=(x182>>(x183>x184)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x185 = 1;
	int8_t x186 = INT8_MAX;
	uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 1930899449949LLU;
	static volatile int32_t t26 = 693;

    t26 = (x185<=(x186>>(x187>x188)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x190 = 3460977U;
	int8_t x191 = 0;
	volatile int32_t t27 = 1206936;

    t27 = (x189<=(x190>>(x191>x192)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x193 = 0U;
	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x195 = UINT8_MAX;
	static int32_t t28 = -277039203;

    t28 = (x193<=(x194>>(x195>x196)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x198 = INT32_MAX;
	uint64_t x199 = 25203081242045LLU;
	static int8_t x200 = -1;
	volatile int32_t t29 = 469;

    t29 = (x197<=(x198>>(x199>x200)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x201 = 15772U;
	int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MIN;
	volatile int32_t t30 = -236522;

    t30 = (x201<=(x202>>(x203>x204)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x205 = 247572631054474LLU;
	int64_t x206 = 1277955405603598LL;
	static int8_t x208 = INT8_MIN;

    t31 = (x205<=(x206>>(x207>x208)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x213 = -47;
	volatile uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = INT64_MIN;
	int64_t x216 = -1LL;
	int32_t t32 = -37804646;

    t32 = (x213<=(x214>>(x215>x216)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x229 = 840110243;
	uint32_t x230 = 740827U;
	uint64_t x231 = UINT64_MAX;
	static int32_t x232 = 290;
	int32_t t33 = -2490279;

    t33 = (x229<=(x230>>(x231>x232)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x233 = INT8_MAX;
	int16_t x234 = 52;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;
	volatile int32_t t34 = -2760100;

    t34 = (x233<=(x234>>(x235>x236)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MAX;
	static int64_t x240 = INT64_MIN;

    t35 = (x237<=(x238>>(x239>x240)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x241 = -1125680141903358LL;
	int32_t x242 = INT32_MAX;
	uint8_t x243 = 58U;
	int8_t x244 = INT8_MAX;
	volatile int32_t t36 = 374899865;

    t36 = (x241<=(x242>>(x243>x244)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x247 = INT16_MIN;
	int32_t t37 = 70733441;

    t37 = (x245<=(x246>>(x247>x248)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x250 = INT64_MAX;
	int64_t x251 = -1LL;
	int32_t x252 = -110;
	volatile int32_t t38 = -1;

    t38 = (x249<=(x250>>(x251>x252)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x257 = -1;
	static int8_t x258 = INT8_MAX;
	volatile int64_t x260 = INT64_MAX;
	int32_t t39 = 0;

    t39 = (x257<=(x258>>(x259>x260)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x261 = INT64_MIN;
	int16_t x262 = 1;
	int8_t x263 = 0;
	int64_t x264 = INT64_MIN;

    t40 = (x261<=(x262>>(x263>x264)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x265 = 22779;
	int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MIN;
	volatile int64_t x268 = -11615573144953LL;
	int32_t t41 = 12109;

    t41 = (x265<=(x266>>(x267>x268)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x270 = INT16_MAX;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = -1;
	volatile int32_t t42 = 774;

    t42 = (x269<=(x270>>(x271>x272)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x273 = INT8_MIN;
	int64_t x274 = 403144477LL;
	static uint16_t x275 = 37U;
	uint32_t x276 = 37U;
	volatile int32_t t43 = 2;

    t43 = (x273<=(x274>>(x275>x276)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x282 = 1U;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t44 = 9950;

    t44 = (x281<=(x282>>(x283>x284)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x290 = 63899754748111818LLU;
	volatile uint64_t x292 = 580996327418180LLU;
	volatile int32_t t45 = -1;

    t45 = (x289<=(x290>>(x291>x292)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x293 = INT8_MIN;
	uint16_t x294 = 7U;
	uint64_t x295 = 176882314926LLU;
	int8_t x296 = INT8_MIN;
	volatile int32_t t46 = -239140;

    t46 = (x293<=(x294>>(x295>x296)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MAX;
	int32_t x299 = -3213827;
	int32_t t47 = -2994882;

    t47 = (x297<=(x298>>(x299>x300)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x301 = 4U;
	volatile uint8_t x303 = 15U;
	static int16_t x304 = 6889;
	int32_t t48 = 9220909;

    t48 = (x301<=(x302>>(x303>x304)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x309 = 5;
	uint8_t x311 = 1U;
	int32_t t49 = -128902;

    t49 = (x309<=(x310>>(x311>x312)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x317 = INT32_MIN;
	uint64_t x318 = 55426526902581725LLU;
	int32_t x319 = -5831778;
	volatile int8_t x320 = INT8_MAX;
	int32_t t50 = -35730821;

    t50 = (x317<=(x318>>(x319>x320)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x321 = 6LLU;
	uint32_t x322 = 810U;
	int32_t x323 = INT32_MIN;
	volatile int32_t t51 = 204;

    t51 = (x321<=(x322>>(x323>x324)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x325 = 252378965816776LL;
	uint8_t x326 = 60U;
	volatile int8_t x327 = INT8_MAX;
	int32_t t52 = 34772348;

    t52 = (x325<=(x326>>(x327>x328)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x333 = 48U;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = -42;
	static uint32_t x336 = UINT32_MAX;

    t53 = (x333<=(x334>>(x335>x336)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x337 = 7;
	uint32_t x338 = UINT32_MAX;
	int64_t x340 = -3370899138973LL;

    t54 = (x337<=(x338>>(x339>x340)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x349 = INT16_MAX;
	volatile int8_t x351 = INT8_MIN;
	static int32_t t55 = 1001;

    t55 = (x349<=(x350>>(x351>x352)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x357 = UINT64_MAX;
	static uint64_t x358 = 239585251917866LLU;
	int64_t x360 = INT64_MIN;
	int32_t t56 = -48;

    t56 = (x357<=(x358>>(x359>x360)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x361 = 6221864U;
	volatile uint32_t x362 = 863084400U;
	uint64_t x363 = 49977567978578387LLU;
	int64_t x364 = 385198041939739LL;
	volatile int32_t t57 = 9401527;

    t57 = (x361<=(x362>>(x363>x364)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x365 = INT8_MIN;
	uint8_t x366 = 45U;
	int64_t x367 = INT64_MIN;
	int32_t x368 = -1;
	volatile int32_t t58 = -197566704;

    t58 = (x365<=(x366>>(x367>x368)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x369 = 46U;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;

    t59 = (x369<=(x370>>(x371>x372)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x381 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	static int32_t t60 = -490793;

    t60 = (x381<=(x382>>(x383>x384)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 125LLU;
	static volatile int16_t x396 = -1;
	static volatile int32_t t61 = -428737611;

    t61 = (x393<=(x394>>(x395>x396)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x405 = UINT32_MAX;
	uint8_t x406 = 14U;
	static int64_t x407 = INT64_MIN;
	volatile int16_t x408 = -1;
	static volatile int32_t t62 = -10;

    t62 = (x405<=(x406>>(x407>x408)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x409 = -3271;
	uint8_t x410 = 6U;
	int32_t x412 = INT32_MIN;
	volatile int32_t t63 = 34536781;

    t63 = (x409<=(x410>>(x411>x412)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x413 = -192LL;
	static int16_t x414 = 15;
	int8_t x415 = -1;
	int64_t x416 = INT64_MAX;
	static volatile int32_t t64 = 1;

    t64 = (x413<=(x414>>(x415>x416)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x421 = INT16_MIN;
	volatile uint32_t x422 = UINT32_MAX;
	volatile int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	volatile int32_t t65 = -123372659;

    t65 = (x421<=(x422>>(x423>x424)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x425 = INT8_MIN;
	int8_t x426 = 0;
	static uint16_t x427 = 9212U;
	int16_t x428 = INT16_MIN;
	int32_t t66 = 149472303;

    t66 = (x425<=(x426>>(x427>x428)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x429 = 11960U;
	int64_t x430 = INT64_MAX;
	int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MAX;
	int32_t t67 = 762204456;

    t67 = (x429<=(x430>>(x431>x432)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x433 = -1;
	uint64_t x434 = 792624059LLU;
	int16_t x435 = -173;
	int32_t x436 = INT32_MIN;
	int32_t t68 = -13919;

    t68 = (x433<=(x434>>(x435>x436)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x453 = 102U;
	volatile uint16_t x454 = 158U;
	int8_t x455 = INT8_MAX;
	int64_t x456 = -1LL;
	int32_t t69 = -2;

    t69 = (x453<=(x454>>(x455>x456)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x461 = 486U;
	int8_t x462 = 46;
	static int16_t x463 = INT16_MAX;
	volatile int32_t t70 = -3795;

    t70 = (x461<=(x462>>(x463>x464)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x465 = INT16_MIN;
	uint64_t x466 = 177088773383492LLU;
	volatile uint64_t x467 = 370276857LLU;
	int64_t x468 = INT64_MAX;
	static volatile int32_t t71 = -35022296;

    t71 = (x465<=(x466>>(x467>x468)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x470 = INT8_MAX;
	uint16_t x471 = UINT16_MAX;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t72 = 383634003;

    t72 = (x469<=(x470>>(x471>x472)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x473 = UINT8_MAX;
	int8_t x474 = 5;
	int64_t x476 = -1LL;
	int32_t t73 = 1721098;

    t73 = (x473<=(x474>>(x475>x476)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x478 = INT64_MAX;
	static int8_t x479 = -1;
	int32_t t74 = -411372211;

    t74 = (x477<=(x478>>(x479>x480)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x485 = INT8_MIN;
	volatile uint32_t x486 = 5U;
	volatile int16_t x488 = 6755;
	volatile int32_t t75 = -4005;

    t75 = (x485<=(x486>>(x487>x488)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x497 = INT16_MAX;
	int16_t x498 = INT16_MAX;
	int64_t x499 = INT64_MAX;
	static uint32_t x500 = 57112165U;
	int32_t t76 = -12669331;

    t76 = (x497<=(x498>>(x499>x500)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x513 = INT32_MIN;
	volatile uint16_t x514 = 484U;
	uint64_t x515 = 59LLU;
	uint16_t x516 = UINT16_MAX;
	int32_t t77 = 83961461;

    t77 = (x513<=(x514>>(x515>x516)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x521 = 2U;
	uint8_t x522 = 86U;
	int16_t x523 = INT16_MIN;
	int32_t t78 = -3984558;

    t78 = (x521<=(x522>>(x523>x524)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x525 = 97U;
	volatile uint8_t x526 = 8U;
	int16_t x527 = 41;
	int8_t x528 = INT8_MIN;
	volatile int32_t t79 = 33;

    t79 = (x525<=(x526>>(x527>x528)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x529 = INT64_MIN;
	volatile uint8_t x530 = 1U;
	int8_t x531 = INT8_MIN;
	static int32_t x532 = -1339;

    t80 = (x529<=(x530>>(x531>x532)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x533 = 14810;
	int32_t x534 = INT32_MAX;
	volatile uint64_t x535 = 212499119862510548LLU;
	int16_t x536 = INT16_MIN;
	volatile int32_t t81 = 31984340;

    t81 = (x533<=(x534>>(x535>x536)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x537 = -4;
	int16_t x538 = INT16_MAX;
	static int32_t x539 = INT32_MIN;
	int64_t x540 = -122196780834580139LL;
	int32_t t82 = -2;

    t82 = (x537<=(x538>>(x539>x540)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x545 = 2LL;
	uint64_t x546 = UINT64_MAX;
	int16_t x547 = INT16_MAX;
	uint16_t x548 = 2U;
	int32_t t83 = -6742107;

    t83 = (x545<=(x546>>(x547>x548)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x549 = INT32_MIN;
	static volatile uint8_t x550 = 15U;
	uint8_t x551 = UINT8_MAX;
	volatile int32_t t84 = -283408826;

    t84 = (x549<=(x550>>(x551>x552)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x557 = INT64_MAX;
	int16_t x559 = INT16_MAX;
	volatile int32_t t85 = 1997;

    t85 = (x557<=(x558>>(x559>x560)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x569 = -1LL;
	int32_t x570 = INT32_MAX;
	volatile int64_t x571 = 5385803151LL;
	int64_t x572 = 1968LL;
	int32_t t86 = -40;

    t86 = (x569<=(x570>>(x571>x572)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x573 = 51U;
	int32_t x575 = 0;
	uint16_t x576 = 149U;

    t87 = (x573<=(x574>>(x575>x576)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x577 = 1;
	uint8_t x578 = UINT8_MAX;
	int64_t x579 = INT64_MAX;
	int32_t t88 = -38;

    t88 = (x577<=(x578>>(x579>x580)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x581 = -1044184543052LL;
	volatile int8_t x584 = INT8_MAX;
	int32_t t89 = 1864;

    t89 = (x581<=(x582>>(x583>x584)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x589 = -7;
	int8_t x590 = INT8_MAX;
	uint64_t x591 = 14965366246248LLU;
	int32_t t90 = -210741740;

    t90 = (x589<=(x590>>(x591>x592)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x593 = 1U;
	uint32_t x594 = 23067465U;
	int16_t x596 = -148;
	int32_t t91 = 29245;

    t91 = (x593<=(x594>>(x595>x596)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x597 = 50807LL;
	volatile int64_t x598 = 18LL;
	volatile int32_t x599 = INT32_MAX;
	static int16_t x600 = INT16_MIN;
	int32_t t92 = 6313445;

    t92 = (x597<=(x598>>(x599>x600)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x609 = 237223954;
	volatile int64_t x610 = INT64_MAX;
	uint16_t x611 = 4U;
	static int64_t x612 = INT64_MIN;
	int32_t t93 = 26903;

    t93 = (x609<=(x610>>(x611>x612)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x625 = 88479721153LLU;
	uint32_t x626 = UINT32_MAX;
	int16_t x627 = -1;
	uint32_t x628 = 42081U;

    t94 = (x625<=(x626>>(x627>x628)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x629 = 3236U;
	int16_t x631 = INT16_MIN;
	volatile uint8_t x632 = 29U;
	int32_t t95 = -3;

    t95 = (x629<=(x630>>(x631>x632)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x633 = INT32_MAX;
	uint64_t x634 = 3LLU;
	static volatile int8_t x636 = -1;
	static int32_t t96 = 10215;

    t96 = (x633<=(x634>>(x635>x636)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x638 = UINT64_MAX;
	int64_t x639 = -1LL;
	int8_t x640 = 14;
	static volatile int32_t t97 = -2852282;

    t97 = (x637<=(x638>>(x639>x640)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x641 = 10U;
	int32_t x643 = INT32_MIN;
	static int64_t x644 = -1LL;
	volatile int32_t t98 = -5785432;

    t98 = (x641<=(x642>>(x643>x644)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x649 = -2532071461429LL;
	int32_t x650 = INT32_MAX;
	static int64_t x651 = 1LL;
	static int16_t x652 = -1;
	int32_t t99 = 536;

    t99 = (x649<=(x650>>(x651>x652)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x653 = INT64_MIN;
	static uint8_t x656 = 2U;
	volatile int32_t t100 = 0;

    t100 = (x653<=(x654>>(x655>x656)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x657 = -29;
	uint8_t x659 = 7U;
	uint8_t x660 = UINT8_MAX;
	int32_t t101 = -2;

    t101 = (x657<=(x658>>(x659>x660)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x673 = 12U;
	int8_t x675 = INT8_MAX;

    t102 = (x673<=(x674>>(x675>x676)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x686 = UINT8_MAX;
	static int8_t x687 = INT8_MIN;
	int16_t x688 = -1;

    t103 = (x685<=(x686>>(x687>x688)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x690 = 25U;
	static int16_t x691 = 93;
	int8_t x692 = -6;
	volatile int32_t t104 = -495664783;

    t104 = (x689<=(x690>>(x691>x692)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x705 = -129;
	uint16_t x706 = UINT16_MAX;
	int16_t x707 = -450;
	int64_t x708 = INT64_MIN;
	int32_t t105 = -4740;

    t105 = (x705<=(x706>>(x707>x708)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x717 = -1LL;
	volatile uint8_t x718 = 1U;
	uint32_t x719 = 30165U;
	uint16_t x720 = 189U;
	volatile int32_t t106 = -1;

    t106 = (x717<=(x718>>(x719>x720)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x737 = -1;
	int32_t x738 = 932796;
	int8_t x739 = -1;
	uint64_t x740 = 4016324033507936LLU;
	int32_t t107 = -1294904;

    t107 = (x737<=(x738>>(x739>x740)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x741 = 11U;
	uint16_t x742 = 99U;
	int32_t x743 = 5110316;
	int8_t x744 = -1;

    t108 = (x741<=(x742>>(x743>x744)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x745 = -1;
	uint8_t x746 = 30U;
	int32_t x747 = INT32_MAX;
	int32_t x748 = -21016;

    t109 = (x745<=(x746>>(x747>x748)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x749 = 8148U;
	uint8_t x751 = UINT8_MAX;
	int32_t x752 = 51;
	volatile int32_t t110 = -27;

    t110 = (x749<=(x750>>(x751>x752)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x753 = -1;
	volatile uint32_t x754 = UINT32_MAX;
	int64_t x756 = INT64_MAX;
	int32_t t111 = -6349846;

    t111 = (x753<=(x754>>(x755>x756)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x757 = 1;
	volatile int8_t x758 = INT8_MAX;
	int8_t x760 = -1;

    t112 = (x757<=(x758>>(x759>x760)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint64_t x765 = 76707LLU;
	static uint64_t x767 = 1695668428847944719LLU;
	int16_t x768 = 59;
	volatile int32_t t113 = 174705353;

    t113 = (x765<=(x766>>(x767>x768)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x774 = 40;
	static volatile int16_t x775 = INT16_MIN;
	static uint32_t x776 = 421U;
	static int32_t t114 = -65659040;

    t114 = (x773<=(x774>>(x775>x776)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x785 = UINT16_MAX;
	volatile int8_t x786 = INT8_MAX;
	uint64_t x787 = 2LLU;
	int16_t x788 = -896;
	int32_t t115 = -7757129;

    t115 = (x785<=(x786>>(x787>x788)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x789 = 0;
	volatile uint16_t x790 = 9U;
	int8_t x791 = INT8_MIN;
	uint64_t x792 = 121LLU;
	static volatile int32_t t116 = 8284;

    t116 = (x789<=(x790>>(x791>x792)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x793 = 471LL;
	uint64_t x794 = 63220370233LLU;
	uint16_t x795 = UINT16_MAX;
	volatile uint8_t x796 = UINT8_MAX;
	int32_t t117 = -476009;

    t117 = (x793<=(x794>>(x795>x796)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x802 = 9044925548LLU;
	static int8_t x803 = INT8_MAX;
	static uint64_t x804 = UINT64_MAX;
	int32_t t118 = 7844899;

    t118 = (x801<=(x802>>(x803>x804)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x805 = -3;
	uint16_t x808 = UINT16_MAX;
	int32_t t119 = -20517;

    t119 = (x805<=(x806>>(x807>x808)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x810 = INT16_MAX;
	int32_t x811 = INT32_MAX;
	volatile int32_t t120 = -245087351;

    t120 = (x809<=(x810>>(x811>x812)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x813 = 0U;
	static uint8_t x814 = 13U;
	static int8_t x815 = INT8_MIN;
	int64_t x816 = INT64_MAX;
	volatile int32_t t121 = 22854175;

    t121 = (x813<=(x814>>(x815>x816)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x817 = INT8_MIN;
	uint64_t x818 = 32021LLU;
	uint64_t x819 = UINT64_MAX;
	int32_t t122 = 1;

    t122 = (x817<=(x818>>(x819>x820)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x821 = INT16_MIN;
	volatile uint32_t x822 = 275U;
	int64_t x823 = INT64_MIN;
	static int16_t x824 = INT16_MIN;
	int32_t t123 = 1;

    t123 = (x821<=(x822>>(x823>x824)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x825 = INT8_MIN;
	uint16_t x826 = UINT16_MAX;
	int64_t x827 = 87786178LL;
	int8_t x828 = INT8_MIN;
	volatile int32_t t124 = 48506816;

    t124 = (x825<=(x826>>(x827>x828)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x830 = INT16_MAX;
	static uint8_t x832 = 1U;

    t125 = (x829<=(x830>>(x831>x832)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x842 = INT32_MAX;
	volatile int32_t t126 = -199;

    t126 = (x841<=(x842>>(x843>x844)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x849 = 1799;
	static uint64_t x850 = 4068LLU;
	static uint64_t x851 = UINT64_MAX;
	int8_t x852 = INT8_MAX;
	static int32_t t127 = 74162967;

    t127 = (x849<=(x850>>(x851>x852)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x869 = INT32_MIN;
	volatile int64_t x872 = -1LL;
	int32_t t128 = -10962972;

    t128 = (x869<=(x870>>(x871>x872)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x873 = INT64_MAX;
	int16_t x874 = INT16_MAX;
	int8_t x875 = 0;
	uint16_t x876 = UINT16_MAX;
	int32_t t129 = 152216092;

    t129 = (x873<=(x874>>(x875>x876)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x881 = 25U;
	uint8_t x882 = 13U;
	uint32_t x883 = 6012519U;
	int16_t x884 = -1;
	volatile int32_t t130 = 13661964;

    t130 = (x881<=(x882>>(x883>x884)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x885 = -1;
	static int8_t x886 = INT8_MAX;
	static volatile int32_t x887 = INT32_MIN;
	uint8_t x888 = 0U;
	int32_t t131 = -85;

    t131 = (x885<=(x886>>(x887>x888)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x889 = INT32_MIN;
	volatile int32_t t132 = -4;

    t132 = (x889<=(x890>>(x891>x892)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x893 = INT32_MIN;
	static int16_t x894 = INT16_MAX;
	volatile int32_t x895 = INT32_MIN;
	int64_t x896 = 284684597307578LL;

    t133 = (x893<=(x894>>(x895>x896)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x900 = 267;
	int32_t t134 = -55;

    t134 = (x897<=(x898>>(x899>x900)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x901 = UINT8_MAX;
	int8_t x902 = INT8_MAX;
	volatile int16_t x904 = -1;
	static volatile int32_t t135 = -947493;

    t135 = (x901<=(x902>>(x903>x904)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x909 = -162;
	uint8_t x910 = 86U;
	uint16_t x911 = UINT16_MAX;
	static uint64_t x912 = UINT64_MAX;

    t136 = (x909<=(x910>>(x911>x912)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x917 = INT8_MIN;
	uint16_t x918 = 1U;
	volatile int32_t x920 = -1;
	int32_t t137 = 466;

    t137 = (x917<=(x918>>(x919>x920)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x925 = INT64_MIN;
	uint64_t x926 = 58005350094906461LLU;
	int64_t x927 = 11LL;
	int32_t t138 = 1757;

    t138 = (x925<=(x926>>(x927>x928)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x933 = -174LL;
	static volatile int32_t x934 = 42;
	int8_t x935 = INT8_MAX;
	volatile int32_t x936 = 6460636;
	int32_t t139 = -17;

    t139 = (x933<=(x934>>(x935>x936)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x949 = -1;
	uint8_t x950 = 13U;
	int8_t x951 = 3;
	uint32_t x952 = UINT32_MAX;
	volatile int32_t t140 = 228069929;

    t140 = (x949<=(x950>>(x951>x952)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x953 = -26;
	static int32_t x954 = 10315;
	static volatile int32_t t141 = 1;

    t141 = (x953<=(x954>>(x955>x956)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x957 = -1;
	int8_t x958 = 1;
	static uint32_t x959 = 483813U;
	volatile int32_t t142 = -4039;

    t142 = (x957<=(x958>>(x959>x960)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x973 = 25648478693149LLU;
	uint8_t x974 = UINT8_MAX;
	static uint64_t x975 = UINT64_MAX;
	volatile int32_t t143 = -12031344;

    t143 = (x973<=(x974>>(x975>x976)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x981 = 2;
	uint8_t x982 = UINT8_MAX;
	uint16_t x984 = 67U;
	int32_t t144 = -82174;

    t144 = (x981<=(x982>>(x983>x984)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x989 = 0U;
	volatile uint16_t x991 = 2U;
	volatile int64_t x992 = -1LL;
	int32_t t145 = 7;

    t145 = (x989<=(x990>>(x991>x992)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x993 = INT8_MIN;
	uint64_t x994 = UINT64_MAX;
	static int8_t x995 = INT8_MAX;
	volatile int32_t x996 = 124763189;
	int32_t t146 = -54855278;

    t146 = (x993<=(x994>>(x995>x996)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1001 = 22U;
	uint16_t x1002 = UINT16_MAX;
	int64_t x1004 = 5386203735642525LL;
	volatile int32_t t147 = -260382;

    t147 = (x1001<=(x1002>>(x1003>x1004)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1006 = 1U;
	int16_t x1008 = -272;
	int32_t t148 = -126;

    t148 = (x1005<=(x1006>>(x1007>x1008)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1014 = 1211U;
	uint32_t x1016 = UINT32_MAX;

    t149 = (x1013<=(x1014>>(x1015>x1016)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1017 = INT8_MAX;
	static int64_t x1018 = 255LL;
	uint32_t x1019 = UINT32_MAX;
	static int64_t x1020 = -1LL;

    t150 = (x1017<=(x1018>>(x1019>x1020)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1021 = 12330U;
	uint8_t x1022 = 18U;
	int32_t x1023 = -1;
	volatile int16_t x1024 = INT16_MIN;
	volatile int32_t t151 = -2349936;

    t151 = (x1021<=(x1022>>(x1023>x1024)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1033 = INT16_MIN;
	uint32_t x1034 = 190466672U;
	int8_t x1035 = INT8_MIN;
	uint16_t x1036 = 878U;
	volatile int32_t t152 = -77;

    t152 = (x1033<=(x1034>>(x1035>x1036)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1037 = -335LL;
	volatile uint64_t x1038 = 107929LLU;
	volatile uint8_t x1039 = UINT8_MAX;
	static volatile int16_t x1040 = INT16_MIN;

    t153 = (x1037<=(x1038>>(x1039>x1040)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1042 = 60105LLU;
	static int32_t x1043 = INT32_MIN;
	static uint64_t x1044 = UINT64_MAX;

    t154 = (x1041<=(x1042>>(x1043>x1044)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x1045 = 0;
	int32_t x1046 = INT32_MAX;
	int32_t x1047 = -904;
	int32_t x1048 = INT32_MIN;
	volatile int32_t t155 = -430282297;

    t155 = (x1045<=(x1046>>(x1047>x1048)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1049 = -63LL;
	volatile uint32_t x1050 = 3368U;
	volatile uint16_t x1051 = 14U;
	int32_t t156 = 7407;

    t156 = (x1049<=(x1050>>(x1051>x1052)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1058 = UINT8_MAX;
	int8_t x1059 = 0;
	volatile int16_t x1060 = -77;
	int32_t t157 = -129220;

    t157 = (x1057<=(x1058>>(x1059>x1060)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1069 = UINT64_MAX;
	static uint32_t x1070 = 3U;
	int64_t x1071 = INT64_MAX;
	int32_t x1072 = INT32_MAX;

    t158 = (x1069<=(x1070>>(x1071>x1072)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1073 = 361;
	uint32_t x1074 = 63376U;
	static volatile uint8_t x1075 = 58U;
	int64_t x1076 = INT64_MIN;
	int32_t t159 = -23;

    t159 = (x1073<=(x1074>>(x1075>x1076)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1077 = INT32_MAX;
	volatile uint32_t x1078 = 212U;
	int64_t x1079 = -47182308777LL;
	int8_t x1080 = -1;
	int32_t t160 = 10481;

    t160 = (x1077<=(x1078>>(x1079>x1080)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1086 = 254LL;
	volatile uint32_t x1088 = 2U;
	volatile int32_t t161 = 29691;

    t161 = (x1085<=(x1086>>(x1087>x1088)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1090 = 54;
	static uint8_t x1091 = 24U;
	static int32_t t162 = -1;

    t162 = (x1089<=(x1090>>(x1091>x1092)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x1093 = INT16_MIN;
	uint16_t x1094 = 3U;
	volatile int32_t x1095 = -1985;
	int8_t x1096 = -1;
	volatile int32_t t163 = 8;

    t163 = (x1093<=(x1094>>(x1095>x1096)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1097 = 7418U;
	volatile int64_t x1098 = 117953470339LL;
	volatile int32_t x1099 = 12784;
	int32_t t164 = 0;

    t164 = (x1097<=(x1098>>(x1099>x1100)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1105 = INT8_MAX;
	uint16_t x1106 = 32304U;
	volatile int8_t x1107 = 3;
	int8_t x1108 = -2;

    t165 = (x1105<=(x1106>>(x1107>x1108)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1109 = INT8_MIN;
	static volatile uint16_t x1110 = UINT16_MAX;
	static int32_t x1111 = -814;
	int64_t x1112 = 134948701783LL;
	static int32_t t166 = 558538;

    t166 = (x1109<=(x1110>>(x1111>x1112)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1123 = 10368LLU;
	uint64_t x1124 = 900605403746760LLU;
	volatile int32_t t167 = 4;

    t167 = (x1121<=(x1122>>(x1123>x1124)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1125 = 24423030U;
	int16_t x1127 = INT16_MIN;
	uint16_t x1128 = UINT16_MAX;
	int32_t t168 = 2002;

    t168 = (x1125<=(x1126>>(x1127>x1128)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1129 = 0U;
	int64_t x1131 = INT64_MAX;
	volatile int32_t t169 = 1;

    t169 = (x1129<=(x1130>>(x1131>x1132)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1141 = 19U;
	static int64_t x1142 = 35858100339775316LL;
	int64_t x1143 = -1LL;
	volatile int32_t x1144 = INT32_MAX;
	volatile int32_t t170 = -83;

    t170 = (x1141<=(x1142>>(x1143>x1144)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1145 = 3601443LL;
	static volatile uint32_t x1146 = UINT32_MAX;
	static uint8_t x1148 = UINT8_MAX;
	int32_t t171 = -7311055;

    t171 = (x1145<=(x1146>>(x1147>x1148)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1162 = 0;
	volatile int64_t x1163 = -1LL;
	int64_t x1164 = -4428LL;
	int32_t t172 = 8092439;

    t172 = (x1161<=(x1162>>(x1163>x1164)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1193 = -1;
	static uint64_t x1194 = UINT64_MAX;
	int32_t x1195 = 1309823;
	uint16_t x1196 = 510U;
	volatile int32_t t173 = 13971;

    t173 = (x1193<=(x1194>>(x1195>x1196)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x1197 = -1LL;
	volatile int64_t x1198 = INT64_MAX;
	int32_t x1199 = 2;
	int32_t t174 = -27893;

    t174 = (x1197<=(x1198>>(x1199>x1200)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1202 = UINT64_MAX;
	uint8_t x1204 = 4U;
	static volatile int32_t t175 = 368110864;

    t175 = (x1201<=(x1202>>(x1203>x1204)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x1217 = -6854;
	static uint64_t x1218 = 19999962740879LLU;
	int8_t x1219 = INT8_MAX;
	int16_t x1220 = -1;

    t176 = (x1217<=(x1218>>(x1219>x1220)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1221 = -1;
	static uint32_t x1222 = UINT32_MAX;
	uint32_t x1224 = UINT32_MAX;

    t177 = (x1221<=(x1222>>(x1223>x1224)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1225 = -2237730115885LL;
	uint8_t x1227 = 7U;
	int32_t x1228 = INT32_MAX;
	volatile int32_t t178 = 13009690;

    t178 = (x1225<=(x1226>>(x1227>x1228)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1230 = 126U;
	int16_t x1231 = INT16_MAX;
	volatile int8_t x1232 = -42;
	int32_t t179 = 57342;

    t179 = (x1229<=(x1230>>(x1231>x1232)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1243 = -1LL;
	int32_t x1244 = INT32_MIN;

    t180 = (x1241<=(x1242>>(x1243>x1244)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1249 = INT16_MIN;
	int16_t x1250 = 1786;
	int8_t x1252 = INT8_MIN;
	volatile int32_t t181 = -1256;

    t181 = (x1249<=(x1250>>(x1251>x1252)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1254 = 19U;
	int64_t x1255 = -440081639430800LL;
	int32_t t182 = 733619;

    t182 = (x1253<=(x1254>>(x1255>x1256)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1269 = INT32_MIN;
	static uint32_t x1270 = 254U;
	int32_t x1271 = INT32_MIN;
	volatile int32_t t183 = 16;

    t183 = (x1269<=(x1270>>(x1271>x1272)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1273 = -1;
	volatile int8_t x1274 = INT8_MAX;
	uint16_t x1275 = 16565U;
	int32_t x1276 = INT32_MAX;
	int32_t t184 = 36929686;

    t184 = (x1273<=(x1274>>(x1275>x1276)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1277 = 8;
	uint16_t x1278 = 51U;
	int16_t x1279 = 1;
	uint32_t x1280 = 87137672U;
	int32_t t185 = 7;

    t185 = (x1277<=(x1278>>(x1279>x1280)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1281 = 126U;
	uint16_t x1282 = 7U;
	static uint64_t x1283 = 0LLU;
	static int64_t x1284 = -1LL;
	int32_t t186 = 11;

    t186 = (x1281<=(x1282>>(x1283>x1284)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1285 = INT8_MAX;
	int16_t x1286 = 12;
	int64_t x1288 = INT64_MIN;
	static volatile int32_t t187 = 8342135;

    t187 = (x1285<=(x1286>>(x1287>x1288)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1289 = 93U;
	int32_t x1291 = -1;
	volatile int64_t x1292 = INT64_MIN;
	volatile int32_t t188 = 82103;

    t188 = (x1289<=(x1290>>(x1291>x1292)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1293 = UINT16_MAX;
	static volatile uint64_t x1294 = UINT64_MAX;
	int64_t x1295 = INT64_MIN;
	int16_t x1296 = -1;
	volatile int32_t t189 = -44;

    t189 = (x1293<=(x1294>>(x1295>x1296)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1297 = 5;
	int32_t x1298 = 112;
	static volatile int32_t t190 = 10606985;

    t190 = (x1297<=(x1298>>(x1299>x1300)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x1305 = 1030890U;
	uint64_t x1306 = 280939133755148966LLU;
	volatile int16_t x1308 = -9662;

    t191 = (x1305<=(x1306>>(x1307>x1308)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1309 = UINT8_MAX;
	uint8_t x1310 = 2U;
	static int32_t x1311 = INT32_MIN;
	volatile int32_t t192 = 5;

    t192 = (x1309<=(x1310>>(x1311>x1312)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1313 = UINT64_MAX;
	uint16_t x1314 = UINT16_MAX;
	static int8_t x1315 = INT8_MIN;
	int16_t x1316 = INT16_MIN;
	int32_t t193 = -741;

    t193 = (x1313<=(x1314>>(x1315>x1316)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1317 = INT32_MIN;
	static uint64_t x1319 = 46LLU;
	int32_t x1320 = INT32_MAX;
	int32_t t194 = -109571487;

    t194 = (x1317<=(x1318>>(x1319>x1320)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1321 = 137U;
	uint32_t x1322 = UINT32_MAX;
	volatile int16_t x1323 = INT16_MIN;
	uint32_t x1324 = 1U;

    t195 = (x1321<=(x1322>>(x1323>x1324)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1333 = -1458LL;
	uint32_t x1334 = 1421900679U;
	volatile uint16_t x1335 = 15213U;
	int64_t x1336 = -1LL;

    t196 = (x1333<=(x1334>>(x1335>x1336)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1341 = 85U;
	volatile int64_t x1342 = INT64_MAX;
	uint8_t x1343 = 1U;
	int64_t x1344 = INT64_MAX;
	int32_t t197 = 863;

    t197 = (x1341<=(x1342>>(x1343>x1344)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1353 = UINT8_MAX;
	static int64_t x1354 = 25714412863LL;
	volatile int16_t x1355 = INT16_MAX;
	int8_t x1356 = -1;

    t198 = (x1353<=(x1354>>(x1355>x1356)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1357 = INT16_MIN;
	uint32_t x1358 = UINT32_MAX;
	int32_t t199 = -111;

    t199 = (x1357<=(x1358>>(x1359>x1360)));

    if (t199 != 1) { NG(); } else { ; }
	
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

