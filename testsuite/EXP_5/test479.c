#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = -2;
uint64_t x12 = 4046798747LLU;
int32_t x22 = -1;
uint8_t x32 = UINT8_MAX;
int32_t t6 = -26;
volatile uint64_t t7 = 807417372849LLU;
volatile int32_t x45 = INT32_MAX;
volatile int8_t x47 = 30;
int16_t x50 = 0;
int16_t x51 = 526;
static int8_t x53 = 3;
static int8_t x55 = INT8_MAX;
volatile uint32_t t13 = 1350U;
int64_t x90 = 7254632048285791LL;
uint8_t x98 = 7U;
int16_t x101 = INT16_MIN;
int16_t x116 = 3;
volatile int64_t x125 = INT64_MAX;
volatile uint64_t t23 = 4716713596939LLU;
volatile int32_t x129 = -117362411;
static uint64_t x131 = 15912427099953968LLU;
volatile int64_t x132 = INT64_MIN;
int64_t x137 = INT64_MAX;
volatile uint64_t t26 = 126LLU;
uint8_t x153 = 13U;
uint64_t t27 = 4744LLU;
uint64_t x163 = 1600093589LLU;
static volatile int64_t t31 = -115515705745590027LL;
uint8_t x183 = UINT8_MAX;
static volatile uint16_t x184 = 2U;
int64_t x187 = -35109755356LL;
uint16_t x188 = 15302U;
static int16_t x202 = 0;
static volatile uint32_t x210 = 7947U;
int8_t x212 = INT8_MIN;
volatile uint32_t t40 = 5134800U;
uint16_t x248 = 39U;
static uint64_t t42 = 6LLU;
uint8_t x264 = UINT8_MAX;
int64_t t44 = 0LL;
static int16_t x265 = INT16_MAX;
volatile uint8_t x279 = 13U;
volatile uint32_t x280 = 16694U;
int16_t x285 = 3;
int64_t x290 = -511407085514473LL;
static int16_t x292 = INT16_MAX;
static uint16_t x308 = 865U;
volatile int16_t x314 = INT16_MAX;
static uint32_t x333 = UINT32_MAX;
uint16_t x340 = UINT16_MAX;
static int64_t t57 = -372LL;
static int16_t x347 = 1;
static int16_t x350 = INT16_MAX;
int64_t x351 = -167358606609061LL;
volatile uint64_t x354 = 822771159606LLU;
volatile uint64_t x361 = 3199LLU;
int8_t x362 = -51;
int32_t x364 = 15615;
volatile int32_t t63 = 673311761;
int64_t x372 = INT64_MAX;
volatile uint64_t t66 = 883852LLU;
static volatile uint32_t x387 = UINT32_MAX;
int64_t x391 = 2535990LL;
volatile int8_t x392 = -1;
static uint32_t x395 = 1524U;
uint8_t x401 = 22U;
int64_t x402 = -1LL;
volatile uint16_t x406 = 59U;
volatile uint64_t t72 = 24709368667LLU;
uint32_t t74 = 5U;
uint64_t x426 = 692064118899290426LLU;
volatile uint64_t t75 = 95465536LLU;
volatile int16_t x436 = -1;
volatile int8_t x445 = INT8_MIN;
int32_t x452 = -1;
static int64_t x459 = -1LL;
uint32_t x460 = UINT32_MAX;
int32_t x465 = INT32_MAX;
static volatile int32_t t82 = 1924671;
static volatile uint8_t x472 = UINT8_MAX;
int32_t x473 = INT32_MAX;
int64_t x474 = -394137824388LL;
uint32_t x485 = 118248236U;
uint16_t x488 = 29U;
static uint64_t x501 = 156108LLU;
volatile uint16_t x502 = 3545U;
int16_t x503 = -969;
uint16_t x504 = UINT16_MAX;
uint32_t x512 = 3272573U;
int32_t x549 = -1;
uint64_t x550 = UINT64_MAX;
uint8_t x553 = 5U;
static uint16_t x563 = UINT16_MAX;


