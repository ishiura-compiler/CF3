#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1459463;
int8_t x5 = 29;
uint16_t x8 = UINT16_MAX;
uint32_t x9 = 0U;
uint64_t x11 = 15372LLU;
int64_t x13 = 5274309605LL;
uint32_t x14 = UINT32_MAX;
uint32_t x16 = 49717862U;
static uint64_t x20 = 12845695351930482LLU;
int64_t t7 = 8061301563LL;
static volatile uint32_t x34 = 14410882U;
int32_t x35 = INT32_MIN;
volatile int8_t x42 = -3;
uint64_t x43 = 294296768LLU;
int16_t x51 = 384;
int64_t x54 = -1LL;
uint16_t x55 = 0U;
volatile int64_t x59 = INT64_MIN;
static int16_t x60 = -1;
int64_t x64 = -1LL;
volatile int32_t t16 = 77;
uint64_t t18 = UINT64_MAX;
int64_t x88 = INT64_MAX;
int32_t x98 = 37921312;
uint32_t x103 = 1854U;
static int32_t x109 = -1;
static int64_t x140 = -738628239594998613LL;
int64_t t33 = 12340413874106328LL;
volatile uint16_t x155 = 5U;
uint32_t x162 = 3949871U;
volatile uint32_t x163 = 13307459U;
uint8_t x171 = 51U;
volatile uint8_t x173 = UINT8_MAX;
uint8_t x179 = 0U;
static uint16_t x183 = 708U;
uint64_t t46 = UINT64_MAX;
uint32_t x204 = UINT32_MAX;
uint8_t x210 = 0U;
static volatile int8_t x219 = 6;
static int8_t x229 = INT8_MIN;
uint32_t x230 = 1436979763U;
volatile int64_t t56 = 171942833162183948LL;
int64_t t57 = 2777823887LL;
volatile int32_t x261 = -1;
static volatile uint64_t t61 = UINT64_MAX;
uint32_t x273 = 250937U;
int16_t x274 = INT16_MIN;
volatile uint64_t x280 = 5741LLU;
static uint64_t t66 = 1073959237LLU;
int8_t x287 = 2;
static int16_t x294 = INT16_MAX;
volatile int32_t t68 = 1942;
int64_t t70 = 1480899990LL;
int32_t x308 = INT32_MAX;
int16_t x312 = -7;
static uint64_t t73 = UINT64_MAX;
int8_t x320 = INT8_MIN;
volatile int16_t x333 = 410;
uint64_t x335 = 4477259198929398LLU;
uint32_t x343 = 3360658U;
static volatile int64_t t80 = 273637847410768LL;
uint32_t x349 = 707U;
volatile int16_t x350 = INT16_MIN;
static int8_t x354 = -1;
static uint64_t t82 = UINT64_MAX;
int16_t x359 = -3;
volatile uint64_t t83 = 1849969606825LLU;
uint32_t x362 = UINT32_MAX;
int8_t x365 = -1;
static int8_t x366 = INT8_MIN;
int32_t x368 = -1;
static int64_t t85 = -2643623127963683095LL;
static int8_t x369 = INT8_MIN;
int8_t x378 = INT8_MIN;
int32_t x380 = 56299;
int16_t x386 = -97;
volatile uint64_t x390 = 13448LLU;
static int8_t x392 = INT8_MAX;
volatile uint64_t t91 = UINT64_MAX;
int64_t x396 = 599LL;
static uint16_t x398 = UINT16_MAX;
int8_t x400 = -22;
int32_t x404 = INT32_MAX;
volatile int32_t t94 = -255;
static uint32_t x405 = 4443U;
int16_t x406 = -10131;
int16_t x412 = INT16_MAX;
volatile uint64_t t97 = 2883299274LLU;
volatile int16_t x420 = INT16_MIN;


