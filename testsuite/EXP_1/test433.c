#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -48;
uint8_t x6 = 31U;
uint8_t x7 = UINT8_MAX;
static volatile uint64_t x13 = UINT64_MAX;
int64_t x14 = -1LL;
volatile int16_t x15 = -1;
static uint64_t x39 = 16610065LLU;
uint16_t x43 = UINT16_MAX;
volatile int32_t x48 = INT32_MAX;
uint8_t x72 = UINT8_MAX;
uint16_t x76 = 1U;
uint16_t x87 = 11480U;
uint16_t x91 = 1326U;
volatile int32_t x92 = INT32_MIN;
static int32_t x95 = INT32_MIN;
volatile int32_t t16 = -1333067;
int8_t x98 = 1;
static uint8_t x100 = UINT8_MAX;
volatile int32_t x101 = 14;
uint8_t x102 = UINT8_MAX;
int8_t x103 = 15;
uint16_t x104 = UINT16_MAX;
uint64_t x110 = 9945091475223317LLU;
int16_t x121 = INT16_MAX;
static volatile uint8_t x122 = UINT8_MAX;
int64_t x124 = -4977730385LL;
static int32_t t23 = 211;
volatile int16_t x146 = INT16_MIN;
int32_t t26 = -48877103;
uint16_t x158 = 2U;
uint16_t x159 = 1330U;
volatile int16_t x165 = INT16_MIN;
static uint8_t x173 = UINT8_MAX;
int64_t t32 = 121142010087943LL;
int8_t x180 = -1;
static int32_t t35 = 11226358;
uint32_t t36 = 45527U;
int32_t x211 = INT32_MAX;
static int16_t x212 = -2;
int32_t t37 = 14927;
int64_t x222 = -127947336916749853LL;
static uint8_t x223 = UINT8_MAX;
volatile int64_t t38 = -5211846LL;
int32_t x235 = -915398;
int32_t t40 = -11604857;
int64_t x241 = 91622LL;
int16_t x243 = -1;
volatile int32_t t42 = -70508984;
int32_t x257 = -270675;
static volatile int32_t t47 = -24489576;
int8_t x282 = INT8_MIN;
int8_t x284 = INT8_MIN;
uint32_t x297 = 276U;
static uint64_t t51 = 999165974LLU;
static uint8_t x314 = 3U;
int8_t x317 = -1;
volatile uint64_t x341 = UINT64_MAX;
uint64_t t58 = 2692701596LLU;
int16_t x352 = -1;
volatile int32_t x362 = -11165992;
volatile uint8_t x368 = 3U;
volatile int16_t x383 = INT16_MIN;
int16_t x388 = -1;
uint64_t x391 = 0LLU;
volatile int32_t t66 = 129816;
int32_t t68 = 116878;
int8_t x420 = INT8_MIN;
static volatile int64_t x423 = INT64_MAX;
uint32_t x430 = 214218U;
uint8_t x437 = 67U;
volatile int32_t x441 = -1;
static int16_t x446 = 0;
volatile int32_t x448 = -1153217;
int32_t t76 = 340891;
int32_t x457 = 372790950;
int64_t x460 = INT64_MAX;
int8_t x465 = -1;
static int32_t x467 = INT32_MAX;
volatile int8_t x471 = INT8_MIN;
static int32_t t80 = 201679;
static uint16_t x476 = 3337U;
int32_t x483 = -3581895;
int16_t x491 = INT16_MIN;
static int64_t x492 = INT64_MAX;
static int64_t x496 = -1LL;
int32_t x499 = -28755388;
int32_t t86 = 79681262;
uint64_t x509 = 675573246LLU;
int32_t x512 = INT32_MAX;
uint16_t x521 = 1U;
int32_t x522 = INT32_MIN;
volatile int32_t t88 = -426;
int32_t t89 = 10;
int16_t x550 = INT16_MIN;
static int16_t x554 = -1;
static uint64_t x558 = UINT64_MAX;
uint64_t x560 = 5742120141626224LLU;
volatile int32_t t96 = -43;
int64_t x568 = INT64_MIN;
int16_t x569 = INT16_MAX;
int32_t x570 = -1;
int32_t x575 = INT32_MIN;


