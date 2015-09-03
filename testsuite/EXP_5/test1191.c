#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int8_t x4 = 2;
static int8_t x10 = -1;
int16_t x14 = INT16_MAX;
int8_t x16 = INT8_MIN;
static uint16_t x18 = UINT16_MAX;
int64_t x20 = INT64_MIN;
static volatile uint8_t x21 = 1U;
uint16_t x25 = 13U;
int32_t t6 = -6342346;
static volatile uint64_t x30 = 29LLU;
int64_t x32 = INT64_MIN;
int32_t t8 = -3231;
volatile uint64_t x37 = 2620141174792056022LLU;
int8_t x38 = -1;
volatile int32_t t10 = -59475195;
int8_t x58 = -1;
int8_t x60 = INT8_MIN;
static int16_t x63 = INT16_MIN;
int32_t x73 = INT32_MIN;
int8_t x74 = -12;
uint64_t x78 = 81057166798146LLU;
int8_t x81 = -1;
volatile uint32_t x83 = 1U;
volatile int32_t t20 = 85856884;
int16_t x96 = INT16_MAX;
volatile int8_t x98 = INT8_MIN;
int64_t x100 = -781506798678520259LL;
int32_t x101 = 284542;
volatile int16_t x107 = -62;
static volatile int32_t t28 = 3606;
static uint32_t x132 = 0U;
uint16_t x133 = UINT16_MAX;
int32_t t33 = 2329626;
uint64_t x139 = 85427629751130LLU;
static volatile int8_t x149 = -1;
volatile int32_t t37 = -2860;
volatile uint64_t x156 = 481169959LLU;
int32_t x157 = INT32_MAX;
int16_t x160 = INT16_MAX;
uint32_t x176 = UINT32_MAX;
volatile uint32_t x179 = 78U;
int32_t x184 = INT32_MIN;
int64_t x189 = -1LL;
int32_t x197 = 361941937;
uint16_t x199 = UINT16_MAX;
int32_t x203 = INT32_MIN;
uint64_t x210 = 27703552754340LLU;
int32_t t52 = -66136;
volatile int8_t x224 = 0;
static volatile int32_t t55 = -2020;
uint16_t x227 = 0U;
int8_t x229 = -1;
volatile int32_t t57 = 5976;
volatile uint64_t x235 = 52429227313000LLU;
static volatile int32_t t58 = 4884;
int8_t x237 = -1;
volatile int16_t x238 = -1;
int32_t t61 = 7;
int32_t x259 = 619754;
int64_t x267 = 201424415498022LL;
static volatile int32_t t66 = 331;
volatile int32_t t68 = 437435015;
int8_t x279 = INT8_MIN;
static int8_t x280 = 53;
volatile uint8_t x284 = 72U;
int8_t x285 = INT8_MIN;
volatile int64_t x286 = -1LL;
uint32_t x289 = 15332U;
static uint64_t x299 = UINT64_MAX;
int32_t x303 = INT32_MIN;
static uint64_t x307 = UINT64_MAX;
volatile uint32_t x313 = 2U;
volatile int8_t x315 = INT8_MIN;
uint64_t x316 = UINT64_MAX;
volatile int32_t t79 = 0;
static uint32_t x335 = 26U;
int16_t x336 = INT16_MIN;
int64_t x339 = 28123453LL;
int8_t x340 = INT8_MAX;
int16_t x341 = INT16_MIN;
volatile int32_t t86 = 270;
static int32_t x349 = INT32_MAX;
int32_t t87 = -9;
uint32_t x353 = UINT32_MAX;
static volatile uint16_t x355 = 29U;
volatile int32_t t88 = 107218;
volatile uint8_t x367 = 93U;
int32_t x369 = -1;
static int32_t t92 = 1;
uint16_t x379 = 5U;
uint8_t x383 = UINT8_MAX;
int32_t x385 = -18793403;
int64_t x390 = -1LL;
volatile int64_t x391 = 40908LL;
int16_t x395 = INT16_MIN;
volatile int8_t x398 = 1;
uint64_t x399 = 134248LLU;
static uint64_t x400 = 1020902091664LLU;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MAX;
	static volatile int32_t t0 = -430322;

	t0 = (x1==((x2==x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	int8_t x6 = -23;
	volatile int32_t x7 = -378;
	int16_t x8 = -1;
	int32_t t1 = -51567522;

	t1 = (x5==((x6==x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	int32_t x11 = -1;
	int64_t x12 = -350398309109814714LL;
	volatile int32_t t2 = -407;

	t2 = (x9==((x10==x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 3;
	static uint8_t x15 = 21U;
	volatile int32_t t3 = 462434;

	t3 = (x13==((x14==x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	int32_t x19 = INT32_MIN;
	volatile int32_t t4 = -1329;

	t4 = (x17==((x18==x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	static int64_t x23 = INT64_MIN;
	static int8_t x24 = 2;
	int32_t t5 = -810760;

	t5 = (x21==((x22==x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = UINT8_MAX;
	volatile int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;

	t6 = (x25==((x26==x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	int16_t x31 = 1;
	volatile int32_t t7 = -189;

	t7 = (x29==((x30==x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = 46U;
	uint8_t x35 = 1U;
	uint16_t x36 = 2U;

	t8 = (x33==((x34==x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -4078;

	t9 = (x37==((x38==x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 8U;
	uint64_t x42 = 926714675459LLU;
	uint16_t x43 = UINT16_MAX;
	uint16_t x44 = 289U;

	t10 = (x41==((x42==x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	volatile int8_t x46 = INT8_MAX;
	int32_t x47 = -1;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -22332915;

	t11 = (x45==((x46==x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 598330U;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = UINT32_MAX;
	static uint64_t x52 = 203379LLU;
	int32_t t12 = 134921000;

	t12 = (x49==((x50==x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t13 = -345;

	t13 = (x53==((x54==x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile uint32_t x59 = 403843948U;
	volatile int32_t t14 = -1442;

	t14 = (x57==((x58==x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	volatile int32_t x62 = 0;
	volatile uint64_t x64 = 502038LLU;
	static volatile int32_t t15 = -93626038;

	t15 = (x61==((x62==x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile uint64_t x66 = 196LLU;
	static int64_t x67 = INT64_MIN;
	static int8_t x68 = 0;
	static int32_t t16 = 0;

	t16 = (x65==((x66==x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 91779136067LL;
	uint8_t x70 = 61U;
	int64_t x71 = INT64_MIN;
	int8_t x72 = -1;
	int32_t t17 = -107936706;

	t17 = (x69==((x70==x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x75 = -1;
	volatile uint8_t x76 = 6U;
	int32_t t18 = -377193;

	t18 = (x73==((x74==x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -80;

	t19 = (x77==((x78==x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = 0;
	int32_t x84 = INT32_MAX;

	t20 = (x81==((x82==x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint8_t x86 = 1U;
	int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	static int32_t t21 = 229894;

	t21 = (x85==((x86==x87)+x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static int8_t x90 = -6;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 763;

	t22 = (x89==((x90==x91)+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 521;
	int8_t x94 = -1;
	volatile int32_t x95 = INT32_MIN;
	volatile int32_t t23 = 121305346;

	t23 = (x93==((x94==x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 3101108329427540LL;
	int8_t x99 = -1;
	volatile int32_t t24 = 9;

	t24 = (x97==((x98==x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = -1;
	volatile int32_t x103 = INT32_MAX;
	volatile int8_t x104 = INT8_MIN;
	int32_t t25 = 11139;

	t25 = (x101==((x102==x103)+x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 6082;
	uint16_t x106 = 16U;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = -181776431;

	t26 = (x105==((x106==x107)+x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -6;
	static uint16_t x110 = 46U;
	static uint8_t x111 = 61U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -12915;

	t27 = (x109==((x110==x111)+x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -28;
	int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 12321U;

	t28 = (x113==((x114==x115)+x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = UINT64_MAX;
	volatile int32_t x118 = INT32_MAX;
	int64_t x119 = -1LL;
	volatile int64_t x120 = -1LL;
	volatile int32_t t29 = -5769061;

	t29 = (x117==((x118==x119)+x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x121 = 67U;
	volatile uint16_t x122 = 1382U;
	uint32_t x123 = 6989U;
	static volatile uint8_t x124 = UINT8_MAX;
	int32_t t30 = 2052541;

	t30 = (x121==((x122==x123)+x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	int16_t x126 = -31;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -123375806;

	t31 = (x125==((x126==x127)+x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 22;
	int64_t x130 = 350LL;
	volatile int16_t x131 = 4;
	volatile int32_t t32 = 24;

	t32 = (x129==((x130==x131)+x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = 10U;

	t33 = (x133==((x134==x135)+x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static uint8_t x138 = UINT8_MAX;
	int64_t x140 = -1LL;
	int32_t t34 = -1610380;

	t34 = (x137==((x138==x139)+x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 0U;
	volatile int8_t x142 = -28;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = -174570;
	volatile int32_t t35 = 56;

	t35 = (x141==((x142==x143)+x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MAX;
	int8_t x148 = -1;
	int32_t t36 = 1732014;

	t36 = (x145==((x146==x147)+x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = 651108156LLU;
	uint64_t x151 = 239253784LLU;
	volatile int8_t x152 = -1;

	t37 = (x149==((x150==x151)+x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = -1;
	uint16_t x155 = 12776U;
	int32_t t38 = 1;

	t38 = (x153==((x154==x155)+x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -231924;
	static int32_t x159 = -295089423;
	int32_t t39 = 12;

	t39 = (x157==((x158==x159)+x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 8201569U;
	uint32_t x162 = 49102065U;
	volatile uint16_t x163 = 23332U;
	volatile uint16_t x164 = 6U;
	volatile int32_t t40 = -5;

	t40 = (x161==((x162==x163)+x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	static volatile int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	volatile int32_t t41 = 1012;

	t41 = (x165==((x166==x167)+x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 224538;
	int32_t x170 = -1;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = 0U;
	static volatile int32_t t42 = 3823013;

	t42 = (x169==((x170==x171)+x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	volatile uint16_t x174 = UINT16_MAX;
	int16_t x175 = -11581;
	int32_t t43 = -11088916;

	t43 = (x173==((x174==x175)+x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MAX;
	static volatile uint16_t x180 = UINT16_MAX;
	int32_t t44 = -79;

	t44 = (x177==((x178==x179)+x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int32_t x182 = INT32_MAX;
	uint64_t x183 = 51922746196769LLU;
	int32_t t45 = 209012;

	t45 = (x181==((x182==x183)+x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -1LL;
	int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	int8_t x188 = 22;
	volatile int32_t t46 = -116;

	t46 = (x185==((x186==x187)+x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	int8_t x191 = 0;
	uint32_t x192 = 19872U;
	int32_t t47 = 44006610;

	t47 = (x189==((x190==x191)+x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = 1U;
	int16_t x196 = -1;
	static volatile int32_t t48 = -12765073;

	t48 = (x193==((x194==x195)+x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MAX;
	volatile uint16_t x200 = 1938U;
	static int32_t t49 = 1;

	t49 = (x197==((x198==x199)+x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 7U;
	uint16_t x202 = UINT16_MAX;
	uint64_t x204 = 88842LLU;
	int32_t t50 = -27114;

	t50 = (x201==((x202==x203)+x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int8_t x206 = -1;
	uint16_t x207 = UINT16_MAX;
	int8_t x208 = -1;
	volatile int32_t t51 = -1;

	t51 = (x205==((x206==x207)+x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 0;
	int8_t x211 = -28;
	volatile int16_t x212 = INT16_MIN;

	t52 = (x209==((x210==x211)+x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	static volatile int8_t x214 = INT8_MAX;
	static int16_t x215 = -9815;
	uint16_t x216 = 25U;
	volatile int32_t t53 = -3555141;

	t53 = (x213==((x214==x215)+x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	static volatile int32_t x218 = INT32_MAX;
	int16_t x219 = 6485;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 507856226;

	t54 = (x217==((x218==x219)+x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 33U;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MAX;

	t55 = (x221==((x222==x223)+x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 4199167708321639LLU;
	int8_t x226 = -1;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -2461005;

	t56 = (x225==((x226==x227)+x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = 497425824192469545LL;
	int64_t x231 = INT64_MIN;
	volatile int16_t x232 = 1;

	t57 = (x229==((x230==x231)+x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 21;
	volatile int8_t x234 = 1;
	static volatile int64_t x236 = INT64_MIN;

	t58 = (x233==((x234==x235)+x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x239 = INT8_MAX;
	int16_t x240 = -53;
	int32_t t59 = -35401665;

	t59 = (x237==((x238==x239)+x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 12441U;
	uint8_t x242 = 4U;
	int8_t x243 = 6;
	static volatile uint64_t x244 = 112159072LLU;
	int32_t t60 = 15;

	t60 = (x241==((x242==x243)+x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 34;
	int16_t x246 = INT16_MIN;
	static uint32_t x247 = 1499452U;
	uint32_t x248 = 48788490U;

	t61 = (x245==((x246==x247)+x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = UINT8_MAX;
	int32_t x250 = -2514727;
	volatile int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = -33246966;

	t62 = (x249==((x250==x251)+x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -1;
	int8_t x254 = 1;
	int16_t x255 = 310;
	int8_t x256 = 55;
	int32_t t63 = 198;

	t63 = (x253==((x254==x255)+x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = INT16_MAX;
	volatile int64_t x258 = -1LL;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 13713763;

	t64 = (x257==((x258==x259)+x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	static int32_t x262 = INT32_MAX;
	volatile int8_t x263 = INT8_MIN;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -471547758;

	t65 = (x261==((x262==x263)+x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	static int16_t x266 = 165;
	int8_t x268 = INT8_MIN;

	t66 = (x265==((x266==x267)+x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = 22;
	static int64_t x271 = -1LL;
	int64_t x272 = -1LL;
	int32_t t67 = -118348556;

	t67 = (x269==((x270==x271)+x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 462U;
	uint16_t x274 = 17U;
	static int16_t x275 = INT16_MIN;
	volatile uint8_t x276 = 12U;

	t68 = (x273==((x274==x275)+x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = 158;
	int8_t x278 = -1;
	int32_t t69 = 2696770;

	t69 = (x277==((x278==x279)+x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = 1;
	static int8_t x283 = INT8_MIN;
	volatile int32_t t70 = 3602;

	t70 = (x281==((x282==x283)+x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x287 = -225228540115220LL;
	static int64_t x288 = -59112602310652744LL;
	int32_t t71 = -3;

	t71 = (x285==((x286==x287)+x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MAX;
	static volatile int32_t t72 = -119135;

	t72 = (x289==((x290==x291)+x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 3;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -668888272;

	t73 = (x293==((x294==x295)+x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = -543;
	uint64_t x300 = 211480LLU;
	volatile int32_t t74 = 32731662;

	t74 = (x297==((x298==x299)+x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = -14198;
	int8_t x304 = 1;
	int32_t t75 = 4080;

	t75 = (x301==((x302==x303)+x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 529764020166LLU;
	int8_t x306 = -1;
	static int16_t x308 = -1;
	int32_t t76 = -4445;

	t76 = (x305==((x306==x307)+x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 282U;
	uint32_t x310 = 190U;
	static int16_t x311 = -60;
	static int16_t x312 = -1;
	volatile int32_t t77 = -23;

	t77 = (x309==((x310==x311)+x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	volatile int32_t t78 = 337;

	t78 = (x313==((x314==x315)+x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1296;
	static uint16_t x318 = UINT16_MAX;
	static int32_t x319 = -1;
	int32_t x320 = 4644571;

	t79 = (x317==((x318==x319)+x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MAX;
	static int32_t x323 = 165148;
	volatile int16_t x324 = -3130;
	volatile int32_t t80 = -530915981;

	t80 = (x321==((x322==x323)+x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	int64_t x328 = -1711658647492900LL;
	volatile int32_t t81 = -285264;

	t81 = (x325==((x326==x327)+x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = -1LL;
	static int8_t x331 = 0;
	int64_t x332 = 568786935481377663LL;
	static volatile int32_t t82 = -6777671;

	t82 = (x329==((x330==x331)+x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 3U;
	uint8_t x334 = 97U;
	volatile int32_t t83 = 47067;

	t83 = (x333==((x334==x335)+x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 4169593;
	static volatile int64_t x338 = INT64_MIN;
	static int32_t t84 = 0;

	t84 = (x337==((x338==x339)+x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MAX;
	static volatile int32_t x344 = INT32_MIN;
	static volatile int32_t t85 = -37869;

	t85 = (x341==((x342==x343)+x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 10;
	static volatile int8_t x346 = 1;
	int32_t x347 = -1;
	uint64_t x348 = 137015124437548619LLU;

	t86 = (x345==((x346==x347)+x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x350 = -23;
	static int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MAX;

	t87 = (x349==((x350==x351)+x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = UINT64_MAX;
	int8_t x356 = -1;

	t88 = (x353==((x354==x355)+x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = 1034171283487LL;
	int64_t x359 = INT64_MIN;
	int64_t x360 = -1043LL;
	volatile int32_t t89 = -193378180;

	t89 = (x357==((x358==x359)+x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 2881007489251LLU;
	volatile int8_t x362 = INT8_MAX;
	static int64_t x363 = -8LL;
	volatile int64_t x364 = -1LL;
	static volatile int32_t t90 = 12420774;

	t90 = (x361==((x362==x363)+x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MIN;
	int32_t x366 = -1;
	uint64_t x368 = 17469742LLU;
	int32_t t91 = -2203;

	t91 = (x365==((x366==x367)+x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	int8_t x371 = -1;
	int16_t x372 = 86;

	t92 = (x369==((x370==x371)+x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MIN;
	static uint8_t x374 = UINT8_MAX;
	volatile int8_t x375 = 0;
	int64_t x376 = 86161343034LL;
	volatile int32_t t93 = 1;

	t93 = (x373==((x374==x375)+x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	static int16_t x378 = -1;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 15304;

	t94 = (x377==((x378==x379)+x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = UINT8_MAX;
	static int16_t x382 = INT16_MIN;
	static int64_t x384 = -4084977570LL;
	volatile int32_t t95 = 4762;

	t95 = (x381==((x382==x383)+x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MAX;
	uint16_t x388 = 1U;
	int32_t t96 = -209399;

	t96 = (x385==((x386==x387)+x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 2U;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -29583685;

	t97 = (x389==((x390==x391)+x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 0LLU;
	int8_t x394 = INT8_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	int32_t t98 = -57182761;

	t98 = (x393==((x394==x395)+x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t t99 = 57;

	t99 = (x397==((x398==x399)+x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

