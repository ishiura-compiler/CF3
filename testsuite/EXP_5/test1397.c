#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = 14;
uint8_t x9 = 12U;
static uint16_t x35 = 326U;
uint16_t x37 = 1U;
volatile uint64_t x43 = 2578760291243LLU;
volatile int32_t t7 = 0;
uint64_t x49 = UINT64_MAX;
static uint32_t x51 = 356180540U;
uint8_t x77 = 0U;
static int32_t t9 = 183901;
volatile int32_t t10 = INT32_MAX;
int64_t x110 = INT64_MIN;
int32_t x118 = INT32_MIN;
volatile uint32_t t13 = UINT32_MAX;
int16_t x127 = -1;
static volatile int64_t x128 = INT64_MAX;
static int64_t x130 = INT64_MIN;
uint64_t x131 = 2603LLU;
static uint64_t t15 = 2026979879LLU;
uint8_t x145 = UINT8_MAX;
volatile int32_t t17 = -471410;
int16_t x170 = INT16_MIN;
uint64_t x177 = 1532078810LLU;
volatile int32_t x186 = INT32_MIN;
int64_t x188 = INT64_MIN;
int16_t x195 = 1;
int16_t x207 = -1;
uint8_t x208 = UINT8_MAX;
int16_t x227 = 1;
int32_t t28 = -4684;
int32_t x234 = -44935289;
int32_t t29 = 1;
int32_t x237 = 51444454;
uint32_t x251 = 177570820U;
static int64_t x257 = 462642539407LL;
int64_t t33 = 1414438415257795110LL;
uint16_t x311 = UINT16_MAX;
int8_t x314 = 1;
volatile int16_t x323 = INT16_MIN;
int64_t x324 = -1717820112LL;
int64_t x326 = -1LL;
static uint32_t x327 = 26473789U;
volatile uint8_t x328 = UINT8_MAX;
static int32_t x351 = 43097;
int32_t x352 = INT32_MAX;
int16_t x357 = 10897;
int16_t x358 = INT16_MIN;
int32_t t46 = -132;
uint64_t x387 = UINT64_MAX;
uint64_t x403 = 566597023LLU;
static int32_t x406 = 3;
static volatile uint32_t t50 = 778335047U;
volatile int64_t x414 = INT64_MIN;
int16_t x421 = 0;
int32_t t52 = -1158654;
static uint8_t x426 = UINT8_MAX;
int8_t x427 = INT8_MIN;
int64_t x428 = INT64_MAX;
uint8_t x437 = 2U;
static volatile uint64_t x438 = UINT64_MAX;
volatile uint64_t x443 = 2755335LLU;
int16_t x444 = -392;
volatile int64_t t55 = -74976539LL;
volatile uint32_t t58 = 17056705U;
volatile uint8_t x485 = UINT8_MAX;
uint64_t x486 = UINT64_MAX;
int32_t t60 = -54259;
volatile int8_t x496 = INT8_MIN;
uint64_t x501 = UINT64_MAX;
int32_t x502 = INT32_MAX;
static uint64_t x503 = UINT64_MAX;
volatile int16_t x504 = INT16_MIN;
volatile int8_t x519 = INT8_MAX;
static int16_t x526 = INT16_MIN;
uint32_t t64 = 1833U;
int64_t x531 = -1LL;
uint32_t t65 = 0U;
static volatile int32_t t66 = -8110;
uint16_t x549 = UINT16_MAX;
static int8_t x598 = INT8_MIN;
int8_t x600 = INT8_MIN;
int64_t x606 = INT64_MIN;
int8_t x607 = INT8_MAX;
static volatile int32_t t69 = 74918629;
uint16_t x625 = 201U;
int32_t t71 = -16061;
int64_t x650 = INT64_MIN;
static int32_t x651 = INT32_MIN;
static int32_t t72 = -10897693;
volatile int16_t x658 = INT16_MAX;
int32_t x659 = INT32_MIN;
int16_t x660 = INT16_MIN;
volatile int16_t x662 = -8310;
int64_t x680 = INT64_MIN;
int32_t x681 = 5731243;
static uint8_t x683 = UINT8_MAX;
int64_t x684 = -24411LL;
volatile int32_t t81 = -44876;
int32_t x706 = -1891194;
int8_t x713 = 52;
static uint16_t x725 = 568U;
int16_t x726 = -1;
volatile int32_t t85 = 388;
volatile uint64_t x729 = 0LLU;
uint64_t t86 = 77632LLU;
int16_t x754 = INT16_MIN;
uint32_t x778 = UINT32_MAX;
uint16_t x782 = 98U;
uint8_t x813 = UINT8_MAX;
uint8_t x815 = 87U;
volatile int32_t t91 = -907837;
uint32_t x825 = 120465325U;
int16_t x857 = 1;
int32_t x860 = INT32_MIN;
int16_t x863 = INT16_MAX;
uint64_t x868 = UINT64_MAX;
static uint32_t t97 = 172807988U;
int8_t x872 = INT8_MIN;
static volatile int32_t t98 = -2;
static int16_t x873 = INT16_MAX;


