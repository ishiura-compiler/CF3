#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 15;
static int16_t x7 = INT16_MIN;
uint8_t x13 = 5U;
int32_t t2 = 4632715;
int32_t x56 = 397406;
volatile int8_t x57 = INT8_MAX;
uint64_t x59 = 22LLU;
volatile int32_t t7 = 50398583;
uint8_t x65 = 25U;
int64_t x67 = -875576LL;
volatile int32_t t8 = 11792640;
uint32_t x69 = UINT32_MAX;
uint8_t x70 = UINT8_MAX;
static uint64_t x73 = 455260124LLU;
int64_t x76 = INT64_MIN;
static uint32_t x77 = 221713990U;
static volatile int64_t x98 = INT64_MIN;
uint8_t x121 = UINT8_MAX;
int32_t x127 = -1;
static uint16_t x145 = UINT16_MAX;
int64_t x157 = 4025019964832211763LL;
int64_t x158 = INT64_MIN;
uint16_t x163 = 369U;
int16_t x164 = -1;
int32_t t23 = -58291;
static volatile int8_t x197 = 0;
int8_t x203 = -1;
uint8_t x207 = 15U;
uint64_t x208 = UINT64_MAX;
volatile uint32_t t27 = 89562627U;
volatile uint64_t x237 = 3901413301866LLU;
uint64_t x242 = 829313480456868LLU;
int32_t x244 = INT32_MIN;
uint16_t x253 = 927U;
int64_t x267 = INT64_MIN;
int64_t x268 = -792LL;
volatile int32_t t37 = -6;
int16_t x287 = 1;
uint32_t x289 = 314U;
int64_t x291 = -61451087724LL;
static int32_t x292 = INT32_MIN;
uint64_t t40 = 2080LLU;
int8_t x306 = -1;
int16_t x308 = INT16_MIN;
uint32_t x309 = 33U;
int64_t x312 = INT64_MAX;
uint64_t x317 = 2113235265109976LLU;
static volatile uint64_t t43 = 2977722146590215LLU;
uint32_t x326 = 215U;
static int32_t x332 = -1609;
int32_t x336 = INT32_MIN;
static uint16_t x350 = UINT16_MAX;
static volatile int16_t x351 = INT16_MAX;
int16_t x360 = INT16_MAX;
volatile uint32_t t51 = UINT32_MAX;
uint16_t x361 = 27829U;
int16_t x363 = INT16_MAX;
static volatile int32_t t52 = 4;
static uint8_t x369 = UINT8_MAX;
int64_t x380 = INT64_MIN;
int8_t x388 = -52;
int8_t x389 = INT8_MAX;
uint16_t x390 = 6U;
static volatile int32_t t57 = 24874772;
int32_t x412 = INT32_MIN;
uint64_t x418 = 531519087447014LLU;
static int16_t x419 = -1;
int32_t x426 = -2935434;
int32_t t62 = 1666774;
volatile uint32_t x430 = UINT32_MAX;
int64_t t63 = 477324112LL;
uint32_t x433 = 5732U;
int64_t x435 = INT64_MIN;
uint16_t x459 = UINT16_MAX;
uint64_t x461 = UINT64_MAX;
int64_t x464 = INT64_MIN;
static uint8_t x504 = 57U;
int16_t x508 = INT16_MIN;
volatile uint32_t t74 = 5U;
int32_t x509 = 72328975;
uint8_t x517 = 7U;
int16_t x526 = -846;
int16_t x528 = -1;
uint32_t x544 = UINT32_MAX;
int16_t x545 = 1;
static int16_t x546 = INT16_MIN;
int64_t x547 = -85138396883LL;
int32_t x564 = INT32_MIN;
int16_t x566 = 0;
uint16_t x569 = UINT16_MAX;
int16_t x570 = INT16_MIN;
static int32_t t82 = -185125414;
int32_t x573 = 949599455;
int64_t x574 = INT64_MIN;
int32_t t83 = -837079909;
volatile int32_t t85 = 240;
static int8_t x604 = INT8_MIN;
uint16_t x610 = 0U;
uint32_t x612 = 8043814U;
volatile int32_t t87 = -1042496029;
volatile uint8_t x613 = 4U;
uint8_t x617 = UINT8_MAX;
int8_t x618 = INT8_MAX;
int16_t x619 = INT16_MAX;
static volatile int32_t t89 = -156206;
int32_t x621 = 4;
volatile int16_t x624 = -1;
volatile uint16_t x625 = UINT16_MAX;
int32_t x628 = INT32_MIN;
int32_t x646 = INT32_MAX;
uint32_t x647 = 120U;
int8_t x701 = INT8_MAX;


