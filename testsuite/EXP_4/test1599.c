#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = INT16_MIN;
int32_t x12 = INT32_MAX;
volatile uint32_t x36 = 45162165U;
uint8_t x53 = UINT8_MAX;
static int64_t x72 = -1LL;
volatile int8_t x100 = -24;
int32_t t8 = -1;
uint32_t x102 = 27U;
uint32_t t9 = 369776161U;
volatile int32_t x115 = INT32_MIN;
int64_t x122 = 49379625163LL;
int64_t x123 = -1LL;
uint16_t x129 = 246U;
int16_t x132 = INT16_MIN;
static uint8_t x133 = 56U;
int64_t x136 = INT64_MIN;
int32_t t13 = -249237;
int64_t t14 = -56079315159948440LL;
volatile uint8_t x166 = 1U;
static volatile uint16_t x170 = UINT16_MAX;
volatile uint16_t x177 = UINT16_MAX;
int32_t t19 = -1;
uint8_t x202 = 7U;
int8_t x247 = -27;
uint64_t x274 = 376802056628539483LLU;
int64_t x276 = INT64_MIN;
volatile uint64_t t26 = 923LLU;
uint8_t x286 = 3U;
int16_t x288 = INT16_MIN;
static int8_t x290 = INT8_MAX;
uint16_t x292 = UINT16_MAX;
static uint8_t x293 = UINT8_MAX;
uint16_t x295 = 3U;
uint32_t t31 = 298227U;
volatile int32_t t32 = 51;
volatile uint32_t x325 = UINT32_MAX;
int16_t x326 = 7;
int64_t x336 = INT64_MAX;
static int32_t x337 = -1;
uint8_t x356 = 1U;
int32_t x361 = INT32_MIN;
static int32_t t41 = 108;
uint64_t x392 = 134862111391270972LLU;
int8_t x397 = INT8_MAX;
volatile uint16_t x398 = 5U;
int16_t x400 = 4;
uint16_t x402 = 2001U;
uint16_t x406 = 759U;
uint8_t x437 = 89U;
uint16_t x440 = 7U;
volatile int64_t x446 = 38LL;
int8_t x447 = -1;
int8_t x449 = 10;
uint16_t x450 = UINT16_MAX;
int8_t x451 = INT8_MIN;
static int64_t x470 = 0LL;
int64_t x471 = 0LL;
int64_t x476 = INT64_MIN;
int32_t t54 = -58237883;
volatile uint8_t x514 = UINT8_MAX;
int8_t x517 = -1;
uint64_t x518 = UINT64_MAX;
uint16_t x527 = 0U;
uint16_t x541 = UINT16_MAX;
int32_t x544 = -1;
volatile uint32_t x547 = 61U;
static uint32_t x548 = 212120U;
int64_t x552 = INT64_MIN;
volatile int64_t t62 = -466LL;
int16_t x559 = INT16_MIN;
volatile uint16_t x587 = 2230U;
static volatile int32_t t65 = -121215881;
static int8_t x589 = INT8_MIN;
int64_t x592 = -1234284632725970856LL;
static int64_t x608 = -1720705983666926426LL;
int32_t t67 = 22;
uint8_t x609 = UINT8_MAX;
int8_t x619 = -4;
int8_t x626 = 0;
volatile int16_t x641 = 527;
int32_t x643 = 10;
int16_t x644 = INT16_MAX;
int8_t x645 = INT8_MIN;
uint32_t x647 = UINT32_MAX;
int32_t x656 = INT32_MAX;
static uint32_t t76 = 2110296U;
int16_t x664 = INT16_MIN;
uint64_t x669 = 44310119624129LLU;
int64_t x671 = -174666190LL;
uint8_t x672 = UINT8_MAX;
int8_t x673 = INT8_MAX;
int8_t x681 = INT8_MIN;
int16_t x684 = -1;
uint64_t x696 = 160LLU;
volatile int32_t x714 = INT32_MAX;
uint8_t x719 = UINT8_MAX;
static volatile int64_t x725 = -1LL;
int16_t x726 = INT16_MAX;
int8_t x749 = -1;
static uint16_t x785 = 15U;
int8_t x793 = -3;
uint64_t x795 = 11150728LLU;
int64_t x819 = -672273607194LL;
int64_t x824 = -241414LL;
static uint32_t x863 = 903U;
static int64_t t96 = -12832126252760LL;
volatile int16_t x869 = INT16_MAX;
uint8_t x870 = 11U;