void f0(void) {
	static uint8_t x6 = 11U;
	int32_t x7 = -125;
	uint32_t x8 = 173744248U;
	int32_t t0 = -700;

	t0 = (x5<<((x6<x7)/x8));

	if (t0 != 14) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = -1;
	int16_t x11 = INT16_MAX;
	volatile uint16_t x12 = 14539U;
	volatile int32_t t1 = 1;

	t1 = (x9<<((x10<x11)/x12));

	if (t1 != 12) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x17 = 20771U;
	int8_t x18 = -10;
	int8_t x19 = INT8_MAX;
	volatile uint8_t x20 = 1U;
	volatile int32_t t2 = 13;

	t2 = (x17<<((x18<x19)/x20));

	if (t2 != 41542) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 1992;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	uint32_t x28 = 15997U;
	volatile int32_t t3 = 1;

	t3 = (x25<<((x26<x27)/x28));

	if (t3 != 1992) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x33 = 1;
	static int16_t x34 = 1;
	static int64_t x36 = 7767LL;
	volatile int32_t t4 = -37321446;

	t4 = (x33<<((x34<x35)/x36));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x38 = 38173270804561727LL;
	int32_t x39 = 9707773;
	volatile int8_t x40 = INT8_MIN;
	int32_t t5 = 203;

	t5 = (x37<<((x38<x39)/x40));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x41 = 1U;
	uint8_t x42 = 8U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t6 = -55269614;

	t6 = (x41<<((x42<x43)/x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = 41U;
	static uint32_t x46 = 1680U;
	int16_t x47 = INT16_MAX;
	uint8_t x48 = 18U;

	t7 = (x45<<((x46<x47)/x48));

	if (t7 != 41) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x50 = UINT64_MAX;
	uint8_t x52 = UINT8_MAX;
	static uint64_t t8 = UINT64_MAX;

	t8 = (x49<<((x50<x51)/x52));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x78 = -37;
	volatile int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MAX;

	t9 = (x77<<((x78<x79)/x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x89 = INT32_MAX;
	int64_t x90 = -284262LL;
	int8_t x91 = INT8_MAX;
	static volatile uint16_t x92 = 1600U;

	t10 = (x89<<((x90<x91)/x92));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 18517908U;
	int32_t x96 = -3617551;
	volatile int32_t t11 = -3;

	t11 = (x93<<((x94<x95)/x96));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x109 = 6630853LLU;
	uint16_t x111 = UINT16_MAX;
	uint16_t x112 = 185U;
	volatile uint64_t t12 = 1207518236LLU;

	t12 = (x109<<((x110<x111)/x112));

	if (t12 != 6630853LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int16_t x119 = -1;
	uint64_t x120 = 80669LLU;

	t13 = (x117<<((x118<x119)/x120));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x125 = UINT64_MAX;
	static int8_t x126 = 62;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x125<<((x126<x127)/x128));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x129 = 490942LLU;
	uint32_t x132 = 2U;

	t15 = (x129<<((x130<x131)/x132));

	if (t15 != 490942LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x137 = 2;
	uint8_t x138 = 112U;
	static int16_t x139 = -8891;
	volatile uint32_t x140 = 48U;
	int32_t t16 = 5414504;

	t16 = (x137<<((x138<x139)/x140));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x146 = 0;
	int64_t x147 = INT64_MAX;
	static int64_t x148 = INT64_MIN;

	t17 = (x145<<((x146<x147)/x148));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = 46291;
	volatile uint32_t x156 = UINT32_MAX;
	static uint32_t t18 = UINT32_MAX;

	t18 = (x153<<((x154<x155)/x156));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = 2699987101539062884LL;
	int16_t x158 = -1;
	int64_t x159 = -1LL;
	int16_t x160 = -4562;
	volatile int64_t t19 = -213796LL;

	t19 = (x157<<((x158<x159)/x160));

	if (t19 != 2699987101539062884LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x169 = 4300391989LLU;
	int64_t x171 = INT64_MAX;
	int64_t x172 = INT64_MIN;
	uint64_t t20 = 58020972682751883LLU;

	t20 = (x169<<((x170<x171)/x172));

	if (t20 != 4300391989LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x178 = INT16_MAX;
	int8_t x179 = -2;
	int8_t x180 = -1;
	static uint64_t t21 = 17LLU;

	t21 = (x177<<((x178<x179)/x180));

	if (t21 != 1532078810LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = -109605;
	int8_t x183 = -1;
	uint16_t x184 = 891U;
	int32_t t22 = -127812700;

	t22 = (x181<<((x182<x183)/x184));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x185 = 1U;
	static int16_t x187 = -17;
	volatile uint32_t t23 = 24171150U;

	t23 = (x185<<((x186<x187)/x188));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x193 = UINT8_MAX;
	static uint32_t x194 = UINT32_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t24 = -214;

	t24 = (x193<<((x194<x195)/x196));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static uint8_t x206 = UINT8_MAX;
	volatile int32_t t25 = 1;

	t25 = (x205<<((x206<x207)/x208));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x213 = 56LLU;
	int16_t x214 = INT16_MAX;
	static int64_t x215 = INT64_MIN;
	volatile int8_t x216 = INT8_MAX;
	uint64_t t26 = 931601LLU;

	t26 = (x213<<((x214<x215)/x216));

	if (t26 != 56LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x221 = 2U;
	static int8_t x222 = 1;
	volatile int16_t x223 = -10;
	int8_t x224 = -1;
	static uint32_t t27 = 209181U;

	t27 = (x221<<((x222<x223)/x224));

	if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x225 = 63;
	int32_t x226 = INT32_MAX;
	int64_t x228 = -12912LL;

	t28 = (x225<<((x226<x227)/x228));

	if (t28 != 63) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x233 = 398U;
	int64_t x235 = -1LL;
	volatile uint8_t x236 = UINT8_MAX;

	t29 = (x233<<((x234<x235)/x236));

	if (t29 != 398) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x238 = INT64_MAX;
	volatile int32_t x239 = 26;
	uint16_t x240 = 1U;
	int32_t t30 = 12173385;

	t30 = (x237<<((x238<x239)/x240));

	if (t30 != 51444454) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x249 = 43U;
	int64_t x250 = -1LL;
	static int64_t x252 = INT64_MAX;
	int32_t t31 = 1;

	t31 = (x249<<((x250<x251)/x252));

	if (t31 != 43) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x253 = 54;
	int64_t x254 = 15639556890923LL;
	int64_t x255 = INT64_MAX;
	uint8_t x256 = 1U;
	int32_t t32 = 988;

	t32 = (x253<<((x254<x255)/x256));

	if (t32 != 108) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x258 = -1LL;
	volatile uint8_t x259 = UINT8_MAX;
	static int64_t x260 = INT64_MIN;

	t33 = (x257<<((x258<x259)/x260));

	if (t33 != 462642539407LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x273 = 185;
	static int32_t x274 = -1;
	static uint32_t x275 = 253U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t34 = -94979999;

	t34 = (x273<<((x274<x275)/x276));

	if (t34 != 185) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x277 = INT16_MAX;
	int16_t x278 = 5;
	uint32_t x279 = 12U;
	static int16_t x280 = INT16_MIN;
	static int32_t t35 = -1597;

	t35 = (x277<<((x278<x279)/x280));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x285 = INT8_MAX;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = -809;
	int64_t x288 = INT64_MIN;
	int32_t t36 = 36;

	t36 = (x285<<((x286<x287)/x288));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x309 = INT32_MAX;
	static int32_t x310 = 3912114;
	static volatile int32_t x312 = -6928;
	int32_t t37 = INT32_MAX;

	t37 = (x309<<((x310<x311)/x312));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x313 = 4;
	uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 1U;
	int32_t t38 = 0;

	t38 = (x313<<((x314<x315)/x316));

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x321 = 758025U;
	static int64_t x322 = -14226651641838413LL;
	volatile uint32_t t39 = 920097U;

	t39 = (x321<<((x322<x323)/x324));

	if (t39 != 758025U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x325 = UINT64_MAX;
	uint64_t t40 = UINT64_MAX;

	t40 = (x325<<((x326<x327)/x328));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x333 = INT64_MAX;
	uint8_t x334 = 62U;
	static int32_t x335 = 0;
	int16_t x336 = INT16_MAX;
	volatile int64_t t41 = INT64_MAX;

	t41 = (x333<<((x334<x335)/x336));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x337 = INT32_MAX;
	static int8_t x338 = -1;
	volatile int16_t x339 = -3188;
	int32_t x340 = -1;
	int32_t t42 = INT32_MAX;

	t42 = (x337<<((x338<x339)/x340));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = 185U;
	static int8_t x348 = INT8_MIN;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x345<<((x346<x347)/x348));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x349 = 1;
	int16_t x350 = INT16_MIN;
	int32_t t44 = -48904;

	t44 = (x349<<((x350<x351)/x352));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x359 = 117U;
	uint8_t x360 = 28U;
	volatile int32_t t45 = 1894648;

	t45 = (x357<<((x358<x359)/x360));

	if (t45 != 10897) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x377 = INT16_MAX;
	uint64_t x378 = 3412652906995347579LLU;
	int32_t x379 = INT32_MIN;
	static uint64_t x380 = UINT64_MAX;

	t46 = (x377<<((x378<x379)/x380));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x385 = 9058LLU;
	int16_t x386 = INT16_MAX;
	int16_t x388 = INT16_MIN;
	uint64_t t47 = 1321521LLU;

	t47 = (x385<<((x386<x387)/x388));

	if (t47 != 9058LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x401 = 2U;
	uint32_t x402 = 687U;
	uint8_t x404 = 52U;
	volatile uint32_t t48 = 6395U;

	t48 = (x401<<((x402<x403)/x404));

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x405 = 420543374LLU;
	uint8_t x407 = UINT8_MAX;
	volatile int16_t x408 = INT16_MIN;
	static volatile uint64_t t49 = 12848974788LLU;

	t49 = (x405<<((x406<x407)/x408));

	if (t49 != 420543374LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x409 = 48U;
	uint8_t x410 = 0U;
	volatile int64_t x411 = INT64_MIN;
	volatile int16_t x412 = -23;

	t50 = (x409<<((x410<x411)/x412));

	if (t50 != 48U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x413 = 921293989LLU;
	uint32_t x415 = 458U;
	volatile int8_t x416 = 28;
	uint64_t t51 = 3414943194378195855LLU;

	t51 = (x413<<((x414<x415)/x416));

	if (t51 != 921293989LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x422 = INT8_MAX;
	volatile int64_t x423 = INT64_MIN;
	static int8_t x424 = INT8_MAX;

	t52 = (x421<<((x422<x423)/x424));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x425 = 2186U;
	int32_t t53 = -456211489;

	t53 = (x425<<((x426<x427)/x428));

	if (t53 != 2186) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x439 = -1;
	uint16_t x440 = 13565U;
	int32_t t54 = 6;

	t54 = (x437<<((x438<x439)/x440));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x441 = 9911124548LL;
	volatile int8_t x442 = INT8_MIN;

	t55 = (x441<<((x442<x443)/x444));

	if (t55 != 9911124548LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x449 = 6524U;
	int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	int32_t x452 = INT32_MIN;
	int32_t t56 = -3;

	t56 = (x449<<((x450<x451)/x452));

	if (t56 != 6524) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x457 = 1;
	static int16_t x458 = 100;
	static int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t57 = -4048;

	t57 = (x457<<((x458<x459)/x460));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x473 = 2989U;
	volatile uint8_t x474 = 8U;
	static int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;

	t58 = (x473<<((x474<x475)/x476));

	if (t58 != 2989U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x477 = UINT32_MAX;
	int32_t x478 = INT32_MIN;
	uint8_t x479 = 14U;
	static int64_t x480 = INT64_MAX;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = (x477<<((x478<x479)/x480));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x487 = 31LLU;
	int32_t x488 = INT32_MIN;

	t60 = (x485<<((x486<x487)/x488));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x493 = 25U;
	static int16_t x494 = -1196;
	int8_t x495 = 60;
	int32_t t61 = -1173;

	t61 = (x493<<((x494<x495)/x496));

	if (t61 != 25) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t t62 = UINT64_MAX;

	t62 = (x501<<((x502<x503)/x504));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x517 = UINT16_MAX;
	int32_t x518 = INT32_MAX;
	volatile int32_t x520 = INT32_MIN;
	volatile int32_t t63 = 1729456;

	t63 = (x517<<((x518<x519)/x520));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x525 = 949U;
	static uint64_t x527 = 6819218LLU;
	uint32_t x528 = 1025U;

	t64 = (x525<<((x526<x527)/x528));

	if (t64 != 949U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x529 = 18600695U;
	uint16_t x530 = UINT16_MAX;
	uint64_t x532 = UINT64_MAX;

	t65 = (x529<<((x530<x531)/x532));

	if (t65 != 18600695U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x533 = 29;
	int32_t x534 = -1;
	int16_t x535 = INT16_MIN;
	static int8_t x536 = -22;

	t66 = (x533<<((x534<x535)/x536));

	if (t66 != 29) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x550 = -12;
	int32_t x551 = INT32_MAX;
	uint8_t x552 = 8U;
	int32_t t67 = -970533;

	t67 = (x549<<((x550<x551)/x552));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x597 = UINT32_MAX;
	int8_t x599 = INT8_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = (x597<<((x598<x599)/x600));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x605 = 3;
	static int16_t x608 = INT16_MAX;

	t69 = (x605<<((x606<x607)/x608));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x626 = INT64_MIN;
	uint16_t x627 = UINT16_MAX;
	uint32_t x628 = 119702U;
	int32_t t70 = -547756363;

	t70 = (x625<<((x626<x627)/x628));

	if (t70 != 201) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x645 = UINT16_MAX;
	int32_t x646 = INT32_MIN;
	volatile int64_t x647 = 989256864577397LL;
	int64_t x648 = INT64_MIN;

	t71 = (x645<<((x646<x647)/x648));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x649 = INT16_MAX;
	volatile int16_t x652 = 57;

	t72 = (x649<<((x650<x651)/x652));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x657 = UINT64_MAX;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (x657<<((x658<x659)/x660));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x661 = 1U;
	int8_t x663 = -1;
	volatile int64_t x664 = INT64_MIN;
	int32_t t74 = 96;

	t74 = (x661<<((x662<x663)/x664));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x665 = 16425883087127509LL;
	int8_t x666 = INT8_MAX;
	volatile int8_t x667 = 0;
	volatile int64_t x668 = INT64_MAX;
	int64_t t75 = 22571064LL;

	t75 = (x665<<((x666<x667)/x668));

	if (t75 != 16425883087127509LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x669 = 24U;
	int8_t x670 = INT8_MAX;
	int8_t x671 = INT8_MIN;
	uint64_t x672 = 768943016248LLU;
	volatile int32_t t76 = -745022979;

	t76 = (x669<<((x670<x671)/x672));

	if (t76 != 24) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x677 = UINT64_MAX;
	uint32_t x678 = 78U;
	int64_t x679 = 18900062151423902LL;
	uint64_t t77 = UINT64_MAX;

	t77 = (x677<<((x678<x679)/x680));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x682 = -871014303;
	int32_t t78 = -15832;

	t78 = (x681<<((x682<x683)/x684));

	if (t78 != 5731243) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x685 = 19732744001112506LLU;
	int32_t x686 = INT32_MAX;
	int16_t x687 = INT16_MIN;
	int64_t x688 = -1LL;
	volatile uint64_t t79 = 641258LLU;

	t79 = (x685<<((x686<x687)/x688));

	if (t79 != 19732744001112506LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x693 = 1;
	int64_t x694 = -164915469109LL;
	volatile uint32_t x695 = 968424478U;
	volatile int64_t x696 = INT64_MIN;
	static volatile int32_t t80 = 1;

	t80 = (x693<<((x694<x695)/x696));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x697 = 47;
	static int32_t x698 = INT32_MAX;
	int16_t x699 = 479;
	uint64_t x700 = 1195524604494LLU;

	t81 = (x697<<((x698<x699)/x700));

	if (t81 != 47) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x701 = UINT32_MAX;
	int16_t x702 = 5;
	volatile int32_t x703 = INT32_MAX;
	static int32_t x704 = INT32_MIN;
	static volatile uint32_t t82 = UINT32_MAX;

	t82 = (x701<<((x702<x703)/x704));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x705 = 14254129U;
	int16_t x707 = INT16_MIN;
	int32_t x708 = 15263;
	static uint32_t t83 = 194653U;

	t83 = (x705<<((x706<x707)/x708));

	if (t83 != 14254129U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x714 = INT32_MAX;
	uint16_t x715 = 6U;
	static int32_t x716 = INT32_MIN;
	volatile int32_t t84 = -1235762;

	t84 = (x713<<((x714<x715)/x716));

	if (t84 != 52) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x727 = -1;
	static int32_t x728 = 1379;

	t85 = (x725<<((x726<x727)/x728));

	if (t85 != 568) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x730 = INT16_MAX;
	int16_t x731 = -11982;
	volatile uint8_t x732 = UINT8_MAX;

	t86 = (x729<<((x730<x731)/x732));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x753 = INT32_MAX;
	int32_t x755 = -1;
	int64_t x756 = -1350016171733128LL;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x753<<((x754<x755)/x756));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x777 = 3U;
	int16_t x779 = -1;
	int64_t x780 = INT64_MIN;
	static int32_t t88 = -71251605;

	t88 = (x777<<((x778<x779)/x780));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x781 = 62173809992031LLU;
	int8_t x783 = INT8_MAX;
	static volatile int8_t x784 = INT8_MIN;
	static volatile uint64_t t89 = 102238LLU;

	t89 = (x781<<((x782<x783)/x784));

	if (t89 != 62173809992031LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x785 = 5U;
	int64_t x786 = INT64_MIN;
	int64_t x787 = -1LL;
	volatile int64_t x788 = -130201739LL;
	int32_t t90 = 226553;

	t90 = (x785<<((x786<x787)/x788));

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x814 = 248589333U;
	volatile int32_t x816 = INT32_MIN;

	t91 = (x813<<((x814<x815)/x816));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x826 = -1;
	uint8_t x827 = 54U;
	uint64_t x828 = 6LLU;
	volatile uint32_t t92 = 570836U;

	t92 = (x825<<((x826<x827)/x828));

	if (t92 != 120465325U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x837 = 117162619317LLU;
	int16_t x838 = 11;
	volatile uint64_t x839 = UINT64_MAX;
	static int64_t x840 = INT64_MAX;
	volatile uint64_t t93 = 45622307LLU;

	t93 = (x837<<((x838<x839)/x840));

	if (t93 != 117162619317LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x841 = UINT32_MAX;
	int16_t x842 = INT16_MIN;
	volatile int8_t x843 = -9;
	int8_t x844 = INT8_MIN;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x841<<((x842<x843)/x844));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x858 = -1;
	uint64_t x859 = UINT64_MAX;
	static int32_t t95 = 1;

	t95 = (x857<<((x858<x859)/x860));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x861 = 5;
	int8_t x862 = INT8_MIN;
	uint8_t x864 = 120U;
	int32_t t96 = 1290;

	t96 = (x861<<((x862<x863)/x864));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x865 = 47895U;
	static int32_t x866 = INT32_MAX;
	int32_t x867 = INT32_MAX;

	t97 = (x865<<((x866<x867)/x868));

	if (t97 != 47895U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x869 = UINT8_MAX;
	uint8_t x870 = 67U;
	uint16_t x871 = 81U;

	t98 = (x869<<((x870<x871)/x872));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x874 = -1609015890689808962LL;
	uint16_t x875 = UINT16_MAX;
	int32_t x876 = INT32_MIN;
	int32_t t99 = 20484373;

	t99 = (x873<<((x874<x875)/x876));

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

