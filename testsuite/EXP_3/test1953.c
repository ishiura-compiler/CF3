#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x10 = -21510017502763562LL;
static int32_t x16 = -97;
volatile uint64_t t4 = 1337199973049593414LLU;
volatile uint32_t t5 = 13657U;
static int8_t x32 = INT8_MIN;
static volatile int32_t t7 = 10569;
static uint16_t x39 = 264U;
uint64_t t10 = 22LLU;
static int64_t x47 = 15427242946057095LL;
volatile int8_t x64 = INT8_MIN;
volatile int64_t t15 = -94662519LL;
int64_t x65 = INT64_MIN;
static uint64_t t17 = 194281554LLU;
static int32_t t18 = -2;
uint32_t x78 = 6398103U;
int8_t x80 = INT8_MIN;
static int8_t x84 = INT8_MIN;
uint64_t x85 = UINT64_MAX;
int32_t x87 = 1;
int64_t x89 = -1LL;
volatile int16_t x93 = INT16_MIN;
volatile int32_t t24 = -40100;
uint64_t x101 = 159800515536081515LLU;
int64_t x103 = -1LL;
int16_t x108 = -1;
int8_t x113 = -1;
int64_t x116 = -5732347304LL;
uint8_t x117 = 2U;
static volatile int64_t x122 = -1LL;
volatile int16_t x124 = -1;
uint64_t x127 = 1794513370530370632LLU;
int64_t x129 = -2LL;
int32_t x132 = INT32_MIN;
int64_t x151 = -113LL;
int8_t x160 = 13;
uint8_t x162 = 9U;
int8_t x165 = INT8_MIN;
uint32_t x169 = UINT32_MAX;
static volatile int64_t x170 = INT64_MAX;
int8_t x171 = INT8_MIN;
int8_t x176 = -11;
static uint8_t x188 = UINT8_MAX;
int16_t x193 = -1;
int8_t x196 = INT8_MIN;
volatile uint32_t t48 = 872U;
uint64_t x197 = UINT64_MAX;
int16_t x200 = INT16_MIN;
int64_t t49 = 112LL;
int16_t x202 = INT16_MAX;
int64_t x205 = INT64_MIN;
static int64_t x208 = INT64_MIN;
volatile uint8_t x212 = UINT8_MAX;
uint8_t x213 = 44U;
uint16_t x221 = 0U;
int64_t x231 = 3971476594261234272LL;
uint32_t x233 = 1079552U;
static int64_t x234 = INT64_MIN;
int64_t x238 = -388827943LL;
static uint16_t x241 = UINT16_MAX;
uint8_t x245 = 0U;
uint16_t x249 = 607U;
uint64_t x255 = 44535407LLU;
volatile uint64_t x260 = 939LLU;
volatile int32_t t65 = 4693326;
uint64_t x267 = UINT64_MAX;
static volatile int64_t x272 = INT64_MIN;
static int64_t x276 = -654057401223522LL;
int32_t x277 = -1;
int64_t x288 = INT64_MIN;
int16_t x290 = INT16_MIN;
uint8_t x294 = UINT8_MAX;
uint64_t x296 = 237101383LLU;
uint16_t x297 = UINT16_MAX;
static uint32_t x298 = UINT32_MAX;
volatile int32_t t75 = 463456071;
volatile int32_t x306 = 1;
static uint8_t x309 = 3U;
int32_t x310 = INT32_MAX;
volatile int64_t t77 = -1071725482LL;
int16_t x313 = 0;
int32_t x316 = -1;
uint64_t x320 = UINT64_MAX;
static int8_t x325 = INT8_MAX;
int16_t x336 = -1;
volatile uint32_t t85 = 3509U;
uint8_t x355 = UINT8_MAX;
int32_t x357 = INT32_MAX;
static int32_t x359 = INT32_MAX;
uint64_t t90 = 7849LLU;
int32_t t91 = 145;
int8_t x372 = INT8_MIN;
int64_t x373 = INT64_MAX;
uint8_t x374 = 18U;
static int32_t x380 = INT32_MIN;
static uint64_t x386 = UINT64_MAX;
uint8_t x391 = 28U;
int16_t x395 = -1;
int32_t t98 = -20;
int64_t x397 = -1LL;


