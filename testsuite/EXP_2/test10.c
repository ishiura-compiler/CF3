#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 0U;
int8_t x27 = -9;
int32_t x41 = 1444;
int64_t x42 = -1LL;
int32_t x44 = INT32_MIN;
static volatile int64_t x51 = -1LL;
int64_t x52 = INT64_MAX;
int8_t x63 = INT8_MIN;
static int8_t x72 = 7;
volatile int16_t x73 = 0;
uint64_t x78 = 7710370041LLU;
volatile int64_t x85 = 16012201943LL;
volatile int16_t x92 = INT16_MIN;
int8_t x101 = INT8_MIN;
int32_t x104 = INT32_MIN;
volatile int32_t x105 = -12666597;
uint8_t x106 = 8U;
int32_t x108 = 873;
int16_t x115 = INT16_MIN;
int32_t x117 = -7;
int16_t x122 = INT16_MIN;
uint16_t x127 = UINT16_MAX;
volatile int32_t t25 = 32393404;
int32_t x139 = -10135058;
volatile int16_t x142 = INT16_MIN;
int32_t t27 = -9874;
int16_t x153 = INT16_MIN;
volatile int32_t t30 = 3244;
uint64_t x166 = 15LLU;
static int16_t x170 = INT16_MIN;
int64_t x171 = INT64_MAX;
static int16_t x185 = -6;
int8_t x191 = -40;
static int32_t x196 = INT32_MIN;
int16_t x198 = INT16_MAX;
int32_t t41 = 17775;
static int8_t x221 = -1;
uint64_t x225 = 20291LLU;
int32_t x228 = INT32_MIN;
volatile int32_t t46 = -8576;
static uint64_t x229 = 1714963301LLU;
int32_t x230 = INT32_MAX;
volatile int32_t t47 = -5284;
uint64_t x239 = UINT64_MAX;
int32_t t49 = 5383651;
int32_t x246 = INT32_MIN;
uint32_t x247 = 0U;
static int16_t x250 = INT16_MAX;
int16_t x254 = INT16_MIN;
uint64_t x257 = UINT64_MAX;
static int16_t x259 = INT16_MAX;
int64_t x274 = INT64_MAX;
int8_t x276 = INT8_MIN;
int32_t t56 = 118049930;
int32_t x277 = -1;
volatile int8_t x285 = INT8_MAX;
int64_t x291 = INT64_MIN;
int8_t x294 = 0;
int8_t x296 = 0;
static uint8_t x323 = 0U;
static int64_t x329 = -1LL;
uint64_t x330 = 1LLU;
int32_t x334 = -1;
int32_t t71 = 96492;
int8_t x346 = 13;
volatile int32_t t73 = -451668;
volatile int32_t t74 = -18276;
volatile int32_t t75 = 625;
volatile int32_t t76 = 31938;
volatile int32_t t77 = 885812787;
int8_t x383 = 7;
int32_t t79 = 33;
uint8_t x385 = UINT8_MAX;
int8_t x393 = INT8_MIN;
static uint8_t x395 = 4U;
uint32_t x399 = 10U;
int32_t t83 = -601072;
int64_t x417 = -73LL;
volatile int16_t x422 = -1;
int64_t x448 = 17123277060168LL;
uint32_t x451 = 747495U;
int8_t x454 = 39;
int8_t x459 = 0;
uint16_t x461 = UINT16_MAX;
volatile int8_t x464 = INT8_MAX;
int16_t x467 = INT16_MIN;
int64_t x468 = INT64_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint32_t x2 = 3U;
	int32_t x3 = -26656566;
	volatile int32_t t0 = -23376629;

	t0 = ((x1+(x2+x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = 938;
	int32_t x10 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	static uint8_t x12 = 54U;
	int32_t t1 = -161024318;

	t1 = ((x9+(x10+x11))<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = UINT64_MAX;
	int8_t x22 = INT8_MAX;
	volatile int8_t x23 = 1;
	int8_t x24 = INT8_MIN;
	int32_t t2 = -22;

	t2 = ((x21+(x22+x23))<=x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x25 = -1;
	uint8_t x26 = 8U;
	volatile uint32_t x28 = 51644383U;
	static volatile int32_t t3 = -502902;

	t3 = ((x25+(x26+x27))<=x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MIN;
	static uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	static volatile int16_t x32 = -1;
	int32_t t4 = 0;

	t4 = ((x29+(x30+x31))<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x43 = -1;
	static int32_t t5 = 116;

	t5 = ((x41+(x42+x43))<=x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = 3U;
	static uint8_t x50 = 6U;
	int32_t t6 = -30;

	t6 = ((x49+(x50+x51))<=x52);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x53 = 0U;
	volatile int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	static int8_t x56 = INT8_MAX;
	static int32_t t7 = -104269;

	t7 = ((x53+(x54+x55))<=x56);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = -1;
	uint32_t x58 = 0U;
	volatile uint8_t x59 = 9U;
	uint64_t x60 = UINT64_MAX;
	static int32_t t8 = 18;

	t8 = ((x57+(x58+x59))<=x60);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = 61;
	int8_t x62 = INT8_MAX;
	volatile int64_t x64 = INT64_MAX;
	int32_t t9 = 53635;

	t9 = ((x61+(x62+x63))<=x64);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = -1;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	volatile int64_t x68 = INT64_MIN;
	static volatile int32_t t10 = 294;

	t10 = ((x65+(x66+x67))<=x68);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = 127767772819LL;
	static int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	static volatile int32_t t11 = -103301;

	t11 = ((x69+(x70+x71))<=x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x74 = INT32_MIN;
	static uint8_t x75 = 8U;
	int32_t x76 = INT32_MIN;
	int32_t t12 = 2402;

	t12 = ((x73+(x74+x75))<=x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = 10766560;
	uint32_t x79 = UINT32_MAX;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t13 = -1038215663;

	t13 = ((x77+(x78+x79))<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x86 = 126U;
	volatile int64_t x87 = 146717093201207LL;
	uint32_t x88 = 937694188U;
	int32_t t14 = 1;

	t14 = ((x85+(x86+x87))<=x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x89 = UINT8_MAX;
	static int16_t x90 = -1;
	uint64_t x91 = 1LLU;
	int32_t t15 = 13369;

	t15 = ((x89+(x90+x91))<=x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x93 = -1;
	static int16_t x94 = INT16_MAX;
	volatile int16_t x95 = INT16_MIN;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t16 = -15405;

	t16 = ((x93+(x94+x95))<=x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x97 = -88;
	int8_t x98 = INT8_MIN;
	int32_t x99 = -1;
	uint32_t x100 = 164U;
	int32_t t17 = 0;

	t17 = ((x97+(x98+x99))<=x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x102 = 10U;
	int8_t x103 = INT8_MAX;
	volatile int32_t t18 = 674063438;

	t18 = ((x101+(x102+x103))<=x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x107 = UINT16_MAX;
	volatile int32_t t19 = 10346499;

	t19 = ((x105+(x106+x107))<=x108);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x113 = -93775505;
	int32_t x114 = INT32_MAX;
	int32_t x116 = -15;
	int32_t t20 = 224;

	t20 = ((x113+(x114+x115))<=x116);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x118 = 7563843U;
	uint32_t x119 = 979795933U;
	int32_t x120 = INT32_MIN;
	volatile int32_t t21 = 160;

	t21 = ((x117+(x118+x119))<=x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x121 = 1LLU;
	static uint16_t x123 = 28792U;
	int64_t x124 = INT64_MIN;
	volatile int32_t t22 = 3000;

	t22 = ((x121+(x122+x123))<=x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = INT16_MAX;
	uint64_t x126 = 110129315LLU;
	int64_t x128 = INT64_MIN;
	static int32_t t23 = 1252403;

	t23 = ((x125+(x126+x127))<=x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MAX;
	static int16_t x131 = -14;
	static volatile int64_t x132 = INT64_MIN;
	static volatile int32_t t24 = -286823429;

	t24 = ((x129+(x130+x131))<=x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = UINT16_MAX;
	static volatile uint8_t x134 = 108U;
	uint16_t x135 = 234U;
	volatile int32_t x136 = -1;

	t25 = ((x133+(x134+x135))<=x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = 1;
	static volatile int8_t x138 = -5;
	static uint32_t x140 = UINT32_MAX;
	volatile int32_t t26 = 130;

	t26 = ((x137+(x138+x139))<=x140);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = INT16_MAX;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;

	t27 = ((x141+(x142+x143))<=x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x145 = 1;
	uint16_t x146 = 0U;
	volatile int64_t x147 = 237956270700655349LL;
	int64_t x148 = -474LL;
	volatile int32_t t28 = -4;

	t28 = ((x145+(x146+x147))<=x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x149 = 84045;
	static int32_t x150 = 17;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = UINT8_MAX;
	int32_t t29 = 2;

	t29 = ((x149+(x150+x151))<=x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x154 = -4557;
	int32_t x155 = INT32_MAX;
	volatile int32_t x156 = INT32_MAX;

	t30 = ((x153+(x154+x155))<=x156);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = 9U;
	uint32_t x159 = UINT32_MAX;
	static int64_t x160 = INT64_MAX;
	volatile int32_t t31 = 0;

	t31 = ((x157+(x158+x159))<=x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x161 = INT16_MAX;
	volatile uint16_t x162 = 120U;
	volatile uint16_t x163 = UINT16_MAX;
	static volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t32 = 2868562;

	t32 = ((x161+(x162+x163))<=x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	uint32_t x168 = 2814U;
	volatile int32_t t33 = 101;

	t33 = ((x165+(x166+x167))<=x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x169 = 26U;
	uint64_t x172 = 108155124395006LLU;
	static volatile int32_t t34 = 3231;

	t34 = ((x169+(x170+x171))<=x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	static int32_t x178 = -1;
	int8_t x179 = -1;
	int32_t x180 = -1;
	volatile int32_t t35 = -65;

	t35 = ((x177+(x178+x179))<=x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MIN;
	uint32_t x182 = 133523U;
	static int64_t x183 = INT64_MIN;
	int64_t x184 = 157301LL;
	volatile int32_t t36 = -1;

	t36 = ((x181+(x182+x183))<=x184);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = INT64_MIN;
	int8_t x188 = 46;
	int32_t t37 = 199792;

	t37 = ((x185+(x186+x187))<=x188);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x189 = 3U;
	volatile int16_t x190 = -1;
	int8_t x192 = -1;
	int32_t t38 = 17719;

	t38 = ((x189+(x190+x191))<=x192);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	static volatile int32_t t39 = -3;

	t39 = ((x193+(x194+x195))<=x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = 3U;
	uint32_t x199 = UINT32_MAX;
	int16_t x200 = -1;
	int32_t t40 = -31;

	t40 = ((x197+(x198+x199))<=x200);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 741U;
	uint32_t x204 = 11074844U;

	t41 = ((x201+(x202+x203))<=x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = UINT16_MAX;
	static uint16_t x206 = 529U;
	static int16_t x207 = -1;
	int16_t x208 = INT16_MAX;
	static int32_t t42 = 126565;

	t42 = ((x205+(x206+x207))<=x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = -2;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = 0;
	uint8_t x216 = 53U;
	int32_t t43 = -3;

	t43 = ((x213+(x214+x215))<=x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = INT64_MAX;
	static int8_t x218 = INT8_MIN;
	static int16_t x219 = -10428;
	int16_t x220 = INT16_MIN;
	volatile int32_t t44 = 7210;

	t44 = ((x217+(x218+x219))<=x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x222 = 38;
	int32_t x223 = INT32_MIN;
	static int32_t x224 = -1;
	int32_t t45 = -117193873;

	t45 = ((x221+(x222+x223))<=x224);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x226 = INT8_MIN;
	int8_t x227 = 0;

	t46 = ((x225+(x226+x227))<=x228);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x231 = 187802121U;
	int32_t x232 = INT32_MIN;

	t47 = ((x229+(x230+x231))<=x232);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x237 = 1U;
	int32_t x238 = INT32_MIN;
	static int16_t x240 = INT16_MAX;
	static volatile int32_t t48 = -246149389;

	t48 = ((x237+(x238+x239))<=x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x241 = 29278U;
	int64_t x242 = 1LL;
	volatile int64_t x243 = INT64_MIN;
	volatile int8_t x244 = -1;

	t49 = ((x241+(x242+x243))<=x244);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = INT32_MIN;
	int16_t x248 = INT16_MIN;
	int32_t t50 = -52071;

	t50 = ((x245+(x246+x247))<=x248);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = 14U;
	int32_t x251 = -21832428;
	volatile uint64_t x252 = 14144313283779LLU;
	volatile int32_t t51 = -2;

	t51 = ((x249+(x250+x251))<=x252);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MIN;
	volatile uint32_t x255 = UINT32_MAX;
	static int16_t x256 = 2;
	volatile int32_t t52 = -19711013;

	t52 = ((x253+(x254+x255))<=x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x258 = -11230;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t53 = 5;

	t53 = ((x257+(x258+x259))<=x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x261 = 1U;
	volatile int8_t x262 = INT8_MIN;
	int8_t x263 = -14;
	uint64_t x264 = 79158990915430709LLU;
	volatile int32_t t54 = 1;

	t54 = ((x261+(x262+x263))<=x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x265 = INT16_MIN;
	uint32_t x266 = 11U;
	int32_t x267 = INT32_MIN;
	int8_t x268 = -1;
	volatile int32_t t55 = 677583;

	t55 = ((x265+(x266+x267))<=x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x273 = 52U;
	uint64_t x275 = UINT64_MAX;

	t56 = ((x273+(x274+x275))<=x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x278 = 534849170LL;
	static uint64_t x279 = 6820947LLU;
	int64_t x280 = INT64_MIN;
	static int32_t t57 = 1062415293;

	t57 = ((x277+(x278+x279))<=x280);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = 47294;
	int8_t x282 = INT8_MIN;
	static int32_t x283 = -3;
	int64_t x284 = 172964186207815LL;
	int32_t t58 = 162206023;

	t58 = ((x281+(x282+x283))<=x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x286 = INT32_MIN;
	int16_t x287 = 196;
	uint16_t x288 = 78U;
	static volatile int32_t t59 = -2830406;

	t59 = ((x285+(x286+x287))<=x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x289 = 2U;
	int16_t x290 = 131;
	static uint16_t x292 = UINT16_MAX;
	volatile int32_t t60 = 1336;

	t60 = ((x289+(x290+x291))<=x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = UINT16_MAX;
	uint32_t x295 = UINT32_MAX;
	int32_t t61 = 95;

	t61 = ((x293+(x294+x295))<=x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = -1;
	volatile int32_t x298 = 2;
	int8_t x299 = 4;
	volatile int8_t x300 = -8;
	int32_t t62 = 52563888;

	t62 = ((x297+(x298+x299))<=x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = 11713;
	int32_t x302 = -1;
	uint32_t x303 = 951083750U;
	volatile uint8_t x304 = UINT8_MAX;
	int32_t t63 = -87;

	t63 = ((x301+(x302+x303))<=x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = -6;
	int64_t x314 = -53852468LL;
	uint16_t x315 = 4051U;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t64 = 25;

	t64 = ((x313+(x314+x315))<=x316);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = 0;
	int32_t x318 = -1650708;
	static int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t65 = 224201814;

	t65 = ((x317+(x318+x319))<=x320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = 4U;
	volatile uint32_t x324 = 11U;
	int32_t t66 = 4560;

	t66 = ((x321+(x322+x323))<=x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = -2;
	int16_t x326 = INT16_MAX;
	static uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MAX;
	int32_t t67 = 60380558;

	t67 = ((x325+(x326+x327))<=x328);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x331 = UINT8_MAX;
	static uint32_t x332 = 913163U;
	int32_t t68 = -112430;

	t68 = ((x329+(x330+x331))<=x332);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x333 = 55LLU;
	int8_t x335 = -29;
	uint16_t x336 = UINT16_MAX;
	int32_t t69 = -1755;

	t69 = ((x333+(x334+x335))<=x336);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x337 = 244005LLU;
	static volatile int16_t x338 = INT16_MAX;
	uint8_t x339 = 6U;
	int8_t x340 = -62;
	int32_t t70 = 5180402;

	t70 = ((x337+(x338+x339))<=x340);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = -1;
	int32_t x342 = 780;
	volatile int32_t x343 = -2;
	uint64_t x344 = 4805063135619259LLU;

	t71 = ((x341+(x342+x343))<=x344);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x345 = 91414125LLU;
	int32_t x347 = -248;
	static int32_t x348 = -1;
	int32_t t72 = 2;

	t72 = ((x345+(x346+x347))<=x348);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = UINT64_MAX;
	uint64_t x350 = 47256LLU;
	uint64_t x351 = 6871LLU;
	volatile int32_t x352 = INT32_MIN;

	t73 = ((x349+(x350+x351))<=x352);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x353 = 41446538U;
	static volatile uint8_t x354 = UINT8_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	static uint32_t x356 = UINT32_MAX;

	t74 = ((x353+(x354+x355))<=x356);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = -1;
	int16_t x362 = INT16_MIN;
	static uint8_t x363 = 11U;
	static int64_t x364 = INT64_MIN;

	t75 = ((x361+(x362+x363))<=x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x365 = 0U;
	volatile int8_t x366 = INT8_MIN;
	int64_t x367 = 510645382481585568LL;
	uint32_t x368 = UINT32_MAX;

	t76 = ((x365+(x366+x367))<=x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x373 = 30480878U;
	uint8_t x374 = 0U;
	int8_t x375 = 8;
	int16_t x376 = INT16_MIN;

	t77 = ((x373+(x374+x375))<=x376);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MAX;
	uint16_t x379 = 9U;
	int32_t x380 = -1;
	volatile int32_t t78 = -6835;

	t78 = ((x377+(x378+x379))<=x380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x381 = 0;
	int32_t x382 = -489519822;
	uint8_t x384 = 43U;

	t79 = ((x381+(x382+x383))<=x384);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x386 = 7U;
	static int32_t x387 = -170;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t80 = -361761;

	t80 = ((x385+(x386+x387))<=x388);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x389 = 135168851LLU;
	static volatile uint16_t x390 = 9U;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t81 = -18789526;

	t81 = ((x389+(x390+x391))<=x392);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x394 = 142U;
	uint8_t x396 = 9U;
	static int32_t t82 = 0;

	t82 = ((x393+(x394+x395))<=x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x397 = 10U;
	volatile uint16_t x398 = 10634U;
	uint8_t x400 = 14U;

	t83 = ((x397+(x398+x399))<=x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	static volatile uint64_t x403 = UINT64_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t84 = -181483;

	t84 = ((x401+(x402+x403))<=x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x405 = 32U;
	int64_t x406 = -349597716568334LL;
	int16_t x407 = INT16_MIN;
	int32_t x408 = -1730601;
	int32_t t85 = 0;

	t85 = ((x405+(x406+x407))<=x408);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = INT8_MIN;
	volatile uint32_t x410 = 4U;
	int8_t x411 = INT8_MIN;
	int8_t x412 = -19;
	static volatile int32_t t86 = -461786385;

	t86 = ((x409+(x410+x411))<=x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = -1;
	uint64_t x420 = 1100LLU;
	volatile int32_t t87 = 100258;

	t87 = ((x417+(x418+x419))<=x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x421 = 6827493155LLU;
	static uint16_t x423 = 19990U;
	static int32_t x424 = -17087684;
	volatile int32_t t88 = -1;

	t88 = ((x421+(x422+x423))<=x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = -1;
	uint8_t x430 = 105U;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t89 = 18036973;

	t89 = ((x429+(x430+x431))<=x432);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x433 = -1;
	uint64_t x434 = 12068814LLU;
	uint32_t x435 = UINT32_MAX;
	static int32_t x436 = 0;
	volatile int32_t t90 = -16;

	t90 = ((x433+(x434+x435))<=x436);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x437 = 5U;
	static uint64_t x438 = 954950905857363947LLU;
	static uint64_t x439 = 1088LLU;
	int64_t x440 = -1LL;
	int32_t t91 = -130211;

	t91 = ((x437+(x438+x439))<=x440);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x441 = -1LL;
	static volatile int64_t x442 = -1310598916LL;
	static int32_t x443 = -1;
	int8_t x444 = INT8_MIN;
	int32_t t92 = -6817214;

	t92 = ((x441+(x442+x443))<=x444);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x445 = INT64_MIN;
	uint16_t x446 = 3U;
	uint16_t x447 = 8158U;
	volatile int32_t t93 = -4257;

	t93 = ((x445+(x446+x447))<=x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x449 = 14U;
	static int8_t x450 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t94 = -31356534;

	t94 = ((x449+(x450+x451))<=x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = 10;
	volatile uint16_t x455 = 893U;
	int32_t x456 = -13568596;
	static int32_t t95 = -50;

	t95 = ((x453+(x454+x455))<=x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = INT64_MIN;
	uint8_t x458 = 1U;
	int64_t x460 = INT64_MIN;
	volatile int32_t t96 = -51270;

	t96 = ((x457+(x458+x459))<=x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x462 = 1U;
	uint32_t x463 = UINT32_MAX;
	volatile int32_t t97 = 2;

	t97 = ((x461+(x462+x463))<=x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x465 = -1;
	static int32_t x466 = -3045;
	int32_t t98 = -109;

	t98 = ((x465+(x466+x467))<=x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = INT32_MIN;
	uint8_t x470 = 1U;
	static int8_t x471 = -1;
	int8_t x472 = INT8_MAX;
	int32_t t99 = -6774;

	t99 = ((x469+(x470+x471))<=x472);

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

