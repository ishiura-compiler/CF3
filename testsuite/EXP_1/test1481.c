#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 11U;
int32_t x2 = 104308;
static int16_t x5 = -60;
volatile uint32_t t1 = 50557156U;
volatile uint16_t x9 = 31U;
int64_t x13 = INT64_MIN;
uint8_t x24 = 122U;
volatile int32_t t6 = 79294500;
uint16_t x46 = 0U;
uint64_t x60 = 16317905LLU;
volatile uint64_t t14 = 292LLU;
volatile int32_t x67 = -1;
int32_t t17 = 1;
int32_t x73 = INT32_MAX;
static int32_t x74 = INT32_MIN;
volatile uint16_t x87 = UINT16_MAX;
static int32_t x91 = INT32_MIN;
uint32_t x105 = 197068367U;
int32_t x106 = -1;
uint32_t x109 = 49U;
int8_t x121 = INT8_MIN;
uint32_t x130 = 705U;
uint8_t x139 = UINT8_MAX;
int16_t x146 = INT16_MIN;
uint8_t x148 = 7U;
int16_t x149 = INT16_MAX;
int64_t x150 = INT64_MIN;
int16_t x155 = 431;
static int32_t t38 = 5965423;
int32_t x162 = 3;
static uint16_t x163 = 0U;
int32_t t40 = 18669;
volatile uint16_t x177 = UINT16_MAX;
uint32_t x181 = 140U;
uint32_t x186 = 3964384U;
int16_t x193 = 0;
static uint16_t x198 = 46U;
volatile int64_t x209 = -1LL;
volatile int32_t t52 = INT32_MAX;
int64_t x213 = INT64_MIN;
volatile uint16_t x214 = 2U;
int8_t x218 = INT8_MAX;
static int32_t t54 = 11;
int16_t x221 = INT16_MAX;
volatile int8_t x243 = 0;
uint8_t x247 = UINT8_MAX;
uint32_t x250 = 355U;
int8_t x251 = INT8_MAX;
int32_t t62 = 1;
int16_t x259 = INT16_MIN;
int32_t x260 = -1;
int32_t t64 = -1;
uint16_t x268 = 5626U;
uint16_t x271 = UINT16_MAX;
int32_t x275 = INT32_MIN;
int8_t x283 = 0;
volatile int32_t t72 = 939;
int16_t x300 = INT16_MIN;
int8_t x303 = -3;
volatile int32_t x314 = INT32_MIN;
int8_t x315 = INT8_MAX;
static volatile int32_t x317 = INT32_MAX;
int8_t x320 = 7;
volatile int32_t t79 = -31056981;
int64_t t81 = 52618LL;
int32_t x331 = -22146325;
volatile int32_t t83 = 306272;
static int64_t t84 = INT64_MIN;
uint8_t x344 = 5U;
int8_t x348 = INT8_MIN;
uint8_t x351 = 89U;
uint32_t x359 = UINT32_MAX;
volatile int64_t t91 = 186556084108LL;
uint16_t x372 = UINT16_MAX;
static uint32_t x375 = UINT32_MAX;
uint32_t t93 = 162U;
static int8_t x378 = INT8_MAX;
volatile uint32_t x380 = UINT32_MAX;
static uint16_t x382 = 7U;
int8_t x394 = INT8_MIN;
int16_t x396 = INT16_MIN;