void f0(void) {
	uint32_t x1 = 45402U;
	int32_t x2 = INT32_MAX;
	uint64_t x3 = 751849LLU;
	int16_t x4 = -797;
	uint64_t t0 = 244529LLU;

	t0 = ((x1==x2)*(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -56;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	static volatile uint8_t x8 = 1U;
	volatile int32_t t1 = -1;

	t1 = ((x5==x6)*(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 1797LLU;
	static int16_t x11 = INT16_MAX;
	int16_t x12 = -1;
	int32_t t2 = -2981916;

	t2 = ((x9==x10)*(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x14 = -1;
	static int32_t x15 = INT32_MIN;
	int32_t t3 = -2310268;

	t3 = ((x13==x14)*(x15|x16));

	if (t3 != -97) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 151298297LL;
	volatile int8_t x18 = 0;
	uint64_t x19 = 51564500909629862LLU;
	uint16_t x20 = 1713U;

	t4 = ((x17==x18)*(x19|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 778981U;
	volatile uint16_t x24 = UINT16_MAX;

	t5 = ((x21==x22)*(x23|x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int8_t x26 = 0;
	uint16_t x27 = 3U;
	int8_t x28 = -36;
	volatile int32_t t6 = 38;

	t6 = ((x25==x26)*(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint32_t x30 = 112760U;
	int32_t x31 = 7098980;

	t7 = ((x29==x30)*(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MAX;
	uint16_t x35 = 246U;
	uint64_t x36 = 3937544988LLU;
	static uint64_t t8 = 5944LLU;

	t8 = ((x33==x34)*(x35|x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	uint64_t x38 = 0LLU;
	int16_t x40 = 15135;
	volatile int32_t t9 = -47775;

	t9 = ((x37==x38)*(x39|x40));

	if (t9 != 15135) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int8_t x42 = INT8_MAX;
	uint64_t x43 = 31804032LLU;
	static volatile int64_t x44 = 2987LL;

	t10 = ((x41==x42)*(x43|x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	int8_t x48 = INT8_MAX;
	volatile int64_t t11 = 60285435026754794LL;

	t11 = ((x45==x46)*(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -4;
	static volatile int32_t x50 = 47239562;
	int16_t x51 = -1;
	volatile int16_t x52 = INT16_MIN;
	int32_t t12 = -335216;

	t12 = ((x49==x50)*(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -103LL;
	int16_t x54 = INT16_MAX;
	static int32_t x55 = -2130;
	int64_t x56 = -61942611178LL;
	int64_t t13 = -8963951755LL;

	t13 = ((x53==x54)*(x55|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	static int32_t x58 = INT32_MIN;
	uint16_t x59 = UINT16_MAX;
	static uint32_t x60 = 414397281U;
	uint32_t t14 = 64056903U;

	t14 = ((x57==x58)*(x59|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 7U;
	static int32_t x62 = -1;
	int64_t x63 = -9274902271LL;

	t15 = ((x61==x62)*(x63|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	static int16_t x67 = INT16_MIN;
	int64_t x68 = 27943717LL;
	volatile int64_t t16 = 5283LL;

	t16 = ((x65==x66)*(x67|x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1936;
	int64_t x70 = 11LL;
	uint64_t x71 = 240960228183LLU;
	uint16_t x72 = 26U;

	t17 = ((x69==x70)*(x71|x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 535025533487424LLU;
	static uint32_t x74 = UINT32_MAX;
	static volatile int16_t x75 = INT16_MIN;
	int32_t x76 = 0;

	t18 = ((x73==x74)*(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	int32_t t19 = 190252097;

	t19 = ((x77==x78)*(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 23U;
	int16_t x82 = 17;
	volatile int32_t x83 = 205072;
	int32_t t20 = -2;

	t20 = ((x81==x82)*(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	volatile uint64_t x88 = 53023501756510LLU;
	uint64_t t21 = 7598052929LLU;

	t21 = ((x85==x86)*(x87|x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	static volatile int32_t x91 = INT32_MAX;
	uint32_t x92 = 2665564U;
	volatile uint32_t t22 = 57008626U;

	t22 = ((x89==x90)*(x91|x92));

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = 147U;
	static uint8_t x95 = 107U;
	static int32_t x96 = INT32_MAX;
	int32_t t23 = -3;

	t23 = ((x93==x94)*(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 242;
	static uint64_t x98 = 28145581119LLU;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;

	t24 = ((x97==x98)*(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = -145;
	uint16_t x104 = 392U;
	volatile int64_t t25 = 1725LL;

	t25 = ((x101==x102)*(x103|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int16_t x106 = INT16_MIN;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t t26 = -12702;

	t26 = ((x105==x106)*(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = 179U;
	int64_t x112 = INT64_MAX;
	int64_t t27 = INT64_MAX;

	t27 = ((x109==x110)*(x111|x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x114 = -1;
	static uint8_t x115 = 5U;
	volatile int64_t t28 = -55360457310316LL;

	t28 = ((x113==x114)*(x115|x116));

	if (t28 != -5732347299LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = -1;
	int64_t x119 = -1LL;
	volatile int8_t x120 = 61;
	int64_t t29 = 9LL;

	t29 = ((x117==x118)*(x119|x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 107484852LLU;
	static uint16_t x123 = 7U;
	int32_t t30 = -79525;

	t30 = ((x121==x122)*(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 6241132U;
	static volatile int32_t x126 = INT32_MIN;
	int8_t x128 = 1;
	volatile uint64_t t31 = 82199LLU;

	t31 = ((x125==x126)*(x127|x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x130 = 2U;
	volatile int16_t x131 = -723;
	int32_t t32 = -95;

	t32 = ((x129==x130)*(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	static uint8_t x136 = 1U;
	volatile int32_t t33 = -6;

	t33 = ((x133==x134)*(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1U;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t34 = -564639761647LL;

	t34 = ((x137==x138)*(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	uint16_t x142 = 8189U;
	int64_t x143 = -125188LL;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = 1163909560293457435LLU;

	t35 = ((x141==x142)*(x143|x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = UINT32_MAX;
	static volatile int16_t x146 = -642;
	uint32_t x147 = 384071U;
	int8_t x148 = INT8_MAX;
	uint32_t t36 = 253544573U;

	t36 = ((x145==x146)*(x147|x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 265U;
	volatile uint64_t x150 = 231020770942094LLU;
	uint8_t x152 = 22U;
	int64_t t37 = 4627463395LL;

	t37 = ((x149==x150)*(x151|x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	uint64_t x154 = 8992LLU;
	int16_t x155 = -1;
	int32_t x156 = INT32_MAX;
	int32_t t38 = 0;

	t38 = ((x153==x154)*(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	int8_t x159 = INT8_MIN;
	int32_t t39 = 223;

	t39 = ((x157==x158)*(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 1LL;
	int16_t x163 = 2756;
	uint64_t x164 = UINT64_MAX;
	uint64_t t40 = 20491609137267512LLU;

	t40 = ((x161==x162)*(x163|x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x166 = 407705427563803441LLU;
	int8_t x167 = INT8_MAX;
	int8_t x168 = 2;
	int32_t t41 = -7;

	t41 = ((x165==x166)*(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x172 = -1;
	volatile int32_t t42 = -24548;

	t42 = ((x169==x170)*(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = -699374;
	int8_t x175 = INT8_MIN;
	int32_t t43 = 1798;

	t43 = ((x173==x174)*(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 28U;
	static int64_t x178 = INT64_MAX;
	int8_t x179 = -1;
	static uint64_t x180 = UINT64_MAX;
	uint64_t t44 = 3LLU;

	t44 = ((x177==x178)*(x179|x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = 1663U;
	uint16_t x184 = 2U;
	volatile uint32_t t45 = 62683U;

	t45 = ((x181==x182)*(x183|x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 13281U;
	int16_t x187 = INT16_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x185==x186)*(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int32_t x190 = -7145;
	int16_t x191 = -1;
	uint64_t x192 = 90LLU;
	uint64_t t47 = 1638214277918293325LLU;

	t47 = ((x189==x190)*(x191|x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = -1;
	uint32_t x195 = 444277112U;

	t48 = ((x193==x194)*(x195|x196));

	if (t48 != 4294967288U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = INT8_MAX;
	int64_t x199 = 3216LL;

	t49 = ((x197==x198)*(x199|x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	uint8_t x203 = 0U;
	volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 215595826;

	t50 = ((x201==x202)*(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 4010U;
	int64_t x207 = -1LL;
	volatile int64_t t51 = 1576962796167LL;

	t51 = ((x205==x206)*(x207|x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = UINT32_MAX;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MIN;
	int32_t t52 = -6;

	t52 = ((x209==x210)*(x211|x212));

	if (t52 != -2147483393) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x214 = 488U;
	static uint16_t x215 = 84U;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = 127;

	t53 = ((x213==x214)*(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x218 = 11547U;
	int32_t x219 = INT32_MAX;
	static int32_t x220 = -1;
	volatile int32_t t54 = -40130;

	t54 = ((x217==x218)*(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MAX;
	uint16_t x223 = 15353U;
	uint32_t x224 = 20U;
	volatile uint32_t t55 = 26765003U;

	t55 = ((x221==x222)*(x223|x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -2096336;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = INT64_MIN;
	int64_t t56 = 3772LL;

	t56 = ((x225==x226)*(x227|x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 274908575966351LLU;
	uint32_t x230 = 8623792U;
	int8_t x232 = INT8_MIN;
	volatile int64_t t57 = -7LL;

	t57 = ((x229==x230)*(x231|x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x235 = 11U;
	static uint8_t x236 = 1U;
	volatile int32_t t58 = -27365;

	t58 = ((x233==x234)*(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = 22;
	volatile int32_t t59 = -3267;

	t59 = ((x237==x238)*(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x242 = 13197842042137LLU;
	int32_t x243 = INT32_MIN;
	volatile int64_t x244 = INT64_MIN;
	static int64_t t60 = 6106051486155741LL;

	t60 = ((x241==x242)*(x243|x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MAX;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 1;

	t61 = ((x245==x246)*(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	int64_t t62 = 225779156613602575LL;

	t62 = ((x249==x250)*(x251|x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	int8_t x254 = -1;
	static uint8_t x256 = 1U;
	uint64_t t63 = 274341633205547769LLU;

	t63 = ((x253==x254)*(x255|x256));

	if (t63 != 44535407LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x258 = 251U;
	int32_t x259 = 84;
	volatile uint64_t t64 = 106011871551209050LLU;

	t64 = ((x257==x258)*(x259|x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	volatile int64_t x262 = INT64_MAX;
	int8_t x263 = -1;
	static volatile int32_t x264 = 54223543;

	t65 = ((x261==x262)*(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 2;
	uint32_t x266 = UINT32_MAX;
	int32_t x268 = 298;
	volatile uint64_t t66 = 84667655339025867LLU;

	t66 = ((x265==x266)*(x267|x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = 59576486460159066LL;
	volatile uint8_t x270 = 26U;
	int64_t x271 = INT64_MIN;
	int64_t t67 = 137011912409LL;

	t67 = ((x269==x270)*(x271|x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int64_t x274 = -542901034310200340LL;
	int64_t x275 = -10218LL;
	volatile int64_t t68 = -100753962203LL;

	t68 = ((x273==x274)*(x275|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = -643;
	int8_t x280 = 2;
	volatile int32_t t69 = -30321;

	t69 = ((x277==x278)*(x279|x280));

	if (t69 != -641) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 0U;
	int32_t x282 = INT32_MIN;
	static int16_t x283 = INT16_MAX;
	static volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t70 = -61816;

	t70 = ((x281==x282)*(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 5877U;
	volatile int16_t x286 = INT16_MAX;
	int16_t x287 = -37;
	int64_t t71 = 243205402926985014LL;

	t71 = ((x285==x286)*(x287|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 0U;
	int64_t x291 = -1LL;
	uint16_t x292 = UINT16_MAX;
	int64_t t72 = 283544731249LL;

	t72 = ((x289==x290)*(x291|x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = 8U;
	int16_t x295 = INT16_MIN;
	volatile uint64_t t73 = 95330LLU;

	t73 = ((x293==x294)*(x295|x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x299 = 0U;
	int32_t x300 = 1660109;
	volatile int32_t t74 = -62320725;

	t74 = ((x297==x298)*(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 15000718917LLU;
	int8_t x302 = INT8_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MAX;

	t75 = ((x301==x302)*(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 479U;
	int8_t x307 = INT8_MIN;
	static int32_t x308 = -99700;
	int32_t t76 = -36907053;

	t76 = ((x305==x306)*(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;

	t77 = ((x309==x310)*(x311|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = -34442LL;
	volatile int8_t x315 = 1;
	volatile int32_t t78 = -32;

	t78 = ((x313==x314)*(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 26;
	int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	uint64_t t79 = 62460220LLU;

	t79 = ((x317==x318)*(x319|x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static int8_t x322 = -27;
	volatile int16_t x323 = 5862;
	static uint64_t x324 = 107271729431LLU;
	volatile uint64_t t80 = 65196603406747473LLU;

	t80 = ((x321==x322)*(x323|x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = 28;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MIN;
	static int64_t t81 = 5697593800000549LL;

	t81 = ((x325==x326)*(x327|x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 96U;
	uint32_t x330 = 108936U;
	int8_t x331 = 4;
	static int8_t x332 = 4;
	volatile int32_t t82 = 175366;

	t82 = ((x329==x330)*(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	int32_t x335 = 222;
	int32_t t83 = 90;

	t83 = ((x333==x334)*(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	uint64_t x339 = 35722LLU;
	uint16_t x340 = 11U;
	uint64_t t84 = 24LLU;

	t84 = ((x337==x338)*(x339|x340));

	if (t84 != 35723LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 430961885LL;
	static volatile int16_t x342 = -1;
	int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = 286718367U;

	t85 = ((x341==x342)*(x343|x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int16_t x346 = 0;
	static volatile int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MAX;
	volatile int64_t t86 = 0LL;

	t86 = ((x345==x346)*(x347|x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 5U;
	volatile int64_t x350 = -1LL;
	uint32_t x351 = 326U;
	static volatile int32_t x352 = 265;
	volatile uint32_t t87 = 62883738U;

	t87 = ((x349==x350)*(x351|x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -15;
	int64_t x354 = INT64_MIN;
	int64_t x356 = -63122497155LL;
	volatile int64_t t88 = 4882230861LL;

	t88 = ((x353==x354)*(x355|x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x358 = INT16_MAX;
	int8_t x360 = 28;
	static volatile int32_t t89 = -397304;

	t89 = ((x357==x358)*(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 6361388LL;
	static uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MAX;
	uint64_t x364 = UINT64_MAX;

	t90 = ((x361==x362)*(x363|x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = 25;
	int16_t x367 = 1;
	int16_t x368 = 0;

	t91 = ((x365==x366)*(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	volatile int8_t x370 = INT8_MAX;
	uint16_t x371 = 2733U;
	int32_t t92 = -137;

	t92 = ((x369==x370)*(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x375 = 1;
	int64_t x376 = -25515LL;
	volatile int64_t t93 = -707321971LL;

	t93 = ((x373==x374)*(x375|x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 928U;
	volatile int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	int64_t t94 = -110037405410LL;

	t94 = ((x377==x378)*(x379|x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 1358U;
	int64_t x382 = INT64_MIN;
	static volatile int8_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 215;

	t95 = ((x381==x382)*(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 1U;
	int8_t x387 = INT8_MAX;
	volatile uint64_t x388 = UINT64_MAX;
	volatile uint64_t t96 = 3923112494035053010LLU;

	t96 = ((x385==x386)*(x387|x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 8;
	int32_t x390 = INT32_MIN;
	int64_t x392 = -63167845857LL;
	int64_t t97 = 29255LL;

	t97 = ((x389==x390)*(x391|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = -3;
	int16_t x396 = INT16_MAX;

	t98 = ((x393==x394)*(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x398 = UINT32_MAX;
	int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -400140;

	t99 = ((x397==x398)*(x399|x400));

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