void f0(void) {
	int16_t x5 = INT16_MAX;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t0 = 0;

	t0 = (x5<<(x6<(x7^x8)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x14 = INT32_MAX;
	uint16_t x15 = 902U;
	uint16_t x16 = 434U;
	volatile int32_t t1 = -3;

	t1 = (x13<<(x14<(x15^x16)));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = INT8_MAX;
	uint32_t x18 = 13517518U;
	uint64_t x19 = 54253LLU;
	int16_t x20 = INT16_MIN;

	t2 = (x17<<(x18<(x19^x20)));

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x25 = UINT32_MAX;
	static volatile int64_t x26 = -1LL;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MAX;
	uint32_t t3 = UINT32_MAX;

	t3 = (x25<<(x26<(x27^x28)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x45 = 391372452U;
	static int8_t x46 = INT8_MIN;
	int16_t x47 = -1;
	volatile uint8_t x48 = UINT8_MAX;
	volatile uint32_t t4 = 0U;

	t4 = (x45<<(x46<(x47^x48)));

	if (t4 != 391372452U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x53 = UINT8_MAX;
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = -1LL;
	volatile int32_t t5 = -491;

	t5 = (x53<<(x54<(x55^x56)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x58 = INT32_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t6 = 149953460;

	t6 = (x57<<(x58<(x59^x60)));

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x61 = 120U;
	int32_t x62 = 4;
	static uint64_t x63 = 12298238864038592LLU;
	uint64_t x64 = 318846LLU;

	t7 = (x61<<(x62<(x63^x64)));

	if (t7 != 240) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x66 = 20;
	int64_t x68 = 877LL;

	t8 = (x65<<(x66<(x67^x68)));

	if (t8 != 25) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x71 = INT64_MIN;
	volatile uint64_t x72 = UINT64_MAX;
	volatile uint32_t t9 = 4240U;

	t9 = (x69<<(x70<(x71^x72)));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x74 = -5;
	int8_t x75 = 6;
	volatile uint64_t t10 = 711492LLU;

	t10 = (x73<<(x74<(x75^x76)));

	if (t10 != 455260124LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x78 = INT32_MAX;
	uint8_t x79 = 1U;
	static uint32_t x80 = UINT32_MAX;
	volatile uint32_t t11 = 325395478U;

	t11 = (x77<<(x78<(x79^x80)));

	if (t11 != 443427980U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x85 = 14LLU;
	int64_t x86 = -2349850LL;
	static int32_t x87 = INT32_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile uint64_t t12 = 14028595930192430LLU;

	t12 = (x85<<(x86<(x87^x88)));

	if (t12 != 28LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x89 = INT32_MAX;
	static uint64_t x90 = UINT64_MAX;
	static volatile int8_t x91 = 1;
	static volatile uint8_t x92 = 29U;
	int32_t t13 = INT32_MAX;

	t13 = (x89<<(x90<(x91^x92)));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x99 = INT32_MIN;
	static int64_t x100 = -15520726578317084LL;
	uint32_t t14 = 255589922U;

	t14 = (x97<<(x98<(x99^x100)));

	if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MAX;
	volatile int32_t x104 = -4631580;
	volatile int32_t t15 = INT32_MAX;

	t15 = (x101<<(x102<(x103^x104)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x105 = 47;
	static int64_t x106 = INT64_MIN;
	volatile uint32_t x107 = 74152251U;
	int64_t x108 = 0LL;
	volatile int32_t t16 = -1019430;

	t16 = (x105<<(x106<(x107^x108)));

	if (t16 != 94) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x113 = 641;
	int32_t x114 = 3854;
	int8_t x115 = INT8_MAX;
	volatile uint8_t x116 = UINT8_MAX;
	static int32_t t17 = -3;

	t17 = (x113<<(x114<(x115^x116)));

	if (t17 != 641) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x122 = 2058836LLU;
	volatile int64_t x123 = INT64_MAX;
	uint8_t x124 = 0U;
	volatile int32_t t18 = 331736478;

	t18 = (x121<<(x122<(x123^x124)));

	if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x125 = 692U;
	static int64_t x126 = 1510770047214702LL;
	int8_t x128 = INT8_MAX;
	static int32_t t19 = -6444194;

	t19 = (x125<<(x126<(x127^x128)));

	if (t19 != 692) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = INT8_MAX;
	uint64_t x142 = UINT64_MAX;
	static int32_t x143 = INT32_MIN;
	volatile uint64_t x144 = UINT64_MAX;
	static int32_t t20 = 445027;

	t20 = (x141<<(x142<(x143^x144)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x146 = -1;
	int16_t x147 = -556;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t21 = 2;

	t21 = (x145<<(x146<(x147^x148)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x159 = 0;
	int64_t x160 = -840032LL;
	volatile int64_t t22 = 61951058946LL;

	t22 = (x157<<(x158<(x159^x160)));

	if (t22 != 8050039929664423526LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x161 = 351;
	uint64_t x162 = 135262982076534640LLU;

	t23 = (x161<<(x162<(x163^x164)));

	if (t23 != 702) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x189 = 217;
	int16_t x190 = INT16_MAX;
	int16_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t24 = 254;

	t24 = (x189<<(x190<(x191^x192)));

	if (t24 != 217) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = INT64_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int32_t t25 = 3;

	t25 = (x197<<(x198<(x199^x200)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x201 = 57;
	int64_t x202 = INT64_MIN;
	int8_t x204 = 9;
	int32_t t26 = 4841;

	t26 = (x201<<(x202<(x203^x204)));

	if (t26 != 114) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x205 = 11U;
	int16_t x206 = 1;

	t27 = (x205<<(x206<(x207^x208)));

	if (t27 != 22U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x217 = 7U;
	uint64_t x218 = UINT64_MAX;
	volatile int8_t x219 = INT8_MIN;
	static int8_t x220 = 21;
	volatile int32_t t28 = -1293;

	t28 = (x217<<(x218<(x219^x220)));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x221 = 1U;
	static uint32_t x222 = 7511650U;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MAX;
	volatile int32_t t29 = -22;

	t29 = (x221<<(x222<(x223^x224)));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = 4U;
	int64_t x232 = -166333334462556LL;
	volatile int32_t t30 = -3;

	t30 = (x229<<(x230<(x231^x232)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x238 = -1LL;
	static uint16_t x239 = 2U;
	static uint8_t x240 = 28U;
	uint64_t t31 = 106441978877678250LLU;

	t31 = (x237<<(x238<(x239^x240)));

	if (t31 != 7802826603732LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x241 = 1806U;
	int64_t x243 = -1LL;
	volatile uint32_t t32 = 541069U;

	t32 = (x241<<(x242<(x243^x244)));

	if (t32 != 1806U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x254 = -6;
	static int8_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	int32_t t33 = -1700046;

	t33 = (x253<<(x254<(x255^x256)));

	if (t33 != 927) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x261 = 30338175LL;
	uint32_t x262 = UINT32_MAX;
	uint64_t x263 = 8477038276933932LLU;
	static int64_t x264 = 17690981562494532LL;
	volatile int64_t t34 = -157919LL;

	t34 = (x261<<(x262<(x263^x264)));

	if (t34 != 60676350LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x265 = 6LL;
	int32_t x266 = 16467652;
	int64_t t35 = 16547325293260319LL;

	t35 = (x265<<(x266<(x267^x268)));

	if (t35 != 12LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x269 = 2668U;
	uint8_t x270 = UINT8_MAX;
	volatile int16_t x271 = -126;
	int64_t x272 = -1LL;
	int32_t t36 = 6342255;

	t36 = (x269<<(x270<(x271^x272)));

	if (t36 != 2668) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x281 = 428604;
	volatile int64_t x282 = INT64_MIN;
	int64_t x283 = -3486550LL;
	uint32_t x284 = 170533270U;

	t37 = (x281<<(x282<(x283^x284)));

	if (t37 != 857208) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x285 = 6;
	volatile uint16_t x286 = 7258U;
	uint32_t x288 = 112865U;
	volatile int32_t t38 = -53780297;

	t38 = (x285<<(x286<(x287^x288)));

	if (t38 != 12) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x290 = INT64_MAX;
	volatile uint32_t t39 = 26968U;

	t39 = (x289<<(x290<(x291^x292)));

	if (t39 != 314U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 873067U;
	volatile int16_t x299 = INT16_MIN;
	static int16_t x300 = 1;

	t40 = (x297<<(x298<(x299^x300)));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x305 = 268359466LLU;
	uint64_t x307 = 346603240LLU;
	uint64_t t41 = 44LLU;

	t41 = (x305<<(x306<(x307^x308)));

	if (t41 != 268359466LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x310 = 1109U;
	uint32_t x311 = UINT32_MAX;
	uint32_t t42 = 15U;

	t42 = (x309<<(x310<(x311^x312)));

	if (t42 != 66U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 1013572U;
	int16_t x320 = -831;

	t43 = (x317<<(x318<(x319^x320)));

	if (t43 != 2113235265109976LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x325 = INT32_MAX;
	volatile int8_t x327 = -26;
	int8_t x328 = -1;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x325<<(x326<(x327^x328)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x329 = 85612;
	uint16_t x330 = 3U;
	uint8_t x331 = UINT8_MAX;
	volatile int32_t t45 = -11894;

	t45 = (x329<<(x330<(x331^x332)));

	if (t45 != 85612) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile int64_t x334 = INT64_MIN;
	int8_t x335 = -1;
	volatile uint32_t t46 = 61U;

	t46 = (x333<<(x334<(x335^x336)));

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x337 = 115989U;
	volatile int8_t x338 = INT8_MAX;
	int16_t x339 = -11793;
	static int32_t x340 = 10907208;
	uint32_t t47 = 356313U;

	t47 = (x337<<(x338<(x339^x340)));

	if (t47 != 115989U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x345 = 2;
	int8_t x346 = -37;
	int32_t x347 = -103;
	static volatile int16_t x348 = 888;
	volatile int32_t t48 = -92742;

	t48 = (x345<<(x346<(x347^x348)));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x349 = 21LL;
	uint16_t x352 = 30365U;
	static volatile int64_t t49 = 1LL;

	t49 = (x349<<(x350<(x351^x352)));

	if (t49 != 21LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x353 = 14756;
	static int64_t x354 = -1LL;
	int8_t x355 = -39;
	int32_t x356 = INT32_MAX;
	static volatile int32_t t50 = 117;

	t50 = (x353<<(x354<(x355^x356)));

	if (t50 != 14756) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x357 = UINT32_MAX;
	uint32_t x358 = 28655U;
	uint32_t x359 = 24975U;

	t51 = (x357<<(x358<(x359^x360)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x362 = 29516U;
	int16_t x364 = -1;

	t52 = (x361<<(x362<(x363^x364)));

	if (t52 != 55658) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x370 = INT32_MIN;
	uint16_t x371 = 11836U;
	volatile int8_t x372 = INT8_MIN;
	int32_t t53 = -198408890;

	t53 = (x369<<(x370<(x371^x372)));

	if (t53 != 510) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x377 = 3;
	uint64_t x378 = UINT64_MAX;
	volatile int8_t x379 = INT8_MAX;
	int32_t t54 = 5;

	t54 = (x377<<(x378<(x379^x380)));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x385 = UINT64_MAX;
	static uint16_t x386 = 45U;
	uint32_t x387 = 94521723U;
	uint64_t t55 = 19976LLU;

	t55 = (x385<<(x386<(x387^x388)));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x391 = INT16_MAX;
	static volatile int8_t x392 = INT8_MAX;
	int32_t t56 = -31;

	t56 = (x389<<(x390<(x391^x392)));

	if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x397 = 228U;
	static volatile uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;

	t57 = (x397<<(x398<(x399^x400)));

	if (t57 != 456) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x405 = INT16_MAX;
	volatile int16_t x406 = INT16_MIN;
	int32_t x407 = -1;
	int64_t x408 = -1LL;
	int32_t t58 = -1;

	t58 = (x405<<(x406<(x407^x408)));

	if (t58 != 65534) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x409 = UINT8_MAX;
	int64_t x410 = -15560487533LL;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t t59 = 156;

	t59 = (x409<<(x410<(x411^x412)));

	if (t59 != 510) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x413 = 53U;
	int16_t x414 = 108;
	int64_t x415 = -1LL;
	uint16_t x416 = UINT16_MAX;
	static int32_t t60 = 371;

	t60 = (x413<<(x414<(x415^x416)));

	if (t60 != 53) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x417 = INT16_MAX;
	static int64_t x420 = -1LL;
	int32_t t61 = 10;

	t61 = (x417<<(x418<(x419^x420)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x425 = UINT8_MAX;
	int16_t x427 = 0;
	static int16_t x428 = INT16_MAX;

	t62 = (x425<<(x426<(x427^x428)));

	if (t62 != 510) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x429 = 15432LL;
	volatile uint8_t x431 = 65U;
	volatile uint16_t x432 = 1U;

	t63 = (x429<<(x430<(x431^x432)));

	if (t63 != 15432LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x434 = 30U;
	int16_t x436 = INT16_MIN;
	uint32_t t64 = 231060143U;

	t64 = (x433<<(x434<(x435^x436)));

	if (t64 != 11464U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x441 = INT16_MAX;
	volatile uint8_t x442 = 46U;
	volatile int16_t x443 = INT16_MIN;
	volatile uint32_t x444 = 15727U;
	static volatile int32_t t65 = -7462457;

	t65 = (x441<<(x442<(x443^x444)));

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x453 = 1;
	uint32_t x454 = 8878U;
	volatile uint32_t x455 = UINT32_MAX;
	static volatile int64_t x456 = INT64_MIN;
	static volatile int32_t t66 = 28633;

	t66 = (x453<<(x454<(x455^x456)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x457 = 13030382180863624LLU;
	uint16_t x458 = UINT16_MAX;
	uint8_t x460 = 1U;
	volatile uint64_t t67 = 3931844027LLU;

	t67 = (x457<<(x458<(x459^x460)));

	if (t67 != 13030382180863624LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x462 = INT16_MAX;
	uint32_t x463 = 62U;
	static uint64_t t68 = UINT64_MAX;

	t68 = (x461<<(x462<(x463^x464)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x473 = 2U;
	static int64_t x474 = 52995377499320LL;
	int32_t x475 = -1;
	static int64_t x476 = -422440150210LL;
	volatile int32_t t69 = -217;

	t69 = (x473<<(x474<(x475^x476)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x477 = 1692047191U;
	volatile int8_t x478 = INT8_MIN;
	volatile uint32_t x479 = UINT32_MAX;
	int8_t x480 = -15;
	volatile uint32_t t70 = 47834655U;

	t70 = (x477<<(x478<(x479^x480)));

	if (t70 != 1692047191U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x481 = INT16_MAX;
	uint8_t x482 = UINT8_MAX;
	int32_t x483 = 2575;
	int32_t x484 = INT32_MIN;
	volatile int32_t t71 = -36703370;

	t71 = (x481<<(x482<(x483^x484)));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x497 = UINT8_MAX;
	volatile uint8_t x498 = 3U;
	int8_t x499 = INT8_MIN;
	static volatile int64_t x500 = INT64_MIN;
	int32_t t72 = 187;

	t72 = (x497<<(x498<(x499^x500)));

	if (t72 != 510) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x501 = UINT16_MAX;
	int64_t x502 = INT64_MAX;
	int8_t x503 = INT8_MIN;
	volatile int32_t t73 = 28;

	t73 = (x501<<(x502<(x503^x504)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x505 = 53907U;
	uint8_t x506 = 0U;
	volatile uint16_t x507 = UINT16_MAX;

	t74 = (x505<<(x506<(x507^x508)));

	if (t74 != 53907U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x510 = -38697LL;
	static int16_t x511 = INT16_MAX;
	uint32_t x512 = 261869U;
	volatile int32_t t75 = -300276150;

	t75 = (x509<<(x510<(x511^x512)));

	if (t75 != 144657950) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x518 = INT8_MAX;
	uint16_t x519 = 335U;
	int32_t x520 = -1;
	int32_t t76 = -6459664;

	t76 = (x517<<(x518<(x519^x520)));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x525 = 12;
	int8_t x527 = -1;
	static int32_t t77 = -19;

	t77 = (x525<<(x526<(x527^x528)));

	if (t77 != 24) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x541 = 11302120U;
	uint32_t x542 = UINT32_MAX;
	volatile int8_t x543 = INT8_MIN;
	volatile uint32_t t78 = 189U;

	t78 = (x541<<(x542<(x543^x544)));

	if (t78 != 11302120U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x548 = 2005557U;
	int32_t t79 = -96444;

	t79 = (x545<<(x546<(x547^x548)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x561 = UINT8_MAX;
	uint16_t x562 = 24U;
	uint32_t x563 = UINT32_MAX;
	int32_t t80 = -844;

	t80 = (x561<<(x562<(x563^x564)));

	if (t80 != 510) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x565 = INT8_MAX;
	int8_t x567 = -1;
	int64_t x568 = -1LL;
	volatile int32_t t81 = 407807;

	t81 = (x565<<(x566<(x567^x568)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x571 = INT64_MIN;
	uint64_t x572 = 70958LLU;

	t82 = (x569<<(x570<(x571^x572)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x575 = INT16_MIN;
	int16_t x576 = -1;

	t83 = (x573<<(x574<(x575^x576)));

	if (t83 != 1899198910) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x589 = 763U;
	int32_t x590 = -1;
	int64_t x591 = INT64_MIN;
	int64_t x592 = INT64_MIN;
	volatile uint32_t t84 = 2U;

	t84 = (x589<<(x590<(x591^x592)));

	if (t84 != 1526U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x597 = UINT8_MAX;
	int64_t x598 = 0LL;
	int32_t x599 = 36237;
	static uint32_t x600 = UINT32_MAX;

	t85 = (x597<<(x598<(x599^x600)));

	if (t85 != 510) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x601 = 61U;
	static uint32_t x602 = 8774U;
	int16_t x603 = INT16_MIN;
	int32_t t86 = -833615;

	t86 = (x601<<(x602<(x603^x604)));

	if (t86 != 122) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x609 = INT8_MAX;
	int8_t x611 = -23;

	t87 = (x609<<(x610<(x611^x612)));

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x614 = -1;
	int16_t x615 = 54;
	uint32_t x616 = UINT32_MAX;
	int32_t t88 = 2244280;

	t88 = (x613<<(x614<(x615^x616)));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x620 = INT16_MAX;

	t89 = (x617<<(x618<(x619^x620)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x622 = -23;
	uint32_t x623 = 45440118U;
	volatile int32_t t90 = -785117663;

	t90 = (x621<<(x622<(x623^x624)));

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x626 = -1LL;
	int16_t x627 = INT16_MIN;
	volatile int32_t t91 = 60906511;

	t91 = (x625<<(x626<(x627^x628)));

	if (t91 != 131070) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x637 = UINT16_MAX;
	uint64_t x638 = 59196966705LLU;
	int64_t x639 = INT64_MIN;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t92 = 6941;

	t92 = (x637<<(x638<(x639^x640)));

	if (t92 != 131070) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x645 = 2U;
	int64_t x648 = INT64_MAX;
	static int32_t t93 = -253;

	t93 = (x645<<(x646<(x647^x648)));

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x653 = 106688U;
	int16_t x654 = -2;
	volatile uint8_t x655 = 1U;
	uint64_t x656 = UINT64_MAX;
	uint32_t t94 = 194301727U;

	t94 = (x653<<(x654<(x655^x656)));

	if (t94 != 106688U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x657 = UINT64_MAX;
	int8_t x658 = -1;
	uint32_t x659 = 30U;
	int16_t x660 = INT16_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x657<<(x658<(x659^x660)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x677 = INT8_MAX;
	int32_t x678 = -18653683;
	static int32_t x679 = -1;
	volatile uint16_t x680 = 3U;
	int32_t t96 = -331423;

	t96 = (x677<<(x678<(x679^x680)));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x689 = UINT32_MAX;
	int64_t x690 = 117870397785303LL;
	int8_t x691 = -1;
	static uint64_t x692 = 4397990LLU;
	uint32_t t97 = 376535867U;

	t97 = (x689<<(x690<(x691^x692)));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x702 = -10;
	volatile int32_t x703 = INT32_MIN;
	static int8_t x704 = -13;
	static volatile int32_t t98 = 108754358;

	t98 = (x701<<(x702<(x703^x704)));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x705 = 1;
	int16_t x706 = INT16_MIN;
	int32_t x707 = INT32_MAX;
	volatile int16_t x708 = -1163;
	static volatile int32_t t99 = 58659887;

	t99 = (x705<<(x706<(x707^x708)));

	if (t99 != 1) { NG(); } else { ; }
	
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

