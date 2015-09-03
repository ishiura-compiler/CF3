#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 3;
volatile int16_t x16 = -1;
int8_t x17 = INT8_MIN;
static volatile int16_t x19 = INT16_MAX;
int8_t x20 = -1;
volatile int32_t t3 = -108;
static int32_t x26 = INT32_MIN;
int8_t x27 = INT8_MIN;
int8_t x29 = INT8_MIN;
volatile uint64_t t6 = 960354925157428022LLU;
uint64_t x40 = UINT64_MAX;
volatile int8_t x48 = 4;
uint64_t x49 = UINT64_MAX;
int16_t x50 = INT16_MAX;
uint8_t x52 = UINT8_MAX;
uint64_t t10 = 435241908LLU;
int32_t x60 = -1;
int32_t x61 = INT32_MAX;
uint32_t x64 = UINT32_MAX;
volatile uint8_t x72 = UINT8_MAX;
int64_t x78 = INT64_MAX;
static int64_t t18 = -64785084632LL;
volatile uint64_t x88 = UINT64_MAX;
uint64_t x90 = 74LLU;
static volatile uint64_t t20 = 274395071618579LLU;
volatile int64_t x94 = -2LL;
uint32_t x104 = 2U;
uint8_t x106 = UINT8_MAX;
volatile int8_t x110 = -21;
int16_t x114 = INT16_MIN;
static int64_t x115 = -1LL;
volatile uint32_t t26 = 2718045U;
uint32_t x123 = UINT32_MAX;
uint8_t x127 = UINT8_MAX;
uint32_t x131 = UINT32_MAX;
int16_t x134 = 3;
int16_t x142 = INT16_MIN;
volatile int8_t x149 = INT8_MIN;
static uint64_t x152 = 6LLU;
uint64_t t34 = 23453LLU;
int32_t x157 = -1;
int16_t x158 = INT16_MIN;
static int8_t x159 = INT8_MIN;
volatile int64_t t36 = -72201877774LL;
int32_t x164 = INT32_MIN;
static uint64_t x166 = 1786760539880LLU;
volatile uint64_t t38 = 6674380738961238LLU;
volatile uint32_t x184 = 65557320U;
uint32_t x189 = 45U;
volatile uint8_t x191 = 1U;
uint64_t x194 = 162747908492721978LLU;
int32_t x197 = INT32_MAX;
static int8_t x200 = INT8_MAX;
int16_t x205 = 278;
int16_t x207 = INT16_MIN;
volatile int64_t t48 = 25692166458626896LL;
uint8_t x209 = 0U;
int64_t x211 = -1LL;
volatile int16_t x215 = INT16_MIN;
int16_t x217 = -14288;
int16_t x223 = 859;
int64_t x224 = INT64_MAX;
static int8_t x230 = -1;
int16_t x231 = -83;
int8_t x232 = INT8_MIN;
int32_t t54 = 7;
int32_t x236 = -1;
int8_t x240 = INT8_MIN;
volatile int64_t t57 = 7336335535060LL;
int32_t x245 = -1;
uint8_t x246 = 84U;
volatile int32_t t58 = 5226050;
static volatile uint64_t t59 = UINT64_MAX;
int64_t x253 = -719805404245548813LL;
int32_t x254 = INT32_MIN;
static int32_t x265 = INT32_MAX;
volatile int8_t x272 = -1;
int8_t x276 = -18;
volatile uint32_t t65 = 711U;
volatile int64_t x283 = 1LL;
volatile int32_t x288 = INT32_MIN;
int32_t x295 = -1;
static int64_t x297 = INT64_MIN;
static volatile uint16_t x300 = UINT16_MAX;
volatile int64_t t73 = -36122505850451LL;
int16_t x318 = INT16_MIN;
volatile int8_t x321 = INT8_MIN;
volatile uint32_t x324 = 909614687U;
uint32_t x330 = 3767921U;
static int16_t x337 = INT16_MIN;
int32_t x349 = -1;
static volatile int32_t t83 = 297268;
volatile int32_t x355 = INT32_MIN;
static int16_t x360 = INT16_MIN;
int32_t x361 = INT32_MAX;
static volatile int64_t x367 = -236737LL;
uint8_t x368 = 26U;
int16_t x375 = INT16_MAX;
int32_t x376 = -4549;
static uint8_t x380 = 21U;
volatile int64_t x381 = INT64_MAX;
volatile int64_t x382 = -1LL;
int64_t x388 = 121501LL;
static int64_t x393 = -2LL;
int64_t x397 = 3888161456955LL;
volatile int8_t x402 = INT8_MAX;
int32_t x413 = INT32_MIN;
int64_t x418 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = 3492;
	uint32_t x4 = UINT32_MAX;
	int64_t t0 = -315413575808444LL;

	t0 = (((x1/x2)/x3)^x4);

	if (t0 != 880426193848999LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	volatile int64_t x11 = INT64_MAX;
	int8_t x12 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (((x9/x10)/x11)^x12);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = -1;
	static uint16_t x15 = 15837U;
	int32_t t2 = -74338;

	t2 = (((x13/x14)/x15)^x16);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;

	t3 = (((x17/x18)/x19)^x20);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	int64_t x28 = INT64_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (((x25/x26)/x27)^x28);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x30 = 5;
	static volatile uint64_t x31 = UINT64_MAX;
	uint32_t x32 = 4762U;
	uint64_t t5 = 6LLU;

	t5 = (((x29/x30)/x31)^x32);

	if (t5 != 4762LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 63597417368082797LLU;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = -49;
	int8_t x36 = -9;

	t6 = (((x33/x34)/x35)^x36);

	if (t6 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 0;
	int16_t x38 = -1;
	volatile int8_t x39 = 28;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x37/x38)/x39)^x40);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 17582U;
	uint8_t x42 = 20U;
	uint64_t x43 = 2328632821379185LLU;
	int32_t x44 = -57839704;
	uint64_t t8 = 50678464599LLU;

	t8 = (((x41/x42)/x43)^x44);

	if (t8 != 18446744073651711912LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = 1;
	uint32_t x46 = 386267U;
	static int64_t x47 = -1LL;
	int64_t t9 = 2092205499718822LL;

	t9 = (((x45/x46)/x47)^x48);

	if (t9 != 4LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x51 = 102U;

	t10 = (((x49/x50)/x51)^x52);

	if (t10 != 5519285625820LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = 7;
	static uint64_t x55 = 436103896LLU;
	uint64_t x56 = UINT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = (((x53/x54)/x55)^x56);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 438352317U;
	int32_t x58 = -1;
	int16_t x59 = INT16_MAX;
	uint32_t t12 = UINT32_MAX;

	t12 = (((x57/x58)/x59)^x60);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	int16_t x63 = 3326;
	uint32_t t13 = 420705U;

	t13 = (((x61/x62)/x63)^x64);

	if (t13 != 18U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MIN;
	uint8_t x67 = 5U;
	int16_t x68 = INT16_MIN;
	int64_t t14 = 906124LL;

	t14 = (((x65/x66)/x67)^x68);

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = -1;
	static int64_t x70 = -1LL;
	static volatile uint8_t x71 = 3U;
	int64_t t15 = 6007460070LL;

	t15 = (((x69/x70)/x71)^x72);

	if (t15 != 255LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 481858LL;
	volatile uint8_t x74 = 55U;
	int32_t x75 = INT32_MIN;
	volatile int64_t x76 = -1LL;
	volatile int64_t t16 = -1LL;

	t16 = (((x73/x74)/x75)^x76);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x77 = -1;
	volatile int8_t x79 = INT8_MIN;
	volatile int8_t x80 = INT8_MIN;
	static int64_t t17 = 6693LL;

	t17 = (((x77/x78)/x79)^x80);

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 197U;
	static int32_t x82 = INT32_MAX;
	int64_t x83 = INT64_MIN;
	static volatile int8_t x84 = INT8_MIN;

	t18 = (((x81/x82)/x83)^x84);

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MIN;
	int8_t x86 = -1;
	uint8_t x87 = UINT8_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (((x85/x86)/x87)^x88);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x89 = 15639672U;
	int16_t x91 = 1;
	volatile int32_t x92 = INT32_MIN;

	t20 = (((x89/x90)/x91)^x92);

	if (t20 != 18446744071562279314LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 1753;
	int64_t x95 = INT64_MIN;
	uint16_t x96 = 858U;
	volatile int64_t t21 = 1071250976LL;

	t21 = (((x93/x94)/x95)^x96);

	if (t21 != 858LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = -1;
	static uint64_t x102 = 6LLU;
	int64_t x103 = -1LL;
	uint64_t t22 = 138489176925237078LLU;

	t22 = (((x101/x102)/x103)^x104);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 2U;
	int32_t x107 = INT32_MIN;
	static volatile uint32_t x108 = UINT32_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (((x105/x106)/x107)^x108);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 104U;
	int32_t x111 = INT32_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t24 = 11429426;

	t24 = (((x109/x110)/x111)^x112);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = -1;
	int64_t x116 = INT64_MIN;
	int64_t t25 = INT64_MIN;

	t25 = (((x113/x114)/x115)^x116);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x117 = 8102U;
	volatile uint8_t x118 = 1U;
	uint16_t x119 = 1265U;
	uint8_t x120 = 22U;

	t26 = (((x117/x118)/x119)^x120);

	if (t26 != 16U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	uint64_t x122 = 887LLU;
	int64_t x124 = -1LL;
	uint64_t t27 = 6748116559455LLU;

	t27 = (((x121/x122)/x123)^x124);

	if (t27 != 18446744073704709488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 0U;
	uint64_t x126 = UINT64_MAX;
	static int8_t x128 = -1;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (((x125/x126)/x127)^x128);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t x130 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	int64_t t29 = -1427784811LL;

	t29 = (((x129/x130)/x131)^x132);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t30 = 362639562;

	t30 = (((x133/x134)/x135)^x136);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	int16_t x138 = INT16_MAX;
	static uint32_t x139 = 199U;
	int64_t x140 = -1LL;
	int64_t t31 = -872LL;

	t31 = (((x137/x138)/x139)^x140);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 3U;
	static int16_t x143 = INT16_MIN;
	volatile int8_t x144 = 34;
	int32_t t32 = 32568;

	t32 = (((x141/x142)/x143)^x144);

	if (t32 != 34) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -3767;
	int64_t x146 = INT64_MIN;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = 5103459LL;
	int64_t t33 = 0LL;

	t33 = (((x145/x146)/x147)^x148);

	if (t33 != 5103459LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MAX;

	t34 = (((x149/x150)/x151)^x152);

	if (t34 != 6LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 14474;
	int32_t x154 = 11230167;
	uint64_t x155 = 84759LLU;
	int64_t x156 = 539130050678210LL;
	uint64_t t35 = 48409628939745786LLU;

	t35 = (((x153/x154)/x155)^x156);

	if (t35 != 539130050678210LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x160 = -5460837178783LL;

	t36 = (((x157/x158)/x159)^x160);

	if (t36 != -5460837178783LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = -1LL;
	int64_t x163 = INT64_MAX;
	volatile int64_t t37 = -3433988350281LL;

	t37 = (((x161/x162)/x163)^x164);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x165 = 0U;
	volatile uint16_t x167 = 1U;
	static volatile int64_t x168 = 442076051903765LL;

	t38 = (((x165/x166)/x167)^x168);

	if (t38 != 442076051903765LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x169 = 124365311496LLU;
	volatile int32_t x170 = 246;
	uint16_t x171 = 27U;
	int8_t x172 = INT8_MIN;
	static uint64_t t39 = 1456426780LLU;

	t39 = (((x169/x170)/x171)^x172);

	if (t39 != 18446744073690827627LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	static uint8_t x174 = UINT8_MAX;
	volatile int16_t x175 = 12693;
	int16_t x176 = INT16_MIN;
	volatile int32_t t40 = 7;

	t40 = (((x173/x174)/x175)^x176);

	if (t40 != 32105) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x177 = INT32_MIN;
	static volatile int32_t x178 = INT32_MAX;
	int16_t x179 = 7056;
	int32_t x180 = INT32_MIN;
	volatile int32_t t41 = INT32_MIN;

	t41 = (((x177/x178)/x179)^x180);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	static uint64_t t42 = 2603402024708676LLU;

	t42 = (((x181/x182)/x183)^x184);

	if (t42 != 65557320LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = 3374;
	int32_t t43 = -3;

	t43 = (((x185/x186)/x187)^x188);

	if (t43 != 3374) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x190 = -1;
	static int64_t x192 = INT64_MIN;
	static volatile int64_t t44 = INT64_MIN;

	t44 = (((x189/x190)/x191)^x192);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -14499837;
	static int16_t x195 = INT16_MAX;
	static int8_t x196 = INT8_MIN;
	static volatile uint64_t t45 = 1018721LLU;

	t45 = (((x193/x194)/x195)^x196);

	if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = INT64_MIN;
	int8_t x199 = -50;
	int64_t t46 = -7148912710LL;

	t46 = (((x197/x198)/x199)^x200);

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -15;
	int8_t x202 = -63;
	volatile int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t47 = -48744823;

	t47 = (((x201/x202)/x203)^x204);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x206 = 4356233108725800LL;
	int32_t x208 = INT32_MIN;

	t48 = (((x205/x206)/x207)^x208);

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = INT64_MAX;
	static volatile int8_t x212 = 11;
	static volatile int64_t t49 = -1649603584144546523LL;

	t49 = (((x209/x210)/x211)^x212);

	if (t49 != 11LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = 995;
	static volatile uint16_t x214 = UINT16_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t50 = 41660;

	t50 = (((x213/x214)/x215)^x216);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x218 = 779U;
	static volatile uint32_t x219 = 90U;
	int64_t x220 = -8861552748875152LL;
	static volatile int64_t t51 = -485348LL;

	t51 = (((x217/x218)/x219)^x220);

	if (t51 != -8861552748896964LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 62U;
	int32_t x222 = INT32_MIN;
	volatile int64_t t52 = INT64_MAX;

	t52 = (((x221/x222)/x223)^x224);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 118230U;
	static int8_t x226 = INT8_MIN;
	uint8_t x227 = 1U;
	uint8_t x228 = 7U;
	volatile uint32_t t53 = 60066143U;

	t53 = (((x225/x226)/x227)^x228);

	if (t53 != 7U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = 7U;

	t54 = (((x229/x230)/x231)^x232);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MIN;
	uint16_t x235 = 2123U;
	volatile int64_t t55 = -250LL;

	t55 = (((x233/x234)/x235)^x236);

	if (t55 != -33941400865723LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x237 = 51840;
	int8_t x238 = -18;
	int32_t x239 = -1;
	static int32_t t56 = 43;

	t56 = (((x237/x238)/x239)^x240);

	if (t56 != -2880) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = 42085425LL;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;

	t57 = (((x241/x242)/x243)^x244);

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x247 = 93U;
	uint8_t x248 = 1U;

	t58 = (((x245/x246)/x247)^x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x249 = 484U;
	volatile uint32_t x250 = 4864U;
	volatile int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;

	t59 = (((x249/x250)/x251)^x252);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x255 = UINT16_MAX;
	static uint32_t x256 = 6U;
	int64_t t60 = -419725492160676102LL;

	t60 = (((x253/x254)/x255)^x256);

	if (t60 != 5116LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MIN;
	int32_t x259 = -18379315;
	int64_t x260 = -6336078467LL;
	volatile int64_t t61 = 1069037959748LL;

	t61 = (((x257/x258)/x259)^x260);

	if (t61 != -6336078467LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = -129902LL;
	volatile int16_t x262 = -14296;
	int64_t x263 = INT64_MIN;
	volatile int16_t x264 = INT16_MIN;
	int64_t t62 = -71LL;

	t62 = (((x261/x262)/x263)^x264);

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x266 = INT8_MAX;
	int64_t x267 = -1LL;
	static volatile uint16_t x268 = 648U;
	int64_t t63 = 7426LL;

	t63 = (((x265/x266)/x267)^x268);

	if (t63 != -16909968LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = -2;
	volatile int8_t x271 = -55;
	int32_t t64 = -5971;

	t64 = (((x269/x270)/x271)^x272);

	if (t64 != 19522577) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x273 = INT16_MIN;
	uint32_t x274 = 2U;
	static int16_t x275 = -1;

	t65 = (((x273/x274)/x275)^x276);

	if (t65 != 4294967278U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int32_t x278 = INT32_MIN;
	static int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (((x277/x278)/x279)^x280);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	static int16_t x284 = INT16_MAX;
	int64_t t67 = -8619655152949153LL;

	t67 = (((x281/x282)/x283)^x284);

	if (t67 != 32766LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = -1;
	int32_t x287 = -1;
	int32_t t68 = 1;

	t68 = (((x285/x286)/x287)^x288);

	if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int64_t x291 = 7108LL;
	static int64_t x292 = INT64_MIN;
	static volatile int64_t t69 = INT64_MIN;

	t69 = (((x289/x290)/x291)^x292);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 7807431942381416450LLU;
	static int32_t x294 = -24;
	static int8_t x296 = INT8_MIN;
	static uint64_t t70 = 530339800429555865LLU;

	t70 = (((x293/x294)/x295)^x296);

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x298 = 31LLU;
	uint32_t x299 = UINT32_MAX;
	uint64_t t71 = 1482170843594312LLU;

	t71 = (((x297/x298)/x299)^x300);

	if (t71 != 69334973LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = 75985296;
	static uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile uint32_t x308 = 4U;
	uint32_t t72 = 32193U;

	t72 = (((x305/x306)/x307)^x308);

	if (t72 != 4294967283U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x309 = -1LL;
	static uint8_t x310 = 7U;
	int8_t x311 = INT8_MIN;
	int16_t x312 = 1917;

	t73 = (((x309/x310)/x311)^x312);

	if (t73 != 1917LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = 1LL;
	volatile uint8_t x314 = 16U;
	static int8_t x315 = INT8_MIN;
	volatile uint32_t x316 = 37U;
	static int64_t t74 = -105205719337547612LL;

	t74 = (((x313/x314)/x315)^x316);

	if (t74 != 37LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x319 = 898U;
	uint64_t x320 = 12025LLU;
	volatile uint64_t t75 = 174881598LLU;

	t75 = (((x317/x318)/x319)^x320);

	if (t75 != 12025LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x322 = 290;
	int32_t x323 = -1;
	volatile uint32_t t76 = 50U;

	t76 = (((x321/x322)/x323)^x324);

	if (t76 != 909614687U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MAX;
	static uint64_t x326 = 111LLU;
	uint8_t x327 = UINT8_MAX;
	static int32_t x328 = INT32_MIN;
	volatile uint64_t t77 = 1177721LLU;

	t77 = (((x325/x326)/x327)^x328);

	if (t77 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int32_t x331 = -150;
	uint64_t x332 = 41188LLU;
	uint64_t t78 = 182266492LLU;

	t78 = (((x329/x330)/x331)^x332);

	if (t78 != 41188LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x333 = INT64_MAX;
	int32_t x334 = INT32_MAX;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	volatile int64_t t79 = 31267152LL;

	t79 = (((x333/x334)/x335)^x336);

	if (t79 != 131071LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = 246282774U;
	uint32_t t80 = 8499U;

	t80 = (((x337/x338)/x339)^x340);

	if (t80 != 246282774U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x341 = 8;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = INT16_MAX;
	volatile int16_t x344 = 1;
	int32_t t81 = 41954129;

	t81 = (((x341/x342)/x343)^x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x346 = -4;
	volatile int16_t x347 = INT16_MIN;
	int8_t x348 = 6;
	volatile int32_t t82 = -186;

	t82 = (((x345/x346)/x347)^x348);

	if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x350 = -4;
	uint16_t x351 = 310U;
	int32_t x352 = 69272;

	t83 = (((x349/x350)/x351)^x352);

	if (t83 != 69272) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -1;
	uint32_t x354 = 29U;
	volatile int32_t x356 = INT32_MAX;
	uint32_t t84 = 83U;

	t84 = (((x353/x354)/x355)^x356);

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = -1;
	uint32_t x358 = 15U;
	uint32_t x359 = 3372U;
	static uint32_t t85 = 160622733U;

	t85 = (((x357/x358)/x359)^x360);

	if (t85 != 4294888370U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = -1;
	static int64_t x363 = -2501260992LL;
	volatile int16_t x364 = -102;
	static volatile int64_t t86 = -677123LL;

	t86 = (((x361/x362)/x363)^x364);

	if (t86 != -102LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x365 = 9407U;
	uint32_t x366 = 4024U;
	int64_t t87 = -612464631320584LL;

	t87 = (((x365/x366)/x367)^x368);

	if (t87 != 26LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	static volatile int64_t x370 = INT64_MIN;
	uint64_t x371 = 1634888618177170142LLU;
	volatile uint8_t x372 = 85U;
	volatile uint64_t t88 = 112443982904697LLU;

	t88 = (((x369/x370)/x371)^x372);

	if (t88 != 85LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x373 = -1;
	int8_t x374 = -1;
	int32_t t89 = 67987;

	t89 = (((x373/x374)/x375)^x376);

	if (t89 != -4549) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = 3811U;
	int8_t x379 = INT8_MIN;
	volatile int64_t t90 = -13218899960762LL;

	t90 = (((x377/x378)/x379)^x380);

	if (t90 != 18907791665664LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x383 = -747294LL;
	static uint64_t x384 = UINT64_MAX;
	volatile uint64_t t91 = 3844948089LLU;

	t91 = (((x381/x382)/x383)^x384);

	if (t91 != 18446731731348932027LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = 1612LL;
	int64_t x386 = 1695282468LL;
	volatile int8_t x387 = 1;
	volatile int64_t t92 = -1685821978LL;

	t92 = (((x385/x386)/x387)^x388);

	if (t92 != 121501LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = UINT8_MAX;
	int64_t x390 = INT64_MIN;
	volatile uint64_t x391 = 1701962LLU;
	int32_t x392 = INT32_MIN;
	volatile uint64_t t93 = 3LLU;

	t93 = (((x389/x390)/x391)^x392);

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = -2LL;
	int8_t x395 = INT8_MAX;
	static uint8_t x396 = 105U;
	static int64_t t94 = -231115595LL;

	t94 = (((x393/x394)/x395)^x396);

	if (t94 != 105LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int64_t t95 = -2880951865649410LL;

	t95 = (((x397/x398)/x399)^x400);

	if (t95 != -4294965487LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	static int16_t x403 = -9;
	static uint64_t x404 = 78478LLU;
	uint64_t t96 = 478098LLU;

	t96 = (((x401/x402)/x403)^x404);

	if (t96 != 78478LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 0U;
	int16_t x406 = -1;
	static int64_t x407 = INT64_MAX;
	int16_t x408 = -1;
	int64_t t97 = -1719LL;

	t97 = (((x405/x406)/x407)^x408);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x414 = -36;
	int16_t x415 = -1;
	volatile uint8_t x416 = UINT8_MAX;
	int32_t t98 = 44;

	t98 = (((x413/x414)/x415)^x416);

	if (t98 != -59652126) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -1;
	int8_t x419 = INT8_MAX;
	static int64_t x420 = -26LL;
	volatile int64_t t99 = 16290378LL;

	t99 = (((x417/x418)/x419)^x420);

	if (t99 != -26LL) { NG(); } else { ; }
	
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

