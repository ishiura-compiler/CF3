#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int16_t x3 = 8644;
static uint32_t x4 = 8038U;
static int32_t t1 = -323754550;
volatile int32_t t3 = -852770;
int32_t t4 = 16392250;
int16_t x22 = INT16_MIN;
static int8_t x24 = -1;
uint64_t x30 = UINT64_MAX;
volatile int8_t x39 = -1;
static int64_t x47 = INT64_MAX;
volatile uint16_t x55 = 1U;
int32_t x56 = -72;
int8_t x59 = 19;
int8_t x64 = -1;
int64_t x65 = INT64_MAX;
int32_t t15 = 3919330;
int32_t t17 = -687670;
volatile int16_t x83 = INT16_MIN;
int32_t t18 = -2837110;
int16_t x91 = 1;
uint32_t x106 = 190U;
volatile int32_t t23 = -7954;
uint64_t x116 = 445LLU;
int32_t t24 = 184468;
int8_t x119 = 1;
uint32_t x129 = 2082891U;
int32_t x135 = 0;
volatile int32_t t29 = -130338;
static int32_t t32 = 82170;
static volatile uint8_t x151 = 29U;
volatile int32_t t36 = 106544;
int64_t x175 = -1LL;
int16_t x176 = 401;
static int32_t t39 = 55644;
int64_t x189 = -28872436LL;
int8_t x192 = INT8_MIN;
volatile uint16_t x194 = 55U;
volatile int32_t t42 = 15728;
int8_t x205 = INT8_MAX;
int64_t x207 = -1LL;
int32_t t46 = -160200;
uint8_t x216 = 1U;
int8_t x219 = INT8_MAX;
volatile int8_t x223 = -1;
int32_t t49 = -3445;
uint64_t x226 = 53783176LLU;
int16_t x227 = -1;
int32_t t50 = 7199;
volatile int8_t x232 = INT8_MIN;
int32_t x241 = INT32_MAX;
int16_t x245 = -94;
static int8_t x246 = INT8_MIN;
int32_t t56 = 6;
volatile int16_t x257 = 2013;
static volatile int8_t x258 = INT8_MIN;
static volatile int32_t t57 = -58;
int16_t x271 = INT16_MIN;
int64_t x273 = INT64_MAX;
static int16_t x277 = INT16_MIN;
uint32_t x283 = UINT32_MAX;
volatile int8_t x287 = -1;
int8_t x288 = -1;
int8_t x289 = INT8_MIN;
uint32_t x292 = UINT32_MAX;
volatile int64_t x296 = INT64_MIN;
static uint16_t x303 = 4U;
int64_t x320 = -1LL;
int32_t t69 = 766;
volatile int32_t x322 = -1;
volatile int32_t t71 = 248261;
int64_t x332 = 1090LL;
int32_t t72 = -7;
int16_t x341 = INT16_MIN;
int16_t x345 = -1;
int32_t x348 = 1039276;
static volatile int32_t t77 = -178539056;
volatile int64_t x357 = 40014886843584465LL;
uint8_t x360 = 3U;
volatile int64_t x361 = 4174381922347530191LL;
int8_t x371 = 5;
uint64_t x381 = 10187539854642LLU;
volatile int64_t x393 = -3880150159LL;
int32_t t86 = 487;
uint16_t x407 = UINT16_MAX;
int32_t x418 = 6111552;
volatile uint16_t x428 = 4U;
volatile uint64_t x436 = UINT64_MAX;
uint64_t x437 = 36LLU;
volatile int16_t x439 = -1;
volatile int32_t t94 = -608364;
uint32_t x442 = 24835579U;
int8_t x448 = 0;
volatile uint16_t x452 = UINT16_MAX;
int8_t x458 = INT8_MIN;


