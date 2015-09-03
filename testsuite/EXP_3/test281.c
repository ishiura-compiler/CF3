#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = 1;
volatile int8_t x30 = INT8_MAX;
static volatile int32_t t5 = 60181429;
int8_t x38 = INT8_MAX;
uint8_t x51 = UINT8_MAX;
uint8_t x53 = UINT8_MAX;
volatile int32_t t12 = -84732932;
volatile int16_t x76 = 18;
int32_t t14 = -2373768;
int16_t x80 = INT16_MIN;
int64_t x82 = 13002532572771221LL;
int8_t x83 = INT8_MAX;
int32_t t16 = 1579887;
uint16_t x86 = 21U;
static int32_t x94 = 354358811;
volatile int32_t t20 = 3428;
int32_t x117 = INT32_MIN;
volatile uint16_t x131 = 0U;
volatile uint32_t x134 = 0U;
int32_t t29 = -7585192;
uint64_t x146 = UINT64_MAX;
volatile uint8_t x150 = UINT8_MAX;
int32_t t32 = 1;
int8_t x167 = INT8_MAX;
uint8_t x169 = UINT8_MAX;
int32_t x171 = 97382207;
int64_t x172 = INT64_MAX;
volatile int32_t t35 = 31551587;
volatile int8_t x184 = -1;
int8_t x197 = INT8_MIN;
int32_t x202 = 83;
uint32_t x210 = 3U;
int32_t t44 = -6376075;
static volatile uint64_t x214 = 32899518568992LLU;
uint8_t x227 = 3U;
uint64_t x234 = 80673885761LLU;
int16_t x239 = 2;
static int8_t x240 = INT8_MIN;
int32_t t51 = -1987;
int16_t x251 = 8;
uint8_t x257 = 22U;
uint64_t x259 = UINT64_MAX;
static int8_t x260 = 1;
static int16_t x264 = INT16_MAX;
int8_t x276 = INT8_MIN;
int32_t t58 = 44;
int32_t x279 = INT32_MAX;
volatile uint8_t x280 = UINT8_MAX;
int32_t x282 = -1;
int32_t x289 = 0;
uint32_t x293 = 259034170U;
uint64_t x303 = UINT64_MAX;
int32_t t65 = 0;
static int64_t x306 = INT64_MIN;
int16_t x309 = -1;
uint64_t x316 = 126454742523780211LLU;
volatile int32_t t69 = -13207587;
int32_t x324 = INT32_MAX;
volatile uint8_t x325 = UINT8_MAX;
volatile uint32_t x326 = 14344U;
uint16_t x331 = 25947U;
static volatile int32_t x333 = 207578335;
static uint64_t x334 = 203040225LLU;
uint64_t x335 = UINT64_MAX;
int8_t x338 = 0;
int32_t t74 = -310860;
volatile int16_t x341 = 0;
volatile int32_t x352 = -507126;
int16_t x356 = INT16_MAX;
uint16_t x359 = 471U;
volatile int8_t x360 = INT8_MAX;
static volatile int32_t t81 = 137830883;
int32_t x369 = INT32_MIN;
int16_t x371 = 1;
int32_t x373 = INT32_MIN;
volatile int64_t x384 = INT64_MAX;
static uint64_t x385 = 131LLU;
int16_t x386 = -1;
int16_t x390 = -1;
uint8_t x396 = UINT8_MAX;
int32_t x397 = INT32_MIN;
volatile int32_t x398 = INT32_MIN;
int16_t x400 = INT16_MIN;
int64_t x405 = INT64_MIN;
uint64_t x406 = 227489738706733589LLU;
static volatile int64_t x408 = 942669786LL;
uint8_t x413 = 125U;
volatile int32_t t91 = 7;
static int16_t x427 = INT16_MIN;
volatile int32_t t93 = 28;
static int16_t x437 = INT16_MIN;
uint64_t x441 = 792856LLU;
static int32_t x447 = INT32_MIN;
static int8_t x449 = -1;
int16_t x454 = INT16_MIN;
int16_t x455 = -1;
int16_t x456 = -3;


