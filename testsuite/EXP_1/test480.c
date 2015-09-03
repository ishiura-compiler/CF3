#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
uint8_t x15 = 1U;
volatile int64_t t2 = -267796011057954LL;
static int32_t x32 = -1;
volatile int32_t t4 = 0;
int64_t x35 = INT64_MIN;
volatile int32_t x40 = INT32_MIN;
int32_t t6 = 128;
uint16_t x44 = 2182U;
volatile int64_t x73 = -1LL;
static uint64_t x81 = 86632680LLU;
uint64_t x93 = 432788593508LLU;
int32_t x103 = INT32_MAX;
int32_t x111 = 947271;
uint16_t x112 = UINT16_MAX;
static int32_t t19 = -54994;
static int32_t x113 = INT32_MAX;
uint64_t x114 = UINT64_MAX;
int16_t x129 = INT16_MAX;
int16_t x130 = INT16_MIN;
uint32_t x137 = 178867U;
int8_t x143 = INT8_MIN;
uint64_t x144 = UINT64_MAX;
int8_t x154 = -1;
int8_t x155 = INT8_MIN;
uint16_t x157 = UINT16_MAX;
int64_t x160 = -242LL;
volatile uint32_t x164 = UINT32_MAX;
int64_t t30 = -54404190994526LL;
int16_t x169 = -62;
uint64_t x172 = 1711625010315784618LLU;
volatile int64_t t33 = -3LL;
int64_t t37 = 199886057LL;
static uint8_t x198 = 3U;
uint16_t x199 = 43U;
int32_t x200 = -1;
volatile int32_t t41 = -4798;
int8_t x230 = -1;
uint64_t x234 = 55LLU;
int16_t x244 = 9805;
int32_t t48 = -629206;
uint8_t x265 = UINT8_MAX;
volatile int32_t x271 = 300683;
int16_t x272 = 77;
volatile uint8_t x283 = 2U;
int8_t x285 = INT8_MAX;
volatile int16_t x287 = -1;
static volatile uint8_t x293 = 3U;
int64_t t54 = -241LL;
int64_t x297 = INT64_MAX;
static int8_t x311 = -7;
static uint64_t x312 = 6846304077LLU;
volatile uint32_t x315 = UINT32_MAX;
static uint64_t t58 = 229887592LLU;
static uint64_t x326 = UINT64_MAX;
int8_t x327 = 0;
uint64_t t59 = 18149LLU;
int16_t x333 = 12292;
volatile uint64_t t62 = 28289563611612LLU;
volatile uint64_t t64 = 52LLU;
int16_t x355 = INT16_MIN;
int8_t x381 = -1;
uint8_t x389 = UINT8_MAX;
volatile int8_t x390 = 20;
int32_t x398 = 4660680;
volatile int8_t x401 = 1;
int8_t x405 = -1;
int8_t x409 = 3;
volatile int16_t x413 = INT16_MIN;
volatile int64_t x419 = INT64_MAX;
int64_t x421 = 4181465975040LL;
int16_t x422 = INT16_MIN;
static int8_t x424 = INT8_MAX;
volatile int32_t x432 = INT32_MIN;
int16_t x433 = 8036;
uint64_t x442 = 367LLU;
static volatile int8_t x453 = 39;
static uint64_t x463 = UINT64_MAX;
uint64_t x474 = UINT64_MAX;
uint8_t x490 = 1U;
uint64_t x492 = 44851482605LLU;
int16_t x494 = -1;
int32_t x500 = INT32_MAX;
uint8_t x502 = UINT8_MAX;
static int8_t x503 = -3;
static uint64_t t90 = 32531629204461LLU;
int32_t x506 = -1;
int32_t x509 = -1;
uint16_t x512 = UINT16_MAX;
static uint32_t x532 = 13U;
int64_t x536 = -1LL;
volatile uint8_t x541 = 62U;


