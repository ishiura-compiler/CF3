#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
int8_t x4 = 1;
int16_t x22 = -42;
int32_t x32 = INT32_MAX;
static volatile int32_t t2 = 5838;
volatile int64_t x97 = INT64_MAX;
uint32_t x100 = 99U;
int16_t x104 = -1;
int32_t x127 = INT32_MIN;
volatile int32_t t10 = 83;
int32_t x142 = -1;
int32_t t12 = -338;
uint8_t x163 = 18U;
int16_t x173 = INT16_MIN;
int32_t x187 = -1121;
int32_t x191 = INT32_MIN;
int16_t x192 = 7;
uint8_t x193 = UINT8_MAX;
int32_t x195 = -39391360;
volatile int32_t t18 = -1;
volatile int32_t x205 = 3;
static volatile int32_t x213 = -86;
static uint16_t x215 = 36U;
int32_t x217 = 98510048;
uint32_t x227 = UINT32_MAX;
static uint64_t x236 = 5LLU;
int32_t x237 = INT32_MIN;
int8_t x239 = INT8_MAX;
static volatile int8_t x254 = -3;
volatile int8_t x255 = 9;
int16_t x265 = 274;
uint16_t x266 = 32U;
int64_t x267 = INT64_MIN;
int64_t x304 = -1LL;
uint16_t x308 = 1U;
static uint64_t t36 = 0LLU;
static int64_t x339 = INT64_MIN;
int64_t x341 = INT64_MIN;
static volatile int32_t t41 = 0;
int16_t x363 = -1;
uint16_t x391 = 231U;
volatile uint64_t t46 = 10751498349LLU;
int64_t x409 = -5039LL;
int64_t x410 = 32461150530LL;
volatile int32_t t51 = 845603;
int32_t t52 = 3590304;
static uint64_t x446 = 4601954228845923LLU;
int32_t x454 = INT32_MAX;
uint32_t x457 = 112980U;
uint64_t x458 = 47000LLU;
int32_t x459 = INT32_MIN;
uint8_t x494 = 0U;
volatile int64_t x516 = -107312LL;
int8_t x532 = -1;
volatile int32_t t63 = -3;
volatile uint32_t x541 = UINT32_MAX;
int64_t t64 = 10358169661LL;
static int16_t x564 = INT16_MAX;
int8_t x569 = -1;
int64_t x577 = -1LL;
volatile int32_t x593 = INT32_MIN;
int16_t x598 = INT16_MIN;
static int32_t x599 = INT32_MIN;
volatile int32_t x606 = INT32_MIN;
static uint8_t x607 = UINT8_MAX;
int32_t t72 = -2;
static int32_t x613 = -1;
uint32_t x614 = 143380U;
int64_t t73 = 13LL;
uint32_t x643 = 8U;
volatile uint8_t x644 = 3U;
int8_t x645 = 4;
int16_t x658 = -1;
int8_t x660 = INT8_MAX;
int64_t t79 = -4101660145100LL;
volatile int8_t x668 = INT8_MIN;
uint64_t x677 = 37970748960770626LLU;
int64_t x704 = -1LL;
int16_t x708 = 20;
static int16_t x709 = INT16_MAX;
static volatile int8_t x718 = -29;
int64_t x730 = -16906LL;
volatile int64_t x740 = -7260186909210598LL;
static int8_t x785 = INT8_MAX;
uint8_t x797 = 5U;
int64_t x806 = INT64_MIN;
int8_t x829 = INT8_MAX;
uint64_t x831 = UINT64_MAX;
uint8_t x836 = 26U;
volatile int16_t x839 = INT16_MAX;
uint32_t x842 = 43300U;