void f0(void) {
	volatile uint8_t x1 = 0U;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 7371741237785290069LLU;

	t0 = (((x1*x2)==x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -17612LL;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 828295546;

	t1 = (((x5*x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x16 = INT32_MIN;
	static int32_t t2 = -505941271;

	t2 = (((x13*x14)==x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 0;
	int8_t x22 = -22;
	int32_t x23 = -5;
	int32_t x24 = INT32_MIN;
	volatile int32_t t3 = 67020;

	t3 = (((x21*x22)==x23)/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x29 = 28970LLU;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = INT64_MAX;
	static volatile uint16_t x32 = UINT16_MAX;
	int32_t t4 = -1288;

	t4 = (((x29*x30)==x31)/x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = 1713006883LL;
	static int64_t x38 = -1LL;
	int32_t x40 = INT32_MAX;
	int32_t t5 = -30259886;

	t5 = (((x37*x38)==x39)/x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x42 = 2844;
	int8_t x44 = INT8_MIN;
	static int32_t t6 = -289889;

	t6 = (((x41*x42)==x43)/x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = -8358085;
	volatile int32_t t7 = -1;

	t7 = (((x45*x46)==x47)/x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = -67149758948329LL;
	uint64_t x50 = 89LLU;
	int64_t x51 = -3424039548201LL;
	int64_t x52 = INT64_MAX;
	volatile int64_t t8 = -584242LL;

	t8 = (((x49*x50)==x51)/x52);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x61 = -1;
	uint8_t x62 = 115U;
	volatile uint8_t x63 = 111U;
	int64_t x64 = INT64_MAX;
	int64_t t9 = 514931LL;

	t9 = (((x61*x62)==x63)/x64);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x65 = 38U;
	uint8_t x66 = 125U;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t10 = -201520;

	t10 = (((x65*x66)==x67)/x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	static int16_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	int32_t t11 = -52634;

	t11 = (((x69*x70)==x71)/x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 14U;
	uint8_t x74 = 61U;
	volatile int64_t x75 = INT64_MAX;
	static volatile int32_t t12 = 56;

	t12 = (((x73*x74)==x75)/x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 55623U;
	volatile uint32_t x82 = 494467U;
	uint16_t x83 = 341U;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t13 = 18863212;

	t13 = (((x81*x82)==x83)/x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = -13;
	static int8_t x86 = INT8_MAX;
	uint16_t x88 = 3U;
	volatile int32_t t14 = 15;

	t14 = (((x85*x86)==x87)/x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = -1LL;
	int64_t x90 = 53648499704LL;
	volatile int32_t t15 = -55194;

	t15 = (((x89*x90)==x91)/x92);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -1;
	volatile int16_t x94 = 198;
	int8_t x96 = 20;

	t16 = (((x93*x94)==x95)/x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MIN;
	int8_t x99 = INT8_MAX;
	int32_t t17 = 121757482;

	t17 = (((x97*x98)==x99)/x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t t18 = 14;

	t18 = (((x101*x102)==x103)/x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = 417972960;
	static uint32_t x106 = UINT32_MAX;
	volatile uint16_t x107 = 7241U;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t19 = 24506649;

	t19 = (((x105*x106)==x107)/x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	uint8_t x111 = 3U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t20 = 44541610;

	t20 = (((x109*x110)==x111)/x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MIN;
	static uint8_t x114 = 2U;
	int32_t x115 = INT32_MIN;
	int16_t x116 = -1;
	volatile int32_t t21 = 53362863;

	t21 = (((x113*x114)==x115)/x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x123 = INT16_MIN;
	volatile int64_t t22 = -234442084075LL;

	t22 = (((x121*x122)==x123)/x124);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = 26LL;
	uint32_t x126 = UINT32_MAX;
	static int32_t x127 = -1;
	int16_t x128 = -975;

	t23 = (((x125*x126)==x127)/x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = -4169569722835LL;
	static uint8_t x138 = UINT8_MAX;
	uint16_t x139 = 392U;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t24 = 109LLU;

	t24 = (((x137*x138)==x139)/x140);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int8_t x142 = -1;
	int64_t x143 = -4038972935948325LL;
	volatile int64_t x144 = INT64_MIN;
	static volatile int64_t t25 = 1184553331LL;

	t25 = (((x141*x142)==x143)/x144);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x147 = INT32_MAX;
	volatile uint16_t x148 = UINT16_MAX;

	t26 = (((x145*x146)==x147)/x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = 4164021;
	int8_t x151 = -1;
	int32_t x152 = INT32_MAX;
	static volatile int32_t t27 = -11913;

	t27 = (((x149*x150)==x151)/x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = -16;
	int8_t x154 = INT8_MAX;
	static int32_t x155 = INT32_MAX;
	uint32_t x156 = 29534U;
	volatile uint32_t t28 = 2065U;

	t28 = (((x153*x154)==x155)/x156);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t29 = 4;

	t29 = (((x157*x158)==x159)/x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x166 = 2724U;
	int64_t x167 = INT64_MIN;
	static uint32_t x168 = 12550U;
	static volatile uint32_t t30 = 1921687U;

	t30 = (((x165*x166)==x167)/x168);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = -85190979LL;
	uint8_t x170 = 3U;
	volatile uint32_t x171 = UINT32_MAX;
	int16_t x172 = 3529;
	static volatile int32_t t31 = -108284476;

	t31 = (((x169*x170)==x171)/x172);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x174 = UINT16_MAX;
	static int16_t x175 = 605;
	static int64_t x176 = INT64_MAX;

	t32 = (((x173*x174)==x175)/x176);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x177 = 454842114324562157LLU;
	uint8_t x178 = 18U;
	static uint16_t x179 = 399U;
	volatile int32_t t33 = 14044;

	t33 = (((x177*x178)==x179)/x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 31817U;
	int64_t x183 = INT64_MAX;
	int64_t x184 = -8535245LL;
	int64_t t34 = 1349LL;

	t34 = (((x181*x182)==x183)/x184);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x197 = INT8_MAX;
	int16_t x198 = 3286;
	int64_t x199 = INT64_MAX;
	int16_t x200 = 302;

	t35 = (((x197*x198)==x199)/x200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x201 = 31U;
	int64_t x202 = 63670895234762LL;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;

	t36 = (((x201*x202)==x203)/x204);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 1U;

	t37 = (((x209*x210)==x211)/x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = -3LL;
	int64_t x224 = INT64_MAX;

	t38 = (((x221*x222)==x223)/x224);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x225 = 21;
	int16_t x226 = INT16_MAX;
	int64_t x227 = INT64_MIN;
	static uint16_t x228 = 8U;
	static int32_t t39 = 7550;

	t39 = (((x225*x226)==x227)/x228);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x233 = INT8_MIN;
	uint16_t x234 = 39U;
	int8_t x236 = INT8_MAX;

	t40 = (((x233*x234)==x235)/x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x237 = INT8_MIN;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = -304;
	uint8_t x240 = 113U;
	int32_t t41 = 607092753;

	t41 = (((x237*x238)==x239)/x240);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x242 = INT16_MIN;
	int16_t x244 = INT16_MAX;

	t42 = (((x241*x242)==x243)/x244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = -712;
	static int8_t x246 = 0;
	volatile int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;
	static int32_t t43 = 6030656;

	t43 = (((x245*x246)==x247)/x248);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x253 = -53;
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MIN;
	int8_t x256 = 1;
	int32_t t44 = -810;

	t44 = (((x253*x254)==x255)/x256);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x258 = -1;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t x260 = INT32_MIN;
	static volatile int32_t t45 = -94861;

	t45 = (((x257*x258)==x259)/x260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x273 = 2;
	static int16_t x274 = 38;
	int8_t x275 = -1;
	int32_t x276 = INT32_MAX;
	volatile int32_t t46 = -47286486;

	t46 = (((x273*x274)==x275)/x276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x277 = 6U;
	static int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	static int32_t x280 = 4955006;

	t47 = (((x277*x278)==x279)/x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x281 = -1;
	int32_t x283 = INT32_MIN;
	static volatile int32_t t48 = 1300;

	t48 = (((x281*x282)==x283)/x284);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x293 = INT32_MAX;
	int16_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = 34LLU;
	volatile uint64_t t49 = 9969189LLU;

	t49 = (((x293*x294)==x295)/x296);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x298 = 29;
	int8_t x299 = 19;
	uint8_t x300 = 11U;
	int32_t t50 = 7430;

	t50 = (((x297*x298)==x299)/x300);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x305 = INT32_MIN;
	int8_t x306 = 1;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = 24LLU;

	t51 = (((x305*x306)==x307)/x308);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = INT8_MIN;
	static int64_t x310 = -1LL;
	int16_t x311 = -130;
	int16_t x312 = INT16_MAX;
	volatile int32_t t52 = -18;

	t52 = (((x309*x310)==x311)/x312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x313 = INT8_MIN;
	int64_t x315 = INT64_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t53 = -45063035903000LL;

	t53 = (((x313*x314)==x315)/x316);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x318 = INT32_MAX;
	volatile uint32_t x319 = 216430U;
	uint64_t x320 = 7091LLU;
	uint64_t t54 = 20920947691408LLU;

	t54 = (((x317*x318)==x319)/x320);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = 0LLU;
	uint32_t x323 = 148U;
	volatile int32_t x324 = INT32_MIN;
	int32_t t55 = -4;

	t55 = (((x321*x322)==x323)/x324);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x337 = INT8_MIN;
	int64_t x338 = -1LL;
	uint8_t x339 = 0U;
	uint32_t x340 = 12947219U;
	uint32_t t56 = 27856780U;

	t56 = (((x337*x338)==x339)/x340);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x342 = 169341442590LLU;
	volatile int8_t x343 = INT8_MAX;
	uint32_t x344 = 674935730U;
	uint32_t t57 = 31377U;

	t57 = (((x341*x342)==x343)/x344);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x345 = INT16_MAX;
	int16_t x346 = 71;
	volatile int32_t x347 = INT32_MIN;
	volatile uint64_t x348 = 6932980LLU;

	t58 = (((x345*x346)==x347)/x348);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x349 = 2;
	static int8_t x350 = INT8_MAX;
	uint64_t x351 = 267321113506465559LLU;
	static int32_t t59 = 7568;

	t59 = (((x349*x350)==x351)/x352);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x353 = INT16_MIN;
	int8_t x354 = 0;
	int8_t x355 = 0;
	uint8_t x356 = 1U;
	volatile int32_t t60 = -1;

	t60 = (((x353*x354)==x355)/x356);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x361 = UINT32_MAX;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t61 = 53LL;

	t61 = (((x361*x362)==x363)/x364);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x365 = -94127776934LL;
	int32_t x366 = -1;
	int8_t x367 = INT8_MIN;
	int32_t t62 = 7;

	t62 = (((x365*x366)==x367)/x368);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	static uint32_t x372 = 90711U;
	volatile uint32_t t63 = 5U;

	t63 = (((x369*x370)==x371)/x372);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x381 = -1;
	volatile int8_t x382 = 27;
	int32_t x384 = -15381493;
	volatile int32_t t64 = 3;

	t64 = (((x381*x382)==x383)/x384);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x385 = 6178U;
	uint16_t x386 = 104U;
	volatile int32_t x387 = 3435;
	volatile int32_t t65 = 70;

	t65 = (((x385*x386)==x387)/x388);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x389 = 55260610LL;
	volatile uint16_t x390 = 180U;
	uint16_t x392 = 8U;

	t66 = (((x389*x390)==x391)/x392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x401 = 41LLU;
	uint16_t x402 = 0U;
	int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MIN;
	volatile int64_t t67 = 5544494915LL;

	t67 = (((x401*x402)==x403)/x404);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x413 = INT8_MIN;
	static uint32_t x414 = 86491U;
	uint64_t x415 = 202959415LLU;
	uint8_t x416 = UINT8_MAX;

	t68 = (((x413*x414)==x415)/x416);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	uint64_t x419 = 1139529LLU;
	volatile int32_t t69 = 0;

	t69 = (((x417*x418)==x419)/x420);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MIN;
	static int32_t x424 = INT32_MAX;
	volatile int32_t t70 = -1198412;

	t70 = (((x421*x422)==x423)/x424);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x425 = 1635LLU;
	int16_t x426 = INT16_MIN;
	uint8_t x427 = 94U;
	static volatile uint8_t x428 = 1U;
	static int32_t t71 = -216290083;

	t71 = (((x425*x426)==x427)/x428);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x429 = INT32_MIN;
	int64_t x431 = -26780050960901171LL;
	static uint32_t x432 = UINT32_MAX;
	uint32_t t72 = 532995747U;

	t72 = (((x429*x430)==x431)/x432);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x433 = 0U;
	uint64_t x434 = 2LLU;
	int8_t x435 = INT8_MAX;
	volatile int64_t x436 = -3472644612519628150LL;
	int64_t t73 = 724313700119LL;

	t73 = (((x433*x434)==x435)/x436);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x438 = -1;
	int16_t x439 = -3394;
	uint64_t x440 = 2173215738951203LLU;
	volatile uint64_t t74 = 539428035956LLU;

	t74 = (((x437*x438)==x439)/x440);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x442 = -20896544879001LL;
	static uint32_t x443 = 2329470U;
	static int8_t x444 = INT8_MAX;
	volatile int32_t t75 = 2;

	t75 = (((x441*x442)==x443)/x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x445 = 7U;
	volatile int16_t x447 = INT16_MIN;

	t76 = (((x445*x446)==x447)/x448);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x453 = INT8_MIN;
	static int64_t x454 = -1026302315969LL;
	int16_t x455 = 46;
	int16_t x456 = 2;
	volatile int32_t t77 = 210147;

	t77 = (((x453*x454)==x455)/x456);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x458 = -1LL;
	int8_t x459 = -1;
	volatile int64_t t78 = -1362LL;

	t78 = (((x457*x458)==x459)/x460);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x466 = 45U;
	uint16_t x468 = 15517U;
	int32_t t79 = -18;

	t79 = (((x465*x466)==x467)/x468);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x469 = 15U;
	int16_t x470 = -1;
	volatile int8_t x472 = INT8_MIN;

	t80 = (((x469*x470)==x471)/x472);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x473 = INT8_MAX;
	volatile int32_t x474 = -1;
	int64_t x475 = -1LL;
	static int32_t t81 = -26028164;

	t81 = (((x473*x474)==x475)/x476);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x481 = 492U;
	int64_t x482 = -120LL;
	uint16_t x484 = 7387U;
	static int32_t t82 = -422;

	t82 = (((x481*x482)==x483)/x484);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x485 = UINT16_MAX;
	uint16_t x486 = 305U;
	int8_t x487 = INT8_MIN;
	int64_t x488 = -1LL;
	volatile int64_t t83 = -88244066448865LL;

	t83 = (((x485*x486)==x487)/x488);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x489 = 350U;
	uint32_t x490 = UINT32_MAX;
	volatile int64_t t84 = -678934972645783677LL;

	t84 = (((x489*x490)==x491)/x492);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x493 = 15715;
	static int64_t x494 = -1096959568LL;
	int64_t x495 = INT64_MIN;
	volatile int64_t t85 = -20248664923766LL;

	t85 = (((x493*x494)==x495)/x496);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x497 = 3;
	static int8_t x498 = INT8_MIN;
	int32_t x500 = INT32_MIN;

	t86 = (((x497*x498)==x499)/x500);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x510 = -1LL;
	volatile int16_t x511 = -1;
	int32_t t87 = 27103197;

	t87 = (((x509*x510)==x511)/x512);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x523 = -1;
	int8_t x524 = INT8_MAX;

	t88 = (((x521*x522)==x523)/x524);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x525 = UINT16_MAX;
	static int16_t x526 = -1;
	uint8_t x527 = 0U;
	int8_t x528 = INT8_MIN;

	t89 = (((x525*x526)==x527)/x528);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x529 = 84872816934579131LLU;
	static uint64_t x530 = 124353755135571379LLU;
	int16_t x531 = -1;
	uint32_t x532 = UINT32_MAX;
	uint32_t t90 = 843802U;

	t90 = (((x529*x530)==x531)/x532);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x541 = INT8_MIN;
	int32_t x542 = 1;
	int8_t x543 = -1;
	int64_t x544 = INT64_MIN;
	volatile int64_t t91 = -1418014798504805LL;

	t91 = (((x541*x542)==x543)/x544);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x545 = UINT16_MAX;
	static uint8_t x546 = 12U;
	static volatile int64_t x547 = -909LL;
	int8_t x548 = -1;
	int32_t t92 = -3496647;

	t92 = (((x545*x546)==x547)/x548);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x549 = 5U;
	int32_t x551 = 659182761;
	int16_t x552 = 11;
	static volatile int32_t t93 = 7724;

	t93 = (((x549*x550)==x551)/x552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x553 = 2LL;
	static int16_t x555 = 0;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t94 = 5172;

	t94 = (((x553*x554)==x555)/x556);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x557 = 5820663485LLU;
	int64_t x559 = INT64_MIN;
	volatile uint64_t t95 = 337060514948354831LLU;

	t95 = (((x557*x558)==x559)/x560);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x561 = INT16_MIN;
	uint32_t x562 = 145601005U;
	int64_t x563 = INT64_MIN;
	static int16_t x564 = INT16_MAX;

	t96 = (((x561*x562)==x563)/x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x565 = UINT32_MAX;
	volatile int16_t x566 = INT16_MIN;
	static uint32_t x567 = UINT32_MAX;
	volatile int64_t t97 = 1209837LL;

	t97 = (((x565*x566)==x567)/x568);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x571 = INT16_MIN;
	volatile uint64_t x572 = 347646LLU;
	static volatile uint64_t t98 = 266LLU;

	t98 = (((x569*x570)==x571)/x572);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x573 = 7;
	volatile int32_t x574 = -11884228;
	static int32_t x576 = INT32_MIN;
	static volatile int32_t t99 = -1036710;

	t99 = (((x573*x574)==x575)/x576);

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

