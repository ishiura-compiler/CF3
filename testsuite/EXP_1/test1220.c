#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x16 = UINT32_MAX;
volatile uint32_t t6 = 1U;
static int16_t x29 = INT16_MIN;
int16_t x30 = INT16_MIN;
static volatile int64_t x32 = -10071364LL;
int64_t x34 = INT64_MIN;
int32_t x36 = INT32_MIN;
int64_t t8 = 30403LL;
uint32_t t10 = 3606638U;
static uint64_t x45 = 4620480578269995LLU;
int16_t x50 = INT16_MIN;
int16_t x68 = INT16_MIN;
int16_t x69 = INT16_MIN;
int8_t x73 = INT8_MIN;
int8_t x83 = INT8_MIN;
static int64_t x85 = -14LL;
volatile int8_t x87 = -18;
volatile uint8_t x89 = 0U;
int8_t x93 = -1;
volatile int64_t t27 = -110816570LL;
static uint64_t x116 = 85587068278882LLU;
int8_t x121 = -19;
int32_t t30 = 415036;
int32_t x127 = INT32_MAX;
static int16_t x138 = -73;
int8_t x139 = INT8_MAX;
int32_t x140 = -3040644;
volatile uint16_t x145 = UINT16_MAX;
volatile uint64_t t36 = 268031899741852LLU;
int64_t x152 = INT64_MIN;
static int32_t t38 = -99911155;
uint64_t x157 = 3LLU;
uint16_t x165 = 7U;
int32_t t43 = -20;
uint32_t x188 = 1007636U;
volatile int64_t t46 = 48019231LL;
int32_t t49 = 6;
static volatile int32_t x202 = -1;
int8_t x206 = INT8_MIN;
volatile int64_t x210 = INT64_MAX;
int16_t x211 = INT16_MAX;
volatile uint32_t x213 = 7U;
uint32_t x215 = 30U;
volatile uint32_t t53 = 1644369159U;
int8_t x218 = INT8_MAX;
int32_t t54 = -1;
int16_t x225 = -54;
static int32_t x231 = INT32_MIN;
int8_t x235 = -1;
int8_t x237 = INT8_MIN;
uint64_t x240 = 39096571049LLU;
int8_t x241 = -1;
int16_t x246 = 2;
int32_t x247 = INT32_MIN;
static int32_t t61 = -65615822;
int8_t x256 = INT8_MIN;
int32_t x274 = INT32_MAX;
static uint16_t x276 = UINT16_MAX;
volatile int32_t t69 = 96;
uint32_t x284 = 663399468U;
int8_t x285 = INT8_MIN;
volatile int8_t x290 = -1;
int32_t t72 = 678823131;
int32_t x293 = -1;
volatile int64_t t73 = -248540LL;
uint64_t t74 = 1147814983749LLU;
int16_t x303 = -1;
static int64_t x308 = INT64_MIN;
volatile int64_t t76 = -8LL;
int16_t x309 = INT16_MIN;
volatile int8_t x313 = 0;
int8_t x316 = 1;
int32_t x317 = 3;
int16_t x320 = INT16_MAX;
uint32_t x322 = 12U;
int64_t x328 = INT64_MIN;
volatile int64_t t81 = -200958730656005800LL;
static uint8_t x334 = UINT8_MAX;
static int32_t x336 = -1;
int32_t x338 = INT32_MIN;
volatile uint32_t x351 = 76972827U;
volatile uint16_t x358 = 121U;
uint32_t x363 = 1U;
uint32_t x364 = 80875U;
int64_t x365 = INT64_MIN;
int32_t t91 = 82;
uint64_t x371 = UINT64_MAX;
static int32_t x372 = 4444807;
int64_t x377 = -923629910664750299LL;
volatile int32_t x380 = 25;
static volatile int32_t x388 = 80;
int16_t x391 = 8928;
static uint32_t x392 = 11U;
volatile int8_t x394 = 4;
int16_t x397 = 282;
volatile uint64_t t99 = 48647468595LLU;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static int16_t x2 = INT16_MAX;
	static volatile int64_t x3 = -1LL;
	static int16_t x4 = -1;
	int64_t t0 = -564173686002590716LL;

	t0 = (((x1==x2)*x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	volatile int64_t x6 = -1LL;
	volatile uint64_t x7 = 6777422240LLU;
	uint64_t x8 = 193221084235620LLU;
	uint64_t t1 = 3221332596LLU;

	t1 = (((x5==x6)*x7)&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = -1;
	int64_t x10 = -1LL;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = UINT8_MAX;
	volatile uint64_t t2 = 279453498LLU;

	t2 = (((x9==x10)*x11)&x12);

	if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;
	int8_t x15 = -1;
	uint32_t t3 = 112491U;

	t3 = (((x13==x14)*x15)&x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 30;
	volatile int32_t x18 = -1749135;
	uint16_t x19 = 31768U;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = 5263626898147LLU;

	t4 = (((x17==x18)*x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -55;
	int16_t x22 = INT16_MIN;
	static int32_t x23 = INT32_MAX;
	static int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -22;

	t5 = (((x21==x22)*x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 3;
	uint16_t x26 = 1U;
	uint16_t x27 = 60U;
	uint32_t x28 = 3U;

	t6 = (((x25==x26)*x27)&x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = 158U;
	int64_t t7 = 13798885LL;

	t7 = (((x29==x30)*x31)&x32);

	if (t7 != 156LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -6954279421LL;
	int64_t x35 = -8LL;

	t8 = (((x33==x34)*x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MAX;
	int8_t x39 = -32;
	volatile int16_t x40 = 12;
	volatile int32_t t9 = -3806208;

	t9 = (((x37==x38)*x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -34096281510217943LL;
	uint64_t x42 = 14810LLU;
	uint32_t x43 = 45617U;
	int32_t x44 = INT32_MAX;

	t10 = (((x41==x42)*x43)&x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	int64_t x47 = -2331180541LL;
	volatile int32_t x48 = -3266261;
	int64_t t11 = -26633632901552411LL;

	t11 = (((x45==x46)*x47)&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 1136924489LL;
	int32_t x51 = INT32_MIN;
	volatile int8_t x52 = 1;
	int32_t t12 = 48818405;

	t12 = (((x49==x50)*x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = 1;
	static uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t13 = 0U;

	t13 = (((x53==x54)*x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = -2941;
	int16_t x59 = INT16_MIN;
	volatile uint16_t x60 = 7U;
	int32_t t14 = 14426902;

	t14 = (((x57==x58)*x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 12U;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 2U;
	int8_t x64 = 1;
	static volatile int32_t t15 = 9742180;

	t15 = (((x61==x62)*x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint16_t x66 = UINT16_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile int32_t t16 = 878775;

	t16 = (((x65==x66)*x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	uint32_t x71 = 8U;
	static uint8_t x72 = 0U;
	uint32_t t17 = 974U;

	t17 = (((x69==x70)*x71)&x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x74 = -1;
	static uint8_t x75 = UINT8_MAX;
	volatile int16_t x76 = -1;
	int32_t t18 = 18;

	t18 = (((x73==x74)*x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint8_t x78 = UINT8_MAX;
	static volatile int64_t x79 = INT64_MIN;
	static int8_t x80 = INT8_MIN;
	static int64_t t19 = 8009LL;

	t19 = (((x77==x78)*x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	volatile int64_t x82 = 13456LL;
	int16_t x84 = -1;
	int32_t t20 = -584947731;

	t20 = (((x81==x82)*x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = UINT16_MAX;
	volatile int8_t x88 = 10;
	volatile int32_t t21 = -6386108;

	t21 = (((x85==x86)*x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	int16_t x91 = -15349;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -6120186;

	t22 = (((x89==x90)*x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;
	int16_t x95 = -1;
	static int8_t x96 = -1;
	volatile int32_t t23 = -13237;

	t23 = (((x93==x94)*x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -1LL;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = UINT8_MAX;
	volatile int16_t x100 = INT16_MIN;
	int32_t t24 = 12477;

	t24 = (((x97==x98)*x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	volatile int32_t x103 = 22190345;
	uint32_t x104 = 226931U;
	static uint32_t t25 = 7122501U;

	t25 = (((x101==x102)*x103)&x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -548;
	uint8_t x106 = 3U;
	int64_t x107 = -1614808353083413776LL;
	uint8_t x108 = UINT8_MAX;
	int64_t t26 = -11799525LL;

	t26 = (((x105==x106)*x107)&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	uint32_t x110 = 1U;
	static volatile int16_t x111 = INT16_MIN;
	volatile int64_t x112 = INT64_MIN;

	t27 = (((x109==x110)*x111)&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 6U;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 1127LLU;
	volatile uint64_t t28 = 1615993LLU;

	t28 = (((x113==x114)*x115)&x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 14U;
	static volatile int8_t x119 = INT8_MIN;
	static int16_t x120 = -1;
	volatile int32_t t29 = -16;

	t29 = (((x117==x118)*x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	int32_t x123 = -50592;
	volatile int32_t x124 = INT32_MAX;

	t30 = (((x121==x122)*x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	static int32_t x126 = -1;
	uint32_t x128 = 94U;
	volatile uint32_t t31 = 159U;

	t31 = (((x125==x126)*x127)&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	volatile int32_t x131 = -2;
	uint64_t x132 = UINT64_MAX;
	uint64_t t32 = 853982066239601LLU;

	t32 = (((x129==x130)*x131)&x132);

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -3;

	t33 = (((x133==x134)*x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static volatile int32_t t34 = 14262;

	t34 = (((x137==x138)*x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 17U;
	static int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	int16_t x144 = -1;
	volatile int32_t t35 = 232386425;

	t35 = (((x141==x142)*x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = -1;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = 117937380858995LLU;

	t36 = (((x145==x146)*x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 3U;
	static uint8_t x150 = 20U;
	uint64_t x151 = 525291737372LLU;
	static uint64_t t37 = 1698477LLU;

	t37 = (((x149==x150)*x151)&x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = -1LL;
	volatile int8_t x155 = -1;
	int32_t x156 = INT32_MIN;

	t38 = (((x153==x154)*x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x158 = 6U;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = 1579243275854561LL;
	static volatile int64_t t39 = 138LL;

	t39 = (((x157==x158)*x159)&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = -7836;
	uint64_t x164 = 83757518477371LLU;
	static uint64_t t40 = 20498LLU;

	t40 = (((x161==x162)*x163)&x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = UINT8_MAX;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = -1LL;
	int64_t t41 = -9469198788LL;

	t41 = (((x165==x166)*x167)&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -1LL;
	volatile uint64_t x170 = 614361280LLU;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = 2U;
	volatile uint32_t t42 = 1690093U;

	t42 = (((x169==x170)*x171)&x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	uint64_t x174 = 69320178083127LLU;
	static int16_t x175 = -1833;
	int8_t x176 = INT8_MIN;

	t43 = (((x173==x174)*x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -1;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 281;

	t44 = (((x177==x178)*x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 3U;
	int8_t x184 = -12;
	int32_t t45 = 54;

	t45 = (((x181==x182)*x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	volatile int16_t x186 = INT16_MIN;
	static int64_t x187 = INT64_MIN;

	t46 = (((x185==x186)*x187)&x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	uint16_t x190 = UINT16_MAX;
	static uint16_t x191 = 14451U;
	int16_t x192 = -1;
	volatile int32_t t47 = -476633722;

	t47 = (((x189==x190)*x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = UINT64_MAX;
	uint8_t x194 = UINT8_MAX;
	static int64_t x195 = -3169336266800747600LL;
	uint16_t x196 = 31124U;
	int64_t t48 = -39649404379974160LL;

	t48 = (((x193==x194)*x195)&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	static uint8_t x198 = UINT8_MAX;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;

	t49 = (((x197==x198)*x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -1;
	static volatile int64_t x203 = INT64_MIN;
	static uint16_t x204 = 6994U;
	volatile int64_t t50 = 28324574LL;

	t50 = (((x201==x202)*x203)&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -26919032252LL;
	int16_t x207 = -1725;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 3015939;

	t51 = (((x205==x206)*x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -13;
	int16_t x212 = 635;
	volatile int32_t t52 = 132888;

	t52 = (((x209==x210)*x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MIN;
	int8_t x216 = -1;

	t53 = (((x213==x214)*x215)&x216);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int8_t x219 = INT8_MAX;
	uint8_t x220 = 30U;

	t54 = (((x217==x218)*x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -25853;
	uint16_t x222 = 4U;
	uint16_t x223 = 634U;
	uint8_t x224 = 122U;
	int32_t t55 = 3205939;

	t55 = (((x221==x222)*x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = 1;
	static uint8_t x227 = 56U;
	int32_t x228 = INT32_MIN;
	int32_t t56 = -22937;

	t56 = (((x225==x226)*x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	static uint64_t x230 = UINT64_MAX;
	int16_t x232 = 99;
	volatile int32_t t57 = -547763202;

	t57 = (((x229==x230)*x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	volatile int32_t x234 = INT32_MIN;
	volatile uint64_t x236 = 150LLU;
	uint64_t t58 = 258LLU;

	t58 = (((x233==x234)*x235)&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = 49330208001337015LL;
	int8_t x239 = 1;
	volatile uint64_t t59 = 2040285036LLU;

	t59 = (((x237==x238)*x239)&x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = -1;
	volatile int32_t t60 = -1;

	t60 = (((x241==x242)*x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 48U;
	int16_t x248 = INT16_MIN;

	t61 = (((x245==x246)*x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = -1046;
	int8_t x251 = -1;
	static int8_t x252 = INT8_MAX;
	int32_t t62 = 10779;

	t62 = (((x249==x250)*x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -1;
	static uint8_t x255 = UINT8_MAX;
	int32_t t63 = -7323000;

	t63 = (((x253==x254)*x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	int32_t x259 = 1476;
	uint64_t x260 = UINT64_MAX;
	uint64_t t64 = 10343249941934487LLU;

	t64 = (((x257==x258)*x259)&x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 0;
	volatile int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MAX;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t65 = 20206;

	t65 = (((x261==x262)*x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	uint64_t x266 = 1657844636511869LLU;
	static volatile int32_t x267 = -1;
	static volatile uint16_t x268 = UINT16_MAX;
	int32_t t66 = 0;

	t66 = (((x265==x266)*x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = -1;
	int8_t x271 = -1;
	static volatile int8_t x272 = INT8_MAX;
	volatile int32_t t67 = -29403;

	t67 = (((x269==x270)*x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = INT32_MAX;
	volatile int32_t t68 = 54;

	t68 = (((x273==x274)*x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 1U;
	int8_t x278 = -1;
	int8_t x279 = INT8_MAX;
	static int16_t x280 = INT16_MIN;

	t69 = (((x277==x278)*x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 256768662455LL;
	int64_t x282 = INT64_MAX;
	uint16_t x283 = 12543U;
	uint32_t t70 = 808844638U;

	t70 = (((x281==x282)*x283)&x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x286 = 1025566023233LLU;
	static uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -139005;

	t71 = (((x285==x286)*x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint16_t x291 = 21650U;
	volatile uint16_t x292 = 59U;

	t72 = (((x289==x290)*x291)&x292);

	if (t72 != 18) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = 1139;
	volatile int64_t x296 = INT64_MIN;

	t73 = (((x293==x294)*x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MAX;
	int32_t x298 = 511;
	int16_t x299 = INT16_MIN;
	volatile uint64_t x300 = 141LLU;

	t74 = (((x297==x298)*x299)&x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MAX;
	int64_t x302 = -1LL;
	int64_t x304 = INT64_MAX;
	static int64_t t75 = -322458772520194356LL;

	t75 = (((x301==x302)*x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x306 = 1U;
	volatile uint32_t x307 = UINT32_MAX;

	t76 = (((x305==x306)*x307)&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 0U;
	int16_t x311 = INT16_MIN;
	int16_t x312 = 2;
	static volatile int32_t t77 = -23837236;

	t77 = (((x309==x310)*x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x314 = INT16_MIN;
	uint64_t x315 = UINT64_MAX;
	static uint64_t t78 = 108887419449LLU;

	t78 = (((x313==x314)*x315)&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 14U;
	int16_t x319 = INT16_MIN;
	volatile int32_t t79 = 10;

	t79 = (((x317==x318)*x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int64_t x323 = INT64_MAX;
	int8_t x324 = INT8_MIN;
	static volatile int64_t t80 = 273546819192955405LL;

	t80 = (((x321==x322)*x323)&x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 762039;
	volatile int16_t x326 = INT16_MAX;
	static int8_t x327 = INT8_MIN;

	t81 = (((x325==x326)*x327)&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = 2005883572591105933LL;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MAX;
	static int8_t x332 = INT8_MAX;
	int32_t t82 = -176999265;

	t82 = (((x329==x330)*x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 0U;
	uint64_t x335 = UINT64_MAX;
	uint64_t t83 = 281344885697LLU;

	t83 = (((x333==x334)*x335)&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 1435313U;
	uint8_t x339 = 95U;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = -324278;

	t84 = (((x337==x338)*x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 9744U;
	static int8_t x342 = -1;
	int64_t x343 = -1LL;
	uint32_t x344 = UINT32_MAX;
	static int64_t t85 = 148LL;

	t85 = (((x341==x342)*x343)&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = 0U;
	uint32_t x346 = UINT32_MAX;
	volatile int32_t x347 = -14800873;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t86 = 861305997816002161LLU;

	t86 = (((x345==x346)*x347)&x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t87 = -885784196LL;

	t87 = (((x349==x350)*x351)&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = 54;
	uint32_t t88 = 1157351774U;

	t88 = (((x353==x354)*x355)&x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x357 = 10U;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = 3870439720931103392LLU;

	t89 = (((x357==x358)*x359)&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int16_t x362 = INT16_MIN;
	static uint32_t t90 = 22U;

	t90 = (((x361==x362)*x363)&x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x366 = 40878070U;
	static int16_t x367 = -1;
	volatile uint16_t x368 = 82U;

	t91 = (((x365==x366)*x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x369 = -1;
	static int32_t x370 = INT32_MIN;
	volatile uint64_t t92 = 2985302597458796571LLU;

	t92 = (((x369==x370)*x371)&x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = INT32_MAX;
	uint64_t x375 = 244061294LLU;
	uint32_t x376 = UINT32_MAX;
	uint64_t t93 = 68266614996506473LLU;

	t93 = (((x373==x374)*x375)&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	static int8_t x379 = 1;
	int32_t t94 = -642353887;

	t94 = (((x377==x378)*x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -2;
	int32_t x382 = -38;
	volatile int64_t x383 = -25325304551930842LL;
	volatile int16_t x384 = INT16_MAX;
	int64_t t95 = -24190388885556LL;

	t95 = (((x381==x382)*x383)&x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	int32_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	volatile uint32_t t96 = 148U;

	t96 = (((x385==x386)*x387)&x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 3;
	uint16_t x390 = UINT16_MAX;
	volatile uint32_t t97 = 0U;

	t97 = (((x389==x390)*x391)&x392);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MAX;
	int8_t x395 = 1;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = -327660;

	t98 = (((x393==x394)*x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -41;
	uint64_t x399 = 1152556197831488373LLU;
	int16_t x400 = -1;

	t99 = (((x397==x398)*x399)&x400);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

