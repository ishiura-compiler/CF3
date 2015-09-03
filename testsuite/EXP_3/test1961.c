#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 125521975LLU;
uint32_t x4 = 2126044U;
int32_t x8 = -4070;
volatile uint16_t x11 = 1U;
uint32_t x17 = 0U;
int32_t x22 = 151;
int64_t t6 = 3056724423173943566LL;
int16_t x31 = -1;
volatile uint16_t x33 = 4000U;
int16_t x36 = INT16_MAX;
uint32_t x44 = 35449237U;
int8_t x48 = INT8_MIN;
int32_t t11 = 739;
uint64_t x53 = 44LLU;
uint64_t x54 = 1651145LLU;
int8_t x55 = INT8_MAX;
uint32_t x61 = 180171698U;
volatile int64_t x62 = -882940240LL;
uint8_t x68 = 20U;
static int32_t x70 = -1;
volatile int32_t t17 = 29402664;
uint32_t x78 = 567526U;
int16_t x81 = -62;
int32_t x85 = -1;
static int8_t x91 = -1;
volatile int32_t t22 = 8055378;
static int64_t x94 = INT64_MAX;
volatile uint16_t x96 = 26U;
int64_t x106 = INT64_MIN;
int32_t t26 = -12;
static uint8_t x109 = UINT8_MAX;
int64_t x112 = -369LL;
int32_t x119 = -314843;
volatile int8_t x120 = -1;
uint16_t x126 = 15542U;
int16_t x127 = -1;
uint64_t x128 = 106384499278000104LLU;
uint32_t x129 = UINT32_MAX;
int32_t x131 = -1;
volatile int32_t t33 = -7;
uint64_t x137 = 11180742LLU;
int32_t x138 = -329110;
int32_t x155 = INT32_MIN;
volatile int64_t x159 = 94LL;
volatile int64_t t39 = -1559031LL;
uint16_t x166 = 207U;
static int16_t x167 = INT16_MIN;
uint32_t t41 = 7363U;
uint8_t x172 = 7U;
volatile int32_t x175 = -12;
volatile uint64_t x177 = 870LLU;
int64_t x178 = INT64_MIN;
uint32_t x186 = UINT32_MAX;
int32_t x187 = INT32_MIN;
int32_t x194 = INT32_MAX;
int64_t x195 = INT64_MIN;
static int64_t x196 = -1LL;
static int64_t x199 = 33999342537509LL;
int64_t x202 = INT64_MIN;
uint8_t x206 = 13U;
int64_t t54 = -29LL;
volatile uint32_t x224 = UINT32_MAX;
static int64_t x226 = INT64_MIN;
static int32_t t56 = 266;
uint64_t x231 = 576085706LLU;
volatile uint64_t t57 = 9202839536614922810LLU;
static int64_t x237 = -1LL;
int16_t x245 = INT16_MAX;
volatile int64_t t61 = -110130LL;
static uint16_t x249 = 10U;
static uint32_t x255 = 130961646U;
static int32_t x261 = -1;
static int32_t x267 = INT32_MIN;
static int8_t x268 = INT8_MAX;
int32_t x269 = 313907;
static volatile int64_t x274 = -504321330LL;
volatile int32_t x275 = -28888;
int8_t x280 = INT8_MIN;
int64_t t70 = -11445383402271597LL;
int8_t x287 = -54;
int16_t x291 = -714;
volatile int32_t t72 = -995302;
static int16_t x293 = 0;
uint64_t x295 = UINT64_MAX;
static uint64_t x297 = 259522537LLU;
static volatile int64_t x308 = -1LL;
static uint8_t x310 = 9U;
int32_t x312 = 4748;
int32_t x316 = -1;
volatile int32_t t78 = -11258;
int64_t x318 = -1LL;
volatile uint64_t x320 = 1774260039421LLU;
uint64_t x322 = UINT64_MAX;
static volatile uint32_t t82 = 89147576U;
int16_t x342 = -1;
static int32_t x343 = -1;
uint64_t x344 = 520648217794LLU;
uint64_t t85 = 153LLU;
int64_t t87 = -1LL;
volatile int64_t x353 = 31734856430429LL;
uint16_t x354 = UINT16_MAX;
volatile int32_t t90 = -18175119;
uint64_t x372 = 766LLU;
volatile int16_t x373 = INT16_MIN;
int64_t t93 = -3345901196724761LL;
uint64_t x378 = 11470571363LLU;
volatile int8_t x382 = INT8_MIN;
volatile int64_t t96 = 279792742471581LL;
volatile int64_t x393 = -7423LL;
uint8_t x395 = 1U;


