#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
volatile uint16_t x8 = UINT16_MAX;
uint64_t x9 = 595947124947074LLU;
static int16_t x10 = 32;
int16_t x19 = INT16_MIN;
uint32_t x21 = 12965434U;
int8_t x24 = -1;
static volatile int16_t x25 = INT16_MIN;
int16_t x27 = INT16_MIN;
int64_t x28 = 353LL;
int64_t x35 = INT64_MIN;
int64_t x36 = -1LL;
int64_t x40 = INT64_MIN;
int32_t t10 = 15;
volatile int32_t x47 = -2208900;
static volatile int64_t x56 = INT64_MIN;
int64_t x58 = -1LL;
uint32_t x72 = 6496375U;
volatile uint8_t x74 = 72U;
int8_t x78 = -1;
int32_t t19 = -26696;
int16_t x89 = INT16_MAX;
static uint16_t x97 = 170U;
uint64_t x98 = 128535493LLU;
volatile int8_t x110 = -1;
uint16_t x114 = UINT16_MAX;
volatile int32_t t27 = -9006;
static uint8_t x131 = 98U;
int32_t x132 = INT32_MAX;
static volatile int16_t x137 = -16;
int32_t x139 = -1;
static int16_t x141 = INT16_MIN;
int64_t x145 = INT64_MIN;
int16_t x149 = INT16_MIN;
int16_t x167 = -777;
volatile int64_t x181 = -1LL;
uint32_t x188 = 473323U;
int8_t x192 = 63;
static int16_t x198 = -1;
int16_t x202 = 2244;
int8_t x204 = -1;
int32_t x207 = -517353708;
int32_t t48 = 1;
uint64_t x209 = UINT64_MAX;
static int16_t x220 = INT16_MAX;
uint16_t x226 = UINT16_MAX;
static int64_t x228 = 12LL;
int16_t x234 = INT16_MAX;
int32_t x239 = 56919209;
int64_t x240 = -116LL;
static int16_t x244 = -13;
uint8_t x249 = 14U;
int16_t x254 = INT16_MIN;
uint16_t x262 = 3U;
int64_t x263 = -1426105622275LL;
volatile int16_t x267 = INT16_MIN;
int32_t x268 = INT32_MAX;
volatile int32_t t65 = 1;
uint16_t x278 = 324U;
int32_t x283 = INT32_MAX;
uint32_t x284 = UINT32_MAX;
static volatile int32_t t67 = -11802;
int16_t x287 = INT16_MIN;
int64_t x293 = INT64_MAX;
uint64_t x298 = 6LLU;
static uint16_t x303 = 4U;
int32_t t73 = -16421847;
static uint16_t x318 = UINT16_MAX;
volatile int32_t t75 = 4047555;
int32_t x323 = INT32_MIN;
volatile uint64_t x326 = 838239383LLU;
static volatile int32_t t77 = 290;
static int64_t x333 = 12LL;
volatile int32_t t79 = 1326;
int8_t x339 = 29;
static uint16_t x341 = 54U;
static int8_t x344 = INT8_MIN;
uint8_t x345 = 0U;
int32_t x347 = -1;
int8_t x348 = 3;
static int64_t x358 = -886254605368826LL;
int8_t x364 = INT8_MIN;
volatile int32_t t85 = 122564;
int64_t x372 = -1LL;
int64_t x373 = 181673372698LL;
int16_t x374 = INT16_MIN;
volatile int32_t x377 = INT32_MIN;
int16_t x383 = INT16_MIN;
int64_t x389 = 53330505LL;
uint64_t x393 = 1912LLU;
int8_t x395 = -1;
uint8_t x401 = UINT8_MAX;
static volatile int64_t x403 = INT64_MAX;
int64_t x406 = -1LL;
int16_t x414 = INT16_MIN;


