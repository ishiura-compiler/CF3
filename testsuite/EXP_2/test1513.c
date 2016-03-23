
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

static int16_t x16 = -1;
static uint16_t x22 = 9U;
uint32_t x23 = 46655U;
int16_t x28 = INT16_MIN;
int8_t x32 = INT8_MAX;
static volatile int32_t t3 = -52;
int16_t x36 = INT16_MAX;
uint8_t x43 = 60U;
int64_t t7 = -30711262334LL;
uint64_t t8 = 2690423496LLU;
static int32_t x64 = -12657;
int64_t t12 = 141LL;
uint64_t x88 = UINT64_MAX;
uint8_t x89 = 1U;
int16_t x91 = INT16_MIN;
volatile uint16_t x98 = UINT16_MAX;
int16_t x100 = INT16_MIN;
static uint32_t x104 = 36831U;
int8_t x105 = INT8_MAX;
int32_t x106 = -1;
uint64_t x107 = UINT64_MAX;
volatile uint8_t x109 = 1U;
int8_t x110 = INT8_MIN;
volatile uint16_t x117 = UINT16_MAX;
uint32_t x126 = 645305U;
int32_t x132 = INT32_MIN;
int32_t x145 = 4642;
static int64_t x146 = INT64_MIN;
volatile int8_t x148 = INT8_MIN;
int32_t t24 = 11774048;
volatile int64_t x155 = INT64_MIN;
static int16_t x156 = -1;
static int32_t x160 = 302;
uint32_t x167 = UINT32_MAX;
volatile int16_t x172 = 5504;
uint16_t x185 = UINT16_MAX;
static int8_t x191 = INT8_MIN;
static int16_t x206 = 7;
volatile int32_t t33 = 18164436;
volatile uint8_t x214 = 33U;
int64_t t35 = 55704328419166367LL;
int32_t x235 = INT32_MIN;
int16_t x236 = INT16_MIN;
uint16_t x243 = 6U;
static uint64_t x248 = 48851388545LLU;
volatile uint64_t t41 = 1LLU;
static int64_t x249 = 459LL;
volatile uint32_t x251 = UINT32_MAX;
uint16_t x266 = 92U;
int32_t t43 = -3979;
uint64_t x273 = 1LLU;
uint8_t x297 = 1U;
int64_t x299 = 21467404056LL;
volatile int64_t t47 = -56LL;
volatile uint64_t t51 = 28156684186LLU;
int64_t x337 = INT64_MAX;
int64_t x340 = -986133188997LL;
int32_t x344 = INT32_MAX;
uint64_t x345 = 17406596318169184LLU;
volatile int16_t x346 = 9;
int32_t x362 = INT32_MIN;
uint32_t x377 = 11U;
volatile uint8_t x393 = 31U;
static int16_t x394 = -4;
uint16_t x408 = UINT16_MAX;
uint32_t x425 = 24628U;
int8_t x428 = -1;
uint32_t t62 = 12362767U;
int16_t x446 = INT16_MIN;
static int8_t x449 = 12;
volatile uint8_t x462 = 1U;
uint8_t x478 = 25U;
uint64_t x479 = UINT64_MAX;
uint8_t x485 = 42U;
int32_t x488 = INT32_MIN;
static uint16_t x506 = 1838U;
volatile uint64_t x509 = 14992721041373LLU;
volatile int32_t x530 = INT32_MIN;
uint64_t t77 = 118LLU;
volatile uint8_t x542 = UINT8_MAX;
int32_t x562 = INT32_MIN;
static uint64_t x565 = 817961017LLU;
int8_t x594 = 3;
volatile int8_t x595 = INT8_MAX;
int32_t x603 = INT32_MIN;
volatile int64_t t85 = -213823136505341LL;
uint16_t x613 = 4492U;
int32_t x618 = INT32_MIN;
volatile int32_t x620 = INT32_MIN;
volatile int32_t t88 = -729;
uint8_t x633 = 1U;
volatile int32_t t89 = 190;
volatile uint64_t x638 = 2LLU;
uint8_t x641 = 88U;
uint8_t x644 = 96U;
static volatile int64_t x648 = -1LL;
int16_t x675 = INT16_MIN;
volatile int64_t x676 = INT64_MIN;
static int64_t x678 = INT64_MAX;
uint32_t x684 = UINT32_MAX;
int8_t x699 = 11;
int16_t x700 = INT16_MAX;
volatile int16_t x701 = INT16_MAX;
volatile int16_t x704 = -459;
volatile int8_t x707 = INT8_MAX;
int64_t x711 = 270799033944181LL;
int8_t x726 = 1;
int8_t x734 = -6;
static int8_t x775 = INT8_MAX;
static int16_t x776 = INT16_MIN;
int32_t t113 = 153715;
uint64_t t114 = 19427313639537LLU;
uint32_t x790 = UINT32_MAX;
volatile int16_t x806 = 4;
static volatile int32_t t116 = -570297;
static volatile int64_t x820 = INT64_MIN;
static int64_t x823 = INT64_MIN;
volatile int32_t t118 = -573;
int32_t x837 = 123143;
static volatile int32_t t122 = 1449707;
int8_t x864 = INT8_MIN;
uint64_t x878 = 1165537LLU;
uint16_t x913 = 470U;
volatile int64_t t129 = 255042LL;
volatile uint64_t x917 = 2LLU;
int8_t x918 = -1;
int8_t x919 = -1;
static volatile int8_t x920 = -1;
static uint64_t t130 = 2068065LLU;
uint16_t x921 = 12U;
int32_t x922 = -58130;
volatile int16_t x924 = -111;
uint32_t x925 = UINT32_MAX;
int16_t x926 = -1;
int8_t x928 = INT8_MIN;
int16_t x936 = -1;
uint8_t x938 = 1U;
static volatile int8_t x954 = 22;
int64_t x955 = -6169518953644857LL;
volatile int64_t x956 = -1LL;
int16_t x975 = -120;
uint16_t x976 = 4U;
int64_t x984 = 129754LL;
int64_t x989 = INT64_MAX;
int8_t x992 = INT8_MIN;
static int64_t t143 = 3096290249730LL;
int16_t x1005 = 58;
uint32_t x1006 = 3761203U;
int32_t x1010 = INT32_MIN;
int32_t x1039 = INT32_MAX;
int16_t x1044 = -1;
volatile int32_t t154 = 77117456;
uint8_t x1058 = 1U;
int8_t x1059 = -13;
static int32_t x1065 = INT32_MAX;
int64_t x1067 = INT64_MAX;
volatile int32_t x1074 = 258206;
uint32_t x1076 = UINT32_MAX;
volatile uint32_t t157 = UINT32_MAX;
uint32_t x1108 = 3142439U;
static volatile uint32_t t160 = 1579U;
int8_t x1118 = INT8_MIN;
int32_t x1119 = INT32_MIN;
volatile uint32_t t161 = 227U;
static uint32_t t162 = 1004909489U;
int8_t x1132 = -7;
uint64_t x1146 = 2925352389851557LLU;
volatile int8_t x1148 = INT8_MAX;
int8_t x1152 = -1;
volatile int8_t x1166 = -5;
uint8_t x1172 = 7U;
int32_t t167 = -239638;
uint32_t x1173 = 28U;
int32_t x1176 = INT32_MAX;
int64_t t169 = 1669196LL;
static int8_t x1183 = INT8_MAX;
int64_t x1184 = INT64_MIN;
volatile int32_t t172 = 4790401;
static int64_t x1254 = INT64_MIN;
int32_t x1255 = -1;
int16_t x1256 = 1;
uint32_t t180 = 54110U;
int16_t x1273 = 114;
volatile int64_t t183 = 223822066493706199LL;
static int8_t x1310 = INT8_MIN;
volatile int16_t x1317 = 9871;
uint8_t x1330 = 3U;
uint64_t x1331 = UINT64_MAX;
static uint32_t t187 = 1482032289U;
static int64_t t189 = -5825LL;
int8_t x1341 = INT8_MAX;
uint8_t x1357 = 9U;
int64_t x1363 = INT64_MIN;
uint32_t x1366 = UINT32_MAX;
static uint32_t t195 = 11U;
int16_t x1371 = -1;
int32_t t196 = 5;
int32_t x1383 = -6998255;
volatile uint64_t x1399 = 1078816LLU;
static volatile uint64_t t199 = 2043836910814LLU;


