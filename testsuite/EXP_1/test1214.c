#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
volatile uint16_t x9 = UINT16_MAX;
int16_t x17 = INT16_MIN;
int32_t x20 = INT32_MIN;
int32_t x26 = -1;
volatile int32_t x28 = INT32_MAX;
uint16_t x30 = 17U;
static volatile uint32_t x32 = 769750U;
uint8_t x36 = 1U;
static int64_t t8 = 4222360792234829756LL;
volatile uint8_t x38 = 0U;
int8_t x47 = 0;
int64_t x49 = INT64_MIN;
int32_t x50 = -1;
int32_t x52 = INT32_MIN;
static volatile int32_t t11 = -413;
int8_t x58 = -1;
volatile int8_t x60 = 1;
volatile int32_t t12 = 3238;
uint8_t x67 = 16U;
int64_t t14 = -606532992664943LL;
int16_t x69 = -457;
uint64_t x72 = 68833LLU;
volatile uint32_t x82 = UINT32_MAX;
int32_t x93 = -174150381;
volatile uint64_t t21 = 1927201LLU;
volatile uint64_t x107 = UINT64_MAX;
volatile uint32_t x108 = 6U;
uint32_t x110 = 151U;
int16_t x113 = INT16_MIN;
uint16_t x116 = 5510U;
int32_t t26 = -1026708;
uint64_t x121 = UINT64_MAX;
uint32_t x124 = 47U;
int32_t x128 = -38448;
static int32_t x129 = -1;
static int16_t x134 = 21;
volatile int64_t t31 = -34431412466136LL;
uint64_t t32 = 22337376LLU;
uint8_t x142 = 1U;
uint16_t x143 = 5261U;
int64_t x152 = INT64_MIN;
static int64_t t35 = -894602143972039469LL;
int16_t x164 = 1;
volatile int32_t t38 = -512252291;
static int16_t x168 = -997;
int32_t x171 = -1;
int32_t x173 = INT32_MAX;
uint64_t t42 = 11897434997LLU;
int16_t x191 = -2511;
int8_t x200 = -1;
volatile int16_t x203 = INT16_MIN;
int64_t x213 = -2LL;
uint32_t x215 = 9561U;
int16_t x219 = -1;
static int32_t x220 = -1;
static volatile int32_t t50 = -1;
static int64_t x230 = 41324330702LL;
uint8_t x233 = UINT8_MAX;
volatile int64_t t55 = 5LL;
uint8_t x243 = UINT8_MAX;
int32_t t59 = 1300208;
static volatile int16_t x264 = -5;
volatile int32_t x271 = INT32_MIN;
int64_t x272 = INT64_MIN;
volatile int64_t t63 = -22294702670LL;
uint8_t x276 = UINT8_MAX;
volatile int64_t t65 = 856869533403660998LL;
int32_t x282 = INT32_MAX;
static int64_t x283 = -12864976LL;
int8_t x285 = 10;
int16_t x287 = INT16_MIN;
int8_t x290 = INT8_MIN;
volatile uint64_t t68 = 104574910379LLU;
uint32_t x302 = UINT32_MAX;
static int8_t x309 = INT8_MIN;
uint16_t x310 = 18162U;
static int64_t x312 = 779501734623LL;
static uint64_t t73 = 3LLU;
static volatile int8_t x314 = INT8_MIN;
int8_t x318 = 1;
volatile uint8_t x320 = UINT8_MAX;
int32_t x322 = INT32_MIN;
volatile int32_t t76 = -1;
uint64_t x330 = UINT64_MAX;
int64_t x331 = -1LL;
int32_t t79 = -38;
int64_t x337 = -1LL;
int32_t x349 = -1;
uint64_t x351 = 201LLU;
static int64_t x354 = INT64_MAX;
uint16_t x358 = 7474U;
uint8_t x365 = 5U;
int8_t x371 = INT8_MIN;
uint64_t x378 = 1091577496551317713LLU;
int64_t x384 = -5972925254815750LL;
static uint64_t x386 = 428291LLU;
static int64_t t91 = 13983204216LL;
volatile int8_t x390 = INT8_MIN;
uint32_t x407 = UINT32_MAX;
int64_t x408 = INT64_MIN;
volatile uint64_t t98 = 27792LLU;
int32_t x420 = -1;


