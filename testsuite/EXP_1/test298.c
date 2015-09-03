#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
int32_t t3 = 4990;
int8_t x17 = -30;
static volatile int16_t x26 = INT16_MIN;
uint32_t x31 = UINT32_MAX;
static volatile int32_t t7 = 501646;
volatile int32_t t8 = 0;
int64_t x51 = -628712558LL;
int32_t x59 = 0;
uint16_t x60 = 4U;
volatile int32_t t13 = 973;
uint32_t x72 = 356555U;
int8_t x78 = 57;
uint8_t x88 = 1U;
uint32_t x90 = 9U;
uint32_t x96 = UINT32_MAX;
static int16_t x102 = INT16_MIN;
volatile int8_t x103 = -1;
int64_t x109 = INT64_MAX;
int64_t x110 = 474469008002156LL;
volatile int64_t x112 = INT64_MIN;
int32_t x115 = 16;
uint16_t x127 = 1U;
int16_t x130 = INT16_MIN;
volatile int32_t x131 = INT32_MIN;
volatile uint32_t x135 = 99893U;
int32_t t29 = -52533;
volatile int32_t t31 = 0;
int8_t x146 = 0;
static int32_t x147 = -163343;
volatile int32_t t32 = 0;
uint8_t x155 = 39U;
uint16_t x160 = 19U;
static volatile int16_t x165 = -9269;
volatile int64_t t37 = INT64_MIN;
static int8_t x171 = -18;
volatile int32_t t41 = 0;
volatile int32_t t42 = -57;
static uint32_t x193 = UINT32_MAX;
uint16_t x199 = 2285U;
uint32_t x202 = 29934821U;
int8_t x208 = INT8_MIN;
int32_t x213 = INT32_MIN;
int16_t x220 = INT16_MAX;
volatile uint32_t x226 = 422U;
uint64_t x235 = 203212613292736LLU;
volatile uint32_t x236 = 266U;
int16_t x240 = -1;
int32_t t56 = 22384;
int8_t x258 = -1;
uint64_t x259 = 3116LLU;
uint32_t x260 = UINT32_MAX;
volatile uint32_t t57 = UINT32_MAX;
static int64_t x270 = INT64_MIN;
volatile int32_t t59 = 1;
static uint16_t x275 = 4647U;
int16_t x277 = INT16_MAX;
static uint8_t x278 = UINT8_MAX;
volatile int8_t x280 = -2;
int32_t t61 = -487;
uint8_t x281 = 37U;
int64_t x284 = -42132185LL;
static volatile uint32_t t63 = 24865764U;
int32_t t64 = 0;
int64_t x303 = 568098314759996342LL;
volatile int8_t x306 = INT8_MAX;
int32_t x318 = -1;
int32_t x323 = INT32_MIN;
int64_t t72 = 716684998LL;
int64_t x329 = INT64_MIN;
static int8_t x333 = INT8_MIN;
volatile int8_t x334 = INT8_MAX;
uint16_t x336 = 223U;
int64_t x341 = INT64_MAX;
static volatile int32_t t78 = -7;
static int32_t x357 = -2;
static int16_t x360 = 4061;
int32_t x361 = 0;
int64_t x364 = 1255542115003525034LL;
static int32_t t81 = 19341926;
uint64_t x370 = UINT64_MAX;
volatile uint32_t x373 = UINT32_MAX;
static int32_t x377 = -1;
int8_t x379 = INT8_MIN;
static int32_t x386 = -160504929;
int64_t t86 = 241205LL;
int16_t x400 = -14;
volatile int64_t x402 = INT64_MIN;
int64_t x407 = -29044979612331570LL;
uint32_t t91 = UINT32_MAX;
int16_t x413 = -1;
int8_t x423 = INT8_MAX;
volatile int64_t t94 = INT64_MAX;
int8_t x427 = INT8_MIN;
volatile int64_t x434 = 84119622062LL;
volatile int16_t x447 = -2;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	static int32_t x2 = -1;
	static uint32_t x3 = UINT32_MAX;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = (((x1-x2)<=x3)|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int8_t x6 = 1;
	int64_t x7 = INT64_MAX;
	static int16_t x8 = -1;
	int32_t t1 = 10998;

	t1 = (((x5-x6)<=x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -104;

	t2 = (((x9-x10)<=x11)|x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -7187LL;
	int8_t x14 = -5;
	static int8_t x15 = 0;
	uint16_t x16 = UINT16_MAX;

	t3 = (((x13-x14)<=x15)|x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -2;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 860U;
	volatile int32_t t4 = -19;

	t4 = (((x17-x18)<=x19)|x20);

	if (t4 != 860) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 24U;
	int16_t x22 = 3577;
	static volatile int16_t x23 = -1;
	static uint16_t x24 = 566U;
	int32_t t5 = -429583573;

	t5 = (((x21-x22)<=x23)|x24);

	if (t5 != 567) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int32_t x27 = 0;
	static volatile uint64_t x28 = 32022523352309LLU;
	volatile uint64_t t6 = 1218413443476LLU;

	t6 = (((x25-x26)<=x27)|x28);

	if (t6 != 32022523352309LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MIN;
	static uint16_t x32 = 149U;

	t7 = (((x29-x30)<=x31)|x32);

	if (t7 != 149) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = 0;
	uint32_t x35 = 1111398U;
	int16_t x36 = INT16_MIN;

	t8 = (((x33-x34)<=x35)|x36);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -15266;
	volatile int16_t x38 = INT16_MIN;
	static int16_t x39 = INT16_MIN;
	int32_t x40 = -1;
	static int32_t t9 = -211;

	t9 = (((x37-x38)<=x39)|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 760951621463LLU;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = 8274239;

	t10 = (((x45-x46)<=x47)|x48);

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int8_t x50 = INT8_MAX;
	int32_t x52 = -190030;
	volatile int32_t t11 = 36;

	t11 = (((x49-x50)<=x51)|x52);

	if (t11 != -190030) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = 14819LL;
	static int8_t x54 = INT8_MIN;
	uint64_t x55 = 1LLU;
	static int32_t x56 = 0;
	int32_t t12 = 414;

	t12 = (((x53-x54)<=x55)|x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = 49;
	int16_t x58 = -1;

	t13 = (((x57-x58)<=x59)|x60);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	volatile uint64_t x62 = UINT64_MAX;
	volatile int64_t x63 = INT64_MAX;
	static int64_t x64 = INT64_MAX;
	static int64_t t14 = INT64_MAX;

	t14 = (((x61-x62)<=x63)|x64);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MAX;
	static int64_t x71 = INT64_MAX;
	uint32_t t15 = 2503U;

	t15 = (((x69-x70)<=x71)|x72);

	if (t15 != 356555U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 60683476LL;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = -1;
	static volatile int32_t t16 = 0;

	t16 = (((x73-x74)<=x75)|x76);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = UINT8_MAX;
	uint8_t x79 = 4U;
	int32_t x80 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = (((x77-x78)<=x79)|x80);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = INT32_MIN;
	static int64_t x82 = INT64_MIN;
	static int64_t x83 = INT64_MIN;
	static volatile uint16_t x84 = 7U;
	volatile int32_t t18 = 61071252;

	t18 = (((x81-x82)<=x83)|x84);

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MIN;
	static int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	int32_t t19 = -6;

	t19 = (((x85-x86)<=x87)|x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1300;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = -1;
	volatile int32_t t20 = -60;

	t20 = (((x89-x90)<=x91)|x92);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 31;
	uint32_t x94 = UINT32_MAX;
	int8_t x95 = 4;
	uint32_t t21 = UINT32_MAX;

	t21 = (((x93-x94)<=x95)|x96);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MAX;
	uint32_t x98 = 63685U;
	static volatile int16_t x99 = -13643;
	int8_t x100 = -4;
	int32_t t22 = 12307;

	t22 = (((x97-x98)<=x99)|x100);

	if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = 5777571;

	t23 = (((x101-x102)<=x103)|x104);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x111 = 325U;
	int64_t t24 = INT64_MIN;

	t24 = (((x109-x110)<=x111)|x112);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = INT64_MIN;
	static volatile int64_t x116 = INT64_MAX;
	int64_t t25 = INT64_MAX;

	t25 = (((x113-x114)<=x115)|x116);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = 88U;
	int8_t x120 = INT8_MAX;
	volatile int32_t t26 = 26162564;

	t26 = (((x117-x118)<=x119)|x120);

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x126 = 40;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t27 = -2070;

	t27 = (((x125-x126)<=x127)|x128);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	static uint64_t x132 = 41LLU;
	volatile uint64_t t28 = 44748284174LLU;

	t28 = (((x129-x130)<=x131)|x132);

	if (t28 != 41LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = 16271LLU;
	volatile int16_t x134 = -5725;
	volatile int16_t x136 = -11;

	t29 = (((x133-x134)<=x135)|x136);

	if (t29 != -11) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = -2;
	int64_t x138 = -1939198877358LL;
	int8_t x139 = INT8_MIN;
	volatile int32_t x140 = INT32_MIN;
	int32_t t30 = INT32_MIN;

	t30 = (((x137-x138)<=x139)|x140);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 627906640U;
	static int8_t x144 = -1;

	t31 = (((x141-x142)<=x143)|x144);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = 6462866U;
	int16_t x148 = INT16_MAX;

	t32 = (((x145-x146)<=x147)|x148);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	static uint8_t x152 = 1U;
	volatile int32_t t33 = -1;

	t33 = (((x149-x150)<=x151)|x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = -1LL;
	int64_t x154 = INT64_MIN;
	volatile int8_t x156 = 0;
	volatile int32_t t34 = -393;

	t34 = (((x153-x154)<=x155)|x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -58LL;
	volatile int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int32_t t35 = -2;

	t35 = (((x157-x158)<=x159)|x160);

	if (t35 != 19) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MAX;
	volatile uint16_t x162 = 7U;
	uint64_t x163 = 63218LLU;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = (((x161-x162)<=x163)|x164);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MIN;

	t37 = (((x165-x166)<=x167)|x168);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = -1;
	int64_t x172 = INT64_MIN;
	static int64_t t38 = -2074893290871175LL;

	t38 = (((x169-x170)<=x171)|x172);

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = -13694;
	int64_t x176 = INT64_MIN;
	volatile int64_t t39 = -4188574053115877643LL;

	t39 = (((x173-x174)<=x175)|x176);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = 2;
	int32_t x178 = 3355;
	uint32_t x179 = 1380913U;
	static volatile uint32_t x180 = UINT32_MAX;
	static volatile uint32_t t40 = UINT32_MAX;

	t40 = (((x177-x178)<=x179)|x180);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -366LL;
	uint16_t x182 = 4U;
	static int32_t x183 = INT32_MIN;
	int32_t x184 = 122;

	t41 = (((x181-x182)<=x183)|x184);

	if (t41 != 122) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = 7052094845758643LL;
	int64_t x191 = -3524797605761LL;
	int16_t x192 = INT16_MAX;

	t42 = (((x189-x190)<=x191)|x192);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = INT16_MAX;
	volatile int64_t x195 = -3438565442186842406LL;
	int32_t x196 = -518659;
	volatile int32_t t43 = -1;

	t43 = (((x193-x194)<=x195)|x196);

	if (t43 != -518659) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	static int8_t x198 = -20;
	volatile uint8_t x200 = UINT8_MAX;
	int32_t t44 = -2;

	t44 = (((x197-x198)<=x199)|x200);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -429826398354099679LL;
	int64_t t45 = -20360551061560456LL;

	t45 = (((x201-x202)<=x203)|x204);

	if (t45 != -429826398354099679LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 1906128886LL;
	int64_t x206 = 1LL;
	uint64_t x207 = UINT64_MAX;
	int32_t t46 = 15586;

	t46 = (((x205-x206)<=x207)|x208);

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = -1;
	int16_t x210 = -1;
	int8_t x211 = -1;
	static int32_t x212 = -8968529;
	volatile int32_t t47 = -209;

	t47 = (((x209-x210)<=x211)|x212);

	if (t47 != -8968529) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = -1487;
	uint16_t x215 = 152U;
	int8_t x216 = 8;
	volatile int32_t t48 = -3;

	t48 = (((x213-x214)<=x215)|x216);

	if (t48 != 9) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x217 = 1142961456LLU;
	int32_t x218 = INT32_MIN;
	int64_t x219 = 1781394529296333LL;
	volatile int32_t t49 = -15304631;

	t49 = (((x217-x218)<=x219)|x220);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x221 = INT8_MAX;
	uint64_t x222 = 4LLU;
	uint8_t x223 = 0U;
	uint64_t x224 = 1446350306866652713LLU;
	volatile uint64_t t50 = 54LLU;

	t50 = (((x221-x222)<=x223)|x224);

	if (t50 != 1446350306866652713LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	static int8_t x227 = 0;
	volatile int8_t x228 = INT8_MIN;
	static volatile int32_t t51 = 6;

	t51 = (((x225-x226)<=x227)|x228);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = -1LL;
	int16_t x231 = -23;
	static volatile uint64_t x232 = 4628984718903LLU;
	static volatile uint64_t t52 = 32824LLU;

	t52 = (((x229-x230)<=x231)|x232);

	if (t52 != 4628984718903LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 156580362729751759LLU;
	static uint64_t x234 = 3572550596097001LLU;
	volatile uint32_t t53 = 1U;

	t53 = (((x233-x234)<=x235)|x236);

	if (t53 != 266U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MAX;
	static uint8_t x238 = UINT8_MAX;
	volatile uint32_t x239 = 14814752U;
	int32_t t54 = -480154550;

	t54 = (((x237-x238)<=x239)|x240);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = 22U;
	int64_t x242 = 132955842LL;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = -128889499803LL;
	int64_t t55 = 3757968987LL;

	t55 = (((x241-x242)<=x243)|x244);

	if (t55 != -128889499803LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x249 = INT16_MAX;
	int64_t x250 = 289LL;
	int8_t x251 = -1;
	int16_t x252 = INT16_MAX;

	t56 = (((x249-x250)<=x251)|x252);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = 163039892914116LL;

	t57 = (((x257-x258)<=x259)|x260);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 953124454158845LLU;
	volatile uint32_t x262 = UINT32_MAX;
	int8_t x263 = -1;
	static int64_t x264 = INT64_MIN;
	int64_t t58 = -16881225LL;

	t58 = (((x261-x262)<=x263)|x264);

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x269 = INT8_MIN;
	uint64_t x271 = 75347LLU;
	static uint16_t x272 = UINT16_MAX;

	t59 = (((x269-x270)<=x271)|x272);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x273 = 91U;
	int32_t x274 = INT32_MAX;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t60 = -4;

	t60 = (((x273-x274)<=x275)|x276);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x279 = INT16_MIN;

	t61 = (((x277-x278)<=x279)|x280);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x282 = 0LL;
	uint32_t x283 = 437028U;
	int64_t t62 = -1LL;

	t62 = (((x281-x282)<=x283)|x284);

	if (t62 != -42132185LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MIN;
	volatile int64_t x286 = -1LL;
	int16_t x287 = 1;
	uint32_t x288 = 359U;

	t63 = (((x285-x286)<=x287)|x288);

	if (t63 != 359U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x289 = -98;
	int64_t x290 = INT64_MIN;
	int64_t x291 = 811317LL;
	volatile uint16_t x292 = UINT16_MAX;

	t64 = (((x289-x290)<=x291)|x292);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -34883231;
	int8_t x294 = 0;
	uint16_t x295 = 162U;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x293-x294)<=x295)|x296);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;
	int64_t t66 = 7LL;

	t66 = (((x297-x298)<=x299)|x300);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = -1LL;
	static uint32_t x302 = 647U;
	uint64_t x304 = 16509380149LLU;
	volatile uint64_t t67 = 15059LLU;

	t67 = (((x301-x302)<=x303)|x304);

	if (t67 != 16509380149LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 0U;
	static uint16_t x307 = 2081U;
	static int8_t x308 = -1;
	volatile int32_t t68 = -54534023;

	t68 = (((x305-x306)<=x307)|x308);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = 2317487U;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t69 = 64340;

	t69 = (((x309-x310)<=x311)|x312);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = 41662;
	int64_t x314 = 47145012LL;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = UINT16_MAX;
	static int32_t t70 = 315;

	t70 = (((x313-x314)<=x315)|x316);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x317 = 0U;
	int64_t x319 = -170LL;
	uint32_t x320 = 6439750U;
	uint32_t t71 = 4348U;

	t71 = (((x317-x318)<=x319)|x320);

	if (t71 != 6439750U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = 718725698LL;
	int16_t x322 = INT16_MAX;
	static int64_t x324 = -1LL;

	t72 = (((x321-x322)<=x323)|x324);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = UINT16_MAX;
	static volatile int32_t x326 = INT32_MAX;
	int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	int64_t t73 = -430484480356863554LL;

	t73 = (((x325-x326)<=x327)|x328);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x330 = -1;
	uint16_t x331 = 11U;
	uint16_t x332 = UINT16_MAX;
	static volatile int32_t t74 = 436940;

	t74 = (((x329-x330)<=x331)|x332);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x335 = 6;
	volatile int32_t t75 = -11183;

	t75 = (((x333-x334)<=x335)|x336);

	if (t75 != 223) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 17028803104073LLU;
	int64_t x338 = -1LL;
	int16_t x339 = 1137;
	uint16_t x340 = 120U;
	volatile int32_t t76 = -127;

	t76 = (((x337-x338)<=x339)|x340);

	if (t76 != 120) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x341-x342)<=x343)|x344);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x353 = 7031U;
	int16_t x354 = -1;
	static int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;

	t78 = (((x353-x354)<=x355)|x356);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x358 = UINT32_MAX;
	int16_t x359 = -1;
	static int32_t t79 = -666480;

	t79 = (((x357-x358)<=x359)|x360);

	if (t79 != 4061) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x362 = -1;
	uint32_t x363 = 6062U;
	volatile int64_t t80 = 11562312610469045LL;

	t80 = (((x361-x362)<=x363)|x364);

	if (t80 != 1255542115003525035LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x365 = 734621437LL;
	uint8_t x366 = UINT8_MAX;
	uint64_t x367 = 35499LLU;
	uint16_t x368 = 6U;

	t81 = (((x365-x366)<=x367)|x368);

	if (t81 != 6) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	int64_t x371 = 3766356582LL;
	int64_t x372 = -5866685508LL;
	volatile int64_t t82 = -31001126LL;

	t82 = (((x369-x370)<=x371)|x372);

	if (t82 != -5866685508LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x374 = -1LL;
	volatile int16_t x375 = -1;
	uint64_t x376 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (((x373-x374)<=x375)|x376);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x378 = UINT8_MAX;
	int32_t x380 = -23987353;
	volatile int32_t t84 = -31;

	t84 = (((x377-x378)<=x379)|x380);

	if (t84 != -23987353) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x381 = INT8_MIN;
	int32_t x382 = -1;
	static uint8_t x383 = UINT8_MAX;
	uint8_t x384 = 0U;
	int32_t t85 = 8564105;

	t85 = (((x381-x382)<=x383)|x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x385 = -16;
	int64_t x387 = 1379846LL;
	static int64_t x388 = -614515731LL;

	t86 = (((x385-x386)<=x387)|x388);

	if (t86 != -614515731LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = 0;
	volatile uint16_t x390 = UINT16_MAX;
	int64_t x391 = -18483531735273585LL;
	int32_t x392 = -6161594;
	int32_t t87 = -3036;

	t87 = (((x389-x390)<=x391)|x392);

	if (t87 != -6161594) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x393 = UINT32_MAX;
	int32_t x394 = -20230;
	volatile int64_t x395 = 513653889LL;
	uint16_t x396 = 120U;
	static volatile int32_t t88 = 219814;

	t88 = (((x393-x394)<=x395)|x396);

	if (t88 != 121) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	static int8_t x399 = -1;
	volatile int32_t t89 = -3054;

	t89 = (((x397-x398)<=x399)|x400);

	if (t89 != -14) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = -1;
	int8_t x403 = INT8_MIN;
	static int32_t x404 = -1;
	volatile int32_t t90 = -577;

	t90 = (((x401-x402)<=x403)|x404);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = 6U;
	static int16_t x406 = INT16_MIN;
	static uint32_t x408 = UINT32_MAX;

	t91 = (((x405-x406)<=x407)|x408);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x414 = INT8_MAX;
	static volatile uint32_t x415 = UINT32_MAX;
	int16_t x416 = -1;
	static int32_t t92 = 20;

	t92 = (((x413-x414)<=x415)|x416);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	uint8_t x418 = 119U;
	int32_t x419 = INT32_MIN;
	static uint64_t x420 = 12694975986271LLU;
	uint64_t t93 = 1669302223811LLU;

	t93 = (((x417-x418)<=x419)|x420);

	if (t93 != 12694975986271LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = 98303150865LL;
	int16_t x422 = 114;
	int64_t x424 = INT64_MAX;

	t94 = (((x421-x422)<=x423)|x424);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x425 = 92LLU;
	uint32_t x426 = 182U;
	int8_t x428 = 2;
	static int32_t t95 = -59027;

	t95 = (((x425-x426)<=x427)|x428);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x433 = -25730LL;
	int32_t x435 = INT32_MIN;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t96 = 23820985;

	t96 = (((x433-x434)<=x435)|x436);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = 15018599183LL;
	int16_t x446 = -47;
	static uint16_t x448 = 3315U;
	int32_t t97 = 1;

	t97 = (((x445-x446)<=x447)|x448);

	if (t97 != 3315) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x449 = 7U;
	volatile int8_t x450 = -45;
	static int16_t x451 = 1402;
	uint8_t x452 = 68U;
	int32_t t98 = 121087;

	t98 = (((x449-x450)<=x451)|x452);

	if (t98 != 69) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x453 = 18649U;
	int32_t x454 = INT32_MIN;
	static int32_t x455 = 3147883;
	uint32_t x456 = 181791013U;
	uint32_t t99 = 14U;

	t99 = (((x453-x454)<=x455)|x456);

	if (t99 != 181791013U) { NG(); } else { ; }
	
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