void f0(void) {
	volatile int8_t x3 = 2;
	volatile int8_t x4 = -1;
	int32_t t0 = -390904573;

	t0 = (((x1<x2)<=x3)|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = UINT8_MAX;
	int64_t x7 = -1LL;
	static uint32_t x8 = 183U;

	t1 = (((x5<x6)<=x7)|x8);

	if (t1 != 183U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	static uint32_t x11 = 231514U;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 1071;

	t2 = (((x9<x10)<=x11)|x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = UINT8_MAX;
	static volatile uint8_t x15 = 54U;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 984;

	t3 = (((x13<x14)<=x15)|x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	uint64_t x18 = 332181813979LLU;
	static volatile int8_t x19 = INT8_MIN;
	uint16_t x20 = 833U;
	volatile int32_t t4 = -20;

	t4 = (((x17<x18)<=x19)|x20);

	if (t4 != 833) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 104U;
	volatile int8_t x22 = INT8_MIN;
	uint64_t x23 = 1LLU;
	int32_t t5 = 1631822;

	t5 = (((x21<x22)<=x23)|x24);

	if (t5 != 123) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static int16_t x26 = INT16_MAX;
	int8_t x27 = -1;
	int16_t x28 = INT16_MAX;

	t6 = (((x25<x26)<=x27)|x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 3435U;
	volatile int8_t x30 = INT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MAX;
	static volatile int32_t t7 = INT32_MAX;

	t7 = (((x29<x30)<=x31)|x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int16_t x34 = -3281;
	int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = -42;

	t8 = (((x33<x34)<=x35)|x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -62;
	volatile int64_t x38 = -1LL;
	static int8_t x39 = -33;
	int32_t x40 = 16311328;
	int32_t t9 = -1;

	t9 = (((x37<x38)<=x39)|x40);

	if (t9 != 16311328) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = 5486833;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 0;

	t10 = (((x41<x42)<=x43)|x44);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = 52;
	volatile int32_t t11 = -62;

	t11 = (((x45<x46)<=x47)|x48);

	if (t11 != 52) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 43U;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	int64_t x52 = -1LL;
	static volatile int64_t t12 = -97050661242163LL;

	t12 = (((x49<x50)<=x51)|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 96176LLU;
	volatile int32_t x54 = 3;
	int64_t x55 = -49906LL;
	static uint16_t x56 = 2U;
	static int32_t t13 = -2184738;

	t13 = (((x53<x54)<=x55)|x56);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 1747549648U;
	int16_t x58 = INT16_MIN;
	static int8_t x59 = INT8_MIN;

	t14 = (((x57<x58)<=x59)|x60);

	if (t14 != 16317905LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -53;
	static int32_t x62 = INT32_MAX;
	int32_t x63 = INT32_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 448;

	t15 = (((x61<x62)<=x63)|x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -236LL;
	int8_t x66 = -1;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 1563125;

	t16 = (((x65<x66)<=x67)|x68);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x70 = 1361U;
	int64_t x71 = INT64_MAX;
	volatile uint16_t x72 = UINT16_MAX;

	t17 = (((x69<x70)<=x71)|x72);

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x75 = INT16_MIN;
	volatile int16_t x76 = INT16_MIN;
	int32_t t18 = -232;

	t18 = (((x73<x74)<=x75)|x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -119;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x77<x78)<=x79)|x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	volatile int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t20 = 87143869749012LL;

	t20 = (((x81<x82)<=x83)|x84);

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -161544730956208307LL;
	int16_t x86 = 2188;
	uint8_t x88 = 30U;
	volatile int32_t t21 = 9492552;

	t21 = (((x85<x86)<=x87)|x88);

	if (t21 != 31) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile uint32_t x90 = UINT32_MAX;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 76894152;

	t22 = (((x89<x90)<=x91)|x92);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 0;
	volatile int16_t x94 = 4;
	volatile int32_t x95 = INT32_MAX;
	volatile uint16_t x96 = 26U;
	volatile int32_t t23 = 133801047;

	t23 = (((x93<x94)<=x95)|x96);

	if (t23 != 27) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = -8021345;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = -1195;
	volatile int32_t t24 = -1978661;

	t24 = (((x97<x98)<=x99)|x100);

	if (t24 != -1195) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 43U;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = INT32_MAX;

	t25 = (((x101<x102)<=x103)|x104);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x107 = UINT64_MAX;
	static int64_t x108 = INT64_MIN;
	int64_t t26 = 8352837LL;

	t26 = (((x105<x106)<=x107)|x108);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MAX;
	static int32_t x111 = -1;
	int32_t x112 = -1;
	volatile int32_t t27 = 604660;

	t27 = (((x109<x110)<=x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile uint32_t x114 = 4U;
	volatile int8_t x115 = -1;
	static uint32_t x116 = UINT32_MAX;
	uint32_t t28 = UINT32_MAX;

	t28 = (((x113<x114)<=x115)|x116);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 0U;
	volatile uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MAX;
	int64_t x120 = -867021541LL;
	int64_t t29 = 719594025669132133LL;

	t29 = (((x117<x118)<=x119)|x120);

	if (t29 != -867021541LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x122 = -62;
	int8_t x123 = 1;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = 47673544;

	t30 = (((x121<x122)<=x123)|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = UINT32_MAX;
	volatile int32_t x126 = 193;
	int64_t x127 = INT64_MAX;
	uint8_t x128 = 30U;
	int32_t t31 = -10;

	t31 = (((x125<x126)<=x127)|x128);

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	uint8_t x131 = 17U;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 47;

	t32 = (((x129<x130)<=x131)|x132);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = -1531124684283194334LL;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = 451071459U;
	uint32_t t33 = 20901U;

	t33 = (((x133<x134)<=x135)|x136);

	if (t33 != 451071459U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int64_t x138 = -22635038LL;
	static int32_t x140 = -1;
	volatile int32_t t34 = 25048;

	t34 = (((x137<x138)<=x139)|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	uint8_t x143 = 3U;
	static int16_t x144 = INT16_MAX;
	volatile int32_t t35 = -284;

	t35 = (((x141<x142)<=x143)|x144);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int64_t x147 = INT64_MIN;
	int32_t t36 = 5;

	t36 = (((x145<x146)<=x147)|x148);

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x151 = 80582275200685725LL;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -6822781;

	t37 = (((x149<x150)<=x151)|x152);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x153 = 5U;
	volatile int8_t x154 = INT8_MAX;
	uint16_t x156 = 225U;

	t38 = (((x153<x154)<=x155)|x156);

	if (t38 != 225) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = UINT64_MAX;
	uint32_t x158 = UINT32_MAX;
	volatile uint16_t x159 = 2U;
	int8_t x160 = 7;
	int32_t t39 = 860;

	t39 = (((x157<x158)<=x159)|x160);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int32_t x164 = -560741;

	t40 = (((x161<x162)<=x163)|x164);

	if (t40 != -560741) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 173195U;
	static int16_t x166 = 5234;
	int32_t x167 = 0;
	uint16_t x168 = 3215U;
	volatile int32_t t41 = -12339;

	t41 = (((x165<x166)<=x167)|x168);

	if (t41 != 3215) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	volatile int32_t x170 = -1;
	volatile int32_t x171 = 394;
	int8_t x172 = 16;
	int32_t t42 = -17;

	t42 = (((x169<x170)<=x171)|x172);

	if (t42 != 17) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = -43LL;
	int32_t x175 = 13765263;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -15;

	t43 = (((x173<x174)<=x175)|x176);

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	int8_t x179 = 4;
	int64_t x180 = -1LL;
	static int64_t t44 = -51LL;

	t44 = (((x177<x178)<=x179)|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -1LL;
	int8_t x183 = INT8_MIN;
	static uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (((x181<x182)<=x183)|x184);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	int8_t x188 = -1;
	volatile int32_t t46 = -7706;

	t46 = (((x185<x186)<=x187)|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	uint32_t x190 = 3388U;
	volatile int8_t x191 = 21;
	uint32_t x192 = 4785U;
	static volatile uint32_t t47 = 1173606U;

	t47 = (((x189<x190)<=x191)|x192);

	if (t47 != 4785U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 1U;
	volatile uint8_t x196 = 1U;
	int32_t t48 = 7940;

	t48 = (((x193<x194)<=x195)|x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 6U;
	volatile uint64_t x199 = 122LLU;
	int8_t x200 = INT8_MAX;
	int32_t t49 = -89291;

	t49 = (((x197<x198)<=x199)|x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 0U;
	uint16_t x202 = UINT16_MAX;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = -26896581;
	volatile int32_t t50 = -2;

	t50 = (((x201<x202)<=x203)|x204);

	if (t50 != -26896581) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	volatile uint64_t x206 = 409851355899LLU;
	int16_t x207 = INT16_MIN;
	static volatile int16_t x208 = INT16_MAX;
	volatile int32_t t51 = -6410950;

	t51 = (((x205<x206)<=x207)|x208);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MIN;
	static int8_t x211 = 1;
	int32_t x212 = INT32_MAX;

	t52 = (((x209<x210)<=x211)|x212);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x215 = -13752;
	static int8_t x216 = -7;
	volatile int32_t t53 = 437384393;

	t53 = (((x213<x214)<=x215)|x216);

	if (t53 != -7) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static uint16_t x219 = UINT16_MAX;
	static int16_t x220 = INT16_MIN;

	t54 = (((x217<x218)<=x219)|x220);

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 3449;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = 26;
	volatile int32_t t55 = 47110;

	t55 = (((x221<x222)<=x223)|x224);

	if (t55 != 26) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 41U;
	static int16_t x226 = INT16_MAX;
	int8_t x227 = INT8_MIN;
	static uint16_t x228 = 15U;
	int32_t t56 = -180857141;

	t56 = (((x225<x226)<=x227)|x228);

	if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	static int8_t x231 = INT8_MAX;
	uint64_t x232 = 3656273641LLU;
	static uint64_t t57 = 111020LLU;

	t57 = (((x229<x230)<=x231)|x232);

	if (t57 != 3656273641LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 3018U;
	static int16_t x234 = INT16_MAX;
	int32_t x235 = -31563005;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t58 = UINT64_MAX;

	t58 = (((x233<x234)<=x235)|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x237 = INT8_MIN;
	uint16_t x238 = 32363U;
	static int64_t x239 = INT64_MIN;
	uint16_t x240 = UINT16_MAX;
	static volatile int32_t t59 = -83682141;

	t59 = (((x237<x238)<=x239)|x240);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	static int32_t x244 = -1;
	volatile int32_t t60 = -15067;

	t60 = (((x241<x242)<=x243)|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 53U;
	int8_t x248 = -1;
	int32_t t61 = -1931;

	t61 = (((x245<x246)<=x247)|x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int16_t x252 = -30;

	t62 = (((x249<x250)<=x251)|x252);

	if (t62 != -29) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	volatile uint8_t x254 = UINT8_MAX;
	volatile int32_t x255 = INT32_MIN;
	static uint32_t x256 = 261023U;
	volatile uint32_t t63 = 3593622U;

	t63 = (((x253<x254)<=x255)|x256);

	if (t63 != 261023U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;

	t64 = (((x257<x258)<=x259)|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 100226LLU;
	static int8_t x262 = -1;
	volatile int16_t x263 = INT16_MAX;
	int64_t x264 = -24015441532374509LL;
	static int64_t t65 = -6705415447094LL;

	t65 = (((x261<x262)<=x263)|x264);

	if (t65 != -24015441532374509LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	uint64_t x266 = UINT64_MAX;
	static uint32_t x267 = UINT32_MAX;
	volatile int32_t t66 = 1088266;

	t66 = (((x265<x266)<=x267)|x268);

	if (t66 != 5627) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	static uint16_t x270 = 2910U;
	volatile int32_t x272 = 15451882;
	int32_t t67 = -35232481;

	t67 = (((x269<x270)<=x271)|x272);

	if (t67 != 15451883) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	int64_t x274 = 339LL;
	int8_t x276 = -1;
	static volatile int32_t t68 = 118775918;

	t68 = (((x273<x274)<=x275)|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 0;
	int32_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t69 = INT32_MIN;

	t69 = (((x277<x278)<=x279)|x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 1U;
	int32_t x282 = INT32_MIN;
	int32_t x284 = -1;
	volatile int32_t t70 = -756;

	t70 = (((x281<x282)<=x283)|x284);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	static int16_t x287 = INT16_MIN;
	int16_t x288 = 5;
	volatile int32_t t71 = -100980784;

	t71 = (((x285<x286)<=x287)|x288);

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -8519;
	uint64_t x290 = 35802168966536LLU;
	int16_t x291 = -1;
	static uint16_t x292 = 22U;

	t72 = (((x289<x290)<=x291)|x292);

	if (t72 != 22) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x294 = 0;
	uint8_t x295 = 47U;
	int16_t x296 = INT16_MIN;
	static int32_t t73 = -5156;

	t73 = (((x293<x294)<=x295)|x296);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	uint16_t x298 = 5891U;
	static uint32_t x299 = 107U;
	volatile int32_t t74 = 264719512;

	t74 = (((x297<x298)<=x299)|x300);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int64_t x302 = -1LL;
	uint32_t x304 = 20438338U;
	uint32_t t75 = 220U;

	t75 = (((x301<x302)<=x303)|x304);

	if (t75 != 20438338U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	int8_t x308 = -1;
	int32_t t76 = 1957;

	t76 = (((x305<x306)<=x307)|x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -5LL;
	uint64_t x310 = 1893854770559LLU;
	volatile int8_t x311 = -2;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x309<x310)<=x311)|x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint16_t x316 = 129U;
	int32_t t78 = -1483214;

	t78 = (((x313<x314)<=x315)|x316);

	if (t78 != 129) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x318 = 2U;
	int32_t x319 = INT32_MIN;

	t79 = (((x317<x318)<=x319)|x320);

	if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	static int8_t x322 = 1;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 27138769380LLU;
	volatile uint64_t t80 = 262623608116823742LLU;

	t80 = (((x321<x322)<=x323)|x324);

	if (t80 != 27138769381LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	volatile int64_t x328 = -1LL;

	t81 = (((x325<x326)<=x327)|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	volatile int16_t x330 = 3567;
	static volatile uint64_t x332 = 2141062LLU;
	volatile uint64_t t82 = 782408727449429LLU;

	t82 = (((x329<x330)<=x331)|x332);

	if (t82 != 2141062LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -53449248LL;
	uint16_t x334 = 64U;
	uint32_t x335 = 523246U;
	int32_t x336 = 764026013;

	t83 = (((x333<x334)<=x335)|x336);

	if (t83 != 764026013) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = 66U;
	int32_t x338 = INT32_MAX;
	int16_t x339 = -1;
	int64_t x340 = INT64_MIN;

	t84 = (((x337<x338)<=x339)|x340);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 814089U;
	volatile uint32_t x342 = 90049544U;
	int32_t x343 = INT32_MIN;
	int32_t t85 = -949322;

	t85 = (((x341<x342)<=x343)|x344);

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 1U;
	int32_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int32_t t86 = 65;

	t86 = (((x345<x346)<=x347)|x348);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	uint8_t x350 = 0U;
	volatile uint8_t x352 = UINT8_MAX;
	int32_t t87 = 16;

	t87 = (((x349<x350)<=x351)|x352);

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = 5756U;
	static int16_t x356 = -1;
	int32_t t88 = 118172043;

	t88 = (((x353<x354)<=x355)|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 1;
	uint64_t x358 = 1136064471559014878LLU;
	static int32_t x360 = -9;
	volatile int32_t t89 = 615131;

	t89 = (((x357<x358)<=x359)|x360);

	if (t89 != -9) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 1U;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = 25768U;
	static volatile int8_t x364 = INT8_MIN;
	int32_t t90 = 40;

	t90 = (((x361<x362)<=x363)|x364);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 0;
	int8_t x366 = INT8_MAX;
	static uint8_t x367 = 4U;
	volatile int64_t x368 = 63LL;

	t91 = (((x365<x366)<=x367)|x368);

	if (t91 != 63LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 763;
	int16_t x370 = 1530;
	static int16_t x371 = INT16_MAX;
	int32_t t92 = 130835783;

	t92 = (((x369<x370)<=x371)|x372);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int8_t x374 = -1;
	volatile uint32_t x376 = 1U;

	t93 = (((x373<x374)<=x375)|x376);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int8_t x379 = INT8_MAX;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (((x377<x378)<=x379)|x380);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 698U;
	uint64_t x383 = 13655LLU;
	int32_t x384 = -943;
	int32_t t95 = -102419;

	t95 = (((x381<x382)<=x383)|x384);

	if (t95 != -943) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint8_t x386 = 58U;
	uint64_t x387 = 444012691795125LLU;
	static int8_t x388 = 3;
	volatile int32_t t96 = -3374;

	t96 = (((x385<x386)<=x387)|x388);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -30;
	static volatile uint32_t x390 = 1183U;
	int64_t x391 = 1381821290826LL;
	uint32_t x392 = 1063156U;
	volatile uint32_t t97 = 41308U;

	t97 = (((x389<x390)<=x391)|x392);

	if (t97 != 1063157U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 2304LLU;
	int32_t x395 = -1;
	int32_t t98 = 23651;

	t98 = (((x393<x394)<=x395)|x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int64_t x398 = -40393726LL;
	int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 194271901;

	t99 = (((x397<x398)<=x399)|x400);

	if (t99 != 32767) { NG(); } else { ; }
	
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

