#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 122982;
int32_t t0 = -543107930;
static volatile uint32_t t3 = 809U;
int16_t x18 = INT16_MIN;
int8_t x21 = INT8_MIN;
volatile int8_t x24 = 1;
int8_t x25 = INT8_MAX;
int32_t x28 = -1;
uint8_t x31 = 0U;
volatile int32_t t10 = 1;
int16_t x47 = 539;
volatile int32_t t11 = 507528;
int32_t t12 = -16;
int64_t x54 = INT64_MIN;
uint64_t x55 = 1065533319635081LLU;
int32_t t14 = -18756585;
uint8_t x70 = UINT8_MAX;
int8_t x72 = INT8_MAX;
int32_t t16 = -7;
volatile int32_t x73 = -2355598;
int16_t x81 = -1;
uint16_t x88 = UINT16_MAX;
uint32_t x94 = 322253649U;
int16_t x110 = INT16_MIN;
static uint64_t x112 = 4LLU;
int8_t x116 = INT8_MIN;
int16_t x122 = -1;
static uint32_t t28 = 74543544U;
int32_t x127 = -1;
int64_t x131 = -193465LL;
int16_t x133 = INT16_MAX;
uint64_t t31 = 65429LLU;
static uint16_t x150 = UINT16_MAX;
int64_t x156 = -1LL;
uint16_t x157 = 453U;
int32_t t37 = -11378143;
int32_t x166 = -1;
int64_t x168 = -834577388904079LL;
int8_t x175 = 0;
int64_t t41 = 73LL;
int16_t x182 = INT16_MAX;
static volatile int8_t x183 = 1;
static int64_t x187 = INT64_MIN;
int64_t t45 = 23319103123140227LL;
volatile int64_t t46 = -1782530LL;
int8_t x202 = 19;
int16_t x203 = INT16_MIN;
volatile int32_t x209 = INT32_MAX;
static uint32_t x214 = UINT32_MAX;
volatile int32_t t54 = -86650;
int64_t x230 = INT64_MAX;
static int64_t x231 = 60LL;
static volatile int8_t x239 = -1;
volatile int32_t t57 = 3;
int64_t x242 = -1LL;
int32_t x254 = INT32_MIN;
int32_t x262 = INT32_MAX;
uint8_t x273 = UINT8_MAX;
int32_t t65 = -66748769;
int8_t x289 = -1;
int16_t x291 = INT16_MIN;
static int64_t t68 = 240044405294026LL;
int64_t x296 = INT64_MIN;
volatile int32_t t70 = -5189;
int8_t x301 = -1;
volatile int8_t x302 = INT8_MAX;
static int32_t t71 = -1805936;
uint64_t x306 = 210475LLU;
static int64_t x307 = 372639LL;
volatile int32_t t72 = -1684;
int16_t x313 = INT16_MIN;
int8_t x318 = INT8_MIN;
static int32_t t77 = 102566343;
static int16_t x335 = -440;
int64_t x339 = -1LL;
static uint64_t x349 = UINT64_MAX;
int64_t x350 = -1LL;
int16_t x352 = -1;
static volatile uint64_t x356 = 496237397390LLU;
static int32_t x358 = INT32_MIN;
int8_t x359 = INT8_MAX;
int16_t x361 = -1;
uint64_t x367 = UINT64_MAX;
static int16_t x368 = INT16_MIN;
static int16_t x369 = INT16_MAX;
static volatile uint64_t x371 = 20509852LLU;
int16_t x373 = -6896;
int16_t x378 = -20;
static int8_t x386 = INT8_MAX;
int32_t x399 = INT32_MIN;
uint64_t x402 = 17906791926LLU;
volatile int32_t t96 = -163;
int32_t t97 = 1746;


