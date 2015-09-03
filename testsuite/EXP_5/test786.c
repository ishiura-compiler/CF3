#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = UINT16_MAX;
static int64_t x15 = INT64_MAX;
volatile uint32_t t1 = 6U;
static uint32_t x21 = UINT32_MAX;
int8_t x23 = INT8_MAX;
int16_t x28 = 1;
int64_t x36 = INT64_MIN;
uint64_t t5 = 5161189130432975962LLU;
volatile int16_t x57 = INT16_MAX;
int16_t x58 = -1;
int64_t x65 = 338685173492227LL;
int64_t x67 = INT64_MIN;
int64_t x71 = 58407407LL;
int16_t x90 = INT16_MAX;
int32_t x92 = INT32_MIN;
int32_t x96 = INT32_MIN;
uint8_t x104 = 0U;
int16_t x108 = INT16_MAX;
uint32_t x128 = 1002369372U;
uint16_t x139 = 95U;
uint32_t t20 = 13U;
volatile int16_t x143 = INT16_MIN;
static int32_t x144 = INT32_MIN;
volatile int32_t t21 = -98395;
int8_t x145 = INT8_MAX;
int8_t x157 = 21;
uint16_t x159 = UINT16_MAX;
uint32_t x160 = 11U;
int32_t t23 = 392493;
uint16_t x196 = UINT16_MAX;
volatile uint32_t x197 = 494000U;
static uint64_t x201 = 63LLU;
int32_t t28 = -353905746;
int8_t x215 = 24;
int16_t x225 = 3;
volatile uint64_t x243 = 50438573237LLU;
int64_t x249 = 262476541309907215LL;
static uint32_t x251 = 157928U;
static int64_t t33 = -166LL;
int16_t x262 = INT16_MIN;
uint32_t x273 = 3094U;
volatile int16_t x277 = INT16_MAX;
int32_t x279 = -1;
int64_t x280 = INT64_MAX;
int16_t x285 = INT16_MAX;
int32_t x288 = INT32_MAX;
int64_t x292 = INT64_MIN;
static int32_t t41 = 61781;
int64_t x307 = INT64_MIN;
int32_t t44 = -32725;
volatile int32_t x332 = INT32_MAX;
volatile int32_t t47 = 87053514;
uint64_t x341 = 1082127LLU;
static int64_t x342 = 1LL;
volatile int16_t x343 = -1;
int32_t x353 = INT32_MAX;
uint16_t x355 = UINT16_MAX;
uint32_t x365 = UINT32_MAX;
uint16_t x366 = 772U;
uint64_t x367 = 55047450529408248LLU;
uint64_t x372 = UINT64_MAX;
static uint8_t x385 = UINT8_MAX;
uint64_t x387 = 16LLU;
volatile int32_t t54 = 8;
int32_t x404 = -58416;
int16_t x406 = -11801;
uint32_t x412 = UINT32_MAX;
int16_t x430 = INT16_MIN;
int32_t x431 = 6862504;
int32_t x438 = INT32_MAX;
int8_t x453 = 0;
int32_t x454 = INT32_MIN;
uint32_t x457 = 148362865U;
int16_t x459 = INT16_MIN;
uint8_t x466 = UINT8_MAX;
uint16_t x468 = UINT16_MAX;
uint16_t x473 = 20594U;
int16_t x475 = -7;
int64_t x478 = INT64_MIN;
volatile int32_t t66 = -2;
int64_t x497 = 67370560LL;
static int64_t x537 = 1471587330465LL;
uint16_t x544 = 980U;
int32_t t75 = -9910;
uint8_t x545 = 7U;
uint64_t x554 = 3859LLU;
static volatile int32_t t78 = -203457;
uint16_t x557 = 0U;
static int64_t x571 = INT64_MAX;
int32_t t80 = 114219;
uint32_t x576 = UINT32_MAX;
volatile uint8_t x587 = UINT8_MAX;
uint32_t t82 = 1248211U;
volatile uint64_t x621 = 10070863LLU;
volatile int16_t x638 = -9;
static int8_t x640 = -1;
int16_t x641 = INT16_MAX;
static int64_t x656 = -5LL;
int32_t t90 = -1;
int8_t x665 = 9;
volatile int16_t x667 = -31;
static uint64_t t92 = UINT64_MAX;
static uint32_t x673 = 19U;
static volatile uint32_t t93 = 75U;
int32_t x687 = INT32_MAX;
static int16_t x697 = INT16_MAX;
int32_t x711 = -74;
volatile int16_t x718 = INT16_MIN;
int32_t t99 = 15470;