void f0(void) {
	int8_t x1 = 0;
	uint8_t x2 = 35U;
	uint8_t x3 = 25U;
	int32_t x4 = -14125;
	volatile int32_t t0 = -8165;

	t0 = (((x1==x2)*x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MIN;
	int8_t x8 = 11;
	volatile int32_t t1 = -82;

	t1 = (((x5==x6)*x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	volatile int32_t x11 = INT32_MAX;
	int16_t x12 = 35;
	int32_t t2 = -4901877;

	t2 = (((x9==x10)*x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int32_t x14 = INT32_MAX;
	uint8_t x15 = 23U;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -130255LL;

	t3 = (((x13==x14)*x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1751;
	int8_t x19 = INT8_MAX;
	int32_t t4 = 620;

	t4 = (((x17==x18)*x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int16_t x22 = INT16_MIN;
	static volatile uint32_t x23 = 11U;
	int64_t x24 = INT64_MIN;
	static int64_t t5 = -54346354312724284LL;

	t5 = (((x21==x22)*x23)%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int32_t x27 = 3;
	int32_t t6 = -21689366;

	t6 = (((x25==x26)*x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static uint64_t x31 = 15LLU;
	volatile uint64_t t7 = 0LLU;

	t7 = (((x29==x30)*x31)%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -6;
	uint64_t x34 = UINT64_MAX;
	static int64_t x35 = -23LL;

	t8 = (((x33==x34)*x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint16_t x39 = 9U;
	int8_t x40 = -7;
	static int32_t t9 = 2;

	t9 = (((x37==x38)*x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = -2209948505186408313LL;
	static volatile int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 12;

	t10 = (((x45==x46)*x47)%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x51 = 208951537;

	t11 = (((x49==x50)*x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 0U;
	static int32_t x59 = INT32_MIN;

	t12 = (((x57==x58)*x59)%x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	static uint64_t x62 = 62389486LLU;
	volatile int8_t x63 = -1;
	int32_t x64 = -1;
	static volatile int32_t t13 = -6;

	t13 = (((x61==x62)*x63)%x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x66 = -1;
	int64_t x68 = INT64_MIN;

	t14 = (((x65==x66)*x67)%x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = INT64_MIN;
	volatile uint16_t x71 = UINT16_MAX;
	volatile uint64_t t15 = 528840788070LLU;

	t15 = (((x69==x70)*x71)%x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = 9;
	static uint8_t x74 = 20U;
	int16_t x75 = 1;
	volatile int32_t x76 = -1;
	int32_t t16 = -1907411;

	t16 = (((x73==x74)*x75)%x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	int64_t x80 = 696LL;
	int64_t t17 = 180903031599761LL;

	t17 = (((x77==x78)*x79)%x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x81 = INT64_MIN;
	int32_t x83 = -1;
	int16_t x84 = INT16_MAX;
	int32_t t18 = -33987309;

	t18 = (((x81==x82)*x83)%x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MIN;
	volatile int32_t x86 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;
	volatile int64_t t19 = -2561137253806LL;

	t19 = (((x85==x86)*x87)%x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = INT32_MIN;
	uint16_t x90 = 0U;
	static int8_t x91 = INT8_MAX;
	int32_t x92 = 27607019;
	volatile int32_t t20 = -54;

	t20 = (((x89==x90)*x91)%x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x94 = 10LLU;
	static volatile uint64_t x95 = 13999985LLU;
	volatile uint8_t x96 = 1U;

	t21 = (((x93==x94)*x95)%x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x97 = 403810534231LLU;
	uint64_t x98 = 657978477596759LLU;
	uint32_t x99 = 714485038U;
	int32_t x100 = INT32_MIN;
	uint32_t t22 = 365165994U;

	t22 = (((x97==x98)*x99)%x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x101 = UINT64_MAX;
	int16_t x102 = -5;
	uint16_t x103 = 0U;
	static int32_t x104 = INT32_MIN;
	int32_t t23 = -121;

	t23 = (((x101==x102)*x103)%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x106 = 1U;
	volatile uint64_t t24 = 1LLU;

	t24 = (((x105==x106)*x107)%x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	static int16_t x111 = INT16_MIN;
	int16_t x112 = -36;
	static volatile int32_t t25 = -1564094;

	t25 = (((x109==x110)*x111)%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x114 = INT16_MAX;
	uint16_t x115 = UINT16_MAX;

	t26 = (((x113==x114)*x115)%x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x118 = 19U;
	int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t27 = -2131750;

	t27 = (((x117==x118)*x119)%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = 0;
	static int32_t x123 = INT32_MIN;
	volatile uint32_t t28 = 2897559U;

	t28 = (((x121==x122)*x123)%x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	uint32_t x126 = 2U;
	volatile int16_t x127 = -1;
	volatile int32_t t29 = -316728540;

	t29 = (((x125==x126)*x127)%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x130 = INT16_MIN;
	int8_t x131 = 1;
	static uint8_t x132 = UINT8_MAX;
	int32_t t30 = 90865803;

	t30 = (((x129==x130)*x131)%x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = 22;
	int64_t x135 = 100060969741883LL;
	volatile uint16_t x136 = 13349U;

	t31 = (((x133==x134)*x135)%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 224U;
	volatile uint32_t x138 = UINT32_MAX;
	volatile int64_t x139 = INT64_MIN;
	static uint64_t x140 = 6801107LLU;

	t32 = (((x137==x138)*x139)%x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t33 = -54040487;

	t33 = (((x141==x142)*x143)%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	int8_t x146 = INT8_MAX;
	volatile uint64_t x147 = 48862LLU;
	int8_t x148 = 1;
	volatile uint64_t t34 = 1225849458391292352LLU;

	t34 = (((x145==x146)*x147)%x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -32332051;
	int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;

	t35 = (((x149==x150)*x151)%x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x153 = 12429U;
	int8_t x154 = INT8_MIN;
	int16_t x155 = -54;
	int64_t x156 = -1LL;
	int64_t t36 = -1673648987341995021LL;

	t36 = (((x153==x154)*x155)%x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	static int8_t x159 = -1;
	static volatile int32_t x160 = -76923;
	static volatile int32_t t37 = -3772032;

	t37 = (((x157==x158)*x159)%x160);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = 12213846638LL;
	volatile int64_t x162 = -20240821LL;
	int32_t x163 = INT32_MIN;

	t38 = (((x161==x162)*x163)%x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -2;
	volatile int16_t x166 = 981;
	static int64_t x167 = 5903126443761LL;
	int64_t t39 = 162077777106463LL;

	t39 = (((x165==x166)*x167)%x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	static int64_t x172 = -1LL;
	int64_t t40 = 118LL;

	t40 = (((x169==x170)*x171)%x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x174 = 174LLU;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MAX;
	static uint64_t t41 = 243LLU;

	t41 = (((x173==x174)*x175)%x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	uint16_t x178 = 6U;
	int8_t x179 = -1;
	uint64_t x180 = 472939LLU;

	t42 = (((x177==x178)*x179)%x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = INT64_MIN;
	int16_t x186 = INT16_MIN;
	volatile int32_t x187 = INT32_MAX;
	int32_t x188 = 4008686;
	int32_t t43 = -545120;

	t43 = (((x185==x186)*x187)%x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 1;
	uint64_t x190 = UINT64_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t44 = -64;

	t44 = (((x189==x190)*x191)%x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	volatile int64_t x194 = 3156979132857159980LL;
	uint8_t x195 = UINT8_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t45 = 20653U;

	t45 = (((x193==x194)*x195)%x196);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = -1LL;
	int32_t x199 = INT32_MIN;
	static int32_t t46 = 0;

	t46 = (((x197==x198)*x199)%x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int64_t x204 = -4383177978851LL;
	volatile int64_t t47 = 184255LL;

	t47 = (((x201==x202)*x203)%x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MIN;
	volatile uint8_t x210 = 3U;
	int8_t x211 = -1;
	int8_t x212 = -1;
	volatile int32_t t48 = -17299;

	t48 = (((x209==x210)*x211)%x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = INT64_MIN;
	uint32_t x216 = UINT32_MAX;
	static uint32_t t49 = 2572U;

	t49 = (((x213==x214)*x215)%x216);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = UINT32_MAX;
	uint64_t x218 = UINT64_MAX;

	t50 = (((x217==x218)*x219)%x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	static uint8_t x222 = 4U;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = 761;
	int32_t t51 = 51958178;

	t51 = (((x221==x222)*x223)%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = 457LLU;
	int8_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int64_t t52 = -97021075200LL;

	t52 = (((x225==x226)*x227)%x228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -95737;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t53 = 8689534737588623LLU;

	t53 = (((x229==x230)*x231)%x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t54 = 339872341;

	t54 = (((x233==x234)*x235)%x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MAX;
	volatile int64_t x238 = -4644LL;
	int64_t x239 = 2506369LL;
	int16_t x240 = 1458;

	t55 = (((x237==x238)*x239)%x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	volatile int64_t x242 = INT64_MIN;
	uint32_t x244 = 134U;
	volatile uint32_t t56 = 13400U;

	t56 = (((x241==x242)*x243)%x244);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int8_t x246 = 26;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 3339906U;
	volatile uint32_t t57 = 11377280U;

	t57 = (((x245==x246)*x247)%x248);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x250 = -1;
	int8_t x251 = -1;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t58 = -6293893;

	t58 = (((x249==x250)*x251)%x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	static int8_t x255 = 2;
	static int16_t x256 = 4589;

	t59 = (((x253==x254)*x255)%x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = -1;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 17U;
	int8_t x260 = INT8_MAX;
	static int32_t t60 = -474501;

	t60 = (((x257==x258)*x259)%x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 2LLU;
	int8_t x262 = INT8_MAX;
	static uint32_t x263 = 103454151U;
	uint32_t t61 = 56U;

	t61 = (((x261==x262)*x263)%x264);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x265 = 199034LLU;
	uint8_t x266 = UINT8_MAX;
	volatile int64_t x267 = INT64_MIN;
	static int8_t x268 = INT8_MIN;
	int64_t t62 = 413LL;

	t62 = (((x265==x266)*x267)%x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x269 = 1LL;
	static uint16_t x270 = 40U;

	t63 = (((x269==x270)*x271)%x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -1216437275735930LL;
	int64_t x274 = INT64_MIN;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint32_t t64 = 1033740U;

	t64 = (((x273==x274)*x275)%x276);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 12977;
	int16_t x278 = 116;
	int32_t x279 = -123902882;
	int64_t x280 = INT64_MIN;

	t65 = (((x277==x278)*x279)%x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x281 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;
	uint64_t t66 = 151360403LLU;

	t66 = (((x281==x282)*x283)%x284);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = -1;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t67 = 875U;

	t67 = (((x285==x286)*x287)%x288);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x289 = INT16_MAX;
	uint64_t x291 = 0LLU;
	static int8_t x292 = 23;

	t68 = (((x289==x290)*x291)%x292);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = 7306610281LLU;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = UINT16_MAX;
	volatile int64_t t69 = 15494256LL;

	t69 = (((x293==x294)*x295)%x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	int8_t x299 = -2;
	int8_t x300 = INT8_MIN;
	static int32_t t70 = 40530817;

	t70 = (((x297==x298)*x299)%x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MAX;
	int32_t x303 = -12;
	static int64_t x304 = INT64_MIN;
	int64_t t71 = 515835273856636LL;

	t71 = (((x301==x302)*x303)%x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 3U;
	int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MIN;
	volatile int64_t x308 = 75275412LL;
	volatile int64_t t72 = 1466142LL;

	t72 = (((x305==x306)*x307)%x308);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x311 = 239125272LLU;

	t73 = (((x309==x310)*x311)%x312);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	int64_t x315 = INT64_MAX;
	int64_t x316 = -481159491905735LL;
	static int64_t t74 = 7258649LL;

	t74 = (((x313==x314)*x315)%x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x317 = 11;
	int16_t x319 = INT16_MIN;
	int32_t t75 = 641825;

	t75 = (((x317==x318)*x319)%x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 168212U;
	int32_t x323 = INT32_MIN;
	int32_t x324 = -3;

	t76 = (((x321==x322)*x323)%x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = -1;
	int8_t x326 = -1;
	int32_t x327 = 2;
	int8_t x328 = -1;
	static int32_t t77 = 11768242;

	t77 = (((x325==x326)*x327)%x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x332 = -7470LL;
	volatile int64_t t78 = 15607226667347678LL;

	t78 = (((x329==x330)*x331)%x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int64_t x334 = -1LL;
	int8_t x335 = 11;
	int32_t x336 = INT32_MIN;

	t79 = (((x333==x334)*x335)%x336);

	if (t79 != 11) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x338 = INT8_MIN;
	int16_t x339 = 0;
	volatile int64_t x340 = -1LL;
	volatile int64_t t80 = 37976439LL;

	t80 = (((x337==x338)*x339)%x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x341 = INT16_MIN;
	uint8_t x342 = UINT8_MAX;
	volatile int16_t x343 = -1;
	int64_t x344 = 251808LL;
	volatile int64_t t81 = 310816468691224252LL;

	t81 = (((x341==x342)*x343)%x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x350 = INT16_MAX;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t82 = 296LLU;

	t82 = (((x349==x350)*x351)%x352);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x353 = 20U;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = -1;
	int32_t t83 = 0;

	t83 = (((x353==x354)*x355)%x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t84 = 71;

	t84 = (((x357==x358)*x359)%x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -3049299604026LL;
	static volatile int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 17U;
	int32_t t85 = -72204159;

	t85 = (((x361==x362)*x363)%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x366 = 726000138LLU;
	uint16_t x367 = 13U;
	uint64_t x368 = 1487LLU;
	uint64_t t86 = 52647386300470LLU;

	t86 = (((x365==x366)*x367)%x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -1;
	int64_t x370 = -3598247634444401LL;
	int8_t x372 = 4;
	volatile int32_t t87 = 237;

	t87 = (((x369==x370)*x371)%x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = 6;
	int16_t x375 = 12;
	int8_t x376 = INT8_MIN;
	volatile int32_t t88 = 3047917;

	t88 = (((x373==x374)*x375)%x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 96LLU;
	int64_t x379 = -1LL;
	int32_t x380 = INT32_MAX;
	int64_t t89 = -511LL;

	t89 = (((x377==x378)*x379)%x380);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x381 = UINT32_MAX;
	int8_t x382 = 0;
	uint8_t x383 = 4U;
	volatile int64_t t90 = -304448047312LL;

	t90 = (((x381==x382)*x383)%x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MIN;
	uint8_t x387 = 0U;
	static int64_t x388 = -23572463678942154LL;

	t91 = (((x385==x386)*x387)%x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 1LLU;
	volatile int16_t x391 = 0;
	volatile int64_t x392 = -15654944356328LL;
	static volatile int64_t t92 = -13194LL;

	t92 = (((x389==x390)*x391)%x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = -678873;
	int8_t x394 = -1;
	volatile uint32_t x395 = 2587518U;
	int32_t x396 = 3463310;
	volatile uint32_t t93 = 90U;

	t93 = (((x393==x394)*x395)%x396);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x397 = 105U;
	static int32_t x398 = INT32_MIN;
	volatile int64_t x399 = INT64_MAX;
	static int8_t x400 = -1;
	static volatile int64_t t94 = 124778067011742LL;

	t94 = (((x397==x398)*x399)%x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 2620U;
	static int32_t x402 = -365;
	static int16_t x403 = INT16_MIN;
	static int32_t x404 = INT32_MIN;
	int32_t t95 = -541292;

	t95 = (((x401==x402)*x403)%x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 1;
	int64_t x406 = -1LL;
	volatile int64_t t96 = 1396219768752LL;

	t96 = (((x405==x406)*x407)%x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x409 = 1800671144U;
	static int32_t x410 = 1;
	static uint32_t x411 = 863878326U;
	int16_t x412 = 77;
	uint32_t t97 = 151690416U;

	t97 = (((x409==x410)*x411)%x412);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = 469U;
	volatile int32_t x414 = INT32_MIN;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;

	t98 = (((x413==x414)*x415)%x416);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	volatile int32_t x418 = 978360842;
	int64_t x419 = INT64_MAX;
	volatile int64_t t99 = -2332LL;

	t99 = (((x417==x418)*x419)%x420);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

