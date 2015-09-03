#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int8_t x4 = -10;
int32_t t0 = 1;
uint64_t x9 = 454385492418632LLU;
int16_t x12 = INT16_MAX;
volatile int32_t t2 = 1200410;
int8_t x13 = -1;
static volatile int8_t x23 = -10;
int32_t t5 = 1169949;
int32_t x25 = INT32_MAX;
volatile int64_t x32 = 31793LL;
uint8_t x44 = 2U;
int8_t x45 = -1;
int32_t x47 = INT32_MAX;
int16_t x48 = -1;
static int8_t x54 = -1;
static int32_t t15 = 2387;
static volatile int32_t t17 = -312252;
uint64_t x75 = UINT64_MAX;
uint64_t x78 = 4175296LLU;
int32_t x79 = -1;
static int64_t x92 = INT64_MAX;
int32_t t22 = -735176;
volatile int16_t x95 = 5;
int32_t t24 = -153;
static int32_t t25 = 196;
static int32_t x108 = INT32_MIN;
uint32_t x118 = 3875U;
int16_t x130 = INT16_MAX;
int32_t t32 = 11;
volatile int8_t x133 = -1;
int32_t x141 = -1165;
static uint64_t x145 = 167998756173764125LLU;
int8_t x151 = -1;
volatile int32_t t37 = 10117;
uint64_t x155 = 3LLU;
uint8_t x156 = 4U;
volatile int32_t t39 = -6;
int8_t x161 = INT8_MAX;
static uint32_t x163 = UINT32_MAX;
uint64_t x166 = UINT64_MAX;
int16_t x169 = -1;
int32_t t43 = -51;
int32_t x178 = -1928324;
volatile int32_t t48 = 2914;
int8_t x203 = INT8_MIN;
int32_t x205 = -1;
int32_t x206 = INT32_MAX;
int16_t x213 = -1;
uint8_t x214 = 1U;
volatile int16_t x215 = 0;
int32_t t52 = -31763692;
volatile int32_t x222 = 4;
int32_t t54 = -785;
int8_t x225 = INT8_MAX;
uint16_t x229 = 3902U;
int32_t t57 = -6;
volatile int32_t x237 = INT32_MAX;
int64_t x238 = -1644175992LL;
volatile int32_t t58 = 20281;
static int32_t x244 = -1;
volatile uint16_t x245 = UINT16_MAX;
volatile uint8_t x260 = 5U;
static volatile int32_t x263 = 5;
volatile uint16_t x269 = 21U;
uint32_t x271 = 3191307U;
int32_t x272 = INT32_MIN;
uint32_t x279 = UINT32_MAX;
uint32_t x280 = 15U;
int16_t x281 = INT16_MIN;
int8_t x282 = 2;
volatile uint64_t x284 = 263116LLU;
volatile uint8_t x300 = 22U;
uint64_t x304 = UINT64_MAX;
volatile int32_t t73 = 1;
static uint32_t x305 = UINT32_MAX;
int32_t x311 = INT32_MIN;
int16_t x315 = -1;
static volatile int32_t x316 = INT32_MIN;
volatile int32_t x317 = -348;
int64_t x319 = -1LL;
static int64_t x320 = -177LL;
int32_t t77 = 30255246;
uint8_t x324 = 1U;
uint64_t x326 = 1288283LLU;
uint16_t x335 = UINT16_MAX;
static int16_t x342 = INT16_MIN;
volatile int8_t x344 = -17;
uint32_t x347 = 56623290U;
volatile int32_t t84 = -49575102;
uint64_t x352 = 6585164257932LLU;
volatile int32_t t85 = 199;
volatile int32_t x354 = INT32_MIN;
int64_t x360 = INT64_MIN;
static uint8_t x362 = 126U;
int16_t x363 = INT16_MIN;
uint32_t x364 = 3U;
volatile uint8_t x366 = 1U;
volatile uint32_t x369 = 96310577U;
int8_t x371 = 34;
volatile int64_t x372 = INT64_MAX;
static int32_t t90 = -10017558;
volatile int16_t x380 = INT16_MIN;
int32_t t94 = 4;
int32_t t96 = -130;
uint16_t x404 = UINT16_MAX;
static int16_t x406 = -1;


