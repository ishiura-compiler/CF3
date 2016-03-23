
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

static int64_t t0 = 672661051LL;
int8_t x10 = INT8_MAX;
int32_t x13 = INT32_MIN;
volatile uint8_t x16 = 64U;
volatile int64_t t3 = -2491224629LL;
int64_t x27 = -250569LL;
uint64_t t4 = UINT64_MAX;
static volatile uint8_t x32 = 4U;
uint32_t x39 = 12915945U;
volatile int32_t t6 = -62731;
static int16_t x65 = 1239;
int32_t x73 = 270747;
int16_t x81 = -1;
static int32_t t11 = -2082466;
int16_t x87 = INT16_MIN;
int64_t t13 = -305840907LL;
static uint16_t x116 = 23428U;
int64_t t15 = 1971LL;
int8_t x125 = INT8_MIN;
int8_t x126 = INT8_MIN;
uint16_t x156 = 54U;
uint64_t x169 = UINT64_MAX;
static volatile uint32_t x190 = 19329U;
uint32_t x191 = 339283383U;
int8_t x193 = INT8_MAX;
int16_t x195 = INT16_MAX;
static uint32_t t24 = 8812312U;
int64_t x203 = -1LL;
volatile uint16_t x233 = 2097U;
volatile int32_t t27 = 1145;
int32_t t28 = -7;
volatile uint32_t t29 = 97U;
int32_t x271 = INT32_MIN;
int16_t x273 = INT16_MAX;
uint16_t x276 = 28U;
int32_t x302 = INT32_MAX;
int8_t x315 = -47;
volatile int32_t t35 = -2;
static int16_t x325 = -1;
volatile int32_t t36 = -926348;
int32_t x349 = -442;
int16_t x352 = -300;
volatile int32_t t41 = -932834;
uint64_t t42 = 0LLU;
int8_t x392 = INT8_MAX;
static int16_t x410 = INT16_MIN;
uint32_t t47 = 5292817U;
volatile int8_t x413 = -1;
int64_t t49 = -32961869673725LL;
volatile uint32_t x443 = 6585213U;
int8_t x444 = -1;
uint64_t x469 = 57395513715LLU;
volatile uint64_t t53 = 725LLU;
volatile int32_t x474 = INT32_MAX;
static int8_t x476 = INT8_MAX;
static int64_t x484 = INT64_MAX;
int16_t x486 = 3051;
static volatile int32_t x492 = 2290037;
volatile uint32_t t57 = UINT32_MAX;
volatile int8_t x498 = INT8_MAX;
volatile int64_t x507 = INT64_MIN;
int8_t x513 = INT8_MAX;
int8_t x519 = INT8_MAX;
static int16_t x520 = INT16_MAX;
static uint8_t x536 = UINT8_MAX;
int8_t x565 = INT8_MIN;
int8_t x571 = -4;
uint32_t x574 = UINT32_MAX;
static int32_t t71 = 37359924;
static int16_t x589 = -145;
volatile uint32_t x592 = UINT32_MAX;
int16_t x606 = INT16_MIN;
int32_t x607 = -1;
volatile int16_t x608 = 10;
int64_t x637 = -2609890LL;
volatile int32_t t77 = 31206;
uint8_t x663 = UINT8_MAX;
uint64_t x685 = 1049238570105668762LLU;
uint8_t x697 = UINT8_MAX;
uint16_t x699 = 14U;
uint16_t x700 = UINT16_MAX;
volatile uint8_t x703 = UINT8_MAX;
volatile int32_t x710 = INT32_MIN;
uint8_t x714 = 1U;
volatile int16_t x725 = -1;
volatile int64_t t88 = -73613LL;
int16_t x731 = INT16_MIN;
int32_t x740 = INT32_MAX;
volatile int32_t t90 = 5068;
uint32_t x744 = UINT32_MAX;
volatile int16_t x757 = INT16_MIN;
int64_t x760 = 1281616052302LL;
static int8_t x761 = 0;
int8_t x768 = 1;
static volatile uint8_t x773 = 2U;
uint32_t t96 = 24748U;
volatile uint64_t t97 = UINT64_MAX;
int32_t x785 = 5558;
int16_t x788 = INT16_MIN;
int32_t x809 = -22591;
int32_t x836 = INT32_MAX;
volatile int32_t t101 = -138609139;
volatile int8_t x847 = -2;
volatile uint16_t x848 = 3067U;
int32_t x852 = INT32_MAX;
volatile int32_t t103 = 1;
int32_t x863 = INT32_MIN;
static volatile int32_t t104 = -2;
static int8_t x873 = -1;
static int64_t x878 = -290023465396061567LL;
uint64_t x882 = 326469948259LLU;
int8_t x913 = 44;
int32_t x919 = -208;
static int64_t x924 = INT64_MAX;
int64_t x931 = -25LL;
volatile int64_t x932 = INT64_MAX;
static uint64_t x941 = 134101247999785LLU;
int8_t x949 = -1;
int64_t x952 = INT64_MAX;
int32_t x963 = INT32_MIN;
volatile uint64_t t119 = UINT64_MAX;
int16_t x999 = 123;
int32_t x1008 = 141;
int16_t x1014 = INT16_MIN;
static volatile int16_t x1016 = -1;
volatile int32_t t125 = INT32_MAX;
uint32_t t126 = UINT32_MAX;
static int8_t x1041 = 25;
static uint64_t x1046 = UINT64_MAX;
int64_t x1061 = -57098011253408LL;
uint64_t x1063 = 8LLU;
int64_t x1083 = -168654171759266LL;
volatile int32_t t131 = 1;
volatile int64_t x1099 = INT64_MIN;
volatile int16_t x1105 = INT16_MIN;
int32_t x1110 = INT32_MIN;
int8_t x1122 = INT8_MIN;
int8_t x1138 = 10;
int32_t x1141 = INT32_MAX;
int32_t x1156 = INT32_MAX;
int32_t t142 = 32865747;
uint32_t x1176 = 445400U;
int16_t x1191 = INT16_MAX;
static uint32_t x1193 = 4451U;
static volatile int64_t x1207 = INT64_MIN;
uint64_t x1212 = UINT64_MAX;
volatile uint32_t x1218 = 10U;
volatile int32_t x1225 = 32;
volatile int64_t x1226 = INT64_MAX;
static int32_t x1227 = -603996;
int8_t x1237 = 35;
int32_t x1240 = -1;
volatile int32_t t154 = 95342;
static int8_t x1244 = INT8_MIN;
volatile int16_t x1245 = INT16_MAX;
static uint32_t t157 = 303939778U;
int16_t x1278 = 6557;
int64_t t158 = -523394798913133LL;
int8_t x1283 = 0;
int8_t x1289 = -1;
volatile int8_t x1290 = INT8_MAX;
volatile uint32_t x1296 = 1966U;
volatile int32_t t162 = INT32_MAX;
uint64_t x1304 = UINT64_MAX;
volatile uint32_t x1325 = 57898039U;
static int16_t x1350 = INT16_MAX;
volatile uint8_t x1353 = 1U;
volatile int32_t t170 = -57488;
int64_t x1383 = -1LL;
int64_t x1384 = INT64_MAX;
static volatile int32_t t172 = 1092734;
uint64_t x1393 = UINT64_MAX;
uint16_t x1396 = 48U;
static volatile int16_t x1398 = -1;
volatile int16_t x1401 = 9;
static int64_t x1405 = -1LL;
static uint32_t x1407 = UINT32_MAX;
volatile int32_t t177 = -122564;
static int8_t x1419 = INT8_MAX;
int64_t x1429 = INT64_MAX;
int32_t x1442 = INT32_MAX;
int64_t x1466 = INT64_MIN;
static int64_t t181 = 18259581160LL;
int8_t x1471 = INT8_MAX;
volatile uint64_t x1472 = UINT64_MAX;
volatile int32_t x1491 = INT32_MIN;
volatile int16_t x1503 = -1;
int16_t x1509 = INT16_MIN;
volatile int32_t t190 = -886274;
uint16_t x1541 = UINT16_MAX;
uint16_t x1542 = 4785U;
uint8_t x1543 = 71U;
int8_t x1570 = -1;
static int16_t x1571 = INT16_MAX;
uint64_t x1576 = UINT64_MAX;
int32_t x1588 = INT32_MAX;
volatile int32_t t196 = 119;
static uint16_t x1591 = 13467U;
static volatile uint32_t x1596 = UINT32_MAX;
static int64_t x1597 = -1LL;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	volatile int64_t x4 = -1LL;

    t0 = ((x1|x2)/(x3<=x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -17649998179LL;
	static volatile uint8_t x6 = UINT8_MAX;
	static int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -666398197240083859LL;

    t1 = ((x5|x6)/(x7<=x8));

    if (t1 != -17649998081LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 99U;
	volatile int32_t t2 = 28888;

    t2 = ((x9|x10)/(x11<=x12));

    if (t2 != -2147483521) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = INT64_MAX;
	int8_t x15 = -1;

    t3 = ((x13|x14)/(x15<=x16));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	static uint64_t x26 = UINT64_MAX;
	uint64_t x28 = UINT64_MAX;

    t4 = ((x25|x26)/(x27<=x28));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = -469684LL;
	int32_t t5 = 0;

    t5 = ((x29|x30)/(x31<=x32));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	int16_t x40 = -1;

    t6 = ((x37|x38)/(x39<=x40));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x41 = UINT8_MAX;
	volatile uint16_t x42 = 926U;
	volatile int32_t x43 = INT32_MIN;
	static int16_t x44 = INT16_MAX;
	int32_t t7 = -92770144;

    t7 = ((x41|x42)/(x43<=x44));

    if (t7 != 1023) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x61 = INT8_MAX;
	int64_t x62 = 62569137431LL;
	volatile uint8_t x63 = 13U;
	int8_t x64 = INT8_MAX;
	int64_t t8 = 211041956763113331LL;

    t8 = ((x61|x62)/(x63<=x64));

    if (t8 != 62569137535LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x66 = -15381LL;
	volatile int32_t x67 = INT32_MIN;
	static uint32_t x68 = UINT32_MAX;
	int64_t t9 = 0LL;

    t9 = ((x65|x66)/(x67<=x68));

    if (t9 != -14337LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x74 = INT8_MIN;
	volatile int32_t x75 = INT32_MIN;
	uint16_t x76 = UINT16_MAX;
	int32_t t10 = -453663040;

    t10 = ((x73|x74)/(x75<=x76));

    if (t10 != -101) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x82 = UINT16_MAX;
	int64_t x83 = -1LL;
	uint8_t x84 = 8U;

    t11 = ((x81|x82)/(x83<=x84));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = INT16_MAX;
	uint16_t x86 = UINT16_MAX;
	int32_t x88 = INT32_MAX;
	volatile int32_t t12 = -9811;

    t12 = ((x85|x86)/(x87<=x88));

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x93 = 865U;
	int64_t x94 = -1LL;
	int16_t x95 = 1;
	uint64_t x96 = UINT64_MAX;

    t13 = ((x93|x94)/(x95<=x96));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x101 = -4195248865578985250LL;
	uint16_t x102 = 15895U;
	int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;
	static volatile int64_t t14 = 7610LL;

    t14 = ((x101|x102)/(x103<=x104));

    if (t14 != -4195248865578975521LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;

    t15 = ((x113|x114)/(x115<=x116));

    if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x127 = 4LLU;
	static volatile int64_t x128 = -1LL;
	volatile int32_t t16 = -25649;

    t16 = ((x125|x126)/(x127<=x128));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x129 = 0U;
	int8_t x130 = INT8_MIN;
	volatile int16_t x131 = INT16_MIN;
	uint16_t x132 = 10134U;
	int32_t t17 = -572;

    t17 = ((x129|x130)/(x131<=x132));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x137 = INT8_MAX;
	int8_t x138 = 1;
	uint64_t x139 = 458681674394LLU;
	int32_t x140 = INT32_MIN;
	static int32_t t18 = -3615979;

    t18 = ((x137|x138)/(x139<=x140));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x149 = INT16_MAX;
	int32_t x150 = -2187;
	uint32_t x151 = 149516U;
	volatile uint32_t x152 = 1480915671U;
	volatile int32_t t19 = 2205;

    t19 = ((x149|x150)/(x151<=x152));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x153 = 8;
	int64_t x154 = INT64_MIN;
	static int16_t x155 = -1;
	static volatile int64_t t20 = -14098609030763323LL;

    t20 = ((x153|x154)/(x155<=x156));

    if (t20 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x157 = 56930231LLU;
	static volatile int8_t x158 = INT8_MAX;
	int64_t x159 = -1LL;
	volatile uint64_t x160 = UINT64_MAX;
	static uint64_t t21 = 70937137641LLU;

    t21 = ((x157|x158)/(x159<=x160));

    if (t21 != 56930303LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x170 = -1;
	static int16_t x171 = -223;
	int32_t x172 = 201241860;
	static uint64_t t22 = UINT64_MAX;

    t22 = ((x169|x170)/(x171<=x172));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x189 = UINT64_MAX;
	int16_t x192 = -1;
	static uint64_t t23 = UINT64_MAX;

    t23 = ((x189|x190)/(x191<=x192));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x194 = 118097046U;
	uint64_t x196 = 473261146899LLU;

    t24 = ((x193|x194)/(x195<=x196));

    if (t24 != 118097151U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x201 = UINT8_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	volatile uint16_t x204 = UINT16_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = ((x201|x202)/(x203<=x204));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x209 = -1LL;
	int32_t x210 = INT32_MAX;
	int64_t x211 = -1LL;
	int32_t x212 = -1;
	int64_t t26 = -152382885LL;

    t26 = ((x209|x210)/(x211<=x212));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x234 = -1;
	uint32_t x235 = 59716U;
	int8_t x236 = -1;

    t27 = ((x233|x234)/(x235<=x236));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x253 = -1;
	volatile int32_t x254 = INT32_MAX;
	uint32_t x255 = 20268270U;
	static volatile int32_t x256 = INT32_MIN;

    t28 = ((x253|x254)/(x255<=x256));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x257 = 56U;
	int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	uint16_t x260 = 8U;

    t29 = ((x257|x258)/(x259<=x260));

    if (t29 != 4294934584U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x269 = -1;
	int8_t x270 = -21;
	int32_t x272 = -231642;
	static volatile int32_t t30 = 150934893;

    t30 = ((x269|x270)/(x271<=x272));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x274 = 55U;
	int8_t x275 = INT8_MIN;
	static volatile int32_t t31 = 126760;

    t31 = ((x273|x274)/(x275<=x276));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x289 = 12948464;
	uint64_t x290 = UINT64_MAX;
	uint32_t x291 = 3496U;
	int16_t x292 = INT16_MIN;
	uint64_t t32 = UINT64_MAX;

    t32 = ((x289|x290)/(x291<=x292));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x301 = INT64_MIN;
	uint16_t x303 = 0U;
	int8_t x304 = 0;
	int64_t t33 = 367LL;

    t33 = ((x301|x302)/(x303<=x304));

    if (t33 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x313 = 0U;
	int64_t x314 = INT64_MIN;
	int16_t x316 = INT16_MAX;
	int64_t t34 = INT64_MIN;

    t34 = ((x313|x314)/(x315<=x316));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	volatile int8_t x319 = -1;
	int32_t x320 = -1;

    t35 = ((x317|x318)/(x319<=x320));

    if (t35 != -32513) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x326 = INT16_MAX;
	int32_t x327 = -1770645;
	static int32_t x328 = 1204;

    t36 = ((x325|x326)/(x327<=x328));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x337 = INT32_MIN;
	static volatile uint8_t x338 = 1U;
	int64_t x339 = -2LL;
	int16_t x340 = -1;
	int32_t t37 = -22644;

    t37 = ((x337|x338)/(x339<=x340));

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x345 = 409313U;
	volatile int32_t x346 = INT32_MAX;
	uint32_t x347 = 118785U;
	int16_t x348 = -126;
	uint32_t t38 = 479106U;

    t38 = ((x345|x346)/(x347<=x348));

    if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x350 = 1843769287U;
	int16_t x351 = INT16_MIN;
	volatile uint32_t t39 = 10468293U;

    t39 = ((x349|x350)/(x351<=x352));

    if (t39 != 4294967239U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x353 = 1;
	int32_t x354 = -1;
	volatile uint64_t x355 = 664672291213LLU;
	static int64_t x356 = INT64_MIN;
	static int32_t t40 = 53855035;

    t40 = ((x353|x354)/(x355<=x356));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x357 = -1;
	uint8_t x358 = 0U;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 332151521LLU;

    t41 = ((x357|x358)/(x359<=x360));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x365 = 222008LLU;
	int32_t x366 = INT32_MAX;
	int16_t x367 = 2186;
	uint32_t x368 = UINT32_MAX;

    t42 = ((x365|x366)/(x367<=x368));

    if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x369 = INT16_MAX;
	volatile int8_t x370 = -1;
	int64_t x371 = INT64_MIN;
	static int8_t x372 = INT8_MIN;
	int32_t t43 = 4972432;

    t43 = ((x369|x370)/(x371<=x372));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	uint32_t x375 = 0U;
	static int16_t x376 = -1;
	int64_t t44 = 34272865604412307LL;

    t44 = ((x373|x374)/(x375<=x376));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x389 = INT64_MAX;
	volatile int32_t x390 = INT32_MAX;
	static uint8_t x391 = 1U;
	int64_t t45 = INT64_MAX;

    t45 = ((x389|x390)/(x391<=x392));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x393 = INT64_MIN;
	int64_t x394 = -1LL;
	int16_t x395 = -1;
	uint16_t x396 = 1U;
	volatile int64_t t46 = 3494172597685LL;

    t46 = ((x393|x394)/(x395<=x396));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x409 = 265468U;
	int64_t x411 = INT64_MIN;
	static uint8_t x412 = UINT8_MAX;

    t47 = ((x409|x410)/(x411<=x412));

    if (t47 != 4294937852U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x414 = INT32_MAX;
	int8_t x415 = -17;
	uint8_t x416 = 50U;
	int32_t t48 = 48;

    t48 = ((x413|x414)/(x415<=x416));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x437 = -207075LL;
	uint32_t x438 = UINT32_MAX;
	volatile int64_t x439 = INT64_MIN;
	static uint16_t x440 = 3736U;

    t49 = ((x437|x438)/(x439<=x440));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x441 = UINT8_MAX;
	static int64_t x442 = -111816938992097LL;
	int64_t t50 = 72LL;

    t50 = ((x441|x442)/(x443<=x444));

    if (t50 != -111816938991873LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x445 = INT16_MIN;
	static int32_t x446 = INT32_MIN;
	int32_t x447 = INT32_MIN;
	int8_t x448 = INT8_MAX;
	static int32_t t51 = -1;

    t51 = ((x445|x446)/(x447<=x448));

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x461 = 853379195102570LL;
	int64_t x462 = INT64_MIN;
	static int8_t x463 = 1;
	int64_t x464 = 7678999564039306LL;
	volatile int64_t t52 = -27352322LL;

    t52 = ((x461|x462)/(x463<=x464));

    if (t52 != -9222518657659673238LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x470 = 44U;
	uint64_t x471 = 7488464LLU;
	uint64_t x472 = 16731664200LLU;

    t53 = ((x469|x470)/(x471<=x472));

    if (t53 != 57395513727LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x475 = -1;
	static int32_t t54 = -3969558;

    t54 = ((x473|x474)/(x475<=x476));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x481 = INT16_MAX;
	static volatile int8_t x482 = 6;
	int16_t x483 = -4490;
	int32_t t55 = 211648362;

    t55 = ((x481|x482)/(x483<=x484));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x485 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	int32_t t56 = 77;

    t56 = ((x485|x486)/(x487<=x488));

    if (t56 != -21) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x489 = UINT32_MAX;
	uint32_t x490 = 1U;
	volatile int16_t x491 = 239;

    t57 = ((x489|x490)/(x491<=x492));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x497 = 1;
	int16_t x499 = INT16_MIN;
	volatile int64_t x500 = -1LL;
	volatile int32_t t58 = 127;

    t58 = ((x497|x498)/(x499<=x500));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x505 = INT32_MIN;
	static int32_t x506 = -30860;
	uint32_t x508 = 2067U;
	volatile int32_t t59 = 6;

    t59 = ((x505|x506)/(x507<=x508));

    if (t59 != -30860) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x510 = INT16_MIN;
	static int16_t x511 = -1;
	uint32_t x512 = UINT32_MAX;
	int32_t t60 = 18933;

    t60 = ((x509|x510)/(x511<=x512));

    if (t60 != -32641) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x514 = 47730583388768207LLU;
	int16_t x515 = -11;
	volatile int8_t x516 = -1;
	static uint64_t t61 = 373278LLU;

    t61 = ((x513|x514)/(x515<=x516));

    if (t61 != 47730583388768255LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x517 = -1;
	volatile int16_t x518 = -3;
	volatile int32_t t62 = -72487704;

    t62 = ((x517|x518)/(x519<=x520));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint16_t x525 = 5464U;
	int16_t x526 = -1;
	static int16_t x527 = INT16_MIN;
	int16_t x528 = -73;
	int32_t t63 = -19691158;

    t63 = ((x525|x526)/(x527<=x528));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x533 = -1;
	int8_t x534 = -3;
	static int8_t x535 = -1;
	int32_t t64 = 10032921;

    t64 = ((x533|x534)/(x535<=x536));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x537 = UINT16_MAX;
	uint16_t x538 = UINT16_MAX;
	static volatile int8_t x539 = INT8_MIN;
	int8_t x540 = -1;
	volatile int32_t t65 = -15373031;

    t65 = ((x537|x538)/(x539<=x540));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MIN;
	int32_t x559 = -84;
	int8_t x560 = 0;
	static int64_t t66 = -4805534696LL;

    t66 = ((x557|x558)/(x559<=x560));

    if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x566 = 3220430170347LLU;
	volatile uint64_t x567 = 303781225720679635LLU;
	int64_t x568 = INT64_MIN;
	uint64_t t67 = 524102511LLU;

    t67 = ((x565|x566)/(x567<=x568));

    if (t67 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x569 = 1916158U;
	uint8_t x570 = 2U;
	int64_t x572 = -1LL;
	static uint32_t t68 = 2U;

    t68 = ((x569|x570)/(x571<=x572));

    if (t68 != 1916158U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x573 = 99U;
	static int8_t x575 = -5;
	static uint8_t x576 = UINT8_MAX;
	static volatile uint32_t t69 = UINT32_MAX;

    t69 = ((x573|x574)/(x575<=x576));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x581 = INT16_MIN;
	uint8_t x582 = 83U;
	int64_t x583 = INT64_MIN;
	volatile int8_t x584 = -1;
	static int32_t t70 = -9;

    t70 = ((x581|x582)/(x583<=x584));

    if (t70 != -32685) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x585 = 0U;
	static int8_t x586 = INT8_MIN;
	volatile int32_t x587 = -1;
	int64_t x588 = 0LL;

    t71 = ((x585|x586)/(x587<=x588));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x590 = 2;
	int8_t x591 = INT8_MIN;
	volatile int32_t t72 = -179636128;

    t72 = ((x589|x590)/(x591<=x592));

    if (t72 != -145) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x593 = 5;
	int64_t x594 = -2574679727LL;
	static int8_t x595 = INT8_MIN;
	volatile int32_t x596 = INT32_MAX;
	int64_t t73 = -58907LL;

    t73 = ((x593|x594)/(x595<=x596));

    if (t73 != -2574679723LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int32_t t74 = -216;

    t74 = ((x605|x606)/(x607<=x608));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x629 = 22U;
	static uint64_t x630 = 2951139LLU;
	static volatile uint64_t x631 = 1997LLU;
	static int32_t x632 = -24054;
	volatile uint64_t t75 = 450173LLU;

    t75 = ((x629|x630)/(x631<=x632));

    if (t75 != 2951159LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x638 = INT32_MIN;
	volatile uint8_t x639 = 5U;
	uint16_t x640 = 293U;
	int64_t t76 = -3780186LL;

    t76 = ((x637|x638)/(x639<=x640));

    if (t76 != -2609890LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x649 = -1;
	static int8_t x650 = INT8_MAX;
	int32_t x651 = INT32_MIN;
	int16_t x652 = INT16_MAX;

    t77 = ((x649|x650)/(x651<=x652));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x658 = 0LL;
	int32_t x659 = -113906;
	volatile uint32_t x660 = UINT32_MAX;
	int64_t t78 = 305761579234LL;

    t78 = ((x657|x658)/(x659<=x660));

    if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x661 = UINT64_MAX;
	volatile int8_t x662 = -1;
	volatile uint8_t x664 = UINT8_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = ((x661|x662)/(x663<=x664));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x669 = -1;
	int16_t x670 = INT16_MIN;
	int8_t x671 = -1;
	volatile int32_t x672 = 2;
	static int32_t t80 = -3;

    t80 = ((x669|x670)/(x671<=x672));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x673 = 248;
	int64_t x674 = INT64_MAX;
	static uint64_t x675 = 5854LLU;
	uint64_t x676 = UINT64_MAX;
	volatile int64_t t81 = INT64_MAX;

    t81 = ((x673|x674)/(x675<=x676));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x686 = UINT64_MAX;
	int64_t x687 = INT64_MIN;
	int32_t x688 = -1;
	static volatile uint64_t t82 = UINT64_MAX;

    t82 = ((x685|x686)/(x687<=x688));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x698 = INT64_MIN;
	static volatile int64_t t83 = 3593698993200234LL;

    t83 = ((x697|x698)/(x699<=x700));

    if (t83 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x701 = UINT64_MAX;
	static int32_t x702 = 0;
	int64_t x704 = INT64_MAX;
	static volatile uint64_t t84 = UINT64_MAX;

    t84 = ((x701|x702)/(x703<=x704));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x705 = -1;
	int16_t x706 = -25;
	static uint16_t x707 = 1209U;
	uint32_t x708 = UINT32_MAX;
	static volatile int32_t t85 = -322488304;

    t85 = ((x705|x706)/(x707<=x708));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x709 = -1;
	static uint8_t x711 = 0U;
	volatile uint8_t x712 = 2U;
	static volatile int32_t t86 = 1022886516;

    t86 = ((x709|x710)/(x711<=x712));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x713 = 40U;
	int32_t x715 = INT32_MIN;
	static volatile int32_t x716 = INT32_MIN;
	volatile int32_t t87 = -1203168;

    t87 = ((x713|x714)/(x715<=x716));

    if (t87 != 41) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x726 = -3372148LL;
	uint64_t x727 = 10651053956LLU;
	int32_t x728 = INT32_MIN;

    t88 = ((x725|x726)/(x727<=x728));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x729 = INT16_MIN;
	volatile int32_t x730 = INT32_MIN;
	volatile uint32_t x732 = UINT32_MAX;
	static volatile int32_t t89 = 1;

    t89 = ((x729|x730)/(x731<=x732));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x737 = INT8_MIN;
	uint16_t x738 = UINT16_MAX;
	static int16_t x739 = INT16_MIN;

    t90 = ((x737|x738)/(x739<=x740));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x741 = 109716137U;
	uint32_t x742 = UINT32_MAX;
	uint64_t x743 = 19617LLU;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = ((x741|x742)/(x743<=x744));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x749 = 0;
	static int32_t x750 = INT32_MIN;
	uint64_t x751 = 123LLU;
	int16_t x752 = INT16_MIN;
	int32_t t92 = INT32_MIN;

    t92 = ((x749|x750)/(x751<=x752));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x758 = UINT64_MAX;
	int16_t x759 = -1;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = ((x757|x758)/(x759<=x760));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x762 = INT32_MIN;
	int64_t x763 = INT64_MAX;
	static volatile int64_t x764 = INT64_MAX;
	volatile int32_t t94 = INT32_MIN;

    t94 = ((x761|x762)/(x763<=x764));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x765 = INT16_MIN;
	static int32_t x766 = INT32_MIN;
	static int32_t x767 = -1;
	int32_t t95 = 53739836;

    t95 = ((x765|x766)/(x767<=x768));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x774 = 34578247U;
	int64_t x775 = INT64_MIN;
	int32_t x776 = INT32_MIN;

    t96 = ((x773|x774)/(x775<=x776));

    if (t96 != 34578247U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x777 = -1;
	uint64_t x778 = 54239019LLU;
	int32_t x779 = INT32_MIN;
	volatile int32_t x780 = INT32_MAX;

    t97 = ((x777|x778)/(x779<=x780));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x786 = -1;
	volatile int64_t x787 = INT64_MIN;
	volatile int32_t t98 = 20497049;

    t98 = ((x785|x786)/(x787<=x788));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x810 = 6U;
	int64_t x811 = -1LL;
	int16_t x812 = INT16_MAX;
	static volatile uint32_t t99 = 533967031U;

    t99 = ((x809|x810)/(x811<=x812));

    if (t99 != 4294944711U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x817 = 0U;
	int32_t x818 = INT32_MAX;
	static uint32_t x819 = 47811187U;
	int8_t x820 = INT8_MIN;
	int32_t t100 = INT32_MAX;

    t100 = ((x817|x818)/(x819<=x820));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x833 = INT32_MAX;
	volatile int32_t x834 = -1;
	static int64_t x835 = INT64_MIN;

    t101 = ((x833|x834)/(x835<=x836));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x845 = 113964121892LLU;
	static uint16_t x846 = 14483U;
	volatile uint64_t t102 = 1508040776957LLU;

    t102 = ((x845|x846)/(x847<=x848));

    if (t102 != 113964122039LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x849 = INT16_MIN;
	int32_t x850 = -1;
	static volatile int64_t x851 = INT64_MIN;

    t103 = ((x849|x850)/(x851<=x852));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x861 = INT8_MAX;
	int8_t x862 = 20;
	volatile int16_t x864 = -17;

    t104 = ((x861|x862)/(x863<=x864));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x874 = INT8_MAX;
	int16_t x875 = 31;
	uint8_t x876 = UINT8_MAX;
	static volatile int32_t t105 = 21;

    t105 = ((x873|x874)/(x875<=x876));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x877 = INT16_MIN;
	int16_t x879 = INT16_MIN;
	uint8_t x880 = UINT8_MAX;
	int64_t t106 = 7356LL;

    t106 = ((x877|x878)/(x879<=x880));

    if (t106 != -17791LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x881 = UINT32_MAX;
	volatile uint16_t x883 = 5U;
	volatile int16_t x884 = INT16_MAX;
	static uint64_t t107 = 3LLU;

    t107 = ((x881|x882)/(x883<=x884));

    if (t107 != 330712481791LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x897 = 11996;
	int8_t x898 = 1;
	uint8_t x899 = 0U;
	int8_t x900 = 0;
	volatile int32_t t108 = -558202101;

    t108 = ((x897|x898)/(x899<=x900));

    if (t108 != 11997) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x914 = 3U;
	volatile int32_t x915 = INT32_MIN;
	int32_t x916 = INT32_MAX;
	int32_t t109 = 179803796;

    t109 = ((x913|x914)/(x915<=x916));

    if (t109 != 47) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x917 = INT64_MIN;
	int8_t x918 = INT8_MIN;
	static int64_t x920 = 39192014LL;
	int64_t t110 = -126088LL;

    t110 = ((x917|x918)/(x919<=x920));

    if (t110 != -128LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x921 = 43U;
	int8_t x922 = INT8_MIN;
	int16_t x923 = -253;
	volatile uint32_t t111 = 59U;

    t111 = ((x921|x922)/(x923<=x924));

    if (t111 != 4294967211U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x929 = INT16_MIN;
	uint16_t x930 = 30649U;
	int32_t t112 = 4850792;

    t112 = ((x929|x930)/(x931<=x932));

    if (t112 != -2119) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x942 = INT32_MAX;
	volatile int16_t x943 = INT16_MAX;
	int64_t x944 = 3887967582573873LL;
	volatile uint64_t t113 = 2LLU;

    t113 = ((x941|x942)/(x943<=x944));

    if (t113 != 134101763883007LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x950 = -1;
	int64_t x951 = INT64_MIN;
	static int32_t t114 = 25116711;

    t114 = ((x949|x950)/(x951<=x952));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x961 = -1;
	static int16_t x962 = INT16_MIN;
	volatile int16_t x964 = -1;
	static int32_t t115 = -96;

    t115 = ((x961|x962)/(x963<=x964));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x965 = INT16_MIN;
	int8_t x966 = -1;
	volatile int32_t x967 = -1;
	volatile int64_t x968 = -1LL;
	int32_t t116 = 202929;

    t116 = ((x965|x966)/(x967<=x968));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x973 = UINT8_MAX;
	volatile int16_t x974 = INT16_MIN;
	static uint32_t x975 = UINT32_MAX;
	static int32_t x976 = -1;
	volatile int32_t t117 = 796;

    t117 = ((x973|x974)/(x975<=x976));

    if (t117 != -32513) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x981 = INT8_MIN;
	int64_t x982 = -1LL;
	static int16_t x983 = INT16_MIN;
	int16_t x984 = 6812;
	static int64_t t118 = 1903014544162102LL;

    t118 = ((x981|x982)/(x983<=x984));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x989 = 7459770389809LLU;
	static volatile int32_t x990 = -1;
	static int16_t x991 = INT16_MIN;
	volatile int16_t x992 = INT16_MIN;

    t119 = ((x989|x990)/(x991<=x992));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x993 = 13;
	uint64_t x994 = 942963LLU;
	int64_t x995 = INT64_MIN;
	int32_t x996 = INT32_MIN;
	static uint64_t t120 = 2840987LLU;

    t120 = ((x993|x994)/(x995<=x996));

    if (t120 != 942975LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x997 = -1;
	int32_t x998 = 4525;
	volatile int16_t x1000 = INT16_MAX;
	int32_t t121 = 6981758;

    t121 = ((x997|x998)/(x999<=x1000));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1001 = INT32_MAX;
	int32_t x1002 = INT32_MIN;
	int8_t x1003 = -1;
	uint16_t x1004 = UINT16_MAX;
	int32_t t122 = -3134704;

    t122 = ((x1001|x1002)/(x1003<=x1004));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1005 = -7716275LL;
	volatile int16_t x1006 = -24;
	static int32_t x1007 = -155433364;
	int64_t t123 = -7377785475LL;

    t123 = ((x1005|x1006)/(x1007<=x1008));

    if (t123 != -19LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x1013 = INT16_MAX;
	int16_t x1015 = -1;
	int32_t t124 = 2;

    t124 = ((x1013|x1014)/(x1015<=x1016));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1025 = 3000U;
	int32_t x1026 = INT32_MAX;
	int64_t x1027 = -6907390493234742LL;
	uint16_t x1028 = 3U;

    t125 = ((x1025|x1026)/(x1027<=x1028));

    if (t125 != INT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x1033 = UINT32_MAX;
	static uint16_t x1034 = 168U;
	static volatile int16_t x1035 = -1;
	static int64_t x1036 = 0LL;

    t126 = ((x1033|x1034)/(x1035<=x1036));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1042 = -1;
	static volatile int8_t x1043 = -1;
	int16_t x1044 = -1;
	static int32_t t127 = -47200;

    t127 = ((x1041|x1042)/(x1043<=x1044));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1045 = UINT64_MAX;
	int32_t x1047 = INT32_MIN;
	int32_t x1048 = 35;
	uint64_t t128 = UINT64_MAX;

    t128 = ((x1045|x1046)/(x1047<=x1048));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1062 = -1LL;
	static uint8_t x1064 = 27U;
	int64_t t129 = -7660536LL;

    t129 = ((x1061|x1062)/(x1063<=x1064));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x1077 = UINT32_MAX;
	int64_t x1078 = INT64_MIN;
	uint64_t x1079 = 11641594706095LLU;
	int8_t x1080 = INT8_MIN;
	volatile int64_t t130 = 8LL;

    t130 = ((x1077|x1078)/(x1079<=x1080));

    if (t130 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x1081 = 8U;
	int16_t x1082 = 3;
	uint16_t x1084 = 229U;

    t131 = ((x1081|x1082)/(x1083<=x1084));

    if (t131 != 11) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1097 = INT8_MAX;
	volatile int32_t x1098 = 29;
	int8_t x1100 = INT8_MIN;
	static volatile int32_t t132 = 0;

    t132 = ((x1097|x1098)/(x1099<=x1100));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x1106 = INT64_MAX;
	int64_t x1107 = INT64_MIN;
	int32_t x1108 = -2;
	static int64_t t133 = 30178473LL;

    t133 = ((x1105|x1106)/(x1107<=x1108));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1109 = INT64_MIN;
	uint32_t x1111 = UINT32_MAX;
	static volatile int16_t x1112 = -1;
	int64_t t134 = 1539LL;

    t134 = ((x1109|x1110)/(x1111<=x1112));

    if (t134 != -2147483648LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x1121 = INT32_MIN;
	static int32_t x1123 = -1;
	int16_t x1124 = 7880;
	volatile int32_t t135 = 2;

    t135 = ((x1121|x1122)/(x1123<=x1124));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1129 = UINT64_MAX;
	static uint8_t x1130 = 2U;
	int64_t x1131 = INT64_MIN;
	int16_t x1132 = 31;
	uint64_t t136 = UINT64_MAX;

    t136 = ((x1129|x1130)/(x1131<=x1132));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x1137 = INT16_MIN;
	int64_t x1139 = INT64_MIN;
	volatile int16_t x1140 = INT16_MAX;
	static volatile int32_t t137 = 6854;

    t137 = ((x1137|x1138)/(x1139<=x1140));

    if (t137 != -32758) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x1142 = 3;
	volatile uint64_t x1143 = 513583LLU;
	volatile uint64_t x1144 = 8780076801LLU;
	volatile int32_t t138 = INT32_MAX;

    t138 = ((x1141|x1142)/(x1143<=x1144));

    if (t138 != INT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1149 = 9U;
	uint32_t x1150 = UINT32_MAX;
	volatile int16_t x1151 = INT16_MIN;
	static uint64_t x1152 = UINT64_MAX;
	uint32_t t139 = UINT32_MAX;

    t139 = ((x1149|x1150)/(x1151<=x1152));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1153 = INT8_MIN;
	volatile int8_t x1154 = INT8_MIN;
	volatile uint32_t x1155 = 108U;
	int32_t t140 = 14042;

    t140 = ((x1153|x1154)/(x1155<=x1156));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x1165 = -127;
	volatile int64_t x1166 = 339544023557178LL;
	volatile int64_t x1167 = -3245996468LL;
	uint32_t x1168 = UINT32_MAX;
	volatile int64_t t141 = -2729890707007LL;

    t141 = ((x1165|x1166)/(x1167<=x1168));

    if (t141 != -69LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1169 = -1;
	int16_t x1170 = INT16_MIN;
	int8_t x1171 = 12;
	uint32_t x1172 = UINT32_MAX;

    t142 = ((x1169|x1170)/(x1171<=x1172));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1173 = UINT32_MAX;
	uint8_t x1174 = 3U;
	static volatile uint16_t x1175 = UINT16_MAX;
	uint32_t t143 = UINT32_MAX;

    t143 = ((x1173|x1174)/(x1175<=x1176));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x1177 = 114U;
	uint64_t x1178 = 280290958702648887LLU;
	volatile int32_t x1179 = -3259;
	uint16_t x1180 = UINT16_MAX;
	uint64_t t144 = 56094981255LLU;

    t144 = ((x1177|x1178)/(x1179<=x1180));

    if (t144 != 280290958702648951LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1185 = INT16_MIN;
	int16_t x1186 = 5;
	static int64_t x1187 = -59242123931517907LL;
	uint8_t x1188 = 2U;
	int32_t t145 = -416;

    t145 = ((x1185|x1186)/(x1187<=x1188));

    if (t145 != -32763) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1189 = 36;
	int8_t x1190 = INT8_MIN;
	static int64_t x1192 = 262318988832LL;
	int32_t t146 = 620405806;

    t146 = ((x1189|x1190)/(x1191<=x1192));

    if (t146 != -92) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1194 = INT16_MIN;
	int64_t x1195 = INT64_MIN;
	static int64_t x1196 = -1228154652330LL;
	static volatile uint32_t t147 = 204419700U;

    t147 = ((x1193|x1194)/(x1195<=x1196));

    if (t147 != 4294938979U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1205 = 1U;
	int32_t x1206 = INT32_MIN;
	int8_t x1208 = -1;
	volatile int32_t t148 = -829770222;

    t148 = ((x1205|x1206)/(x1207<=x1208));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x1209 = INT64_MIN;
	static int64_t x1210 = 11863LL;
	int32_t x1211 = -1927632;
	static volatile int64_t t149 = 3978894122929026100LL;

    t149 = ((x1209|x1210)/(x1211<=x1212));

    if (t149 != -9223372036854763945LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x1217 = 1U;
	static volatile uint8_t x1219 = UINT8_MAX;
	int64_t x1220 = 34770536856872698LL;
	static volatile uint32_t t150 = 101U;

    t150 = ((x1217|x1218)/(x1219<=x1220));

    if (t150 != 11U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x1228 = 1U;
	volatile int64_t t151 = INT64_MAX;

    t151 = ((x1225|x1226)/(x1227<=x1228));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1229 = INT8_MIN;
	static volatile int64_t x1230 = -1LL;
	volatile int32_t x1231 = INT32_MIN;
	int16_t x1232 = 367;
	int64_t t152 = -7982122LL;

    t152 = ((x1229|x1230)/(x1231<=x1232));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1233 = INT64_MAX;
	int16_t x1234 = 12309;
	uint8_t x1235 = 10U;
	uint16_t x1236 = 10673U;
	int64_t t153 = INT64_MAX;

    t153 = ((x1233|x1234)/(x1235<=x1236));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1238 = INT16_MIN;
	int32_t x1239 = INT32_MIN;

    t154 = ((x1237|x1238)/(x1239<=x1240));

    if (t154 != -32733) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1241 = -127;
	uint64_t x1242 = 34997970045879LLU;
	int32_t x1243 = -92935848;
	uint64_t t155 = 2696779LLU;

    t155 = ((x1241|x1242)/(x1243<=x1244));

    if (t155 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x1246 = -88;
	int16_t x1247 = INT16_MIN;
	int8_t x1248 = 51;
	volatile int32_t t156 = 29628;

    t156 = ((x1245|x1246)/(x1247<=x1248));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1261 = 19035U;
	uint8_t x1262 = 1U;
	uint32_t x1263 = 1U;
	int16_t x1264 = INT16_MIN;

    t157 = ((x1261|x1262)/(x1263<=x1264));

    if (t157 != 19035U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x1277 = INT64_MIN;
	static int32_t x1279 = INT32_MIN;
	uint16_t x1280 = UINT16_MAX;

    t158 = ((x1277|x1278)/(x1279<=x1280));

    if (t158 != -9223372036854769251LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1281 = -1;
	static uint8_t x1282 = 16U;
	volatile uint32_t x1284 = 3280997U;
	int32_t t159 = 6;

    t159 = ((x1281|x1282)/(x1283<=x1284));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x1291 = INT32_MIN;
	static volatile int16_t x1292 = INT16_MAX;
	volatile int32_t t160 = 1033215850;

    t160 = ((x1289|x1290)/(x1291<=x1292));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x1293 = 1979U;
	static int16_t x1294 = -1;
	int8_t x1295 = 6;
	uint32_t t161 = UINT32_MAX;

    t161 = ((x1293|x1294)/(x1295<=x1296));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1297 = INT16_MAX;
	int32_t x1298 = INT32_MAX;
	uint32_t x1299 = 2U;
	int32_t x1300 = -1;

    t162 = ((x1297|x1298)/(x1299<=x1300));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1301 = 4068586U;
	uint64_t x1302 = 95LLU;
	int8_t x1303 = -1;
	volatile uint64_t t163 = 7248729LLU;

    t163 = ((x1301|x1302)/(x1303<=x1304));

    if (t163 != 4068607LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1305 = 2700LLU;
	volatile int32_t x1306 = INT32_MAX;
	int32_t x1307 = -226228085;
	int32_t x1308 = 9234;
	uint64_t t164 = 13LLU;

    t164 = ((x1305|x1306)/(x1307<=x1308));

    if (t164 != 2147483647LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1326 = INT64_MIN;
	int8_t x1327 = 3;
	static volatile int8_t x1328 = 38;
	int64_t t165 = -37329697297089LL;

    t165 = ((x1325|x1326)/(x1327<=x1328));

    if (t165 != -9223372036796877769LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1337 = INT64_MIN;
	volatile int64_t x1338 = INT64_MIN;
	uint32_t x1339 = 1U;
	volatile uint8_t x1340 = 3U;
	int64_t t166 = INT64_MIN;

    t166 = ((x1337|x1338)/(x1339<=x1340));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1341 = 40309LL;
	static volatile uint16_t x1342 = UINT16_MAX;
	static int64_t x1343 = -1LL;
	static uint8_t x1344 = 53U;
	volatile int64_t t167 = 100999750852LL;

    t167 = ((x1341|x1342)/(x1343<=x1344));

    if (t167 != 65535LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1349 = 0U;
	int16_t x1351 = 36;
	static volatile uint64_t x1352 = UINT64_MAX;
	int32_t t168 = -192;

    t168 = ((x1349|x1350)/(x1351<=x1352));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x1354 = 1829944965287LL;
	uint32_t x1355 = 51U;
	uint8_t x1356 = UINT8_MAX;
	static volatile int64_t t169 = -34051LL;

    t169 = ((x1353|x1354)/(x1355<=x1356));

    if (t169 != 1829944965287LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x1357 = 0;
	uint16_t x1358 = UINT16_MAX;
	int64_t x1359 = -41464LL;
	int16_t x1360 = INT16_MAX;

    t170 = ((x1357|x1358)/(x1359<=x1360));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1377 = INT32_MIN;
	int8_t x1378 = INT8_MIN;
	int8_t x1379 = -1;
	volatile int64_t x1380 = INT64_MAX;
	int32_t t171 = 7169365;

    t171 = ((x1377|x1378)/(x1379<=x1380));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1381 = 1U;
	volatile int16_t x1382 = INT16_MAX;

    t172 = ((x1381|x1382)/(x1383<=x1384));

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x1394 = 1147141107U;
	int64_t x1395 = INT64_MIN;
	static uint64_t t173 = UINT64_MAX;

    t173 = ((x1393|x1394)/(x1395<=x1396));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1397 = INT16_MIN;
	uint64_t x1399 = 1012046486LLU;
	static volatile int8_t x1400 = INT8_MIN;
	static volatile int32_t t174 = -9;

    t174 = ((x1397|x1398)/(x1399<=x1400));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1402 = -3572;
	static int64_t x1403 = INT64_MIN;
	static uint32_t x1404 = UINT32_MAX;
	int32_t t175 = 116960792;

    t175 = ((x1401|x1402)/(x1403<=x1404));

    if (t175 != -3571) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1406 = -1;
	static int32_t x1408 = -1;
	int64_t t176 = 335589744LL;

    t176 = ((x1405|x1406)/(x1407<=x1408));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1413 = INT8_MAX;
	uint8_t x1414 = 3U;
	volatile uint8_t x1415 = 0U;
	uint32_t x1416 = 89697910U;

    t177 = ((x1413|x1414)/(x1415<=x1416));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1417 = INT16_MIN;
	int8_t x1418 = 26;
	int64_t x1420 = INT64_MAX;
	static int32_t t178 = -451074747;

    t178 = ((x1417|x1418)/(x1419<=x1420));

    if (t178 != -32742) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1430 = INT8_MAX;
	int64_t x1431 = -86589622573033043LL;
	int8_t x1432 = INT8_MIN;
	volatile int64_t t179 = INT64_MAX;

    t179 = ((x1429|x1430)/(x1431<=x1432));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1441 = INT8_MIN;
	static int16_t x1443 = 20;
	int32_t x1444 = 172;
	int32_t t180 = 30;

    t180 = ((x1441|x1442)/(x1443<=x1444));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1465 = 1U;
	static uint16_t x1467 = 358U;
	static int32_t x1468 = 1771058;

    t181 = ((x1465|x1466)/(x1467<=x1468));

    if (t181 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1469 = -1LL;
	int8_t x1470 = -1;
	static int64_t t182 = -2691LL;

    t182 = ((x1469|x1470)/(x1471<=x1472));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1485 = UINT64_MAX;
	int32_t x1486 = INT32_MIN;
	uint64_t x1487 = UINT64_MAX;
	int64_t x1488 = -1LL;
	uint64_t t183 = UINT64_MAX;

    t183 = ((x1485|x1486)/(x1487<=x1488));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1489 = INT8_MAX;
	volatile int32_t x1490 = INT32_MIN;
	int8_t x1492 = -1;
	volatile int32_t t184 = -723;

    t184 = ((x1489|x1490)/(x1491<=x1492));

    if (t184 != -2147483521) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1493 = INT8_MIN;
	uint8_t x1494 = UINT8_MAX;
	int32_t x1495 = 126;
	uint16_t x1496 = 374U;
	int32_t t185 = -7;

    t185 = ((x1493|x1494)/(x1495<=x1496));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1497 = INT64_MAX;
	int16_t x1498 = -26;
	int64_t x1499 = INT64_MIN;
	uint8_t x1500 = UINT8_MAX;
	volatile int64_t t186 = -110056351970760LL;

    t186 = ((x1497|x1498)/(x1499<=x1500));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x1501 = 5U;
	int32_t x1502 = -164244662;
	int8_t x1504 = -1;
	volatile int32_t t187 = -9907;

    t187 = ((x1501|x1502)/(x1503<=x1504));

    if (t187 != -164244657) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1510 = INT8_MIN;
	volatile uint8_t x1511 = 0U;
	static uint8_t x1512 = 7U;
	int32_t t188 = 3984;

    t188 = ((x1509|x1510)/(x1511<=x1512));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1513 = 7679U;
	static int32_t x1514 = INT32_MAX;
	int32_t x1515 = INT32_MIN;
	int16_t x1516 = INT16_MIN;
	uint32_t t189 = 33769U;

    t189 = ((x1513|x1514)/(x1515<=x1516));

    if (t189 != 2147483647U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1525 = UINT8_MAX;
	static int32_t x1526 = INT32_MIN;
	int8_t x1527 = INT8_MIN;
	int16_t x1528 = INT16_MAX;

    t190 = ((x1525|x1526)/(x1527<=x1528));

    if (t190 != -2147483393) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1529 = 53920;
	static int64_t x1530 = INT64_MAX;
	int8_t x1531 = INT8_MIN;
	uint16_t x1532 = 78U;
	volatile int64_t t191 = INT64_MAX;

    t191 = ((x1529|x1530)/(x1531<=x1532));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1544 = UINT64_MAX;
	volatile int32_t t192 = 354;

    t192 = ((x1541|x1542)/(x1543<=x1544));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x1569 = 195U;
	volatile uint64_t x1572 = UINT64_MAX;
	static int32_t t193 = 15977;

    t193 = ((x1569|x1570)/(x1571<=x1572));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1573 = -1;
	static int16_t x1574 = -56;
	int8_t x1575 = 1;
	int32_t t194 = -6528;

    t194 = ((x1573|x1574)/(x1575<=x1576));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1581 = INT64_MAX;
	uint16_t x1582 = 286U;
	static int8_t x1583 = INT8_MIN;
	int16_t x1584 = -14;
	int64_t t195 = INT64_MAX;

    t195 = ((x1581|x1582)/(x1583<=x1584));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1585 = INT8_MIN;
	static int16_t x1586 = INT16_MIN;
	static uint64_t x1587 = 3310LLU;

    t196 = ((x1585|x1586)/(x1587<=x1588));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1589 = -78920;
	uint8_t x1590 = UINT8_MAX;
	volatile int64_t x1592 = INT64_MAX;
	volatile int32_t t197 = -529722498;

    t197 = ((x1589|x1590)/(x1591<=x1592));

    if (t197 != -78849) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1593 = -1;
	static volatile int64_t x1594 = INT64_MIN;
	int16_t x1595 = INT16_MIN;
	volatile int64_t t198 = 85859230466LL;

    t198 = ((x1593|x1594)/(x1595<=x1596));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1598 = 63U;
	int8_t x1599 = INT8_MIN;
	int8_t x1600 = INT8_MAX;
	volatile int64_t t199 = 391232LL;

    t199 = ((x1597|x1598)/(x1599<=x1600));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

