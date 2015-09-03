#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int16_t x11 = INT16_MAX;
int32_t t2 = 357;
volatile int32_t t3 = 219206;
int32_t x17 = INT32_MAX;
volatile int8_t x20 = -7;
static int64_t x26 = 13084143807522811LL;
int8_t x34 = INT8_MIN;
volatile uint16_t x39 = 94U;
uint32_t x46 = 3U;
volatile int32_t x48 = -1;
volatile int32_t t9 = -5395398;
uint64_t x55 = UINT64_MAX;
uint16_t x56 = 163U;
uint16_t x57 = 24325U;
static uint16_t x61 = 1U;
static int32_t t12 = 3121775;
volatile int32_t t13 = 5;
volatile int64_t x82 = INT64_MIN;
volatile uint64_t x91 = 17347702973533LLU;
uint16_t x94 = 899U;
uint32_t x97 = UINT32_MAX;
int32_t t20 = 49;
static volatile int32_t x104 = INT32_MIN;
static volatile int32_t t21 = -784;
static int16_t x109 = INT16_MIN;
int64_t x110 = -1LL;
int32_t x124 = -60758;
static volatile int32_t t24 = 94502;
int32_t x129 = -1;
uint64_t x138 = 42LLU;
volatile int64_t x140 = INT64_MIN;
static int32_t x143 = 4087741;
static int32_t t29 = -7;
static int16_t x155 = INT16_MIN;
int32_t x159 = -144607869;
volatile int32_t t32 = 5402608;
volatile int64_t x162 = -6113885LL;
int32_t x172 = -585300048;
volatile int32_t t36 = 2;
volatile int32_t x179 = -389724356;
int32_t x180 = -1;
volatile int32_t t37 = -262499;
int8_t x184 = INT8_MAX;
int32_t t38 = 19;
volatile int32_t t39 = 33;
int64_t x189 = INT64_MAX;
int8_t x190 = -1;
volatile uint8_t x193 = 112U;
uint32_t x195 = UINT32_MAX;
uint64_t x207 = UINT64_MAX;
uint64_t x209 = 3577246978492465LLU;
uint64_t x211 = 7810LLU;
uint16_t x219 = 1U;
int32_t t46 = -3866;
static uint32_t x233 = UINT32_MAX;
int32_t t47 = 5765744;
int16_t x237 = INT16_MIN;
volatile uint8_t x240 = 1U;
static int64_t x266 = INT64_MAX;
volatile int32_t t52 = 7087720;
uint32_t x281 = 6321030U;
int64_t x284 = -98638301LL;
volatile int32_t t55 = -88934;
volatile int64_t x285 = 22210935LL;
int16_t x290 = 0;
volatile int64_t x293 = INT64_MIN;
uint64_t x295 = UINT64_MAX;
static int32_t t58 = 8288;
static int16_t x298 = 1;
static int8_t x299 = -2;
static int16_t x300 = INT16_MAX;
static uint16_t x306 = UINT16_MAX;
uint32_t x321 = 13U;
volatile int32_t x324 = 83;
int32_t x352 = INT32_MIN;
int32_t t71 = 889213210;
uint32_t x353 = 4047U;
static int16_t x355 = 1017;
int16_t x356 = -13;
uint8_t x357 = 14U;
volatile int16_t x358 = 13;
static volatile int32_t t73 = 7736567;
uint64_t x372 = 1LLU;
uint32_t x386 = 4920931U;
int8_t x388 = -1;
volatile int32_t t80 = -5041;
int32_t x411 = -1391072;
volatile int32_t t81 = 485;
int32_t x417 = -75826;
static uint64_t x418 = 41351LLU;
uint64_t x420 = 65733029205206843LLU;
volatile int32_t t83 = 3;
int32_t x421 = INT32_MIN;
int32_t x424 = INT32_MAX;
int64_t x426 = INT64_MIN;
volatile uint32_t x435 = 1342446U;
int64_t x447 = -10LL;
int32_t t91 = -3856747;
int16_t x460 = 4;
static int32_t t92 = -10030;
static uint64_t x462 = 16020028LLU;
volatile int32_t x475 = INT32_MAX;
int16_t x481 = INT16_MIN;
uint16_t x484 = 29808U;
int16_t x488 = INT16_MIN;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	uint16_t x3 = 3U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -107554;

	t0 = (((x1&x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 3852267026882061694LLU;
	volatile int16_t x7 = INT16_MIN;
	uint16_t x8 = 977U;
	static int32_t t1 = -674505;

	t1 = (((x5&x6)*x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = -1LL;
	uint64_t x12 = 550016LLU;

	t2 = (((x9&x10)*x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	volatile int8_t x14 = 1;
	uint8_t x15 = 38U;
	static volatile uint64_t x16 = UINT64_MAX;

	t3 = (((x13&x14)*x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = 1555071;

	t4 = (((x17&x18)*x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint16_t x22 = 26017U;
	static int8_t x23 = INT8_MAX;
	static int8_t x24 = INT8_MIN;
	static int32_t t5 = 371795476;

	t5 = (((x21&x22)*x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint8_t x27 = 11U;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = 2076186;

	t6 = (((x25&x26)*x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x33 = -1;
	static uint64_t x35 = 2199257152626953584LLU;
	volatile int16_t x36 = 15;
	int32_t t7 = 248320;

	t7 = (((x33&x34)*x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = UINT8_MAX;
	volatile int64_t x38 = -1LL;
	volatile uint16_t x40 = UINT16_MAX;
	static volatile int32_t t8 = 379349804;

	t8 = (((x37&x38)*x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = -1;
	int64_t x47 = 60396714254021232LL;

	t9 = (((x45&x46)*x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 26121U;
	int16_t x54 = INT16_MAX;
	int32_t t10 = -13052;

	t10 = (((x53&x54)*x55)==x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x58 = -1LL;
	uint32_t x59 = UINT32_MAX;
	static int16_t x60 = 1;
	volatile int32_t t11 = 344;

	t11 = (((x57&x58)*x59)==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	volatile int64_t x64 = -42570611367511054LL;

	t12 = (((x61&x62)*x63)==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = 14580;
	int64_t x66 = -9681888031320992LL;
	int16_t x67 = -892;
	int64_t x68 = INT64_MIN;

	t13 = (((x65&x66)*x67)==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 1724330649LLU;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = -233607;
	static int8_t x72 = INT8_MIN;
	int32_t t14 = -324994;

	t14 = (((x69&x70)*x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 1U;
	static uint32_t x74 = 2U;
	int8_t x75 = -1;
	int32_t x76 = -1;
	int32_t t15 = 6070198;

	t15 = (((x73&x74)*x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	static volatile int16_t x78 = INT16_MAX;
	int16_t x79 = -1;
	int64_t x80 = 16871304288668323LL;
	int32_t t16 = 8141079;

	t16 = (((x77&x78)*x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x81 = 54U;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = 0;
	static volatile int32_t t17 = 29;

	t17 = (((x81&x82)*x83)==x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = -2886609LL;
	int64_t x92 = -1LL;
	volatile int32_t t18 = 88841593;

	t18 = (((x89&x90)*x91)==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = UINT64_MAX;
	uint16_t x95 = 13U;
	uint16_t x96 = UINT16_MAX;
	int32_t t19 = -506737350;

	t19 = (((x93&x94)*x95)==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x98 = 0U;
	uint32_t x99 = 504180250U;
	int16_t x100 = INT16_MIN;

	t20 = (((x97&x98)*x99)==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 2433U;
	int8_t x102 = 1;
	uint32_t x103 = 85185U;

	t21 = (((x101&x102)*x103)==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x111 = -1LL;
	int64_t x112 = INT64_MAX;
	int32_t t22 = -38305264;

	t22 = (((x109&x110)*x111)==x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = -23;
	int16_t x115 = INT16_MAX;
	uint16_t x116 = 795U;
	int32_t t23 = -1;

	t23 = (((x113&x114)*x115)==x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = 266746725;
	volatile uint16_t x123 = UINT16_MAX;

	t24 = (((x121&x122)*x123)==x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x130 = UINT16_MAX;
	volatile int8_t x131 = INT8_MIN;
	uint8_t x132 = 27U;
	static volatile int32_t t25 = 591;

	t25 = (((x129&x130)*x131)==x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x133 = INT32_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 25849973798324LLU;
	int64_t x136 = INT64_MIN;
	volatile int32_t t26 = -4014385;

	t26 = (((x133&x134)*x135)==x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MAX;
	int64_t x139 = -153597381734LL;
	volatile int32_t t27 = -27193;

	t27 = (((x137&x138)*x139)==x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = 20;
	int16_t x142 = INT16_MAX;
	int16_t x144 = 0;
	volatile int32_t t28 = 1795329;

	t28 = (((x141&x142)*x143)==x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = 0U;
	int8_t x146 = 7;
	int16_t x147 = INT16_MIN;
	static uint64_t x148 = 350888LLU;

	t29 = (((x145&x146)*x147)==x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x149 = INT16_MIN;
	int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	uint64_t x152 = 990378779LLU;
	int32_t t30 = 436139967;

	t30 = (((x149&x150)*x151)==x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	static uint32_t x154 = UINT32_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t31 = 70806;

	t31 = (((x153&x154)*x155)==x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x158 = 5U;
	static uint64_t x160 = 668879LLU;

	t32 = (((x157&x158)*x159)==x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x161 = 21076U;
	uint64_t x163 = 172809344449983LLU;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t33 = 245610;

	t33 = (((x161&x162)*x163)==x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MAX;
	uint8_t x167 = 104U;
	volatile int64_t x168 = 84505537LL;
	volatile int32_t t34 = -388696176;

	t34 = (((x165&x166)*x167)==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -60093870557209LL;
	int16_t x170 = 0;
	volatile int8_t x171 = -1;
	int32_t t35 = 196051;

	t35 = (((x169&x170)*x171)==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MAX;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MIN;

	t36 = (((x173&x174)*x175)==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = INT64_MIN;
	volatile uint8_t x178 = UINT8_MAX;

	t37 = (((x177&x178)*x179)==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x181 = -578;
	int16_t x182 = -1;
	static int16_t x183 = -1;

	t38 = (((x181&x182)*x183)==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x185 = -29;
	uint32_t x186 = UINT32_MAX;
	volatile int32_t x187 = INT32_MIN;
	volatile int64_t x188 = INT64_MIN;

	t39 = (((x185&x186)*x187)==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x191 = -1;
	int64_t x192 = INT64_MIN;
	static int32_t t40 = 4056;

	t40 = (((x189&x190)*x191)==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x194 = 0U;
	static volatile int64_t x196 = -13505LL;
	static int32_t t41 = 4477;

	t41 = (((x193&x194)*x195)==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MAX;
	int32_t x208 = INT32_MAX;
	int32_t t42 = 1;

	t42 = (((x205&x206)*x207)==x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = INT8_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t43 = -44;

	t43 = (((x209&x210)*x211)==x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x213 = INT8_MIN;
	int64_t x214 = -1LL;
	int32_t x215 = INT32_MIN;
	static volatile uint64_t x216 = UINT64_MAX;
	int32_t t44 = -326;

	t44 = (((x213&x214)*x215)==x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = INT32_MIN;
	static int64_t x218 = -1LL;
	volatile int32_t x220 = -1;
	static int32_t t45 = -193;

	t45 = (((x217&x218)*x219)==x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x229 = INT64_MIN;
	uint32_t x230 = 2560U;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 119;

	t46 = (((x229&x230)*x231)==x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x234 = -1988;
	static uint16_t x235 = 15U;
	int16_t x236 = -1;

	t47 = (((x233&x234)*x235)==x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x238 = -2;
	static int64_t x239 = -2787726LL;
	volatile int32_t t48 = -77;

	t48 = (((x237&x238)*x239)==x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;
	int32_t t49 = -95846336;

	t49 = (((x241&x242)*x243)==x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x245 = 22U;
	uint16_t x246 = 6U;
	int16_t x247 = INT16_MIN;
	int64_t x248 = 282226824820269906LL;
	volatile int32_t t50 = -15331208;

	t50 = (((x245&x246)*x247)==x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = INT32_MIN;
	static uint64_t x267 = UINT64_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	int32_t t51 = 27;

	t51 = (((x265&x266)*x267)==x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x269 = -1;
	static uint8_t x270 = UINT8_MAX;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MAX;

	t52 = (((x269&x270)*x271)==x272);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x273 = 76069;
	static uint8_t x274 = 11U;
	static volatile int32_t x275 = -1640;
	uint32_t x276 = UINT32_MAX;
	static int32_t t53 = -442300516;

	t53 = (((x273&x274)*x275)==x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MIN;
	static int8_t x278 = INT8_MIN;
	int16_t x279 = -1;
	volatile int64_t x280 = -27568384851LL;
	static int32_t t54 = -1;

	t54 = (((x277&x278)*x279)==x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = -1;

	t55 = (((x281&x282)*x283)==x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x286 = INT64_MIN;
	uint64_t x287 = 56LLU;
	int8_t x288 = 17;
	int32_t t56 = -30;

	t56 = (((x285&x286)*x287)==x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	int8_t x291 = -1;
	uint16_t x292 = UINT16_MAX;
	static int32_t t57 = -885469;

	t57 = (((x289&x290)*x291)==x292);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x294 = INT8_MIN;
	static uint8_t x296 = 15U;

	t58 = (((x293&x294)*x295)==x296);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = INT64_MIN;
	int32_t t59 = 998975;

	t59 = (((x297&x298)*x299)==x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x301 = 16104U;
	volatile int32_t x302 = -1;
	int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t60 = -29335006;

	t60 = (((x301&x302)*x303)==x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x305 = INT16_MIN;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MIN;
	int32_t t61 = 1541;

	t61 = (((x305&x306)*x307)==x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = 23LL;
	int16_t x311 = INT16_MIN;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t62 = -7044;

	t62 = (((x309&x310)*x311)==x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x317 = 1U;
	static int32_t x318 = -7262;
	static volatile uint32_t x319 = 62275U;
	uint32_t x320 = 220U;
	volatile int32_t t63 = 74551;

	t63 = (((x317&x318)*x319)==x320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x322 = -1;
	volatile int16_t x323 = INT16_MAX;
	volatile int32_t t64 = 0;

	t64 = (((x321&x322)*x323)==x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x325 = -1;
	int8_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	int32_t t65 = 197961413;

	t65 = (((x325&x326)*x327)==x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x329 = 2562U;
	static int32_t x330 = 1020;
	volatile uint32_t x331 = 636391421U;
	static volatile int16_t x332 = INT16_MIN;
	volatile int32_t t66 = -117910;

	t66 = (((x329&x330)*x331)==x332);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x333 = 4LLU;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t67 = -379;

	t67 = (((x333&x334)*x335)==x336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x337 = 1;
	static int64_t x338 = -1LL;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = 4U;
	volatile int32_t t68 = -8380957;

	t68 = (((x337&x338)*x339)==x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = 4116LL;
	int64_t x342 = -1LL;
	uint64_t x343 = 9888759930736LLU;
	volatile int64_t x344 = -1LL;
	int32_t t69 = -74;

	t69 = (((x341&x342)*x343)==x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x345 = 11U;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	volatile uint64_t x348 = 0LLU;
	volatile int32_t t70 = -10661338;

	t70 = (((x345&x346)*x347)==x348);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x349 = 2U;
	int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MAX;

	t71 = (((x349&x350)*x351)==x352);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x354 = -1LL;
	volatile int32_t t72 = 319;

	t72 = (((x353&x354)*x355)==x356);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x359 = -1LL;
	uint64_t x360 = 68259LLU;

	t73 = (((x357&x358)*x359)==x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x361 = INT64_MAX;
	uint64_t x362 = UINT64_MAX;
	uint32_t x363 = UINT32_MAX;
	static int16_t x364 = -1;
	volatile int32_t t74 = 1391985;

	t74 = (((x361&x362)*x363)==x364);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x369 = 2653118;
	static int16_t x370 = -1;
	volatile uint64_t x371 = 1521136908569LLU;
	int32_t t75 = 16569130;

	t75 = (((x369&x370)*x371)==x372);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = 6347386754LL;
	static uint16_t x374 = UINT16_MAX;
	uint8_t x375 = UINT8_MAX;
	volatile int8_t x376 = INT8_MIN;
	static volatile int32_t t76 = -60340;

	t76 = (((x373&x374)*x375)==x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x385 = 451LLU;
	int8_t x387 = INT8_MIN;
	int32_t t77 = 51;

	t77 = (((x385&x386)*x387)==x388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x389 = 3311167U;
	static volatile int32_t x390 = -20354;
	int32_t x391 = INT32_MIN;
	int16_t x392 = 6963;
	volatile int32_t t78 = 6508081;

	t78 = (((x389&x390)*x391)==x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x393 = 1U;
	static uint8_t x394 = 1U;
	int8_t x395 = -1;
	int8_t x396 = 9;
	static int32_t t79 = -142;

	t79 = (((x393&x394)*x395)==x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = 2013255217081869828LL;
	static int16_t x399 = 1964;
	int32_t x400 = INT32_MIN;

	t80 = (((x397&x398)*x399)==x400);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x409 = 92038U;
	int16_t x410 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;

	t81 = (((x409&x410)*x411)==x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MAX;
	static volatile int16_t x415 = INT16_MIN;
	static uint8_t x416 = 3U;
	volatile int32_t t82 = 144863;

	t82 = (((x413&x414)*x415)==x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x419 = 12U;

	t83 = (((x417&x418)*x419)==x420);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x422 = UINT32_MAX;
	uint32_t x423 = UINT32_MAX;
	volatile int32_t t84 = 61;

	t84 = (((x421&x422)*x423)==x424);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x425 = 204;
	int32_t x427 = -1;
	int32_t x428 = INT32_MAX;
	int32_t t85 = -9;

	t85 = (((x425&x426)*x427)==x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x429 = 3U;
	int16_t x430 = INT16_MIN;
	volatile int16_t x431 = INT16_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t86 = -70280618;

	t86 = (((x429&x430)*x431)==x432);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x433 = 26U;
	uint64_t x434 = UINT64_MAX;
	int8_t x436 = -1;
	static int32_t t87 = 11;

	t87 = (((x433&x434)*x435)==x436);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x437 = INT8_MIN;
	int64_t x438 = -15422LL;
	uint32_t x439 = 517U;
	int32_t x440 = 1758;
	int32_t t88 = 0;

	t88 = (((x437&x438)*x439)==x440);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x441 = INT8_MIN;
	int32_t x442 = 52583482;
	uint32_t x443 = 834774328U;
	int32_t x444 = 48354;
	volatile int32_t t89 = 22624;

	t89 = (((x441&x442)*x443)==x444);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = 11;
	int8_t x446 = -10;
	static int16_t x448 = -1;
	volatile int32_t t90 = -337;

	t90 = (((x445&x446)*x447)==x448);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x453 = 33;
	static uint16_t x454 = 13U;
	uint64_t x455 = 0LLU;
	static int16_t x456 = -8991;

	t91 = (((x453&x454)*x455)==x456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x457 = UINT8_MAX;
	static uint32_t x458 = 83788U;
	int32_t x459 = 1848;

	t92 = (((x457&x458)*x459)==x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x461 = INT8_MIN;
	int16_t x463 = 11271;
	int8_t x464 = INT8_MIN;
	volatile int32_t t93 = -2085738;

	t93 = (((x461&x462)*x463)==x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x465 = -1;
	static uint16_t x466 = 508U;
	int32_t x467 = -1;
	static volatile int16_t x468 = 2693;
	static int32_t t94 = 60;

	t94 = (((x465&x466)*x467)==x468);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x473 = UINT8_MAX;
	uint16_t x474 = 0U;
	int16_t x476 = -1;
	int32_t t95 = -1425381;

	t95 = (((x473&x474)*x475)==x476);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x477 = INT64_MIN;
	int32_t x478 = 12956;
	static int64_t x479 = 1194001961610530977LL;
	static int16_t x480 = -1;
	int32_t t96 = 376616;

	t96 = (((x477&x478)*x479)==x480);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x482 = 3684356LLU;
	volatile int16_t x483 = 67;
	int32_t t97 = 0;

	t97 = (((x481&x482)*x483)==x484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x485 = INT8_MIN;
	volatile int64_t x486 = -1LL;
	static int32_t x487 = INT32_MIN;
	volatile int32_t t98 = -157932;

	t98 = (((x485&x486)*x487)==x488);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x489 = UINT8_MAX;
	static volatile int32_t x490 = INT32_MIN;
	uint64_t x491 = UINT64_MAX;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t99 = 1068796998;

	t99 = (((x489&x490)*x491)==x492);

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

