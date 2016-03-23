
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

static int64_t x2 = INT64_MAX;
volatile int32_t x3 = INT32_MIN;
volatile int8_t x4 = 1;
int32_t t0 = 4;
volatile int8_t x10 = INT8_MIN;
int32_t x11 = -7060742;
int64_t t1 = 46101139827684773LL;
int32_t t2 = 0;
int32_t x33 = INT32_MAX;
int8_t x34 = INT8_MIN;
uint16_t x93 = 5198U;
volatile int8_t x94 = INT8_MAX;
int32_t x98 = INT32_MAX;
int8_t x108 = INT8_MIN;
volatile int64_t x115 = INT64_MAX;
static int64_t x116 = -4472067245540301LL;
uint16_t x120 = UINT16_MAX;
int64_t x122 = 83719241LL;
volatile int64_t x125 = 309LL;
int16_t x131 = 4;
volatile int16_t x139 = INT16_MIN;
int32_t x140 = INT32_MIN;
volatile int8_t x147 = -1;
volatile int16_t x178 = -1;
static int16_t x183 = 0;
volatile int64_t t22 = 193328417505862LL;
int8_t x192 = INT8_MAX;
static volatile int32_t t23 = 1;
volatile int64_t x203 = INT64_MAX;
volatile int32_t t24 = 1318210;
int32_t x205 = 575096036;
uint32_t x209 = 437218U;
int16_t x212 = INT16_MIN;
uint32_t x225 = 2U;
int32_t x228 = 406922233;
volatile uint16_t x245 = UINT16_MAX;
volatile int32_t t31 = 2557;
static uint32_t x263 = 3335U;
static int64_t x271 = INT64_MAX;
volatile uint32_t x272 = 158U;
volatile uint64_t t36 = 8796908425678562592LLU;
static volatile int32_t x334 = -1;
static int32_t x335 = -1;
uint64_t t41 = 955661783101LLU;
static uint64_t x338 = 65905939520646LLU;
uint8_t x354 = 19U;
int8_t x363 = -1;
volatile int64_t t47 = -249557LL;
volatile int8_t x379 = INT8_MIN;
int16_t x387 = INT16_MIN;
static uint16_t x389 = 10484U;
uint32_t x391 = UINT32_MAX;
uint64_t x392 = 0LLU;
static uint8_t x405 = 12U;
uint8_t x413 = 44U;
static volatile int64_t x414 = -1LL;
static volatile int64_t t55 = 206788365LL;
int8_t x424 = -1;
uint64_t x425 = UINT64_MAX;
uint32_t x432 = 3U;
volatile uint64_t t60 = 3642709LLU;
int8_t x460 = INT8_MAX;
int8_t x486 = INT8_MIN;
static uint16_t x487 = 606U;
uint32_t x493 = 10618153U;
uint8_t x497 = UINT8_MAX;
int16_t x498 = 13650;
static int32_t x499 = -3175;
int8_t x502 = -7;
int32_t x517 = INT32_MAX;
int32_t x520 = -8399;
int32_t t71 = 4104529;
static volatile int32_t t72 = 10300;
uint8_t x548 = 18U;
static uint32_t x554 = 468U;
int64_t x556 = 214671LL;
uint64_t x573 = 278196833LLU;
int16_t x576 = INT16_MAX;
int64_t x592 = 29396LL;
static volatile uint64_t t80 = 148793202143LLU;
volatile int32_t x605 = 1819452;
int8_t x609 = 6;
uint64_t x612 = 200LLU;
uint64_t t82 = 370650409LLU;
int64_t x618 = INT64_MIN;
volatile int16_t x626 = 107;
int8_t x632 = -1;
int64_t x644 = -384789862825LL;
int16_t x648 = INT16_MAX;
uint64_t t89 = 90747637449LLU;
int64_t x650 = INT64_MIN;
static int16_t x667 = 13010;
uint64_t x668 = UINT64_MAX;
int8_t x672 = -3;
int64_t t94 = 0LL;
uint16_t x681 = 14106U;
uint8_t x700 = 0U;
uint64_t t99 = 3778677852598069610LLU;
int32_t x714 = INT32_MIN;
volatile int64_t t100 = -61277238LL;
int32_t x719 = -1;
volatile uint64_t t102 = 348461661941LLU;
static uint64_t x737 = 994310LLU;
volatile int16_t x739 = INT16_MIN;
static int32_t x766 = 166107126;
int8_t x770 = INT8_MAX;
volatile uint32_t t109 = 1U;
uint8_t x777 = 2U;
int32_t t110 = -15513382;
int16_t x783 = INT16_MIN;
int8_t x786 = INT8_MIN;
volatile int64_t t113 = -1030949LL;
volatile uint64_t x802 = 7184382674522137573LLU;
volatile int64_t x804 = INT64_MIN;
static int32_t x806 = 168368261;
uint64_t x807 = 60155279LLU;
int8_t x808 = 0;
int64_t x847 = 1409399LL;
static uint32_t x848 = 1716067093U;
static int8_t x856 = -11;
int64_t x864 = -1LL;
static volatile int32_t x866 = INT32_MAX;
uint64_t t125 = 1507594878074330148LLU;
volatile int32_t t126 = -3;
uint32_t x875 = 10U;
uint16_t x882 = UINT16_MAX;
static int32_t x890 = -1;
static int32_t x903 = -1;
volatile int8_t x908 = INT8_MIN;
int64_t x910 = INT64_MAX;
uint16_t x915 = 1U;
static volatile int16_t x926 = 457;
int32_t t135 = 0;
uint64_t t136 = 481310165779LLU;
static int32_t x956 = 1;
static volatile uint64_t t137 = 20568LLU;
volatile int64_t x961 = INT64_MAX;
static int32_t x962 = INT32_MAX;
static int32_t x964 = -1;
static int64_t x968 = -1LL;
int32_t t143 = 713;
int32_t x990 = INT32_MIN;
int16_t x1001 = INT16_MAX;
volatile uint64_t t145 = 363304950LLU;
volatile int32_t t146 = 24348404;
uint64_t x1036 = UINT64_MAX;
int16_t x1047 = -4482;
int32_t x1056 = 29;
volatile int64_t t156 = -97420091277LL;
int32_t x1067 = INT32_MAX;
int16_t x1068 = 49;
uint16_t x1073 = 14U;
static int64_t x1075 = 121201LL;
int16_t x1084 = -1;
int8_t x1098 = INT8_MAX;
static uint32_t x1100 = 47U;
uint64_t x1101 = 1117010655688LLU;
static volatile uint32_t t163 = 41U;
uint8_t x1111 = UINT8_MAX;
static uint8_t x1125 = UINT8_MAX;
static uint16_t x1127 = UINT16_MAX;
static volatile int64_t x1128 = INT64_MAX;
static uint32_t x1131 = UINT32_MAX;
volatile int16_t x1146 = INT16_MIN;
static int8_t x1152 = -1;
static uint8_t x1154 = 0U;
int32_t x1156 = INT32_MAX;
volatile uint8_t x1171 = 26U;
static volatile int64_t t172 = 402905LL;
uint64_t x1176 = 1496597LLU;
static int64_t x1196 = INT64_MIN;
int8_t x1202 = -17;
uint16_t x1203 = 192U;
volatile uint64_t t177 = 295140174460LLU;
int64_t x1216 = -31866831315171549LL;
int16_t x1226 = 101;
static uint64_t x1233 = 44653LLU;
uint16_t x1234 = UINT16_MAX;
uint64_t t181 = 498613814535469008LLU;
uint32_t x1253 = UINT32_MAX;
int8_t x1254 = 13;
uint8_t x1277 = 0U;
uint32_t t190 = 4572U;
volatile uint64_t x1322 = UINT64_MAX;
uint32_t x1323 = 113113U;
uint8_t x1324 = 0U;
int16_t x1340 = 436;
volatile uint32_t t193 = 805U;
uint16_t x1344 = UINT16_MAX;
int64_t x1382 = -1LL;
volatile uint32_t x1383 = 918764238U;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;

    t0 = ((x1>>(x2<=x3))^x4);

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 61U;
	static int64_t x12 = INT64_MIN;

    t1 = ((x9>>(x10<=x11))^x12);

    if (t1 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x21 = 491U;
	static volatile uint64_t x22 = UINT64_MAX;
	static int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;

    t2 = ((x21>>(x22<=x23))^x24);

    if (t2 != -405) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x25 = 1640U;
	static volatile uint16_t x26 = 0U;
	uint32_t x27 = UINT32_MAX;
	uint32_t x28 = 436108911U;
	uint32_t t3 = 6058U;

    t3 = ((x25>>(x26<=x27))^x28);

    if (t3 != 436108635U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x35 = -1;
	volatile uint64_t x36 = 224492LLU;
	uint64_t t4 = 32479798321636LLU;

    t4 = ((x33>>(x34<=x35))^x36);

    if (t4 != 1073517331LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x37 = 3871799496363917LLU;
	int32_t x38 = -1;
	int32_t x39 = -1;
	uint8_t x40 = 32U;
	volatile uint64_t t5 = 1286LLU;

    t5 = ((x37>>(x38<=x39))^x40);

    if (t5 != 1935899748181990LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x49 = INT8_MAX;
	static volatile int32_t x50 = INT32_MAX;
	uint64_t x51 = UINT64_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t6 = 1819631;

    t6 = ((x49>>(x50<=x51))^x52);

    if (t6 != 65472) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x69 = 2U;
	int8_t x70 = -1;
	int64_t x71 = INT64_MIN;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t7 = 145121993;

    t7 = ((x69>>(x70<=x71))^x72);

    if (t7 != -126) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x73 = 980341423U;
	volatile uint64_t x74 = 33270564LLU;
	int8_t x75 = -1;
	volatile int64_t x76 = INT64_MAX;
	volatile int64_t t8 = -558LL;

    t8 = ((x73>>(x74<=x75))^x76);

    if (t8 != 9223372036364605096LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	int8_t x88 = -35;
	int32_t t9 = 15;

    t9 = ((x85>>(x86<=x87))^x88);

    if (t9 != -2147483614) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x95 = -1;
	uint64_t x96 = 160167619918091LLU;
	uint64_t t10 = 814518782LLU;

    t10 = ((x93>>(x94<=x95))^x96);

    if (t10 != 160167619915077LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x97 = INT64_MAX;
	int8_t x99 = 2;
	static int64_t x100 = INT64_MIN;
	int64_t t11 = 33402256376917696LL;

    t11 = ((x97>>(x98<=x99))^x100);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x101 = 81349LL;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int64_t x104 = -2851LL;
	volatile int64_t t12 = -49962LL;

    t12 = ((x101>>(x102<=x103))^x104);

    if (t12 != -79592LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x105 = 68U;
	int16_t x106 = INT16_MIN;
	uint8_t x107 = UINT8_MAX;
	int32_t t13 = 273299;

    t13 = ((x105>>(x106<=x107))^x108);

    if (t13 != -94) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	int32_t x114 = -1;
	static volatile uint64_t t14 = 631340LLU;

    t14 = ((x113>>(x114<=x115))^x116);

    if (t14 != 9227844104100316108LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = UINT8_MAX;
	static int32_t x119 = INT32_MIN;
	int32_t t15 = -96;

    t15 = ((x117>>(x118<=x119))^x120);

    if (t15 != 65280) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x121 = 59321794810LLU;
	uint16_t x123 = 16290U;
	uint32_t x124 = 128652844U;
	volatile uint64_t t16 = 2693174465876476665LLU;

    t16 = ((x121>>(x122<=x123))^x124);

    if (t16 != 59197478614LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x126 = INT32_MIN;
	static int64_t x127 = INT64_MAX;
	int64_t x128 = 222727223LL;
	volatile int64_t t17 = -1437300226283010LL;

    t17 = ((x125>>(x126<=x127))^x128);

    if (t17 != 222727341LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x129 = UINT32_MAX;
	int64_t x130 = -28659885279253LL;
	volatile int16_t x132 = 7;
	static volatile uint32_t t18 = 170U;

    t18 = ((x129>>(x130<=x131))^x132);

    if (t18 != 2147483640U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x137 = INT32_MAX;
	static int32_t x138 = -1;
	volatile int32_t t19 = 885;

    t19 = ((x137>>(x138<=x139))^x140);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x145 = 44U;
	volatile int16_t x146 = -1;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t20 = -8;

    t20 = ((x145>>(x146<=x147))^x148);

    if (t20 != -2147483626) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x177 = 1828764U;
	int8_t x179 = -14;
	static int32_t x180 = 91;
	uint32_t t21 = 1420U;

    t21 = ((x177>>(x178<=x179))^x180);

    if (t21 != 1828807U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x181 = UINT16_MAX;
	static int64_t x182 = -1LL;
	int64_t x184 = -1LL;

    t22 = ((x181>>(x182<=x183))^x184);

    if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x189 = 18603U;
	int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MIN;

    t23 = ((x189>>(x190<=x191))^x192);

    if (t23 != 18644) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x201 = 64674;
	int32_t x202 = INT32_MIN;
	static uint8_t x204 = 0U;

    t24 = ((x201>>(x202<=x203))^x204);

    if (t24 != 32337) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x206 = 640U;
	int64_t x207 = INT64_MIN;
	static int64_t x208 = INT64_MIN;
	int64_t t25 = -186943607LL;

    t25 = ((x205>>(x206<=x207))^x208);

    if (t25 != -9223372036279679772LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MIN;
	uint32_t t26 = 963981U;

    t26 = ((x209>>(x210<=x211))^x212);

    if (t26 != 4294519778U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x217 = INT8_MAX;
	int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t27 = 1887398;

    t27 = ((x217>>(x218<=x219))^x220);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x221 = 4092U;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 180209305LLU;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t28 = 23249746996236492LLU;

    t28 = ((x221>>(x222<=x223))^x224);

    if (t28 != 18446744073709547523LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x226 = 0U;
	int64_t x227 = INT64_MIN;
	uint32_t t29 = 5494U;

    t29 = ((x225>>(x226<=x227))^x228);

    if (t29 != 406922235U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x237 = 6U;
	volatile int32_t x238 = 447257826;
	int8_t x239 = 2;
	static int64_t x240 = INT64_MAX;
	static volatile int64_t t30 = 3521325615988577LL;

    t30 = ((x237>>(x238<=x239))^x240);

    if (t30 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x246 = -1LL;
	volatile int32_t x247 = INT32_MIN;
	volatile int32_t x248 = -1;

    t31 = ((x245>>(x246<=x247))^x248);

    if (t31 != -65536) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x253 = 177685794LL;
	uint16_t x254 = 11513U;
	int8_t x255 = INT8_MIN;
	volatile uint64_t x256 = 5451169507523254343LLU;
	uint64_t t32 = 441LLU;

    t32 = ((x253>>(x254<=x255))^x256);

    if (t32 != 5451169507362610533LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x261 = 162U;
	int8_t x262 = INT8_MAX;
	int32_t x264 = -1;
	volatile uint32_t t33 = 1040126160U;

    t33 = ((x261>>(x262<=x263))^x264);

    if (t33 != 4294967214U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x265 = 50493904U;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = 4304394844645765LLU;
	uint8_t x268 = 26U;
	uint32_t t34 = 1896693U;

    t34 = ((x265>>(x266<=x267))^x268);

    if (t34 != 50493898U) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x269 = 5119U;
	static int64_t x270 = 21309715190LL;
	uint32_t t35 = 231U;

    t35 = ((x269>>(x270<=x271))^x272);

    if (t35 != 2401U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x273 = 9LLU;
	uint32_t x274 = 2306U;
	volatile int64_t x275 = -119136222LL;
	uint8_t x276 = 79U;

    t36 = ((x273>>(x274<=x275))^x276);

    if (t36 != 70LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x285 = INT64_MAX;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	static volatile int64_t t37 = -181350LL;

    t37 = ((x285>>(x286<=x287))^x288);

    if (t37 != -4611686016279904257LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x293 = 2480602U;
	int16_t x294 = INT16_MAX;
	int16_t x295 = -127;
	uint64_t x296 = UINT64_MAX;
	uint64_t t38 = 2152143710893LLU;

    t38 = ((x293>>(x294<=x295))^x296);

    if (t38 != 18446744073707071013LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x313 = UINT8_MAX;
	volatile uint64_t x314 = 0LLU;
	volatile int16_t x315 = INT16_MIN;
	int64_t x316 = 0LL;
	int64_t t39 = -379140040773872LL;

    t39 = ((x313>>(x314<=x315))^x316);

    if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x329 = 886504066080824173LL;
	static volatile int32_t x330 = 1;
	static uint16_t x331 = 116U;
	volatile int16_t x332 = 0;
	static volatile int64_t t40 = 5677930783LL;

    t40 = ((x329>>(x330<=x331))^x332);

    if (t40 != 443252033040412086LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x333 = 1453107697317001LL;
	static uint64_t x336 = 46475756121LLU;

    t41 = ((x333>>(x334<=x335))^x336);

    if (t41 != 726531603494941LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x337 = 89899283U;
	int32_t x339 = INT32_MAX;
	uint32_t x340 = 63568U;
	volatile uint32_t t42 = 77U;

    t42 = ((x337>>(x338<=x339))^x340);

    if (t42 != 89864515U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x341 = 7874U;
	int8_t x342 = 42;
	int16_t x343 = INT16_MAX;
	int32_t x344 = -1;
	int32_t t43 = -4;

    t43 = ((x341>>(x342<=x343))^x344);

    if (t43 != -3938) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = UINT32_MAX;
	static uint16_t x351 = UINT16_MAX;
	int8_t x352 = -1;
	volatile uint32_t t44 = 11653U;

    t44 = ((x349>>(x350<=x351))^x352);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x353 = INT16_MAX;
	int16_t x355 = -1;
	volatile uint32_t x356 = 48642715U;
	volatile uint32_t t45 = 6311427U;

    t45 = ((x353>>(x354<=x355))^x356);

    if (t45 != 48645476U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MIN;
	uint32_t x364 = 6430174U;
	uint32_t t46 = 1039008923U;

    t46 = ((x361>>(x362<=x363))^x364);

    if (t46 != 6431265U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x373 = 978LL;
	volatile uint32_t x374 = 540U;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;

    t47 = ((x373>>(x374<=x375))^x376);

    if (t47 != -9223372036854774830LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x377 = 776764291404959LLU;
	uint32_t x378 = 212294706U;
	uint64_t x380 = 222LLU;
	static volatile uint64_t t48 = 13LLU;

    t48 = ((x377>>(x378<=x379))^x380);

    if (t48 != 388382145702545LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x381 = INT32_MAX;
	uint32_t x382 = 13608U;
	int8_t x383 = INT8_MIN;
	static uint16_t x384 = 9078U;
	int32_t t49 = 35238;

    t49 = ((x381>>(x382<=x383))^x384);

    if (t49 != 1073732745) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x385 = UINT16_MAX;
	uint8_t x386 = 22U;
	int32_t x388 = 311658;
	static int32_t t50 = -4079;

    t50 = ((x385>>(x386<=x387))^x388);

    if (t50 != 278165) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x390 = 51;
	volatile uint64_t t51 = 2127LLU;

    t51 = ((x389>>(x390<=x391))^x392);

    if (t51 != 5242LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x397 = UINT64_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 4062803501145LLU;
	uint64_t t52 = 160242155068LLU;

    t52 = ((x397>>(x398<=x399))^x400);

    if (t52 != 9223367974051274662LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x406 = -1;
	static int64_t x407 = -450994LL;
	int32_t x408 = -1;
	volatile int32_t t53 = 1033986030;

    t53 = ((x405>>(x406<=x407))^x408);

    if (t53 != -13) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x415 = 20U;
	volatile uint8_t x416 = 98U;
	volatile int32_t t54 = 21;

    t54 = ((x413>>(x414<=x415))^x416);

    if (t54 != 116) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x417 = UINT32_MAX;
	uint32_t x418 = 6U;
	int64_t x419 = -32289556LL;
	int64_t x420 = -10968LL;

    t55 = ((x417>>(x418<=x419))^x420);

    if (t55 != -4294956329LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x421 = 37576116U;
	int32_t x422 = 0;
	int8_t x423 = 0;
	uint32_t t56 = 1939309U;

    t56 = ((x421>>(x422<=x423))^x424);

    if (t56 != 4276179237U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x426 = 2849U;
	uint8_t x427 = UINT8_MAX;
	int32_t x428 = INT32_MIN;
	static uint64_t t57 = 10630777817681035LLU;

    t57 = ((x425>>(x426<=x427))^x428);

    if (t57 != 2147483647LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x429 = 0;
	uint64_t x430 = UINT64_MAX;
	volatile int64_t x431 = INT64_MIN;
	volatile uint32_t t58 = 6772U;

    t58 = ((x429>>(x430<=x431))^x432);

    if (t58 != 3U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x433 = INT16_MAX;
	int32_t x434 = INT32_MIN;
	int8_t x435 = -1;
	uint16_t x436 = 2U;
	volatile int32_t t59 = -1273;

    t59 = ((x433>>(x434<=x435))^x436);

    if (t59 != 16381) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x441 = 17472628815859LLU;
	uint64_t x442 = 16LLU;
	volatile int64_t x443 = -1LL;
	uint16_t x444 = UINT16_MAX;

    t60 = ((x441>>(x442<=x443))^x444);

    if (t60 != 8736314377222LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	uint32_t x450 = UINT32_MAX;
	static uint8_t x451 = 51U;
	int64_t x452 = INT64_MIN;
	uint64_t t61 = 64287672407LLU;

    t61 = ((x449>>(x450<=x451))^x452);

    if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x457 = 29U;
	int8_t x458 = -1;
	volatile uint8_t x459 = 0U;
	int32_t t62 = -3957065;

    t62 = ((x457>>(x458<=x459))^x460);

    if (t62 != 113) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x461 = 5863U;
	static int64_t x462 = 7891103926LL;
	static volatile int32_t x463 = INT32_MIN;
	int64_t x464 = INT64_MAX;
	volatile int64_t t63 = 33142804087LL;

    t63 = ((x461>>(x462<=x463))^x464);

    if (t63 != 9223372036854769944LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x469 = 11352U;
	volatile int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MIN;
	static uint64_t x472 = 127257850816518LLU;
	volatile uint64_t t64 = 51414LLU;

    t64 = ((x469>>(x470<=x471))^x472);

    if (t64 != 127257850807390LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x477 = 10LLU;
	static volatile uint8_t x478 = UINT8_MAX;
	int32_t x479 = -1;
	int64_t x480 = 3425185526081240LL;
	volatile uint64_t t65 = 225139296861650LLU;

    t65 = ((x477>>(x478<=x479))^x480);

    if (t65 != 3425185526081234LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x481 = UINT64_MAX;
	uint16_t x482 = 5U;
	int64_t x483 = INT64_MIN;
	int64_t x484 = -1LL;
	uint64_t t66 = 15LLU;

    t66 = ((x481>>(x482<=x483))^x484);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x485 = INT8_MAX;
	int8_t x488 = -1;
	volatile int32_t t67 = -3743;

    t67 = ((x485>>(x486<=x487))^x488);

    if (t67 != -64) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x494 = INT64_MAX;
	int32_t x495 = -1;
	volatile int64_t x496 = -28285636009818626LL;
	int64_t t68 = 8149273240LL;

    t68 = ((x493>>(x494<=x495))^x496);

    if (t68 != -28285636003659561LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x500 = -1;
	volatile int32_t t69 = -535523008;

    t69 = ((x497>>(x498<=x499))^x500);

    if (t69 != -256) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x501 = 36;
	volatile uint64_t x503 = UINT64_MAX;
	uint8_t x504 = 8U;
	int32_t t70 = 21078;

    t70 = ((x501>>(x502<=x503))^x504);

    if (t70 != 26) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x518 = 1012735LLU;
	uint64_t x519 = UINT64_MAX;

    t71 = ((x517>>(x518<=x519))^x520);

    if (t71 != -1073733426) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x525 = 337619787;
	int32_t x526 = 10618767;
	static int8_t x527 = INT8_MIN;
	int8_t x528 = -1;

    t72 = ((x525>>(x526<=x527))^x528);

    if (t72 != -337619788) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile int64_t x546 = -1LL;
	int8_t x547 = INT8_MIN;
	int32_t t73 = -1066;

    t73 = ((x545>>(x546<=x547))^x548);

    if (t73 != 65517) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x549 = INT16_MAX;
	uint64_t x550 = 15540587462LLU;
	uint64_t x551 = UINT64_MAX;
	static int8_t x552 = -1;
	volatile int32_t t74 = 2072;

    t74 = ((x549>>(x550<=x551))^x552);

    if (t74 != -16384) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x553 = UINT32_MAX;
	int8_t x555 = 6;
	int64_t t75 = -57771355228934LL;

    t75 = ((x553>>(x554<=x555))^x556);

    if (t75 != 4294752624LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x574 = 92U;
	uint64_t x575 = UINT64_MAX;
	uint64_t t76 = 1070022805LLU;

    t76 = ((x573>>(x574<=x575))^x576);

    if (t76 != 139069135LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x589 = UINT16_MAX;
	int32_t x590 = INT32_MIN;
	int16_t x591 = INT16_MIN;
	static int64_t t77 = 3095145LL;

    t77 = ((x589>>(x590<=x591))^x592);

    if (t77 != 3371LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x593 = 9U;
	int64_t x594 = 114LL;
	uint64_t x595 = 426755LLU;
	static int32_t x596 = 8229;
	static int32_t t78 = -7895424;

    t78 = ((x593>>(x594<=x595))^x596);

    if (t78 != 8225) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x597 = 201U;
	int32_t x598 = -1;
	static volatile int32_t x599 = -270404;
	volatile int16_t x600 = -602;
	int32_t t79 = 13324;

    t79 = ((x597>>(x598<=x599))^x600);

    if (t79 != -657) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x601 = UINT64_MAX;
	static int8_t x602 = INT8_MIN;
	static int64_t x603 = -1LL;
	static uint8_t x604 = 11U;

    t80 = ((x601>>(x602<=x603))^x604);

    if (t80 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x606 = 114U;
	uint64_t x607 = 273231199700LLU;
	int16_t x608 = INT16_MIN;
	volatile int32_t t81 = 819025359;

    t81 = ((x605>>(x606<=x607))^x608);

    if (t81 != -892514) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x610 = INT64_MIN;
	int64_t x611 = -1LL;

    t82 = ((x609>>(x610<=x611))^x612);

    if (t82 != 203LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x613 = 0;
	uint32_t x614 = 29U;
	volatile int16_t x615 = INT16_MAX;
	uint8_t x616 = 63U;
	int32_t t83 = 194;

    t83 = ((x613>>(x614<=x615))^x616);

    if (t83 != 63) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x617 = 47;
	uint64_t x619 = UINT64_MAX;
	int64_t x620 = INT64_MAX;
	int64_t t84 = 791079LL;

    t84 = ((x617>>(x618<=x619))^x620);

    if (t84 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x625 = UINT8_MAX;
	int64_t x627 = -1LL;
	int32_t x628 = INT32_MIN;
	volatile int32_t t85 = 5494636;

    t85 = ((x625>>(x626<=x627))^x628);

    if (t85 != -2147483393) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x629 = UINT8_MAX;
	uint8_t x630 = 95U;
	int64_t x631 = INT64_MIN;
	int32_t t86 = -1752;

    t86 = ((x629>>(x630<=x631))^x632);

    if (t86 != -256) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x633 = 2;
	uint8_t x634 = 9U;
	static int64_t x635 = INT64_MIN;
	int32_t x636 = INT32_MIN;
	volatile int32_t t87 = 171823627;

    t87 = ((x633>>(x634<=x635))^x636);

    if (t87 != -2147483646) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x641 = INT8_MAX;
	static int8_t x642 = -1;
	volatile uint64_t x643 = UINT64_MAX;
	volatile int64_t t88 = -1877100LL;

    t88 = ((x641>>(x642<=x643))^x644);

    if (t88 != -384789862808LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x645 = 53080141277558135LLU;
	int8_t x646 = INT8_MIN;
	int64_t x647 = INT64_MIN;

    t89 = ((x645>>(x646<=x647))^x648);

    if (t89 != 53080141277530760LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x649 = 10247U;
	int16_t x651 = -1;
	int32_t x652 = -1;
	static volatile uint32_t t90 = 1U;

    t90 = ((x649>>(x650<=x651))^x652);

    if (t90 != 4294962172U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x653 = INT8_MAX;
	static int16_t x654 = 667;
	int32_t x655 = -1;
	int8_t x656 = -2;
	static int32_t t91 = -152;

    t91 = ((x653>>(x654<=x655))^x656);

    if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x657 = INT64_MAX;
	static uint8_t x658 = 0U;
	uint32_t x659 = 39U;
	int16_t x660 = INT16_MIN;
	int64_t t92 = 254920198707LL;

    t92 = ((x657>>(x658<=x659))^x660);

    if (t92 != -4611686018427355137LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x665 = INT16_MAX;
	volatile int8_t x666 = INT8_MAX;
	volatile uint64_t t93 = 6844147174326142702LLU;

    t93 = ((x665>>(x666<=x667))^x668);

    if (t93 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x669 = 188048303723845790LL;
	int8_t x670 = -1;
	uint64_t x671 = 3551736057LLU;

    t94 = ((x669>>(x670<=x671))^x672);

    if (t94 != -188048303723845789LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x677 = 30U;
	volatile int32_t x678 = INT32_MIN;
	int8_t x679 = -1;
	static int8_t x680 = -1;
	int32_t t95 = -61776;

    t95 = ((x677>>(x678<=x679))^x680);

    if (t95 != -16) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x682 = UINT16_MAX;
	int16_t x683 = -1;
	uint8_t x684 = UINT8_MAX;
	int32_t t96 = 8902969;

    t96 = ((x681>>(x682<=x683))^x684);

    if (t96 != 14309) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x685 = 47LL;
	int16_t x686 = -6788;
	uint8_t x687 = UINT8_MAX;
	volatile uint64_t x688 = 88LLU;
	uint64_t t97 = 324469578LLU;

    t97 = ((x685>>(x686<=x687))^x688);

    if (t97 != 79LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x697 = 403155583652689LL;
	int8_t x698 = INT8_MIN;
	int32_t x699 = 19004;
	int64_t t98 = 919760501015376253LL;

    t98 = ((x697>>(x698<=x699))^x700);

    if (t98 != 201577791826344LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x709 = 10565432234050LLU;
	int32_t x710 = -1;
	int64_t x711 = INT64_MIN;
	volatile int32_t x712 = -3176;

    t99 = ((x709>>(x710<=x711))^x712);

    if (t99 != 18446733508277314522LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x713 = 1998365131400LL;
	int8_t x715 = INT8_MIN;
	uint32_t x716 = 445U;

    t100 = ((x713>>(x714<=x715))^x716);

    if (t100 != 999182565625LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x717 = INT8_MAX;
	static int32_t x718 = INT32_MIN;
	static volatile int8_t x720 = 26;
	int32_t t101 = 6;

    t101 = ((x717>>(x718<=x719))^x720);

    if (t101 != 37) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x729 = UINT64_MAX;
	static uint16_t x730 = 221U;
	volatile int32_t x731 = -22167378;
	int64_t x732 = -1LL;

    t102 = ((x729>>(x730<=x731))^x732);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	uint8_t x734 = 0U;
	volatile int8_t x735 = 24;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t103 = 0LLU;

    t103 = ((x733>>(x734<=x735))^x736);

    if (t103 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x738 = 3425239120707LLU;
	static volatile uint32_t x740 = UINT32_MAX;
	uint64_t t104 = 24780332034LLU;

    t104 = ((x737>>(x738<=x739))^x740);

    if (t104 != 4294470140LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x753 = 399507656225050LLU;
	int64_t x754 = -1LL;
	int32_t x755 = 9718652;
	static int8_t x756 = 3;
	volatile uint64_t t105 = 2671669502325LLU;

    t105 = ((x753>>(x754<=x755))^x756);

    if (t105 != 199753828112526LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x757 = 0;
	int32_t x758 = INT32_MIN;
	int8_t x759 = INT8_MIN;
	volatile int64_t x760 = -273920041722LL;
	static volatile int64_t t106 = -6LL;

    t106 = ((x757>>(x758<=x759))^x760);

    if (t106 != -273920041722LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	int8_t x762 = -1;
	int32_t x763 = INT32_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t107 = -18;

    t107 = ((x761>>(x762<=x763))^x764);

    if (t107 != -129) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x765 = UINT8_MAX;
	int8_t x767 = INT8_MAX;
	uint32_t x768 = 490409018U;
	volatile uint32_t t108 = 2845653U;

    t108 = ((x765>>(x766<=x767))^x768);

    if (t108 != 490409157U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x769 = 7066391U;
	static int32_t x771 = 1;
	volatile int32_t x772 = -3984;

    t109 = ((x769>>(x770<=x771))^x772);

    if (t109 != 4287898471U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x778 = INT8_MIN;
	uint16_t x779 = 3554U;
	volatile int16_t x780 = INT16_MIN;

    t110 = ((x777>>(x778<=x779))^x780);

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x781 = UINT16_MAX;
	int64_t x782 = INT64_MIN;
	uint32_t x784 = 377U;
	volatile uint32_t t111 = 21U;

    t111 = ((x781>>(x782<=x783))^x784);

    if (t111 != 32390U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x785 = UINT32_MAX;
	int64_t x787 = -30635LL;
	static uint64_t x788 = 208225048LLU;
	volatile uint64_t t112 = 88LLU;

    t112 = ((x785>>(x786<=x787))^x788);

    if (t112 != 4086742247LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x797 = INT8_MAX;
	int8_t x798 = -1;
	uint8_t x799 = 60U;
	int64_t x800 = -1LL;

    t113 = ((x797>>(x798<=x799))^x800);

    if (t113 != -64LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x801 = 83U;
	int64_t x803 = -1LL;
	volatile int64_t t114 = -360282140LL;

    t114 = ((x801>>(x802<=x803))^x804);

    if (t114 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x805 = 22575;
	volatile int32_t t115 = -257442310;

    t115 = ((x805>>(x806<=x807))^x808);

    if (t115 != 22575) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x821 = 76U;
	uint16_t x822 = 1U;
	static int32_t x823 = -1;
	volatile uint32_t x824 = 816543168U;
	static uint32_t t116 = 2U;

    t116 = ((x821>>(x822<=x823))^x824);

    if (t116 != 816543116U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x825 = INT64_MAX;
	static int32_t x826 = INT32_MAX;
	volatile uint16_t x827 = 29657U;
	static int8_t x828 = INT8_MAX;
	int64_t t117 = -68620147131913541LL;

    t117 = ((x825>>(x826<=x827))^x828);

    if (t117 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x829 = 14313U;
	uint32_t x830 = 446083U;
	int16_t x831 = INT16_MAX;
	int8_t x832 = INT8_MAX;
	volatile int32_t t118 = 1;

    t118 = ((x829>>(x830<=x831))^x832);

    if (t118 != 14230) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x833 = 27;
	volatile uint32_t x834 = 694533818U;
	volatile int8_t x835 = INT8_MAX;
	volatile int64_t x836 = INT64_MIN;
	volatile int64_t t119 = 62852191623949LL;

    t119 = ((x833>>(x834<=x835))^x836);

    if (t119 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x841 = 3087U;
	uint8_t x842 = UINT8_MAX;
	static int8_t x843 = -31;
	int32_t x844 = INT32_MIN;
	volatile int32_t t120 = 806757;

    t120 = ((x841>>(x842<=x843))^x844);

    if (t120 != -2147480561) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x845 = UINT16_MAX;
	static uint64_t x846 = 298430418LLU;
	static volatile uint32_t t121 = 70019070U;

    t121 = ((x845>>(x846<=x847))^x848);

    if (t121 != 1716118762U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x853 = 7U;
	static int64_t x854 = 4310LL;
	volatile int16_t x855 = INT16_MIN;
	volatile uint32_t t122 = 58645369U;

    t122 = ((x853>>(x854<=x855))^x856);

    if (t122 != 4294967282U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x857 = INT64_MAX;
	int8_t x858 = 29;
	volatile int32_t x859 = INT32_MIN;
	uint32_t x860 = UINT32_MAX;
	int64_t t123 = 345510826468LL;

    t123 = ((x857>>(x858<=x859))^x860);

    if (t123 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x861 = 55;
	static uint8_t x862 = 1U;
	int32_t x863 = INT32_MIN;
	int64_t t124 = -164328161557950557LL;

    t124 = ((x861>>(x862<=x863))^x864);

    if (t124 != -56LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x865 = 0;
	volatile int8_t x867 = 3;
	uint64_t x868 = 33040576054921LLU;

    t125 = ((x865>>(x866<=x867))^x868);

    if (t125 != 33040576054921LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x869 = 2;
	int64_t x870 = -58LL;
	uint16_t x871 = 30U;
	uint8_t x872 = 105U;

    t126 = ((x869>>(x870<=x871))^x872);

    if (t126 != 104) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x873 = 0U;
	int32_t x874 = INT32_MIN;
	uint16_t x876 = UINT16_MAX;
	volatile int32_t t127 = 1292419;

    t127 = ((x873>>(x874<=x875))^x876);

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x881 = UINT64_MAX;
	static volatile int64_t x883 = INT64_MIN;
	int8_t x884 = -1;
	uint64_t t128 = 493401080LLU;

    t128 = ((x881>>(x882<=x883))^x884);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x889 = 229LLU;
	uint16_t x891 = 127U;
	uint8_t x892 = 10U;
	volatile uint64_t t129 = 1939876773858441393LLU;

    t129 = ((x889>>(x890<=x891))^x892);

    if (t129 != 120LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x893 = 110U;
	static volatile uint32_t x894 = UINT32_MAX;
	int64_t x895 = -1LL;
	int8_t x896 = INT8_MAX;
	volatile int32_t t130 = 17339834;

    t130 = ((x893>>(x894<=x895))^x896);

    if (t130 != 17) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x901 = UINT64_MAX;
	uint32_t x902 = 26U;
	volatile uint16_t x904 = 1258U;
	volatile uint64_t t131 = 4LLU;

    t131 = ((x901>>(x902<=x903))^x904);

    if (t131 != 9223372036854774549LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x905 = UINT16_MAX;
	uint16_t x906 = UINT16_MAX;
	int32_t x907 = INT32_MIN;
	volatile int32_t t132 = -353806757;

    t132 = ((x905>>(x906<=x907))^x908);

    if (t132 != -65409) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x909 = UINT16_MAX;
	uint8_t x911 = UINT8_MAX;
	int32_t x912 = 263;
	volatile int32_t t133 = 50;

    t133 = ((x909>>(x910<=x911))^x912);

    if (t133 != 65272) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x913 = 292445384U;
	int8_t x914 = INT8_MIN;
	int16_t x916 = 1;
	volatile uint32_t t134 = 167363U;

    t134 = ((x913>>(x914<=x915))^x916);

    if (t134 != 146222693U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x925 = INT8_MAX;
	int16_t x927 = INT16_MIN;
	int8_t x928 = INT8_MIN;

    t135 = ((x925>>(x926<=x927))^x928);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x949 = UINT32_MAX;
	static volatile uint16_t x950 = 18686U;
	int32_t x951 = 355960;
	static uint64_t x952 = 43327924843LLU;

    t136 = ((x949>>(x950<=x951))^x952);

    if (t136 != 44718904724LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x953 = 19723299528LLU;
	uint8_t x954 = 1U;
	int16_t x955 = -1;

    t137 = ((x953>>(x954<=x955))^x956);

    if (t137 != 19723299529LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x957 = 0;
	volatile uint32_t x958 = 1238838112U;
	uint8_t x959 = 5U;
	uint64_t x960 = UINT64_MAX;
	uint64_t t138 = UINT64_MAX;

    t138 = ((x957>>(x958<=x959))^x960);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x963 = -1886;
	volatile int64_t t139 = INT64_MIN;

    t139 = ((x961>>(x962<=x963))^x964);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x965 = 30;
	int64_t x966 = 822436142630995LL;
	static volatile int8_t x967 = INT8_MIN;
	volatile int64_t t140 = -32154078498373LL;

    t140 = ((x965>>(x966<=x967))^x968);

    if (t140 != -31LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x969 = 24U;
	int32_t x970 = INT32_MAX;
	uint16_t x971 = 308U;
	int8_t x972 = INT8_MAX;
	int32_t t141 = -3295364;

    t141 = ((x969>>(x970<=x971))^x972);

    if (t141 != 103) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x981 = 408222LL;
	int8_t x982 = INT8_MAX;
	uint32_t x983 = 21U;
	volatile uint32_t x984 = 1U;
	volatile int64_t t142 = 1361061302410056LL;

    t142 = ((x981>>(x982<=x983))^x984);

    if (t142 != 408223LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x985 = UINT16_MAX;
	volatile uint16_t x986 = 210U;
	static int64_t x987 = -2LL;
	volatile uint8_t x988 = 2U;

    t143 = ((x985>>(x986<=x987))^x988);

    if (t143 != 65533) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x989 = UINT32_MAX;
	int16_t x991 = 15032;
	static volatile int32_t x992 = INT32_MAX;
	uint32_t t144 = 376898U;

    t144 = ((x989>>(x990<=x991))^x992);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1002 = INT16_MAX;
	uint32_t x1003 = 8U;
	uint64_t x1004 = 3630883LLU;

    t145 = ((x1001>>(x1002<=x1003))^x1004);

    if (t145 != 3610844LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1009 = INT8_MAX;
	static int16_t x1010 = -4054;
	volatile uint64_t x1011 = 5961822407LLU;
	static volatile int16_t x1012 = -1;

    t146 = ((x1009>>(x1010<=x1011))^x1012);

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1013 = INT32_MAX;
	uint64_t x1014 = 5568LLU;
	int32_t x1015 = INT32_MIN;
	uint16_t x1016 = 2U;
	static volatile int32_t t147 = 57;

    t147 = ((x1013>>(x1014<=x1015))^x1016);

    if (t147 != 1073741821) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1017 = 974U;
	uint32_t x1018 = 527574U;
	int8_t x1019 = -1;
	uint16_t x1020 = UINT16_MAX;
	volatile int32_t t148 = 323;

    t148 = ((x1017>>(x1018<=x1019))^x1020);

    if (t148 != 65048) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1033 = INT32_MAX;
	volatile int8_t x1034 = INT8_MIN;
	int16_t x1035 = INT16_MIN;
	volatile uint64_t t149 = 32LLU;

    t149 = ((x1033>>(x1034<=x1035))^x1036);

    if (t149 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1037 = UINT16_MAX;
	static int16_t x1038 = INT16_MIN;
	uint32_t x1039 = 131351546U;
	volatile uint64_t x1040 = UINT64_MAX;
	uint64_t t150 = 181236041531888LLU;

    t150 = ((x1037>>(x1038<=x1039))^x1040);

    if (t150 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x1041 = UINT64_MAX;
	uint32_t x1042 = 11U;
	static int32_t x1043 = INT32_MAX;
	static int16_t x1044 = 10940;
	volatile uint64_t t151 = 274LLU;

    t151 = ((x1041>>(x1042<=x1043))^x1044);

    if (t151 != 9223372036854764867LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x1045 = UINT8_MAX;
	int64_t x1046 = -135380338363LL;
	int32_t x1048 = INT32_MIN;
	int32_t t152 = 259058;

    t152 = ((x1045>>(x1046<=x1047))^x1048);

    if (t152 != -2147483521) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1049 = UINT16_MAX;
	int64_t x1050 = -1LL;
	volatile uint8_t x1051 = 6U;
	uint16_t x1052 = 972U;
	static volatile int32_t t153 = 58730584;

    t153 = ((x1049>>(x1050<=x1051))^x1052);

    if (t153 != 31795) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x1053 = 117U;
	volatile int8_t x1054 = -1;
	int32_t x1055 = -1;
	volatile int32_t t154 = 62947;

    t154 = ((x1053>>(x1054<=x1055))^x1056);

    if (t154 != 39) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1057 = 20;
	static volatile uint16_t x1058 = 9720U;
	volatile int8_t x1059 = INT8_MIN;
	uint8_t x1060 = 10U;
	int32_t t155 = -51354677;

    t155 = ((x1057>>(x1058<=x1059))^x1060);

    if (t155 != 30) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1061 = 1891U;
	int64_t x1062 = -1LL;
	uint32_t x1063 = 297U;
	int64_t x1064 = -1LL;

    t156 = ((x1061>>(x1062<=x1063))^x1064);

    if (t156 != -946LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x1065 = 143U;
	int32_t x1066 = INT32_MAX;
	uint32_t t157 = 78503166U;

    t157 = ((x1065>>(x1066<=x1067))^x1068);

    if (t157 != 118U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x1074 = UINT16_MAX;
	static int8_t x1076 = -4;
	volatile int32_t t158 = -203;

    t158 = ((x1073>>(x1074<=x1075))^x1076);

    if (t158 != -5) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1081 = 0U;
	volatile int64_t x1082 = INT64_MAX;
	uint32_t x1083 = UINT32_MAX;
	int32_t t159 = 0;

    t159 = ((x1081>>(x1082<=x1083))^x1084);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1093 = UINT64_MAX;
	static int64_t x1094 = INT64_MIN;
	static uint8_t x1095 = 1U;
	int32_t x1096 = INT32_MIN;
	static volatile uint64_t t160 = 14LLU;

    t160 = ((x1093>>(x1094<=x1095))^x1096);

    if (t160 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1097 = 4U;
	static uint32_t x1099 = 2309U;
	uint32_t t161 = 5915U;

    t161 = ((x1097>>(x1098<=x1099))^x1100);

    if (t161 != 45U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1102 = UINT32_MAX;
	int16_t x1103 = -14;
	int32_t x1104 = INT32_MIN;
	uint64_t t162 = 1244613719LLU;

    t162 = ((x1101>>(x1102<=x1103))^x1104);

    if (t162 != 18446742955189729736LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x1105 = 6117707U;
	int64_t x1106 = INT64_MIN;
	uint64_t x1107 = UINT64_MAX;
	volatile int32_t x1108 = INT32_MIN;

    t163 = ((x1105>>(x1106<=x1107))^x1108);

    if (t163 != 2150542501U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1109 = UINT64_MAX;
	static uint32_t x1110 = 591422089U;
	uint64_t x1112 = 3657669399262643LLU;
	volatile uint64_t t164 = 19LLU;

    t164 = ((x1109>>(x1110<=x1111))^x1112);

    if (t164 != 18443086404310288972LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1121 = INT16_MAX;
	static int16_t x1122 = INT16_MIN;
	volatile uint16_t x1123 = 5U;
	int8_t x1124 = -1;
	volatile int32_t t165 = -1;

    t165 = ((x1121>>(x1122<=x1123))^x1124);

    if (t165 != -16384) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x1126 = INT32_MIN;
	int64_t t166 = 25065983360066LL;

    t166 = ((x1125>>(x1126<=x1127))^x1128);

    if (t166 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1129 = 1101U;
	int32_t x1130 = INT32_MAX;
	int32_t x1132 = 1612;
	uint32_t t167 = 6631U;

    t167 = ((x1129>>(x1130<=x1131))^x1132);

    if (t167 != 1130U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1145 = 2;
	int8_t x1147 = INT8_MIN;
	volatile int32_t x1148 = INT32_MIN;
	static volatile int32_t t168 = 0;

    t168 = ((x1145>>(x1146<=x1147))^x1148);

    if (t168 != -2147483647) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1149 = 789;
	uint8_t x1150 = UINT8_MAX;
	uint32_t x1151 = 1320790U;
	volatile int32_t t169 = -1;

    t169 = ((x1149>>(x1150<=x1151))^x1152);

    if (t169 != -395) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1153 = 3U;
	int32_t x1155 = INT32_MIN;
	static volatile int32_t t170 = -3;

    t170 = ((x1153>>(x1154<=x1155))^x1156);

    if (t170 != 2147483644) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1157 = INT8_MAX;
	static int16_t x1158 = INT16_MAX;
	static volatile uint64_t x1159 = UINT64_MAX;
	int16_t x1160 = -1;
	int32_t t171 = 3654833;

    t171 = ((x1157>>(x1158<=x1159))^x1160);

    if (t171 != -64) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1169 = 281;
	int64_t x1170 = -1LL;
	int64_t x1172 = -1LL;

    t172 = ((x1169>>(x1170<=x1171))^x1172);

    if (t172 != -141LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1173 = 1U;
	uint64_t x1174 = 360008LLU;
	uint8_t x1175 = 2U;
	volatile uint64_t t173 = 1850170973097LLU;

    t173 = ((x1173>>(x1174<=x1175))^x1176);

    if (t173 != 1496596LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1193 = 24662U;
	volatile uint8_t x1194 = UINT8_MAX;
	int32_t x1195 = INT32_MIN;
	volatile int64_t t174 = -26890171291223397LL;

    t174 = ((x1193>>(x1194<=x1195))^x1196);

    if (t174 != -9223372036854751146LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x1201 = 1U;
	uint16_t x1204 = 1U;
	volatile int32_t t175 = 190;

    t175 = ((x1201>>(x1202<=x1203))^x1204);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1205 = 3133;
	int64_t x1206 = INT64_MIN;
	uint64_t x1207 = UINT64_MAX;
	int16_t x1208 = INT16_MIN;
	int32_t t176 = 19121;

    t176 = ((x1205>>(x1206<=x1207))^x1208);

    if (t176 != -31202) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1209 = UINT32_MAX;
	uint64_t x1210 = UINT64_MAX;
	static int16_t x1211 = INT16_MIN;
	volatile uint64_t x1212 = 372881489804397039LLU;

    t177 = ((x1209>>(x1210<=x1211))^x1212);

    if (t177 != 372881491713324560LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1213 = 807U;
	volatile uint8_t x1214 = 1U;
	static int8_t x1215 = -34;
	volatile int64_t t178 = -185319526LL;

    t178 = ((x1213>>(x1214<=x1215))^x1216);

    if (t178 != -31866831315172348LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1221 = UINT64_MAX;
	static int64_t x1222 = INT64_MAX;
	int64_t x1223 = -54639203320LL;
	uint64_t x1224 = 10130LLU;
	uint64_t t179 = 6480957058LLU;

    t179 = ((x1221>>(x1222<=x1223))^x1224);

    if (t179 != 18446744073709541485LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1225 = 102759583U;
	static int16_t x1227 = -1;
	volatile int8_t x1228 = INT8_MIN;
	volatile uint32_t t180 = 503U;

    t180 = ((x1225>>(x1226<=x1227))^x1228);

    if (t180 != 4192207647U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1235 = INT16_MAX;
	uint16_t x1236 = UINT16_MAX;

    t181 = ((x1233>>(x1234<=x1235))^x1236);

    if (t181 != 20882LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1241 = 31623LLU;
	static uint32_t x1242 = 4669214U;
	volatile int32_t x1243 = INT32_MIN;
	static uint64_t x1244 = UINT64_MAX;
	uint64_t t182 = 11999208096LLU;

    t182 = ((x1241>>(x1242<=x1243))^x1244);

    if (t182 != 18446744073709535804LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1245 = INT16_MAX;
	int8_t x1246 = INT8_MAX;
	volatile uint16_t x1247 = 6U;
	volatile uint64_t x1248 = 3442LLU;
	uint64_t t183 = 1646822LLU;

    t183 = ((x1245>>(x1246<=x1247))^x1248);

    if (t183 != 29325LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1255 = UINT16_MAX;
	static uint64_t x1256 = UINT64_MAX;
	volatile uint64_t t184 = 8214607LLU;

    t184 = ((x1253>>(x1254<=x1255))^x1256);

    if (t184 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1278 = -1;
	uint16_t x1279 = UINT16_MAX;
	static volatile int32_t x1280 = -1;
	int32_t t185 = 1609;

    t185 = ((x1277>>(x1278<=x1279))^x1280);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x1281 = 6U;
	int64_t x1282 = -89632433559359LL;
	volatile int8_t x1283 = INT8_MAX;
	int16_t x1284 = -1;
	volatile uint32_t t186 = 0U;

    t186 = ((x1281>>(x1282<=x1283))^x1284);

    if (t186 != 4294967292U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1301 = UINT16_MAX;
	uint32_t x1302 = 1U;
	static uint64_t x1303 = UINT64_MAX;
	static uint8_t x1304 = 48U;
	int32_t t187 = 104;

    t187 = ((x1301>>(x1302<=x1303))^x1304);

    if (t187 != 32719) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1309 = UINT16_MAX;
	int16_t x1310 = INT16_MAX;
	static volatile int64_t x1311 = INT64_MIN;
	volatile int16_t x1312 = -161;
	int32_t t188 = 422;

    t188 = ((x1309>>(x1310<=x1311))^x1312);

    if (t188 != -65376) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x1313 = 4U;
	volatile uint8_t x1314 = 2U;
	static uint16_t x1315 = 29430U;
	uint64_t x1316 = 553593887LLU;
	static volatile uint64_t t189 = 0LLU;

    t189 = ((x1313>>(x1314<=x1315))^x1316);

    if (t189 != 553593885LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1317 = 16722841U;
	int32_t x1318 = -260;
	int64_t x1319 = -2052555811238852814LL;
	uint32_t x1320 = 2453495U;

    t190 = ((x1317>>(x1318<=x1319))^x1320);

    if (t190 != 14304366U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1321 = INT64_MAX;
	static int64_t t191 = INT64_MAX;

    t191 = ((x1321>>(x1322<=x1323))^x1324);

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x1325 = 163U;
	volatile uint16_t x1326 = UINT16_MAX;
	static int64_t x1327 = -1LL;
	uint64_t x1328 = 10868728803LLU;
	volatile uint64_t t192 = 28670LLU;

    t192 = ((x1325>>(x1326<=x1327))^x1328);

    if (t192 != 10868728640LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1337 = UINT32_MAX;
	static int8_t x1338 = INT8_MAX;
	uint64_t x1339 = UINT64_MAX;

    t193 = ((x1337>>(x1338<=x1339))^x1340);

    if (t193 != 2147483211U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1341 = 20711729LL;
	static volatile int64_t x1342 = -1LL;
	volatile int8_t x1343 = INT8_MIN;
	static volatile int64_t t194 = 5874091LL;

    t194 = ((x1341>>(x1342<=x1343))^x1344);

    if (t194 != 20772558LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1345 = 893U;
	int8_t x1346 = 2;
	int32_t x1347 = INT32_MIN;
	uint16_t x1348 = 35U;
	uint32_t t195 = 469U;

    t195 = ((x1345>>(x1346<=x1347))^x1348);

    if (t195 != 862U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1357 = 90U;
	static volatile int8_t x1358 = INT8_MIN;
	volatile int8_t x1359 = -1;
	int64_t x1360 = INT64_MIN;
	int64_t t196 = -308101277965LL;

    t196 = ((x1357>>(x1358<=x1359))^x1360);

    if (t196 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1381 = INT64_MAX;
	int64_t x1384 = INT64_MIN;
	int64_t t197 = -147874LL;

    t197 = ((x1381>>(x1382<=x1383))^x1384);

    if (t197 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1385 = 0LL;
	volatile int16_t x1386 = INT16_MIN;
	uint64_t x1387 = 5200613013811LLU;
	volatile uint16_t x1388 = 864U;
	int64_t t198 = 8043451LL;

    t198 = ((x1385>>(x1386<=x1387))^x1388);

    if (t198 != 864LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1389 = 2291U;
	volatile int64_t x1390 = -445938LL;
	static uint32_t x1391 = 138347U;
	int16_t x1392 = INT16_MIN;
	uint32_t t199 = 3252104U;

    t199 = ((x1389>>(x1390<=x1391))^x1392);

    if (t199 != 4294935673U) { NG(); } else { ; }
	
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

