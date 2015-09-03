#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 3114;
int32_t t1 = 18;
uint64_t x10 = 133935102845LLU;
static uint32_t x20 = UINT32_MAX;
int32_t x23 = INT32_MAX;
volatile int16_t x24 = INT16_MIN;
static volatile int64_t t5 = 0LL;
int16_t x28 = -1;
static int32_t t8 = 25;
volatile int32_t x37 = -1;
uint8_t x44 = UINT8_MAX;
uint16_t x48 = UINT16_MAX;
static int32_t t11 = -10812630;
static int16_t x59 = -13;
int8_t x60 = -45;
uint64_t x61 = 105752LLU;
volatile uint16_t x62 = UINT16_MAX;
int32_t x68 = 13666;
volatile uint32_t t16 = 1577U;
static int64_t x72 = -511LL;
int16_t x77 = -1481;
static int64_t x79 = INT64_MIN;
static uint64_t x80 = 6600406538LLU;
volatile int16_t x85 = INT16_MIN;
uint64_t x86 = 12746196796LLU;
uint64_t x88 = 221LLU;
static volatile uint64_t t21 = 61756511637LLU;
uint32_t x102 = 16403391U;
static int16_t x105 = 66;
static int64_t x110 = INT64_MIN;
uint16_t x113 = 1797U;
static volatile uint16_t x115 = 5112U;
int32_t t28 = INT32_MAX;
int64_t x117 = -1LL;
uint64_t x122 = 3173586947LLU;
volatile int64_t x125 = INT64_MIN;
int32_t x131 = 0;
volatile uint8_t x137 = 12U;
static uint64_t x139 = 13LLU;
volatile uint8_t x146 = 13U;
volatile int64_t x148 = -1LL;
static volatile uint8_t x156 = 11U;
int8_t x159 = INT8_MIN;
int16_t x161 = -5;
int64_t x164 = INT64_MAX;
static volatile int64_t x170 = INT64_MIN;
static int64_t x173 = 565588LL;
static int16_t x179 = INT16_MAX;
uint32_t x180 = 42740U;
static uint32_t t45 = UINT32_MAX;
uint8_t x185 = UINT8_MAX;
int64_t x190 = INT64_MIN;
int8_t x198 = -1;
static int64_t x199 = INT64_MIN;
volatile uint64_t t49 = UINT64_MAX;
int32_t x203 = INT32_MAX;
uint32_t x207 = UINT32_MAX;
static int32_t x217 = INT32_MIN;
int8_t x219 = INT8_MIN;
int64_t x224 = INT64_MIN;
int8_t x227 = 7;
int16_t x233 = -12;
int64_t x236 = -1LL;
static int32_t t59 = 3178;
uint32_t x247 = 611285583U;
volatile int8_t x254 = INT8_MIN;
int16_t x257 = -1;
uint32_t x260 = 216105U;
int16_t x261 = -1;
static volatile int8_t x262 = INT8_MIN;
static uint64_t t65 = UINT64_MAX;
uint64_t x272 = 3705083395LLU;
static int32_t x275 = INT32_MAX;
int32_t t68 = 507;
uint16_t x277 = 23U;
static int32_t x279 = INT32_MIN;
uint64_t x283 = 4033155821654328886LLU;
volatile uint8_t x285 = 52U;
volatile uint16_t x305 = 320U;
uint64_t x313 = UINT64_MAX;
volatile int8_t x316 = -1;
int16_t x317 = -3;
static uint64_t x318 = 504980738038LLU;
static int16_t x321 = -385;
int8_t x324 = INT8_MAX;
int16_t x329 = INT16_MIN;
int32_t t82 = 20;
volatile uint32_t t83 = UINT32_MAX;
uint8_t x340 = UINT8_MAX;
static int32_t t87 = 42603;
int64_t x355 = -1769320128LL;
static int32_t x359 = -102;
static int64_t x361 = INT64_MIN;
volatile int8_t x368 = 5;
volatile int32_t t92 = -48;
uint32_t x378 = UINT32_MAX;
uint32_t x379 = 44U;
static uint8_t x387 = 47U;
volatile int32_t t96 = -29843809;
int16_t x392 = 1891;
int8_t x395 = INT8_MIN;
int32_t x398 = INT32_MAX;


