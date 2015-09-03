#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
static uint16_t x19 = 29U;
volatile int8_t x20 = 6;
volatile int8_t x30 = INT8_MAX;
static uint16_t x36 = 6979U;
static int32_t x37 = INT32_MIN;
int16_t x40 = INT16_MIN;
uint64_t x48 = 5777186041522LLU;
volatile uint8_t x52 = 5U;
int64_t t9 = 1616638849507460LL;
uint64_t x63 = UINT64_MAX;
volatile uint64_t t10 = 102226761429480LLU;
int16_t x65 = -1;
volatile int32_t t12 = 1;
static volatile uint32_t x78 = 19U;
volatile uint32_t x83 = UINT32_MAX;
volatile int64_t t17 = -9132LL;
volatile int32_t x121 = INT32_MIN;
uint64_t x129 = 31192995863LLU;
uint8_t x130 = 73U;
volatile int32_t x138 = INT32_MIN;
static int64_t x139 = -76632830097LL;
uint64_t x146 = 9497058566LLU;
int8_t x148 = -1;
int8_t x149 = 0;
int64_t t23 = 58350511609LL;
static uint16_t x173 = UINT16_MAX;
int32_t x174 = -807044;
volatile uint32_t x178 = 31690U;
uint16_t x181 = UINT16_MAX;
uint64_t t29 = 857064223681245LLU;
uint32_t t31 = 18263734U;
uint8_t x201 = 1U;
static int64_t x204 = -126251588LL;
static int8_t x218 = INT8_MAX;
volatile int8_t x220 = INT8_MIN;
int8_t x224 = INT8_MAX;
volatile int16_t x249 = INT16_MIN;
static volatile int16_t x250 = INT16_MIN;
int16_t x259 = -2;
int32_t x262 = INT32_MIN;
uint64_t x263 = UINT64_MAX;
uint64_t t40 = 11268240LLU;
uint16_t x281 = UINT16_MAX;
int16_t x282 = 3;
volatile uint16_t x298 = UINT16_MAX;
int16_t x307 = -49;
int32_t t46 = 7;
int16_t x330 = INT16_MAX;
volatile uint16_t x331 = 1U;
static volatile uint64_t x353 = 20536929230952LLU;
static uint8_t x356 = 22U;
volatile int8_t x365 = -1;
uint64_t x367 = 5976LLU;
volatile uint32_t x373 = 73094478U;
volatile int16_t x379 = 1;
int64_t x383 = 46LL;
int32_t x398 = INT32_MIN;
int8_t x404 = -1;
uint64_t t61 = 565018327346140LLU;
int32_t t62 = 3;
int32_t x441 = INT32_MIN;
uint32_t x458 = UINT32_MAX;
uint32_t t69 = 3323U;
static uint64_t x467 = 114944421423603LLU;
uint64_t x468 = 939728943532851326LLU;
uint64_t x472 = UINT64_MAX;
uint64_t t71 = 961506318LLU;
uint8_t x473 = 7U;
int32_t x476 = -11444117;
int64_t x477 = 570387472LL;
int64_t t73 = 267570842799LL;
volatile int16_t x482 = INT16_MAX;
uint64_t x487 = 2926211693231704554LLU;
volatile uint64_t x512 = 1470934LLU;
static volatile int64_t t80 = 12721LL;
int8_t x521 = INT8_MIN;
uint8_t x542 = 5U;
static int32_t t85 = -7;
int32_t x547 = -102768480;
volatile uint16_t x550 = UINT16_MAX;
uint64_t x554 = 402449LLU;
int16_t x585 = INT16_MIN;
volatile int8_t x588 = 53;
int16_t x602 = INT16_MAX;
static uint8_t x603 = UINT8_MAX;
volatile int32_t x630 = INT32_MAX;
uint16_t x634 = UINT16_MAX;


