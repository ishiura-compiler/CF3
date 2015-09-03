#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = UINT64_MAX;
int8_t x21 = INT8_MIN;
uint32_t x25 = 1U;
volatile int64_t x29 = -29LL;
static int64_t x32 = 3497LL;
volatile uint32_t x33 = UINT32_MAX;
volatile uint32_t x34 = 1550U;
volatile int64_t x44 = INT64_MIN;
int16_t x46 = INT16_MIN;
uint64_t x47 = 39328078086891964LLU;
int32_t x50 = -1;
int64_t x51 = 4512LL;
uint8_t x58 = 9U;
static int8_t x61 = -1;
static int64_t x63 = -1LL;
int32_t t14 = 51562614;
static uint8_t x66 = UINT8_MAX;
volatile int32_t t15 = 10;
int32_t x72 = INT32_MAX;
int16_t x73 = INT16_MAX;
static uint64_t x74 = 622889177LLU;
static int32_t x81 = 685418940;
volatile uint64_t x90 = 867LLU;
volatile uint64_t x93 = 5LLU;
uint32_t x104 = UINT32_MAX;
int32_t x105 = INT32_MIN;
int64_t x108 = -425936507174LL;
uint8_t x109 = 4U;
static int64_t x112 = INT64_MIN;
volatile int64_t t25 = INT64_MIN;
uint64_t x121 = 28022LLU;
int16_t x133 = -7;
int16_t x135 = -1;
uint8_t x137 = 5U;
int32_t x140 = INT32_MIN;
static volatile int64_t x144 = INT64_MIN;
int32_t x153 = INT32_MAX;
uint8_t x155 = 1U;
int8_t x158 = INT8_MAX;
static volatile int32_t t35 = INT32_MAX;
static int8_t x166 = 16;
static int16_t x169 = 5;
uint32_t x189 = UINT32_MAX;
volatile uint32_t x193 = 57U;
int64_t x194 = -1LL;
int16_t x195 = INT16_MAX;
int8_t x198 = INT8_MIN;
int8_t x200 = 1;
volatile int32_t x213 = -800985170;
int64_t x214 = -1LL;
int32_t x215 = INT32_MIN;
int32_t t45 = 16319;
int64_t x217 = INT64_MIN;
static uint8_t x219 = 1U;
int8_t x220 = -1;
int32_t t46 = 1592;
uint8_t x224 = UINT8_MAX;
volatile int32_t t48 = -82811;
uint8_t x234 = 4U;
static int64_t x243 = 8685921846278LL;
int32_t t50 = 408;
static volatile int64_t t56 = 216333920311737655LL;
int8_t x271 = INT8_MIN;
static int32_t x277 = INT32_MAX;
uint16_t x279 = 5492U;
uint64_t x283 = 7816612303231LLU;
int64_t x292 = INT64_MIN;
int32_t x296 = -1;
int16_t x299 = INT16_MIN;
int16_t x308 = INT16_MIN;
uint8_t x312 = 10U;
int8_t x317 = INT8_MIN;
int64_t x319 = -270454619765LL;
static uint32_t x327 = 1U;
int32_t x336 = INT32_MIN;
volatile uint64_t x338 = UINT64_MAX;
volatile int16_t x339 = INT16_MIN;
int32_t t72 = 931;
int64_t x345 = -1LL;
static volatile int64_t x353 = 23509314333144LL;
int16_t x354 = 1052;
int32_t x360 = INT32_MIN;
int8_t x366 = INT8_MIN;
uint8_t x367 = 62U;
int16_t x369 = INT16_MIN;
uint8_t x380 = UINT8_MAX;
int32_t x385 = 607;
static int8_t x389 = INT8_MIN;
int64_t x390 = -13921485379LL;
volatile int64_t t85 = 3022768479LL;
uint64_t x397 = 4856044261592LLU;
static int8_t x399 = INT8_MAX;
int8_t x403 = 1;
volatile int8_t x406 = INT8_MAX;
int8_t x409 = INT8_MAX;
int64_t x410 = -72263LL;
int64_t x416 = INT64_MIN;
static uint8_t x423 = 51U;
uint8_t x424 = 6U;
static int8_t x426 = INT8_MIN;
int16_t x428 = -1729;
int32_t t93 = 3;
uint16_t x436 = UINT16_MAX;
uint16_t x439 = UINT16_MAX;
volatile int16_t x442 = 3521;
int16_t x445 = INT16_MIN;
static volatile uint64_t x446 = 176926092493015797LLU;
uint16_t x448 = 8730U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile uint32_t x2 = 21U;
	uint8_t x3 = 33U;
	int32_t x4 = -1;
	volatile int32_t t0 = -3;

	t0 = (((x1+x2)<x3)*x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -85595;
	int16_t x6 = -1;
	static int8_t x7 = 1;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = (((x5+x6)<x7)*x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MAX;
	volatile int32_t x14 = 8940322;
	int16_t x15 = -1;
	int64_t x16 = INT64_MIN;
	int64_t t2 = -2285202889518411327LL;

	t2 = (((x13+x14)<x15)*x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = -1;
	static uint64_t x18 = UINT64_MAX;
	static int32_t x19 = INT32_MAX;
	static volatile uint16_t x20 = 0U;
	volatile int32_t t3 = 25;

	t3 = (((x17+x18)<x19)*x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 3U;
	int64_t x23 = -54980486233LL;
	static int16_t x24 = INT16_MAX;
	int32_t t4 = -2;

	t4 = (((x21+x22)<x23)*x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = -10136;
	volatile int64_t x27 = 1LL;
	int16_t x28 = INT16_MAX;
	volatile int32_t t5 = -21643;

	t5 = (((x25+x26)<x27)*x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = INT32_MIN;
	volatile int64_t t6 = -31799894LL;

	t6 = (((x29+x30)<x31)*x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x35 = INT64_MAX;
	int32_t x36 = -1;
	static int32_t t7 = -5313;

	t7 = (((x33+x34)<x35)*x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = 0;
	uint32_t x39 = UINT32_MAX;
	static volatile int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -5187;

	t8 = (((x37+x38)<x39)*x40);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 6111347LLU;
	int16_t x42 = INT16_MAX;
	volatile int8_t x43 = INT8_MAX;
	volatile int64_t t9 = 2295274LL;

	t9 = (((x41+x42)<x43)*x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = 88946U;
	volatile int64_t x48 = -1LL;
	volatile int64_t t10 = -4024167588349887LL;

	t10 = (((x45+x46)<x47)*x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (((x49+x50)<x51)*x52);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 3;
	static uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = 667U;
	volatile int32_t t12 = 1;

	t12 = (((x53+x54)<x55)*x56);

	if (t12 != 667) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 279546729798291209LLU;
	int8_t x59 = 0;
	static uint64_t x60 = 76344627324009053LLU;
	volatile uint64_t t13 = 13632203087727459LLU;

	t13 = (((x57+x58)<x59)*x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = 91980;
	int32_t x64 = -1;

	t14 = (((x61+x62)<x63)*x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = -741LL;
	int32_t x67 = -856557359;
	static uint16_t x68 = 10611U;

	t15 = (((x65+x66)<x67)*x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	volatile int16_t x70 = -792;
	int16_t x71 = INT16_MIN;
	int32_t t16 = 220439;

	t16 = (((x69+x70)<x71)*x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x75 = 0;
	int8_t x76 = INT8_MAX;
	int32_t t17 = -649812783;

	t17 = (((x73+x74)<x75)*x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MAX;
	int8_t x79 = -1;
	volatile int64_t x80 = 153LL;
	volatile int64_t t18 = 191939LL;

	t18 = (((x77+x78)<x79)*x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = UINT32_MAX;
	uint8_t x83 = UINT8_MAX;
	static uint16_t x84 = 7938U;
	int32_t t19 = 1;

	t19 = (((x81+x82)<x83)*x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = -18;

	t20 = (((x89+x90)<x91)*x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = -4189;
	uint64_t x95 = 302487874LLU;
	int16_t x96 = -1;
	int32_t t21 = 1346;

	t21 = (((x93+x94)<x95)*x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	int32_t x98 = -33167632;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;
	int32_t t22 = 744;

	t22 = (((x97+x98)<x99)*x100);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	static volatile uint32_t t23 = 6715U;

	t23 = (((x101+x102)<x103)*x104);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x106 = 57658297U;
	static uint8_t x107 = 0U;
	volatile int64_t t24 = -8724734LL;

	t24 = (((x105+x106)<x107)*x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = -7636;
	static int16_t x111 = -235;

	t25 = (((x109+x110)<x111)*x112);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 123;
	uint64_t x114 = 1LLU;
	uint32_t x115 = 534477U;
	static int8_t x116 = -1;
	int32_t t26 = 538556;

	t26 = (((x113+x114)<x115)*x116);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = 296789871;
	volatile int8_t x119 = INT8_MIN;
	volatile int8_t x120 = -1;
	static volatile int32_t t27 = -5672191;

	t27 = (((x117+x118)<x119)*x120);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = -1LL;
	static int16_t x123 = -1;
	volatile uint16_t x124 = 1087U;
	volatile int32_t t28 = 95;

	t28 = (((x121+x122)<x123)*x124);

	if (t28 != 1087) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = -8572;
	uint8_t x130 = 12U;
	uint32_t x131 = 13U;
	volatile int64_t x132 = INT64_MIN;
	int64_t t29 = -88LL;

	t29 = (((x129+x130)<x131)*x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = 1;
	int64_t x136 = INT64_MAX;
	static int64_t t30 = INT64_MAX;

	t30 = (((x133+x134)<x135)*x136);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = 4383;
	int8_t x139 = INT8_MAX;
	int32_t t31 = -1704;

	t31 = (((x137+x138)<x139)*x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = 93373712;
	int8_t x142 = -15;
	volatile int64_t x143 = -1LL;
	int64_t t32 = 1662505206LL;

	t32 = (((x141+x142)<x143)*x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 7706603526677743LLU;
	volatile int64_t x146 = INT64_MAX;
	volatile uint32_t x147 = UINT32_MAX;
	static uint32_t x148 = 1917230194U;
	uint32_t t33 = 3254U;

	t33 = (((x145+x146)<x147)*x148);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x154 = UINT64_MAX;
	static uint64_t x156 = 1617164788958077869LLU;
	uint64_t t34 = 15803848624LLU;

	t34 = (((x153+x154)<x155)*x156);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = INT64_MIN;
	uint8_t x159 = 56U;
	int32_t x160 = INT32_MAX;

	t35 = (((x157+x158)<x159)*x160);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint16_t x162 = UINT16_MAX;
	uint32_t x163 = 695U;
	uint16_t x164 = UINT16_MAX;
	int32_t t36 = 995;

	t36 = (((x161+x162)<x163)*x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 5119U;
	int16_t x167 = INT16_MIN;
	static int16_t x168 = INT16_MIN;
	int32_t t37 = -163;

	t37 = (((x165+x166)<x167)*x168);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x170 = INT16_MIN;
	int32_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x169+x170)<x171)*x172);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x178 = 120653789LLU;
	static int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t39 = -927990;

	t39 = (((x177+x178)<x179)*x180);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 17U;
	static uint16_t x186 = 72U;
	int16_t x187 = 4218;
	int16_t x188 = 0;
	static int32_t t40 = 260358325;

	t40 = (((x185+x186)<x187)*x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = 57207U;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = INT8_MIN;
	int32_t t41 = -97638233;

	t41 = (((x189+x190)<x191)*x192);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x196 = INT16_MIN;
	int32_t t42 = 119255603;

	t42 = (((x193+x194)<x195)*x196);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MAX;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t t43 = 1;

	t43 = (((x197+x198)<x199)*x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = -34;
	uint16_t x210 = 13875U;
	uint16_t x211 = 0U;
	int16_t x212 = 241;
	int32_t t44 = 293544;

	t44 = (((x209+x210)<x211)*x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x216 = INT8_MIN;

	t45 = (((x213+x214)<x215)*x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x218 = 0U;

	t46 = (((x217+x218)<x219)*x220);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	static int32_t x223 = INT32_MIN;
	static volatile int32_t t47 = 2413;

	t47 = (((x221+x222)<x223)*x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = 18101U;
	int64_t x231 = 684LL;
	uint8_t x232 = 0U;

	t48 = (((x229+x230)<x231)*x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x233 = -1;
	int8_t x235 = INT8_MIN;
	int8_t x236 = 63;
	int32_t t49 = 7775615;

	t49 = (((x233+x234)<x235)*x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MAX;
	volatile uint16_t x244 = 12771U;

	t50 = (((x241+x242)<x243)*x244);

	if (t50 != 12771) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x245 = UINT64_MAX;
	int8_t x246 = -1;
	int64_t x247 = INT64_MIN;
	int64_t x248 = 1LL;
	volatile int64_t t51 = -4900419LL;

	t51 = (((x245+x246)<x247)*x248);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 175143966641LLU;
	int8_t x250 = 10;
	int64_t x251 = -1LL;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t52 = -207476044;

	t52 = (((x249+x250)<x251)*x252);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x253 = 6982LL;
	int16_t x254 = INT16_MIN;
	int64_t x255 = 203514679247386109LL;
	int8_t x256 = -22;
	int32_t t53 = 0;

	t53 = (((x253+x254)<x255)*x256);

	if (t53 != -22) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = UINT16_MAX;
	static int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	int64_t x260 = -1LL;
	int64_t t54 = 28181LL;

	t54 = (((x257+x258)<x259)*x260);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = 74172698035524505LLU;
	int32_t x262 = INT32_MAX;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = INT32_MIN;
	static volatile int32_t t55 = 0;

	t55 = (((x261+x262)<x263)*x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	int64_t x267 = -1LL;
	int64_t x268 = 569840661999315831LL;

	t56 = (((x265+x266)<x267)*x268);

	if (t56 != 569840661999315831LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x269 = -1;
	int32_t x270 = INT32_MAX;
	uint8_t x272 = UINT8_MAX;
	int32_t t57 = -3;

	t57 = (((x269+x270)<x271)*x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x278 = INT32_MIN;
	volatile uint16_t x280 = UINT16_MAX;
	int32_t t58 = 303763279;

	t58 = (((x277+x278)<x279)*x280);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x281 = INT16_MIN;
	uint64_t x282 = 1LLU;
	static volatile uint8_t x284 = 5U;
	int32_t t59 = -1;

	t59 = (((x281+x282)<x283)*x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int64_t x286 = -1LL;
	static int32_t x287 = -2;
	static uint64_t x288 = UINT64_MAX;
	volatile uint64_t t60 = 118238671LLU;

	t60 = (((x285+x286)<x287)*x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -1LL;
	int64_t x290 = -302269258914257588LL;
	volatile uint64_t x291 = 2074318024240489408LLU;
	volatile int64_t t61 = 2304390201274LL;

	t61 = (((x289+x290)<x291)*x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x293 = 880905243115LLU;
	volatile int32_t x294 = INT32_MIN;
	uint64_t x295 = 96LLU;
	int32_t t62 = 3163499;

	t62 = (((x293+x294)<x295)*x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x297 = INT16_MIN;
	uint16_t x298 = 13450U;
	int32_t x300 = INT32_MIN;
	int32_t t63 = -410806674;

	t63 = (((x297+x298)<x299)*x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = 90447806LLU;
	uint64_t x302 = 1458545929784LLU;
	int32_t x303 = 3;
	volatile uint64_t x304 = 37270506837250LLU;
	volatile uint64_t t64 = 25818749493377LLU;

	t64 = (((x301+x302)<x303)*x304);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 3612337237786LLU;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MAX;
	volatile int32_t t65 = -20;

	t65 = (((x305+x306)<x307)*x308);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = 8U;
	int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int32_t t66 = -24;

	t66 = (((x309+x310)<x311)*x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = 9131422LLU;
	int8_t x314 = 1;
	int16_t x315 = INT16_MIN;
	volatile int8_t x316 = -1;
	int32_t t67 = -96249;

	t67 = (((x313+x314)<x315)*x316);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x318 = 13013866252LL;
	volatile int64_t x320 = -4162285LL;
	volatile int64_t t68 = -1949858915LL;

	t68 = (((x317+x318)<x319)*x320);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = -50214130LL;
	volatile int32_t x326 = -1;
	uint16_t x328 = 1230U;
	int32_t t69 = -19132;

	t69 = (((x325+x326)<x327)*x328);

	if (t69 != 1230) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	volatile uint16_t x331 = UINT16_MAX;
	static volatile int8_t x332 = -1;
	volatile int32_t t70 = -6367;

	t70 = (((x329+x330)<x331)*x332);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 1U;
	int16_t x334 = -1;
	int8_t x335 = -2;
	volatile int32_t t71 = -2057824;

	t71 = (((x333+x334)<x335)*x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = INT32_MIN;
	int32_t x340 = -1;

	t72 = (((x337+x338)<x339)*x340);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x341 = 38008U;
	int32_t x342 = -129489320;
	int8_t x343 = -1;
	uint64_t x344 = 1384989LLU;
	static uint64_t t73 = 1LLU;

	t73 = (((x341+x342)<x343)*x344);

	if (t73 != 1384989LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x346 = -1;
	static volatile uint16_t x347 = 57U;
	static int16_t x348 = -1;
	volatile int32_t t74 = -734464;

	t74 = (((x345+x346)<x347)*x348);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x349 = UINT8_MAX;
	uint32_t x350 = 1219739U;
	int8_t x351 = INT8_MAX;
	static int64_t x352 = 17759640836LL;
	static volatile int64_t t75 = -1001744875015819364LL;

	t75 = (((x349+x350)<x351)*x352);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x355 = -1;
	static int16_t x356 = INT16_MIN;
	int32_t t76 = 13058034;

	t76 = (((x353+x354)<x355)*x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x357 = -1;
	int16_t x358 = -1;
	int32_t x359 = INT32_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = (((x357+x358)<x359)*x360);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x361 = 196176;
	int8_t x362 = -1;
	uint64_t x363 = 1809950879302313LLU;
	static int8_t x364 = -1;
	volatile int32_t t78 = -246070583;

	t78 = (((x361+x362)<x363)*x364);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x365 = INT16_MIN;
	volatile int16_t x368 = -1;
	int32_t t79 = 1;

	t79 = (((x365+x366)<x367)*x368);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x370 = 7572416759LLU;
	static int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MAX;
	int32_t t80 = -804;

	t80 = (((x369+x370)<x371)*x372);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x373 = 55U;
	int8_t x374 = 0;
	uint8_t x375 = 113U;
	int8_t x376 = -1;
	volatile int32_t t81 = -931849;

	t81 = (((x373+x374)<x375)*x376);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x377 = -1;
	uint64_t x378 = 4497LLU;
	uint8_t x379 = 26U;
	volatile int32_t t82 = 286878;

	t82 = (((x377+x378)<x379)*x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x386 = 2817181U;
	int8_t x387 = 1;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t83 = 7725526;

	t83 = (((x385+x386)<x387)*x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t84 = INT32_MIN;

	t84 = (((x389+x390)<x391)*x392);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = -1;
	uint32_t x394 = 413690U;
	uint8_t x395 = 5U;
	int64_t x396 = INT64_MAX;

	t85 = (((x393+x394)<x395)*x396);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x398 = INT32_MIN;
	static int64_t x400 = INT64_MIN;
	static int64_t t86 = -474354675445414895LL;

	t86 = (((x397+x398)<x399)*x400);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = -1229095452LL;
	static uint8_t x402 = UINT8_MAX;
	static int64_t x404 = -1425LL;
	int64_t t87 = 24216LL;

	t87 = (((x401+x402)<x403)*x404);

	if (t87 != -1425LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = INT64_MIN;
	int64_t x407 = INT64_MAX;
	uint16_t x408 = 115U;
	volatile int32_t t88 = -179063;

	t88 = (((x405+x406)<x407)*x408);

	if (t88 != 115) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x411 = INT8_MIN;
	volatile uint64_t x412 = 1223398926622918LLU;
	uint64_t t89 = 1045199807LLU;

	t89 = (((x409+x410)<x411)*x412);

	if (t89 != 1223398926622918LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = UINT8_MAX;
	uint32_t x414 = UINT32_MAX;
	volatile int32_t x415 = INT32_MAX;
	volatile int64_t t90 = INT64_MIN;

	t90 = (((x413+x414)<x415)*x416);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = -1;
	int16_t x418 = -9237;
	int16_t x419 = -1;
	static uint32_t x420 = 18334U;
	volatile uint32_t t91 = 29U;

	t91 = (((x417+x418)<x419)*x420);

	if (t91 != 18334U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x421 = UINT16_MAX;
	volatile int64_t x422 = INT64_MIN;
	static int32_t t92 = 1999;

	t92 = (((x421+x422)<x423)*x424);

	if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x425 = -209741416949LL;
	static volatile int16_t x427 = -109;

	t93 = (((x425+x426)<x427)*x428);

	if (t93 != -1729) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x429 = 77;
	uint64_t x430 = 152547355618LLU;
	static int64_t x431 = INT64_MIN;
	int64_t x432 = -1LL;
	volatile int64_t t94 = 193LL;

	t94 = (((x429+x430)<x431)*x432);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x434 = 41U;
	int32_t x435 = 71882745;
	volatile int32_t t95 = 28054239;

	t95 = (((x433+x434)<x435)*x436);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = 2109394;
	static int8_t x438 = -13;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t96 = 45041U;

	t96 = (((x437+x438)<x439)*x440);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MIN;
	uint16_t x443 = 365U;
	int16_t x444 = -1;
	int32_t t97 = -9225;

	t97 = (((x441+x442)<x443)*x444);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x447 = -1;
	int32_t t98 = -1;

	t98 = (((x445+x446)<x447)*x448);

	if (t98 != 8730) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x449 = 4183U;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 1U;
	int32_t x452 = INT32_MAX;
	int32_t t99 = INT32_MAX;

	t99 = (((x449+x450)<x451)*x452);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

