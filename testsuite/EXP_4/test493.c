#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
static volatile uint16_t x22 = UINT16_MAX;
int64_t x28 = -1LL;
volatile int32_t x37 = -117;
uint64_t t5 = UINT64_MAX;
volatile int16_t x62 = -1;
int64_t t9 = 0LL;
uint8_t x65 = 4U;
static int64_t x67 = INT64_MIN;
uint8_t x68 = 1U;
int16_t x75 = INT16_MIN;
uint32_t x84 = 0U;
int64_t x86 = -7484519LL;
uint32_t x87 = 70181U;
static uint32_t x88 = 4U;
int64_t t14 = 828207339081124010LL;
int8_t x91 = INT8_MIN;
int32_t t15 = 118;
uint32_t x95 = 1998U;
uint32_t x99 = UINT32_MAX;
int32_t x100 = INT32_MIN;
int64_t t17 = -8766602703567LL;
int8_t x102 = -3;
uint32_t x103 = 5U;
int32_t x117 = INT32_MAX;
volatile uint8_t x128 = UINT8_MAX;
uint32_t x130 = 935893202U;
volatile uint32_t x131 = 925U;
int16_t x137 = 14;
volatile uint64_t t27 = UINT64_MAX;
uint32_t x149 = 3U;
uint32_t x150 = UINT32_MAX;
uint32_t x151 = UINT32_MAX;
int32_t x158 = INT32_MIN;
static int32_t x160 = -54;
volatile uint32_t t29 = 628034302U;
static volatile int16_t x166 = -1;
uint64_t x167 = UINT64_MAX;
volatile int32_t x177 = INT32_MIN;
int64_t x179 = INT64_MIN;
uint32_t x190 = UINT32_MAX;
uint32_t x192 = 1103U;
uint8_t x195 = 3U;
uint16_t x206 = 525U;
int16_t x212 = 1195;
static int8_t x220 = 1;
uint32_t x222 = UINT32_MAX;
static volatile uint32_t t45 = 39U;
int64_t x244 = 81075365LL;
volatile int64_t t46 = 89LL;
static volatile int8_t x252 = INT8_MIN;
int16_t x259 = INT16_MAX;
uint16_t x260 = 4U;
volatile int32_t t49 = 25;
int16_t x261 = INT16_MIN;
int16_t x263 = 3;
static volatile int16_t x270 = 1211;
int64_t x272 = -1LL;
int64_t x278 = INT64_MIN;
static int8_t x279 = -1;
int64_t t54 = -6LL;
int16_t x289 = -32;
uint64_t x292 = UINT64_MAX;
int64_t x294 = -566824045987899402LL;
volatile uint32_t x297 = UINT32_MAX;
int16_t x298 = -1578;
uint32_t t58 = UINT32_MAX;
volatile uint16_t x304 = UINT16_MAX;
volatile uint16_t x305 = 4555U;
int16_t x307 = -1;
int64_t x312 = -28281749LL;
static volatile uint32_t x316 = UINT32_MAX;
static int32_t x319 = -6;
volatile int8_t x325 = INT8_MAX;
static uint64_t x335 = 0LLU;
volatile uint64_t t66 = 1270962400323287LLU;
static uint64_t x337 = 1186710040568438LLU;
uint16_t x338 = 83U;
int32_t x339 = INT32_MIN;
uint32_t x340 = 203638707U;
volatile uint64_t x341 = 44655689482147LLU;
uint32_t x342 = UINT32_MAX;
int8_t x349 = 45;
int8_t x355 = INT8_MIN;
volatile uint16_t x356 = UINT16_MAX;
volatile int8_t x362 = 6;
uint64_t x368 = 727700LLU;
volatile int32_t t75 = 4;
uint16_t x385 = 2U;
static int32_t t77 = 3965149;
int64_t x394 = INT64_MAX;
uint32_t x396 = 11578U;
static volatile uint64_t x405 = UINT64_MAX;
int32_t x410 = 1014206667;
volatile int64_t t82 = 449971927001LL;
int64_t x427 = -1LL;
int8_t x453 = INT8_MIN;
static uint8_t x454 = 0U;
int32_t x463 = -1;
static int8_t x464 = -1;
volatile int32_t x476 = -1;
uint64_t t90 = 204561LLU;
int16_t x480 = -1;
uint64_t x481 = 14760604888113LLU;
volatile uint64_t t92 = 2944505656LLU;
int64_t x501 = INT64_MAX;
volatile int64_t t96 = 345774485LL;
static uint64_t x511 = 58992567LLU;
volatile int32_t x529 = INT32_MIN;
static int16_t x532 = INT16_MAX;


