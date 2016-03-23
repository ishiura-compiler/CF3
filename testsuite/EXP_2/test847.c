
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MAX;
int8_t x12 = INT8_MAX;
static int16_t x17 = -1;
uint16_t x18 = UINT16_MAX;
int32_t x19 = INT32_MIN;
uint32_t x27 = 3555U;
volatile int8_t x33 = 6;
static volatile uint64_t x36 = 469LLU;
static int8_t x37 = -13;
int16_t x43 = INT16_MIN;
static volatile uint16_t x44 = 4U;
static int16_t x51 = 71;
int8_t x59 = INT8_MAX;
int64_t x62 = -4481132777427801LL;
static int16_t x64 = INT16_MAX;
volatile int32_t t13 = 339068631;
int64_t x68 = INT64_MIN;
int32_t t15 = 1;
static int8_t x77 = 19;
int16_t x90 = -1;
uint16_t x104 = 4087U;
static volatile int32_t t19 = 0;
int16_t x109 = -1;
int32_t x111 = INT32_MIN;
int16_t x121 = INT16_MIN;
int32_t t23 = 7358;
uint16_t x129 = 8452U;
static int32_t x131 = INT32_MIN;
volatile int32_t t24 = 267845593;
int16_t x134 = -31;
volatile int16_t x135 = INT16_MIN;
static int32_t x139 = INT32_MIN;
uint64_t x143 = 25LLU;
static volatile int32_t t27 = 473;
static uint64_t x147 = 1140094LLU;
static volatile int64_t x169 = INT64_MAX;
volatile int32_t x170 = 58253437;
int64_t x182 = 2379031988391LL;
uint16_t x184 = 351U;
uint32_t x189 = UINT32_MAX;
int32_t t36 = 4;
static int16_t x193 = INT16_MIN;
static int32_t t37 = 2007;
int16_t x197 = -3;
static int8_t x201 = 0;
volatile uint32_t x204 = 12280U;
static uint16_t x217 = 23U;
int8_t x225 = INT8_MIN;
int32_t x233 = -1;
int32_t x235 = INT32_MAX;
int64_t x243 = INT64_MIN;
uint8_t x248 = 20U;
int8_t x249 = 1;
int32_t x254 = INT32_MIN;
static volatile int16_t x257 = INT16_MIN;
uint32_t x265 = 15U;
uint64_t x272 = UINT64_MAX;
uint8_t x273 = 113U;
int16_t x276 = INT16_MIN;
static int32_t x279 = INT32_MIN;
volatile int32_t t56 = -38902;
static volatile uint32_t x286 = UINT32_MAX;
int32_t t57 = -247062003;
int16_t x290 = INT16_MIN;
volatile int64_t x295 = INT64_MIN;
uint16_t x301 = 19056U;
static int64_t x307 = -4747LL;
int32_t t63 = -408686;
uint8_t x331 = 2U;
uint64_t x353 = UINT64_MAX;
int64_t x358 = -17686233169853952LL;
volatile int32_t x359 = 292;
static int32_t x367 = INT32_MIN;
int16_t x372 = INT16_MAX;
volatile uint32_t x377 = 118U;
int64_t x380 = -1LL;
int32_t x383 = INT32_MIN;
volatile int32_t t77 = -9873;
int8_t x389 = INT8_MAX;
uint16_t x411 = UINT16_MAX;
volatile uint32_t x414 = 3U;
int8_t x415 = INT8_MAX;
int16_t x417 = INT16_MIN;
static volatile int16_t x420 = INT16_MAX;
int32_t t84 = -101885;
int64_t x431 = -548711371913LL;
uint64_t x432 = 49283714723964038LLU;
int8_t x436 = INT8_MIN;
static volatile int8_t x463 = INT8_MIN;
static volatile int16_t x464 = 1;
volatile uint16_t x473 = UINT16_MAX;
uint16_t x475 = 2034U;
int32_t t92 = 1;
int16_t x486 = 438;
int32_t x491 = INT32_MIN;
uint8_t x492 = 0U;
uint64_t x499 = 1830LLU;
static int64_t x512 = INT64_MIN;
int32_t t97 = 157926;
int16_t x519 = -273;
int32_t t99 = 34004133;
uint32_t x529 = UINT32_MAX;
static int64_t x530 = 967358925077LL;
volatile int32_t t102 = 23262103;
int64_t x547 = INT64_MAX;
volatile int8_t x550 = INT8_MIN;
int64_t x551 = 273735567079176LL;
volatile int16_t x552 = 20;
int16_t x553 = -1;
int32_t t111 = -7525;
static int32_t x589 = INT32_MIN;
int8_t x590 = -7;
int32_t t115 = -1;
int32_t t118 = -44379018;
uint64_t x614 = UINT64_MAX;
int16_t x618 = -1;
static int16_t x630 = 61;
int8_t x631 = INT8_MIN;
volatile int8_t x632 = INT8_MIN;
int32_t t122 = 5154393;
int64_t x641 = INT64_MIN;
uint64_t x644 = 37240439081620LLU;
static int32_t t128 = 55;
int8_t x669 = INT8_MIN;
uint64_t x679 = UINT64_MAX;
int32_t x686 = -12241968;
volatile int8_t x687 = INT8_MAX;
volatile int32_t t134 = 998320340;
int16_t x702 = INT16_MIN;
int64_t x707 = 5900628916LL;
volatile uint8_t x709 = UINT8_MAX;
static volatile int32_t t137 = 55268;
uint8_t x713 = UINT8_MAX;
int32_t x718 = -1;
uint16_t x719 = 9U;
int32_t t139 = -1;
uint32_t x725 = 336221327U;
uint8_t x730 = 38U;
volatile int16_t x738 = -1;
int32_t x740 = INT32_MIN;
uint32_t x741 = 3482632U;
volatile int32_t x756 = INT32_MIN;
int64_t x757 = 15495LL;
int32_t x769 = -87631899;
volatile uint32_t x771 = 2380U;
int8_t x775 = INT8_MAX;
int16_t x776 = -1;
volatile int32_t t152 = 2;
volatile int16_t x779 = INT16_MIN;
int8_t x794 = INT8_MIN;
static volatile int32_t t155 = 16423;
int64_t x798 = INT64_MIN;
volatile int64_t x799 = INT64_MAX;
volatile int32_t x804 = -1;
uint16_t x805 = 63U;
volatile uint32_t x813 = 57252U;
int16_t x833 = -1;
int64_t x844 = 4643906827LL;
int16_t x853 = INT16_MIN;
int8_t x854 = INT8_MAX;
volatile uint64_t x861 = UINT64_MAX;
int32_t x884 = INT32_MAX;
int32_t t167 = 16;
static volatile int64_t x887 = 23812LL;
int32_t t168 = -21;
volatile int32_t x890 = INT32_MIN;
int32_t x898 = INT32_MAX;
volatile uint16_t x899 = 6759U;
uint32_t x903 = UINT32_MAX;
int32_t x904 = 4829628;
uint8_t x906 = 44U;
static int32_t t172 = -2;
static int8_t x909 = -1;
uint16_t x912 = 13041U;
int64_t x917 = INT64_MIN;
uint16_t x919 = 20U;
volatile int32_t t175 = 2826;
uint64_t x926 = 2128024LLU;
uint64_t x934 = 3773930037LLU;
int64_t x936 = -791238LL;
volatile int32_t t180 = 531;
volatile int32_t t184 = 2;
int8_t x963 = INT8_MIN;
int64_t x970 = 4767529900162LL;
int32_t x974 = -13993382;
volatile int32_t t188 = 605270176;
static uint8_t x997 = 24U;
int8_t x999 = INT8_MIN;
int16_t x1000 = INT16_MAX;
volatile int32_t t190 = -307917324;
int8_t x1001 = 7;
int8_t x1005 = -1;
int8_t x1023 = INT8_MIN;
static int32_t t195 = 179079;
volatile int16_t x1028 = INT16_MAX;
static uint64_t x1037 = UINT64_MAX;
int32_t x1039 = INT32_MAX;


