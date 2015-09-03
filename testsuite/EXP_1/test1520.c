#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 2U;
int64_t x6 = INT64_MIN;
static int32_t x11 = INT32_MAX;
int8_t x12 = INT8_MIN;
volatile int16_t x13 = INT16_MIN;
int32_t t3 = -863;
volatile uint32_t t4 = 193U;
int16_t x24 = INT16_MIN;
volatile int64_t t6 = -27LL;
uint16_t x30 = 25U;
uint16_t x31 = 0U;
static volatile uint32_t t7 = UINT32_MAX;
int32_t x35 = -1;
static int64_t x37 = -47LL;
static volatile int32_t x40 = 20;
static uint32_t t9 = 14326876U;
volatile int16_t x42 = INT16_MIN;
volatile uint16_t x47 = 15U;
int32_t x48 = 1;
int64_t x57 = 7513LL;
int16_t x58 = INT16_MAX;
uint64_t x59 = UINT64_MAX;
uint64_t x62 = 25308811537918LLU;
static int32_t x82 = -1;
static uint64_t x84 = 323773451432193857LLU;
int16_t x97 = -683;
volatile int64_t t25 = -2921836LL;
uint64_t x108 = UINT64_MAX;
int32_t x110 = INT32_MIN;
volatile uint8_t x111 = 31U;
int32_t x115 = INT32_MAX;
int32_t x117 = INT32_MIN;
int32_t x120 = -1;
static int32_t x128 = INT32_MIN;
int16_t x129 = 15;
int32_t x133 = INT32_MIN;
int8_t x136 = INT8_MIN;
int32_t t34 = 653994;
int16_t x142 = INT16_MAX;
static uint32_t x143 = 423563U;
int32_t x146 = INT32_MAX;
uint8_t x164 = UINT8_MAX;
volatile int64_t t41 = 0LL;
static uint32_t x172 = 48490U;
volatile uint16_t x173 = 21U;
volatile int8_t x180 = INT8_MIN;
volatile int32_t t44 = 54154443;
static uint8_t x182 = UINT8_MAX;
static int32_t x190 = -1;
uint32_t t48 = 7889711U;
int32_t x200 = 13009833;
int64_t t53 = -227340093313535291LL;
static uint64_t x224 = 6006438LLU;
volatile int32_t t57 = -29731646;
int64_t x237 = INT64_MIN;
uint16_t x242 = 28933U;
int64_t x246 = INT64_MIN;
static int32_t x251 = -1;
int16_t x255 = INT16_MIN;
int64_t t63 = 1LL;
uint32_t t64 = UINT32_MAX;
uint32_t x261 = UINT32_MAX;
uint64_t x263 = UINT64_MAX;
int16_t x264 = -1;
static int16_t x270 = -107;
uint8_t x275 = 0U;
static int32_t t68 = -49;
uint64_t x284 = 8LLU;
uint64_t t70 = 7563861595250939LLU;
volatile int32_t x287 = INT32_MIN;
int64_t x292 = 11LL;
int16_t x304 = INT16_MAX;
static int8_t x318 = -1;
static uint32_t x320 = UINT32_MAX;
volatile uint8_t x323 = 8U;
volatile int32_t t80 = 11063;
static volatile uint32_t x326 = 154674U;
volatile int32_t x329 = -21074;
uint64_t x344 = 103172794880216209LLU;
int64_t x346 = 1811861136LL;
int32_t x351 = -10637;
int64_t x352 = INT64_MAX;
int64_t x354 = -3964652LL;
static uint64_t x356 = UINT64_MAX;
static volatile int64_t t90 = INT64_MAX;
static int64_t x365 = INT64_MIN;
int16_t x367 = -1;
volatile int64_t t91 = 14209LL;
volatile uint64_t x369 = UINT64_MAX;
int32_t x372 = INT32_MAX;
int64_t t92 = -724722LL;
uint32_t x380 = 501303U;
static volatile int64_t t95 = 464618962764285LL;
uint8_t x394 = 38U;
volatile uint32_t x399 = 88U;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	volatile uint16_t x3 = 3U;
	int64_t x4 = 1LL;
	volatile int64_t t0 = -1170528683120419841LL;

	t0 = (((x1<x2)^x3)|x4);

	if (t0 != 3LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 79;

	t1 = (((x5<x6)^x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 6341U;
	int8_t x10 = INT8_MIN;
	volatile int32_t t2 = -3643;

	t2 = (((x9<x10)^x11)|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 112U;
	int32_t x15 = INT32_MIN;
	int8_t x16 = -26;

	t3 = (((x13<x14)^x15)|x16);

	if (t3 != -25) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint8_t x18 = 1U;
	uint16_t x19 = 8307U;
	static uint32_t x20 = 5594817U;

	t4 = (((x17<x18)^x19)|x20);

	if (t4 != 5603059U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 13099U;
	int16_t x23 = 40;
	volatile int32_t t5 = -49341;

	t5 = (((x21<x22)^x23)|x24);

	if (t5 != -32728) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint64_t x26 = 20577LLU;
	uint16_t x27 = 1000U;
	volatile int64_t x28 = INT64_MIN;

	t6 = (((x25<x26)^x27)|x28);

	if (t6 != -9223372036854774808LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 94218LL;
	uint32_t x32 = UINT32_MAX;

	t7 = (((x29<x30)^x31)|x32);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int64_t x34 = 82LL;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = 316;

	t8 = (((x33<x34)^x35)|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 19297635U;

	t9 = (((x37<x38)^x39)|x40);

	if (t9 != 19297654U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 5U;
	uint8_t x43 = UINT8_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -1356691;

	t10 = (((x41<x42)^x43)|x44);

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	volatile int32_t t11 = 208894;

	t11 = (((x45<x46)^x47)|x48);

	if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	volatile int64_t x50 = -1LL;
	int32_t x51 = 31;
	uint8_t x52 = 1U;
	int32_t t12 = 10262;

	t12 = (((x49<x50)^x51)|x52);

	if (t12 != 31) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	static int64_t x54 = 37358937726LL;
	uint64_t x55 = 15879272LLU;
	static int64_t x56 = 478030876694413LL;
	volatile uint64_t t13 = 16724046LLU;

	t13 = (((x53<x54)^x55)|x56);

	if (t13 != 478030883119085LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x60 = UINT16_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (((x57<x58)^x59)|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int32_t x63 = -505131;
	volatile uint8_t x64 = 6U;
	static int32_t t15 = -235414663;

	t15 = (((x61<x62)^x63)|x64);

	if (t15 != -505129) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3U;
	uint64_t x66 = 5LLU;
	int32_t x67 = -1;
	volatile int64_t x68 = 57LL;
	volatile int64_t t16 = -3164810269916LL;

	t16 = (((x65<x66)^x67)|x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = 40178U;
	static uint32_t x71 = 3337U;
	static int8_t x72 = INT8_MAX;
	uint32_t t17 = 0U;

	t17 = (((x69<x70)^x71)|x72);

	if (t17 != 3455U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	static int16_t x74 = INT16_MAX;
	uint16_t x75 = 58U;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 6567051;

	t18 = (((x73<x74)^x75)|x76);

	if (t18 != -2147483589) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = 8U;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 20372183;

	t19 = (((x77<x78)^x79)|x80);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x83 = 7673245;
	uint64_t t20 = 2056049734917098452LLU;

	t20 = (((x81<x82)^x83)|x84);

	if (t20 != 323773451434557405LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 96156063U;
	uint64_t x86 = 3466LLU;
	int32_t x87 = -1;
	static int64_t x88 = INT64_MIN;
	volatile int64_t t21 = -1375LL;

	t21 = (((x85<x86)^x87)|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 2396968609700447LLU;
	uint64_t x90 = 127548596131LLU;
	uint64_t x91 = 8124720000LLU;
	volatile uint32_t x92 = UINT32_MAX;
	volatile uint64_t t22 = 44238234785092LLU;

	t22 = (((x89<x90)^x91)|x92);

	if (t22 != 8589934591LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint16_t x94 = 1U;
	uint16_t x95 = 0U;
	int32_t x96 = -345055;
	volatile int32_t t23 = 457;

	t23 = (((x93<x94)^x95)|x96);

	if (t23 != -345055) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -45;
	volatile uint64_t x99 = 263088830LLU;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t24 = 7435LLU;

	t24 = (((x97<x98)^x99)|x100);

	if (t24 != 9223372037117864639LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 59805773240623855LLU;
	static uint8_t x102 = 93U;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MAX;

	t25 = (((x101<x102)^x103)|x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MAX;
	int32_t x106 = -1;
	volatile int32_t x107 = INT32_MIN;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (((x105<x106)^x107)|x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -7998794;

	t27 = (((x109<x110)^x111)|x112);

	if (t27 != -32737) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 50122785464750LLU;
	static int16_t x114 = INT16_MAX;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = INT32_MAX;

	t28 = (((x113<x114)^x115)|x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = 1;
	int8_t x119 = -1;
	volatile int32_t t29 = -813;

	t29 = (((x117<x118)^x119)|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 3U;
	static int16_t x122 = INT16_MAX;
	uint8_t x123 = 2U;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -87978;

	t30 = (((x121<x122)^x123)|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	volatile int64_t x126 = 3800616445929169LL;
	uint8_t x127 = 34U;
	int32_t t31 = 221505941;

	t31 = (((x125<x126)^x127)|x128);

	if (t31 != -2147483613) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	int32_t x131 = INT32_MAX;
	int8_t x132 = -1;
	int32_t t32 = -78894414;

	t32 = (((x129<x130)^x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 94U;
	volatile int8_t x135 = INT8_MIN;
	static volatile int32_t t33 = 904;

	t33 = (((x133<x134)^x135)|x136);

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MIN;
	static int8_t x140 = 0;

	t34 = (((x137<x138)^x139)|x140);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 112U;
	int8_t x144 = -7;
	uint32_t t35 = 163128U;

	t35 = (((x141<x142)^x143)|x144);

	if (t35 != 4294967291U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 42U;
	volatile int16_t x147 = INT16_MAX;
	uint8_t x148 = 0U;
	static volatile int32_t t36 = -97974;

	t36 = (((x145<x146)^x147)|x148);

	if (t36 != 32766) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MAX;
	static int8_t x150 = -1;
	static int16_t x151 = -94;
	static uint16_t x152 = UINT16_MAX;
	static volatile int32_t t37 = 78;

	t37 = (((x149<x150)^x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint8_t x154 = 33U;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t38 = -14;

	t38 = (((x153<x154)^x155)|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	uint32_t x158 = UINT32_MAX;
	uint64_t x159 = 587746718945LLU;
	static int8_t x160 = INT8_MIN;
	uint64_t t39 = 4339746121823067334LLU;

	t39 = (((x157<x158)^x159)|x160);

	if (t39 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (((x161<x162)^x163)|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 27;
	volatile int8_t x166 = 34;
	int64_t x167 = -21092335LL;
	int64_t x168 = -1LL;

	t41 = (((x165<x166)^x167)|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1LL;
	int64_t x170 = -28506LL;
	volatile int32_t x171 = 16;
	uint32_t t42 = 121372691U;

	t42 = (((x169<x170)^x171)|x172);

	if (t42 != 48506U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -3;
	uint16_t x175 = 42U;
	volatile int16_t x176 = 1121;
	int32_t t43 = 4952351;

	t43 = (((x173<x174)^x175)|x176);

	if (t43 != 1131) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = -1228LL;
	static int16_t x179 = INT16_MAX;

	t44 = (((x177<x178)^x179)|x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x183 = 1358U;
	int64_t x184 = -1355330834LL;
	static int64_t t45 = -13LL;

	t45 = (((x181<x182)^x183)|x184);

	if (t45 != -1355329553LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint64_t x186 = UINT64_MAX;
	static uint16_t x187 = 22U;
	static int32_t x188 = -2004702;
	volatile int32_t t46 = -646;

	t46 = (((x185<x186)^x187)|x188);

	if (t46 != -2004681) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 6U;
	volatile int64_t x191 = INT64_MAX;
	uint8_t x192 = 0U;
	volatile int64_t t47 = INT64_MAX;

	t47 = (((x189<x190)^x191)|x192);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = -1;
	static volatile uint32_t x195 = 78396U;
	static uint32_t x196 = 7U;

	t48 = (((x193<x194)^x195)|x196);

	if (t48 != 78399U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	volatile int32_t x198 = INT32_MAX;
	static uint8_t x199 = 34U;
	static int32_t t49 = -9792220;

	t49 = (((x197<x198)^x199)|x200);

	if (t49 != 13009835) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile uint16_t x202 = 87U;
	volatile int32_t x203 = 267290633;
	static volatile uint32_t x204 = 3U;
	volatile uint32_t t50 = 4U;

	t50 = (((x201<x202)^x203)|x204);

	if (t50 != 267290635U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = UINT32_MAX;
	static uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t51 = -7104;

	t51 = (((x205<x206)^x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = -1LL;
	static int32_t x212 = INT32_MIN;
	volatile int64_t t52 = 70170337473835162LL;

	t52 = (((x209<x210)^x211)|x212);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 19906706U;
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MIN;
	int8_t x216 = 26;

	t53 = (((x213<x214)^x215)|x216);

	if (t53 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 4U;
	uint64_t x218 = 436228049LLU;
	static volatile int16_t x219 = -27;
	int8_t x220 = -1;
	static int32_t t54 = -15621;

	t54 = (((x217<x218)^x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	static int16_t x222 = INT16_MIN;
	volatile int8_t x223 = INT8_MAX;
	volatile uint64_t t55 = 63167151195697LLU;

	t55 = (((x221<x222)^x223)|x224);

	if (t55 != 6006527LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 2943U;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -150859300;

	t56 = (((x225<x226)^x227)|x228);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 6;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = -916;
	int8_t x232 = -13;

	t57 = (((x229<x230)^x231)|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	volatile uint16_t x234 = 8465U;
	uint64_t x235 = 111091686708LLU;
	static int16_t x236 = -1;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x233<x234)^x235)|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MAX;
	static int64_t x239 = INT64_MIN;
	int8_t x240 = 3;
	volatile int64_t t59 = 26LL;

	t59 = (((x237<x238)^x239)|x240);

	if (t59 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = UINT16_MAX;
	uint8_t x243 = 4U;
	uint64_t x244 = UINT64_MAX;
	static uint64_t t60 = UINT64_MAX;

	t60 = (((x241<x242)^x243)|x244);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MAX;
	volatile int32_t t61 = 0;

	t61 = (((x245<x246)^x247)|x248);

	if (t61 != -2147483521) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1328211;
	int16_t x250 = INT16_MAX;
	static int8_t x252 = -3;
	volatile int32_t t62 = -28;

	t62 = (((x249<x250)^x251)|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x253 = 3181U;
	uint64_t x254 = 3545461227016LLU;
	int64_t x256 = INT64_MIN;

	t63 = (((x253<x254)^x255)|x256);

	if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int64_t x258 = INT64_MIN;
	uint32_t x259 = UINT32_MAX;
	static uint32_t x260 = 11206U;

	t64 = (((x257<x258)^x259)|x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x262 = 56U;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x261<x262)^x263)|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int16_t x266 = 0;
	uint32_t x267 = 155792594U;
	volatile uint8_t x268 = 4U;
	volatile uint32_t t66 = 34U;

	t66 = (((x265<x266)^x267)|x268);

	if (t66 != 155792599U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -126;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = 12027;
	static int32_t t67 = -1376;

	t67 = (((x269<x270)^x271)|x272);

	if (t67 != -20741) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = 1U;
	uint16_t x276 = UINT16_MAX;

	t68 = (((x273<x274)^x275)|x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = -1;
	uint64_t x278 = 14169678LLU;
	static int16_t x279 = -1;
	uint32_t x280 = 154U;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = (((x277<x278)^x279)|x280);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x282 = UINT16_MAX;
	static uint32_t x283 = UINT32_MAX;

	t70 = (((x281<x282)^x283)|x284);

	if (t70 != 4294967294LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -21;
	uint32_t x286 = UINT32_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -81712113;

	t71 = (((x285<x286)^x287)|x288);

	if (t71 != -2147450881) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 6662U;
	volatile int64_t t72 = 242001422731LL;

	t72 = (((x289<x290)^x291)|x292);

	if (t72 != 6671LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = 1428U;
	uint64_t x294 = 22704854240612433LLU;
	volatile int8_t x295 = INT8_MIN;
	static int16_t x296 = INT16_MAX;
	int32_t t73 = -6007;

	t73 = (((x293<x294)^x295)|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int32_t x298 = INT32_MIN;
	uint32_t x299 = 691979U;
	int16_t x300 = 3;
	volatile uint32_t t74 = 15U;

	t74 = (((x297<x298)^x299)|x300);

	if (t74 != 691979U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 1;
	static int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	int32_t t75 = 0;

	t75 = (((x301<x302)^x303)|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -136711119749687LL;
	static int8_t x306 = 0;
	volatile int16_t x307 = -1;
	uint64_t x308 = 618LLU;
	static uint64_t t76 = 230650210976486653LLU;

	t76 = (((x305<x306)^x307)|x308);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -6932080LL;
	int16_t x310 = -1;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = -41;
	volatile int32_t t77 = 16903;

	t77 = (((x309<x310)^x311)|x312);

	if (t77 != -41) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = -1;
	int32_t t78 = 11;

	t78 = (((x313<x314)^x315)|x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	volatile int64_t x319 = 1625990324863806631LL;
	volatile int64_t t79 = -1636980396625198LL;

	t79 = (((x317<x318)^x319)|x320);

	if (t79 != 1625990325237448703LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = 16046U;
	static int32_t x324 = 1;

	t80 = (((x321<x322)^x323)|x324);

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t81 = 428;

	t81 = (((x325<x326)^x327)|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	static uint8_t x331 = 8U;
	volatile int64_t x332 = -26LL;
	volatile int64_t t82 = 102892442783LL;

	t82 = (((x329<x330)^x331)|x332);

	if (t82 != -18LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -46;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = UINT8_MAX;
	static int8_t x336 = INT8_MIN;
	int32_t t83 = -31830;

	t83 = (((x333<x334)^x335)|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int8_t x338 = 0;
	static uint64_t x339 = 5327554032750790945LLU;
	uint8_t x340 = 28U;
	volatile uint64_t t84 = 120363436320LLU;

	t84 = (((x337<x338)^x339)|x340);

	if (t84 != 5327554032750790972LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	volatile uint64_t t85 = 11250352906LLU;

	t85 = (((x341<x342)^x343)|x344);

	if (t85 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -533093LL;
	static volatile int32_t x347 = -3459280;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 15654530;

	t86 = (((x345<x346)^x347)|x348);

	if (t86 != -3440641) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 59774291LLU;
	static int32_t x350 = -1;
	int64_t t87 = -774879647715LL;

	t87 = (((x349<x350)^x351)|x352);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 35;
	volatile uint8_t x355 = UINT8_MAX;
	static uint64_t t88 = UINT64_MAX;

	t88 = (((x353<x354)^x355)|x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint32_t x358 = 15U;
	int64_t x359 = 114816023LL;
	int64_t x360 = 20004LL;
	int64_t t89 = -2650895609431490LL;

	t89 = (((x357<x358)^x359)|x360);

	if (t89 != 114818615LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = 2575898;
	int32_t x362 = 2;
	int64_t x363 = INT64_MAX;
	static uint8_t x364 = 29U;

	t90 = (((x361<x362)^x363)|x364);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = UINT32_MAX;
	int64_t x368 = -1LL;

	t91 = (((x365<x366)^x367)|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x370 = 6U;
	int64_t x371 = -53372573837LL;

	t92 = (((x369<x370)^x371)|x372);

	if (t92 != -51539607553LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static volatile int32_t x374 = 65040;
	static int8_t x375 = -1;
	int64_t x376 = -1702713431537LL;
	static volatile int64_t t93 = -1848LL;

	t93 = (((x373<x374)^x375)|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1104387988293LLU;
	volatile uint8_t x378 = 3U;
	static uint32_t x379 = 1U;
	static uint32_t t94 = 38589U;

	t94 = (((x377<x378)^x379)|x380);

	if (t94 != 501303U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	uint16_t x382 = 27U;
	int8_t x383 = -1;
	volatile int64_t x384 = INT64_MAX;

	t95 = (((x381<x382)^x383)|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 0U;
	volatile uint64_t x386 = 65832176520885475LLU;
	uint32_t x387 = UINT32_MAX;
	uint8_t x388 = 3U;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (((x385<x386)^x387)|x388);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -2LL;
	uint32_t x390 = 1173846248U;
	int32_t x391 = INT32_MIN;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 2;

	t97 = (((x389<x390)^x391)|x392);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -6906339000606799LL;
	int32_t x395 = INT32_MAX;
	volatile int64_t x396 = -1LL;
	volatile int64_t t98 = -52730746394946520LL;

	t98 = (((x393<x394)^x395)|x396);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 3LL;
	static volatile uint64_t x398 = 12LLU;
	int8_t x400 = INT8_MIN;
	static uint32_t t99 = 122643030U;

	t99 = (((x397<x398)^x399)|x400);

	if (t99 != 4294967257U) { NG(); } else { ; }
	
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

