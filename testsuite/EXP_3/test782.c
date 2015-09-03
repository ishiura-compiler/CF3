#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
volatile int32_t t1 = 49260;
volatile int16_t x9 = INT16_MIN;
uint32_t x10 = UINT32_MAX;
volatile uint64_t t2 = 50523236070LLU;
uint64_t x17 = 48969LLU;
uint64_t x22 = 35704574LLU;
volatile int64_t t6 = -11743639443110LL;
static int16_t x34 = -1;
volatile int64_t t9 = 387220189949836LL;
int16_t x51 = INT16_MIN;
int16_t x56 = INT16_MIN;
int32_t x58 = INT32_MIN;
int64_t x60 = -19LL;
static int32_t x66 = INT32_MAX;
int64_t x68 = -2680333419LL;
volatile int64_t x72 = -1LL;
int32_t x81 = 4912083;
int32_t x82 = INT32_MIN;
uint32_t x85 = 35171402U;
static volatile int8_t x87 = INT8_MIN;
static uint64_t t22 = 1368464476012216903LLU;
int16_t x94 = 29;
int8_t x95 = INT8_MIN;
uint64_t x99 = UINT64_MAX;
int32_t x100 = INT32_MAX;
static volatile uint64_t t24 = 104643377LLU;
int32_t t25 = 1379;
volatile uint16_t x113 = UINT16_MAX;
static int16_t x114 = INT16_MAX;
int32_t x116 = INT32_MAX;
volatile int32_t x121 = INT32_MIN;
static uint64_t x122 = 174LLU;
int32_t x134 = 1961801;
static int16_t x139 = -1;
static int32_t x140 = INT32_MIN;
int8_t x145 = 0;
static int32_t x148 = INT32_MAX;
int8_t x154 = -1;
uint64_t x167 = UINT64_MAX;
static uint64_t t40 = 745095LLU;
uint64_t x169 = UINT64_MAX;
int64_t x175 = INT64_MAX;
uint32_t x176 = 2U;
static uint32_t x177 = 77U;
int32_t x178 = 46;
int32_t x186 = INT32_MAX;
volatile int32_t t48 = 1473102;
static volatile int16_t x206 = -333;
int8_t x209 = INT8_MIN;
int16_t x216 = -1;
static uint16_t x223 = UINT16_MAX;
int64_t x228 = -1LL;
volatile uint64_t t55 = 4482994192219020757LLU;
int16_t x229 = INT16_MIN;
int32_t t56 = -2;
int64_t t57 = -1561130824514090143LL;
int64_t x237 = INT64_MIN;
int16_t x238 = 0;
int16_t x242 = -26;
int32_t x248 = INT32_MIN;
uint32_t x249 = UINT32_MAX;
int8_t x252 = INT8_MAX;
uint32_t x256 = UINT32_MAX;
volatile int16_t x257 = 9;
int32_t x260 = -1;
int32_t t63 = 1871792;
int16_t x263 = -1;
uint8_t x264 = UINT8_MAX;
static uint16_t x282 = 3652U;
volatile int64_t t70 = 39194583LL;
static volatile uint64_t x290 = 167427351LLU;
volatile uint8_t x299 = 7U;
int16_t x300 = INT16_MIN;
uint8_t x303 = UINT8_MAX;
static volatile int32_t t74 = 55713125;
static volatile int64_t t76 = 4636568511LL;
uint8_t x315 = 20U;
static uint16_t x327 = 3336U;
volatile int64_t x332 = INT64_MIN;
uint16_t x334 = UINT16_MAX;
int32_t t82 = 7909;
volatile int16_t x339 = INT16_MIN;
int8_t x344 = INT8_MIN;
int64_t x348 = INT64_MIN;
static volatile int32_t x349 = 5451460;
static int8_t x351 = 0;
int16_t x356 = -180;
static int32_t x360 = -1;
int32_t x365 = INT32_MAX;
uint8_t x367 = 12U;
static int32_t t90 = 1082;
int16_t x379 = INT16_MIN;
int32_t x383 = INT32_MAX;
static volatile int8_t x385 = -1;
int8_t x386 = 1;
int8_t x391 = INT8_MIN;
int64_t t97 = 0LL;
int16_t x401 = 750;
volatile int64_t x402 = INT64_MIN;


