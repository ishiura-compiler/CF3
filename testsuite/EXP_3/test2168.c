#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -1;
int32_t x7 = 25;
int16_t x13 = INT16_MIN;
uint64_t x14 = 99LLU;
uint16_t x19 = 1U;
volatile int16_t x21 = -26;
static int16_t x22 = -1;
uint64_t x25 = 541248918850123LLU;
int32_t x34 = -1;
int8_t x37 = INT8_MIN;
volatile uint16_t x38 = 6797U;
int8_t x39 = -1;
volatile int16_t x43 = 61;
volatile int32_t t10 = 716337079;
int32_t t11 = 45286;
uint8_t x49 = 0U;
volatile int32_t x50 = INT32_MIN;
int16_t x65 = INT16_MIN;
int16_t x67 = INT16_MIN;
int64_t x77 = 3879678LL;
volatile int64_t x80 = 2370321621334777LL;
int8_t x84 = -19;
int8_t x85 = 0;
volatile int32_t x87 = INT32_MIN;
int32_t x91 = INT32_MIN;
static int64_t x98 = INT64_MIN;
int16_t x107 = INT16_MAX;
int32_t t28 = -835785;
static uint64_t x127 = 1533157LLU;
static int32_t x135 = -27530222;
uint8_t x143 = UINT8_MAX;
static volatile int32_t t35 = -11641;
int32_t x147 = INT32_MIN;
uint8_t x154 = UINT8_MAX;
uint8_t x163 = 93U;
static uint8_t x165 = 12U;
uint64_t x167 = 75047LLU;
int32_t x177 = 214465360;
uint32_t x180 = UINT32_MAX;
static uint64_t x186 = UINT64_MAX;
static int32_t t48 = -9498193;
volatile int8_t x198 = 0;
int8_t x199 = 45;
uint16_t x204 = UINT16_MAX;
int16_t x206 = 4;
volatile int32_t t53 = 351;
int16_t x219 = INT16_MIN;
static uint32_t x220 = UINT32_MAX;
int64_t x221 = -807040954LL;
int16_t x230 = INT16_MAX;
int64_t x234 = 200568910071046LL;
int64_t x235 = -1LL;
volatile uint32_t x237 = UINT32_MAX;
uint16_t x241 = 3435U;
uint16_t x244 = 3286U;
volatile int32_t t60 = 7;
int64_t x246 = -104012758463466752LL;
volatile int8_t x247 = 4;
int32_t t61 = 49;
static volatile int32_t t62 = -13305;
int8_t x258 = INT8_MIN;
int64_t x268 = INT64_MIN;
volatile int64_t x275 = INT64_MIN;
uint32_t x279 = 11U;
volatile uint64_t x280 = 50LLU;
volatile int64_t x281 = INT64_MIN;
int8_t x286 = INT8_MIN;
int32_t x288 = INT32_MIN;
int8_t x291 = 21;
int64_t x292 = 72826663108320LL;
static int32_t x303 = -135;
volatile int32_t t75 = -2487;
int8_t x314 = -1;
static int64_t x317 = INT64_MIN;
int32_t t80 = 3;
volatile int32_t x326 = INT32_MIN;
static int16_t x327 = -2022;
uint16_t x331 = 153U;
int64_t x332 = INT64_MIN;
static int32_t t82 = 31702991;
int64_t x334 = -1LL;
uint8_t x338 = 5U;
int8_t x339 = INT8_MIN;
int8_t x343 = INT8_MIN;
uint16_t x345 = 474U;
uint8_t x347 = UINT8_MAX;
volatile int64_t x349 = 517LL;
uint64_t x353 = 514064LLU;
volatile int32_t t89 = 103;
static int32_t t90 = 417687937;
int8_t x368 = INT8_MIN;
volatile int8_t x369 = INT8_MIN;
int32_t x375 = 26810;
volatile int64_t x378 = INT64_MIN;
volatile int32_t x386 = INT32_MIN;
static int8_t x397 = 1;
int8_t x399 = 0;