void f0(void) {
	int8_t x2 = 0;
	int32_t t0 = 158;

	t0 = (x1<(x2|(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 2666190072LL;
	int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	uint16_t x8 = 34U;

	t1 = (x5<(x6|(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 985621513638886LLU;
	int32_t x10 = 119390;
	uint16_t x11 = UINT16_MAX;
	static uint64_t x12 = 8118780964441210628LLU;
	volatile int32_t t2 = 1;

	t2 = (x9<(x10|(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int16_t x14 = INT16_MIN;
	static int64_t x15 = -71617LL;
	int8_t x16 = INT8_MAX;

	t3 = (x13<(x14|(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 4590019497550LL;
	int16_t x18 = INT16_MAX;
	int64_t x19 = INT64_MAX;
	static uint32_t x20 = UINT32_MAX;

	t4 = (x17<(x18|(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static uint32_t x23 = 1091821U;
	static int32_t t5 = -99;

	t5 = (x21<(x22|(x23-x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint8_t x26 = 55U;
	int64_t x27 = -121LL;
	static volatile int8_t x28 = 1;
	int32_t t6 = 0;

	t6 = (x25<(x26|(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -2153378764014LL;
	static uint64_t x31 = 2723643LLU;
	int16_t x32 = -1;
	volatile int32_t t7 = 29174;

	t7 = (x29<(x30|(x31-x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = 6U;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 2980;

	t8 = (x33<(x34|(x35-x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 18281U;
	volatile int16_t x38 = -1;
	int64_t x40 = -13076LL;
	int32_t t9 = 125737514;

	t9 = (x37<(x38|(x39-x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	uint16_t x46 = 48U;
	uint64_t x48 = 6650371679LLU;
	int32_t t10 = -494639;

	t10 = (x45<(x46|(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MAX;
	static int8_t x52 = -1;
	int32_t t11 = -1;

	t11 = (x49<(x50|(x51-x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -31313LL;
	static uint64_t x54 = 7982255829LLU;
	int32_t t12 = -14535;

	t12 = (x53<(x54|(x55-x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	volatile int32_t t13 = -174988013;

	t13 = (x57<(x58|(x59-x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	uint8_t x63 = 2U;
	int32_t t14 = 275;

	t14 = (x61<(x62|(x63-x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x66 = 25391U;
	int16_t x67 = INT16_MIN;
	static volatile uint8_t x68 = 1U;

	t15 = (x65<(x66|(x67-x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	int8_t x70 = INT8_MAX;
	int32_t x71 = 29486;
	static uint64_t x72 = 23412380279618642LLU;
	int32_t t16 = -119742;

	t16 = (x69<(x70|(x71-x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x74 = 121U;
	int16_t x75 = -1;
	volatile int64_t x76 = INT64_MIN;

	t17 = (x73<(x74|(x75-x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x81 = -1LL;
	volatile int32_t x82 = INT32_MIN;
	int8_t x84 = 6;

	t18 = (x81<(x82|(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x90 = INT64_MAX;
	int16_t x92 = INT16_MAX;
	static volatile int32_t t19 = 1750497;

	t19 = (x89<(x90|(x91-x92)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = 0;
	uint64_t x95 = 53280576872LLU;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t20 = 9;

	t20 = (x93<(x94|(x95-x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	volatile int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 3819214852489918433LLU;
	int32_t t21 = -31791962;

	t21 = (x97<(x98|(x99-x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	uint64_t x107 = 33996393513LLU;
	int32_t x108 = INT32_MIN;
	int32_t t22 = -89990;

	t22 = (x105<(x106|(x107-x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 79U;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -7932976964319855LL;
	volatile int8_t x112 = INT8_MIN;

	t23 = (x109<(x110|(x111-x112)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 2LLU;
	static int8_t x114 = 20;
	int16_t x115 = INT16_MAX;

	t24 = (x113<(x114|(x115-x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = UINT16_MAX;
	volatile uint32_t x118 = 12111483U;
	int8_t x120 = INT8_MIN;
	static int32_t t25 = 3;

	t25 = (x117<(x118|(x119-x120)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x121 = 40LL;
	static int16_t x122 = INT16_MAX;
	static uint64_t x123 = UINT64_MAX;
	static int16_t x124 = -259;
	int32_t t26 = 3940410;

	t26 = (x121<(x122|(x123-x124)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x125 = INT8_MIN;
	uint32_t x126 = 488002840U;
	int32_t x127 = INT32_MIN;
	static volatile uint32_t x128 = 1848U;
	int32_t t27 = 20;

	t27 = (x125<(x126|(x127-x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = 1;
	static volatile int64_t x131 = -172LL;
	int32_t x132 = -1;
	volatile int32_t t28 = 6103;

	t28 = (x129<(x130|(x131-x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x133 = 216U;
	int64_t x134 = INT64_MAX;
	uint64_t x136 = UINT64_MAX;

	t29 = (x133<(x134|(x135-x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t30 = 140173;

	t30 = (x137<(x138|(x139-x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t31 = 35;

	t31 = (x141<(x142|(x143-x144)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 1537;
	static volatile int16_t x146 = -2434;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MIN;

	t32 = (x145<(x146|(x147-x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MAX;
	static int16_t x152 = 0;
	int32_t t33 = 11653451;

	t33 = (x149<(x150|(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x157 = 6U;
	int32_t x158 = 1322293;
	uint64_t x159 = 6732873706383LLU;
	static uint16_t x160 = 55U;
	volatile int32_t t34 = -482;

	t34 = (x157<(x158|(x159-x160)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static int8_t x167 = INT8_MAX;
	uint64_t x168 = 5023994157120828LLU;
	int32_t t35 = 44;

	t35 = (x165<(x166|(x167-x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t x172 = 98370;

	t36 = (x169<(x170|(x171-x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = 6;
	int32_t t37 = -560912;

	t37 = (x173<(x174|(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	int8_t x180 = INT8_MAX;
	static int32_t t38 = 870;

	t38 = (x177<(x178|(x179-x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = 6;
	int16_t x182 = INT16_MIN;
	uint32_t x183 = 93085U;
	static uint16_t x184 = UINT16_MAX;

	t39 = (x181<(x182|(x183-x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 9LL;
	static volatile uint16_t x186 = 578U;
	static int64_t x187 = -1LL;
	int64_t x188 = -54456107663535LL;
	volatile int32_t t40 = 180605;

	t40 = (x185<(x186|(x187-x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x190 = INT64_MIN;
	volatile int16_t x191 = -9919;
	static volatile int32_t t41 = -10;

	t41 = (x189<(x190|(x191-x192)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	int8_t x195 = -1;
	int8_t x196 = 59;

	t42 = (x193<(x194|(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x197 = 1319345U;
	volatile uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = INT16_MAX;
	uint64_t x200 = 3431658276LLU;
	volatile int32_t t43 = -210;

	t43 = (x197<(x198|(x199-x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 27415447U;
	static int32_t x202 = -1;
	int64_t x203 = -5622570713LL;
	uint64_t x204 = 4707206569LLU;
	volatile int32_t t44 = -1;

	t44 = (x201<(x202|(x203-x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x206 = 20952332LL;
	uint32_t x208 = 1123541960U;
	volatile int32_t t45 = 2;

	t45 = (x205<(x206|(x207-x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = 848;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = 24U;

	t46 = (x209<(x210|(x211-x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MAX;
	static uint32_t x214 = 1144223296U;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t47 = -1;

	t47 = (x213<(x214|(x215-x216)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x217 = INT8_MIN;
	int16_t x218 = 15378;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t48 = -39809300;

	t48 = (x217<(x218|(x219-x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x221 = -41;
	static int8_t x222 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;

	t49 = (x221<(x222|(x223-x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x225 = 7645LLU;
	uint8_t x228 = 103U;

	t50 = (x225<(x226|(x227-x228)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 20U;
	static uint8_t x230 = 1U;
	volatile int32_t x231 = -1;
	volatile int32_t t51 = 10;

	t51 = (x229<(x230|(x231-x232)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x233 = 7033648;
	int32_t x234 = -1;
	int64_t x235 = -1LL;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t52 = -705529;

	t52 = (x233<(x234|(x235-x236)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x237 = INT16_MIN;
	static uint8_t x238 = 26U;
	int8_t x239 = 4;
	uint8_t x240 = 1U;
	volatile int32_t t53 = -64192;

	t53 = (x237<(x238|(x239-x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x242 = 14U;
	volatile int32_t x243 = -1;
	int16_t x244 = INT16_MIN;
	volatile int32_t t54 = -17068;

	t54 = (x241<(x242|(x243-x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x247 = -1LL;
	uint8_t x248 = 23U;
	int32_t t55 = -442281;

	t55 = (x245<(x246|(x247-x248)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = -1;
	int16_t x250 = -5929;
	int64_t x251 = 1654LL;
	static int64_t x252 = INT64_MAX;

	t56 = (x249<(x250|(x251-x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x259 = 4U;
	volatile int16_t x260 = INT16_MIN;

	t57 = (x257<(x258|(x259-x260)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x265 = INT64_MAX;
	uint8_t x266 = 0U;
	uint32_t x267 = 1989629U;
	uint8_t x268 = 3U;
	int32_t t58 = 1;

	t58 = (x265<(x266|(x267-x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x269 = 8403352574084320LL;
	uint64_t x270 = 28LLU;
	volatile uint8_t x272 = UINT8_MAX;
	static volatile int32_t t59 = -2;

	t59 = (x269<(x270|(x271-x272)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x274 = UINT64_MAX;
	static int8_t x275 = 29;
	int16_t x276 = INT16_MAX;
	volatile int32_t t60 = -586067;

	t60 = (x273<(x274|(x275-x276)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x278 = 1U;
	int8_t x279 = INT8_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t61 = -374;

	t61 = (x277<(x278|(x279-x280)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MAX;
	static int16_t x284 = INT16_MAX;
	int32_t t62 = -6214;

	t62 = (x281<(x282|(x283-x284)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x285 = INT16_MIN;
	int8_t x286 = 40;
	volatile int32_t t63 = 2008350;

	t63 = (x285<(x286|(x287-x288)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x290 = 1;
	volatile uint32_t x291 = 240U;
	int32_t t64 = -1877183;

	t64 = (x289<(x290|(x291-x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MAX;
	int8_t x295 = INT8_MIN;
	int32_t t65 = 2708;

	t65 = (x293<(x294|(x295-x296)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = 314738244957865643LL;
	int32_t x298 = INT32_MIN;
	static int16_t x299 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	static int32_t t66 = -59876;

	t66 = (x297<(x298|(x299-x300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int16_t x302 = 7423;
	static int64_t x304 = -146925310158982LL;
	int32_t t67 = 947242;

	t67 = (x301<(x302|(x303-x304)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x313 = 108U;
	int32_t x314 = INT32_MAX;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t68 = -16323;

	t68 = (x313<(x314|(x315-x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = -1;
	int32_t x318 = -4835;
	volatile int8_t x319 = -1;

	t69 = (x317<(x318|(x319-x320)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = 51;
	int8_t x323 = INT8_MIN;
	static int64_t x324 = INT64_MIN;
	int32_t t70 = 12;

	t70 = (x321<(x322|(x323-x324)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x325 = 34U;
	static uint16_t x326 = 1U;
	static int16_t x327 = -1;
	uint16_t x328 = 32U;

	t71 = (x325<(x326|(x327-x328)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x329 = UINT8_MAX;
	static uint16_t x330 = 1503U;
	uint64_t x331 = UINT64_MAX;

	t72 = (x329<(x330|(x331-x332)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x333 = INT16_MAX;
	int8_t x334 = INT8_MIN;
	static volatile int64_t x335 = INT64_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t73 = 2615409;

	t73 = (x333<(x334|(x335-x336)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x337 = 76555U;
	int16_t x338 = -1;
	uint8_t x339 = 0U;
	int8_t x340 = -2;
	int32_t t74 = -3;

	t74 = (x337<(x338|(x339-x340)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x342 = 248721LLU;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = -45;
	int32_t t75 = -25630;

	t75 = (x341<(x342|(x343-x344)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x346 = UINT32_MAX;
	static int32_t x347 = -1898;
	int32_t t76 = 11525728;

	t76 = (x345<(x346|(x347-x348)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x349 = INT64_MIN;
	uint64_t x350 = 542903210912070280LLU;
	uint8_t x351 = UINT8_MAX;
	uint32_t x352 = UINT32_MAX;

	t77 = (x349<(x350|(x351-x352)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x358 = 380U;
	int64_t x359 = -1LL;
	int32_t t78 = 74;

	t78 = (x357<(x358|(x359-x360)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x362 = 351U;
	static int32_t x363 = -1;
	int8_t x364 = 1;
	int32_t t79 = 100;

	t79 = (x361<(x362|(x363-x364)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MAX;
	int16_t x372 = 1;
	int32_t t80 = -1;

	t80 = (x369<(x370|(x371-x372)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 1146U;
	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = -3;
	uint8_t x376 = 1U;
	int32_t t81 = -1009027992;

	t81 = (x373<(x374|(x375-x376)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x382 = UINT16_MAX;
	static int16_t x383 = INT16_MAX;
	int16_t x384 = 72;
	volatile int32_t t82 = -136;

	t82 = (x381<(x382|(x383-x384)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = -1;
	static int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;
	static int32_t t83 = 12716797;

	t83 = (x385<(x386|(x387-x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x389 = -1;
	volatile int32_t x390 = INT32_MIN;
	uint8_t x391 = UINT8_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t84 = -307890;

	t84 = (x389<(x390|(x391-x392)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x394 = -1LL;
	int64_t x395 = INT64_MIN;
	int64_t x396 = -31744275533528LL;
	volatile int32_t t85 = -6252;

	t85 = (x393<(x394|(x395-x396)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = 36U;
	static uint64_t x402 = 210261LLU;
	uint32_t x403 = 11566U;
	int8_t x404 = 0;

	t86 = (x401<(x402|(x403-x404)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 1035993107559783LLU;
	uint64_t x406 = UINT64_MAX;
	uint32_t x408 = 1099243U;
	volatile int32_t t87 = 2456;

	t87 = (x405<(x406|(x407-x408)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = -1;
	int8_t x410 = -9;
	int64_t x411 = INT64_MAX;
	volatile int16_t x412 = 0;
	volatile int32_t t88 = 321306;

	t88 = (x409<(x410|(x411-x412)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x419 = -1;
	uint64_t x420 = 1308676865593965874LLU;
	int32_t t89 = 8864;

	t89 = (x417<(x418|(x419-x420)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = -241908085;
	uint64_t x422 = 944639662081940LLU;
	int32_t x423 = -1;
	int8_t x424 = -1;
	int32_t t90 = 313593;

	t90 = (x421<(x422|(x423-x424)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x425 = -1;
	int32_t x426 = INT32_MIN;
	int32_t x427 = -1;
	int32_t t91 = 125351376;

	t91 = (x425<(x426|(x427-x428)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x429 = 40U;
	static int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	uint64_t x432 = UINT64_MAX;
	int32_t t92 = -1206293;

	t92 = (x429<(x430|(x431-x432)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x433 = 5080511LLU;
	int8_t x434 = 6;
	static uint16_t x435 = 7558U;
	static volatile int32_t t93 = -242;

	t93 = (x433<(x434|(x435-x436)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x438 = -10;
	static volatile int16_t x440 = INT16_MIN;

	t94 = (x437<(x438|(x439-x440)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x441 = UINT16_MAX;
	static int16_t x443 = -1;
	int32_t x444 = -190215;
	volatile int32_t t95 = 2029;

	t95 = (x441<(x442|(x443-x444)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x445 = 13U;
	static volatile int16_t x446 = -855;
	volatile uint16_t x447 = UINT16_MAX;
	static int32_t t96 = 17630691;

	t96 = (x445<(x446|(x447-x448)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x449 = 1LLU;
	static int8_t x450 = 54;
	int8_t x451 = -3;
	int32_t t97 = 399721;

	t97 = (x449<(x450|(x451-x452)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MAX;
	int64_t x454 = INT64_MIN;
	volatile uint8_t x455 = 76U;
	int64_t x456 = -1LL;
	int32_t t98 = 1094;

	t98 = (x453<(x454|(x455-x456)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x457 = INT16_MIN;
	uint16_t x459 = UINT16_MAX;
	static volatile int16_t x460 = INT16_MIN;
	static int32_t t99 = -5925349;

	t99 = (x457<(x458|(x459-x460)));

	if (t99 != 1) { NG(); } else { ; }
	
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

