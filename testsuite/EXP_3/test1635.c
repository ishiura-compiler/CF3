#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = 262743900;
static int8_t x4 = INT8_MIN;
volatile int32_t t0 = 231;
int16_t x6 = INT16_MIN;
static int16_t x10 = INT16_MAX;
static int32_t x14 = INT32_MIN;
int64_t x17 = INT64_MAX;
uint64_t x18 = 94920417635LLU;
volatile uint32_t x23 = 14820704U;
volatile uint8_t x27 = 27U;
int32_t x30 = INT32_MIN;
int32_t x32 = -175;
int8_t x33 = -5;
int32_t t11 = -406;
uint32_t x50 = 31259U;
volatile uint8_t x62 = 0U;
uint32_t x68 = UINT32_MAX;
static uint64_t x70 = 1753736640023706LLU;
uint64_t x71 = UINT64_MAX;
static int32_t t17 = -39;
int64_t x77 = INT64_MAX;
int16_t x84 = INT16_MIN;
static volatile int32_t t20 = 28;
uint16_t x88 = 14U;
int8_t x90 = INT8_MIN;
static int64_t x93 = INT64_MIN;
int32_t x95 = INT32_MIN;
uint64_t x97 = 639042991257LLU;
volatile int32_t t25 = -13152417;
uint32_t x106 = 3U;
uint32_t x114 = 2U;
int32_t t28 = -605;
volatile uint64_t x120 = UINT64_MAX;
int8_t x121 = -1;
int8_t x127 = INT8_MIN;
int32_t x131 = -1;
int64_t x138 = -1LL;
uint64_t x142 = 96LLU;
int32_t x150 = INT32_MAX;
int64_t x151 = INT64_MIN;
uint64_t x155 = UINT64_MAX;
int16_t x157 = INT16_MAX;
volatile uint16_t x161 = 190U;
int32_t t40 = -41888205;
volatile int32_t t43 = -6777;
volatile uint64_t x180 = 1335969LLU;
int32_t x189 = -1;
int64_t x192 = INT64_MIN;
uint8_t x193 = UINT8_MAX;
int8_t x198 = -15;
uint16_t x200 = UINT16_MAX;
uint16_t x202 = 218U;
volatile int64_t x207 = INT64_MIN;
volatile int8_t x209 = INT8_MAX;
uint64_t x210 = 824897776567962LLU;
uint32_t x212 = UINT32_MAX;
int32_t t52 = -1;
static volatile int8_t x217 = -13;
int64_t x218 = 1189LL;
int32_t x229 = INT32_MIN;
int8_t x233 = -1;
int64_t x236 = INT64_MIN;
int8_t x240 = -24;
volatile int16_t x244 = -1;
int32_t t60 = 262085;
int32_t x245 = INT32_MIN;
volatile int32_t t64 = -3;
volatile int32_t x270 = INT32_MIN;
int8_t x272 = -1;
volatile int32_t t67 = 41315;
int64_t x276 = INT64_MAX;
int64_t x281 = -1LL;
uint32_t x284 = 966731U;
int32_t t70 = 12;
int16_t x288 = INT16_MIN;
volatile int32_t x302 = -251;
static int64_t x304 = -295508820401207LL;
uint32_t x312 = 3943U;
int32_t x314 = 158166;
int64_t x315 = INT64_MAX;
int16_t x316 = -124;
uint32_t x322 = UINT32_MAX;
int32_t t83 = -4;
volatile int32_t t85 = -13;
int64_t x348 = INT64_MIN;
uint32_t x351 = 616U;
int32_t t87 = 13;
int8_t x354 = -1;
volatile int32_t t88 = -82;
static int32_t x365 = -18;
uint8_t x381 = UINT8_MAX;
int16_t x386 = INT16_MAX;
int8_t x389 = -12;
volatile uint64_t x392 = UINT64_MAX;
volatile uint8_t x396 = 1U;
int64_t x398 = INT64_MIN;
static volatile int8_t x399 = INT8_MAX;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MAX;

	t0 = ((x1<x2)<=(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -194;

	t1 = ((x5<x6)<=(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x11 = -51LL;
	int16_t x12 = -1;
	int32_t t2 = 103;

	t2 = ((x9<x10)<=(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = -1;
	int32_t t3 = -174219184;

	t3 = ((x13<x14)<=(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 136040814;

	t4 = ((x17<x18)<=(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	uint32_t x22 = 21U;
	volatile int64_t x24 = 5155505538LL;
	int32_t t5 = 1;

	t5 = ((x21<x22)<=(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 5U;
	static int32_t x26 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 33282333;

	t6 = ((x25<x26)<=(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int64_t x31 = INT64_MAX;
	volatile int32_t t7 = -7500;

	t7 = ((x29<x30)<=(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	int32_t x35 = -1;
	int8_t x36 = 37;
	int32_t t8 = 423225302;

	t8 = ((x33<x34)<=(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	static volatile uint64_t x38 = 7687073246LLU;
	volatile int32_t x39 = INT32_MIN;
	uint16_t x40 = 5U;
	static volatile int32_t t9 = -26;

	t9 = ((x37<x38)<=(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	static int16_t x42 = INT16_MIN;
	int16_t x43 = 14;
	uint64_t x44 = 762617764467027560LLU;
	volatile int32_t t10 = 23;

	t10 = ((x41<x42)<=(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 7U;
	int32_t x46 = INT32_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t x48 = INT32_MIN;

	t11 = ((x45<x46)<=(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x51 = 1U;
	int64_t x52 = -51407147876LL;
	volatile int32_t t12 = -83;

	t12 = ((x49<x50)<=(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 0;
	int64_t x54 = INT64_MIN;
	int16_t x55 = 248;
	int16_t x56 = -1;
	int32_t t13 = 1;

	t13 = ((x53<x54)<=(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = 0;
	static volatile int64_t x59 = -1LL;
	uint64_t x60 = 1674LLU;
	volatile int32_t t14 = 31143;

	t14 = ((x57<x58)<=(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 107U;
	volatile int64_t x63 = -1LL;
	uint64_t x64 = 2992049842459816LLU;
	int32_t t15 = 651;

	t15 = ((x61<x62)<=(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -202;
	volatile int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = -1067997991;

	t16 = ((x65<x66)<=(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 0U;
	volatile int16_t x72 = INT16_MAX;

	t17 = ((x69<x70)<=(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 0U;
	volatile uint16_t x76 = UINT16_MAX;
	static volatile int32_t t18 = -647;

	t18 = ((x73<x74)<=(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -48976;

	t19 = ((x77<x78)<=(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 1U;
	uint32_t x82 = 1180U;
	int32_t x83 = 4635914;

	t20 = ((x81<x82)<=(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 4U;
	int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	volatile int32_t t21 = -1924159;

	t21 = ((x85<x86)<=(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -32;

	t22 = ((x89<x90)<=(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 29076LLU;
	uint16_t x96 = 14266U;
	int32_t t23 = 20654357;

	t23 = ((x93<x94)<=(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;
	static int16_t x99 = INT16_MIN;
	uint64_t x100 = 8465272151913769LLU;
	volatile int32_t t24 = -14;

	t24 = ((x97<x98)<=(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;

	t25 = ((x101<x102)<=(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -233;
	int64_t x107 = 4028LL;
	volatile int32_t x108 = 210482719;
	int32_t t26 = -7;

	t26 = ((x105<x106)<=(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -876224726;
	volatile int8_t x110 = -1;
	volatile uint32_t x111 = UINT32_MAX;
	uint8_t x112 = 2U;
	int32_t t27 = 144057;

	t27 = ((x109<x110)<=(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 402U;
	int64_t x115 = INT64_MIN;
	int8_t x116 = -1;

	t28 = ((x113<x114)<=(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 27U;
	volatile int16_t x118 = -1;
	static uint64_t x119 = 1678892484LLU;
	volatile int32_t t29 = 8;

	t29 = ((x117<x118)<=(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = UINT8_MAX;
	volatile int16_t x123 = 10;
	static volatile int64_t x124 = INT64_MIN;
	int32_t t30 = 2;

	t30 = ((x121<x122)<=(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile uint32_t x126 = 113076U;
	uint8_t x128 = 12U;
	volatile int32_t t31 = 1;

	t31 = ((x125<x126)<=(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -50192253;
	int32_t x130 = INT32_MIN;
	uint16_t x132 = 5U;
	volatile int32_t t32 = 20713014;

	t32 = ((x129<x130)<=(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -7250;
	int32_t x134 = -1;
	static int64_t x135 = -1LL;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -55;

	t33 = ((x133<x134)<=(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	uint8_t x139 = 4U;
	uint16_t x140 = 69U;
	int32_t t34 = -1223;

	t34 = ((x137<x138)<=(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int16_t x143 = 0;
	static uint8_t x144 = 92U;
	static int32_t t35 = 2740324;

	t35 = ((x141<x142)<=(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 8U;
	int64_t x147 = -1LL;
	static volatile uint8_t x148 = 0U;
	static int32_t t36 = -336626;

	t36 = ((x145<x146)<=(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 5U;
	volatile int8_t x152 = INT8_MIN;
	int32_t t37 = 360578;

	t37 = ((x149<x150)<=(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MAX;
	int64_t x156 = -1LL;
	volatile int32_t t38 = -3085;

	t38 = ((x153<x154)<=(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = -1;
	static uint16_t x159 = UINT16_MAX;
	uint64_t x160 = 1687029136LLU;
	int32_t t39 = 4;

	t39 = ((x157<x158)<=(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x162 = 0U;
	int16_t x163 = INT16_MIN;
	static uint16_t x164 = UINT16_MAX;

	t40 = ((x161<x162)<=(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MAX;
	static volatile int8_t x168 = -1;
	volatile int32_t t41 = 578570;

	t41 = ((x165<x166)<=(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 2252U;
	uint32_t x170 = 1775U;
	uint16_t x171 = 23104U;
	int64_t x172 = -1LL;
	volatile int32_t t42 = 1;

	t42 = ((x169<x170)<=(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int32_t x174 = INT32_MIN;
	static int16_t x175 = INT16_MAX;
	uint64_t x176 = UINT64_MAX;

	t43 = ((x173<x174)<=(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 15716;
	uint8_t x178 = 1U;
	uint64_t x179 = 62468971603486LLU;
	int32_t t44 = 3903;

	t44 = ((x177<x178)<=(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -1;
	int16_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = -1;
	static int32_t t45 = 803834;

	t45 = ((x181<x182)<=(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static int16_t x186 = INT16_MAX;
	uint32_t x187 = UINT32_MAX;
	static volatile int16_t x188 = -5061;
	static int32_t t46 = -313851;

	t46 = ((x185<x186)<=(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = 3U;
	uint16_t x191 = 21U;
	volatile int32_t t47 = 5;

	t47 = ((x189<x190)<=(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	int64_t x195 = -1524LL;
	int64_t x196 = INT64_MAX;
	int32_t t48 = -334660339;

	t48 = ((x193<x194)<=(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	static int32_t x199 = -43577305;
	volatile int32_t t49 = 869434457;

	t49 = ((x197<x198)<=(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -25;
	int32_t x203 = -5;
	volatile int8_t x204 = 7;
	static int32_t t50 = 577595;

	t50 = ((x201<x202)<=(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int16_t x206 = 7;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = -34323780;

	t51 = ((x205<x206)<=(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x211 = -1;

	t52 = ((x209<x210)<=(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = 23966765LLU;
	int8_t x214 = INT8_MIN;
	static volatile int8_t x215 = -4;
	int8_t x216 = -9;
	int32_t t53 = 0;

	t53 = ((x213<x214)<=(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x219 = -1;
	int64_t x220 = 82716460LL;
	int32_t t54 = 1610;

	t54 = ((x217<x218)<=(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static int64_t x222 = 1156LL;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = -14;

	t55 = ((x221<x222)<=(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static int64_t x226 = -5974012949287412LL;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -1;

	t56 = ((x225<x226)<=(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MAX;
	int64_t x231 = -1LL;
	int16_t x232 = -1;
	static int32_t t57 = 183769;

	t57 = ((x229<x230)<=(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = 2562275;

	t58 = ((x233<x234)<=(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 2U;
	static volatile int16_t x238 = 37;
	volatile int16_t x239 = 597;
	volatile int32_t t59 = -267665077;

	t59 = ((x237<x238)<=(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = -815;
	volatile uint8_t x243 = 1U;

	t60 = ((x241<x242)<=(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = 2U;
	static uint16_t x247 = 224U;
	static volatile int64_t x248 = INT64_MIN;
	int32_t t61 = -118607;

	t61 = ((x245<x246)<=(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = 117;
	uint16_t x250 = 181U;
	static volatile int64_t x251 = INT64_MIN;
	int16_t x252 = 1317;
	int32_t t62 = 1110749;

	t62 = ((x249<x250)<=(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	uint64_t x254 = 162664LLU;
	volatile int8_t x255 = INT8_MIN;
	uint32_t x256 = 1931U;
	int32_t t63 = -17815;

	t63 = ((x253<x254)<=(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -38200778;
	uint32_t x258 = UINT32_MAX;
	static uint8_t x259 = UINT8_MAX;
	int16_t x260 = INT16_MIN;

	t64 = ((x257<x258)<=(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	uint16_t x262 = 10U;
	volatile int8_t x263 = 11;
	uint64_t x264 = 19641LLU;
	int32_t t65 = 53360;

	t65 = ((x261<x262)<=(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	static int16_t x266 = INT16_MAX;
	uint64_t x267 = 4242197333LLU;
	volatile int32_t x268 = -1;
	volatile int32_t t66 = 1;

	t66 = ((x265<x266)<=(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MAX;
	int16_t x271 = -1;

	t67 = ((x269<x270)<=(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 15U;
	volatile int64_t x274 = INT64_MIN;
	int64_t x275 = -473LL;
	volatile int32_t t68 = -115536214;

	t68 = ((x273<x274)<=(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -1;
	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = 0;
	volatile int32_t x280 = -1;
	volatile int32_t t69 = 532643226;

	t69 = ((x277<x278)<=(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MAX;

	t70 = ((x281<x282)<=(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = 1;
	uint16_t x286 = 9U;
	static int32_t x287 = -1;
	int32_t t71 = 1;

	t71 = ((x285<x286)<=(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x289 = 3;
	int8_t x290 = -1;
	int16_t x291 = 0;
	uint8_t x292 = 3U;
	volatile int32_t t72 = -139;

	t72 = ((x289<x290)<=(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MAX;
	int32_t x294 = INT32_MIN;
	volatile int32_t x295 = -1;
	int8_t x296 = -5;
	volatile int32_t t73 = 225483;

	t73 = ((x293<x294)<=(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 55053LLU;
	static int64_t x298 = -639534LL;
	static int32_t x299 = 6638;
	static volatile int8_t x300 = INT8_MAX;
	int32_t t74 = -9;

	t74 = ((x297<x298)<=(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = 320LL;
	int8_t x303 = INT8_MIN;
	volatile int32_t t75 = 90;

	t75 = ((x301<x302)<=(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 29218966715052538LLU;
	static int16_t x306 = 3080;
	volatile int32_t x307 = INT32_MAX;
	volatile int16_t x308 = -44;
	volatile int32_t t76 = -22920688;

	t76 = ((x305<x306)<=(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = INT64_MAX;
	int8_t x311 = INT8_MAX;
	static int32_t t77 = 26625;

	t77 = ((x309<x310)<=(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	static volatile int32_t t78 = -324668;

	t78 = ((x313<x314)<=(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	static uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 397401492007LLU;
	volatile int32_t t79 = -2;

	t79 = ((x317<x318)<=(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int32_t x323 = 190;
	int32_t x324 = 387292101;
	int32_t t80 = -2;

	t80 = ((x321<x322)<=(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = UINT32_MAX;
	uint64_t x326 = UINT64_MAX;
	static int8_t x327 = INT8_MIN;
	int16_t x328 = 2;
	volatile int32_t t81 = 267041;

	t81 = ((x325<x326)<=(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 55625208LLU;
	int8_t x330 = 34;
	int16_t x331 = -1;
	uint16_t x332 = 32684U;
	int32_t t82 = -121;

	t82 = ((x329<x330)<=(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MAX;
	volatile uint32_t x336 = 11332U;

	t83 = ((x333<x334)<=(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 16U;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 2U;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t84 = 13795;

	t84 = ((x337<x338)<=(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 1;
	int16_t x342 = -57;
	static volatile int16_t x343 = -576;
	static int64_t x344 = -4996211552693LL;

	t85 = ((x341<x342)<=(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = 3342U;
	uint16_t x346 = 3777U;
	static int32_t x347 = INT32_MAX;
	int32_t t86 = -737816;

	t86 = ((x345<x346)<=(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;
	int16_t x352 = 2297;

	t87 = ((x349<x350)<=(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 8U;

	t88 = ((x353<x354)<=(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	uint8_t x358 = 12U;
	int32_t x359 = INT32_MIN;
	static uint32_t x360 = UINT32_MAX;
	static int32_t t89 = -47;

	t89 = ((x357<x358)<=(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int32_t x362 = -1;
	int64_t x363 = -37LL;
	volatile uint8_t x364 = 6U;
	volatile int32_t t90 = -9425;

	t90 = ((x361<x362)<=(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = 13288002490LLU;
	int8_t x367 = INT8_MIN;
	int64_t x368 = 94500LL;
	static int32_t t91 = -10026320;

	t91 = ((x365<x366)<=(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = 8;
	static int32_t x371 = INT32_MIN;
	volatile int8_t x372 = -5;
	int32_t t92 = 3;

	t92 = ((x369<x370)<=(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x374 = 4234;
	volatile int16_t x375 = -1;
	int64_t x376 = 136651139521LL;
	int32_t t93 = 243;

	t93 = ((x373<x374)<=(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 29401U;
	uint32_t x378 = 30431962U;
	uint8_t x379 = 13U;
	uint16_t x380 = UINT16_MAX;
	static volatile int32_t t94 = 0;

	t94 = ((x377<x378)<=(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = 32U;
	int32_t x383 = INT32_MAX;
	volatile uint16_t x384 = 3U;
	volatile int32_t t95 = -98;

	t95 = ((x381<x382)<=(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int16_t x387 = -1;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 69;

	t96 = ((x385<x386)<=(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = 1241959LL;
	static int64_t x391 = INT64_MIN;
	volatile int32_t t97 = 3944;

	t97 = ((x389<x390)<=(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 1683U;
	int16_t x394 = -3890;
	static int64_t x395 = -4480LL;
	volatile int32_t t98 = -296;

	t98 = ((x393<x394)<=(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	uint32_t x400 = 3570064U;
	volatile int32_t t99 = -351974552;

	t99 = ((x397<x398)<=(x399<=x400));

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