void f0(void) {
	uint8_t x2 = 108U;
	static int64_t x3 = -1LL;
	uint16_t x4 = 6U;
	volatile int64_t t0 = 9563094LL;

	t0 = ((x1<x2)-(x3%x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint64_t x6 = 292785606414LLU;
	int32_t x7 = -1;
	uint8_t x8 = 3U;

	t1 = ((x5<x6)-(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x11 = UINT64_MAX;
	int16_t x12 = 3;

	t2 = ((x9<x10)-(x11%x12));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint16_t x14 = 43U;
	uint16_t x15 = 0U;
	uint64_t x16 = 1LLU;
	static uint64_t t3 = 13471925415LLU;

	t3 = ((x13<x14)-(x15%x16));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	int64_t x20 = -62423486LL;
	volatile int64_t t4 = -38819206LL;

	t4 = ((x17<x18)-(x19%x20));

	if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 112U;
	int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MAX;
	static int64_t t5 = 15805214489149LL;

	t5 = ((x21<x22)-(x23%x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -6119;
	int16_t x26 = INT16_MAX;
	int64_t x27 = -83076572628072530LL;
	uint16_t x28 = UINT16_MAX;

	t6 = ((x25<x26)-(x27%x28));

	if (t6 != 16341LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 5602814142065LLU;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	static uint32_t t7 = 63U;

	t7 = ((x29<x30)-(x31%x32));

	if (t7 != 128U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint8_t x35 = 12U;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 9;

	t8 = ((x33<x34)-(x35%x36));

	if (t8 != -11) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -1;
	uint16_t x38 = 11048U;
	static int64_t x39 = INT64_MIN;
	static int8_t x40 = INT8_MIN;

	t9 = ((x37<x38)-(x39%x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	uint64_t x42 = 2061554058LLU;
	uint32_t x43 = 1125U;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -16674311160340243LL;

	t10 = ((x41<x42)-(x43%x44));

	if (t10 != -1124LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 243;
	static int64_t x46 = 1LL;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -9;

	t11 = ((x45<x46)-(x47%x48));

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = -10;
	volatile int8_t x52 = -1;
	volatile int32_t t12 = -140314345;

	t12 = ((x49<x50)-(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 1017009720660866LL;
	volatile int16_t x54 = INT16_MAX;
	static int64_t x55 = INT64_MIN;
	int64_t t13 = 1LL;

	t13 = ((x53<x54)-(x55%x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile int8_t x59 = INT8_MIN;
	volatile int64_t t14 = 27046922756316658LL;

	t14 = ((x57<x58)-(x59%x60));

	if (t14 != 14LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	static uint8_t x62 = 12U;
	int16_t x63 = -1;
	static int64_t x64 = INT64_MIN;
	static int64_t t15 = 205029507633LL;

	t15 = ((x61<x62)-(x63%x64));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -20;
	uint8_t x67 = 29U;
	volatile int64_t t16 = 1LL;

	t16 = ((x65<x66)-(x67%x68));

	if (t16 != -28LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = 200618385U;
	static uint16_t x71 = 113U;
	volatile int64_t t17 = -276187LL;

	t17 = ((x69<x70)-(x71%x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	volatile int32_t x74 = -1;
	uint16_t x75 = 87U;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = 39757895230LL;

	t18 = ((x73<x74)-(x75%x76));

	if (t18 != -87LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = 13U;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 50U;
	static int32_t t19 = 5339;

	t19 = ((x77<x78)-(x79%x80));

	if (t19 != -34) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x83 = INT16_MIN;
	volatile int16_t x84 = -3;
	static int32_t t20 = -57095730;

	t20 = ((x81<x82)-(x83%x84));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -1;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -1378073;

	t21 = ((x85<x86)-(x87%x88));

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	volatile int32_t x90 = INT32_MIN;
	volatile int8_t x91 = INT8_MIN;
	uint64_t x92 = 1655050137905LLU;

	t22 = ((x89<x90)-(x91%x92));

	if (t22 != 18446743628602033683LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MAX;
	static volatile int8_t x96 = 1;
	int32_t t23 = 15799;

	t23 = ((x93<x94)-(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int8_t x98 = INT8_MAX;

	t24 = ((x97<x98)-(x99%x100));

	if (t24 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 108U;
	uint16_t x106 = 0U;
	int16_t x107 = INT16_MIN;
	static uint16_t x108 = UINT16_MAX;

	t25 = ((x105<x106)-(x107%x108));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	static uint16_t x110 = 14U;
	int32_t x111 = INT32_MIN;
	static uint64_t x112 = 203164212313117LLU;
	uint64_t t26 = 15944047735535796LLU;

	t26 = ((x109<x110)-(x111%x112));

	if (t26 != 18446700987541567897LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x115 = UINT64_MAX;
	uint64_t t27 = 260LLU;

	t27 = ((x113<x114)-(x115%x116));

	if (t27 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = 44U;
	volatile int8_t x118 = -1;
	static volatile uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -158325;

	t28 = ((x117<x118)-(x119%x120));

	if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t29 = 115374;

	t29 = ((x121<x122)-(x123%x124));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = -1375347448LL;
	uint16_t x126 = UINT16_MAX;
	static int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	static int32_t t30 = 44478924;

	t30 = ((x125<x126)-(x127%x128));

	if (t30 != 32769) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = 4535086993855370LL;
	int8_t x132 = INT8_MAX;
	int64_t t31 = 113990462627823029LL;

	t31 = ((x129<x130)-(x131%x132));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	int64_t x135 = -6906311LL;
	int8_t x136 = -1;
	volatile int64_t t32 = 0LL;

	t32 = ((x133<x134)-(x135%x136));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -31173439;
	volatile int8_t x138 = INT8_MAX;
	volatile int32_t t33 = 3;

	t33 = ((x137<x138)-(x139%x140));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x141 = UINT32_MAX;
	static uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	static int64_t t34 = 42506LL;

	t34 = ((x141<x142)-(x143%x144));

	if (t34 != 32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = 0;
	static volatile uint16_t x147 = 0U;
	static int32_t t35 = 11571;

	t35 = ((x145<x146)-(x147%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	uint16_t x150 = 31U;
	static int16_t x151 = 92;
	int32_t x152 = INT32_MIN;
	int32_t t36 = -4;

	t36 = ((x149<x150)-(x151%x152));

	if (t36 != -91) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	static uint32_t x156 = 12197258U;
	volatile uint32_t t37 = 228U;

	t37 = ((x153<x154)-(x155%x156));

	if (t37 != 4294201056U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = 573676569883127166LL;
	static volatile int16_t x158 = 605;
	int32_t x159 = INT32_MIN;
	int64_t x160 = 31272LL;
	volatile int64_t t38 = 5258222567043LL;

	t38 = ((x157<x158)-(x159%x160));

	if (t38 != 4136LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 4U;
	int16_t x162 = -1;
	int32_t x163 = -454;
	int64_t x164 = -1LL;
	static int64_t t39 = -7567146630407LL;

	t39 = ((x161<x162)-(x163%x164));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	volatile uint8_t x166 = 4U;
	volatile int32_t x168 = -1;

	t40 = ((x165<x166)-(x167%x168));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x170 = 29U;
	static int64_t x171 = INT64_MIN;
	int64_t x172 = 3525225435040LL;
	volatile int64_t t41 = -55286347LL;

	t41 = ((x169<x170)-(x171%x172));

	if (t41 != 410419600128LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x173 = 509U;
	volatile int16_t x174 = INT16_MIN;
	volatile int64_t t42 = -6LL;

	t42 = ((x173<x174)-(x175%x176));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x179 = INT16_MIN;
	static volatile uint16_t x180 = 3U;
	volatile int32_t t43 = 66559366;

	t43 = ((x177<x178)-(x179%x180));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x181 = 5509U;
	uint8_t x182 = 2U;
	int16_t x183 = INT16_MIN;
	volatile uint8_t x184 = 6U;
	volatile int32_t t44 = 4143502;

	t44 = ((x181<x182)-(x183%x184));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = -122838228810698LL;
	static int16_t x187 = INT16_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t45 = 1440991131862307LLU;

	t45 = ((x185<x186)-(x187%x188));

	if (t45 != 32769LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 14U;
	int8_t x190 = INT8_MAX;
	uint8_t x191 = 29U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t46 = -1183823;

	t46 = ((x189<x190)-(x191%x192));

	if (t46 != -28) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1682688;
	static volatile int64_t x194 = INT64_MIN;
	static int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	volatile int64_t t47 = -4LL;

	t47 = ((x193<x194)-(x195%x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 3U;
	static int8_t x198 = -42;
	uint8_t x199 = 15U;
	int8_t x200 = 5;

	t48 = ((x197<x198)-(x199%x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = 9428;
	static int32_t x202 = INT32_MAX;
	uint8_t x203 = 22U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t49 = 30;

	t49 = ((x201<x202)-(x203%x204));

	if (t49 != -21) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	int16_t x208 = -12;
	int32_t t50 = 823;

	t50 = ((x205<x206)-(x207%x208));

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = -1;
	int8_t x211 = -2;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t51 = -29335164;

	t51 = ((x209<x210)-(x211%x212));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	static int32_t x214 = 1;
	uint16_t x215 = 3985U;
	volatile int32_t t52 = 261447;

	t52 = ((x213<x214)-(x215%x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x217 = 12U;
	static int8_t x218 = 54;
	int64_t x219 = -1LL;
	static volatile int32_t x220 = INT32_MAX;
	volatile int64_t t53 = -38293280663LL;

	t53 = ((x217<x218)-(x219%x220));

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	static int32_t x224 = -1;
	int32_t t54 = 13673;

	t54 = ((x221<x222)-(x223%x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = 467905298;
	int8_t x226 = INT8_MAX;
	volatile uint64_t x227 = 64115LLU;

	t55 = ((x225<x226)-(x227%x228));

	if (t55 != 18446744073709487501LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x230 = INT16_MIN;
	int8_t x231 = -1;
	int8_t x232 = INT8_MIN;

	t56 = ((x229<x230)-(x231%x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = 66;
	int64_t x234 = INT64_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = 96LL;

	t57 = ((x233<x234)-(x235%x236));

	if (t57 != 33LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x239 = -1;
	volatile int32_t x240 = 150665;
	volatile int32_t t58 = 4885849;

	t58 = ((x237<x238)-(x239%x240));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = 31260480U;
	volatile int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t59 = -101;

	t59 = ((x241<x242)-(x243%x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	uint16_t x246 = 2U;
	int32_t x247 = 2288;
	int32_t t60 = 8777681;

	t60 = ((x245<x246)-(x247%x248));

	if (t60 != -2288) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 4U;
	int32_t t61 = -553;

	t61 = ((x249<x250)-(x251%x252));

	if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 3U;
	volatile uint32_t t62 = 1633U;

	t62 = ((x253<x254)-(x255%x256));

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x258 = INT64_MIN;
	static int16_t x259 = INT16_MIN;

	t63 = ((x257<x258)-(x259%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MAX;
	int8_t x262 = INT8_MIN;
	volatile int32_t t64 = -750470900;

	t64 = ((x261<x262)-(x263%x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x265 = -1;
	uint64_t x266 = 76635036976583LLU;
	int32_t x267 = 55067029;
	int16_t x268 = -9714;
	static volatile int32_t t65 = -5;

	t65 = ((x265<x266)-(x267%x268));

	if (t65 != -8077) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x269 = 7U;
	int32_t x270 = -1;
	int32_t x271 = INT32_MAX;
	static int32_t x272 = INT32_MAX;
	int32_t t66 = -628063;

	t66 = ((x269<x270)-(x271%x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	volatile int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t67 = 1906858;

	t67 = ((x273<x274)-(x275%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MIN;
	int32_t x279 = 54454869;
	volatile uint32_t x280 = 254243U;
	volatile uint32_t t68 = 338406739U;

	t68 = ((x277<x278)-(x279%x280));

	if (t68 != 4294920429U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 9U;
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = -6;
	static volatile int32_t t69 = -37;

	t69 = ((x281<x282)-(x283%x284));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = INT8_MIN;
	uint64_t x286 = 29067560LLU;
	volatile int64_t x287 = INT64_MAX;
	static int64_t x288 = INT64_MIN;

	t70 = ((x285<x286)-(x287%x288));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = 27797LL;
	int64_t x291 = -1LL;
	int16_t x292 = INT16_MAX;
	int64_t t71 = -21LL;

	t71 = ((x289<x290)-(x291%x292));

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = 826881LL;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MIN;
	volatile uint8_t x296 = 11U;
	volatile int32_t t72 = -236034326;

	t72 = ((x293<x294)-(x295%x296));

	if (t72 != 10) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = UINT64_MAX;
	uint64_t x298 = UINT64_MAX;
	static volatile int32_t t73 = -496922085;

	t73 = ((x297<x298)-(x299%x300));

	if (t73 != -7) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	static volatile uint8_t x304 = 8U;

	t74 = ((x301<x302)-(x303%x304));

	if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = 1359LL;
	static uint32_t x306 = 313290U;
	uint16_t x307 = 733U;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t75 = -715647;

	t75 = ((x305<x306)-(x307%x308));

	if (t75 != -732) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x309 = -1;
	int8_t x310 = INT8_MAX;
	volatile int64_t x311 = -1LL;
	static volatile int16_t x312 = -1;

	t76 = ((x309<x310)-(x311%x312));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MAX;
	uint16_t x316 = UINT16_MAX;
	int32_t t77 = 802124930;

	t77 = ((x313<x314)-(x315%x316));

	if (t77 != -19) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = -1LL;
	uint16_t x319 = 18604U;
	static volatile int8_t x320 = INT8_MIN;
	static volatile int32_t t78 = -395;

	t78 = ((x317<x318)-(x319%x320));

	if (t78 != -43) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x321 = 6855692402LL;
	volatile int16_t x322 = -1;
	volatile uint16_t x323 = UINT16_MAX;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t79 = -1;

	t79 = ((x321<x322)-(x323%x324));

	if (t79 != -65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	int64_t x328 = INT64_MAX;
	int64_t t80 = -1LL;

	t80 = ((x325<x326)-(x327%x328));

	if (t80 != -3336LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = 58U;
	int8_t x330 = INT8_MAX;
	uint64_t x331 = 11412974242644LLU;
	uint64_t t81 = 65018LLU;

	t81 = ((x329<x330)-(x331%x332));

	if (t81 != 18446732660735308973LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = 27;
	int8_t x335 = -62;
	static volatile uint8_t x336 = 3U;

	t82 = ((x333<x334)-(x335%x336));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 454146289U;
	static int16_t x338 = INT16_MAX;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t83 = -16814;

	t83 = ((x337<x338)-(x339%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	uint64_t x342 = 191919LLU;
	volatile int16_t x343 = -1269;
	static int32_t t84 = 192;

	t84 = ((x341<x342)-(x343%x344));

	if (t84 != 117) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = 1;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = UINT8_MAX;
	int64_t t85 = 18706588273035129LL;

	t85 = ((x345<x346)-(x347%x348));

	if (t85 != -255LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x350 = INT8_MIN;
	int64_t x352 = INT64_MAX;
	volatile int64_t t86 = 105709159193180LL;

	t86 = ((x349<x350)-(x351%x352));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = -59105LL;
	volatile int64_t x354 = 79734702579675247LL;
	static int16_t x355 = INT16_MIN;
	int32_t t87 = 15000869;

	t87 = ((x353<x354)-(x355%x356));

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	static int64_t x359 = -1LL;
	int64_t t88 = -1997315944088102887LL;

	t88 = ((x357<x358)-(x359%x360));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = 2;
	int16_t x362 = 3906;
	static int64_t x363 = INT64_MIN;
	int64_t x364 = -261930627LL;
	volatile int64_t t89 = 146944525927050LL;

	t89 = ((x361<x362)-(x363%x364));

	if (t89 != 118537470LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x366 = INT8_MIN;
	uint8_t x368 = 1U;

	t90 = ((x365<x366)-(x367%x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = UINT16_MAX;
	volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	static int8_t x372 = INT8_MAX;
	int32_t t91 = -198994529;

	t91 = ((x369<x370)-(x371%x372));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = 127544U;
	int64_t t92 = 53LL;

	t92 = ((x373<x374)-(x375%x376));

	if (t92 != 4968LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x377 = 13086LLU;
	int32_t x378 = INT32_MIN;
	static int16_t x380 = INT16_MIN;
	volatile int32_t t93 = 917209564;

	t93 = ((x377<x378)-(x379%x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x381 = -1;
	int8_t x382 = 45;
	volatile int64_t x384 = -1LL;
	volatile int64_t t94 = 2LL;

	t94 = ((x381<x382)-(x383%x384));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x387 = INT16_MAX;
	uint32_t x388 = 229U;
	uint32_t t95 = 93U;

	t95 = ((x385<x386)-(x387%x388));

	if (t95 != 4294967277U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x389 = UINT32_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t96 = -1511;

	t96 = ((x389<x390)-(x391%x392));

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = -1;
	static uint64_t x394 = UINT64_MAX;
	static volatile int64_t x395 = 17558243376652775LL;
	int64_t x396 = INT64_MIN;

	t97 = ((x393<x394)-(x395%x396));

	if (t97 != -17558243376652775LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = -1;
	uint32_t x399 = 0U;
	static uint32_t x400 = 114928966U;
	volatile uint32_t t98 = 115671U;

	t98 = ((x397<x398)-(x399%x400));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x403 = 1U;
	static int64_t x404 = 217LL;
	int64_t t99 = 1188795LL;

	t99 = ((x401<x402)-(x403%x404));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

