#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
volatile int32_t x23 = 3482562;
int32_t t5 = 1335;
int16_t x54 = 0;
volatile uint16_t x65 = UINT16_MAX;
int16_t x67 = INT16_MIN;
volatile uint64_t x69 = 1109030834345LLU;
volatile int8_t x70 = INT8_MIN;
int64_t x95 = INT64_MIN;
volatile int32_t t10 = 2944;
uint32_t x99 = 430245U;
volatile uint32_t t11 = 26U;
int16_t x103 = INT16_MIN;
int8_t x104 = INT8_MIN;
int8_t x107 = -7;
uint32_t x118 = UINT32_MAX;
int32_t t18 = -10820045;
int8_t x146 = -14;
int32_t x147 = INT32_MIN;
uint8_t x163 = 2U;
static uint32_t x197 = 1U;
static volatile uint16_t x199 = UINT16_MAX;
uint8_t x213 = 1U;
static int16_t x221 = 1;
uint64_t x235 = 3303434090994LLU;
int16_t x238 = -1;
uint32_t x239 = UINT32_MAX;
volatile int32_t x241 = 24019;
volatile uint64_t x242 = 1018309848LLU;
volatile uint32_t x250 = 805673834U;
int16_t x265 = INT16_MAX;
int32_t x270 = -1;
uint32_t x271 = 7899033U;
volatile int64_t t34 = 70320401044112639LL;
volatile uint32_t x277 = 196U;
uint32_t t35 = 330385U;
static uint8_t x289 = 10U;
int8_t x292 = 3;
int32_t x294 = -12675019;
int32_t x318 = INT32_MAX;
uint16_t x319 = 318U;
int8_t x330 = -1;
volatile int8_t x344 = INT8_MIN;
static volatile uint32_t t43 = UINT32_MAX;
int32_t x357 = 1034415;
int32_t x360 = INT32_MAX;
int64_t x366 = -985689592LL;
uint16_t x367 = UINT16_MAX;
static volatile int32_t t45 = -25922560;
volatile int64_t t51 = INT64_MAX;
int16_t x418 = 8;
static int8_t x419 = INT8_MIN;
int32_t t53 = 161840;
int16_t x445 = 1;
static int8_t x450 = INT8_MAX;
static uint16_t x452 = UINT16_MAX;
static int32_t x462 = 27;
static int32_t x470 = -673945;
int16_t x520 = 1;
volatile int16_t x527 = INT16_MIN;
int8_t x532 = INT8_MAX;
int16_t x540 = -1;
volatile int32_t x550 = INT32_MAX;
volatile int32_t t72 = -170379;
volatile int32_t t73 = 1;
int64_t x570 = 192045693459555LL;
int32_t x577 = 11167;
uint8_t x578 = 23U;
int32_t x580 = INT32_MAX;
int16_t x598 = INT16_MAX;
volatile uint64_t x600 = 340817LLU;
static int32_t t78 = 0;
static int64_t x625 = INT64_MAX;
int64_t x626 = INT64_MIN;
int64_t x637 = 202LL;
static int16_t x640 = INT16_MAX;
volatile uint64_t x667 = 1261489491339241881LLU;
int16_t x675 = -1;
int8_t x682 = 0;
uint16_t x684 = 960U;
static volatile uint16_t x700 = 24792U;
int64_t x706 = INT64_MIN;
uint32_t x713 = UINT32_MAX;
static int16_t x714 = -1;
uint8_t x769 = 0U;
uint16_t x780 = 234U;
volatile uint32_t x786 = 8162658U;
volatile int32_t t93 = -246271;
int64_t x795 = INT64_MIN;
volatile int32_t t94 = 1;
int8_t x797 = 7;
int64_t x800 = -339LL;
static volatile int32_t t95 = -3314;
uint16_t x802 = UINT16_MAX;
volatile int64_t x814 = INT64_MIN;
int16_t x820 = INT16_MAX;
int32_t t99 = 14750;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = INT64_MIN;
	static uint64_t x7 = UINT64_MAX;
	static int32_t t0 = -192;

	t0 = (x5<<((x6==x7)<x8));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = 1;
	int64_t x14 = -34461769297919334LL;
	uint8_t x15 = 43U;
	int8_t x16 = INT8_MAX;
	volatile int32_t t1 = 16;

	t1 = (x13<<((x14==x15)<x16));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x21 = 269LLU;
	volatile uint32_t x22 = 10U;
	static volatile int16_t x24 = INT16_MAX;
	uint64_t t2 = 61744348364025LLU;

	t2 = (x21<<((x22==x23)<x24));

	if (t2 != 538LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x25 = 0U;
	uint16_t x26 = 16008U;
	static uint8_t x27 = 10U;
	uint8_t x28 = UINT8_MAX;
	static int32_t t3 = -29452412;

	t3 = (x25<<((x26==x27)<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x37 = 30320;
	static int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;
	int32_t t4 = 6102;

	t4 = (x37<<((x38==x39)<x40));

	if (t4 != 30320) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x45 = 513665156;
	volatile int64_t x46 = -1LL;
	volatile uint16_t x47 = 27U;
	uint16_t x48 = 33U;

	t5 = (x45<<((x46==x47)<x48));

	if (t5 != 1027330312) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x53 = 706;
	uint32_t x55 = 1655U;
	int16_t x56 = 34;
	volatile int32_t t6 = -21;

	t6 = (x53<<((x54==x55)<x56));

	if (t6 != 1412) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x61 = INT8_MAX;
	volatile uint64_t x62 = 2LLU;
	static int32_t x63 = INT32_MAX;
	uint32_t x64 = 6204290U;
	volatile int32_t t7 = -16;

	t7 = (x61<<((x62==x63)<x64));

	if (t7 != 254) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x66 = INT32_MIN;
	int64_t x68 = -1LL;
	static int32_t t8 = 1041702;

	t8 = (x65<<((x66==x67)<x68));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x71 = 94U;
	static volatile int32_t x72 = -34;
	uint64_t t9 = 3164549078LLU;

	t9 = (x69<<((x70==x71)<x72));

	if (t9 != 1109030834345LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x93 = UINT8_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x96 = -18;

	t10 = (x93<<((x94==x95)<x96));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int16_t x98 = -121;
	uint64_t x100 = 22885518LLU;

	t11 = (x97<<((x98==x99)<x100));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x101 = 3896105;
	int32_t x102 = 63;
	int32_t t12 = 32066;

	t12 = (x101<<((x102==x103)<x104));

	if (t12 != 3896105) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 405102410153LLU;
	int16_t x108 = 1762;
	volatile int32_t t13 = 9;

	t13 = (x105<<((x106==x107)<x108));

	if (t13 != 510) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MAX;
	volatile uint16_t x115 = 13U;
	int16_t x116 = -1;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x113<<((x114==x115)<x116));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x117 = 7153U;
	volatile int64_t x119 = -1LL;
	int8_t x120 = INT8_MIN;
	volatile int32_t t15 = 13518108;

	t15 = (x117<<((x118==x119)<x120));

	if (t15 != 7153) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x125 = 20746025LLU;
	static uint16_t x126 = 0U;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	static volatile uint64_t t16 = 497854105861276199LLU;

	t16 = (x125<<((x126==x127)<x128));

	if (t16 != 20746025LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x137 = 3;
	uint8_t x138 = 32U;
	static uint32_t x139 = UINT32_MAX;
	static int16_t x140 = -1;
	int32_t t17 = 234;

	t17 = (x137<<((x138==x139)<x140));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x141 = 251;
	static int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int16_t x144 = -1;

	t18 = (x141<<((x142==x143)<x144));

	if (t18 != 251) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x145 = INT16_MAX;
	volatile int32_t x148 = 119;
	volatile int32_t t19 = 3869;

	t19 = (x145<<((x146==x147)<x148));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x161 = 224816LLU;
	volatile int16_t x162 = INT16_MIN;
	int64_t x164 = 135288437460LL;
	volatile uint64_t t20 = 7748198LLU;

	t20 = (x161<<((x162==x163)<x164));

	if (t20 != 449632LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x189 = 5663129;
	int32_t x190 = 66002600;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	static int32_t t21 = 4;

	t21 = (x189<<((x190==x191)<x192));

	if (t21 != 5663129) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x198 = 12;
	uint8_t x200 = 7U;
	volatile uint32_t t22 = 165946U;

	t22 = (x197<<((x198==x199)<x200));

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x201 = UINT32_MAX;
	int32_t x202 = -334871;
	int64_t x203 = 12986496683725LL;
	int16_t x204 = -1;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x201<<((x202==x203)<x204));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x205 = 7370;
	static volatile uint8_t x206 = 5U;
	static uint16_t x207 = 7426U;
	static int8_t x208 = INT8_MAX;
	volatile int32_t t24 = 59693116;

	t24 = (x205<<((x206==x207)<x208));

	if (t24 != 14740) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x214 = 183625168LLU;
	int16_t x215 = 409;
	int64_t x216 = -1LL;
	volatile int32_t t25 = 0;

	t25 = (x213<<((x214==x215)<x216));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x217 = 1980806;
	int64_t x218 = -1LL;
	volatile int32_t x219 = INT32_MAX;
	static int32_t x220 = INT32_MAX;
	static volatile int32_t t26 = -1;

	t26 = (x217<<((x218==x219)<x220));

	if (t26 != 3961612) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x222 = 4786;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t27 = -421146;

	t27 = (x221<<((x222==x223)<x224));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MAX;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = 478;
	int32_t t28 = 47367580;

	t28 = (x225<<((x226==x227)<x228));

	if (t28 != 510) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x233 = 13LL;
	int64_t x234 = INT64_MIN;
	int32_t x236 = -72;
	volatile int64_t t29 = 1391450481261LL;

	t29 = (x233<<((x234==x235)<x236));

	if (t29 != 13LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x237 = 4U;
	volatile uint32_t x240 = 132503U;
	uint32_t t30 = 220U;

	t30 = (x237<<((x238==x239)<x240));

	if (t30 != 8U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x243 = -1;
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t31 = -36424393;

	t31 = (x241<<((x242==x243)<x244));

	if (t31 != 48038) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x249 = 12U;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	volatile int32_t t32 = 7310673;

	t32 = (x249<<((x250==x251)<x252));

	if (t32 != 24) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x266 = INT64_MIN;
	int8_t x267 = -48;
	int8_t x268 = INT8_MAX;
	int32_t t33 = -155;

	t33 = (x265<<((x266==x267)<x268));

	if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x269 = 227LL;
	volatile int32_t x272 = INT32_MAX;

	t34 = (x269<<((x270==x271)<x272));

	if (t34 != 454LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x278 = INT16_MIN;
	static uint32_t x279 = 1846U;
	uint32_t x280 = 418U;

	t35 = (x277<<((x278==x279)<x280));

	if (t35 != 392U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x290 = 3U;
	int8_t x291 = -1;
	volatile int32_t t36 = 255178298;

	t36 = (x289<<((x290==x291)<x292));

	if (t36 != 20) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x293 = 3036U;
	int32_t x295 = -42040;
	volatile uint16_t x296 = 27U;
	static int32_t t37 = 22138;

	t37 = (x293<<((x294==x295)<x296));

	if (t37 != 6072) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x309 = INT16_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t38 = -177161331;

	t38 = (x309<<((x310==x311)<x312));

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x317 = 6;
	uint16_t x320 = 5U;
	volatile int32_t t39 = 2769;

	t39 = (x317<<((x318==x319)<x320));

	if (t39 != 12) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x325 = 0;
	volatile int16_t x326 = -1;
	static int16_t x327 = -1;
	static int64_t x328 = -1LL;
	volatile int32_t t40 = 5738777;

	t40 = (x325<<((x326==x327)<x328));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x329 = UINT8_MAX;
	uint8_t x331 = 0U;
	volatile int8_t x332 = -5;
	int32_t t41 = -1;

	t41 = (x329<<((x330==x331)<x332));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x341 = INT16_MAX;
	int32_t x342 = -1;
	static int64_t x343 = -5685956LL;
	volatile int32_t t42 = 8434766;

	t42 = (x341<<((x342==x343)<x344));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int8_t x354 = -2;
	int16_t x355 = -1;
	int64_t x356 = -19660786345834LL;

	t43 = (x353<<((x354==x355)<x356));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x358 = UINT16_MAX;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t44 = -1918;

	t44 = (x357<<((x358==x359)<x360));

	if (t44 != 2068830) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x365 = 0;
	uint8_t x368 = 7U;

	t45 = (x365<<((x366==x367)<x368));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x369 = INT64_MAX;
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = -1LL;
	static volatile int64_t t46 = INT64_MAX;

	t46 = (x369<<((x370==x371)<x372));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x373 = 3635382;
	int16_t x374 = INT16_MAX;
	static int16_t x375 = -7;
	uint16_t x376 = UINT16_MAX;
	int32_t t47 = 138985888;

	t47 = (x373<<((x374==x375)<x376));

	if (t47 != 7270764) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x377 = UINT16_MAX;
	int8_t x378 = -1;
	int64_t x379 = INT64_MIN;
	int8_t x380 = -2;
	volatile int32_t t48 = 49;

	t48 = (x377<<((x378==x379)<x380));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x389 = 25U;
	static int32_t x390 = -1;
	static uint64_t x391 = UINT64_MAX;
	volatile int8_t x392 = INT8_MAX;
	static uint32_t t49 = 43828U;

	t49 = (x389<<((x390==x391)<x392));

	if (t49 != 50U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x397 = 57U;
	uint64_t x398 = 3LLU;
	volatile int64_t x399 = INT64_MIN;
	volatile int16_t x400 = -1;
	volatile int32_t t50 = -2216;

	t50 = (x397<<((x398==x399)<x400));

	if (t50 != 57) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x401 = INT64_MAX;
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	int64_t x404 = INT64_MIN;

	t51 = (x401<<((x402==x403)<x404));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -1;
	int8_t x407 = 0;
	int8_t x408 = -6;
	volatile int32_t t52 = 0;

	t52 = (x405<<((x406==x407)<x408));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x417 = 3U;
	static uint16_t x420 = UINT16_MAX;

	t53 = (x417<<((x418==x419)<x420));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x425 = 1U;
	static int32_t x426 = -1;
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = -1;
	int32_t t54 = -23;

	t54 = (x425<<((x426==x427)<x428));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x433 = INT8_MAX;
	int16_t x434 = 2201;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = 83874982235LL;
	int32_t t55 = -38108;

	t55 = (x433<<((x434==x435)<x436));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x437 = UINT16_MAX;
	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t56 = 9020633;

	t56 = (x437<<((x438==x439)<x440));

	if (t56 != 131070) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x441 = INT32_MAX;
	uint32_t x442 = UINT32_MAX;
	int64_t x443 = 4271169302334718LL;
	int64_t x444 = -1505LL;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (x441<<((x442==x443)<x444));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x446 = INT32_MAX;
	static int16_t x447 = 1481;
	int32_t x448 = -1;
	int32_t t58 = 366;

	t58 = (x445<<((x446==x447)<x448));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x449 = INT8_MAX;
	uint16_t x451 = 1U;
	volatile int32_t t59 = -2001;

	t59 = (x449<<((x450==x451)<x452));

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x461 = 766U;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 3591U;
	int32_t t60 = 2;

	t60 = (x461<<((x462==x463)<x464));

	if (t60 != 1532) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x465 = 0U;
	static uint16_t x466 = 885U;
	static int8_t x467 = 1;
	volatile uint8_t x468 = UINT8_MAX;
	volatile uint32_t t61 = 1051U;

	t61 = (x465<<((x466==x467)<x468));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x469 = UINT32_MAX;
	static uint64_t x471 = 52117643LLU;
	static int32_t x472 = INT32_MIN;
	uint32_t t62 = UINT32_MAX;

	t62 = (x469<<((x470==x471)<x472));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x477 = UINT16_MAX;
	int64_t x478 = -1LL;
	int64_t x479 = INT64_MAX;
	uint16_t x480 = 0U;
	int32_t t63 = 4916568;

	t63 = (x477<<((x478==x479)<x480));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x489 = 0U;
	uint32_t x490 = 220296273U;
	static uint8_t x491 = UINT8_MAX;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t64 = 236898540;

	t64 = (x489<<((x490==x491)<x492));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x497 = 1790626589870089LLU;
	int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MIN;
	uint8_t x500 = UINT8_MAX;
	volatile uint64_t t65 = 1601574LLU;

	t65 = (x497<<((x498==x499)<x500));

	if (t65 != 3581253179740178LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x509 = INT8_MAX;
	int32_t x510 = 30718552;
	volatile int16_t x511 = -53;
	int8_t x512 = INT8_MIN;
	volatile int32_t t66 = 3;

	t66 = (x509<<((x510==x511)<x512));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x513 = 366903434U;
	static uint8_t x514 = 0U;
	static uint8_t x515 = UINT8_MAX;
	static int64_t x516 = 115611123130763LL;
	volatile uint32_t t67 = 10718276U;

	t67 = (x513<<((x514==x515)<x516));

	if (t67 != 733806868U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x517 = 12720U;
	static int32_t x518 = INT32_MIN;
	int32_t x519 = -2;
	uint32_t t68 = 5078U;

	t68 = (x517<<((x518==x519)<x520));

	if (t68 != 25440U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x525 = 14U;
	int8_t x526 = INT8_MIN;
	int16_t x528 = 1;
	static volatile int32_t t69 = 9994;

	t69 = (x525<<((x526==x527)<x528));

	if (t69 != 28) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x529 = 0U;
	int64_t x530 = INT64_MIN;
	static int32_t x531 = -1;
	volatile int32_t t70 = -204034928;

	t70 = (x529<<((x530==x531)<x532));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x537 = UINT64_MAX;
	int64_t x538 = 30410125644910LL;
	uint64_t x539 = 99646LLU;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x537<<((x538==x539)<x540));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x549 = 4816;
	uint32_t x551 = UINT32_MAX;
	static int64_t x552 = -1LL;

	t72 = (x549<<((x550==x551)<x552));

	if (t72 != 4816) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x565 = 748U;
	uint8_t x566 = 15U;
	int16_t x567 = -1;
	uint32_t x568 = 8U;

	t73 = (x565<<((x566==x567)<x568));

	if (t73 != 1496) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x569 = 323U;
	int8_t x571 = INT8_MIN;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t74 = 896984;

	t74 = (x569<<((x570==x571)<x572));

	if (t74 != 323) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x573 = 439881LL;
	volatile int16_t x574 = INT16_MAX;
	int16_t x575 = 107;
	uint32_t x576 = 21507420U;
	int64_t t75 = -7608505933315106LL;

	t75 = (x573<<((x574==x575)<x576));

	if (t75 != 879762LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x579 = 89U;
	volatile int32_t t76 = 4;

	t76 = (x577<<((x578==x579)<x580));

	if (t76 != 22334) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x581 = UINT32_MAX;
	volatile int64_t x582 = -1LL;
	int32_t x583 = -1;
	static int32_t x584 = INT32_MAX;
	uint32_t t77 = 929U;

	t77 = (x581<<((x582==x583)<x584));

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x597 = UINT8_MAX;
	static int16_t x599 = INT16_MAX;

	t78 = (x597<<((x598==x599)<x600));

	if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x605 = UINT16_MAX;
	volatile int8_t x606 = -1;
	uint32_t x607 = UINT32_MAX;
	uint32_t x608 = UINT32_MAX;
	int32_t t79 = 439059641;

	t79 = (x605<<((x606==x607)<x608));

	if (t79 != 131070) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x627 = -1LL;
	int64_t x628 = -1LL;
	static int64_t t80 = INT64_MAX;

	t80 = (x625<<((x626==x627)<x628));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x638 = -872958051LL;
	uint64_t x639 = UINT64_MAX;
	static volatile int64_t t81 = 1044LL;

	t81 = (x637<<((x638==x639)<x640));

	if (t81 != 404LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x665 = 42;
	volatile uint64_t x666 = 252566406037290727LLU;
	int32_t x668 = INT32_MIN;
	volatile int32_t t82 = -35;

	t82 = (x665<<((x666==x667)<x668));

	if (t82 != 42) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x673 = INT64_MAX;
	static volatile int16_t x674 = INT16_MAX;
	int32_t x676 = -1;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x673<<((x674==x675)<x676));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x681 = INT8_MAX;
	uint16_t x683 = 1001U;
	int32_t t84 = 6373263;

	t84 = (x681<<((x682==x683)<x684));

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x697 = 72U;
	int64_t x698 = -1LL;
	uint8_t x699 = 5U;
	volatile int32_t t85 = -149580;

	t85 = (x697<<((x698==x699)<x700));

	if (t85 != 144) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x705 = 90516944;
	int64_t x707 = -1LL;
	uint16_t x708 = UINT16_MAX;
	int32_t t86 = -8237;

	t86 = (x705<<((x706==x707)<x708));

	if (t86 != 181033888) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x709 = UINT32_MAX;
	static volatile int64_t x710 = INT64_MAX;
	int64_t x711 = INT64_MIN;
	uint64_t x712 = 331190532480LLU;
	volatile uint32_t t87 = 1U;

	t87 = (x709<<((x710==x711)<x712));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x715 = INT64_MIN;
	int8_t x716 = -11;
	uint32_t t88 = UINT32_MAX;

	t88 = (x713<<((x714==x715)<x716));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x765 = 3U;
	uint32_t x766 = 94843U;
	uint16_t x767 = 3U;
	int8_t x768 = -1;
	static int32_t t89 = 2647762;

	t89 = (x765<<((x766==x767)<x768));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x770 = INT16_MIN;
	volatile int64_t x771 = INT64_MIN;
	int8_t x772 = 1;
	static int32_t t90 = -869489660;

	t90 = (x769<<((x770==x771)<x772));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x777 = INT16_MAX;
	int32_t x778 = INT32_MIN;
	volatile int16_t x779 = 0;
	volatile int32_t t91 = 2;

	t91 = (x777<<((x778==x779)<x780));

	if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x785 = 1U;
	uint16_t x787 = 896U;
	int32_t x788 = -1;
	int32_t t92 = 317975409;

	t92 = (x785<<((x786==x787)<x788));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x789 = 4U;
	uint8_t x790 = 1U;
	int64_t x791 = INT64_MIN;
	uint64_t x792 = 137522871827318LLU;

	t93 = (x789<<((x790==x791)<x792));

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x793 = INT8_MAX;
	uint16_t x794 = UINT16_MAX;
	int32_t x796 = 11352210;

	t94 = (x793<<((x794==x795)<x796));

	if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x798 = INT64_MIN;
	int8_t x799 = 0;

	t95 = (x797<<((x798==x799)<x800));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x801 = INT8_MAX;
	uint64_t x803 = 8367932LLU;
	uint64_t x804 = UINT64_MAX;
	int32_t t96 = 0;

	t96 = (x801<<((x802==x803)<x804));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x813 = 38U;
	uint32_t x815 = 2401U;
	int64_t x816 = INT64_MAX;
	int32_t t97 = 0;

	t97 = (x813<<((x814==x815)<x816));

	if (t97 != 76) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x817 = 1068074;
	int8_t x818 = -1;
	static int16_t x819 = -1;
	volatile int32_t t98 = 2;

	t98 = (x817<<((x818==x819)<x820));

	if (t98 != 2136148) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x833 = INT8_MAX;
	int16_t x834 = INT16_MAX;
	volatile uint64_t x835 = 2590LLU;
	int64_t x836 = -598826817963488762LL;

	t99 = (x833<<((x834==x835)<x836));

	if (t99 != 127) { NG(); } else { ; }
	
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

