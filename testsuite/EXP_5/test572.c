#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
int16_t x3 = -1;
volatile int64_t t0 = -4008442570211LL;
uint64_t x8 = 46677408407023089LLU;
volatile int64_t x12 = INT64_MIN;
static uint64_t x28 = 11736382607602LLU;
uint64_t t6 = 275777576LLU;
int32_t x33 = 7;
int32_t x36 = -382;
int16_t x39 = -172;
uint8_t x48 = UINT8_MAX;
int64_t t10 = 4586590LL;
int8_t x62 = INT8_MIN;
int64_t x73 = 567797LL;
static int16_t x75 = -93;
static uint64_t x79 = UINT64_MAX;
int32_t x81 = INT32_MIN;
int8_t x82 = 5;
static int8_t x92 = INT8_MIN;
int32_t x93 = -1;
static int32_t x95 = INT32_MIN;
volatile uint8_t x103 = UINT8_MAX;
uint16_t x113 = 3U;
int32_t x115 = INT32_MIN;
volatile int64_t x116 = -636LL;
volatile uint64_t t27 = 5903063LLU;
int64_t x122 = INT64_MIN;
int16_t x123 = 2;
int64_t x131 = INT64_MAX;
uint8_t x144 = UINT8_MAX;
static volatile uint64_t x151 = 475459167LLU;
int64_t x158 = INT64_MAX;
int32_t x159 = -1;
static volatile uint8_t x166 = 70U;
int64_t x174 = -729274849243LL;
volatile int32_t t43 = 13;
volatile int32_t t44 = 0;
uint16_t x196 = 11U;
uint64_t x206 = UINT64_MAX;
int16_t x207 = INT16_MIN;
volatile int16_t x208 = -1009;
volatile int16_t x209 = 2563;
int32_t x212 = -3;
int8_t x216 = INT8_MAX;
volatile uint16_t x223 = UINT16_MAX;
int32_t x225 = -1;
volatile int8_t x233 = 27;
uint32_t x235 = 25110U;
static volatile int8_t x236 = INT8_MIN;
int64_t x240 = -1LL;
int16_t x247 = INT16_MIN;
int8_t x250 = 0;
int16_t x254 = INT16_MIN;
int64_t x263 = INT64_MIN;
int8_t x270 = INT8_MAX;
int16_t x271 = 1207;
uint8_t x272 = 50U;
static volatile uint64_t x274 = 256387455046393LLU;
int8_t x280 = -50;
volatile uint32_t t67 = 1296U;
volatile int32_t t69 = 78;
int32_t x301 = -463590;
volatile int64_t t70 = -374901736017436565LL;
uint32_t t71 = 2956847U;
int64_t x311 = -7420679771191LL;
uint8_t x316 = 49U;
volatile uint64_t t73 = 28914854547382LLU;
static volatile int32_t t74 = 20344514;
int8_t x321 = INT8_MIN;
uint64_t x329 = 3573637399LLU;
volatile int32_t x340 = 3294;
int8_t x341 = INT8_MAX;
int32_t x344 = INT32_MAX;
int64_t t79 = -519964735LL;
int16_t x345 = INT16_MIN;
volatile int64_t t80 = 7688928037015678LL;
int8_t x352 = INT8_MIN;
int8_t x356 = -1;
uint64_t x359 = 4903102185169784LLU;
uint64_t x363 = UINT64_MAX;
volatile int8_t x365 = INT8_MAX;
uint64_t t85 = 335467334848825895LLU;
static int8_t x374 = 1;
int8_t x375 = INT8_MAX;
uint8_t x379 = 13U;
volatile uint16_t x389 = 11511U;
volatile uint32_t x391 = 351879439U;
volatile int32_t x399 = -476;
int8_t x400 = 16;
volatile int8_t x403 = -54;
uint8_t x409 = 5U;
uint16_t x414 = 8U;
volatile int64_t t98 = INT64_MIN;
int16_t x427 = -14914;
int16_t x428 = INT16_MIN;


