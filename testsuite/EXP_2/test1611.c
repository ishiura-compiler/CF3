#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = 48872LL;
static uint64_t x9 = 19573936493LLU;
int64_t x10 = -28234102826938LL;
uint64_t x11 = 360154505890LLU;
int32_t x12 = 278097;
uint8_t x25 = UINT8_MAX;
static volatile int32_t t3 = -209211;
volatile int32_t x29 = 14;
uint32_t x30 = 9U;
uint16_t x32 = UINT16_MAX;
uint16_t x37 = UINT16_MAX;
volatile uint8_t x40 = UINT8_MAX;
static int32_t t5 = -1;
uint64_t x51 = UINT64_MAX;
volatile int64_t t8 = 399492LL;
volatile int16_t x63 = -1;
static uint8_t x64 = 72U;
int32_t t9 = 84657221;
uint8_t x65 = 9U;
int32_t x74 = 0;
static int64_t x76 = INT64_MIN;
static int32_t x79 = INT32_MAX;
volatile uint16_t x81 = 8U;
volatile int8_t x100 = INT8_MAX;
volatile uint64_t t16 = UINT64_MAX;
int32_t t17 = -810;
uint16_t x116 = UINT16_MAX;
uint64_t x117 = 3484450580623LLU;
int64_t x120 = INT64_MIN;
int64_t x151 = INT64_MIN;
int16_t x162 = INT16_MIN;
int64_t t26 = 2212173866914696909LL;
volatile int16_t x172 = -7;
int64_t t28 = -11965813207LL;
uint32_t x185 = UINT32_MAX;
static uint32_t t29 = UINT32_MAX;
static int32_t x197 = 0;
int32_t x208 = INT32_MIN;
volatile int64_t t34 = -53504621987592LL;
int64_t x238 = INT64_MIN;
volatile int32_t t38 = 21;
volatile int32_t x252 = -1;
uint64_t t39 = UINT64_MAX;
uint16_t x262 = 33U;
volatile uint64_t t41 = 61LLU;
volatile int16_t x297 = 11260;
int64_t x299 = -47752703LL;
static volatile int64_t t42 = -3460612866LL;
volatile int64_t x312 = INT64_MAX;
uint64_t x325 = 481437LLU;
volatile int8_t x332 = INT8_MAX;
static volatile int32_t t46 = 15443407;
volatile uint64_t t47 = UINT64_MAX;
volatile int16_t x345 = INT16_MAX;
volatile int32_t t49 = 8;
uint64_t x373 = UINT64_MAX;
int8_t x377 = INT8_MAX;
volatile int32_t t54 = 0;
uint32_t x403 = UINT32_MAX;
int32_t x420 = -1;
int64_t t63 = 8598LL;
int16_t x443 = INT16_MIN;
int32_t t65 = 130;
volatile uint64_t x494 = 0LLU;
volatile uint32_t x513 = 1793U;
int64_t x522 = 1532428724150756LL;
static uint16_t x545 = UINT16_MAX;
int8_t x546 = INT8_MAX;
int32_t t75 = -556770;
static int8_t x557 = INT8_MAX;
uint16_t x569 = 6U;
static uint64_t x570 = 117685664LLU;
volatile int32_t t79 = 66265321;
static int16_t x578 = -1;
static uint8_t x579 = 25U;
int64_t x580 = INT64_MIN;
int8_t x595 = 0;
int64_t t82 = 573024530856983029LL;
volatile int32_t t83 = 1;
int16_t x606 = INT16_MIN;
uint8_t x629 = 13U;
int32_t x635 = INT32_MIN;
int16_t x639 = INT16_MIN;
static int16_t x643 = INT16_MAX;
volatile uint64_t t90 = 35484018LLU;
int32_t x652 = INT32_MIN;
uint8_t x671 = 6U;
static uint64_t x675 = 12844LLU;
volatile int8_t x677 = 34;
int8_t x678 = -1;
volatile int16_t x682 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MIN;
	static int32_t x3 = INT32_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -56;

	t0 = ((x1>>(x2<=x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	uint16_t x6 = 12U;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = INT32_MIN;

	t1 = ((x5>>(x6<=x7))|x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t t2 = 29664238483745LLU;

	t2 = ((x9>>(x10<=x11))|x12);

	if (t2 != 19574210429LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x26 = 54U;
	int16_t x27 = -1;
	static volatile uint8_t x28 = UINT8_MAX;

	t3 = ((x25>>(x26<=x27))|x28);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x31 = 5;
	static volatile int32_t t4 = -63543064;

	t4 = ((x29>>(x30<=x31))|x32);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x38 = -1;
	int32_t x39 = INT32_MIN;

	t5 = ((x37>>(x38<=x39))|x40);

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = UINT64_MAX;
	int32_t x46 = -1;
	static uint32_t x47 = 5U;
	volatile uint8_t x48 = UINT8_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x45>>(x46<=x47))|x48);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = 142;
	uint32_t x50 = 1U;
	uint32_t x52 = UINT32_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = ((x49>>(x50<=x51))|x52);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = 420896272U;
	volatile int8_t x58 = INT8_MIN;
	uint32_t x59 = 20U;
	int64_t x60 = 134642011639982LL;

	t8 = ((x57>>(x58<=x59))|x60);

	if (t8 != 134642281143998LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x61 = INT8_MAX;
	static int16_t x62 = INT16_MIN;

	t9 = ((x61>>(x62<=x63))|x64);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t10 = -119619;

	t10 = ((x65>>(x66<=x67))|x68);

	if (t10 != -2147483644) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x69 = INT32_MAX;
	uint8_t x70 = 19U;
	volatile int8_t x71 = 0;
	volatile int64_t x72 = -230LL;
	int64_t t11 = 131026201929299LL;

	t11 = ((x69>>(x70<=x71))|x72);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x73 = UINT64_MAX;
	int8_t x75 = -1;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x73>>(x74<=x75))|x76);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 1278063762579777LL;
	int64_t x78 = -1LL;
	int64_t x80 = INT64_MIN;
	volatile int64_t t13 = -8402LL;

	t13 = ((x77>>(x78<=x79))|x80);

	if (t13 != -9222733004973485920LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	int16_t x84 = -1;
	int32_t t14 = -15;

	t14 = ((x81>>(x82<=x83))|x84);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x85 = 1;
	uint32_t x86 = 129926239U;
	uint32_t x87 = 4768U;
	volatile uint32_t x88 = UINT32_MAX;
	uint32_t t15 = UINT32_MAX;

	t15 = ((x85>>(x86<=x87))|x88);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x97 = UINT64_MAX;
	static uint32_t x98 = 40593617U;
	uint8_t x99 = 93U;

	t16 = ((x97>>(x98<=x99))|x100);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x109 = 17084U;
	int16_t x110 = INT16_MIN;
	int32_t x111 = 324624;
	uint16_t x112 = 709U;

	t17 = ((x109>>(x110<=x111))|x112);

	if (t17 != 9183) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = 1;
	int32_t x114 = -824626;
	volatile int8_t x115 = INT8_MIN;
	static volatile int32_t t18 = 77174;

	t18 = ((x113>>(x114<=x115))|x116);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x118 = -1;
	int64_t x119 = -26394176420LL;
	static uint64_t t19 = 23181LLU;

	t19 = ((x117>>(x118<=x119))|x120);

	if (t19 != 9223375521305356431LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x125 = UINT8_MAX;
	volatile uint16_t x126 = 13368U;
	int64_t x127 = 352LL;
	volatile int16_t x128 = INT16_MAX;
	volatile int32_t t20 = -93944588;

	t20 = ((x125>>(x126<=x127))|x128);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x137 = 4319U;
	volatile uint64_t x138 = UINT64_MAX;
	int32_t x139 = 0;
	static int32_t x140 = 233007751;
	int32_t t21 = 3;

	t21 = ((x137>>(x138<=x139))|x140);

	if (t21 != 233011935) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x141 = UINT8_MAX;
	static uint8_t x142 = UINT8_MAX;
	int8_t x143 = INT8_MAX;
	int64_t x144 = INT64_MIN;
	int64_t t22 = -481LL;

	t22 = ((x141>>(x142<=x143))|x144);

	if (t22 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x145 = 15U;
	uint16_t x146 = 469U;
	uint8_t x147 = 3U;
	static int32_t x148 = INT32_MIN;
	int32_t t23 = 42;

	t23 = ((x145>>(x146<=x147))|x148);

	if (t23 != -2147483633) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x149 = 12;
	int16_t x150 = 867;
	static int32_t x152 = -1;
	volatile int32_t t24 = 34760914;

	t24 = ((x149>>(x150<=x151))|x152);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile int64_t x158 = INT64_MIN;
	int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t25 = -497995354;

	t25 = ((x157>>(x158<=x159))|x160);

	if (t25 != -2147467265) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x163 = -1;
	int64_t x164 = INT64_MIN;

	t26 = ((x161>>(x162<=x163))|x164);

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x169 = 42U;
	int64_t x170 = 88305LL;
	static int32_t x171 = INT32_MIN;
	int32_t t27 = 1251;

	t27 = ((x169>>(x170<=x171))|x172);

	if (t27 != -5) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x173 = 1913U;
	int32_t x174 = -1;
	int16_t x175 = 9695;
	volatile int64_t x176 = -1LL;

	t28 = ((x173>>(x174<=x175))|x176);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x186 = INT32_MIN;
	volatile int32_t x187 = -7;
	int16_t x188 = INT16_MIN;

	t29 = ((x185>>(x186<=x187))|x188);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x189 = 1811U;
	int8_t x190 = -1;
	volatile int16_t x191 = -2;
	static volatile int32_t x192 = 30155570;
	uint32_t t30 = 46U;

	t30 = ((x189>>(x190<=x191))|x192);

	if (t30 != 30156595U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x193 = 84U;
	int8_t x194 = 6;
	int8_t x195 = -20;
	static int8_t x196 = -12;
	int32_t t31 = 49;

	t31 = ((x193>>(x194<=x195))|x196);

	if (t31 != -12) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x198 = INT64_MAX;
	int16_t x199 = 1114;
	static volatile int64_t x200 = -1LL;
	volatile int64_t t32 = -94712085319LL;

	t32 = ((x197>>(x198<=x199))|x200);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x205 = 4889LL;
	int64_t x206 = -1LL;
	int64_t x207 = INT64_MAX;
	static volatile int64_t t33 = -100251LL;

	t33 = ((x205>>(x206<=x207))|x208);

	if (t33 != -2147481204LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x209 = 94LL;
	volatile int64_t x210 = -1LL;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = 49377;

	t34 = ((x209>>(x210<=x211))|x212);

	if (t34 != 49391LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x217 = 5U;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = 14636527;
	int64_t x220 = 4055625715767LL;
	volatile int64_t t35 = -56935542516847LL;

	t35 = ((x217>>(x218<=x219))|x220);

	if (t35 != 4055625715767LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x237 = UINT16_MAX;
	static volatile int16_t x239 = INT16_MAX;
	static volatile uint64_t x240 = 0LLU;
	uint64_t t36 = 25010025912002588LLU;

	t36 = ((x237>>(x238<=x239))|x240);

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x241 = 1304U;
	int8_t x242 = -40;
	uint32_t x243 = 7784932U;
	static int8_t x244 = INT8_MIN;
	int32_t t37 = -280417;

	t37 = ((x241>>(x242<=x243))|x244);

	if (t37 != -104) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = 7;
	int64_t x246 = INT64_MAX;
	static int32_t x247 = -253392;
	static uint8_t x248 = 0U;

	t38 = ((x245>>(x246<=x247))|x248);

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x249 = 1808970846867407683LLU;
	uint64_t x250 = 2233579124729094048LLU;
	int64_t x251 = INT64_MIN;

	t39 = ((x249>>(x250<=x251))|x252);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x261 = 498;
	volatile int32_t x263 = -32245397;
	int8_t x264 = INT8_MIN;
	volatile int32_t t40 = -14;

	t40 = ((x261>>(x262<=x263))|x264);

	if (t40 != -14) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x289 = 15387520669LLU;
	int16_t x290 = -7210;
	volatile uint32_t x291 = UINT32_MAX;
	volatile int16_t x292 = INT16_MAX;

	t41 = ((x289>>(x290<=x291))|x292);

	if (t41 != 7693762559LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x298 = 47U;
	static int64_t x300 = -1LL;

	t42 = ((x297>>(x298<=x299))|x300);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x309 = 106653LLU;
	int8_t x310 = 23;
	uint8_t x311 = 3U;
	volatile uint64_t t43 = 3459975LLU;

	t43 = ((x309>>(x310<=x311))|x312);

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x326 = 5960LL;
	static volatile int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MAX;
	volatile uint64_t t44 = 280745443085997LLU;

	t44 = ((x325>>(x326<=x327))|x328);

	if (t44 != 262143LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x329 = 946467489U;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 1;
	static uint32_t t45 = 59275754U;

	t45 = ((x329>>(x330<=x331))|x332);

	if (t45 != 473233791U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x333 = INT32_MAX;
	static int32_t x334 = -1;
	static volatile int64_t x335 = -1LL;
	uint16_t x336 = 23U;

	t46 = ((x333>>(x334<=x335))|x336);

	if (t46 != 1073741823) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = -13;
	static int64_t x339 = 2104391535426LL;
	int8_t x340 = -1;

	t47 = ((x337>>(x338<=x339))|x340);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x346 = 504498050LL;
	static int8_t x347 = 0;
	static volatile int16_t x348 = INT16_MIN;
	int32_t t48 = 5354;

	t48 = ((x345>>(x346<=x347))|x348);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x353 = 22201U;
	volatile uint64_t x354 = 37735311LLU;
	int32_t x355 = -28252188;
	uint8_t x356 = 1U;

	t49 = ((x353>>(x354<=x355))|x356);

	if (t49 != 11101) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x361 = 0;
	int16_t x362 = -1;
	uint32_t x363 = 1766423669U;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = ((x361>>(x362<=x363))|x364);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x369 = 3;
	int32_t x370 = 37;
	static int64_t x371 = INT64_MAX;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t51 = -94500597;

	t51 = ((x369>>(x370<=x371))|x372);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = -1;
	static int32_t x376 = INT32_MIN;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x373>>(x374<=x375))|x376);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x378 = 0;
	int16_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x377>>(x378<=x379))|x380);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x381 = 97;
	int8_t x382 = -1;
	static int32_t x383 = INT32_MIN;
	int16_t x384 = 294;

	t54 = ((x381>>(x382<=x383))|x384);

	if (t54 != 359) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x389 = INT8_MAX;
	static int64_t x390 = INT64_MIN;
	uint32_t x391 = 96512U;
	int16_t x392 = INT16_MAX;
	volatile int32_t t55 = -526508;

	t55 = ((x389>>(x390<=x391))|x392);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x393 = INT32_MAX;
	static uint32_t x394 = 7531U;
	int16_t x395 = 309;
	int64_t x396 = INT64_MIN;
	volatile int64_t t56 = 1366621174262741LL;

	t56 = ((x393>>(x394<=x395))|x396);

	if (t56 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x401 = 1;
	volatile uint8_t x402 = UINT8_MAX;
	int32_t x404 = 15802;
	volatile int32_t t57 = -72413507;

	t57 = ((x401>>(x402<=x403))|x404);

	if (t57 != 15802) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x409 = 1926929U;
	int64_t x410 = INT64_MIN;
	static volatile int64_t x411 = INT64_MIN;
	static uint16_t x412 = 210U;
	static uint32_t t58 = 465093708U;

	t58 = ((x409>>(x410<=x411))|x412);

	if (t58 != 963546U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x413 = INT8_MAX;
	uint16_t x414 = 31137U;
	int32_t x415 = INT32_MAX;
	volatile int64_t x416 = 2583738LL;
	int64_t t59 = -186037LL;

	t59 = ((x413>>(x414<=x415))|x416);

	if (t59 != 2583743LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x417 = 856044154U;
	int16_t x418 = INT16_MIN;
	static volatile int64_t x419 = INT64_MIN;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x417>>(x418<=x419))|x420);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x421 = 352570LLU;
	int8_t x422 = -1;
	int32_t x423 = INT32_MAX;
	volatile uint32_t x424 = 40146370U;
	uint64_t t61 = 115449424843345400LLU;

	t61 = ((x421>>(x422<=x423))|x424);

	if (t61 != 40285663LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x429 = 14171436U;
	uint8_t x430 = 113U;
	int32_t x431 = INT32_MIN;
	int64_t x432 = 1765389228567479LL;
	static int64_t t62 = 235611490507680080LL;

	t62 = ((x429>>(x430<=x431))|x432);

	if (t62 != 1765389228572607LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x437 = 144U;
	int8_t x438 = INT8_MIN;
	volatile int8_t x439 = INT8_MAX;
	static int64_t x440 = -1LL;

	t63 = ((x437>>(x438<=x439))|x440);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x441 = INT64_MAX;
	int32_t x442 = 93790;
	int32_t x444 = INT32_MIN;
	int64_t t64 = 4470028374LL;

	t64 = ((x441>>(x442<=x443))|x444);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x453 = INT16_MAX;
	int16_t x454 = INT16_MIN;
	int64_t x455 = INT64_MIN;
	volatile int16_t x456 = 1;

	t65 = ((x453>>(x454<=x455))|x456);

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x477 = INT64_MAX;
	int16_t x478 = 1360;
	volatile uint8_t x479 = UINT8_MAX;
	int16_t x480 = INT16_MAX;
	int64_t t66 = INT64_MAX;

	t66 = ((x477>>(x478<=x479))|x480);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x481 = 770157860154299138LLU;
	int32_t x482 = 60910;
	int16_t x483 = 1444;
	volatile uint8_t x484 = UINT8_MAX;
	uint64_t t67 = 2498041LLU;

	t67 = ((x481>>(x482<=x483))|x484);

	if (t67 != 770157860154299391LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x489 = 3643;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MIN;
	int64_t x492 = INT64_MAX;
	static int64_t t68 = INT64_MAX;

	t68 = ((x489>>(x490<=x491))|x492);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x493 = UINT64_MAX;
	static int8_t x495 = 0;
	int16_t x496 = -4;
	static volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x493>>(x494<=x495))|x496);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x514 = 7;
	uint8_t x515 = 0U;
	int16_t x516 = -1;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x513>>(x514<=x515))|x516);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x517 = UINT64_MAX;
	int8_t x518 = -1;
	int64_t x519 = 141887928LL;
	volatile uint16_t x520 = UINT16_MAX;
	uint64_t t71 = 4LLU;

	t71 = ((x517>>(x518<=x519))|x520);

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x521 = 18;
	int16_t x523 = -1982;
	uint16_t x524 = 45U;
	volatile int32_t t72 = 227732;

	t72 = ((x521>>(x522<=x523))|x524);

	if (t72 != 63) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x529 = 1;
	volatile int16_t x530 = 2903;
	uint32_t x531 = 245977603U;
	uint64_t x532 = 386LLU;
	uint64_t t73 = 146374072407LLU;

	t73 = ((x529>>(x530<=x531))|x532);

	if (t73 != 386LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x541 = INT32_MAX;
	static int8_t x542 = -1;
	static int64_t x543 = INT64_MAX;
	int16_t x544 = 252;
	int32_t t74 = -739575330;

	t74 = ((x541>>(x542<=x543))|x544);

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x547 = 0;
	uint16_t x548 = 5U;

	t75 = ((x545>>(x546<=x547))|x548);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x549 = 2U;
	int8_t x550 = 0;
	volatile int32_t x551 = 1487;
	int64_t x552 = INT64_MIN;
	volatile int64_t t76 = 1694LL;

	t76 = ((x549>>(x550<=x551))|x552);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x558 = -1;
	static volatile int8_t x559 = -1;
	uint64_t x560 = 309LLU;
	volatile uint64_t t77 = 1693364688LLU;

	t77 = ((x557>>(x558<=x559))|x560);

	if (t77 != 319LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x561 = 82037226LLU;
	uint8_t x562 = 2U;
	static uint64_t x563 = 13LLU;
	uint16_t x564 = 3U;
	uint64_t t78 = 0LLU;

	t78 = ((x561>>(x562<=x563))|x564);

	if (t78 != 41018615LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x571 = UINT64_MAX;
	int16_t x572 = INT16_MIN;

	t79 = ((x569>>(x570<=x571))|x572);

	if (t79 != -32765) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x577 = INT8_MAX;
	static volatile int64_t t80 = 192189269LL;

	t80 = ((x577>>(x578<=x579))|x580);

	if (t80 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x585 = UINT32_MAX;
	int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MIN;
	static uint16_t x588 = 165U;
	uint32_t t81 = 10U;

	t81 = ((x585>>(x586<=x587))|x588);

	if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x593 = INT32_MAX;
	static uint8_t x594 = 4U;
	int64_t x596 = INT64_MIN;

	t82 = ((x593>>(x594<=x595))|x596);

	if (t82 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x597 = 82U;
	int8_t x598 = 2;
	static volatile int32_t x599 = INT32_MIN;
	int32_t x600 = INT32_MIN;

	t83 = ((x597>>(x598<=x599))|x600);

	if (t83 != -2147483566) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x605 = INT32_MAX;
	int16_t x607 = INT16_MIN;
	int64_t x608 = INT64_MIN;
	volatile int64_t t84 = 46049391LL;

	t84 = ((x605>>(x606<=x607))|x608);

	if (t84 != -9223372035781033985LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x613 = 0U;
	int64_t x614 = 2605797822LL;
	uint64_t x615 = UINT64_MAX;
	uint32_t x616 = 27U;
	volatile uint32_t t85 = 83U;

	t85 = ((x613>>(x614<=x615))|x616);

	if (t85 != 27U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x625 = INT64_MAX;
	static uint64_t x626 = 48633LLU;
	int64_t x627 = 62LL;
	static uint16_t x628 = 3180U;
	static volatile int64_t t86 = INT64_MAX;

	t86 = ((x625>>(x626<=x627))|x628);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x630 = 99U;
	volatile int16_t x631 = INT16_MAX;
	int16_t x632 = -1;
	int32_t t87 = -93124663;

	t87 = ((x629>>(x630<=x631))|x632);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x633 = INT32_MAX;
	int16_t x634 = INT16_MIN;
	int32_t x636 = -1;
	static int32_t t88 = 0;

	t88 = ((x633>>(x634<=x635))|x636);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x637 = 306745477U;
	volatile int32_t x638 = INT32_MIN;
	int8_t x640 = INT8_MAX;
	volatile uint32_t t89 = 15U;

	t89 = ((x637>>(x638<=x639))|x640);

	if (t89 != 153372799U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x641 = UINT64_MAX;
	volatile int8_t x642 = -1;
	int16_t x644 = INT16_MAX;

	t90 = ((x641>>(x642<=x643))|x644);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x645 = 1591LLU;
	int64_t x646 = INT64_MAX;
	int8_t x647 = INT8_MAX;
	uint16_t x648 = UINT16_MAX;
	uint64_t t91 = 7781412LLU;

	t91 = ((x645>>(x646<=x647))|x648);

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x649 = 21U;
	static uint32_t x650 = UINT32_MAX;
	volatile int8_t x651 = INT8_MIN;
	int32_t t92 = 0;

	t92 = ((x649>>(x650<=x651))|x652);

	if (t92 != -2147483627) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x653 = 384LL;
	volatile int64_t x654 = 4300644322022051101LL;
	int64_t x655 = 1990131879LL;
	int64_t x656 = INT64_MIN;
	int64_t t93 = -106893689LL;

	t93 = ((x653>>(x654<=x655))|x656);

	if (t93 != -9223372036854775424LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x669 = 14929072;
	uint8_t x670 = 52U;
	int16_t x672 = 5;
	int32_t t94 = 4024;

	t94 = ((x669>>(x670<=x671))|x672);

	if (t94 != 14929077) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x673 = 264U;
	int32_t x674 = -1;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x673>>(x674<=x675))|x676);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x679 = 6682068LL;
	volatile int32_t x680 = INT32_MIN;
	int32_t t96 = 236;

	t96 = ((x677>>(x678<=x679))|x680);

	if (t96 != -2147483631) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x681 = 0;
	int64_t x683 = INT64_MIN;
	volatile int16_t x684 = -3;
	volatile int32_t t97 = 6105306;

	t97 = ((x681>>(x682<=x683))|x684);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x685 = 63U;
	static uint8_t x686 = UINT8_MAX;
	volatile int16_t x687 = -1;
	static int8_t x688 = INT8_MIN;
	int32_t t98 = -10;

	t98 = ((x685>>(x686<=x687))|x688);

	if (t98 != -65) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x689 = UINT64_MAX;
	static volatile int16_t x690 = 1;
	int8_t x691 = INT8_MAX;
	int16_t x692 = INT16_MIN;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x689>>(x690<=x691))|x692);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

