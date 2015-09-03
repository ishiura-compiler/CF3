#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x2 = UINT16_MAX;
int64_t x8 = -1LL;
volatile uint64_t t3 = 1288LLU;
uint64_t x17 = UINT64_MAX;
int64_t x18 = 624647965869LL;
volatile uint64_t x24 = UINT64_MAX;
uint16_t x25 = UINT16_MAX;
uint16_t x34 = 12505U;
int32_t x44 = INT32_MIN;
static volatile uint64_t t10 = 629310LLU;
int32_t x48 = -9350;
uint8_t x51 = UINT8_MAX;
static uint32_t x59 = 48230171U;
static int32_t x61 = INT32_MAX;
int64_t x62 = -3415LL;
static volatile uint32_t x65 = 111133941U;
volatile int32_t t16 = 75;
static uint64_t x70 = 6824LLU;
static int32_t x71 = -2021049;
uint64_t x72 = 36078605598395LLU;
uint32_t x80 = UINT32_MAX;
int8_t x82 = INT8_MAX;
volatile int64_t x84 = INT64_MAX;
static int8_t x91 = INT8_MIN;
int32_t t21 = -11013;
int32_t x97 = INT32_MIN;
uint16_t x115 = 127U;
volatile int32_t t27 = 1;
int64_t x121 = INT64_MAX;
static volatile uint64_t t29 = 7784326281811885989LLU;
volatile int64_t x126 = -1LL;
static volatile int8_t x128 = 48;
int32_t x137 = INT32_MIN;
uint32_t x140 = 31612828U;
static volatile int32_t x141 = 3018;
uint64_t x143 = 99LLU;
static uint32_t x151 = 4713852U;
static volatile uint32_t x152 = UINT32_MAX;
uint16_t x155 = 4U;
uint8_t x157 = UINT8_MAX;
volatile uint32_t x159 = 25739U;
uint64_t x164 = 8048661951LLU;
static volatile int64_t t40 = 35812LL;
int8_t x170 = -1;
int8_t x179 = INT8_MIN;
uint32_t x190 = UINT32_MAX;
int64_t x193 = 1975661710004652788LL;
static int32_t t47 = -54;
int64_t t48 = 2041235493LL;
volatile int64_t x205 = 14243608881138262LL;
volatile int32_t x207 = 411859;
volatile int32_t t50 = -57;
int8_t x214 = INT8_MIN;
static volatile int64_t t52 = -14LL;
static volatile uint16_t x234 = 33U;
volatile int64_t t56 = -1791027979855398LL;
int32_t x237 = INT32_MIN;
int8_t x239 = INT8_MIN;
volatile int64_t x243 = INT64_MIN;
static volatile int16_t x250 = INT16_MIN;
int32_t x252 = INT32_MAX;
int8_t x259 = INT8_MAX;
volatile int32_t t62 = 0;
volatile int16_t x265 = INT16_MAX;
uint32_t x273 = 148847U;
int16_t x275 = INT16_MAX;
volatile int32_t x278 = INT32_MAX;
uint32_t x288 = UINT32_MAX;
int32_t x289 = INT32_MIN;
static int64_t t72 = 2544924LL;
int16_t x316 = INT16_MAX;
static int16_t x325 = INT16_MAX;
int16_t x327 = INT16_MIN;
uint64_t x333 = 2LLU;
int64_t x335 = INT64_MAX;
int8_t x338 = INT8_MIN;
static int16_t x339 = INT16_MIN;
volatile int32_t t81 = -133938649;
int16_t x346 = -1;
int32_t t83 = -2;
volatile int8_t x356 = -5;
static volatile int32_t t84 = 81745;
int64_t x358 = INT64_MIN;
volatile uint16_t x367 = UINT16_MAX;
uint16_t x379 = 18U;
volatile int64_t x381 = 8553115265874531LL;
int16_t x387 = INT16_MIN;
volatile uint32_t t92 = 23028U;
int64_t x396 = INT64_MAX;
int32_t t95 = -385069973;
int32_t x401 = INT32_MIN;
int32_t x406 = -1;
int32_t t98 = 8255;
volatile int8_t x413 = -7;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x3 = UINT8_MAX;
	uint8_t x4 = 2U;
	volatile int32_t t0 = 81785;

	t0 = ((x1<=x2)*(x3/x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 98U;
	int64_t t1 = 33681185788684851LL;

	t1 = ((x5<=x6)*(x7/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int64_t x10 = INT64_MIN;
	int16_t x11 = -47;
	int64_t x12 = -1LL;
	static volatile int64_t t2 = -319325707338132LL;

	t2 = ((x9<=x10)*(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = -7;
	int16_t x15 = INT16_MAX;
	uint64_t x16 = 10936695596647206LLU;

	t3 = ((x13<=x14)*(x15/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x19 = 12793069U;
	static int8_t x20 = INT8_MAX;
	volatile uint32_t t4 = 1730086695U;

	t4 = ((x17<=x18)*(x19/x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	uint8_t x22 = UINT8_MAX;
	volatile uint16_t x23 = 98U;
	volatile uint64_t t5 = 1095652364834768LLU;

	t5 = ((x21<=x22)*(x23/x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 408032;

	t6 = ((x25<=x26)*(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	uint64_t x30 = 1175560272553LLU;
	uint64_t x31 = 64030668654394336LLU;
	int64_t x32 = -1LL;
	uint64_t t7 = 448211334854894LLU;

	t7 = ((x29<=x30)*(x31/x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	int8_t x36 = -14;
	volatile int32_t t8 = 3238;

	t8 = ((x33<=x34)*(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	int64_t x38 = -427303LL;
	int32_t x39 = INT32_MIN;
	int32_t x40 = 68739;
	int32_t t9 = -29;

	t9 = ((x37<=x38)*(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 3972U;
	int32_t x42 = 30386;
	static uint64_t x43 = 145386977000LLU;

	t10 = ((x41<=x42)*(x43/x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static volatile uint8_t x46 = 0U;
	uint16_t x47 = 10U;
	volatile int32_t t11 = 2943742;

	t11 = ((x45<=x46)*(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 800U;
	volatile uint64_t x50 = 1831393LLU;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 742694;

	t12 = ((x49<=x50)*(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint8_t x54 = 107U;
	static volatile uint8_t x55 = 26U;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -5643;

	t13 = ((x53<=x54)*(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 21U;
	int32_t x58 = -7249;
	uint32_t x60 = 260044U;
	uint32_t t14 = 437932710U;

	t14 = ((x57<=x58)*(x59/x60));

	if (t14 != 185U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = UINT32_MAX;
	volatile int64_t x64 = -286542837706LL;
	static volatile int64_t t15 = -884716LL;

	t15 = ((x61<=x62)*(x63/x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 2U;
	static volatile int8_t x67 = INT8_MAX;
	int8_t x68 = -1;

	t16 = ((x65<=x66)*(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MAX;
	uint64_t t17 = 7314238466968382568LLU;

	t17 = ((x69<=x70)*(x71/x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int16_t x74 = 74;
	int64_t x75 = 30757671396939LL;
	int8_t x76 = INT8_MAX;
	int64_t t18 = -3558372775631151LL;

	t18 = ((x73<=x74)*(x75/x76));

	if (t18 != 242186388952LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	static volatile int32_t x78 = -38705669;
	int8_t x79 = 31;
	uint32_t t19 = 120619989U;

	t19 = ((x77<=x78)*(x79/x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -31489382974538LL;
	uint16_t x83 = UINT16_MAX;
	int64_t t20 = -1992924331822LL;

	t20 = ((x81<=x82)*(x83/x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 10U;
	static int16_t x90 = -14;
	int16_t x92 = -232;

	t21 = ((x89<=x90)*(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 7LL;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 12U;
	int16_t x96 = INT16_MAX;
	static volatile int32_t t22 = -128494167;

	t22 = ((x93<=x94)*(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x98 = 1U;
	uint8_t x99 = 1U;
	static int8_t x100 = -5;
	volatile int32_t t23 = -25;

	t23 = ((x97<=x98)*(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x101 = -1;
	static uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	volatile uint64_t x104 = 12545678481970LLU;
	volatile uint64_t t24 = 1673LLU;

	t24 = ((x101<=x102)*(x103/x104));

	if (t24 != 1470366LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	int16_t x106 = -487;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MIN;
	int32_t t25 = 12227;

	t25 = ((x105<=x106)*(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	uint16_t x110 = 1U;
	int16_t x111 = 51;
	static volatile uint16_t x112 = 342U;
	static int32_t t26 = 44307;

	t26 = ((x109<=x110)*(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	int16_t x114 = INT16_MIN;
	static int16_t x116 = INT16_MIN;

	t27 = ((x113<=x114)*(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MAX;
	int64_t t28 = -354LL;

	t28 = ((x117<=x118)*(x119/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = 273995229;
	static uint64_t x123 = UINT64_MAX;
	int32_t x124 = 4593843;

	t29 = ((x121<=x122)*(x123/x124));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 83404U;
	int64_t x127 = 1628591324820LL;
	volatile int64_t t30 = 611272085459138LL;

	t30 = ((x125<=x126)*(x127/x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -1044304245;
	int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t31 = 26651388LLU;

	t31 = ((x129<=x130)*(x131/x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	int32_t x134 = -50608722;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t32 = -7645835;

	t32 = ((x133<=x134)*(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x138 = 39946196;
	int8_t x139 = -1;
	volatile uint32_t t33 = 111214U;

	t33 = ((x137<=x138)*(x139/x140));

	if (t33 != 135U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x142 = INT8_MIN;
	int32_t x144 = -1;
	volatile uint64_t t34 = 8530375950336LLU;

	t34 = ((x141<=x142)*(x143/x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 10088U;
	int64_t x146 = -1LL;
	int8_t x147 = INT8_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 2169402;

	t35 = ((x145<=x146)*(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MIN;
	volatile uint32_t x150 = 189U;
	volatile uint32_t t36 = 416U;

	t36 = ((x149<=x150)*(x151/x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 229293558008LLU;
	int32_t x154 = -1;
	int64_t x156 = -934270124940LL;
	volatile int64_t t37 = -682923937226523697LL;

	t37 = ((x153<=x154)*(x155/x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x158 = 524U;
	int16_t x160 = INT16_MIN;
	uint32_t t38 = 114529062U;

	t38 = ((x157<=x158)*(x159/x160));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 1207U;
	volatile int32_t x162 = INT32_MAX;
	volatile int8_t x163 = INT8_MIN;
	volatile uint64_t t39 = 229194966736752LLU;

	t39 = ((x161<=x162)*(x163/x164));

	if (t39 != 2291901956LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	int64_t x167 = 29099706490700241LL;
	int16_t x168 = INT16_MIN;

	t40 = ((x165<=x166)*(x167/x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = -1;
	uint64_t x171 = 1LLU;
	int16_t x172 = 4;
	uint64_t t41 = 153760601773035220LLU;

	t41 = ((x169<=x170)*(x171/x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 1604533U;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t42 = 36009;

	t42 = ((x173<=x174)*(x175/x176));

	if (t42 != -16909320) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -491;
	volatile uint16_t x178 = 83U;
	uint16_t x180 = UINT16_MAX;
	int32_t t43 = 93;

	t43 = ((x177<=x178)*(x179/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = -3828;
	static int64_t x182 = INT64_MIN;
	int64_t x183 = -3896324958LL;
	static uint32_t x184 = UINT32_MAX;
	static volatile int64_t t44 = 8423805842935129LL;

	t44 = ((x181<=x182)*(x183/x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MAX;
	uint16_t x187 = 473U;
	int8_t x188 = INT8_MIN;
	int32_t t45 = -31877830;

	t45 = ((x185<=x186)*(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MAX;
	int64_t x191 = -1LL;
	volatile uint32_t x192 = UINT32_MAX;
	volatile int64_t t46 = -10443428047267231LL;

	t46 = ((x189<=x190)*(x191/x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x194 = INT64_MIN;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = -12;

	t47 = ((x193<=x194)*(x195/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MAX;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 4U;

	t48 = ((x201<=x202)*(x203/x204));

	if (t48 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x206 = 3U;
	int64_t x208 = -1807108803107968LL;
	volatile int64_t t49 = -253LL;

	t49 = ((x205<=x206)*(x207/x208));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = 3;
	volatile int16_t x212 = INT16_MIN;

	t50 = ((x209<=x210)*(x211/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = 33367LL;
	int64_t x215 = 903832LL;
	volatile uint16_t x216 = 23905U;
	int64_t t51 = -181544797LL;

	t51 = ((x213<=x214)*(x215/x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = 3428261;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MIN;

	t52 = ((x217<=x218)*(x219/x220));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = 1770;
	volatile uint16_t x222 = 223U;
	uint16_t x223 = 0U;
	int32_t x224 = -14;
	int32_t t53 = -25707;

	t53 = ((x221<=x222)*(x223/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = INT64_MAX;
	volatile uint32_t x226 = 1166U;
	int16_t x227 = INT16_MAX;
	uint64_t x228 = 3311409LLU;
	static volatile uint64_t t54 = 296022141915413524LLU;

	t54 = ((x225<=x226)*(x227/x228));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = 8;
	int64_t x231 = INT64_MAX;
	static volatile int32_t x232 = -1;
	int64_t t55 = -1081343166681LL;

	t55 = ((x229<=x230)*(x231/x232));

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	int8_t x236 = 1;

	t56 = ((x233<=x234)*(x235/x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = INT8_MIN;
	uint32_t x240 = 2771422U;
	volatile uint32_t t57 = 995777U;

	t57 = ((x237<=x238)*(x239/x240));

	if (t57 != 1549U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 899695307947365275LLU;
	volatile int64_t x242 = -1LL;
	int8_t x244 = -2;
	int64_t t58 = -866998936405754LL;

	t58 = ((x241<=x242)*(x243/x244));

	if (t58 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -8;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t59 = 7283173;

	t59 = ((x245<=x246)*(x247/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 1;
	int64_t x251 = 187987539LL;
	volatile int64_t t60 = -439LL;

	t60 = ((x249<=x250)*(x251/x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 86U;
	volatile int16_t x254 = INT16_MIN;
	static int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t61 = 1274;

	t61 = ((x253<=x254)*(x255/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 64U;
	volatile int64_t x258 = 1576294514462LL;
	volatile int8_t x260 = INT8_MIN;

	t62 = ((x257<=x258)*(x259/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = -2969;
	static int16_t x262 = -925;
	uint32_t x263 = 2397726U;
	volatile uint16_t x264 = 22447U;
	static uint32_t t63 = 222490U;

	t63 = ((x261<=x262)*(x263/x264));

	if (t63 != 106U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = -1;
	uint64_t x268 = 285551LLU;
	uint64_t t64 = 1492509044791LLU;

	t64 = ((x265<=x266)*(x267/x268));

	if (t64 != 64600523457139LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x274 = -523857409891306945LL;
	uint64_t x276 = 39909LLU;
	uint64_t t65 = 3LLU;

	t65 = ((x273<=x274)*(x275/x276));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = INT16_MIN;
	static uint32_t x279 = 9808399U;
	int64_t x280 = -460555170230295876LL;
	static int64_t t66 = 6060046656LL;

	t66 = ((x277<=x278)*(x279/x280));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MAX;
	static int8_t x284 = 21;
	volatile int32_t t67 = -591014787;

	t67 = ((x281<=x282)*(x283/x284));

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = -1LL;
	static uint16_t x286 = 7U;
	uint8_t x287 = 4U;
	uint32_t t68 = 2U;

	t68 = ((x285<=x286)*(x287/x288));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x290 = INT32_MAX;
	static int32_t x291 = -1;
	volatile int8_t x292 = INT8_MIN;
	int32_t t69 = 59221472;

	t69 = ((x289<=x290)*(x291/x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile uint32_t x294 = 81U;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	volatile int64_t t70 = 280974200LL;

	t70 = ((x293<=x294)*(x295/x296));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = INT16_MIN;
	uint32_t x298 = UINT32_MAX;
	volatile uint64_t x299 = 5141820LLU;
	static volatile int8_t x300 = 3;
	uint64_t t71 = 1571406502360LLU;

	t71 = ((x297<=x298)*(x299/x300));

	if (t71 != 1713940LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = -3;
	int64_t x303 = -466733165857147405LL;
	int16_t x304 = INT16_MIN;

	t72 = ((x301<=x302)*(x303/x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int32_t x307 = 5299;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t73 = 18545113;

	t73 = ((x305<=x306)*(x307/x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MAX;
	int64_t x312 = INT64_MAX;
	static int64_t t74 = 15273807620358LL;

	t74 = ((x309<=x310)*(x311/x312));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x313 = UINT8_MAX;
	volatile uint16_t x314 = UINT16_MAX;
	int16_t x315 = -172;
	int32_t t75 = 956938;

	t75 = ((x313<=x314)*(x315/x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -1;
	int16_t x318 = INT16_MIN;
	static int16_t x319 = -17;
	int64_t x320 = INT64_MIN;
	int64_t t76 = -99094315051122523LL;

	t76 = ((x317<=x318)*(x319/x320));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x321 = 2542785689791LLU;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 14507U;
	volatile int64_t x324 = INT64_MIN;
	int64_t t77 = 1131788064120124534LL;

	t77 = ((x321<=x322)*(x323/x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x326 = 6U;
	static int64_t x328 = INT64_MIN;
	int64_t t78 = -1LL;

	t78 = ((x325<=x326)*(x327/x328));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x329 = 7172;
	volatile uint16_t x330 = UINT16_MAX;
	volatile int32_t x331 = -1;
	int16_t x332 = 1;
	volatile int32_t t79 = -4848336;

	t79 = ((x329<=x330)*(x331/x332));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x334 = -1;
	volatile int32_t x336 = INT32_MAX;
	static volatile int64_t t80 = -19LL;

	t80 = ((x333<=x334)*(x335/x336));

	if (t80 != 4294967298LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MAX;
	int8_t x340 = INT8_MIN;

	t81 = ((x337<=x338)*(x339/x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MAX;
	int64_t x347 = 455LL;
	static int64_t x348 = -1LL;
	int64_t t82 = 4061395LL;

	t82 = ((x345<=x346)*(x347/x348));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	volatile uint16_t x350 = UINT16_MAX;
	int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MAX;

	t83 = ((x349<=x350)*(x351/x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x353 = 38U;
	static volatile int8_t x354 = -1;
	static int16_t x355 = 4970;

	t84 = ((x353<=x354)*(x355/x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x357 = INT32_MAX;
	int16_t x359 = -1;
	int32_t x360 = -1;
	int32_t t85 = -895812770;

	t85 = ((x357<=x358)*(x359/x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = UINT16_MAX;
	static int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t86 = -10724;

	t86 = ((x361<=x362)*(x363/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x365 = INT32_MIN;
	int32_t x366 = -129;
	int32_t x368 = 382780475;
	volatile int32_t t87 = -4057723;

	t87 = ((x365<=x366)*(x367/x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x369 = 1723490U;
	static volatile uint64_t x370 = 1343703703370LLU;
	static int64_t x371 = -3331LL;
	uint16_t x372 = 6494U;
	int64_t t88 = -1118LL;

	t88 = ((x369<=x370)*(x371/x372));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = -26;
	uint32_t x375 = 16115617U;
	static volatile uint8_t x376 = 85U;
	volatile uint32_t t89 = 264315U;

	t89 = ((x373<=x374)*(x375/x376));

	if (t89 != 189595U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = 49;
	static volatile int32_t x378 = 13608317;
	uint32_t x380 = 174890539U;
	static volatile uint32_t t90 = 935U;

	t90 = ((x377<=x378)*(x379/x380));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x382 = 632417553324404LLU;
	uint32_t x383 = 16799U;
	uint16_t x384 = 3066U;
	volatile uint32_t t91 = 537060U;

	t91 = ((x381<=x382)*(x383/x384));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MAX;
	uint32_t x388 = 2U;

	t92 = ((x385<=x386)*(x387/x388));

	if (t92 != 2147467264U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x389 = 110U;
	uint64_t x390 = 245LLU;
	uint32_t x391 = 31142U;
	uint16_t x392 = 18282U;
	volatile uint32_t t93 = 148216578U;

	t93 = ((x389<=x390)*(x391/x392));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 28811549LLU;
	uint8_t x395 = 84U;
	volatile int64_t t94 = -442327426720049LL;

	t94 = ((x393<=x394)*(x395/x396));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MIN;
	int16_t x399 = -7102;
	static volatile uint16_t x400 = 23U;

	t95 = ((x397<=x398)*(x399/x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x402 = UINT8_MAX;
	uint16_t x403 = 12893U;
	static int32_t x404 = -1;
	volatile int32_t t96 = -127566;

	t96 = ((x401<=x402)*(x403/x404));

	if (t96 != -12893) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x405 = -1;
	static int32_t x407 = INT32_MIN;
	int16_t x408 = INT16_MIN;
	int32_t t97 = 355;

	t97 = ((x405<=x406)*(x407/x408));

	if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MAX;
	static uint8_t x410 = 66U;
	int8_t x411 = INT8_MIN;
	static volatile uint8_t x412 = UINT8_MAX;

	t98 = ((x409<=x410)*(x411/x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x414 = 0LL;
	volatile int32_t x415 = -1;
	static int16_t x416 = INT16_MAX;
	int32_t t99 = 24090;

	t99 = ((x413<=x414)*(x415/x416));

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

