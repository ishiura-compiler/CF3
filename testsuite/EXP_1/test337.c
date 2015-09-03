#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
int16_t x7 = -1;
int8_t x9 = INT8_MIN;
volatile int64_t x13 = -1LL;
volatile int8_t x15 = 4;
int64_t x17 = 16478LL;
volatile int32_t x20 = 58;
static int8_t x26 = -1;
int32_t x28 = -1;
uint8_t x41 = UINT8_MAX;
int8_t x42 = -1;
uint32_t x48 = 493034470U;
volatile int64_t t11 = 114453247LL;
int32_t x56 = INT32_MIN;
static uint16_t x58 = UINT16_MAX;
uint8_t x61 = 80U;
int64_t t15 = 65955154119LL;
int64_t x73 = -128243LL;
int64_t x80 = -1LL;
uint32_t x81 = UINT32_MAX;
int32_t x86 = -1;
int32_t x96 = -9;
volatile int64_t t22 = 5289LL;
static int32_t x110 = INT32_MIN;
static int16_t x112 = -1;
volatile int16_t x113 = INT16_MIN;
uint64_t x114 = UINT64_MAX;
uint64_t x115 = UINT64_MAX;
uint16_t x119 = UINT16_MAX;
uint16_t x121 = 0U;
volatile uint32_t t28 = 59488U;
volatile uint32_t x135 = 477U;
uint64_t x138 = 5242037500638LLU;
int32_t t34 = 4694618;
static volatile uint8_t x156 = UINT8_MAX;
volatile int64_t t36 = 8316329474LL;
uint64_t x162 = 6971308553LLU;
uint16_t x167 = 18271U;
int32_t x168 = INT32_MAX;
static uint64_t x179 = UINT64_MAX;
volatile int8_t x180 = INT8_MIN;
static volatile uint16_t x181 = 344U;
static int32_t t44 = -31278;
static int16_t x202 = INT16_MIN;
static volatile int64_t t45 = 42268LL;
static int8_t x205 = INT8_MAX;
volatile int64_t t46 = -4225137413LL;
static int32_t x210 = INT32_MAX;
static int32_t t48 = 230;
volatile int32_t t49 = -8;
int32_t x222 = -1;
int8_t x238 = INT8_MIN;
static int16_t x239 = -1;
int32_t t54 = -38;
static uint16_t x249 = UINT16_MAX;
int8_t x252 = INT8_MIN;
int8_t x261 = 0;
uint64_t x264 = UINT64_MAX;
uint32_t t61 = 124640290U;
int8_t x286 = 15;
static int32_t x291 = INT32_MIN;
int8_t x295 = -1;
int16_t x297 = 30;
volatile int32_t t69 = 39075934;
static volatile uint32_t x305 = 9U;
static volatile uint32_t x310 = UINT32_MAX;
int32_t x311 = INT32_MIN;
uint16_t x328 = 4U;
int8_t x335 = 0;
int8_t x338 = -1;
volatile uint8_t x339 = 0U;
int32_t x342 = 0;
volatile int64_t x346 = INT64_MAX;
int64_t t78 = 16846322775239704LL;
uint16_t x357 = UINT16_MAX;
int8_t x358 = INT8_MAX;
int32_t x361 = -1;
int8_t x362 = 2;
int16_t x363 = INT16_MAX;
int16_t x364 = INT16_MIN;
int8_t x384 = INT8_MIN;
volatile uint64_t x388 = 247074950263964LLU;
volatile uint64_t x392 = 0LLU;
int8_t x410 = INT8_MAX;
static volatile uint64_t t92 = UINT64_MAX;
static volatile uint64_t x414 = 30591991715LLU;
uint64_t x417 = 59065465909673984LLU;
volatile int64_t x420 = INT64_MIN;
int32_t x427 = INT32_MIN;
volatile int32_t x432 = -1;
volatile uint64_t t98 = 3015796LLU;
static uint64_t t99 = UINT64_MAX;


