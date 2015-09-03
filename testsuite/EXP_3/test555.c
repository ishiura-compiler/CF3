#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 287667082;
uint16_t x14 = UINT16_MAX;
static int64_t x15 = -1LL;
int64_t x19 = INT64_MIN;
int32_t x29 = -12808382;
int16_t x30 = 25;
int64_t x31 = -1LL;
uint16_t x39 = UINT16_MAX;
static volatile int8_t x44 = INT8_MIN;
static int32_t x51 = INT32_MIN;
int8_t x67 = 1;
static int32_t x69 = INT32_MIN;
int32_t x75 = -1;
static int8_t x80 = -1;
volatile int64_t x98 = INT64_MAX;
uint8_t x100 = 6U;
int64_t x107 = -1LL;
static int32_t t25 = -89;
volatile int32_t t26 = 232634726;
int32_t x118 = INT32_MAX;
int64_t x142 = 38330738112831LL;
int32_t t33 = -64273058;
uint8_t x145 = UINT8_MAX;
uint16_t x147 = 12295U;
int32_t t34 = 2909;
static uint16_t x149 = 1621U;
int32_t x151 = 20351425;
static volatile int16_t x153 = INT16_MAX;
int64_t x160 = INT64_MAX;
int16_t x167 = INT16_MIN;
int8_t x172 = INT8_MAX;
int64_t x176 = -1LL;
volatile int8_t x178 = INT8_MIN;
int8_t x179 = INT8_MAX;
static volatile int32_t t42 = 996;
uint64_t x194 = 262136258742546LLU;
volatile uint16_t x195 = 375U;
uint64_t x199 = UINT64_MAX;
int16_t x202 = INT16_MIN;
int64_t x207 = -1LL;
uint64_t x218 = UINT64_MAX;
uint32_t x219 = UINT32_MAX;
uint16_t x222 = UINT16_MAX;
int8_t x225 = INT8_MIN;
static uint8_t x226 = 84U;
static int32_t t53 = 7;
int32_t x230 = 1719;
int32_t x231 = INT32_MIN;
int32_t x234 = INT32_MIN;
int16_t x236 = -7820;
int16_t x245 = -1;
static int32_t t57 = -18;
int64_t x251 = INT64_MIN;
uint64_t x259 = UINT64_MAX;
volatile int32_t t61 = 13857812;
int8_t x266 = -1;
static volatile uint16_t x276 = UINT16_MAX;
uint64_t x294 = UINT64_MAX;
static volatile uint32_t x296 = UINT32_MAX;
uint8_t x297 = UINT8_MAX;
volatile int32_t t69 = 1586294;
int16_t x306 = 272;
static int64_t x309 = -1LL;
int16_t x310 = 864;
int32_t t72 = -10749;
uint16_t x317 = 5U;
uint64_t x319 = 8245944LLU;
volatile uint32_t x327 = UINT32_MAX;
static volatile int32_t t75 = -1023813;
volatile int32_t t76 = -3442952;
int8_t x343 = -1;
int64_t x344 = INT64_MIN;
static uint64_t x346 = UINT64_MAX;
static int64_t x349 = INT64_MAX;
int16_t x350 = 1;
volatile int32_t t82 = -22;
int8_t x363 = 50;
int8_t x371 = INT8_MIN;
int32_t t86 = -89212311;
int32_t x386 = -9;
int64_t x388 = INT64_MAX;
static volatile int32_t t90 = 44032773;
int64_t x405 = INT64_MIN;
uint32_t x406 = UINT32_MAX;
volatile uint32_t x408 = 52621981U;
int32_t t91 = -1820;
int8_t x410 = -1;
volatile int64_t x411 = -1LL;
static int8_t x413 = INT8_MIN;
volatile int8_t x423 = INT8_MIN;
int64_t x432 = INT64_MAX;
static int32_t t99 = -978;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint32_t x2 = 8045755U;
	static int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = -2259;

	t0 = ((x1/x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static int64_t x6 = 16170LL;
	static int32_t x7 = INT32_MIN;
	volatile int8_t x8 = -28;

	t1 = ((x5/x6)<(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 9431;
	int8_t x10 = INT8_MAX;
	int32_t x11 = INT32_MIN;
	static uint64_t x12 = UINT64_MAX;
	int32_t t2 = -658;

	t2 = ((x9/x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 2;
	int64_t x16 = -1879646719LL;
	volatile int32_t t3 = 1419470;

	t3 = ((x13/x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 5U;
	uint32_t x18 = UINT32_MAX;
	int16_t x20 = 3;
	volatile int32_t t4 = 1553463;

	t4 = ((x17/x18)<(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	static uint64_t x22 = UINT64_MAX;
	uint8_t x23 = 44U;
	int8_t x24 = -26;
	static int32_t t5 = 43;

	t5 = ((x21/x22)<(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	uint32_t x26 = 169434U;
	int64_t x27 = -1LL;
	uint64_t x28 = 69LLU;
	int32_t t6 = 249;

	t6 = ((x25/x26)<(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x32 = -1;
	volatile int32_t t7 = 14537005;

	t7 = ((x29/x30)<(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int64_t x34 = -182373985899951LL;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t8 = 110960227;

	t8 = ((x33/x34)<(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int32_t x38 = INT32_MAX;
	static int32_t x40 = INT32_MAX;
	int32_t t9 = -265129406;

	t9 = ((x37/x38)<(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint32_t x42 = 21U;
	uint32_t x43 = 3580U;
	int32_t t10 = -26844880;

	t10 = ((x41/x42)<(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = -1;
	static volatile int16_t x47 = INT16_MAX;
	int8_t x48 = -1;
	int32_t t11 = 33879;

	t11 = ((x45/x46)<(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 912U;
	int16_t x50 = 3;
	int32_t x52 = 7579378;
	int32_t t12 = -4232999;

	t12 = ((x49/x50)<(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x57 = INT32_MAX;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t13 = 9398095;

	t13 = ((x57/x58)<(x59/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = 1;
	volatile int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t14 = -132;

	t14 = ((x61/x62)<(x63/x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 10267LLU;
	volatile uint32_t x66 = 25U;
	static volatile uint64_t x68 = UINT64_MAX;
	int32_t t15 = 5488;

	t15 = ((x65/x66)<(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -60;
	int8_t x71 = 30;
	int8_t x72 = INT8_MAX;
	static volatile int32_t t16 = 19353454;

	t16 = ((x69/x70)<(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int64_t x74 = 38563LL;
	int32_t x76 = -1;
	volatile int32_t t17 = 4;

	t17 = ((x73/x74)<(x75/x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x78 = 6U;
	uint32_t x79 = UINT32_MAX;
	volatile int32_t t18 = -1823;

	t18 = ((x77/x78)<(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = 28U;
	uint16_t x83 = 26U;
	uint32_t x84 = 38U;
	static volatile int32_t t19 = -789734633;

	t19 = ((x81/x82)<(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x86 = 8577012486811323LLU;
	static uint64_t x87 = 28752062364555LLU;
	static uint64_t x88 = 520325673474163LLU;
	static int32_t t20 = 19;

	t20 = ((x85/x86)<(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	int32_t x90 = -2;
	int32_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = -69479;

	t21 = ((x89/x90)<(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = UINT64_MAX;
	uint8_t x94 = 63U;
	uint64_t x95 = 2541712LLU;
	static volatile uint32_t x96 = UINT32_MAX;
	volatile int32_t t22 = -233425;

	t22 = ((x93/x94)<(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 31U;
	volatile int64_t x99 = -1LL;
	volatile int32_t t23 = -1046;

	t23 = ((x97/x98)<(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	static volatile uint8_t x106 = 3U;
	uint8_t x108 = 20U;
	static int32_t t24 = 499620;

	t24 = ((x105/x106)<(x107/x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 21225U;
	volatile int8_t x110 = INT8_MIN;
	uint16_t x111 = 7U;
	volatile int64_t x112 = 3448545LL;

	t25 = ((x109/x110)<(x111/x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	volatile uint64_t x114 = 220696324996LLU;
	int16_t x115 = INT16_MAX;
	int8_t x116 = -1;

	t26 = ((x113/x114)<(x115/x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = INT16_MIN;
	static uint64_t x119 = 720948190LLU;
	uint8_t x120 = 1U;
	volatile int32_t t27 = -22;

	t27 = ((x117/x118)<(x119/x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1307LL;
	volatile int16_t x122 = INT16_MIN;
	static int16_t x123 = -1;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t28 = -485225993;

	t28 = ((x121/x122)<(x123/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 6154;
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = 1;
	int32_t x128 = -5;
	int32_t t29 = 0;

	t29 = ((x125/x126)<(x127/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	uint16_t x130 = UINT16_MAX;
	static int64_t x131 = 125796788244182LL;
	volatile int64_t x132 = INT64_MIN;
	int32_t t30 = -813208;

	t30 = ((x129/x130)<(x131/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 96U;
	int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MIN;
	int8_t x136 = -1;
	volatile int32_t t31 = 4787;

	t31 = ((x133/x134)<(x135/x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = UINT64_MAX;
	static volatile int64_t x138 = -1LL;
	static int32_t x139 = 25;
	int64_t x140 = INT64_MIN;
	static int32_t t32 = -619;

	t32 = ((x137/x138)<(x139/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	static int32_t x143 = INT32_MIN;
	uint16_t x144 = 25559U;

	t33 = ((x141/x142)<(x143/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x146 = INT8_MAX;
	int64_t x148 = -24254799173821LL;

	t34 = ((x145/x146)<(x147/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	static int32_t t35 = 5499216;

	t35 = ((x149/x150)<(x151/x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x154 = 4U;
	static int16_t x155 = 1;
	volatile int32_t x156 = 1916148;
	int32_t t36 = 4419;

	t36 = ((x153/x154)<(x155/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 14U;
	int16_t x158 = -10;
	static int8_t x159 = -55;
	static int32_t t37 = -149;

	t37 = ((x157/x158)<(x159/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 10U;
	int8_t x162 = INT8_MIN;
	static int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t38 = -24;

	t38 = ((x161/x162)<(x163/x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x166 = UINT64_MAX;
	static int32_t x168 = -1;
	volatile int32_t t39 = 107;

	t39 = ((x165/x166)<(x167/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 664840619386LLU;
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MIN;
	volatile int32_t t40 = -1;

	t40 = ((x169/x170)<(x171/x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 1;
	uint64_t x174 = UINT64_MAX;
	uint8_t x175 = 7U;
	int32_t t41 = 244;

	t41 = ((x173/x174)<(x175/x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x177 = -1;
	uint32_t x180 = UINT32_MAX;

	t42 = ((x177/x178)<(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x185 = -394502LL;
	int16_t x186 = INT16_MIN;
	volatile uint64_t x187 = 1197133945906394LLU;
	volatile int32_t x188 = -13;
	int32_t t43 = -7;

	t43 = ((x185/x186)<(x187/x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -912526052;
	volatile uint32_t x190 = 9623119U;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = INT16_MAX;
	int32_t t44 = 0;

	t44 = ((x189/x190)<(x191/x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 30686U;
	int8_t x196 = 1;
	volatile int32_t t45 = 20;

	t45 = ((x193/x194)<(x195/x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = 47;
	int32_t x198 = -1;
	static int16_t x200 = INT16_MAX;
	volatile int32_t t46 = 259;

	t46 = ((x197/x198)<(x199/x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	uint64_t x203 = 15853945528280LLU;
	uint64_t x204 = 4302889LLU;
	int32_t t47 = -48173219;

	t47 = ((x201/x202)<(x203/x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile int8_t x206 = INT8_MAX;
	uint64_t x208 = 101645971779310266LLU;
	int32_t t48 = 48;

	t48 = ((x205/x206)<(x207/x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = 1;
	static int8_t x211 = -8;
	int64_t x212 = INT64_MAX;
	int32_t t49 = -50560142;

	t49 = ((x209/x210)<(x211/x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = -1;
	uint64_t x214 = 119198LLU;
	static int16_t x215 = -1;
	int8_t x216 = -11;
	volatile int32_t t50 = -23;

	t50 = ((x213/x214)<(x215/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = -19;
	uint8_t x220 = UINT8_MAX;
	int32_t t51 = -8098771;

	t51 = ((x217/x218)<(x219/x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = -582;
	int8_t x223 = -1;
	int32_t x224 = 604;
	volatile int32_t t52 = 45218497;

	t52 = ((x221/x222)<(x223/x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x227 = -3362;
	int8_t x228 = -1;

	t53 = ((x225/x226)<(x227/x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t54 = -2015;

	t54 = ((x229/x230)<(x231/x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 3107U;
	int16_t x235 = -12;
	volatile int32_t t55 = 60;

	t55 = ((x233/x234)<(x235/x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MIN;
	static uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 111797025219272LLU;
	uint32_t x244 = 3338U;
	int32_t t56 = -41;

	t56 = ((x241/x242)<(x243/x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x246 = UINT32_MAX;
	volatile uint8_t x247 = 0U;
	uint16_t x248 = 616U;

	t57 = ((x245/x246)<(x247/x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	static volatile int64_t x250 = INT64_MAX;
	uint32_t x252 = UINT32_MAX;
	int32_t t58 = -1178396;

	t58 = ((x249/x250)<(x251/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x253 = 162U;
	uint16_t x254 = UINT16_MAX;
	static int32_t x255 = 0;
	int64_t x256 = INT64_MIN;
	int32_t t59 = -11;

	t59 = ((x253/x254)<(x255/x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 96U;
	static uint64_t x258 = UINT64_MAX;
	int32_t x260 = -2901422;
	int32_t t60 = -1;

	t60 = ((x257/x258)<(x259/x260));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x262 = 339;
	volatile int64_t x263 = INT64_MIN;
	static int16_t x264 = -29;

	t61 = ((x261/x262)<(x263/x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MAX;
	uint16_t x267 = 116U;
	uint32_t x268 = 1U;
	volatile int32_t t62 = 35677;

	t62 = ((x265/x266)<(x267/x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -1;
	int16_t x270 = INT16_MAX;
	int8_t x271 = -1;
	int8_t x272 = -27;
	int32_t t63 = 2785;

	t63 = ((x269/x270)<(x271/x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MAX;
	volatile int64_t x274 = INT64_MAX;
	volatile uint16_t x275 = 193U;
	int32_t t64 = -110686;

	t64 = ((x273/x274)<(x275/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	int8_t x279 = 0;
	uint16_t x280 = 10U;
	int32_t t65 = -1;

	t65 = ((x277/x278)<(x279/x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 105U;
	volatile int16_t x282 = INT16_MIN;
	static int16_t x283 = INT16_MAX;
	volatile int8_t x284 = INT8_MAX;
	int32_t t66 = -4;

	t66 = ((x281/x282)<(x283/x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = 1298;
	uint8_t x286 = 25U;
	int16_t x287 = INT16_MIN;
	static volatile int16_t x288 = 7847;
	static volatile int32_t t67 = -5;

	t67 = ((x285/x286)<(x287/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x295 = -1;
	static volatile int32_t t68 = 205250;

	t68 = ((x293/x294)<(x295/x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x298 = -1LL;
	int32_t x299 = -35;
	int16_t x300 = 1;

	t69 = ((x297/x298)<(x299/x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -6;
	int32_t t70 = 7759;

	t70 = ((x301/x302)<(x303/x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1;
	volatile int8_t x307 = INT8_MAX;
	static volatile int32_t x308 = -1;
	int32_t t71 = -81;

	t71 = ((x305/x306)<(x307/x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;

	t72 = ((x309/x310)<(x311/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x318 = 472U;
	int32_t x320 = INT32_MIN;
	int32_t t73 = 406678;

	t73 = ((x317/x318)<(x319/x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MAX;
	int8_t x328 = -11;
	int32_t t74 = -206795429;

	t74 = ((x325/x326)<(x327/x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = INT32_MAX;
	uint16_t x330 = UINT16_MAX;
	uint64_t x331 = UINT64_MAX;
	int64_t x332 = INT64_MIN;

	t75 = ((x329/x330)<(x331/x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x333 = 295896400068LL;
	int64_t x334 = INT64_MIN;
	static uint8_t x335 = 1U;
	uint32_t x336 = UINT32_MAX;

	t76 = ((x333/x334)<(x335/x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = 939483572654LL;
	int32_t x339 = INT32_MIN;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t77 = -75249;

	t77 = ((x337/x338)<(x339/x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x341 = INT32_MIN;
	static int64_t x342 = INT64_MAX;
	int32_t t78 = -123364075;

	t78 = ((x341/x342)<(x343/x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MAX;
	static uint32_t x347 = 13U;
	uint16_t x348 = 666U;
	int32_t t79 = 10286;

	t79 = ((x345/x346)<(x347/x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x351 = -9120822;
	volatile int64_t x352 = -2970473LL;
	static int32_t t80 = -19962;

	t80 = ((x349/x350)<(x351/x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = INT8_MIN;
	static uint8_t x354 = 5U;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	volatile int32_t t81 = 1047052;

	t81 = ((x353/x354)<(x355/x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x357 = INT32_MAX;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = 82549;
	static uint64_t x360 = 37843037072094LLU;

	t82 = ((x357/x358)<(x359/x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MIN;
	static volatile int8_t x362 = INT8_MIN;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t83 = -488286;

	t83 = ((x361/x362)<(x363/x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x365 = 103U;
	uint64_t x366 = UINT64_MAX;
	static int8_t x367 = -1;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t84 = -118851;

	t84 = ((x365/x366)<(x367/x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = -2;
	int16_t x370 = INT16_MIN;
	int64_t x372 = INT64_MAX;
	volatile int32_t t85 = -20225;

	t85 = ((x369/x370)<(x371/x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = -1;
	static int32_t x378 = INT32_MIN;
	int64_t x379 = 3570918488934281LL;
	int8_t x380 = -5;

	t86 = ((x377/x378)<(x379/x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x385 = 3;
	int16_t x387 = -1;
	int32_t t87 = 2;

	t87 = ((x385/x386)<(x387/x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 18034450477LLU;
	int16_t x390 = INT16_MAX;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = 45730LL;
	volatile int32_t t88 = 4631665;

	t88 = ((x389/x390)<(x391/x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	volatile uint8_t x394 = 92U;
	uint32_t x395 = 444782U;
	volatile uint32_t x396 = 42816U;
	static int32_t t89 = 2399100;

	t89 = ((x393/x394)<(x395/x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = UINT64_MAX;
	static int16_t x398 = INT16_MAX;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = 4339493490434LL;

	t90 = ((x397/x398)<(x399/x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x407 = -1;

	t91 = ((x405/x406)<(x407/x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = 5399;
	volatile uint32_t x412 = 3621U;
	static int32_t t92 = -124;

	t92 = ((x409/x410)<(x411/x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x414 = INT8_MAX;
	static int32_t x415 = 11913;
	static uint16_t x416 = 4613U;
	static volatile int32_t t93 = -449;

	t93 = ((x413/x414)<(x415/x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x417 = INT64_MAX;
	static volatile int8_t x418 = -1;
	volatile int32_t x419 = -1;
	static int64_t x420 = -1LL;
	int32_t t94 = 10336;

	t94 = ((x417/x418)<(x419/x420));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = -1LL;
	int64_t x422 = -1LL;
	static int64_t x424 = -1LL;
	volatile int32_t t95 = 73183888;

	t95 = ((x421/x422)<(x423/x424));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = INT16_MIN;
	volatile int32_t x426 = -61718;
	int32_t x427 = -235936993;
	int8_t x428 = 50;
	volatile int32_t t96 = -12;

	t96 = ((x425/x426)<(x427/x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = 56U;
	int8_t x430 = INT8_MAX;
	volatile int64_t x431 = -1LL;
	int32_t t97 = 5538;

	t97 = ((x429/x430)<(x431/x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 11543;
	uint16_t x434 = UINT16_MAX;
	int64_t x435 = 350379855284511LL;
	volatile uint32_t x436 = 193608776U;
	int32_t t98 = -86030;

	t98 = ((x433/x434)<(x435/x436));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = 3514766937908415584LL;
	int64_t x438 = INT64_MIN;
	volatile int64_t x439 = -1LL;
	int8_t x440 = INT8_MIN;

	t99 = ((x437/x438)<(x439/x440));

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

