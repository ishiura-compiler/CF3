#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x17 = 1;
uint32_t x40 = 1042U;
int64_t x47 = INT64_MIN;
int16_t x52 = 9764;
volatile int32_t t6 = 100;
static uint64_t t8 = 162156976336060LLU;
int64_t x108 = -1LL;
volatile int8_t x111 = INT8_MAX;
uint32_t x126 = UINT32_MAX;
int8_t x131 = 9;
volatile int32_t x142 = -1;
uint32_t x143 = 1635U;
int32_t x144 = -1;
int8_t x163 = -5;
int32_t x187 = -11;
static volatile int32_t x189 = 4059;
static volatile int32_t t25 = -997516;
int16_t x206 = -121;
uint16_t x209 = 14268U;
uint64_t x210 = 4LLU;
volatile uint64_t t29 = 161821636928828LLU;
int16_t x223 = -3632;
int64_t x246 = -1LL;
volatile int64_t t32 = 1174LL;
uint8_t x251 = 3U;
volatile int16_t x258 = INT16_MIN;
volatile int64_t t34 = 307100969923082309LL;
uint32_t x266 = 63U;
volatile uint16_t x267 = 1988U;
volatile uint32_t t36 = 871064U;
uint8_t x279 = UINT8_MAX;
int64_t x293 = INT64_MIN;
int64_t x295 = -9036681407411LL;
int32_t x297 = INT32_MIN;
int8_t x298 = INT8_MIN;
uint64_t x310 = 1LLU;
int16_t x312 = 1;
int8_t x329 = INT8_MIN;
volatile int32_t x330 = INT32_MAX;
int16_t x331 = -6;
volatile uint16_t x334 = UINT16_MAX;
int32_t x335 = INT32_MAX;
volatile int64_t t46 = -34216115345925201LL;
uint32_t x345 = UINT32_MAX;
int32_t x347 = INT32_MAX;
int64_t t47 = 63474695525356LL;
static volatile int32_t x362 = -1;
uint32_t x379 = 116032U;
int16_t x393 = -1;
int64_t x395 = INT64_MIN;
int16_t x401 = -6;
int16_t x403 = INT16_MIN;
int64_t x407 = 27LL;
int64_t x409 = INT64_MAX;
static volatile uint16_t x415 = UINT16_MAX;
uint64_t x433 = 3664315250027373145LLU;
static uint64_t t60 = 54036006243302002LLU;
volatile int32_t t61 = 881;
static volatile int16_t x458 = INT16_MIN;
static volatile uint8_t x459 = UINT8_MAX;
int32_t x462 = INT32_MAX;
uint8_t x468 = 7U;
int16_t x469 = -1;
static int64_t t66 = 41566LL;
int16_t x474 = 3165;
int64_t x476 = -19030232393LL;
volatile int64_t t67 = 3832600122274LL;
static uint32_t x482 = 757165180U;
volatile int32_t x484 = INT32_MAX;
static int64_t x487 = INT64_MAX;
uint16_t x491 = 217U;
uint64_t t71 = 13418084LLU;
volatile int64_t t72 = 371355LL;
int32_t x512 = 16015833;
volatile int8_t x522 = -1;
uint8_t x526 = UINT8_MAX;
uint64_t t76 = 25596641970220LLU;
uint32_t x529 = UINT32_MAX;
uint64_t t77 = 230239437484442646LLU;
static int32_t x538 = INT32_MIN;
volatile uint64_t t80 = 228372468479LLU;
volatile int64_t x557 = INT64_MIN;
static volatile int32_t x574 = INT32_MIN;
uint64_t x576 = 1398LLU;
static uint64_t t83 = 57LLU;
int8_t x613 = 1;
volatile int8_t x626 = -11;
static int16_t x641 = 1;
uint64_t x656 = 57798762873LLU;
static uint32_t x662 = UINT32_MAX;
int8_t x683 = INT8_MIN;
uint8_t x710 = UINT8_MAX;