void f0(void) {
	int32_t x9 = INT32_MIN;
	static uint32_t x10 = UINT32_MAX;
	uint32_t t0 = 10658844U;

	t0 = (x9^(x10<<(x11<=x12)));

	if (t0 != 2147483646U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MAX;
	int16_t x19 = INT16_MIN;
	int64_t x20 = -2186451092809LL;
	int32_t t1 = -64;

	t1 = (x17^(x18<<(x19<=x20)));

	if (t1 != -32641) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MAX;
	static volatile int64_t t2 = 667299981LL;

	t2 = (x21^(x22<<(x23<=x24)));

	if (t2 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	int32_t x35 = INT32_MAX;
	volatile int32_t t3 = 2;

	t3 = (x33^(x34<<(x35<=x36)));

	if (t3 != -65536) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x54 = 162U;
	int16_t x55 = -1;
	volatile int64_t x56 = -1LL;
	int32_t t4 = 3;

	t4 = (x53^(x54<<(x55<=x56)));

	if (t4 != 443) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x57 = -1LL;
	int32_t x58 = 825225667;
	int64_t x59 = INT64_MAX;
	int8_t x60 = -1;
	int64_t t5 = 2LL;

	t5 = (x57^(x58<<(x59<=x60)));

	if (t5 != -825225668LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = 1;
	int16_t x71 = 479;
	uint64_t t6 = 63373038053067100LLU;

	t6 = (x69^(x70<<(x71<=x72)));

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x81 = UINT64_MAX;
	static volatile uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile uint64_t t7 = 272691214468LLU;

	t7 = (x81^(x82<<(x83<=x84)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x97 = -680;
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = 0;

	t8 = (x97^(x98<<(x99<=x100)));

	if (t8 != -601) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x101 = 3;
	uint16_t x103 = UINT16_MAX;
	volatile uint8_t x104 = 0U;

	t9 = (x101^(x102<<(x103<=x104)));

	if (t9 != 24U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x113 = INT16_MIN;
	uint64_t x114 = 438917448604155LLU;
	int64_t x116 = 245444LL;
	uint64_t t10 = 21107626LLU;

	t10 = (x113^(x114<<(x115<=x116)));

	if (t10 != 18445866238812337142LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x121 = 764U;
	int8_t x124 = -29;
	static volatile int64_t t11 = 13422587320LL;

	t11 = (x121^(x122<<(x123<=x124)));

	if (t11 != 49379625527LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x130 = 1;
	uint16_t x131 = 21223U;
	int32_t t12 = 4;

	t12 = (x129^(x130<<(x131<=x132)));

	if (t12 != 247) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x134 = INT32_MAX;
	int8_t x135 = INT8_MIN;

	t13 = (x133^(x134<<(x135<=x136)));

	if (t13 != 2147483591) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = UINT64_MAX;

	t14 = (x145^(x146<<(x147<=x148)));

	if (t14 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x149 = 366904837U;
	static volatile int16_t x150 = 1123;
	int32_t x151 = -1;
	static int64_t x152 = 186138075070052LL;
	static uint32_t t15 = 5U;

	t15 = (x149^(x150<<(x151<=x152)));

	if (t15 != 366907075U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x161 = 10700LLU;
	int8_t x162 = INT8_MAX;
	int64_t x163 = 19864470378LL;
	static int32_t x164 = 1505;
	uint64_t t16 = 3357813975LLU;

	t16 = (x161^(x162<<(x163<=x164)));

	if (t16 != 10675LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x167 = -1;
	volatile uint32_t x168 = 6296740U;
	static uint32_t t17 = 132448791U;

	t17 = (x165^(x166<<(x167<=x168)));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x169 = -1LL;
	int64_t x171 = INT64_MIN;
	volatile uint16_t x172 = 465U;
	int64_t t18 = -185730124LL;

	t18 = (x169^(x170<<(x171<=x172)));

	if (t18 != -131071LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x178 = 0;
	int16_t x179 = -1334;
	int64_t x180 = INT64_MIN;

	t19 = (x177^(x178<<(x179<=x180)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = 3;
	int16_t x187 = -1;
	static uint16_t x188 = 14676U;
	int32_t t20 = -43805;

	t20 = (x185^(x186<<(x187<=x188)));

	if (t20 != -122) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x189 = INT32_MIN;
	volatile uint16_t x190 = 31U;
	int64_t x191 = INT64_MAX;
	uint16_t x192 = 197U;
	int32_t t21 = -1641;

	t21 = (x189^(x190<<(x191<=x192)));

	if (t21 != -2147483617) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x201 = -105268780;
	int8_t x203 = -1;
	static volatile int64_t x204 = -10LL;
	int32_t t22 = -43771;

	t22 = (x201^(x202<<(x203<=x204)));

	if (t22 != -105268781) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x229 = INT64_MIN;
	static uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 302U;
	int64_t x232 = 6753851771500106LL;
	int64_t t23 = -552520444804916LL;

	t23 = (x229^(x230<<(x231<=x232)));

	if (t23 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x241 = 5673138090545LLU;
	static volatile uint64_t x242 = 68694434LLU;
	uint64_t x243 = 135806LLU;
	uint64_t x244 = UINT64_MAX;
	uint64_t t24 = 10125474111011252LLU;

	t24 = (x241^(x242<<(x243<=x244)));

	if (t24 != 5673271234933LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x245 = INT64_MIN;
	uint8_t x246 = 0U;
	int8_t x248 = 55;
	int64_t t25 = INT64_MIN;

	t25 = (x245^(x246<<(x247<=x248)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x273 = INT8_MIN;
	volatile int8_t x275 = -2;

	t26 = (x273^(x274<<(x275<=x276)));

	if (t26 != 18069942017081012187LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x277 = INT32_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	static int32_t t27 = -24;

	t27 = (x277^(x278<<(x279<=x280)));

	if (t27 != 2147352577) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x281 = -6LL;
	volatile int8_t x282 = INT8_MAX;
	int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;
	static volatile int64_t t28 = -276278867947134472LL;

	t28 = (x281^(x282<<(x283<=x284)));

	if (t28 != -123LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x285 = INT64_MIN;
	static uint64_t x287 = 4701228LLU;
	int64_t t29 = -2494LL;

	t29 = (x285^(x286<<(x287<=x288)));

	if (t29 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x289 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	volatile int32_t t30 = -149;

	t30 = (x289^(x290<<(x291<=x292)));

	if (t30 != -2147483394) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x294 = 312U;
	static volatile int64_t x296 = -76896LL;

	t31 = (x293^(x294<<(x295<=x296)));

	if (t31 != 455U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x297 = -3;
	int16_t x298 = INT16_MAX;
	int32_t x299 = -250343;
	int8_t x300 = -5;

	t32 = (x297^(x298<<(x299<=x300)));

	if (t32 != -65533) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = 370LLU;
	int8_t x315 = INT8_MIN;
	volatile int8_t x316 = INT8_MAX;
	uint64_t t33 = 11940693888833599LLU;

	t33 = (x313^(x314<<(x315<=x316)));

	if (t33 != 18446744073709519588LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x317 = INT16_MAX;
	uint8_t x318 = 8U;
	static volatile int16_t x319 = 492;
	volatile uint32_t x320 = 2U;
	volatile int32_t t34 = 200524;

	t34 = (x317^(x318<<(x319<=x320)));

	if (t34 != 32759) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x327 = -47;
	int8_t x328 = 12;
	uint32_t t35 = 83784U;

	t35 = (x325^(x326<<(x327<=x328)));

	if (t35 != 4294967281U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x333 = INT32_MAX;
	static volatile int16_t x334 = 756;
	int16_t x335 = INT16_MAX;
	static volatile int32_t t36 = 95618;

	t36 = (x333^(x334<<(x335<=x336)));

	if (t36 != 2147482135) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x338 = 66U;
	static int16_t x339 = -5129;
	uint8_t x340 = 2U;
	volatile uint32_t t37 = 266630U;

	t37 = (x337^(x338<<(x339<=x340)));

	if (t37 != 4294967163U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	static int32_t x343 = INT32_MIN;
	int8_t x344 = 9;
	int64_t t38 = 37261484919LL;

	t38 = (x341^(x342<<(x343<=x344)));

	if (t38 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	uint8_t x354 = 3U;
	static int32_t x355 = INT32_MIN;
	static volatile int32_t t39 = 693135;

	t39 = (x353^(x354<<(x355<=x356)));

	if (t39 != 65529) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x362 = INT64_MAX;
	int64_t x363 = INT64_MAX;
	volatile int64_t x364 = -1LL;
	volatile int64_t t40 = 4085466029LL;

	t40 = (x361^(x362<<(x363<=x364)));

	if (t40 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x369 = 1U;
	uint8_t x370 = 0U;
	int64_t x371 = -26667323661605LL;
	int8_t x372 = INT8_MAX;

	t41 = (x369^(x370<<(x371<=x372)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x377 = 2LLU;
	uint8_t x378 = 89U;
	static uint8_t x379 = 97U;
	volatile int8_t x380 = INT8_MAX;
	uint64_t t42 = 5905420LLU;

	t42 = (x377^(x378<<(x379<=x380)));

	if (t42 != 176LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x389 = -1LL;
	int32_t x390 = 1741;
	static int32_t x391 = INT32_MIN;
	int64_t t43 = 1001960895353617061LL;

	t43 = (x389^(x390<<(x391<=x392)));

	if (t43 != -1742LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x393 = 6;
	uint64_t x394 = 250747204005850955LLU;
	int16_t x395 = INT16_MAX;
	volatile int64_t x396 = INT64_MAX;
	uint64_t t44 = 495912682LLU;

	t44 = (x393^(x394<<(x395<=x396)));

	if (t44 != 501494408011701904LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x399 = 14U;
	static int32_t t45 = 737712195;

	t45 = (x397^(x398<<(x399<=x400)));

	if (t45 != 122) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x401 = -1;
	int32_t x403 = INT32_MIN;
	volatile int8_t x404 = INT8_MIN;
	int32_t t46 = 839220;

	t46 = (x401^(x402<<(x403<=x404)));

	if (t46 != -4003) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x405 = INT8_MAX;
	static uint8_t x407 = UINT8_MAX;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t47 = 62448071;

	t47 = (x405^(x406<<(x407<=x408)));

	if (t47 != 648) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x409 = INT32_MIN;
	static volatile int16_t x410 = 7723;
	volatile int64_t x411 = -554717463460767LL;
	int8_t x412 = 0;
	int32_t t48 = 0;

	t48 = (x409^(x410<<(x411<=x412)));

	if (t48 != -2147468202) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x438 = 92U;
	static int32_t x439 = 0;
	volatile uint32_t t49 = 1789646U;

	t49 = (x437^(x438<<(x439<=x440)));

	if (t49 != 225U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x445 = INT32_MAX;
	int32_t x448 = -1;
	int64_t t50 = -25497561808935332LL;

	t50 = (x445^(x446<<(x447<=x448)));

	if (t50 != 2147483571LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x452 = INT64_MAX;
	static int32_t t51 = -32332;

	t51 = (x449^(x450<<(x451<=x452)));

	if (t51 != 131060) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x469 = 105U;
	static volatile int8_t x472 = -1;
	int64_t t52 = -593207974489897LL;

	t52 = (x469^(x470<<(x471<=x472)));

	if (t52 != 105LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x473 = 5628272426242221046LLU;
	int16_t x474 = INT16_MAX;
	int32_t x475 = INT32_MAX;
	uint64_t t53 = 94733665LLU;

	t53 = (x473^(x474<<(x475<=x476)));

	if (t53 != 5628272426242235401LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x489 = 2198310;
	uint8_t x490 = 34U;
	volatile uint8_t x491 = 22U;
	int32_t x492 = INT32_MAX;

	t54 = (x489^(x490<<(x491<=x492)));

	if (t54 != 2198370) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x493 = -2019027;
	int8_t x494 = INT8_MAX;
	int32_t x495 = -24600544;
	volatile int8_t x496 = 14;
	static volatile int32_t t55 = 5;

	t55 = (x493^(x494<<(x495<=x496)));

	if (t55 != -2018861) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x513 = 704U;
	volatile int16_t x515 = -459;
	int32_t x516 = -1;
	volatile int32_t t56 = 1037738;

	t56 = (x513^(x514<<(x515<=x516)));

	if (t56 != 830) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x519 = 72183U;
	int64_t x520 = INT64_MIN;
	volatile uint64_t t57 = 8401292175363501393LLU;

	t57 = (x517^(x518<<(x519<=x520)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x521 = -1;
	uint32_t x522 = UINT32_MAX;
	volatile int16_t x523 = INT16_MIN;
	volatile int16_t x524 = INT16_MIN;
	uint32_t t58 = 1832825U;

	t58 = (x521^(x522<<(x523<=x524)));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x525 = INT32_MIN;
	int8_t x526 = 3;
	uint64_t x528 = UINT64_MAX;
	static int32_t t59 = 11;

	t59 = (x525^(x526<<(x527<=x528)));

	if (t59 != -2147483642) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x542 = 77694LLU;
	int32_t x543 = INT32_MAX;
	uint64_t t60 = 102044523952608734LLU;

	t60 = (x541^(x542<<(x543<=x544)));

	if (t60 != 118913LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x545 = INT32_MIN;
	static uint8_t x546 = 15U;
	volatile int32_t t61 = 1682;

	t61 = (x545^(x546<<(x547<=x548)));

	if (t61 != -2147483618) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x549 = -970203936444848604LL;
	uint32_t x550 = 63U;
	uint8_t x551 = 41U;

	t62 = (x549^(x550<<(x551<=x552)));

	if (t62 != -970203936444848613LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x557 = 31;
	int16_t x558 = 438;
	int8_t x560 = -1;
	volatile int32_t t63 = 242;

	t63 = (x557^(x558<<(x559<=x560)));

	if (t63 != 883) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x565 = 97LL;
	static uint32_t x566 = 8U;
	int32_t x567 = INT32_MIN;
	static volatile int64_t x568 = INT64_MAX;
	volatile int64_t t64 = -4770LL;

	t64 = (x565^(x566<<(x567<=x568)));

	if (t64 != 113LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x585 = -1;
	volatile int16_t x586 = 5;
	int16_t x588 = -1140;

	t65 = (x585^(x586<<(x587<=x588)));

	if (t65 != -6) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x590 = INT64_MAX;
	uint8_t x591 = 0U;
	volatile int64_t t66 = 12924853523189410LL;

	t66 = (x589^(x590<<(x591<=x592)));

	if (t66 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x605 = 31712U;
	int16_t x606 = 0;
	static volatile uint16_t x607 = 0U;

	t67 = (x605^(x606<<(x607<=x608)));

	if (t67 != 31712) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x610 = 15708;
	uint16_t x611 = 0U;
	static int64_t x612 = INT64_MAX;
	int32_t t68 = 30813;

	t68 = (x609^(x610<<(x611<=x612)));

	if (t68 != 31303) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x613 = -1;
	volatile uint8_t x614 = 0U;
	int64_t x615 = -1LL;
	int32_t x616 = 1142;
	volatile int32_t t69 = 1056291378;

	t69 = (x613^(x614<<(x615<=x616)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x617 = INT32_MIN;
	int32_t x618 = 179436;
	int16_t x620 = -1;
	volatile int32_t t70 = 1215373;

	t70 = (x617^(x618<<(x619<=x620)));

	if (t70 != -2147124776) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x621 = INT16_MAX;
	uint64_t x622 = 1822860024314LLU;
	int16_t x623 = INT16_MAX;
	int16_t x624 = INT16_MIN;
	uint64_t t71 = 3030549964360740614LLU;

	t71 = (x621^(x622<<(x623<=x624)));

	if (t71 != 1822860043781LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x625 = UINT8_MAX;
	static uint8_t x627 = UINT8_MAX;
	static int8_t x628 = INT8_MIN;
	volatile int32_t t72 = 219;

	t72 = (x625^(x626<<(x627<=x628)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x633 = -3843;
	uint64_t x634 = 332988110856024301LLU;
	static int64_t x635 = -52075LL;
	static uint8_t x636 = 16U;
	volatile uint64_t t73 = 2830799655LLU;

	t73 = (x633^(x634<<(x635<=x636)));

	if (t73 != 17780767851997499687LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x642 = 461232077676617LLU;
	static volatile uint64_t t74 = 3LLU;

	t74 = (x641^(x642<<(x643<=x644)));

	if (t74 != 922464155353757LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x646 = 7U;
	int16_t x648 = 2;
	volatile uint32_t t75 = 11U;

	t75 = (x645^(x646<<(x647<=x648)));

	if (t75 != 4294967175U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x653 = UINT32_MAX;
	int16_t x654 = 2;
	int64_t x655 = -1LL;

	t76 = (x653^(x654<<(x655<=x656)));

	if (t76 != 4294967291U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x661 = INT8_MIN;
	uint8_t x662 = 2U;
	uint32_t x663 = 765U;
	volatile int32_t t77 = 4220498;

	t77 = (x661^(x662<<(x663<=x664)));

	if (t77 != -124) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x670 = UINT8_MAX;
	uint64_t t78 = 484LLU;

	t78 = (x669^(x670<<(x671<=x672)));

	if (t78 != 44310119623743LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x674 = UINT8_MAX;
	int8_t x675 = INT8_MIN;
	int32_t x676 = -1;
	static volatile int32_t t79 = 2617969;

	t79 = (x673^(x674<<(x675<=x676)));

	if (t79 != 385) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x682 = 1;
	volatile uint32_t x683 = 1313439709U;
	volatile int32_t t80 = 8463332;

	t80 = (x681^(x682<<(x683<=x684)));

	if (t80 != -126) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x693 = UINT32_MAX;
	static int64_t x694 = INT64_MAX;
	int64_t x695 = -851LL;
	volatile int64_t t81 = -21759767LL;

	t81 = (x693^(x694<<(x695<=x696)));

	if (t81 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x705 = -1;
	uint16_t x706 = 13092U;
	int32_t x707 = INT32_MIN;
	static uint16_t x708 = 387U;
	volatile int32_t t82 = -58;

	t82 = (x705^(x706<<(x707<=x708)));

	if (t82 != -26185) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x709 = INT32_MIN;
	uint16_t x710 = UINT16_MAX;
	volatile uint64_t x711 = UINT64_MAX;
	int16_t x712 = -1;
	int32_t t83 = 111088;

	t83 = (x709^(x710<<(x711<=x712)));

	if (t83 != -2147352578) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x713 = UINT8_MAX;
	uint64_t x715 = UINT64_MAX;
	uint16_t x716 = 1637U;
	volatile int32_t t84 = -76684800;

	t84 = (x713^(x714<<(x715<=x716)));

	if (t84 != 2147483392) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x717 = INT64_MIN;
	int8_t x718 = INT8_MAX;
	static int8_t x720 = -1;
	static volatile int64_t t85 = -631279375LL;

	t85 = (x717^(x718<<(x719<=x720)));

	if (t85 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x727 = INT64_MIN;
	int8_t x728 = 12;
	volatile int64_t t86 = 131493547LL;

	t86 = (x725^(x726<<(x727<=x728)));

	if (t86 != -65535LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x750 = 259;
	int32_t x751 = -1;
	volatile int16_t x752 = -1;
	volatile int32_t t87 = -110308773;

	t87 = (x749^(x750<<(x751<=x752)));

	if (t87 != -519) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x777 = 272;
	static uint32_t x778 = 83U;
	static uint8_t x779 = UINT8_MAX;
	uint64_t x780 = 65974997596LLU;
	uint32_t t88 = 15065009U;

	t88 = (x777^(x778<<(x779<=x780)));

	if (t88 != 438U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x786 = 607;
	volatile int16_t x787 = INT16_MAX;
	uint32_t x788 = UINT32_MAX;
	int32_t t89 = -3127;

	t89 = (x785^(x786<<(x787<=x788)));

	if (t89 != 1201) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x794 = 537210121482LL;
	static int16_t x796 = INT16_MIN;
	static volatile int64_t t90 = 146865LL;

	t90 = (x793^(x794<<(x795<=x796)));

	if (t90 != -1074420242967LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x817 = INT64_MAX;
	uint8_t x818 = 0U;
	static int64_t x820 = -16850LL;
	int64_t t91 = INT64_MAX;

	t91 = (x817^(x818<<(x819<=x820)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x821 = -1;
	int32_t x822 = INT32_MAX;
	static volatile uint32_t x823 = 294436U;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x821^(x822<<(x823<=x824)));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x837 = INT16_MIN;
	volatile int16_t x838 = 6758;
	volatile int16_t x839 = INT16_MAX;
	int16_t x840 = -1;
	volatile int32_t t93 = -14009909;

	t93 = (x837^(x838<<(x839<=x840)));

	if (t93 != -26010) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x845 = INT16_MIN;
	uint64_t x846 = UINT64_MAX;
	uint64_t x847 = 20524LLU;
	int32_t x848 = 6973903;
	uint64_t t94 = 246000339740141522LLU;

	t94 = (x845^(x846<<(x847<=x848)));

	if (t94 != 32766LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x849 = 1868279558970980438LL;
	static uint16_t x850 = 2U;
	int32_t x851 = INT32_MIN;
	uint8_t x852 = 79U;
	volatile int64_t t95 = 11957LL;

	t95 = (x849^(x850<<(x851<=x852)));

	if (t95 != 1868279558970980434LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x861 = -1734420751096631172LL;
	uint8_t x862 = 94U;
	int32_t x864 = INT32_MIN;

	t96 = (x861^(x862<<(x863<=x864)));

	if (t96 != -1734420751096631104LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x871 = 218;
	static volatile uint32_t x872 = UINT32_MAX;
	static int32_t t97 = -24862851;

	t97 = (x869^(x870<<(x871<=x872)));

	if (t97 != 32745) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x873 = UINT8_MAX;
	uint16_t x874 = 331U;
	uint32_t x875 = 17059U;
	volatile int64_t x876 = INT64_MAX;
	volatile int32_t t98 = -3;

	t98 = (x873^(x874<<(x875<=x876)));

	if (t98 != 617) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x893 = 3U;
	volatile uint64_t x894 = 232658142LLU;
	int32_t x895 = INT32_MIN;
	uint16_t x896 = 42U;
	volatile uint64_t t99 = 97LLU;

	t99 = (x893^(x894<<(x895<=x896)));

	if (t99 != 465316287LLU) { NG(); } else { ; }
	
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