void f0(void) {
    	static volatile uint8_t x1 = UINT8_MAX;
	volatile int32_t x2 = INT32_MIN;
	int32_t x3 = 112559207;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = 267;

    t0 = ((x1%(x2%x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 0U;
	uint16_t x6 = 9039U;
	static int32_t x7 = -55033;
	static int32_t x8 = -14812;
	volatile int32_t t1 = 6671312;

    t1 = ((x5%(x6%x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -63942634LL;
	int32_t x11 = INT32_MIN;
	static int32_t t2 = -78761296;

    t2 = ((x9%(x10%x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	int32_t x14 = INT32_MIN;
	static int16_t x15 = -383;
	uint64_t x16 = 6489416036424393968LLU;
	int32_t t3 = -8;

    t3 = ((x13%(x14%x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x20 = 24LL;
	int32_t t4 = 1;

    t4 = ((x17%(x18%x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x25 = INT16_MIN;
	static uint64_t x26 = 125081648294LLU;
	int16_t x28 = 0;
	volatile int32_t t5 = -4566033;

    t5 = ((x25%(x26%x27))!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -247093230489944LL;
	int32_t t6 = 2;

    t6 = ((x33%(x34%x35))!=x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = 0;
	static volatile int32_t t7 = -422;

    t7 = ((x37%(x38%x39))!=x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = UINT64_MAX;
	int8_t x42 = -1;
	int32_t t8 = -380703413;

    t8 = ((x41%(x42%x43))!=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MAX;
	uint8_t x46 = 3U;
	volatile int16_t x47 = INT16_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t9 = 179;

    t9 = ((x45%(x46%x47))!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = -198;
	static uint64_t x52 = 47LLU;
	volatile int32_t t10 = 105072;

    t10 = ((x49%(x50%x51))!=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x53 = INT8_MAX;
	uint64_t x54 = UINT64_MAX;
	uint64_t x55 = 350LLU;
	uint64_t x56 = 26635047LLU;
	volatile int32_t t11 = 96439;

    t11 = ((x53%(x54%x55))!=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 71407793LLU;
	static int32_t x58 = INT32_MIN;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t12 = 636604;

    t12 = ((x57%(x58%x59))!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	volatile int32_t x63 = INT32_MIN;

    t13 = ((x61%(x62%x63))!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = 27;
	uint64_t x66 = 1366588LLU;
	int8_t x67 = INT8_MIN;
	volatile int32_t t14 = 260;

    t14 = ((x65%(x66%x67))!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = INT8_MIN;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	static uint64_t x76 = 39603LLU;

    t15 = ((x73%(x74%x75))!=x76);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x78 = 10U;
	uint8_t x79 = 52U;
	int16_t x80 = -2;
	volatile int32_t t16 = -1;

    t16 = ((x77%(x78%x79))!=x80);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = -1;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;
	static volatile int64_t x88 = INT64_MIN;
	static int32_t t17 = 566;

    t17 = ((x85%(x86%x87))!=x88);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	volatile int8_t x92 = INT8_MIN;
	int32_t t18 = 0;

    t18 = ((x89%(x90%x91))!=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	volatile int8_t x103 = -2;

    t19 = ((x101%(x102%x103))!=x104);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x105 = 7983;
	int8_t x106 = INT8_MIN;
	volatile int32_t x107 = INT32_MIN;
	int16_t x108 = -1730;
	volatile int32_t t20 = -5619;

    t20 = ((x105%(x106%x107))!=x108);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = 1;
	int64_t x112 = INT64_MIN;
	int32_t t21 = 12675;

    t21 = ((x109%(x110%x111))!=x112);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x117 = INT64_MAX;
	static uint16_t x118 = 219U;
	int8_t x119 = INT8_MAX;
	uint64_t x120 = 62379LLU;
	static int32_t t22 = -9784624;

    t22 = ((x117%(x118%x119))!=x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x122 = 7;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MIN;

    t23 = ((x121%(x122%x123))!=x124);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x130 = 35331U;
	volatile int8_t x132 = INT8_MIN;

    t24 = ((x129%(x130%x131))!=x132);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x133 = 1718;
	int16_t x136 = INT16_MIN;
	volatile int32_t t25 = -3706413;

    t25 = ((x133%(x134%x135))!=x136);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x137 = 14056U;
	int32_t x138 = 76;
	uint64_t x140 = UINT64_MAX;
	int32_t t26 = -74818921;

    t26 = ((x137%(x138%x139))!=x140);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	volatile int64_t x144 = INT64_MIN;

    t27 = ((x141%(x142%x143))!=x144);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x145 = 28055296LLU;
	volatile int8_t x146 = INT8_MIN;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t28 = 47116122;

    t28 = ((x145%(x146%x147))!=x148);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x149 = 1796756LLU;
	static uint64_t x150 = 21667464LLU;
	int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	static volatile int32_t t29 = 17204;

    t29 = ((x149%(x150%x151))!=x152);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile uint16_t x154 = 8U;
	static volatile int64_t x155 = INT64_MIN;
	volatile int64_t x156 = -1LL;
	int32_t t30 = 134713;

    t30 = ((x153%(x154%x155))!=x156);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x165 = -1;
	int8_t x166 = 7;
	uint8_t x167 = 12U;
	int64_t x168 = -1LL;
	static int32_t t31 = 32353;

    t31 = ((x165%(x166%x167))!=x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x171 = 26LL;
	uint32_t x172 = 467172889U;
	volatile int32_t t32 = 5558035;

    t32 = ((x169%(x170%x171))!=x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x177 = INT16_MIN;
	static volatile int32_t x178 = INT32_MAX;
	uint8_t x179 = UINT8_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t33 = -1679;

    t33 = ((x177%(x178%x179))!=x180);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x181 = INT8_MIN;
	uint16_t x183 = 12141U;
	volatile int32_t t34 = -14933;

    t34 = ((x181%(x182%x183))!=x184);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x185 = 24320437274LLU;
	int64_t x186 = 551410955900304085LL;
	int8_t x187 = INT8_MIN;
	int32_t x188 = -227270069;
	volatile int32_t t35 = -125;

    t35 = ((x185%(x186%x187))!=x188);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x190 = INT16_MIN;
	static uint64_t x191 = UINT64_MAX;
	volatile uint32_t x192 = UINT32_MAX;

    t36 = ((x189%(x190%x191))!=x192);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MAX;
	static int64_t x196 = 195183707LL;

    t37 = ((x193%(x194%x195))!=x196);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x198 = -1;
	int8_t x199 = INT8_MAX;
	volatile uint8_t x200 = 2U;
	volatile int32_t t38 = -306757;

    t38 = ((x197%(x198%x199))!=x200);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x202 = -1;
	static int64_t x203 = INT64_MIN;
	int32_t t39 = -9256;

    t39 = ((x201%(x202%x203))!=x204);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x205 = -1LL;
	uint32_t x206 = 2255U;
	static int32_t x207 = -30247;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t40 = -197890;

    t40 = ((x205%(x206%x207))!=x208);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x213 = INT16_MIN;
	uint64_t x214 = 13587LLU;
	volatile uint64_t x215 = 5948529936134361245LLU;
	volatile int64_t x216 = 13030623562LL;
	int32_t t41 = -89334;

    t41 = ((x213%(x214%x215))!=x216);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 10U;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t42 = -1;

    t42 = ((x217%(x218%x219))!=x220);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x226 = INT64_MIN;
	static int32_t x227 = INT32_MAX;
	int32_t x228 = -1;
	volatile int32_t t43 = 1951261;

    t43 = ((x225%(x226%x227))!=x228);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x234 = INT32_MIN;
	uint64_t x236 = UINT64_MAX;
	int32_t t44 = -1;

    t44 = ((x233%(x234%x235))!=x236);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x237 = -42;
	uint64_t x238 = 398671921LLU;
	volatile int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MAX;
	volatile int32_t t45 = -76;

    t45 = ((x237%(x238%x239))!=x240);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x241 = 0U;
	volatile int16_t x242 = INT16_MAX;
	volatile int16_t x244 = INT16_MIN;
	int32_t t46 = -8;

    t46 = ((x241%(x242%x243))!=x244);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x245 = 772U;
	int16_t x246 = 15131;
	uint8_t x247 = UINT8_MAX;
	int32_t t47 = 349;

    t47 = ((x245%(x246%x247))!=x248);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x250 = -10172300LL;
	uint32_t x251 = 1764U;
	static int64_t x252 = -28722221230540693LL;
	static volatile int32_t t48 = -60517;

    t48 = ((x249%(x250%x251))!=x252);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x253 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = INT64_MIN;
	int32_t t49 = -24733103;

    t49 = ((x253%(x254%x255))!=x256);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int8_t x260 = 5;
	int32_t t50 = -1;

    t50 = ((x257%(x258%x259))!=x260);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x261 = UINT64_MAX;
	static uint8_t x262 = 27U;
	volatile uint32_t x263 = 19U;
	volatile int32_t x264 = -1;
	int32_t t51 = 1;

    t51 = ((x261%(x262%x263))!=x264);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x266 = 382U;
	uint32_t x267 = 13140602U;
	volatile int32_t x268 = -1;
	int32_t t52 = 56890942;

    t52 = ((x265%(x266%x267))!=x268);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x269 = -13281;
	static uint64_t x270 = 262862685219322983LLU;
	uint16_t x271 = 270U;
	int32_t t53 = 416682992;

    t53 = ((x269%(x270%x271))!=x272);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x274 = UINT16_MAX;
	uint64_t x275 = 293662LLU;
	volatile int32_t t54 = 835;

    t54 = ((x273%(x274%x275))!=x276);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x277 = 3752;
	static uint8_t x278 = 29U;
	int16_t x280 = -1;
	volatile int32_t t55 = -1;

    t55 = ((x277%(x278%x279))!=x280);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x281 = -1LL;
	int16_t x282 = 82;
	static uint32_t x283 = 173724U;
	int64_t x284 = INT64_MAX;

    t56 = ((x281%(x282%x283))!=x284);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x285 = -1;
	int64_t x287 = INT64_MAX;
	int32_t x288 = -1;

    t57 = ((x285%(x286%x287))!=x288);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x289 = 0;
	int64_t x291 = INT64_MIN;
	int64_t x292 = -1778289641576668LL;
	int32_t t58 = -469;

    t58 = ((x289%(x290%x291))!=x292);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x293 = INT64_MIN;
	static int64_t x294 = 16352738LL;
	uint32_t x296 = 1729162U;
	int32_t t59 = -6126427;

    t59 = ((x293%(x294%x295))!=x296);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x297 = INT64_MAX;
	static int32_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	int8_t x300 = 30;
	volatile int32_t t60 = 1;

    t60 = ((x297%(x298%x299))!=x300);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x302 = UINT32_MAX;
	volatile int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t61 = -115;

    t61 = ((x301%(x302%x303))!=x304);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x305 = -1;
	uint64_t x306 = 386584007728921LLU;
	volatile uint32_t x308 = UINT32_MAX;
	volatile int32_t t62 = 1163528;

    t62 = ((x305%(x306%x307))!=x308);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x313 = UINT8_MAX;
	static volatile uint32_t x314 = 28887160U;
	int8_t x315 = -1;
	int32_t x316 = 44;

    t63 = ((x313%(x314%x315))!=x316);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x321 = -1;
	uint16_t x322 = 2032U;
	int64_t x323 = 3983733825134132344LL;
	volatile int32_t x324 = -1;
	int32_t t64 = 29023;

    t64 = ((x321%(x322%x323))!=x324);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x325 = 381U;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = 407U;
	int32_t t65 = 0;

    t65 = ((x325%(x326%x327))!=x328);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	static int16_t x330 = INT16_MAX;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t66 = -26;

    t66 = ((x329%(x330%x331))!=x332);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x333 = 2138223U;
	int8_t x334 = -16;
	static int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t67 = -84377239;

    t67 = ((x333%(x334%x335))!=x336);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x341 = 1885818U;
	static volatile int8_t x342 = -57;
	uint32_t x343 = 1113420403U;
	uint16_t x344 = UINT16_MAX;
	int32_t t68 = 1642;

    t68 = ((x341%(x342%x343))!=x344);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x345 = 16;
	int32_t x346 = -2;
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t69 = -23338909;

    t69 = ((x345%(x346%x347))!=x348);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x349 = 58766579214036LL;
	static uint16_t x350 = 24U;
	int16_t x351 = 595;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t70 = 1;

    t70 = ((x349%(x350%x351))!=x352);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x354 = 5504613LLU;
	volatile int32_t x355 = 8;
	uint32_t x356 = 379U;
	int32_t t71 = -610;

    t71 = ((x353%(x354%x355))!=x356);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x357 = 39U;
	uint8_t x360 = 26U;
	static int32_t t72 = -16326356;

    t72 = ((x357%(x358%x359))!=x360);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x365 = 19724U;
	int8_t x366 = INT8_MIN;
	static int8_t x368 = INT8_MAX;
	static volatile int32_t t73 = -5;

    t73 = ((x365%(x366%x367))!=x368);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x370 = -5;
	int64_t x371 = 56LL;
	static int32_t t74 = 154615;

    t74 = ((x369%(x370%x371))!=x372);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x378 = -1;
	static int64_t x379 = INT64_MAX;
	volatile int32_t t75 = -331;

    t75 = ((x377%(x378%x379))!=x380);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x381 = 1;
	int8_t x382 = -1;
	uint8_t x384 = 18U;
	static int32_t t76 = 47581623;

    t76 = ((x381%(x382%x383))!=x384);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x385 = 29871U;
	int64_t x386 = -239270108803LL;
	int8_t x387 = 48;
	volatile int16_t x388 = INT16_MAX;

    t77 = ((x385%(x386%x387))!=x388);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x390 = 531U;
	int16_t x391 = INT16_MIN;
	int32_t x392 = -1;
	int32_t t78 = -3449;

    t78 = ((x389%(x390%x391))!=x392);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x393 = INT32_MIN;
	int64_t x394 = 69283856300LL;
	static uint32_t x395 = 15U;
	volatile int32_t x396 = -235068763;
	volatile int32_t t79 = -215;

    t79 = ((x393%(x394%x395))!=x396);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = INT16_MAX;
	volatile uint16_t x399 = UINT16_MAX;
	int16_t x400 = 0;
	volatile int32_t t80 = -1;

    t80 = ((x397%(x398%x399))!=x400);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x401 = 210U;
	int32_t x402 = INT32_MIN;
	static volatile uint64_t x403 = 471185LLU;
	int32_t x404 = INT32_MIN;
	volatile int32_t t81 = 14;

    t81 = ((x401%(x402%x403))!=x404);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int32_t x412 = -25425;
	int32_t t82 = 0;

    t82 = ((x409%(x410%x411))!=x412);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x413 = -1;
	uint16_t x416 = 2U;
	volatile int32_t t83 = -901313;

    t83 = ((x413%(x414%x415))!=x416);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x418 = INT32_MIN;
	volatile uint32_t x419 = UINT32_MAX;

    t84 = ((x417%(x418%x419))!=x420);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x421 = INT16_MIN;
	static int32_t x422 = INT32_MAX;
	static volatile uint8_t x423 = UINT8_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t85 = 0;

    t85 = ((x421%(x422%x423))!=x424);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x429 = 2375U;
	static int64_t x430 = INT64_MIN;
	int32_t t86 = 940;

    t86 = ((x429%(x430%x431))!=x432);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x433 = 0;
	volatile int32_t x434 = INT32_MAX;
	static int16_t x435 = -612;
	volatile int32_t t87 = 28;

    t87 = ((x433%(x434%x435))!=x436);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x441 = -19;
	volatile int64_t x442 = -23051754989197LL;
	static int64_t x443 = 2096981816693469291LL;
	int32_t x444 = 841166;
	volatile int32_t t88 = 15055;

    t88 = ((x441%(x442%x443))!=x444);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x449 = INT8_MAX;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 40923633909LLU;
	volatile int8_t x452 = INT8_MAX;
	int32_t t89 = -1;

    t89 = ((x449%(x450%x451))!=x452);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x453 = INT8_MIN;
	static int64_t x454 = -21570091LL;
	static uint64_t x455 = UINT64_MAX;
	int64_t x456 = -6415416541324LL;
	int32_t t90 = -9;

    t90 = ((x453%(x454%x455))!=x456);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x461 = UINT8_MAX;
	uint16_t x462 = UINT16_MAX;
	int32_t t91 = 20;

    t91 = ((x461%(x462%x463))!=x464);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x474 = UINT8_MAX;
	int8_t x476 = INT8_MAX;

    t92 = ((x473%(x474%x475))!=x476);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x481 = -566530;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = UINT8_MAX;
	volatile int16_t x484 = -1;
	volatile int32_t t93 = 59791947;

    t93 = ((x481%(x482%x483))!=x484);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x485 = -494LL;
	int8_t x487 = INT8_MAX;
	uint64_t x488 = UINT64_MAX;
	static volatile int32_t t94 = -2025;

    t94 = ((x485%(x486%x487))!=x488);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x489 = INT32_MAX;
	volatile uint64_t x490 = 9524001073LLU;
	int32_t t95 = 1874;

    t95 = ((x489%(x490%x491))!=x492);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x497 = INT32_MIN;
	uint32_t x498 = UINT32_MAX;
	uint8_t x500 = 76U;
	int32_t t96 = 471;

    t96 = ((x497%(x498%x499))!=x500);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x509 = -1;
	volatile int8_t x510 = 1;
	int32_t x511 = INT32_MAX;

    t97 = ((x509%(x510%x511))!=x512);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x513 = INT16_MAX;
	int64_t x514 = -1LL;
	volatile uint8_t x515 = 54U;
	volatile uint32_t x516 = UINT32_MAX;
	volatile int32_t t98 = 327129;

    t98 = ((x513%(x514%x515))!=x516);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x517 = -1;
	static int32_t x518 = 54;
	int8_t x520 = -3;

    t99 = ((x517%(x518%x519))!=x520);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x521 = INT64_MAX;
	static volatile int32_t x522 = 1;
	uint8_t x523 = 2U;
	uint64_t x524 = UINT64_MAX;
	static int32_t t100 = -926766342;

    t100 = ((x521%(x522%x523))!=x524);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x525 = 41U;
	static uint8_t x526 = UINT8_MAX;
	static int16_t x527 = -187;
	int8_t x528 = -47;
	volatile int32_t t101 = 841813623;

    t101 = ((x525%(x526%x527))!=x528);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x531 = 1871003;
	volatile int32_t x532 = -1;

    t102 = ((x529%(x530%x531))!=x532);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x533 = UINT32_MAX;
	int8_t x534 = -1;
	volatile int32_t x535 = INT32_MIN;
	int16_t x536 = 1;
	volatile int32_t t103 = -2;

    t103 = ((x533%(x534%x535))!=x536);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x537 = UINT8_MAX;
	static volatile int16_t x538 = INT16_MIN;
	int64_t x539 = INT64_MIN;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t104 = 837;

    t104 = ((x537%(x538%x539))!=x540);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x541 = INT16_MAX;
	int64_t x542 = INT64_MAX;
	int32_t x543 = INT32_MIN;
	int16_t x544 = -1;
	int32_t t105 = 116339686;

    t105 = ((x541%(x542%x543))!=x544);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x545 = INT64_MIN;
	int32_t x546 = -6074;
	int64_t x548 = 103774LL;
	int32_t t106 = -66329442;

    t106 = ((x545%(x546%x547))!=x548);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile int32_t t107 = 105;

    t107 = ((x549%(x550%x551))!=x552);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x554 = INT32_MIN;
	uint32_t x555 = 4982466U;
	int64_t x556 = 12LL;
	int32_t t108 = 0;

    t108 = ((x553%(x554%x555))!=x556);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x561 = -1LL;
	int32_t x562 = 90633474;
	int16_t x563 = 10;
	uint32_t x564 = 2U;
	volatile int32_t t109 = -108;

    t109 = ((x561%(x562%x563))!=x564);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x565 = INT16_MIN;
	static int64_t x566 = INT64_MAX;
	int8_t x567 = INT8_MIN;
	volatile int32_t x568 = INT32_MIN;
	volatile int32_t t110 = -49785180;

    t110 = ((x565%(x566%x567))!=x568);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x573 = UINT32_MAX;
	int64_t x574 = INT64_MAX;
	volatile uint32_t x575 = UINT32_MAX;
	int32_t x576 = 3042;

    t111 = ((x573%(x574%x575))!=x576);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x577 = INT32_MIN;
	volatile uint32_t x578 = 93336U;
	int16_t x579 = -1;
	int32_t x580 = -1;
	volatile int32_t t112 = 143413;

    t112 = ((x577%(x578%x579))!=x580);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x581 = -1;
	int8_t x582 = 1;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = 0;
	int32_t t113 = 109627544;

    t113 = ((x581%(x582%x583))!=x584);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x591 = INT64_MAX;
	uint8_t x592 = 8U;
	volatile int32_t t114 = -2053894;

    t114 = ((x589%(x590%x591))!=x592);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x597 = UINT64_MAX;
	int16_t x598 = -1;
	static int32_t x599 = INT32_MIN;
	static int16_t x600 = 473;

    t115 = ((x597%(x598%x599))!=x600);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x601 = UINT16_MAX;
	int16_t x602 = INT16_MIN;
	uint16_t x603 = UINT16_MAX;
	int8_t x604 = -10;
	volatile int32_t t116 = -10588;

    t116 = ((x601%(x602%x603))!=x604);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x605 = 829811992U;
	int8_t x606 = 4;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = 3757952857LLU;
	static volatile int32_t t117 = 0;

    t117 = ((x605%(x606%x607))!=x608);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x609 = UINT32_MAX;
	int8_t x610 = -3;
	volatile int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;

    t118 = ((x609%(x610%x611))!=x612);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x613 = -120892302;
	static int16_t x615 = INT16_MIN;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t119 = 10711;

    t119 = ((x613%(x614%x615))!=x616);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x617 = INT16_MAX;
	int8_t x619 = INT8_MIN;
	volatile int16_t x620 = -2;
	int32_t t120 = 12743;

    t120 = ((x617%(x618%x619))!=x620);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x621 = INT8_MIN;
	static int32_t x622 = -62092765;
	int8_t x623 = INT8_MAX;
	volatile uint16_t x624 = 226U;
	volatile int32_t t121 = 10108;

    t121 = ((x621%(x622%x623))!=x624);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x629 = 883551U;

    t122 = ((x629%(x630%x631))!=x632);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x633 = 228;
	uint32_t x634 = 92U;
	int32_t x635 = 556;
	uint64_t x636 = 138758LLU;
	volatile int32_t t123 = 17153;

    t123 = ((x633%(x634%x635))!=x636);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x637 = INT8_MIN;
	volatile int64_t x638 = INT64_MIN;
	uint64_t x639 = 122791696610958LLU;
	volatile uint64_t x640 = UINT64_MAX;
	static int32_t t124 = 0;

    t124 = ((x637%(x638%x639))!=x640);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x642 = -1LL;
	int32_t x643 = 8;
	static volatile int32_t t125 = 272;

    t125 = ((x641%(x642%x643))!=x644);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x649 = -1LL;
	int8_t x650 = INT8_MIN;
	static int64_t x651 = INT64_MIN;
	static int64_t x652 = INT64_MIN;
	int32_t t126 = 0;

    t126 = ((x649%(x650%x651))!=x652);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x657 = 4723U;
	int32_t x658 = 230292353;
	static int8_t x659 = INT8_MIN;
	uint64_t x660 = 524597142134LLU;
	static volatile int32_t t127 = -112595399;

    t127 = ((x657%(x658%x659))!=x660);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x661 = -1;
	static int32_t x662 = INT32_MIN;
	uint16_t x663 = UINT16_MAX;
	uint64_t x664 = 260712660249LLU;

    t128 = ((x661%(x662%x663))!=x664);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x665 = -1LL;
	int32_t x666 = INT32_MAX;
	int16_t x667 = -95;
	uint16_t x668 = 17U;
	static int32_t t129 = 25;

    t129 = ((x665%(x666%x667))!=x668);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x670 = INT64_MIN;
	int16_t x671 = 5523;
	uint64_t x672 = 11654548362LLU;
	int32_t t130 = 98055801;

    t130 = ((x669%(x670%x671))!=x672);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x677 = 15053LLU;
	static int8_t x678 = INT8_MIN;
	static uint64_t x680 = UINT64_MAX;
	volatile int32_t t131 = 402;

    t131 = ((x677%(x678%x679))!=x680);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x681 = 182;
	int16_t x682 = -1;
	int64_t x683 = INT64_MAX;
	int64_t x684 = INT64_MAX;
	int32_t t132 = -2927446;

    t132 = ((x681%(x682%x683))!=x684);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x685 = INT16_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t133 = 1;

    t133 = ((x685%(x686%x687))!=x688);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x697 = -1;
	int64_t x698 = INT64_MIN;
	int64_t x699 = 57007LL;
	int64_t x700 = -438428459451376720LL;

    t134 = ((x697%(x698%x699))!=x700);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x701 = INT64_MIN;
	volatile int16_t x703 = INT16_MAX;
	int32_t x704 = -856565444;
	volatile int32_t t135 = -397582296;

    t135 = ((x701%(x702%x703))!=x704);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x705 = -979LL;
	volatile uint32_t x706 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	int32_t t136 = -56574;

    t136 = ((x705%(x706%x707))!=x708);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x710 = -1LL;
	uint32_t x711 = 586U;
	uint16_t x712 = 29318U;

    t137 = ((x709%(x710%x711))!=x712);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x714 = INT16_MIN;
	volatile int32_t x715 = INT32_MIN;
	int16_t x716 = -833;
	int32_t t138 = 339609;

    t138 = ((x713%(x714%x715))!=x716);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x717 = UINT16_MAX;
	int64_t x720 = INT64_MIN;

    t139 = ((x717%(x718%x719))!=x720);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x721 = -265376603;
	volatile int64_t x722 = 1LL;
	volatile int16_t x723 = 3;
	int32_t x724 = INT32_MAX;
	volatile int32_t t140 = 0;

    t140 = ((x721%(x722%x723))!=x724);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x726 = -1;
	uint64_t x727 = 1548853202331LLU;
	static int8_t x728 = INT8_MAX;
	int32_t t141 = -2067228;

    t141 = ((x725%(x726%x727))!=x728);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x729 = INT32_MIN;
	uint16_t x731 = UINT16_MAX;
	int64_t x732 = INT64_MIN;
	static volatile int32_t t142 = 979574;

    t142 = ((x729%(x730%x731))!=x732);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x733 = 7U;
	int16_t x734 = INT16_MIN;
	static int64_t x735 = 3LL;
	int64_t x736 = INT64_MIN;
	int32_t t143 = -45;

    t143 = ((x733%(x734%x735))!=x736);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x737 = 3U;
	static uint8_t x739 = 16U;
	int32_t t144 = 1;

    t144 = ((x737%(x738%x739))!=x740);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x742 = -902;
	int8_t x743 = -10;
	int16_t x744 = INT16_MAX;
	volatile int32_t t145 = -188523305;

    t145 = ((x741%(x742%x743))!=x744);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x745 = -1006;
	int32_t x746 = INT32_MIN;
	uint64_t x747 = UINT64_MAX;
	int16_t x748 = INT16_MIN;
	volatile int32_t t146 = -304124;

    t146 = ((x745%(x746%x747))!=x748);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x753 = 4;
	int8_t x754 = INT8_MIN;
	int8_t x755 = INT8_MAX;
	volatile int32_t t147 = -265617963;

    t147 = ((x753%(x754%x755))!=x756);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x758 = UINT64_MAX;
	static uint8_t x759 = 6U;
	int32_t x760 = INT32_MIN;
	int32_t t148 = -15829;

    t148 = ((x757%(x758%x759))!=x760);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x761 = -4;
	volatile int8_t x762 = -2;
	int8_t x763 = 7;
	int64_t x764 = INT64_MIN;
	int32_t t149 = 4107903;

    t149 = ((x761%(x762%x763))!=x764);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x765 = INT8_MAX;
	int32_t x766 = -1;
	volatile int64_t x767 = INT64_MIN;
	int64_t x768 = INT64_MAX;
	volatile int32_t t150 = -1932;

    t150 = ((x765%(x766%x767))!=x768);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x770 = 1004U;
	volatile uint64_t x772 = UINT64_MAX;
	int32_t t151 = 5030453;

    t151 = ((x769%(x770%x771))!=x772);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x773 = UINT8_MAX;
	static int16_t x774 = INT16_MIN;

    t152 = ((x773%(x774%x775))!=x776);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x777 = INT8_MIN;
	static uint16_t x778 = 13793U;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t153 = 38496284;

    t153 = ((x777%(x778%x779))!=x780);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x781 = -1LL;
	int32_t x782 = -13;
	uint32_t x783 = 1214271231U;
	int8_t x784 = 0;
	volatile int32_t t154 = -59327085;

    t154 = ((x781%(x782%x783))!=x784);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x793 = -7;
	volatile int64_t x795 = INT64_MIN;
	int8_t x796 = INT8_MAX;

    t155 = ((x793%(x794%x795))!=x796);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x797 = 25170131923337689LL;
	uint64_t x800 = 1650LLU;
	static volatile int32_t t156 = -44;

    t156 = ((x797%(x798%x799))!=x800);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x801 = UINT16_MAX;
	int64_t x802 = INT64_MIN;
	int64_t x803 = 30431708LL;
	int32_t t157 = 231;

    t157 = ((x801%(x802%x803))!=x804);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x806 = INT8_MIN;
	static int16_t x807 = INT16_MIN;
	int64_t x808 = INT64_MAX;
	int32_t t158 = -164330;

    t158 = ((x805%(x806%x807))!=x808);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x814 = 160922801U;
	uint16_t x815 = 7242U;
	uint8_t x816 = 6U;
	int32_t t159 = 210;

    t159 = ((x813%(x814%x815))!=x816);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x829 = -1;
	int64_t x830 = 2153357760062936LL;
	int16_t x831 = INT16_MIN;
	static uint8_t x832 = UINT8_MAX;
	volatile int32_t t160 = -3856429;

    t160 = ((x829%(x830%x831))!=x832);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x834 = 869392002720LLU;
	static int64_t x835 = -1LL;
	volatile uint64_t x836 = 676623476887181LLU;
	volatile int32_t t161 = -3457707;

    t161 = ((x833%(x834%x835))!=x836);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x841 = UINT32_MAX;
	uint64_t x842 = UINT64_MAX;
	static volatile uint32_t x843 = 3248U;
	volatile int32_t t162 = 253333;

    t162 = ((x841%(x842%x843))!=x844);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x855 = UINT64_MAX;
	uint8_t x856 = 4U;
	volatile int32_t t163 = 56;

    t163 = ((x853%(x854%x855))!=x856);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x857 = INT16_MIN;
	int32_t x858 = -1;
	static volatile int8_t x859 = 25;
	int32_t x860 = INT32_MIN;
	static int32_t t164 = -4656380;

    t164 = ((x857%(x858%x859))!=x860);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x862 = -1;
	static int8_t x863 = INT8_MIN;
	int8_t x864 = -1;
	int32_t t165 = -461;

    t165 = ((x861%(x862%x863))!=x864);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x877 = INT64_MAX;
	int16_t x878 = INT16_MIN;
	int64_t x879 = INT64_MAX;
	static int8_t x880 = INT8_MAX;
	volatile int32_t t166 = 102731;

    t166 = ((x877%(x878%x879))!=x880);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x881 = 17178304;
	uint32_t x882 = UINT32_MAX;
	static volatile int64_t x883 = INT64_MIN;

    t167 = ((x881%(x882%x883))!=x884);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x885 = -1LL;
	static int16_t x886 = -1;
	int8_t x888 = INT8_MIN;

    t168 = ((x885%(x886%x887))!=x888);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x889 = INT32_MAX;
	int16_t x891 = INT16_MAX;
	int32_t x892 = INT32_MAX;
	volatile int32_t t169 = 1886;

    t169 = ((x889%(x890%x891))!=x892);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x897 = -1;
	int16_t x900 = -14;
	volatile int32_t t170 = 2473759;

    t170 = ((x897%(x898%x899))!=x900);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x901 = INT64_MIN;
	int32_t x902 = INT32_MAX;
	volatile int32_t t171 = -97849;

    t171 = ((x901%(x902%x903))!=x904);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x905 = -37;
	static int8_t x907 = INT8_MAX;
	volatile int16_t x908 = 0;

    t172 = ((x905%(x906%x907))!=x908);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x910 = INT32_MAX;
	volatile int16_t x911 = INT16_MIN;
	int32_t t173 = -117034;

    t173 = ((x909%(x910%x911))!=x912);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x913 = 463163505049800LLU;
	uint64_t x914 = UINT64_MAX;
	uint64_t x915 = 254166477530826053LLU;
	volatile int8_t x916 = INT8_MIN;
	int32_t t174 = 549811905;

    t174 = ((x913%(x914%x915))!=x916);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x918 = UINT64_MAX;
	int8_t x920 = INT8_MAX;

    t175 = ((x917%(x918%x919))!=x920);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x921 = -1;
	volatile uint16_t x922 = UINT16_MAX;
	static uint64_t x923 = 5792337194340872629LLU;
	static volatile uint64_t x924 = 79723126471873861LLU;
	static int32_t t176 = -953484361;

    t176 = ((x921%(x922%x923))!=x924);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x925 = -3;
	int16_t x927 = 15315;
	uint64_t x928 = UINT64_MAX;
	int32_t t177 = 4223057;

    t177 = ((x925%(x926%x927))!=x928);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x929 = 6U;
	uint32_t x930 = UINT32_MAX;
	int32_t x931 = INT32_MIN;
	int64_t x932 = 7638585493745LL;
	volatile int32_t t178 = -50883595;

    t178 = ((x929%(x930%x931))!=x932);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x933 = INT8_MIN;
	static int16_t x935 = 407;
	static int32_t t179 = 33;

    t179 = ((x933%(x934%x935))!=x936);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x937 = -1;
	int64_t x938 = INT64_MIN;
	int64_t x939 = 142515LL;
	int8_t x940 = -1;

    t180 = ((x937%(x938%x939))!=x940);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x941 = INT64_MAX;
	volatile int16_t x942 = 727;
	int32_t x943 = INT32_MIN;
	static int32_t x944 = INT32_MAX;
	static int32_t t181 = -320;

    t181 = ((x941%(x942%x943))!=x944);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x945 = INT64_MIN;
	int16_t x946 = 7789;
	volatile int8_t x947 = INT8_MIN;
	uint16_t x948 = UINT16_MAX;
	int32_t t182 = 3597;

    t182 = ((x945%(x946%x947))!=x948);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x949 = -1LL;
	volatile uint32_t x950 = 10U;
	int8_t x951 = 7;
	int32_t x952 = -175;
	int32_t t183 = 203557493;

    t183 = ((x949%(x950%x951))!=x952);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x957 = INT64_MAX;
	static uint8_t x958 = 30U;
	int32_t x959 = INT32_MIN;
	int32_t x960 = -1;

    t184 = ((x957%(x958%x959))!=x960);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x961 = 123LL;
	int16_t x962 = INT16_MAX;
	int8_t x964 = -30;
	volatile int32_t t185 = -432789259;

    t185 = ((x961%(x962%x963))!=x964);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x969 = 708U;
	int32_t x971 = INT32_MIN;
	int32_t x972 = INT32_MAX;
	static int32_t t186 = -1783837;

    t186 = ((x969%(x970%x971))!=x972);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x973 = INT64_MIN;
	uint64_t x975 = 6584985LLU;
	uint64_t x976 = 208569091LLU;
	int32_t t187 = 76;

    t187 = ((x973%(x974%x975))!=x976);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x981 = -1;
	static int64_t x982 = INT64_MIN;
	int8_t x983 = -13;
	uint32_t x984 = 154U;

    t188 = ((x981%(x982%x983))!=x984);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x989 = -1LL;
	int32_t x990 = INT32_MIN;
	uint8_t x991 = UINT8_MAX;
	volatile int32_t x992 = INT32_MIN;
	volatile int32_t t189 = -134036;

    t189 = ((x989%(x990%x991))!=x992);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x998 = -1;

    t190 = ((x997%(x998%x999))!=x1000);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1002 = INT32_MIN;
	volatile uint8_t x1003 = 41U;
	volatile int32_t x1004 = -159;
	int32_t t191 = -14490;

    t191 = ((x1001%(x1002%x1003))!=x1004);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1006 = 21892701159972LLU;
	int8_t x1007 = -2;
	int32_t x1008 = 239040837;
	int32_t t192 = 1;

    t192 = ((x1005%(x1006%x1007))!=x1008);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1013 = 16U;
	int32_t x1014 = INT32_MAX;
	int32_t x1015 = INT32_MIN;
	int16_t x1016 = INT16_MIN;
	static volatile int32_t t193 = 6;

    t193 = ((x1013%(x1014%x1015))!=x1016);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1017 = -3645237LL;
	static int32_t x1018 = 7246895;
	uint16_t x1019 = UINT16_MAX;
	static int16_t x1020 = -14288;
	int32_t t194 = 2083712;

    t194 = ((x1017%(x1018%x1019))!=x1020);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1021 = 229920952056315LLU;
	int64_t x1022 = 542902882608591LL;
	volatile int64_t x1024 = INT64_MIN;

    t195 = ((x1021%(x1022%x1023))!=x1024);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x1025 = -1;
	int32_t x1026 = INT32_MIN;
	static int64_t x1027 = INT64_MAX;
	int32_t t196 = 933396076;

    t196 = ((x1025%(x1026%x1027))!=x1028);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1029 = INT16_MIN;
	uint64_t x1030 = UINT64_MAX;
	int32_t x1031 = 70783757;
	uint16_t x1032 = 14U;
	int32_t t197 = 12089;

    t197 = ((x1029%(x1030%x1031))!=x1032);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1033 = 384U;
	static int16_t x1034 = INT16_MIN;
	int32_t x1035 = INT32_MIN;
	int8_t x1036 = INT8_MIN;
	volatile int32_t t198 = -10693;

    t198 = ((x1033%(x1034%x1035))!=x1036);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1038 = -1;
	uint8_t x1040 = 1U;
	static volatile int32_t t199 = 4151798;

    t199 = ((x1037%(x1038%x1039))!=x1040);

    if (t199 != 1) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

