#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -532748;
int8_t x15 = INT8_MIN;
static int32_t x16 = -328130294;
static int16_t x17 = INT16_MAX;
volatile int16_t x18 = INT16_MIN;
int32_t t3 = -507244;
int32_t x27 = -1;
uint64_t x29 = 136142558401647328LLU;
static volatile int32_t x34 = -1;
int32_t t7 = -6633;
int32_t x48 = INT32_MIN;
volatile int8_t x52 = -1;
int64_t x53 = INT64_MIN;
uint8_t x54 = 14U;
static int16_t x64 = 78;
uint64_t x74 = 5664830298521085LLU;
uint16_t x81 = 14U;
static int8_t x82 = -1;
static int16_t x85 = INT16_MAX;
uint16_t x89 = 61U;
static volatile int32_t x91 = 1;
int16_t x92 = INT16_MIN;
static uint8_t x108 = 54U;
int16_t x114 = -1;
uint64_t x116 = UINT64_MAX;
volatile int32_t t23 = -160041;
int32_t x132 = -1;
volatile int8_t x137 = 2;
int8_t x145 = INT8_MIN;
volatile int32_t t29 = -959;
int8_t x168 = -40;
static uint64_t x171 = 516482LLU;
int8_t x179 = -1;
volatile int32_t t35 = -2;
static uint64_t x182 = UINT64_MAX;
int32_t x187 = 4;
int8_t x190 = -1;
volatile int32_t x192 = INT32_MAX;
int8_t x204 = INT8_MAX;
int32_t t43 = -4;
volatile int32_t x222 = 5;
uint8_t x229 = 115U;
int32_t t46 = 845;
int8_t x237 = 1;
volatile uint32_t t49 = 104379027U;
uint32_t x253 = 12136965U;
int32_t x255 = INT32_MAX;
static int64_t x266 = -1LL;
int64_t x267 = -1498425452LL;
int16_t x277 = INT16_MIN;
int64_t x280 = INT64_MIN;
static uint32_t x286 = 159661062U;
uint32_t t59 = 125156U;
int16_t x289 = -1;
static volatile uint32_t t60 = 218684056U;
int16_t x302 = INT16_MAX;
int8_t x304 = INT8_MIN;
static volatile int32_t t61 = -4080;
uint8_t x310 = 0U;
int32_t x311 = 1037538;
int32_t t62 = -433;
int16_t x313 = INT16_MIN;
uint16_t x314 = 481U;
static int8_t x322 = INT8_MAX;
volatile uint16_t x324 = 603U;
volatile int32_t x325 = INT32_MAX;
int16_t x326 = INT16_MIN;
volatile int32_t t66 = -7923609;
volatile uint32_t t67 = 2794U;
volatile uint64_t t70 = 13971866236273LLU;
volatile uint16_t x360 = 411U;
int32_t t72 = 1;
int16_t x370 = INT16_MAX;
int8_t x371 = INT8_MIN;
volatile int32_t t75 = 1580434;
int64_t x374 = -105289817765029LL;
volatile uint16_t x376 = 359U;
int64_t x398 = INT64_MAX;
static uint16_t x400 = UINT16_MAX;
int16_t x402 = -4795;
uint8_t x404 = UINT8_MAX;
int64_t x418 = INT64_MAX;
int32_t t84 = 10;
static uint8_t x423 = UINT8_MAX;
volatile int64_t x429 = -6891913LL;
volatile uint64_t x433 = 7450434706624261337LLU;
int8_t x437 = 0;
int64_t x440 = INT64_MIN;
uint32_t x442 = 0U;
int64_t x451 = -62LL;
static uint16_t x461 = UINT16_MAX;
static volatile uint16_t x467 = UINT16_MAX;
volatile int64_t t95 = 454259037765895070LL;
volatile int32_t x475 = -1;
uint64_t x476 = 641984952LLU;
static int8_t x479 = 30;
uint64_t t99 = 329023561504926LLU;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	volatile int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 5686704350LL;

	t0 = ((x1<(x2-x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x9 = INT16_MIN;
	volatile int16_t x11 = INT16_MAX;
	volatile int64_t x12 = 1029711083540LL;
	int64_t t1 = 2101050564LL;

	t1 = ((x9<(x10-x11))/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -6233;
	static int16_t x14 = -671;
	int32_t t2 = -32;

	t2 = ((x13<(x14-x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x19 = 5790U;
	uint16_t x20 = 859U;

	t3 = ((x17<(x18-x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 24898U;
	volatile int16_t x22 = -1;
	volatile uint8_t x23 = 3U;
	volatile uint8_t x24 = 4U;
	int32_t t4 = -15174864;

	t4 = ((x21<(x22-x23))/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	int64_t x26 = -1LL;
	volatile uint16_t x28 = 55U;
	volatile int32_t t5 = -340;

	t5 = ((x25<(x26-x27))/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = -6712;
	int32_t t6 = 18;

	t6 = ((x29<(x30-x31))/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = 80713597;
	int32_t x36 = -1;

	t7 = ((x33<(x34-x35))/x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 22439543885LL;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -3;
	uint8_t x40 = 104U;
	volatile int32_t t8 = 16;

	t8 = ((x37<(x38-x39))/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = 6U;
	int8_t x43 = INT8_MIN;
	static uint32_t x44 = 379424287U;
	uint32_t t9 = 164548U;

	t9 = ((x41<(x42-x43))/x44);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MAX;
	int32_t t10 = -18242552;

	t10 = ((x45<(x46-x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MAX;
	int8_t x51 = 8;
	int32_t t11 = -5803354;

	t11 = ((x49<(x50-x51))/x52);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x55 = UINT64_MAX;
	uint64_t x56 = UINT64_MAX;
	static uint64_t t12 = 55LLU;

	t12 = ((x53<(x54-x55))/x56);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	static int64_t x63 = -1LL;
	int32_t t13 = 117964;

	t13 = ((x61<(x62-x63))/x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = -6433513190471555LL;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	int8_t x68 = -1;
	int32_t t14 = 18;

	t14 = ((x65<(x66-x67))/x68);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int8_t x75 = INT8_MIN;
	int16_t x76 = 1;
	volatile int32_t t15 = 43502082;

	t15 = ((x73<(x74-x75))/x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x83 = 13571104LLU;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t16 = 41014700U;

	t16 = ((x81<(x82-x83))/x84);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x86 = 45163LLU;
	int64_t x87 = -1LL;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t17 = -466;

	t17 = ((x85<(x86-x87))/x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x90 = 62139267;
	volatile int32_t t18 = -541154;

	t18 = ((x89<(x90-x91))/x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 5U;
	static uint16_t x94 = 1U;
	static int64_t x95 = -1LL;
	static uint64_t x96 = UINT64_MAX;
	volatile uint64_t t19 = 2161554095446LLU;

	t19 = ((x93<(x94-x95))/x96);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = 2033;
	static int32_t x99 = -103;
	int64_t x100 = INT64_MIN;
	volatile int64_t t20 = 5LL;

	t20 = ((x97<(x98-x99))/x100);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -11019;
	int16_t x106 = INT16_MIN;
	int64_t x107 = 2765888LL;
	static int32_t t21 = 229;

	t21 = ((x105<(x106-x107))/x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 15U;
	uint64_t x115 = UINT64_MAX;
	uint64_t t22 = 151169170287LLU;

	t22 = ((x113<(x114-x115))/x116);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = 27;
	int32_t x118 = -310766;
	int8_t x119 = INT8_MIN;
	volatile int16_t x120 = INT16_MIN;

	t23 = ((x117<(x118-x119))/x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x129 = -1;
	volatile uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = -1;
	volatile int32_t t24 = -16338842;

	t24 = ((x129<(x130-x131))/x132);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = 78;
	static int8_t x134 = INT8_MAX;
	uint16_t x135 = 0U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t25 = -581667;

	t25 = ((x133<(x134-x135))/x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x138 = 7U;
	uint32_t x139 = UINT32_MAX;
	uint8_t x140 = 99U;
	int32_t t26 = 4;

	t26 = ((x137<(x138-x139))/x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = -1;
	static volatile uint16_t x142 = UINT16_MAX;
	static volatile uint64_t x143 = UINT64_MAX;
	uint64_t x144 = 260090795668309037LLU;
	volatile uint64_t t27 = 20398415085757LLU;

	t27 = ((x141<(x142-x143))/x144);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x146 = 8U;
	static int64_t x147 = -1LL;
	static int16_t x148 = -1;
	static volatile int32_t t28 = 13;

	t28 = ((x145<(x146-x147))/x148);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MAX;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -11696;

	t29 = ((x149<(x150-x151))/x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile uint32_t x154 = 113U;
	int32_t x155 = 2;
	int64_t x156 = -9118070196LL;
	int64_t t30 = 54252359225903146LL;

	t30 = ((x153<(x154-x155))/x156);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x157 = 0U;
	int8_t x158 = -60;
	volatile uint64_t x159 = 271582235230635017LLU;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t31 = -595;

	t31 = ((x157<(x158-x159))/x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x161 = INT64_MAX;
	int16_t x162 = INT16_MIN;
	static int16_t x163 = INT16_MIN;
	int32_t x164 = -4111653;
	int32_t t32 = 20087800;

	t32 = ((x161<(x162-x163))/x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = 2488;
	uint64_t x166 = UINT64_MAX;
	uint16_t x167 = 2U;
	int32_t t33 = 32204973;

	t33 = ((x165<(x166-x167))/x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x169 = 936U;
	uint32_t x170 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t34 = -2;

	t34 = ((x169<(x170-x171))/x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = 1475682552LL;
	int32_t x180 = INT32_MAX;

	t35 = ((x177<(x178-x179))/x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x181 = INT64_MIN;
	int32_t x183 = -67766;
	uint32_t x184 = 19281986U;
	volatile uint32_t t36 = 165842U;

	t36 = ((x181<(x182-x183))/x184);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x185 = -1;
	static int8_t x186 = -1;
	volatile uint16_t x188 = UINT16_MAX;
	int32_t t37 = 11829543;

	t37 = ((x185<(x186-x187))/x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x189 = 6U;
	static volatile uint64_t x191 = 6957530797LLU;
	volatile int32_t t38 = 15;

	t38 = ((x189<(x190-x191))/x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x193 = 127108240629LLU;
	uint64_t x194 = 2897431910678LLU;
	static uint16_t x195 = 1U;
	static int64_t x196 = -1122LL;
	int64_t t39 = -12623001544303LL;

	t39 = ((x193<(x194-x195))/x196);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = INT32_MAX;
	uint16_t x198 = 58U;
	int8_t x199 = INT8_MIN;
	int8_t x200 = 1;
	int32_t t40 = 472755770;

	t40 = ((x197<(x198-x199))/x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = -45;
	int32_t x202 = INT32_MAX;
	static int8_t x203 = 1;
	volatile int32_t t41 = -10312614;

	t41 = ((x201<(x202-x203))/x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x209 = 702U;
	int64_t x210 = INT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t42 = -1803166;

	t42 = ((x209<(x210-x211))/x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x217 = INT64_MAX;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = INT32_MAX;
	int16_t x220 = 285;

	t43 = ((x217<(x218-x219))/x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = 64457;
	int16_t x223 = INT16_MIN;
	int8_t x224 = 19;
	int32_t t44 = 4665;

	t44 = ((x221<(x222-x223))/x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x225 = 35995809029762LLU;
	volatile int16_t x226 = -4319;
	volatile uint32_t x227 = 165076707U;
	uint16_t x228 = UINT16_MAX;
	int32_t t45 = 187662;

	t45 = ((x225<(x226-x227))/x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	volatile int8_t x232 = -26;

	t46 = ((x229<(x230-x231))/x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = 792U;
	volatile uint64_t x235 = UINT64_MAX;
	volatile int16_t x236 = 1395;
	int32_t t47 = 125530;

	t47 = ((x233<(x234-x235))/x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	volatile int64_t x240 = -2368977LL;
	volatile int64_t t48 = -913753559968LL;

	t48 = ((x237<(x238-x239))/x240);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = UINT64_MAX;
	static int64_t x243 = INT64_MIN;
	uint32_t x244 = UINT32_MAX;

	t49 = ((x241<(x242-x243))/x244);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = 19240U;
	int32_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = INT64_MAX;
	static int64_t t50 = -625442495131410105LL;

	t50 = ((x245<(x246-x247))/x248);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = -19;
	static int32_t x250 = -193;
	volatile int16_t x251 = INT16_MIN;
	uint64_t x252 = 2041716LLU;
	static uint64_t t51 = 3690220533755LLU;

	t51 = ((x249<(x250-x251))/x252);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x254 = 15U;
	volatile uint8_t x256 = 3U;
	volatile int32_t t52 = 13140993;

	t52 = ((x253<(x254-x255))/x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MIN;
	volatile int32_t x258 = INT32_MAX;
	static volatile uint8_t x259 = 0U;
	static int16_t x260 = INT16_MIN;
	int32_t t53 = 12397;

	t53 = ((x257<(x258-x259))/x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MIN;
	uint8_t x262 = 67U;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = 726261LL;
	static int64_t t54 = 47LL;

	t54 = ((x261<(x262-x263))/x264);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint8_t x268 = 6U;
	int32_t t55 = 13107132;

	t55 = ((x265<(x266-x267))/x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = 2U;
	int32_t x270 = -1;
	int32_t x271 = -1;
	static int64_t x272 = INT64_MAX;
	int64_t t56 = -1677429209LL;

	t56 = ((x269<(x270-x271))/x272);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x278 = -34;
	int32_t x279 = -1;
	volatile int64_t t57 = 88389426569157LL;

	t57 = ((x277<(x278-x279))/x280);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x281 = INT64_MAX;
	int16_t x282 = 142;
	int8_t x283 = 27;
	static volatile int32_t x284 = INT32_MIN;
	volatile int32_t t58 = -209281;

	t58 = ((x281<(x282-x283))/x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x285 = UINT16_MAX;
	static volatile int16_t x287 = INT16_MIN;
	volatile uint32_t x288 = UINT32_MAX;

	t59 = ((x285<(x286-x287))/x288);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x290 = INT64_MIN;
	static int64_t x291 = INT64_MIN;
	static uint32_t x292 = UINT32_MAX;

	t60 = ((x289<(x290-x291))/x292);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x303 = -1;

	t61 = ((x301<(x302-x303))/x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = INT64_MIN;
	volatile int8_t x312 = INT8_MAX;

	t62 = ((x309<(x310-x311))/x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x315 = INT8_MIN;
	static int16_t x316 = INT16_MAX;
	volatile int32_t t63 = -188516487;

	t63 = ((x313<(x314-x315))/x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x317 = -11;
	static uint64_t x318 = 119396684LLU;
	static volatile uint16_t x319 = 307U;
	int16_t x320 = 320;
	volatile int32_t t64 = 11715;

	t64 = ((x317<(x318-x319))/x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int8_t x323 = -7;
	int32_t t65 = 470;

	t65 = ((x321<(x322-x323))/x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x327 = -4;
	int8_t x328 = INT8_MIN;

	t66 = ((x325<(x326-x327))/x328);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x333 = 1787328LLU;
	int32_t x334 = -1;
	volatile uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 1637068366U;

	t67 = ((x333<(x334-x335))/x336);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x341 = UINT8_MAX;
	static int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = -1;
	static int32_t t68 = -32662;

	t68 = ((x341<(x342-x343))/x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	uint8_t x347 = 23U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t69 = -23592021209799443LL;

	t69 = ((x345<(x346-x347))/x348);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MIN;
	uint32_t x350 = 0U;
	int64_t x351 = 238454785161LL;
	static uint64_t x352 = UINT64_MAX;

	t70 = ((x349<(x350-x351))/x352);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = -12284LL;
	static volatile int8_t x355 = INT8_MIN;
	static uint32_t x356 = 703212693U;
	volatile uint32_t t71 = 978894069U;

	t71 = ((x353<(x354-x355))/x356);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x357 = INT8_MAX;
	volatile uint8_t x358 = UINT8_MAX;
	uint64_t x359 = 880958302442776404LLU;

	t72 = ((x357<(x358-x359))/x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x361 = 41U;
	uint32_t x362 = UINT32_MAX;
	volatile int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	volatile int32_t t73 = 239;

	t73 = ((x361<(x362-x363))/x364);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x365 = UINT64_MAX;
	uint64_t x366 = 1514954894277537217LLU;
	uint64_t x367 = UINT64_MAX;
	uint16_t x368 = 193U;
	int32_t t74 = 2327048;

	t74 = ((x365<(x366-x367))/x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x372 = INT32_MIN;

	t75 = ((x369<(x370-x371))/x372);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = 31010;
	int8_t x375 = INT8_MIN;
	int32_t t76 = 15;

	t76 = ((x373<(x374-x375))/x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x377 = INT64_MAX;
	int8_t x378 = INT8_MAX;
	int16_t x379 = 171;
	int16_t x380 = INT16_MAX;
	volatile int32_t t77 = 14271;

	t77 = ((x377<(x378-x379))/x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x381 = 5124643752190LLU;
	int64_t x382 = -1LL;
	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t78 = 0LL;

	t78 = ((x381<(x382-x383))/x384);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x385 = 1407U;
	int8_t x386 = INT8_MAX;
	volatile int64_t x387 = 6524228245LL;
	int16_t x388 = INT16_MIN;
	int32_t t79 = -38;

	t79 = ((x385<(x386-x387))/x388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	static uint64_t x396 = 4866LLU;
	volatile uint64_t t80 = 7691540492869153LLU;

	t80 = ((x393<(x394-x395))/x396);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x397 = UINT16_MAX;
	uint64_t x399 = 87617LLU;
	static int32_t t81 = 15629970;

	t81 = ((x397<(x398-x399))/x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x401 = 8752096057727LLU;
	static int32_t x403 = -1;
	int32_t t82 = -31001364;

	t82 = ((x401<(x402-x403))/x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x409 = UINT16_MAX;
	uint16_t x410 = 2U;
	int32_t x411 = -1;
	int32_t x412 = INT32_MIN;
	int32_t t83 = 14257839;

	t83 = ((x409<(x410-x411))/x412);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x417 = 0U;
	uint64_t x419 = 6571LLU;
	static int32_t x420 = INT32_MIN;

	t84 = ((x417<(x418-x419))/x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x421 = -222LL;
	static int32_t x422 = INT32_MAX;
	int32_t x424 = -1;
	volatile int32_t t85 = -12;

	t85 = ((x421<(x422-x423))/x424);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = INT16_MAX;
	int8_t x426 = -1;
	uint16_t x427 = 50U;
	int8_t x428 = INT8_MAX;
	int32_t t86 = 6927;

	t86 = ((x425<(x426-x427))/x428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x430 = INT16_MAX;
	int16_t x431 = -1;
	int8_t x432 = INT8_MIN;
	volatile int32_t t87 = -128277;

	t87 = ((x429<(x430-x431))/x432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x434 = INT32_MAX;
	static uint16_t x435 = 1U;
	static uint32_t x436 = UINT32_MAX;
	volatile uint32_t t88 = 275611U;

	t88 = ((x433<(x434-x435))/x436);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x438 = 1LLU;
	uint8_t x439 = 3U;
	volatile int64_t t89 = 1323LL;

	t89 = ((x437<(x438-x439))/x440);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = 39;
	uint32_t x443 = 340079255U;
	static int8_t x444 = INT8_MIN;
	static volatile int32_t t90 = 2693;

	t90 = ((x441<(x442-x443))/x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = -1194LL;
	volatile int32_t x446 = INT32_MIN;
	static int32_t x447 = INT32_MIN;
	volatile int32_t x448 = -115797716;
	volatile int32_t t91 = 1;

	t91 = ((x445<(x446-x447))/x448);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x449 = 38083238950923574LL;
	int32_t x450 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t92 = 13752132;

	t92 = ((x449<(x450-x451))/x452);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x457 = 369U;
	static uint32_t x458 = 127U;
	uint16_t x459 = 14U;
	int8_t x460 = INT8_MIN;
	volatile int32_t t93 = 104;

	t93 = ((x457<(x458-x459))/x460);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x462 = 11411085;
	int8_t x463 = -5;
	int64_t x464 = INT64_MAX;
	volatile int64_t t94 = -136280420293557916LL;

	t94 = ((x461<(x462-x463))/x464);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x465 = 16U;
	static int16_t x466 = -1;
	static int64_t x468 = -1068301801059LL;

	t95 = ((x465<(x466-x467))/x468);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = 3;
	int8_t x474 = INT8_MIN;
	uint64_t t96 = 5042834973LLU;

	t96 = ((x473<(x474-x475))/x476);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x477 = -1;
	uint8_t x478 = 0U;
	uint32_t x480 = UINT32_MAX;
	volatile uint32_t t97 = 24216810U;

	t97 = ((x477<(x478-x479))/x480);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x481 = UINT64_MAX;
	volatile uint16_t x482 = 3U;
	volatile uint16_t x483 = 271U;
	volatile int32_t x484 = INT32_MAX;
	volatile int32_t t98 = -3;

	t98 = ((x481<(x482-x483))/x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x485 = UINT16_MAX;
	volatile int32_t x486 = INT32_MIN;
	static int64_t x487 = 1LL;
	uint64_t x488 = 490524331996329262LLU;

	t99 = ((x485<(x486-x487))/x488);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

