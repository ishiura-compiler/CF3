#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x12 = 1495118U;
uint32_t x21 = 1207804U;
int32_t t2 = 1658;
int8_t x30 = INT8_MIN;
int16_t x31 = INT16_MAX;
uint32_t x32 = 532U;
uint16_t x39 = 0U;
static volatile int32_t t4 = -95674777;
int32_t t5 = -887;
int32_t x55 = 30;
int64_t x59 = -1LL;
int64_t x72 = -688939218LL;
static int8_t x85 = INT8_MAX;
static int32_t x103 = INT32_MIN;
int8_t x112 = -1;
uint16_t x114 = UINT16_MAX;
volatile int32_t t17 = 1;
int8_t x117 = 17;
volatile uint32_t x118 = 3101958U;
volatile int32_t t18 = 2524;
static int16_t x130 = INT16_MAX;
int16_t x136 = -1;
int8_t x138 = INT8_MIN;
static volatile int32_t t22 = -2;
int32_t x147 = INT32_MAX;
int32_t x148 = 201002831;
volatile uint32_t x151 = UINT32_MAX;
static uint32_t x152 = 443U;
int32_t t25 = 39664;
int64_t x154 = -1LL;
uint64_t x159 = 1LLU;
volatile int32_t t27 = -252223942;
int32_t x165 = INT32_MIN;
uint8_t x166 = 92U;
uint64_t x168 = 2622226238756841LLU;
int8_t x171 = -1;
static volatile int32_t x177 = 1621489;
int8_t x184 = INT8_MIN;
int64_t x188 = -1LL;
volatile int64_t x189 = -4054366280LL;
uint32_t x193 = UINT32_MAX;
int8_t x208 = INT8_MIN;
uint16_t x212 = 0U;
volatile int32_t t39 = 433;
static int32_t t40 = -1024799;
uint64_t x221 = 0LLU;
volatile int32_t t41 = 537;
uint16_t x228 = UINT16_MAX;
int16_t x229 = INT16_MIN;
int32_t x246 = INT32_MAX;
volatile int32_t t45 = -124701;
static uint32_t x264 = UINT32_MAX;
uint8_t x265 = 0U;
volatile int32_t t49 = 2;
volatile int64_t x277 = -2LL;
static int32_t x285 = INT32_MIN;
static int64_t x317 = 2867LL;
static volatile int8_t x324 = -1;
uint32_t x328 = 23019U;
volatile int32_t t59 = -3399061;
uint64_t x335 = 296727632LLU;
uint16_t x340 = UINT16_MAX;
int16_t x341 = 3;
int16_t x375 = -2555;
int32_t x393 = 782;
int16_t x395 = -4;
uint32_t x397 = UINT32_MAX;
int64_t x408 = 213159105LL;
static volatile int32_t t72 = -611;
static uint32_t x443 = UINT32_MAX;
int16_t x451 = -1;
volatile int64_t x452 = INT64_MIN;
static volatile uint8_t x460 = 3U;
int64_t x468 = INT64_MAX;
static int32_t x469 = 3989553;
int8_t x471 = 0;
int32_t x475 = -1;
int32_t t82 = -107794;
static uint16_t x490 = 2U;
volatile int32_t x496 = INT32_MIN;
static volatile int32_t t85 = 0;
static int16_t x505 = INT16_MIN;
volatile int32_t x520 = INT32_MIN;
uint32_t x523 = 33U;
int64_t x529 = -1LL;
int32_t t91 = -11330;
volatile int64_t x541 = -1LL;
int64_t x548 = -101071LL;
static uint8_t x550 = UINT8_MAX;
volatile int16_t x552 = -1;
static int32_t t94 = -1006;
uint32_t x563 = UINT32_MAX;
static int64_t x564 = 1269266943LL;
uint32_t x567 = 100621726U;


