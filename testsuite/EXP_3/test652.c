#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
uint16_t x3 = 56U;
volatile uint16_t x4 = 6051U;
static int64_t x9 = 428215324LL;
uint16_t x10 = 298U;
int32_t x16 = INT32_MIN;
int64_t t3 = 340030323509509LL;
uint8_t x32 = UINT8_MAX;
uint32_t x33 = 214257U;
uint8_t x38 = 7U;
int16_t x43 = 5136;
uint64_t x47 = 211506417LLU;
static uint64_t t13 = 15872935469842815LLU;
int32_t x57 = INT32_MIN;
int32_t x59 = INT32_MIN;
static uint64_t t14 = 6036465139483LLU;
volatile uint32_t t15 = UINT32_MAX;
uint64_t x66 = 435108LLU;
int64_t x67 = INT64_MIN;
uint64_t t16 = 1940127LLU;
uint64_t x73 = 2LLU;
int32_t x75 = -1;
static int8_t x81 = -6;
uint16_t x85 = UINT16_MAX;
static int16_t x89 = 15251;
static int8_t x93 = INT8_MIN;
int64_t x98 = INT64_MAX;
uint64_t x99 = UINT64_MAX;
int64_t x109 = -1LL;
int64_t x119 = INT64_MIN;
int8_t x136 = -1;
static uint8_t x138 = 52U;
volatile int64_t x143 = -1LL;
uint32_t x144 = 261U;
volatile int8_t x155 = 1;
int32_t x156 = INT32_MIN;
int16_t x162 = INT16_MAX;
static int16_t x168 = -227;
static uint16_t x171 = UINT16_MAX;
int32_t x173 = -1;
uint8_t x176 = 7U;
int32_t t41 = 185;
volatile int32_t x178 = 254;
static uint64_t x182 = UINT64_MAX;
static volatile uint64_t t43 = UINT64_MAX;
static volatile uint32_t t44 = 18883826U;
volatile uint32_t t45 = 13635570U;
static int32_t x193 = -1;
int8_t x196 = INT8_MIN;
volatile int64_t t46 = -5919523738279LL;
volatile uint64_t x198 = 152072972612LLU;
volatile int16_t x214 = 1;
int8_t x218 = -19;
uint32_t x225 = 11808U;
uint32_t x232 = 247872U;
uint32_t x234 = 318907300U;
int16_t x243 = -1;
uint64_t x244 = UINT64_MAX;
uint64_t t57 = 2783615596078LLU;
int32_t x247 = INT32_MIN;
int16_t x248 = INT16_MAX;
int16_t x257 = -1;
int32_t x258 = INT32_MAX;
int64_t x264 = 309743194496703516LL;
volatile int64_t t63 = 226856479200833LL;
volatile int64_t t64 = 15372827841LL;
uint32_t x280 = 1708951U;
volatile uint32_t t66 = 312040U;
volatile int8_t x284 = INT8_MIN;
uint16_t x286 = 200U;
volatile int32_t x290 = INT32_MIN;
volatile int32_t t69 = 2582612;
uint8_t x293 = 127U;
volatile int16_t x296 = INT16_MAX;
int32_t t70 = -1818;
volatile uint64_t t71 = UINT64_MAX;
uint16_t x303 = UINT16_MAX;
static volatile int64_t x305 = INT64_MAX;
static uint32_t x308 = 973380U;
int32_t x312 = -12747490;
int64_t x317 = 36632086LL;
int8_t x320 = INT8_MAX;
volatile int64_t x325 = -1LL;
volatile uint32_t x326 = 1419410066U;
volatile uint64_t t78 = UINT64_MAX;
static int16_t x330 = -1;
static uint64_t t79 = 12877588354784959LLU;
static int64_t x333 = -1LL;
uint64_t x335 = UINT64_MAX;
static volatile uint64_t t80 = 3LLU;
int64_t x339 = INT64_MAX;
int32_t x346 = INT32_MIN;
int8_t x360 = INT8_MIN;
volatile uint16_t x364 = 18U;
static int64_t x366 = -2163970570645LL;
int8_t x368 = -1;
int64_t t87 = 1717LL;
uint16_t x369 = 11U;
int32_t x372 = -1;
int64_t x375 = INT64_MIN;
volatile int64_t t89 = 45LL;
uint32_t x379 = 175555U;
int8_t x386 = -43;
static int8_t x389 = -58;
static int32_t x398 = INT32_MIN;
static volatile int16_t x402 = INT16_MIN;
volatile int32_t x403 = -1591;
volatile int32_t t95 = -170990112;
int64_t t96 = 6466886575890445LL;
int64_t t97 = -705359680LL;
int32_t x417 = INT32_MAX;
volatile int64_t x419 = INT64_MAX;
int8_t x420 = INT8_MIN;
int64_t t99 = 938LL;


