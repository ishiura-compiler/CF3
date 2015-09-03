#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x14 = INT64_MIN;
static int16_t x26 = INT16_MIN;
int32_t t4 = 19174050;
int64_t x37 = -716737LL;
int32_t x38 = -3850;
volatile int16_t x39 = 3;
int32_t x64 = INT32_MIN;
int64_t x66 = 2051961258LL;
int32_t x77 = 229909;
volatile uint64_t x104 = UINT64_MAX;
static int16_t x119 = INT16_MIN;
int64_t x126 = -1LL;
int64_t t19 = 5804992409LL;
int8_t x134 = INT8_MIN;
int32_t t21 = 204280321;
static int32_t x140 = -436141;
int64_t x159 = INT64_MAX;
volatile uint16_t x168 = 18U;
static volatile uint32_t t26 = 1801616U;
uint64_t x169 = 8357723018745891LLU;
static uint64_t x170 = 116LLU;
int16_t x172 = INT16_MIN;
volatile uint8_t x208 = UINT8_MAX;
static int16_t x215 = 6;
volatile int32_t x218 = 14601;
volatile int8_t x219 = -1;
uint16_t x220 = UINT16_MAX;
int8_t x233 = 1;
volatile int8_t x235 = -1;
int32_t x237 = -1;
volatile int64_t x240 = 11843626116LL;
uint16_t x245 = UINT16_MAX;
int32_t x249 = -585396;
volatile int32_t t38 = -98879;
uint64_t x276 = UINT64_MAX;
volatile uint32_t t41 = 3U;
volatile int16_t x283 = -789;
volatile int32_t t43 = -524436183;
volatile int32_t x293 = -1;
int32_t x294 = INT32_MAX;
uint16_t x299 = UINT16_MAX;
uint64_t t45 = 6813103892138055LLU;
volatile int64_t x305 = 1LL;
int64_t x307 = -1LL;
int8_t x318 = INT8_MAX;
static uint8_t x320 = 3U;
int32_t x326 = INT32_MAX;
int64_t t50 = -8652130601730447LL;
int64_t x335 = INT64_MIN;
int8_t x340 = INT8_MAX;
uint16_t x344 = 0U;
static int16_t x348 = 13;
int8_t x372 = INT8_MIN;
int16_t x382 = INT16_MIN;
int64_t x386 = -1LL;
volatile uint64_t x387 = 51267284499LLU;
static volatile uint64_t t58 = 4LLU;
int16_t x395 = INT16_MAX;
static volatile uint64_t t61 = 863233605LLU;
int8_t x409 = -1;
static int32_t x410 = 17274558;
static int16_t x411 = -12850;
uint16_t x412 = 86U;
int32_t x436 = INT32_MAX;
uint16_t x439 = UINT16_MAX;
static volatile uint16_t x453 = UINT16_MAX;
int16_t x456 = INT16_MAX;
static volatile int64_t x466 = -1LL;
int16_t x468 = -1;
int32_t x472 = 816;
uint8_t x477 = 4U;
volatile uint16_t x488 = 14734U;
volatile uint64_t t73 = 692613658687LLU;
int64_t x489 = INT64_MIN;
uint64_t x493 = 423091538623487LLU;
static int16_t x499 = INT16_MIN;
volatile int64_t x502 = -389964LL;
int32_t x509 = INT32_MIN;
int64_t x527 = 381733091796427LL;
static int8_t x534 = INT8_MAX;
static volatile int64_t x536 = INT64_MIN;
int64_t x541 = -1LL;
static int16_t x543 = -4;
int8_t x551 = INT8_MAX;
int8_t x558 = 45;
int64_t x566 = INT64_MAX;
uint16_t x567 = 3740U;
static uint64_t x569 = 8010383273181043LLU;
uint64_t t90 = 5282815LLU;
int16_t x603 = 5;
uint32_t t96 = 1555U;
volatile int32_t x605 = -638819400;
int64_t x609 = INT64_MAX;
int64_t x619 = -24983582LL;


