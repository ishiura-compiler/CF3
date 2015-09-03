#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
uint8_t x4 = 24U;
uint8_t x8 = 11U;
uint32_t x11 = UINT32_MAX;
int16_t x12 = 804;
int32_t x19 = INT32_MAX;
volatile int8_t x20 = -1;
volatile uint32_t x22 = 9275U;
volatile int64_t x28 = INT64_MIN;
int64_t x29 = INT64_MIN;
uint64_t x30 = 944781LLU;
volatile int32_t t8 = 34076249;
volatile int64_t x38 = 3LL;
volatile uint8_t x40 = UINT8_MAX;
int64_t x56 = -1LL;
volatile int32_t t13 = 17877740;
volatile int16_t x60 = 1818;
volatile int32_t t14 = 2;
static uint16_t x66 = 953U;
int16_t x71 = INT16_MAX;
int16_t x73 = -1;
volatile int8_t x87 = 1;
volatile int16_t x88 = 80;
uint8_t x92 = 106U;
volatile int32_t t22 = -79;
uint16_t x107 = UINT16_MAX;
volatile int64_t x108 = -1558279862173794704LL;
volatile int32_t t26 = 1;
int32_t x117 = INT32_MIN;
int16_t x120 = INT16_MIN;
volatile int32_t t32 = -1;
volatile int32_t t33 = -7997155;
volatile uint16_t x151 = UINT16_MAX;
static int64_t x152 = INT64_MIN;
int8_t x155 = -1;
static int64_t x156 = INT64_MIN;
volatile int32_t t37 = -327863;
uint8_t x162 = UINT8_MAX;
uint32_t x167 = UINT32_MAX;
static int64_t x179 = INT64_MIN;
volatile int64_t x190 = INT64_MIN;
volatile uint64_t x204 = UINT64_MAX;
volatile int32_t x205 = -1;
int32_t x207 = -17777622;
uint64_t x209 = UINT64_MAX;
int8_t x213 = INT8_MIN;
int32_t x216 = -13;
static int8_t x218 = 1;
static uint16_t x225 = 7U;
uint32_t x228 = UINT32_MAX;
volatile int32_t t54 = -10888;
static int64_t x235 = -1LL;
volatile int32_t t56 = 246661;
volatile int32_t x242 = -1;
int8_t x245 = INT8_MIN;
static int8_t x246 = INT8_MAX;
int32_t t59 = -2899;
uint8_t x254 = UINT8_MAX;
int32_t x259 = INT32_MAX;
int32_t t62 = -64051341;
int32_t x265 = INT32_MIN;
uint16_t x276 = UINT16_MAX;
volatile int32_t t65 = 1;
int16_t x282 = -3296;
uint64_t x284 = 3161190787926425LLU;
static volatile int32_t t67 = 108507006;
int8_t x288 = -1;
int8_t x294 = INT8_MAX;
volatile int32_t t70 = 2951409;
volatile uint32_t x307 = 1270572U;
int32_t x310 = -1;
uint64_t x311 = 12940852217254LLU;
uint8_t x325 = 41U;
int32_t t78 = 3;
int32_t t79 = -2285753;
int8_t x334 = -1;
static uint64_t x336 = 2311538LLU;
static int32_t t80 = -6101183;
int8_t x344 = 31;
int16_t x349 = -800;
volatile int64_t x351 = INT64_MAX;
uint32_t x353 = UINT32_MAX;
volatile int64_t x356 = -1LL;
int32_t t84 = 8;
uint8_t x362 = 1U;
int64_t x371 = INT64_MAX;
static int32_t x372 = -84;
int64_t x373 = INT64_MAX;
int16_t x391 = -1;
static int32_t x394 = INT32_MAX;
volatile uint16_t x395 = 20797U;
static volatile int32_t x396 = INT32_MAX;
volatile uint8_t x399 = 7U;
volatile uint32_t x408 = 0U;
int32_t t96 = -3;
static int64_t x409 = -129LL;
int32_t t97 = 336206;
volatile int8_t x413 = 1;
volatile uint64_t x421 = UINT64_MAX;
int16_t x422 = -11824;


