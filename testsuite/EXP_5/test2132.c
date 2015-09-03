#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -53701621;
uint16_t x8 = 5U;
uint32_t x9 = UINT32_MAX;
uint8_t x10 = 18U;
int64_t x12 = INT64_MIN;
volatile int16_t x13 = 7;
volatile int8_t x14 = -1;
int64_t x25 = -1100770946404029LL;
int32_t x32 = INT32_MIN;
volatile int32_t t7 = 788;
static int16_t x33 = INT16_MAX;
uint8_t x46 = UINT8_MAX;
static int64_t x53 = 24957720941417LL;
volatile uint8_t x56 = 7U;
int32_t t14 = -3;
static int8_t x63 = -31;
volatile uint8_t x78 = 3U;
uint8_t x92 = 0U;
volatile int64_t x95 = 321448219579253LL;
volatile int32_t x96 = INT32_MIN;
volatile int16_t x101 = INT16_MAX;
uint64_t x108 = 3522422942LLU;
static volatile int64_t t26 = -25243081405LL;
volatile int32_t t29 = -31242673;
static volatile int32_t t30 = -28639576;
int8_t x135 = -1;
static volatile int32_t t33 = -4;
volatile int32_t t34 = -1485557;
uint8_t x144 = 2U;
volatile int16_t x146 = INT16_MIN;
int64_t x148 = 9LL;
int16_t x157 = -1;
int64_t x158 = -32947LL;
int32_t t40 = 861379;
uint64_t x168 = 150088707998822008LLU;
int32_t t42 = -2579051;
static int64_t x173 = INT64_MIN;
static uint64_t x175 = UINT64_MAX;
volatile int64_t x182 = INT64_MIN;
int32_t x187 = 12693;
int8_t x188 = -27;
static int32_t x190 = INT32_MIN;
volatile uint64_t x192 = 59679512LLU;
volatile int64_t x194 = INT64_MIN;
uint64_t x197 = UINT64_MAX;
static int32_t x201 = 406314;
int64_t x204 = INT64_MIN;
volatile int64_t x207 = -2405537912958574LL;
static int16_t x211 = INT16_MAX;
volatile uint32_t x216 = 230U;
int64_t x224 = -1LL;
int32_t x225 = -4;
uint64_t x228 = UINT64_MAX;
int64_t x229 = INT64_MIN;
int64_t x230 = -27LL;
uint32_t x232 = 165668828U;
int32_t x237 = INT32_MAX;
int64_t x244 = -46063226950LL;
int64_t x247 = 265538288LL;
static volatile int32_t t61 = 16308220;
static int64_t x249 = 339805351LL;
static volatile int8_t x260 = INT8_MIN;
uint32_t x263 = 41734U;
int64_t x264 = 0LL;
uint32_t x276 = 255U;
uint16_t x291 = 47U;
int64_t x292 = INT64_MAX;
int64_t x293 = INT64_MIN;
int64_t x296 = -1LL;
volatile int64_t x301 = INT64_MIN;
int32_t x304 = 1672;
int32_t t77 = 242;
static int64_t x315 = 30581LL;
int64_t x316 = INT64_MIN;
int32_t x317 = -12193;
static volatile int64_t x325 = INT64_MIN;
static int64_t x334 = INT64_MIN;
static uint16_t x338 = 2U;
int16_t x344 = -154;
volatile int16_t x345 = INT16_MIN;
int16_t x346 = INT16_MIN;
static volatile int32_t t86 = -14222020;
uint64_t x355 = 5910521026642182LLU;
static uint16_t x358 = 640U;
volatile int8_t x364 = -1;
int32_t x375 = INT32_MAX;
static volatile int8_t x377 = -1;
uint64_t x383 = 19362388751LLU;
int32_t x384 = INT32_MAX;
int32_t t95 = INT32_MIN;
uint32_t x390 = UINT32_MAX;


