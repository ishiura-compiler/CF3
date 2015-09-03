#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -1974;
int32_t t3 = -119210638;
int8_t x23 = INT8_MIN;
int64_t x31 = INT64_MIN;
static int32_t x35 = -1;
uint16_t x36 = UINT16_MAX;
static volatile int32_t t9 = 1295;
int32_t x57 = -1;
volatile int8_t x59 = -1;
static int32_t t11 = 1649660;
int16_t x62 = INT16_MIN;
static volatile int64_t x64 = -1LL;
static int32_t x70 = INT32_MAX;
volatile uint64_t x71 = 725963110LLU;
int16_t x72 = -1;
uint16_t x78 = UINT16_MAX;
int8_t x81 = INT8_MIN;
volatile int32_t x94 = -1;
uint8_t x95 = 13U;
uint8_t x97 = 20U;
static volatile int8_t x109 = INT8_MIN;
static int16_t x123 = 572;
volatile int32_t t25 = 1990;
int32_t x127 = 2;
uint8_t x137 = UINT8_MAX;
volatile int32_t x138 = INT32_MIN;
volatile uint64_t x141 = 384401281822LLU;
volatile int32_t t29 = 87562;
int32_t x145 = -1;
int8_t x151 = 45;
int32_t t31 = 2347356;
static volatile int32_t t32 = -8572;
uint16_t x162 = UINT16_MAX;
uint8_t x166 = 63U;
uint8_t x188 = 13U;
static uint8_t x192 = UINT8_MAX;
int32_t t40 = -80;
int64_t x197 = INT64_MIN;
uint8_t x200 = 13U;
volatile int32_t t41 = -1118;
int64_t x203 = -1LL;
volatile int32_t t43 = 26580727;
int8_t x209 = INT8_MIN;
uint32_t x213 = 2868500U;
static int16_t x215 = INT16_MIN;
volatile int32_t t46 = 169;
int8_t x221 = INT8_MIN;
static int64_t x225 = 4429580936046652604LL;
int32_t t48 = 554;
int8_t x234 = 29;
int64_t x235 = -1LL;
static int32_t x236 = -659340607;
int32_t x239 = INT32_MIN;
uint32_t x245 = 7168272U;
volatile int64_t x259 = 3802LL;
static int8_t x261 = -1;
static int32_t x262 = INT32_MAX;
int32_t x266 = -1;
int16_t x277 = INT16_MIN;
int16_t x287 = INT16_MIN;
int32_t x289 = -472150;
static volatile int32_t x297 = 159;
volatile int16_t x298 = INT16_MAX;
static int16_t x301 = INT16_MIN;
int32_t x306 = INT32_MAX;
static int16_t x309 = INT16_MIN;
int64_t x310 = -268883864437845LL;
static int32_t x317 = INT32_MIN;
static int32_t t71 = 5722336;
static uint8_t x321 = UINT8_MAX;
static uint8_t x322 = 56U;
uint16_t x323 = 794U;
volatile uint8_t x324 = 0U;
uint16_t x329 = 62U;
uint64_t x337 = 1898276626343840653LLU;
volatile int16_t x344 = INT16_MIN;
uint32_t x345 = 253187U;
static uint8_t x352 = UINT8_MAX;
volatile uint16_t x359 = 3U;
int32_t t81 = -2919;
int64_t x367 = INT64_MAX;
int8_t x368 = INT8_MIN;
int16_t x369 = INT16_MAX;
volatile uint32_t x372 = 322503083U;
int32_t x385 = -1;
uint64_t x389 = 5030339LLU;
int64_t x396 = INT64_MIN;
int8_t x398 = 1;
int64_t x399 = -336612978LL;
volatile int32_t t89 = -3266;
int64_t x401 = 67140213167164LL;
int16_t x409 = 196;
volatile uint16_t x411 = 4828U;
static int32_t t91 = 2;
static int16_t x416 = -1;
int8_t x424 = INT8_MAX;
int32_t x426 = INT32_MIN;
static volatile int8_t x429 = INT8_MIN;
static int8_t x430 = -1;
volatile uint32_t x431 = 5U;
static int32_t t96 = 24851018;
static uint8_t x447 = 1U;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int64_t x2 = -203791LL;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -2999;

	t0 = (((x1+x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile int64_t x6 = INT64_MIN;
	volatile int32_t x7 = -15;
	int64_t x8 = INT64_MIN;

	t1 = (((x5+x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	int8_t x10 = -20;
	uint8_t x11 = 14U;
	uint32_t x12 = 326758412U;
	int32_t t2 = 251783;

	t2 = (((x9+x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = UINT32_MAX;
	static int16_t x15 = -1;
	uint64_t x16 = UINT64_MAX;

	t3 = (((x13+x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MIN;
	static uint64_t x22 = 5LLU;
	int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 58396;

	t4 = (((x21+x22)%x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	int16_t x30 = INT16_MAX;
	uint64_t x32 = 141892LLU;
	int32_t t5 = -17894869;

	t5 = (((x29+x30)%x31)==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 460U;
	static uint16_t x34 = 149U;
	volatile int32_t t6 = 53;

	t6 = (((x33+x34)%x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = -1;
	uint32_t x38 = 2023U;
	static int8_t x39 = -1;
	static uint64_t x40 = 5814LLU;
	int32_t t7 = -21775;

	t7 = (((x37+x38)%x39)==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 12U;
	volatile int8_t x42 = INT8_MAX;
	int8_t x43 = 5;
	int64_t x44 = -45582293577LL;
	volatile int32_t t8 = -4161203;

	t8 = (((x41+x42)%x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 50U;
	uint32_t x46 = 7U;
	uint16_t x47 = 115U;
	uint16_t x48 = 586U;

	t9 = (((x45+x46)%x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t10 = 73;

	t10 = (((x49+x50)%x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x58 = 77U;
	uint64_t x60 = UINT64_MAX;

	t11 = (((x57+x58)%x59)==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = INT16_MIN;
	static uint16_t x63 = UINT16_MAX;
	static volatile int32_t t12 = 615846024;

	t12 = (((x61+x62)%x63)==x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = 6434909685352LL;
	int32_t t13 = 1046065;

	t13 = (((x69+x70)%x71)==x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = UINT8_MAX;
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MAX;
	int32_t t14 = 27638;

	t14 = (((x73+x74)%x75)==x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x77 = INT8_MAX;
	int16_t x79 = -7281;
	uint64_t x80 = 3926189923418188LLU;
	volatile int32_t t15 = -4584;

	t15 = (((x77+x78)%x79)==x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = -1;
	static volatile int16_t x84 = INT16_MAX;
	static int32_t t16 = 28884593;

	t16 = (((x81+x82)%x83)==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	int8_t x86 = INT8_MIN;
	static volatile uint64_t x87 = 3611349963298243LLU;
	int16_t x88 = INT16_MIN;
	volatile int32_t t17 = -847570464;

	t17 = (((x85+x86)%x87)==x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = 13;
	int64_t x90 = 87285369330678LL;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t18 = -16;

	t18 = (((x89+x90)%x91)==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = -22851963574LL;
	volatile int32_t x96 = INT32_MAX;
	volatile int32_t t19 = 489419;

	t19 = (((x93+x94)%x95)==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x98 = INT8_MIN;
	static int16_t x99 = 1;
	static int16_t x100 = INT16_MAX;
	volatile int32_t t20 = 94264;

	t20 = (((x97+x98)%x99)==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 101523537644LLU;
	int32_t x102 = INT32_MAX;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -25515792;
	int32_t t21 = 0;

	t21 = (((x101+x102)%x103)==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x105 = 1U;
	uint64_t x106 = 67050040LLU;
	static int64_t x107 = INT64_MIN;
	uint32_t x108 = UINT32_MAX;
	int32_t t22 = -14556;

	t22 = (((x105+x106)%x107)==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = -1;
	static int32_t x111 = INT32_MAX;
	uint16_t x112 = 6052U;
	int32_t t23 = -200;

	t23 = (((x109+x110)%x111)==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MAX;
	volatile uint8_t x115 = 7U;
	int64_t x116 = INT64_MAX;
	volatile int32_t t24 = 3093;

	t24 = (((x113+x114)%x115)==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x121 = 20219735922181LL;
	uint8_t x122 = UINT8_MAX;
	volatile uint16_t x124 = 2785U;

	t25 = (((x121+x122)%x123)==x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MAX;
	int64_t x126 = 93LL;
	int8_t x128 = -1;
	volatile int32_t t26 = 81748686;

	t26 = (((x125+x126)%x127)==x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = -1LL;
	uint8_t x134 = 3U;
	uint16_t x135 = 74U;
	uint16_t x136 = UINT16_MAX;
	int32_t t27 = 81158374;

	t27 = (((x133+x134)%x135)==x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x139 = 1;
	uint64_t x140 = 50226LLU;
	int32_t t28 = 5217614;

	t28 = (((x137+x138)%x139)==x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MAX;
	int8_t x144 = -1;

	t29 = (((x141+x142)%x143)==x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x146 = INT8_MIN;
	uint8_t x147 = 11U;
	int8_t x148 = INT8_MIN;
	static int32_t t30 = -8089;

	t30 = (((x145+x146)%x147)==x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = 45LL;
	volatile int64_t x150 = INT64_MIN;
	int32_t x152 = 1756514;

	t31 = (((x149+x150)%x151)==x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x153 = 358LL;
	int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MIN;

	t32 = (((x153+x154)%x155)==x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x161 = 1U;
	static volatile int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t33 = 373411921;

	t33 = (((x161+x162)%x163)==x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x165 = UINT8_MAX;
	uint32_t x167 = 1U;
	int8_t x168 = 0;
	volatile int32_t t34 = 8107;

	t34 = (((x165+x166)%x167)==x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x169 = 18U;
	static int8_t x170 = INT8_MAX;
	int64_t x171 = -74775LL;
	int64_t x172 = INT64_MAX;
	volatile int32_t t35 = 8331199;

	t35 = (((x169+x170)%x171)==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MAX;
	volatile uint8_t x180 = 5U;
	volatile int32_t t36 = -3581;

	t36 = (((x177+x178)%x179)==x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x181 = -2422470207769LL;
	static uint16_t x182 = 0U;
	static int32_t x183 = INT32_MAX;
	static int8_t x184 = -1;
	int32_t t37 = -48;

	t37 = (((x181+x182)%x183)==x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = 19;
	static uint16_t x186 = 5276U;
	int16_t x187 = INT16_MIN;
	int32_t t38 = -492489532;

	t38 = (((x185+x186)%x187)==x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x189 = -947;
	int8_t x190 = INT8_MIN;
	static volatile int16_t x191 = INT16_MAX;
	volatile int32_t t39 = -1;

	t39 = (((x189+x190)%x191)==x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x193 = UINT8_MAX;
	uint8_t x194 = 4U;
	int16_t x195 = -1;
	int16_t x196 = 147;

	t40 = (((x193+x194)%x195)==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x198 = 0U;
	static int16_t x199 = INT16_MAX;

	t41 = (((x197+x198)%x199)==x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	static uint8_t x204 = UINT8_MAX;
	int32_t t42 = -178115;

	t42 = (((x201+x202)%x203)==x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x205 = INT16_MIN;
	static int8_t x206 = 0;
	int64_t x207 = INT64_MIN;
	uint16_t x208 = 1786U;

	t43 = (((x205+x206)%x207)==x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x210 = -401;
	int8_t x211 = -3;
	int32_t x212 = INT32_MIN;
	static int32_t t44 = 0;

	t44 = (((x209+x210)%x211)==x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x214 = 4U;
	static int8_t x216 = -3;
	volatile int32_t t45 = 23434;

	t45 = (((x213+x214)%x215)==x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x217 = UINT8_MAX;
	int8_t x218 = INT8_MAX;
	volatile int8_t x219 = INT8_MAX;
	int64_t x220 = -1LL;

	t46 = (((x217+x218)%x219)==x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x222 = UINT32_MAX;
	static uint32_t x223 = 1897U;
	volatile int32_t x224 = INT32_MAX;
	volatile int32_t t47 = 485;

	t47 = (((x221+x222)%x223)==x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x226 = 1LL;
	uint32_t x227 = 25U;
	static int64_t x228 = -18039117847385LL;

	t48 = (((x225+x226)%x227)==x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -1;
	uint32_t x230 = 22871U;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = -5;
	static volatile int32_t t49 = 7;

	t49 = (((x229+x230)%x231)==x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 2203002U;
	volatile int32_t t50 = 745988010;

	t50 = (((x233+x234)%x235)==x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 224U;
	uint8_t x238 = 44U;
	int8_t x240 = INT8_MAX;
	volatile int32_t t51 = 91452973;

	t51 = (((x237+x238)%x239)==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x241 = 5;
	uint32_t x242 = 2U;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t52 = -1219836;

	t52 = (((x241+x242)%x243)==x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x246 = UINT8_MAX;
	int8_t x247 = INT8_MAX;
	uint32_t x248 = UINT32_MAX;
	int32_t t53 = 10;

	t53 = (((x245+x246)%x247)==x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = -1;
	int16_t x250 = INT16_MAX;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = 143249847306991706LLU;
	volatile int32_t t54 = 944606070;

	t54 = (((x249+x250)%x251)==x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = 7;
	static uint32_t x254 = 150043221U;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = 7;
	volatile int32_t t55 = -745559;

	t55 = (((x253+x254)%x255)==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x257 = -1LL;
	int64_t x258 = -1LL;
	uint8_t x260 = UINT8_MAX;
	int32_t t56 = 0;

	t56 = (((x257+x258)%x259)==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x263 = -1LL;
	int16_t x264 = INT16_MAX;
	int32_t t57 = 89;

	t57 = (((x261+x262)%x263)==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MAX;
	int8_t x267 = INT8_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t58 = -16901;

	t58 = (((x265+x266)%x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = UINT64_MAX;
	static int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = 49U;
	static int32_t t59 = 1959797;

	t59 = (((x269+x270)%x271)==x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MAX;
	uint64_t x274 = UINT64_MAX;
	uint8_t x275 = 4U;
	volatile int32_t x276 = -919;
	static int32_t t60 = 319013077;

	t60 = (((x273+x274)%x275)==x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x278 = 451948579897272LLU;
	int64_t x279 = 1LL;
	int64_t x280 = 131195104436492160LL;
	int32_t t61 = -204;

	t61 = (((x277+x278)%x279)==x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 289825685LLU;
	int16_t x282 = INT16_MAX;
	uint32_t x283 = 124295U;
	uint32_t x284 = 33316U;
	int32_t t62 = 14;

	t62 = (((x281+x282)%x283)==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = -15;
	volatile uint64_t x286 = UINT64_MAX;
	int16_t x288 = -1;
	static int32_t t63 = 61421772;

	t63 = (((x285+x286)%x287)==x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MIN;
	volatile int32_t t64 = 33832;

	t64 = (((x289+x290)%x291)==x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = 5410U;
	volatile uint32_t x294 = 39068U;
	uint64_t x295 = 109959506381942LLU;
	static int8_t x296 = INT8_MAX;
	static volatile int32_t t65 = 0;

	t65 = (((x293+x294)%x295)==x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x299 = 40927201LLU;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t66 = 1823024;

	t66 = (((x297+x298)%x299)==x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x302 = 33;
	int32_t x303 = -895122;
	volatile int64_t x304 = INT64_MIN;
	static volatile int32_t t67 = -2119750;

	t67 = (((x301+x302)%x303)==x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int8_t x307 = INT8_MIN;
	int64_t x308 = 22733249LL;
	static int32_t t68 = 128;

	t68 = (((x305+x306)%x307)==x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x311 = -1;
	int8_t x312 = 2;
	int32_t t69 = -984212053;

	t69 = (((x309+x310)%x311)==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MAX;
	volatile int64_t x314 = INT64_MIN;
	int32_t x315 = -1;
	static volatile int16_t x316 = INT16_MAX;
	int32_t t70 = 12105;

	t70 = (((x313+x314)%x315)==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x318 = INT8_MAX;
	uint32_t x319 = 26147852U;
	volatile uint64_t x320 = UINT64_MAX;

	t71 = (((x317+x318)%x319)==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t t72 = -5353642;

	t72 = (((x321+x322)%x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int8_t x326 = -1;
	volatile int32_t x327 = -14;
	volatile uint16_t x328 = 20847U;
	volatile int32_t t73 = -4038;

	t73 = (((x325+x326)%x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x330 = 10697U;
	uint8_t x331 = 1U;
	uint16_t x332 = 0U;
	volatile int32_t t74 = 7160;

	t74 = (((x329+x330)%x331)==x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 166511890717LLU;
	volatile int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t75 = 841;

	t75 = (((x333+x334)%x335)==x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x338 = INT8_MIN;
	volatile int64_t x339 = -20545780697LL;
	int8_t x340 = 1;
	volatile int32_t t76 = 22412542;

	t76 = (((x337+x338)%x339)==x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = 2409LLU;
	static volatile int16_t x343 = -1;
	int32_t t77 = -118791644;

	t77 = (((x341+x342)%x343)==x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x346 = UINT8_MAX;
	volatile uint64_t x347 = 9073497772295LLU;
	uint8_t x348 = 20U;
	volatile int32_t t78 = 3257;

	t78 = (((x345+x346)%x347)==x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x349 = UINT16_MAX;
	volatile uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MIN;
	int32_t t79 = 282397;

	t79 = (((x349+x350)%x351)==x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile uint16_t x354 = 6570U;
	static uint32_t x355 = 22U;
	volatile uint32_t x356 = UINT32_MAX;
	static volatile int32_t t80 = -56;

	t80 = (((x353+x354)%x355)==x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x358 = -2;
	uint32_t x360 = 712U;

	t81 = (((x357+x358)%x359)==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MAX;
	static int8_t x362 = -44;
	int64_t x363 = INT64_MAX;
	int32_t x364 = 1364171;
	volatile int32_t t82 = 0;

	t82 = (((x361+x362)%x363)==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x365 = -534;
	volatile int16_t x366 = INT16_MAX;
	static int32_t t83 = -5347363;

	t83 = (((x365+x366)%x367)==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	int32_t t84 = -1038985021;

	t84 = (((x369+x370)%x371)==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = 328243U;
	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = -1;
	int32_t x380 = -1;
	static int32_t t85 = -247447;

	t85 = (((x377+x378)%x379)==x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x386 = 1;
	int8_t x387 = -15;
	int64_t x388 = INT64_MAX;
	int32_t t86 = -16701;

	t86 = (((x385+x386)%x387)==x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x390 = INT32_MIN;
	static int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t87 = 6;

	t87 = (((x389+x390)%x391)==x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x393 = -1;
	volatile int32_t x394 = -10562110;
	uint64_t x395 = 533344232LLU;
	volatile int32_t t88 = -2372;

	t88 = (((x393+x394)%x395)==x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x397 = 13318U;
	int64_t x400 = -167477LL;

	t89 = (((x397+x398)%x399)==x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x402 = INT8_MAX;
	int8_t x403 = 3;
	int32_t x404 = -7;
	int32_t t90 = -328656397;

	t90 = (((x401+x402)%x403)==x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x410 = -1;
	static uint64_t x412 = 267631200931LLU;

	t91 = (((x409+x410)%x411)==x412);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = 118;
	uint32_t x415 = UINT32_MAX;
	volatile int32_t t92 = 4907300;

	t92 = (((x413+x414)%x415)==x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x417 = 3200862;
	int8_t x418 = -6;
	int64_t x419 = 99374081839355515LL;
	int8_t x420 = -2;
	static volatile int32_t t93 = 3;

	t93 = (((x417+x418)%x419)==x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x421 = 100344U;
	int64_t x422 = -1LL;
	static volatile int16_t x423 = 12456;
	int32_t t94 = 1;

	t94 = (((x421+x422)%x423)==x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x425 = 119628057;
	int32_t x427 = INT32_MAX;
	static int8_t x428 = -1;
	volatile int32_t t95 = -1;

	t95 = (((x425+x426)%x427)==x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x432 = INT16_MAX;

	t96 = (((x429+x430)%x431)==x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = -168080;
	int8_t x434 = INT8_MAX;
	volatile int32_t x435 = 1638591;
	volatile int32_t x436 = INT32_MIN;
	int32_t t97 = -7628;

	t97 = (((x433+x434)%x435)==x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = -1LL;
	static uint64_t x442 = 415296334967LLU;
	volatile int32_t x443 = INT32_MIN;
	uint16_t x444 = 1U;
	int32_t t98 = 1;

	t98 = (((x441+x442)%x443)==x444);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x445 = 12944U;
	static int8_t x446 = 0;
	static volatile int32_t x448 = INT32_MAX;
	int32_t t99 = 24723;

	t99 = (((x445+x446)%x447)==x448);

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

