#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
uint16_t x5 = 8172U;
volatile uint8_t x8 = 81U;
int8_t x11 = 13;
uint32_t x14 = UINT32_MAX;
uint64_t x15 = 8889663453LLU;
static int16_t x20 = INT16_MIN;
uint16_t x25 = 459U;
volatile int16_t x26 = 1;
int32_t x28 = 74;
uint8_t x31 = 9U;
static uint64_t x33 = 967746LLU;
volatile uint32_t x34 = 1U;
uint64_t x36 = UINT64_MAX;
static volatile int8_t x41 = INT8_MIN;
int16_t x46 = INT16_MIN;
int8_t x48 = INT8_MAX;
volatile int32_t t11 = -22927049;
int64_t x50 = 20651252LL;
volatile int32_t t13 = -180482189;
int64_t x61 = INT64_MIN;
static int16_t x65 = -36;
int64_t x70 = 14289LL;
static uint8_t x78 = 60U;
int8_t x88 = INT8_MAX;
uint64_t x90 = UINT64_MAX;
volatile int32_t t22 = -14379;
uint16_t x100 = 3U;
int8_t x103 = -1;
int32_t t26 = -3110583;
int32_t t27 = -23362;
int8_t x122 = INT8_MAX;
uint8_t x124 = 23U;
uint8_t x127 = UINT8_MAX;
int8_t x131 = 1;
uint16_t x137 = UINT16_MAX;
int16_t x153 = -473;
int32_t t39 = -3544;
volatile int64_t x165 = -1LL;
volatile uint8_t x167 = 95U;
int32_t t41 = -1686;
static uint32_t x178 = 9888627U;
static int32_t x179 = 2378;
int16_t x186 = 285;
static int32_t x196 = INT32_MAX;
static uint16_t x199 = UINT16_MAX;
int16_t x200 = INT16_MAX;
uint32_t x204 = UINT32_MAX;
static int32_t t50 = 236287;
volatile uint8_t x206 = 12U;
uint64_t x207 = 122LLU;
static uint8_t x210 = 2U;
int32_t t52 = -11;
volatile int32_t x214 = INT32_MIN;
volatile uint16_t x219 = 1U;
volatile int16_t x220 = 2719;
volatile uint16_t x221 = UINT16_MAX;
int32_t t55 = 99337;
uint32_t x230 = 77611142U;
uint8_t x235 = 60U;
int32_t t61 = -7;
volatile int32_t t64 = -71276;
volatile int64_t x262 = -10602LL;
static int64_t x263 = INT64_MAX;
static int32_t t65 = -1;
int8_t x269 = INT8_MIN;
static volatile int8_t x274 = -6;
volatile int32_t x275 = INT32_MIN;
static volatile int64_t x289 = -1LL;
int32_t x291 = INT32_MAX;
static int32_t x293 = 10088;
uint16_t x297 = 12U;
int64_t x298 = INT64_MIN;
uint32_t x299 = 1U;
uint64_t x306 = 20024052307100547LLU;
uint8_t x310 = 20U;
volatile uint64_t x311 = 237155778140LLU;
uint64_t x316 = 2116451743065116340LLU;
volatile uint16_t x325 = UINT16_MAX;
volatile int32_t t82 = 9625177;
volatile int64_t x351 = INT64_MIN;
int32_t x354 = -54750;
int16_t x355 = -1;
volatile int32_t t93 = 491;
volatile uint32_t x385 = 98471488U;
volatile int32_t t96 = 68191942;
volatile uint32_t x396 = 2051767875U;
int32_t x398 = -1918199;
int64_t x399 = -7872908564LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int32_t x3 = -1288;
	int16_t x4 = 14293;
	volatile int32_t t0 = 2;

	t0 = ((x1<=x2)+(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 4644283U;
	int32_t x7 = -1;
	int32_t t1 = -30;

	t1 = ((x5<=x6)+(x7<=x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 320561472U;
	int64_t x10 = -1LL;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 92756076;

	t2 = ((x9<=x10)+(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -15;
	static volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -121288;

	t3 = ((x13<=x14)+(x15<=x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 6729831833077125LL;
	int64_t x18 = -1LL;
	static uint8_t x19 = 32U;
	static int32_t t4 = 4530982;

	t4 = ((x17<=x18)+(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	volatile int32_t x22 = INT32_MIN;
	static uint32_t x23 = 1499330043U;
	uint64_t x24 = 2606974796047LLU;
	int32_t t5 = 5767762;

	t5 = ((x21<=x22)+(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = INT64_MIN;
	int32_t t6 = 26001;

	t6 = ((x25<=x26)+(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int32_t x30 = -3140615;
	int8_t x32 = -29;
	int32_t t7 = 43607750;

	t7 = ((x29<=x30)+(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x35 = UINT64_MAX;
	int32_t t8 = 8143674;

	t8 = ((x33<=x34)+(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 1404738U;
	int8_t x38 = INT8_MAX;
	uint8_t x39 = 0U;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x37<=x38)+(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 1U;
	static volatile int16_t x43 = -956;
	int8_t x44 = -3;
	volatile int32_t t10 = 32956266;

	t10 = ((x41<=x42)+(x43<=x44));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = 438522795;
	uint32_t x47 = UINT32_MAX;

	t11 = ((x45<=x46)+(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -1;
	volatile int32_t t12 = 0;

	t12 = ((x49<=x50)+(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = -1;
	uint32_t x55 = UINT32_MAX;
	static int16_t x56 = 417;

	t13 = ((x53<=x54)+(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int16_t x58 = INT16_MIN;
	uint32_t x59 = 27851U;
	int32_t x60 = -1;
	int32_t t14 = -16;

	t14 = ((x57<=x58)+(x59<=x60));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = -23106LL;
	volatile int16_t x63 = -1;
	volatile int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 678;

	t15 = ((x61<=x62)+(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = INT64_MIN;
	static uint64_t x67 = 1947LLU;
	volatile int32_t x68 = 103536;
	volatile int32_t t16 = 85;

	t16 = ((x65<=x66)+(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 60LLU;
	uint16_t x71 = 0U;
	volatile uint64_t x72 = 40086LLU;
	volatile int32_t t17 = 36205;

	t17 = ((x69<=x70)+(x71<=x72));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	volatile int64_t x74 = -253757944794LL;
	int32_t x75 = INT32_MAX;
	uint8_t x76 = 1U;
	volatile int32_t t18 = -7838;

	t18 = ((x73<=x74)+(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	volatile uint8_t x79 = 2U;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 30340217;

	t19 = ((x77<=x78)+(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x81 = UINT32_MAX;
	uint32_t x82 = 815U;
	int16_t x83 = INT16_MIN;
	static int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 2;

	t20 = ((x81<=x82)+(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	static int32_t x87 = -11442;
	int32_t t21 = -2317;

	t21 = ((x85<=x86)+(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1848561813LLU;
	int64_t x91 = -1LL;
	static int64_t x92 = -1LL;

	t22 = ((x89<=x90)+(x91<=x92));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -3;
	int64_t x94 = 435449063593684052LL;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 131993526073166LLU;
	volatile int32_t t23 = 233424341;

	t23 = ((x93<=x94)+(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 121U;
	int64_t x98 = -2746512164949LL;
	static volatile int16_t x99 = INT16_MAX;
	volatile int32_t t24 = 26824;

	t24 = ((x97<=x98)+(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 23842U;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -515857013;

	t25 = ((x101<=x102)+(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	uint64_t x108 = 30760377310LLU;

	t26 = ((x105<=x106)+(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	volatile int8_t x110 = INT8_MAX;
	static int16_t x111 = INT16_MAX;
	static int32_t x112 = -1;

	t27 = ((x109<=x110)+(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile uint8_t x114 = 9U;
	volatile uint8_t x115 = 43U;
	uint64_t x116 = 1578LLU;
	int32_t t28 = -964530;

	t28 = ((x113<=x114)+(x115<=x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	static volatile uint64_t x118 = 0LLU;
	static int8_t x119 = INT8_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	static int32_t t29 = -745570874;

	t29 = ((x117<=x118)+(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = UINT64_MAX;
	uint64_t x123 = 6952523993905978733LLU;
	int32_t t30 = -1;

	t30 = ((x121<=x122)+(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 365;
	int16_t x126 = INT16_MAX;
	uint8_t x128 = 9U;
	int32_t t31 = 3;

	t31 = ((x125<=x126)+(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -32334;
	int64_t x130 = INT64_MIN;
	volatile int64_t x132 = -1LL;
	int32_t t32 = 1007051;

	t32 = ((x129<=x130)+(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MAX;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MIN;
	static volatile uint16_t x136 = UINT16_MAX;
	int32_t t33 = -5580;

	t33 = ((x133<=x134)+(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 280766746498916LLU;
	int8_t x139 = -1;
	static int8_t x140 = -1;
	volatile int32_t t34 = 4805946;

	t34 = ((x137<=x138)+(x139<=x140));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	static int8_t x142 = -17;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	static int32_t t35 = -744;

	t35 = ((x141<=x142)+(x143<=x144));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 715325558847644802LLU;
	int64_t x146 = -1LL;
	uint8_t x147 = 50U;
	int16_t x148 = -461;
	volatile int32_t t36 = 421473;

	t36 = ((x145<=x146)+(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	volatile int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = -1;
	int32_t t37 = -2;

	t37 = ((x149<=x150)+(x151<=x152));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x154 = 0;
	int32_t x155 = INT32_MIN;
	static int8_t x156 = -1;
	volatile int32_t t38 = 193665;

	t38 = ((x153<=x154)+(x155<=x156));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	volatile int8_t x158 = INT8_MAX;
	static int16_t x159 = -2749;
	static uint64_t x160 = 0LLU;

	t39 = ((x157<=x158)+(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	static volatile uint16_t x162 = 2625U;
	int8_t x163 = INT8_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -4153;

	t40 = ((x161<=x162)+(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 1355LLU;
	uint8_t x168 = 1U;

	t41 = ((x165<=x166)+(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 6659U;
	static int64_t x170 = INT64_MIN;
	int8_t x171 = -1;
	uint16_t x172 = 32169U;
	static int32_t t42 = -36461;

	t42 = ((x169<=x170)+(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MAX;
	uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = 626LLU;
	static uint8_t x176 = 7U;
	volatile int32_t t43 = 27455124;

	t43 = ((x173<=x174)+(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 16;

	t44 = ((x177<=x178)+(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	int8_t x182 = 3;
	static int32_t x183 = -1;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 799;

	t45 = ((x181<=x182)+(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -839408058;
	int32_t x187 = -27;
	int32_t x188 = 957823;
	volatile int32_t t46 = 282654141;

	t46 = ((x185<=x186)+(x187<=x188));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = 12249;
	int64_t x190 = 120314LL;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;
	int32_t t47 = -1332;

	t47 = ((x189<=x190)+(x191<=x192));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	int32_t t48 = 54729;

	t48 = ((x193<=x194)+(x195<=x196));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	uint16_t x198 = UINT16_MAX;
	int32_t t49 = -117526088;

	t49 = ((x197<=x198)+(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1;
	int8_t x202 = -16;
	int32_t x203 = -1;

	t50 = ((x201<=x202)+(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 378700;
	int8_t x208 = -1;
	int32_t t51 = 118;

	t51 = ((x205<=x206)+(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = 1;
	uint32_t x211 = 6153U;
	int32_t x212 = INT32_MIN;

	t52 = ((x209<=x210)+(x211<=x212));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = 1008961246LL;
	int32_t x215 = INT32_MIN;
	int8_t x216 = 0;
	volatile int32_t t53 = 8318059;

	t53 = ((x213<=x214)+(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 0U;
	static int8_t x218 = 0;
	int32_t t54 = -418;

	t54 = ((x217<=x218)+(x219<=x220));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 797313U;
	volatile int32_t x223 = 893;
	int8_t x224 = -1;

	t55 = ((x221<=x222)+(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	int16_t x228 = -1;
	int32_t t56 = 0;

	t56 = ((x225<=x226)+(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;
	int32_t t57 = 49;

	t57 = ((x229<=x230)+(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	static volatile int16_t x236 = 1;
	int32_t t58 = 174;

	t58 = ((x233<=x234)+(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int32_t x238 = INT32_MAX;
	int8_t x239 = -1;
	int64_t x240 = INT64_MIN;
	static int32_t t59 = -309;

	t59 = ((x237<=x238)+(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	volatile int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = -2;
	int32_t t60 = -167075817;

	t60 = ((x241<=x242)+(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = INT32_MIN;
	uint8_t x246 = 0U;
	int64_t x247 = -256LL;
	uint32_t x248 = UINT32_MAX;

	t61 = ((x245<=x246)+(x247<=x248));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 2529170U;
	uint16_t x252 = 1592U;
	int32_t t62 = 171;

	t62 = ((x249<=x250)+(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = 7;
	volatile int64_t x254 = -1LL;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = 1384U;
	int32_t t63 = -3;

	t63 = ((x253<=x254)+(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = 0U;
	static int64_t x259 = INT64_MAX;
	volatile int32_t x260 = INT32_MAX;

	t64 = ((x257<=x258)+(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 18621U;
	static uint64_t x264 = 7067424622952326LLU;

	t65 = ((x261<=x262)+(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 2U;
	int64_t x267 = INT64_MIN;
	int8_t x268 = -1;
	volatile int32_t t66 = 24033;

	t66 = ((x265<=x266)+(x267<=x268));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 34350548497900LLU;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 11656U;
	static int32_t t67 = -9;

	t67 = ((x269<=x270)+(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 32036LLU;
	volatile int64_t x276 = INT64_MIN;
	int32_t t68 = -117614305;

	t68 = ((x273<=x274)+(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	static int32_t x278 = -1;
	uint16_t x279 = 1U;
	int16_t x280 = -2725;
	int32_t t69 = -20;

	t69 = ((x277<=x278)+(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -1LL;
	int64_t x282 = -1LL;
	uint16_t x283 = 14U;
	uint8_t x284 = 37U;
	static int32_t t70 = -2287;

	t70 = ((x281<=x282)+(x283<=x284));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	int16_t x286 = 3;
	static int32_t x287 = INT32_MAX;
	static int16_t x288 = INT16_MIN;
	int32_t t71 = -45;

	t71 = ((x285<=x286)+(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = 195234U;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 213391;

	t72 = ((x289<=x290)+(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -29612;
	static uint8_t x295 = 1U;
	volatile uint32_t x296 = 36U;
	volatile int32_t t73 = -654;

	t73 = ((x293<=x294)+(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x300 = INT16_MIN;
	int32_t t74 = 1453123;

	t74 = ((x297<=x298)+(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 0U;
	static volatile int8_t x302 = INT8_MIN;
	static volatile int64_t x303 = INT64_MIN;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 53673;

	t75 = ((x301<=x302)+(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 36U;
	int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -18023;

	t76 = ((x305<=x306)+(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 299023315887316LLU;
	int32_t x312 = 12;
	static volatile int32_t t77 = -94;

	t77 = ((x309<=x310)+(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 1114345LL;
	uint32_t x314 = 209691831U;
	int32_t x315 = INT32_MAX;
	int32_t t78 = 47;

	t78 = ((x313<=x314)+(x315<=x316));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 3;
	int64_t x318 = INT64_MIN;
	volatile int64_t x319 = -2883124583LL;
	volatile int16_t x320 = 17;
	int32_t t79 = 516292;

	t79 = ((x317<=x318)+(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	static int32_t x323 = INT32_MIN;
	static uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = 0;

	t80 = ((x321<=x322)+(x323<=x324));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = -1;
	int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = 131166077;

	t81 = ((x325<=x326)+(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = -1;
	int64_t x331 = -1LL;
	volatile int8_t x332 = INT8_MIN;

	t82 = ((x329<=x330)+(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t83 = -25121849;

	t83 = ((x333<=x334)+(x335<=x336));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	uint32_t x338 = 10416U;
	volatile int16_t x339 = INT16_MIN;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t84 = 1;

	t84 = ((x337<=x338)+(x339<=x340));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int8_t x343 = -15;
	int64_t x344 = INT64_MIN;
	static int32_t t85 = -1;

	t85 = ((x341<=x342)+(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	static int32_t t86 = 78941489;

	t86 = ((x345<=x346)+(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MAX;
	static uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = 8;

	t87 = ((x349<=x350)+(x351<=x352));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	static int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -98258018;

	t88 = ((x353<=x354)+(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	static uint16_t x360 = 4481U;
	volatile int32_t t89 = -294;

	t89 = ((x357<=x358)+(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	int32_t x362 = INT32_MIN;
	int16_t x363 = -1;
	volatile int16_t x364 = 222;
	volatile int32_t t90 = -159;

	t90 = ((x361<=x362)+(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	static int32_t x366 = 15920;
	int16_t x367 = -1;
	uint32_t x368 = 42111U;
	int32_t t91 = 6658567;

	t91 = ((x365<=x366)+(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	static uint64_t x370 = UINT64_MAX;
	static int16_t x371 = INT16_MIN;
	int32_t x372 = -1;
	volatile int32_t t92 = 15543847;

	t92 = ((x369<=x370)+(x371<=x372));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	int64_t x375 = -8731158258617379LL;
	uint32_t x376 = 2U;

	t93 = ((x373<=x374)+(x375<=x376));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	volatile uint64_t x378 = 1674714887LLU;
	volatile int32_t x379 = 1160;
	volatile int16_t x380 = -1;
	volatile int32_t t94 = -12;

	t94 = ((x377<=x378)+(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 832036254LL;
	int16_t x382 = -1;
	int8_t x383 = -14;
	static int64_t x384 = INT64_MIN;
	int32_t t95 = 12;

	t95 = ((x381<=x382)+(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -1;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MIN;

	t96 = ((x385<=x386)+(x387<=x388));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 7U;
	uint64_t x390 = 7LLU;
	int16_t x391 = INT16_MAX;
	volatile int32_t x392 = INT32_MAX;
	int32_t t97 = -112039;

	t97 = ((x389<=x390)+(x391<=x392));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	uint16_t x394 = 1U;
	int64_t x395 = -64615LL;
	static volatile int32_t t98 = 319623776;

	t98 = ((x393<=x394)+(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 8033977;

	t99 = ((x397<=x398)+(x399<=x400));

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