void f0(void) {
	volatile uint8_t x2 = 13U;
	int8_t x3 = -1;
	static volatile int8_t x4 = 40;

	t0 = (((x1/x2)==x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int32_t x6 = 301;
	static int64_t x7 = INT64_MIN;
	int8_t x8 = -1;
	int32_t t1 = -945479;

	t1 = (((x5/x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = 114LL;
	volatile int64_t x11 = -1LL;
	uint64_t x12 = 7214105204459LLU;
	volatile uint64_t t2 = 29108956689LLU;

	t2 = (((x9/x10)==x11)/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = 2514U;

	t3 = (((x13/x14)==x15)/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	volatile int8_t x19 = 0;
	volatile uint32_t x20 = UINT32_MAX;
	static uint32_t t4 = 12466U;

	t4 = (((x17/x18)==x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MAX;
	volatile uint64_t x23 = 240670673219LLU;
	int32_t t5 = 1;

	t5 = (((x21/x22)==x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MAX;
	int64_t x27 = 41012986299726LL;
	static volatile int32_t t6 = 1;

	t6 = (((x25/x26)==x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int16_t x30 = INT16_MIN;
	volatile int64_t x32 = -20LL;
	int64_t t7 = 269776LL;

	t7 = (((x29/x30)==x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 7U;
	int8_t x34 = -1;
	static uint64_t x35 = 36676389323LLU;
	uint64_t x36 = 32336551346133623LLU;
	uint64_t t8 = 0LLU;

	t8 = (((x33/x34)==x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 6U;
	uint64_t x38 = 4630457239LLU;
	uint16_t x39 = 1U;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 23600336LLU;

	t9 = (((x37/x38)==x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	static uint16_t x42 = 252U;
	uint64_t x43 = 88466LLU;
	static uint8_t x44 = UINT8_MAX;

	t10 = (((x41/x42)==x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 20U;
	int64_t x46 = 555901917LL;
	uint8_t x48 = 27U;

	t11 = (((x45/x46)==x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MAX;
	volatile uint8_t x50 = UINT8_MAX;
	volatile int16_t x51 = -12959;
	static int16_t x52 = 17;

	t12 = (((x49/x50)==x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 42;

	t13 = (((x53/x54)==x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	volatile uint64_t x62 = 34017951186005LLU;
	int8_t x63 = -1;
	int16_t x64 = -1;

	t14 = (((x61/x62)==x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MAX;
	int8_t x67 = INT8_MAX;
	static volatile int8_t x68 = -1;
	int32_t t15 = 10986142;

	t15 = (((x65/x66)==x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint16_t x71 = UINT16_MAX;

	t16 = (((x69/x70)==x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = -36;
	int32_t x75 = -1;
	static int16_t x76 = 3330;
	volatile int32_t t17 = 171728;

	t17 = (((x73/x74)==x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 216LLU;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 28489220U;
	static volatile int32_t x80 = -1;
	int32_t t18 = -5023189;

	t18 = (((x77/x78)==x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x82 = 6U;
	static int16_t x83 = -1;
	int16_t x84 = 42;
	static volatile int32_t t19 = -264;

	t19 = (((x81/x82)==x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -63;
	int64_t x86 = 6305693LL;
	int8_t x87 = -54;
	static volatile int32_t t20 = -3146701;

	t20 = (((x85/x86)==x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -27038;
	uint32_t x90 = 1955833631U;
	int64_t x91 = INT64_MAX;
	int32_t x92 = -48;
	volatile int32_t t21 = -10302783;

	t21 = (((x89/x90)==x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 11713U;
	volatile uint8_t x95 = 0U;
	int8_t x96 = INT8_MAX;
	static int32_t t22 = 1084107;

	t22 = (((x93/x94)==x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	static volatile uint8_t x98 = UINT8_MAX;
	static int32_t x99 = -367150;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t23 = 2;

	t23 = (((x97/x98)==x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 56115023;
	int64_t x102 = -1LL;
	static int8_t x103 = INT8_MAX;
	static int64_t x104 = -28LL;
	static int64_t t24 = -6785LL;

	t24 = (((x101/x102)==x103)/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x105 = INT16_MIN;
	volatile uint8_t x106 = UINT8_MAX;
	uint16_t x107 = 1242U;
	static int64_t x108 = INT64_MAX;
	volatile int64_t t25 = -710364745LL;

	t25 = (((x105/x106)==x107)/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	static uint16_t x111 = 6U;
	volatile uint64_t t26 = 2278815LLU;

	t26 = (((x109/x110)==x111)/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MIN;
	volatile int32_t x114 = INT32_MIN;
	int16_t x115 = -1;
	int32_t t27 = -1;

	t27 = (((x113/x114)==x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = 59347253LL;
	volatile uint64_t x123 = 1LLU;
	uint32_t x124 = UINT32_MAX;

	t28 = (((x121/x122)==x123)/x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -3698;
	int64_t x126 = INT64_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t29 = 17842361564421587LLU;

	t29 = (((x125/x126)==x127)/x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MIN;
	static int16_t x130 = INT16_MIN;
	int32_t x132 = INT32_MAX;
	volatile int32_t t30 = 127;

	t30 = (((x129/x130)==x131)/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = INT8_MIN;
	int8_t x135 = -1;
	static uint64_t x136 = 956957848438848LLU;

	t31 = (((x133/x134)==x135)/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -85636753474LL;
	volatile uint16_t x138 = 1U;
	static int8_t x139 = 13;
	int32_t x140 = INT32_MIN;
	volatile int32_t t32 = 296705;

	t32 = (((x137/x138)==x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -1LL;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t33 = 2404;

	t33 = (((x141/x142)==x143)/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 1482;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	volatile int8_t x148 = INT8_MAX;
	volatile int32_t t34 = -913790;

	t34 = (((x145/x146)==x147)/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	static int16_t x151 = 2575;
	int16_t x152 = -1;
	static volatile int32_t t35 = 32033811;

	t35 = (((x149/x150)==x151)/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	static volatile int64_t x154 = -1LL;
	static volatile uint32_t x155 = 27215199U;
	volatile int64_t t36 = 29LL;

	t36 = (((x153/x154)==x155)/x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = INT64_MAX;
	static volatile int8_t x159 = INT8_MAX;
	int32_t x160 = INT32_MAX;

	t37 = (((x157/x158)==x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 78515495U;
	uint16_t x162 = 1992U;
	int64_t x163 = -342559728LL;
	int8_t x164 = -1;
	int32_t t38 = 2;

	t38 = (((x161/x162)==x163)/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -179780676997LL;
	int8_t x167 = 6;
	static volatile int64_t t39 = -13341886732382165LL;

	t39 = (((x165/x166)==x167)/x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 51315U;
	static int16_t x170 = 27;
	uint16_t x171 = UINT16_MAX;
	volatile int32_t x172 = -1;
	volatile int32_t t40 = 141;

	t40 = (((x169/x170)==x171)/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x173 = 15874218264653LLU;
	int32_t x174 = 25;
	int64_t x176 = INT64_MIN;

	t41 = (((x173/x174)==x175)/x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 11;
	static int8_t x178 = INT8_MAX;
	int16_t x179 = 16370;
	static volatile uint8_t x180 = UINT8_MAX;
	static int32_t t42 = 3341;

	t42 = (((x177/x178)==x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = 462140;
	int16_t x184 = INT16_MIN;
	int32_t t43 = -173;

	t43 = (((x181/x182)==x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -11;
	int16_t x186 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t44 = -1;

	t44 = (((x185/x186)==x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 7;
	uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = -1;
	int64_t x192 = INT64_MIN;

	t45 = (((x189/x190)==x191)/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -1;
	int8_t x194 = INT8_MIN;
	int16_t x195 = -30;
	int64_t x196 = 187132719845066LL;

	t46 = (((x193/x194)==x195)/x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 1525784651LLU;
	uint16_t x198 = 2U;
	int16_t x199 = -1;
	static int8_t x200 = -14;
	int32_t t47 = 0;

	t47 = (((x197/x198)==x199)/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = INT8_MAX;
	int32_t x204 = -713910504;
	int32_t t48 = -22;

	t48 = (((x201/x202)==x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = -84043;
	volatile uint32_t x206 = 15842349U;
	int32_t x207 = 1;
	int16_t x208 = -28;
	static int32_t t49 = -29362188;

	t49 = (((x205/x206)==x207)/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x210 = -1954;
	int64_t x211 = INT64_MIN;
	static uint8_t x212 = 51U;
	volatile int32_t t50 = 32129;

	t50 = (((x209/x210)==x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 2U;
	uint32_t x215 = 30U;
	int32_t x216 = INT32_MIN;
	int32_t t51 = -415;

	t51 = (((x213/x214)==x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	static volatile int64_t x218 = 1LL;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = -6612;
	static volatile int32_t t52 = 4425698;

	t52 = (((x217/x218)==x219)/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = -69485656339LL;
	int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = -1;
	volatile int32_t t53 = -60;

	t53 = (((x221/x222)==x223)/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = 7;
	int32_t x226 = -1;
	static uint64_t x227 = 169277LLU;
	volatile int32_t x228 = -2674678;

	t54 = (((x225/x226)==x227)/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	static volatile int64_t x232 = INT64_MIN;
	volatile int64_t t55 = -816LL;

	t55 = (((x229/x230)==x231)/x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x233 = -1;
	int8_t x234 = -1;
	uint64_t x235 = 57919LLU;
	uint16_t x236 = 26233U;
	int32_t t56 = -150735;

	t56 = (((x233/x234)==x235)/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = 3;
	volatile int16_t x238 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;

	t57 = (((x237/x238)==x239)/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = -1LL;
	int64_t x243 = INT64_MAX;
	uint32_t x244 = 101619684U;
	static uint32_t t58 = 2650U;

	t58 = (((x241/x242)==x243)/x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = 1931LL;
	uint32_t x246 = 96701U;
	volatile int16_t x247 = -89;
	static int16_t x248 = INT16_MIN;
	int32_t t59 = -4143;

	t59 = (((x245/x246)==x247)/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x249 = 5U;
	volatile uint64_t x250 = 3518LLU;
	int64_t x251 = -1LL;
	static int16_t x252 = INT16_MAX;
	int32_t t60 = -1487;

	t60 = (((x249/x250)==x251)/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = -1LL;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t61 = -326;

	t61 = (((x253/x254)==x255)/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x261 = 14U;
	int32_t x263 = -1;
	static int64_t x264 = -32529833828LL;
	int64_t t62 = -16105199479LL;

	t62 = (((x261/x262)==x263)/x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	volatile int16_t x267 = 4;
	int32_t x268 = INT32_MIN;
	int32_t t63 = -21741709;

	t63 = (((x265/x266)==x267)/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x274 = INT16_MIN;
	uint32_t x275 = 122U;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t64 = 179958U;

	t64 = (((x273/x274)==x275)/x276);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = -1;
	int8_t x278 = INT8_MAX;
	int8_t x279 = 0;
	int32_t x280 = INT32_MIN;

	t65 = (((x277/x278)==x279)/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x281 = INT8_MIN;
	static volatile int16_t x282 = INT16_MIN;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = -1LL;
	volatile int64_t t66 = 791582LL;

	t66 = (((x281/x282)==x283)/x284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -5292;
	static int64_t x286 = -190430154945LL;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -7LL;
	volatile int64_t t67 = -129011117899763LL;

	t67 = (((x285/x286)==x287)/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x290 = INT8_MAX;
	static volatile int64_t x292 = -1LL;

	t68 = (((x289/x290)==x291)/x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	int64_t x295 = 8LL;
	int64_t t69 = -3742LL;

	t69 = (((x293/x294)==x295)/x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x297 = UINT8_MAX;
	static int16_t x298 = -1;
	volatile int16_t x299 = INT16_MIN;
	int8_t x300 = 1;

	t70 = (((x297/x298)==x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x303 = 367LLU;
	static volatile int16_t x304 = -1;

	t71 = (((x301/x302)==x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -54;
	int32_t x308 = -1;

	t72 = (((x305/x306)==x307)/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x309 = 88U;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 8299081159558330LLU;
	int8_t x312 = INT8_MAX;
	int32_t t73 = -7257;

	t73 = (((x309/x310)==x311)/x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x314 = -1;
	uint32_t x315 = 33506544U;
	uint64_t x316 = 4379684538090LLU;
	volatile uint64_t t74 = 2945308607LLU;

	t74 = (((x313/x314)==x315)/x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x317 = UINT32_MAX;
	int32_t x319 = -433815;
	volatile int32_t x320 = -1214731;
	volatile int32_t t75 = -8937;

	t75 = (((x317/x318)==x319)/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	static int64_t x323 = -1LL;
	static int64_t x324 = INT64_MIN;
	int64_t t76 = 35653LL;

	t76 = (((x321/x322)==x323)/x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x326 = INT16_MIN;
	volatile uint64_t x327 = 15LLU;
	static int32_t x328 = INT32_MAX;

	t77 = (((x325/x326)==x327)/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 1938U;
	volatile uint32_t x331 = UINT32_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t78 = -105724;

	t78 = (((x329/x330)==x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -1041829445392503LL;
	static int64_t x334 = INT64_MIN;
	uint32_t x336 = 425U;
	volatile uint32_t t79 = 62664515U;

	t79 = (((x333/x334)==x335)/x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	uint64_t x338 = 6530784558849129LLU;
	uint8_t x340 = UINT8_MAX;
	int32_t t80 = -15506;

	t80 = (((x337/x338)==x339)/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = 60;
	int64_t x343 = 89LL;
	int64_t x344 = 138164308042LL;
	volatile int64_t t81 = 9225331LL;

	t81 = (((x341/x342)==x343)/x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x345 = 1290U;
	uint64_t x346 = 68754LLU;
	volatile uint8_t x347 = 2U;
	uint16_t x348 = 242U;
	static int32_t t82 = -1123;

	t82 = (((x345/x346)==x347)/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x351 = INT8_MIN;
	int32_t t83 = -89;

	t83 = (((x349/x350)==x351)/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MAX;
	static volatile int8_t x355 = INT8_MAX;
	volatile uint64_t t84 = 181155LLU;

	t84 = (((x353/x354)==x355)/x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t85 = 12;

	t85 = (((x357/x358)==x359)/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t86 = -88428259310814LL;

	t86 = (((x361/x362)==x363)/x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x365 = 23528U;
	int64_t x366 = -1430509899349874844LL;
	int32_t t87 = 1643;

	t87 = (((x365/x366)==x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x370 = -734418883;
	static volatile int8_t x372 = 3;
	volatile int32_t t88 = -256;

	t88 = (((x369/x370)==x371)/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x374 = 15U;
	int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	volatile int32_t t89 = -5043865;

	t89 = (((x373/x374)==x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x377 = 3373U;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 614U;
	static volatile uint32_t t90 = 1781U;

	t90 = (((x377/x378)==x379)/x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x381 = 9848;
	int64_t x382 = INT64_MAX;
	int32_t x383 = 0;
	int64_t x384 = 28909LL;
	volatile int64_t t91 = 95586139LL;

	t91 = (((x381/x382)==x383)/x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t92 = 0;

	t92 = (((x385/x386)==x387)/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;
	volatile int32_t t93 = 6;

	t93 = (((x389/x390)==x391)/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = UINT64_MAX;
	uint16_t x395 = 255U;
	static volatile uint32_t x396 = 44235U;
	uint32_t t94 = 355U;

	t94 = (((x393/x394)==x395)/x396);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x397 = -53522118;
	uint8_t x398 = 1U;
	static int64_t x400 = INT64_MIN;
	static volatile int64_t t95 = 2032818720986LL;

	t95 = (((x397/x398)==x399)/x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = 30;
	volatile int8_t x403 = -1;
	static volatile uint8_t x404 = 47U;

	t96 = (((x401/x402)==x403)/x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 845306045LLU;
	static uint16_t x406 = UINT16_MAX;
	uint16_t x407 = 0U;
	int8_t x408 = -38;

	t97 = (((x405/x406)==x407)/x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x409 = 371U;
	static int16_t x410 = INT16_MAX;
	uint64_t x411 = 2739407755874113LLU;
	int16_t x412 = INT16_MIN;
	int32_t t98 = -35852;

	t98 = (((x409/x410)==x411)/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x413 = INT32_MAX;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = -1;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t99 = 0;

	t99 = (((x413/x414)==x415)/x416);

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