void f0(void) {
	volatile uint64_t x1 = 2314328311LLU;
	static volatile int16_t x2 = INT16_MIN;
	volatile uint64_t x3 = 7162114370177800LLU;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = UINT64_MAX;

	t0 = (((x1-x2)^x3)|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = 3U;
	static int16_t x8 = 1376;
	static int32_t t1 = 1205058;

	t1 = (((x5-x6)^x7)|x8);

	if (t1 != 34146) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static uint64_t x11 = 385LLU;
	volatile int8_t x12 = INT8_MIN;
	static uint64_t t2 = 2952LLU;

	t2 = (((x9-x10)^x11)|x12);

	if (t2 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 509980260LL;

	t3 = (((x13-x14)^x15)|x16);

	if (t3 != -9223372036854743045LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 10U;
	volatile int64_t x19 = INT64_MIN;
	static int64_t t4 = 474223LL;

	t4 = (((x17-x18)^x19)|x20);

	if (t4 != -9223372036854759298LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile int64_t x27 = 154048679LL;
	int64_t t5 = 24445095738LL;

	t5 = (((x25-x26)^x27)|x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -2559;
	int32_t x30 = 97;
	uint64_t x31 = 3119638LLU;
	int64_t x32 = INT64_MIN;
	uint64_t t6 = 1748503LLU;

	t6 = (((x29-x30)^x31)|x32);

	if (t6 != 18446744073706434486LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static int8_t x34 = INT8_MAX;
	int64_t x35 = INT64_MAX;
	volatile uint16_t x36 = UINT16_MAX;
	int64_t t7 = 19222555687532LL;

	t7 = (((x33-x34)^x35)|x36);

	if (t7 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	static volatile uint32_t x38 = 2862007U;
	static int8_t x39 = -14;
	int8_t x40 = 21;
	int64_t t8 = 140270LL;

	t8 = (((x37-x38)^x39)|x40);

	if (t8 != -9223372036851913793LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x43 = 8U;
	uint8_t x44 = UINT8_MAX;
	uint32_t t9 = 5529U;

	t9 = (((x41-x42)^x43)|x44);

	if (t9 != 511U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	volatile uint8_t x46 = 3U;
	volatile int16_t x47 = INT16_MIN;
	volatile uint32_t t10 = 23126469U;

	t10 = (((x45-x46)^x47)|x48);

	if (t10 != 2640543742U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = 61;
	int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MIN;

	t11 = (((x49-x50)^x51)|x52);

	if (t11 != -67LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MIN;
	uint32_t x55 = UINT32_MAX;
	volatile uint64_t t12 = 966556062LLU;

	t12 = (((x53-x54)^x55)|x56);

	if (t12 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -181939863542316LL;
	int8_t x59 = -1;
	int64_t x60 = -1LL;
	volatile int64_t t13 = 23895377554308LL;

	t13 = (((x57-x58)^x59)|x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -2551;
	volatile uint16_t x63 = 876U;
	static uint8_t x64 = 8U;
	volatile int32_t t14 = -1989;

	t14 = (((x61-x62)^x63)|x64);

	if (t14 != 2347) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	static int8_t x66 = INT8_MAX;
	int64_t x67 = -1LL;
	volatile uint8_t x68 = 5U;

	t15 = (((x65-x66)^x67)|x68);

	if (t15 != -65409LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MAX;
	uint16_t x75 = UINT16_MAX;
	static uint8_t x76 = 1U;
	static volatile int64_t t16 = 14116499036359LL;

	t16 = (((x73-x74)^x75)|x76);

	if (t16 != -2147552015LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	static volatile uint32_t x78 = UINT32_MAX;
	uint32_t x79 = UINT32_MAX;
	static volatile int64_t t17 = 72352613583LL;

	t17 = (((x77-x78)^x79)|x80);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MAX;
	int32_t x84 = INT32_MIN;
	volatile uint32_t t18 = 2U;

	t18 = (((x81-x82)^x83)|x84);

	if (t18 != 2147483903U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int16_t x87 = -815;
	static int32_t x88 = INT32_MAX;
	uint32_t t19 = UINT32_MAX;

	t19 = (((x85-x86)^x87)|x88);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -582967595872959287LL;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	int16_t x92 = -1;
	volatile int64_t t20 = 8985309879946LL;

	t20 = (((x89-x90)^x91)|x92);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = -1;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile uint64_t t21 = 28LLU;

	t21 = (((x93-x94)^x95)|x96);

	if (t21 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 98U;
	uint16_t x98 = 9977U;
	static int64_t x99 = 8056779430LL;
	int32_t x100 = -175202517;

	t22 = (((x97-x98)^x99)|x100);

	if (t22 != -3145745LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MIN;
	static volatile int16_t x103 = -1498;
	int8_t x104 = -31;
	volatile uint64_t t23 = 30598203378984813LLU;

	t23 = (((x101-x102)^x103)|x104);

	if (t23 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -3851532LL;
	int8_t x106 = -1;
	volatile uint16_t x107 = UINT16_MAX;
	int8_t x108 = -1;
	volatile int64_t t24 = -41997443524LL;

	t24 = (((x105-x106)^x107)|x108);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -1;
	volatile int64_t x111 = INT64_MAX;
	int64_t t25 = -1479259542207LL;

	t25 = (((x109-x110)^x111)|x112);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x116 = 22;
	volatile uint64_t t26 = 667258071LLU;

	t26 = (((x113-x114)^x115)|x116);

	if (t26 != 32766LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 3183U;
	volatile int16_t x118 = -1;
	static int32_t x120 = -421865085;
	int32_t t27 = 536462;

	t27 = (((x117-x118)^x119)|x120);

	if (t27 != -421856369) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x122 = UINT32_MAX;
	int32_t x123 = -382529;
	static int8_t x124 = 1;

	t28 = (((x121-x122)^x123)|x124);

	if (t28 != 4294584767U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	static volatile uint16_t x126 = UINT16_MAX;
	uint8_t x127 = 56U;
	int8_t x128 = 1;
	volatile int32_t t29 = -51136;

	t29 = (((x125-x126)^x127)|x128);

	if (t29 != -65607) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	int8_t x131 = -1;
	uint8_t x132 = 3U;
	volatile int64_t t30 = 30LL;

	t30 = (((x129-x130)^x131)|x132);

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MAX;
	static uint64_t x134 = UINT64_MAX;
	uint32_t x136 = 1650385956U;
	uint64_t t31 = 10446570671LLU;

	t31 = (((x133-x134)^x135)|x136);

	if (t31 != 3797870077LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -1;
	int16_t x139 = 5685;
	int32_t x140 = INT32_MIN;
	uint64_t t32 = 21184254672LLU;

	t32 = (((x137-x138)^x139)|x140);

	if (t32 != 18446744073679639316LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	int32_t x143 = 598441966;
	uint32_t x144 = UINT32_MAX;
	int64_t t33 = -121LL;

	t33 = (((x141-x142)^x143)|x144);

	if (t33 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MAX;
	volatile uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = -1;
	volatile uint8_t x148 = 0U;

	t34 = (((x145-x146)^x147)|x148);

	if (t34 != -2147483393) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = INT64_MIN;
	int32_t x154 = -7622;
	int64_t x155 = INT64_MAX;
	int64_t t35 = 693515906LL;

	t35 = (((x153-x154)^x155)|x156);

	if (t35 != -7425LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MAX;
	uint16_t x158 = 1478U;
	volatile int64_t x159 = INT64_MAX;
	volatile int32_t x160 = INT32_MAX;

	t36 = (((x157-x158)^x159)|x160);

	if (t36 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x161 = -1LL;
	int16_t x163 = INT16_MIN;
	volatile int64_t x164 = -1164210LL;
	uint64_t t37 = 153426618LLU;

	t37 = (((x161-x162)^x163)|x164);

	if (t37 != 18446744073708502526LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = 1;
	int8_t x166 = 7;
	static volatile int32_t t38 = 2505029;

	t38 = (((x165-x166)^x167)|x168);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 14U;
	volatile int64_t x174 = -1LL;
	uint16_t x175 = 50U;
	int8_t x176 = -15;
	static int64_t t39 = 23492711180367LL;

	t39 = (((x173-x174)^x175)|x176);

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	volatile uint64_t t40 = 16095252511643LLU;

	t40 = (((x177-x178)^x179)|x180);

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x182 = 29182808464206416LL;
	uint8_t x183 = 3U;
	int32_t x184 = 119;
	int64_t t41 = 570014513385826320LL;

	t41 = (((x181-x182)^x183)|x184);

	if (t41 != -29182808464205953LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 1LL;
	volatile uint8_t x187 = 115U;
	int32_t x188 = INT32_MIN;
	static volatile int64_t t42 = -419377LL;

	t42 = (((x185-x186)^x187)|x188);

	if (t42 != -32884LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -1;
	int32_t x190 = INT32_MIN;
	volatile int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t43 = 1;

	t43 = (((x189-x190)^x191)|x192);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x193 = 58U;
	int16_t x194 = -10;
	static volatile int32_t x195 = -1;
	static int8_t x196 = -1;

	t44 = (((x193-x194)^x195)|x196);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x201 = -15218;
	int64_t x203 = 6LL;
	int64_t x204 = INT64_MIN;

	t45 = (((x201-x202)^x203)|x204);

	if (t45 != -9223372036854758264LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = -37;
	uint32_t x207 = 1007U;
	int64_t x208 = -1LL;

	t46 = (((x205-x206)^x207)|x208);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = UINT64_MAX;
	uint8_t x211 = 12U;
	static int32_t x212 = 12892;
	uint64_t t47 = 567908LLU;

	t47 = (((x209-x210)^x211)|x212);

	if (t47 != 18446744071562080860LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x213 = 1;
	int16_t x214 = INT16_MAX;
	uint8_t x215 = 46U;
	static int16_t x216 = INT16_MAX;

	t48 = (((x213-x214)^x215)|x216);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = 284;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MIN;
	static int8_t x220 = INT8_MIN;

	t49 = (((x217-x218)^x219)|x220);

	if (t49 != -100) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = 12143337;
	volatile uint16_t x223 = 16528U;
	static uint64_t x224 = 163414LLU;
	volatile uint64_t t50 = 47491182070293LLU;

	t50 = (((x221-x222)^x223)|x224);

	if (t50 != 12287614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	static uint64_t x227 = 4180047933691LLU;
	volatile uint16_t x228 = 1784U;
	volatile uint64_t t51 = 30974LLU;

	t51 = (((x225-x226)^x227)|x228);

	if (t51 != 4180047935227LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = 18;
	int8_t x231 = INT8_MAX;
	volatile int64_t x232 = 96246214LL;
	static volatile int64_t t52 = -8458626LL;

	t52 = (((x229-x230)^x231)|x232);

	if (t52 != 96272342LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 122247U;
	static int32_t x234 = 3731196;
	volatile int16_t x235 = 867;
	uint64_t x236 = 839360LLU;
	uint64_t t53 = 312195093801LLU;

	t53 = (((x233-x234)^x235)|x236);

	if (t53 != 4291620840LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x237 = INT16_MAX;
	int8_t x240 = INT8_MIN;

	t54 = (((x237-x238)^x239)|x240);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = 1531115;
	static volatile uint32_t x244 = 0U;
	volatile uint32_t t55 = 1U;

	t55 = (((x241-x242)^x243)|x244);

	if (t55 != 1516308U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x245 = 65382LLU;
	volatile int8_t x246 = INT8_MIN;
	int8_t x247 = 7;
	int8_t x248 = INT8_MIN;
	static volatile uint64_t t56 = 1349276LLU;

	t56 = (((x245-x246)^x247)|x248);

	if (t56 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x250 = -72;
	volatile int16_t x251 = -1;
	static volatile int32_t t57 = -1;

	t57 = (((x249-x250)^x251)|x252);

	if (t57 != -72) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x253 = UINT32_MAX;
	static int32_t x254 = INT32_MAX;
	volatile int64_t x255 = -1LL;
	uint64_t x256 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x253-x254)^x255)|x256);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = 101U;
	static volatile int64_t x258 = -2132512835190888LL;
	int32_t x259 = 456346;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (((x257-x258)^x259)|x260);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x262 = INT32_MAX;
	int64_t x263 = -1LL;
	static uint64_t t60 = UINT64_MAX;

	t60 = (((x261-x262)^x263)|x264);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 15;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	uint32_t x268 = 338034940U;

	t61 = (((x265-x266)^x267)|x268);

	if (t61 != 338067708U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x269 = 902113041LL;
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MAX;
	int8_t x272 = -6;
	int64_t t62 = 57776043597351LL;

	t62 = (((x269-x270)^x271)|x272);

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -15;
	static volatile uint16_t x274 = UINT16_MAX;
	volatile uint8_t x275 = 34U;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t63 = -225395726;

	t63 = (((x273-x274)^x275)|x276);

	if (t63 != -48) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x277 = -10427529209463540LL;
	uint32_t x278 = 1755900708U;
	uint32_t x279 = UINT32_MAX;
	uint32_t x280 = 427793U;
	volatile int64_t t64 = 18120395LL;

	t64 = (((x277-x278)^x279)|x280);

	if (t64 != -10427528848625897LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	volatile int32_t x284 = INT32_MAX;
	uint64_t t65 = 970721LLU;

	t65 = (((x281-x282)^x283)|x284);

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = 38;
	int8_t x287 = INT8_MIN;
	volatile int32_t x288 = INT32_MIN;
	int32_t t66 = 533617801;

	t66 = (((x285-x286)^x287)|x288);

	if (t66 != -105) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	static int16_t x292 = INT16_MIN;
	int32_t t67 = 62712318;

	t67 = (((x289-x290)^x291)|x292);

	if (t67 != -32641) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	volatile int64_t t68 = -636281551647179563LL;

	t68 = (((x293-x294)^x295)|x296);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x298 = 15;
	static uint16_t x299 = 2627U;
	uint8_t x300 = UINT8_MAX;

	t69 = (((x297-x298)^x299)|x300);

	if (t69 != 2815) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x306 = 325300886U;
	int16_t x307 = INT16_MAX;
	int16_t x308 = 63;
	volatile uint32_t t70 = 226579712U;

	t70 = (((x305-x306)^x307)|x308);

	if (t70 != 3969659583U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x309 = 7921514722704519LLU;
	int64_t x312 = -1460574LL;
	static uint64_t t71 = 1743012934249767LLU;

	t71 = (((x309-x310)^x311)|x312);

	if (t71 != 18446744073708093098LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -1LL;
	volatile uint8_t x316 = 1U;
	volatile int64_t t72 = -55843204629544LL;

	t72 = (((x313-x314)^x315)|x316);

	if (t72 != -65663LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	int32_t t73 = -3120187;

	t73 = (((x317-x318)^x319)|x320);

	if (t73 != -32641) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = -1LL;
	volatile int8_t x326 = 0;
	uint64_t x327 = 5779622751047LLU;
	static uint64_t t74 = 6177156045468216745LLU;

	t74 = (((x325-x326)^x327)|x328);

	if (t74 != 18446738294086800572LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x333 = -4;
	volatile int64_t x334 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	static int64_t t75 = 44888LL;

	t75 = (((x333-x334)^x335)|x336);

	if (t75 != -4LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 4U;
	static int16_t x340 = INT16_MIN;
	static volatile int32_t t76 = -6976849;

	t76 = (((x337-x338)^x339)|x340);

	if (t76 != -32763) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x341 = -541244021979LL;
	static volatile uint32_t x343 = UINT32_MAX;
	int64_t x344 = INT64_MIN;
	static int64_t t77 = 14541LL;

	t77 = (((x341-x342)^x343)|x344);

	if (t77 != -545382703910LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = -1;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MIN;

	t78 = (((x345-x346)^x347)|x348);

	if (t78 != -2147483393LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x349 = 66U;
	int32_t x350 = -562541543;
	static int8_t x351 = 1;
	uint64_t x352 = 280LLU;
	volatile uint64_t t79 = 5033467021267877LLU;

	t79 = (((x349-x350)^x351)|x352);

	if (t79 != 562541880LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MAX;
	uint16_t x354 = 2742U;
	volatile int32_t x355 = INT32_MIN;
	uint8_t x356 = 52U;
	volatile int32_t t80 = -145;

	t80 = (((x353-x354)^x355)|x356);

	if (t80 != -2147453571) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x359 = INT64_MAX;
	uint64_t x360 = 50918998LLU;
	volatile uint64_t t81 = 6LLU;

	t81 = (((x357-x358)^x359)|x360);

	if (t81 != 9223372036854773375LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t t82 = 2765564;

	t82 = (((x361-x362)^x363)|x364);

	if (t82 != -32766) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = 0LL;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t83 = -14023525539547089LL;

	t83 = (((x365-x366)^x367)|x368);

	if (t83 != -32514LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	static int8_t x370 = -1;
	volatile int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MIN;
	volatile int64_t t84 = 175015LL;

	t84 = (((x369-x370)^x371)|x372);

	if (t84 != -127LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x373 = -1;
	int32_t x374 = -199;
	volatile int32_t x375 = -1;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t85 = -17;

	t85 = (((x373-x374)^x375)|x376);

	if (t85 != -71) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = 39;
	static uint16_t x382 = 7U;
	volatile int64_t x383 = 3082LL;
	volatile int64_t t86 = 4748LL;

	t86 = (((x381-x382)^x383)|x384);

	if (t86 != -86LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = 110;
	int32_t x386 = 77907299;
	static int16_t x387 = 12;
	volatile uint64_t t87 = 141988628LLU;

	t87 = (((x385-x386)^x387)|x388);

	if (t87 != 18446744073709535135LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x389 = INT16_MIN;
	uint64_t x390 = 1075202199191474148LLU;
	int64_t x391 = -1LL;
	uint64_t t88 = 255LLU;

	t88 = (((x389-x390)^x391)|x392);

	if (t88 != 1075202199191506915LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = UINT64_MAX;
	int32_t x394 = INT32_MIN;
	int32_t x395 = 56669;
	int16_t x396 = INT16_MIN;
	volatile uint64_t t89 = 863770LLU;

	t89 = (((x393-x394)^x395)|x396);

	if (t89 != 18446744073709527714LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x397 = INT16_MIN;
	uint64_t x398 = UINT64_MAX;
	static uint8_t x399 = 38U;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t90 = 2847420935251230LLU;

	t90 = (((x397-x398)^x399)|x400);

	if (t90 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x405 = 1090258;
	volatile int64_t x406 = INT64_MAX;
	static int16_t x407 = INT16_MIN;
	volatile uint32_t x408 = UINT32_MAX;
	static int64_t t91 = INT64_MAX;

	t91 = (((x405-x406)^x407)|x408);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x409 = 1LLU;
	static uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MAX;

	t92 = (((x409-x410)^x411)|x412);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = INT64_MIN;
	volatile int64_t x415 = INT64_MIN;
	volatile int16_t x416 = INT16_MAX;
	volatile uint64_t t93 = 215762LLU;

	t93 = (((x413-x414)^x415)|x416);

	if (t93 != 18446744043117576191LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x418 = 11571U;
	int8_t x419 = -13;
	volatile uint64_t t94 = 45516704078950706LLU;

	t94 = (((x417-x418)^x419)|x420);

	if (t94 != 18387678607799889214LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = 370;
	uint32_t x422 = UINT32_MAX;
	int8_t x423 = 0;
	int64_t x424 = -1LL;
	static volatile int64_t t95 = -2024425179LL;

	t95 = (((x421-x422)^x423)|x424);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x425 = INT8_MAX;
	volatile uint8_t x426 = 30U;
	int8_t x428 = INT8_MIN;
	int32_t t96 = 7080;

	t96 = (((x425-x426)^x427)|x428);

	if (t96 != -31) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x429 = 7U;
	int16_t x430 = -219;
	int16_t x431 = INT16_MIN;
	volatile int32_t t97 = 106;

	t97 = (((x429-x430)^x431)|x432);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = -1;
	uint16_t x436 = UINT16_MAX;

	t98 = (((x433-x434)^x435)|x436);

	if (t98 != 65535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = 1718734392365473197LL;
	volatile int64_t x438 = INT64_MAX;
	static uint32_t x439 = 10449U;
	uint64_t x440 = UINT64_MAX;

	t99 = (((x437-x438)^x439)|x440);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