void f0(void) {
	uint32_t x1 = 192069U;
	static volatile int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = -126428178LL;

	t0 = (x1|((x2<=x3)^x4));

	if (t0 != -9223372036854583739LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 1;
	int32_t x7 = -28801;
	volatile uint8_t x8 = 7U;

	t1 = (x5|((x6<=x7)^x8));

	if (t1 != 3119) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = -466;
	static volatile int32_t t2 = 20;

	t2 = (x9|((x10<=x11)^x12));

	if (t2 != -465) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = INT16_MAX;
	uint16_t x15 = 18U;
	volatile int16_t x16 = -61;
	static volatile int32_t t3 = 84940062;

	t3 = (x13|((x14<=x15)^x16));

	if (t3 != -61) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -6;
	int16_t x18 = INT16_MIN;
	volatile int16_t x19 = INT16_MIN;
	volatile uint32_t t4 = 3U;

	t4 = (x17|((x18<=x19)^x20));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	int32_t x22 = -1;

	t5 = (x21|((x22<=x23)^x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = INT32_MIN;
	int32_t t6 = 2603;

	t6 = (x25|((x26<=x27)^x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int64_t x30 = INT64_MIN;
	int32_t x31 = 97081;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x29|((x30<=x31)^x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 31;
	int8_t x34 = -58;
	uint64_t x35 = 64002LLU;
	int8_t x36 = 0;

	t8 = (x33|((x34<=x35)^x36));

	if (t8 != 31) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	static uint8_t x39 = UINT8_MAX;
	int32_t x40 = -1;
	static int32_t t9 = 20142247;

	t9 = (x37|((x38<=x39)^x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MAX;
	int32_t x43 = 94291042;
	static volatile int32_t t10 = 15;

	t10 = (x41|((x42<=x43)^x44));

	if (t10 != -32513) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -4;
	static volatile int8_t x46 = 0;
	volatile int8_t x47 = 0;

	t11 = (x45|((x46<=x47)^x48));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -68583669495087LL;
	volatile int32_t x50 = -1;
	volatile int32_t x51 = 144378;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 124824606LL;

	t12 = (x49|((x50<=x51)^x52));

	if (t12 != -68583669495087LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint16_t x54 = 0U;
	int64_t x55 = -1LL;
	int8_t x56 = -3;
	volatile int32_t t13 = 1307;

	t13 = (x53|((x54<=x55)^x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 19815925476870LL;
	volatile int64_t x58 = 203942039841LL;
	int64_t t14 = -1923123117622398351LL;

	t14 = (x57|((x58<=x59)^x60));

	if (t14 != -41LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x63 = INT32_MIN;
	static int64_t x64 = INT64_MIN;
	volatile uint64_t t15 = 35387074533479758LLU;

	t15 = (x61|((x62<=x63)^x64));

	if (t15 != 9223372036854881560LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 3007990U;
	volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = -11659073;

	t16 = (x65|((x66<=x67)^x68));

	if (t16 != 3012086U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = 13;
	static uint8_t x71 = 127U;
	volatile int64_t t17 = 401LL;

	t17 = (x69|((x70<=x71)^x72));

	if (t17 != -512LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	int32_t x75 = -25;
	static int8_t x76 = -42;
	int32_t t18 = -134571;

	t18 = (x73|((x74<=x75)^x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x78 = 14U;
	volatile uint64_t t19 = 6914226251691099976LLU;

	t19 = (x77|((x78<=x79)^x80));

	if (t19 != 18446744073709551167LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int64_t x82 = 3554614291441400LL;
	uint8_t x83 = 71U;
	static uint32_t x84 = UINT32_MAX;
	static volatile uint32_t t20 = UINT32_MAX;

	t20 = (x81|((x82<=x83)^x84));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x87 = INT16_MAX;

	t21 = (x85|((x86<=x87)^x88));

	if (t21 != 18446744073709519069LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int64_t x90 = -1075225625936198849LL;
	int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	volatile int32_t t22 = 1043030;

	t22 = (x89|((x90<=x91)^x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static int32_t x94 = INT32_MIN;
	static uint32_t x95 = UINT32_MAX;
	int16_t x96 = -1;
	int32_t t23 = -677362;

	t23 = (x93|((x94<=x95)^x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 26;
	int8_t x98 = 0;
	int8_t x99 = INT8_MAX;
	static volatile int32_t x100 = -1;
	int32_t t24 = -36005;

	t24 = (x97|((x98<=x99)^x100));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	static int16_t x104 = -1;
	static volatile int64_t t25 = 208211423702144LL;

	t25 = (x101|((x102<=x103)^x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = INT32_MAX;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = -39234190;

	t26 = (x105|((x106<=x107)^x108));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	static int32_t t27 = -621513043;

	t27 = (x109|((x110<=x111)^x112));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 0;
	int32_t x116 = INT32_MAX;

	t28 = (x113|((x114<=x115)^x116));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = -1;
	volatile int64_t t29 = -2034863057517268878LL;

	t29 = (x117|((x118<=x119)^x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = UINT64_MAX;
	uint64_t x123 = UINT64_MAX;
	uint8_t x124 = 20U;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122<=x123)^x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x126 = 182LL;
	int32_t x127 = 1;
	uint64_t x128 = 5127562150787997642LLU;
	volatile uint64_t t31 = 567141386923111761LLU;

	t31 = (x125|((x126<=x127)^x128));

	if (t31 != 14350934187642773450LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 962;
	volatile int64_t x130 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 12;

	t32 = (x129|((x130<=x131)^x132));

	if (t32 != -31805) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	volatile int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -72;
	int32_t t33 = 5;

	t33 = (x133|((x134<=x135)^x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = 1930;
	volatile int16_t x140 = INT16_MIN;
	static volatile int32_t t34 = 57339595;

	t34 = (x137|((x138<=x139)^x140));

	if (t34 != -32756) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 1;
	static uint16_t x142 = 8U;
	int64_t x143 = INT64_MIN;
	int16_t x144 = 231;
	static int32_t t35 = -7259134;

	t35 = (x141|((x142<=x143)^x144));

	if (t35 != 231) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	volatile int32_t x147 = INT32_MAX;
	volatile int64_t t36 = 2086LL;

	t36 = (x145|((x146<=x147)^x148));

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	uint8_t x150 = UINT8_MAX;
	static int16_t x151 = INT16_MIN;
	int8_t x152 = 1;
	int64_t t37 = INT64_MAX;

	t37 = (x149|((x150<=x151)^x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = 3;
	static volatile int32_t x155 = INT32_MIN;
	volatile int32_t t38 = -3;

	t38 = (x153|((x154<=x155)^x156));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MIN;
	int16_t x160 = -111;
	int32_t t39 = 223429;

	t39 = (x157|((x158<=x159)^x160));

	if (t39 != -112) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = -49603LL;
	int32_t x163 = INT32_MIN;
	int64_t t40 = -8LL;

	t40 = (x161|((x162<=x163)^x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -504;
	uint32_t x166 = 6489U;
	int64_t x167 = INT64_MIN;
	int32_t x168 = -1;
	int32_t t41 = -28602;

	t41 = (x165|((x166<=x167)^x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint8_t x171 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -4188;

	t42 = (x169|((x170<=x171)^x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	static volatile int64_t x175 = 209249118LL;
	uint16_t x176 = 3329U;
	int64_t t43 = -18LL;

	t43 = (x173|((x174<=x175)^x176));

	if (t43 != 568660LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -1;
	int32_t x178 = INT32_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x177|((x178<=x179)^x180));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 3U;
	volatile int64_t x182 = -652468348535LL;
	static int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;

	t45 = (x181|((x182<=x183)^x184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 14896U;
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = 293;
	int32_t t46 = 1026914530;

	t46 = (x185|((x186<=x187)^x188));

	if (t46 != 511) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile int64_t x191 = -1LL;
	uint64_t x192 = 46205891271658793LLU;
	static volatile uint64_t t47 = 120249828LLU;

	t47 = (x189|((x190<=x191)^x192));

	if (t47 != 46205891271658879LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int32_t x194 = INT32_MIN;
	int32_t x195 = -1011467;
	static uint64_t x196 = 848963LLU;
	static volatile uint64_t t48 = 175623842LLU;

	t48 = (x193|((x194<=x195)^x196));

	if (t48 != 849023LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	volatile uint64_t x200 = 1463090809686458576LLU;

	t49 = (x197|((x198<=x199)^x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	volatile int16_t x202 = INT16_MAX;
	volatile int8_t x204 = INT8_MAX;
	int32_t t50 = 7876701;

	t50 = (x201|((x202<=x203)^x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 270U;
	volatile uint64_t x206 = 2LLU;
	int32_t x208 = -1;
	uint32_t t51 = 2468U;

	t51 = (x205|((x206<=x207)^x208));

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 12U;
	volatile int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	static volatile int16_t x212 = INT16_MAX;
	int32_t t52 = 3;

	t52 = (x209|((x210<=x211)^x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -2;
	int8_t x214 = INT8_MAX;
	int16_t x215 = INT16_MIN;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t53 = -233137LL;

	t53 = (x213|((x214<=x215)^x216));

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MAX;
	volatile uint8_t x220 = 1U;
	int32_t t54 = -5990252;

	t54 = (x217|((x218<=x219)^x220));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	int32_t x222 = -1;
	volatile uint64_t x223 = 126728484447849LLU;
	static volatile int64_t t55 = 2251486020263640719LL;

	t55 = (x221|((x222<=x223)^x224));

	if (t55 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = 0;
	uint32_t x226 = UINT32_MAX;
	volatile uint32_t x228 = 130551353U;
	uint32_t t56 = 860U;

	t56 = (x225|((x226<=x227)^x228));

	if (t56 != 130551353U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	static volatile int64_t x230 = 108318281310LL;
	static volatile int32_t x231 = -1405;
	static int32_t x232 = 2639744;
	static int64_t t57 = 240905404LL;

	t57 = (x229|((x230<=x231)^x232));

	if (t57 != -9223372036852136064LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = 1U;
	int32_t x235 = 122796;
	volatile int64_t t58 = -10478464LL;

	t58 = (x233|((x234<=x235)^x236));

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -4;
	int8_t x238 = 1;
	int64_t x239 = -15LL;
	int16_t x240 = INT16_MIN;

	t59 = (x237|((x238<=x239)^x240));

	if (t59 != -4) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = -1;
	int8_t x243 = -11;
	static uint8_t x244 = UINT8_MAX;
	static int32_t t60 = 4;

	t60 = (x241|((x242<=x243)^x244));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = -1;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x245|((x246<=x247)^x248));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 734765;
	static uint32_t x250 = 371865U;
	volatile int8_t x251 = 46;
	static int32_t x252 = -1;
	int32_t t62 = 8171275;

	t62 = (x249|((x250<=x251)^x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = -1;
	static volatile int32_t t63 = 146780;

	t63 = (x253|((x254<=x255)^x256));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = -1;
	static uint32_t t64 = UINT32_MAX;

	t64 = (x257|((x258<=x259)^x260));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x263 = INT8_MIN;
	uint64_t x264 = 26740186994723360LLU;

	t65 = (x261|((x262<=x263)^x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = INT8_MIN;
	int8_t x266 = -1;
	int32_t x267 = INT32_MIN;
	int16_t x268 = -9;
	int32_t t66 = 254334347;

	t66 = (x265|((x266<=x267)^x268));

	if (t66 != -9) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	volatile int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MAX;
	volatile uint64_t t67 = 26962284LLU;

	t67 = (x269|((x270<=x271)^x272));

	if (t67 != 18446744073119667714LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x273 = 223;
	static int32_t x274 = -1;
	int16_t x276 = -1;

	t68 = (x273|((x274<=x275)^x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -1LL;
	uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t69 = UINT64_MAX;

	t69 = (x277|((x278<=x279)^x280));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int64_t x282 = -60741694365583LL;
	int8_t x284 = 14;
	int32_t t70 = 7034;

	t70 = (x281|((x282<=x283)^x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 765U;
	volatile int8_t x287 = -1;
	static uint16_t x288 = 1U;
	int32_t t71 = -27;

	t71 = (x285|((x286<=x287)^x288));

	if (t71 != 53) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x289|((x290<=x291)^x292));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 10U;
	volatile int32_t x294 = 40150725;
	static uint8_t x295 = UINT8_MAX;
	static uint64_t x296 = UINT64_MAX;
	uint64_t t73 = UINT64_MAX;

	t73 = (x293|((x294<=x295)^x296));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 1006U;
	int64_t x298 = 885LL;
	static uint8_t x299 = UINT8_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t74 = 9822;

	t74 = (x297|((x298<=x299)^x300));

	if (t74 != -18) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	uint8_t x302 = 2U;
	uint16_t x303 = 2046U;
	volatile int8_t x304 = 3;
	static int32_t t75 = -14515;

	t75 = (x301|((x302<=x303)^x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = 0;
	uint8_t x307 = UINT8_MAX;
	static int64_t x308 = -1LL;
	static int64_t t76 = -3LL;

	t76 = (x305|((x306<=x307)^x308));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	uint8_t x310 = 1U;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	int64_t t77 = -2540954LL;

	t77 = (x309|((x310<=x311)^x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x313|((x314<=x315)^x316));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = 21892203605307144LL;
	int64_t x320 = INT64_MAX;
	int64_t t79 = -980002023LL;

	t79 = (x317|((x318<=x319)^x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	volatile int32_t t80 = 305;

	t80 = (x321|((x322<=x323)^x324));

	if (t80 != -385) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x325 = 6LL;
	static int8_t x326 = INT8_MAX;
	uint8_t x327 = 28U;
	int8_t x328 = INT8_MIN;
	volatile int64_t t81 = -433LL;

	t81 = (x325|((x326<=x327)^x328));

	if (t81 != -122LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	uint32_t x331 = 5771U;
	int32_t x332 = INT32_MIN;

	t82 = (x329|((x330<=x331)^x332));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = UINT32_MAX;
	static int16_t x334 = -1;
	int64_t x335 = -1LL;
	uint32_t x336 = UINT32_MAX;

	t83 = (x333|((x334<=x335)^x336));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 2U;
	int64_t x338 = 1216989691LL;
	int8_t x339 = -1;
	static volatile int32_t t84 = 8174;

	t84 = (x337|((x338<=x339)^x340));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 76222U;
	volatile uint16_t x342 = 0U;
	uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;
	static uint32_t t85 = 31U;

	t85 = (x341|((x342<=x343)^x344));

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int8_t x346 = 2;
	uint64_t x347 = 58LLU;
	int16_t x348 = 3327;
	volatile int32_t t86 = INT32_MAX;

	t86 = (x345|((x346<=x347)^x348));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MAX;
	static int16_t x351 = INT16_MIN;
	int32_t x352 = 0;

	t87 = (x349|((x350<=x351)^x352));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = 501376386805890LL;
	volatile uint8_t x354 = 1U;
	static int32_t x356 = INT32_MIN;
	int64_t t88 = 67849026915219LL;

	t88 = (x353|((x354<=x355)^x356));

	if (t88 != -915459966LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile uint8_t x358 = UINT8_MAX;
	int32_t x360 = 1;
	int64_t t89 = -1578LL;

	t89 = (x357|((x358<=x359)^x360));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = -1;
	volatile int16_t x363 = -22;
	static int8_t x364 = INT8_MIN;
	static int64_t t90 = 4246222795203LL;

	t90 = (x361|((x362<=x363)^x364));

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = 3386;
	volatile int8_t x367 = INT8_MIN;
	int32_t t91 = -26;

	t91 = (x365|((x366<=x367)^x368));

	if (t91 != -123) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = -1LL;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = -1;

	t92 = (x369|((x370<=x371)^x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 3U;
	uint8_t x375 = UINT8_MAX;
	uint64_t x376 = 3525401562LLU;
	volatile uint64_t t93 = 58774589590361873LLU;

	t93 = (x373|((x374<=x375)^x376));

	if (t93 != 4294967295LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -78438LL;
	volatile uint8_t x380 = UINT8_MAX;
	volatile int64_t t94 = 18424250720258LL;

	t94 = (x377|((x378<=x379)^x380));

	if (t94 != -78337LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = UINT8_MAX;
	static volatile int32_t x382 = INT32_MIN;
	volatile uint8_t x383 = 45U;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 1;

	t95 = (x381|((x382<=x383)^x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 66U;
	int16_t x386 = 232;
	volatile int32_t x388 = 201;

	t96 = (x385|((x386<=x387)^x388));

	if (t96 != 203) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -1LL;
	static int8_t x390 = INT8_MAX;
	static volatile int64_t x391 = INT64_MIN;
	static int64_t t97 = 42502462782980313LL;

	t97 = (x389|((x390<=x391)^x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = 13008983256008997LL;
	static uint8_t x394 = 51U;
	int32_t x396 = -1;
	volatile int64_t t98 = -662588718935LL;

	t98 = (x393|((x394<=x395)^x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	static int8_t x399 = INT8_MIN;
	uint8_t x400 = 10U;
	volatile int32_t t99 = -534874251;

	t99 = (x397|((x398<=x399)^x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

