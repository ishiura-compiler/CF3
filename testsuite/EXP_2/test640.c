
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

int64_t x10 = 3760736313LL;
volatile uint16_t x34 = 383U;
uint64_t x37 = 11071002844032972LLU;
uint16_t x66 = 3574U;
volatile int32_t t8 = 65;
volatile uint32_t x78 = UINT32_MAX;
uint64_t x80 = 3113042LLU;
int32_t t10 = 1440;
uint32_t x97 = UINT32_MAX;
uint64_t x100 = UINT64_MAX;
volatile int32_t t12 = 10;
int32_t x121 = -115;
uint8_t x131 = 31U;
static volatile uint64_t x134 = UINT64_MAX;
volatile int32_t t17 = 176291;
uint32_t x158 = 603833U;
static volatile int64_t x160 = INT64_MIN;
int64_t x170 = INT64_MAX;
int64_t x175 = -1LL;
static volatile int32_t t22 = 1;
uint64_t x203 = 91659233089072536LLU;
static int32_t x213 = INT32_MAX;
int8_t x220 = INT8_MIN;
static int8_t x221 = 1;
uint8_t x256 = 21U;
int32_t t30 = 1;
uint64_t x263 = 46142288674338LLU;
static volatile uint8_t x284 = 15U;
volatile int32_t t33 = -52486;
int16_t x286 = INT16_MIN;
int32_t x295 = INT32_MIN;
uint64_t x300 = 395754956LLU;
int8_t x301 = INT8_MAX;
int64_t x315 = INT64_MIN;
static int8_t x317 = INT8_MIN;
int64_t x320 = INT64_MIN;
int32_t t39 = 1646;
static int32_t t40 = -1668294;
int64_t x341 = -1LL;
int16_t x344 = -2411;
volatile int32_t t44 = 32577889;
int32_t x398 = INT32_MIN;
volatile int32_t t45 = -241;
static volatile uint32_t x402 = 30202U;
int64_t x409 = INT64_MIN;
static int64_t x422 = 1087343876959788LL;
volatile int8_t x424 = INT8_MIN;
uint64_t x430 = 242LLU;
volatile uint64_t x433 = UINT64_MAX;
volatile uint64_t x446 = 363632489268201LLU;
volatile int32_t t53 = -291065013;
int8_t x491 = INT8_MAX;
int32_t t58 = 27096;
uint64_t x497 = UINT64_MAX;
static int16_t x498 = INT16_MIN;
volatile int16_t x499 = INT16_MAX;
int8_t x508 = -55;
uint16_t x509 = 1256U;
volatile int32_t t61 = 1147767;
volatile int32_t x518 = INT32_MIN;
int8_t x534 = INT8_MIN;
int8_t x535 = -1;
int8_t x536 = -1;
uint16_t x538 = UINT16_MAX;
volatile uint32_t x546 = UINT32_MAX;
static int32_t t67 = 364;
int32_t t68 = 127;
volatile int32_t x565 = INT32_MIN;
int64_t x567 = -1LL;
uint32_t x574 = UINT32_MAX;
static volatile int64_t x576 = -1LL;
int32_t x583 = -1;
uint8_t x584 = 2U;
static int8_t x586 = INT8_MIN;
int64_t x588 = INT64_MIN;
uint32_t x592 = 18595U;
uint16_t x603 = 77U;
int16_t x613 = INT16_MIN;
int64_t x614 = INT64_MIN;
uint32_t x622 = 249658094U;
int32_t t77 = -1;
int32_t x628 = -257861458;
int32_t t78 = 12862;
uint64_t x668 = UINT64_MAX;
int8_t x669 = -44;
int32_t t83 = 4;
volatile int64_t x680 = INT64_MIN;
int32_t t84 = -4646;
int64_t x694 = INT64_MAX;
int8_t x703 = INT8_MIN;
int8_t x706 = INT8_MAX;
int32_t x708 = INT32_MAX;
int16_t x711 = -1;
static uint8_t x712 = UINT8_MAX;
uint8_t x716 = 7U;
uint32_t x719 = 432368U;
int16_t x720 = INT16_MAX;
int32_t x722 = INT32_MIN;
static uint32_t x731 = UINT32_MAX;
static int8_t x746 = INT8_MAX;
uint64_t x752 = 7555LLU;
int32_t t99 = 7518743;
int16_t x764 = INT16_MAX;
static volatile int32_t x768 = INT32_MAX;
volatile int32_t x806 = INT32_MAX;
static volatile int32_t t104 = -938907;
int16_t x848 = 9;
int32_t x851 = -28127;
static int32_t x870 = 31998144;
int16_t x880 = -1;
uint32_t x883 = UINT32_MAX;
static int32_t t113 = 7232;
int32_t x894 = 8640;
static volatile uint32_t x895 = 11U;
int64_t x896 = -41425086445LL;
volatile int32_t t114 = 22568473;
int16_t x913 = INT16_MAX;
static int64_t x915 = -1LL;
static volatile int32_t t117 = 233654312;
int32_t t118 = 327;
int32_t x940 = INT32_MIN;
int64_t x957 = INT64_MAX;
int8_t x963 = -1;
int32_t x964 = INT32_MAX;
volatile int16_t x971 = -1;
static volatile int32_t t124 = 3510;
uint16_t x989 = 12680U;
int16_t x1009 = INT16_MAX;
uint32_t x1010 = UINT32_MAX;
volatile int32_t x1017 = INT32_MIN;
volatile int16_t x1020 = -1;
uint64_t x1042 = UINT64_MAX;
volatile int8_t x1043 = -55;
int32_t t130 = 58715104;
int32_t x1054 = INT32_MIN;
int8_t x1057 = INT8_MIN;
uint32_t x1061 = 97503314U;
volatile int32_t t134 = 1754956;
int32_t t135 = -14925002;
uint16_t x1092 = 157U;
int32_t x1093 = INT32_MIN;
int64_t x1094 = INT64_MIN;
volatile int32_t t137 = -7;
int64_t x1102 = INT64_MIN;
uint16_t x1104 = 45U;
volatile uint8_t x1109 = 45U;
int8_t x1124 = INT8_MIN;
int32_t x1125 = -1;
static int64_t x1134 = -1LL;
volatile int64_t x1142 = INT64_MAX;
int16_t x1170 = INT16_MIN;
static volatile uint8_t x1172 = UINT8_MAX;
uint64_t x1187 = 237887043629895LLU;
int8_t x1188 = INT8_MAX;
volatile int64_t x1197 = -1LL;
int64_t x1198 = -21124802391036LL;
volatile int32_t t153 = -2;
int16_t x1213 = 8;
volatile uint64_t x1241 = UINT64_MAX;
volatile int8_t x1244 = INT8_MIN;
static int64_t x1248 = INT64_MIN;
uint16_t x1249 = 2931U;
volatile int8_t x1251 = INT8_MAX;
volatile int16_t x1259 = 310;
int8_t x1260 = INT8_MAX;
volatile int32_t t159 = -712616494;
static uint16_t x1267 = 6U;
static volatile int32_t t161 = 7;
static uint64_t x1284 = UINT64_MAX;
static int16_t x1288 = INT16_MAX;
int8_t x1292 = INT8_MIN;
int64_t x1299 = -1LL;
int16_t x1300 = INT16_MIN;
int8_t x1306 = INT8_MAX;
int32_t x1314 = INT32_MIN;
volatile int32_t t171 = -18696;
volatile int64_t x1334 = -1LL;
static int16_t x1336 = -1;
uint64_t x1370 = 43373338403LLU;
int8_t x1375 = INT8_MAX;
int32_t t177 = -1720;
volatile int32_t t178 = -1824595;
volatile int64_t x1394 = -1795830603514981LL;
int64_t x1396 = -1LL;
static int16_t x1430 = -1524;
int16_t x1436 = -1;
int8_t x1439 = 7;
static volatile int32_t t186 = 9645644;
int32_t t187 = 174668;
volatile int16_t x1450 = INT16_MIN;
int32_t x1452 = -1;
volatile int32_t t188 = 228537901;
static int64_t x1470 = INT64_MAX;
int16_t x1471 = INT16_MIN;
int32_t t191 = 3004391;
static int32_t x1493 = INT32_MIN;
static int32_t t193 = -18;
static int8_t x1508 = INT8_MAX;
volatile int32_t t197 = -1;
volatile uint32_t x1532 = 43U;