void f0(void) {
	int64_t x1 = -68538976018198683LL;
	volatile uint8_t x3 = 32U;
	volatile uint32_t t0 = 5394U;

	t0 = ((x1==x2)&(x3|x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 13125;
	volatile uint64_t x6 = 120803594650143LLU;
	int32_t x7 = 0;
	volatile int32_t t1 = -3984;

	t1 = ((x5==x6)&(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	static int16_t x10 = 14;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 449452;

	t2 = ((x9==x10)&(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 71U;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = -628;
	volatile int32_t t3 = -25372764;

	t3 = ((x13==x14)&(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -99LL;

	t4 = ((x17==x18)&(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint16_t x23 = 12U;
	int8_t x24 = 5;
	volatile int32_t t5 = 1;

	t5 = ((x21==x22)&(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	int64_t x28 = INT64_MAX;

	t6 = ((x25==x26)&(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static int32_t x30 = -1;
	uint16_t x32 = 7U;
	volatile int32_t t7 = -7901125;

	t7 = ((x29==x30)&(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MAX;
	static int32_t t8 = -13189860;

	t8 = ((x33==x34)&(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	static uint32_t x38 = 23674524U;
	uint8_t x39 = 35U;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = 38LLU;

	t9 = ((x37==x38)&(x39|x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 6U;
	int32_t x42 = INT32_MIN;
	static int16_t x43 = -2458;
	static uint32_t t10 = 1U;

	t10 = ((x41==x42)&(x43|x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	static int32_t x47 = -1;

	t11 = ((x45==x46)&(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -1;
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 110U;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 60;

	t12 = ((x49==x50)&(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -5660522;

	t13 = ((x53==x54)&(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int8_t x59 = -1;
	static uint16_t x60 = UINT16_MAX;
	int32_t t14 = -1874;

	t14 = ((x57==x58)&(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MAX;
	volatile int8_t x64 = INT8_MIN;
	static int32_t t15 = -13574424;

	t15 = ((x61==x62)&(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = -1;
	volatile int32_t t16 = 5300;

	t16 = ((x65==x66)&(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MAX;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = INT16_MIN;

	t17 = ((x69==x70)&(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint32_t x74 = 927852U;
	static int16_t x75 = INT16_MIN;
	int32_t x76 = -1;
	int32_t t18 = 143611;

	t18 = ((x73==x74)&(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 30U;
	int16_t x79 = 1;
	int64_t x80 = -2067619825LL;
	int64_t t19 = -224376610721034LL;

	t19 = ((x77==x78)&(x79|x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = 17141260428LL;
	volatile int64_t x84 = INT64_MAX;
	int64_t t20 = -121132LL;

	t20 = ((x81==x82)&(x83|x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = 15;
	static int16_t x87 = -495;
	uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 32010138268604LLU;

	t21 = ((x85==x86)&(x87|x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = -1;
	static uint16_t x92 = UINT16_MAX;

	t22 = ((x89==x90)&(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 13U;
	int8_t x95 = 0;
	int32_t t23 = -94037;

	t23 = ((x93==x94)&(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 2U;
	volatile uint16_t x99 = UINT16_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t24 = 1273043204U;

	t24 = ((x97==x98)&(x99|x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 38U;
	int8_t x102 = -7;
	static int16_t x103 = 16;
	volatile int32_t x104 = 1050;
	int32_t t25 = 59;

	t25 = ((x101==x102)&(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static volatile uint16_t x107 = 0U;
	int16_t x108 = INT16_MIN;

	t26 = ((x105==x106)&(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = INT16_MAX;
	int64_t t27 = 1527355LL;

	t27 = ((x109==x110)&(x111|x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -1;
	int64_t x114 = INT64_MAX;
	uint16_t x115 = 755U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -1;

	t28 = ((x113==x114)&(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int16_t x118 = -40;
	static volatile int32_t t29 = -400;

	t29 = ((x117==x118)&(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -23;
	uint64_t x122 = 7046572759579525105LLU;
	int8_t x123 = -1;
	int32_t x124 = -1;
	int32_t t30 = 2;

	t30 = ((x121==x122)&(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	volatile uint64_t t31 = 15751642029346LLU;

	t31 = ((x125==x126)&(x127|x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t32 = 5443715LL;

	t32 = ((x129==x130)&(x131|x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 43608LLU;
	uint16_t x134 = 0U;
	uint16_t x135 = 1253U;
	volatile int8_t x136 = INT8_MAX;

	t33 = ((x133==x134)&(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = 475927;
	volatile int32_t t34 = 419700749;

	t34 = ((x137==x138)&(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -317111258857118LL;
	int32_t x142 = 339921945;
	int32_t x143 = -1;
	static volatile uint64_t x144 = 1LLU;
	static volatile uint64_t t35 = 207788135246LLU;

	t35 = ((x141==x142)&(x143|x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = -770;
	int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MAX;
	uint16_t x148 = UINT16_MAX;
	static volatile int32_t t36 = -181984544;

	t36 = ((x145==x146)&(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;
	volatile uint64_t x151 = 13921556LLU;
	uint32_t x152 = 157U;
	uint64_t t37 = 48LLU;

	t37 = ((x149==x150)&(x151|x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int8_t x154 = INT8_MAX;
	static volatile int8_t x156 = INT8_MIN;
	static volatile int32_t t38 = 1;

	t38 = ((x153==x154)&(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static uint8_t x158 = 2U;
	int64_t x160 = 509336219200838LL;

	t39 = ((x157==x158)&(x159|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -179;

	t40 = ((x161==x162)&(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 29575LL;
	static uint32_t x168 = 291U;

	t41 = ((x165==x166)&(x167|x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1661211399265LL;
	uint8_t x170 = 0U;
	uint16_t x171 = 5365U;
	volatile int32_t t42 = 92;

	t42 = ((x169==x170)&(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 66U;
	int16_t x174 = INT16_MIN;
	volatile int8_t x176 = 3;
	volatile int32_t t43 = -6854;

	t43 = ((x173==x174)&(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x179 = INT32_MIN;
	volatile int64_t x180 = 1281902000LL;
	int64_t t44 = -1013284052LL;

	t44 = ((x177==x178)&(x179|x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	volatile int32_t x183 = -1;
	uint32_t x184 = UINT32_MAX;
	uint32_t t45 = 97920U;

	t45 = ((x181==x182)&(x183|x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 0LL;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = -7LL;

	t46 = ((x185==x186)&(x187|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 101U;
	uint16_t x190 = 3963U;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int64_t t47 = 16529728917LL;

	t47 = ((x189==x190)&(x191|x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 7503U;
	volatile int64_t t48 = 1681574049893341699LL;

	t48 = ((x193==x194)&(x195|x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	uint32_t x198 = UINT32_MAX;
	static int16_t x200 = 12;
	int64_t t49 = -840LL;

	t49 = ((x197==x198)&(x199|x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 13U;
	volatile int16_t x203 = -1;
	static volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 20847;

	t50 = ((x201==x202)&(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t51 = 2207LL;

	t51 = ((x205==x206)&(x207|x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = UINT16_MAX;
	volatile int32_t x211 = 1113;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t52 = 483936157U;

	t52 = ((x209==x210)&(x211|x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -1;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	uint32_t x216 = 5558595U;
	volatile int64_t t53 = 45273110LL;

	t53 = ((x213==x214)&(x215|x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	volatile uint32_t x218 = 229313222U;
	volatile int64_t x219 = INT64_MIN;
	static int8_t x220 = -15;

	t54 = ((x217==x218)&(x219|x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -16134;
	int16_t x222 = -1;
	uint32_t x223 = 420U;
	volatile uint32_t t55 = 1U;

	t55 = ((x221==x222)&(x223|x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 1;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -1;

	t56 = ((x225==x226)&(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MAX;
	int64_t x232 = INT64_MIN;

	t57 = ((x229==x230)&(x231|x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 5895134517902LL;
	volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	int32_t x236 = -90;
	int32_t t58 = 220054;

	t58 = ((x233==x234)&(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 36U;
	int32_t t59 = -153248643;

	t59 = ((x237==x238)&(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	uint16_t x243 = 2221U;
	int8_t x244 = -27;
	volatile int32_t t60 = -3;

	t60 = ((x241==x242)&(x243|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	int16_t x247 = 368;
	int64_t x248 = 369LL;

	t61 = ((x245==x246)&(x247|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = INT8_MIN;
	int32_t x251 = -1;
	static volatile int64_t x252 = -1LL;
	static volatile int64_t t62 = 466740192LL;

	t62 = ((x249==x250)&(x251|x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MAX;
	static int64_t x256 = -974050488071889623LL;
	int64_t t63 = 6355087052704LL;

	t63 = ((x253==x254)&(x255|x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = INT8_MAX;
	volatile uint16_t x259 = 45U;
	static int16_t x260 = INT16_MIN;
	int32_t t64 = -1700;

	t64 = ((x257==x258)&(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	int64_t x263 = INT64_MIN;
	volatile uint32_t x264 = 2709U;
	volatile int64_t t65 = -317324LL;

	t65 = ((x261==x262)&(x263|x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 908;
	int64_t x266 = -1LL;
	int32_t t66 = -6738;

	t66 = ((x265==x266)&(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x270 = -1LL;
	static int16_t x271 = INT16_MAX;
	uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t67 = 3156U;

	t67 = ((x269==x270)&(x271|x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 650347U;
	int16_t x276 = INT16_MIN;
	int32_t t68 = -47;

	t68 = ((x273==x274)&(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	volatile int64_t x278 = INT64_MAX;
	int32_t x279 = INT32_MAX;
	int32_t t69 = -782924;

	t69 = ((x277==x278)&(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -2256;
	int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MAX;
	int8_t x284 = 0;

	t70 = ((x281==x282)&(x283|x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = 3;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = 110359;

	t71 = ((x285==x286)&(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -166LL;
	int8_t x290 = INT8_MIN;
	int8_t x292 = 59;

	t72 = ((x289==x290)&(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 7U;
	uint64_t x296 = UINT64_MAX;
	uint64_t t73 = 47383709019976LLU;

	t73 = ((x293==x294)&(x295|x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x298 = 3U;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -8009;

	t74 = ((x297==x298)&(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 121U;
	int8_t x302 = -1;
	int8_t x303 = INT8_MIN;
	static volatile uint16_t x304 = 19336U;
	static int32_t t75 = 0;

	t75 = ((x301==x302)&(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 2U;
	uint16_t x306 = 896U;
	int8_t x307 = -1;
	volatile int64_t t76 = 6213352LL;

	t76 = ((x305==x306)&(x307|x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	int32_t t77 = -21;

	t77 = ((x309==x310)&(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 0U;
	volatile int64_t x314 = -56481569363399352LL;
	static uint8_t x315 = 5U;

	t78 = ((x313==x314)&(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 1LLU;
	int16_t x319 = INT16_MAX;
	static uint64_t t79 = 3526113LLU;

	t79 = ((x317==x318)&(x319|x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 1645784027346089288LLU;
	uint16_t x323 = 2826U;
	uint8_t x324 = 2U;
	volatile int32_t t80 = -7382;

	t80 = ((x321==x322)&(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 133LL;
	volatile int64_t x326 = INT64_MIN;
	uint8_t x327 = 11U;
	int16_t x328 = 61;
	int32_t t81 = 1100;

	t81 = ((x325==x326)&(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MAX;
	volatile uint32_t x330 = 387903U;
	static uint8_t x331 = 10U;
	uint32_t x332 = 117846691U;

	t82 = ((x329==x330)&(x331|x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = UINT8_MAX;
	static volatile int16_t x334 = INT16_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile uint8_t x336 = 103U;
	uint32_t t83 = 65657U;

	t83 = ((x333==x334)&(x335|x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 65U;
	uint16_t x338 = UINT16_MAX;
	volatile int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 8304727;

	t84 = ((x337==x338)&(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;

	t85 = ((x341==x342)&(x343|x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 1LL;
	static uint16_t x346 = 0U;
	volatile int8_t x347 = -1;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 145013427;

	t86 = ((x345==x346)&(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 0;
	static int64_t x350 = 82LL;
	volatile uint8_t x351 = 6U;
	int64_t x352 = INT64_MIN;

	t87 = ((x349==x350)&(x351|x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x355 = UINT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	int32_t t88 = -10;

	t88 = ((x353==x354)&(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 1916454U;
	uint8_t x358 = UINT8_MAX;
	static volatile int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MAX;
	int32_t t89 = -7488492;

	t89 = ((x357==x358)&(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x362 = 5U;
	static int32_t x363 = -21965937;
	static int32_t x364 = -11;

	t90 = ((x361==x362)&(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static int32_t x366 = 19885121;
	int32_t x367 = -1;
	volatile int64_t x368 = -1LL;
	volatile int64_t t91 = -269398004153319127LL;

	t91 = ((x365==x366)&(x367|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = -1;
	static volatile uint64_t t92 = 33059253533742054LLU;

	t92 = ((x369==x370)&(x371|x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -46;
	volatile int64_t x375 = 16724406935430706LL;
	uint8_t x376 = UINT8_MAX;

	t93 = ((x373==x374)&(x375|x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int64_t x379 = INT64_MAX;
	static int32_t x380 = INT32_MAX;
	volatile int64_t t94 = 322LL;

	t94 = ((x377==x378)&(x379|x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int8_t x383 = -1;
	static uint64_t x384 = UINT64_MAX;
	uint64_t t95 = 136LLU;

	t95 = ((x381==x382)&(x383|x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = 52U;
	static int64_t x388 = INT64_MIN;

	t96 = ((x385==x386)&(x387|x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	static volatile int8_t x390 = INT8_MAX;
	uint16_t x391 = 0U;
	static int64_t x392 = -103164308386LL;
	volatile int64_t t97 = -9469LL;

	t97 = ((x389==x390)&(x391|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x394 = -1LL;
	volatile int64_t x396 = INT64_MAX;
	volatile int64_t t98 = -1515108492LL;

	t98 = ((x393==x394)&(x395|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -1LL;
	static int32_t x398 = -1;
	static uint16_t x399 = UINT16_MAX;
	volatile int64_t x400 = -97149LL;
	int64_t t99 = -184617150248957LL;

	t99 = ((x397==x398)&(x399|x400));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