void f0(void) {
	uint16_t x9 = 4977U;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = 77U;
	int8_t x12 = INT8_MIN;
	int32_t t0 = 13544501;

	t0 = (x9%((x10%x11)&x12));

	if (t0 != 113) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x13 = INT32_MIN;
	int64_t x14 = -4877064LL;
	int32_t x15 = -442031919;
	int32_t x16 = INT32_MIN;
	volatile int64_t t1 = -9957161868797506LL;

	t1 = (x13%((x14%x15)&x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	int16_t x20 = INT16_MAX;
	static volatile int64_t t2 = -259747LL;

	t2 = (x17%((x18%x19)&x20));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -1;
	int8_t x26 = 1;
	uint8_t x27 = 61U;
	static int64_t x28 = INT64_MAX;
	volatile int64_t t3 = -28056766LL;

	t3 = (x25%((x26%x27)&x28));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 11U;
	int64_t x38 = -1LL;
	static int16_t x39 = 58;
	int64_t t4 = 4991LL;

	t4 = (x37%((x38%x39)&x40));

	if (t4 != 11LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x45 = -1LL;
	uint16_t x46 = 2819U;
	uint16_t x48 = 15851U;
	int64_t t5 = 10LL;

	t5 = (x45%((x46%x47)&x48));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	int32_t x51 = INT32_MIN;

	t6 = (x49%((x50%x51)&x52));

	if (t6 != -9016) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x57 = -1;
	static int64_t x58 = INT64_MIN;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = 14754376080LLU;
	volatile uint64_t t7 = 222672546385832LLU;

	t7 = (x57%((x58%x59)&x60));

	if (t7 != 10322575359LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x61 = 2303841029868744LLU;
	volatile uint64_t x62 = 2325560584326LLU;
	volatile int64_t x63 = -2061653737799569587LL;
	volatile uint16_t x64 = UINT16_MAX;

	t8 = (x61%((x62%x63)&x64));

	if (t8 != 16972LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x81 = INT16_MIN;
	static int64_t x82 = 14805LL;
	static uint32_t x83 = 47073939U;
	volatile uint16_t x84 = 2704U;
	volatile int64_t t9 = -7977291398LL;

	t9 = (x81%((x82%x83)&x84));

	if (t9 != -2080LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x101 = -1;
	int16_t x102 = 1;
	uint64_t x103 = 341272769LLU;
	volatile int64_t x104 = INT64_MAX;
	volatile uint64_t t10 = 13LLU;

	t10 = (x101%((x102%x103)&x104));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x105 = 0U;
	static volatile int32_t x106 = -1;
	uint16_t x107 = 4U;
	volatile int64_t t11 = 962088LL;

	t11 = (x105%((x106%x107)&x108));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int64_t x110 = -296508LL;
	static int64_t x112 = -1LL;
	int64_t t12 = 2385699704LL;

	t12 = (x109%((x110%x111)&x112));

	if (t12 != -8LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x113 = 0;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = INT16_MIN;
	static uint8_t x116 = UINT8_MAX;
	int32_t t13 = -140050;

	t13 = (x113%((x114%x115)&x116));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x117 = -1;
	int16_t x118 = 13088;
	volatile int16_t x119 = 48;
	volatile uint32_t x120 = 296387764U;
	volatile uint32_t t14 = 142972280U;

	t14 = (x117%((x118%x119)&x120));

	if (t14 != 31U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x125 = INT64_MIN;
	static int64_t x127 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	volatile int64_t t15 = 1LL;

	t15 = (x125%((x126%x127)&x128));

	if (t15 != -8192LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x129 = 4340390903500LL;
	int64_t x130 = -56LL;
	int8_t x132 = INT8_MIN;
	volatile int64_t t16 = -31221LL;

	t16 = (x129%((x130%x131)&x132));

	if (t16 != 76LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x141 = INT64_MIN;
	volatile int64_t t17 = 740412335672849LL;

	t17 = (x141%((x142%x143)&x144));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x149 = INT16_MIN;
	static int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MAX;
	volatile int8_t x152 = -1;
	int32_t t18 = 1;

	t18 = (x149%((x150%x151)&x152));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static volatile uint32_t x158 = 523839U;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t19 = 158LLU;

	t19 = (x157%((x158%x159)&x160));

	if (t19 != 16383LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x161 = 43U;
	int64_t x162 = -5766165254796738LL;
	int8_t x164 = INT8_MAX;
	static volatile int64_t t20 = -205944LL;

	t20 = (x161%((x162%x163)&x164));

	if (t20 != 43LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x177 = INT64_MIN;
	uint8_t x178 = 19U;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = INT64_MAX;
	volatile int64_t t21 = 314223761896142LL;

	t21 = (x177%((x178%x179)&x180));

	if (t21 != -18LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	volatile uint64_t x183 = UINT64_MAX;
	volatile int8_t x184 = -1;
	uint64_t t22 = 1107956290LLU;

	t22 = (x181%((x182%x183)&x184));

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint16_t x186 = 3259U;
	uint32_t x188 = 17U;
	static uint32_t t23 = 48392386U;

	t23 = (x185%((x186%x187)&x188));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x190 = -30;
	volatile uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MIN;
	static volatile uint64_t t24 = 1022368809455173699LLU;

	t24 = (x189%((x190%x191)&x192));

	if (t24 != 4059LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = 345U;
	int8_t x196 = INT8_MAX;

	t25 = (x193%((x194%x195)&x196));

	if (t25 != -36) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MIN;
	static uint32_t x204 = 9688094U;
	volatile uint32_t t26 = 208438U;

	t26 = (x201%((x202%x203)&x204));

	if (t26 != 2454U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x205 = 110U;
	int32_t x207 = 452;
	static uint16_t x208 = 28405U;
	volatile int32_t t27 = 187925;

	t27 = (x205%((x206%x207)&x208));

	if (t27 != 110) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x211 = 7042367603766083189LLU;
	uint16_t x212 = 3542U;
	volatile uint64_t t28 = 0LLU;

	t28 = (x209%((x210%x211)&x212));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x213 = INT32_MAX;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 33671828426LLU;
	uint32_t x216 = 364U;

	t29 = (x213%((x214%x215)&x216));

	if (t29 != 91LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x221 = -217929496;
	uint64_t x222 = 1274603874360830555LLU;
	volatile int8_t x224 = INT8_MAX;
	volatile uint64_t t30 = 2103953273155LLU;

	t30 = (x221%((x222%x223)&x224));

	if (t30 != 50LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x225 = -3;
	int32_t x226 = -1;
	uint32_t x227 = 7813887U;
	int64_t x228 = INT64_MAX;
	int64_t t31 = 82634965LL;

	t31 = (x225%((x226%x227)&x228));

	if (t31 != -3LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x245 = INT16_MIN;
	static uint16_t x247 = 2510U;
	static int16_t x248 = INT16_MIN;

	t32 = (x245%((x246%x247)&x248));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x249 = 30U;
	static volatile int64_t x250 = -1LL;
	static int64_t x252 = INT64_MAX;
	int64_t t33 = -734883LL;

	t33 = (x249%((x250%x251)&x252));

	if (t33 != 30LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x259 = INT32_MIN;
	static int64_t x260 = INT64_MAX;

	t34 = (x257%((x258%x259)&x260));

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x261 = 38U;
	int32_t x262 = 1;
	int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;
	uint32_t t35 = 229266U;

	t35 = (x261%((x262%x263)&x264));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x265 = INT16_MAX;
	static uint32_t x268 = UINT32_MAX;

	t36 = (x265%((x266%x267)&x268));

	if (t36 != 7U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x277 = -118;
	int8_t x278 = INT8_MIN;
	int16_t x280 = -1;
	static volatile int32_t t37 = 4991;

	t37 = (x277%((x278%x279)&x280));

	if (t37 != -118) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x294 = 2684186735659842894LLU;
	int16_t x296 = -1;
	static uint64_t t38 = 8178790302034879LLU;

	t38 = (x293%((x294%x295)&x296));

	if (t38 != 1170811829875247126LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x299 = INT64_MAX;
	int64_t x300 = -1LL;
	int64_t t39 = 33151311015LL;

	t39 = (x297%((x298%x299)&x300));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x305 = -3;
	static int8_t x306 = 55;
	uint16_t x307 = 6070U;
	static int16_t x308 = INT16_MAX;
	int32_t t40 = -269;

	t40 = (x305%((x306%x307)&x308));

	if (t40 != -3) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x309 = 7U;
	int16_t x311 = INT16_MAX;
	uint64_t t41 = 4026445760855295LLU;

	t41 = (x309%((x310%x311)&x312));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x313 = 2;
	int64_t x314 = -1LL;
	int32_t x315 = 51;
	int32_t x316 = INT32_MIN;
	static volatile int64_t t42 = 39LL;

	t42 = (x313%((x314%x315)&x316));

	if (t42 != 2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x325 = -2;
	static uint64_t x326 = 8323498923335970LLU;
	int8_t x327 = INT8_MAX;
	static volatile int16_t x328 = -16;
	volatile uint64_t t43 = 1945LLU;

	t43 = (x325%((x326%x327)&x328));

	if (t43 != 14LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x332 = 148778063LL;
	static volatile int64_t t44 = -71148LL;

	t44 = (x329%((x330%x331)&x332));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x333 = 2U;
	static uint16_t x336 = 10U;
	int32_t t45 = 58385;

	t45 = (x333%((x334%x335)&x336));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x341 = 21U;
	int64_t x342 = -1LL;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;

	t46 = (x341%((x342%x343)&x344));

	if (t46 != 21LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x346 = -55457773684738945LL;
	uint32_t x348 = UINT32_MAX;

	t47 = (x345%((x346%x347)&x348));

	if (t47 != 638408858LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x357 = INT64_MAX;
	int16_t x358 = INT16_MAX;
	int16_t x359 = 9172;
	int32_t x360 = -1;
	volatile int64_t t48 = -13683LL;

	t48 = (x357%((x358%x359)&x360));

	if (t48 != 2391LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x363 = INT16_MAX;
	volatile int16_t x364 = INT16_MAX;
	int32_t t49 = -6184925;

	t49 = (x361%((x362%x363)&x364));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x373 = -1LL;
	int32_t x374 = -2;
	uint32_t x375 = 10U;
	uint8_t x376 = UINT8_MAX;
	volatile int64_t t50 = -2663LL;

	t50 = (x373%((x374%x375)&x376));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x377 = -1736293;
	uint64_t x378 = 234LLU;
	uint32_t x380 = UINT32_MAX;
	uint64_t t51 = 1538053827959898667LLU;

	t51 = (x377%((x378%x379)&x380));

	if (t51 != 3LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x385 = 110239339LLU;
	int64_t x386 = 206576526LL;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	uint64_t t52 = 1942232LLU;

	t52 = (x385%((x386%x387)&x388));

	if (t52 != 110239339LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x394 = INT32_MIN;
	volatile int64_t x396 = INT64_MIN;
	int64_t t53 = -1110022874730942176LL;

	t53 = (x393%((x394%x395)&x396));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x402 = 1944807LLU;
	int16_t x404 = INT16_MIN;
	static uint64_t t54 = 1288242945447LLU;

	t54 = (x401%((x402%x403)&x404));

	if (t54 != 1015802LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x405 = 8U;
	uint32_t x406 = UINT32_MAX;
	int16_t x408 = -3583;
	static volatile int64_t t55 = -116894751625LL;

	t55 = (x405%((x406%x407)&x408));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x410 = INT8_MIN;
	int32_t x411 = -102666855;
	static uint64_t x412 = 133995479896256356LLU;
	uint64_t t56 = 55581911409LLU;

	t56 = (x409%((x410%x411)&x412));

	if (t56 != 111679403909350399LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x413 = 0;
	int64_t x414 = -4000LL;
	int32_t x416 = INT32_MIN;
	volatile int64_t t57 = -4143582609LL;

	t57 = (x413%((x414%x415)&x416));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x421 = UINT32_MAX;
	uint16_t x422 = UINT16_MAX;
	static int32_t x423 = INT32_MIN;
	int8_t x424 = -8;
	volatile uint32_t t58 = 950140U;

	t58 = (x421%((x422%x423)&x424));

	if (t58 != 63U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x425 = UINT16_MAX;
	volatile uint64_t x426 = UINT64_MAX;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = UINT16_MAX;
	uint64_t t59 = 5581376259889999LLU;

	t59 = (x425%((x426%x427)&x428));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x434 = 116658531829980946LLU;
	static uint16_t x435 = 331U;
	volatile int8_t x436 = -1;

	t60 = (x433%((x434%x435)&x436));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x441 = -1;
	int32_t x442 = -1;
	int8_t x443 = 2;
	int16_t x444 = INT16_MAX;

	t61 = (x441%((x442%x443)&x444));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x453 = 37U;
	static int16_t x454 = INT16_MIN;
	uint32_t x455 = UINT32_MAX;
	static uint32_t x456 = UINT32_MAX;
	static volatile uint32_t t62 = 10411276U;

	t62 = (x453%((x454%x455)&x456));

	if (t62 != 37U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x457 = UINT64_MAX;
	int16_t x460 = -971;
	uint64_t t63 = 189LLU;

	t63 = (x457%((x458%x459)&x460));

	if (t63 != 1023LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x461 = INT64_MIN;
	uint16_t x463 = UINT16_MAX;
	int16_t x464 = -1;
	int64_t t64 = -5226679197922LL;

	t64 = (x461%((x462%x463)&x464));

	if (t64 != -8LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x465 = INT16_MAX;
	uint8_t x466 = 30U;
	volatile uint32_t x467 = 25U;
	static uint32_t t65 = 61U;

	t65 = (x465%((x466%x467)&x468));

	if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x470 = INT32_MIN;
	volatile int64_t x471 = INT64_MIN;
	int32_t x472 = -1;

	t66 = (x469%((x470%x471)&x472));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x473 = INT16_MIN;
	volatile uint16_t x475 = 13U;

	t67 = (x473%((x474%x475)&x476));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x481 = INT64_MAX;
	int64_t x483 = INT64_MIN;
	static int64_t t68 = -1LL;

	t68 = (x481%((x482%x483)&x484));

	if (t68 != 105869767LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x485 = INT32_MIN;
	volatile int32_t x486 = -7243197;
	uint8_t x488 = 107U;
	static volatile int64_t t69 = 508579995814100910LL;

	t69 = (x485%((x486%x487)&x488));

	if (t69 != -50LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x489 = INT64_MIN;
	int32_t x490 = INT32_MIN;
	int16_t x492 = INT16_MAX;
	volatile int64_t t70 = 29363339593LL;

	t70 = (x489%((x490%x491)&x492));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x493 = 6494269779437907LLU;
	static uint64_t x494 = 242314240389LLU;
	uint32_t x495 = 666U;
	int16_t x496 = 1;

	t71 = (x493%((x494%x495)&x496));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x497 = UINT8_MAX;
	volatile int16_t x498 = INT16_MIN;
	volatile int32_t x499 = INT32_MIN;
	int64_t x500 = -129823416LL;

	t72 = (x497%((x498%x499)&x500));

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MIN;
	volatile int32_t x511 = INT32_MIN;
	int32_t t73 = 23521;

	t73 = (x509%((x510%x511)&x512));

	if (t73 != -4718592) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x517 = UINT32_MAX;
	volatile int16_t x518 = -1;
	uint32_t x519 = 8528248U;
	int16_t x520 = INT16_MIN;
	volatile uint32_t t74 = 13354U;

	t74 = (x517%((x518%x519)&x520));

	if (t74 != 1048575U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x521 = INT8_MAX;
	uint16_t x523 = 1377U;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t75 = 4217400856LLU;

	t75 = (x521%((x522%x523)&x524));

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x525 = INT64_MAX;
	volatile uint64_t x527 = UINT64_MAX;
	int8_t x528 = INT8_MAX;

	t76 = (x525%((x526%x527)&x528));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x530 = UINT16_MAX;
	uint32_t x531 = UINT32_MAX;
	static uint64_t x532 = UINT64_MAX;

	t77 = (x529%((x530%x531)&x532));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x537 = 10;
	volatile uint32_t x539 = 106829U;
	int16_t x540 = INT16_MAX;
	static uint32_t t78 = 45822756U;

	t78 = (x537%((x538%x539)&x540));

	if (t78 != 10U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x545 = 30536390527093792LL;
	uint8_t x546 = UINT8_MAX;
	volatile int16_t x547 = -13142;
	static int8_t x548 = INT8_MIN;
	static int64_t t79 = 599349393374307LL;

	t79 = (x545%((x546%x547)&x548));

	if (t79 != 32LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x549 = INT16_MIN;
	uint64_t x550 = 5773LLU;
	static uint16_t x551 = UINT16_MAX;
	uint64_t x552 = 103219417540078LLU;

	t80 = (x549%((x550%x551)&x552));

	if (t80 != 176LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x558 = 4181791U;
	static volatile int16_t x559 = INT16_MIN;
	uint16_t x560 = UINT16_MAX;
	volatile int64_t t81 = -3887254LL;

	t81 = (x557%((x558%x559)&x560));

	if (t81 != -46606LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x561 = UINT32_MAX;
	int16_t x562 = -1;
	static int32_t x563 = -19576;
	int16_t x564 = -2680;
	volatile uint32_t t82 = 498312336U;

	t82 = (x561%((x562%x563)&x564));

	if (t82 != 2679U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x573 = 77U;
	static int32_t x575 = 3988;

	t83 = (x573%((x574%x575)&x576));

	if (t83 != 29LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x581 = INT8_MIN;
	int64_t x582 = INT64_MIN;
	int64_t x583 = 144612133870168130LL;
	int8_t x584 = INT8_MIN;
	int64_t t84 = 357573605654LL;

	t84 = (x581%((x582%x583)&x584));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x589 = 445446LLU;
	static int32_t x590 = -1;
	int16_t x591 = INT16_MIN;
	int32_t x592 = -1;
	volatile uint64_t t85 = 310583932765237587LLU;

	t85 = (x589%((x590%x591)&x592));

	if (t85 != 445446LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x597 = -31;
	volatile int8_t x598 = -5;
	int64_t x599 = INT64_MAX;
	int64_t x600 = -1LL;
	volatile int64_t t86 = 581303LL;

	t86 = (x597%((x598%x599)&x600));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x601 = 359;
	uint32_t x602 = UINT32_MAX;
	int64_t x603 = INT64_MIN;
	static volatile int32_t x604 = INT32_MIN;
	static volatile int64_t t87 = -1LL;

	t87 = (x601%((x602%x603)&x604));

	if (t87 != 359LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x614 = INT32_MAX;
	uint8_t x615 = 39U;
	uint32_t x616 = UINT32_MAX;
	volatile uint32_t t88 = 435784U;

	t88 = (x613%((x614%x615)&x616));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x625 = UINT8_MAX;
	int32_t x627 = INT32_MIN;
	volatile int8_t x628 = -1;
	static volatile int32_t t89 = -52;

	t89 = (x625%((x626%x627)&x628));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x629 = -1;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = UINT64_MAX;
	int64_t x632 = INT64_MIN;
	uint64_t t90 = 13941527LLU;

	t90 = (x629%((x630%x631)&x632));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x637 = -517436141569062LL;
	int32_t x638 = INT32_MIN;
	volatile uint16_t x639 = 608U;
	int8_t x640 = INT8_MIN;
	int64_t t91 = -17635268539288555LL;

	t91 = (x637%((x638%x639)&x640));

	if (t91 != -294LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x642 = 59U;
	uint16_t x643 = 4581U;
	static int32_t x644 = INT32_MAX;
	volatile int32_t t92 = 19396;

	t92 = (x641%((x642%x643)&x644));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x649 = INT64_MIN;
	static int32_t x650 = 46397;
	uint16_t x651 = UINT16_MAX;
	uint16_t x652 = 298U;
	volatile int64_t t93 = -220LL;

	t93 = (x649%((x650%x651)&x652));

	if (t93 != -80LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x653 = 3298U;
	volatile int16_t x654 = INT16_MIN;
	int64_t x655 = -215063184096736973LL;
	volatile uint64_t t94 = 218574LLU;

	t94 = (x653%((x654%x655)&x656));

	if (t94 != 3298LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x661 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	uint32_t x664 = UINT32_MAX;
	volatile int64_t t95 = -1655758495919LL;

	t95 = (x661%((x662%x663)&x664));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x665 = INT8_MIN;
	uint64_t x666 = 170629105224825LLU;
	volatile uint64_t x667 = 3986095182681LLU;
	int32_t x668 = INT32_MIN;
	volatile uint64_t t96 = 588LLU;

	t96 = (x665%((x666%x667)&x668));

	if (t96 != 2851858284416LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x669 = INT16_MAX;
	uint64_t x670 = 7927462279519573LLU;
	int32_t x671 = INT32_MIN;
	static volatile uint64_t x672 = 16494856859LLU;
	static uint64_t t97 = 541084258094011LLU;

	t97 = (x669%((x670%x671)&x672));

	if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x681 = 1;
	uint32_t x682 = 288U;
	int16_t x684 = 50;
	volatile uint32_t t98 = 212040545U;

	t98 = (x681%((x682%x683)&x684));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x709 = 790950U;
	int8_t x711 = INT8_MAX;
	int16_t x712 = INT16_MAX;
	uint32_t t99 = 792234551U;

	t99 = (x709%((x710%x711)&x712));

	if (t99 != 0U) { NG(); } else { ; }
	
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