void f0(void) {
	uint64_t x2 = 3765395LLU;
	int64_t x3 = INT64_MAX;

	t0 = ((x1%x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = 81U;
	static volatile int16_t x7 = INT16_MAX;
	static uint16_t x8 = 1U;
	int32_t t1 = -190;

	t1 = ((x5%x6)<=(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1167397511LL;
	int32_t x11 = INT32_MIN;

	t2 = ((x9%x10)<=(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x14 = INT16_MAX;
	int32_t x15 = 12778459;
	static int32_t x16 = 29;
	int32_t t3 = 912364531;

	t3 = ((x13%x14)<=(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int8_t x18 = 1;
	int16_t x19 = -3;
	int64_t x20 = -1LL;
	int32_t t4 = 3146;

	t4 = ((x17%x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MIN;
	static int32_t x24 = INT32_MIN;

	t5 = ((x21%x22)<=(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = INT32_MIN;
	uint16_t x27 = UINT16_MAX;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t6 = 8539;

	t6 = ((x25%x26)<=(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x30 = 4U;
	int64_t x31 = INT64_MIN;
	int32_t t7 = 386171;

	t7 = ((x29%x30)<=(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 33U;
	int64_t x34 = -41LL;
	uint32_t x35 = 870164236U;
	int16_t x36 = -1;
	volatile int32_t t8 = 805;

	t8 = ((x33%x34)<=(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	static int64_t x40 = -1323396439LL;
	volatile int32_t t9 = 123;

	t9 = ((x37%x38)<=(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -23;
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	volatile int32_t t10 = 1;

	t10 = ((x41%x42)<=(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 173U;
	int32_t t11 = -42441614;

	t11 = ((x45%x46)<=(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int16_t x50 = INT16_MIN;
	static int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 8522638;

	t12 = ((x49%x50)<=(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	volatile uint32_t x55 = 474188U;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -3671245;

	t13 = ((x53%x54)<=(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 128159265;

	t14 = ((x57%x58)<=(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -14854;
	volatile int16_t x62 = -753;
	static uint32_t x63 = UINT32_MAX;
	int16_t x64 = -3;

	t15 = ((x61%x62)<=(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	volatile int8_t x66 = 7;
	int64_t x67 = 1069769604370286641LL;
	static int16_t x68 = -1;
	volatile int32_t t16 = 3496;

	t16 = ((x65%x66)<=(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	int16_t x72 = INT16_MAX;

	t17 = ((x69%x70)<=(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = 4527195398LLU;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 3338241;

	t18 = ((x73%x74)<=(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 0U;
	int64_t x80 = INT64_MAX;
	int32_t t19 = 36969;

	t19 = ((x77%x78)<=(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 6453654LLU;
	uint32_t x82 = 19376U;
	static volatile int16_t x83 = -1;
	int16_t x84 = -1;
	int32_t t20 = 6191619;

	t20 = ((x81%x82)<=(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 29U;
	static int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	static volatile int16_t x88 = -160;
	int32_t t21 = 275;

	t21 = ((x85%x86)<=(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 3112;
	int64_t x90 = -1LL;
	int32_t x91 = 15721569;

	t22 = ((x89%x90)<=(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -4788252872LL;
	uint64_t x94 = 45786626LLU;
	uint32_t x96 = 118059U;
	int32_t t23 = -64642363;

	t23 = ((x93%x94)<=(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 29123343U;
	int16_t x98 = INT16_MAX;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 45U;

	t24 = ((x97%x98)<=(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = 158;
	int32_t x102 = INT32_MAX;
	int16_t x103 = -374;
	uint16_t x104 = 278U;

	t25 = ((x101%x102)<=(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -25LL;
	volatile int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	volatile int32_t t26 = -538;

	t26 = ((x105%x106)<=(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	static int8_t x110 = -1;
	int8_t x111 = INT8_MAX;
	volatile int32_t x112 = INT32_MAX;
	int32_t t27 = -8;

	t27 = ((x109%x110)<=(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 8046115U;
	int32_t x115 = -1;
	static int64_t x116 = -1LL;
	int32_t t28 = -33707;

	t28 = ((x113%x114)<=(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	static uint8_t x119 = 12U;
	uint64_t x120 = 241LLU;
	int32_t t29 = -5448225;

	t29 = ((x117%x118)<=(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = UINT64_MAX;
	static int8_t x122 = 4;
	int8_t x123 = -1;
	uint16_t x124 = 38U;
	volatile int32_t t30 = 3;

	t30 = ((x121%x122)<=(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int16_t x126 = INT16_MAX;
	int8_t x127 = 0;
	static int8_t x128 = -1;
	volatile int32_t t31 = 29438;

	t31 = ((x125%x126)<=(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static volatile int8_t x131 = INT8_MIN;
	static volatile int16_t x132 = -1;

	t32 = ((x129%x130)<=(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	int16_t x135 = 60;
	int32_t x136 = INT32_MAX;
	static volatile int32_t t33 = 1;

	t33 = ((x133%x134)<=(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = -573;
	volatile uint32_t x139 = 2150U;
	int8_t x140 = -1;
	static volatile int32_t t34 = -478068;

	t34 = ((x137%x138)<=(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MAX;
	static volatile int16_t x143 = INT16_MIN;
	volatile int16_t x144 = INT16_MAX;
	int32_t t35 = 5;

	t35 = ((x141%x142)<=(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = 341726206U;
	volatile int32_t t36 = 27663;

	t36 = ((x145%x146)<=(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = UINT16_MAX;
	uint8_t x152 = UINT8_MAX;

	t37 = ((x149%x150)<=(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 4972783U;
	uint8_t x154 = 6U;
	int32_t t38 = 444094783;

	t38 = ((x153%x154)<=(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MAX;
	volatile int64_t x160 = -333924116241068344LL;

	t39 = ((x157%x158)<=(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -1;
	static int32_t x164 = -65027;
	volatile int32_t t40 = -18;

	t40 = ((x161%x162)<=(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x165 = 0U;
	volatile int16_t x167 = 111;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -55;

	t41 = ((x165%x166)<=(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MAX;
	int16_t x171 = -86;
	static int16_t x172 = INT16_MIN;
	int32_t t42 = -2814076;

	t42 = ((x169%x170)<=(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 8800U;
	static uint8_t x174 = UINT8_MAX;
	static int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MIN;

	t43 = ((x173%x174)<=(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -3LL;
	volatile int64_t x179 = -575154557667062LL;
	int8_t x180 = -1;
	volatile int32_t t44 = 3;

	t44 = ((x177%x178)<=(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 549;
	int8_t x182 = -1;
	uint16_t x183 = 4U;
	uint32_t x184 = 3937073U;
	int32_t t45 = 14312;

	t45 = ((x181%x182)<=(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 272U;
	uint8_t x186 = 3U;
	uint16_t x187 = 1558U;
	int16_t x188 = 13;
	volatile int32_t t46 = -103161;

	t46 = ((x185%x186)<=(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x189 = 70208706LL;
	uint32_t x190 = 819772U;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -2369;

	t47 = ((x189%x190)<=(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -26;
	int32_t x198 = INT32_MAX;
	int32_t x199 = 10;
	volatile int16_t x200 = -1;

	t48 = ((x197%x198)<=(x199<x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	static uint32_t x202 = 1U;
	int64_t x204 = INT64_MAX;
	int32_t t49 = 22373268;

	t49 = ((x201%x202)<=(x203<x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x207 = -28;
	int64_t x208 = INT64_MAX;
	volatile int32_t t50 = 1;

	t50 = ((x205%x206)<=(x207<x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 39;
	uint8_t x210 = 1U;
	volatile int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MIN;
	static int32_t t51 = -15;

	t51 = ((x209%x210)<=(x211<x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x216 = -1LL;

	t52 = ((x213%x214)<=(x215<x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	int64_t x220 = -408948037617119LL;
	int32_t t53 = 2;

	t53 = ((x217%x218)<=(x219<x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x221 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	static int8_t x224 = -1;

	t54 = ((x221%x222)<=(x223<x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x226 = 10U;
	int32_t x227 = 22933580;
	int8_t x228 = INT8_MAX;
	static int32_t t55 = 400443497;

	t55 = ((x225%x226)<=(x227<x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = INT32_MIN;
	static int32_t x231 = INT32_MAX;
	int16_t x232 = 2;
	volatile int32_t t56 = -27148;

	t56 = ((x229%x230)<=(x231<x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = -50335LL;
	int8_t x234 = -1;
	int16_t x235 = INT16_MIN;
	static int8_t x236 = INT8_MIN;

	t57 = ((x233%x234)<=(x235<x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x239 = -1;
	uint32_t x240 = 489U;

	t58 = ((x237%x238)<=(x239<x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	int64_t x242 = INT64_MAX;
	volatile int8_t x243 = INT8_MIN;
	int32_t t59 = 68767544;

	t59 = ((x241%x242)<=(x243<x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x246 = INT64_MAX;
	int64_t x247 = -1LL;
	static uint64_t x248 = 118LLU;
	volatile int32_t t60 = 195;

	t60 = ((x245%x246)<=(x247<x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = -221465858LL;
	uint32_t x250 = 713748525U;
	volatile int8_t x251 = INT8_MAX;
	volatile int8_t x252 = INT8_MAX;
	int32_t t61 = 0;

	t61 = ((x249%x250)<=(x251<x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int8_t x254 = INT8_MIN;
	static int32_t x255 = 0;
	int16_t x256 = -1;
	volatile int32_t t62 = 5333513;

	t62 = ((x253%x254)<=(x255<x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 14548U;
	int64_t x259 = INT64_MIN;
	static volatile int32_t t63 = -3634;

	t63 = ((x257%x258)<=(x259<x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = 86320751554688LL;
	uint64_t x264 = 4032573LLU;
	volatile int32_t t64 = 184943732;

	t64 = ((x261%x262)<=(x263<x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static int8_t x267 = INT8_MAX;
	uint64_t x268 = 1580093655LLU;
	volatile int32_t t65 = -6958;

	t65 = ((x265%x266)<=(x267<x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x270 = INT8_MIN;
	static int32_t t66 = -1;

	t66 = ((x269%x270)<=(x271<x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MAX;
	uint64_t x274 = 94138999082LLU;
	static uint8_t x275 = 72U;
	volatile int32_t x276 = 158251311;
	int32_t t67 = 1;

	t67 = ((x273%x274)<=(x275<x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MAX;
	volatile int32_t t68 = -10243;

	t68 = ((x277%x278)<=(x279<x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x283 = UINT16_MAX;
	static int32_t t69 = -4;

	t69 = ((x281%x282)<=(x283<x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 59LLU;
	int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MIN;
	static volatile int16_t x288 = INT16_MAX;
	volatile int32_t t70 = -101045523;

	t70 = ((x285%x286)<=(x287<x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = 3;
	int64_t x290 = -4691433LL;
	uint16_t x291 = 35U;
	volatile int64_t x292 = INT64_MAX;
	static int32_t t71 = -73056436;

	t71 = ((x289%x290)<=(x291<x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 3U;
	int16_t x299 = 661;
	volatile int32_t t72 = 67907;

	t72 = ((x297%x298)<=(x299<x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MAX;
	uint64_t x303 = 28176290623274165LLU;

	t73 = ((x301%x302)<=(x303<x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x306 = -1LL;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = 187LLU;
	volatile int32_t t74 = 101325;

	t74 = ((x305%x306)<=(x307<x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x309 = 6U;
	volatile int8_t x310 = INT8_MIN;
	uint8_t x312 = 43U;
	int32_t t75 = -352037;

	t75 = ((x309%x310)<=(x311<x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MIN;
	static uint64_t x314 = 15893620085LLU;
	volatile int32_t t76 = -39;

	t76 = ((x313%x314)<=(x315<x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x318 = INT16_MAX;

	t77 = ((x317%x318)<=(x319<x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 9608U;
	int8_t x322 = INT8_MIN;
	int8_t x323 = 3;
	static volatile int32_t t78 = 3;

	t78 = ((x321%x322)<=(x323<x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x325 = 81;
	volatile uint32_t x327 = 1108697U;
	uint16_t x328 = 3U;
	volatile int32_t t79 = -12;

	t79 = ((x325%x326)<=(x327<x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = 2555U;
	uint32_t x330 = UINT32_MAX;
	uint8_t x331 = 2U;
	uint64_t x332 = 1137LLU;
	volatile int32_t t80 = 2;

	t80 = ((x329%x330)<=(x331<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = UINT8_MAX;
	static uint8_t x334 = UINT8_MAX;
	uint64_t x336 = 24678435LLU;
	int32_t t81 = -5821;

	t81 = ((x333%x334)<=(x335<x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = 2;
	static uint64_t x338 = 317916446086LLU;
	volatile int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t82 = -1185349;

	t82 = ((x337%x338)<=(x339<x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = 810;
	volatile int64_t x343 = -315986313LL;
	int32_t t83 = 15;

	t83 = ((x341%x342)<=(x343<x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x345 = INT64_MIN;
	uint64_t x346 = UINT64_MAX;
	int32_t x348 = INT32_MAX;

	t84 = ((x345%x346)<=(x347<x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 105U;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -50;

	t85 = ((x349%x350)<=(x351<x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 4631227909LLU;
	uint8_t x355 = 57U;
	int64_t x356 = 8350344LL;
	volatile int32_t t86 = -6;

	t86 = ((x353%x354)<=(x355<x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x357 = 3U;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 33950618LLU;
	int32_t t87 = -353;

	t87 = ((x357%x358)<=(x359<x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = 881721217819991LL;
	int32_t t88 = 642560316;

	t88 = ((x361%x362)<=(x363<x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	int16_t x367 = -6;
	int8_t x368 = INT8_MIN;
	volatile int32_t t89 = -124085437;

	t89 = ((x365%x366)<=(x367<x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x370 = 2533LLU;

	t90 = ((x369%x370)<=(x371<x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MAX;
	uint8_t x374 = 102U;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t91 = 128954;

	t91 = ((x373%x374)<=(x375<x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x377 = UINT16_MAX;
	static volatile int16_t x378 = -1;
	volatile int64_t x379 = -85425625LL;
	volatile int32_t t92 = 15;

	t92 = ((x377%x378)<=(x379<x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = 22960212;
	int64_t x382 = INT64_MIN;
	volatile uint64_t x383 = 39895388345477443LLU;
	int64_t x384 = INT64_MIN;
	volatile int32_t t93 = 11440;

	t93 = ((x381%x382)<=(x383<x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = 207418061U;
	int16_t x386 = INT16_MIN;
	static int8_t x387 = -1;
	int32_t x388 = INT32_MAX;

	t94 = ((x385%x386)<=(x387<x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	int64_t x390 = 1LL;
	uint16_t x391 = 178U;
	static int16_t x392 = -1;
	volatile int32_t t95 = 624;

	t95 = ((x389%x390)<=(x391<x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x393 = -1LL;
	uint64_t x394 = 2403846809867967LLU;
	volatile int16_t x395 = 1388;
	uint32_t x396 = UINT32_MAX;

	t96 = ((x393%x394)<=(x395<x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x397 = INT8_MIN;
	volatile int16_t x398 = -1;
	int8_t x399 = INT8_MAX;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t97 = -925721;

	t97 = ((x397%x398)<=(x399<x400));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = 257;
	uint32_t x402 = 394U;
	static uint32_t x403 = 10U;
	int32_t t98 = 7009188;

	t98 = ((x401%x402)<=(x403<x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = -20;
	int16_t x407 = INT16_MAX;
	int32_t x408 = -588794127;
	int32_t t99 = 0;

	t99 = ((x405%x406)<=(x407<x408));

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