void f0(void) {
	volatile uint16_t x1 = 12U;
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = -1LL;
	uint32_t x4 = 13U;

	t0 = (x1^((x2^x3)==x4));

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -15767;

	t1 = (x5^((x6^x7)==x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MAX;
	static volatile uint32_t t2 = UINT32_MAX;

	t2 = (x9^((x10^x11)==x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = UINT64_MAX;
	volatile int8_t x16 = -1;
	volatile int32_t t3 = -204;

	t3 = (x13^((x14^x15)==x16));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 3LLU;
	static int64_t x20 = -591440LL;
	uint32_t t4 = UINT32_MAX;

	t4 = (x17^((x18^x19)==x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2U;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = -1;
	uint16_t x24 = 10U;
	uint32_t t5 = 899384116U;

	t5 = (x21^((x22^x23)==x24));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 0U;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = UINT16_MAX;
	static int64_t t6 = -358677796388LL;

	t6 = (x25^((x26^x27)==x28));

	if (t6 != -1100770946404029LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	uint64_t x30 = 6LLU;
	uint64_t x31 = 17995591LLU;

	t7 = (x29^((x30^x31)==x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -375;
	uint8_t x35 = 9U;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = 18;

	t8 = (x33^((x34^x35)==x36));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 68U;
	static volatile int8_t x38 = INT8_MIN;
	static volatile int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -27126;

	t9 = (x37^((x38^x39)==x40));

	if (t9 != 68) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 11396U;
	uint8_t x42 = 3U;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 24027;

	t10 = (x41^((x42^x43)==x44));

	if (t10 != 11396) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 31U;
	int8_t x47 = -1;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 254;

	t11 = (x45^((x46^x47)==x48));

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = UINT64_MAX;
	static int64_t x50 = INT64_MAX;
	int64_t x51 = 200965LL;
	static int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49^((x50^x51)==x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 0U;
	static int16_t x55 = -22;
	int64_t t13 = -25058110741672LL;

	t13 = (x53^((x54^x55)==x56));

	if (t13 != 24957720941417LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	volatile uint32_t x58 = 5710U;
	uint8_t x59 = UINT8_MAX;
	uint8_t x60 = UINT8_MAX;

	t14 = (x57^((x58^x59)==x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1536293LLU;
	volatile int64_t x62 = 2218822874580LL;
	static int64_t x64 = INT64_MAX;
	static uint64_t t15 = 1304LLU;

	t15 = (x61^((x62^x63)==x64));

	if (t15 != 1536293LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 1U;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	uint8_t x68 = 102U;
	static volatile int32_t t16 = -22278;

	t16 = (x65^((x66^x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int8_t x70 = 0;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 270569639;

	t17 = (x69^((x70^x71)==x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -49839458LL;
	int64_t x74 = -515198909483LL;
	static int8_t x75 = INT8_MIN;
	static int32_t x76 = INT32_MIN;
	int64_t t18 = 2LL;

	t18 = (x73^((x74^x75)==x76));

	if (t18 != -49839458LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 25U;
	uint32_t x79 = 32480U;
	int64_t x80 = -1LL;
	volatile int32_t t19 = 15318;

	t19 = (x77^((x78^x79)==x80));

	if (t19 != 25) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	uint64_t t20 = UINT64_MAX;

	t20 = (x81^((x82^x83)==x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 253482989946918779LLU;
	int32_t x86 = -1;
	int64_t x87 = -1LL;
	static int16_t x88 = INT16_MIN;
	uint64_t t21 = 6460994LLU;

	t21 = (x85^((x86^x87)==x88));

	if (t21 != 253482989946918779LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -1;
	volatile int16_t x90 = 3;
	int64_t x91 = 399711578458671LL;
	int32_t t22 = -1799;

	t22 = (x89^((x90^x91)==x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 1U;
	static int32_t x94 = INT32_MIN;
	volatile int32_t t23 = -268384360;

	t23 = (x93^((x94^x95)==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 0LLU;
	uint32_t x98 = 240U;
	volatile uint32_t x99 = 51U;
	int32_t x100 = -20683538;
	uint64_t t24 = 1759249698673254804LLU;

	t24 = (x97^((x98^x99)==x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 0;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MAX;
	int32_t t25 = -6635103;

	t25 = (x101^((x102^x103)==x104));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 4721255364481LL;
	int16_t x106 = -101;
	uint8_t x107 = 15U;

	t26 = (x105^((x106^x107)==x108));

	if (t26 != 4721255364481LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	static int32_t x110 = -1;
	volatile int16_t x111 = INT16_MAX;
	static volatile uint64_t x112 = 17566971581810LLU;
	int32_t t27 = 237878545;

	t27 = (x109^((x110^x111)==x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 103U;
	int32_t x114 = INT32_MIN;
	volatile int16_t x115 = -51;
	int64_t x116 = 5966952LL;
	volatile int32_t t28 = 163;

	t28 = (x113^((x114^x115)==x116));

	if (t28 != 103) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -5;
	static int8_t x118 = -1;
	uint16_t x119 = 40U;
	volatile uint8_t x120 = 0U;

	t29 = (x117^((x118^x119)==x120));

	if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int32_t x122 = 5;
	static volatile int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;

	t30 = (x121^((x122^x123)==x124));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = INT8_MAX;
	volatile int64_t t31 = -194LL;

	t31 = (x125^((x126^x127)==x128));

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static int64_t x130 = 30455572267000568LL;
	static int64_t x131 = -1LL;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x129^((x130^x131)==x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1442821;
	uint8_t x134 = 108U;
	uint32_t x136 = 658U;

	t33 = (x133^((x134^x135)==x136));

	if (t33 != 1442821) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = 0LL;
	volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (x137^((x138^x139)==x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static int16_t x142 = INT16_MIN;
	static int64_t x143 = INT64_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x141^((x142^x143)==x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 8194354;
	uint32_t x147 = UINT32_MAX;
	static int32_t t36 = 692012;

	t36 = (x145^((x146^x147)==x148));

	if (t36 != 8194354) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 138561355LLU;
	volatile uint16_t x150 = 8283U;
	volatile int64_t x151 = INT64_MAX;
	int16_t x152 = 77;
	volatile uint64_t t37 = 26LLU;

	t37 = (x149^((x150^x151)==x152));

	if (t37 != 138561355LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static volatile int16_t x154 = -5907;
	int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	static int32_t t38 = -1678;

	t38 = (x153^((x154^x155)==x156));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x159 = -10;
	volatile int16_t x160 = INT16_MIN;
	int32_t t39 = -276092695;

	t39 = (x157^((x158^x159)==x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 0U;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;

	t40 = (x161^((x162^x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 107572312LLU;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = UINT16_MAX;
	static volatile uint64_t t41 = 11LLU;

	t41 = (x165^((x166^x167)==x168));

	if (t41 != 107572312LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 41403;
	int32_t x170 = -1;
	static int16_t x171 = -5858;
	uint16_t x172 = UINT16_MAX;

	t42 = (x169^((x170^x171)==x172));

	if (t42 != 41403) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -533935LL;
	uint32_t x176 = 7603U;
	int64_t t43 = INT64_MIN;

	t43 = (x173^((x174^x175)==x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	volatile uint64_t x178 = 1057874865570464593LLU;
	int16_t x179 = INT16_MIN;
	static int16_t x180 = 73;
	volatile int32_t t44 = 151;

	t44 = (x177^((x178^x179)==x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = 21;
	static volatile int32_t x183 = -545943611;
	int32_t x184 = -86456436;
	volatile int32_t t45 = 4;

	t45 = (x181^((x182^x183)==x184));

	if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	int32_t t46 = -4;

	t46 = (x185^((x186^x187)==x188));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	int64_t t47 = INT64_MIN;

	t47 = (x189^((x190^x191)==x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	uint64_t x196 = 6263113LLU;
	static int32_t t48 = -17186906;

	t48 = (x193^((x194^x195)==x196));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = INT16_MAX;
	uint16_t x199 = 2U;
	static uint8_t x200 = UINT8_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197^((x198^x199)==x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x202 = INT32_MIN;
	static int32_t x203 = -17888557;
	static int32_t t50 = -397781748;

	t50 = (x201^((x202^x203)==x204));

	if (t50 != 406314) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	static uint32_t x208 = 689697U;
	static int64_t t51 = INT64_MIN;

	t51 = (x205^((x206^x207)==x208));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	volatile int16_t x210 = -1603;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x209^((x210^x211)==x212));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 439U;
	int32_t x214 = -1;
	int8_t x215 = INT8_MIN;
	volatile uint32_t t53 = 107U;

	t53 = (x213^((x214^x215)==x216));

	if (t53 != 439U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int8_t x218 = -35;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = INT8_MIN;
	int32_t t54 = -272078;

	t54 = (x217^((x218^x219)==x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	static int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x221^((x222^x223)==x224));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x226 = UINT64_MAX;
	int64_t x227 = -704013708946269LL;
	static volatile int32_t t56 = 7618126;

	t56 = (x225^((x226^x227)==x228));

	if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x231 = 10U;
	int64_t t57 = INT64_MIN;

	t57 = (x229^((x230^x231)==x232));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -198;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	uint64_t x236 = 2943666LLU;
	int32_t t58 = 171835251;

	t58 = (x233^((x234^x235)==x236));

	if (t58 != -198) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x238 = 105U;
	int16_t x239 = -1;
	volatile int64_t x240 = INT64_MIN;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x237^((x238^x239)==x240));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 318313012662LL;
	static uint8_t x242 = 7U;
	volatile int8_t x243 = INT8_MAX;
	volatile int64_t t60 = 129237181LL;

	t60 = (x241^((x242^x243)==x244));

	if (t60 != 318313012662LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = 50;
	int16_t x248 = 1;

	t61 = (x245^((x246^x247)==x248));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = -1;
	int16_t x251 = -1;
	uint16_t x252 = UINT16_MAX;
	int64_t t62 = 46263090878LL;

	t62 = (x249^((x250^x251)==x252));

	if (t62 != 339805351LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 271263613832LL;
	static int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	int32_t x256 = 24201;
	static volatile int64_t t63 = -121596024503753040LL;

	t63 = (x253^((x254^x255)==x256));

	if (t63 != 271263613832LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile int16_t x258 = INT16_MIN;
	volatile int32_t x259 = -1;
	int32_t t64 = INT32_MIN;

	t64 = (x257^((x258^x259)==x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = 1LL;
	int32_t t65 = INT32_MIN;

	t65 = (x261^((x262^x263)==x264));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = INT16_MIN;
	static int8_t x267 = -22;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -6241981;

	t66 = (x265^((x266^x267)==x268));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	int16_t x270 = -1;
	int32_t x271 = -1;
	int8_t x272 = INT8_MAX;
	volatile int32_t t67 = -42292;

	t67 = (x269^((x270^x271)==x272));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int16_t x274 = -9;
	int32_t x275 = INT32_MIN;
	static uint32_t t68 = UINT32_MAX;

	t68 = (x273^((x274^x275)==x276));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	static int64_t x278 = 808603859LL;
	uint64_t x279 = 90306940283LLU;
	static uint64_t x280 = UINT64_MAX;
	int64_t t69 = INT64_MAX;

	t69 = (x277^((x278^x279)==x280));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 8234824U;
	static int64_t x282 = INT64_MAX;
	int64_t x283 = INT64_MAX;
	int16_t x284 = -1;
	uint32_t t70 = 81U;

	t70 = (x281^((x282^x283)==x284));

	if (t70 != 8234824U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = -1LL;
	int16_t x287 = 0;
	int64_t x288 = -105LL;
	static volatile int32_t t71 = -1256;

	t71 = (x285^((x286^x287)==x288));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	static volatile uint32_t x290 = UINT32_MAX;
	volatile int32_t t72 = -99;

	t72 = (x289^((x290^x291)==x292));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 681184417LLU;
	static volatile int64_t x295 = INT64_MAX;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x293^((x294^x295)==x296));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 6871098U;
	uint32_t x298 = 108736U;
	int8_t x299 = INT8_MAX;
	static int64_t x300 = INT64_MAX;
	volatile uint32_t t74 = 121600U;

	t74 = (x297^((x298^x299)==x300));

	if (t74 != 6871098U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = INT64_MAX;
	static uint8_t x303 = UINT8_MAX;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x301^((x302^x303)==x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	static int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = 141299780628840LLU;
	int32_t t76 = 23;

	t76 = (x305^((x306^x307)==x308));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = 9;
	volatile uint32_t x310 = 381144U;
	int8_t x311 = -1;
	int64_t x312 = INT64_MAX;

	t77 = (x309^((x310^x311)==x312));

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static int8_t x314 = INT8_MAX;
	static volatile int64_t t78 = INT64_MIN;

	t78 = (x313^((x314^x315)==x316));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x318 = INT64_MAX;
	volatile uint32_t x319 = 3U;
	volatile uint64_t x320 = UINT64_MAX;
	int32_t t79 = 861054;

	t79 = (x317^((x318^x319)==x320));

	if (t79 != -12193) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	uint16_t x322 = UINT16_MAX;
	uint32_t x323 = 71605874U;
	static uint32_t x324 = 83183U;
	uint32_t t80 = UINT32_MAX;

	t80 = (x321^((x322^x323)==x324));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -1;
	uint16_t x327 = 370U;
	int16_t x328 = 3;
	volatile int64_t t81 = INT64_MIN;

	t81 = (x325^((x326^x327)==x328));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	static uint32_t x330 = UINT32_MAX;
	static int64_t x331 = 230992LL;
	int16_t x332 = -298;
	int64_t t82 = INT64_MAX;

	t82 = (x329^((x330^x331)==x332));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	static volatile int32_t x335 = -1;
	uint16_t x336 = UINT16_MAX;
	int32_t t83 = 0;

	t83 = (x333^((x334^x335)==x336));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -3;
	int8_t x339 = 8;
	static uint16_t x340 = 29U;
	int32_t t84 = 2410;

	t84 = (x337^((x338^x339)==x340));

	if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -2;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MAX;
	volatile int32_t t85 = 6452;

	t85 = (x341^((x342^x343)==x344));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x347 = INT16_MIN;
	volatile uint64_t x348 = 4183461745845153LLU;

	t86 = (x345^((x346^x347)==x348));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	volatile int16_t x350 = INT16_MIN;
	volatile int32_t x351 = 52513;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 104686789;

	t87 = (x349^((x350^x351)==x352));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 5623022530501LL;
	volatile uint32_t x354 = UINT32_MAX;
	int32_t x356 = INT32_MIN;
	volatile int64_t t88 = 0LL;

	t88 = (x353^((x354^x355)==x356));

	if (t88 != 5623022530501LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	static int8_t x360 = INT8_MIN;
	static int32_t t89 = INT32_MIN;

	t89 = (x357^((x358^x359)==x360));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int64_t x362 = INT64_MAX;
	volatile int16_t x363 = -1;
	int32_t t90 = -46059123;

	t90 = (x361^((x362^x363)==x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1113004U;
	int16_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = 81LL;
	volatile uint32_t t91 = 13U;

	t91 = (x365^((x366^x367)==x368));

	if (t91 != 1113004U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = -1;
	int16_t x371 = INT16_MAX;
	int16_t x372 = -1;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x369^((x370^x371)==x372));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 46U;
	int64_t x374 = 0LL;
	uint32_t x376 = 947256U;
	volatile int32_t t93 = -15;

	t93 = (x373^((x374^x375)==x376));

	if (t93 != 46) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 970809503U;
	uint64_t x379 = 495LLU;
	static volatile int8_t x380 = 1;
	volatile int32_t t94 = -18;

	t94 = (x377^((x378^x379)==x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint8_t x382 = 42U;

	t95 = (x381^((x382^x383)==x384));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = 1;
	static int16_t x387 = -526;
	volatile uint16_t x388 = 0U;
	int32_t t96 = INT32_MIN;

	t96 = (x385^((x386^x387)==x388));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -1LL;
	int8_t x391 = -1;
	static int16_t x392 = INT16_MAX;
	volatile int64_t t97 = -237LL;

	t97 = (x389^((x390^x391)==x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	static int8_t x395 = 6;
	int8_t x396 = 1;
	static volatile int32_t t98 = 189772628;

	t98 = (x393^((x394^x395)==x396));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = -1;
	int32_t x399 = 29;
	int16_t x400 = INT16_MIN;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x397^((x398^x399)==x400));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