void f0(void) {
	int16_t x2 = -4;
	int32_t t0 = -15355790;

	t0 = ((x1|x2)-(x3/x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int8_t x6 = -46;
	int64_t x7 = -796405LL;
	int8_t x8 = INT8_MAX;
	int64_t t1 = 53796193LL;

	t1 = ((x5|x6)-(x7/x8));

	if (t1 != 6224LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = 4793;
	static int16_t x12 = INT16_MAX;
	int64_t t2 = -453147493734272412LL;

	t2 = ((x9|x10)-(x11/x12));

	if (t2 != 428215614LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 30905U;
	volatile int64_t x14 = 1262068209LL;
	uint16_t x15 = 13587U;

	t3 = ((x13|x14)-(x15/x16));

	if (t3 != 1262090745LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = 57273720472968431LL;
	volatile int64_t x19 = -1LL;
	volatile int16_t x20 = -1;
	volatile int64_t t4 = -1681900LL;

	t4 = ((x17|x18)-(x19/x20));

	if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int16_t x22 = INT16_MAX;
	uint32_t x23 = 124501U;
	int64_t x24 = INT64_MAX;
	int64_t t5 = 438LL;

	t5 = ((x21|x22)-(x23/x24));

	if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 0LLU;
	volatile int8_t x27 = -1;
	int64_t x28 = 1676072551246937007LL;
	volatile uint64_t t6 = 22LLU;

	t6 = ((x25|x26)-(x27/x28));

	if (t6 != 255LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = 24U;
	uint32_t x31 = 917U;
	static uint32_t t7 = 735443U;

	t7 = ((x29|x30)-(x31/x32));

	if (t7 != 4294934549U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -24462300088763LL;
	int64_t x35 = INT64_MIN;
	int16_t x36 = 46;
	volatile int64_t t8 = 208327216937483LL;

	t8 = ((x33|x34)-(x35/x36));

	if (t8 != 200483625457689466LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	uint64_t x39 = 2552741603003676459LLU;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37|x38)-(x39/x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = 23216568263LLU;
	static volatile int16_t x44 = -1;
	uint64_t t10 = 11569029900808LLU;

	t10 = ((x41|x42)-(x43/x44));

	if (t10 != 9223372036854780943LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int16_t x46 = 1;
	uint32_t x48 = 147120093U;
	volatile uint64_t t11 = 3LLU;

	t11 = ((x45|x46)-(x47/x48));

	if (t11 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 7;
	int16_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	static int64_t x52 = 19481925826LL;
	static int64_t t12 = -2LL;

	t12 = ((x49|x50)-(x51/x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 3412LLU;
	int8_t x54 = INT8_MAX;
	static int64_t x55 = -1LL;
	uint64_t x56 = 452752LLU;

	t13 = ((x53|x54)-(x55/x56));

	if (t13 != 18446703330114664912LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	static uint64_t x60 = UINT64_MAX;

	t14 = ((x57|x58)-(x59/x60));

	if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = -7;
	uint32_t x63 = 5186U;
	int32_t x64 = INT32_MAX;

	t15 = ((x61|x62)-(x63/x64));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int64_t x68 = INT64_MAX;

	t16 = ((x65|x66)-(x67/x68));

	if (t16 != 2147483648LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int16_t x70 = 0;
	int8_t x71 = 0;
	int32_t x72 = -1;
	volatile int32_t t17 = 56;

	t17 = ((x69|x70)-(x71/x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 121887U;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t18 = 139323120LLU;

	t18 = ((x73|x74)-(x75/x76));

	if (t18 != 121887LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 41676853;
	uint64_t x78 = 111349218LLU;
	int64_t x79 = 3881520853369986LL;
	uint8_t x80 = UINT8_MAX;
	static volatile uint64_t t19 = 3930807LLU;

	t19 = ((x77|x78)-(x79/x80));

	if (t19 != 18446728852176324091LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = 115588512LL;
	int16_t x83 = INT16_MIN;
	int8_t x84 = 8;
	static int64_t t20 = 1099006561382LL;

	t20 = ((x81|x82)-(x83/x84));

	if (t20 != 4090LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int8_t x87 = -6;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 98836;

	t21 = ((x85|x86)-(x87/x88));

	if (t21 != -2147418113) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = -67;
	volatile int64_t x91 = INT64_MIN;
	uint32_t x92 = 2437U;
	volatile int64_t t22 = 899627088465262942LL;

	t22 = ((x89|x90)-(x91/x92));

	if (t22 != 3784723855910799LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = 19LL;
	static int16_t x95 = INT16_MIN;
	static uint16_t x96 = 225U;
	volatile int64_t t23 = -1051LL;

	t23 = ((x93|x94)-(x95/x96));

	if (t23 != 36LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int8_t x100 = 62;
	uint64_t t24 = 2521372585169175559LLU;

	t24 = ((x97|x98)-(x99/x100));

	if (t24 != 18149215943488429815LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	static volatile uint8_t x102 = 27U;
	int32_t x103 = -33;
	int16_t x104 = INT16_MAX;
	int32_t t25 = -2123210;

	t25 = ((x101|x102)-(x103/x104));

	if (t25 != -2147483621) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x110 = -1;
	int32_t x111 = INT32_MIN;
	volatile uint8_t x112 = 8U;
	static volatile int64_t t26 = -436LL;

	t26 = ((x109|x110)-(x111/x112));

	if (t26 != 268435455LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 21785U;
	volatile uint64_t x118 = UINT64_MAX;
	int16_t x120 = -3;
	volatile uint64_t t27 = 6719020121LLU;

	t27 = ((x117|x118)-(x119/x120));

	if (t27 != 15372286728091293013LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 479279U;
	uint8_t x123 = 1U;
	static uint16_t x124 = 18644U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x121|x122)-(x123/x124));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = 236049912529169386LL;
	int16_t x126 = INT16_MIN;
	int8_t x127 = 0;
	static uint64_t x128 = 41941235796LLU;
	uint64_t t29 = 3LLU;

	t29 = ((x125|x126)-(x127/x128));

	if (t29 != 18446744073709530090LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 393LL;
	int8_t x130 = 3;
	int32_t x131 = 171646;
	int32_t x132 = INT32_MAX;
	int64_t t30 = -27796LL;

	t30 = ((x129|x130)-(x131/x132));

	if (t30 != 395LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x133 = 770U;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	static uint32_t t31 = 3831940U;

	t31 = ((x133|x134)-(x135/x136));

	if (t31 != 4294935297U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 3893;
	static uint8_t x139 = 5U;
	int8_t x140 = 14;
	int32_t t32 = -14;

	t32 = ((x137|x138)-(x139/x140));

	if (t32 != 3893) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 112U;
	int64_t x142 = INT64_MAX;
	volatile int64_t t33 = INT64_MAX;

	t33 = ((x141|x142)-(x143/x144));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 72U;
	int16_t x146 = INT16_MIN;
	volatile int8_t x147 = -1;
	int64_t x148 = -62LL;
	volatile int64_t t34 = 28591LL;

	t34 = ((x145|x146)-(x147/x148));

	if (t34 != -32696LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	volatile uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	int32_t t35 = -3231;

	t35 = ((x149|x150)-(x151/x152));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	uint64_t x154 = 83283126LLU;
	volatile uint64_t t36 = 1649138947LLU;

	t36 = ((x153|x154)-(x155/x156));

	if (t36 != 83296255LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x157 = UINT16_MAX;
	uint64_t x158 = UINT64_MAX;
	uint8_t x159 = 8U;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x157|x158)-(x159/x160));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = -7;
	int8_t x163 = 4;
	static uint8_t x164 = 12U;
	volatile int32_t t38 = 320386422;

	t38 = ((x161|x162)-(x163/x164));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 438U;
	int32_t x166 = -4922981;
	volatile uint8_t x167 = 1U;
	int32_t t39 = -6;

	t39 = ((x165|x166)-(x167/x168));

	if (t39 != -4922945) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MIN;
	int64_t x172 = INT64_MAX;
	static int64_t t40 = INT64_MIN;

	t40 = ((x169|x170)-(x171/x172));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;

	t41 = ((x173|x174)-(x175/x176));

	if (t41 != 306783377) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x177 = UINT64_MAX;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = -1;
	volatile uint64_t t42 = 43328087504291LLU;

	t42 = ((x177|x178)-(x179/x180));

	if (t42 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x181 = -1LL;
	volatile uint16_t x183 = 1U;
	volatile uint64_t x184 = 143308170LLU;

	t43 = ((x181|x182)-(x183/x184));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x185 = 164U;
	static uint16_t x186 = 2U;
	static uint32_t x187 = UINT32_MAX;
	volatile int32_t x188 = INT32_MAX;

	t44 = ((x185|x186)-(x187/x188));

	if (t44 != 164U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MAX;
	uint32_t x191 = UINT32_MAX;
	static int32_t x192 = 119253;

	t45 = ((x189|x190)-(x191/x192));

	if (t45 != 4294931280U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = -1LL;
	volatile int32_t x195 = -1;

	t46 = ((x193|x194)-(x195/x196));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 15U;
	uint16_t x199 = UINT16_MAX;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t47 = 59384488909355LLU;

	t47 = ((x197|x198)-(x199/x200));

	if (t47 != 152072972623LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = INT64_MIN;
	static uint64_t x203 = 480366LLU;
	static uint16_t x204 = 1U;
	static volatile uint64_t t48 = 33654097138LLU;

	t48 = ((x201|x202)-(x203/x204));

	if (t48 != 9223372036854328209LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = -7343;
	static int32_t x207 = 909732;
	int64_t x208 = INT64_MIN;
	volatile int64_t t49 = -4344015322876608LL;

	t49 = ((x205|x206)-(x207/x208));

	if (t49 != -7343LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = -1LL;
	uint8_t x215 = 0U;
	uint32_t x216 = 110U;
	volatile int64_t t50 = -39LL;

	t50 = ((x213|x214)-(x215/x216));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -61;
	static int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	static volatile int64_t t51 = 44931056684682LL;

	t51 = ((x217|x218)-(x219/x220));

	if (t51 != -17LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;
	static int32_t t52 = 12;

	t52 = ((x221|x222)-(x223/x224));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MIN;
	uint64_t x227 = 612393169108LLU;
	volatile uint8_t x228 = 1U;
	static volatile uint64_t t53 = 3950LLU;

	t53 = ((x225|x226)-(x227/x228));

	if (t53 != 18446743463463877964LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	static volatile uint32_t t54 = 328646692U;

	t54 = ((x229|x230)-(x231/x232));

	if (t54 != 2147466320U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x233 = 0;
	uint32_t x235 = 503922732U;
	volatile int32_t x236 = INT32_MIN;
	volatile uint32_t t55 = 10393571U;

	t55 = ((x233|x234)-(x235/x236));

	if (t55 != 318907300U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -1LL;
	int8_t x238 = 10;
	int8_t x239 = INT8_MIN;
	volatile int32_t x240 = -3;
	int64_t t56 = -3754374237LL;

	t56 = ((x237|x238)-(x239/x240));

	if (t56 != -43LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	static int32_t x242 = -267;

	t57 = ((x241|x242)-(x243/x244));

	if (t57 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = UINT32_MAX;
	uint64_t x246 = 5102804702550LLU;
	uint64_t t58 = 66462162018741607LLU;

	t58 = ((x245|x246)-(x247/x248));

	if (t58 != 5106716180481LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 127U;
	volatile int8_t x250 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;
	static uint32_t x252 = 1722444U;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = ((x249|x250)-(x251/x252));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = -1LL;
	uint16_t x254 = 53U;
	uint32_t x255 = 1U;
	int32_t x256 = INT32_MIN;
	static int64_t t60 = -25180LL;

	t60 = ((x253|x254)-(x255/x256));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x259 = INT16_MAX;
	int32_t x260 = -1;
	volatile int32_t t61 = 91;

	t61 = ((x257|x258)-(x259/x260));

	if (t61 != 32766) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 1868179LL;
	int16_t x262 = -1;
	uint8_t x263 = 2U;
	volatile int64_t t62 = -1484LL;

	t62 = ((x261|x262)-(x263/x264));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = INT8_MIN;
	static int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = 2554U;

	t63 = ((x265|x266)-(x267/x268));

	if (t63 != 3611343788901507LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MAX;
	int64_t x271 = 303181LL;
	int32_t x272 = -1;

	t64 = ((x269|x270)-(x271/x272));

	if (t64 != 303180LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MAX;
	static uint64_t x274 = 267978LLU;
	volatile uint32_t x275 = 4U;
	int64_t x276 = 1LL;
	uint64_t t65 = 7340575873LLU;

	t65 = ((x273|x274)-(x275/x276));

	if (t65 != 294907LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 0U;
	static int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;

	t66 = ((x277|x278)-(x279/x280));

	if (t66 != 2147483648U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int32_t x282 = 509;
	uint64_t x283 = 6419613902LLU;
	uint64_t t67 = 20992860720LLU;

	t67 = ((x281|x282)-(x283/x284));

	if (t67 != 511LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x285 = -1;
	uint8_t x287 = UINT8_MAX;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = ((x285|x286)-(x287/x288));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x291 = 1U;
	static int16_t x292 = -1;

	t69 = ((x289|x290)-(x291/x292));

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x294 = -1;
	int32_t x295 = 15206541;

	t70 = ((x293|x294)-(x295/x296));

	if (t70 != -465) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	uint32_t x299 = 135177U;
	static int16_t x300 = -1;

	t71 = ((x297|x298)-(x299/x300));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x301 = INT64_MAX;
	static int16_t x302 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int64_t t72 = -40599514LL;

	t72 = ((x301|x302)-(x303/x304));

	if (t72 != 510LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = -147857;
	volatile uint32_t x307 = 7U;
	int64_t t73 = 12034475712LL;

	t73 = ((x305|x306)-(x307/x308));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = INT8_MAX;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	static volatile int32_t t74 = -53849;

	t74 = ((x309|x310)-(x311/x312));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x313 = INT16_MIN;
	int16_t x314 = 889;
	volatile int64_t x315 = 2006463188638802898LL;
	int32_t x316 = -1;
	int64_t t75 = -17949394197865LL;

	t75 = ((x313|x314)-(x315/x316));

	if (t75 != 2006463188638771019LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x318 = 19U;
	volatile int16_t x319 = 15777;
	volatile int64_t t76 = 1LL;

	t76 = ((x317|x318)-(x319/x320));

	if (t76 != 36631963LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 0U;
	static uint8_t x322 = 9U;
	static int32_t x323 = INT32_MAX;
	static int8_t x324 = 1;
	static int32_t t77 = -1278;

	t77 = ((x321|x322)-(x323/x324));

	if (t77 != -2147483638) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x327 = 11LLU;
	int8_t x328 = INT8_MIN;

	t78 = ((x325|x326)-(x327/x328));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x331 = -334968823;
	int16_t x332 = INT16_MIN;

	t79 = ((x329|x330)-(x331/x332));

	if (t79 != 18446744073709541393LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x334 = INT16_MIN;
	volatile uint32_t x336 = 521291U;

	t80 = ((x333|x334)-(x335/x336));

	if (t80 != 18446708687055890398LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x337 = INT32_MIN;
	uint32_t x338 = 64637875U;
	int8_t x340 = 59;
	volatile int64_t t81 = -1828547781269646913LL;

	t81 = ((x337|x338)-(x339/x340));

	if (t81 != -156328337395586541LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static volatile int8_t x342 = INT8_MAX;
	int16_t x343 = -1;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t82 = 333475;

	t82 = ((x341|x342)-(x343/x344));

	if (t82 != -2147483521) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = UINT16_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	uint16_t x348 = 4U;
	volatile uint32_t t83 = 250U;

	t83 = ((x345|x346)-(x347/x348));

	if (t83 != 1073807360U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 839U;
	static volatile int32_t x350 = -1521;
	int8_t x351 = 0;
	int32_t x352 = -1;
	volatile int32_t t84 = 410;

	t84 = ((x349|x350)-(x351/x352));

	if (t84 != -1201) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = 2;
	static volatile int32_t x358 = INT32_MIN;
	static uint32_t x359 = UINT32_MAX;
	uint32_t t85 = 2358U;

	t85 = ((x357|x358)-(x359/x360));

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = UINT64_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	uint64_t t86 = 270588777967340515LLU;

	t86 = ((x361|x362)-(x363/x364));

	if (t86 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x365 = UINT32_MAX;
	int8_t x367 = INT8_MIN;

	t87 = ((x365|x366)-(x367/x368));

	if (t87 != -2160368550017LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x370 = 7U;
	uint16_t x371 = 1U;
	volatile int32_t t88 = -64;

	t88 = ((x369|x370)-(x371/x372));

	if (t88 != 16) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	int16_t x376 = -8;

	t89 = ((x373|x374)-(x375/x376));

	if (t89 != -1152921504606846977LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x377 = 13037688U;
	int8_t x378 = -10;
	uint8_t x380 = 17U;
	volatile uint32_t t90 = 13185027U;

	t90 = ((x377|x378)-(x379/x380));

	if (t90 != 4294956968U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -4321;
	int8_t x382 = -10;
	int16_t x383 = -1;
	int64_t x384 = 27015LL;
	volatile int64_t t91 = 500753936857LL;

	t91 = ((x381|x382)-(x383/x384));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 271U;
	int16_t x387 = -30;
	volatile int64_t x388 = 124782606LL;
	static int64_t t92 = -61295740342LL;

	t92 = ((x385|x386)-(x387/x388));

	if (t92 != -33LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x390 = INT32_MIN;
	volatile uint64_t x391 = 23486LLU;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t93 = 6657456882129723846LLU;

	t93 = ((x389|x390)-(x391/x392));

	if (t93 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x397 = -1680944;
	uint16_t x399 = UINT16_MAX;
	uint32_t x400 = 593U;
	uint32_t t94 = 2860974U;

	t94 = ((x397|x398)-(x399/x400));

	if (t94 != 4293286242U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = 24;
	int32_t x404 = -10;

	t95 = ((x401|x402)-(x403/x404));

	if (t95 != -32903) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = -15737686201912LL;
	int64_t x407 = 62153LL;
	uint32_t x408 = UINT32_MAX;

	t96 = ((x405|x406)-(x407/x408));

	if (t96 != -56LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x409 = 1735371U;
	int64_t x410 = INT64_MIN;
	int8_t x411 = -1;
	static int16_t x412 = INT16_MIN;

	t97 = ((x409|x410)-(x411/x412));

	if (t97 != -9223372036853040437LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x413 = -1LL;
	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = -1LL;
	volatile uint16_t x416 = 2U;
	volatile int64_t t98 = 18748532LL;

	t98 = ((x413|x414)-(x415/x416));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x418 = INT32_MIN;

	t99 = ((x417|x418)-(x419/x420));

	if (t99 != 72057594037927934LL) { NG(); } else { ; }
	
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