void f0(void) {
    	int32_t x13 = INT32_MAX;
	volatile uint64_t x14 = 7LLU;
	static uint32_t x15 = 1U;
	volatile int32_t t0 = -152;

    t0 = ((x13>>(x14==x15))+x16);

    if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	uint64_t x24 = 72161360238LLU;
	uint64_t t1 = 0LLU;

    t1 = ((x21>>(x22==x23))+x24);

    if (t1 != 76456327533LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 12184U;
	int32_t t2 = 5173355;

    t2 = ((x25>>(x26==x27))+x28);

    if (t2 != -32641) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x29 = INT8_MAX;
	volatile int16_t x30 = -99;
	int16_t x31 = -66;

    t3 = ((x29>>(x30==x31))+x32);

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x33 = 108U;
	uint8_t x34 = UINT8_MAX;
	volatile int8_t x35 = -1;
	volatile int32_t t4 = -68646360;

    t4 = ((x33>>(x34==x35))+x36);

    if (t4 != 32875) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 2U;
	uint32_t x39 = 8567U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t5 = 3266211;

    t5 = ((x37>>(x38==x39))+x40);

    if (t5 != 65407) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x41 = 14;
	volatile uint16_t x42 = 85U;
	int64_t x44 = 461510126LL;
	int64_t t6 = -78184596616LL;

    t6 = ((x41>>(x42==x43))+x44);

    if (t6 != 461510140LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x49 = 104054U;
	static int16_t x50 = INT16_MAX;
	static uint8_t x51 = UINT8_MAX;
	volatile int64_t x52 = INT64_MIN;

    t7 = ((x49>>(x50==x51))+x52);

    if (t7 != -9223372036854671754LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x57 = 0LLU;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MIN;

    t8 = ((x57>>(x58==x59))+x60);

    if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x61 = 8U;
	static int32_t x62 = -366;
	volatile int16_t x63 = INT16_MAX;
	int32_t t9 = 417767476;

    t9 = ((x61>>(x62==x63))+x64);

    if (t9 != -12649) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x73 = 984401042LLU;
	static uint32_t x74 = 14038U;
	static volatile int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MIN;
	uint64_t t10 = 80374309417325992LLU;

    t10 = ((x73>>(x74==x75))+x76);

    if (t10 != 984368274LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x77 = 898U;
	int8_t x78 = -1;
	uint8_t x79 = 0U;
	static int16_t x80 = INT16_MIN;
	volatile uint32_t t11 = 1U;

    t11 = ((x77>>(x78==x79))+x80);

    if (t11 != 4294935426U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x81 = 990259U;
	uint32_t x82 = 367324U;
	uint64_t x83 = 276229LLU;
	int64_t x84 = INT64_MIN;

    t12 = ((x81>>(x82==x83))+x84);

    if (t12 != -9223372036853785549LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x85 = 9481U;
	int8_t x86 = -1;
	uint32_t x87 = UINT32_MAX;
	volatile uint64_t t13 = 540252393064086LLU;

    t13 = ((x85>>(x86==x87))+x88);

    if (t13 != 4739LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x90 = INT16_MIN;
	static volatile uint64_t x92 = 5371833958530LLU;
	static volatile uint64_t t14 = 3682855LLU;

    t14 = ((x89>>(x90==x91))+x92);

    if (t14 != 5371833958530LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x97 = UINT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int32_t t15 = 254044951;

    t15 = ((x97>>(x98==x99))+x100);

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x101 = 1LL;
	int64_t x102 = -15978905LL;
	uint16_t x103 = 6U;
	volatile int64_t t16 = 6477LL;

    t16 = ((x101>>(x102==x103))+x104);

    if (t16 != 36832LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x108 = -74887923;
	static int32_t t17 = -31;

    t17 = ((x105>>(x106==x107))+x108);

    if (t17 != -74887860) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t18 = 19788;

    t18 = ((x109>>(x110==x111))+x112);

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x118 = 261187259LL;
	static int8_t x119 = -1;
	volatile int8_t x120 = 6;
	int32_t t19 = 54824;

    t19 = ((x117>>(x118==x119))+x120);

    if (t19 != 65541) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x125 = 2068U;
	volatile int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	int32_t t20 = 15386441;

    t20 = ((x125>>(x126==x127))+x128);

    if (t20 != -2147481580) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x129 = 1717362916U;
	uint8_t x130 = 92U;
	int32_t x131 = INT32_MAX;
	volatile uint32_t t21 = 15156472U;

    t21 = ((x129>>(x130==x131))+x132);

    if (t21 != 3864846564U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x133 = 121462;
	volatile int16_t x134 = -1;
	int16_t x135 = INT16_MAX;
	static int16_t x136 = INT16_MIN;
	static volatile int32_t t22 = -3;

    t22 = ((x133>>(x134==x135))+x136);

    if (t22 != 88694) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x141 = 6873228529LLU;
	static volatile uint32_t x142 = 475743U;
	int64_t x143 = -636729271398LL;
	int64_t x144 = 28109735763LL;
	static volatile uint64_t t23 = 25120450756LLU;

    t23 = ((x141>>(x142==x143))+x144);

    if (t23 != 34982964292LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x147 = 3423U;

    t24 = ((x145>>(x146==x147))+x148);

    if (t24 != 4514) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x153 = 8596U;
	uint32_t x154 = 823U;
	int32_t t25 = 285;

    t25 = ((x153>>(x154==x155))+x156);

    if (t25 != 8595) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x157 = INT8_MAX;
	static uint8_t x158 = 1U;
	uint16_t x159 = UINT16_MAX;
	int32_t t26 = -45378427;

    t26 = ((x157>>(x158==x159))+x160);

    if (t26 != 429) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x161 = UINT16_MAX;
	static int8_t x162 = -1;
	int64_t x163 = INT64_MIN;
	volatile uint8_t x164 = 53U;
	int32_t t27 = 20765657;

    t27 = ((x161>>(x162==x163))+x164);

    if (t27 != 65588) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = 93;
	int64_t x166 = 567200110LL;
	int32_t x168 = 32985092;
	static volatile int32_t t28 = -83;

    t28 = ((x165>>(x166==x167))+x168);

    if (t28 != 32985185) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x169 = 13U;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	int32_t t29 = -224415;

    t29 = ((x169>>(x170==x171))+x172);

    if (t29 != 5517) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x173 = 1U;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = INT8_MIN;
	int16_t x176 = 1;
	int32_t t30 = -11613;

    t30 = ((x173>>(x174==x175))+x176);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x186 = INT8_MAX;
	static int32_t x187 = INT32_MAX;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t31 = -150502;

    t31 = ((x185>>(x186==x187))+x188);

    if (t31 != -2147418113) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x189 = INT64_MAX;
	volatile int64_t x190 = -1LL;
	int8_t x192 = -1;
	volatile int64_t t32 = 68577143710LL;

    t32 = ((x189>>(x190==x191))+x192);

    if (t32 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x205 = 3U;
	int16_t x207 = INT16_MIN;
	int32_t x208 = 220;

    t33 = ((x205>>(x206==x207))+x208);

    if (t33 != 223) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x209 = UINT64_MAX;
	uint64_t x210 = UINT64_MAX;
	volatile int64_t x211 = 4595432510946LL;
	int64_t x212 = INT64_MAX;
	volatile uint64_t t34 = 54123LLU;

    t34 = ((x209>>(x210==x211))+x212);

    if (t34 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x213 = UINT16_MAX;
	int64_t x215 = -255232610688597LL;
	int64_t x216 = INT64_MIN;

    t35 = ((x213>>(x214==x215))+x216);

    if (t35 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x217 = UINT8_MAX;
	uint16_t x218 = 1263U;
	volatile uint64_t x219 = UINT64_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t36 = 12445704933071LLU;

    t36 = ((x217>>(x218==x219))+x220);

    if (t36 != 254LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x221 = 3U;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MAX;
	uint8_t x224 = 1U;
	volatile int32_t t37 = 1004;

    t37 = ((x221>>(x222==x223))+x224);

    if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x229 = INT8_MAX;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = 267661414505LL;
	volatile uint8_t x232 = 0U;
	volatile int32_t t38 = -21387;

    t38 = ((x229>>(x230==x231))+x232);

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x233 = UINT32_MAX;
	int64_t x234 = -1LL;
	static volatile uint32_t t39 = 389676U;

    t39 = ((x233>>(x234==x235))+x236);

    if (t39 != 4294934527U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x241 = UINT16_MAX;
	int8_t x242 = -6;
	uint8_t x244 = 0U;
	volatile int32_t t40 = -312331;

    t40 = ((x241>>(x242==x243))+x244);

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x245 = 3885;
	int64_t x246 = INT64_MIN;
	static uint32_t x247 = 404443U;

    t41 = ((x245>>(x246==x247))+x248);

    if (t41 != 48851392430LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x250 = UINT16_MAX;
	uint8_t x252 = 74U;
	volatile int64_t t42 = 19939330LL;

    t42 = ((x249>>(x250==x251))+x252);

    if (t42 != 533LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x265 = 60;
	volatile int8_t x267 = -1;
	static volatile int16_t x268 = INT16_MAX;

    t43 = ((x265>>(x266==x267))+x268);

    if (t43 != 32827) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x274 = INT64_MAX;
	int64_t x275 = 6422826529645LL;
	volatile int8_t x276 = INT8_MAX;
	volatile uint64_t t44 = 33LLU;

    t44 = ((x273>>(x274==x275))+x276);

    if (t44 != 128LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x277 = UINT64_MAX;
	static uint64_t x278 = 229783666355302LLU;
	volatile uint16_t x279 = 0U;
	volatile uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t45 = 22053405873063LLU;

    t45 = ((x277>>(x278==x279))+x280);

    if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x285 = 1;
	uint64_t x286 = 206216862488LLU;
	uint64_t x287 = 41LLU;
	volatile uint8_t x288 = 3U;
	int32_t t46 = 47215;

    t46 = ((x285>>(x286==x287))+x288);

    if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x298 = INT8_MIN;
	static int64_t x300 = INT64_MIN;

    t47 = ((x297>>(x298==x299))+x300);

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x301 = 0;
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = -1;
	static uint32_t x304 = 8U;
	uint32_t t48 = 307748U;

    t48 = ((x301>>(x302==x303))+x304);

    if (t48 != 8U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x305 = INT8_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	volatile int8_t x308 = INT8_MIN;
	int32_t t49 = -15114524;

    t49 = ((x305>>(x306==x307))+x308);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x309 = 1U;
	uint32_t x310 = 390588880U;
	int64_t x311 = 0LL;
	int8_t x312 = -15;
	uint32_t t50 = 12861U;

    t50 = ((x309>>(x310==x311))+x312);

    if (t50 != 4294967282U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x317 = 133966101473LLU;
	volatile int8_t x318 = -1;
	int32_t x319 = INT32_MAX;
	static int64_t x320 = 79042897833861LL;

    t51 = ((x317>>(x318==x319))+x320);

    if (t51 != 79176863935334LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x338 = 2U;
	uint16_t x339 = UINT16_MAX;
	int64_t t52 = -32995604903458478LL;

    t52 = ((x337>>(x338==x339))+x340);

    if (t52 != 9223371050721586810LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x341 = 1U;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	volatile uint32_t t53 = 462U;

    t53 = ((x341>>(x342==x343))+x344);

    if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x347 = UINT64_MAX;
	static uint64_t x348 = 28LLU;
	volatile uint64_t t54 = 306LLU;

    t54 = ((x345>>(x346==x347))+x348);

    if (t54 != 17406596318169212LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	static int32_t x359 = 413123015;
	static int64_t x360 = INT64_MIN;
	int64_t t55 = -1838903LL;

    t55 = ((x357>>(x358==x359))+x360);

    if (t55 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x361 = 327156;
	uint16_t x363 = 933U;
	int64_t x364 = -1LL;
	int64_t t56 = -14LL;

    t56 = ((x361>>(x362==x363))+x364);

    if (t56 != 327155LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x378 = INT8_MIN;
	int32_t x379 = 1695826;
	int64_t x380 = -1LL;
	int64_t t57 = 418LL;

    t57 = ((x377>>(x378==x379))+x380);

    if (t57 != 10LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x395 = -1LL;
	volatile int16_t x396 = INT16_MIN;
	int32_t t58 = 52321;

    t58 = ((x393>>(x394==x395))+x396);

    if (t58 != -32737) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x401 = UINT64_MAX;
	static int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MAX;
	static volatile int16_t x404 = -1;
	uint64_t t59 = 2471LLU;

    t59 = ((x401>>(x402==x403))+x404);

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x405 = 216299U;
	int8_t x406 = -9;
	volatile int8_t x407 = -1;
	volatile uint32_t t60 = 0U;

    t60 = ((x405>>(x406==x407))+x408);

    if (t60 != 281834U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x417 = 10758U;
	volatile int8_t x418 = 0;
	int8_t x419 = -24;
	int64_t x420 = 243395LL;
	volatile int64_t t61 = -62126878289499337LL;

    t61 = ((x417>>(x418==x419))+x420);

    if (t61 != 254153LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x426 = UINT64_MAX;
	volatile uint8_t x427 = 60U;

    t62 = ((x425>>(x426==x427))+x428);

    if (t62 != 24627U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MIN;
	int32_t x435 = -1;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t63 = 4002;

    t63 = ((x433>>(x434==x435))+x436);

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x445 = 36U;
	int8_t x447 = -5;
	int64_t x448 = -1LL;
	volatile int64_t t64 = -52940673LL;

    t64 = ((x445>>(x446==x447))+x448);

    if (t64 != 35LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x450 = UINT16_MAX;
	uint64_t x451 = UINT64_MAX;
	int8_t x452 = -22;
	static int32_t t65 = -107;

    t65 = ((x449>>(x450==x451))+x452);

    if (t65 != -10) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MAX;
	volatile uint32_t x456 = 55683672U;
	uint32_t t66 = 44U;

    t66 = ((x453>>(x454==x455))+x456);

    if (t66 != 55749207U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x461 = 446169140962LLU;
	volatile int8_t x463 = -1;
	volatile int32_t x464 = -1;
	volatile uint64_t t67 = 5007501153LLU;

    t67 = ((x461>>(x462==x463))+x464);

    if (t67 != 446169140961LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x469 = 1853;
	uint64_t x470 = 775787537319LLU;
	int16_t x471 = INT16_MIN;
	int8_t x472 = -1;
	static volatile int32_t t68 = 0;

    t68 = ((x469>>(x470==x471))+x472);

    if (t68 != 1852) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x473 = 66U;
	uint64_t x474 = 7025738901LLU;
	uint8_t x475 = 1U;
	uint32_t x476 = 9579666U;
	uint32_t t69 = 14017U;

    t69 = ((x473>>(x474==x475))+x476);

    if (t69 != 9579732U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x477 = 7874682U;
	int64_t x480 = 313986401933LL;
	int64_t t70 = -466687LL;

    t70 = ((x477>>(x478==x479))+x480);

    if (t70 != 313994276615LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x486 = -1LL;
	volatile int16_t x487 = INT16_MIN;
	static volatile int32_t t71 = 318102;

    t71 = ((x485>>(x486==x487))+x488);

    if (t71 != -2147483606) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x489 = UINT32_MAX;
	int32_t x490 = -1;
	int32_t x491 = -1;
	uint64_t x492 = 23LLU;
	volatile uint64_t t72 = 55545808LLU;

    t72 = ((x489>>(x490==x491))+x492);

    if (t72 != 2147483670LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x505 = 115U;
	int64_t x507 = INT64_MIN;
	int64_t x508 = 307793244992826612LL;
	int64_t t73 = 1843036174819549LL;

    t73 = ((x505>>(x506==x507))+x508);

    if (t73 != 307793244992826727LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MIN;
	volatile uint64_t t74 = 9LLU;

    t74 = ((x509>>(x510==x511))+x512);

    if (t74 != 14992721041245LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x521 = 236U;
	uint8_t x522 = UINT8_MAX;
	uint16_t x523 = UINT16_MAX;
	int8_t x524 = INT8_MIN;
	int32_t t75 = -214899;

    t75 = ((x521>>(x522==x523))+x524);

    if (t75 != 108) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x529 = 3U;
	int16_t x531 = INT16_MIN;
	volatile int32_t x532 = 56883663;
	volatile int32_t t76 = 1933;

    t76 = ((x529>>(x530==x531))+x532);

    if (t76 != 56883666) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x537 = 45117635277418579LLU;
	uint8_t x538 = UINT8_MAX;
	static int8_t x539 = 11;
	volatile uint8_t x540 = 29U;

    t77 = ((x537>>(x538==x539))+x540);

    if (t77 != 45117635277418608LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x541 = INT8_MAX;
	static volatile int64_t x543 = INT64_MIN;
	uint64_t x544 = 8594LLU;
	uint64_t t78 = 197411730LLU;

    t78 = ((x541>>(x542==x543))+x544);

    if (t78 != 8721LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x545 = UINT8_MAX;
	static int32_t x546 = 171173492;
	static int16_t x547 = INT16_MAX;
	int16_t x548 = 1;
	int32_t t79 = -677240333;

    t79 = ((x545>>(x546==x547))+x548);

    if (t79 != 256) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x561 = 9709698U;
	volatile int64_t x563 = INT64_MIN;
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t80 = 2U;

    t80 = ((x561>>(x562==x563))+x564);

    if (t80 != 9709697U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x566 = INT64_MIN;
	uint64_t x567 = UINT64_MAX;
	uint8_t x568 = 1U;
	static uint64_t t81 = 67086923739LLU;

    t81 = ((x565>>(x566==x567))+x568);

    if (t81 != 817961018LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x577 = 2521206541429LLU;
	int32_t x578 = INT32_MAX;
	int32_t x579 = -1;
	volatile uint16_t x580 = 7U;
	volatile uint64_t t82 = 4447431043201LLU;

    t82 = ((x577>>(x578==x579))+x580);

    if (t82 != 2521206541436LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x581 = UINT16_MAX;
	static volatile uint64_t x582 = 89160LLU;
	int64_t x583 = -1LL;
	int8_t x584 = INT8_MIN;
	int32_t t83 = -1870;

    t83 = ((x581>>(x582==x583))+x584);

    if (t83 != 65407) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x593 = 1U;
	int64_t x596 = INT64_MIN;
	int64_t t84 = 113703LL;

    t84 = ((x593>>(x594==x595))+x596);

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x601 = INT64_MAX;
	volatile int16_t x602 = INT16_MIN;
	int8_t x604 = -1;

    t85 = ((x601>>(x602==x603))+x604);

    if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x614 = UINT64_MAX;
	static int64_t x615 = -1LL;
	volatile int64_t x616 = INT64_MIN;
	volatile int64_t t86 = -385150559057049LL;

    t86 = ((x613>>(x614==x615))+x616);

    if (t86 != -9223372036854773562LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x617 = 15048178494509085LL;
	uint16_t x619 = UINT16_MAX;
	volatile int64_t t87 = 12002LL;

    t87 = ((x617>>(x618==x619))+x620);

    if (t87 != 15048176347025437LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x625 = 0;
	int8_t x626 = -1;
	int8_t x627 = INT8_MAX;
	volatile uint8_t x628 = UINT8_MAX;

    t88 = ((x625>>(x626==x627))+x628);

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x634 = INT8_MAX;
	uint8_t x635 = UINT8_MAX;
	int32_t x636 = 39190;

    t89 = ((x633>>(x634==x635))+x636);

    if (t89 != 39191) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x637 = 974U;
	volatile int8_t x639 = -5;
	int64_t x640 = INT64_MIN;
	volatile int64_t t90 = 89447293984LL;

    t90 = ((x637>>(x638==x639))+x640);

    if (t90 != -9223372036854774834LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x642 = 1811114250LLU;
	int32_t x643 = -3912;
	static int32_t t91 = -1;

    t91 = ((x641>>(x642==x643))+x644);

    if (t91 != 184) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x645 = UINT32_MAX;
	static int32_t x646 = INT32_MIN;
	static int64_t x647 = -564LL;
	int64_t t92 = -41370915LL;

    t92 = ((x645>>(x646==x647))+x648);

    if (t92 != 4294967294LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x649 = 4011U;
	static int64_t x650 = INT64_MAX;
	int8_t x651 = INT8_MIN;
	int16_t x652 = INT16_MIN;
	static volatile uint32_t t93 = 6728361U;

    t93 = ((x649>>(x650==x651))+x652);

    if (t93 != 4294938539U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x653 = INT32_MAX;
	uint16_t x654 = 3303U;
	static int16_t x655 = -1;
	int64_t x656 = -1LL;
	volatile int64_t t94 = 74LL;

    t94 = ((x653>>(x654==x655))+x656);

    if (t94 != 2147483646LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x661 = 8773U;
	int16_t x662 = -1;
	int16_t x663 = INT16_MIN;
	static int8_t x664 = -1;
	volatile int32_t t95 = -628334;

    t95 = ((x661>>(x662==x663))+x664);

    if (t95 != 8772) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x665 = 78813;
	int8_t x666 = 0;
	uint64_t x667 = 442740241LLU;
	uint64_t x668 = 275069776134213LLU;
	uint64_t t96 = 1393331969918LLU;

    t96 = ((x665>>(x666==x667))+x668);

    if (t96 != 275069776213026LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x673 = 9U;
	uint16_t x674 = UINT16_MAX;
	int64_t t97 = 66318817292365022LL;

    t97 = ((x673>>(x674==x675))+x676);

    if (t97 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x677 = 227045384346833LLU;
	int8_t x679 = 21;
	uint8_t x680 = 57U;
	uint64_t t98 = 699732498481LLU;

    t98 = ((x677>>(x678==x679))+x680);

    if (t98 != 227045384346890LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x681 = 7LLU;
	static uint64_t x682 = 19355253LLU;
	static volatile int16_t x683 = INT16_MIN;
	volatile uint64_t t99 = 14030438685314086LLU;

    t99 = ((x681>>(x682==x683))+x684);

    if (t99 != 4294967302LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x685 = INT16_MAX;
	volatile uint32_t x686 = UINT32_MAX;
	static int32_t x687 = INT32_MIN;
	uint64_t x688 = 5555842173439LLU;
	uint64_t t100 = 67996265LLU;

    t100 = ((x685>>(x686==x687))+x688);

    if (t100 != 5555842206206LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x693 = 0;
	static int64_t x694 = -1LL;
	int16_t x695 = INT16_MAX;
	uint16_t x696 = UINT16_MAX;
	int32_t t101 = -343;

    t101 = ((x693>>(x694==x695))+x696);

    if (t101 != 65535) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x697 = UINT8_MAX;
	int8_t x698 = -1;
	volatile int32_t t102 = 2208;

    t102 = ((x697>>(x698==x699))+x700);

    if (t102 != 33022) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x702 = INT8_MIN;
	uint8_t x703 = 6U;
	volatile int32_t t103 = 49;

    t103 = ((x701>>(x702==x703))+x704);

    if (t103 != 32308) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x705 = 601U;
	int32_t x706 = -373;
	int8_t x708 = INT8_MIN;
	int32_t t104 = 3;

    t104 = ((x705>>(x706==x707))+x708);

    if (t104 != 473) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x709 = 91U;
	uint8_t x710 = 0U;
	volatile uint16_t x712 = UINT16_MAX;
	volatile uint32_t t105 = 672U;

    t105 = ((x709>>(x710==x711))+x712);

    if (t105 != 65626U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x717 = INT8_MAX;
	static int8_t x718 = INT8_MAX;
	int64_t x719 = 27562660938LL;
	int64_t x720 = INT64_MIN;
	volatile int64_t t106 = -46LL;

    t106 = ((x717>>(x718==x719))+x720);

    if (t106 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x721 = INT32_MAX;
	volatile int32_t x722 = -1;
	int16_t x723 = -1;
	static uint64_t x724 = 201099907LLU;
	volatile uint64_t t107 = 1091143697974433444LLU;

    t107 = ((x721>>(x722==x723))+x724);

    if (t107 != 1274841730LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x725 = 0U;
	int64_t x727 = 450212143787203246LL;
	uint64_t x728 = 2479485258LLU;
	uint64_t t108 = 65156379LLU;

    t108 = ((x725>>(x726==x727))+x728);

    if (t108 != 2479485258LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x729 = UINT8_MAX;
	uint16_t x730 = 30348U;
	int64_t x731 = -31671989392459229LL;
	uint64_t x732 = 2569188806017400929LLU;
	volatile uint64_t t109 = 58LLU;

    t109 = ((x729>>(x730==x731))+x732);

    if (t109 != 2569188806017401184LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x733 = 117350;
	uint64_t x735 = 38387627493029LLU;
	int32_t x736 = -1;
	volatile int32_t t110 = 2376739;

    t110 = ((x733>>(x734==x735))+x736);

    if (t110 != 117349) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x741 = INT8_MAX;
	uint16_t x742 = UINT16_MAX;
	static uint16_t x743 = 0U;
	int64_t x744 = 0LL;
	volatile int64_t t111 = -48494591218LL;

    t111 = ((x741>>(x742==x743))+x744);

    if (t111 != 127LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x749 = 2U;
	volatile int8_t x750 = INT8_MIN;
	int16_t x751 = -1;
	uint32_t x752 = UINT32_MAX;
	volatile uint32_t t112 = 16583U;

    t112 = ((x749>>(x750==x751))+x752);

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x773 = 6940U;
	static int32_t x774 = 80;

    t113 = ((x773>>(x774==x775))+x776);

    if (t113 != -25828) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x785 = INT16_MAX;
	int32_t x786 = INT32_MIN;
	int32_t x787 = -1;
	uint64_t x788 = 82LLU;

    t114 = ((x785>>(x786==x787))+x788);

    if (t114 != 32849LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x789 = UINT8_MAX;
	uint64_t x791 = 8223819896050343244LLU;
	uint8_t x792 = 26U;
	static int32_t t115 = 807;

    t115 = ((x789>>(x790==x791))+x792);

    if (t115 != 281) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x805 = INT16_MAX;
	int16_t x807 = 1;
	volatile int8_t x808 = INT8_MAX;

    t116 = ((x805>>(x806==x807))+x808);

    if (t116 != 32894) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x817 = 773U;
	int16_t x818 = -828;
	int64_t x819 = -2001112LL;
	int64_t t117 = -481631172LL;

    t117 = ((x817>>(x818==x819))+x820);

    if (t117 != -9223372036854775035LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x821 = UINT8_MAX;
	uint32_t x822 = 1749282829U;
	static int16_t x824 = INT16_MAX;

    t118 = ((x821>>(x822==x823))+x824);

    if (t118 != 33022) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x825 = INT64_MAX;
	volatile int8_t x826 = INT8_MIN;
	uint8_t x827 = UINT8_MAX;
	int64_t x828 = -894LL;
	static int64_t t119 = -163355923471211483LL;

    t119 = ((x825>>(x826==x827))+x828);

    if (t119 != 9223372036854774913LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x833 = UINT16_MAX;
	int16_t x834 = INT16_MAX;
	int64_t x835 = -36375783333347LL;
	int16_t x836 = 4542;
	int32_t t120 = 0;

    t120 = ((x833>>(x834==x835))+x836);

    if (t120 != 70077) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x838 = -14529;
	volatile int16_t x839 = INT16_MIN;
	int8_t x840 = -1;
	int32_t t121 = -851167;

    t121 = ((x837>>(x838==x839))+x840);

    if (t121 != 123142) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x841 = 362U;
	static int32_t x842 = -3206079;
	volatile int64_t x843 = INT64_MIN;
	uint16_t x844 = UINT16_MAX;

    t122 = ((x841>>(x842==x843))+x844);

    if (t122 != 65897) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x849 = UINT16_MAX;
	static int8_t x850 = -1;
	int64_t x851 = 74469753037LL;
	static int32_t x852 = -1;
	int32_t t123 = 73215;

    t123 = ((x849>>(x850==x851))+x852);

    if (t123 != 65534) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x861 = 221U;
	int16_t x862 = -1;
	static volatile uint8_t x863 = UINT8_MAX;
	uint32_t t124 = 1330U;

    t124 = ((x861>>(x862==x863))+x864);

    if (t124 != 93U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x869 = INT64_MAX;
	uint32_t x870 = UINT32_MAX;
	uint64_t x871 = 43428953868447713LLU;
	volatile uint64_t x872 = UINT64_MAX;
	uint64_t t125 = 3885154093987LLU;

    t125 = ((x869>>(x870==x871))+x872);

    if (t125 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x877 = 36556255550LL;
	volatile int64_t x879 = INT64_MIN;
	int32_t x880 = -1407;
	int64_t t126 = -852405537833LL;

    t126 = ((x877>>(x878==x879))+x880);

    if (t126 != 36556254143LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x881 = 10U;
	uint8_t x882 = 3U;
	volatile uint16_t x883 = 24U;
	static uint64_t x884 = 8261105422825930688LLU;
	uint64_t t127 = 15392LLU;

    t127 = ((x881>>(x882==x883))+x884);

    if (t127 != 8261105422825930698LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x901 = 1;
	int32_t x902 = -2978;
	int16_t x903 = -92;
	volatile int16_t x904 = 244;
	int32_t t128 = 0;

    t128 = ((x901>>(x902==x903))+x904);

    if (t128 != 245) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x914 = INT64_MIN;
	volatile int32_t x915 = INT32_MIN;
	int64_t x916 = -1LL;

    t129 = ((x913>>(x914==x915))+x916);

    if (t129 != 469LL) { NG(); } else { ; }
	
}

void f130(void) {
    

    t130 = ((x917>>(x918==x919))+x920);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x923 = 253;
	volatile int32_t t131 = 15361;

    t131 = ((x921>>(x922==x923))+x924);

    if (t131 != -99) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x927 = 16;
	uint32_t t132 = 73264334U;

    t132 = ((x925>>(x926==x927))+x928);

    if (t132 != 4294967167U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x933 = UINT16_MAX;
	int64_t x934 = INT64_MAX;
	int32_t x935 = INT32_MIN;
	volatile int32_t t133 = -175;

    t133 = ((x933>>(x934==x935))+x936);

    if (t133 != 65534) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x937 = UINT8_MAX;
	static volatile int16_t x939 = -41;
	int8_t x940 = INT8_MAX;
	int32_t t134 = -216160;

    t134 = ((x937>>(x938==x939))+x940);

    if (t134 != 382) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x941 = UINT64_MAX;
	static int16_t x942 = INT16_MIN;
	uint64_t x943 = 70000354131000LLU;
	uint16_t x944 = 283U;
	uint64_t t135 = 43754365352LLU;

    t135 = ((x941>>(x942==x943))+x944);

    if (t135 != 282LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x945 = 224U;
	int64_t x946 = 3351466831474222489LL;
	uint16_t x947 = UINT16_MAX;
	uint32_t x948 = 7266U;
	uint32_t t136 = 87965061U;

    t136 = ((x945>>(x946==x947))+x948);

    if (t136 != 7490U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x949 = UINT64_MAX;
	int32_t x950 = INT32_MIN;
	int64_t x951 = INT64_MIN;
	uint8_t x952 = 4U;
	volatile uint64_t t137 = 11LLU;

    t137 = ((x949>>(x950==x951))+x952);

    if (t137 != 3LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x953 = INT8_MAX;
	volatile int64_t t138 = 72073710765330025LL;

    t138 = ((x953>>(x954==x955))+x956);

    if (t138 != 126LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x957 = 1698353451021990LL;
	int16_t x958 = INT16_MIN;
	int64_t x959 = INT64_MIN;
	uint8_t x960 = 2U;
	volatile int64_t t139 = -31732LL;

    t139 = ((x957>>(x958==x959))+x960);

    if (t139 != 1698353451021992LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x969 = 25805U;
	int32_t x970 = -1;
	int8_t x971 = 0;
	int8_t x972 = INT8_MIN;
	int32_t t140 = -136947455;

    t140 = ((x969>>(x970==x971))+x972);

    if (t140 != 25677) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x973 = 56423U;
	int64_t x974 = INT64_MAX;
	volatile uint32_t t141 = 1U;

    t141 = ((x973>>(x974==x975))+x976);

    if (t141 != 56427U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x981 = 29839230U;
	static int8_t x982 = 0;
	int64_t x983 = -1LL;
	volatile int64_t t142 = -67454426531LL;

    t142 = ((x981>>(x982==x983))+x984);

    if (t142 != 29968984LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x990 = -105;
	int64_t x991 = INT64_MIN;

    t143 = ((x989>>(x990==x991))+x992);

    if (t143 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x997 = 10;
	static int16_t x998 = INT16_MIN;
	int32_t x999 = INT32_MIN;
	int8_t x1000 = 3;
	volatile int32_t t144 = 94;

    t144 = ((x997>>(x998==x999))+x1000);

    if (t144 != 13) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1001 = 12;
	static int8_t x1002 = -1;
	uint64_t x1003 = UINT64_MAX;
	int16_t x1004 = INT16_MIN;
	int32_t t145 = 411824471;

    t145 = ((x1001>>(x1002==x1003))+x1004);

    if (t145 != -32762) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1007 = INT32_MIN;
	int64_t x1008 = INT64_MIN;
	static volatile int64_t t146 = -2LL;

    t146 = ((x1005>>(x1006==x1007))+x1008);

    if (t146 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1009 = INT8_MAX;
	int64_t x1011 = INT64_MAX;
	volatile int16_t x1012 = INT16_MIN;
	static volatile int32_t t147 = -313895;

    t147 = ((x1009>>(x1010==x1011))+x1012);

    if (t147 != -32641) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1013 = 94LLU;
	uint16_t x1014 = 42U;
	int8_t x1015 = -10;
	int16_t x1016 = -1;
	static volatile uint64_t t148 = 34550102654LLU;

    t148 = ((x1013>>(x1014==x1015))+x1016);

    if (t148 != 93LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1029 = UINT64_MAX;
	int8_t x1030 = 22;
	int16_t x1031 = 48;
	static volatile uint32_t x1032 = 18U;
	volatile uint64_t t149 = 15046503594936294LLU;

    t149 = ((x1029>>(x1030==x1031))+x1032);

    if (t149 != 17LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1033 = UINT32_MAX;
	volatile int16_t x1034 = INT16_MIN;
	static uint64_t x1035 = 790428268068650749LLU;
	volatile int32_t x1036 = 5368885;
	volatile uint32_t t150 = 113U;

    t150 = ((x1033>>(x1034==x1035))+x1036);

    if (t150 != 5368884U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1037 = UINT32_MAX;
	int8_t x1038 = 4;
	uint8_t x1040 = 106U;
	uint32_t t151 = 29869367U;

    t151 = ((x1037>>(x1038==x1039))+x1040);

    if (t151 != 105U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x1041 = 169LL;
	volatile int8_t x1042 = INT8_MIN;
	uint8_t x1043 = UINT8_MAX;
	int64_t t152 = 5980LL;

    t152 = ((x1041>>(x1042==x1043))+x1044);

    if (t152 != 168LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x1045 = INT16_MAX;
	int8_t x1046 = -7;
	int8_t x1047 = INT8_MIN;
	uint16_t x1048 = 16U;
	static int32_t t153 = -10;

    t153 = ((x1045>>(x1046==x1047))+x1048);

    if (t153 != 32783) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1049 = 1;
	int8_t x1050 = -7;
	int8_t x1051 = 3;
	uint8_t x1052 = UINT8_MAX;

    t154 = ((x1049>>(x1050==x1051))+x1052);

    if (t154 != 256) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1057 = UINT16_MAX;
	volatile int16_t x1060 = 54;
	int32_t t155 = 711348716;

    t155 = ((x1057>>(x1058==x1059))+x1060);

    if (t155 != 65589) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1066 = UINT64_MAX;
	int16_t x1068 = INT16_MIN;
	volatile int32_t t156 = -26888;

    t156 = ((x1065>>(x1066==x1067))+x1068);

    if (t156 != 2147450879) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1073 = 0U;
	int8_t x1075 = 7;

    t157 = ((x1073>>(x1074==x1075))+x1076);

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1089 = UINT16_MAX;
	int32_t x1090 = INT32_MAX;
	uint8_t x1091 = 5U;
	uint8_t x1092 = UINT8_MAX;
	volatile int32_t t158 = 37432;

    t158 = ((x1089>>(x1090==x1091))+x1092);

    if (t158 != 65790) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1101 = UINT32_MAX;
	int16_t x1102 = INT16_MAX;
	uint16_t x1103 = 4767U;
	int16_t x1104 = INT16_MAX;
	static uint32_t t159 = 112U;

    t159 = ((x1101>>(x1102==x1103))+x1104);

    if (t159 != 32766U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1105 = 8;
	int64_t x1106 = 1347LL;
	static volatile int16_t x1107 = -1;

    t160 = ((x1105>>(x1106==x1107))+x1108);

    if (t160 != 3142447U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x1117 = 403366U;
	int16_t x1120 = -1;

    t161 = ((x1117>>(x1118==x1119))+x1120);

    if (t161 != 403365U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x1121 = 43U;
	uint64_t x1122 = UINT64_MAX;
	int64_t x1123 = INT64_MIN;
	static uint8_t x1124 = 5U;

    t162 = ((x1121>>(x1122==x1123))+x1124);

    if (t162 != 48U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1129 = UINT32_MAX;
	static uint64_t x1130 = 117236671887264134LLU;
	static int64_t x1131 = -7437LL;
	static volatile uint32_t t163 = 5U;

    t163 = ((x1129>>(x1130==x1131))+x1132);

    if (t163 != 4294967288U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1145 = 1;
	static uint16_t x1147 = 248U;
	int32_t t164 = 441407103;

    t164 = ((x1145>>(x1146==x1147))+x1148);

    if (t164 != 128) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1149 = 18U;
	static volatile uint64_t x1150 = 55LLU;
	static int64_t x1151 = INT64_MIN;
	volatile int32_t t165 = -11534133;

    t165 = ((x1149>>(x1150==x1151))+x1152);

    if (t165 != 17) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1165 = UINT64_MAX;
	int64_t x1167 = INT64_MIN;
	int64_t x1168 = -1LL;
	static volatile uint64_t t166 = 532864672LLU;

    t166 = ((x1165>>(x1166==x1167))+x1168);

    if (t166 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1169 = 7103U;
	static int32_t x1170 = 700;
	int32_t x1171 = 1028728;

    t167 = ((x1169>>(x1170==x1171))+x1172);

    if (t167 != 7110) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1174 = 16749LLU;
	int32_t x1175 = 2608745;
	static uint32_t t168 = 1282U;

    t168 = ((x1173>>(x1174==x1175))+x1176);

    if (t168 != 2147483675U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x1177 = INT8_MAX;
	int16_t x1178 = 8;
	int16_t x1179 = INT16_MIN;
	static int64_t x1180 = 5LL;

    t169 = ((x1177>>(x1178==x1179))+x1180);

    if (t169 != 132LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1181 = 7U;
	int8_t x1182 = 1;
	int64_t t170 = -220090506565LL;

    t170 = ((x1181>>(x1182==x1183))+x1184);

    if (t170 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x1193 = 788214934U;
	uint32_t x1194 = 19774U;
	int32_t x1195 = 13300;
	volatile uint16_t x1196 = UINT16_MAX;
	uint32_t t171 = 10841U;

    t171 = ((x1193>>(x1194==x1195))+x1196);

    if (t171 != 788280469U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1205 = 6;
	int32_t x1206 = 329240523;
	static volatile int32_t x1207 = INT32_MIN;
	uint16_t x1208 = 47U;

    t172 = ((x1205>>(x1206==x1207))+x1208);

    if (t172 != 53) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x1209 = 0U;
	static int32_t x1210 = 3596;
	volatile uint64_t x1211 = 8052669517412LLU;
	int16_t x1212 = -1;
	volatile int32_t t173 = -57;

    t173 = ((x1209>>(x1210==x1211))+x1212);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x1221 = UINT64_MAX;
	int16_t x1222 = -1;
	static uint32_t x1223 = UINT32_MAX;
	volatile uint32_t x1224 = 2040U;
	uint64_t t174 = 1109210599333801LLU;

    t174 = ((x1221>>(x1222==x1223))+x1224);

    if (t174 != 9223372036854777847LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1225 = 2U;
	int64_t x1226 = INT64_MAX;
	static uint8_t x1227 = 4U;
	int64_t x1228 = INT64_MIN;
	int64_t t175 = 119522358934LL;

    t175 = ((x1225>>(x1226==x1227))+x1228);

    if (t175 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1241 = 9U;
	static int64_t x1242 = INT64_MAX;
	static int16_t x1243 = INT16_MIN;
	int8_t x1244 = INT8_MIN;
	int32_t t176 = -841031;

    t176 = ((x1241>>(x1242==x1243))+x1244);

    if (t176 != -119) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1245 = UINT32_MAX;
	static int32_t x1246 = -1;
	uint16_t x1247 = 1042U;
	int16_t x1248 = INT16_MAX;
	volatile uint32_t t177 = 485728755U;

    t177 = ((x1245>>(x1246==x1247))+x1248);

    if (t177 != 32766U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1249 = UINT16_MAX;
	uint8_t x1250 = 24U;
	static volatile int16_t x1251 = 51;
	static int8_t x1252 = INT8_MIN;
	static int32_t t178 = -3869613;

    t178 = ((x1249>>(x1250==x1251))+x1252);

    if (t178 != 65407) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1253 = 0;
	volatile int32_t t179 = 55568;

    t179 = ((x1253>>(x1254==x1255))+x1256);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1261 = 16U;
	uint64_t x1262 = UINT64_MAX;
	int16_t x1263 = -67;
	int16_t x1264 = INT16_MIN;

    t180 = ((x1261>>(x1262==x1263))+x1264);

    if (t180 != 4294934544U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1274 = INT32_MIN;
	uint8_t x1275 = 31U;
	static int64_t x1276 = 70914786197314LL;
	volatile int64_t t181 = 437978LL;

    t181 = ((x1273>>(x1274==x1275))+x1276);

    if (t181 != 70914786197428LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1281 = 31;
	int32_t x1282 = 2;
	int64_t x1283 = 13794955861773372LL;
	static int64_t x1284 = 16482608643867057LL;
	int64_t t182 = -985121LL;

    t182 = ((x1281>>(x1282==x1283))+x1284);

    if (t182 != 16482608643867088LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1297 = UINT32_MAX;
	static int32_t x1298 = -1;
	static volatile uint32_t x1299 = UINT32_MAX;
	int64_t x1300 = INT64_MIN;

    t183 = ((x1297>>(x1298==x1299))+x1300);

    if (t183 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1301 = 86U;
	int8_t x1302 = INT8_MIN;
	static int16_t x1303 = INT16_MIN;
	int8_t x1304 = 7;
	static int32_t t184 = -235334;

    t184 = ((x1301>>(x1302==x1303))+x1304);

    if (t184 != 93) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1309 = 127;
	volatile int16_t x1311 = -1;
	static volatile int16_t x1312 = INT16_MAX;
	volatile int32_t t185 = -1789525;

    t185 = ((x1309>>(x1310==x1311))+x1312);

    if (t185 != 32894) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1318 = -1;
	int64_t x1319 = -1LL;
	int32_t x1320 = INT32_MIN;
	volatile int32_t t186 = 34564;

    t186 = ((x1317>>(x1318==x1319))+x1320);

    if (t186 != -2147478713) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1329 = 0U;
	static uint32_t x1332 = 213891U;

    t187 = ((x1329>>(x1330==x1331))+x1332);

    if (t187 != 213891U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1333 = 2887230LLU;
	uint64_t x1334 = 378237796763LLU;
	volatile int8_t x1335 = INT8_MIN;
	static volatile int32_t x1336 = INT32_MIN;
	uint64_t t188 = 195274568LLU;

    t188 = ((x1333>>(x1334==x1335))+x1336);

    if (t188 != 18446744071564955198LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1337 = 208U;
	volatile int8_t x1338 = INT8_MIN;
	volatile int64_t x1339 = -1LL;
	volatile int64_t x1340 = INT64_MIN;

    t189 = ((x1337>>(x1338==x1339))+x1340);

    if (t189 != -9223372036854775600LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1342 = -121LL;
	int32_t x1343 = INT32_MIN;
	volatile uint64_t x1344 = 1620452388620204LLU;
	volatile uint64_t t190 = 819231928567006706LLU;

    t190 = ((x1341>>(x1342==x1343))+x1344);

    if (t190 != 1620452388620331LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1349 = 9U;
	int64_t x1350 = -3837206162LL;
	volatile int8_t x1351 = INT8_MIN;
	int8_t x1352 = -1;
	volatile int32_t t191 = -1564036;

    t191 = ((x1349>>(x1350==x1351))+x1352);

    if (t191 != 8) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1353 = 40;
	int32_t x1354 = -37592;
	int16_t x1355 = INT16_MIN;
	static int64_t x1356 = -1LL;
	volatile int64_t t192 = 24412707636385LL;

    t192 = ((x1353>>(x1354==x1355))+x1356);

    if (t192 != 39LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x1358 = 858084189996921038LLU;
	int64_t x1359 = 1023878647999771LL;
	uint64_t x1360 = 2134950LLU;
	volatile uint64_t t193 = 10604144LLU;

    t193 = ((x1357>>(x1358==x1359))+x1360);

    if (t193 != 2134959LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1361 = 4793U;
	int16_t x1362 = INT16_MIN;
	uint64_t x1364 = 13235541680959LLU;
	static uint64_t t194 = 36567611264457LLU;

    t194 = ((x1361>>(x1362==x1363))+x1364);

    if (t194 != 13235541685752LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1365 = UINT32_MAX;
	volatile int32_t x1367 = 20779;
	int32_t x1368 = INT32_MAX;

    t195 = ((x1365>>(x1366==x1367))+x1368);

    if (t195 != 2147483646U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1369 = 467181865;
	uint8_t x1370 = UINT8_MAX;
	int16_t x1372 = 1;

    t196 = ((x1369>>(x1370==x1371))+x1372);

    if (t196 != 467181866) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1381 = 860U;
	int8_t x1382 = INT8_MIN;
	int64_t x1384 = 0LL;
	volatile int64_t t197 = 17967288285LL;

    t197 = ((x1381>>(x1382==x1383))+x1384);

    if (t197 != 860LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1385 = INT16_MAX;
	volatile uint16_t x1386 = UINT16_MAX;
	volatile int64_t x1387 = -4534816063LL;
	uint8_t x1388 = UINT8_MAX;
	volatile int32_t t198 = 6109465;

    t198 = ((x1385>>(x1386==x1387))+x1388);

    if (t198 != 33022) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1397 = UINT64_MAX;
	int64_t x1398 = 14728678LL;
	volatile int32_t x1400 = INT32_MIN;

    t199 = ((x1397>>(x1398==x1399))+x1400);

    if (t199 != 18446744071562067967LLU) { NG(); } else { ; }
	
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