void f0(void) {
	int16_t x1 = -1;
	volatile int64_t x2 = 89467452197LL;
	int32_t t0 = -614;

	t0 = ((x1+(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile uint8_t x6 = UINT8_MAX;
	static int32_t x7 = -1;
	volatile int32_t t1 = -68;

	t1 = ((x5+(x6/x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -72326669;
	uint8_t x10 = 3U;
	volatile int32_t t2 = -6093278;

	t2 = ((x9+(x10/x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -9;
	static uint8_t x14 = 1U;
	int16_t x15 = -176;
	uint8_t x16 = 44U;
	int32_t t3 = 1053260;

	t3 = ((x13+(x14/x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int8_t x18 = -1;
	int32_t t4 = -3749;

	t4 = ((x17+(x18/x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint16_t x23 = 61U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -78384;

	t5 = ((x21+(x22/x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 0U;
	static uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int32_t t6 = 846124;

	t6 = ((x25+(x26/x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = -1LL;
	int16_t x32 = -1;
	int32_t t7 = 414187797;

	t7 = ((x29+(x30/x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static int32_t x34 = 88;
	static uint32_t x35 = 1778454031U;
	int32_t x36 = -1;

	t8 = ((x33+(x34/x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 14;

	t9 = ((x37+(x38/x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 182080270U;
	static volatile int8_t x42 = 10;
	int16_t x43 = -1;
	int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = -2122;

	t10 = ((x41+(x42/x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 2U;
	volatile int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	static uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 155645545;

	t11 = ((x45+(x46/x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 257644U;
	volatile int16_t x50 = -1592;
	static uint16_t x51 = 1393U;
	uint16_t x52 = 967U;
	int32_t t12 = -238215672;

	t12 = ((x49+(x50/x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 0U;
	volatile uint8_t x54 = UINT8_MAX;
	int16_t x55 = -3702;

	t13 = ((x53+(x54/x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	static int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = 42260LLU;

	t14 = ((x57+(x58/x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = 1;
	volatile int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 125;

	t15 = ((x61+(x62/x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x67 = 494LLU;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 28;

	t16 = ((x65+(x66/x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = 1272;
	int32_t x72 = -1;
	volatile int32_t t17 = 14;

	t17 = ((x69+(x70/x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = INT8_MIN;
	uint16_t x75 = 1582U;
	uint16_t x76 = 2490U;
	static int32_t t18 = -270;

	t18 = ((x73+(x74/x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 111381LLU;
	uint32_t x78 = 477U;
	static int32_t x79 = INT32_MAX;
	int8_t x80 = 1;
	volatile int32_t t19 = -160;

	t19 = ((x77+(x78/x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 9U;
	volatile int32_t x82 = 824313;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 49;

	t20 = ((x81+(x82/x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = 25428833309250LL;
	static int64_t x86 = -1LL;
	int32_t t21 = 1;

	t21 = ((x85+(x86/x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 649387729U;
	int8_t x90 = INT8_MAX;
	uint16_t x91 = UINT16_MAX;

	t22 = ((x89+(x90/x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -277729561LL;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 504U;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t23 = -1;

	t23 = ((x101+(x102/x103))<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -1;
	int32_t x106 = INT32_MAX;
	int32_t t24 = 208276;

	t24 = ((x105+(x106/x107))<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x109 = 60LLU;
	volatile int64_t x110 = -1LL;
	volatile int64_t x111 = -1LL;
	int16_t x112 = -1;
	int32_t t25 = 79001;

	t25 = ((x109+(x110/x111))<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x113 = -26419;
	uint64_t x114 = UINT64_MAX;
	static int32_t x115 = INT32_MIN;
	int16_t x116 = -748;

	t26 = ((x113+(x114/x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x118 = INT64_MAX;
	volatile int32_t x119 = INT32_MIN;
	int32_t t27 = 554836481;

	t27 = ((x117+(x118/x119))<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 31U;
	int32_t x122 = -121139;
	int64_t x123 = -1LL;
	static uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = 1;

	t28 = ((x121+(x122/x123))<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 3;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;
	uint64_t x128 = UINT64_MAX;
	static volatile int32_t t29 = -112440436;

	t29 = ((x125+(x126/x127))<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	static uint8_t x130 = 3U;
	static int8_t x131 = 1;
	int16_t x132 = INT16_MAX;
	int32_t t30 = 354;

	t30 = ((x129+(x130/x131))<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = UINT32_MAX;
	volatile int64_t x135 = -209LL;
	uint8_t x136 = 32U;
	volatile int32_t t31 = 5793909;

	t31 = ((x133+(x134/x135))<x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = 241033834070619098LL;
	int8_t x139 = INT8_MIN;
	int32_t x140 = 449113;

	t32 = ((x137+(x138/x139))<x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 24U;
	int32_t x142 = INT32_MIN;
	static volatile uint16_t x143 = 2017U;
	volatile int16_t x144 = -1;

	t33 = ((x141+(x142/x143))<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	uint64_t x146 = 2LLU;
	static int64_t x147 = -2425LL;
	uint32_t x148 = 246U;
	int32_t t34 = 701398;

	t34 = ((x145+(x146/x147))<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x149 = 2174088LLU;
	volatile int32_t x150 = -1;
	static volatile int32_t t35 = -927;

	t35 = ((x149+(x150/x151))<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -424;
	static int64_t x154 = 252165990733017LL;
	static volatile int32_t t36 = 175797847;

	t36 = ((x153+(x154/x155))<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x157 = INT32_MAX;
	volatile uint8_t x158 = UINT8_MAX;
	volatile int32_t x159 = -3;
	int8_t x160 = 1;

	t37 = ((x157+(x158/x159))<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	int32_t x164 = 195339401;
	int32_t t38 = 194803796;

	t38 = ((x161+(x162/x163))<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 169850424511LLU;
	int32_t x166 = -392194752;
	int64_t x168 = -1LL;
	int32_t t39 = -138768392;

	t39 = ((x165+(x166/x167))<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = INT32_MIN;
	static int8_t x170 = -8;
	int8_t x171 = -63;
	static uint32_t x172 = 115007062U;
	volatile int32_t t40 = 2;

	t40 = ((x169+(x170/x171))<x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x173 = 6U;
	uint32_t x174 = UINT32_MAX;
	volatile int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t41 = -21;

	t41 = ((x173+(x174/x175))<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 530U;
	static volatile int16_t x178 = INT16_MIN;
	static volatile uint32_t x180 = 4191U;
	int32_t t42 = 94;

	t42 = ((x177+(x178/x179))<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 51U;
	volatile uint64_t x182 = UINT64_MAX;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t x184 = -29622301;
	int32_t t43 = 999614;

	t43 = ((x181+(x182/x183))<x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 4U;
	int32_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile uint16_t x188 = 6U;
	volatile int32_t t44 = -8092;

	t44 = ((x185+(x186/x187))<x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 1U;
	int64_t x191 = 11LL;
	static uint16_t x192 = 93U;
	int32_t t45 = -6;

	t45 = ((x189+(x190/x191))<x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	static int32_t x194 = -124;
	static int16_t x195 = INT16_MIN;
	static int32_t x196 = -192100;
	volatile int32_t t46 = -1;

	t46 = ((x193+(x194/x195))<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MAX;
	int8_t x198 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = -1;
	volatile int32_t t47 = -6;

	t47 = ((x197+(x198/x199))<x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x201 = 0U;
	uint32_t x202 = UINT32_MAX;
	uint32_t x203 = 1445498U;
	volatile int32_t t48 = 865073169;

	t48 = ((x201+(x202/x203))<x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x206 = 272186811U;
	volatile uint16_t x208 = 16809U;
	static int32_t t49 = 2;

	t49 = ((x205+(x206/x207))<x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x210 = INT64_MAX;
	static volatile uint32_t x211 = 425U;
	volatile int64_t x212 = INT64_MAX;
	volatile int32_t t50 = 7;

	t50 = ((x209+(x210/x211))<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x214 = 1U;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t51 = -124349077;

	t51 = ((x213+(x214/x215))<x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = UINT16_MAX;
	static int64_t x219 = INT64_MIN;
	uint32_t x220 = UINT32_MAX;
	static int32_t t52 = -36;

	t52 = ((x217+(x218/x219))<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = UINT32_MAX;
	uint64_t x222 = 166LLU;
	static int64_t x223 = 50541339LL;
	int32_t x224 = INT32_MIN;
	static int32_t t53 = 4;

	t53 = ((x221+(x222/x223))<x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x226 = 12566959;
	int16_t x227 = INT16_MAX;

	t54 = ((x225+(x226/x227))<x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 2146394112497609LLU;
	int64_t x232 = 383LL;
	volatile int32_t t55 = 1;

	t55 = ((x229+(x230/x231))<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = UINT8_MAX;
	int8_t x236 = 0;

	t56 = ((x233+(x234/x235))<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x237 = -4506;
	uint64_t x238 = UINT64_MAX;
	uint8_t x239 = 8U;
	uint64_t x240 = UINT64_MAX;
	int32_t t57 = -39037;

	t57 = ((x237+(x238/x239))<x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = UINT32_MAX;
	uint64_t x243 = 2245436258254320LLU;
	uint32_t x244 = 3U;
	static volatile int32_t t58 = -3257332;

	t58 = ((x241+(x242/x243))<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x247 = 47U;
	volatile int16_t x248 = 3995;

	t59 = ((x245+(x246/x247))<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -14491;
	int32_t x255 = -2495;
	volatile int64_t x256 = INT64_MAX;
	static int32_t t60 = 80;

	t60 = ((x253+(x254/x255))<x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	uint16_t x260 = 28U;
	int32_t t61 = 1079;

	t61 = ((x257+(x258/x259))<x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = UINT32_MAX;
	static int8_t x262 = -1;
	int64_t x263 = INT64_MAX;
	int64_t x264 = -415323LL;

	t62 = ((x261+(x262/x263))<x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x266 = -1LL;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = INT8_MIN;
	int32_t t63 = 1534;

	t63 = ((x265+(x266/x267))<x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x269 = -17;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	static int32_t x272 = 1059906789;
	volatile int32_t t64 = 632697;

	t64 = ((x269+(x270/x271))<x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = 7345266LL;
	int16_t x274 = -1;
	uint32_t x275 = UINT32_MAX;

	t65 = ((x273+(x274/x275))<x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = -4;
	volatile int16_t x278 = -4769;
	int16_t x279 = -1888;
	uint8_t x280 = UINT8_MAX;
	static volatile int32_t t66 = 59;

	t66 = ((x277+(x278/x279))<x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = 90007736383LLU;
	static int16_t x283 = INT16_MIN;

	t67 = ((x281+(x282/x283))<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MAX;
	volatile int32_t x286 = 1132;
	volatile uint64_t x287 = UINT64_MAX;
	volatile int32_t t68 = -1357;

	t68 = ((x285+(x286/x287))<x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x289 = 3014772042637765868LLU;
	volatile uint8_t x290 = UINT8_MAX;
	uint64_t x291 = 5804LLU;
	static int8_t x292 = 0;
	int32_t t69 = -2264;

	t69 = ((x289+(x290/x291))<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = -1;
	volatile uint16_t x295 = 13U;
	int8_t x296 = 0;

	t70 = ((x293+(x294/x295))<x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = -1;
	int32_t x298 = 233;
	static int32_t x299 = -5736971;
	static int16_t x300 = -1;
	int32_t t71 = 179628543;

	t71 = ((x297+(x298/x299))<x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	volatile uint64_t x302 = UINT64_MAX;
	int64_t x303 = 78379471078LL;
	volatile uint32_t x304 = 14738982U;
	volatile int32_t t72 = 78543;

	t72 = ((x301+(x302/x303))<x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = 426;
	volatile uint64_t x306 = UINT64_MAX;
	static int32_t x308 = INT32_MIN;
	int32_t t73 = -177699;

	t73 = ((x305+(x306/x307))<x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MAX;
	int16_t x312 = 0;
	volatile int32_t t74 = 90421969;

	t74 = ((x309+(x310/x311))<x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	volatile int16_t x316 = -1;
	static int32_t t75 = 9632465;

	t75 = ((x313+(x314/x315))<x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x317 = INT8_MAX;
	volatile int16_t x318 = INT16_MAX;
	int64_t x319 = -46973902022827662LL;
	static volatile uint16_t x320 = UINT16_MAX;
	static int32_t t76 = 20;

	t76 = ((x317+(x318/x319))<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x321 = INT64_MAX;
	int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MIN;
	volatile uint16_t x324 = 11809U;
	static volatile int32_t t77 = 7200;

	t77 = ((x321+(x322/x323))<x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x326 = INT8_MIN;
	static uint64_t x327 = UINT64_MAX;
	uint32_t x328 = 744830U;

	t78 = ((x325+(x326/x327))<x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 6207666U;
	int8_t x330 = 1;
	uint16_t x331 = UINT16_MAX;
	uint32_t x332 = UINT32_MAX;

	t79 = ((x329+(x330/x331))<x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	int16_t x335 = INT16_MIN;

	t80 = ((x333+(x334/x335))<x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 144U;
	int32_t x338 = INT32_MIN;
	uint8_t x339 = 24U;
	static int64_t x340 = -13646044LL;
	int32_t t81 = 25;

	t81 = ((x337+(x338/x339))<x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x342 = 16;
	uint64_t x343 = 836135200783LLU;
	static volatile int32_t t82 = -26854570;

	t82 = ((x341+(x342/x343))<x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x350 = INT32_MIN;
	volatile uint64_t x352 = 39342388876LLU;
	volatile int32_t t83 = -36;

	t83 = ((x349+(x350/x351))<x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x354 = UINT16_MAX;
	uint16_t x355 = 397U;

	t84 = ((x353+(x354/x355))<x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = 150862;
	static int8_t x358 = -1;
	uint8_t x359 = 25U;
	int64_t x360 = -13274LL;
	volatile int32_t t85 = -59;

	t85 = ((x357+(x358/x359))<x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = 182U;
	int8_t x363 = INT8_MAX;
	int64_t x364 = 921811479439LL;
	static int32_t t86 = 1185;

	t86 = ((x361+(x362/x363))<x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MIN;
	static volatile int16_t x370 = -2;
	volatile int32_t t87 = -2250183;

	t87 = ((x369+(x370/x371))<x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x374 = INT8_MIN;
	int16_t x375 = 1;
	int64_t x376 = INT64_MIN;
	static int32_t t88 = 0;

	t88 = ((x373+(x374/x375))<x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MAX;
	uint64_t x378 = 22492538392LLU;
	static uint8_t x379 = UINT8_MAX;
	uint64_t x380 = 84620468LLU;
	int32_t t89 = 9785;

	t89 = ((x377+(x378/x379))<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x381 = 1193U;
	volatile uint64_t x382 = UINT64_MAX;
	int64_t x383 = 9192553354LL;
	volatile uint64_t x384 = 79367LLU;
	int32_t t90 = 1944656;

	t90 = ((x381+(x382/x383))<x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = 300675226219LL;
	volatile uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 2265465126245LLU;
	volatile int32_t t91 = 61;

	t91 = ((x385+(x386/x387))<x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = -1;
	int32_t x390 = -1;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t92 = -18244;

	t92 = ((x389+(x390/x391))<x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x393 = -152LL;
	int32_t t93 = -131901;

	t93 = ((x393+(x394/x395))<x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = -8;
	static int32_t x398 = INT32_MIN;
	uint8_t x400 = 23U;
	volatile int32_t t94 = 64957;

	t94 = ((x397+(x398/x399))<x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 3529836445266096LLU;
	static int32_t x402 = -2078;
	int64_t x403 = INT64_MIN;
	static int64_t x404 = -185065172765681635LL;
	volatile int32_t t95 = -10163372;

	t95 = ((x401+(x402/x403))<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = INT64_MIN;
	uint8_t x406 = 63U;
	int32_t x407 = INT32_MIN;

	t96 = ((x405+(x406/x407))<x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x410 = INT64_MAX;
	static int16_t x411 = 1271;
	static volatile int64_t x412 = -1LL;

	t97 = ((x409+(x410/x411))<x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x414 = -1;
	int32_t x415 = -1;
	static uint64_t x416 = 168156333832479357LLU;
	int32_t t98 = 10638;

	t98 = ((x413+(x414/x415))<x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x423 = INT8_MAX;
	volatile int8_t x424 = -1;
	static volatile int32_t t99 = -82765580;

	t99 = ((x421+(x422/x423))<x424);

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

