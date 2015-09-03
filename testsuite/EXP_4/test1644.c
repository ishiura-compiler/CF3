#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
static int16_t x16 = INT16_MAX;
volatile int32_t t1 = -2;
uint16_t x17 = 8164U;
uint16_t x19 = UINT16_MAX;
int32_t t2 = -2739353;
volatile uint8_t x31 = UINT8_MAX;
static int32_t t4 = INT32_MAX;
int16_t x59 = -1;
volatile int32_t t9 = -1;
int64_t x85 = 41074LL;
volatile int64_t t10 = -12LL;
volatile int32_t t11 = 1062995789;
uint8_t x98 = UINT8_MAX;
volatile uint8_t x105 = 52U;
static volatile int8_t x107 = INT8_MIN;
uint32_t x108 = 4011918U;
static volatile int32_t t16 = -386064030;
int8_t x159 = INT8_MAX;
uint16_t x200 = 944U;
int32_t t22 = 225570;
int64_t x207 = -57LL;
int16_t x233 = 297;
static int16_t x236 = INT16_MAX;
int32_t t25 = 3724191;
int64_t x248 = -27346LL;
uint32_t t26 = 40023U;
int16_t x249 = INT16_MAX;
uint16_t x259 = 388U;
static int8_t x260 = INT8_MAX;
int32_t x261 = 58255;
int16_t x266 = 678;
int32_t x268 = INT32_MIN;
int64_t x274 = INT64_MAX;
uint32_t x277 = UINT32_MAX;
volatile uint8_t x283 = 3U;
volatile uint64_t t34 = 93LLU;
volatile uint8_t x286 = UINT8_MAX;
int8_t x295 = -1;
uint32_t x296 = 103U;
int64_t x311 = -6414LL;
uint16_t x322 = 10477U;
static int32_t x323 = -1;
int16_t x324 = -1;
int32_t t40 = -790;
int64_t x331 = -1LL;
int16_t x348 = -1;
static volatile uint64_t x358 = 1314657529358LLU;
volatile int8_t x359 = -1;
int32_t x364 = INT32_MIN;
uint8_t x396 = 39U;
uint32_t x401 = UINT32_MAX;
int16_t x404 = -88;
int32_t x407 = -1;
uint32_t x409 = 1002012U;
volatile int64_t x410 = -1LL;
int64_t x438 = 119520656LL;
uint64_t x441 = 941LLU;
int64_t x444 = 31714269LL;
int16_t x450 = INT16_MAX;
int8_t x455 = -3;
int16_t x462 = -1;
int16_t x471 = INT16_MIN;
int32_t t59 = 91190;
static uint32_t x489 = 1U;
volatile int16_t x495 = -1;
volatile int32_t x498 = 107;
int32_t x500 = INT32_MIN;
static int32_t t65 = 707893;
volatile uint32_t x521 = 933784U;
volatile uint32_t t67 = 121U;
int64_t x542 = INT64_MIN;
int32_t x547 = -98634;
static uint16_t x548 = 4U;
static int64_t x549 = 4033226143911LL;
int64_t t72 = -1317313051679978707LL;
uint32_t x561 = 711281275U;
uint16_t x563 = UINT16_MAX;
uint8_t x564 = 28U;
int32_t x568 = INT32_MIN;
static int32_t t76 = -1602;
uint64_t x582 = 2329247640101LLU;
uint8_t x583 = 1U;
int32_t x584 = -15;
static uint32_t x591 = UINT32_MAX;
int8_t x608 = INT8_MAX;
uint32_t x615 = 10925608U;
int32_t x644 = -1;
uint64_t t84 = UINT64_MAX;
int8_t x648 = 6;
int32_t x654 = INT32_MIN;
uint16_t x656 = 15U;
uint32_t x663 = UINT32_MAX;
uint8_t x678 = UINT8_MAX;
volatile int64_t t90 = INT64_MAX;
volatile int16_t x683 = INT16_MIN;
static volatile int32_t x718 = INT32_MAX;
int32_t t93 = 0;
uint16_t x737 = UINT16_MAX;
uint32_t x739 = 186355359U;
uint8_t x749 = 4U;
static volatile int16_t x750 = 329;
int8_t x754 = INT8_MIN;
uint32_t t99 = 1943U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int16_t x3 = INT16_MIN;
	static uint16_t x4 = 1U;
	int64_t t0 = INT64_MAX;

	t0 = (x1<<(x2<=(x3<=x4)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 1U;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -61LL;

	t1 = (x13<<(x14<=(x15<=x16)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x18 = 84U;
	static uint32_t x20 = 7U;

	t2 = (x17<<(x18<=(x19<=x20)));

	if (t2 != 8164) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = 337138179709011LL;
	int32_t x26 = -1;
	volatile uint32_t x27 = 99359U;
	int32_t x28 = INT32_MIN;
	volatile int64_t t3 = 343LL;

	t3 = (x25<<(x26<=(x27<=x28)));

	if (t3 != 674276359418022LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MAX;
	uint8_t x30 = 3U;
	int8_t x32 = INT8_MIN;

	t4 = (x29<<(x30<=(x31<=x32)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x37 = 516843546917541503LLU;
	static volatile int64_t x38 = INT64_MIN;
	uint32_t x39 = 29026U;
	uint64_t x40 = 8419LLU;
	volatile uint64_t t5 = 3951179982422LLU;

	t5 = (x37<<(x38<=(x39<=x40)));

	if (t5 != 1033687093835083006LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 14U;
	static uint32_t x42 = UINT32_MAX;
	int64_t x43 = -1LL;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t6 = -76;

	t6 = (x41<<(x42<=(x43<=x44)));

	if (t6 != 14) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x57 = 756;
	int32_t x58 = -119;
	static int8_t x60 = INT8_MIN;
	int32_t t7 = 75893;

	t7 = (x57<<(x58<=(x59<=x60)));

	if (t7 != 1512) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x73 = 128303982594LLU;
	static uint64_t x74 = UINT64_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	uint64_t x76 = 4489329386143898441LLU;
	volatile uint64_t t8 = 183888LLU;

	t8 = (x73<<(x74<=(x75<=x76)));

	if (t8 != 128303982594LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x77 = 1;
	int64_t x78 = INT64_MIN;
	static volatile uint64_t x79 = 102876LLU;
	static uint8_t x80 = 53U;

	t9 = (x77<<(x78<=(x79<=x80)));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x86 = UINT16_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile uint16_t x88 = UINT16_MAX;

	t10 = (x85<<(x86<=(x87<=x88)));

	if (t10 != 41074LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x89 = INT8_MAX;
	uint64_t x90 = 225838424234613498LLU;
	volatile int64_t x91 = 1LL;
	uint8_t x92 = 5U;

	t11 = (x89<<(x90<=(x91<=x92)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x93 = INT16_MAX;
	static int8_t x94 = 4;
	int16_t x95 = INT16_MIN;
	static uint8_t x96 = 2U;
	volatile int32_t t12 = 7262951;

	t12 = (x93<<(x94<=(x95<=x96)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x97 = INT8_MAX;
	static int8_t x99 = -1;
	volatile int8_t x100 = INT8_MAX;
	int32_t t13 = -100782667;

	t13 = (x97<<(x98<=(x99<=x100)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x106 = INT16_MIN;
	int32_t t14 = -40737;

	t14 = (x105<<(x106<=(x107<=x108)));

	if (t14 != 104) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x117 = 2;
	static uint16_t x118 = UINT16_MAX;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t15 = 40310;

	t15 = (x117<<(x118<=(x119<=x120)));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x125 = 43U;
	int32_t x126 = -1;
	int64_t x127 = -1LL;
	uint64_t x128 = 3875081998946413LLU;

	t16 = (x125<<(x126<=(x127<=x128)));

	if (t16 != 86) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x137 = 24U;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 5U;
	int32_t t17 = -7;

	t17 = (x137<<(x138<=(x139<=x140)));

	if (t17 != 48) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t18 = -15847;

	t18 = (x157<<(x158<=(x159<=x160)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x181 = 2710;
	int16_t x182 = INT16_MIN;
	static int16_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t19 = 6526137;

	t19 = (x181<<(x182<=(x183<=x184)));

	if (t19 != 5420) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x185 = UINT16_MAX;
	int8_t x186 = -1;
	int8_t x187 = -1;
	static int16_t x188 = -1;
	volatile int32_t t20 = 8;

	t20 = (x185<<(x186<=(x187<=x188)));

	if (t20 != 131070) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MAX;
	int8_t x191 = -1;
	int32_t x192 = -1;
	volatile int32_t t21 = INT32_MAX;

	t21 = (x189<<(x190<=(x191<=x192)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;

	t22 = (x197<<(x198<=(x199<=x200)));

	if (t22 != 510) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x205 = 545849830840423LLU;
	static uint16_t x206 = UINT16_MAX;
	static int64_t x208 = 2732875LL;
	uint64_t t23 = 37194803LLU;

	t23 = (x205<<(x206<=(x207<=x208)));

	if (t23 != 545849830840423LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x225 = 0LL;
	volatile int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t24 = -3330186875088LL;

	t24 = (x225<<(x226<=(x227<=x228)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = -143;

	t25 = (x233<<(x234<=(x235<=x236)));

	if (t25 != 297) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x245 = 717510U;
	int32_t x246 = -1;
	int8_t x247 = INT8_MAX;

	t26 = (x245<<(x246<=(x247<=x248)));

	if (t26 != 1435020U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x250 = INT32_MIN;
	uint16_t x251 = 455U;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t27 = 46;

	t27 = (x249<<(x250<=(x251<=x252)));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x253 = INT16_MAX;
	int64_t x254 = -1779781432659613LL;
	static uint32_t x255 = 142U;
	uint64_t x256 = 22171LLU;
	static volatile int32_t t28 = 3178;

	t28 = (x253<<(x254<=(x255<=x256)));

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x257 = 99U;
	static int32_t x258 = 3196071;
	uint32_t t29 = 353765U;

	t29 = (x257<<(x258<=(x259<=x260)));

	if (t29 != 99U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t30 = -16137;

	t30 = (x261<<(x262<=(x263<=x264)));

	if (t30 != 116510) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x265 = INT16_MAX;
	int16_t x267 = INT16_MAX;
	int32_t t31 = 437;

	t31 = (x265<<(x266<=(x267<=x268)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x273 = 30U;
	uint64_t x275 = 84LLU;
	static int16_t x276 = INT16_MIN;
	int32_t t32 = -766858;

	t32 = (x273<<(x274<=(x275<=x276)));

	if (t32 != 30) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 26LLU;
	volatile int64_t x280 = -33196050476985493LL;
	uint32_t t33 = 3U;

	t33 = (x277<<(x278<=(x279<=x280)));

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x281 = 1LLU;
	int16_t x282 = -3002;
	static uint8_t x284 = 75U;

	t34 = (x281<<(x282<=(x283<=x284)));

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x285 = 84270657408LLU;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = INT8_MIN;
	static uint64_t t35 = 56550968961816LLU;

	t35 = (x285<<(x286<=(x287<=x288)));

	if (t35 != 84270657408LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x289 = 29163LLU;
	int32_t x290 = 16;
	uint32_t x291 = 223633363U;
	volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t36 = 5161LLU;

	t36 = (x289<<(x290<=(x291<=x292)));

	if (t36 != 29163LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x293 = 3;
	uint64_t x294 = 194180274173969LLU;
	int32_t t37 = -557879;

	t37 = (x293<<(x294<=(x295<=x296)));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x309 = INT64_MAX;
	int32_t x310 = 244;
	uint32_t x312 = UINT32_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x309<<(x310<=(x311<=x312)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x317 = 35;
	static int8_t x318 = 1;
	int32_t x319 = -1;
	volatile int64_t x320 = INT64_MAX;
	int32_t t39 = 33;

	t39 = (x317<<(x318<=(x319<=x320)));

	if (t39 != 70) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x321 = UINT16_MAX;

	t40 = (x321<<(x322<=(x323<=x324)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x329 = 22451303549LLU;
	uint64_t x330 = 393598767032310864LLU;
	int64_t x332 = -451885991LL;
	volatile uint64_t t41 = 270098490675020900LLU;

	t41 = (x329<<(x330<=(x331<=x332)));

	if (t41 != 22451303549LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x345 = 132697048948200408LLU;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = 0;
	volatile uint64_t t42 = 321004543255668LLU;

	t42 = (x345<<(x346<=(x347<=x348)));

	if (t42 != 132697048948200408LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x357 = 11;
	uint64_t x360 = 4471203669LLU;
	int32_t t43 = 12385;

	t43 = (x357<<(x358<=(x359<=x360)));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MAX;
	int32_t t44 = -150829680;

	t44 = (x361<<(x362<=(x363<=x364)));

	if (t44 != 65534) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x393 = 2U;
	int64_t x394 = -692615486528412838LL;
	int16_t x395 = INT16_MIN;
	volatile int32_t t45 = 2184368;

	t45 = (x393<<(x394<=(x395<=x396)));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x397 = 0U;
	static int8_t x398 = 34;
	static int32_t x399 = -1;
	static int32_t x400 = -1;
	volatile uint32_t t46 = 233056U;

	t46 = (x397<<(x398<=(x399<=x400)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MAX;
	uint32_t t47 = UINT32_MAX;

	t47 = (x401<<(x402<=(x403<=x404)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x405 = UINT8_MAX;
	volatile int16_t x406 = INT16_MAX;
	uint32_t x408 = 254779U;
	int32_t t48 = -1747088;

	t48 = (x405<<(x406<=(x407<=x408)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x411 = INT32_MAX;
	int8_t x412 = -16;
	volatile uint32_t t49 = 3U;

	t49 = (x409<<(x410<=(x411<=x412)));

	if (t49 != 2004024U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x418 = INT8_MIN;
	int8_t x419 = 1;
	int32_t x420 = 155;
	int32_t t50 = 3939;

	t50 = (x417<<(x418<=(x419<=x420)));

	if (t50 != 510) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x421 = 1;
	volatile int16_t x422 = INT16_MAX;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	int32_t t51 = -1012;

	t51 = (x421<<(x422<=(x423<=x424)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x439 = -474261;
	volatile int32_t x440 = -1;
	volatile int32_t t52 = -16901;

	t52 = (x437<<(x438<=(x439<=x440)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x442 = 247980674U;
	uint16_t x443 = 1U;
	volatile uint64_t t53 = 755582420395LLU;

	t53 = (x441<<(x442<=(x443<=x444)));

	if (t53 != 941LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x449 = INT64_MAX;
	int8_t x451 = -2;
	volatile uint64_t x452 = UINT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x449<<(x450<=(x451<=x452)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x453 = 25U;
	int32_t x454 = INT32_MIN;
	int32_t x456 = 8;
	uint32_t t55 = 28561U;

	t55 = (x453<<(x454<=(x455<=x456)));

	if (t55 != 50U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x457 = INT32_MAX;
	uint64_t x458 = 12LLU;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t56 = INT32_MAX;

	t56 = (x457<<(x458<=(x459<=x460)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x461 = 7064LLU;
	int16_t x463 = 934;
	int16_t x464 = INT16_MIN;
	uint64_t t57 = 8606901317293LLU;

	t57 = (x461<<(x462<=(x463<=x464)));

	if (t57 != 14128LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x469 = 0U;
	int8_t x470 = INT8_MAX;
	int16_t x472 = 501;
	volatile int32_t t58 = 28709708;

	t58 = (x469<<(x470<=(x471<=x472)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x473 = 0;
	uint8_t x474 = UINT8_MAX;
	uint16_t x475 = UINT16_MAX;
	volatile uint16_t x476 = 18U;

	t59 = (x473<<(x474<=(x475<=x476)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x490 = UINT8_MAX;
	uint8_t x491 = 38U;
	int32_t x492 = -1;
	volatile uint32_t t60 = 14193055U;

	t60 = (x489<<(x490<=(x491<=x492)));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x493 = 24U;
	volatile int64_t x494 = INT64_MIN;
	uint32_t x496 = UINT32_MAX;
	static uint32_t t61 = 3250330U;

	t61 = (x493<<(x494<=(x495<=x496)));

	if (t61 != 48U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x497 = UINT32_MAX;
	uint64_t x499 = UINT64_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x497<<(x498<=(x499<=x500)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x501 = 1U;
	int16_t x502 = 0;
	int8_t x503 = -51;
	volatile int32_t x504 = INT32_MAX;
	volatile int32_t t63 = -420387;

	t63 = (x501<<(x502<=(x503<=x504)));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x505 = 99082790376227LLU;
	static int32_t x506 = -1;
	volatile int64_t x507 = 737580465830LL;
	static uint16_t x508 = 3564U;
	static uint64_t t64 = 778866LLU;

	t64 = (x505<<(x506<=(x507<=x508)));

	if (t64 != 198165580752454LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x513 = UINT16_MAX;
	volatile int16_t x514 = INT16_MAX;
	static int8_t x515 = INT8_MAX;
	int64_t x516 = -2LL;

	t65 = (x513<<(x514<=(x515<=x516)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x517 = 162;
	int16_t x518 = INT16_MIN;
	int64_t x519 = -1LL;
	uint16_t x520 = 4U;
	int32_t t66 = 1612;

	t66 = (x517<<(x518<=(x519<=x520)));

	if (t66 != 324) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x522 = UINT32_MAX;
	int64_t x523 = -1LL;
	uint8_t x524 = UINT8_MAX;

	t67 = (x521<<(x522<=(x523<=x524)));

	if (t67 != 933784U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x525 = INT16_MAX;
	int8_t x526 = -1;
	int32_t x527 = INT32_MAX;
	uint8_t x528 = UINT8_MAX;
	int32_t t68 = -1;

	t68 = (x525<<(x526<=(x527<=x528)));

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x541 = 12508737U;
	int32_t x543 = INT32_MIN;
	uint64_t x544 = 6787872552151200LLU;
	volatile uint32_t t69 = 3206610U;

	t69 = (x541<<(x542<=(x543<=x544)));

	if (t69 != 25017474U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x545 = 48180700U;
	int64_t x546 = INT64_MIN;
	volatile uint32_t t70 = 66U;

	t70 = (x545<<(x546<=(x547<=x548)));

	if (t70 != 96361400U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x550 = INT64_MIN;
	static int8_t x551 = INT8_MIN;
	int8_t x552 = -41;
	int64_t t71 = 3646878591LL;

	t71 = (x549<<(x550<=(x551<=x552)));

	if (t71 != 8066452287822LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x553 = 23238LL;
	int16_t x554 = -7555;
	int8_t x555 = -48;
	uint64_t x556 = 992LLU;

	t72 = (x553<<(x554<=(x555<=x556)));

	if (t72 != 46476LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x562 = UINT32_MAX;
	uint32_t t73 = 1903U;

	t73 = (x561<<(x562<=(x563<=x564)));

	if (t73 != 711281275U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x565 = 606;
	int8_t x566 = INT8_MIN;
	int16_t x567 = INT16_MIN;
	int32_t t74 = -886408967;

	t74 = (x565<<(x566<=(x567<=x568)));

	if (t74 != 1212) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x569 = 0;
	volatile int16_t x570 = INT16_MAX;
	uint32_t x571 = 15439U;
	int16_t x572 = INT16_MIN;
	volatile int32_t t75 = 399;

	t75 = (x569<<(x570<=(x571<=x572)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x577 = 15U;
	int32_t x578 = -506183285;
	uint32_t x579 = UINT32_MAX;
	int8_t x580 = 0;

	t76 = (x577<<(x578<=(x579<=x580)));

	if (t76 != 30) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x581 = 25U;
	volatile uint32_t t77 = 14742171U;

	t77 = (x581<<(x582<=(x583<=x584)));

	if (t77 != 25U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x589 = UINT64_MAX;
	uint16_t x590 = 0U;
	volatile int64_t x592 = INT64_MAX;
	uint64_t t78 = 0LLU;

	t78 = (x589<<(x590<=(x591<=x592)));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x605 = 2302781LLU;
	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MAX;
	volatile uint64_t t79 = 35LLU;

	t79 = (x605<<(x606<=(x607<=x608)));

	if (t79 != 4605562LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x609 = 106U;
	int8_t x610 = INT8_MIN;
	volatile int64_t x611 = -52389422925682LL;
	int32_t x612 = 0;
	int32_t t80 = 1068259;

	t80 = (x609<<(x610<=(x611<=x612)));

	if (t80 != 212) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x613 = INT8_MAX;
	int8_t x614 = -1;
	uint32_t x616 = 7066U;
	int32_t t81 = -4;

	t81 = (x613<<(x614<=(x615<=x616)));

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x625 = UINT64_MAX;
	volatile uint32_t x626 = 181252U;
	static int8_t x627 = INT8_MAX;
	static int8_t x628 = INT8_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x625<<(x626<=(x627<=x628)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x637 = 8389;
	int8_t x638 = 13;
	int64_t x639 = -68980513888723LL;
	int16_t x640 = INT16_MIN;
	volatile int32_t t83 = 0;

	t83 = (x637<<(x638<=(x639<=x640)));

	if (t83 != 8389) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x641 = UINT64_MAX;
	int16_t x642 = INT16_MAX;
	uint16_t x643 = 19721U;

	t84 = (x641<<(x642<=(x643<=x644)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x645 = INT8_MAX;
	int32_t x646 = -1;
	static volatile uint64_t x647 = 39911294547574LLU;
	static volatile int32_t t85 = -48454;

	t85 = (x645<<(x646<=(x647<=x648)));

	if (t85 != 254) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x653 = INT8_MAX;
	volatile int8_t x655 = INT8_MIN;
	static int32_t t86 = 6333454;

	t86 = (x653<<(x654<=(x655<=x656)));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x661 = 221624283U;
	int8_t x662 = INT8_MAX;
	static uint64_t x664 = 1206482571891514877LLU;
	volatile uint32_t t87 = 151510U;

	t87 = (x661<<(x662<=(x663<=x664)));

	if (t87 != 221624283U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x665 = 525491112199246LLU;
	volatile int32_t x666 = INT32_MAX;
	int32_t x667 = -1;
	int16_t x668 = INT16_MAX;
	volatile uint64_t t88 = 398LLU;

	t88 = (x665<<(x666<=(x667<=x668)));

	if (t88 != 525491112199246LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x673 = UINT16_MAX;
	int8_t x674 = -1;
	int32_t x675 = 592;
	static uint16_t x676 = 6528U;
	int32_t t89 = 235;

	t89 = (x673<<(x674<=(x675<=x676)));

	if (t89 != 131070) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x677 = INT64_MAX;
	uint32_t x679 = 6836394U;
	static int16_t x680 = INT16_MAX;

	t90 = (x677<<(x678<=(x679<=x680)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x681 = 3;
	static int64_t x682 = INT64_MIN;
	int32_t x684 = -782;
	int32_t t91 = 2324;

	t91 = (x681<<(x682<=(x683<=x684)));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x717 = 14133009143LLU;
	static int32_t x719 = -459;
	static uint8_t x720 = 0U;
	volatile uint64_t t92 = 1783678047600667427LLU;

	t92 = (x717<<(x718<=(x719<=x720)));

	if (t92 != 14133009143LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x725 = 2U;
	int64_t x726 = 1886514105LL;
	static int64_t x727 = INT64_MIN;
	static int16_t x728 = INT16_MAX;

	t93 = (x725<<(x726<=(x727<=x728)));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x738 = INT64_MIN;
	uint16_t x740 = UINT16_MAX;
	int32_t t94 = -3;

	t94 = (x737<<(x738<=(x739<=x740)));

	if (t94 != 131070) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x745 = 62153U;
	uint64_t x746 = 183310601059243LLU;
	volatile uint8_t x747 = 5U;
	static uint8_t x748 = 3U;
	static uint32_t t95 = 69078U;

	t95 = (x745<<(x746<=(x747<=x748)));

	if (t95 != 62153U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x751 = 13;
	int32_t x752 = INT32_MIN;
	volatile int32_t t96 = -845148;

	t96 = (x749<<(x750<=(x751<=x752)));

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x753 = 249134788U;
	uint32_t x755 = 606081549U;
	volatile uint16_t x756 = 23U;
	uint32_t t97 = 28995319U;

	t97 = (x753<<(x754<=(x755<=x756)));

	if (t97 != 498269576U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x757 = INT32_MAX;
	static uint64_t x758 = UINT64_MAX;
	volatile int8_t x759 = INT8_MIN;
	volatile int64_t x760 = INT64_MIN;
	static volatile int32_t t98 = INT32_MAX;

	t98 = (x757<<(x758<=(x759<=x760)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	int64_t x763 = -1LL;
	int16_t x764 = -2624;

	t99 = (x761<<(x762<=(x763<=x764)));

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