void f0(void) {
	int64_t x1 = 70195821080LL;
	uint8_t x4 = UINT8_MAX;

	t0 = (x1^((x2/x3)%x4));

	if (t0 != 70195821080LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	static uint64_t t1 = 1434557767766LLU;

	t1 = (x5^((x6/x7)%x8));

	if (t1 != 8886277958720806LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	uint64_t x10 = 953637601565LLU;
	int8_t x11 = 6;
	volatile uint64_t t2 = 3336198081LLU;

	t2 = (x9^((x10/x11)%x12));

	if (t2 != 18446743914769951236LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -239;
	uint8_t x14 = 0U;
	uint64_t x15 = 601807503LLU;
	static uint64_t x16 = 4198783917808LLU;
	static volatile uint64_t t3 = 4879335357460386LLU;

	t3 = (x13^((x14/x15)%x16));

	if (t3 != 18446744073709551377LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile uint8_t x18 = UINT8_MAX;
	uint64_t x19 = UINT64_MAX;
	static volatile int64_t x20 = INT64_MIN;
	uint64_t t4 = 7897285224940657248LLU;

	t4 = (x17^((x18/x19)%x20));

	if (t4 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 289483596551LLU;
	int32_t x26 = INT32_MIN;
	volatile int64_t x27 = INT64_MAX;
	volatile uint64_t t5 = 7439789134573LLU;

	t5 = (x25^((x26/x27)%x28));

	if (t5 != 289483596551LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -3;
	uint64_t x30 = UINT64_MAX;
	static int8_t x31 = -1;
	int8_t x32 = INT8_MAX;

	t6 = (x29^((x30/x31)%x32));

	if (t6 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MIN;
	static int8_t x35 = -6;
	volatile int64_t t7 = -102471306411LL;

	t7 = (x33^((x34/x35)%x36));

	if (t7 != 166LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	volatile int16_t x40 = 5242;
	int32_t t8 = 13709;

	t8 = (x37^((x38/x39)%x40));

	if (t8 != -4152) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MAX;
	volatile int16_t x44 = 6524;
	uint64_t t9 = 125683666503467419LLU;

	t9 = (x41^((x42/x43)%x44));

	if (t9 != 1056LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -15;
	volatile uint16_t x46 = 59U;
	int64_t x47 = 3653408392179216LL;

	t10 = (x45^((x46/x47)%x48));

	if (t10 != -15LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = 8;
	int16_t x55 = -1;
	int8_t x56 = INT8_MIN;
	int64_t t11 = -42530372889386LL;

	t11 = (x53^((x54/x55)%x56));

	if (t11 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = INT32_MIN;
	volatile int8_t x59 = INT8_MAX;
	static uint64_t x60 = 88644767926178LLU;
	static volatile uint64_t t12 = 120367931267740LLU;

	t12 = (x57^((x58/x59)%x60));

	if (t12 != 9223405839413554838LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 1U;
	volatile int8_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int64_t t13 = 135105867017939232LL;

	t13 = (x61^((x62/x63)%x64));

	if (t13 != 129LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	static int64_t x66 = -26693265LL;
	int64_t x67 = -1LL;
	static int64_t x68 = INT64_MIN;
	static volatile int64_t t14 = 27092034629280177LL;

	t14 = (x65^((x66/x67)%x68));

	if (t14 != -2120790383LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MIN;
	static volatile int32_t x71 = INT32_MIN;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t15 = 23398U;

	t15 = (x69^((x70/x71)%x72));

	if (t15 != 255U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = -7;
	uint32_t x76 = UINT32_MAX;
	int64_t t16 = 486307005765LL;

	t16 = (x73^((x74/x75)%x76));

	if (t16 != 567797LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 363U;
	volatile uint8_t x78 = 3U;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t17 = 29926905LLU;

	t17 = (x77^((x78/x79)%x80));

	if (t17 != 363LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x83 = 16013U;
	volatile int32_t x84 = -842;
	uint32_t t18 = 68U;

	t18 = (x81^((x82/x83)%x84));

	if (t18 != 2147483648U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	volatile uint8_t x88 = 31U;
	volatile int64_t t19 = -8307731053416209LL;

	t19 = (x85^((x86/x87)%x88));

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x89 = 6930U;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	static volatile int64_t t20 = 1622954616158641766LL;

	t20 = (x89^((x90/x91)%x92));

	if (t20 != -7021LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = 3U;
	static int16_t x96 = 2889;
	volatile int32_t t21 = 648101109;

	t21 = (x93^((x94/x95)%x96));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	static int64_t x98 = INT64_MAX;
	static int64_t x99 = 93229712LL;
	static int8_t x100 = -1;
	int64_t t22 = -4411483LL;

	t22 = (x97^((x98/x99)%x100));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	static uint64_t x102 = 22829133837987941LLU;
	int16_t x104 = INT16_MIN;
	uint64_t t23 = 229306714262673405LLU;

	t23 = (x101^((x102/x103)%x104));

	if (t23 != 18446654547694500682LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	volatile uint32_t x106 = 13877666U;
	int32_t x107 = -45;
	uint32_t x108 = UINT32_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = (x105^((x106/x107)%x108));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 4U;
	static uint8_t x110 = 10U;
	int32_t x111 = INT32_MAX;
	uint64_t x112 = 2175119281252555079LLU;
	static volatile uint64_t t25 = 330153LLU;

	t25 = (x109^((x110/x111)%x112));

	if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = -1LL;
	int64_t t26 = -10442216136249LL;

	t26 = (x113^((x114/x115)%x116));

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -7;
	int32_t x118 = 159251;
	uint64_t x119 = 1345130323648966549LLU;
	static int8_t x120 = INT8_MAX;

	t27 = (x117^((x118/x119)%x120));

	if (t27 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = -1;
	volatile uint8_t x124 = 39U;
	volatile int64_t t28 = 7820741530576941LL;

	t28 = (x121^((x122/x123)%x124));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	static volatile int16_t x126 = INT16_MIN;
	volatile int16_t x127 = INT16_MAX;
	volatile uint8_t x128 = 49U;
	volatile int32_t t29 = -45;

	t29 = (x125^((x126/x127)%x128));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	uint16_t x132 = 663U;
	int64_t t30 = -398506919LL;

	t30 = (x129^((x130/x131)%x132));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 0;
	int64_t x134 = -1LL;
	int16_t x135 = INT16_MIN;
	int8_t x136 = 50;
	int64_t t31 = 3871089LL;

	t31 = (x133^((x134/x135)%x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = UINT16_MAX;
	static int16_t x138 = INT16_MAX;
	volatile uint32_t x139 = 3734371U;
	uint8_t x140 = UINT8_MAX;
	volatile uint32_t t32 = 119U;

	t32 = (x137^((x138/x139)%x140));

	if (t32 != 65535U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MIN;
	static int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	volatile int64_t t33 = -251494278835967838LL;

	t33 = (x141^((x142/x143)%x144));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x145 = UINT64_MAX;
	volatile int64_t x146 = -1LL;
	uint8_t x147 = 15U;
	int32_t x148 = 10599;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x145^((x146/x147)%x148));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = 0;
	uint16_t x150 = UINT16_MAX;
	static uint16_t x152 = UINT16_MAX;
	uint64_t t35 = 1607LLU;

	t35 = (x149^((x150/x151)%x152));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	volatile int32_t x155 = -1024;
	volatile uint32_t x156 = UINT32_MAX;
	volatile uint32_t t36 = 8859U;

	t36 = (x153^((x154/x155)%x156));

	if (t36 != 4294967168U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	uint8_t x160 = UINT8_MAX;
	int64_t t37 = 22178774892LL;

	t37 = (x157^((x158/x159)%x160));

	if (t37 != 126LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = INT64_MAX;
	uint16_t x162 = 754U;
	int16_t x163 = INT16_MAX;
	int64_t x164 = -53790207415721LL;
	int64_t t38 = INT64_MAX;

	t38 = (x161^((x162/x163)%x164));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	volatile uint8_t x167 = 105U;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t39 = -12;

	t39 = (x165^((x166/x167)%x168));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	static int64_t x170 = INT64_MAX;
	volatile int8_t x171 = -8;
	int64_t x172 = -1LL;
	int64_t t40 = 34098053672LL;

	t40 = (x169^((x170/x171)%x172));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = UINT16_MAX;
	volatile int8_t x175 = -1;
	volatile int16_t x176 = -9922;
	volatile int64_t t41 = -31793282864663979LL;

	t41 = (x173^((x174/x175)%x176));

	if (t41 != 64594LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -9244LL;
	int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = -1LL;
	volatile int64_t t42 = -44885188LL;

	t42 = (x177^((x178/x179)%x180));

	if (t42 != -9244LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MAX;
	int16_t x182 = -127;
	volatile uint8_t x183 = 8U;
	volatile int16_t x184 = INT16_MIN;

	t43 = (x181^((x182/x183)%x184));

	if (t43 != -2147483634) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x185 = INT8_MIN;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;

	t44 = (x185^((x186/x187)%x188));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	static int8_t x190 = INT8_MAX;
	volatile int16_t x191 = INT16_MAX;
	static uint16_t x192 = 636U;
	volatile int32_t t45 = 17;

	t45 = (x189^((x190/x191)%x192));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 41620U;
	volatile int16_t x194 = -1064;
	int16_t x195 = INT16_MAX;
	uint32_t t46 = 722245U;

	t46 = (x193^((x194/x195)%x196));

	if (t46 != 41620U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x197 = INT64_MAX;
	static int8_t x198 = INT8_MAX;
	static volatile uint16_t x199 = UINT16_MAX;
	uint64_t x200 = UINT64_MAX;
	uint64_t t47 = 3515174161901924LLU;

	t47 = (x197^((x198/x199)%x200));

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 17980U;
	uint64_t t48 = 3234671228802283LLU;

	t48 = (x205^((x206/x207)%x208));

	if (t48 != 17981LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = 23701212;
	volatile uint64_t t49 = 1860102363LLU;

	t49 = (x209^((x210/x211)%x212));

	if (t49 != 778303831468LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x213 = UINT16_MAX;
	static int8_t x214 = INT8_MIN;
	static int32_t x215 = -1;
	int32_t t50 = 5062;

	t50 = (x213^((x214/x215)%x216));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 68698165103678LLU;
	static uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t51 = 9121701771LLU;

	t51 = (x217^((x218/x219)%x220));

	if (t51 != 269404570165LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	int8_t x222 = 7;
	int32_t x224 = 10399;
	int32_t t52 = -441501021;

	t52 = (x221^((x222/x223)%x224));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x226 = 5031U;
	int32_t x227 = -1;
	volatile uint64_t x228 = UINT64_MAX;
	uint64_t t53 = 2822825756LLU;

	t53 = (x225^((x226/x227)%x228));

	if (t53 != 5030LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -1;
	static uint64_t x230 = 199711428LLU;
	int64_t x231 = INT64_MAX;
	int16_t x232 = INT16_MIN;
	uint64_t t54 = UINT64_MAX;

	t54 = (x229^((x230/x231)%x232));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x234 = -1;
	uint32_t t55 = 9701062U;

	t55 = (x233^((x234/x235)%x236));

	if (t55 != 171069U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	volatile uint32_t x238 = 25945U;
	int8_t x239 = -10;
	int64_t t56 = -315LL;

	t56 = (x237^((x238/x239)%x240));

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int16_t x243 = 1359;
	static int8_t x244 = INT8_MAX;
	volatile int64_t t57 = 603687LL;

	t57 = (x241^((x242/x243)%x244));

	if (t57 != 56LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	static volatile int32_t x248 = INT32_MIN;
	static uint32_t t58 = 15U;

	t58 = (x245^((x246/x247)%x248));

	if (t58 != 254U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t59 = 25230196;

	t59 = (x249^((x250/x251)%x252));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x253 = 96LL;
	int64_t x255 = -1LL;
	uint64_t x256 = UINT64_MAX;
	uint64_t t60 = 1048556491697LLU;

	t60 = (x253^((x254/x255)%x256));

	if (t60 != 32864LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x262 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	int64_t t61 = -913598575977372LL;

	t61 = (x261^((x262/x263)%x264));

	if (t61 != 4294967294LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -2;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	volatile uint16_t x268 = 2U;
	volatile int32_t t62 = 1364516;

	t62 = (x265^((x266/x267)%x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x269 = UINT8_MAX;
	volatile int32_t t63 = 44129;

	t63 = (x269^((x270/x271)%x272));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = 29LL;
	int64_t x275 = INT64_MAX;
	uint64_t x276 = 51699LLU;
	uint64_t t64 = 334LLU;

	t64 = (x273^((x274/x275)%x276));

	if (t64 != 29LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -1;
	volatile int32_t t65 = 9;

	t65 = (x277^((x278/x279)%x280));

	if (t65 != -29) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = 1;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t66 = 45002257091290LL;

	t66 = (x281^((x282/x283)%x284));

	if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = INT8_MIN;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 13668772U;
	uint8_t x288 = 1U;

	t67 = (x285^((x286/x287)%x288));

	if (t67 != 4294967168U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x293 = INT32_MIN;
	uint16_t x294 = UINT16_MAX;
	volatile int32_t x295 = -54;
	static int8_t x296 = -2;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x293^((x294/x295)%x296));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	int8_t x299 = 1;
	static uint16_t x300 = 6967U;

	t69 = (x297^((x298/x299)%x300));

	if (t69 != 4956) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x302 = UINT8_MAX;
	volatile int64_t x303 = -1LL;
	volatile int8_t x304 = INT8_MAX;

	t70 = (x301^((x302/x303)%x304));

	if (t70 != 463589LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MIN;
	static volatile int8_t x306 = -1;
	int8_t x307 = -1;
	volatile uint32_t x308 = UINT32_MAX;

	t71 = (x305^((x306/x307)%x308));

	if (t71 != 2147483649U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 0U;
	static volatile uint16_t x310 = UINT16_MAX;
	int32_t x312 = INT32_MIN;
	int64_t t72 = -2LL;

	t72 = (x309^((x310/x311)%x312));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 16599993133123LLU;
	int64_t x314 = 1655030388LL;
	volatile int64_t x315 = INT64_MIN;

	t73 = (x313^((x314/x315)%x316));

	if (t73 != 16599993133123LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = INT8_MAX;
	static int16_t x318 = INT16_MAX;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = INT16_MIN;

	t74 = (x317^((x318/x319)%x320));

	if (t74 != -130) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = 0U;
	volatile int8_t x323 = INT8_MIN;
	int8_t x324 = -50;
	volatile int32_t t75 = -3335834;

	t75 = (x321^((x322/x323)%x324));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 121;
	uint64_t x326 = 59818321743LLU;
	int8_t x327 = -8;
	static int16_t x328 = INT16_MIN;
	uint64_t t76 = 1LLU;

	t76 = (x325^((x326/x327)%x328));

	if (t76 != 121LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x330 = 8504788290704569LLU;
	static uint32_t x331 = UINT32_MAX;
	static int16_t x332 = -1;
	uint64_t t77 = 6328086019880145LLU;

	t77 = (x329^((x330/x331)%x332));

	if (t77 != 3575600664LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = -1;
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = (x337^((x338/x339)%x340));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x342 = INT16_MIN;
	volatile int64_t x343 = 323998LL;

	t79 = (x341^((x342/x343)%x344));

	if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x346 = INT64_MAX;
	static int8_t x347 = INT8_MIN;
	uint8_t x348 = 38U;

	t80 = (x345^((x346/x347)%x348));

	if (t80 != 32765LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x349 = -1;
	int64_t x350 = -460235515985LL;
	uint32_t x351 = 419042U;
	static int64_t t81 = -24519LL;

	t81 = (x349^((x350/x351)%x352));

	if (t81 != 63LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x353 = INT16_MIN;
	uint64_t x354 = UINT64_MAX;
	static int32_t x355 = -1;
	uint64_t t82 = 161974805339LLU;

	t82 = (x353^((x354/x355)%x356));

	if (t82 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = INT8_MIN;
	volatile uint8_t x358 = 2U;
	volatile uint16_t x360 = 8U;
	uint64_t t83 = 5571467925LLU;

	t83 = (x357^((x358/x359)%x360));

	if (t83 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = UINT64_MAX;
	volatile int8_t x362 = INT8_MIN;
	uint16_t x364 = 137U;
	uint64_t t84 = UINT64_MAX;

	t84 = (x361^((x362/x363)%x364));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = INT64_MAX;
	static uint64_t x367 = 2853LLU;
	volatile uint64_t x368 = 37330198686390LLU;

	t85 = (x365^((x366/x367)%x368));

	if (t85 != 22470784283109LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x369 = 48LL;
	int64_t x370 = INT64_MAX;
	uint64_t x371 = 64835263415LLU;
	volatile int64_t x372 = 25002LL;
	static uint64_t t86 = 7511LLU;

	t86 = (x369^((x370/x371)%x372));

	if (t86 != 22146LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x373 = 2660816895254049LLU;
	int64_t x376 = INT64_MAX;
	volatile uint64_t t87 = 3LLU;

	t87 = (x373^((x374/x375)%x376));

	if (t87 != 2660816895254049LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = 6174611903LL;
	int16_t x378 = INT16_MIN;
	volatile int32_t x380 = 2954;
	int64_t t88 = -885167749718484794LL;

	t88 = (x377^((x378/x379)%x380));

	if (t88 != -6174609513LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x381 = 0U;
	int8_t x382 = INT8_MIN;
	uint64_t x383 = UINT64_MAX;
	static volatile uint8_t x384 = UINT8_MAX;
	uint64_t t89 = 67876606579010095LLU;

	t89 = (x381^((x382/x383)%x384));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x385 = 0;
	int32_t x386 = -1;
	int32_t x387 = -1;
	int32_t x388 = INT32_MIN;
	static int32_t t90 = 47;

	t90 = (x385^((x386/x387)%x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x390 = 13U;
	static uint32_t x392 = 426U;
	static uint32_t t91 = 3641214U;

	t91 = (x389^((x390/x391)%x392));

	if (t91 != 11511U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x393 = 3U;
	static volatile int16_t x394 = INT16_MIN;
	int64_t x395 = -6870LL;
	int8_t x396 = -1;
	static int64_t t92 = 10LL;

	t92 = (x393^((x394/x395)%x396));

	if (t92 != 3LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x397 = 5653302U;
	static int16_t x398 = -1;
	uint32_t t93 = 3U;

	t93 = (x397^((x398/x399)%x400));

	if (t93 != 5653302U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x401 = INT32_MIN;
	static volatile int16_t x402 = -1;
	uint8_t x404 = 75U;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x401^((x402/x403)%x404));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x405 = INT64_MIN;
	static volatile uint16_t x406 = 464U;
	int32_t x407 = 263513862;
	volatile int32_t x408 = -1;
	int64_t t95 = INT64_MIN;

	t95 = (x405^((x406/x407)%x408));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x410 = 1U;
	volatile int8_t x411 = 28;
	uint32_t x412 = UINT32_MAX;
	uint32_t t96 = 0U;

	t96 = (x409^((x410/x411)%x412));

	if (t96 != 5U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MIN;
	int16_t x415 = INT16_MAX;
	volatile int8_t x416 = -1;
	static volatile int64_t t97 = INT64_MIN;

	t97 = (x413^((x414/x415)%x416));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x421 = INT64_MIN;
	static int32_t x422 = -1;
	int16_t x423 = -67;
	static volatile uint8_t x424 = 2U;

	t98 = (x421^((x422/x423)%x424));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x425 = INT64_MIN;
	volatile uint32_t x426 = UINT32_MAX;
	static int64_t t99 = 7870LL;

	t99 = (x425^((x426/x427)%x428));

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