void f0(void) {
	volatile int16_t x2 = INT16_MAX;
	uint8_t x3 = 9U;
	uint8_t x4 = 103U;
	volatile int32_t t0 = -4020803;

	t0 = (x1*(x2%(x3*x4)));

	if (t0 != -322) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 25560U;
	int32_t x6 = INT32_MAX;
	uint8_t x7 = 47U;
	uint16_t x8 = 1U;
	volatile uint32_t t1 = 4191718U;

	t1 = (x5*(x6%(x7*x8)));

	if (t1 != 511200U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -1LL;
	int8_t x18 = -14;
	static int64_t t2 = 0LL;

	t2 = (x17*(x18%(x19*x20)));

	if (t2 != 14LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x25 = 4U;
	uint64_t x26 = 30729893309LLU;
	int32_t x27 = -1;
	int16_t x28 = -1;
	uint64_t t3 = 8553860328LLU;

	t3 = (x25*(x26%(x27*x28)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	int16_t x31 = -19;
	static uint32_t x32 = UINT32_MAX;
	static volatile uint32_t t4 = 82U;

	t4 = (x29*(x30%(x31*x32)));

	if (t4 != 4294965632U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x34 = -1;
	volatile int8_t x35 = INT8_MIN;
	int32_t t5 = 6798;

	t5 = (x33*(x34%(x35*x36)));

	if (t5 != -65535) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x38 = 1U;
	static int16_t x39 = 27;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x37*(x38%(x39*x40)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -1;
	int16_t x42 = 0;
	uint8_t x43 = 41U;
	volatile int16_t x44 = 1158;
	static int32_t t7 = -1;

	t7 = (x41*(x42%(x43*x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = -86950531LL;
	int32_t x46 = 243963;
	static uint8_t x47 = UINT8_MAX;
	static uint64_t t8 = 31973828404611LLU;

	t8 = (x45*(x46%(x47*x48)));

	if (t8 != 18446722860997157263LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = 478247U;
	static int64_t x50 = -1LL;
	int16_t x51 = INT16_MAX;

	t9 = (x49*(x50%(x51*x52)));

	if (t9 != -478247LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MAX;
	volatile int64_t x64 = INT64_MAX;

	t10 = (x61*(x62%(x63*x64)));

	if (t10 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x66 = -4351703517365919LL;
	volatile uint8_t x67 = 4U;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int64_t t11 = -415LL;

	t11 = (x65*(x66%(x67*x68)));

	if (t11 != 223959LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x69 = -831;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = -254;
	int16_t x72 = -2;

	t12 = (x69*(x70%(x71*x72)));

	if (t12 != 106368) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x73 = 38890808510676LLU;
	uint16_t x74 = 437U;
	static int32_t x75 = 3;
	static uint32_t x76 = 144U;
	volatile uint64_t t13 = 135680174146179LLU;

	t13 = (x73*(x74%(x75*x76)));

	if (t13 != 194454042553380LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x77 = INT32_MAX;
	static volatile int8_t x79 = -3;
	int32_t x80 = -1;
	volatile uint32_t t14 = 2509270U;

	t14 = (x77*(x78%(x79*x80)));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 11285797016LLU;
	int64_t x82 = 0LL;
	int32_t x84 = -1;
	static uint64_t t15 = 998LLU;

	t15 = (x81*(x82%(x83*x84)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = -1LL;
	static int8_t x87 = -1;
	int16_t x88 = INT16_MIN;
	volatile int64_t t16 = -823LL;

	t16 = (x85*(x86%(x87*x88)));

	if (t16 != -65535LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x97 = 29897U;
	uint8_t x98 = 24U;
	static int64_t x99 = INT64_MIN;
	volatile int8_t x100 = 1;

	t17 = (x97*(x98%(x99*x100)));

	if (t17 != 717528LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x117 = 1135;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MAX;
	int64_t t18 = 14816LL;

	t18 = (x117*(x118%(x119*x120)));

	if (t18 != -557867255LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x122 = 1;
	static int64_t x123 = -6007609067428941LL;
	volatile int32_t x124 = -1;
	volatile int64_t t19 = 128070220198534LL;

	t19 = (x121*(x122%(x123*x124)));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x131 = INT16_MAX;
	int8_t x132 = -1;
	volatile uint64_t t20 = 1860LLU;

	t20 = (x129*(x130%(x131*x132)));

	if (t20 != 2277088697999LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x137 = 8;
	int8_t x140 = -1;
	int64_t t21 = 7LL;

	t21 = (x137*(x138%(x139*x140)));

	if (t21 != -17179869184LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x145 = -1;
	volatile uint32_t x147 = 145U;
	static volatile uint64_t t22 = 1778LLU;

	t22 = (x145*(x146%(x147*x148)));

	if (t22 != 18446744072802427352LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x150 = -1;
	int32_t x151 = INT32_MAX;
	int64_t x152 = -1LL;

	t23 = (x149*(x150%(x151*x152)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x161 = 0;
	int16_t x162 = INT16_MAX;
	int16_t x163 = -13052;
	int8_t x164 = -7;
	int32_t t24 = 3;

	t24 = (x161*(x162%(x163*x164)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	volatile uint8_t x167 = 12U;
	static int64_t x168 = -423121LL;
	volatile int64_t t25 = -11923LL;

	t25 = (x165*(x166%(x167*x168)));

	if (t25 != 4194304LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x175 = -1LL;
	volatile uint16_t x176 = 2U;
	volatile int64_t t26 = 76202429291723LL;

	t26 = (x173*(x174%(x175*x176)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x177 = -1;
	int8_t x179 = 2;
	uint16_t x180 = 72U;
	volatile uint32_t t27 = 1U;

	t27 = (x177*(x178%(x179*x180)));

	if (t27 != 4294967286U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x182 = -1LL;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = 236LLU;
	volatile uint64_t t28 = 7018880090384LLU;

	t28 = (x181*(x182%(x183*x184)));

	if (t28 != 1979615745LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x185 = 3243772764064511LLU;
	volatile int32_t x186 = INT32_MIN;
	static uint64_t x187 = 1143759807811369550LLU;
	int8_t x188 = -2;

	t29 = (x185*(x186%(x187*x188)));

	if (t29 != 5054005588899282788LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = -1LL;
	int16_t x192 = -1;
	volatile uint64_t t30 = 172170768833390LLU;

	t30 = (x189*(x190%(x191*x192)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x197 = 3224U;
	static uint32_t x198 = 3U;
	int16_t x199 = 1036;
	volatile uint8_t x200 = UINT8_MAX;

	t31 = (x197*(x198%(x199*x200)));

	if (t31 != 9672U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x202 = INT8_MAX;
	uint32_t x203 = UINT32_MAX;
	volatile int64_t t32 = 78918366335LL;

	t32 = (x201*(x202%(x203*x204)));

	if (t32 != 127LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x213 = 0U;
	uint64_t x214 = 2559LLU;
	int16_t x215 = -127;
	int16_t x216 = 563;
	volatile uint64_t t33 = 52696809133696310LLU;

	t33 = (x213*(x214%(x215*x216)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x217 = -1;
	uint8_t x219 = 3U;
	volatile int32_t t34 = -12;

	t34 = (x217*(x218%(x219*x220)));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x221 = -5589LL;
	int16_t x222 = -13246;
	int16_t x223 = INT16_MIN;
	volatile int64_t t35 = 278467125148531009LL;

	t35 = (x221*(x222%(x223*x224)));

	if (t35 != 74031894LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x229 = -1;
	static volatile int8_t x230 = INT8_MAX;
	volatile int64_t x231 = 15061103400172LL;
	int16_t x232 = 1560;
	volatile int64_t t36 = 3236LL;

	t36 = (x229*(x230%(x231*x232)));

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = 1;
	static int8_t x235 = -1;
	uint8_t x236 = 5U;
	int32_t t37 = INT32_MIN;

	t37 = (x233*(x234%(x235*x236)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x251 = INT8_MAX;
	volatile uint16_t x252 = 22U;
	int32_t t38 = 2425077;

	t38 = (x249*(x250%(x251*x252)));

	if (t38 != 66650112) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x257 = INT64_MAX;
	uint64_t x258 = 805960910348639LLU;
	int8_t x260 = INT8_MIN;
	uint64_t t39 = 41536389644LLU;

	t39 = (x257*(x258%(x259*x260)));

	if (t39 != 9223372036854775713LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x261 = -1124428940557LL;
	int16_t x264 = -1;

	t40 = (x261*(x262%(x263*x264)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x265 = -38;
	volatile int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	int32_t x268 = 22;
	int64_t t41 = -6411377LL;

	t41 = (x265*(x266%(x267*x268)));

	if (t41 != -17432538LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x273 = -1;
	static int16_t x274 = -4038;
	static uint32_t x275 = 8408501U;
	static uint32_t x276 = 5638282U;
	volatile uint32_t t42 = 30U;

	t42 = (x273*(x274%(x275*x276)));

	if (t42 != 3301648106U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x283 = 21560465LLU;
	int32_t x284 = -1;
	volatile uint64_t t43 = 725199LLU;

	t43 = (x281*(x282%(x283*x284)));

	if (t43 != 196605LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x297 = UINT8_MAX;
	static volatile int32_t x299 = -1;
	int64_t x300 = 924LL;
	int64_t t44 = 30LL;

	t44 = (x297*(x298%(x299*x300)));

	if (t44 != 218025LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x305 = 1471;
	int8_t x306 = INT8_MIN;
	volatile uint8_t x308 = 3U;
	volatile int32_t t45 = 133028157;

	t45 = (x305*(x306%(x307*x308)));

	if (t45 != -188288) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x317 = 109U;
	static int8_t x318 = -14;
	uint16_t x319 = UINT16_MAX;
	uint16_t x320 = 70U;

	t46 = (x317*(x318%(x319*x320)));

	if (t46 != -1526) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x329 = INT8_MIN;
	static int64_t x332 = INT64_MAX;
	int64_t t47 = 44960179851038826LL;

	t47 = (x329*(x330%(x331*x332)));

	if (t47 != -4194176LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x341 = -1;
	int16_t x342 = -1;
	volatile int32_t x343 = INT32_MIN;
	uint32_t x344 = 957791U;
	uint32_t t48 = 1829950119U;

	t48 = (x341*(x342%(x343*x344)));

	if (t48 != 2147483649U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x349 = UINT64_MAX;
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 112U;
	uint8_t x352 = 3U;
	static volatile uint64_t t49 = 3883034427LLU;

	t49 = (x349*(x350%(x351*x352)));

	if (t49 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x354 = UINT8_MAX;
	volatile uint32_t x355 = 32508U;
	volatile uint64_t t50 = 301519893899LLU;

	t50 = (x353*(x354%(x355*x356)));

	if (t50 != 5236916953892760LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x366 = UINT16_MAX;
	int8_t x368 = -57;
	uint64_t t51 = 3002606767LLU;

	t51 = (x365*(x366%(x367*x368)));

	if (t51 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x374 = -1LL;
	int16_t x375 = -13;
	int16_t x376 = 254;
	int64_t t52 = -695907177LL;

	t52 = (x373*(x374%(x375*x376)));

	if (t52 != -73094478LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = 268107;
	static int8_t x380 = -1;
	int32_t t53 = -108716721;

	t53 = (x377*(x378%(x379*x380)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x381 = 9454;
	int16_t x382 = INT16_MIN;
	int8_t x384 = -10;
	volatile int64_t t54 = 22LL;

	t54 = (x381*(x382%(x383*x384)));

	if (t54 != -1021032LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x390 = -782846069003873LL;
	uint8_t x391 = UINT8_MAX;
	volatile uint64_t x392 = 1703006911234LLU;
	volatile uint64_t t55 = 42272150642LLU;

	t55 = (x389*(x390%(x391*x392)));

	if (t55 != 18446697844270726793LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x393 = 3603U;
	uint32_t x394 = 910952U;
	uint8_t x395 = 3U;
	int16_t x396 = 15;
	static volatile uint32_t t56 = 52696U;

	t56 = (x393*(x394%(x395*x396)));

	if (t56 != 61251U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x397 = -1LL;
	static volatile int8_t x399 = -1;
	int64_t x400 = INT64_MAX;
	int64_t t57 = 55062745LL;

	t57 = (x397*(x398%(x399*x400)));

	if (t57 != 2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = INT32_MAX;
	volatile uint64_t x403 = 4065232597LLU;
	uint64_t t58 = 38818911736183436LLU;

	t58 = (x401*(x402%(x403*x404)));

	if (t58 != 140735340806145LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x405 = INT8_MAX;
	static volatile int64_t x406 = 3378751325457804041LL;
	uint32_t x407 = 13U;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int64_t t59 = -727783792218820LL;

	t59 = (x405*(x406%(x407*x408)));

	if (t59 != 105618407LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	static volatile int8_t x411 = INT8_MIN;
	uint64_t x412 = 885882924690LLU;
	static volatile uint64_t t60 = 30202LLU;

	t60 = (x409*(x410%(x411*x412)));

	if (t60 != 18432229767871430784LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x417 = INT16_MIN;
	volatile int8_t x418 = INT8_MAX;
	uint64_t x419 = 563LLU;
	int64_t x420 = -313LL;

	t61 = (x417*(x418%(x419*x420)));

	if (t61 != 18446744073705390080LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x421 = -20;
	int32_t x422 = -110;
	uint8_t x423 = 15U;
	int8_t x424 = INT8_MIN;

	t62 = (x421*(x422%(x423*x424)));

	if (t62 != 2200) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	int8_t x427 = INT8_MIN;
	uint64_t x428 = UINT64_MAX;
	uint64_t t63 = 244608LLU;

	t63 = (x425*(x426%(x427*x428)));

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x433 = 458537930304897LLU;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MAX;
	int16_t x436 = 9;
	uint64_t t64 = 69177906475392754LLU;

	t64 = (x433*(x434%(x435*x436)));

	if (t64 != 116927172227748735LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x437 = -1;
	volatile int32_t x438 = -1;
	uint32_t x439 = 1U;
	int64_t x440 = 200866610669LL;
	int64_t t65 = -836598653LL;

	t65 = (x437*(x438%(x439*x440)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x442 = -1LL;
	uint32_t x443 = 1342779U;
	int16_t x444 = -1;
	volatile int64_t t66 = -4274117LL;

	t66 = (x441*(x442%(x443*x444)));

	if (t66 != 2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x445 = UINT64_MAX;
	volatile int64_t x446 = -1LL;
	volatile int16_t x447 = INT16_MIN;
	int64_t x448 = -6714121038936LL;
	uint64_t t67 = 3674889LLU;

	t67 = (x445*(x446%(x447*x448)));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x453 = 7760743;
	int16_t x454 = -1;
	int32_t x455 = -1;
	static int64_t x456 = -1LL;
	volatile int64_t t68 = -659960897LL;

	t68 = (x453*(x454%(x455*x456)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x457 = INT16_MIN;
	volatile int32_t x459 = -1;
	uint32_t x460 = 83855690U;

	t69 = (x457*(x458%(x459*x460)));

	if (t69 != 995852288U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x465 = -13833;
	int32_t x466 = INT32_MIN;
	static uint64_t t70 = 156099620LLU;

	t70 = (x465*(x466%(x467*x468)));

	if (t70 != 7775961253429717822LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x469 = 0U;
	int32_t x470 = -1;
	uint64_t x471 = 2109LLU;

	t71 = (x469*(x470%(x471*x472)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x474 = 20909LLU;
	int8_t x475 = -1;
	uint64_t t72 = 50733149674LLU;

	t72 = (x473*(x474%(x475*x476)));

	if (t72 != 146363LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x478 = -24211805LL;
	int8_t x479 = INT8_MAX;
	int16_t x480 = -1;

	t73 = (x477*(x478%(x479*x480)));

	if (t73 != -9696587024LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x481 = -6;
	uint32_t x483 = UINT32_MAX;
	uint64_t x484 = 129377886691957114LLU;
	static uint64_t t74 = 558476731052877LLU;

	t74 = (x481*(x482%(x483*x484)));

	if (t74 != 18446744073709355014LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x485 = 61U;
	static int16_t x486 = INT16_MIN;
	int8_t x488 = INT8_MIN;
	uint64_t t75 = 29733LLU;

	t75 = (x485*(x486%(x487*x488)));

	if (t75 != 10791737500722258176LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x489 = UINT16_MAX;
	uint32_t x490 = 265689691U;
	int8_t x491 = 1;
	int16_t x492 = INT16_MIN;
	uint32_t t76 = 273041U;

	t76 = (x489*(x490%(x491*x492)));

	if (t76 != 176481701U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x501 = UINT16_MAX;
	static uint8_t x502 = UINT8_MAX;
	volatile uint64_t x503 = 11391366LLU;
	volatile int64_t x504 = INT64_MAX;
	uint64_t t77 = 11864631207688375LLU;

	t77 = (x501*(x502%(x503*x504)));

	if (t77 != 16711425LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x509 = -1;
	uint32_t x510 = 6363U;
	volatile uint32_t x511 = 166390U;
	volatile uint64_t t78 = 8730566976055782LLU;

	t78 = (x509*(x510%(x511*x512)));

	if (t78 != 18446744073709545253LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x513 = UINT32_MAX;
	static uint64_t x514 = UINT64_MAX;
	uint64_t x515 = 230LLU;
	volatile int8_t x516 = -1;
	volatile uint64_t t79 = 4374754497210LLU;

	t79 = (x513*(x514%(x515*x516)));

	if (t79 != 983547510555LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MIN;
	int64_t x520 = -3321716090058LL;

	t80 = (x517*(x518%(x519*x520)));

	if (t80 != 4194304LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x522 = 2652;
	static int16_t x523 = -1;
	static int16_t x524 = INT16_MAX;
	static volatile int32_t t81 = 951;

	t81 = (x521*(x522%(x523*x524)));

	if (t81 != -339456) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x529 = INT8_MAX;
	int32_t x530 = -1;
	int32_t x531 = -1;
	volatile int8_t x532 = INT8_MAX;
	volatile int32_t t82 = -1;

	t82 = (x529*(x530%(x531*x532)));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x533 = 1104660;
	uint32_t x534 = UINT32_MAX;
	uint16_t x535 = UINT16_MAX;
	uint64_t x536 = UINT64_MAX;
	static uint64_t t83 = 907456188038785LLU;

	t83 = (x533*(x534%(x535*x536)));

	if (t83 != 4744478572094700LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x537 = 1;
	int64_t x538 = -1LL;
	int16_t x539 = -3;
	volatile int16_t x540 = 4249;
	int64_t t84 = -72101435674LL;

	t84 = (x537*(x538%(x539*x540)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x541 = 14199736;
	int8_t x543 = INT8_MIN;
	volatile uint8_t x544 = 27U;

	t85 = (x541*(x542%(x543*x544)));

	if (t85 != 70998680) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x545 = 8U;
	int16_t x546 = -25;
	static int64_t x548 = -1LL;
	volatile int64_t t86 = 0LL;

	t86 = (x545*(x546%(x547*x548)));

	if (t86 != -200LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x549 = INT16_MAX;
	uint64_t x551 = 2871706437LLU;
	int64_t x552 = 857448LL;
	static volatile uint64_t t87 = 191353LLU;

	t87 = (x549*(x550%(x551*x552)));

	if (t87 != 2147385345LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x553 = 53U;
	int16_t x555 = INT16_MIN;
	static uint32_t x556 = 926U;
	uint64_t t88 = 30531LLU;

	t88 = (x553*(x554%(x555*x556)));

	if (t88 != 21329797LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x561 = 15809U;
	int8_t x562 = INT8_MIN;
	volatile uint16_t x563 = 9U;
	uint32_t x564 = 629U;
	static uint32_t t89 = 19544U;

	t89 = (x561*(x562%(x563*x564)));

	if (t89 != 6861106U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x565 = UINT16_MAX;
	int64_t x566 = INT64_MAX;
	int16_t x567 = INT16_MIN;
	static uint16_t x568 = UINT16_MAX;
	static volatile int64_t t90 = 346LL;

	t90 = (x565*(x566%(x567*x568)));

	if (t90 != 2147385345LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x569 = 1U;
	uint32_t x570 = 235U;
	uint32_t x571 = UINT32_MAX;
	int32_t x572 = INT32_MIN;
	uint32_t t91 = 585U;

	t91 = (x569*(x570%(x571*x572)));

	if (t91 != 235U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x573 = 106U;
	int32_t x574 = INT32_MIN;
	static int32_t x575 = 2870;
	uint32_t x576 = 264U;
	static volatile uint32_t t92 = 1133U;

	t92 = (x573*(x574%(x575*x576)));

	if (t92 != 23163968U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x577 = -5;
	int64_t x578 = INT64_MIN;
	uint8_t x579 = 24U;
	int64_t x580 = -1LL;
	int64_t t93 = -11076307778575165LL;

	t93 = (x577*(x578%(x579*x580)));

	if (t93 != 40LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x586 = -1;
	static uint8_t x587 = UINT8_MAX;
	volatile int32_t t94 = -244658;

	t94 = (x585*(x586%(x587*x588)));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x589 = 1701000857U;
	static int8_t x590 = INT8_MAX;
	int16_t x591 = INT16_MIN;
	uint8_t x592 = 30U;
	static uint32_t t95 = 112U;

	t95 = (x589*(x590%(x591*x592)));

	if (t95 != 1278744039U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x601 = 123U;
	int16_t x604 = INT16_MAX;
	int32_t t96 = 30;

	t96 = (x601*(x602%(x603*x604)));

	if (t96 != 4030341) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x605 = -1;
	int16_t x606 = -1;
	static int16_t x607 = INT16_MAX;
	volatile int64_t x608 = -31184LL;
	int64_t t97 = -16166201LL;

	t97 = (x605*(x606%(x607*x608)));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x629 = -8395881291LL;
	int16_t x631 = 8;
	int16_t x632 = INT16_MAX;
	int64_t t98 = -16321829435LL;

	t98 = (x629*(x630%(x631*x632)));

	if (t98 != -550224080405685LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x633 = INT16_MIN;
	volatile int32_t x635 = -1;
	static int8_t x636 = -2;
	volatile int32_t t99 = -894547;

	t99 = (x633*(x634%(x635*x636)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

