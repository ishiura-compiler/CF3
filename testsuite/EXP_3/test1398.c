#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MIN;
uint32_t x5 = UINT32_MAX;
int16_t x6 = -3682;
uint32_t x23 = 945U;
int32_t x48 = INT32_MAX;
int8_t x54 = INT8_MAX;
int64_t x62 = INT64_MIN;
volatile uint16_t x63 = UINT16_MAX;
static volatile uint64_t t11 = 6LLU;
uint32_t t13 = 303U;
int8_t x87 = INT8_MIN;
static uint32_t x89 = 27582U;
int64_t x100 = -277812754LL;
uint16_t x105 = 3U;
uint64_t x118 = 14689675LLU;
int8_t x120 = -1;
uint32_t x134 = UINT32_MAX;
uint16_t x136 = UINT16_MAX;
volatile uint32_t t24 = 1758564U;
volatile uint8_t x139 = 0U;
volatile uint64_t t25 = 2LLU;
int16_t x143 = 1;
int8_t x154 = INT8_MIN;
volatile uint8_t x182 = 1U;
int8_t x184 = INT8_MIN;
int32_t t34 = 144842202;
static volatile int8_t x193 = 1;
uint64_t t36 = 1375LLU;
volatile int64_t x203 = INT64_MIN;
int64_t t37 = 46993091387LL;
uint64_t t38 = 95498LLU;
int64_t x209 = INT64_MIN;
static uint64_t t39 = 56612631LLU;
uint32_t x214 = 58394U;
static uint8_t x222 = UINT8_MAX;
int32_t t41 = 28;
static volatile int8_t x225 = -1;
volatile int64_t t42 = 760142LL;
uint64_t x257 = 57LLU;
static int8_t x261 = INT8_MIN;
volatile int32_t x262 = INT32_MIN;
int16_t x263 = -1;
int8_t x268 = 0;
int32_t x275 = INT32_MAX;
int8_t x285 = INT8_MIN;
int8_t x290 = 29;
volatile int32_t x301 = INT32_MIN;
uint64_t x305 = 2025329669530982037LLU;
int32_t x308 = -1;
uint64_t t59 = 3525882997507LLU;
static uint64_t t60 = 78745218144549473LLU;
volatile int8_t x335 = INT8_MIN;
uint64_t x349 = 431073LLU;
uint64_t t65 = 8450306658309LLU;
uint64_t x354 = 15681823064281091LLU;
uint32_t x372 = 88875U;
static volatile int32_t t69 = -10623061;
volatile uint64_t x376 = UINT64_MAX;
uint64_t x385 = 13050556LLU;
int32_t x388 = INT32_MIN;
volatile uint64_t x394 = 459362341782LLU;
int64_t x397 = -1LL;
uint64_t x399 = 1LLU;
uint16_t x401 = UINT16_MAX;
int32_t x405 = -1;
uint32_t x406 = 896389U;
uint16_t x412 = UINT16_MAX;
int32_t x413 = INT32_MIN;
static int8_t x417 = INT8_MIN;
volatile int32_t x418 = -76;
int32_t x419 = INT32_MAX;
static volatile int16_t x430 = INT16_MAX;
int32_t x433 = -1;
volatile int32_t t82 = -285;
static uint64_t x437 = UINT64_MAX;
int8_t x438 = -3;
int16_t x439 = INT16_MIN;
volatile int32_t t84 = 7;
int8_t x455 = INT8_MIN;
int32_t t87 = -1547;
volatile int8_t x469 = INT8_MIN;
int16_t x473 = INT16_MIN;
int64_t x474 = INT64_MAX;
uint16_t x476 = UINT16_MAX;
volatile int64_t t91 = 4561177819095845042LL;
volatile int8_t x495 = 0;
static int32_t x496 = -1;
static int32_t x497 = -1;
uint32_t x502 = 1817698U;
uint32_t x505 = 1U;
static uint8_t x506 = 1U;
int16_t x508 = 23;
static int32_t x518 = INT32_MAX;
int32_t x521 = -1;


