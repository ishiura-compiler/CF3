
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

int32_t x4 = INT32_MAX;
volatile uint8_t x10 = 6U;
int32_t x11 = INT32_MIN;
static int32_t t1 = 36;
static int16_t x23 = INT16_MIN;
static volatile int32_t t3 = 565812;
volatile uint16_t x33 = 98U;
volatile int32_t t6 = 5872;
static int8_t x53 = 3;
uint32_t x54 = 30756U;
volatile uint32_t t7 = 13537U;
uint32_t x71 = 31U;
volatile uint64_t t9 = 249912LLU;
uint8_t x83 = 1U;
int32_t t11 = -3417;
int8_t x88 = -1;
uint32_t x102 = 2163772U;
static volatile int16_t x108 = -1969;
volatile int64_t t18 = -9037224123707LL;
volatile int32_t x136 = INT32_MIN;
uint8_t x142 = 16U;
uint8_t x144 = UINT8_MAX;
int64_t t27 = 7963113702706LL;
int32_t x173 = INT32_MIN;
int8_t x175 = -1;
int16_t x177 = 3650;
int64_t x183 = INT64_MIN;
int32_t x189 = INT32_MAX;
int64_t x190 = -1LL;
uint16_t x195 = UINT16_MAX;
int16_t x206 = INT16_MIN;
int32_t x207 = INT32_MIN;
static int16_t x208 = INT16_MIN;
int16_t x211 = 838;
static int16_t x212 = 206;
volatile int32_t t36 = 31403059;
static int8_t x230 = INT8_MIN;
int32_t x232 = -1;
int16_t x236 = 6;
volatile uint64_t t38 = 834541133LLU;
uint16_t x247 = 6260U;
volatile int64_t x253 = -1LL;
int8_t x254 = -1;
uint32_t t43 = 2U;
uint16_t x280 = 14195U;
uint32_t x291 = 21U;
static volatile uint16_t x292 = 0U;
volatile uint32_t t45 = 1776815548U;
int64_t x300 = INT64_MIN;
int32_t x309 = INT32_MIN;
volatile int32_t x312 = INT32_MIN;
int16_t x317 = -1;
int8_t x319 = INT8_MIN;
uint64_t x322 = UINT64_MAX;
uint16_t x342 = 312U;
int8_t x343 = INT8_MIN;
volatile int16_t x352 = INT16_MIN;
static int8_t x360 = -1;
volatile int32_t t55 = 4051993;
uint16_t x373 = UINT16_MAX;
int64_t x375 = -322892534536LL;
uint16_t x397 = 4U;
int32_t x399 = INT32_MIN;
uint8_t x407 = 0U;
static volatile int32_t x408 = INT32_MIN;
uint32_t x417 = 1681U;
uint8_t x419 = UINT8_MAX;
static int64_t x430 = -54149286919LL;
volatile uint64_t t67 = 428206772122375119LLU;
int16_t x451 = 6812;
volatile int32_t x457 = INT32_MIN;
uint32_t x458 = 7317501U;
volatile uint32_t t69 = 1U;
volatile int16_t x463 = 0;
int32_t x471 = INT32_MAX;
uint16_t x473 = 2U;
static uint16_t x475 = UINT16_MAX;
int8_t x481 = INT8_MIN;
static int32_t x483 = INT32_MIN;
uint16_t x488 = 39U;
uint8_t x514 = 88U;
int32_t x518 = INT32_MAX;
uint64_t x521 = 4LLU;
volatile int16_t x524 = -1891;
int16_t x533 = -1;
int32_t x539 = -1;
static uint32_t x540 = 15975U;
int16_t x547 = INT16_MIN;
volatile uint32_t x548 = UINT32_MAX;
int8_t x551 = INT8_MAX;
int32_t t85 = 115389239;
int16_t x553 = -1;
uint32_t x559 = 26U;
volatile uint64_t x565 = 54022299840523544LLU;
int8_t x566 = 0;
volatile int32_t x568 = INT32_MIN;
volatile int8_t x569 = -1;
volatile int32_t t90 = 935817;
int8_t x575 = -1;
uint32_t x580 = 13474143U;
int16_t x586 = -1;
int32_t t93 = 81038;
volatile uint64_t t94 = 1490044178LLU;
int8_t x594 = INT8_MIN;
int32_t x595 = INT32_MAX;
int32_t x599 = INT32_MIN;
int32_t x602 = INT32_MAX;
volatile uint32_t t97 = 62405561U;
int16_t x612 = INT16_MAX;
uint64_t x613 = UINT64_MAX;
int64_t x619 = INT64_MIN;
int64_t x662 = INT64_MIN;
static uint32_t x664 = 154U;
static uint64_t x668 = 1909177467306LLU;
volatile uint64_t t105 = 60LLU;
static int8_t x669 = INT8_MIN;
uint32_t t106 = 31U;
int8_t x686 = INT8_MAX;
volatile uint64_t x693 = 44005187257LLU;
static int8_t x707 = 3;
int8_t x708 = 40;
volatile uint64_t x722 = 1707360485526317LLU;
uint64_t x749 = 3584LLU;
static int64_t x770 = INT64_MIN;
int8_t x777 = -1;
int32_t x778 = INT32_MIN;
static int32_t t118 = INT32_MAX;
int8_t x810 = INT8_MIN;
uint64_t x834 = 1089789655187761LLU;
static volatile uint64_t t124 = 59296117229LLU;
volatile int32_t x843 = INT32_MAX;
uint64_t x844 = UINT64_MAX;
int64_t x851 = INT64_MIN;
int8_t x859 = -31;
uint64_t x860 = 236797LLU;
int32_t x865 = 792394032;
uint32_t x866 = UINT32_MAX;
static volatile uint32_t t130 = 65344U;
static int8_t x879 = 12;
static volatile int8_t x880 = INT8_MIN;
volatile int16_t x885 = -1;
volatile uint16_t x889 = 207U;
int64_t x903 = INT64_MIN;
uint32_t x913 = UINT32_MAX;
int64_t x921 = INT64_MAX;
uint8_t x924 = UINT8_MAX;
int8_t x943 = -1;
static uint32_t t142 = 4977280U;
volatile int64_t t143 = 13719403380LL;
uint32_t x959 = 173U;
uint64_t x963 = UINT64_MAX;
volatile int32_t x992 = INT32_MIN;
int32_t x1022 = INT32_MIN;
volatile int32_t t148 = -189975;
static volatile int64_t x1030 = -2071855560478334LL;
static int64_t x1041 = INT64_MIN;
int32_t x1051 = 2019;
int32_t x1052 = -1;
int32_t t153 = -129320793;
int16_t x1062 = -1;
volatile int32_t t155 = 1356155;
static volatile uint16_t x1067 = 24973U;
uint32_t x1085 = 1776597087U;
static int16_t x1088 = INT16_MIN;
uint16_t x1118 = UINT16_MAX;
int16_t x1120 = -1;
int16_t x1124 = INT16_MIN;
int32_t t163 = -15610;
volatile int8_t x1125 = -1;
volatile uint64_t x1127 = 33502464026822577LLU;
int32_t t164 = INT32_MAX;
int32_t x1139 = INT32_MAX;
volatile uint64_t t165 = 8401LLU;
int64_t t166 = 3578848393LL;
uint32_t x1153 = 9568091U;
static volatile uint8_t x1169 = 87U;
static int64_t t170 = -1117026LL;
uint32_t x1185 = 15208U;
uint32_t x1186 = 83804U;
uint32_t x1190 = 760U;
uint32_t t173 = 4U;
uint32_t t174 = 156U;
int64_t x1202 = -1LL;
static int8_t x1206 = INT8_MIN;
int16_t x1227 = -1;
int32_t x1255 = INT32_MIN;
int32_t x1258 = INT32_MIN;
static uint32_t x1262 = 70953U;
volatile int32_t x1263 = -1;
uint32_t t183 = 90812495U;
volatile int32_t x1266 = -1;
uint32_t x1267 = UINT32_MAX;
uint32_t x1268 = 0U;
int64_t x1270 = INT64_MIN;
volatile int32_t x1272 = INT32_MIN;
volatile int32_t x1274 = INT32_MIN;
uint8_t x1287 = UINT8_MAX;
uint64_t t187 = 619LLU;
uint64_t x1302 = 986812813711280LLU;
uint64_t t189 = 286048LLU;
static int8_t x1311 = -60;
volatile int64_t t191 = -19LL;
uint32_t x1321 = UINT32_MAX;
uint32_t x1322 = 242949U;
uint32_t t192 = 157688563U;
uint8_t x1326 = UINT8_MAX;
volatile int32_t t193 = 940026;
uint8_t x1330 = UINT8_MAX;
int64_t x1332 = -285804984LL;
int64_t x1340 = 3012725LL;
uint64_t x1359 = 4856559397127805761LLU;
static int64_t x1360 = INT64_MIN;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int64_t x2 = -1LL;
	int8_t x3 = -1;
	volatile uint64_t t0 = 1120777970918590LLU;

    t0 = ((x1-x2)<<(x3==x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = 67;
	uint32_t x12 = UINT32_MAX;

    t1 = ((x9-x10)<<(x11==x12));

    if (t1 != 61) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x17 = 16121U;
	int8_t x18 = INT8_MIN;
	int64_t x19 = 5438240625757LL;
	volatile int16_t x20 = -1;
	static int32_t t2 = -3102601;

    t2 = ((x17-x18)<<(x19==x20));

    if (t2 != 16249) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = 0;
	int16_t x22 = 0;
	uint64_t x24 = UINT64_MAX;

    t3 = ((x21-x22)<<(x23==x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x29 = 4609819543656294LLU;
	uint8_t x30 = 126U;
	volatile uint32_t x31 = 60U;
	int16_t x32 = 6;
	volatile uint64_t t4 = 92387049591LLU;

    t4 = ((x29-x30)<<(x31==x32));

    if (t4 != 4609819543656168LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x34 = 105296378623485LLU;
	int8_t x35 = INT8_MIN;
	volatile int64_t x36 = 0LL;
	volatile uint64_t t5 = 7977620095452448757LLU;

    t5 = ((x33-x34)<<(x35==x36));

    if (t5 != 18446638777330928229LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x41 = 1346U;
	int16_t x42 = -791;
	int8_t x43 = -12;
	int8_t x44 = INT8_MAX;

    t6 = ((x41-x42)<<(x43==x44));

    if (t6 != 2137) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x55 = 9558;
	int8_t x56 = INT8_MIN;

    t7 = ((x53-x54)<<(x55==x56));

    if (t7 != 4294936543U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x57 = 40109903707LLU;
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = INT32_MIN;
	static int8_t x60 = INT8_MIN;
	uint64_t t8 = 20702266LLU;

    t8 = ((x57-x58)<<(x59==x60));

    if (t8 != 40109936475LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x69 = 18039U;
	uint64_t x70 = 176622LLU;
	uint64_t x72 = 12403986568398LLU;

    t9 = ((x69-x70)<<(x71==x72));

    if (t9 != 18446744073709393033LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x77 = -1;
	int64_t x78 = INT64_MIN;
	int16_t x79 = 2929;
	int32_t x80 = 928;
	static volatile int64_t t10 = INT64_MAX;

    t10 = ((x77-x78)<<(x79==x80));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x81 = 0U;
	int8_t x82 = INT8_MIN;
	volatile int16_t x84 = INT16_MIN;

    t11 = ((x81-x82)<<(x83==x84));

    if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x85 = 5806219;
	uint32_t x86 = 127041646U;
	static int32_t x87 = -29746384;
	volatile uint32_t t12 = 55089993U;

    t12 = ((x85-x86)<<(x87==x88));

    if (t12 != 4173731869U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x93 = 6634;
	static int16_t x94 = 1;
	uint16_t x95 = 5U;
	uint8_t x96 = UINT8_MAX;
	int32_t t13 = -64847;

    t13 = ((x93-x94)<<(x95==x96));

    if (t13 != 6633) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x97 = 8U;
	int64_t x98 = -18898171649LL;
	int8_t x99 = INT8_MAX;
	uint8_t x100 = UINT8_MAX;
	int64_t t14 = 3LL;

    t14 = ((x97-x98)<<(x99==x100));

    if (t14 != 18898171657LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x101 = INT8_MIN;
	static volatile int32_t x103 = INT32_MAX;
	static int32_t x104 = -46602843;
	volatile uint32_t t15 = 942U;

    t15 = ((x101-x102)<<(x103==x104));

    if (t15 != 4292803396U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x105 = 80228986U;
	uint16_t x106 = 8680U;
	int64_t x107 = INT64_MAX;
	static volatile uint32_t t16 = 127270855U;

    t16 = ((x105-x106)<<(x107==x108));

    if (t16 != 80220306U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x109 = -1;
	int16_t x110 = -12137;
	int32_t x111 = -1;
	uint32_t x112 = 821326U;
	int32_t t17 = -7543602;

    t17 = ((x109-x110)<<(x111==x112));

    if (t17 != 12136) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x113 = INT64_MAX;
	static uint16_t x114 = 268U;
	uint32_t x115 = 123U;
	static uint8_t x116 = 127U;

    t18 = ((x113-x114)<<(x115==x116));

    if (t18 != 9223372036854775539LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MAX;
	int16_t x120 = INT16_MIN;
	volatile uint32_t t19 = 731201656U;

    t19 = ((x117-x118)<<(x119==x120));

    if (t19 != 256U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x121 = 425595LLU;
	int8_t x122 = INT8_MAX;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = INT8_MIN;
	uint64_t t20 = 1073142589689859LLU;

    t20 = ((x121-x122)<<(x123==x124));

    if (t20 != 425468LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x129 = -1;
	volatile int8_t x130 = -9;
	static uint64_t x131 = 19247LLU;
	uint64_t x132 = 3678142458950326371LLU;
	volatile int32_t t21 = -15060;

    t21 = ((x129-x130)<<(x131==x132));

    if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x133 = 1101934107LLU;
	static int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile uint64_t t22 = 1766912849109LLU;

    t22 = ((x133-x134)<<(x135==x136));

    if (t22 != 1101966875LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x137 = 578212800147865LLU;
	static int8_t x138 = 2;
	uint8_t x139 = 15U;
	int64_t x140 = INT64_MIN;
	static volatile uint64_t t23 = 5079419LLU;

    t23 = ((x137-x138)<<(x139==x140));

    if (t23 != 578212800147863LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x141 = UINT64_MAX;
	uint16_t x143 = UINT16_MAX;
	uint64_t t24 = 14502935710764021LLU;

    t24 = ((x141-x142)<<(x143==x144));

    if (t24 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x157 = 1000604035540916LLU;
	uint16_t x158 = 32U;
	volatile int64_t x159 = INT64_MIN;
	volatile int32_t x160 = INT32_MIN;
	volatile uint64_t t25 = 16814LLU;

    t25 = ((x157-x158)<<(x159==x160));

    if (t25 != 1000604035540884LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x165 = UINT32_MAX;
	int64_t x166 = -1LL;
	static int32_t x167 = INT32_MAX;
	static uint8_t x168 = UINT8_MAX;
	volatile int64_t t26 = 4547279637336LL;

    t26 = ((x165-x166)<<(x167==x168));

    if (t26 != 4294967296LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x169 = 84737121708LL;
	uint16_t x170 = 16U;
	volatile int64_t x171 = -160LL;
	volatile int64_t x172 = INT64_MIN;

    t27 = ((x169-x170)<<(x171==x172));

    if (t27 != 84737121692LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x174 = INT32_MIN;
	static int16_t x176 = -191;
	volatile int32_t t28 = -103071671;

    t28 = ((x173-x174)<<(x175==x176));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x178 = 423;
	uint8_t x179 = 29U;
	int64_t x180 = INT64_MAX;
	volatile int32_t t29 = -3290789;

    t29 = ((x177-x178)<<(x179==x180));

    if (t29 != 3227) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MAX;
	int16_t x184 = -1;
	int64_t t30 = 4101899567945853293LL;

    t30 = ((x181-x182)<<(x183==x184));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x185 = 10191498U;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	uint32_t t31 = 7U;

    t31 = ((x185-x186)<<(x187==x188));

    if (t31 != 10224266U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x191 = INT16_MIN;
	static uint64_t x192 = 482LLU;
	static int64_t t32 = 2500038285LL;

    t32 = ((x189-x190)<<(x191==x192));

    if (t32 != 2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x193 = -1;
	uint32_t x194 = 40439479U;
	static uint16_t x196 = UINT16_MAX;
	static volatile uint32_t t33 = 55534U;

    t33 = ((x193-x194)<<(x195==x196));

    if (t33 != 4214088336U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x205 = INT16_MIN;
	static int32_t t34 = 1;

    t34 = ((x205-x206)<<(x207==x208));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x209 = -1;
	int64_t x210 = -159784274115LL;
	volatile int64_t t35 = 2007989LL;

    t35 = ((x209-x210)<<(x211==x212));

    if (t35 != 159784274114LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MAX;
	volatile uint8_t x215 = 15U;
	volatile uint8_t x216 = UINT8_MAX;

    t36 = ((x213-x214)<<(x215==x216));

    if (t36 != 2147450880) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x229 = -1LL;
	int16_t x231 = INT16_MIN;
	int64_t t37 = -405053176465936712LL;

    t37 = ((x229-x230)<<(x231==x232));

    if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x233 = -53;
	uint64_t x234 = 338667LLU;
	uint64_t x235 = 8252241017LLU;

    t38 = ((x233-x234)<<(x235==x236));

    if (t38 != 18446744073709212896LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x245 = -1304;
	int16_t x246 = -2797;
	uint64_t x248 = 2566LLU;
	volatile int32_t t39 = 994;

    t39 = ((x245-x246)<<(x247==x248));

    if (t39 != 1493) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x255 = -1;
	volatile uint8_t x256 = 1U;
	volatile int64_t t40 = -5LL;

    t40 = ((x253-x254)<<(x255==x256));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x265 = -11;
	int16_t x266 = INT16_MIN;
	int16_t x267 = -4;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t41 = 51164528;

    t41 = ((x265-x266)<<(x267==x268));

    if (t41 != 32757) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x269 = INT32_MIN;
	static uint64_t x270 = UINT64_MAX;
	uint64_t x271 = 83826883LLU;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t42 = 78401237588136LLU;

    t42 = ((x269-x270)<<(x271==x272));

    if (t42 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x273 = -1;
	volatile uint32_t x274 = UINT32_MAX;
	int16_t x275 = 91;
	uint32_t x276 = 199704U;

    t43 = ((x273-x274)<<(x275==x276));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x277 = 1;
	static volatile int32_t x278 = -1;
	uint32_t x279 = 151012350U;
	int32_t t44 = -177915363;

    t44 = ((x277-x278)<<(x279==x280));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x289 = 3;
	volatile uint32_t x290 = 48065U;

    t45 = ((x289-x290)<<(x291==x292));

    if (t45 != 4294919234U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x297 = INT8_MAX;
	static int8_t x298 = INT8_MIN;
	static int32_t x299 = -156636952;
	int32_t t46 = 3468;

    t46 = ((x297-x298)<<(x299==x300));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MAX;
	volatile uint32_t t47 = 27497U;

    t47 = ((x309-x310)<<(x311==x312));

    if (t47 != 2147483649U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x318 = 977818271U;
	volatile uint64_t x320 = 4154114564249162868LLU;
	uint32_t t48 = 1795955953U;

    t48 = ((x317-x318)<<(x319==x320));

    if (t48 != 3317149024U) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x321 = 29U;
	volatile int8_t x323 = -1;
	static int32_t x324 = 8867;
	volatile uint64_t t49 = 168157520023780877LLU;

    t49 = ((x321-x322)<<(x323==x324));

    if (t49 != 30LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x329 = 0U;
	int32_t x330 = -211393;
	int16_t x331 = INT16_MIN;
	static uint8_t x332 = UINT8_MAX;
	int32_t t50 = 7302;

    t50 = ((x329-x330)<<(x331==x332));

    if (t50 != 211393) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x333 = UINT8_MAX;
	uint64_t x334 = UINT64_MAX;
	uint32_t x335 = 455090848U;
	uint64_t x336 = 8004LLU;
	volatile uint64_t t51 = 12080243539955LLU;

    t51 = ((x333-x334)<<(x335==x336));

    if (t51 != 256LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x341 = INT16_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t52 = -3;

    t52 = ((x341-x342)<<(x343==x344));

    if (t52 != 64910) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x345 = UINT16_MAX;
	uint64_t x346 = 190089LLU;
	uint64_t x347 = 13274006574431LLU;
	volatile int16_t x348 = -1;
	volatile uint64_t t53 = 17386004289088LLU;

    t53 = ((x345-x346)<<(x347==x348));

    if (t53 != 18446744073709427062LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x349 = INT64_MAX;
	uint32_t x350 = 146466997U;
	int32_t x351 = -1;
	int64_t t54 = -140950256471758LL;

    t54 = ((x349-x350)<<(x351==x352));

    if (t54 != 9223372036708308810LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x357 = -1;
	int8_t x358 = INT8_MIN;
	static uint64_t x359 = 1478LLU;

    t55 = ((x357-x358)<<(x359==x360));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x374 = INT16_MIN;
	int8_t x376 = -1;
	volatile int32_t t56 = 4423956;

    t56 = ((x373-x374)<<(x375==x376));

    if (t56 != 98303) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x377 = 56U;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = INT8_MIN;
	static int64_t x380 = -99625449LL;
	volatile uint64_t t57 = 250917LLU;

    t57 = ((x377-x378)<<(x379==x380));

    if (t57 != 57LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x393 = -1;
	int16_t x394 = -44;
	int64_t x395 = -1LL;
	int64_t x396 = INT64_MAX;
	static int32_t t58 = 0;

    t58 = ((x393-x394)<<(x395==x396));

    if (t58 != 43) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x398 = -142614LL;
	volatile uint16_t x400 = 399U;
	int64_t t59 = -4672908883LL;

    t59 = ((x397-x398)<<(x399==x400));

    if (t59 != 142618LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x405 = 39037;
	int16_t x406 = INT16_MIN;
	volatile int32_t t60 = -905021672;

    t60 = ((x405-x406)<<(x407==x408));

    if (t60 != 71805) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x413 = INT16_MIN;
	volatile uint64_t x414 = UINT64_MAX;
	int16_t x415 = -1;
	int8_t x416 = INT8_MIN;
	uint64_t t61 = 355LLU;

    t61 = ((x413-x414)<<(x415==x416));

    if (t61 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x418 = UINT64_MAX;
	static int8_t x420 = INT8_MAX;
	uint64_t t62 = 44693162LLU;

    t62 = ((x417-x418)<<(x419==x420));

    if (t62 != 1682LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x421 = 10489025LLU;
	uint8_t x422 = 27U;
	int8_t x423 = -1;
	static int16_t x424 = 180;
	volatile uint64_t t63 = 27438109LLU;

    t63 = ((x421-x422)<<(x423==x424));

    if (t63 != 10488998LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x425 = 1U;
	static int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	volatile uint32_t x428 = 1250U;
	static volatile uint32_t t64 = 6U;

    t64 = ((x425-x426)<<(x427==x428));

    if (t64 != 129U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x429 = INT32_MIN;
	uint64_t x431 = 2834274538162394468LLU;
	static int8_t x432 = INT8_MAX;
	static int64_t t65 = 2LL;

    t65 = ((x429-x430)<<(x431==x432));

    if (t65 != 52001803271LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x437 = 14789U;
	volatile uint64_t x438 = 12913LLU;
	int8_t x439 = -1;
	volatile int64_t x440 = 5106440568701LL;
	uint64_t t66 = 440597704LLU;

    t66 = ((x437-x438)<<(x439==x440));

    if (t66 != 1876LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x445 = UINT64_MAX;
	uint64_t x446 = 59217LLU;
	int64_t x447 = -1LL;
	volatile int8_t x448 = INT8_MIN;

    t67 = ((x445-x446)<<(x447==x448));

    if (t67 != 18446744073709492398LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x449 = INT8_MAX;
	static volatile uint32_t x450 = 10U;
	uint8_t x452 = 13U;
	static uint32_t t68 = 4223U;

    t68 = ((x449-x450)<<(x451==x452));

    if (t68 != 117U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x459 = INT64_MIN;
	volatile uint8_t x460 = 6U;

    t69 = ((x457-x458)<<(x459==x460));

    if (t69 != 2140166147U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x461 = INT16_MAX;
	volatile int16_t x462 = -1;
	int32_t x464 = INT32_MIN;
	volatile int32_t t70 = 415;

    t70 = ((x461-x462)<<(x463==x464));

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x465 = INT8_MAX;
	uint32_t x466 = 90U;
	int16_t x467 = -1;
	int16_t x468 = INT16_MIN;
	volatile uint32_t t71 = 180U;

    t71 = ((x465-x466)<<(x467==x468));

    if (t71 != 37U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x469 = 54420075;
	int32_t x470 = 0;
	int32_t x472 = 65284;
	int32_t t72 = -435281205;

    t72 = ((x469-x470)<<(x471==x472));

    if (t72 != 54420075) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x474 = -7;
	uint64_t x476 = UINT64_MAX;
	static int32_t t73 = -259833;

    t73 = ((x473-x474)<<(x475==x476));

    if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x477 = INT64_MAX;
	volatile int64_t x478 = 4088300861LL;
	int8_t x479 = -1;
	int16_t x480 = INT16_MIN;
	volatile int64_t t74 = 5208LL;

    t74 = ((x477-x478)<<(x479==x480));

    if (t74 != 9223372032766474946LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x482 = UINT64_MAX;
	int8_t x484 = INT8_MIN;
	uint64_t t75 = 73959529782LLU;

    t75 = ((x481-x482)<<(x483==x484));

    if (t75 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x485 = -1LL;
	int64_t x486 = -2616LL;
	uint8_t x487 = 1U;
	int64_t t76 = -44548LL;

    t76 = ((x485-x486)<<(x487==x488));

    if (t76 != 2615LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x497 = 2728;
	int16_t x498 = INT16_MIN;
	uint64_t x499 = 114198LLU;
	volatile int32_t x500 = INT32_MIN;
	int32_t t77 = -51;

    t77 = ((x497-x498)<<(x499==x500));

    if (t77 != 35496) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x513 = INT32_MAX;
	static int8_t x515 = 50;
	int16_t x516 = -1;
	int32_t t78 = -252;

    t78 = ((x513-x514)<<(x515==x516));

    if (t78 != 2147483559) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x517 = UINT32_MAX;
	int8_t x519 = INT8_MAX;
	volatile int8_t x520 = INT8_MIN;
	volatile uint32_t t79 = 13063U;

    t79 = ((x517-x518)<<(x519==x520));

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x522 = -1LL;
	static uint8_t x523 = 3U;
	volatile uint64_t t80 = 4989LLU;

    t80 = ((x521-x522)<<(x523==x524));

    if (t80 != 5LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x529 = -1;
	volatile int16_t x530 = INT16_MIN;
	volatile uint8_t x531 = 4U;
	uint16_t x532 = 5261U;
	volatile int32_t t81 = -9;

    t81 = ((x529-x530)<<(x531==x532));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MAX;
	volatile int32_t x536 = -12;
	int32_t t82 = 182841;

    t82 = ((x533-x534)<<(x535==x536));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x537 = 1U;
	static int32_t x538 = -1385421;
	volatile int32_t t83 = 0;

    t83 = ((x537-x538)<<(x539==x540));

    if (t83 != 1385422) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x545 = INT64_MAX;
	static int64_t x546 = INT64_MAX;
	volatile int64_t t84 = -13621916721LL;

    t84 = ((x545-x546)<<(x547==x548));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x549 = UINT16_MAX;
	int8_t x550 = INT8_MAX;
	volatile uint8_t x552 = 3U;

    t85 = ((x549-x550)<<(x551==x552));

    if (t85 != 65408) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x554 = 146220732725228LLU;
	int8_t x555 = INT8_MAX;
	uint16_t x556 = UINT16_MAX;
	volatile uint64_t t86 = 3600LLU;

    t86 = ((x553-x554)<<(x555==x556));

    if (t86 != 18446597852976826387LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x557 = 7U;
	int64_t x558 = -1LL;
	static uint64_t x560 = 16LLU;
	int64_t t87 = 207797497LL;

    t87 = ((x557-x558)<<(x559==x560));

    if (t87 != 8LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x561 = UINT8_MAX;
	int64_t x562 = -1LL;
	int32_t x563 = INT32_MAX;
	static int64_t x564 = 1273LL;
	volatile int64_t t88 = 125100475LL;

    t88 = ((x561-x562)<<(x563==x564));

    if (t88 != 256LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x567 = 12237;
	volatile uint64_t t89 = 884313LLU;

    t89 = ((x565-x566)<<(x567==x568));

    if (t89 != 54022299840523544LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x570 = -1;
	int64_t x571 = -2836687361LL;
	int16_t x572 = INT16_MIN;

    t90 = ((x569-x570)<<(x571==x572));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x573 = 168;
	uint32_t x574 = 7464576U;
	int16_t x576 = INT16_MAX;
	uint32_t t91 = 95775028U;

    t91 = ((x573-x574)<<(x575==x576));

    if (t91 != 4287502888U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x577 = INT32_MAX;
	int16_t x578 = INT16_MAX;
	static int16_t x579 = INT16_MIN;
	static volatile int32_t t92 = 21783;

    t92 = ((x577-x578)<<(x579==x580));

    if (t92 != 2147450880) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x585 = -1;
	int64_t x587 = INT64_MIN;
	static uint64_t x588 = 24LLU;

    t93 = ((x585-x586)<<(x587==x588));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x589 = 105U;
	uint64_t x590 = 744915240LLU;
	uint8_t x591 = 2U;
	static int32_t x592 = -1;

    t94 = ((x589-x590)<<(x591==x592));

    if (t94 != 18446744072964636481LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x593 = 30;
	uint16_t x596 = UINT16_MAX;
	int32_t t95 = -4132254;

    t95 = ((x593-x594)<<(x595==x596));

    if (t95 != 158) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x597 = 37U;
	uint8_t x598 = 18U;
	int64_t x600 = INT64_MIN;
	static volatile int32_t t96 = 2;

    t96 = ((x597-x598)<<(x599==x600));

    if (t96 != 19) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x601 = 5385962U;
	uint8_t x603 = UINT8_MAX;
	uint16_t x604 = 31599U;

    t97 = ((x601-x602)<<(x603==x604));

    if (t97 != 2152869611U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x605 = 6U;
	uint8_t x606 = UINT8_MAX;
	static uint32_t x607 = 21209U;
	int64_t x608 = 105872232303LL;
	uint32_t t98 = 11060452U;

    t98 = ((x605-x606)<<(x607==x608));

    if (t98 != 4294967047U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x609 = -1;
	volatile int8_t x610 = INT8_MIN;
	uint8_t x611 = UINT8_MAX;
	static volatile int32_t t99 = -810208073;

    t99 = ((x609-x610)<<(x611==x612));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x614 = UINT64_MAX;
	volatile int64_t x615 = INT64_MIN;
	int64_t x616 = INT64_MIN;
	uint64_t t100 = 651156843192LLU;

    t100 = ((x613-x614)<<(x615==x616));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x617 = 1019LLU;
	uint16_t x618 = 3414U;
	int32_t x620 = -1;
	volatile uint64_t t101 = 470LLU;

    t101 = ((x617-x618)<<(x619==x620));

    if (t101 != 18446744073709549221LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x645 = INT64_MAX;
	int8_t x646 = 31;
	uint32_t x647 = 58U;
	static uint8_t x648 = 15U;
	int64_t t102 = 15444566LL;

    t102 = ((x645-x646)<<(x647==x648));

    if (t102 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x653 = 1;
	int16_t x654 = INT16_MIN;
	static int16_t x655 = 8;
	int64_t x656 = INT64_MIN;
	volatile int32_t t103 = -1650;

    t103 = ((x653-x654)<<(x655==x656));

    if (t103 != 32769) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x663 = 0LL;
	static int64_t t104 = -444491073358LL;

    t104 = ((x661-x662)<<(x663==x664));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x665 = -2;
	volatile uint64_t x666 = 0LLU;
	uint64_t x667 = UINT64_MAX;

    t105 = ((x665-x666)<<(x667==x668));

    if (t105 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x670 = 1897U;
	int16_t x671 = INT16_MIN;
	volatile uint32_t x672 = 21520440U;

    t106 = ((x669-x670)<<(x671==x672));

    if (t106 != 4294965271U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x673 = 320U;
	int16_t x674 = 325;
	uint64_t x675 = UINT64_MAX;
	int32_t x676 = -1;
	uint32_t t107 = 196U;

    t107 = ((x673-x674)<<(x675==x676));

    if (t107 != 4294967286U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x685 = INT64_MAX;
	int16_t x687 = -9;
	int16_t x688 = INT16_MAX;
	static int64_t t108 = 79661LL;

    t108 = ((x685-x686)<<(x687==x688));

    if (t108 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x694 = INT8_MAX;
	int64_t x695 = -1LL;
	int64_t x696 = 339LL;
	uint64_t t109 = 8865887307973358LLU;

    t109 = ((x693-x694)<<(x695==x696));

    if (t109 != 44005187130LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x697 = UINT16_MAX;
	uint64_t x698 = UINT64_MAX;
	static uint8_t x699 = 7U;
	uint16_t x700 = UINT16_MAX;
	volatile uint64_t t110 = 502216555LLU;

    t110 = ((x697-x698)<<(x699==x700));

    if (t110 != 65536LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x705 = INT16_MIN;
	uint32_t x706 = 16U;
	volatile uint32_t t111 = 865680U;

    t111 = ((x705-x706)<<(x707==x708));

    if (t111 != 4294934512U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x717 = 1U;
	int8_t x718 = -1;
	uint32_t x719 = UINT32_MAX;
	int32_t x720 = -3988;
	int32_t t112 = -8981;

    t112 = ((x717-x718)<<(x719==x720));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x721 = UINT8_MAX;
	static volatile uint16_t x723 = UINT16_MAX;
	int8_t x724 = -1;
	static volatile uint64_t t113 = 23916130257306599LLU;

    t113 = ((x721-x722)<<(x723==x724));

    if (t113 != 18445036713224025554LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x725 = 3U;
	int8_t x726 = -6;
	static int16_t x727 = -1;
	int8_t x728 = INT8_MAX;
	static int32_t t114 = -4343;

    t114 = ((x725-x726)<<(x727==x728));

    if (t114 != 9) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x745 = 21;
	static int16_t x746 = -58;
	int64_t x747 = -1LL;
	int16_t x748 = INT16_MIN;
	int32_t t115 = -31114;

    t115 = ((x745-x746)<<(x747==x748));

    if (t115 != 79) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x750 = -1LL;
	int64_t x751 = INT64_MIN;
	static int16_t x752 = INT16_MAX;
	uint64_t t116 = 13942LLU;

    t116 = ((x749-x750)<<(x751==x752));

    if (t116 != 3585LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x769 = 475605295468054LLU;
	int16_t x771 = -1;
	uint8_t x772 = 37U;
	uint64_t t117 = 23024780233LLU;

    t117 = ((x769-x770)<<(x771==x772));

    if (t117 != 9223847642150243862LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x779 = INT16_MIN;
	int64_t x780 = -1LL;

    t118 = ((x777-x778)<<(x779==x780));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x781 = UINT32_MAX;
	volatile uint16_t x782 = 15566U;
	static int16_t x783 = INT16_MIN;
	uint64_t x784 = 30295LLU;
	uint32_t t119 = 46609U;

    t119 = ((x781-x782)<<(x783==x784));

    if (t119 != 4294951729U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x805 = 9U;
	int8_t x806 = -1;
	uint64_t x807 = 1232978876527645LLU;
	int64_t x808 = -1LL;
	volatile int32_t t120 = -44;

    t120 = ((x805-x806)<<(x807==x808));

    if (t120 != 10) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x809 = 202U;
	uint32_t x811 = UINT32_MAX;
	int64_t x812 = INT64_MIN;
	static uint32_t t121 = 1427343348U;

    t121 = ((x809-x810)<<(x811==x812));

    if (t121 != 330U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x821 = UINT64_MAX;
	int64_t x822 = -1LL;
	int16_t x823 = INT16_MIN;
	int8_t x824 = INT8_MAX;
	uint64_t t122 = 13LLU;

    t122 = ((x821-x822)<<(x823==x824));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x825 = -1LL;
	int32_t x826 = INT32_MIN;
	uint32_t x827 = 4306664U;
	uint64_t x828 = UINT64_MAX;
	volatile int64_t t123 = 189531545476896985LL;

    t123 = ((x825-x826)<<(x827==x828));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x833 = -862070LL;
	uint32_t x835 = 31734087U;
	static int32_t x836 = -134310677;

    t124 = ((x833-x834)<<(x835==x836));

    if (t124 != 18445654284053501785LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x837 = INT8_MIN;
	uint32_t x838 = 1537U;
	uint32_t x839 = 11932U;
	int16_t x840 = INT16_MAX;
	uint32_t t125 = 117566340U;

    t125 = ((x837-x838)<<(x839==x840));

    if (t125 != 4294965631U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x841 = 5827U;
	int8_t x842 = 34;
	int32_t t126 = -4678250;

    t126 = ((x841-x842)<<(x843==x844));

    if (t126 != 5793) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x845 = INT8_MIN;
	uint32_t x846 = 2U;
	int16_t x847 = INT16_MIN;
	int8_t x848 = -1;
	volatile uint32_t t127 = 271172541U;

    t127 = ((x845-x846)<<(x847==x848));

    if (t127 != 4294967166U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x849 = INT16_MIN;
	int16_t x850 = INT16_MIN;
	uint32_t x852 = 440U;
	int32_t t128 = -20;

    t128 = ((x849-x850)<<(x851==x852));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x857 = 8988576LLU;
	uint8_t x858 = 0U;
	volatile uint64_t t129 = 586334LLU;

    t129 = ((x857-x858)<<(x859==x860));

    if (t129 != 8988576LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x867 = UINT64_MAX;
	volatile int64_t x868 = INT64_MIN;

    t130 = ((x865-x866)<<(x867==x868));

    if (t130 != 792394033U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x869 = 215812LLU;
	static uint64_t x870 = 847603LLU;
	uint32_t x871 = UINT32_MAX;
	int8_t x872 = INT8_MIN;
	volatile uint64_t t131 = 1893464963283LLU;

    t131 = ((x869-x870)<<(x871==x872));

    if (t131 != 18446744073708919825LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x873 = INT16_MAX;
	int16_t x874 = INT16_MIN;
	int8_t x875 = INT8_MAX;
	static uint16_t x876 = 62U;
	int32_t t132 = 11996;

    t132 = ((x873-x874)<<(x875==x876));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x877 = -1LL;
	int16_t x878 = INT16_MIN;
	static int64_t t133 = -1LL;

    t133 = ((x877-x878)<<(x879==x880));

    if (t133 != 32767LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x886 = INT8_MIN;
	int64_t x887 = INT64_MIN;
	volatile int8_t x888 = 1;
	int32_t t134 = 897046361;

    t134 = ((x885-x886)<<(x887==x888));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x890 = 1LL;
	uint16_t x891 = 0U;
	int16_t x892 = INT16_MIN;
	static int64_t t135 = -37026LL;

    t135 = ((x889-x890)<<(x891==x892));

    if (t135 != 206LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x901 = -1;
	volatile int32_t x902 = -1;
	volatile int8_t x904 = INT8_MAX;
	volatile int32_t t136 = -237569886;

    t136 = ((x901-x902)<<(x903==x904));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x905 = 199;
	int8_t x906 = 1;
	static int64_t x907 = INT64_MAX;
	int8_t x908 = INT8_MAX;
	int32_t t137 = -420531412;

    t137 = ((x905-x906)<<(x907==x908));

    if (t137 != 198) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x909 = 10415816025422171LLU;
	volatile int16_t x910 = INT16_MIN;
	uint64_t x911 = 128332564LLU;
	static uint32_t x912 = 361U;
	static uint64_t t138 = 1652LLU;

    t138 = ((x909-x910)<<(x911==x912));

    if (t138 != 10415816025454939LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x914 = -15961354540779230LL;
	int8_t x915 = 18;
	static int32_t x916 = INT32_MIN;
	int64_t t139 = 6849904LL;

    t139 = ((x913-x914)<<(x915==x916));

    if (t139 != 15961358835746525LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x922 = INT64_MAX;
	uint8_t x923 = 1U;
	int64_t t140 = -5LL;

    t140 = ((x921-x922)<<(x923==x924));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x941 = 604056322924655914LLU;
	int32_t x942 = -3324;
	int16_t x944 = 0;
	uint64_t t141 = 2111007034057LLU;

    t141 = ((x941-x942)<<(x943==x944));

    if (t141 != 604056322924659238LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x945 = -1;
	uint32_t x946 = 55802575U;
	int16_t x947 = -1;
	int32_t x948 = -1;

    t142 = ((x945-x946)<<(x947==x948));

    if (t142 != 4183362144U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x953 = UINT32_MAX;
	volatile int64_t x954 = -1LL;
	int8_t x955 = 4;
	int32_t x956 = -177908915;

    t143 = ((x953-x954)<<(x955==x956));

    if (t143 != 4294967296LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x957 = INT64_MAX;
	uint32_t x958 = UINT32_MAX;
	int8_t x960 = INT8_MIN;
	int64_t t144 = 35477317010595LL;

    t144 = ((x957-x958)<<(x959==x960));

    if (t144 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x961 = 60351U;
	static uint8_t x962 = 0U;
	int64_t x964 = INT64_MIN;
	uint32_t t145 = 3674934U;

    t145 = ((x961-x962)<<(x963==x964));

    if (t145 != 60351U) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x989 = 3U;
	uint32_t x990 = 31700828U;
	volatile uint8_t x991 = 34U;
	uint32_t t146 = 845349920U;

    t146 = ((x989-x990)<<(x991==x992));

    if (t146 != 4263266471U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1017 = 219724U;
	int32_t x1018 = INT32_MIN;
	int32_t x1019 = INT32_MIN;
	uint16_t x1020 = UINT16_MAX;
	volatile uint32_t t147 = 3972160U;

    t147 = ((x1017-x1018)<<(x1019==x1020));

    if (t147 != 2147703372U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1021 = INT32_MIN;
	static int8_t x1023 = 12;
	int32_t x1024 = INT32_MAX;

    t148 = ((x1021-x1022)<<(x1023==x1024));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1025 = 1345U;
	int8_t x1026 = -18;
	int32_t x1027 = 9;
	volatile int8_t x1028 = INT8_MIN;
	static uint32_t t149 = 46U;

    t149 = ((x1025-x1026)<<(x1027==x1028));

    if (t149 != 1363U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1029 = UINT16_MAX;
	int8_t x1031 = INT8_MIN;
	static uint32_t x1032 = UINT32_MAX;
	volatile int64_t t150 = 13LL;

    t150 = ((x1029-x1030)<<(x1031==x1032));

    if (t150 != 2071855560543869LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1037 = 1U;
	static int64_t x1038 = -162LL;
	int8_t x1039 = -48;
	uint64_t x1040 = 3595214307572037018LLU;
	int64_t t151 = 7660286048885621LL;

    t151 = ((x1037-x1038)<<(x1039==x1040));

    if (t151 != 163LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1042 = 239443993LLU;
	uint64_t x1043 = 34LLU;
	volatile uint32_t x1044 = 262U;
	static uint64_t t152 = 149749363LLU;

    t152 = ((x1041-x1042)<<(x1043==x1044));

    if (t152 != 9223372036615331815LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1049 = 17U;
	int8_t x1050 = -1;

    t153 = ((x1049-x1050)<<(x1051==x1052));

    if (t153 != 18) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x1053 = 1422986LLU;
	int32_t x1054 = INT32_MAX;
	static volatile uint8_t x1055 = 61U;
	volatile int8_t x1056 = INT8_MIN;
	uint64_t t154 = 56029148178331LLU;

    t154 = ((x1053-x1054)<<(x1055==x1056));

    if (t154 != 18446744071563490955LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1061 = 6207;
	uint32_t x1063 = UINT32_MAX;
	int32_t x1064 = INT32_MAX;

    t155 = ((x1061-x1062)<<(x1063==x1064));

    if (t155 != 6208) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x1065 = 12668;
	int8_t x1066 = 1;
	int32_t x1068 = INT32_MIN;
	volatile int32_t t156 = -523052264;

    t156 = ((x1065-x1066)<<(x1067==x1068));

    if (t156 != 12667) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1073 = UINT32_MAX;
	int32_t x1074 = 1;
	uint32_t x1075 = UINT32_MAX;
	uint8_t x1076 = 52U;
	volatile uint32_t t157 = 644598U;

    t157 = ((x1073-x1074)<<(x1075==x1076));

    if (t157 != 4294967294U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1081 = 7U;
	int16_t x1082 = -13;
	static int64_t x1083 = -353LL;
	uint32_t x1084 = UINT32_MAX;
	volatile int32_t t158 = -987790;

    t158 = ((x1081-x1082)<<(x1083==x1084));

    if (t158 != 20) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1086 = 0;
	int8_t x1087 = INT8_MIN;
	uint32_t t159 = 0U;

    t159 = ((x1085-x1086)<<(x1087==x1088));

    if (t159 != 1776597087U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1101 = INT16_MIN;
	static uint64_t x1102 = 214LLU;
	int32_t x1103 = INT32_MAX;
	int16_t x1104 = -1;
	volatile uint64_t t160 = 1016780159177083638LLU;

    t160 = ((x1101-x1102)<<(x1103==x1104));

    if (t160 != 18446744073709518634LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1105 = UINT8_MAX;
	int64_t x1106 = -1LL;
	int32_t x1107 = -1;
	int8_t x1108 = 13;
	int64_t t161 = -2002LL;

    t161 = ((x1105-x1106)<<(x1107==x1108));

    if (t161 != 256LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1117 = UINT64_MAX;
	int8_t x1119 = -3;
	uint64_t t162 = 791162301718901383LLU;

    t162 = ((x1117-x1118)<<(x1119==x1120));

    if (t162 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1121 = UINT16_MAX;
	static volatile int8_t x1122 = -1;
	int8_t x1123 = -7;

    t163 = ((x1121-x1122)<<(x1123==x1124));

    if (t163 != 65536) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1126 = INT32_MIN;
	static int32_t x1128 = 19887;

    t164 = ((x1125-x1126)<<(x1127==x1128));

    if (t164 != INT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x1137 = 22U;
	uint64_t x1138 = UINT64_MAX;
	int32_t x1140 = -7742615;

    t165 = ((x1137-x1138)<<(x1139==x1140));

    if (t165 != 23LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x1141 = UINT16_MAX;
	int64_t x1142 = -872348525257419LL;
	int64_t x1143 = INT64_MAX;
	static int32_t x1144 = 1653392;

    t166 = ((x1141-x1142)<<(x1143==x1144));

    if (t166 != 872348525322954LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1154 = INT32_MIN;
	int16_t x1155 = INT16_MAX;
	static uint32_t x1156 = 25152959U;
	static uint32_t t167 = 1943959U;

    t167 = ((x1153-x1154)<<(x1155==x1156));

    if (t167 != 2157051739U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x1157 = 2U;
	static int8_t x1158 = -1;
	volatile uint8_t x1159 = 3U;
	int8_t x1160 = INT8_MIN;
	int32_t t168 = -100;

    t168 = ((x1157-x1158)<<(x1159==x1160));

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1170 = 510473746065LLU;
	static int64_t x1171 = -2078485769837138565LL;
	int64_t x1172 = -1LL;
	uint64_t t169 = 901LLU;

    t169 = ((x1169-x1170)<<(x1171==x1172));

    if (t169 != 18446743563235805638LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1173 = 1959117624468504543LL;
	volatile int16_t x1174 = 3160;
	volatile int64_t x1175 = INT64_MIN;
	static uint64_t x1176 = 6141688536301LLU;

    t170 = ((x1173-x1174)<<(x1175==x1176));

    if (t170 != 1959117624468501383LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1181 = UINT32_MAX;
	int32_t x1182 = -8;
	uint8_t x1183 = UINT8_MAX;
	static volatile int16_t x1184 = -1;
	volatile uint32_t t171 = 129662870U;

    t171 = ((x1181-x1182)<<(x1183==x1184));

    if (t171 != 7U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1187 = INT8_MIN;
	int8_t x1188 = INT8_MIN;
	uint32_t t172 = 1301U;

    t172 = ((x1185-x1186)<<(x1187==x1188));

    if (t172 != 4294830104U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1189 = INT16_MAX;
	int8_t x1191 = 9;
	uint32_t x1192 = UINT32_MAX;

    t173 = ((x1189-x1190)<<(x1191==x1192));

    if (t173 != 32007U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1197 = 1;
	static uint32_t x1198 = UINT32_MAX;
	volatile int16_t x1199 = INT16_MIN;
	int8_t x1200 = INT8_MIN;

    t174 = ((x1197-x1198)<<(x1199==x1200));

    if (t174 != 2U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1201 = UINT8_MAX;
	volatile int16_t x1203 = -1;
	static volatile int8_t x1204 = 1;
	volatile int64_t t175 = 1LL;

    t175 = ((x1201-x1202)<<(x1203==x1204));

    if (t175 != 256LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1205 = -1;
	int32_t x1207 = 1;
	int16_t x1208 = -1;
	int32_t t176 = 983777;

    t176 = ((x1205-x1206)<<(x1207==x1208));

    if (t176 != 127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1209 = 1U;
	static int64_t x1210 = -1LL;
	int16_t x1211 = INT16_MIN;
	volatile int16_t x1212 = INT16_MAX;
	static int64_t t177 = 19026LL;

    t177 = ((x1209-x1210)<<(x1211==x1212));

    if (t177 != 2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1225 = UINT8_MAX;
	int32_t x1226 = 55;
	int64_t x1228 = INT64_MIN;
	int32_t t178 = 19944;

    t178 = ((x1225-x1226)<<(x1227==x1228));

    if (t178 != 200) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1237 = INT32_MAX;
	int8_t x1238 = 6;
	int64_t x1239 = INT64_MIN;
	int32_t x1240 = -1;
	volatile int32_t t179 = 208280235;

    t179 = ((x1237-x1238)<<(x1239==x1240));

    if (t179 != 2147483641) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x1245 = UINT32_MAX;
	int64_t x1246 = -1LL;
	int32_t x1247 = 62917641;
	int64_t x1248 = 53278978857LL;
	int64_t t180 = -232008LL;

    t180 = ((x1245-x1246)<<(x1247==x1248));

    if (t180 != 4294967296LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x1253 = -1;
	int8_t x1254 = INT8_MIN;
	volatile int64_t x1256 = -61457666LL;
	int32_t t181 = 1;

    t181 = ((x1253-x1254)<<(x1255==x1256));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1257 = 232407157137788LL;
	uint64_t x1259 = 34LLU;
	static volatile int16_t x1260 = INT16_MIN;
	int64_t t182 = -21LL;

    t182 = ((x1257-x1258)<<(x1259==x1260));

    if (t182 != 232409304621436LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1261 = INT16_MAX;
	int8_t x1264 = -1;

    t183 = ((x1261-x1262)<<(x1263==x1264));

    if (t183 != 4294890924U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1265 = 14;
	volatile int32_t t184 = -2;

    t184 = ((x1265-x1266)<<(x1267==x1268));

    if (t184 != 15) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1269 = -1;
	int8_t x1271 = INT8_MIN;
	int64_t t185 = INT64_MAX;

    t185 = ((x1269-x1270)<<(x1271==x1272));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1273 = -1;
	int16_t x1275 = -1;
	volatile uint16_t x1276 = UINT16_MAX;
	int32_t t186 = INT32_MAX;

    t186 = ((x1273-x1274)<<(x1275==x1276));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1285 = 29;
	static volatile uint64_t x1286 = UINT64_MAX;
	int64_t x1288 = INT64_MAX;

    t187 = ((x1285-x1286)<<(x1287==x1288));

    if (t187 != 30LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1297 = -1LL;
	int32_t x1298 = INT32_MIN;
	int8_t x1299 = 34;
	static volatile uint32_t x1300 = 3U;
	int64_t t188 = -14609792465LL;

    t188 = ((x1297-x1298)<<(x1299==x1300));

    if (t188 != 2147483647LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1301 = INT32_MIN;
	int16_t x1303 = 551;
	int32_t x1304 = -1;

    t189 = ((x1301-x1302)<<(x1303==x1304));

    if (t189 != 18445757258748356688LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1305 = 1887324LLU;
	static int32_t x1306 = -133584456;
	volatile int8_t x1307 = 14;
	int8_t x1308 = INT8_MAX;
	uint64_t t190 = 91246032535517725LLU;

    t190 = ((x1305-x1306)<<(x1307==x1308));

    if (t190 != 135471780LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1309 = 184888218177973LL;
	int32_t x1310 = INT32_MIN;
	int16_t x1312 = -815;

    t191 = ((x1309-x1310)<<(x1311==x1312));

    if (t191 != 184890365661621LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1323 = INT8_MIN;
	uint32_t x1324 = UINT32_MAX;

    t192 = ((x1321-x1322)<<(x1323==x1324));

    if (t192 != 4294724346U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1325 = UINT16_MAX;
	static volatile uint16_t x1327 = 16571U;
	volatile int8_t x1328 = INT8_MIN;

    t193 = ((x1325-x1326)<<(x1327==x1328));

    if (t193 != 65280) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1329 = 242U;
	volatile uint8_t x1331 = 3U;
	static volatile uint32_t t194 = 415356U;

    t194 = ((x1329-x1330)<<(x1331==x1332));

    if (t194 != 4294967283U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1337 = 42177949763757LLU;
	int16_t x1338 = 558;
	int32_t x1339 = INT32_MAX;
	volatile uint64_t t195 = 561LLU;

    t195 = ((x1337-x1338)<<(x1339==x1340));

    if (t195 != 42177949763199LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1349 = -78310781;
	uint32_t x1350 = 12565U;
	static int32_t x1351 = 2;
	int8_t x1352 = -1;
	volatile uint32_t t196 = 140037U;

    t196 = ((x1349-x1350)<<(x1351==x1352));

    if (t196 != 4216643950U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1353 = UINT16_MAX;
	volatile int64_t x1354 = 8LL;
	volatile int64_t x1355 = INT64_MAX;
	int64_t x1356 = INT64_MIN;
	volatile int64_t t197 = 273LL;

    t197 = ((x1353-x1354)<<(x1355==x1356));

    if (t197 != 65527LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1357 = INT32_MAX;
	int64_t x1358 = -2650LL;
	static int64_t t198 = -91311LL;

    t198 = ((x1357-x1358)<<(x1359==x1360));

    if (t198 != 2147486297LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1365 = 4174830LL;
	uint32_t x1366 = 58868U;
	int8_t x1367 = INT8_MIN;
	int8_t x1368 = -39;
	int64_t t199 = -1LL;

    t199 = ((x1365-x1366)<<(x1367==x1368));

    if (t199 != 4115962LL) { NG(); } else { ; }
	
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