void f0(void) {
	static int32_t x1 = -1;
	static int16_t x2 = 424;
	volatile int64_t x3 = -8323773LL;
	int16_t x4 = INT16_MIN;

	t0 = ((x1&x2)<=(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = -214729;

	t1 = ((x5&x6)<=(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 3U;
	static volatile int64_t x10 = -1LL;
	int32_t x11 = -1;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -870;

	t2 = ((x9&x10)<=(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 2U;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 195755054;

	t3 = ((x13&x14)<=(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = 1330;
	volatile int16_t x20 = INT16_MIN;
	static int32_t t4 = 508486;

	t4 = ((x17&x18)<=(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x23 = UINT8_MAX;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 0;

	t5 = ((x21&x22)<=(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MAX;
	int8_t x28 = 1;
	int32_t t6 = 1;

	t6 = ((x25&x26)<=(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = -535530698;
	static int16_t x31 = -3;
	uint32_t x32 = 90301449U;
	int32_t t7 = 15;

	t7 = ((x29&x30)<=(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int64_t x35 = -1LL;
	int64_t x36 = 0LL;
	volatile int32_t t8 = -36;

	t8 = ((x33&x34)<=(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x40 = 28978U;
	int32_t t9 = 3332;

	t9 = ((x37&x38)<=(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -12790LL;
	volatile int16_t x42 = INT16_MAX;
	int64_t x44 = 237754LL;

	t10 = ((x41&x42)<=(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MIN;
	static uint32_t x47 = 3U;
	uint8_t x48 = 114U;

	t11 = ((x45&x46)<=(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = -4818910LL;
	uint16_t x52 = 49U;
	int32_t t12 = -1;

	t12 = ((x49&x50)<=(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = -1LL;
	uint16_t x55 = 0U;
	uint64_t x56 = 1LLU;
	static volatile int32_t t13 = -245;

	t13 = ((x53&x54)<=(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = -1;
	int8_t x59 = INT8_MIN;
	volatile int32_t x60 = 60868289;
	int32_t t14 = 15089;

	t14 = ((x57&x58)<=(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MAX;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = -42;
	volatile int32_t t15 = -4314;

	t15 = ((x61&x62)<=(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MAX;
	uint8_t x68 = UINT8_MAX;
	static volatile int32_t t16 = -157767;

	t16 = ((x65&x66)<=(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 169792086U;
	int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	static int64_t x72 = -1LL;
	volatile int32_t t17 = -31026;

	t17 = ((x69&x70)<=(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	volatile int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MIN;
	static int32_t t18 = 0;

	t18 = ((x73&x74)<=(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = 0;

	t19 = ((x77&x78)<=(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MIN;
	volatile uint32_t x83 = 8U;
	int32_t t20 = 35006772;

	t20 = ((x81&x82)<=(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x86 = UINT16_MAX;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = -25114718;

	t21 = ((x85&x86)<=(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 21473U;
	uint32_t x90 = 10537419U;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t22 = -13;

	t22 = ((x89&x90)<=(x91^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	int64_t x94 = 324453804274031138LL;
	int8_t x95 = INT8_MAX;
	uint8_t x96 = 26U;
	static int32_t t23 = -26298860;

	t23 = ((x93&x94)<=(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x99 = 246554482824752LLU;
	static int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 52346953;

	t24 = ((x97&x98)<=(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = 167;
	int16_t x104 = INT16_MAX;
	static int32_t t25 = -149087;

	t25 = ((x101&x102)<=(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = 1;
	int32_t x106 = 100226;
	static uint64_t x108 = 7562308670005134112LLU;
	int32_t t26 = 31981118;

	t26 = ((x105&x106)<=(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 105322LLU;
	volatile int8_t x110 = INT8_MIN;
	uint8_t x111 = 99U;
	int8_t x112 = INT8_MAX;
	int32_t t27 = -21437972;

	t27 = ((x109&x110)<=(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = -1LL;
	int64_t x115 = INT64_MIN;
	static int64_t x116 = 5944738393LL;

	t28 = ((x113&x114)<=(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -1;
	static int16_t x118 = INT16_MAX;
	int8_t x119 = INT8_MAX;
	static int32_t x120 = INT32_MIN;
	int32_t t29 = -3775294;

	t29 = ((x117&x118)<=(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -658;
	volatile int32_t x122 = -1;
	int8_t x123 = INT8_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = -90722;

	t30 = ((x121&x122)<=(x123^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MIN;
	static volatile int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -931783023;

	t31 = ((x125&x126)<=(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	int32_t x131 = -39;
	static int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = 82253;

	t32 = ((x129&x130)<=(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 1U;
	static uint16_t x134 = 489U;
	int32_t x136 = 898544617;
	volatile int32_t t33 = 8295625;

	t33 = ((x133&x134)<=(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MAX;
	volatile uint64_t x139 = 15344326LLU;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 29183;

	t34 = ((x137&x138)<=(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MIN;
	static int32_t x144 = 8077513;

	t35 = ((x141&x142)<=(x143^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	volatile int16_t x146 = -12;
	volatile int32_t x148 = INT32_MIN;
	static int32_t t36 = 102636;

	t36 = ((x145&x146)<=(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 4;
	static int64_t x150 = INT64_MIN;
	volatile uint32_t x151 = 986921U;
	volatile int64_t x152 = 44LL;
	volatile int32_t t37 = -466244;

	t37 = ((x149&x150)<=(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint64_t x155 = 3LLU;
	int32_t x156 = -2;
	int32_t t38 = -13880;

	t38 = ((x153&x154)<=(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 1U;
	static uint64_t x158 = UINT64_MAX;
	static int16_t x159 = -1;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 72;

	t39 = ((x157&x158)<=(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 78U;
	int32_t x162 = INT32_MIN;
	static uint16_t x164 = 238U;
	static int32_t t40 = 5;

	t40 = ((x161&x162)<=(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	int32_t x168 = -1;
	int32_t t41 = -130188;

	t41 = ((x165&x166)<=(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	static int8_t x171 = 54;
	int16_t x172 = INT16_MIN;
	int32_t t42 = 11;

	t42 = ((x169&x170)<=(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 88U;
	volatile int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 36LLU;
	static int32_t t43 = -28666563;

	t43 = ((x173&x174)<=(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x178 = UINT8_MAX;
	static volatile int8_t x179 = 0;
	int32_t t44 = -13344;

	t44 = ((x177&x178)<=(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	static int32_t x182 = -1;
	int32_t x183 = INT32_MIN;
	volatile int64_t x184 = INT64_MAX;
	int32_t t45 = -61780725;

	t45 = ((x181&x182)<=(x183^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	uint64_t x187 = 10LLU;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -4571;

	t46 = ((x185&x186)<=(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MIN;
	int32_t x192 = -1;
	static int32_t t47 = -76;

	t47 = ((x189&x190)<=(x191^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 18622LLU;
	static int32_t x194 = -1;
	static int64_t x195 = INT64_MIN;
	uint32_t x196 = 0U;

	t48 = ((x193&x194)<=(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 250443803730LLU;
	int16_t x200 = 1;
	int32_t t49 = 15027;

	t49 = ((x197&x198)<=(x199^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -9384;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = 26116623LLU;
	volatile int32_t t50 = 469;

	t50 = ((x201&x202)<=(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	volatile uint32_t x207 = 964297588U;
	int64_t x208 = 7166050LL;
	volatile int32_t t51 = -495442;

	t51 = ((x205&x206)<=(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 328180;
	int8_t x210 = -1;
	int16_t x211 = INT16_MIN;
	int64_t x212 = 17136509219384874LL;
	int32_t t52 = 37;

	t52 = ((x209&x210)<=(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 0;
	int64_t x214 = -1LL;
	uint64_t x215 = 6078554LLU;
	uint16_t x216 = UINT16_MAX;

	t53 = ((x213&x214)<=(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -10;
	int64_t x218 = 0LL;
	volatile int32_t t54 = -6203656;

	t54 = ((x217&x218)<=(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x222 = 292LLU;
	int8_t x223 = 0;
	uint32_t x224 = 2596U;
	int32_t t55 = 0;

	t55 = ((x221&x222)<=(x223^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	volatile int8_t x226 = 3;
	volatile uint16_t x227 = 15U;
	uint64_t x228 = 6LLU;
	int32_t t56 = -62540;

	t56 = ((x225&x226)<=(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 4954;
	static int8_t x231 = INT8_MAX;
	uint64_t x232 = 3692LLU;
	int32_t t57 = 30137565;

	t57 = ((x229&x230)<=(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	volatile int16_t x236 = INT16_MAX;
	int32_t t58 = -1447000;

	t58 = ((x233&x234)<=(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	static int8_t x240 = INT8_MIN;
	int32_t t59 = -762632;

	t59 = ((x237&x238)<=(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = -1LL;
	int8_t x243 = -10;

	t60 = ((x241&x242)<=(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	int8_t x248 = INT8_MAX;

	t61 = ((x245&x246)<=(x247^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 6160U;
	int16_t x250 = INT16_MIN;
	static uint64_t x251 = 310475350026735499LLU;
	int8_t x252 = INT8_MAX;

	t62 = ((x249&x250)<=(x251^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -17;
	int8_t x254 = INT8_MIN;
	volatile uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	static int32_t t63 = 865622;

	t63 = ((x253&x254)<=(x255^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 5648;
	int16_t x259 = INT16_MIN;
	int8_t x260 = 7;
	int32_t t64 = 353;

	t64 = ((x257&x258)<=(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static uint8_t x262 = 6U;
	volatile uint64_t x263 = 1802LLU;
	int32_t x264 = 20868086;
	volatile int32_t t65 = 25226870;

	t65 = ((x261&x262)<=(x263^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x265 = 22544904U;
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = INT32_MAX;
	static volatile int32_t t66 = -40;

	t66 = ((x265&x266)<=(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -11;

	t67 = ((x269&x270)<=(x271^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = -1;
	int8_t x274 = INT8_MIN;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = -33054240;

	t68 = ((x273&x274)<=(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 6;
	static int64_t x278 = 120973399LL;
	static volatile int32_t t69 = 0;

	t69 = ((x277&x278)<=(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	volatile int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 11077;

	t70 = ((x281&x282)<=(x283^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 38096912U;
	int32_t x287 = INT32_MAX;
	int32_t t71 = -1;

	t71 = ((x285&x286)<=(x287^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 124620962LLU;
	static int32_t x290 = 0;
	volatile int32_t t72 = -753873;

	t72 = ((x289&x290)<=(x291^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static volatile uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	static uint64_t x296 = 44572LLU;
	volatile int32_t t73 = 933;

	t73 = ((x293&x294)<=(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 21550U;
	uint32_t x298 = UINT32_MAX;
	volatile uint64_t x299 = 8768LLU;
	volatile int64_t x300 = INT64_MIN;
	int32_t t74 = -111228;

	t74 = ((x297&x298)<=(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static uint8_t x302 = 3U;
	int64_t x304 = -1LL;

	t75 = ((x301&x302)<=(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 17;
	uint16_t x306 = 2U;
	int16_t x307 = INT16_MAX;
	volatile int16_t x308 = 1;
	int32_t t76 = 3;

	t76 = ((x305&x306)<=(x307^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -475149843574446246LL;
	volatile int64_t x310 = -155859244LL;
	int16_t x311 = 347;
	uint32_t x312 = 225183U;
	volatile int32_t t77 = 24312125;

	t77 = ((x309&x310)<=(x311^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 0U;
	volatile int16_t x315 = -8698;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = 1;

	t78 = ((x313&x314)<=(x315^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x318 = 6;
	volatile uint16_t x319 = 2U;
	volatile int8_t x320 = -1;
	int32_t t79 = 1280;

	t79 = ((x317&x318)<=(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 1790418U;
	int8_t x322 = -1;
	volatile int64_t x323 = -1LL;
	volatile int8_t x324 = INT8_MIN;

	t80 = ((x321&x322)<=(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x328 = INT32_MIN;
	int32_t t81 = -164610196;

	t81 = ((x325&x326)<=(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 568;
	static int64_t x330 = -1LL;

	t82 = ((x329&x330)<=(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	int8_t x335 = -1;
	static int64_t x336 = 88722854636006LL;
	int32_t t83 = -45845705;

	t83 = ((x333&x334)<=(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = 182635;
	volatile int16_t x340 = -1;
	volatile int32_t t84 = -28120;

	t84 = ((x337&x338)<=(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -104057;
	volatile int32_t x342 = -1;
	static volatile int16_t x344 = 34;
	int32_t t85 = 96;

	t85 = ((x341&x342)<=(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 3;
	static volatile int64_t x348 = -1LL;
	volatile int32_t t86 = -1;

	t86 = ((x345&x346)<=(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = -1;
	int8_t x351 = -7;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = 353;

	t87 = ((x349&x350)<=(x351^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x354 = 2936U;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 142870092900326193LLU;
	volatile int32_t t88 = 155826;

	t88 = ((x353&x354)<=(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 3U;
	uint16_t x358 = 5175U;
	int16_t x359 = -736;
	int64_t x360 = -1568021555470655787LL;

	t89 = ((x357&x358)<=(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	uint32_t x362 = 1U;
	volatile int16_t x363 = 11;
	volatile uint16_t x364 = 239U;

	t90 = ((x361&x362)<=(x363^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int64_t x366 = INT64_MAX;
	int64_t x367 = -153811750LL;
	int32_t t91 = 56;

	t91 = ((x365&x366)<=(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	int32_t t92 = 723306;

	t92 = ((x369&x370)<=(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	uint64_t x374 = 8LLU;
	uint8_t x376 = 0U;
	volatile int32_t t93 = 30;

	t93 = ((x373&x374)<=(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	volatile uint64_t x380 = 6125497LLU;
	static volatile int32_t t94 = -571;

	t94 = ((x377&x378)<=(x379^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 27U;
	int16_t x382 = 927;
	int64_t x383 = INT64_MIN;
	static int8_t x384 = -2;
	volatile int32_t t95 = 8192263;

	t95 = ((x381&x382)<=(x383^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int8_t x387 = INT8_MAX;
	static uint64_t x388 = UINT64_MAX;
	int32_t t96 = 58947;

	t96 = ((x385&x386)<=(x387^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = -1;
	uint8_t x391 = 8U;
	int16_t x392 = -1;
	volatile int32_t t97 = 2079216;

	t97 = ((x389&x390)<=(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	static volatile int8_t x395 = INT8_MAX;
	volatile int16_t x396 = INT16_MIN;
	int32_t t98 = 397356;

	t98 = ((x393&x394)<=(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = 37511667750574001LL;
	int8_t x400 = -1;
	int32_t t99 = 20;

	t99 = ((x397&x398)<=(x399^x400));

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