void f0(void) {
	static uint32_t x5 = UINT32_MAX;
	static int8_t x7 = -1;
	static int8_t x8 = INT8_MIN;
	uint32_t t0 = UINT32_MAX;

	t0 = (x5<<((x6%x7)<x8));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 2763U;
	volatile uint64_t x16 = 580563672221131LLU;

	t1 = (x13<<((x14%x15)<x16));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x22 = 16821U;
	static int16_t x24 = INT16_MIN;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x21<<((x22%x23)<x24));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x25 = INT16_MAX;
	volatile int32_t x26 = -1;
	uint64_t x27 = 325251499205129440LLU;
	volatile int32_t t3 = 3724;

	t3 = (x25<<((x26%x27)<x28));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x33 = 34;
	static volatile int32_t x34 = -786;
	int64_t x35 = INT64_MAX;
	int32_t t4 = 9390050;

	t4 = (x33<<((x34%x35)<x36));

	if (t4 != 34) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 3518394LLU;
	static int8_t x42 = INT8_MAX;
	int16_t x43 = -1;
	uint8_t x44 = 0U;

	t5 = (x41<<((x42%x43)<x44));

	if (t5 != 3518394LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x53 = 1U;
	int64_t x54 = -1LL;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 5609U;
	volatile int32_t t6 = 2374896;

	t6 = (x53<<((x54%x55)<x56));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t7 = 3300;

	t7 = (x57<<((x58%x59)<x60));

	if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x66 = INT16_MIN;
	uint64_t x68 = 260327880780354LLU;
	volatile int64_t t8 = -5047899429267LL;

	t8 = (x65<<((x66%x67)<x68));

	if (t8 != 338685173492227LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = INT8_MAX;
	uint16_t x70 = 654U;
	uint64_t x72 = 1142836593122499102LLU;
	int32_t t9 = 10;

	t9 = (x69<<((x70%x71)<x72));

	if (t9 != 254) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x85 = UINT16_MAX;
	volatile int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MAX;
	int8_t x88 = -1;
	int32_t t10 = 2130280;

	t10 = (x85<<((x86%x87)<x88));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x89 = 217849480;
	static int8_t x91 = 2;
	int32_t t11 = -2;

	t11 = (x89<<((x90%x91)<x92));

	if (t11 != 217849480) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = UINT8_MAX;
	int64_t x94 = INT64_MIN;
	uint64_t x95 = 3211073487945LLU;
	int32_t t12 = -1166;

	t12 = (x93<<((x94%x95)<x96));

	if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x97 = 64U;
	volatile int8_t x98 = INT8_MIN;
	uint16_t x99 = 177U;
	uint8_t x100 = UINT8_MAX;
	int32_t t13 = -517604;

	t13 = (x97<<((x98%x99)<x100));

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x101 = 12817U;
	static int32_t x102 = -6045;
	uint8_t x103 = 11U;
	int32_t t14 = 25321;

	t14 = (x101<<((x102%x103)<x104));

	if (t14 != 25634) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x105 = 0;
	int32_t x106 = -140;
	volatile uint32_t x107 = UINT32_MAX;
	volatile int32_t t15 = -14621;

	t15 = (x105<<((x106%x107)<x108));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x109 = 958U;
	static uint8_t x110 = 54U;
	int64_t x111 = 97507530444LL;
	int8_t x112 = -1;
	volatile int32_t t16 = -14;

	t16 = (x109<<((x110%x111)<x112));

	if (t16 != 958) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x125 = 6637590LLU;
	int16_t x126 = -51;
	int64_t x127 = -150936LL;
	uint64_t t17 = 511LLU;

	t17 = (x125<<((x126%x127)<x128));

	if (t17 != 13275180LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int16_t x130 = INT16_MAX;
	static int64_t x131 = INT64_MIN;
	int32_t x132 = 12539496;
	volatile uint64_t t18 = 201705462136837LLU;

	t18 = (x129<<((x130%x131)<x132));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x133 = UINT32_MAX;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	int64_t x136 = -1LL;
	uint32_t t19 = UINT32_MAX;

	t19 = (x133<<((x134%x135)<x136));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x137 = 2300139U;
	int8_t x138 = INT8_MIN;
	int32_t x140 = -1;

	t20 = (x137<<((x138%x139)<x140));

	if (t20 != 4600278U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x141 = INT8_MAX;
	static int8_t x142 = INT8_MIN;

	t21 = (x141<<((x142%x143)<x144));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x146 = -633;
	int16_t x147 = INT16_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t22 = -179;

	t22 = (x145<<((x146%x147)<x148));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x158 = 1038228;

	t23 = (x157<<((x158%x159)<x160));

	if (t23 != 21) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t24 = 35975;

	t24 = (x177<<((x178%x179)<x180));

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x193 = UINT16_MAX;
	uint32_t x194 = 248613045U;
	int8_t x195 = 7;
	volatile int32_t t25 = -16085345;

	t25 = (x193<<((x194%x195)<x196));

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x198 = 0U;
	volatile int8_t x199 = -1;
	int64_t x200 = INT64_MAX;
	uint32_t t26 = 10502U;

	t26 = (x197<<((x198%x199)<x200));

	if (t26 != 988000U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x202 = -1;
	volatile int32_t x203 = 53368;
	int16_t x204 = -1;
	static uint64_t t27 = 36309LLU;

	t27 = (x201<<((x202%x203)<x204));

	if (t27 != 63LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x205 = 566;
	int16_t x206 = -6131;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = UINT64_MAX;

	t28 = (x205<<((x206%x207)<x208));

	if (t28 != 1132) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x213 = 94344434304364565LLU;
	int32_t x214 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t29 = 15149656241869LLU;

	t29 = (x213<<((x214%x215)<x216));

	if (t29 != 94344434304364565LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MIN;
	int8_t x223 = 4;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t30 = -313897;

	t30 = (x221<<((x222%x223)<x224));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x226 = 57;
	uint32_t x227 = 728064892U;
	int8_t x228 = 12;
	static volatile int32_t t31 = 9087;

	t31 = (x225<<((x226%x227)<x228));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x241 = INT32_MAX;
	int64_t x242 = INT64_MIN;
	uint32_t x244 = UINT32_MAX;
	int32_t t32 = INT32_MAX;

	t32 = (x241<<((x242%x243)<x244));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x250 = 38U;
	static uint8_t x252 = 35U;

	t33 = (x249<<((x250%x251)<x252));

	if (t33 != 262476541309907215LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x253 = 744024610617702LL;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int64_t t34 = 8423618132646LL;

	t34 = (x253<<((x254%x255)<x256));

	if (t34 != 1488049221235404LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x261 = 489U;
	uint8_t x263 = 1U;
	uint16_t x264 = 11U;
	uint32_t t35 = 5U;

	t35 = (x261<<((x262%x263)<x264));

	if (t35 != 978U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	int64_t x267 = 38510017559187889LL;
	int32_t x268 = INT32_MAX;
	static volatile int32_t t36 = -7249259;

	t36 = (x265<<((x266%x267)<x268));

	if (t36 != 510) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x269 = 38U;
	uint8_t x270 = 7U;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MAX;
	int32_t t37 = -1167;

	t37 = (x269<<((x270%x271)<x272));

	if (t37 != 76) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x274 = -35042831617493LL;
	int64_t x275 = INT64_MIN;
	uint32_t x276 = 52U;
	volatile uint32_t t38 = 0U;

	t38 = (x273<<((x274%x275)<x276));

	if (t38 != 6188U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x278 = -1;
	volatile int32_t t39 = -15;

	t39 = (x277<<((x278%x279)<x280));

	if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MIN;
	int32_t t40 = 4986325;

	t40 = (x285<<((x286%x287)<x288));

	if (t40 != 65534) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = 302405LLU;
	int16_t x291 = INT16_MIN;

	t41 = (x289<<((x290%x291)<x292));

	if (t41 != 510) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x297 = 40;
	int8_t x298 = INT8_MAX;
	volatile int64_t x299 = -40501703864334848LL;
	int16_t x300 = 324;
	int32_t t42 = -887;

	t42 = (x297<<((x298%x299)<x300));

	if (t42 != 80) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x305 = INT16_MAX;
	int16_t x306 = -1;
	uint32_t x308 = 27U;
	int32_t t43 = -6;

	t43 = (x305<<((x306%x307)<x308));

	if (t43 != 65534) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int16_t x310 = -2839;
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;

	t44 = (x309<<((x310%x311)<x312));

	if (t44 != 131070) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x317 = 1;
	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t45 = -706670;

	t45 = (x317<<((x318%x319)<x320));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x329 = INT8_MAX;
	uint64_t x330 = 10738578LLU;
	volatile uint64_t x331 = 4215577018456LLU;
	volatile int32_t t46 = -1;

	t46 = (x329<<((x330%x331)<x332));

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x333 = 14U;
	static int32_t x334 = INT32_MIN;
	volatile uint32_t x335 = UINT32_MAX;
	uint8_t x336 = 15U;

	t47 = (x333<<((x334%x335)<x336));

	if (t47 != 14) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x344 = UINT32_MAX;
	volatile uint64_t t48 = 12LLU;

	t48 = (x341<<((x342%x343)<x344));

	if (t48 != 2164254LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x345 = INT8_MAX;
	int64_t x346 = -1LL;
	int8_t x347 = INT8_MIN;
	static int16_t x348 = -14;
	static int32_t t49 = -187701;

	t49 = (x345<<((x346%x347)<x348));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x354 = -2281182859075659LL;
	volatile int32_t x356 = INT32_MIN;
	static volatile int32_t t50 = INT32_MAX;

	t50 = (x353<<((x354%x355)<x356));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x357 = 7947688LLU;
	uint64_t x358 = 17851702111LLU;
	int32_t x359 = -84;
	uint64_t x360 = UINT64_MAX;
	static uint64_t t51 = 28LLU;

	t51 = (x357<<((x358%x359)<x360));

	if (t51 != 15895376LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x368 = -47966930152048LL;
	uint32_t t52 = 3U;

	t52 = (x365<<((x366%x367)<x368));

	if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x369 = 7;
	int64_t x370 = INT64_MAX;
	static int64_t x371 = INT64_MIN;
	static volatile int32_t t53 = 32760;

	t53 = (x369<<((x370%x371)<x372));

	if (t53 != 14) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x386 = 46730472U;
	int16_t x388 = 265;

	t54 = (x385<<((x386%x387)<x388));

	if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x401 = 508188U;
	volatile int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	static volatile uint32_t t55 = 1509U;

	t55 = (x401<<((x402%x403)<x404));

	if (t55 != 508188U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x405 = UINT8_MAX;
	static uint32_t x407 = 22U;
	static int64_t x408 = INT64_MAX;
	volatile int32_t t56 = -22962;

	t56 = (x405<<((x406%x407)<x408));

	if (t56 != 510) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x409 = 106;
	volatile uint64_t x410 = 222227325099076LLU;
	volatile int16_t x411 = INT16_MIN;
	static volatile int32_t t57 = 91797;

	t57 = (x409<<((x410%x411)<x412));

	if (t57 != 106) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x413 = 51461933;
	int64_t x414 = INT64_MIN;
	int64_t x415 = 2192903782211055LL;
	volatile uint32_t x416 = 24U;
	int32_t t58 = 7;

	t58 = (x413<<((x414%x415)<x416));

	if (t58 != 102923866) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x429 = 254U;
	static volatile int8_t x432 = 1;
	volatile int32_t t59 = -665767538;

	t59 = (x429<<((x430%x431)<x432));

	if (t59 != 508) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x433 = 127134;
	uint32_t x434 = 297700783U;
	uint16_t x435 = UINT16_MAX;
	int16_t x436 = INT16_MAX;
	int32_t t60 = 901407436;

	t60 = (x433<<((x434%x435)<x436));

	if (t60 != 127134) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x437 = INT32_MAX;
	static uint16_t x439 = UINT16_MAX;
	volatile int8_t x440 = -1;
	int32_t t61 = INT32_MAX;

	t61 = (x437<<((x438%x439)<x440));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x455 = -1;
	int32_t x456 = INT32_MAX;
	volatile int32_t t62 = 2519081;

	t62 = (x453<<((x454%x455)<x456));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x458 = -1;
	uint16_t x460 = 14095U;
	uint32_t t63 = 5104U;

	t63 = (x457<<((x458%x459)<x460));

	if (t63 != 296725730U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x465 = 4561156LLU;
	int32_t x467 = INT32_MIN;
	uint64_t t64 = 44729821353296551LLU;

	t64 = (x465<<((x466%x467)<x468));

	if (t64 != 9122312LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x474 = -1;
	int32_t x476 = 224683;
	volatile int32_t t65 = -2;

	t65 = (x473<<((x474%x475)<x476));

	if (t65 != 41188) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x477 = 28U;
	static int8_t x479 = -1;
	volatile int32_t x480 = INT32_MIN;

	t66 = (x477<<((x478%x479)<x480));

	if (t66 != 28) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x485 = 970701173861734LLU;
	uint16_t x486 = 31442U;
	int32_t x487 = INT32_MIN;
	volatile int16_t x488 = 245;
	uint64_t t67 = 73948506275LLU;

	t67 = (x485<<((x486%x487)<x488));

	if (t67 != 970701173861734LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x489 = UINT32_MAX;
	volatile int16_t x490 = -23;
	uint32_t x491 = 4U;
	static int64_t x492 = INT64_MIN;
	uint32_t t68 = UINT32_MAX;

	t68 = (x489<<((x490%x491)<x492));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x493 = 4789228LLU;
	int32_t x494 = INT32_MIN;
	int32_t x495 = 3156;
	uint32_t x496 = 799008U;
	uint64_t t69 = 1078484811602LLU;

	t69 = (x493<<((x494%x495)<x496));

	if (t69 != 4789228LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x498 = -1LL;
	int64_t x499 = INT64_MIN;
	static int64_t x500 = INT64_MAX;
	int64_t t70 = -3856293251LL;

	t70 = (x497<<((x498%x499)<x500));

	if (t70 != 134741120LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x509 = 158;
	volatile uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MAX;
	static uint32_t x512 = UINT32_MAX;
	static int32_t t71 = 151804;

	t71 = (x509<<((x510%x511)<x512));

	if (t71 != 316) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x513 = INT32_MAX;
	int32_t x514 = -1;
	uint32_t x515 = 4041U;
	static volatile uint8_t x516 = UINT8_MAX;
	int32_t t72 = INT32_MAX;

	t72 = (x513<<((x514%x515)<x516));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x533 = UINT64_MAX;
	uint32_t x534 = 964U;
	int32_t x535 = 84;
	int64_t x536 = -3628697935891845LL;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (x533<<((x534%x535)<x536));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x538 = -32;
	int32_t x539 = INT32_MAX;
	uint8_t x540 = 0U;
	volatile int64_t t74 = -449469243228377652LL;

	t74 = (x537<<((x538%x539)<x540));

	if (t74 != 2943174660930LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x541 = 52U;
	int8_t x542 = 0;
	int16_t x543 = -1;

	t75 = (x541<<((x542%x543)<x544));

	if (t75 != 104) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x546 = 1;
	uint8_t x547 = 32U;
	int16_t x548 = -1;
	static int32_t t76 = -233336;

	t76 = (x545<<((x546%x547)<x548));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x549 = 62U;
	int16_t x550 = INT16_MAX;
	int64_t x551 = INT64_MIN;
	static uint64_t x552 = 1LLU;
	static uint32_t t77 = 171864U;

	t77 = (x549<<((x550%x551)<x552));

	if (t77 != 62U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x553 = 2487;
	uint8_t x555 = UINT8_MAX;
	volatile uint32_t x556 = 83858U;

	t78 = (x553<<((x554%x555)<x556));

	if (t78 != 4974) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MIN;
	int32_t x560 = -1;
	volatile int32_t t79 = -2707;

	t79 = (x557<<((x558%x559)<x560));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x569 = 4U;
	int64_t x570 = -130025372566LL;
	int16_t x572 = INT16_MIN;

	t80 = (x569<<((x570%x571)<x572));

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x573 = 1U;
	int8_t x574 = -3;
	static uint8_t x575 = UINT8_MAX;
	int32_t t81 = 36;

	t81 = (x573<<((x574%x575)<x576));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x585 = 5U;
	int16_t x586 = INT16_MAX;
	static uint16_t x588 = 593U;

	t82 = (x585<<((x586%x587)<x588));

	if (t82 != 10U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x589 = UINT8_MAX;
	int16_t x590 = -1;
	int8_t x591 = -50;
	int32_t x592 = INT32_MIN;
	int32_t t83 = -1870;

	t83 = (x589<<((x590%x591)<x592));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x597 = 3097U;
	int16_t x598 = INT16_MAX;
	int8_t x599 = -1;
	uint32_t x600 = 188U;
	volatile int32_t t84 = -3293830;

	t84 = (x597<<((x598%x599)<x600));

	if (t84 != 6194) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x622 = 1U;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	uint64_t t85 = 1948LLU;

	t85 = (x621<<((x622%x623)<x624));

	if (t85 != 10070863LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x633 = INT8_MAX;
	int64_t x634 = INT64_MIN;
	int8_t x635 = -1;
	uint64_t x636 = UINT64_MAX;
	volatile int32_t t86 = 95;

	t86 = (x633<<((x634%x635)<x636));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x637 = INT8_MAX;
	int16_t x639 = -1996;
	volatile int32_t t87 = -679268177;

	t87 = (x637<<((x638%x639)<x640));

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x642 = INT32_MIN;
	static int32_t x643 = INT32_MIN;
	int8_t x644 = INT8_MIN;
	int32_t t88 = 1;

	t88 = (x641<<((x642%x643)<x644));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x649 = INT8_MAX;
	int16_t x650 = INT16_MAX;
	volatile uint64_t x651 = 218318082642279318LLU;
	uint64_t x652 = 1LLU;
	volatile int32_t t89 = -125;

	t89 = (x649<<((x650%x651)<x652));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x653 = 14002020;
	static int8_t x654 = -1;
	volatile uint32_t x655 = UINT32_MAX;

	t90 = (x653<<((x654%x655)<x656));

	if (t90 != 14002020) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x666 = -2;
	uint32_t x668 = 4U;
	static int32_t t91 = 330643670;

	t91 = (x665<<((x666%x667)<x668));

	if (t91 != 9) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x669 = UINT64_MAX;
	int8_t x670 = -1;
	int8_t x671 = -15;
	int8_t x672 = INT8_MIN;

	t92 = (x669<<((x670%x671)<x672));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x674 = 118067501992587LL;
	int64_t x675 = INT64_MIN;
	uint16_t x676 = 6341U;

	t93 = (x673<<((x674%x675)<x676));

	if (t93 != 19U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x685 = UINT16_MAX;
	int64_t x686 = INT64_MIN;
	int32_t x688 = INT32_MAX;
	int32_t t94 = -1;

	t94 = (x685<<((x686%x687)<x688));

	if (t94 != 131070) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x693 = UINT64_MAX;
	static uint64_t x694 = UINT64_MAX;
	int16_t x695 = INT16_MIN;
	int16_t x696 = INT16_MIN;
	volatile uint64_t t95 = 1961186978387LLU;

	t95 = (x693<<((x694%x695)<x696));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x698 = UINT32_MAX;
	static int8_t x699 = INT8_MIN;
	uint16_t x700 = UINT16_MAX;
	int32_t t96 = -3473;

	t96 = (x697<<((x698%x699)<x700));

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x709 = UINT64_MAX;
	int64_t x710 = INT64_MIN;
	int64_t x712 = INT64_MIN;
	uint64_t t97 = UINT64_MAX;

	t97 = (x709<<((x710%x711)<x712));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x717 = INT16_MAX;
	static volatile int64_t x719 = -22962553LL;
	uint64_t x720 = UINT64_MAX;
	volatile int32_t t98 = -775200;

	t98 = (x717<<((x718%x719)<x720));

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x721 = 10004U;
	int16_t x722 = 2796;
	volatile uint16_t x723 = UINT16_MAX;
	int16_t x724 = -21;

	t99 = (x721<<((x722%x723)<x724));

	if (t99 != 10004) { NG(); } else { ; }
	
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