void f0(void) {
    	int16_t x9 = -318;
	int32_t x11 = INT32_MAX;
	uint64_t x12 = UINT64_MAX;
	static volatile int32_t t0 = 5;

    t0 = ((x9/(x10/x11))<=x12);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	uint32_t x14 = UINT32_MAX;
	static int16_t x15 = INT16_MAX;
	int64_t x16 = 797348459606LL;
	static volatile int32_t t1 = -52082423;

    t1 = ((x13/(x14/x15))<=x16);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x21 = -14;
	uint64_t x22 = UINT64_MAX;
	static int8_t x23 = 5;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t2 = 16514270;

    t2 = ((x21/(x22/x23))<=x24);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x33 = UINT32_MAX;
	static volatile int8_t x35 = 16;
	int64_t x36 = INT64_MIN;
	volatile int32_t t3 = 437299;

    t3 = ((x33/(x34/x35))<=x36);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x38 = INT32_MAX;
	int32_t x39 = -1;
	int16_t x40 = 1;
	int32_t t4 = -2;

    t4 = ((x37/(x38/x39))<=x40);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x53 = 1;
	volatile int32_t x54 = INT32_MIN;
	static uint8_t x55 = 13U;
	int32_t x56 = INT32_MAX;
	int32_t t5 = -7690;

    t5 = ((x53/(x54/x55))<=x56);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x61 = INT16_MIN;
	volatile int16_t x62 = INT16_MAX;
	uint8_t x63 = 7U;
	int16_t x64 = 6;
	volatile int32_t t6 = 2;

    t6 = ((x61/(x62/x63))<=x64);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x65 = 87U;
	static int16_t x67 = -12;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t7 = 518341;

    t7 = ((x65/(x66/x67))<=x68);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x69 = 822522422U;
	int8_t x70 = -1;
	uint32_t x71 = 113U;
	static int16_t x72 = INT16_MIN;

    t8 = ((x69/(x70/x71))<=x72);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x77 = INT32_MIN;
	int16_t x79 = INT16_MAX;
	static volatile int32_t t9 = 54803;

    t9 = ((x77/(x78/x79))<=x80);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x89 = -1LL;
	volatile uint16_t x90 = 499U;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MAX;

    t10 = ((x89/(x90/x91))<=x92);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	volatile int32_t x95 = -399965;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t11 = 147066010;

    t11 = ((x93/(x94/x95))<=x96);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MIN;

    t12 = ((x97/(x98/x99))<=x100);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x105 = 121U;
	static uint32_t x106 = UINT32_MAX;
	static volatile int16_t x107 = INT16_MAX;
	int8_t x108 = -1;
	int32_t t13 = -4883448;

    t13 = ((x105/(x106/x107))<=x108);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x109 = UINT16_MAX;
	static int64_t x110 = -2354LL;
	int16_t x111 = 3;
	uint32_t x112 = 2592943U;
	volatile int32_t t14 = 559083;

    t14 = ((x109/(x110/x111))<=x112);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x122 = -4;
	uint64_t x123 = 31270964563LLU;
	static uint32_t x124 = UINT32_MAX;
	volatile int32_t t15 = -14;

    t15 = ((x121/(x122/x123))<=x124);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x129 = INT32_MIN;
	static uint32_t x130 = 197706404U;
	static volatile int64_t x132 = INT64_MIN;
	static volatile int32_t t16 = -49984;

    t16 = ((x129/(x130/x131))<=x132);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x133 = -1;
	static int16_t x135 = INT16_MIN;
	static volatile int32_t x136 = INT32_MIN;

    t17 = ((x133/(x134/x135))<=x136);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x145 = 30U;
	static int64_t x146 = 1068892304449203449LL;
	int32_t x147 = -1;
	static volatile int16_t x148 = 12868;
	static int32_t t18 = -1;

    t18 = ((x145/(x146/x147))<=x148);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x157 = -14;
	uint16_t x159 = UINT16_MAX;
	int32_t t19 = 43928292;

    t19 = ((x157/(x158/x159))<=x160);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x161 = 3;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = 1;
	volatile uint32_t x164 = 624052U;
	volatile int32_t t20 = -423;

    t20 = ((x161/(x162/x163))<=x164);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x169 = -1;
	int16_t x171 = INT16_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t21 = -9707696;

    t21 = ((x169/(x170/x171))<=x172);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x173 = 202781U;
	int64_t x174 = -1LL;
	volatile int32_t x176 = -1;

    t22 = ((x173/(x174/x175))<=x176);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x185 = INT32_MIN;
	volatile uint64_t x186 = UINT64_MAX;
	volatile int32_t x187 = -1;
	uint32_t x188 = 658U;
	volatile int32_t t23 = -793;

    t23 = ((x185/(x186/x187))<=x188);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x189 = 53;
	static volatile uint16_t x190 = 9U;
	int16_t x191 = -1;
	int64_t x192 = INT64_MIN;
	int32_t t24 = 1070919;

    t24 = ((x189/(x190/x191))<=x192);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x201 = 51028544U;
	int8_t x202 = INT8_MIN;
	static uint16_t x204 = 9U;
	int32_t t25 = 24719;

    t25 = ((x201/(x202/x203))<=x204);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 47U;
	volatile int32_t t26 = -89381177;

    t26 = ((x205/(x206/x207))<=x208);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t27 = 50502;

    t27 = ((x213/(x214/x215))<=x216);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x217 = -5LL;
	uint16_t x218 = 23743U;
	int8_t x219 = 1;
	volatile int32_t t28 = 8238586;

    t28 = ((x217/(x218/x219))<=x220);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x222 = UINT16_MAX;
	uint16_t x223 = UINT16_MAX;
	uint16_t x224 = 410U;
	volatile int32_t t29 = 334467;

    t29 = ((x221/(x222/x223))<=x224);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x253 = -1;
	int64_t x254 = 81530554664LL;
	static int8_t x255 = -1;

    t30 = ((x253/(x254/x255))<=x256);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MIN;
	uint8_t x264 = 14U;
	static int32_t t31 = -20607902;

    t31 = ((x261/(x262/x263))<=x264);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	static int8_t x275 = INT8_MIN;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t32 = 934342;

    t32 = ((x273/(x274/x275))<=x276);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x281 = 466646168U;
	int64_t x282 = INT64_MIN;
	static volatile int16_t x283 = INT16_MIN;

    t33 = ((x281/(x282/x283))<=x284);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x285 = 9U;
	uint16_t x287 = 33U;
	static int16_t x288 = -236;
	volatile int32_t t34 = 111904;

    t34 = ((x285/(x286/x287))<=x288);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x293 = INT8_MAX;
	int64_t x294 = INT64_MIN;
	int16_t x296 = -1;
	int32_t t35 = -44561;

    t35 = ((x293/(x294/x295))<=x296);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = -474536LL;
	static int32_t t36 = -4126815;

    t36 = ((x297/(x298/x299))<=x300);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x302 = 2548U;
	int64_t x303 = -1LL;
	int32_t x304 = INT32_MIN;
	int32_t t37 = -89490316;

    t37 = ((x301/(x302/x303))<=x304);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x313 = 1851742117044LLU;
	int64_t x314 = INT64_MIN;
	static volatile uint16_t x316 = 5U;
	int32_t t38 = -3096;

    t38 = ((x313/(x314/x315))<=x316);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MAX;

    t39 = ((x317/(x318/x319))<=x320);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = -37;
	static int32_t x327 = -1;
	static int32_t x328 = -1;

    t40 = ((x325/(x326/x327))<=x328);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x342 = -43;
	uint8_t x343 = 1U;
	static volatile int32_t t41 = -15361;

    t41 = ((x341/(x342/x343))<=x344);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	volatile uint8_t x383 = 49U;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t42 = -2870715;

    t42 = ((x381/(x382/x383))<=x384);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x385 = INT32_MIN;
	static uint64_t x386 = UINT64_MAX;
	static int8_t x387 = INT8_MIN;
	int8_t x388 = -1;
	volatile int32_t t43 = -5710102;

    t43 = ((x385/(x386/x387))<=x388);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x393 = 101096949LL;
	static volatile uint16_t x394 = 275U;
	uint8_t x395 = 23U;
	volatile int16_t x396 = INT16_MIN;

    t44 = ((x393/(x394/x395))<=x396);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x397 = 363741815LLU;
	static int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MAX;

    t45 = ((x397/(x398/x399))<=x400);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x401 = 14675455992653871LLU;
	int32_t x403 = 397;
	int8_t x404 = 16;
	volatile int32_t t46 = -7662;

    t46 = ((x401/(x402/x403))<=x404);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x410 = 5678U;
	int32_t x411 = -1;
	volatile int64_t x412 = INT64_MIN;
	int32_t t47 = -104;

    t47 = ((x409/(x410/x411))<=x412);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x413 = 0U;
	static uint16_t x414 = 3U;
	static int8_t x415 = -1;
	int8_t x416 = -1;
	static volatile int32_t t48 = -20;

    t48 = ((x413/(x414/x415))<=x416);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x421 = 8U;
	int32_t x423 = INT32_MIN;
	static int32_t t49 = 231115;

    t49 = ((x421/(x422/x423))<=x424);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x429 = INT8_MIN;
	int32_t x431 = 2;
	int16_t x432 = INT16_MIN;
	int32_t t50 = 2672;

    t50 = ((x429/(x430/x431))<=x432);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x434 = INT64_MAX;
	volatile int64_t x435 = -1LL;
	int16_t x436 = INT16_MIN;
	volatile int32_t t51 = -15;

    t51 = ((x433/(x434/x435))<=x436);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x441 = 2U;
	static volatile uint32_t x442 = 6530544U;
	uint32_t x443 = 2U;
	volatile uint64_t x444 = 1LLU;
	int32_t t52 = -798262216;

    t52 = ((x441/(x442/x443))<=x444);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x445 = INT8_MIN;
	static uint32_t x447 = 14201U;
	int64_t x448 = INT64_MIN;

    t53 = ((x445/(x446/x447))<=x448);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x453 = 28U;
	volatile uint32_t x454 = 41101546U;
	uint8_t x455 = UINT8_MAX;
	volatile uint64_t x456 = 2505378951961748LLU;
	volatile int32_t t54 = -1;

    t54 = ((x453/(x454/x455))<=x456);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x457 = INT64_MIN;
	int64_t x458 = INT64_MIN;
	uint32_t x459 = 49751381U;
	uint8_t x460 = 1U;
	volatile int32_t t55 = -126;

    t55 = ((x457/(x458/x459))<=x460);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x469 = 216;
	static uint16_t x470 = UINT16_MAX;
	int8_t x471 = -1;
	volatile int16_t x472 = -1;
	int32_t t56 = -3;

    t56 = ((x469/(x470/x471))<=x472);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x481 = -1;
	volatile uint16_t x482 = UINT16_MAX;
	volatile uint8_t x483 = 3U;
	int64_t x484 = -4885764707555146LL;
	static int32_t t57 = 249662172;

    t57 = ((x481/(x482/x483))<=x484);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x489 = -1;
	int32_t x490 = INT32_MIN;
	volatile uint8_t x492 = 3U;

    t58 = ((x489/(x490/x491))<=x492);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x500 = INT16_MIN;
	int32_t t59 = -90;

    t59 = ((x497/(x498/x499))<=x500);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x505 = INT64_MIN;
	int64_t x506 = -1816197366238558674LL;
	int64_t x507 = 968093237524LL;
	volatile int32_t t60 = 203948378;

    t60 = ((x505/(x506/x507))<=x508);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x510 = INT16_MIN;
	volatile int16_t x511 = INT16_MAX;
	int16_t x512 = INT16_MIN;

    t61 = ((x509/(x510/x511))<=x512);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x517 = 3U;
	static uint16_t x519 = 107U;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t62 = -1;

    t62 = ((x517/(x518/x519))<=x520);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MIN;
	static uint8_t x523 = 43U;
	int8_t x524 = INT8_MIN;
	static int32_t t63 = 16752213;

    t63 = ((x521/(x522/x523))<=x524);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x525 = UINT32_MAX;
	static volatile int64_t x526 = INT64_MIN;
	uint8_t x527 = UINT8_MAX;
	static volatile int64_t x528 = -1LL;
	static volatile int32_t t64 = -3093;

    t64 = ((x525/(x526/x527))<=x528);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile int32_t t65 = -8130774;

    t65 = ((x533/(x534/x535))<=x536);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x537 = INT8_MIN;
	int8_t x539 = 2;
	volatile uint16_t x540 = 62U;
	volatile int32_t t66 = -203467;

    t66 = ((x537/(x538/x539))<=x540);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x545 = INT16_MIN;
	int32_t x547 = INT32_MAX;
	int8_t x548 = -15;

    t67 = ((x545/(x546/x547))<=x548);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x557 = INT16_MIN;
	static int64_t x558 = INT64_MAX;
	int16_t x559 = INT16_MAX;
	int8_t x560 = 0;

    t68 = ((x557/(x558/x559))<=x560);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x566 = 25U;
	static volatile uint16_t x568 = 15793U;
	int32_t t69 = 7925684;

    t69 = ((x565/(x566/x567))<=x568);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x573 = 262756LL;
	int8_t x575 = INT8_MIN;
	static int32_t t70 = 32;

    t70 = ((x573/(x574/x575))<=x576);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x581 = 1810U;
	uint8_t x582 = UINT8_MAX;
	volatile int32_t t71 = 569;

    t71 = ((x581/(x582/x583))<=x584);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x585 = 1U;
	uint64_t x587 = 53276LLU;
	static volatile int32_t t72 = -1515238;

    t72 = ((x585/(x586/x587))<=x588);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x589 = 24172U;
	int32_t x590 = 186297;
	uint32_t x591 = 5U;
	static volatile int32_t t73 = -23216256;

    t73 = ((x589/(x590/x591))<=x592);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x601 = -1;
	int64_t x602 = INT64_MIN;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t74 = 44117;

    t74 = ((x601/(x602/x603))<=x604);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x605 = INT64_MIN;
	int8_t x606 = INT8_MIN;
	int16_t x607 = -1;
	int64_t x608 = INT64_MAX;
	int32_t t75 = -977038;

    t75 = ((x605/(x606/x607))<=x608);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x615 = -3396443;
	int8_t x616 = -7;
	static volatile int32_t t76 = -464657668;

    t76 = ((x613/(x614/x615))<=x616);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x621 = INT16_MIN;
	volatile uint16_t x623 = 8038U;
	static int8_t x624 = INT8_MIN;

    t77 = ((x621/(x622/x623))<=x624);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x625 = INT16_MIN;
	static int64_t x626 = INT64_MIN;
	uint16_t x627 = 6149U;

    t78 = ((x625/(x626/x627))<=x628);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x645 = -1;
	volatile int32_t x646 = -2769116;
	volatile uint32_t x647 = 100763921U;
	static int8_t x648 = INT8_MIN;
	int32_t t79 = 16639348;

    t79 = ((x645/(x646/x647))<=x648);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x649 = UINT64_MAX;
	static int16_t x650 = INT16_MIN;
	int16_t x651 = -1;
	int16_t x652 = -4315;
	volatile int32_t t80 = 1;

    t80 = ((x649/(x650/x651))<=x652);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x665 = 57724560U;
	int64_t x666 = INT64_MIN;
	uint32_t x667 = 2U;
	volatile int32_t t81 = 13807;

    t81 = ((x665/(x666/x667))<=x668);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x670 = INT8_MIN;
	int8_t x671 = INT8_MIN;
	int16_t x672 = -5;
	volatile int32_t t82 = 96714575;

    t82 = ((x669/(x670/x671))<=x672);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x673 = 2743LLU;
	uint16_t x674 = 1171U;
	uint8_t x675 = 31U;
	uint8_t x676 = UINT8_MAX;

    t83 = ((x673/(x674/x675))<=x676);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x677 = INT32_MAX;
	uint16_t x678 = 393U;
	static volatile int64_t x679 = -1LL;

    t84 = ((x677/(x678/x679))<=x680);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x681 = INT16_MIN;
	volatile int32_t x682 = INT32_MIN;
	uint8_t x683 = 40U;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t85 = 33;

    t85 = ((x681/(x682/x683))<=x684);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x689 = -1;
	int8_t x690 = INT8_MIN;
	static int16_t x691 = -1;
	uint8_t x692 = UINT8_MAX;
	int32_t t86 = -638125212;

    t86 = ((x689/(x690/x691))<=x692);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x695 = -45;
	int64_t x696 = -1LL;
	static int32_t t87 = 18385;

    t87 = ((x693/(x694/x695))<=x696);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x697 = INT16_MAX;
	uint16_t x698 = 283U;
	int16_t x699 = -3;
	int32_t x700 = 122208750;
	static volatile int32_t t88 = -958893324;

    t88 = ((x697/(x698/x699))<=x700);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x701 = INT32_MIN;
	uint64_t x702 = UINT64_MAX;
	volatile int8_t x704 = -1;
	volatile int32_t t89 = -2259;

    t89 = ((x701/(x702/x703))<=x704);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x705 = INT8_MIN;
	static volatile uint32_t x707 = 3U;
	volatile int32_t t90 = 0;

    t90 = ((x705/(x706/x707))<=x708);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x709 = 4U;
	uint8_t x710 = 2U;
	int32_t t91 = 10;

    t91 = ((x709/(x710/x711))<=x712);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x713 = UINT16_MAX;
	uint32_t x714 = UINT32_MAX;
	uint16_t x715 = UINT16_MAX;
	static int32_t t92 = -1;

    t92 = ((x713/(x714/x715))<=x716);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x717 = INT32_MIN;
	int8_t x718 = -1;
	int32_t t93 = -7;

    t93 = ((x717/(x718/x719))<=x720);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x721 = UINT8_MAX;
	int64_t x723 = -1LL;
	static uint64_t x724 = UINT64_MAX;
	volatile int32_t t94 = 75422932;

    t94 = ((x721/(x722/x723))<=x724);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x725 = INT16_MAX;
	int64_t x726 = -715007637487007655LL;
	uint8_t x727 = UINT8_MAX;
	volatile int16_t x728 = INT16_MIN;
	volatile int32_t t95 = -192507824;

    t95 = ((x725/(x726/x727))<=x728);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x729 = 432492367LL;
	int64_t x730 = INT64_MAX;
	uint8_t x732 = 82U;
	volatile int32_t t96 = -101;

    t96 = ((x729/(x730/x731))<=x732);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x745 = -1LL;
	int8_t x747 = -1;
	uint8_t x748 = 3U;
	static volatile int32_t t97 = 401697229;

    t97 = ((x745/(x746/x747))<=x748);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x749 = INT8_MAX;
	int64_t x750 = 36434502LL;
	uint32_t x751 = 18U;
	volatile int32_t t98 = 4022;

    t98 = ((x749/(x750/x751))<=x752);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x757 = INT16_MAX;
	static int64_t x758 = INT64_MAX;
	int8_t x759 = INT8_MIN;
	int64_t x760 = -1LL;

    t99 = ((x757/(x758/x759))<=x760);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x761 = -1LL;
	volatile int16_t x762 = 81;
	int32_t x763 = -1;
	volatile int32_t t100 = 11748;

    t100 = ((x761/(x762/x763))<=x764);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x765 = INT32_MIN;
	int16_t x766 = INT16_MAX;
	int16_t x767 = INT16_MAX;
	int32_t t101 = -7;

    t101 = ((x765/(x766/x767))<=x768);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x793 = INT8_MIN;
	static int8_t x794 = 31;
	int8_t x795 = -1;
	static volatile int32_t x796 = -14282;
	int32_t t102 = -50516;

    t102 = ((x793/(x794/x795))<=x796);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x801 = -31;
	int64_t x802 = INT64_MIN;
	static uint64_t x803 = 226154199046415LLU;
	int32_t x804 = -1;
	int32_t t103 = -806937539;

    t103 = ((x801/(x802/x803))<=x804);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x805 = -1;
	int32_t x807 = -1;
	int16_t x808 = -23;

    t104 = ((x805/(x806/x807))<=x808);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x821 = 2186282431LLU;
	uint64_t x822 = UINT64_MAX;
	static int64_t x823 = INT64_MIN;
	volatile uint32_t x824 = UINT32_MAX;
	volatile int32_t t105 = 115774;

    t105 = ((x821/(x822/x823))<=x824);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x833 = -1;
	int64_t x834 = INT64_MIN;
	volatile uint8_t x835 = UINT8_MAX;
	int64_t x836 = INT64_MAX;
	volatile int32_t t106 = 1033;

    t106 = ((x833/(x834/x835))<=x836);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x845 = INT64_MIN;
	uint16_t x846 = 26265U;
	uint32_t x847 = 195U;
	int32_t t107 = 6133;

    t107 = ((x845/(x846/x847))<=x848);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x849 = 6444LLU;
	uint64_t x850 = UINT64_MAX;
	uint16_t x852 = 3993U;
	int32_t t108 = -58;

    t108 = ((x849/(x850/x851))<=x852);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x865 = INT64_MIN;
	int8_t x866 = INT8_MIN;
	int64_t x867 = -1LL;
	int32_t x868 = -1;
	int32_t t109 = -48931;

    t109 = ((x865/(x866/x867))<=x868);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x869 = INT64_MIN;
	uint8_t x871 = 7U;
	int32_t x872 = 2395;
	static int32_t t110 = 0;

    t110 = ((x869/(x870/x871))<=x872);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x877 = INT16_MAX;
	int16_t x878 = INT16_MAX;
	int32_t x879 = -236;
	int32_t t111 = -16402552;

    t111 = ((x877/(x878/x879))<=x880);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x881 = INT32_MIN;
	uint32_t x882 = UINT32_MAX;
	static int16_t x884 = INT16_MAX;
	int32_t t112 = 3;

    t112 = ((x881/(x882/x883))<=x884);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x889 = INT16_MIN;
	uint16_t x890 = UINT16_MAX;
	volatile int16_t x891 = 4023;
	int64_t x892 = -792695178LL;

    t113 = ((x889/(x890/x891))<=x892);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x893 = INT8_MIN;

    t114 = ((x893/(x894/x895))<=x896);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x897 = INT32_MIN;
	int64_t x898 = INT64_MIN;
	static volatile uint32_t x899 = 364773956U;
	uint64_t x900 = UINT64_MAX;
	volatile int32_t t115 = -7489;

    t115 = ((x897/(x898/x899))<=x900);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x901 = 1;
	int64_t x902 = INT64_MIN;
	int64_t x903 = INT64_MAX;
	int16_t x904 = INT16_MAX;
	static int32_t t116 = -92364;

    t116 = ((x901/(x902/x903))<=x904);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x914 = -46;
	uint32_t x916 = UINT32_MAX;

    t117 = ((x913/(x914/x915))<=x916);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x917 = INT8_MIN;
	int64_t x918 = INT64_MAX;
	int16_t x919 = INT16_MAX;
	int32_t x920 = INT32_MIN;

    t118 = ((x917/(x918/x919))<=x920);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x937 = UINT32_MAX;
	volatile int64_t x938 = -27245LL;
	volatile int8_t x939 = 8;
	volatile int32_t t119 = -11;

    t119 = ((x937/(x938/x939))<=x940);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x949 = INT16_MIN;
	volatile uint64_t x950 = UINT64_MAX;
	int16_t x951 = -1;
	static int16_t x952 = INT16_MIN;
	static volatile int32_t t120 = 757707491;

    t120 = ((x949/(x950/x951))<=x952);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x958 = INT32_MAX;
	static volatile uint8_t x959 = 2U;
	int64_t x960 = INT64_MIN;
	int32_t t121 = -49045;

    t121 = ((x957/(x958/x959))<=x960);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x961 = INT64_MIN;
	int32_t x962 = -269622672;
	static volatile int32_t t122 = -243857;

    t122 = ((x961/(x962/x963))<=x964);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x965 = 1055U;
	static volatile int64_t x966 = INT64_MAX;
	uint16_t x967 = 27840U;
	volatile int32_t x968 = 716067148;
	volatile int32_t t123 = 843;

    t123 = ((x965/(x966/x967))<=x968);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x969 = 5;
	static volatile uint16_t x970 = UINT16_MAX;
	uint32_t x972 = UINT32_MAX;

    t124 = ((x969/(x970/x971))<=x972);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x990 = UINT64_MAX;
	uint16_t x991 = UINT16_MAX;
	static volatile int64_t x992 = INT64_MIN;
	int32_t t125 = -26;

    t125 = ((x989/(x990/x991))<=x992);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x993 = 1;
	int64_t x994 = -91569774734869LL;
	int32_t x995 = 1389;
	int8_t x996 = INT8_MIN;
	int32_t t126 = -1681262;

    t126 = ((x993/(x994/x995))<=x996);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1005 = 1U;
	int64_t x1006 = INT64_MIN;
	static int64_t x1007 = 1673961LL;
	int8_t x1008 = 0;
	int32_t t127 = 305048;

    t127 = ((x1005/(x1006/x1007))<=x1008);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x1011 = INT8_MAX;
	volatile int8_t x1012 = -2;
	volatile int32_t t128 = -326954;

    t128 = ((x1009/(x1010/x1011))<=x1012);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1018 = INT32_MIN;
	int16_t x1019 = 1;
	static volatile int32_t t129 = -10260697;

    t129 = ((x1017/(x1018/x1019))<=x1020);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1041 = -1;
	int32_t x1044 = -1;

    t130 = ((x1041/(x1042/x1043))<=x1044);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1053 = INT32_MAX;
	int8_t x1055 = INT8_MIN;
	static int64_t x1056 = -1LL;
	volatile int32_t t131 = -5553;

    t131 = ((x1053/(x1054/x1055))<=x1056);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x1058 = UINT32_MAX;
	int64_t x1059 = -184LL;
	volatile int8_t x1060 = -1;
	volatile int32_t t132 = 3346168;

    t132 = ((x1057/(x1058/x1059))<=x1060);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1062 = INT16_MIN;
	uint64_t x1063 = 2589435670391782542LLU;
	static int64_t x1064 = INT64_MIN;
	static int32_t t133 = 16;

    t133 = ((x1061/(x1062/x1063))<=x1064);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1077 = INT64_MAX;
	int16_t x1078 = -1;
	static uint64_t x1079 = UINT64_MAX;
	static uint8_t x1080 = UINT8_MAX;

    t134 = ((x1077/(x1078/x1079))<=x1080);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1081 = INT8_MIN;
	static volatile uint32_t x1082 = 44U;
	int64_t x1083 = -1LL;
	uint8_t x1084 = 27U;

    t135 = ((x1081/(x1082/x1083))<=x1084);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x1089 = UINT64_MAX;
	volatile int16_t x1090 = INT16_MAX;
	static int32_t x1091 = -32;
	static volatile int32_t t136 = -777806;

    t136 = ((x1089/(x1090/x1091))<=x1092);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1095 = -3;
	int16_t x1096 = INT16_MAX;

    t137 = ((x1093/(x1094/x1095))<=x1096);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1101 = UINT8_MAX;
	static int32_t x1103 = INT32_MIN;
	static volatile int32_t t138 = -29456037;

    t138 = ((x1101/(x1102/x1103))<=x1104);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x1110 = -379346823936016009LL;
	int8_t x1111 = 59;
	int8_t x1112 = INT8_MAX;
	static volatile int32_t t139 = 24239;

    t139 = ((x1109/(x1110/x1111))<=x1112);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1121 = INT32_MIN;
	int32_t x1122 = INT32_MAX;
	int16_t x1123 = -12;
	volatile int32_t t140 = 92;

    t140 = ((x1121/(x1122/x1123))<=x1124);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1126 = INT8_MIN;
	volatile int64_t x1127 = -1LL;
	volatile uint8_t x1128 = UINT8_MAX;
	volatile int32_t t141 = 1;

    t141 = ((x1125/(x1126/x1127))<=x1128);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x1129 = INT64_MIN;
	static int64_t x1130 = INT64_MIN;
	int64_t x1131 = -26053519243269LL;
	int64_t x1132 = INT64_MIN;
	volatile int32_t t142 = -1;

    t142 = ((x1129/(x1130/x1131))<=x1132);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x1133 = INT32_MIN;
	int8_t x1135 = -1;
	int64_t x1136 = INT64_MIN;
	volatile int32_t t143 = 9240941;

    t143 = ((x1133/(x1134/x1135))<=x1136);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1141 = 1456;
	uint8_t x1143 = 32U;
	static volatile uint64_t x1144 = UINT64_MAX;
	int32_t t144 = 705583826;

    t144 = ((x1141/(x1142/x1143))<=x1144);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1149 = UINT16_MAX;
	int16_t x1150 = -1;
	int16_t x1151 = -1;
	int8_t x1152 = 17;
	volatile int32_t t145 = 15575480;

    t145 = ((x1149/(x1150/x1151))<=x1152);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1169 = INT8_MIN;
	volatile uint64_t x1171 = 9384713189698720LLU;
	int32_t t146 = 8138343;

    t146 = ((x1169/(x1170/x1171))<=x1172);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1173 = 438LLU;
	volatile uint64_t x1174 = UINT64_MAX;
	volatile uint64_t x1175 = 44377613LLU;
	int32_t x1176 = INT32_MIN;
	volatile int32_t t147 = 12775553;

    t147 = ((x1173/(x1174/x1175))<=x1176);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1177 = -1;
	int64_t x1178 = INT64_MAX;
	int16_t x1179 = INT16_MIN;
	int8_t x1180 = INT8_MIN;
	static volatile int32_t t148 = -412699805;

    t148 = ((x1177/(x1178/x1179))<=x1180);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1181 = -62208325;
	volatile uint32_t x1182 = 1029008U;
	uint8_t x1183 = UINT8_MAX;
	volatile int16_t x1184 = 117;
	static volatile int32_t t149 = -730790;

    t149 = ((x1181/(x1182/x1183))<=x1184);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1185 = INT16_MIN;
	int16_t x1186 = INT16_MIN;
	int32_t t150 = 35452;

    t150 = ((x1185/(x1186/x1187))<=x1188);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x1189 = -1;
	uint8_t x1190 = 3U;
	static int32_t x1191 = -1;
	int8_t x1192 = -1;
	volatile int32_t t151 = -2860950;

    t151 = ((x1189/(x1190/x1191))<=x1192);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1199 = 432U;
	uint8_t x1200 = 0U;
	int32_t t152 = -434;

    t152 = ((x1197/(x1198/x1199))<=x1200);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint32_t x1209 = 26U;
	volatile uint64_t x1210 = UINT64_MAX;
	int8_t x1211 = 20;
	int32_t x1212 = -7;

    t153 = ((x1209/(x1210/x1211))<=x1212);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1214 = 718U;
	uint16_t x1215 = 5U;
	volatile int16_t x1216 = 1;
	volatile int32_t t154 = 69;

    t154 = ((x1213/(x1214/x1215))<=x1216);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x1237 = INT32_MAX;
	static uint64_t x1238 = UINT64_MAX;
	uint16_t x1239 = UINT16_MAX;
	uint32_t x1240 = UINT32_MAX;
	static volatile int32_t t155 = 9347583;

    t155 = ((x1237/(x1238/x1239))<=x1240);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x1242 = INT8_MIN;
	uint8_t x1243 = 22U;
	int32_t t156 = 15097833;

    t156 = ((x1241/(x1242/x1243))<=x1244);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1245 = 1;
	int8_t x1246 = INT8_MIN;
	int8_t x1247 = INT8_MIN;
	int32_t t157 = 153;

    t157 = ((x1245/(x1246/x1247))<=x1248);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x1250 = -1117;
	uint64_t x1252 = UINT64_MAX;
	int32_t t158 = -44966;

    t158 = ((x1249/(x1250/x1251))<=x1252);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x1257 = INT16_MIN;
	int64_t x1258 = INT64_MAX;

    t159 = ((x1257/(x1258/x1259))<=x1260);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1261 = -2030133LL;
	uint8_t x1262 = 5U;
	uint16_t x1263 = 1U;
	uint16_t x1264 = 70U;
	int32_t t160 = -71;

    t160 = ((x1261/(x1262/x1263))<=x1264);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1265 = INT32_MIN;
	uint8_t x1266 = UINT8_MAX;
	uint16_t x1268 = 5U;

    t161 = ((x1265/(x1266/x1267))<=x1268);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1269 = 508259984270451834LLU;
	volatile int32_t x1270 = INT32_MIN;
	static volatile int8_t x1271 = 24;
	static uint64_t x1272 = UINT64_MAX;
	volatile int32_t t162 = -2229424;

    t162 = ((x1269/(x1270/x1271))<=x1272);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1273 = 3170U;
	int16_t x1274 = -1;
	static uint16_t x1275 = 1U;
	static int16_t x1276 = -7138;
	volatile int32_t t163 = -1457051;

    t163 = ((x1273/(x1274/x1275))<=x1276);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1281 = INT64_MAX;
	uint32_t x1282 = 108102155U;
	volatile uint32_t x1283 = 90U;
	volatile int32_t t164 = 0;

    t164 = ((x1281/(x1282/x1283))<=x1284);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x1285 = UINT16_MAX;
	int32_t x1286 = INT32_MIN;
	static volatile int16_t x1287 = INT16_MAX;
	int32_t t165 = -454434;

    t165 = ((x1285/(x1286/x1287))<=x1288);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1289 = 46U;
	int16_t x1290 = INT16_MIN;
	int16_t x1291 = INT16_MIN;
	volatile int32_t t166 = 13733352;

    t166 = ((x1289/(x1290/x1291))<=x1292);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x1293 = -1;
	volatile int8_t x1294 = 12;
	uint8_t x1295 = 2U;
	uint16_t x1296 = 6U;
	int32_t t167 = 14214;

    t167 = ((x1293/(x1294/x1295))<=x1296);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1297 = INT64_MIN;
	int32_t x1298 = -9253;
	int32_t t168 = 3004731;

    t168 = ((x1297/(x1298/x1299))<=x1300);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x1305 = INT32_MAX;
	uint8_t x1307 = 2U;
	volatile uint8_t x1308 = 39U;
	int32_t t169 = -248;

    t169 = ((x1305/(x1306/x1307))<=x1308);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1313 = INT16_MIN;
	static int16_t x1315 = INT16_MIN;
	static int64_t x1316 = INT64_MIN;
	int32_t t170 = 184;

    t170 = ((x1313/(x1314/x1315))<=x1316);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x1325 = INT8_MAX;
	static uint8_t x1326 = 3U;
	volatile uint8_t x1327 = 1U;
	static uint64_t x1328 = 4170865246415LLU;

    t171 = ((x1325/(x1326/x1327))<=x1328);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1329 = 2095865387U;
	int64_t x1330 = INT64_MIN;
	volatile int64_t x1331 = -2504LL;
	int32_t x1332 = INT32_MIN;
	static int32_t t172 = -52080032;

    t172 = ((x1329/(x1330/x1331))<=x1332);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1333 = 16;
	static int16_t x1335 = -1;
	int32_t t173 = 1003852638;

    t173 = ((x1333/(x1334/x1335))<=x1336);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1353 = 1;
	uint32_t x1354 = 47691U;
	static volatile uint8_t x1355 = 28U;
	uint16_t x1356 = 6U;
	volatile int32_t t174 = -39;

    t174 = ((x1353/(x1354/x1355))<=x1356);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1361 = 879U;
	int16_t x1362 = INT16_MIN;
	uint32_t x1363 = 44U;
	static volatile int8_t x1364 = -1;
	int32_t t175 = 55;

    t175 = ((x1361/(x1362/x1363))<=x1364);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x1369 = INT16_MAX;
	static int32_t x1371 = 1;
	uint64_t x1372 = 16201LLU;
	volatile int32_t t176 = -16792;

    t176 = ((x1369/(x1370/x1371))<=x1372);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1373 = INT64_MAX;
	volatile int32_t x1374 = INT32_MAX;
	volatile int32_t x1376 = -1;

    t177 = ((x1373/(x1374/x1375))<=x1376);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1381 = 7U;
	int32_t x1382 = 10;
	volatile int32_t x1383 = -1;
	static uint16_t x1384 = 0U;

    t178 = ((x1381/(x1382/x1383))<=x1384);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1389 = UINT8_MAX;
	int32_t x1390 = -148;
	int8_t x1391 = INT8_MAX;
	uint16_t x1392 = 113U;
	static volatile int32_t t179 = 32719;

    t179 = ((x1389/(x1390/x1391))<=x1392);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1393 = -2811409351719LL;
	uint16_t x1395 = UINT16_MAX;
	volatile int32_t t180 = -50751518;

    t180 = ((x1393/(x1394/x1395))<=x1396);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1401 = 19024U;
	uint8_t x1402 = UINT8_MAX;
	uint8_t x1403 = 3U;
	static volatile int64_t x1404 = -1LL;
	static int32_t t181 = 82;

    t181 = ((x1401/(x1402/x1403))<=x1404);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1409 = 39U;
	int32_t x1410 = INT32_MIN;
	int32_t x1411 = -8308501;
	uint8_t x1412 = 1U;
	int32_t t182 = -939827310;

    t182 = ((x1409/(x1410/x1411))<=x1412);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1413 = 2U;
	uint64_t x1414 = UINT64_MAX;
	uint16_t x1415 = 7350U;
	static int16_t x1416 = INT16_MIN;
	int32_t t183 = 7993056;

    t183 = ((x1413/(x1414/x1415))<=x1416);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1429 = INT16_MAX;
	int8_t x1431 = 1;
	uint64_t x1432 = UINT64_MAX;
	int32_t t184 = -11757;

    t184 = ((x1429/(x1430/x1431))<=x1432);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1433 = 1U;
	uint64_t x1434 = 872LLU;
	uint32_t x1435 = 10U;
	volatile int32_t t185 = -109158;

    t185 = ((x1433/(x1434/x1435))<=x1436);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1437 = -1;
	uint32_t x1438 = 7U;
	uint32_t x1440 = UINT32_MAX;

    t186 = ((x1437/(x1438/x1439))<=x1440);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1441 = INT32_MIN;
	volatile uint32_t x1442 = UINT32_MAX;
	uint8_t x1443 = 1U;
	int32_t x1444 = INT32_MIN;

    t187 = ((x1441/(x1442/x1443))<=x1444);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1449 = -1LL;
	int8_t x1451 = 1;

    t188 = ((x1449/(x1450/x1451))<=x1452);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1469 = -60;
	volatile int16_t x1472 = 151;
	static int32_t t189 = -770810417;

    t189 = ((x1469/(x1470/x1471))<=x1472);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1473 = -4917319;
	static uint16_t x1474 = UINT16_MAX;
	volatile uint8_t x1475 = 9U;
	int16_t x1476 = INT16_MIN;
	int32_t t190 = 547;

    t190 = ((x1473/(x1474/x1475))<=x1476);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1489 = -1;
	uint32_t x1490 = 443563U;
	uint16_t x1491 = 29U;
	volatile uint16_t x1492 = 5680U;

    t191 = ((x1489/(x1490/x1491))<=x1492);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1494 = 75U;
	static volatile int64_t x1495 = -1LL;
	int8_t x1496 = INT8_MIN;
	volatile int32_t t192 = 113427;

    t192 = ((x1493/(x1494/x1495))<=x1496);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1497 = INT64_MIN;
	static int64_t x1498 = -28089871LL;
	int64_t x1499 = -1LL;
	int64_t x1500 = INT64_MAX;

    t193 = ((x1497/(x1498/x1499))<=x1500);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1505 = -32LL;
	uint32_t x1506 = UINT32_MAX;
	int8_t x1507 = -18;
	int32_t t194 = 457785782;

    t194 = ((x1505/(x1506/x1507))<=x1508);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1509 = INT64_MIN;
	volatile int8_t x1510 = INT8_MIN;
	int8_t x1511 = INT8_MIN;
	int64_t x1512 = INT64_MIN;
	static volatile int32_t t195 = -7;

    t195 = ((x1509/(x1510/x1511))<=x1512);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1517 = INT8_MIN;
	static uint32_t x1518 = UINT32_MAX;
	static uint64_t x1519 = 3843627LLU;
	int64_t x1520 = INT64_MIN;
	int32_t t196 = -12505;

    t196 = ((x1517/(x1518/x1519))<=x1520);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1521 = 4U;
	volatile int64_t x1522 = 1926832089LL;
	int8_t x1523 = INT8_MIN;
	int64_t x1524 = INT64_MIN;

    t197 = ((x1521/(x1522/x1523))<=x1524);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1525 = UINT64_MAX;
	int32_t x1526 = INT32_MIN;
	int32_t x1527 = 4;
	uint64_t x1528 = 140LLU;
	volatile int32_t t198 = 248;

    t198 = ((x1525/(x1526/x1527))<=x1528);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1529 = INT64_MIN;
	uint16_t x1530 = UINT16_MAX;
	static uint8_t x1531 = 13U;
	int32_t t199 = -117030;

    t199 = ((x1529/(x1530/x1531))<=x1532);

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