void f0(void) {
	int16_t x1 = -1101;
	int64_t x2 = INT64_MIN;
	volatile uint64_t x3 = 22LLU;
	volatile int64_t t0 = -4975632520482LL;

	t0 = ((x1/x2)>>(x3<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x7 = 795664LLU;
	int32_t x8 = INT32_MIN;
	uint32_t t1 = 26633558U;

	t1 = ((x5/x6)>>(x7<x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1670365074U;
	volatile int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	volatile int64_t x12 = -21LL;
	volatile uint32_t t2 = 7U;

	t2 = ((x9/x10)>>(x11<x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = UINT16_MAX;
	static int32_t x22 = 597;
	int32_t x24 = -1;
	volatile int32_t t3 = 31;

	t3 = ((x21/x22)>>(x23<x24));

	if (t3 != 54) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 1U;
	int32_t x34 = INT32_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t4 = 19;

	t4 = ((x33/x34)>>(x35<x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x45 = 569U;
	uint8_t x46 = 60U;
	int16_t x47 = 10745;
	uint32_t t5 = 436U;

	t5 = ((x45/x46)>>(x47<x48));

	if (t5 != 4U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x49 = UINT16_MAX;
	int16_t x50 = 28;
	static volatile uint8_t x51 = 118U;
	volatile int8_t x52 = -26;
	int32_t t6 = -6663072;

	t6 = ((x49/x50)>>(x51<x52));

	if (t6 != 2340) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x53 = -1;
	uint16_t x55 = UINT16_MAX;
	volatile int64_t x56 = 1668650808LL;
	volatile int32_t t7 = 1;

	t7 = ((x53/x54)>>(x55<x56));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = 4317470470995LLU;
	static int8_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = 8914744820756LL;
	uint64_t t8 = 483608574174LLU;

	t8 = ((x57/x58)>>(x59<x60));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x61 = INT64_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int64_t t9 = -28472183LL;

	t9 = ((x61/x62)>>(x63<x64));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = -1;
	int16_t x66 = -3483;
	static int32_t x67 = -1;
	static int16_t x68 = -1;
	volatile int32_t t10 = 15043032;

	t10 = ((x65/x66)>>(x67<x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x73 = 1290550280822502LLU;
	static int16_t x74 = INT16_MAX;
	volatile int32_t x75 = INT32_MAX;
	int16_t x76 = -1;

	t11 = ((x73/x74)>>(x75<x76));

	if (t11 != 39385670974LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x77 = 1075142927426734LLU;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = -11;
	uint16_t x80 = 130U;
	static uint64_t t12 = 6055606LLU;

	t12 = ((x77/x78)>>(x79<x80));

	if (t12 != 8202814735LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MIN;
	static int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MAX;

	t13 = ((x81/x82)>>(x83<x84));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = 1418;
	int16_t x86 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t14 = 6041233;

	t14 = ((x85/x86)>>(x87<x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = -340;
	volatile uint32_t t15 = 604426U;

	t15 = ((x89/x90)>>(x91<x92));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = INT64_MAX;
	int64_t x94 = INT64_MIN;
	int16_t x95 = 15661;
	int32_t x96 = -1070;
	volatile int64_t t16 = 954928619LL;

	t16 = ((x93/x94)>>(x95<x96));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = 2;
	uint64_t x98 = 1034415313687623LLU;
	int64_t x99 = INT64_MAX;
	uint64_t t17 = 542390641907898897LLU;

	t17 = ((x97/x98)>>(x99<x100));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x106 = INT64_MAX;
	volatile int16_t x107 = 299;
	uint64_t x108 = 71311829937865LLU;
	static volatile int64_t t18 = -4098247291975437LL;

	t18 = ((x105/x106)>>(x107<x108));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = INT8_MAX;
	int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t19 = 23660816;

	t19 = ((x113/x114)>>(x115<x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x119 = 825U;
	uint64_t t20 = 26LLU;

	t20 = ((x117/x118)>>(x119<x120));

	if (t20 != 1255762572943LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MIN;
	static volatile int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MIN;
	volatile int32_t x124 = INT32_MIN;
	int32_t t21 = 434757882;

	t21 = ((x121/x122)>>(x123<x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = 33704548024LL;
	int16_t x126 = INT16_MAX;
	int32_t x127 = 40;
	int16_t x128 = INT16_MIN;
	static int64_t t22 = 14713946232LL;

	t22 = ((x125/x126)>>(x127<x128));

	if (t22 != 1028612LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 0U;
	int64_t x130 = -1LL;
	int32_t x131 = -38482;
	volatile uint32_t x132 = 2083234U;
	static volatile int64_t t23 = 9826810755LL;

	t23 = ((x129/x130)>>(x131<x132));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = 1U;
	uint32_t x135 = UINT32_MAX;

	t24 = ((x133/x134)>>(x135<x136));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x137 = 1LLU;
	uint8_t x138 = UINT8_MAX;
	int8_t x140 = INT8_MAX;

	t25 = ((x137/x138)>>(x139<x140));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x141 = 3U;
	uint64_t x142 = 3496248155LLU;
	static uint16_t x144 = 62U;
	static volatile uint64_t t26 = 11297348955128650LLU;

	t26 = ((x141/x142)>>(x143<x144));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = -107790880;
	static uint64_t x146 = 20934974641107LLU;
	int8_t x147 = INT8_MAX;
	volatile int16_t x148 = INT16_MIN;
	uint64_t t27 = 269284728187831LLU;

	t27 = ((x145/x146)>>(x147<x148));

	if (t27 != 881144LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x153 = INT8_MIN;
	int8_t x155 = 6;
	static volatile int16_t x156 = INT16_MAX;
	volatile int32_t t28 = -32027;

	t28 = ((x153/x154)>>(x155<x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	volatile uint32_t x159 = 502674U;
	uint8_t x160 = 3U;
	volatile int64_t t29 = 25499273809108240LL;

	t29 = ((x157/x158)>>(x159<x160));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x170 = INT64_MAX;
	static uint64_t x171 = 16798756LLU;
	int8_t x172 = 11;
	volatile int64_t t30 = -1247LL;

	t30 = ((x169/x170)>>(x171<x172));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 0LLU;
	volatile int64_t t31 = 1012661738245872049LL;

	t31 = ((x173/x174)>>(x175<x176));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = 125371LL;
	volatile int32_t x178 = 261;
	int16_t x179 = INT16_MIN;
	volatile int8_t x180 = 15;
	volatile int64_t t32 = 6683707LL;

	t32 = ((x177/x178)>>(x179<x180));

	if (t32 != 240LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x181 = 488456223U;
	volatile uint16_t x183 = 355U;
	uint32_t t33 = 1001U;

	t33 = ((x181/x182)>>(x183<x184));

	if (t33 != 488456223U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	static int32_t x191 = 195282;
	static int32_t x192 = INT32_MAX;

	t34 = ((x189/x190)>>(x191<x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x194 = 3U;
	int32_t x195 = -23591962;
	int16_t x196 = INT16_MIN;
	static int32_t t35 = 219645;

	t35 = ((x193/x194)>>(x195<x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = 3429216617LLU;
	int64_t x199 = INT64_MIN;
	int32_t x200 = -1;

	t36 = ((x197/x198)>>(x199<x200));

	if (t36 != 2689644040LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	volatile uint16_t x204 = UINT16_MAX;

	t37 = ((x201/x202)>>(x203<x204));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 81735330584588237LLU;
	int8_t x206 = INT8_MIN;
	int16_t x207 = 41;
	uint64_t x208 = UINT64_MAX;

	t38 = ((x205/x206)>>(x207<x208));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x210 = UINT64_MAX;
	static int16_t x211 = 2;
	uint64_t x212 = 62LLU;

	t39 = ((x209/x210)>>(x211<x212));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x213 = 219LLU;
	int8_t x215 = INT8_MIN;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x213/x214)>>(x215<x216));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x223 = -1;
	static volatile uint16_t x224 = 2261U;

	t41 = ((x221/x222)>>(x223<x224));

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x226 = -532629290827595557LL;
	static int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;

	t42 = ((x225/x226)>>(x227<x228));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t43 = -30940;

	t43 = ((x233/x234)>>(x235<x236));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x237 = INT8_MIN;
	int8_t x238 = -1;
	int32_t x239 = INT32_MIN;
	static uint64_t x240 = 1040200415197052LLU;
	volatile int32_t t44 = 1920941;

	t44 = ((x237/x238)>>(x239<x240));

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x241 = 22U;
	volatile int16_t x242 = INT16_MIN;
	static int16_t x243 = INT16_MIN;
	int32_t x244 = -160533523;
	uint32_t t45 = 34887U;

	t45 = ((x241/x242)>>(x243<x244));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = INT8_MIN;
	static int32_t x246 = INT32_MIN;
	volatile int8_t x247 = INT8_MIN;
	static uint32_t x248 = UINT32_MAX;
	volatile int32_t t46 = -229;

	t46 = ((x245/x246)>>(x247<x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = -1;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = 7U;
	volatile int32_t x252 = INT32_MIN;
	int32_t t47 = 94506087;

	t47 = ((x249/x250)>>(x251<x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x253 = -6686;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t48 = 48807254;

	t48 = ((x253/x254)>>(x255<x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x258 = INT8_MIN;
	int8_t x259 = 10;
	volatile int64_t x260 = INT64_MIN;
	uint64_t t49 = 112882594597LLU;

	t49 = ((x257/x258)>>(x259<x260));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x264 = INT32_MIN;
	int32_t t50 = -5;

	t50 = ((x261/x262)>>(x263<x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = 27U;
	uint64_t x266 = 10LLU;
	static volatile uint16_t x267 = UINT16_MAX;
	uint64_t t51 = 470847013378229LLU;

	t51 = ((x265/x266)>>(x267<x268));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int64_t x276 = -7735549271055LL;
	static int32_t t52 = -33;

	t52 = ((x273/x274)>>(x275<x276));

	if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x281 = 31U;
	uint16_t x282 = UINT16_MAX;
	static uint16_t x283 = 1U;
	int64_t x284 = -1LL;
	volatile int32_t t53 = 0;

	t53 = ((x281/x282)>>(x283<x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x286 = INT64_MAX;
	int8_t x287 = -1;
	int16_t x288 = 127;
	static volatile int64_t t54 = -185154LL;

	t54 = ((x285/x286)>>(x287<x288));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x289 = UINT32_MAX;
	static uint16_t x291 = 6306U;
	int16_t x292 = INT16_MIN;
	volatile uint32_t t55 = 294492922U;

	t55 = ((x289/x290)>>(x291<x292));

	if (t55 != 148102320U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x293 = -1;
	volatile int64_t x294 = -1LL;
	int8_t x295 = INT8_MAX;
	static int16_t x296 = 14;
	int64_t t56 = -427147645LL;

	t56 = ((x293/x294)>>(x295<x296));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x302 = INT16_MIN;
	static uint16_t x303 = 1U;
	static uint16_t x304 = 0U;
	int32_t t57 = -65401753;

	t57 = ((x301/x302)>>(x303<x304));

	if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x306 = 261;
	uint32_t x307 = 1239U;
	static volatile uint64_t t58 = 104073353064309LLU;

	t58 = ((x305/x306)>>(x307<x308));

	if (t58 != 3879941895653222LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x313 = 1305;
	uint64_t x314 = 46LLU;
	int16_t x315 = -1;
	int16_t x316 = INT16_MAX;

	t59 = ((x313/x314)>>(x315<x316));

	if (t59 != 14LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x325 = 3743069969688455LLU;
	int8_t x326 = -1;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;

	t60 = ((x325/x326)>>(x327<x328));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = INT16_MAX;
	volatile uint64_t x334 = 1462441701584832LLU;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t61 = 2977465LLU;

	t61 = ((x333/x334)>>(x335<x336));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x337 = INT32_MAX;
	volatile uint64_t x338 = 20LLU;
	static uint16_t x339 = 25U;
	static int32_t x340 = INT32_MAX;
	uint64_t t62 = 191845869283LLU;

	t62 = ((x337/x338)>>(x339<x340));

	if (t62 != 53687091LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x341 = INT64_MAX;
	uint32_t x342 = UINT32_MAX;
	static uint32_t x343 = 3U;
	uint8_t x344 = 2U;
	static volatile int64_t t63 = 4253671454460081LL;

	t63 = ((x341/x342)>>(x343<x344));

	if (t63 != 2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x345 = 1U;
	volatile int16_t x346 = 4;
	uint16_t x347 = 30695U;
	int32_t x348 = -1;
	volatile int32_t t64 = 121;

	t64 = ((x345/x346)>>(x347<x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x350 = 10U;
	uint16_t x351 = 42U;
	static int16_t x352 = INT16_MAX;

	t65 = ((x349/x350)>>(x351<x352));

	if (t65 != 21553LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x353 = 2403398U;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = INT8_MAX;
	static volatile uint64_t t66 = 3LLU;

	t66 = ((x353/x354)>>(x355<x356));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x361 = 84083199U;
	int32_t x362 = INT32_MIN;
	uint8_t x363 = 2U;
	uint8_t x364 = 73U;
	uint32_t t67 = 0U;

	t67 = ((x361/x362)>>(x363<x364));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x365 = -3;
	int16_t x366 = INT16_MAX;
	int64_t x367 = -1LL;
	int8_t x368 = 1;
	volatile int32_t t68 = -11189;

	t68 = ((x365/x366)>>(x367<x368));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x369 = 756;
	uint8_t x370 = 67U;
	int64_t x371 = INT64_MAX;

	t69 = ((x369/x370)>>(x371<x372));

	if (t69 != 11) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x373 = 48280819607466LLU;
	int8_t x374 = INT8_MIN;
	static int32_t x375 = INT32_MIN;
	uint64_t t70 = 47823LLU;

	t70 = ((x373/x374)>>(x375<x376));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x386 = 4U;
	uint32_t x387 = UINT32_MAX;
	static volatile uint64_t t71 = 3LLU;

	t71 = ((x385/x386)>>(x387<x388));

	if (t71 != 3262639LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MIN;
	static int16_t x391 = INT16_MIN;
	int16_t x392 = -56;
	volatile uint32_t t72 = 1680375906U;

	t72 = ((x389/x390)>>(x391<x392));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x393 = INT64_MAX;
	volatile int8_t x395 = 61;
	int16_t x396 = INT16_MAX;
	uint64_t t73 = 223262LLU;

	t73 = ((x393/x394)>>(x395<x396));

	if (t73 != 10039321LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x398 = -3;
	int32_t x400 = -1;
	int64_t t74 = -115LL;

	t74 = ((x397/x398)>>(x399<x400));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x402 = INT16_MAX;
	volatile uint64_t x403 = 808073733LLU;
	int32_t x404 = INT32_MIN;
	static volatile int32_t t75 = 7560000;

	t75 = ((x401/x402)>>(x403<x404));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	uint32_t t76 = 5857272U;

	t76 = ((x405/x406)>>(x407<x408));

	if (t76 != 4791U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x409 = -1;
	uint16_t x410 = 4U;
	static uint32_t x411 = 2U;
	volatile int32_t t77 = 298;

	t77 = ((x409/x410)>>(x411<x412));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x414 = INT64_MIN;
	int16_t x415 = 0;
	int16_t x416 = INT16_MIN;
	volatile int64_t t78 = -83588880580LL;

	t78 = ((x413/x414)>>(x415<x416));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x420 = 1U;
	static int32_t t79 = -30664;

	t79 = ((x417/x418)>>(x419<x420));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x421 = -1;
	uint64_t x422 = 60895793712LLU;
	volatile int64_t x423 = INT64_MAX;
	static int16_t x424 = -3;
	uint64_t t80 = 63302359055050LLU;

	t80 = ((x421/x422)>>(x423<x424));

	if (t80 != 302923124LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x429 = 1;
	volatile int8_t x431 = INT8_MAX;
	int16_t x432 = -8111;
	int32_t t81 = 7627013;

	t81 = ((x429/x430)>>(x431<x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x434 = -1;
	static volatile int32_t x435 = INT32_MIN;
	int16_t x436 = INT16_MAX;

	t82 = ((x433/x434)>>(x435<x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x440 = -1LL;
	volatile uint64_t t83 = 28LLU;

	t83 = ((x437/x438)>>(x439<x440));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x441 = INT8_MAX;
	int16_t x442 = INT16_MAX;
	int32_t x443 = -1518330;
	uint64_t x444 = 1569400221595LLU;

	t84 = ((x441/x442)>>(x443<x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x449 = -11LL;
	int32_t x450 = INT32_MIN;
	volatile int8_t x451 = -1;
	int8_t x452 = 0;
	static int64_t t85 = 1159112786469LL;

	t85 = ((x449/x450)>>(x451<x452));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x453 = INT8_MIN;
	uint16_t x454 = 19788U;
	volatile uint8_t x456 = UINT8_MAX;
	volatile int32_t t86 = 542111;

	t86 = ((x453/x454)>>(x455<x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x457 = INT16_MAX;
	int16_t x458 = INT16_MAX;
	static int8_t x459 = 1;
	volatile uint32_t x460 = 73287879U;

	t87 = ((x457/x458)>>(x459<x460));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x461 = -1;
	static volatile int16_t x462 = INT16_MIN;
	int32_t x463 = INT32_MAX;
	int64_t x464 = 1LL;
	static int32_t t88 = 2;

	t88 = ((x461/x462)>>(x463<x464));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x465 = 2022482204U;
	volatile int16_t x466 = INT16_MIN;
	int64_t x467 = -1LL;
	uint64_t x468 = 5292217884716051LLU;
	uint32_t t89 = 11165U;

	t89 = ((x465/x466)>>(x467<x468));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x470 = -20;
	static int32_t x471 = INT32_MIN;
	int32_t x472 = -1;
	volatile int32_t t90 = -437042;

	t90 = ((x469/x470)>>(x471<x472));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x475 = -122;

	t91 = ((x473/x474)>>(x475<x476));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x477 = -342;
	int64_t x478 = 21702802590707LL;
	volatile int16_t x479 = INT16_MAX;
	int16_t x480 = -1;
	volatile int64_t t92 = -138999335839600LL;

	t92 = ((x477/x478)>>(x479<x480));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x481 = INT16_MIN;
	static int64_t x482 = -65235LL;
	int32_t x483 = 2812910;
	volatile int16_t x484 = 1750;
	volatile int64_t t93 = 57901031LL;

	t93 = ((x481/x482)>>(x483<x484));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x493 = 244712080U;
	static volatile uint8_t x494 = UINT8_MAX;
	static volatile uint32_t t94 = 5U;

	t94 = ((x493/x494)>>(x495<x496));

	if (t94 != 959655U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x498 = 29LL;
	static int32_t x499 = 2441;
	static uint16_t x500 = 4759U;
	volatile int64_t t95 = -1162732788LL;

	t95 = ((x497/x498)>>(x499<x500));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x501 = INT32_MIN;
	uint32_t x503 = 341U;
	int8_t x504 = INT8_MIN;
	volatile uint32_t t96 = 421846397U;

	t96 = ((x501/x502)>>(x503<x504));

	if (t96 != 590U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x507 = -1LL;
	volatile uint32_t t97 = 25960U;

	t97 = ((x505/x506)>>(x507<x508));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = -1LL;
	uint32_t x519 = 166252U;
	uint8_t x520 = UINT8_MAX;
	static volatile int64_t t98 = 100LL;

	t98 = ((x517/x518)>>(x519<x520));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x522 = -6113028908LL;
	static volatile int16_t x523 = 3720;
	volatile int64_t x524 = -670LL;
	volatile int64_t t99 = 105290064620678LL;

	t99 = ((x521/x522)>>(x523<x524));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