void f0(void) {
	int32_t x2 = -968;
	uint8_t x3 = 0U;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2|(x3*x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = 237642U;
	volatile uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 243727U;
	volatile int32_t x20 = INT32_MAX;
	static volatile uint32_t t1 = 1582130U;

	t1 = (x17|(x18|(x19*x20)));

	if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x21 = 32372539U;
	volatile int16_t x23 = -22;
	uint32_t x24 = 3773571U;
	uint32_t t2 = 449858278U;

	t2 = (x21|(x22|(x23*x24)));

	if (t2 != 4226678783U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x25 = INT16_MIN;
	volatile uint16_t x26 = 1520U;
	uint16_t x27 = 451U;
	static int64_t t3 = 190360789079LL;

	t3 = (x25|(x26|(x27*x28)));

	if (t3 != -3LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = 7443429348462568017LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x33|(x34|(x35*x36)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x38 = INT32_MAX;
	uint32_t x39 = 31460363U;
	uint64_t x40 = 176624LLU;

	t5 = (x37|(x38|(x39*x40)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = 0U;
	uint64_t t6 = UINT64_MAX;

	t6 = (x41|(x42|(x43*x44)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MIN;
	int8_t x46 = -1;
	volatile int32_t x47 = 227;
	uint16_t x48 = 1U;
	static int32_t t7 = 814;

	t7 = (x45|(x46|(x47*x48)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -23;
	int16_t x60 = -4882;
	volatile int64_t t8 = -23LL;

	t8 = (x57|(x58|(x59*x60)));

	if (t8 != -98LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = 1;
	volatile int64_t x63 = -1LL;
	volatile int8_t x64 = INT8_MAX;

	t9 = (x61|(x62|(x63*x64)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x66 = 234U;
	volatile int64_t t10 = 4LL;

	t10 = (x65|(x66|(x67*x68)));

	if (t10 != -9223372036854775570LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = -1;
	int16_t x70 = -1;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = UINT32_MAX;
	uint32_t t11 = UINT32_MAX;

	t11 = (x69|(x70|(x71*x72)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x73 = -1LL;
	int32_t x74 = INT32_MIN;
	uint32_t x76 = UINT32_MAX;
	int64_t t12 = -999783139LL;

	t12 = (x73|(x74|(x75*x76)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = -1;
	volatile int32_t x83 = -1;
	static volatile uint32_t t13 = UINT32_MAX;

	t13 = (x81|(x82|(x83*x84)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = -1;

	t14 = (x85|(x86|(x87*x88)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = 25;
	static int16_t x90 = 7;
	volatile int16_t x92 = INT16_MIN;

	t15 = (x89|(x90|(x91*x92)));

	if (t15 != 4194335) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = 9231LL;
	volatile int32_t x94 = 452405403;
	static int16_t x96 = -1;
	int64_t t16 = -381456799407217LL;

	t16 = (x93|(x94|(x95*x96)));

	if (t16 != 4294966463LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -827953537478872034LL;
	static int8_t x98 = INT8_MIN;

	t17 = (x97|(x98|(x99*x100)));

	if (t17 != -827953537278279778LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x101 = 2U;
	static int32_t x104 = INT32_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = (x101|(x102|(x103*x104)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x105 = 209558576029992LLU;
	volatile int64_t x106 = -1LL;
	int64_t x107 = -1LL;
	uint32_t x108 = 46856U;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x105|(x106|(x107*x108)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x113 = UINT16_MAX;
	static int64_t x114 = -16573965LL;
	static int64_t x115 = -1LL;
	static int16_t x116 = INT16_MIN;
	volatile int64_t t20 = -355643945LL;

	t20 = (x113|(x114|(x115*x116)));

	if (t20 != -16515073LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x118 = INT8_MAX;
	uint32_t x119 = 27108698U;
	uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t21 = UINT32_MAX;

	t21 = (x117|(x118|(x119*x120)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x121 = 1905980106LLU;
	int32_t x122 = 1;
	int16_t x123 = 62;
	uint64_t x124 = UINT64_MAX;
	uint64_t t22 = 283611279976280LLU;

	t22 = (x121|(x122|(x123*x124)));

	if (t22 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 6171846976LLU;
	int32_t x127 = 15376;
	static volatile uint64_t t23 = 718LLU;

	t23 = (x125|(x126|(x127*x128)));

	if (t23 != 6174014463LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x129 = 1U;
	volatile int32_t x132 = INT32_MIN;
	uint32_t t24 = 242U;

	t24 = (x129|(x130|(x131*x132)));

	if (t24 != 3083376851U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = UINT32_MAX;
	volatile int8_t x134 = -1;
	volatile int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	volatile int64_t t25 = -2LL;

	t25 = (x133|(x134|(x135*x136)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x138 = INT16_MIN;
	volatile int8_t x139 = -1;
	int16_t x140 = -1;
	static volatile int32_t t26 = -31454858;

	t26 = (x137|(x138|(x139*x140)));

	if (t26 != -32753) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 1U;
	static int8_t x146 = -1;
	volatile int8_t x147 = INT8_MIN;
	static volatile uint64_t x148 = 2984437764895603LLU;

	t27 = (x145|(x146|(x147*x148)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x152 = 350;
	uint32_t t28 = UINT32_MAX;

	t28 = (x149|(x150|(x151*x152)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = 760068111U;
	uint32_t x159 = 497U;

	t29 = (x157|(x158|(x159*x160)));

	if (t29 != 4294950703U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x165|(x166|(x167*x168)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = INT32_MAX;
	int64_t x170 = -13649718765950548LL;
	int32_t x171 = -1;
	volatile uint64_t x172 = 1909060399202718LLU;
	volatile uint64_t t31 = 40879LLU;

	t31 = (x169|(x170|(x171*x172)));

	if (t31 != 18446664631846961151LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x173 = 35U;
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	int16_t x176 = 1;
	static volatile int64_t t32 = 7934534770090323LL;

	t32 = (x173|(x174|(x175*x176)));

	if (t32 != -32733LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x178 = -13;
	static uint32_t x180 = 1U;
	static int64_t t33 = 1970686LL;

	t33 = (x177|(x178|(x179*x180)));

	if (t33 != -13LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x181 = -1;
	volatile uint16_t x182 = 2U;
	int64_t x183 = -14891LL;
	int16_t x184 = INT16_MIN;
	int64_t t34 = 115784345951LL;

	t34 = (x181|(x182|(x183*x184)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x189|(x190|(x191*x192)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x193 = INT64_MIN;
	uint64_t x194 = 5351LLU;
	int32_t x196 = -1;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x193|(x194|(x195*x196)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = -11819511;
	int32_t x198 = -1;
	volatile uint64_t x199 = 1021784LLU;
	static volatile int16_t x200 = INT16_MAX;
	static uint64_t t37 = UINT64_MAX;

	t37 = (x197|(x198|(x199*x200)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x205 = 922;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -1LL;
	volatile int64_t t38 = 1941614961298376LL;

	t38 = (x205|(x206|(x207*x208)));

	if (t38 != 33695LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x209 = UINT64_MAX;
	volatile int32_t x210 = -3;
	static int16_t x211 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = (x209|(x210|(x211*x212)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -1;
	static int64_t x214 = INT64_MIN;
	static uint64_t x215 = 35182664937310037LLU;
	uint16_t x216 = 4U;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = (x213|(x214|(x215*x216)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 14225360713LLU;
	static int16_t x219 = -6;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (x217|(x218|(x219*x220)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x221 = 5U;
	uint8_t x223 = 31U;
	int8_t x224 = INT8_MIN;
	uint32_t t42 = UINT32_MAX;

	t42 = (x221|(x222|(x223*x224)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x225 = 1490547264U;
	int64_t x226 = 371311LL;
	int16_t x227 = 0;
	volatile int32_t x228 = INT32_MIN;
	volatile int64_t t43 = -62LL;

	t43 = (x225|(x226|(x227*x228)));

	if (t43 != 1490549359LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = -1;
	static int8_t x234 = -8;
	static int32_t x235 = INT32_MIN;
	volatile uint32_t x236 = 1075858U;
	uint32_t t44 = UINT32_MAX;

	t44 = (x233|(x234|(x235*x236)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MIN;
	uint8_t x238 = 1U;
	uint32_t x239 = 114U;
	int32_t x240 = INT32_MAX;

	t45 = (x237|(x238|(x239*x240)));

	if (t45 != 4294967183U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MIN;
	uint8_t x243 = 60U;

	t46 = (x241|(x242|(x243*x244)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x245 = -3236;
	volatile int64_t x246 = INT64_MAX;
	static int64_t x247 = INT64_MIN;
	int16_t x248 = 0;
	int64_t t47 = 7407LL;

	t47 = (x245|(x246|(x247*x248)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x249 = 2089897U;
	int32_t x250 = INT32_MIN;
	static uint32_t x251 = 477042535U;
	static uint32_t t48 = 228371009U;

	t48 = (x249|(x250|(x251*x252)));

	if (t48 != 3363827625U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x257 = 21U;
	int16_t x258 = -1;

	t49 = (x257|(x258|(x259*x260)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x262 = INT16_MIN;
	int64_t x264 = -54491042065513742LL;
	volatile int64_t t50 = 3150550LL;

	t50 = (x261|(x262|(x263*x264)));

	if (t50 != -30506LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = -9;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = -1;
	uint32_t t51 = 64400U;

	t51 = (x265|(x266|(x267*x268)));

	if (t51 != 4294967287U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = INT16_MIN;
	int64_t x271 = -1LL;
	int64_t t52 = 933752111LL;

	t52 = (x269|(x270|(x271*x272)));

	if (t52 != -31557LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x273 = -1;
	static int32_t x274 = -1;
	int16_t x275 = INT16_MAX;
	uint8_t x276 = 78U;
	static int32_t t53 = 0;

	t53 = (x273|(x274|(x275*x276)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x277 = 11594U;
	int32_t x280 = -1;

	t54 = (x277|(x278|(x279*x280)));

	if (t54 != -9223372036854764213LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x285 = 9LLU;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = 9U;
	int8_t x288 = 7;
	volatile uint64_t t55 = 3263938992LLU;

	t55 = (x285|(x286|(x287*x288)));

	if (t55 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x290 = -10;
	static int64_t x291 = INT64_MAX;
	uint64_t t56 = 30225437LLU;

	t56 = (x289|(x290|(x291*x292)));

	if (t56 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x293 = INT16_MIN;
	uint64_t x295 = 6LLU;
	int8_t x296 = INT8_MAX;
	uint64_t t57 = 8973456962537323LLU;

	t57 = (x293|(x294|(x295*x296)));

	if (t57 != 18446744073709541374LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x299 = INT16_MIN;
	int32_t x300 = 20016;

	t58 = (x297|(x298|(x299*x300)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	static int64_t t59 = -1LL;

	t59 = (x301|(x302|(x303*x304)));

	if (t59 != -127LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x306 = INT32_MIN;
	volatile int8_t x308 = 28;
	volatile int32_t t60 = -7883;

	t60 = (x305|(x306|(x307*x308)));

	if (t60 != -17) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x309 = 84434LLU;
	uint16_t x310 = 54U;
	volatile uint64_t x311 = 8416LLU;
	uint64_t t61 = 5LLU;

	t61 = (x309|(x310|(x311*x312)));

	if (t61 != 18446743835690368502LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = 1756U;
	static int64_t t62 = 50429LL;

	t62 = (x313|(x314|(x315*x316)));

	if (t62 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x317 = UINT64_MAX;
	uint16_t x318 = UINT16_MAX;
	uint8_t x320 = UINT8_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (x317|(x318|(x319*x320)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x321 = 3U;
	int16_t x322 = INT16_MIN;
	volatile int8_t x323 = -1;
	int32_t x324 = INT32_MAX;
	volatile int32_t t64 = -420512492;

	t64 = (x321|(x322|(x323*x324)));

	if (t64 != -32765) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x326 = -4619;
	volatile int64_t x327 = INT64_MAX;
	int32_t x328 = -1;
	int64_t t65 = -1091LL;

	t65 = (x325|(x326|(x327*x328)));

	if (t65 != -4609LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = 51;
	uint32_t x336 = 2129617579U;

	t66 = (x333|(x334|(x335*x336)));

	if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t t67 = 263LLU;

	t67 = (x337|(x338|(x339*x340)));

	if (t67 != 1186712188052087LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x343 = -1;
	static uint32_t x344 = 38751U;
	uint64_t t68 = 98554LLU;

	t68 = (x341|(x342|(x343*x344)));

	if (t68 != 44659069943807LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x345 = INT64_MIN;
	int64_t x346 = 532260121548813LL;
	volatile int8_t x347 = INT8_MAX;
	int64_t x348 = -1LL;
	volatile int64_t t69 = 42526LL;

	t69 = (x345|(x346|(x347*x348)));

	if (t69 != -115LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x350 = INT8_MAX;
	static int32_t x351 = -1;
	static uint32_t x352 = 182144389U;
	volatile uint32_t t70 = 2479750U;

	t70 = (x349|(x350|(x351*x352)));

	if (t70 != 4112822911U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x353 = -1;
	uint8_t x354 = 5U;
	volatile int32_t t71 = 44520418;

	t71 = (x353|(x354|(x355*x356)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x361 = -21;
	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 64486U;
	uint64_t t72 = UINT64_MAX;

	t72 = (x361|(x362|(x363*x364)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = 2;
	int64_t x367 = INT64_MIN;
	static uint64_t t73 = 252015LLU;

	t73 = (x365|(x366|(x367*x368)));

	if (t73 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x369 = -1LL;
	int16_t x370 = 119;
	int64_t x371 = -904148580LL;
	static int64_t x372 = -1LL;
	volatile int64_t t74 = -107885285567779616LL;

	t74 = (x369|(x370|(x371*x372)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = 24;
	int16_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = 1736;

	t75 = (x377|(x378|(x379*x380)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 27686U;
	volatile uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 23231LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x381|(x382|(x383*x384)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x386 = INT16_MIN;
	static int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MAX;

	t77 = (x385|(x386|(x387*x388)));

	if (t77 != -16254) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int8_t x395 = INT8_MAX;
	static volatile uint64_t t78 = UINT64_MAX;

	t78 = (x393|(x394|(x395*x396)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x401 = 32U;
	int16_t x402 = INT16_MIN;
	int8_t x403 = -1;
	volatile int16_t x404 = 1;
	volatile int32_t t79 = 47;

	t79 = (x401|(x402|(x403*x404)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x406 = UINT64_MAX;
	volatile int32_t x407 = INT32_MIN;
	uint64_t x408 = 2830059892635LLU;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x405|(x406|(x407*x408)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x409 = 12132LLU;
	static uint8_t x411 = 8U;
	volatile int16_t x412 = 10945;
	volatile uint64_t t81 = 37137855882LLU;

	t81 = (x409|(x410|(x411*x412)));

	if (t81 != 1014235119LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x413 = 6585980856575LL;
	int64_t x414 = INT64_MIN;
	int32_t x415 = -1;
	uint16_t x416 = 29U;

	t82 = (x413|(x414|(x415*x416)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x425 = 499935364318074327LLU;
	uint32_t x426 = UINT32_MAX;
	int16_t x428 = -1;
	volatile uint64_t t83 = 9LLU;

	t83 = (x425|(x426|(x427*x428)));

	if (t83 != 499935365780471807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x437 = -240LL;
	int32_t x438 = -32317223;
	int16_t x439 = -4039;
	static uint16_t x440 = 82U;
	int64_t t84 = 13070329950331356LL;

	t84 = (x437|(x438|(x439*x440)));

	if (t84 != -37LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x441 = INT64_MIN;
	volatile uint8_t x442 = 3U;
	static volatile uint16_t x443 = 134U;
	int8_t x444 = 0;
	volatile int64_t t85 = -462421LL;

	t85 = (x441|(x442|(x443*x444)));

	if (t85 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x445 = 0U;
	int8_t x446 = INT8_MIN;
	static int8_t x447 = -1;
	int16_t x448 = -15;
	int32_t t86 = 120880399;

	t86 = (x445|(x446|(x447*x448)));

	if (t86 != -113) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x449 = UINT16_MAX;
	int64_t x450 = 27697444475LL;
	int8_t x451 = -1;
	int8_t x452 = 1;
	int64_t t87 = -240522858713LL;

	t87 = (x449|(x450|(x451*x452)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x455 = -1;
	static volatile uint16_t x456 = 12U;
	volatile int32_t t88 = -511767;

	t88 = (x453|(x454|(x455*x456)));

	if (t88 != -12) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x461 = 422LL;
	static uint8_t x462 = 4U;
	volatile int64_t t89 = 85049373036704LL;

	t89 = (x461|(x462|(x463*x464)));

	if (t89 != 423LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x473 = 217351583LLU;
	volatile uint16_t x474 = 2U;
	int8_t x475 = INT8_MIN;

	t90 = (x473|(x474|(x475*x476)));

	if (t90 != 217351583LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x477 = 4104455657042LLU;
	int16_t x478 = -115;
	static int16_t x479 = -4267;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x477|(x478|(x479*x480)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x482 = INT32_MAX;
	int8_t x483 = -26;
	static int32_t x484 = -1;

	t92 = (x481|(x482|(x483*x484)));

	if (t92 != 14761802596351LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x485 = -1;
	int32_t x486 = 1;
	static uint32_t x487 = 500235681U;
	uint8_t x488 = UINT8_MAX;
	uint32_t t93 = UINT32_MAX;

	t93 = (x485|(x486|(x487*x488)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x493 = 3U;
	static volatile int8_t x494 = -1;
	uint32_t x495 = 881064U;
	int64_t x496 = 0LL;
	int64_t t94 = -1145039010140183481LL;

	t94 = (x493|(x494|(x495*x496)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x497 = 1;
	int8_t x498 = 13;
	volatile int16_t x499 = -1;
	int16_t x500 = -1;
	volatile int32_t t95 = 1;

	t95 = (x497|(x498|(x499*x500)));

	if (t95 != 13) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x502 = 30U;
	static int16_t x503 = INT16_MIN;
	uint16_t x504 = 127U;

	t96 = (x501|(x502|(x503*x504)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x509 = 87U;
	static int16_t x510 = -302;
	static volatile uint8_t x512 = UINT8_MAX;
	uint64_t t97 = 835367822LLU;

	t97 = (x509|(x510|(x511*x512)));

	if (t97 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x530 = -1;
	int64_t x531 = -361732LL;
	int64_t t98 = -1206766814972LL;

	t98 = (x529|(x530|(x531*x532)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x533 = 57492107649314LLU;
	int16_t x534 = INT16_MIN;
	static uint32_t x535 = UINT32_MAX;
	uint64_t x536 = 6603834668558011LLU;
	static volatile uint64_t t99 = 27355546LLU;

	t99 = (x533|(x534|(x535*x536)));

	if (t99 != 18446744073709549927LLU) { NG(); } else { ; }
	
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