void f0(void) {
	volatile int16_t x1 = -1;
	int32_t x2 = INT32_MIN;
	int32_t t0 = -1354;

	t0 = ((x1==x2)%(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x21 = 57U;
	int16_t x23 = 193;
	static uint32_t x24 = 9U;
	uint32_t t1 = 1363850U;

	t1 = ((x21==x22)%(x23/x24));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MIN;

	t2 = ((x29==x30)%(x31/x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x41 = -43183;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MAX;
	int8_t x44 = -20;
	volatile int32_t t3 = 0;

	t3 = ((x41==x42)%(x43/x44));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = 1U;
	uint16_t x55 = 119U;
	int64_t x56 = -1LL;
	volatile int64_t t4 = 364805019LL;

	t4 = ((x53==x54)%(x55/x56));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = 1;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t5 = 227093;

	t5 = ((x57==x58)%(x59/x60));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = -1;
	uint32_t x63 = 445340U;
	uint16_t x64 = 24850U;
	volatile uint32_t t6 = 112U;

	t6 = ((x61==x62)%(x63/x64));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x98 = INT16_MIN;
	volatile int32_t x99 = INT32_MIN;
	volatile uint32_t t7 = 28552U;

	t7 = ((x97==x98)%(x99/x100));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = -79;
	volatile int8_t x103 = INT8_MAX;
	static volatile int32_t t8 = 4226;

	t8 = ((x101==x102)%(x103/x104));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x105 = -2109294142657340LL;
	static volatile int8_t x106 = INT8_MAX;
	int64_t x107 = -14667551710719348LL;
	int8_t x108 = INT8_MAX;
	static volatile int64_t t9 = 1263543017653LL;

	t9 = ((x105==x106)%(x107/x108));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x125 = -1;
	static uint8_t x126 = 3U;
	int8_t x128 = INT8_MAX;

	t10 = ((x125==x126)%(x127/x128));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x141 = 4U;
	static int64_t x143 = INT64_MIN;
	int32_t x144 = -224438;
	volatile int64_t t11 = -1862103904491LL;

	t11 = ((x141==x142)%(x143/x144));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x153 = 408689LLU;
	uint8_t x154 = 38U;
	static int16_t x155 = -1026;
	int8_t x156 = INT8_MIN;

	t12 = ((x153==x154)%(x155/x156));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x161 = UINT16_MAX;
	static int32_t x162 = -1;
	volatile uint64_t x164 = 1LLU;
	volatile uint64_t t13 = 119379098407560LLU;

	t13 = ((x161==x162)%(x163/x164));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = -1;
	volatile int32_t t14 = -9;

	t14 = ((x173==x174)%(x175/x176));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x185 = INT8_MIN;
	static uint8_t x186 = 3U;
	uint64_t x188 = 1297229089874411596LLU;
	volatile uint64_t t15 = 12224635231134643LLU;

	t15 = ((x185==x186)%(x187/x188));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	volatile int32_t t16 = -9756;

	t16 = ((x189==x190)%(x191/x192));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x194 = -58582290LL;
	static int16_t x196 = -1;
	int32_t t17 = -6167;

	t17 = ((x193==x194)%(x195/x196));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	static int32_t x203 = INT32_MAX;
	int32_t x204 = -1;

	t18 = ((x201==x202)%(x203/x204));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x206 = -1;
	volatile int16_t x207 = INT16_MIN;
	uint16_t x208 = 221U;
	volatile int32_t t19 = -24091;

	t19 = ((x205==x206)%(x207/x208));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x209 = INT32_MIN;
	volatile uint64_t x210 = 2629965224983789724LLU;
	static volatile int8_t x211 = INT8_MIN;
	uint8_t x212 = 7U;
	int32_t t20 = -7726;

	t20 = ((x209==x210)%(x211/x212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x214 = 3358U;
	volatile uint8_t x216 = 1U;
	int32_t t21 = -653497;

	t21 = ((x213==x214)%(x215/x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x218 = UINT16_MAX;
	static uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	uint64_t t22 = 983492450371818047LLU;

	t22 = ((x217==x218)%(x219/x220));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x225 = -13;
	static int16_t x226 = INT16_MAX;
	uint8_t x228 = UINT8_MAX;
	uint32_t t23 = 511696U;

	t23 = ((x225==x226)%(x227/x228));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x229 = -118;
	volatile int8_t x230 = -55;
	volatile int32_t x231 = INT32_MIN;
	int32_t x232 = 42397;
	static int32_t t24 = -3;

	t24 = ((x229==x230)%(x231/x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MIN;
	uint64_t x235 = 98922LLU;
	static uint64_t t25 = 16898757236394239LLU;

	t25 = ((x233==x234)%(x235/x236));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x238 = 1;
	int8_t x240 = -47;
	static int32_t t26 = -62770600;

	t26 = ((x237==x238)%(x239/x240));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x241 = -1;
	uint8_t x242 = 1U;
	static int32_t x243 = INT32_MIN;
	uint64_t x244 = 6214999733596LLU;
	volatile uint64_t t27 = 9910580LLU;

	t27 = ((x241==x242)%(x243/x244));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x253 = INT32_MAX;
	static volatile int8_t x256 = -1;
	int32_t t28 = 15;

	t28 = ((x253==x254)%(x255/x256));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x268 = INT32_MAX;
	volatile int64_t t29 = 106094912632LL;

	t29 = ((x265==x266)%(x267/x268));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x285 = 3451468006LL;
	int32_t x286 = -1571;
	int64_t x287 = -651187805412LL;
	uint8_t x288 = 1U;
	volatile int64_t t30 = 1369LL;

	t30 = ((x285==x286)%(x287/x288));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MAX;
	int32_t x292 = -1;
	int64_t t31 = -358815368823673LL;

	t31 = ((x289==x290)%(x291/x292));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MAX;
	volatile int64_t x295 = INT64_MAX;
	static int64_t x296 = -3874LL;
	volatile int64_t t32 = 621096162279232171LL;

	t32 = ((x293==x294)%(x295/x296));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x301 = UINT64_MAX;
	uint64_t x302 = UINT64_MAX;
	static int64_t x303 = -1LL;
	volatile int64_t t33 = 1620576308LL;

	t33 = ((x301==x302)%(x303/x304));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MIN;
	volatile int8_t x307 = INT8_MAX;
	volatile int32_t t34 = 2834639;

	t34 = ((x305==x306)%(x307/x308));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x313 = 0U;
	int64_t x314 = 13592047635979389LL;
	int8_t x315 = -3;
	int64_t x316 = -1LL;
	int64_t t35 = 294770077LL;

	t35 = ((x313==x314)%(x315/x316));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x329 = UINT16_MAX;
	uint8_t x330 = UINT8_MAX;
	static uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MIN;

	t36 = ((x329==x330)%(x331/x332));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x337 = INT64_MAX;
	int32_t x338 = -3;
	static int32_t x340 = INT32_MIN;
	int64_t t37 = -12753LL;

	t37 = ((x337==x338)%(x339/x340));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x342 = -1LL;
	int16_t x343 = 15912;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t38 = 3583;

	t38 = ((x341==x342)%(x343/x344));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x345 = INT32_MIN;
	static int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MAX;
	volatile int32_t x348 = -1;
	volatile int64_t t39 = 528LL;

	t39 = ((x345==x346)%(x347/x348));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x353 = UINT16_MAX;
	int64_t x354 = 7088LL;
	static int8_t x355 = INT8_MAX;
	volatile uint32_t x356 = 57U;
	volatile uint32_t t40 = 4533U;

	t40 = ((x353==x354)%(x355/x356));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x357 = 8U;
	int16_t x358 = 387;
	static uint16_t x359 = 256U;
	volatile int8_t x360 = 4;

	t41 = ((x357==x358)%(x359/x360));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x361 = 510436143034200LL;
	volatile int32_t x362 = INT32_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	uint32_t t42 = 692U;

	t42 = ((x361==x362)%(x363/x364));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x365 = -125;
	int32_t x366 = -1;
	volatile int16_t x367 = INT16_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t43 = 58375428;

	t43 = ((x365==x366)%(x367/x368));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x381 = 53U;
	int32_t x382 = -1;
	int64_t x383 = 9360585LL;
	uint32_t x384 = 20309U;
	volatile int64_t t44 = 6292542776LL;

	t44 = ((x381==x382)%(x383/x384));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -1;
	int8_t x392 = INT8_MIN;
	volatile int32_t t45 = -984;

	t45 = ((x389==x390)%(x391/x392));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x393 = -1LL;
	volatile int32_t x394 = 4345;
	uint64_t x395 = UINT64_MAX;
	volatile uint32_t x396 = 1248U;

	t46 = ((x393==x394)%(x395/x396));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x397 = -1LL;
	volatile int8_t x398 = -7;
	int16_t x399 = 88;
	volatile int8_t x400 = -39;
	volatile int32_t t47 = -23664484;

	t47 = ((x397==x398)%(x399/x400));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x405 = 18;
	static uint16_t x406 = UINT16_MAX;
	static int32_t x407 = 203693645;
	int16_t x408 = INT16_MIN;
	volatile int32_t t48 = 105410;

	t48 = ((x405==x406)%(x407/x408));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x411 = 1335U;
	int8_t x412 = -1;
	static volatile int32_t t49 = 17307714;

	t49 = ((x409==x410)%(x411/x412));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x413 = 3;
	uint8_t x414 = 23U;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 1U;
	int32_t t50 = -86;

	t50 = ((x413==x414)%(x415/x416));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x421 = INT32_MAX;
	int8_t x422 = INT8_MIN;
	int8_t x423 = -1;
	int8_t x424 = -1;

	t51 = ((x421==x422)%(x423/x424));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x425 = 51852088383809LLU;
	int32_t x426 = INT32_MAX;
	int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MAX;

	t52 = ((x425==x426)%(x427/x428));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x445 = -1;
	volatile int64_t x447 = -339619756343LL;
	uint8_t x448 = 5U;
	volatile int64_t t53 = 2805779312062LL;

	t53 = ((x445==x446)%(x447/x448));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x453 = -13095267626505LL;
	int64_t x455 = INT64_MIN;
	static int32_t x456 = -2026674;
	int64_t t54 = 1938648219095LL;

	t54 = ((x453==x454)%(x455/x456));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x460 = -1712709910LL;
	volatile int64_t t55 = -116253LL;

	t55 = ((x457==x458)%(x459/x460));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x469 = 66595469LLU;
	uint8_t x470 = 1U;
	int8_t x471 = INT8_MAX;
	int64_t x472 = -1LL;
	static int64_t t56 = 26427260052LL;

	t56 = ((x469==x470)%(x471/x472));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x473 = 539541U;
	uint8_t x474 = 16U;
	volatile int16_t x475 = 246;
	int64_t x476 = -1LL;
	int64_t t57 = 29262LL;

	t57 = ((x473==x474)%(x475/x476));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x481 = 32U;
	static uint8_t x482 = UINT8_MAX;
	volatile int8_t x483 = INT8_MIN;
	uint64_t x484 = 1307299522986LLU;
	uint64_t t58 = 424967577463LLU;

	t58 = ((x481==x482)%(x483/x484));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x489 = INT16_MIN;
	int64_t x490 = INT64_MIN;
	static int16_t x491 = INT16_MIN;
	volatile uint16_t x492 = 187U;
	int32_t t59 = 14364676;

	t59 = ((x489==x490)%(x491/x492));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x493 = -1;
	volatile int16_t x495 = INT16_MAX;
	static int32_t x496 = 2060;
	int32_t t60 = 17135;

	t60 = ((x493==x494)%(x495/x496));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x505 = 31U;
	uint64_t x506 = 25107LLU;
	static int16_t x507 = INT16_MIN;
	static volatile int8_t x508 = -1;
	volatile int32_t t61 = -81178;

	t61 = ((x505==x506)%(x507/x508));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x513 = INT16_MIN;
	static int16_t x514 = INT16_MAX;
	int64_t x515 = 130420981812LL;
	volatile int64_t t62 = -3660195121049488LL;

	t62 = ((x513==x514)%(x515/x516));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x529 = 329;
	uint8_t x530 = UINT8_MAX;
	static uint8_t x531 = UINT8_MAX;

	t63 = ((x529==x530)%(x531/x532));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x542 = -1;
	int32_t x543 = INT32_MAX;
	int64_t x544 = -1LL;

	t64 = ((x541==x542)%(x543/x544));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x561 = 345279023U;
	int8_t x562 = -6;
	int32_t x563 = INT32_MIN;
	int32_t t65 = 13;

	t65 = ((x561==x562)%(x563/x564));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x570 = 2614701U;
	int64_t x571 = -2155224822605561LL;
	static volatile int32_t x572 = -1;
	volatile int64_t t66 = 1425LL;

	t66 = ((x569==x570)%(x571/x572));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x578 = 763U;
	static int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MAX;
	volatile int32_t t67 = -1;

	t67 = ((x577==x578)%(x579/x580));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x585 = UINT32_MAX;
	int32_t x586 = -53115;
	uint64_t x587 = UINT64_MAX;
	static uint32_t x588 = 32U;
	uint64_t t68 = 1164581763723678641LLU;

	t68 = ((x585==x586)%(x587/x588));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x594 = 586459U;
	volatile int16_t x595 = INT16_MIN;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t69 = -1;

	t69 = ((x593==x594)%(x595/x596));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x597 = INT8_MIN;
	uint32_t x600 = 559U;
	uint32_t t70 = 16300U;

	t70 = ((x597==x598)%(x599/x600));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x601 = UINT16_MAX;
	int64_t x602 = 0LL;
	int32_t x603 = INT32_MIN;
	int16_t x604 = INT16_MIN;
	static volatile int32_t t71 = 1;

	t71 = ((x601==x602)%(x603/x604));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x605 = INT8_MIN;
	int8_t x608 = -1;

	t72 = ((x605==x606)%(x607/x608));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x615 = INT64_MIN;
	int8_t x616 = INT8_MIN;

	t73 = ((x613==x614)%(x615/x616));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x617 = -12326;
	uint64_t x618 = 0LLU;
	int32_t x619 = INT32_MIN;
	uint64_t x620 = 8875310914450430LLU;
	uint64_t t74 = 1397LLU;

	t74 = ((x617==x618)%(x619/x620));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x629 = 1441;
	uint32_t x630 = UINT32_MAX;
	uint64_t x631 = 307155043LLU;
	uint8_t x632 = 1U;
	uint64_t t75 = 10913761832LLU;

	t75 = ((x629==x630)%(x631/x632));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x641 = 604501073884LLU;
	int32_t x642 = -19;
	volatile uint32_t t76 = 3414616U;

	t76 = ((x641==x642)%(x643/x644));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x646 = -1;
	int16_t x647 = INT16_MIN;
	static int16_t x648 = INT16_MIN;
	int32_t t77 = 102656783;

	t77 = ((x645==x646)%(x647/x648));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x653 = 1U;
	static volatile uint8_t x654 = 121U;
	int8_t x655 = INT8_MIN;
	uint32_t x656 = 1717092U;
	volatile uint32_t t78 = 1233930909U;

	t78 = ((x653==x654)%(x655/x656));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x657 = INT8_MIN;
	static int64_t x659 = INT64_MAX;

	t79 = ((x657==x658)%(x659/x660));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x665 = INT8_MAX;
	volatile uint16_t x666 = UINT16_MAX;
	int64_t x667 = INT64_MAX;
	volatile int64_t t80 = -4815930LL;

	t80 = ((x665==x666)%(x667/x668));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x669 = INT32_MIN;
	int16_t x670 = INT16_MIN;
	int64_t x671 = 49767LL;
	static int16_t x672 = INT16_MAX;
	volatile int64_t t81 = 15379LL;

	t81 = ((x669==x670)%(x671/x672));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x678 = -1;
	static int64_t x679 = 819766LL;
	uint8_t x680 = 3U;
	int64_t t82 = 315008153641842LL;

	t82 = ((x677==x678)%(x679/x680));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x701 = 4U;
	int64_t x702 = -7406150211LL;
	int64_t x703 = -121379LL;
	static int64_t t83 = -48LL;

	t83 = ((x701==x702)%(x703/x704));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x705 = INT64_MAX;
	uint8_t x706 = 2U;
	volatile int64_t x707 = INT64_MAX;
	static volatile int64_t t84 = 286995LL;

	t84 = ((x705==x706)%(x707/x708));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x710 = UINT32_MAX;
	static volatile uint32_t x711 = UINT32_MAX;
	volatile int16_t x712 = -379;
	uint32_t t85 = 521798879U;

	t85 = ((x709==x710)%(x711/x712));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x717 = INT64_MIN;
	static int32_t x719 = -16489;
	static volatile uint16_t x720 = 2U;
	int32_t t86 = 58778;

	t86 = ((x717==x718)%(x719/x720));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x721 = -1LL;
	static int64_t x722 = -25344761883492LL;
	int16_t x723 = INT16_MAX;
	static int8_t x724 = INT8_MIN;
	int32_t t87 = -31575957;

	t87 = ((x721==x722)%(x723/x724));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x729 = 12;
	int32_t x731 = 456292476;
	static uint64_t x732 = 1LLU;
	volatile uint64_t t88 = 531418982630LLU;

	t88 = ((x729==x730)%(x731/x732));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x737 = 3005259LLU;
	int64_t x738 = INT64_MAX;
	int64_t x739 = INT64_MIN;
	volatile int64_t t89 = 201671480LL;

	t89 = ((x737==x738)%(x739/x740));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x753 = INT64_MIN;
	int64_t x754 = INT64_MIN;
	int64_t x755 = INT64_MAX;
	uint32_t x756 = 567188U;
	volatile int64_t t90 = -7364605221LL;

	t90 = ((x753==x754)%(x755/x756));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x777 = UINT32_MAX;
	volatile int16_t x778 = INT16_MIN;
	static int16_t x779 = INT16_MAX;
	static volatile int64_t x780 = 1LL;
	int64_t t91 = -278579LL;

	t91 = ((x777==x778)%(x779/x780));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x786 = UINT32_MAX;
	int16_t x787 = INT16_MIN;
	volatile int32_t x788 = -10865;
	static volatile int32_t t92 = -7339;

	t92 = ((x785==x786)%(x787/x788));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x798 = INT8_MIN;
	uint64_t x799 = 31216394290906952LLU;
	uint8_t x800 = 85U;
	uint64_t t93 = 287907616670384LLU;

	t93 = ((x797==x798)%(x799/x800));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x805 = 3311320920857632LL;
	volatile int32_t x807 = INT32_MIN;
	static int8_t x808 = INT8_MAX;
	volatile int32_t t94 = -43;

	t94 = ((x805==x806)%(x807/x808));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x830 = INT32_MAX;
	uint32_t x832 = UINT32_MAX;
	volatile uint64_t t95 = 2480735569989016LLU;

	t95 = ((x829==x830)%(x831/x832));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x833 = INT32_MIN;
	int8_t x834 = -1;
	static int32_t x835 = INT32_MIN;
	volatile int32_t t96 = -949458442;

	t96 = ((x833==x834)%(x835/x836));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x837 = INT8_MIN;
	volatile uint32_t x838 = UINT32_MAX;
	volatile int8_t x840 = INT8_MIN;
	int32_t t97 = -12371107;

	t97 = ((x837==x838)%(x839/x840));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x841 = 33U;
	int32_t x843 = INT32_MIN;
	int8_t x844 = INT8_MIN;
	int32_t t98 = 429;

	t98 = ((x841==x842)%(x843/x844));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x845 = 0;
	uint64_t x846 = UINT64_MAX;
	int64_t x847 = -20994619136LL;
	uint64_t x848 = 4163504579389LLU;
	volatile uint64_t t99 = 6664966180728848LLU;

	t99 = ((x845==x846)%(x847/x848));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