void f0(void) {
	int64_t x1 = -1LL;
	volatile uint64_t x2 = UINT64_MAX;
	static int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -2;

	t0 = ((x1<x2)==(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = 2443663LL;
	uint8_t x11 = 28U;
	int8_t x12 = INT8_MAX;
	volatile int32_t t1 = 0;

	t1 = ((x9<x10)==(x11-x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = -60;
	static volatile int32_t t2 = 28121;

	t2 = ((x13<x14)==(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = 57674631119LLU;
	volatile int16_t x19 = -16;
	static int16_t x20 = -1;
	int32_t t3 = 16569299;

	t3 = ((x17<x18)==(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static volatile uint8_t x22 = 2U;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 101U;
	int32_t t4 = -43718;

	t4 = ((x21<x22)==(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x31 = UINT64_MAX;
	volatile uint32_t x32 = UINT32_MAX;

	t5 = ((x29<x30)==(x31-x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -17;
	uint8_t x34 = UINT8_MAX;
	int64_t x35 = INT64_MIN;
	volatile int64_t x36 = -1LL;
	volatile int32_t t6 = 6;

	t6 = ((x33<x34)==(x35-x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 292U;
	static uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 14410294813LLU;
	int32_t t7 = -14;

	t7 = ((x37<x38)==(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x45 = 3749563489350LLU;
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t8 = -33;

	t8 = ((x45<x46)==(x47-x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 15513616LLU;
	int64_t x50 = INT64_MAX;
	static uint64_t x52 = UINT64_MAX;
	volatile int32_t t9 = -139237;

	t9 = ((x49<x50)==(x51-x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x54 = -12;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	int32_t t10 = 0;

	t10 = ((x53<x54)==(x55-x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 135294101U;
	uint64_t x59 = UINT64_MAX;
	static uint64_t x60 = 1440826745LLU;
	int32_t t11 = -56782;

	t11 = ((x57<x58)==(x59-x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = -4;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -1LL;

	t12 = ((x61<x62)==(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -29730;
	uint64_t x70 = UINT64_MAX;
	static volatile int16_t x71 = -1;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t13 = 16352;

	t13 = ((x69<x70)==(x71-x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = INT32_MAX;
	volatile int16_t x74 = 3997;
	int64_t x75 = INT64_MAX;

	t14 = ((x73<x74)==(x75-x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x77 = 115580185LL;
	uint32_t x78 = 144093436U;
	static volatile int64_t x79 = INT64_MIN;
	static volatile int32_t t15 = -368;

	t15 = ((x77<x78)==(x79-x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x81 = 1063U;
	static volatile uint64_t x84 = 12LLU;

	t16 = ((x81<x82)==(x83-x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 0U;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	int32_t t17 = 537007801;

	t17 = ((x85<x86)==(x87-x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = 183662872487LL;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 7999026041479LL;
	int32_t x92 = INT32_MIN;
	int32_t t18 = -252698141;

	t18 = ((x89<x90)==(x91-x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t19 = -294502241;

	t19 = ((x93<x94)==(x95-x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MAX;
	uint64_t x98 = 115911LLU;
	static uint32_t x99 = 2228602U;
	int64_t x100 = 63770274023LL;

	t20 = ((x97<x98)==(x99-x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	uint8_t x107 = 61U;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t21 = 0;

	t21 = ((x105<x106)==(x107-x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MAX;
	static uint32_t x114 = UINT32_MAX;
	int32_t x115 = -1;
	int16_t x116 = INT16_MAX;
	volatile int32_t t22 = -80849;

	t22 = ((x113<x114)==(x115-x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x118 = 0U;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 1958U;
	int32_t t23 = 1080225;

	t23 = ((x117<x118)==(x119-x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x121 = INT64_MAX;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MAX;
	static volatile uint64_t x124 = UINT64_MAX;
	int32_t t24 = -432563829;

	t24 = ((x121<x122)==(x123-x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = 41219134094497013LLU;
	int16_t x126 = 95;
	volatile uint64_t x127 = 16836912190571123LLU;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t25 = 57231333;

	t25 = ((x125<x126)==(x127-x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x129 = UINT16_MAX;
	static volatile uint64_t x130 = 14140885LLU;
	int8_t x132 = INT8_MIN;
	volatile int32_t t26 = -124;

	t26 = ((x129<x130)==(x131-x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x133 = INT32_MIN;
	int16_t x135 = -6;
	static uint8_t x136 = 1U;
	int32_t t27 = 31567691;

	t27 = ((x133<x134)==(x135-x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -1LL;
	static volatile int64_t x138 = INT64_MIN;
	volatile int16_t x139 = -45;
	uint32_t x140 = 3938U;
	static volatile int32_t t28 = -301798890;

	t28 = ((x137<x138)==(x139-x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x141 = INT16_MIN;
	int64_t x142 = -4025704LL;
	int8_t x143 = -1;
	uint32_t x144 = 0U;

	t29 = ((x141<x142)==(x143-x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x145 = -3;
	uint16_t x147 = UINT16_MAX;
	static volatile uint32_t x148 = 1403U;
	int32_t t30 = 777338350;

	t30 = ((x145<x146)==(x147-x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x149 = INT32_MIN;
	static uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MAX;
	volatile int32_t t31 = 558;

	t31 = ((x149<x150)==(x151-x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = 126022840875LL;
	volatile int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	uint32_t x160 = 0U;

	t32 = ((x157<x158)==(x159-x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -1;
	uint8_t x166 = 42U;
	uint32_t x168 = 15623154U;
	static volatile int32_t t33 = 54014;

	t33 = ((x165<x166)==(x167-x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x170 = 9U;
	int32_t t34 = -29633227;

	t34 = ((x169<x170)==(x171-x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = 0;
	volatile uint64_t x174 = 493177660402427943LLU;
	int8_t x175 = -1;
	static int32_t x176 = -544795014;

	t35 = ((x173<x174)==(x175-x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = 3U;
	int64_t x178 = INT64_MAX;
	int8_t x179 = 4;
	uint64_t x180 = UINT64_MAX;
	int32_t t36 = 21154;

	t36 = ((x177<x178)==(x179-x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = INT64_MIN;
	static uint64_t x182 = 3864538405LLU;
	int32_t x183 = -1;
	volatile int32_t t37 = -620;

	t37 = ((x181<x182)==(x183-x184));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = 11225634U;
	static int16_t x186 = 168;
	volatile uint64_t x187 = 336018729422345LLU;
	int8_t x188 = -1;
	static int32_t t38 = -1968365;

	t38 = ((x185<x186)==(x187-x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = -1LL;
	int64_t x190 = 329LL;
	int32_t x191 = -1;
	int64_t x192 = INT64_MAX;
	int32_t t39 = -1;

	t39 = ((x189<x190)==(x191-x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x193 = 3U;
	static uint64_t x194 = 6946884389321555LLU;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = UINT16_MAX;
	static int32_t t40 = -324;

	t40 = ((x193<x194)==(x195-x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x198 = -1;
	static volatile uint32_t x199 = 1842124U;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t41 = -17;

	t41 = ((x197<x198)==(x199-x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x201 = INT64_MIN;
	static volatile int64_t x203 = 1LL;
	uint32_t x204 = 2366U;
	int32_t t42 = 8124503;

	t42 = ((x201<x202)==(x203-x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	uint16_t x206 = 25U;
	int16_t x207 = -1;
	static uint64_t x208 = 517354908388616242LLU;
	int32_t t43 = -15;

	t43 = ((x205<x206)==(x207-x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = -11681;
	int16_t x211 = INT16_MIN;
	static volatile int64_t x212 = -1LL;

	t44 = ((x209<x210)==(x211-x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x213 = INT32_MIN;
	static uint16_t x215 = 4698U;
	int32_t x216 = 978565;
	int32_t t45 = 673;

	t45 = ((x213<x214)==(x215-x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x217 = -38371588LL;
	uint32_t x218 = 8896260U;
	int16_t x219 = INT16_MIN;
	volatile int64_t x220 = -21149LL;
	volatile int32_t t46 = -61;

	t46 = ((x217<x218)==(x219-x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x221 = INT64_MAX;
	uint32_t x222 = 0U;
	int32_t x223 = INT32_MAX;
	volatile uint64_t x224 = 247020279310121123LLU;
	int32_t t47 = -6;

	t47 = ((x221<x222)==(x223-x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = 1394;
	volatile int64_t x226 = INT64_MIN;
	int32_t x228 = -149527;
	volatile int32_t t48 = 472346415;

	t48 = ((x225<x226)==(x227-x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MIN;
	volatile uint8_t x230 = 3U;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = 490U;
	static volatile int32_t t49 = 12575411;

	t49 = ((x229<x230)==(x231-x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = UINT16_MAX;
	uint64_t x235 = UINT64_MAX;
	uint64_t x236 = 15510620105LLU;
	int32_t t50 = -2;

	t50 = ((x233<x234)==(x235-x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MIN;
	volatile int32_t x238 = 173;

	t51 = ((x237<x238)==(x239-x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x245 = INT16_MIN;
	static volatile uint8_t x246 = 59U;
	int64_t x247 = -85863607993777LL;
	static int16_t x248 = 479;
	volatile int32_t t52 = -7774588;

	t52 = ((x245<x246)==(x247-x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = -1962142782991621932LL;
	volatile int32_t x250 = -17;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t53 = -735;

	t53 = ((x249<x250)==(x251-x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MAX;
	volatile uint64_t x255 = 6987943566LLU;
	volatile int32_t x256 = 0;
	int32_t t54 = -1806;

	t54 = ((x253<x254)==(x255-x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x258 = 0;
	volatile int32_t t55 = -3635;

	t55 = ((x257<x258)==(x259-x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = 56;
	int8_t x262 = -31;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t56 = 51285254;

	t56 = ((x261<x262)==(x263-x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MAX;
	int16_t x267 = 7592;
	volatile int8_t x268 = -1;
	static volatile int32_t t57 = 1711;

	t57 = ((x265<x266)==(x267-x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x273 = INT16_MAX;
	uint32_t x274 = 504U;
	static int8_t x275 = -1;

	t58 = ((x273<x274)==(x275-x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = -1;
	static uint32_t x278 = 1703686U;
	volatile int32_t t59 = 12;

	t59 = ((x277<x278)==(x279-x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = 153364038LL;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = INT8_MIN;
	static int32_t t60 = 1040896004;

	t60 = ((x281<x282)==(x283-x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 79U;
	int64_t x288 = 22773082508217LL;
	static volatile int32_t t61 = -30861;

	t61 = ((x285<x286)==(x287-x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x290 = 5U;
	int8_t x291 = 0;
	volatile uint32_t x292 = UINT32_MAX;
	int32_t t62 = -2;

	t62 = ((x289<x290)==(x291-x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x294 = -1652;
	int16_t x295 = -1;
	int8_t x296 = INT8_MAX;
	int32_t t63 = 68564;

	t63 = ((x293<x294)==(x295-x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = 73887LL;
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = 71533LL;
	uint64_t x300 = 190385540713009679LLU;
	int32_t t64 = 2076585;

	t64 = ((x297<x298)==(x299-x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x301 = INT64_MIN;
	int8_t x302 = -1;
	static int64_t x304 = 19LL;

	t65 = ((x301<x302)==(x303-x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x305 = -1LL;
	uint32_t x307 = 27303982U;
	int16_t x308 = 2958;
	int32_t t66 = -15649632;

	t66 = ((x305<x306)==(x307-x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x310 = INT64_MAX;
	uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t67 = -22468;

	t67 = ((x309<x310)==(x311-x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = 6908U;
	uint32_t x314 = 14660139U;
	int8_t x315 = -1;
	int32_t t68 = -27125300;

	t68 = ((x313<x314)==(x315-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = 21474671849931396LL;
	int64_t x318 = INT64_MIN;
	int8_t x319 = 1;
	int16_t x320 = INT16_MIN;

	t69 = ((x317<x318)==(x319-x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = 1;
	uint64_t x323 = 24683LLU;
	volatile int32_t t70 = 27861;

	t70 = ((x321<x322)==(x323-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x327 = UINT64_MAX;
	static int64_t x328 = -1LL;
	static volatile int32_t t71 = 24597328;

	t71 = ((x325<x326)==(x327-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = -240;
	int64_t x332 = 207049681688289748LL;
	int32_t t72 = -5;

	t72 = ((x329<x330)==(x331-x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x336 = 3;
	int32_t t73 = -2;

	t73 = ((x333<x334)==(x335-x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = INT32_MIN;
	int64_t x339 = -1016766654877151LL;
	int32_t x340 = 6890917;

	t74 = ((x337<x338)==(x339-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x342 = INT8_MAX;
	int64_t x343 = -24265LL;
	static volatile uint8_t x344 = UINT8_MAX;
	int32_t t75 = -47;

	t75 = ((x341<x342)==(x343-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x345 = -1;
	volatile int32_t x346 = 1070929;
	int8_t x347 = 21;
	uint16_t x348 = UINT16_MAX;
	int32_t t76 = 828;

	t76 = ((x345<x346)==(x347-x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MAX;
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = -1;
	volatile int32_t t77 = -577596;

	t77 = ((x349<x350)==(x351-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x353 = UINT8_MAX;
	static volatile uint64_t x354 = 6758667224LLU;
	int8_t x355 = 4;
	volatile int32_t t78 = -7;

	t78 = ((x353<x354)==(x355-x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x357 = INT64_MIN;
	uint64_t x358 = 949155283953860525LLU;
	volatile int32_t t79 = 924;

	t79 = ((x357<x358)==(x359-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = 12782U;
	int16_t x362 = 424;
	uint64_t x363 = 4283805449916372LLU;
	uint64_t x364 = 1053055437259813445LLU;
	volatile int32_t t80 = -113889;

	t80 = ((x361<x362)==(x363-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x365 = INT64_MAX;
	static int16_t x366 = INT16_MAX;
	uint8_t x367 = 6U;
	uint32_t x368 = 123452U;

	t81 = ((x365<x366)==(x367-x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x370 = INT32_MIN;
	int64_t x372 = -343550565176LL;
	static int32_t t82 = 60380;

	t82 = ((x369<x370)==(x371-x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t83 = -9;

	t83 = ((x373<x374)==(x375-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 99U;
	uint64_t x378 = 1LLU;
	static volatile int8_t x379 = INT8_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	int32_t t84 = -52;

	t84 = ((x377<x378)==(x379-x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x381 = UINT64_MAX;
	volatile int32_t x382 = -322380226;
	volatile int8_t x383 = -1;
	int32_t t85 = -927;

	t85 = ((x381<x382)==(x383-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x387 = UINT64_MAX;
	static uint32_t x388 = 2235U;
	int32_t t86 = -1170;

	t86 = ((x385<x386)==(x387-x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x389 = 31507642U;
	int32_t x391 = -6;
	uint64_t x392 = 58181177LLU;
	volatile int32_t t87 = 3;

	t87 = ((x389<x390)==(x391-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 296887044LLU;
	int64_t x394 = INT64_MIN;
	static uint64_t x395 = UINT64_MAX;
	volatile int32_t t88 = 2079959;

	t88 = ((x393<x394)==(x395-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x399 = INT64_MIN;
	int32_t t89 = -118447;

	t89 = ((x397<x398)==(x399-x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x407 = 203U;
	volatile int32_t t90 = -46644179;

	t90 = ((x405<x406)==(x407-x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x414 = 175930595U;
	int32_t x415 = -26524;
	int8_t x416 = INT8_MIN;

	t91 = ((x413<x414)==(x415-x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = INT32_MAX;
	volatile int32_t x422 = INT32_MAX;
	int64_t x423 = -1LL;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t92 = -165;

	t92 = ((x421<x422)==(x423-x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x425 = INT64_MIN;
	int16_t x426 = -1;
	volatile int64_t x428 = -1LL;

	t93 = ((x425<x426)==(x427-x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MAX;
	static int32_t x430 = -701566;
	int8_t x431 = INT8_MIN;
	int64_t x432 = -3922583820536LL;
	volatile int32_t t94 = -2450965;

	t94 = ((x429<x430)==(x431-x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x438 = -1;
	static int16_t x439 = -23;
	int8_t x440 = -1;
	int32_t t95 = 343;

	t95 = ((x437<x438)==(x439-x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x442 = INT32_MIN;
	static int16_t x443 = INT16_MIN;
	static uint8_t x444 = 1U;
	int32_t t96 = -2873208;

	t96 = ((x441<x442)==(x443-x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x445 = INT16_MAX;
	uint8_t x446 = 0U;
	volatile int32_t x448 = -49429558;
	static volatile int32_t t97 = 229869701;

	t97 = ((x445<x446)==(x447-x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x450 = 661547U;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = 181U;
	int32_t t98 = -849820762;

	t98 = ((x449<x450)==(x451-x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = INT32_MAX;
	int32_t t99 = 0;

	t99 = ((x453<x454)==(x455-x456));

	if (t99 != 0) { NG(); } else { ; }
	
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

