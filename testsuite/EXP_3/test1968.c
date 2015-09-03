#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x6 = 5U;
uint16_t x9 = 1695U;
int64_t x17 = INT64_MIN;
int16_t x20 = 748;
int16_t x25 = INT16_MIN;
uint64_t x32 = 6LLU;
volatile uint64_t t7 = 27199511138LLU;
int8_t x37 = INT8_MIN;
static volatile int16_t x38 = INT16_MAX;
volatile uint64_t x40 = 1563327482784690179LLU;
uint64_t t9 = 1473680358762800631LLU;
int64_t x41 = -1LL;
int8_t x43 = INT8_MIN;
int8_t x49 = 21;
int16_t x58 = INT16_MAX;
int8_t x59 = 43;
volatile int32_t x60 = -1;
int16_t x61 = -505;
int8_t x63 = INT8_MAX;
int32_t x83 = INT32_MIN;
int16_t x84 = 12;
static int64_t t21 = 594580510LL;
int16_t x90 = -976;
int8_t x93 = INT8_MIN;
static int32_t t23 = 43307148;
volatile uint32_t x98 = UINT32_MAX;
static int8_t x100 = 3;
int32_t t24 = -1;
uint64_t x111 = UINT64_MAX;
static int64_t x113 = INT64_MIN;
int32_t x117 = 13605;
volatile int32_t x118 = INT32_MIN;
uint32_t x120 = UINT32_MAX;
uint32_t t29 = 24606997U;
volatile int16_t x123 = 13403;
volatile uint32_t t31 = 125007825U;
int8_t x132 = -1;
static int64_t x134 = INT64_MAX;
int64_t x152 = -1LL;
int64_t t37 = -959935LL;
int64_t x159 = INT64_MIN;
volatile int16_t x163 = INT16_MIN;
static int32_t t41 = 176;
static volatile int32_t x174 = -5971492;
static volatile int32_t t43 = -22281395;
int16_t x177 = 5749;
int16_t x180 = -1;
uint64_t x185 = UINT64_MAX;
int16_t x188 = INT16_MIN;
uint16_t x191 = 86U;
static int8_t x209 = INT8_MIN;
int16_t x216 = -1782;
int32_t t53 = 999;
int16_t x222 = -7;
uint8_t x223 = UINT8_MAX;
uint16_t x231 = UINT16_MAX;
uint64_t x232 = 0LLU;
int32_t x234 = INT32_MIN;
static uint16_t x242 = 13U;
int8_t x246 = INT8_MIN;
volatile uint32_t t61 = 12U;
int64_t t63 = 16961865321519LL;
int32_t x257 = INT32_MAX;
int8_t x258 = INT8_MAX;
uint8_t x264 = 0U;
int64_t x276 = 2075285189925208LL;
volatile int64_t x278 = -1LL;
static volatile uint32_t t69 = 75107U;
int64_t x292 = -514306391LL;
int64_t t72 = 790903373635621597LL;
uint64_t x293 = 3LLU;
uint64_t x294 = 166118549LLU;
static volatile int64_t x300 = INT64_MAX;
volatile int64_t t74 = 355LL;
int16_t x303 = INT16_MAX;
int64_t x304 = INT64_MIN;
volatile int8_t x307 = INT8_MIN;
uint64_t t76 = 5234288LLU;
uint64_t x309 = UINT64_MAX;
int64_t x314 = 108624301LL;
int64_t x316 = INT64_MIN;
static uint64_t t80 = 1405007383915LLU;
int64_t x329 = INT64_MAX;
int16_t x334 = INT16_MIN;
volatile uint16_t x336 = 112U;
uint64_t x347 = UINT64_MAX;
static int8_t x348 = 2;
uint64_t t86 = 409482864LLU;
int32_t x351 = INT32_MIN;
uint32_t x352 = 127865095U;
volatile uint8_t x353 = 34U;
int16_t x355 = INT16_MIN;
int32_t t88 = 1;
static uint64_t x372 = UINT64_MAX;
uint16_t x375 = 25U;
static volatile int32_t t93 = 574687;
int32_t t94 = -16;
int8_t x384 = INT8_MAX;
static uint16_t x385 = 53U;
int8_t x386 = -10;
int32_t x394 = INT32_MAX;
uint16_t x396 = 2965U;
static volatile int32_t t98 = -1983;
int32_t x397 = -8147824;
int8_t x400 = 0;
int32_t t99 = -139;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MAX;
	static int8_t x3 = 0;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 1;

	t0 = ((x1<x2)%(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -943948275;
	int32_t x7 = INT32_MAX;
	uint64_t x8 = 386LLU;
	uint64_t t1 = 0LLU;

	t1 = ((x5<x6)%(x7|x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 96507574604LLU;
	int8_t x11 = -1;
	int64_t x12 = -215953800168165882LL;
	volatile int64_t t2 = 0LL;

	t2 = ((x9<x10)%(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static uint64_t x14 = 331LLU;
	int16_t x15 = 0;
	uint64_t x16 = 4044015595LLU;
	volatile uint64_t t3 = 10772880753982939LLU;

	t3 = ((x13<x14)%(x15|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int64_t x19 = INT64_MAX;
	int64_t t4 = 44294805256771879LL;

	t4 = ((x17<x18)%(x19|x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 493U;
	volatile int64_t x22 = INT64_MIN;
	int32_t x23 = -1;
	static volatile int64_t x24 = INT64_MIN;
	int64_t t5 = -1454358245922LL;

	t5 = ((x21<x22)%(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x26 = INT64_MAX;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 2470LLU;

	t6 = ((x25<x26)%(x27|x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 2U;

	t7 = ((x29<x30)%(x31|x32));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile int32_t x34 = -1;
	volatile int8_t x35 = INT8_MAX;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -58749156;

	t8 = ((x33<x34)%(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x39 = 3U;

	t9 = ((x37<x38)%(x39|x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	static int16_t x44 = 1;
	int32_t t10 = -119303;

	t10 = ((x41<x42)%(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	uint64_t x46 = 1035747691LLU;
	uint64_t x47 = 2500870496998097LLU;
	int8_t x48 = -1;
	volatile uint64_t t11 = 1703LLU;

	t11 = ((x45<x46)%(x47|x48));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int8_t x51 = -5;
	static volatile uint32_t x52 = 1142913U;
	uint32_t t12 = 688609110U;

	t12 = ((x49<x50)%(x51|x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	int16_t x54 = -21;
	volatile int64_t x55 = 24LL;
	static int64_t x56 = INT64_MIN;
	int64_t t13 = -17527854371744312LL;

	t13 = ((x53<x54)%(x55|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = 308250036152126332LLU;
	int32_t t14 = 16166275;

	t14 = ((x57<x58)%(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = INT16_MAX;
	int16_t x64 = -9705;
	int32_t t15 = 7965;

	t15 = ((x61<x62)%(x63|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	int32_t x67 = -7020337;
	int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = -122780;

	t16 = ((x65<x66)%(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -37;
	int8_t x70 = -1;
	int16_t x71 = -1;
	volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t17 = 664893LLU;

	t17 = ((x69<x70)%(x71|x72));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	volatile int64_t x74 = -1LL;
	int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MIN;
	int64_t t18 = 218351006020462500LL;

	t18 = ((x73<x74)%(x75|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int8_t x78 = -29;
	int8_t x79 = -1;
	static uint8_t x80 = UINT8_MAX;
	int32_t t19 = -1;

	t19 = ((x77<x78)%(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static int32_t x82 = 16586030;
	static int32_t t20 = 405697;

	t20 = ((x81<x82)%(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -28530;
	static volatile int64_t x86 = INT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = -1;

	t21 = ((x85<x86)%(x87|x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = 151;

	t22 = ((x89<x90)%(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;
	static int16_t x95 = -1;
	static uint8_t x96 = 0U;

	t23 = ((x93<x94)%(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 3U;
	volatile int32_t x99 = -1;

	t24 = ((x97<x98)%(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 6U;
	static int16_t x102 = -1;
	uint8_t x103 = 25U;
	int64_t x104 = -123931463LL;
	volatile int64_t t25 = 4086304107LL;

	t25 = ((x101<x102)%(x103|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 770904U;
	volatile uint64_t x106 = 2974411691415LLU;
	volatile int16_t x107 = -1;
	volatile uint16_t x108 = 4U;
	int32_t t26 = -13420987;

	t26 = ((x105<x106)%(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -1;
	int16_t x110 = INT16_MAX;
	uint8_t x112 = UINT8_MAX;
	static volatile uint64_t t27 = 110193779LLU;

	t27 = ((x109<x110)%(x111|x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 1;

	t28 = ((x113<x114)%(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x119 = 3U;

	t29 = ((x117<x118)%(x119|x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	static int8_t x122 = 1;
	static int8_t x124 = 1;
	int32_t t30 = 56;

	t30 = ((x121<x122)%(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 898723565U;
	uint64_t x126 = 5LLU;
	static uint16_t x127 = 34U;
	uint32_t x128 = 10423U;

	t31 = ((x125<x126)%(x127|x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = -1LL;
	int8_t x131 = -1;
	static int32_t t32 = -818;

	t32 = ((x129<x130)%(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x135 = -1LL;
	uint32_t x136 = UINT32_MAX;
	static volatile int64_t t33 = -523960LL;

	t33 = ((x133<x134)%(x135|x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1;
	uint64_t x138 = 236LLU;
	volatile int64_t x139 = INT64_MAX;
	int64_t x140 = -80745722LL;
	volatile int64_t t34 = 2855792510963268LL;

	t34 = ((x137<x138)%(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	int64_t x144 = 1629016596LL;
	int64_t t35 = 11672312LL;

	t35 = ((x141<x142)%(x143|x144));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1849359;
	int16_t x146 = INT16_MAX;
	uint16_t x147 = 398U;
	static volatile int32_t x148 = -1;
	volatile int32_t t36 = -3872125;

	t36 = ((x145<x146)%(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint32_t x150 = 1U;
	int64_t x151 = -1823029675784358786LL;

	t37 = ((x149<x150)%(x151|x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 33964U;
	int64_t x154 = INT64_MAX;
	int32_t x155 = -1;
	uint8_t x156 = 7U;
	volatile int32_t t38 = 1070;

	t38 = ((x153<x154)%(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 12939U;
	uint64_t x158 = UINT64_MAX;
	int8_t x160 = -1;
	int64_t t39 = 164776624185752746LL;

	t39 = ((x157<x158)%(x159|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MAX;
	static int16_t x164 = -1;
	volatile int32_t t40 = 8866;

	t40 = ((x161<x162)%(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = 12013;
	int64_t x166 = 0LL;
	static int16_t x167 = INT16_MIN;
	int16_t x168 = -713;

	t41 = ((x165<x166)%(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -20821539LL;
	int64_t x170 = -1LL;
	uint8_t x171 = 1U;
	static uint32_t x172 = 216397405U;
	volatile uint32_t t42 = 1722U;

	t42 = ((x169<x170)%(x171|x172));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 7756U;
	int16_t x175 = -1;
	int32_t x176 = INT32_MIN;

	t43 = ((x173<x174)%(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -40720183488LL;
	int16_t x179 = INT16_MIN;
	static volatile int32_t t44 = -2065540;

	t44 = ((x177<x178)%(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -5;
	static int16_t x182 = -3;
	int64_t x183 = INT64_MAX;
	int16_t x184 = -1;
	int64_t t45 = 15247LL;

	t45 = ((x181<x182)%(x183|x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MAX;
	int32_t t46 = -316;

	t46 = ((x185<x186)%(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int8_t x190 = -1;
	volatile int32_t x192 = -1001213;
	volatile int32_t t47 = -373627;

	t47 = ((x189<x190)%(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 11342701520727401LLU;
	uint32_t x194 = 10105762U;
	volatile uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	int64_t t48 = -76236986603737906LL;

	t48 = ((x193<x194)%(x195|x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	static int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MAX;
	volatile uint16_t x200 = 6U;
	static int32_t t49 = -45;

	t49 = ((x197<x198)%(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 29774178LL;
	uint64_t x202 = 333LLU;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MAX;
	volatile int64_t t50 = -115LL;

	t50 = ((x201<x202)%(x203|x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	int32_t x208 = -1;
	int32_t t51 = -12341;

	t51 = ((x205<x206)%(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = 0U;
	int64_t x211 = -231204460271707LL;
	int32_t x212 = INT32_MAX;
	volatile int64_t t52 = 214157472LL;

	t52 = ((x209<x210)%(x211|x212));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -8;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 47U;

	t53 = ((x213<x214)%(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	static int64_t x218 = INT64_MAX;
	int8_t x219 = -1;
	int64_t x220 = INT64_MAX;
	int64_t t54 = 30LL;

	t54 = ((x217<x218)%(x219|x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -7259;

	t55 = ((x221<x222)%(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 364698160LLU;
	static int64_t x226 = 1079553774623824784LL;
	int32_t x227 = -1;
	uint64_t x228 = 384387501LLU;
	uint64_t t56 = 151424LLU;

	t56 = ((x225<x226)%(x227|x228));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -63645696LL;
	int64_t x230 = -1LL;
	uint64_t t57 = 165771341LLU;

	t57 = ((x229<x230)%(x231|x232));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	static int64_t x236 = INT64_MAX;
	int64_t t58 = -133676841361000334LL;

	t58 = ((x233<x234)%(x235|x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int16_t x238 = 1;
	uint64_t x239 = 90137810777LLU;
	volatile int16_t x240 = -12;
	volatile uint64_t t59 = 374LLU;

	t59 = ((x237<x238)%(x239|x240));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 19310628918655LL;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = 45U;
	static volatile int32_t t60 = -1;

	t60 = ((x241<x242)%(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	volatile uint32_t x247 = 2314U;
	uint32_t x248 = UINT32_MAX;

	t61 = ((x245<x246)%(x247|x248));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 2501U;
	uint64_t x251 = 225507658128079LLU;
	static uint8_t x252 = 63U;
	static volatile uint64_t t62 = 1399LLU;

	t62 = ((x249<x250)%(x251|x252));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MIN;

	t63 = ((x253<x254)%(x255|x256));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x259 = INT16_MIN;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -7;

	t64 = ((x257<x258)%(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = -10;
	int64_t x263 = -9566LL;
	volatile int64_t t65 = 12LL;

	t65 = ((x261<x262)%(x263|x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -1LL;
	uint64_t x266 = UINT64_MAX;
	static int8_t x267 = -61;
	int32_t x268 = -2;
	volatile int32_t t66 = 75;

	t66 = ((x265<x266)%(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 29;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = 2U;
	static uint64_t x272 = 53106471196114586LLU;
	volatile uint64_t t67 = 2617323228156943LLU;

	t67 = ((x269<x270)%(x271|x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = 1U;
	volatile int16_t x275 = -1;
	int64_t t68 = 45LL;

	t68 = ((x273<x274)%(x275|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 3U;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 877131U;

	t69 = ((x277<x278)%(x279|x280));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -6;
	int8_t x282 = INT8_MIN;
	volatile int8_t x283 = INT8_MIN;
	uint32_t x284 = 78353U;
	static uint32_t t70 = 41079806U;

	t70 = ((x281<x282)%(x283|x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint16_t x286 = 289U;
	volatile uint64_t x287 = 60847322956818LLU;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t71 = 186LLU;

	t71 = ((x285<x286)%(x287|x288));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;

	t72 = ((x289<x290)%(x291|x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x295 = 4U;
	int64_t x296 = 1385LL;
	volatile int64_t t73 = 473857563188778LL;

	t73 = ((x293<x294)%(x295|x296));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 21363U;
	int8_t x298 = 13;
	int8_t x299 = -1;

	t74 = ((x297<x298)%(x299|x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = UINT16_MAX;
	volatile int64_t t75 = -881909986748LL;

	t75 = ((x301<x302)%(x303|x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 1U;
	int16_t x306 = INT16_MAX;
	static uint64_t x308 = 458228239186424LLU;

	t76 = ((x305<x306)%(x307|x308));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x310 = UINT64_MAX;
	static int64_t x311 = INT64_MIN;
	volatile uint16_t x312 = UINT16_MAX;
	volatile int64_t t77 = 53993821LL;

	t77 = ((x309<x310)%(x311|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	volatile int8_t x315 = INT8_MIN;
	int64_t t78 = -18LL;

	t78 = ((x313<x314)%(x315|x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = -1LL;
	int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 318;

	t79 = ((x317<x318)%(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	volatile uint64_t x323 = 71903721577604LLU;
	uint16_t x324 = UINT16_MAX;

	t80 = ((x321<x322)%(x323|x324));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 95U;
	volatile uint64_t x326 = UINT64_MAX;
	int64_t x327 = -81244406268LL;
	volatile int8_t x328 = INT8_MAX;
	int64_t t81 = 2593334209LL;

	t81 = ((x325<x326)%(x327|x328));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = -40;
	int8_t x331 = -4;
	int32_t x332 = -1;
	volatile int32_t t82 = -182232035;

	t82 = ((x329<x330)%(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 1106LLU;
	int64_t x335 = INT64_MIN;
	int64_t t83 = -184179680302761000LL;

	t83 = ((x333<x334)%(x335|x336));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	int32_t x338 = INT32_MAX;
	volatile int32_t x339 = INT32_MAX;
	volatile int32_t x340 = INT32_MAX;
	int32_t t84 = 50255079;

	t84 = ((x337<x338)%(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x342 = INT8_MIN;
	static volatile int16_t x343 = 6;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t85 = 1;

	t85 = ((x341<x342)%(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;

	t86 = ((x345<x346)%(x347|x348));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 15950063642LL;
	int16_t x350 = 1207;
	uint32_t t87 = 13495191U;

	t87 = ((x349<x350)%(x351|x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MAX;
	uint16_t x356 = UINT16_MAX;

	t88 = ((x353<x354)%(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = 955;
	int64_t x358 = 4009311249LL;
	volatile int64_t x359 = 642LL;
	static int16_t x360 = INT16_MIN;
	int64_t t89 = -15907167501169LL;

	t89 = ((x357<x358)%(x359|x360));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 1;
	int8_t x362 = INT8_MAX;
	static volatile uint16_t x363 = 1U;
	static uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t90 = 1661911060U;

	t90 = ((x361<x362)%(x363|x364));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 27536893235290706LLU;
	int16_t x366 = INT16_MIN;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = -1LL;
	volatile int64_t t91 = -30LL;

	t91 = ((x365<x366)%(x367|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	static int8_t x370 = INT8_MIN;
	int32_t x371 = 6413;
	uint64_t t92 = 4493204091864935787LLU;

	t92 = ((x369<x370)%(x371|x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = 2509468407641265706LLU;
	int8_t x376 = INT8_MIN;

	t93 = ((x373<x374)%(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int16_t x378 = -6;
	int8_t x379 = 5;
	uint8_t x380 = 40U;

	t94 = ((x377<x378)%(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = 198114897659009541LLU;
	static int64_t x383 = -1LL;
	static volatile int64_t t95 = -25LL;

	t95 = ((x381<x382)%(x383|x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x387 = 113U;
	int8_t x388 = -2;
	volatile int32_t t96 = 193;

	t96 = ((x385<x386)%(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 1U;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static volatile int8_t x392 = 5;
	static uint64_t t97 = 227013085333374LLU;

	t97 = ((x389<x390)%(x391|x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	static int32_t x395 = 0;

	t98 = ((x393<x394)%(x395|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x398 = 14154427LLU;
	int8_t x399 = -11;

	t99 = ((x397<x398)%(x399|x400));

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

