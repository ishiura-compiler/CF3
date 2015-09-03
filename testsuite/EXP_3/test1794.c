#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
static volatile int64_t t1 = INT64_MIN;
volatile uint8_t x10 = 40U;
volatile int16_t x12 = INT16_MIN;
uint64_t x16 = UINT64_MAX;
uint8_t x27 = UINT8_MAX;
uint32_t x29 = UINT32_MAX;
uint32_t t7 = 7244U;
volatile int8_t x37 = INT8_MIN;
uint64_t t9 = 1909LLU;
volatile int32_t x43 = INT32_MAX;
static int16_t x61 = 197;
int64_t x64 = 8LL;
int16_t x68 = INT16_MIN;
int16_t x70 = INT16_MIN;
int8_t x71 = INT8_MAX;
uint32_t x72 = UINT32_MAX;
static uint32_t x82 = 41U;
volatile int64_t t21 = 117475LL;
uint8_t x89 = 56U;
uint64_t x92 = UINT64_MAX;
int8_t x93 = 8;
uint8_t x99 = 1U;
volatile uint32_t x103 = UINT32_MAX;
volatile int32_t x112 = 316981;
uint64_t x120 = 284566821LLU;
int32_t t32 = 586;
volatile int32_t x134 = -277780;
volatile int64_t x139 = INT64_MIN;
static int16_t x140 = INT16_MIN;
static volatile int64_t x149 = INT64_MIN;
uint64_t x153 = UINT64_MAX;
uint32_t x159 = 164U;
static volatile uint8_t x164 = 1U;
uint8_t x165 = UINT8_MAX;
int16_t x166 = INT16_MIN;
int16_t x174 = 74;
uint16_t x176 = 76U;
static int64_t x178 = -1LL;
volatile int64_t x180 = INT64_MAX;
int16_t x185 = INT16_MIN;
static uint32_t x186 = UINT32_MAX;
volatile uint32_t x187 = 32451238U;
static int16_t x190 = -1;
int64_t x201 = -1LL;
int32_t x207 = INT32_MAX;
static int8_t x219 = INT8_MIN;
int16_t x220 = INT16_MIN;
volatile int64_t x227 = 0LL;
int64_t t57 = -4186814538453546998LL;
int16_t x237 = -1;
int64_t x238 = INT64_MAX;
uint16_t x245 = 2U;
int64_t x248 = INT64_MIN;
volatile int64_t t61 = 991704648LL;
int64_t x252 = 734494322LL;
volatile uint64_t t62 = 1321LLU;
uint64_t t63 = 16749813428LLU;
static uint64_t x257 = UINT64_MAX;
int16_t x263 = 2497;
int64_t x268 = -28424297318871LL;
static int64_t x269 = INT64_MAX;
volatile int16_t x271 = INT16_MAX;
int32_t x272 = 60095209;
volatile int8_t x276 = -1;
volatile uint32_t x283 = 37494U;
int16_t x297 = 0;
static int32_t x307 = 2462;
int8_t x310 = INT8_MIN;
int64_t x313 = 39LL;
int64_t x315 = INT64_MAX;
int64_t x316 = INT64_MIN;
uint32_t t79 = UINT32_MAX;
uint8_t x321 = 5U;
static int8_t x329 = -1;
static int64_t t83 = 1768593845064842041LL;
static uint64_t x339 = UINT64_MAX;
volatile int64_t t85 = 1150997940113224389LL;
static volatile int32_t t87 = -277;
uint16_t x355 = 14250U;
static int32_t x366 = 584;
int32_t x367 = INT32_MIN;
uint16_t x368 = 2150U;
uint16_t x370 = 0U;
int64_t x374 = INT64_MIN;
int64_t x379 = INT64_MAX;
int32_t x382 = INT32_MIN;
volatile int32_t x384 = -1;
static volatile int16_t x385 = INT16_MIN;
int16_t x388 = INT16_MIN;
static volatile int32_t t96 = -35;
uint32_t x394 = 1U;


