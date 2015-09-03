#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 0;
static volatile uint16_t x4 = UINT16_MAX;
int64_t x10 = -1LL;
volatile uint64_t t2 = 4675337427324393842LLU;
int16_t x14 = INT16_MAX;
int32_t x15 = -1;
uint32_t t3 = UINT32_MAX;
int16_t x17 = INT16_MAX;
int8_t x20 = INT8_MAX;
volatile int16_t x24 = INT16_MIN;
int16_t x35 = INT16_MIN;
volatile int32_t t7 = 2247;
int8_t x44 = -1;
static int32_t x59 = 4056;
volatile int32_t x60 = -4;
int32_t x68 = INT32_MAX;
static volatile int64_t x75 = -28LL;
volatile int32_t t17 = 8;
int32_t x81 = INT32_MIN;
static volatile int64_t x82 = 889LL;
static uint8_t x86 = 2U;
static uint16_t x89 = 1768U;
int64_t x91 = -1LL;
int32_t x92 = -1;
uint8_t x96 = 3U;
volatile int16_t x101 = 319;
uint64_t x102 = UINT64_MAX;
int8_t x106 = 63;
int8_t x108 = INT8_MIN;
int32_t x114 = INT32_MIN;
static volatile int32_t t27 = -1965;
int32_t t30 = 53328;
int64_t x133 = INT64_MIN;
volatile int64_t x138 = -22371892367LL;
uint16_t x139 = UINT16_MAX;
uint64_t x148 = 7533100596326LLU;
volatile int32_t x151 = INT32_MIN;
volatile int16_t x152 = INT16_MIN;
static uint16_t x159 = 64U;
uint8_t x160 = 8U;
uint16_t x161 = 10369U;
static uint32_t x162 = UINT32_MAX;
volatile uint32_t t39 = 296307U;
static volatile int32_t x168 = INT32_MIN;
volatile int32_t t40 = -7635;
int64_t x169 = INT64_MIN;
int64_t x171 = 1632LL;
static uint64_t x178 = 1LLU;
uint32_t x180 = UINT32_MAX;
static int64_t t43 = -167LL;
static int8_t x185 = -9;
int8_t x189 = 0;
int16_t x195 = INT16_MIN;
volatile uint64_t t47 = 200LLU;
uint8_t x204 = 1U;
int64_t x205 = INT64_MAX;
int8_t x218 = INT8_MIN;
int32_t t52 = 19644;
volatile int32_t t53 = 3656;
static int64_t x225 = INT64_MIN;
uint8_t x228 = UINT8_MAX;
int64_t x232 = INT64_MAX;
volatile int32_t x242 = -1;
int32_t x243 = 6994268;
int16_t x244 = -1;
int32_t x253 = INT32_MIN;
int64_t x257 = INT64_MAX;
int32_t x265 = INT32_MIN;
uint64_t t64 = 2040741371400LLU;
int8_t x277 = INT8_MAX;
static uint32_t x279 = 0U;
static int32_t t65 = 1;
int8_t x285 = INT8_MAX;
uint8_t x287 = UINT8_MAX;
volatile int32_t t67 = -60079557;
uint32_t x291 = 567064186U;
uint16_t x292 = 48U;
static int8_t x294 = -1;
int64_t x299 = INT64_MIN;
uint32_t x318 = UINT32_MAX;
int16_t x324 = -1;
static uint32_t x325 = 67U;
int64_t x336 = INT64_MIN;
uint64_t x339 = UINT64_MAX;
int16_t x347 = -1061;
uint64_t x348 = 118LLU;
uint32_t x351 = 95253087U;
static volatile int16_t x352 = INT16_MIN;
volatile uint16_t x353 = UINT16_MAX;
static int8_t x361 = -1;
int32_t t85 = -5773;
static int16_t x375 = INT16_MAX;
int32_t x381 = INT32_MIN;
uint64_t x383 = 184254856LLU;
static int16_t x388 = INT16_MIN;
uint16_t x389 = 10897U;
static int8_t x391 = INT8_MIN;
static int16_t x397 = -1;
int8_t x398 = INT8_MAX;
static uint32_t x400 = 80546U;
int64_t x402 = INT64_MIN;
uint32_t x403 = 1440U;
volatile int64_t x405 = 2515377459622467LL;
volatile uint64_t t97 = 8112673046302LLU;
uint32_t x413 = 1567759201U;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = 3;
	int64_t t0 = -58613148943267LL;

	t0 = (x1-((x2<x3)%x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 3;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = -1;
	int32_t x8 = -358788097;
	volatile int32_t t1 = -90;

	t1 = (x5-((x6<x7)%x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	volatile int8_t x11 = -3;
	static uint64_t x12 = UINT64_MAX;

	t2 = (x9-((x10<x11)%x12));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int32_t x16 = INT32_MIN;

	t3 = (x13-((x14<x15)%x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 13224U;
	int32_t x19 = -369;
	volatile int32_t t4 = 2411424;

	t4 = (x17-((x18<x19)%x20));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 206U;
	int32_t t5 = 183;

	t5 = (x21-((x22<x23)%x24));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MAX;
	uint32_t x31 = 608975U;
	int16_t x32 = INT16_MAX;
	int32_t t6 = INT32_MIN;

	t6 = (x29-((x30<x31)%x32));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	int8_t x36 = INT8_MAX;

	t7 = (x33-((x34<x35)%x36));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = 20;
	int8_t x39 = INT8_MAX;
	volatile int8_t x40 = -1;
	volatile int32_t t8 = 570389;

	t8 = (x37-((x38<x39)%x40));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	volatile uint64_t x42 = 1609765269195LLU;
	static volatile int8_t x43 = -1;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x41-((x42<x43)%x44));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x47 = -1623;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t10 = 259640360LLU;

	t10 = (x45-((x46<x47)%x48));

	if (t10 != 65534LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 22865158LLU;
	int32_t x50 = INT32_MIN;
	volatile int64_t x51 = INT64_MAX;
	int8_t x52 = 34;
	volatile uint64_t t11 = 18216LLU;

	t11 = (x49-((x50<x51)%x52));

	if (t11 != 22865157LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = INT32_MIN;
	uint8_t x54 = 126U;
	uint32_t x55 = 14U;
	int8_t x56 = -1;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x53-((x54<x55)%x56));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -96485;
	int32_t x58 = INT32_MIN;
	int32_t t13 = -13891;

	t13 = (x57-((x58<x59)%x60));

	if (t13 != -96486) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 222388U;
	int64_t x62 = -1LL;
	int32_t x63 = INT32_MIN;
	volatile int32_t x64 = 2020;
	static volatile uint32_t t14 = 2140190136U;

	t14 = (x61-((x62<x63)%x64));

	if (t14 != 222388U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 85448378;
	volatile int64_t x66 = INT64_MIN;
	uint16_t x67 = 0U;
	volatile int32_t t15 = -32;

	t15 = (x65-((x66<x67)%x68));

	if (t15 != 85448377) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	static volatile int32_t x70 = 16406200;
	uint32_t x71 = 185278676U;
	uint32_t x72 = 179158U;
	uint32_t t16 = 1616U;

	t16 = (x69-((x70<x71)%x72));

	if (t16 != 126U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 660;
	uint64_t x74 = UINT64_MAX;
	static int32_t x76 = 1219;

	t17 = (x73-((x74<x75)%x76));

	if (t17 != 660) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 3U;
	int8_t x78 = INT8_MIN;
	int64_t x79 = -21LL;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t18 = -8574;

	t18 = (x77-((x78<x79)%x80));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x81-((x82<x83)%x84));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int32_t x87 = INT32_MIN;
	uint64_t x88 = 253604LLU;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x85-((x86<x87)%x88));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = INT64_MAX;
	volatile int32_t t21 = 451829062;

	t21 = (x89-((x90<x91)%x92));

	if (t21 != 1768) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int32_t x94 = -55783;
	static volatile int64_t x95 = INT64_MIN;
	int64_t t22 = 2041129172549103LL;

	t22 = (x93-((x94<x95)%x96));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 8124549634447785836LLU;
	static uint16_t x98 = UINT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = INT16_MAX;
	volatile uint64_t t23 = 2513752459LLU;

	t23 = (x97-((x98<x99)%x100));

	if (t23 != 8124549634447785835LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x103 = -28;
	int16_t x104 = -15561;
	volatile int32_t t24 = 27;

	t24 = (x101-((x102<x103)%x104));

	if (t24 != 319) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -230;
	int8_t x107 = INT8_MAX;
	volatile int32_t t25 = -1008378;

	t25 = (x105-((x106<x107)%x108));

	if (t25 != -231) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 12933U;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	static volatile uint64_t x112 = 256462LLU;
	volatile uint64_t t26 = 49019488039941LLU;

	t26 = (x109-((x110<x111)%x112));

	if (t26 != 12933LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -3;
	uint64_t x115 = UINT64_MAX;
	uint16_t x116 = UINT16_MAX;

	t27 = (x113-((x114<x115)%x116));

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 22U;
	int32_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	int8_t x120 = 53;
	int32_t t28 = 15;

	t28 = (x117-((x118<x119)%x120));

	if (t28 != 22) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 221;
	int64_t x122 = INT64_MIN;
	uint8_t x123 = 3U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t29 = 4350921;

	t29 = (x121-((x122<x123)%x124));

	if (t29 != 220) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	uint16_t x126 = 32744U;
	uint16_t x127 = 81U;
	int32_t x128 = -1;

	t30 = (x125-((x126<x127)%x128));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = INT8_MIN;
	int8_t x130 = 0;
	static uint8_t x131 = UINT8_MAX;
	volatile uint8_t x132 = 1U;
	int32_t t31 = 73;

	t31 = (x129-((x130<x131)%x132));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t x136 = -1LL;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x133-((x134<x135)%x136));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	uint8_t x140 = 9U;
	int32_t t33 = 379939;

	t33 = (x137-((x138<x139)%x140));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MAX;
	uint32_t x142 = 157385806U;
	int16_t x143 = -1;
	int8_t x144 = -11;
	static volatile int64_t t34 = 51408LL;

	t34 = (x141-((x142<x143)%x144));

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	static int8_t x146 = INT8_MAX;
	uint64_t x147 = UINT64_MAX;
	uint64_t t35 = 8968763513467356462LLU;

	t35 = (x145-((x146<x147)%x148));

	if (t35 != 254LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MAX;
	int32_t x150 = 41;
	int32_t t36 = INT32_MAX;

	t36 = (x149-((x150<x151)%x152));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 1639885;
	static volatile uint16_t x154 = 3U;
	static int16_t x155 = 26;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = 60;

	t37 = (x153-((x154<x155)%x156));

	if (t37 != 1639884) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x157 = 3LLU;
	static int32_t x158 = INT32_MIN;
	volatile uint64_t t38 = 1LLU;

	t38 = (x157-((x158<x159)%x160));

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x163 = 0U;
	volatile uint32_t x164 = 1U;

	t39 = (x161-((x162<x163)%x164));

	if (t39 != 10369U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = 1U;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = -35LL;

	t40 = (x165-((x166<x167)%x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x170 = INT32_MIN;
	uint64_t x172 = 14809157LLU;
	static uint64_t t41 = 1LLU;

	t41 = (x169-((x170<x171)%x172));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = -170;
	volatile uint8_t x175 = UINT8_MAX;
	volatile int64_t x176 = 291458LL;
	volatile int64_t t42 = 0LL;

	t42 = (x173-((x174<x175)%x176));

	if (t42 != -32769LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = -1LL;
	static int32_t x179 = INT32_MIN;

	t43 = (x177-((x178<x179)%x180));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x181 = 0U;
	volatile uint16_t x182 = UINT16_MAX;
	int64_t x183 = -1LL;
	int64_t x184 = -65317167664LL;
	int64_t t44 = 2145970753682006LL;

	t44 = (x181-((x182<x183)%x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x186 = UINT16_MAX;
	static int32_t x187 = -1;
	int16_t x188 = -1;
	volatile int32_t t45 = -61624691;

	t45 = (x185-((x186<x187)%x188));

	if (t45 != -9) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x190 = -1297967;
	int16_t x191 = -14856;
	int8_t x192 = -1;
	int32_t t46 = -456143687;

	t46 = (x189-((x190<x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = UINT64_MAX;
	volatile uint32_t x194 = 1U;
	int64_t x196 = -27916448954736LL;

	t47 = (x193-((x194<x195)%x196));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	volatile int8_t x202 = INT8_MAX;
	uint16_t x203 = 21U;
	volatile int32_t t48 = -356;

	t48 = (x201-((x202<x203)%x204));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = INT16_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 2U;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x205-((x206<x207)%x208));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 77U;
	int8_t x210 = -15;
	uint32_t x211 = 2U;
	int16_t x212 = -1;
	volatile int32_t t50 = 290871182;

	t50 = (x209-((x210<x211)%x212));

	if (t50 != 77) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x213 = 0U;
	int32_t x214 = INT32_MIN;
	uint32_t x215 = 13649101U;
	int8_t x216 = INT8_MIN;
	int32_t t51 = -68214;

	t51 = (x213-((x214<x215)%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = INT16_MAX;
	int32_t x219 = INT32_MAX;
	int32_t x220 = -1;

	t52 = (x217-((x218<x219)%x220));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -6;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MAX;
	int8_t x224 = INT8_MIN;

	t53 = (x221-((x222<x223)%x224));

	if (t53 != -7) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x226 = 11U;
	static int64_t x227 = INT64_MIN;
	int64_t t54 = INT64_MIN;

	t54 = (x225-((x226<x227)%x228));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -633110299LL;
	static int16_t x230 = INT16_MAX;
	int16_t x231 = -1;
	volatile int64_t t55 = -124529892551103LL;

	t55 = (x229-((x230<x231)%x232));

	if (t55 != -633110299LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = 6050692U;
	int32_t x235 = INT32_MAX;
	volatile int64_t x236 = -381LL;
	static int64_t t56 = -985523339LL;

	t56 = (x233-((x234<x235)%x236));

	if (t56 != -2147483649LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -3;
	int32_t t57 = 0;

	t57 = (x241-((x242<x243)%x244));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = 283218126415393LLU;
	int8_t x247 = INT8_MAX;
	int16_t x248 = -1;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x245-((x246<x247)%x248));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	static int64_t x252 = INT64_MAX;
	static int64_t t59 = -2205985535991766688LL;

	t59 = (x249-((x250<x251)%x252));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x254 = -523665298695478LL;
	int8_t x255 = 1;
	int64_t x256 = INT64_MIN;
	int64_t t60 = -3581406209761555LL;

	t60 = (x253-((x254<x255)%x256));

	if (t60 != -2147483649LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = 36U;
	volatile int64_t t61 = INT64_MAX;

	t61 = (x257-((x258<x259)%x260));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -8178;
	int32_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 1U;
	volatile int32_t t62 = 197554932;

	t62 = (x261-((x262<x263)%x264));

	if (t62 != -8178) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x266 = 1U;
	int32_t x267 = -269325;
	int64_t x268 = -1LL;
	static volatile int64_t t63 = 8LL;

	t63 = (x265-((x266<x267)%x268));

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x269 = 15LLU;
	uint16_t x270 = 188U;
	int32_t x271 = -6105351;
	uint64_t x272 = 24020638473LLU;

	t64 = (x269-((x270<x271)%x272));

	if (t64 != 15LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x278 = INT32_MIN;
	int8_t x280 = 1;

	t65 = (x277-((x278<x279)%x280));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	int32_t x282 = -1;
	volatile int64_t x283 = -1LL;
	int16_t x284 = -61;
	volatile int32_t t66 = 1017485704;

	t66 = (x281-((x282<x283)%x284));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = -1;
	uint16_t x288 = 28U;

	t67 = (x285-((x286<x287)%x288));

	if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x289 = -61;
	volatile int64_t x290 = INT64_MIN;
	static int32_t t68 = 8;

	t68 = (x289-((x290<x291)%x292));

	if (t68 != -62) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = -1;
	static int64_t t69 = INT64_MIN;

	t69 = (x293-((x294<x295)%x296));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = 16;
	volatile int16_t x298 = -1;
	static int32_t x300 = INT32_MIN;
	int32_t t70 = 358;

	t70 = (x297-((x298<x299)%x300));

	if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -1LL;
	int8_t x306 = -1;
	int16_t x307 = 40;
	int64_t x308 = -1LL;
	int64_t t71 = 9152LL;

	t71 = (x305-((x306<x307)%x308));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x309 = 720U;
	volatile int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t72 = 1572980;

	t72 = (x309-((x310<x311)%x312));

	if (t72 != 719) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MAX;
	uint16_t x314 = 22973U;
	int8_t x315 = INT8_MIN;
	int16_t x316 = -1;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x313-((x314<x315)%x316));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x319 = 11715U;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t74 = -1896438;

	t74 = (x317-((x318<x319)%x320));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -1;
	volatile int32_t x322 = INT32_MIN;
	volatile int8_t x323 = INT8_MAX;
	int32_t t75 = 1333885;

	t75 = (x321-((x322<x323)%x324));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -1;
	int64_t x328 = INT64_MIN;
	static volatile int64_t t76 = 5LL;

	t76 = (x325-((x326<x327)%x328));

	if (t76 != 67LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = -5;
	int64_t x330 = INT64_MIN;
	static uint16_t x331 = 329U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t77 = -5214652560LL;

	t77 = (x329-((x330<x331)%x332));

	if (t77 != -6LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = UINT8_MAX;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	int64_t t78 = 1338664990LL;

	t78 = (x333-((x334<x335)%x336));

	if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x337 = -1;
	static uint64_t x338 = UINT64_MAX;
	uint32_t x340 = UINT32_MAX;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (x337-((x338<x339)%x340));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x341 = -1;
	static int64_t x342 = INT64_MIN;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = INT64_MAX;
	volatile int64_t t80 = 1LL;

	t80 = (x341-((x342<x343)%x344));

	if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	static uint16_t x346 = 3381U;
	volatile uint64_t t81 = 7737074676LLU;

	t81 = (x345-((x346<x347)%x348));

	if (t81 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = 2;
	uint16_t x350 = 286U;
	volatile int32_t t82 = 7668;

	t82 = (x349-((x350<x351)%x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x354 = -1;
	int16_t x355 = 0;
	volatile uint16_t x356 = 25U;
	static int32_t t83 = -9900;

	t83 = (x353-((x354<x355)%x356));

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = -1;
	static int16_t x358 = -23;
	int64_t x359 = INT64_MIN;
	volatile int16_t x360 = -1;
	int32_t t84 = 11;

	t84 = (x357-((x358<x359)%x360));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x362 = -1;
	volatile int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;

	t85 = (x361-((x362<x363)%x364));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MIN;
	uint16_t x366 = 61U;
	uint16_t x367 = 27U;
	static int32_t x368 = -1;
	static volatile int32_t t86 = INT32_MIN;

	t86 = (x365-((x366<x367)%x368));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x369 = 8481U;
	static int8_t x370 = 1;
	int64_t x371 = -1LL;
	uint8_t x372 = UINT8_MAX;
	uint32_t t87 = 4923U;

	t87 = (x369-((x370<x371)%x372));

	if (t87 != 8481U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 43667918528019LLU;
	uint32_t x374 = 2701324U;
	int64_t x376 = -1LL;
	volatile uint64_t t88 = 13792384050323302LLU;

	t88 = (x373-((x374<x375)%x376));

	if (t88 != 43667918528019LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 0U;
	int32_t x378 = INT32_MAX;
	uint8_t x379 = 0U;
	volatile uint32_t x380 = 2096U;
	static uint32_t t89 = 20U;

	t89 = (x377-((x378<x379)%x380));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x382 = 2;
	static int64_t x384 = 535763352384632LL;
	int64_t t90 = -1LL;

	t90 = (x381-((x382<x383)%x384));

	if (t90 != -2147483649LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 7796139815782LLU;
	volatile int8_t x386 = -1;
	int32_t x387 = -65039367;
	uint64_t t91 = 4097816233845136816LLU;

	t91 = (x385-((x386<x387)%x388));

	if (t91 != 7796139815782LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x390 = -1LL;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t92 = 1039242;

	t92 = (x389-((x390<x391)%x392));

	if (t92 != 10897) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x393 = INT8_MAX;
	static volatile uint64_t x394 = 538LLU;
	uint8_t x395 = 61U;
	int8_t x396 = -1;
	volatile int32_t t93 = 199398648;

	t93 = (x393-((x394<x395)%x396));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x399 = INT8_MIN;
	uint32_t t94 = UINT32_MAX;

	t94 = (x397-((x398<x399)%x400));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	int32_t x404 = -1;
	volatile int32_t t95 = -165662979;

	t95 = (x401-((x402<x403)%x404));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x406 = 7986;
	static int64_t x407 = -1LL;
	uint32_t x408 = UINT32_MAX;
	int64_t t96 = -67898154097489710LL;

	t96 = (x405-((x406<x407)%x408));

	if (t96 != 2515377459622467LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MIN;
	static volatile uint16_t x410 = UINT16_MAX;
	static uint16_t x411 = 18531U;
	uint64_t x412 = 1258426961553634LLU;

	t97 = (x409-((x410<x411)%x412));

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x414 = 560529921LLU;
	uint16_t x415 = 12U;
	static uint8_t x416 = UINT8_MAX;
	uint32_t t98 = 362U;

	t98 = (x413-((x414<x415)%x416));

	if (t98 != 1567759201U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x417 = INT64_MAX;
	int8_t x418 = -13;
	static uint8_t x419 = 1U;
	uint64_t x420 = UINT64_MAX;
	uint64_t t99 = 771966123740LLU;

	t99 = (x417-((x418<x419)%x420));

	if (t99 != 9223372036854775806LLU) { NG(); } else { ; }
	
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


    return 0;
}