void f0(void) {
	int64_t x5 = -1LL;
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 1U;
	int64_t t0 = 2380187409LL;

	t0 = ((x5/x6)|(x7*x8));

	if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 3786697U;
	int16_t x10 = INT16_MIN;
	static uint8_t x11 = 1U;
	static int16_t x12 = -52;
	volatile uint32_t t1 = 246U;

	t1 = ((x9/x10)|(x11*x12));

	if (t1 != 4294967244U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 16583693;
	int16_t x15 = 2820;
	volatile uint16_t x16 = UINT16_MAX;
	int64_t t2 = 7500LL;

	t2 = ((x13/x14)|(x15*x16));

	if (t2 != 184808700LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 58915LL;
	uint8_t x22 = 3U;
	int16_t x23 = -1;
	static int64_t x24 = -1LL;
	int64_t t3 = 6544404533342LL;

	t3 = ((x21/x22)|(x23*x24));

	if (t3 != 19639LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MAX;
	uint16_t x27 = 192U;
	uint8_t x28 = 0U;

	t4 = ((x25/x26)|(x27*x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = 22U;
	int64_t x30 = INT64_MIN;
	static uint8_t x31 = 40U;
	static int16_t x32 = INT16_MIN;
	volatile int64_t t5 = -3898014930000463LL;

	t5 = ((x29/x30)|(x31*x32));

	if (t5 != -1310720LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x40 = INT8_MAX;
	static int64_t t6 = -100336LL;

	t6 = ((x37/x38)|(x39*x40));

	if (t6 != 511LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 0;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 41U;
	int32_t t7 = 321982690;

	t7 = ((x41/x42)|(x43*x44));

	if (t7 != -1343488) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 6797523LL;
	volatile uint64_t x46 = 77932462777LLU;
	int16_t x47 = INT16_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t8 = 390435LLU;

	t8 = ((x45/x46)|(x47*x48));

	if (t8 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int16_t x58 = -1;
	volatile int16_t x59 = INT16_MIN;
	int64_t x60 = -1033LL;
	static volatile int64_t t9 = -1LL;

	t9 = ((x57/x58)|(x59*x60));

	if (t9 != -32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = UINT8_MAX;
	static int32_t x62 = 3984811;
	int64_t x63 = -1LL;
	volatile int64_t t10 = -9467592349LL;

	t10 = ((x61/x62)|(x63*x64));

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MAX;
	int8_t x67 = INT8_MAX;
	static uint32_t x68 = 304956U;
	volatile int64_t t11 = 47107287LL;

	t11 = ((x65/x66)|(x67*x68));

	if (t11 != 38729412LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x78 = -1LL;
	int32_t x79 = -1;
	uint16_t x80 = 10420U;
	int64_t t12 = -162143992684LL;

	t12 = ((x77/x78)|(x79*x80));

	if (t12 != -17LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x85 = INT32_MAX;
	static volatile int8_t x86 = -1;
	int8_t x87 = -1;
	int8_t x88 = INT8_MAX;
	int32_t t13 = -408;

	t13 = ((x85/x86)|(x87*x88));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = -1;
	int64_t x90 = -1LL;
	volatile int16_t x91 = INT16_MAX;
	int64_t x92 = -1LL;
	volatile int64_t t14 = -23736LL;

	t14 = ((x89/x90)|(x91*x92));

	if (t14 != -32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = -1;
	static int64_t x94 = 1586065981893852022LL;
	uint16_t x95 = 14U;
	static int32_t x96 = -1;
	volatile int64_t t15 = -1433922870132958757LL;

	t15 = ((x93/x94)|(x95*x96));

	if (t15 != -14LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	uint64_t t16 = 11013782683352623LLU;

	t16 = ((x101/x102)|(x103*x104));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x113 = 69U;
	int8_t x114 = -1;
	uint8_t x115 = 0U;
	int16_t x116 = -1;
	volatile uint32_t t17 = 28961798U;

	t17 = ((x113/x114)|(x115*x116));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = -231333983;
	static uint16_t x120 = UINT16_MAX;
	int32_t t18 = -90;

	t18 = ((x117/x118)|(x119*x120));

	if (t18 != -2147450880) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x125 = INT16_MAX;
	int16_t x127 = 833;
	int64_t x128 = 146551661LL;

	t19 = ((x125/x126)|(x127*x128));

	if (t19 != -10835LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x129 = 357U;
	volatile int64_t x130 = -1LL;
	uint8_t x131 = 1U;
	static int32_t x132 = INT32_MIN;
	static volatile int64_t t20 = -4531309120LL;

	t20 = ((x129/x130)|(x131*x132));

	if (t20 != -357LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x133 = -1;
	static volatile int32_t x135 = -1959;
	uint8_t x136 = 29U;

	t21 = ((x133/x134)|(x135*x136));

	if (t21 != -56811) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = 101496165LL;
	volatile uint64_t x139 = UINT64_MAX;
	uint64_t t22 = 5606140LLU;

	t22 = ((x137/x138)|(x139*x140));

	if (t22 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x145 = 169893991712LL;
	uint64_t x146 = UINT64_MAX;
	static uint16_t x147 = UINT16_MAX;
	volatile int8_t x148 = INT8_MIN;
	uint64_t t23 = 370LLU;

	t23 = ((x145/x146)|(x147*x148));

	if (t23 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x157 = UINT64_MAX;
	uint32_t x158 = 93498108U;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t24 = 17264166568122725LLU;

	t24 = ((x157/x158)|(x159*x160));

	if (t24 != 9223372234150148605LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = 1U;
	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MAX;
	static volatile int32_t t25 = -132;

	t25 = ((x161/x162)|(x163*x164));

	if (t25 != -4161536) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MAX;
	static uint32_t x167 = 261931U;

	t26 = ((x165/x166)|(x167*x168));

	if (t26 != 4714758U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x171 = UINT32_MAX;
	uint64_t t27 = 15070LLU;

	t27 = ((x169/x170)|(x171*x172));

	if (t27 != 72049336368499LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MIN;
	static uint32_t x179 = 63U;
	int64_t x180 = -1LL;
	volatile int64_t t28 = -212861LL;

	t28 = ((x177/x178)|(x179*x180));

	if (t28 != -63LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x197 = 478009;
	int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	int32_t x200 = -1;
	volatile int64_t t29 = -810982LL;

	t29 = ((x197/x198)|(x199*x200));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x205 = 22;
	static int8_t x206 = -7;
	int8_t x207 = INT8_MIN;
	volatile int32_t t30 = 2;

	t30 = ((x205/x206)|(x207*x208));

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x213 = 13U;
	uint32_t x214 = UINT32_MAX;
	static uint8_t x216 = UINT8_MAX;
	uint32_t t31 = 807458U;

	t31 = ((x213/x214)|(x215*x216));

	if (t31 != 1530U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x217 = 49LL;
	volatile int64_t t32 = 0LL;

	t32 = ((x217/x218)|(x219*x220));

	if (t32 != -65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x225 = -3174232;
	static volatile int32_t x226 = INT32_MIN;
	uint64_t x227 = 61LLU;
	volatile uint8_t x228 = UINT8_MAX;
	uint64_t t33 = 262058336LLU;

	t33 = ((x225/x226)|(x227*x228));

	if (t33 != 15555LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x229 = 1606U;
	uint64_t x230 = 3896199625246500946LLU;
	int64_t x231 = -1LL;
	int32_t x232 = -1;
	volatile uint64_t t34 = 11100514642455981LLU;

	t34 = ((x229/x230)|(x231*x232));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x234 = UINT16_MAX;
	uint32_t x236 = 732U;
	uint32_t t35 = 2690945U;

	t35 = ((x233/x234)|(x235*x236));

	if (t35 != 4294966564U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x238 = -1;
	uint64_t x239 = 1707316LLU;
	uint64_t t36 = 381246LLU;

	t36 = ((x237/x238)|(x239*x240));

	if (t36 != 20220812365864657LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x246 = -1;
	volatile uint32_t x247 = 399U;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t37 = 268775922U;

	t37 = ((x245/x246)|(x247*x248));

	if (t37 != 4294966897U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x250 = INT8_MIN;
	uint16_t x251 = 20311U;
	volatile uint16_t x252 = 132U;

	t38 = ((x249/x250)|(x251*x252));

	if (t38 != 2685405) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x261 = -1LL;
	int64_t x262 = -1LL;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = -1;
	static volatile int64_t t39 = 88LL;

	t39 = ((x261/x262)|(x263*x264));

	if (t39 != -255LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x273 = UINT64_MAX;
	static uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MAX;
	uint64_t t40 = 33147235716432942LLU;

	t40 = ((x273/x274)|(x275*x276));

	if (t40 != 9295712209692852481LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x277 = 12;
	volatile int8_t x278 = -6;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = INT8_MIN;

	t41 = ((x277/x278)|(x279*x280));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 69413519782773LLU;
	int16_t x284 = INT16_MAX;
	volatile uint64_t t42 = 214546945278131518LLU;

	t42 = ((x281/x282)|(x283*x284));

	if (t42 != 18446744073683698453LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int8_t x286 = INT8_MIN;
	int8_t x287 = 2;
	uint16_t x288 = 232U;

	t43 = ((x285/x286)|(x287*x288));

	if (t43 != -47) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x295 = -6;
	int16_t x296 = -1;
	static int32_t t44 = -1887;

	t44 = ((x293/x294)|(x295*x296));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x297 = 3U;
	volatile uint64_t x298 = 20920LLU;
	static int8_t x300 = -1;

	t45 = ((x297/x298)|(x299*x300));

	if (t45 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x306 = INT64_MIN;
	int8_t x308 = -1;
	volatile int64_t t46 = 8382540371LL;

	t46 = ((x305/x306)|(x307*x308));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x313 = UINT32_MAX;
	uint64_t x314 = 1LLU;
	uint64_t x315 = UINT64_MAX;
	static uint16_t x316 = UINT16_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = ((x313/x314)|(x315*x316));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x317 = 468589;
	int32_t x319 = -1238336;
	volatile int32_t t48 = -40734;

	t48 = ((x317/x318)|(x319*x320));

	if (t48 != -3711383) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MIN;
	volatile uint32_t t49 = 274U;

	t49 = ((x325/x326)|(x327*x328));

	if (t49 != 128U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x329 = -49680458;
	uint16_t x330 = 3U;
	uint16_t x331 = 11U;
	int64_t x332 = -60160794303878619LL;

	t50 = ((x329/x330)|(x331*x332));

	if (t50 != -12890113LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = 2;
	uint64_t x336 = 359621132601LLU;
	volatile uint64_t t51 = 697452LLU;

	t51 = ((x333/x334)|(x335*x336));

	if (t51 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x337 = 1U;
	uint8_t x338 = UINT8_MAX;
	uint32_t x339 = 13U;
	uint32_t t52 = 7131220U;

	t52 = ((x337/x338)|(x339*x340));

	if (t52 != 1651U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x341 = 125352278947738772LLU;
	uint16_t x342 = 21514U;
	uint32_t x343 = UINT32_MAX;
	volatile uint64_t t53 = 99172644LLU;

	t53 = ((x341/x342)|(x343*x344));

	if (t53 != 5826544526714LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MIN;
	int64_t x347 = 456783778879045LL;
	static volatile int64_t t54 = 112813807LL;

	t54 = ((x345/x346)|(x347*x348));

	if (t54 != 5938189125427585LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = -463273;
	int16_t x371 = -157;
	volatile uint32_t t55 = 2074U;

	t55 = ((x369/x370)|(x371*x372));

	if (t55 != 20097U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x377 = 14357975;
	int16_t x378 = INT16_MIN;
	uint8_t x379 = 11U;
	static int32_t x380 = -147;
	volatile int32_t t56 = 30;

	t56 = ((x377/x378)|(x379*x380));

	if (t56 != -17) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x381 = UINT64_MAX;
	int16_t x383 = INT16_MIN;
	int32_t x384 = -1;
	volatile uint64_t t57 = 1141190423799LLU;

	t57 = ((x381/x382)|(x383*x384));

	if (t57 != 32769LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x385 = 199278831194LL;
	int8_t x388 = 0;

	t58 = ((x385/x386)|(x387*x388));

	if (t58 != 18446743874430720422LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x389 = UINT32_MAX;
	uint16_t x390 = UINT16_MAX;
	static int64_t x391 = -1691251534LL;
	volatile uint32_t x392 = 1508331U;
	volatile int64_t t59 = 526LL;

	t59 = ((x389/x390)|(x391*x392));

	if (t59 != -2550967117464217LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = -8;
	int8_t x396 = INT8_MAX;
	volatile int32_t t60 = -320275;

	t60 = ((x393/x394)|(x395*x396));

	if (t60 != 4161425) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x397 = INT64_MIN;
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = 3403LLU;

	t61 = ((x397/x398)|(x399*x400));

	if (t61 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t t62 = -15066;

	t62 = ((x409/x410)|(x411*x412));

	if (t62 != -1105100) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x413 = -63;
	static int64_t x414 = 10497LL;
	uint32_t x415 = 5U;
	int16_t x416 = -1;
	volatile int64_t t63 = -845LL;

	t63 = ((x413/x414)|(x415*x416));

	if (t63 != 4294967291LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x421 = INT16_MAX;
	int64_t x422 = INT64_MIN;
	static volatile int16_t x423 = INT16_MAX;
	volatile int16_t x424 = INT16_MAX;
	int64_t t64 = -32808616333LL;

	t64 = ((x421/x422)|(x423*x424));

	if (t64 != 1073676289LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x433 = 26117622891106412LL;
	int16_t x434 = INT16_MIN;
	uint64_t x435 = 89134275735111LLU;
	volatile uint64_t t65 = 492777866LLU;

	t65 = ((x433/x434)|(x435*x436));

	if (t65 != 18446743345435401215LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x437 = INT32_MIN;
	static int16_t x438 = INT16_MIN;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t66 = 746932761;

	t66 = ((x437/x438)|(x439*x440));

	if (t66 != 16776961) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x454 = INT8_MIN;
	uint64_t x455 = 12676937LLU;
	static volatile uint64_t t67 = 610LLU;

	t67 = ((x453/x454)|(x455*x456));

	if (t67 != 18446744073709551287LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x457 = 21830LLU;
	uint64_t x458 = UINT64_MAX;
	int32_t x459 = INT32_MIN;
	uint32_t x460 = 18896U;
	static volatile uint64_t t68 = 410209LLU;

	t68 = ((x457/x458)|(x459*x460));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x465 = 107U;
	static int8_t x467 = INT8_MAX;
	volatile int64_t t69 = -141615472152422502LL;

	t69 = ((x465/x466)|(x467*x468));

	if (t69 != -107LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x469 = -1;
	static uint8_t x470 = 1U;
	uint8_t x471 = UINT8_MAX;
	int32_t t70 = -119481778;

	t70 = ((x469/x470)|(x471*x472));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x473 = UINT8_MAX;
	static int8_t x474 = INT8_MIN;
	volatile uint8_t x475 = UINT8_MAX;
	static int8_t x476 = 2;
	volatile int32_t t71 = -7;

	t71 = ((x473/x474)|(x475*x476));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x478 = UINT64_MAX;
	uint16_t x479 = 3U;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t72 = 181325LLU;

	t72 = ((x477/x478)|(x479*x480));

	if (t72 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x485 = INT8_MIN;
	uint64_t x486 = 3275896239512442LLU;
	static int8_t x487 = INT8_MIN;

	t73 = ((x485/x486)|(x487*x488));

	if (t73 != 18446744073707666943LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x490 = -2228;
	static uint16_t x491 = 2U;
	uint8_t x492 = UINT8_MAX;
	volatile int64_t t74 = 3101407LL;

	t74 = ((x489/x490)|(x491*x492));

	if (t74 != 4139754056039423LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x494 = 99508571546LLU;
	static int16_t x495 = INT16_MIN;
	int8_t x496 = -1;
	uint64_t t75 = 2001803708154182LLU;

	t75 = ((x493/x494)|(x495*x496));

	if (t75 != 37019LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x497 = UINT64_MAX;
	volatile int16_t x498 = 2535;
	int8_t x500 = INT8_MIN;
	static volatile uint64_t t76 = 59428902419336205LLU;

	t76 = ((x497/x498)|(x499*x500));

	if (t76 != 7276822124000833LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x501 = INT8_MAX;
	int16_t x503 = -50;
	uint64_t x504 = 3911963409883529541LLU;
	uint64_t t77 = 208729761LLU;

	t77 = ((x501/x502)|(x503*x504));

	if (t77 != 7316014316628590726LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x505 = 171U;
	uint64_t x506 = 21604LLU;
	int64_t x507 = -1LL;
	int64_t x508 = -1LL;
	static volatile uint64_t t78 = 1640092590021343238LLU;

	t78 = ((x505/x506)|(x507*x508));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x510 = INT64_MIN;
	uint16_t x511 = UINT16_MAX;
	uint8_t x512 = 8U;
	static int64_t t79 = 253LL;

	t79 = ((x509/x510)|(x511*x512));

	if (t79 != 524280LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x521 = 4792U;
	volatile int64_t x522 = -154636LL;
	int64_t x523 = -3653389LL;
	uint8_t x524 = 20U;
	static volatile int64_t t80 = -4907593815267373LL;

	t80 = ((x521/x522)|(x523*x524));

	if (t80 != -73067780LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x525 = INT32_MIN;
	static int32_t x526 = INT32_MAX;
	uint8_t x528 = 27U;
	int64_t t81 = -338741604763042718LL;

	t81 = ((x525/x526)|(x527*x528));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x529 = INT64_MIN;
	static int8_t x530 = 4;
	uint8_t x531 = UINT8_MAX;
	int32_t x532 = 3235770;
	volatile int64_t t82 = -20241102075089LL;

	t82 = ((x529/x530)|(x531*x532));

	if (t82 != -2305843008388572602LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x533 = 39U;
	uint64_t x535 = 38171LLU;
	static volatile uint64_t t83 = 32504894134LLU;

	t83 = ((x533/x534)|(x535*x536));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x537 = INT8_MIN;
	volatile int16_t x538 = -6975;
	uint32_t x539 = 13737U;
	int16_t x540 = INT16_MIN;
	volatile uint32_t t84 = 0U;

	t84 = ((x537/x538)|(x539*x540));

	if (t84 != 3844833280U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x542 = 4U;
	uint16_t x544 = 10U;
	static volatile int64_t t85 = 300371683LL;

	t85 = ((x541/x542)|(x543*x544));

	if (t85 != -40LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x549 = UINT16_MAX;
	uint16_t x550 = 3U;
	static int8_t x552 = INT8_MAX;
	int32_t t86 = 89;

	t86 = ((x549/x550)|(x551*x552));

	if (t86 != 32597) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x553 = UINT32_MAX;
	uint8_t x554 = UINT8_MAX;
	int8_t x555 = -1;
	int32_t x556 = -522262;
	static volatile uint32_t t87 = 53U;

	t87 = ((x553/x554)|(x555*x556));

	if (t87 != 17299735U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x557 = 65U;
	int64_t x559 = -1LL;
	int64_t x560 = -1LL;
	int64_t t88 = -526601047LL;

	t88 = ((x557/x558)|(x559*x560));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x565 = UINT16_MAX;
	volatile int64_t x568 = -1LL;
	volatile int64_t t89 = -321263493LL;

	t89 = ((x565/x566)|(x567*x568));

	if (t89 != -3740LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x570 = -48;
	static uint16_t x571 = 22071U;
	uint16_t x572 = UINT16_MAX;

	t90 = ((x569/x570)|(x571*x572));

	if (t90 != 1446422985LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x577 = 1;
	static int64_t x578 = INT64_MIN;
	int8_t x579 = 9;
	volatile int64_t x580 = -1LL;
	int64_t t91 = -1533LL;

	t91 = ((x577/x578)|(x579*x580));

	if (t91 != -9LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x581 = INT64_MIN;
	uint32_t x582 = 2047U;
	uint64_t x583 = 6770479636589009LLU;
	uint16_t x584 = 1U;
	volatile uint64_t t92 = 6282189914316LLU;

	t92 = ((x581/x582)|(x583*x584));

	if (t92 != 18446741873612029905LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x585 = INT8_MIN;
	static int64_t x586 = INT64_MIN;
	static int32_t x587 = -1;
	static int32_t x588 = -1;
	int64_t t93 = -2705LL;

	t93 = ((x585/x586)|(x587*x588));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x593 = -12354657;
	int64_t x594 = INT64_MIN;
	volatile uint8_t x595 = 116U;
	int16_t x596 = -11;
	volatile int64_t t94 = -1LL;

	t94 = ((x593/x594)|(x595*x596));

	if (t94 != -1276LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x597 = INT64_MIN;
	int8_t x598 = -46;
	uint32_t x599 = 13659U;
	static int8_t x600 = -1;
	volatile int64_t t95 = -1LL;

	t95 = ((x597/x598)|(x599*x600));

	if (t95 != 200508091492462245LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x601 = 363877046U;
	volatile int8_t x602 = -1;
	uint8_t x604 = 1U;

	t96 = ((x601/x602)|(x603*x604));

	if (t96 != 5U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x606 = 19129789004918LLU;
	uint64_t x607 = 3LLU;
	static uint64_t x608 = 1LLU;
	uint64_t t97 = 165506362361244207LLU;

	t97 = ((x605/x606)|(x607*x608));

	if (t97 != 964295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x610 = INT32_MAX;
	volatile uint64_t x611 = 2149842022613LLU;
	volatile uint16_t x612 = 6U;
	uint64_t t98 = 9LLU;

	t98 = ((x609/x610)|(x611*x612));

	if (t98 != 12899052135678LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x617 = INT8_MIN;
	static int64_t x618 = -4222264169898612752LL;
	uint64_t x620 = 3216577727817LLU;
	volatile uint64_t t99 = 1973261375171007LLU;

	t99 = ((x617/x618)|(x619*x620));

	if (t99 != 11872086946258057586LLU) { NG(); } else { ; }
	
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