void f0(void) {
	int32_t x1 = -1;
	int32_t x3 = -6958;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 17094;

	t0 = ((x1==x2)^(x3&x4));

	if (t0 != -7040) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 9197562;
	int64_t x6 = INT64_MIN;
	static int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;

	t1 = ((x5==x6)^(x7&x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = ((x9==x10)^(x11&x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 142U;
	uint16_t x14 = UINT16_MAX;
	volatile int32_t x15 = -13580;
	volatile uint64_t t3 = 3278252505713912303LLU;

	t3 = ((x13==x14)^(x15&x16));

	if (t3 != 18446744073709538036LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MAX;
	int64_t x19 = INT64_MAX;
	int64_t x20 = -1LL;
	int64_t t4 = INT64_MAX;

	t4 = ((x17==x18)^(x19&x20));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 2916;
	volatile uint16_t x22 = UINT16_MAX;
	int8_t x23 = 33;
	uint8_t x24 = 1U;
	volatile int32_t t5 = -107211795;

	t5 = ((x21==x22)^(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int8_t x26 = -1;
	uint64_t x28 = 7LLU;
	static uint64_t t6 = 31LLU;

	t6 = ((x25==x26)^(x27&x28));

	if (t6 != 6LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	static uint32_t x32 = UINT32_MAX;

	t7 = ((x29==x30)^(x31&x32));

	if (t7 != 2147483648U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1U;
	int8_t x34 = INT8_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = 1753LLU;
	volatile uint64_t t8 = 93295541172LLU;

	t8 = ((x33==x34)^(x35&x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -48;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MIN;

	t9 = ((x37==x38)^(x39&x40));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 27U;
	int16_t x42 = INT16_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 919978020;

	t10 = ((x41==x42)^(x43&x44));

	if (t10 != 2147450880) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	int64_t x46 = INT64_MIN;
	uint64_t x47 = 195183276254LLU;
	volatile uint8_t x48 = 11U;
	uint64_t t11 = 3691LLU;

	t11 = ((x45==x46)^(x47&x48));

	if (t11 != 10LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 19513U;
	uint8_t x50 = 12U;
	volatile int32_t x51 = INT32_MIN;
	static uint16_t x52 = 12315U;
	volatile int32_t t12 = -111;

	t12 = ((x49==x50)^(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int8_t x54 = -3;
	static volatile int32_t x55 = -10294;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -4;

	t13 = ((x53==x54)^(x55&x56));

	if (t13 != 74) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = -1;
	static int16_t x59 = INT16_MAX;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 7;

	t14 = ((x57==x58)^(x59&x60));

	if (t14 != 32641) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x62 = 1627216696732882640LLU;
	int16_t x63 = INT16_MIN;
	volatile int64_t t15 = 30284166LL;

	t15 = ((x61==x62)^(x63&x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 29;
	static uint8_t x66 = 15U;
	int32_t x67 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

	t16 = ((x65==x66)^(x67&x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = UINT16_MAX;
	volatile uint32_t t17 = 1U;

	t17 = ((x69==x70)^(x71&x72));

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 1797021LLU;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 764415U;
	uint32_t t18 = 430834U;

	t18 = ((x73==x74)^(x75&x76));

	if (t18 != 764288U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 76U;
	uint16_t x78 = 97U;
	static volatile int16_t x79 = 1;
	int32_t x80 = -643592;
	volatile int32_t t19 = -32669268;

	t19 = ((x77==x78)^(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -4;
	int32_t x83 = INT32_MAX;
	int32_t x84 = 0;
	int32_t t20 = 977;

	t20 = ((x81==x82)^(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -9371LL;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = -1LL;
	static volatile int64_t x88 = 7422LL;

	t21 = ((x85==x86)^(x87&x88));

	if (t21 != 7422LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = -108670LL;
	static volatile int16_t x91 = -1;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x89==x90)^(x91&x92));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 15U;
	int32_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t23 = INT64_MIN;

	t23 = ((x93==x94)^(x95&x96));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	static int64_t x98 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t24 = -42941;

	t24 = ((x97==x98)^(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 2U;
	static int32_t x102 = INT32_MIN;
	uint16_t x104 = 14466U;
	volatile uint32_t t25 = 1032147U;

	t25 = ((x101==x102)^(x103&x104));

	if (t25 != 14466U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x105 = 437;
	uint32_t x106 = 1613299677U;
	static uint64_t x107 = 60LLU;
	static uint8_t x108 = 30U;
	uint64_t t26 = 11967177973822987LLU;

	t26 = ((x105==x106)^(x107&x108));

	if (t26 != 28LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	uint16_t x110 = 18727U;
	int64_t x111 = 0LL;
	int64_t t27 = 3565LL;

	t27 = ((x109==x110)^(x111&x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	volatile int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 1633U;
	uint32_t t28 = 6U;

	t28 = ((x113==x114)^(x115&x116));

	if (t28 != 1536U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	static volatile uint8_t x118 = UINT8_MAX;
	uint8_t x119 = UINT8_MAX;
	uint64_t t29 = 54378LLU;

	t29 = ((x117==x118)^(x119&x120));

	if (t29 != 37LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MAX;
	uint64_t x124 = 236483291190685LLU;
	volatile uint64_t t30 = 93642111222097397LLU;

	t30 = ((x121==x122)^(x123&x124));

	if (t30 != 244389277LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = 35U;
	uint8_t x127 = UINT8_MAX;
	volatile int8_t x128 = INT8_MAX;
	int32_t t31 = -26396025;

	t31 = ((x125==x126)^(x127&x128));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 12389U;
	volatile uint32_t x130 = 30460468U;
	int32_t x131 = -59;
	static int32_t x132 = 6464002;

	t32 = ((x129==x130)^(x131&x132));

	if (t32 != 6464000) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 26227U;
	int16_t x135 = -1;
	volatile int16_t x136 = 1;
	volatile int32_t t33 = 734900;

	t33 = ((x133==x134)^(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint8_t x138 = 28U;
	int64_t t34 = INT64_MIN;

	t34 = ((x137==x138)^(x139&x140));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint16_t x142 = 285U;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	static volatile int32_t t35 = INT32_MIN;

	t35 = ((x141==x142)^(x143&x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	int8_t x147 = 0;
	static uint8_t x148 = 3U;
	int32_t t36 = -206667;

	t36 = ((x145==x146)^(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x150 = INT32_MIN;
	static int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	static int32_t t37 = -3069486;

	t37 = ((x149==x150)^(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = UINT8_MAX;
	uint16_t x155 = 6121U;
	int64_t x156 = 18952LL;
	int64_t t38 = 400995248463548LL;

	t38 = ((x153==x154)^(x155&x156));

	if (t38 != 520LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 2U;
	int32_t x158 = INT32_MIN;
	static int8_t x160 = INT8_MIN;
	uint32_t t39 = 63174U;

	t39 = ((x157==x158)^(x159&x160));

	if (t39 != 128U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -96727471437385145LL;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = 5U;
	static volatile int32_t t40 = -8;

	t40 = ((x161==x162)^(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x167 = 1328U;
	static int32_t x168 = -26504;
	static int32_t t41 = -403600763;

	t41 = ((x165==x166)^(x167&x168));

	if (t41 != 48) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	volatile int64_t x170 = -834613767969000LL;
	uint64_t x171 = 220508889845343LLU;
	volatile int16_t x172 = INT16_MIN;
	uint64_t t42 = 9066LLU;

	t42 = ((x169==x170)^(x171&x172));

	if (t42 != 220508889841664LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int8_t x175 = INT8_MAX;
	int32_t t43 = 2;

	t43 = ((x173==x174)^(x175&x176));

	if (t43 != 76) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 5396LLU;
	static int32_t x179 = INT32_MAX;
	volatile int64_t t44 = -1LL;

	t44 = ((x177==x178)^(x179&x180));

	if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	static int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -1LL;
	int64_t t45 = 4403533041188491184LL;

	t45 = ((x181==x182)^(x183&x184));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x188 = 115U;
	uint32_t t46 = 585171338U;

	t46 = ((x185==x186)^(x187&x188));

	if (t46 != 34U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -1;
	int8_t x191 = 3;
	int64_t x192 = INT64_MAX;
	volatile int64_t t47 = 8505475067LL;

	t47 = ((x189==x190)^(x191&x192));

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MIN;
	static int64_t x194 = -1LL;
	int64_t x195 = INT64_MAX;
	int16_t x196 = -1;
	int64_t t48 = INT64_MAX;

	t48 = ((x193==x194)^(x195&x196));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = 15;
	static volatile uint8_t x199 = 126U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 118479053;

	t49 = ((x197==x198)^(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 4U;
	int8_t x203 = 1;
	uint32_t x204 = 129727135U;
	volatile uint32_t t50 = 2631029U;

	t50 = ((x201==x202)^(x203&x204));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = 7U;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -12689105;

	t51 = ((x205==x206)^(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 1403019LLU;
	static volatile int64_t x210 = 25922867331571292LL;
	int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MAX;
	volatile int64_t t52 = INT64_MAX;

	t52 = ((x209==x210)^(x211&x212));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -7;
	int8_t x214 = -1;
	uint32_t x215 = 14122759U;
	int16_t x216 = -1;
	uint32_t t53 = 698683486U;

	t53 = ((x213==x214)^(x215&x216));

	if (t53 != 14122759U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static uint16_t x218 = UINT16_MAX;
	static int32_t t54 = 342;

	t54 = ((x217==x218)^(x219&x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	volatile int64_t x222 = INT64_MAX;
	volatile int32_t x223 = -25;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = 3U;

	t55 = ((x221==x222)^(x223&x224));

	if (t55 != 4294967271U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = -1;
	int8_t x228 = 18;
	volatile int64_t t56 = -2655845929360575722LL;

	t56 = ((x225==x226)^(x227&x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int8_t x230 = 0;
	int8_t x231 = -26;
	static int64_t x232 = 225559290LL;

	t57 = ((x229==x230)^(x231&x232));

	if (t57 != 225559266LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	static uint8_t x234 = 65U;
	static int32_t x235 = INT32_MAX;
	static uint32_t x236 = UINT32_MAX;
	volatile uint32_t t58 = 22961200U;

	t58 = ((x233==x234)^(x235&x236));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x239 = -1LL;
	volatile int64_t x240 = -76LL;
	static int64_t t59 = 89070603LL;

	t59 = ((x237==x238)^(x239&x240));

	if (t59 != -76LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 31244188U;
	uint16_t x242 = 10U;
	int32_t x243 = -1761;
	int16_t x244 = INT16_MAX;
	int32_t t60 = -14;

	t60 = ((x241==x242)^(x243&x244));

	if (t60 != 31007) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 2U;
	int64_t x247 = INT64_MIN;

	t61 = ((x245==x246)^(x247&x248));

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -106;
	static int32_t x250 = INT32_MAX;
	volatile uint64_t x251 = 1091138LLU;

	t62 = ((x249==x250)^(x251&x252));

	if (t62 != 9794LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = 128U;
	int64_t x254 = -520216401988810684LL;
	uint64_t x255 = 4634LLU;
	int64_t x256 = INT64_MAX;

	t63 = ((x253==x254)^(x255&x256));

	if (t63 != 4634LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 6U;
	volatile int16_t x259 = INT16_MAX;
	static int16_t x260 = 1931;
	static volatile int32_t t64 = 789999272;

	t64 = ((x257==x258)^(x259&x260));

	if (t64 != 1931) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	uint32_t x262 = 20U;
	int32_t x264 = -1;
	int32_t t65 = 1;

	t65 = ((x261==x262)^(x263&x264));

	if (t65 != 2497) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -90;
	volatile int64_t x266 = -30938LL;
	int64_t x267 = INT64_MIN;
	int64_t t66 = INT64_MIN;

	t66 = ((x265==x266)^(x267&x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	volatile int32_t t67 = -35729;

	t67 = ((x269==x270)^(x271&x272));

	if (t67 != 31465) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 214U;
	uint16_t x274 = 104U;
	uint16_t x275 = 55U;
	volatile int32_t t68 = 13;

	t68 = ((x273==x274)^(x275&x276));

	if (t68 != 55) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MIN;
	int32_t x279 = 7663;
	int8_t x280 = -19;
	int32_t t69 = 2733640;

	t69 = ((x277==x278)^(x279&x280));

	if (t69 != 7661) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 1U;
	static volatile int32_t x282 = -1519948;
	volatile uint64_t x284 = UINT64_MAX;
	volatile uint64_t t70 = 5LLU;

	t70 = ((x281==x282)^(x283&x284));

	if (t70 != 37494LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = 5226740163236536LLU;
	volatile int32_t x288 = -1;
	static volatile uint64_t t71 = 1902547460047LLU;

	t71 = ((x285==x286)^(x287&x288));

	if (t71 != 5226740163236536LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int16_t x290 = -4250;
	int16_t x291 = INT16_MIN;
	static volatile uint8_t x292 = 19U;
	int32_t t72 = -1459;

	t72 = ((x289==x290)^(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	static int16_t x296 = -1;
	int32_t t73 = -1402;

	t73 = ((x293==x294)^(x295&x296));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 1U;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MAX;
	volatile int64_t t74 = 14888766209LL;

	t74 = ((x297==x298)^(x299&x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 323496200775564833LLU;
	volatile uint64_t x302 = UINT64_MAX;
	uint16_t x303 = 13U;
	int8_t x304 = 2;
	volatile int32_t t75 = 84;

	t75 = ((x301==x302)^(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -40;
	volatile int8_t x306 = 30;
	volatile int8_t x308 = -28;
	int32_t t76 = 33669;

	t76 = ((x305==x306)^(x307&x308));

	if (t76 != 2436) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 8U;
	int64_t x311 = INT64_MAX;
	int8_t x312 = -6;
	int64_t t77 = 0LL;

	t77 = ((x309==x310)^(x311&x312));

	if (t77 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x314 = INT32_MIN;
	volatile int64_t t78 = -46038LL;

	t78 = ((x313==x314)^(x315&x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 22318U;
	int32_t x318 = 160810;
	volatile uint32_t x319 = UINT32_MAX;
	uint32_t x320 = UINT32_MAX;

	t79 = ((x317==x318)^(x319&x320));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	int16_t x324 = 0;
	volatile int64_t t80 = -1LL;

	t80 = ((x321==x322)^(x323&x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	int8_t x326 = INT8_MIN;
	uint64_t x327 = 173311495614601LLU;
	static uint8_t x328 = UINT8_MAX;
	static volatile uint64_t t81 = 2842961178LLU;

	t81 = ((x325==x326)^(x327&x328));

	if (t81 != 137LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = -1;
	int32_t x331 = INT32_MAX;
	int16_t x332 = 54;
	volatile int32_t t82 = 182228412;

	t82 = ((x329==x330)^(x331&x332));

	if (t82 != 55) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 1365U;
	volatile uint32_t x334 = UINT32_MAX;
	int64_t x335 = 1126397662023386426LL;
	int8_t x336 = -1;

	t83 = ((x333==x334)^(x335&x336));

	if (t83 != 1126397662023386426LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = INT64_MIN;
	int32_t x340 = INT32_MAX;
	uint64_t t84 = 124266908404LLU;

	t84 = ((x337==x338)^(x339&x340));

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -7;
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = -127242308207142LL;
	int64_t x344 = -790049332514LL;

	t85 = ((x341==x342)^(x343&x344));

	if (t85 != -127268380532518LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	static int16_t x347 = INT16_MAX;
	int32_t x348 = -1;
	volatile int32_t t86 = -195595354;

	t86 = ((x345==x346)^(x347&x348));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 48692034249673LLU;
	static int16_t x350 = 8955;
	int8_t x351 = -5;
	int8_t x352 = INT8_MAX;

	t87 = ((x349==x350)^(x351&x352));

	if (t87 != 123) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	uint16_t x354 = 3U;
	int64_t x356 = -1LL;
	int64_t t88 = 43134300229086LL;

	t88 = ((x353==x354)^(x355&x356));

	if (t88 != 14250LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MAX;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	uint32_t t89 = 78934U;

	t89 = ((x357==x358)^(x359&x360));

	if (t89 != 4294967168U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = 12064;
	uint32_t x363 = 7621229U;
	int64_t x364 = 0LL;
	volatile int64_t t90 = -5770505LL;

	t90 = ((x361==x362)^(x363&x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = 958;
	int32_t t91 = 3150;

	t91 = ((x365==x366)^(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = INT32_MIN;
	uint64_t x371 = 663568681723315LLU;
	int64_t x372 = INT64_MAX;
	volatile uint64_t t92 = 86529414549517055LLU;

	t92 = ((x369==x370)^(x371&x372));

	if (t92 != 663568681723315LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int32_t x375 = -21039732;
	static int16_t x376 = 1736;
	static volatile int32_t t93 = -333609119;

	t93 = ((x373==x374)^(x375&x376));

	if (t93 != 1160) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	uint16_t x378 = 23U;
	uint32_t x380 = UINT32_MAX;
	int64_t t94 = 3080376296297170686LL;

	t94 = ((x377==x378)^(x379&x380));

	if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	uint32_t x383 = 0U;
	static uint32_t t95 = 20621909U;

	t95 = ((x381==x382)^(x383&x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = -1LL;
	static uint16_t x387 = 3U;

	t96 = ((x385==x386)^(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 9U;
	static volatile int32_t x390 = -1;
	int16_t x391 = -1;
	volatile int64_t x392 = INT64_MAX;
	volatile int64_t t97 = INT64_MAX;

	t97 = ((x389==x390)^(x391&x392));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 96;
	static int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = ((x393==x394)^(x395&x396));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MIN;
	int64_t t99 = -478934169069LL;

	t99 = ((x397==x398)^(x399&x400));

	if (t99 != 9223372034707292160LL) { NG(); } else { ; }
	
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