void f0(void) {
	uint8_t x1 = 58U;
	int16_t x2 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	static volatile uint32_t t0 = UINT32_MAX;

	t0 = (((x1*x2)&x3)|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	uint16_t x14 = 13U;
	uint8_t x16 = 76U;
	static volatile int32_t t1 = -1;

	t1 = (((x13*x14)&x15)|x16);

	if (t1 != 76) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -1LL;
	volatile int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MAX;

	t2 = (((x17*x18)&x19)|x20);

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = -1LL;
	int64_t x23 = -10298096LL;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t3 = 1059014477873LL;

	t3 = (((x21*x22)&x23)|x24);

	if (t3 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	static int8_t x30 = INT8_MAX;
	int16_t x31 = -1;

	t4 = (((x29*x30)&x31)|x32);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x33 = -1;
	static int32_t x34 = -1;
	uint8_t x36 = 52U;
	volatile int64_t t5 = -110346379477797LL;

	t5 = (((x33*x34)&x35)|x36);

	if (t5 != 52LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	int16_t x39 = -305;

	t6 = (((x37*x38)&x39)|x40);

	if (t6 != -2147467264) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = 15U;
	static uint64_t x43 = UINT64_MAX;
	uint64_t t7 = 384565471724931226LLU;

	t7 = (((x41*x42)&x43)|x44);

	if (t7 != 491511LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = 2;
	static int16_t x46 = -11;
	int32_t x47 = 849360;
	static int64_t x48 = INT64_MIN;
	static volatile int64_t t8 = -10887127396917LL;

	t8 = (((x45*x46)&x47)|x48);

	if (t8 != -9223372036853926464LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = 11;
	volatile int8_t x50 = 60;
	volatile uint16_t x51 = 12U;
	int32_t x52 = -741;
	volatile int32_t t9 = 8;

	t9 = (((x49*x50)&x51)|x52);

	if (t9 != -737) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 18;
	volatile int16_t x54 = INT16_MIN;
	static int32_t x55 = -11;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t10 = -168172523;

	t10 = (((x53*x54)&x55)|x56);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x74 = 1U;
	volatile uint16_t x75 = 2825U;
	uint8_t x76 = 3U;
	volatile int64_t t11 = -5LL;

	t11 = (((x73*x74)&x75)|x76);

	if (t11 != 2827LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -7423LL;
	static int32_t x78 = -1;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MAX;
	static int64_t t12 = 1769937997280144773LL;

	t12 = (((x77*x78)&x79)|x80);

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x82 = INT64_MIN;
	int64_t x83 = 14LL;
	int32_t x84 = -72608;
	volatile uint64_t t13 = 409LLU;

	t13 = (((x81*x82)&x83)|x84);

	if (t13 != 18446744073709479008LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (((x89*x90)&x91)|x92);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x94 = INT64_MIN;
	int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t15 = 4378314533LLU;

	t15 = (((x93*x94)&x95)|x96);

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = -1;
	static int16_t x98 = INT16_MIN;
	volatile uint64_t x99 = UINT64_MAX;
	int16_t x100 = 358;
	uint64_t t16 = 3LLU;

	t16 = (((x97*x98)&x99)|x100);

	if (t16 != 33126LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x101 = 1U;
	int32_t x102 = INT32_MIN;
	static int32_t x104 = -1;
	volatile int32_t t17 = 36665;

	t17 = (((x101*x102)&x103)|x104);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = 3U;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x105*x106)&x107)|x108);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = -37;

	t19 = (((x109*x110)&x111)|x112);

	if (t19 != 196607) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t20 = 2580274199LLU;

	t20 = (((x113*x114)&x115)|x116);

	if (t20 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = 1389805809U;
	uint64_t x126 = 1063799285245748LLU;
	uint64_t x127 = 1768563041260LLU;
	volatile uint64_t x128 = 167967632848111LLU;
	volatile uint64_t t21 = 6411582739566646LLU;

	t21 = (((x125*x126)&x127)|x128);

	if (t21 != 168075082528751LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x131 = INT8_MIN;
	uint8_t x132 = 18U;
	static volatile int32_t t22 = -221830218;

	t22 = (((x129*x130)&x131)|x132);

	if (t22 != -1073709038) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x133 = 1344;
	static uint8_t x134 = 0U;
	int8_t x135 = INT8_MAX;
	int32_t x136 = -1;
	int32_t t23 = -423335;

	t23 = (((x133*x134)&x135)|x136);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x138 = 782;
	uint8_t x139 = 1U;
	uint32_t x140 = 215091398U;
	uint32_t t24 = 30337U;

	t24 = (((x137*x138)&x139)|x140);

	if (t24 != 215091398U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x141 = INT64_MIN;
	uint64_t x142 = 384579792627LLU;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x141*x142)&x143)|x144);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	static int8_t x147 = -5;
	int64_t x148 = 5478340691LL;
	static int64_t t26 = 1550939282441091841LL;

	t26 = (((x145*x146)&x147)|x148);

	if (t26 != 5478340819LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x149 = 12;
	int16_t x150 = 1038;
	static volatile int8_t x151 = INT8_MIN;
	static int8_t x152 = 0;
	int32_t t27 = -1;

	t27 = (((x149*x150)&x151)|x152);

	if (t27 != 12416) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -2;
	static volatile int16_t x156 = INT16_MAX;
	int32_t t28 = -1;

	t28 = (((x153*x154)&x155)|x156);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x158 = 65U;
	int16_t x159 = INT16_MIN;
	volatile int64_t t29 = 29LL;

	t29 = (((x157*x158)&x159)|x160);

	if (t29 != -242LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x161 = -1LL;
	int64_t x162 = -9872LL;
	int16_t x163 = 205;

	t30 = (((x161*x162)&x163)|x164);

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = INT32_MIN;
	static uint8_t x166 = 1U;
	int16_t x167 = INT16_MIN;
	uint64_t x168 = 1139007LLU;
	static uint64_t t31 = 183528LLU;

	t31 = (((x165*x166)&x167)|x168);

	if (t31 != 18446744071563206975LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x170 = -1LL;
	static int64_t x171 = 34225136456LL;
	static uint64_t t32 = 239672966300610793LLU;

	t32 = (((x169*x170)&x171)|x172);

	if (t32 != 1711625010315784618LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -1LL;
	int16_t x174 = 1;
	int32_t x175 = INT32_MAX;
	uint8_t x176 = 12U;

	t33 = (((x173*x174)&x175)|x176);

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = 49;
	int32_t x180 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = (((x177*x178)&x179)|x180);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

	t35 = (((x181*x182)&x183)|x184);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = -29;
	int64_t x186 = -251142561135266LL;
	uint16_t x187 = 431U;
	int32_t x188 = 606;
	int64_t t36 = 361834774475LL;

	t36 = (((x185*x186)&x187)|x188);

	if (t36 != 606LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x193 = INT16_MIN;
	int16_t x194 = 494;
	int64_t x195 = -1LL;
	uint16_t x196 = 371U;

	t37 = (((x193*x194)&x195)|x196);

	if (t37 != -16187021LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x197 = 0U;
	static volatile int32_t t38 = 1;

	t38 = (((x197*x198)&x199)|x200);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = 3U;
	uint16_t x202 = 0U;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t39 = INT64_MIN;

	t39 = (((x201*x202)&x203)|x204);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = 0;
	static volatile uint32_t x206 = 3U;
	uint64_t x207 = 17029504172786078LLU;
	int32_t x208 = INT32_MIN;
	static volatile uint64_t t40 = 500800831631LLU;

	t40 = (((x205*x206)&x207)|x208);

	if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x213 = 1;
	int16_t x214 = -1;
	static int16_t x215 = INT16_MIN;
	uint16_t x216 = 24104U;

	t41 = (((x213*x214)&x215)|x216);

	if (t41 != -8664) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = -19;
	static uint8_t x218 = 1U;
	uint32_t x219 = 1905U;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t42 = 124U;

	t42 = (((x217*x218)&x219)|x220);

	if (t42 != 4294936417U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = 112U;
	uint32_t x222 = UINT32_MAX;
	volatile int8_t x223 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	uint32_t t43 = 948106U;

	t43 = (((x221*x222)&x223)|x224);

	if (t43 != 4294967168U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = -1;
	int32_t x231 = -1;
	uint32_t x232 = UINT32_MAX;
	static uint32_t t44 = UINT32_MAX;

	t44 = (((x229*x230)&x231)|x232);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = -1;
	volatile uint32_t x235 = UINT32_MAX;
	int16_t x236 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x233*x234)&x235)|x236);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = -1LL;
	static uint64_t x242 = 911294662131891LLU;
	uint8_t x243 = UINT8_MAX;
	uint64_t t46 = 159LLU;

	t46 = (((x241*x242)&x243)|x244);

	if (t46 != 9805LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x245 = 135382809LLU;
	int16_t x246 = 2759;
	volatile int32_t x247 = INT32_MAX;
	static uint8_t x248 = UINT8_MAX;
	uint64_t t47 = 7090656629LLU;

	t47 = (((x245*x246)&x247)|x248);

	if (t47 != 2006499071LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = -110;
	int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MAX;
	int8_t x256 = -5;

	t48 = (((x253*x254)&x255)|x256);

	if (t48 != -5) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x266 = -1;
	int8_t x267 = INT8_MAX;
	static int16_t x268 = INT16_MAX;
	int32_t t49 = 6419;

	t49 = (((x265*x266)&x267)|x268);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	volatile int32_t t50 = 109;

	t50 = (((x269*x270)&x271)|x272);

	if (t50 != 205) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t x280 = -1;
	int32_t t51 = 59799;

	t51 = (((x277*x278)&x279)|x280);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = -1;
	volatile int8_t x282 = -1;
	int32_t x284 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = (((x281*x282)&x283)|x284);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x286 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t53 = 530088684LLU;

	t53 = (((x285*x286)&x287)|x288);

	if (t53 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x294 = -1LL;
	static uint32_t x295 = 20U;
	uint16_t x296 = 622U;

	t54 = (((x293*x294)&x295)|x296);

	if (t54 != 638LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x298 = 70LLU;
	volatile uint64_t x299 = 4LLU;
	static volatile int32_t x300 = INT32_MAX;
	volatile uint64_t t55 = 25750809441717LLU;

	t55 = (((x297*x298)&x299)|x300);

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = 18;
	uint16_t x306 = 0U;
	uint32_t x307 = 1197843136U;
	int16_t x308 = -1;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (((x305*x306)&x307)|x308);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x309 = 339631;
	volatile uint8_t x310 = 0U;
	volatile uint64_t t57 = 3362765568221LLU;

	t57 = (((x309*x310)&x311)|x312);

	if (t57 != 6846304077LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x313 = 6285190LLU;
	volatile int32_t x314 = INT32_MIN;
	static int32_t x316 = INT32_MAX;

	t58 = (((x313*x314)&x315)|x316);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = INT32_MIN;
	int32_t x328 = INT32_MIN;

	t59 = (((x325*x326)&x327)|x328);

	if (t59 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x329 = UINT8_MAX;
	int16_t x330 = 9;
	int8_t x331 = 2;
	volatile int64_t x332 = 147097355832LL;
	int64_t t60 = -261163841746050LL;

	t60 = (((x329*x330)&x331)|x332);

	if (t60 != 147097355834LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x334 = 82U;
	uint8_t x335 = 0U;
	int32_t x336 = INT32_MAX;
	volatile int32_t t61 = INT32_MAX;

	t61 = (((x333*x334)&x335)|x336);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x341 = INT32_MIN;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = 20263U;

	t62 = (((x341*x342)&x343)|x344);

	if (t62 != 2147503911LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x345 = 5381757552769988LLU;
	volatile int16_t x346 = -1;
	int8_t x347 = -1;
	volatile int8_t x348 = INT8_MAX;
	volatile uint64_t t63 = 194LLU;

	t63 = (((x345*x346)&x347)|x348);

	if (t63 != 18441362316156781695LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = -1;
	uint64_t x350 = 724969041204537133LLU;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;

	t64 = (((x349*x350)&x351)|x352);

	if (t64 != 18446744073709525120LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x353 = 395366LLU;
	int16_t x354 = INT16_MIN;
	volatile int8_t x356 = INT8_MIN;
	volatile uint64_t t65 = 1191LLU;

	t65 = (((x353*x354)&x355)|x356);

	if (t65 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x357 = 943773152303623889LLU;
	static int8_t x358 = 14;
	int64_t x359 = INT64_MAX;
	uint64_t x360 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (((x357*x358)&x359)|x360);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = -1;
	static uint32_t x363 = 402534636U;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t67 = 1569591U;

	t67 = (((x361*x362)&x363)|x364);

	if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x365 = INT16_MAX;
	static volatile int8_t x366 = 22;
	static int64_t x367 = 34744261031604813LL;
	int64_t x368 = -1LL;
	int64_t t68 = 539622142013LL;

	t68 = (((x365*x366)&x367)|x368);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x377 = 1;
	int32_t x378 = INT32_MAX;
	volatile int8_t x379 = INT8_MAX;
	volatile uint64_t x380 = 5334238092299488034LLU;
	uint64_t t69 = 7438848205191250LLU;

	t69 = (((x377*x378)&x379)|x380);

	if (t69 != 5334238092299488127LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x382 = -1;
	volatile uint8_t x383 = UINT8_MAX;
	static int32_t x384 = -8391660;
	int32_t t70 = 31;

	t70 = (((x381*x382)&x383)|x384);

	if (t70 != -8391659) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = 2994U;
	int32_t t71 = -4863452;

	t71 = (((x389*x390)&x391)|x392);

	if (t71 != 7090) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 55U;
	static volatile int16_t x396 = -14473;
	volatile int32_t t72 = -4573685;

	t72 = (((x393*x394)&x395)|x396);

	if (t72 != -14473) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = INT8_MIN;
	int16_t x399 = INT16_MAX;
	volatile int32_t x400 = 47631;
	int32_t t73 = -2;

	t73 = (((x397*x398)&x399)|x400);

	if (t73 != 48655) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x402 = 1020LLU;
	static int8_t x403 = 0;
	static uint8_t x404 = 21U;
	static volatile uint64_t t74 = 35734LLU;

	t74 = (((x401*x402)&x403)|x404);

	if (t74 != 21LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x406 = 31843080000LL;
	int16_t x407 = INT16_MAX;
	int64_t x408 = -1LL;
	volatile int64_t t75 = -169LL;

	t75 = (((x405*x406)&x407)|x408);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x410 = -1;
	uint16_t x411 = 0U;
	static uint8_t x412 = 0U;
	volatile int32_t t76 = -1;

	t76 = (((x409*x410)&x411)|x412);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x414 = INT16_MIN;
	static uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x413*x414)&x415)|x416);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x417 = 14439U;
	static uint32_t x418 = 658376U;
	volatile uint16_t x420 = UINT16_MAX;
	static int64_t t78 = -34636107650846LL;

	t78 = (((x417*x418)&x419)|x420);

	if (t78 != 916389887LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x423 = 6095549542759536LLU;
	volatile uint64_t t79 = 101178025399LLU;

	t79 = (((x421*x422)&x423)|x424);

	if (t79 != 4827517890330751LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x429 = -35;
	int8_t x430 = INT8_MAX;
	uint8_t x431 = 3U;
	volatile int32_t t80 = -33985;

	t80 = (((x429*x430)&x431)|x432);

	if (t80 != -2147483645) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x434 = UINT8_MAX;
	static int16_t x435 = INT16_MAX;
	int64_t x436 = 96687LL;
	int64_t t81 = 70354297717LL;

	t81 = (((x433*x434)&x435)|x436);

	if (t81 != 97727LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MIN;
	int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MAX;
	uint64_t t82 = 23LLU;

	t82 = (((x441*x442)&x443)|x444);

	if (t82 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = INT16_MIN;
	uint32_t x450 = UINT32_MAX;
	uint32_t x451 = 22359U;
	int64_t x452 = -813865406100LL;
	static int64_t t83 = 304539200864253492LL;

	t83 = (((x449*x450)&x451)|x452);

	if (t83 != -813865406100LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x454 = UINT32_MAX;
	int8_t x455 = 3;
	int64_t x456 = INT64_MAX;
	volatile int64_t t84 = INT64_MAX;

	t84 = (((x453*x454)&x455)|x456);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = INT16_MAX;
	static int16_t x462 = -15777;
	uint8_t x464 = 5U;
	uint64_t t85 = 1194820314565111777LLU;

	t85 = (((x461*x462)&x463)|x464);

	if (t85 != 18446744073192586661LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x473 = 3890073U;
	volatile uint64_t x475 = 5172572678661382277LLU;
	static int8_t x476 = -11;
	uint64_t t86 = 9287474019069LLU;

	t86 = (((x473*x474)&x475)|x476);

	if (t86 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x489 = 236818LL;
	int32_t x491 = -1;
	static volatile uint64_t t87 = 6974LLU;

	t87 = (((x489*x490)&x491)|x492);

	if (t87 != 44851519487LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x493 = 254;
	int16_t x495 = INT16_MAX;
	int64_t x496 = 5369505636783LL;
	int64_t t88 = -9104978414LL;

	t88 = (((x493*x494)&x495)|x496);

	if (t88 != 5369505644463LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x497 = 33373983U;
	int32_t x498 = -9526;
	uint32_t x499 = 2025249U;
	volatile uint32_t t89 = 802834592U;

	t89 = (((x497*x498)&x499)|x500);

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x501 = 77355924683997LLU;
	static int32_t x504 = 21019303;

	t90 = (((x501*x502)&x503)|x504);

	if (t90 != 19725760798653095LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x505 = 7335U;
	int64_t x507 = INT64_MIN;
	static uint32_t x508 = 95U;
	static volatile int64_t t91 = -6LL;

	t91 = (((x505*x506)&x507)|x508);

	if (t91 != 95LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x510 = INT16_MIN;
	uint16_t x511 = 21719U;
	volatile int32_t t92 = -3703;

	t92 = (((x509*x510)&x511)|x512);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x513 = 36;
	uint16_t x514 = UINT16_MAX;
	volatile int32_t x515 = -26;
	int64_t x516 = INT64_MAX;
	volatile int64_t t93 = INT64_MAX;

	t93 = (((x513*x514)&x515)|x516);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x521 = INT8_MIN;
	static int16_t x522 = INT16_MIN;
	int32_t x523 = 8035321;
	int64_t x524 = INT64_MIN;
	volatile int64_t t94 = 9969520LL;

	t94 = (((x521*x522)&x523)|x524);

	if (t94 != -9223372036850581504LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x529 = INT16_MAX;
	uint32_t x530 = 300U;
	volatile uint64_t x531 = UINT64_MAX;
	volatile uint64_t t95 = 56515215989LLU;

	t95 = (((x529*x530)&x531)|x532);

	if (t95 != 9830109LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x533 = -94566196;
	static uint32_t x534 = UINT32_MAX;
	int8_t x535 = -1;
	int64_t t96 = 36044LL;

	t96 = (((x533*x534)&x535)|x536);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x537 = -1;
	static int8_t x538 = 9;
	int64_t x539 = INT64_MAX;
	int16_t x540 = INT16_MIN;
	int64_t t97 = 42LL;

	t97 = (((x537*x538)&x539)|x540);

	if (t97 != -9LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x542 = 3052136686LL;
	int8_t x543 = 5;
	int16_t x544 = INT16_MAX;
	static int64_t t98 = -78693710089731LL;

	t98 = (((x541*x542)&x543)|x544);

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = 9537;
	uint32_t x546 = 1352348198U;
	static int32_t x547 = -1;
	int32_t x548 = INT32_MAX;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (((x545*x546)&x547)|x548);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

