#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 11619;
int8_t x8 = INT8_MIN;
static volatile int32_t t1 = 3575598;
int16_t x24 = INT16_MIN;
static int64_t x39 = INT64_MIN;
volatile int8_t x42 = -13;
static volatile uint16_t x47 = 1U;
int8_t x48 = 28;
uint32_t x50 = 400U;
static uint8_t x54 = 2U;
int32_t t11 = 6533664;
int64_t x57 = INT64_MAX;
static int16_t x64 = INT16_MIN;
uint8_t x67 = UINT8_MAX;
int32_t x69 = -49496;
uint16_t x75 = UINT16_MAX;
int32_t x76 = -1;
volatile int32_t t16 = 20517;
volatile uint16_t x81 = 8184U;
volatile uint16_t x82 = 28472U;
uint64_t x87 = 253604796727058067LLU;
uint64_t x90 = 4419325231908337608LLU;
int8_t x91 = INT8_MIN;
int8_t x92 = INT8_MIN;
volatile int32_t t21 = -12;
uint16_t x103 = 55U;
int8_t x108 = -1;
int32_t x109 = INT32_MAX;
volatile int32_t t27 = 721838;
volatile uint32_t x122 = 980U;
int16_t x125 = INT16_MIN;
static int64_t x126 = INT64_MIN;
uint32_t x130 = UINT32_MAX;
uint32_t x147 = UINT32_MAX;
static volatile uint64_t x155 = UINT64_MAX;
int16_t x156 = INT16_MAX;
static int16_t x160 = INT16_MIN;
static int32_t t33 = 1657948;
int16_t x175 = INT16_MIN;
volatile int32_t t36 = 453480;
int8_t x183 = 2;
static volatile int64_t x184 = -31632LL;
static int64_t x200 = 37801932LL;
int64_t x201 = INT64_MAX;
static volatile uint64_t x202 = 11486260923380459LLU;
int32_t x215 = 776343;
static volatile int32_t t43 = -36;
static int16_t x220 = 379;
int32_t x221 = -1;
volatile uint16_t x223 = 303U;
volatile uint16_t x227 = 24U;
uint32_t x230 = 182422U;
uint8_t x234 = 117U;
volatile int64_t x238 = -1LL;
static uint8_t x239 = 2U;
volatile uint32_t x240 = 8851U;
uint16_t x241 = 8U;
int8_t x257 = INT8_MIN;
volatile int8_t x260 = INT8_MIN;
static volatile int32_t t55 = 1314;
int16_t x266 = -1;
int64_t x267 = INT64_MIN;
uint32_t x272 = 3U;
volatile int32_t t57 = -41884;
int32_t t58 = 53;
int8_t x277 = -1;
static int8_t x279 = INT8_MIN;
static uint64_t x280 = 45500LLU;
int16_t x285 = 4;
static volatile int8_t x297 = INT8_MIN;
volatile uint64_t x301 = 3002553051914550LLU;
static int32_t x317 = INT32_MIN;
static volatile uint8_t x330 = UINT8_MAX;
int64_t x332 = -102265458LL;
uint64_t x339 = 531501112847387613LLU;
volatile int8_t x341 = INT8_MIN;
uint8_t x348 = UINT8_MAX;
int8_t x350 = 1;
uint64_t x351 = UINT64_MAX;
int32_t t75 = -1;
int8_t x358 = 41;
uint64_t x362 = 6337062897292885LLU;
static int8_t x364 = 7;
volatile int32_t x366 = -1;
volatile uint32_t x367 = 134933U;
uint32_t x371 = UINT32_MAX;
uint64_t x384 = 18657LLU;
volatile int32_t x391 = -1;
int16_t x399 = INT16_MIN;
uint64_t x400 = 807LLU;
volatile int32_t t87 = 2839503;
volatile int64_t x404 = 17LL;
uint64_t x406 = UINT64_MAX;
uint8_t x410 = 1U;
static volatile int16_t x428 = 5;
volatile int32_t t92 = 0;
volatile int16_t x431 = INT16_MIN;
uint16_t x432 = 10U;
static volatile int16_t x443 = -1;
int32_t t95 = -2;
volatile int64_t x445 = INT64_MAX;
int64_t x451 = INT64_MIN;
volatile int32_t t99 = -129923;