void f0(void) {
	uint32_t x1 = 2U;
	int8_t x2 = -3;
	int8_t x3 = -1;
	static uint16_t x4 = 926U;
	int32_t t0 = -1440;

	t0 = ((x1/x2)==(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	int32_t t1 = -4;

	t1 = ((x5/x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -126267257;

	t2 = ((x9/x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 2;
	volatile uint32_t x14 = 3203628U;
	int64_t x15 = -235LL;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 1;

	t3 = ((x13/x14)==(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	uint32_t x18 = 583124646U;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -25;

	t4 = ((x17/x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 28630165LL;
	uint8_t x23 = UINT8_MAX;
	static int32_t t5 = 1;

	t5 = ((x21/x22)==(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 4U;
	int32_t t6 = -3302;

	t6 = ((x25/x26)==(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 1;
	uint64_t x30 = 6020440483819217LLU;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 22;

	t7 = ((x29/x30)==(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static uint16_t x34 = 14581U;
	volatile int32_t t8 = -26256;

	t8 = ((x33/x34)==(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	static int8_t x39 = INT8_MIN;
	int32_t t9 = -13;

	t9 = ((x37/x38)==(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	int8_t x42 = 6;
	static uint64_t x43 = 17947476584LLU;
	volatile int64_t x44 = INT64_MIN;

	t10 = ((x41/x42)==(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = -1;
	int32_t x48 = -1;
	int32_t t11 = 2368998;

	t11 = ((x45/x46)==(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 817U;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	int16_t x52 = -1;
	volatile int32_t t12 = -108250967;

	t12 = ((x49/x50)==(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 14U;
	uint16_t x54 = UINT16_MAX;
	static volatile int16_t x55 = INT16_MAX;
	int32_t t13 = 0;

	t13 = ((x53/x54)==(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int32_t x59 = -1;
	int32_t x60 = -2;
	volatile int32_t t14 = -69200;

	t14 = ((x57/x58)==(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 2;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = 0U;
	static volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -3;

	t15 = ((x61/x62)==(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 3;
	int32_t x66 = -18461342;
	int8_t x67 = 7;
	int8_t x68 = 57;
	static int32_t t16 = 1;

	t16 = ((x65/x66)==(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MAX;
	static int64_t x71 = -1LL;
	volatile int32_t t17 = 3;

	t17 = ((x69/x70)==(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -7259117;
	int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -190999;

	t18 = ((x73/x74)==(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -94866646126LL;
	int64_t x79 = -1LL;
	int32_t x80 = 0;

	t19 = ((x77/x78)==(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -115;
	int64_t x83 = -1LL;
	int32_t x84 = INT32_MAX;
	int32_t t20 = -84375936;

	t20 = ((x81/x82)==(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 213LLU;
	int64_t x86 = -122309LL;
	int16_t x87 = INT16_MIN;
	volatile uint32_t x88 = 1758073368U;
	volatile int32_t t21 = 3;

	t21 = ((x85/x86)==(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	int32_t x92 = -30459860;
	int32_t t22 = 17704287;

	t22 = ((x89/x90)==(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x99 = INT64_MAX;
	int32_t x100 = -1;
	volatile int32_t t23 = 593810932;

	t23 = ((x97/x98)==(x99<x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -48;
	int32_t x106 = INT32_MAX;
	uint64_t x107 = 343877185277975LLU;
	int8_t x108 = 1;
	static volatile int32_t t24 = 3701;

	t24 = ((x105/x106)==(x107<x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 27092330LL;
	volatile int8_t x111 = 1;
	volatile int8_t x112 = INT8_MIN;
	static volatile int32_t t25 = -14409657;

	t25 = ((x109/x110)==(x111<x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MAX;
	int32_t x115 = -1;
	int16_t x116 = -1;
	static int32_t t26 = 964807;

	t26 = ((x113/x114)==(x115<x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MAX;
	volatile int8_t x118 = INT8_MIN;
	uint64_t x119 = 7065254020606442067LLU;
	uint64_t x120 = UINT64_MAX;

	t27 = ((x117/x118)==(x119<x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -8;
	int16_t x122 = INT16_MIN;
	int64_t x123 = -2593627981542104406LL;
	static volatile int8_t x124 = -5;
	int32_t t28 = 1;

	t28 = ((x121/x122)==(x123<x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 32806U;
	static volatile int8_t x126 = INT8_MAX;
	volatile int16_t x127 = INT16_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t29 = -13;

	t29 = ((x125/x126)==(x127<x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	uint16_t x130 = 1U;
	int32_t t30 = -424641;

	t30 = ((x129/x130)==(x131<x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -25;
	int32_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t31 = 16;

	t31 = ((x133/x134)==(x135<x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x138 = -30709443636LL;
	uint16_t x140 = UINT16_MAX;
	int32_t t32 = 3497103;

	t32 = ((x137/x138)==(x139<x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x142 = -1;
	static volatile uint64_t x143 = 11LLU;
	uint64_t x144 = 17LLU;
	int32_t t33 = 226;

	t33 = ((x141/x142)==(x143<x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MIN;
	volatile uint64_t x148 = 608LLU;
	volatile int32_t t34 = -1389022;

	t34 = ((x145/x146)==(x147<x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = -12007323000939LL;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = 32U;
	int32_t t35 = -490217;

	t35 = ((x149/x150)==(x151<x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = 259U;
	volatile uint16_t x155 = UINT16_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t36 = -118384701;

	t36 = ((x153/x154)==(x155<x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = -1;
	volatile int8_t x158 = INT8_MIN;
	uint64_t x159 = 2389979853LLU;
	volatile int16_t x160 = -1522;
	volatile int32_t t37 = 8311;

	t37 = ((x157/x158)==(x159<x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 2290LLU;
	volatile int32_t x162 = -199302180;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t38 = 132;

	t38 = ((x161/x162)==(x163<x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 114U;
	volatile int32_t x166 = -1223891;
	volatile int16_t x168 = 47;
	static int32_t t39 = -708095200;

	t39 = ((x165/x166)==(x167<x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MAX;
	uint8_t x170 = 8U;
	volatile int64_t x171 = -2749LL;
	volatile uint64_t x172 = 2305817LLU;
	volatile int32_t t40 = -334;

	t40 = ((x169/x170)==(x171<x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 1U;
	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	static int8_t x176 = INT8_MAX;
	static int32_t t41 = 186632810;

	t41 = ((x173/x174)==(x175<x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int64_t x178 = INT64_MIN;
	uint16_t x179 = 5U;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t42 = -2227;

	t42 = ((x177/x178)==(x179<x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x182 = 9572U;
	static int32_t x183 = INT32_MIN;
	int16_t x184 = -1;
	int32_t t43 = 165356953;

	t43 = ((x181/x182)==(x183<x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -847162810191LL;
	int64_t x186 = INT64_MAX;
	static uint32_t x187 = 61933605U;
	volatile int32_t t44 = 1079783;

	t44 = ((x185/x186)==(x187<x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -1LL;
	volatile int32_t x190 = INT32_MAX;
	uint32_t x191 = 12U;
	int32_t t45 = -59232;

	t45 = ((x189/x190)==(x191<x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = -6;
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = 231LL;
	volatile int32_t t46 = -115398802;

	t46 = ((x197/x198)==(x199<x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x201 = 19U;
	int16_t x203 = -1;
	int32_t t47 = 485372256;

	t47 = ((x201/x202)==(x203<x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x205 = 1254LLU;
	int32_t x206 = INT32_MAX;
	int32_t x208 = INT32_MAX;

	t48 = ((x205/x206)==(x207<x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = 1LL;
	static int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t49 = 9342198;

	t49 = ((x209/x210)==(x211<x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = INT16_MAX;
	static uint64_t x216 = 5780453659374355LLU;
	volatile int32_t t50 = -228;

	t50 = ((x213/x214)==(x215<x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = 3640171;
	uint8_t x218 = 37U;
	uint8_t x219 = 3U;
	volatile int32_t t51 = -3163000;

	t51 = ((x217/x218)==(x219<x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	uint32_t x222 = 3108U;
	int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = 100U;
	int32_t t52 = 1812377;

	t52 = ((x221/x222)==(x223<x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 2U;
	int16_t x227 = INT16_MAX;
	volatile int32_t t53 = -9050888;

	t53 = ((x225/x226)==(x227<x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = INT8_MIN;
	int64_t x230 = -87270828899LL;
	int16_t x231 = 9363;
	int8_t x232 = INT8_MIN;
	volatile int32_t t54 = 103;

	t54 = ((x229/x230)==(x231<x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	volatile int32_t x235 = -593580;
	uint16_t x236 = 425U;
	int32_t t55 = -222;

	t55 = ((x233/x234)==(x235<x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = INT64_MIN;
	volatile int32_t t56 = 53;

	t56 = ((x237/x238)==(x239<x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x241 = 1028;
	uint16_t x242 = 53U;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t t57 = -82;

	t57 = ((x241/x242)==(x243<x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x245 = INT64_MIN;
	static int32_t x246 = 867;
	int32_t x247 = INT32_MIN;
	volatile int16_t x248 = 3150;
	int32_t t58 = -116443;

	t58 = ((x245/x246)==(x247<x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 24U;
	static int16_t x251 = INT16_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t59 = 1;

	t59 = ((x249/x250)==(x251<x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x253 = 6551U;
	static uint16_t x255 = 17022U;
	int32_t x256 = INT32_MAX;
	static volatile int32_t t60 = 1910858;

	t60 = ((x253/x254)==(x255<x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = -6040092;
	volatile int16_t x259 = -4096;
	int64_t x260 = -45348926222LL;
	int32_t t61 = 12380;

	t61 = ((x257/x258)==(x259<x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t62 = 1225;

	t62 = ((x261/x262)==(x263<x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MIN;
	volatile int32_t t63 = 16006;

	t63 = ((x265/x266)==(x267<x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -7327LL;
	static volatile int8_t x270 = INT8_MIN;
	static int32_t x271 = -1;
	uint32_t x272 = 1167652122U;
	static int32_t t64 = -17739;

	t64 = ((x269/x270)==(x271<x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -160806771LL;
	int64_t x274 = 198336013509LL;
	volatile int32_t x275 = -252958751;
	int16_t x276 = INT16_MAX;

	t65 = ((x273/x274)==(x275<x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x277 = 439U;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = INT32_MIN;
	static int32_t t66 = 52542255;

	t66 = ((x277/x278)==(x279<x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	static uint64_t x282 = 6858958280036423LLU;

	t67 = ((x281/x282)==(x283<x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 54U;
	uint8_t x286 = 2U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t68 = 1;

	t68 = ((x285/x286)==(x287<x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 2972U;
	static uint64_t x290 = 11491640657104LLU;
	uint32_t x291 = 104U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t69 = 281709;

	t69 = ((x289/x290)==(x291<x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x294 = INT8_MIN;
	static int32_t x295 = INT32_MIN;
	uint8_t x296 = 12U;
	int32_t t70 = 957744;

	t70 = ((x293/x294)==(x295<x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x299 = 2;
	volatile int32_t x300 = INT32_MIN;
	static volatile int32_t t71 = -448336226;

	t71 = ((x297/x298)==(x299<x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = INT32_MIN;
	uint16_t x304 = 202U;
	int32_t t72 = -8;

	t72 = ((x301/x302)==(x303<x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MIN;
	volatile uint64_t x312 = 13236374509281LLU;

	t73 = ((x309/x310)==(x311<x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = UINT32_MAX;
	uint32_t x314 = 230U;
	int8_t x315 = -1;
	uint64_t x316 = 29400304LLU;
	int32_t t74 = 194;

	t74 = ((x313/x314)==(x315<x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MIN;
	uint8_t x319 = 10U;
	int16_t x320 = INT16_MIN;

	t75 = ((x317/x318)==(x319<x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x321 = 1941000789U;
	uint64_t x322 = 86507705418319806LLU;
	int32_t x324 = 78324269;
	static volatile int32_t t76 = 9131;

	t76 = ((x321/x322)==(x323<x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -1;
	int64_t x327 = INT64_MIN;
	static int16_t x328 = 5;

	t77 = ((x325/x326)==(x327<x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x329 = 974;
	uint64_t x330 = UINT64_MAX;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t78 = 163035;

	t78 = ((x329/x330)==(x331<x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = -2323LL;
	static uint8_t x335 = UINT8_MAX;
	uint16_t x336 = 32505U;

	t79 = ((x333/x334)==(x335<x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x337 = INT8_MIN;
	int64_t x338 = -1LL;
	uint16_t x340 = 895U;
	static volatile int32_t t80 = 293908;

	t80 = ((x337/x338)==(x339<x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x342 = 100921317516831808LLU;
	int8_t x343 = INT8_MAX;
	int32_t t81 = 902994473;

	t81 = ((x341/x342)==(x343<x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = -1;
	int32_t t82 = -12275023;

	t82 = ((x345/x346)==(x347<x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x353 = INT32_MAX;
	volatile int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -28;
	int32_t t83 = -121305;

	t83 = ((x353/x354)==(x355<x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	uint16_t x359 = 6U;
	static uint64_t x360 = 953449530LLU;
	volatile int32_t t84 = 31251740;

	t84 = ((x357/x358)==(x359<x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x361 = -182536419LL;
	int8_t x362 = -34;
	volatile int8_t x363 = INT8_MIN;

	t85 = ((x361/x362)==(x363<x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x365 = UINT64_MAX;
	int32_t x366 = -99296;
	int16_t x367 = 26;
	int16_t x368 = INT16_MIN;
	int32_t t86 = -1;

	t86 = ((x365/x366)==(x367<x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -104;
	volatile int32_t x370 = 7;
	uint16_t x371 = 21143U;
	volatile int32_t t87 = 1494892;

	t87 = ((x369/x370)==(x371<x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x375 = 44;
	volatile uint8_t x376 = 36U;
	volatile int32_t t88 = -13108;

	t88 = ((x373/x374)==(x375<x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x378 = 7017340210518LLU;
	int8_t x379 = INT8_MIN;
	static uint64_t x380 = 2636483333LLU;
	static int32_t t89 = -291995629;

	t89 = ((x377/x378)==(x379<x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 139255913491561856LLU;
	static volatile int16_t x382 = -878;
	int16_t x384 = -2;
	static int32_t t90 = 16;

	t90 = ((x381/x382)==(x383<x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x385 = 0U;
	int8_t x386 = INT8_MAX;
	int32_t x387 = 0;
	static uint64_t x388 = 497818574839234060LLU;
	volatile int32_t t91 = -7;

	t91 = ((x385/x386)==(x387<x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x390 = -13311080439LL;
	int8_t x391 = 5;
	uint16_t x392 = 1U;
	int32_t t92 = 4908098;

	t92 = ((x389/x390)==(x391<x392));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x394 = INT8_MIN;
	static uint16_t x396 = 116U;
	int32_t t93 = -94959430;

	t93 = ((x393/x394)==(x395<x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -325187180;
	int8_t x398 = -1;
	uint32_t x399 = 144U;
	uint8_t x400 = 37U;
	int32_t t94 = -12;

	t94 = ((x397/x398)==(x399<x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x402 = -1LL;
	int64_t x404 = -1LL;
	int32_t t95 = -1893755;

	t95 = ((x401/x402)==(x403<x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 292007U;
	uint32_t x407 = 106931U;
	uint32_t x408 = 147U;
	volatile int32_t t96 = 1;

	t96 = ((x405/x406)==(x407<x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = -1LL;
	uint16_t x410 = UINT16_MAX;
	int8_t x411 = 55;
	uint64_t x412 = 306LLU;
	static int32_t t97 = -287323;

	t97 = ((x409/x410)==(x411<x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x413 = 1770391378751LLU;
	uint16_t x415 = 7913U;
	static uint64_t x416 = UINT64_MAX;
	volatile int32_t t98 = -46582338;

	t98 = ((x413/x414)==(x415<x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = 32LLU;
	static volatile int64_t x418 = INT64_MIN;
	int32_t x419 = 82880095;
	volatile uint64_t x420 = UINT64_MAX;
	static int32_t t99 = 19;

	t99 = ((x417/x418)==(x419<x420));

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