void f0(void) {
	int8_t x1 = 1;
	uint16_t x2 = 41U;
	uint8_t x3 = 42U;
	int32_t x4 = 2583;

	t0 = (x1|(x2|(x3%x4)));

	if (t0 != 43) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 41615U;
	uint64_t x7 = 40586213LLU;
	volatile uint64_t t1 = 265495036LLU;

	t1 = (x5|(x6|(x7%x8)));

	if (t1 != 61151LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int16_t x12 = -8359;
	static uint64_t t2 = UINT64_MAX;

	t2 = (x9|(x10|(x11%x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = -9832;
	volatile int64_t t3 = -22320471065493450LL;

	t3 = (x13|(x14|(x15%x16)));

	if (t3 != 8589934591LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 78884U;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18|(x19%x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 62U;
	uint8_t x22 = 5U;
	int32_t x23 = -1;
	static int64_t x24 = -1LL;
	static volatile int64_t t5 = -1LL;

	t5 = (x21|(x22|(x23%x24)));

	if (t5 != 63LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -58;
	volatile int32_t x26 = INT32_MAX;
	static volatile int8_t x27 = INT8_MIN;
	int32_t x28 = 22265287;
	volatile int32_t t6 = 0;

	t6 = (x25|(x26|(x27%x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static uint32_t x30 = 1034U;
	int8_t x31 = 1;
	static volatile int64_t x32 = INT64_MIN;

	t7 = (x29|(x30|(x31%x32)));

	if (t7 != -117LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int8_t x36 = -1;
	volatile uint32_t t8 = 203U;

	t8 = (x33|(x34|(x35%x36)));

	if (t8 != 14411007U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = 511813;
	uint64_t x38 = 10475734788192LLU;
	volatile int64_t x39 = INT64_MIN;
	uint8_t x40 = 8U;
	volatile uint64_t t9 = 2612061409973LLU;

	t9 = (x37|(x38|(x39%x40)));

	if (t9 != 10475735084901LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static int32_t x44 = INT32_MIN;
	uint64_t t10 = UINT64_MAX;

	t10 = (x41|(x42|(x43%x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	volatile int64_t x46 = INT64_MIN;
	int64_t x47 = 1678LL;
	int8_t x48 = INT8_MIN;
	static volatile int64_t t11 = -60454495757381LL;

	t11 = (x45|(x46|(x47%x48)));

	if (t11 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	static int8_t x52 = -1;
	volatile int32_t t12 = -30;

	t12 = (x49|(x50|(x51%x52)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile int64_t x56 = INT64_MAX;
	volatile int64_t t13 = -72822859LL;

	t13 = (x53|(x54|(x55%x56)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	static uint8_t x58 = 51U;
	int64_t t14 = 628840430362LL;

	t14 = (x57|(x58|(x59%x60)));

	if (t14 != -77LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 217U;
	static uint32_t x62 = UINT32_MAX;
	int32_t x63 = -1;
	static int64_t t15 = 15431762544706LL;

	t15 = (x61|(x62|(x63%x64)));

	if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	int32_t x68 = -1;

	t16 = (x65|(x66|(x67%x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	static volatile uint32_t x70 = UINT32_MAX;
	int64_t x71 = -1LL;
	uint64_t x72 = 49317298536266LLU;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x69|(x70|(x71%x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 94785818LLU;
	static int16_t x74 = INT16_MAX;
	int32_t x75 = -122946438;
	static volatile uint16_t x76 = UINT16_MAX;

	t18 = (x73|(x74|(x75%x76)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	static uint8_t x82 = 6U;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = UINT32_MAX;
	static volatile int64_t t19 = 372469022LL;

	t19 = (x81|(x82|(x83%x84)));

	if (t19 != -32762LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = -1;
	uint64_t x86 = UINT64_MAX;
	static int32_t x87 = 2463;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x85|(x86|(x87%x88)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MIN;
	volatile int16_t x92 = INT16_MIN;
	uint64_t t21 = UINT64_MAX;

	t21 = (x89|(x90|(x91%x92)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 102U;
	int16_t x94 = INT16_MIN;
	int64_t x95 = 34321930902LL;
	int64_t x96 = -1265487115228528LL;
	int64_t t22 = -171LL;

	t22 = (x93|(x94|(x95%x96)));

	if (t22 != -25866LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 1U;
	int8_t x99 = INT8_MAX;
	uint16_t x100 = 3U;
	volatile int32_t t23 = 234230;

	t23 = (x97|(x98|(x99%x100)));

	if (t23 != 37921313) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	volatile int32_t x102 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x101|(x102|(x103%x104)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MIN;
	int8_t x107 = -1;
	int64_t x108 = INT64_MAX;
	int64_t t25 = -385945577LL;

	t25 = (x105|(x106|(x107%x108)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x110 = INT8_MIN;
	static int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MIN;
	int64_t t26 = 214567627172020144LL;

	t26 = (x109|(x110|(x111%x112)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = 30;
	int32_t x114 = INT32_MIN;
	static int16_t x115 = INT16_MAX;
	static int32_t x116 = -1;
	int32_t t27 = 0;

	t27 = (x113|(x114|(x115%x116)));

	if (t27 != -2147483618) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = 60;
	static int32_t x118 = INT32_MIN;
	int64_t x119 = -1LL;
	static int16_t x120 = -1;
	static int64_t t28 = -3973483400521LL;

	t28 = (x117|(x118|(x119%x120)));

	if (t28 != -2147483588LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 6U;
	volatile int16_t x122 = -1;
	uint16_t x123 = 35U;
	int8_t x124 = -30;
	volatile int32_t t29 = 44927224;

	t29 = (x121|(x122|(x123%x124)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 340785U;
	volatile int16_t x126 = INT16_MAX;
	static int8_t x127 = INT8_MAX;
	int16_t x128 = INT16_MIN;
	uint32_t t30 = 1967084857U;

	t30 = (x125|(x126|(x127%x128)));

	if (t30 != 360447U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 9796;
	static int16_t x130 = -4054;
	int32_t x131 = -1;
	uint32_t x132 = 283808426U;
	uint32_t t31 = 230U;

	t31 = (x129|(x130|(x131%x132)));

	if (t31 != 4294966895U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -57000;
	static uint8_t x134 = UINT8_MAX;
	uint64_t x135 = 14337LLU;
	static uint64_t x136 = UINT64_MAX;
	static volatile uint64_t t32 = 6728841574LLU;

	t32 = (x133|(x134|(x135%x136)));

	if (t32 != 18446744073709500927LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static int8_t x139 = 1;

	t33 = (x137|(x138|(x139%x140)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	int32_t x143 = -40;
	static int8_t x144 = -4;
	volatile int64_t t34 = 76566464253LL;

	t34 = (x141|(x142|(x143%x144)));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 3747672U;
	uint16_t x146 = UINT16_MAX;
	int64_t x147 = 1LL;
	volatile int16_t x148 = INT16_MIN;
	volatile int64_t t35 = 280618448238LL;

	t35 = (x145|(x146|(x147%x148)));

	if (t35 != 3801087LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 49418860U;
	int32_t x150 = -1;
	static int8_t x151 = 2;
	int16_t x152 = 8;
	static volatile uint32_t t36 = UINT32_MAX;

	t36 = (x149|(x150|(x151%x152)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = INT8_MIN;
	int8_t x154 = 11;
	volatile int16_t x156 = 3142;
	int32_t t37 = -3;

	t37 = (x153|(x154|(x155%x156)));

	if (t37 != -113) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 43434177U;
	static int16_t x159 = INT16_MAX;
	static int64_t x160 = -1LL;
	int64_t t38 = 1782LL;

	t38 = (x157|(x158|(x159%x160)));

	if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 43U;
	int32_t x164 = -889599;
	uint32_t t39 = 759U;

	t39 = (x161|(x162|(x163%x164)));

	if (t39 != 16732015U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MAX;
	volatile int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t40 = -1LL;

	t40 = (x165|(x166|(x167%x168)));

	if (t40 != -2147450881LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = 299302LL;
	static volatile int16_t x170 = -312;
	volatile int32_t x172 = -1;
	static int64_t t41 = -7635803297816LL;

	t41 = (x169|(x170|(x171%x172)));

	if (t41 != -18LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = INT64_MIN;
	static uint64_t x175 = UINT64_MAX;
	static uint64_t x176 = 1444091990057052077LLU;
	uint64_t t42 = 14378405516022897LLU;

	t42 = (x173|(x174|(x175%x176)));

	if (t42 != 10341012229879702527LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = -1;
	uint32_t x180 = 16208U;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = (x177|(x178|(x179%x180)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = 4U;
	int16_t x184 = INT16_MAX;
	int64_t t44 = 105431444734084259LL;

	t44 = (x181|(x182|(x183%x184)));

	if (t44 != -9223372036854775100LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 2015;
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	static volatile uint32_t x188 = 754U;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = (x185|(x186|(x187%x188)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -1;
	static volatile int32_t x194 = -16321469;
	volatile int8_t x195 = -1;
	uint64_t x196 = 567LLU;

	t46 = (x193|(x194|(x195%x196)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 39U;
	int8_t x202 = -1;
	int16_t x203 = INT16_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x201|(x202|(x203%x204)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	int32_t x207 = -1;
	int16_t x208 = INT16_MAX;
	volatile int32_t t48 = 0;

	t48 = (x205|(x206|(x207%x208)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = -1LL;
	static uint16_t x211 = 76U;
	static uint64_t x212 = 2171648507572345339LLU;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x209|(x210|(x211%x212)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = 0;
	volatile uint32_t x215 = 72084294U;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t50 = 2867181664LLU;

	t50 = (x213|(x214|(x215%x216)));

	if (t50 != 72084479LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = UINT64_MAX;
	uint32_t x218 = UINT32_MAX;
	static uint32_t x220 = 3U;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = (x217|(x218|(x219%x220)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MAX;
	volatile uint16_t x223 = 7U;
	static uint8_t x224 = 61U;
	static volatile int32_t t52 = -11802982;

	t52 = (x221|(x222|(x223%x224)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 2;
	uint32_t x226 = 0U;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = 9049;
	uint32_t t53 = 2094186U;

	t53 = (x225|(x226|(x227%x228)));

	if (t53 != 2194U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x231 = 102U;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t54 = -499223345992520LL;

	t54 = (x229|(x230|(x231%x232)));

	if (t54 != -9LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	int8_t x234 = INT8_MAX;
	static uint32_t x235 = 26552U;
	uint8_t x236 = 1U;
	uint32_t t55 = UINT32_MAX;

	t55 = (x233|(x234|(x235%x236)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MIN;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;

	t56 = (x237|(x238|(x239%x240)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 1628;
	int8_t x242 = -1;
	int64_t x243 = 477998877755966LL;
	int64_t x244 = 373300586253LL;

	t57 = (x241|(x242|(x243%x244)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 7085178LL;
	volatile int64_t x248 = -16684963535499LL;
	int64_t t58 = -33326716891LL;

	t58 = (x245|(x246|(x247%x248)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 1332522003220407994LLU;
	static int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -496;
	int16_t x252 = -1;
	static uint64_t t59 = 87462331LLU;

	t59 = (x249|(x250|(x251%x252)));

	if (t59 != 18446744073709528762LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = INT16_MAX;
	static uint64_t x258 = 645LLU;
	uint16_t x259 = 42U;
	volatile int16_t x260 = INT16_MAX;
	volatile uint64_t t60 = 83647093LLU;

	t60 = (x257|(x258|(x259%x260)));

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = INT8_MIN;
	static uint32_t x263 = 61U;
	static uint64_t x264 = UINT64_MAX;

	t61 = (x261|(x262|(x263%x264)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 23U;
	volatile int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (x265|(x266|(x267%x268)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	uint16_t x270 = 98U;
	uint16_t x271 = 176U;
	int8_t x272 = INT8_MIN;
	static int32_t t63 = -59;

	t63 = (x269|(x270|(x271%x272)));

	if (t63 != -14) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x275 = -13;
	int8_t x276 = INT8_MAX;
	static volatile uint32_t t64 = 1973U;

	t64 = (x273|(x274|(x275%x276)));

	if (t64 != 4294967291U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	uint64_t t65 = 5LLU;

	t65 = (x277|(x278|(x279%x280)));

	if (t65 != 9223372036854776210LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = -2258827;
	int64_t x282 = INT64_MIN;
	static uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 90U;

	t66 = (x281|(x282|(x283%x284)));

	if (t66 != 18446744073707292799LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 29U;
	int8_t x286 = 5;
	int64_t x288 = 4910190LL;
	int64_t t67 = 361848LL;

	t67 = (x285|(x286|(x287%x288)));

	if (t67 != 31LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x293 = -1;
	uint8_t x295 = 9U;
	static int8_t x296 = 15;

	t68 = (x293|(x294|(x295%x296)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int32_t x298 = -4779;
	uint16_t x299 = 10437U;
	int64_t x300 = -1LL;
	static volatile int64_t t69 = 61727LL;

	t69 = (x297|(x298|(x299%x300)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = 1171U;
	int32_t x302 = 20806;
	static volatile int64_t x303 = INT64_MAX;
	static int64_t x304 = -1LL;

	t70 = (x301|(x302|(x303%x304)));

	if (t70 != 21975LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -17;
	int32_t x306 = 0;
	volatile int64_t x307 = INT64_MIN;
	volatile int64_t t71 = -5LL;

	t71 = (x305|(x306|(x307%x308)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t t72 = -1;

	t72 = (x309|(x310|(x311%x312)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x313 = INT16_MIN;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = 15526;
	uint16_t x316 = UINT16_MAX;

	t73 = (x313|(x314|(x315%x316)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x317 = UINT8_MAX;
	int16_t x318 = -12959;
	static int32_t x319 = INT32_MIN;
	volatile int32_t t74 = 1;

	t74 = (x317|(x318|(x319%x320)));

	if (t74 != -12801) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = 0;
	static int8_t x326 = 10;
	uint16_t x327 = 290U;
	int64_t x328 = -1LL;
	volatile int64_t t75 = 62559637LL;

	t75 = (x325|(x326|(x327%x328)));

	if (t75 != 10LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MAX;
	int16_t x330 = 3762;
	int16_t x331 = -3;
	uint64_t x332 = 10023252345405LLU;
	volatile uint64_t t76 = 329500208801LLU;

	t76 = (x329|(x330|(x331%x332)));

	if (t76 != 573487918847LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x334 = -6;
	int16_t x336 = -1;
	volatile uint64_t t77 = 102632443LLU;

	t77 = (x333|(x334|(x335%x336)));

	if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = 3;
	uint64_t x338 = 78078086836006LLU;
	uint8_t x339 = 3U;
	static int64_t x340 = 353634179076LL;
	uint64_t t78 = 478608155522281LLU;

	t78 = (x337|(x338|(x339%x340)));

	if (t78 != 78078086836007LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x341 = 33506932LLU;
	int32_t x342 = INT32_MIN;
	static uint64_t x344 = 52662399489313232LLU;
	volatile uint64_t t79 = 1653LLU;

	t79 = (x341|(x342|(x343%x344)));

	if (t79 != 18446744071595575286LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	int16_t x347 = 0;
	static uint32_t x348 = UINT32_MAX;

	t80 = (x345|(x346|(x347%x348)));

	if (t80 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x351 = INT8_MIN;
	static volatile uint32_t x352 = 9U;
	volatile uint32_t t81 = 6U;

	t81 = (x349|(x350|(x351%x352)));

	if (t81 != 4294935235U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = 0;
	int64_t x355 = INT64_MAX;
	uint64_t x356 = 51LLU;

	t82 = (x353|(x354|(x355%x356)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = 12525294389LLU;
	uint16_t x360 = 4626U;

	t83 = (x357|(x358|(x359%x360)));

	if (t83 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x361 = -13518;
	int64_t x363 = -14511726742043538LL;
	volatile int64_t x364 = -1LL;
	volatile int64_t t84 = -16776133855LL;

	t84 = (x361|(x362|(x363%x364)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x367 = -1750953608844794008LL;

	t85 = (x365|(x366|(x367%x368)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t86 = -1396624;

	t86 = (x369|(x370|(x371%x372)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 3934U;
	int16_t x374 = -2;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = INT32_MIN;
	uint32_t t87 = UINT32_MAX;

	t87 = (x373|(x374|(x375%x376)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -1;
	int32_t x379 = 12377;
	volatile int32_t t88 = -4816399;

	t88 = (x377|(x378|(x379%x380)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = UINT64_MAX;
	volatile int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -1LL;
	int16_t x384 = -1;
	uint64_t t89 = UINT64_MAX;

	t89 = (x381|(x382|(x383%x384)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x387 = 0;
	uint32_t x388 = 253506U;
	uint64_t t90 = UINT64_MAX;

	t90 = (x385|(x386|(x387%x388)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MAX;
	int64_t x391 = INT64_MIN;

	t91 = (x389|(x390|(x391%x392)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x394 = 4U;
	int16_t x395 = -1;
	static volatile int64_t t92 = -30946144965661LL;

	t92 = (x393|(x394|(x395%x396)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x397 = -1;
	int32_t x399 = 1;
	volatile int32_t t93 = 4;

	t93 = (x397|(x398|(x399%x400)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MAX;
	static int32_t x403 = INT32_MIN;

	t94 = (x401|(x402|(x403%x404)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x407 = UINT8_MAX;
	int8_t x408 = -1;
	static volatile uint32_t t95 = 12U;

	t95 = (x405|(x406|(x407%x408)));

	if (t95 != 4294957439U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x409 = 7U;
	volatile int32_t x410 = -12;
	int8_t x411 = 3;
	static volatile int32_t t96 = 91663924;

	t96 = (x409|(x410|(x411%x412)));

	if (t96 != -9) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x413 = 168U;
	static volatile int64_t x414 = INT64_MIN;
	uint64_t x415 = 3LLU;
	int64_t x416 = INT64_MIN;

	t97 = (x413|(x414|(x415%x416)));

	if (t97 != 9223372036854775979LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x417 = 3704U;
	volatile int64_t x418 = 4LL;
	volatile int64_t x419 = INT64_MIN;
	volatile int64_t t98 = 2917LL;

	t98 = (x417|(x418|(x419%x420)));

	if (t98 != 3708LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 4U;
	int8_t x422 = INT8_MIN;
	int16_t x423 = -113;
	int8_t x424 = INT8_MAX;
	volatile int32_t t99 = 467;

	t99 = (x421|(x422|(x423%x424)));

	if (t99 != -113) { NG(); } else { ; }
	
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