void f0(void) {
	uint8_t x1 = 103U;
	static int32_t x2 = 409;
	volatile int16_t x3 = -1;
	uint8_t x4 = 2U;

	t0 = (x1<=((x2-x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = INT16_MAX;
	volatile uint64_t x7 = 103LLU;

	t1 = (x5<=((x6-x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = UINT8_MAX;
	static int16_t x18 = 14;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t2 = -5863443;

	t2 = (x17<=((x18-x19)/x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = UINT64_MAX;
	static uint8_t x22 = 1U;
	int64_t x23 = INT64_MAX;
	volatile int32_t t3 = 171;

	t3 = (x21<=((x22-x23)/x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = INT8_MIN;
	volatile int32_t x26 = -116414463;
	uint64_t x27 = 26LLU;
	int32_t x28 = INT32_MAX;
	volatile int32_t t4 = 1225;

	t4 = (x25<=((x26-x27)/x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x29 = -18;
	int8_t x30 = INT8_MAX;
	static int32_t x31 = 295;
	static volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t5 = -646584;

	t5 = (x29<=((x30-x31)/x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 26342;
	int16_t x34 = -6;
	static int16_t x35 = 0;
	uint8_t x36 = 68U;
	int32_t t6 = 161079;

	t6 = (x33<=((x34-x35)/x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MIN;
	int8_t x38 = -1;
	volatile int64_t x40 = INT64_MAX;
	volatile int32_t t7 = -849419733;

	t7 = (x37<=((x38-x39)/x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	static int16_t x43 = -3;
	volatile uint32_t x44 = 16654353U;
	volatile int32_t t8 = 486478284;

	t8 = (x41<=((x42-x43)/x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 6974LLU;
	uint32_t x46 = 4U;
	int32_t t9 = 115;

	t9 = (x45<=((x46-x47)/x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	int8_t x51 = -1;
	uint64_t x52 = 22626301198281965LLU;
	volatile int32_t t10 = 0;

	t10 = (x49<=((x50-x51)/x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	static uint32_t x55 = 2070U;
	volatile int8_t x56 = INT8_MAX;

	t11 = (x53<=((x54-x55)/x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x58 = -1;
	uint64_t x59 = 1374540928193425396LLU;
	static uint16_t x60 = 24U;
	int32_t t12 = 113;

	t12 = (x57<=((x58-x59)/x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	uint64_t x62 = 63197335254049955LLU;
	int8_t x63 = INT8_MIN;
	volatile int32_t t13 = -55;

	t13 = (x61<=((x62-x63)/x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 2051833305495LL;
	static uint32_t x66 = UINT32_MAX;
	uint32_t x68 = UINT32_MAX;
	int32_t t14 = 168930;

	t14 = (x65<=((x66-x67)/x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MAX;
	uint16_t x71 = UINT16_MAX;
	uint32_t x72 = UINT32_MAX;
	int32_t t15 = 86;

	t15 = (x69<=((x70-x71)/x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MAX;

	t16 = (x73<=((x74-x75)/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = 4156122436152259647LL;
	int32_t x78 = -1;
	uint32_t x79 = 171741U;
	int64_t x80 = INT64_MAX;
	static int32_t t17 = 526243141;

	t17 = (x77<=((x78-x79)/x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x83 = INT32_MAX;
	int64_t x84 = INT64_MIN;
	static int32_t t18 = -818339;

	t18 = (x81<=((x82-x83)/x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint16_t x86 = UINT16_MAX;
	volatile uint64_t x88 = 487499160453122LLU;
	int32_t t19 = 3;

	t19 = (x85<=((x86-x87)/x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = -179;
	static int32_t t20 = -7;

	t20 = (x89<=((x90-x91)/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x93 = INT8_MIN;
	static int8_t x94 = INT8_MAX;
	int32_t x95 = -7;
	static volatile uint32_t x96 = UINT32_MAX;

	t21 = (x93<=((x94-x95)/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 6;
	int8_t x98 = -1;
	uint16_t x99 = 2513U;
	int16_t x100 = INT16_MIN;
	int32_t t22 = -1;

	t22 = (x97<=((x98-x99)/x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MAX;
	volatile uint8_t x102 = 31U;
	volatile uint8_t x104 = 4U;
	int32_t t23 = 876;

	t23 = (x101<=((x102-x103)/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = -207688897239352429LL;
	volatile int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	int32_t t24 = -5;

	t24 = (x105<=((x106-x107)/x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x110 = INT8_MAX;
	int64_t x111 = 8778LL;
	int8_t x112 = INT8_MIN;
	int32_t t25 = 1;

	t25 = (x109<=((x110-x111)/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = 235685804LL;
	int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	int32_t x116 = 5117580;
	int32_t t26 = -1335;

	t26 = (x113<=((x114-x115)/x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 303U;
	uint32_t x118 = 993657U;
	uint8_t x119 = 11U;
	int64_t x120 = 59LL;

	t27 = (x117<=((x118-x119)/x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -1;
	static int32_t x123 = INT32_MIN;
	static int16_t x124 = INT16_MAX;
	int32_t t28 = 1;

	t28 = (x121<=((x122-x123)/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x127 = INT64_MIN;
	static int32_t x128 = -1;
	volatile int32_t t29 = 9015;

	t29 = (x125<=((x126-x127)/x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t30 = -11;

	t30 = (x129<=((x130-x131)/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 145321U;
	int16_t x146 = INT16_MAX;
	int8_t x148 = 1;
	volatile int32_t t31 = 2238;

	t31 = (x145<=((x146-x147)/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x153 = INT8_MAX;
	int64_t x154 = 875287332425LL;
	volatile int32_t t32 = -721;

	t32 = (x153<=((x154-x155)/x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 633163223730171LLU;
	int32_t x158 = INT32_MIN;
	int64_t x159 = -1LL;

	t33 = (x157<=((x158-x159)/x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = -1;
	uint64_t x162 = 1246200392LLU;
	int16_t x163 = 2;
	int8_t x164 = INT8_MAX;
	int32_t t34 = 118206217;

	t34 = (x161<=((x162-x163)/x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 4817626U;
	int64_t x166 = 21730LL;
	uint16_t x167 = UINT16_MAX;
	volatile uint32_t x168 = 21867U;
	volatile int32_t t35 = -3891461;

	t35 = (x165<=((x166-x167)/x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 3U;
	int32_t x174 = INT32_MIN;
	int64_t x176 = INT64_MIN;

	t36 = (x173<=((x174-x175)/x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x181 = INT16_MIN;
	volatile int64_t x182 = -1LL;
	int32_t t37 = -9268211;

	t37 = (x181<=((x182-x183)/x184));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x185 = INT64_MAX;
	int32_t x186 = -692;
	static int64_t x187 = -131471688459889237LL;
	int32_t x188 = INT32_MIN;
	int32_t t38 = 13628;

	t38 = (x185<=((x186-x187)/x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = -242;
	volatile int32_t x190 = -1;
	int16_t x191 = 65;
	int8_t x192 = -1;
	volatile int32_t t39 = -24;

	t39 = (x189<=((x190-x191)/x192));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 411U;
	int16_t x198 = -7;
	static volatile int8_t x199 = INT8_MIN;
	volatile int32_t t40 = -1773;

	t40 = (x197<=((x198-x199)/x200));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x203 = 246;
	static volatile int16_t x204 = -1;
	volatile int32_t t41 = 44;

	t41 = (x201<=((x202-x203)/x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MIN;
	uint32_t x210 = 1U;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = 3139U;
	int32_t t42 = 80332239;

	t42 = (x209<=((x210-x211)/x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x213 = 151490978LLU;
	int64_t x214 = 6344483374431007LL;
	volatile uint16_t x216 = 24103U;

	t43 = (x213<=((x214-x215)/x216));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 61U;
	int8_t x218 = -1;
	int64_t x219 = 4817LL;
	int32_t t44 = 610168;

	t44 = (x217<=((x218-x219)/x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x222 = 1842930U;
	static int8_t x224 = INT8_MIN;
	int32_t t45 = -621038311;

	t45 = (x221<=((x222-x223)/x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = -57;
	volatile uint32_t x226 = 1194878U;
	volatile uint64_t x228 = 549767730769LLU;
	volatile int32_t t46 = 0;

	t46 = (x225<=((x226-x227)/x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = INT8_MAX;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -453;
	static int32_t t47 = -9;

	t47 = (x229<=((x230-x231)/x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x233 = INT64_MAX;
	int32_t x235 = INT32_MAX;
	uint32_t x236 = 263U;
	int32_t t48 = -7337155;

	t48 = (x233<=((x234-x235)/x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x237 = UINT16_MAX;
	int32_t t49 = -29636;

	t49 = (x237<=((x238-x239)/x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int64_t x244 = 47959LL;
	static int32_t t50 = 0;

	t50 = (x241<=((x242-x243)/x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x246 = 11U;
	uint8_t x247 = 1U;
	int64_t x248 = 2635990LL;
	volatile int32_t t51 = -45;

	t51 = (x245<=((x246-x247)/x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = INT32_MAX;
	volatile int16_t x250 = -1;
	volatile uint32_t x251 = UINT32_MAX;
	volatile int16_t x252 = 2;
	volatile int32_t t52 = 0;

	t52 = (x249<=((x250-x251)/x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = -1;
	int8_t x254 = -1;
	volatile int64_t x255 = -175232771181557LL;
	int32_t x256 = 243;
	volatile int32_t t53 = -2;

	t53 = (x253<=((x254-x255)/x256));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x258 = 14;
	int8_t x259 = -1;
	int32_t t54 = -107773567;

	t54 = (x257<=((x258-x259)/x260));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = INT32_MAX;
	uint64_t x262 = 267347230412229664LLU;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MAX;

	t55 = (x261<=((x262-x263)/x264));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x265 = INT64_MAX;
	int64_t x268 = -1LL;
	volatile int32_t t56 = -131452443;

	t56 = (x265<=((x266-x267)/x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x269 = 4627076U;
	static int64_t x270 = -243848052800597LL;
	int16_t x271 = -2;

	t57 = (x269<=((x270-x271)/x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x273 = INT64_MIN;
	static volatile int16_t x274 = INT16_MIN;
	uint32_t x275 = 11423U;
	static uint64_t x276 = 25013LLU;

	t58 = (x273<=((x274-x275)/x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x278 = 619680287;
	int32_t t59 = -23;

	t59 = (x277<=((x278-x279)/x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MIN;
	static int8_t x283 = INT8_MIN;
	static uint32_t x284 = UINT32_MAX;
	static volatile int32_t t60 = 844110246;

	t60 = (x281<=((x282-x283)/x284));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x286 = 4LLU;
	static int8_t x287 = INT8_MAX;
	static int64_t x288 = 133193882200240LL;
	volatile int32_t t61 = 333;

	t61 = (x285<=((x286-x287)/x288));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x293 = 1U;
	static int16_t x294 = INT16_MAX;
	int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t62 = -1;

	t62 = (x293<=((x294-x295)/x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x298 = INT32_MAX;
	uint32_t x299 = 122U;
	int32_t x300 = INT32_MIN;
	volatile int32_t t63 = 29129955;

	t63 = (x297<=((x298-x299)/x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	int16_t x304 = INT16_MIN;
	int32_t t64 = 548065;

	t64 = (x301<=((x302-x303)/x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x305 = 25277U;
	uint16_t x306 = 702U;
	int8_t x307 = INT8_MIN;
	int8_t x308 = -54;
	static volatile int32_t t65 = -224;

	t65 = (x305<=((x306-x307)/x308));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x309 = UINT64_MAX;
	static uint8_t x310 = 52U;
	volatile int16_t x311 = INT16_MAX;
	int16_t x312 = 3297;
	volatile int32_t t66 = 704590064;

	t66 = (x309<=((x310-x311)/x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x318 = -1;
	int64_t x319 = INT64_MIN;
	int8_t x320 = -24;
	volatile int32_t t67 = -42;

	t67 = (x317<=((x318-x319)/x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x322 = UINT32_MAX;
	static volatile int64_t x323 = -1LL;
	uint32_t x324 = 10040U;
	volatile int32_t t68 = 56;

	t68 = (x321<=((x322-x323)/x324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x325 = INT8_MIN;
	volatile int64_t x326 = -477225LL;
	uint8_t x327 = UINT8_MAX;
	uint64_t x328 = 3523LLU;
	volatile int32_t t69 = 141677816;

	t69 = (x325<=((x326-x327)/x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x329 = 1U;
	static uint32_t x331 = UINT32_MAX;
	int32_t t70 = -3791;

	t70 = (x329<=((x330-x331)/x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -1;
	uint16_t x334 = 993U;
	volatile int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MAX;
	volatile int32_t t71 = 4;

	t71 = (x333<=((x334-x335)/x336));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x337 = -1LL;
	int64_t x338 = -1LL;
	uint8_t x340 = 8U;
	volatile int32_t t72 = -78540544;

	t72 = (x337<=((x338-x339)/x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x342 = UINT8_MAX;
	volatile int8_t x343 = -1;
	uint32_t x344 = 3768U;
	volatile int32_t t73 = 176984627;

	t73 = (x341<=((x342-x343)/x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -4345LL;
	volatile int32_t t74 = -40712169;

	t74 = (x345<=((x346-x347)/x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = INT16_MIN;
	int16_t x352 = 77;

	t75 = (x349<=((x350-x351)/x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x353 = INT64_MAX;
	int64_t x354 = -629439161899930239LL;
	volatile int8_t x355 = -1;
	int8_t x356 = -1;
	static volatile int32_t t76 = 127739008;

	t76 = (x353<=((x354-x355)/x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = -1;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t77 = 21980964;

	t77 = (x357<=((x358-x359)/x360));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x361 = 27U;
	int32_t x363 = -1;
	int32_t t78 = -14269490;

	t78 = (x361<=((x362-x363)/x364));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = 1U;
	uint8_t x368 = 39U;
	volatile int32_t t79 = -17658822;

	t79 = (x365<=((x366-x367)/x368));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = 816305LL;
	int16_t x370 = -1;
	int64_t x372 = -1LL;
	int32_t t80 = -752427557;

	t80 = (x369<=((x370-x371)/x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 378134995LLU;
	volatile uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 25U;
	int32_t x376 = 8773;
	static volatile int32_t t81 = 3;

	t81 = (x373<=((x374-x375)/x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = -1;
	volatile int16_t x378 = INT16_MIN;
	volatile int64_t x379 = INT64_MIN;
	static int32_t x380 = INT32_MAX;
	int32_t t82 = -102150;

	t82 = (x377<=((x378-x379)/x380));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = -1;
	static int32_t x382 = 0;
	uint8_t x383 = 22U;
	int32_t t83 = 24;

	t83 = (x381<=((x382-x383)/x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MIN;
	static uint32_t x386 = UINT32_MAX;
	int32_t x387 = -3;
	int8_t x388 = 30;
	static int32_t t84 = -291701;

	t84 = (x385<=((x386-x387)/x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x389 = INT16_MIN;
	volatile uint64_t x390 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t85 = -82556583;

	t85 = (x389<=((x390-x391)/x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MAX;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	static int32_t t86 = 0;

	t86 = (x393<=((x394-x395)/x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MAX;

	t87 = (x397<=((x398-x399)/x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -726;
	uint16_t x402 = 245U;
	int32_t x403 = INT32_MAX;
	volatile int32_t t88 = 2720;

	t88 = (x401<=((x402-x403)/x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x405 = INT32_MIN;
	uint32_t x407 = 245777814U;
	uint64_t x408 = UINT64_MAX;
	static volatile int32_t t89 = 5223686;

	t89 = (x405<=((x406-x407)/x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x409 = 170U;
	int16_t x411 = 2201;
	int64_t x412 = -1LL;
	static volatile int32_t t90 = 3;

	t90 = (x409<=((x410-x411)/x412));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x417 = 22090U;
	int64_t x418 = -1LL;
	static int16_t x419 = INT16_MIN;
	int8_t x420 = -1;
	int32_t t91 = 6893341;

	t91 = (x417<=((x418-x419)/x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = 0LL;
	volatile int32_t x426 = -63536118;
	uint64_t x427 = 4002LLU;

	t92 = (x425<=((x426-x427)/x428));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 793646U;
	uint32_t x430 = 471451U;
	static volatile int32_t t93 = -120333;

	t93 = (x429<=((x430-x431)/x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	volatile uint32_t x436 = 155U;
	volatile int32_t t94 = -13;

	t94 = (x433<=((x434-x435)/x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x441 = 177898749LLU;
	static int64_t x442 = -1LL;
	static int8_t x444 = -7;

	t95 = (x441<=((x442-x443)/x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x446 = 1;
	static int64_t x447 = -88306741LL;
	uint32_t x448 = 114U;
	int32_t t96 = 12828;

	t96 = (x445<=((x446-x447)/x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = -1;
	int16_t x450 = -2;
	int64_t x452 = 1LL;
	volatile int32_t t97 = 1;

	t97 = (x449<=((x450-x451)/x452));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x457 = 3479200U;
	volatile uint8_t x458 = UINT8_MAX;
	volatile int16_t x459 = -1;
	int16_t x460 = -1;
	volatile int32_t t98 = -6;

	t98 = (x457<=((x458-x459)/x460));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = INT16_MIN;
	static int8_t x462 = -49;
	volatile int16_t x463 = INT16_MAX;
	int32_t x464 = INT32_MIN;

	t99 = (x461<=((x462-x463)/x464));

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