void f0(void) {
	int16_t x5 = -1;
	static uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MAX;
	static int64_t x8 = 2000858779168LL;
	volatile int32_t t0 = -729;

	t0 = (((x5+x6)*x7)<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 1057936398423174LLU;
	int32_t x10 = -814592;
	int32_t x11 = -1;
	volatile int32_t t1 = 11001;

	t1 = (((x9+x10)*x11)<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x22 = 277U;
	static uint32_t x23 = 7486U;
	static uint64_t x24 = 30153624881LLU;

	t2 = (((x21+x22)*x23)<x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MIN;
	int32_t t3 = -37328494;

	t3 = (((x29+x30)*x31)<x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x37 = 1006215227U;
	uint16_t x38 = 215U;
	volatile int32_t x40 = -1;

	t4 = (((x37+x38)*x39)<x40);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x45 = INT32_MIN;
	int8_t x46 = 0;
	volatile uint32_t x47 = 53885011U;
	int32_t x48 = INT32_MIN;

	t5 = (((x45+x46)*x47)<x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = 1227070;
	uint32_t x50 = 2U;
	uint8_t x51 = 6U;
	volatile uint16_t x52 = 5U;
	int32_t t6 = -1821;

	t6 = (((x49+x50)*x51)<x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x53 = 914894359U;
	int64_t x54 = -362LL;
	volatile int32_t x56 = 2;
	int32_t t7 = -382;

	t7 = (((x53+x54)*x55)<x56);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = -4328719;
	int32_t x60 = -575;
	static volatile int32_t t8 = 5496371;

	t8 = (((x57+x58)*x59)<x60);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x69 = 9U;
	int64_t x70 = -6459718LL;
	int16_t x71 = 1722;
	int32_t t9 = -1;

	t9 = (((x69+x70)*x71)<x72);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 352U;
	uint32_t x75 = 509U;
	int32_t x76 = -119;
	int32_t t10 = -846;

	t10 = (((x73+x74)*x75)<x76);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = 2204878468LLU;
	volatile int32_t x79 = -1;
	static int64_t x80 = 1480669264LL;
	int32_t t11 = -11389283;

	t11 = (((x77+x78)*x79)<x80);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x86 = INT64_MIN;
	int64_t x87 = -1LL;
	int64_t x88 = INT64_MAX;
	static int32_t t12 = -1476132;

	t12 = (((x85+x86)*x87)<x88);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x89 = INT32_MIN;
	uint64_t x90 = 184589352391905105LLU;
	int64_t x91 = INT64_MIN;
	int16_t x92 = 5;
	volatile int32_t t13 = 88;

	t13 = (((x89+x90)*x91)<x92);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x97 = 27;
	static int8_t x98 = -1;
	uint32_t x99 = 28111U;
	int32_t x100 = 2985;
	static int32_t t14 = 267626;

	t14 = (((x97+x98)*x99)<x100);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = INT8_MAX;
	uint64_t x102 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t15 = -235;

	t15 = (((x101+x102)*x103)<x104);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x109 = INT8_MAX;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = 70637LL;
	volatile int32_t t16 = -1054960545;

	t16 = (((x109+x110)*x111)<x112);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x113 = -1;
	volatile uint8_t x115 = 2U;
	uint8_t x116 = 0U;

	t17 = (((x113+x114)*x115)<x116);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x119 = 8329435332244293LLU;
	int64_t x120 = INT64_MAX;

	t18 = (((x117+x118)*x119)<x120);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x121 = -1LL;
	uint32_t x122 = UINT32_MAX;
	static uint16_t x123 = 16168U;
	static int8_t x124 = INT8_MIN;
	static volatile int32_t t19 = 31320262;

	t19 = (((x121+x122)*x123)<x124);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x129 = INT8_MAX;
	int16_t x131 = INT16_MIN;
	static int32_t x132 = INT32_MAX;
	volatile int32_t t20 = 23577014;

	t20 = (((x129+x130)*x131)<x132);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x133 = -18;
	static uint16_t x134 = 1859U;
	static volatile uint32_t x135 = UINT32_MAX;
	static int32_t t21 = 1193;

	t21 = (((x133+x134)*x135)<x136);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x137 = INT16_MAX;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;

	t22 = (((x137+x138)*x139)<x140);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = -1;
	int32_t x142 = -15576969;
	uint32_t x143 = 69U;
	static int64_t x144 = INT64_MAX;
	volatile int32_t t23 = 11;

	t23 = (((x141+x142)*x143)<x144);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = -360600LL;
	int64_t x146 = -1LL;
	static int32_t t24 = 187;

	t24 = (((x145+x146)*x147)<x148);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = -1LL;
	volatile uint32_t x150 = 28U;

	t25 = (((x149+x150)*x151)<x152);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = INT32_MIN;
	volatile int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MAX;
	static volatile int32_t t26 = 500586339;

	t26 = (((x153+x154)*x155)<x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MIN;
	int32_t x160 = -1;

	t27 = (((x157+x158)*x159)<x160);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x161 = -14;
	int16_t x162 = -42;
	static volatile int16_t x163 = -33;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t28 = -78;

	t28 = (((x161+x162)*x163)<x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x167 = UINT32_MAX;
	static int32_t t29 = 149199688;

	t29 = (((x165+x166)*x167)<x168);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x169 = 1930U;
	int8_t x170 = -1;
	uint64_t x172 = UINT64_MAX;
	int32_t t30 = 1002432;

	t30 = (((x169+x170)*x171)<x172);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x173 = -1LL;
	static uint8_t x174 = 7U;
	int16_t x175 = -715;
	static int16_t x176 = 0;
	volatile int32_t t31 = 6585;

	t31 = (((x173+x174)*x175)<x176);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	static volatile int32_t x180 = INT32_MAX;
	int32_t t32 = -1597;

	t32 = (((x177+x178)*x179)<x180);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x181 = UINT16_MAX;
	volatile int64_t x182 = INT64_MIN;
	static int8_t x183 = -1;
	volatile int32_t t33 = -327324252;

	t33 = (((x181+x182)*x183)<x184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x185 = 320837LLU;
	static int8_t x186 = 14;
	volatile int64_t x187 = INT64_MIN;
	int32_t t34 = 388;

	t34 = (((x185+x186)*x187)<x188);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x190 = INT32_MIN;
	uint8_t x191 = 0U;
	static uint32_t x192 = 54U;
	int32_t t35 = -473857;

	t35 = (((x189+x190)*x191)<x192);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x194 = 447;
	int8_t x195 = -1;
	static volatile int8_t x196 = -3;
	volatile int32_t t36 = 1;

	t36 = (((x193+x194)*x195)<x196);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x197 = 2172327;
	uint16_t x198 = UINT16_MAX;
	volatile int8_t x199 = INT8_MIN;
	volatile int8_t x200 = INT8_MIN;
	int32_t t37 = 12;

	t37 = (((x197+x198)*x199)<x200);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = 1;
	int16_t x207 = INT16_MIN;
	volatile int32_t t38 = -379;

	t38 = (((x205+x206)*x207)<x208);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x209 = 42375360682382LL;
	int8_t x210 = -3;
	static uint16_t x211 = 197U;

	t39 = (((x209+x210)*x211)<x212);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x217 = 1;
	static uint16_t x218 = 76U;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 6449LLU;

	t40 = (((x217+x218)*x219)<x220);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x222 = 213U;
	uint64_t x223 = 11LLU;
	int8_t x224 = INT8_MIN;

	t41 = (((x221+x222)*x223)<x224);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MIN;
	int32_t t42 = -16943;

	t42 = (((x225+x226)*x227)<x228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x230 = 16910456663913051LLU;
	int16_t x231 = -1;
	int64_t x232 = -1LL;
	int32_t t43 = -84;

	t43 = (((x229+x230)*x231)<x232);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x245 = UINT64_MAX;
	int64_t x247 = 192688634867LL;
	int64_t x248 = INT64_MAX;
	volatile int32_t t44 = -760;

	t44 = (((x245+x246)*x247)<x248);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = INT16_MIN;
	volatile int8_t x250 = INT8_MIN;
	static int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;

	t45 = (((x249+x250)*x251)<x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x253 = 3953U;
	int8_t x254 = INT8_MIN;
	int64_t x255 = -1LL;
	int32_t x256 = 440;
	static int32_t t46 = 0;

	t46 = (((x253+x254)*x255)<x256);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x261 = -4;
	uint64_t x262 = 1LLU;
	uint64_t x263 = 5219915LLU;
	int32_t t47 = 43;

	t47 = (((x261+x262)*x263)<x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x266 = -1;
	volatile int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t48 = -1936;

	t48 = (((x265+x266)*x267)<x268);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x273 = -1LL;
	uint64_t x274 = UINT64_MAX;
	volatile int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MIN;

	t49 = (((x273+x274)*x275)<x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x278 = INT32_MIN;
	static int16_t x279 = INT16_MIN;
	uint32_t x280 = 25081763U;
	int32_t t50 = -34;

	t50 = (((x277+x278)*x279)<x280);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x286 = INT16_MAX;
	static int16_t x287 = -1;
	int16_t x288 = -23;
	static int32_t t51 = 496184;

	t51 = (((x285+x286)*x287)<x288);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x289 = UINT32_MAX;
	static uint64_t x290 = 106203415013LLU;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t52 = 9616;

	t52 = (((x289+x290)*x291)<x292);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x293 = 1406789794U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	int32_t t53 = -20;

	t53 = (((x293+x294)*x295)<x296);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = -1;
	int16_t x298 = INT16_MIN;
	volatile int16_t x299 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	int32_t t54 = -103348595;

	t54 = (((x297+x298)*x299)<x300);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x310 = -1;
	uint32_t x311 = 19U;
	int64_t x312 = INT64_MIN;
	volatile int32_t t55 = -11539;

	t55 = (((x309+x310)*x311)<x312);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x318 = 3772268889LL;
	uint32_t x319 = 103384164U;
	uint32_t x320 = 1866722U;
	volatile int32_t t56 = 32;

	t56 = (((x317+x318)*x319)<x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = 110;
	static int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	volatile int32_t t57 = -25;

	t57 = (((x321+x322)*x323)<x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x325 = -1;
	uint16_t x326 = UINT16_MAX;
	static volatile uint64_t x327 = UINT64_MAX;
	static int32_t t58 = -3873;

	t58 = (((x325+x326)*x327)<x328);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = -27;
	uint8_t x330 = 81U;
	volatile int16_t x331 = INT16_MIN;
	static int64_t x332 = INT64_MAX;

	t59 = (((x329+x330)*x331)<x332);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	int32_t x336 = -8;
	volatile int32_t t60 = 223875789;

	t60 = (((x333+x334)*x335)<x336);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = -2;
	int16_t x339 = 6;
	volatile int32_t t61 = 20749998;

	t61 = (((x337+x338)*x339)<x340);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x342 = INT8_MAX;
	int32_t x343 = -1;
	static int64_t x344 = INT64_MAX;
	volatile int32_t t62 = -1;

	t62 = (((x341+x342)*x343)<x344);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x345 = -10;
	int8_t x346 = -1;
	static int32_t x347 = -12;
	int16_t x348 = INT16_MIN;
	volatile int32_t t63 = 3;

	t63 = (((x345+x346)*x347)<x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x349 = 219097411LLU;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MAX;
	volatile int32_t x352 = -31890;
	int32_t t64 = -932308;

	t64 = (((x349+x350)*x351)<x352);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = -1LL;
	uint8_t x358 = 25U;
	int16_t x359 = 2422;
	volatile uint32_t x360 = 169519U;
	int32_t t65 = 301494;

	t65 = (((x357+x358)*x359)<x360);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x365 = 88U;
	int16_t x366 = INT16_MIN;
	static uint32_t x367 = 1759325525U;
	volatile int64_t x368 = INT64_MIN;
	int32_t t66 = -33;

	t66 = (((x365+x366)*x367)<x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = -1;
	volatile int8_t x370 = -60;
	static uint32_t x371 = 56U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t67 = -122696554;

	t67 = (((x369+x370)*x371)<x372);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x373 = 1055670173445072LLU;
	int64_t x374 = INT64_MIN;
	int8_t x376 = 0;
	volatile int32_t t68 = -2;

	t68 = (((x373+x374)*x375)<x376);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x389 = 5817;
	int8_t x390 = -1;
	static int16_t x391 = 11;
	uint8_t x392 = 0U;
	volatile int32_t t69 = 777646;

	t69 = (((x389+x390)*x391)<x392);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x394 = 304U;
	int32_t x396 = INT32_MIN;
	int32_t t70 = -1;

	t70 = (((x393+x394)*x395)<x396);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x398 = 0U;
	int16_t x399 = -1;
	static int32_t x400 = -2625;
	volatile int32_t t71 = 2622;

	t71 = (((x397+x398)*x399)<x400);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x405 = 1U;
	uint32_t x406 = 83U;
	uint64_t x407 = 236969045653076LLU;

	t72 = (((x405+x406)*x407)<x408);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x425 = -1;
	volatile uint64_t x426 = UINT64_MAX;
	int32_t x427 = -10;
	uint16_t x428 = UINT16_MAX;
	int32_t t73 = 9;

	t73 = (((x425+x426)*x427)<x428);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x437 = INT16_MIN;
	uint8_t x438 = UINT8_MAX;
	static int32_t x439 = 11629;
	volatile int16_t x440 = -502;
	static int32_t t74 = -419551;

	t74 = (((x437+x438)*x439)<x440);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x441 = -1;
	uint64_t x442 = 11830LLU;
	uint8_t x444 = 60U;
	volatile int32_t t75 = 127542654;

	t75 = (((x441+x442)*x443)<x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x445 = 14U;
	int32_t x446 = INT32_MAX;
	int32_t x447 = INT32_MIN;
	int16_t x448 = -1;
	int32_t t76 = 1736872;

	t76 = (((x445+x446)*x447)<x448);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x449 = 3;
	int8_t x450 = INT8_MIN;
	int32_t t77 = -7249;

	t77 = (((x449+x450)*x451)<x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x453 = 751U;
	static volatile uint8_t x454 = 7U;
	uint16_t x455 = 371U;
	static uint32_t x456 = 1604722U;
	volatile int32_t t78 = 32700;

	t78 = (((x453+x454)*x455)<x456);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x457 = 88U;
	static uint32_t x458 = 463U;
	uint32_t x459 = 3670042U;
	int32_t t79 = 980707454;

	t79 = (((x457+x458)*x459)<x460);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x465 = INT32_MAX;
	int8_t x466 = INT8_MIN;
	uint32_t x467 = 13U;
	volatile int32_t t80 = -15420;

	t80 = (((x465+x466)*x467)<x468);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x470 = INT16_MAX;
	volatile int16_t x472 = -140;
	int32_t t81 = -567;

	t81 = (((x469+x470)*x471)<x472);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x473 = INT32_MIN;
	int8_t x474 = INT8_MAX;
	uint64_t x476 = 6642599579LLU;

	t82 = (((x473+x474)*x475)<x476);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x481 = UINT16_MAX;
	uint32_t x482 = 1310571254U;
	int8_t x483 = -1;
	uint8_t x484 = 8U;
	int32_t t83 = 278604605;

	t83 = (((x481+x482)*x483)<x484);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x489 = 1422;
	int16_t x491 = INT16_MIN;
	volatile int32_t x492 = 30570;
	volatile int32_t t84 = -19732927;

	t84 = (((x489+x490)*x491)<x492);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x493 = 39;
	static uint64_t x494 = 30LLU;
	uint8_t x495 = 61U;

	t85 = (((x493+x494)*x495)<x496);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x501 = -1;
	int16_t x502 = -1;
	static uint32_t x503 = 7820U;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t86 = 1526;

	t86 = (((x501+x502)*x503)<x504);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x506 = INT16_MIN;
	int32_t x507 = -385;
	int32_t x508 = INT32_MIN;
	static volatile int32_t t87 = -9111579;

	t87 = (((x505+x506)*x507)<x508);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x513 = -1;
	uint64_t x514 = 19137098453819LLU;
	int8_t x515 = -5;
	int64_t x516 = -1LL;
	static int32_t t88 = -185;

	t88 = (((x513+x514)*x515)<x516);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x517 = INT16_MAX;
	int32_t x518 = -70661;
	uint64_t x519 = 11602107780428LLU;
	volatile int32_t t89 = 2;

	t89 = (((x517+x518)*x519)<x520);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x521 = INT16_MAX;
	volatile int16_t x522 = INT16_MIN;
	int32_t x524 = 16294635;
	static int32_t t90 = -5332931;

	t90 = (((x521+x522)*x523)<x524);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x530 = UINT8_MAX;
	uint64_t x531 = UINT64_MAX;
	int32_t x532 = INT32_MAX;

	t91 = (((x529+x530)*x531)<x532);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x542 = INT32_MIN;
	static uint16_t x543 = UINT16_MAX;
	uint32_t x544 = 1U;
	static volatile int32_t t92 = 146;

	t92 = (((x541+x542)*x543)<x544);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x545 = UINT16_MAX;
	static int32_t x546 = 511820;
	static uint8_t x547 = 25U;
	static volatile int32_t t93 = 523168;

	t93 = (((x545+x546)*x547)<x548);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x549 = INT8_MIN;
	int32_t x551 = -1;

	t94 = (((x549+x550)*x551)<x552);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x557 = 11U;
	int8_t x558 = INT8_MAX;
	static int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;
	volatile int32_t t95 = -151900;

	t95 = (((x557+x558)*x559)<x560);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x561 = 15749068LLU;
	static volatile int8_t x562 = 2;
	static volatile int32_t t96 = 229;

	t96 = (((x561+x562)*x563)<x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = 13349;
	volatile int8_t x566 = -2;
	volatile int64_t x568 = -28LL;
	volatile int32_t t97 = -349;

	t97 = (((x565+x566)*x567)<x568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x569 = INT16_MIN;
	int8_t x570 = -49;
	int8_t x571 = INT8_MIN;
	uint8_t x572 = 1U;
	volatile int32_t t98 = -524;

	t98 = (((x569+x570)*x571)<x572);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x573 = 367;
	volatile int16_t x574 = INT16_MAX;
	int16_t x575 = -1;
	volatile int32_t x576 = -207;
	volatile int32_t t99 = -1;

	t99 = (((x573+x574)*x575)<x576);

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