void f0(void) {
	volatile int16_t x1 = -1;
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = -1;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 28LL;

	t0 = (x1&((x2*x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint64_t x6 = 3478LLU;
	int16_t x7 = INT16_MIN;
	int8_t x8 = 45;
	volatile uint64_t t1 = 631673LLU;

	t1 = (x5&((x6*x7)&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x10 = 1;
	uint64_t t2 = 678508177958074189LLU;

	t2 = (x9&((x10*x11)&x12));

	if (t2 != 4046798746LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 2393LLU;
	int8_t x18 = -1;
	volatile int32_t x19 = INT32_MAX;
	int16_t x20 = -1;
	uint64_t t3 = 114951LLU;

	t3 = (x17&((x18*x19)&x20));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 683574972980LLU;
	static uint64_t x23 = 37262701362LLU;
	uint64_t x24 = 144LLU;
	uint64_t t4 = 1587800262LLU;

	t4 = (x21&((x22*x23)&x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = 10688970598938LL;
	int64_t x27 = 7132LL;
	int64_t x28 = INT64_MIN;
	int64_t t5 = 13549449LL;

	t5 = (x25&((x26*x27)&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 3;
	int16_t x30 = -1;
	int8_t x31 = INT8_MAX;

	t6 = (x29&((x30*x31)&x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 294041514U;
	uint32_t x34 = 7831U;
	static volatile uint64_t x35 = UINT64_MAX;
	static uint16_t x36 = UINT16_MAX;

	t7 = (x33&((x34*x35)&x36));

	if (t7 != 41256LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x46 = 13;
	uint64_t x48 = 99LLU;
	static volatile uint64_t t8 = 51701LLU;

	t8 = (x45&((x46*x47)&x48));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = -1;
	volatile int32_t x52 = -2704170;
	volatile int32_t t9 = -1;

	t9 = (x49&((x50*x51)&x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x54 = UINT64_MAX;
	volatile int64_t x56 = INT64_MIN;
	static volatile uint64_t t10 = 5340096639342LLU;

	t10 = (x53&((x54*x55)&x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 4068966149LLU;
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = UINT8_MAX;
	uint32_t x60 = UINT32_MAX;
	uint64_t t11 = 77988071LLU;

	t11 = (x57&((x58*x59)&x60));

	if (t11 != 4068966145LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = 471283;
	int8_t x66 = 1;
	int8_t x67 = -1;
	uint8_t x68 = 45U;
	int32_t t12 = 3676;

	t12 = (x65&((x66*x67)&x68));

	if (t12 != 33) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = 10398U;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = -1;
	int16_t x76 = 6036;

	t13 = (x73&((x74*x75)&x76));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = -1;
	static uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	static uint32_t t14 = 7U;

	t14 = (x77&((x78*x79)&x80));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 27226U;
	static uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 1434370LLU;
	int64_t x84 = -1LL;
	volatile uint64_t t15 = 479159426LLU;

	t15 = (x81&((x82*x83)&x84));

	if (t15 != 2138LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x91 = -1;
	int8_t x92 = INT8_MAX;
	static volatile int64_t t16 = 494988581428LL;

	t16 = (x89&((x90*x91)&x92));

	if (t16 != 33LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x93 = 13;
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 0U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t17 = -9LL;

	t17 = (x93&((x94*x95)&x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x97 = UINT8_MAX;
	uint64_t x99 = UINT64_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t18 = 48482783449050LLU;

	t18 = (x97&((x98*x99)&x100));

	if (t18 != 249LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x102 = 22422716U;
	uint32_t x103 = 7325635U;
	int16_t x104 = -1;
	volatile uint32_t t19 = 2U;

	t19 = (x101&((x102*x103)&x104));

	if (t19 != 3903848448U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = 0;
	uint16_t x111 = 4U;
	int64_t x112 = INT64_MIN;
	volatile int64_t t20 = -2483LL;

	t20 = (x109&((x110*x111)&x112));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x113 = 103103284312476120LLU;
	volatile int64_t x114 = -814LL;
	static int64_t x115 = -1LL;
	uint64_t t21 = 16950525800488LLU;

	t21 = (x113&((x114*x115)&x116));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = INT16_MAX;
	uint32_t x122 = UINT32_MAX;
	static int32_t x123 = 2569;
	int8_t x124 = INT8_MIN;
	uint32_t t22 = 726217U;

	t22 = (x121&((x122*x123)&x124));

	if (t22 != 30080U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x126 = -1;
	int64_t x127 = 22020013132010LL;
	uint64_t x128 = 15280536201464745LLU;

	t23 = (x125&((x126*x127)&x128));

	if (t23 != 15280536134091520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x130 = -80;
	uint64_t t24 = 1671538830LLU;

	t24 = (x129&((x130*x131)&x132));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x138 = 217U;
	volatile int32_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	static volatile int64_t t25 = 235707953377710LL;

	t25 = (x137&((x138*x139)&x140));

	if (t25 != 39LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = 23672421769LLU;
	int32_t x142 = 298;
	uint8_t x143 = UINT8_MAX;
	uint64_t x144 = 171938633183936001LLU;

	t26 = (x141&((x142*x143)&x144));

	if (t26 != 10240LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x154 = 67605011689LLU;
	static int8_t x155 = INT8_MAX;
	static volatile int32_t x156 = 8053095;

	t27 = (x153&((x154*x155)&x156));

	if (t27 != 5LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = -42;
	int8_t x158 = -1;
	uint8_t x159 = 5U;
	int8_t x160 = -1;
	volatile int32_t t28 = -1606;

	t28 = (x157&((x158*x159)&x160));

	if (t28 != -46) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x161 = INT16_MAX;
	volatile int32_t x162 = -1;
	static uint64_t x164 = 12677538760371LLU;
	static volatile uint64_t t29 = 128117442LLU;

	t29 = (x161&((x162*x163)&x164));

	if (t29 != 547LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = -73639LL;
	volatile int16_t x170 = INT16_MAX;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = -1;
	volatile int64_t t30 = -40720064797187571LL;

	t30 = (x169&((x170*x171)&x172));

	if (t30 != 4294868993LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -1;
	static int64_t x180 = INT64_MIN;

	t31 = (x177&((x178*x179)&x180));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 41U;
	int16_t x182 = 4989;
	static uint32_t t32 = 3909U;

	t32 = (x181&((x182*x183)&x184));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x185 = -1;
	int16_t x186 = INT16_MAX;
	static int64_t t33 = -32LL;

	t33 = (x185&((x186*x187)&x188));

	if (t33 != 6596LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x189 = 3412LLU;
	int8_t x190 = -3;
	static int32_t x191 = 781427;
	volatile uint32_t x192 = UINT32_MAX;
	static volatile uint64_t t34 = 898935LLU;

	t34 = (x189&((x190*x191)&x192));

	if (t34 != 2052LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x197 = 182511275U;
	uint32_t x198 = UINT32_MAX;
	static int16_t x199 = -1;
	int32_t x200 = INT32_MAX;
	uint32_t t35 = 175337273U;

	t35 = (x197&((x198*x199)&x200));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = INT64_MIN;
	int64_t x203 = -498352940597LL;
	volatile uint8_t x204 = 0U;
	volatile int64_t t36 = 3663983005LL;

	t36 = (x201&((x202*x203)&x204));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x209 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	uint32_t t37 = 504887U;

	t37 = (x209&((x210*x211)&x212));

	if (t37 != 983040U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	int8_t x215 = -7;
	int32_t x216 = INT32_MIN;
	int32_t t38 = -505615516;

	t38 = (x213&((x214*x215)&x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = INT32_MIN;
	static uint8_t x218 = 6U;
	int8_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t39 = 0;

	t39 = (x217&((x218*x219)&x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x229 = INT32_MIN;
	uint32_t x230 = UINT32_MAX;
	static int8_t x231 = INT8_MIN;
	volatile uint16_t x232 = UINT16_MAX;

	t40 = (x229&((x230*x231)&x232));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = 305;
	static int64_t x238 = -4258206261204658LL;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;
	volatile uint64_t t41 = 17525257803942447LLU;

	t41 = (x237&((x238*x239)&x240));

	if (t41 != 48LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x245 = INT64_MAX;
	uint64_t x246 = 103664525411835961LLU;
	uint32_t x247 = 28401U;

	t42 = (x245&((x246*x247)&x248));

	if (t42 != 33LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x257 = -431;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	uint64_t t43 = 106915937902513528LLU;

	t43 = (x257&((x258*x259)&x260));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x261 = -2683129289199LL;
	static uint32_t x262 = 1067490U;
	int32_t x263 = -15;

	t44 = (x261&((x262*x263)&x264));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x266 = -50;
	uint32_t x267 = 520781635U;
	static int16_t x268 = INT16_MIN;
	uint32_t t45 = 116171385U;

	t45 = (x265&((x266*x267)&x268));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = -104743LL;
	static volatile int64_t t46 = -2935LL;

	t46 = (x277&((x278*x279)&x280));

	if (t46 != 4LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x281 = INT16_MAX;
	static int8_t x282 = -1;
	uint32_t x283 = 4743791U;
	int64_t x284 = INT64_MIN;
	volatile int64_t t47 = -10073713115LL;

	t47 = (x281&((x282*x283)&x284));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x286 = -1LL;
	int8_t x287 = 6;
	int8_t x288 = INT8_MAX;
	volatile int64_t t48 = -13LL;

	t48 = (x285&((x286*x287)&x288));

	if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x289 = 4614481516LL;
	uint8_t x291 = 8U;
	volatile int64_t t49 = 2013739LL;

	t49 = (x289&((x290*x291)&x292));

	if (t49 != 40LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x293 = -1;
	uint8_t x294 = 3U;
	int8_t x295 = INT8_MIN;
	static volatile uint64_t x296 = 11344332LLU;
	volatile uint64_t t50 = 12998347281LLU;

	t50 = (x293&((x294*x295)&x296));

	if (t50 != 11344000LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x297 = 2135U;
	int64_t x298 = INT64_MAX;
	int32_t x299 = -1;
	int64_t x300 = -1LL;
	static volatile int64_t t51 = -209047222959169877LL;

	t51 = (x297&((x298*x299)&x300));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x305 = UINT8_MAX;
	static volatile uint8_t x306 = UINT8_MAX;
	static int32_t x307 = -1;
	static volatile int32_t t52 = -1;

	t52 = (x305&((x306*x307)&x308));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = -1;
	static volatile int64_t x311 = 4LL;
	volatile int64_t x312 = INT64_MAX;
	volatile int64_t t53 = 609679LL;

	t53 = (x309&((x310*x311)&x312));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x313 = 1550163U;
	int8_t x315 = -42;
	static int8_t x316 = -1;
	uint32_t t54 = 2U;

	t54 = (x313&((x314*x315)&x316));

	if (t54 != 196610U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x334 = INT16_MIN;
	uint32_t x335 = UINT32_MAX;
	volatile int32_t x336 = INT32_MIN;
	static volatile uint32_t t55 = 95U;

	t55 = (x333&((x334*x335)&x336));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x337 = 5;
	int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	static int32_t t56 = 11568;

	t56 = (x337&((x338*x339)&x340));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x341 = INT64_MAX;
	int32_t x342 = -259888;
	int64_t x343 = -1009361630LL;
	uint8_t x344 = 116U;

	t57 = (x341&((x342*x343)&x344));

	if (t57 != 32LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x345 = -1;
	volatile uint16_t x346 = 0U;
	uint16_t x348 = 31U;
	int32_t t58 = -15691;

	t58 = (x345&((x346*x347)&x348));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x349 = UINT32_MAX;
	volatile uint32_t x352 = 317U;
	volatile int64_t t59 = 12086564732LL;

	t59 = (x349&((x350*x351)&x352));

	if (t59 != 37LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = -1;
	int32_t x355 = -29;
	static volatile int32_t x356 = 126688;
	volatile uint64_t t60 = 2793170LLU;

	t60 = (x353&((x354*x355)&x356));

	if (t60 != 28384LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x357 = 0;
	int8_t x358 = 3;
	int8_t x359 = INT8_MAX;
	volatile int64_t x360 = INT64_MAX;
	int64_t t61 = 39585960503600LL;

	t61 = (x357&((x358*x359)&x360));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x363 = 7U;
	uint64_t t62 = 16804626715953932LLU;

	t62 = (x361&((x362*x363)&x364));

	if (t62 != 3099LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x365 = 3U;
	int16_t x366 = INT16_MAX;
	int8_t x367 = 1;
	volatile int8_t x368 = INT8_MAX;

	t63 = (x365&((x366*x367)&x368));

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x369 = 21U;
	int32_t x370 = 13821;
	int16_t x371 = -1;
	volatile int64_t t64 = 63473730348LL;

	t64 = (x369&((x370*x371)&x372));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x377 = INT32_MIN;
	uint32_t x378 = 21280373U;
	int32_t x379 = INT32_MIN;
	int64_t x380 = 0LL;
	int64_t t65 = -195LL;

	t65 = (x377&((x378*x379)&x380));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x381 = 8U;
	volatile int16_t x382 = INT16_MIN;
	uint16_t x383 = 2U;
	uint64_t x384 = UINT64_MAX;

	t66 = (x381&((x382*x383)&x384));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x385 = 20651024U;
	uint8_t x386 = 3U;
	static int32_t x388 = -1;
	static uint32_t t67 = 126503869U;

	t67 = (x385&((x386*x387)&x388));

	if (t67 != 20651024U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x389 = 0;
	volatile int32_t x390 = -1;
	int64_t t68 = 660LL;

	t68 = (x389&((x390*x391)&x392));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = -1;
	uint8_t x394 = 47U;
	static volatile int64_t x396 = -1LL;
	static int64_t t69 = 434164037LL;

	t69 = (x393&((x394*x395)&x396));

	if (t69 != 71628LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x397 = -1;
	uint16_t x398 = 4U;
	volatile int32_t x399 = 2905;
	static int16_t x400 = INT16_MIN;
	int32_t t70 = 747450614;

	t70 = (x397&((x398*x399)&x400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x403 = 2U;
	uint16_t x404 = 3U;
	int64_t t71 = -732071030LL;

	t71 = (x401&((x402*x403)&x404));

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x405 = INT8_MAX;
	int64_t x407 = -1LL;
	uint64_t x408 = UINT64_MAX;

	t72 = (x405&((x406*x407)&x408));

	if (t72 != 69LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x417 = -1;
	static volatile uint64_t x418 = 3396414347040LLU;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = INT32_MIN;
	uint64_t t73 = 506308195703233LLU;

	t73 = (x417&((x418*x419)&x420));

	if (t73 != 866084450205696LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x421 = 31U;
	volatile int16_t x422 = -1;
	static int32_t x423 = INT32_MAX;
	uint16_t x424 = 99U;

	t74 = (x421&((x422*x423)&x424));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x425 = -140;
	uint16_t x427 = 19688U;
	int32_t x428 = -1;

	t75 = (x425&((x426*x427)&x428));

	if (t75 != 11661246491580814352LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x429 = -1;
	static volatile uint16_t x430 = 120U;
	int8_t x431 = 21;
	volatile uint16_t x432 = 1755U;
	static int32_t t76 = -1;

	t76 = (x429&((x430*x431)&x432));

	if (t76 != 216) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x433 = 14U;
	uint64_t x434 = 1802LLU;
	int8_t x435 = INT8_MAX;
	uint64_t t77 = 4375386753249330034LLU;

	t77 = (x433&((x434*x435)&x436));

	if (t77 != 6LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x441 = -793902370;
	uint8_t x442 = 3U;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = 91878879U;
	uint32_t t78 = 3U;

	t78 = (x441&((x442*x443)&x444));

	if (t78 != 2621440U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x446 = 31U;
	int16_t x447 = INT16_MAX;
	uint16_t x448 = 1U;
	static int32_t t79 = 1617667;

	t79 = (x445&((x446*x447)&x448));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x449 = 5019449U;
	static int8_t x450 = -1;
	uint16_t x451 = 100U;
	volatile uint32_t t80 = 827766723U;

	t80 = (x449&((x450*x451)&x452));

	if (t80 != 5019416U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = -1;
	int32_t x458 = -2;
	int64_t t81 = -13694045544329306LL;

	t81 = (x457&((x458*x459)&x460));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x466 = -2;
	int8_t x467 = 0;
	int32_t x468 = -200137;

	t82 = (x465&((x466*x467)&x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x469 = UINT8_MAX;
	int64_t x470 = -1LL;
	uint64_t x471 = UINT64_MAX;
	uint64_t t83 = 343318LLU;

	t83 = (x469&((x470*x471)&x472));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x475 = 1571073402797LLU;
	static int8_t x476 = -1;
	volatile uint64_t t84 = 13747610150463766LLU;

	t84 = (x473&((x474*x475)&x476));

	if (t84 != 35983052LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x477 = -1;
	static int64_t x478 = INT64_MIN;
	uint64_t x479 = 261034LLU;
	int8_t x480 = 0;
	volatile uint64_t t85 = 161390225408LLU;

	t85 = (x477&((x478*x479)&x480));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x486 = -143LL;
	static int32_t x487 = -1;
	int64_t t86 = 786279305804977LL;

	t86 = (x485&((x486*x487)&x488));

	if (t86 != 12LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x493 = UINT32_MAX;
	int8_t x494 = INT8_MIN;
	volatile int8_t x495 = -1;
	int32_t x496 = INT32_MAX;
	volatile uint32_t t87 = 12U;

	t87 = (x493&((x494*x495)&x496));

	if (t87 != 128U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t t88 = 11817LLU;

	t88 = (x501&((x502*x503)&x504));

	if (t88 != 396LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x509 = UINT16_MAX;
	int16_t x510 = -1;
	int8_t x511 = -28;
	uint32_t t89 = 1101314699U;

	t89 = (x509&((x510*x511)&x512));

	if (t89 != 28U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x513 = INT64_MAX;
	static volatile int8_t x514 = 15;
	static int8_t x515 = -51;
	int8_t x516 = -1;
	volatile int64_t t90 = 50905983LL;

	t90 = (x513&((x514*x515)&x516));

	if (t90 != 9223372036854775043LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x521 = INT32_MIN;
	int8_t x522 = INT8_MIN;
	static int32_t x523 = -1085;
	uint64_t x524 = 1749394149083266140LLU;
	volatile uint64_t t91 = 1844875250250526410LLU;

	t91 = (x521&((x522*x523)&x524));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x525 = INT16_MAX;
	int8_t x526 = INT8_MIN;
	int8_t x527 = -6;
	uint8_t x528 = 5U;
	static int32_t t92 = 262955;

	t92 = (x525&((x526*x527)&x528));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x529 = UINT16_MAX;
	int8_t x530 = -1;
	static int8_t x531 = 0;
	int64_t x532 = INT64_MIN;
	static int64_t t93 = -76136452203585473LL;

	t93 = (x529&((x530*x531)&x532));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x537 = -1;
	uint16_t x538 = 500U;
	uint16_t x539 = 2U;
	uint64_t x540 = 541813154336444LLU;
	uint64_t t94 = 833817107467937371LLU;

	t94 = (x537&((x538*x539)&x540));

	if (t94 != 680LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x541 = INT64_MIN;
	uint16_t x542 = UINT16_MAX;
	int32_t x543 = 0;
	volatile int8_t x544 = INT8_MAX;
	static int64_t t95 = 33295LL;

	t95 = (x541&((x542*x543)&x544));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x545 = INT32_MIN;
	volatile int8_t x546 = INT8_MAX;
	static int32_t x547 = -39;
	int8_t x548 = INT8_MIN;
	int32_t t96 = INT32_MIN;

	t96 = (x545&((x546*x547)&x548));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x551 = 677444U;
	volatile uint16_t x552 = 12U;
	static uint64_t t97 = 14LLU;

	t97 = (x549&((x550*x551)&x552));

	if (t97 != 12LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x554 = 909607640;
	volatile int8_t x555 = -1;
	uint32_t x556 = 141194912U;
	uint32_t t98 = 1424U;

	t98 = (x553&((x554*x555)&x556));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x561 = INT32_MIN;
	volatile uint8_t x562 = 30U;
	int16_t x564 = -1;
	int32_t t99 = -4756;

	t99 = (x561&((x562*x563)&x564));

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

