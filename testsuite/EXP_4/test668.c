#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -55;
int16_t x4 = INT16_MAX;
uint64_t x7 = 35231058LLU;
int8_t x8 = -1;
uint64_t t1 = 79032LLU;
uint32_t x11 = UINT32_MAX;
int64_t x15 = INT64_MAX;
int32_t x16 = -10327;
int64_t t3 = -41858078353LL;
int32_t x23 = INT32_MAX;
uint8_t x26 = 3U;
int8_t x28 = INT8_MIN;
int16_t x29 = INT16_MAX;
int64_t x30 = -6909007LL;
int8_t x32 = INT8_MAX;
uint64_t x37 = 2609178798LLU;
uint64_t t10 = 14615204LLU;
uint16_t x45 = 132U;
uint64_t x48 = 823171606849753LLU;
int16_t x56 = -1;
int32_t x59 = 116291773;
static uint8_t x62 = 2U;
volatile int32_t t15 = -387;
volatile uint32_t x71 = 9790781U;
volatile uint64_t t17 = 4533313465529LLU;
int32_t x76 = -1;
int16_t x77 = INT16_MIN;
int16_t x79 = INT16_MAX;
int8_t x83 = INT8_MAX;
int8_t x87 = -24;
static int8_t x88 = -1;
static volatile uint64_t t21 = 166841002LLU;
int32_t t22 = 7997;
uint64_t x98 = UINT64_MAX;
int8_t x99 = INT8_MAX;
int16_t x112 = -3;
int16_t x119 = 356;
uint64_t x120 = 1311644240793LLU;
int8_t x123 = -1;
int64_t x127 = INT64_MAX;
uint8_t x131 = 67U;
static volatile uint64_t x134 = UINT64_MAX;
int16_t x152 = -4;
uint32_t t37 = 31U;
int32_t x161 = INT32_MAX;
int64_t x167 = INT64_MIN;
static int64_t x173 = 1720064236908924LL;
static uint8_t x174 = 47U;
static volatile uint32_t x184 = 121779U;
uint32_t t45 = 375806610U;
uint16_t x189 = 201U;
int8_t x197 = -1;
volatile int16_t x210 = INT16_MIN;
volatile int64_t t51 = 1198LL;
int32_t t52 = -56;
int16_t x220 = 14602;
int64_t x223 = INT64_MIN;
uint8_t x230 = 117U;
volatile int16_t x236 = INT16_MIN;
uint64_t x239 = UINT64_MAX;
uint8_t x241 = 1U;
int16_t x244 = -1018;
volatile uint64_t x245 = 1913083795LLU;
int64_t x246 = 299LL;
int8_t x249 = -1;
int32_t t60 = 149001467;
int64_t t63 = 1631033199286LL;
int16_t x266 = -146;
static int16_t x278 = INT16_MIN;
static uint32_t x279 = 446U;
volatile int32_t x282 = -1;
volatile int64_t t68 = 865128LL;
int8_t x285 = 1;
uint16_t x302 = 22819U;
volatile int64_t x313 = INT64_MIN;
volatile int16_t x315 = 65;
int64_t x316 = -1LL;
int32_t t77 = -1277973;
static uint16_t x321 = 15761U;
int64_t x323 = 23449285194LL;
int64_t x332 = INT64_MIN;
volatile int64_t t79 = 83542686494089LL;
int16_t x335 = INT16_MIN;
int64_t t80 = 348373291630456LL;
int64_t x337 = -1LL;
int64_t x339 = INT64_MIN;
int8_t x342 = INT8_MIN;
volatile int32_t t82 = 13;
static int32_t x351 = -4063486;
volatile uint32_t t84 = 36U;
static int32_t x353 = -15506559;
uint32_t x364 = 6094740U;
volatile int8_t x367 = INT8_MAX;
int32_t t88 = 6;
static int8_t x371 = 1;
uint64_t t90 = 5466583LLU;
static int16_t x382 = INT16_MAX;
uint64_t x385 = UINT64_MAX;
static volatile int32_t x388 = -9646679;
volatile uint32_t x390 = UINT32_MAX;
static int16_t x391 = -1;
volatile uint64_t t96 = 598434794258812LLU;
int16_t x405 = INT16_MAX;
volatile uint64_t x408 = 64277815415LLU;
static volatile int32_t x410 = 7000;
volatile int32_t x411 = -1;
uint32_t t98 = 45286U;
int64_t x413 = INT64_MAX;


void f0(void) {
	uint64_t x2 = 4578021LLU;
	static uint16_t x3 = 11605U;
	uint64_t t0 = 934022481LLU;

	t0 = (x1%(x2^(x3/x4)));

	if (t0 != 3336945LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 1830948LLU;

	t1 = (x5%(x6^(x7/x8)));

	if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1075688177378792213LL;
	static volatile uint32_t x10 = 482085137U;
	volatile int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 4219938175927886LL;

	t2 = (x9%(x10^(x11/x12)));

	if (t2 != -170167568LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint8_t x14 = 1U;

	t3 = (x13%(x14^(x15/x16)));

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	int64_t x18 = 3009346387LL;
	int32_t x19 = INT32_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -871464534996118LL;

	t4 = (x17%(x18^(x19/x20)));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 16337;
	int8_t x22 = -1;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 200767744;

	t5 = (x21%(x22^(x23/x24)));

	if (t5 != 16337) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	static uint32_t x27 = 2923813U;
	uint32_t t6 = 5U;

	t6 = (x25%(x26^(x27/x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x31 = INT16_MIN;
	static int64_t t7 = 168178LL;

	t7 = (x29%(x30^(x31/x32)));

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	int8_t x35 = -34;
	static volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 5340U;

	t8 = (x33%(x34^(x35/x36)));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 134726988225LLU;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = -1;
	volatile uint64_t t9 = 462046293860640LLU;

	t9 = (x37%(x38^(x39/x40)));

	if (t9 != 2609178798LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 32384714LLU;
	int16_t x42 = INT16_MIN;
	int16_t x43 = 0;
	int32_t x44 = INT32_MIN;

	t10 = (x41%(x42^(x43/x44)));

	if (t10 != 32384714LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = INT8_MIN;
	volatile int16_t x47 = -6240;
	uint64_t t11 = 1487246135LLU;

	t11 = (x45%(x46^(x47/x48)));

	if (t11 != 132LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	uint16_t x50 = 91U;
	volatile int16_t x51 = 227;
	int32_t x52 = 20573;
	int64_t t12 = -3781957LL;

	t12 = (x49%(x50^(x51/x52)));

	if (t12 != -8LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	uint8_t x54 = 1U;
	volatile int16_t x55 = INT16_MIN;
	int32_t t13 = 66;

	t13 = (x53%(x54^(x55/x56)));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MAX;
	static uint16_t x60 = 9U;
	volatile int64_t t14 = 643944949LL;

	t14 = (x57%(x58^(x59/x60)));

	if (t14 != 12921308LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MIN;
	int16_t x63 = 1;
	static volatile int8_t x64 = INT8_MIN;

	t15 = (x61%(x62^(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MIN;
	uint32_t t16 = 6709U;

	t16 = (x65%(x66^(x67/x68)));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static int32_t x70 = INT32_MIN;
	uint64_t x72 = 15LLU;

	t17 = (x69%(x70^(x71/x72)));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint16_t x74 = 187U;
	volatile int64_t x75 = -3LL;
	int64_t t18 = 14648LL;

	t18 = (x73%(x74^(x75/x76)));

	if (t18 != 31LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x78 = 14269;
	int32_t x80 = 176090045;
	int32_t t19 = 79;

	t19 = (x77%(x78^(x79/x80)));

	if (t19 != -4230) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 55222676226720056LL;
	static int64_t x82 = -1136LL;
	volatile int32_t x84 = 22180345;
	int64_t t20 = 935295664687LL;

	t20 = (x81%(x82^(x83/x84)));

	if (t20 != 904LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 4300669267220LLU;
	int32_t x86 = INT32_MIN;

	t21 = (x85%(x86^(x87/x88)));

	if (t21 != 4300669267220LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -54;

	t22 = (x93%(x94^(x95/x96)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 7;
	static uint64_t x100 = 581LLU;
	volatile uint64_t t23 = 210028631603748LLU;

	t23 = (x97%(x98^(x99/x100)));

	if (t23 != 7LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = 1810968LL;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 8287U;
	int8_t x104 = -1;
	static int64_t t24 = 65091656LL;

	t24 = (x101%(x102^(x103/x104)));

	if (t24 != 1468LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -61727;
	volatile int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;
	int64_t t25 = 243123543016475LL;

	t25 = (x105%(x106^(x107/x108)));

	if (t25 != -61727LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MAX;
	static int32_t x111 = -1;
	volatile int64_t t26 = -2492759947308641LL;

	t26 = (x109%(x110^(x111/x112)));

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = 127;
	volatile uint32_t x115 = 900499772U;
	uint16_t x116 = 1192U;
	uint32_t t27 = 132U;

	t27 = (x113%(x114^(x115/x116)));

	if (t27 != 77615U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = -1;
	uint64_t t28 = 173934490LLU;

	t28 = (x117%(x118^(x119/x120)));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = 1U;
	int32_t x122 = INT32_MAX;
	int64_t x124 = INT64_MAX;
	int64_t t29 = -2465099LL;

	t29 = (x121%(x122^(x123/x124)));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MAX;
	int8_t x126 = -1;
	int32_t x128 = INT32_MAX;
	int64_t t30 = -33584187LL;

	t30 = (x125%(x126^(x127/x128)));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = -1;
	static volatile int16_t x130 = -1;
	int16_t x132 = -1;
	volatile int32_t t31 = 1;

	t31 = (x129%(x130^(x131/x132)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 0U;
	static int8_t x135 = INT8_MIN;
	int16_t x136 = -1;
	uint64_t t32 = 187270634659735LLU;

	t32 = (x133%(x134^(x135/x136)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 20440U;
	uint8_t x138 = 65U;
	int32_t x139 = 422766399;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t33 = 7580264U;

	t33 = (x137%(x138^(x139/x140)));

	if (t33 != 30U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	uint64_t x142 = UINT64_MAX;
	volatile int32_t x143 = -2;
	volatile int8_t x144 = INT8_MIN;
	volatile uint64_t t34 = 6895LLU;

	t34 = (x141%(x142^(x143/x144)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	static int64_t x146 = INT64_MAX;
	int64_t x147 = 112504LL;
	uint16_t x148 = 214U;
	volatile int64_t t35 = -1068228893314078LL;

	t35 = (x145%(x146^(x147/x148)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -1;
	volatile uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = INT32_MIN;
	int32_t t36 = 117;

	t36 = (x149%(x150^(x151/x152)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = 173;
	int8_t x154 = INT8_MIN;
	static int32_t x155 = -1;
	volatile uint32_t x156 = UINT32_MAX;

	t37 = (x153%(x154^(x155/x156)));

	if (t37 != 173U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x157 = 0LLU;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MAX;
	uint64_t t38 = 39065687910LLU;

	t38 = (x157%(x158^(x159/x160)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t39 = 8770306915LLU;

	t39 = (x161%(x162^(x163/x164)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = 64457315;
	static int16_t x166 = -1;
	int32_t x168 = INT32_MAX;
	int64_t t40 = 62634735017LL;

	t40 = (x165%(x166^(x167/x168)));

	if (t40 != 64457315LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MAX;
	int8_t x171 = -5;
	uint64_t x172 = 2LLU;
	volatile uint64_t t41 = 325339396LLU;

	t41 = (x169%(x170^(x171/x172)));

	if (t41 != 9223372036854743166LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x175 = -3;
	int32_t x176 = -157584453;
	volatile int64_t t42 = 5874569LL;

	t42 = (x173%(x174^(x175/x176)));

	if (t42 != 6LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	static int64_t t43 = -84606269LL;

	t43 = (x177%(x178^(x179/x180)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 9U;
	int8_t x182 = -1;
	static volatile int64_t x183 = INT64_MAX;
	static int64_t t44 = -15LL;

	t44 = (x181%(x182^(x183/x184)));

	if (t44 != 9LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	uint32_t x186 = 12261U;
	uint8_t x187 = 10U;
	uint16_t x188 = UINT16_MAX;

	t45 = (x185%(x186^(x187/x188)));

	if (t45 != 6281U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x190 = 666527898;
	int8_t x191 = -1;
	static int8_t x192 = -4;
	int32_t t46 = 1259513;

	t46 = (x189%(x190^(x191/x192)));

	if (t46 != 201) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 9U;
	volatile uint32_t x194 = UINT32_MAX;
	volatile uint8_t x195 = UINT8_MAX;
	uint64_t x196 = 148660378801701465LLU;
	volatile uint64_t t47 = 26880740959040LLU;

	t47 = (x193%(x194^(x195/x196)));

	if (t47 != 9LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x198 = INT64_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile uint8_t x200 = UINT8_MAX;
	uint64_t t48 = 5LLU;

	t48 = (x197%(x198^(x199/x200)));

	if (t48 != 144680345676153347LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MAX;
	uint32_t x204 = 2791U;
	volatile uint32_t t49 = 4603U;

	t49 = (x201%(x202^(x203/x204)));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x205 = UINT32_MAX;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = -1LL;
	static volatile int16_t x208 = 1261;
	int64_t t50 = -4686366LL;

	t50 = (x205%(x206^(x207/x208)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MAX;
	int8_t x211 = -24;
	static int64_t x212 = INT64_MAX;

	t51 = (x209%(x210^(x211/x212)));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x213 = 1645U;
	int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MAX;
	uint16_t x216 = 15U;

	t52 = (x213%(x214^(x215/x216)));

	if (t52 != 1645) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -1;
	int64_t x218 = INT64_MIN;
	volatile int64_t x219 = INT64_MAX;
	int64_t t53 = 0LL;

	t53 = (x217%(x218^(x219/x220)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MAX;
	uint64_t x222 = 1LLU;
	int8_t x224 = INT8_MAX;
	uint64_t t54 = 6785709369054221LLU;

	t54 = (x221%(x222^(x223/x224)));

	if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x229 = INT32_MIN;
	uint32_t x231 = 24U;
	uint16_t x232 = 22652U;
	uint32_t t55 = 5335671U;

	t55 = (x229%(x230^(x231/x232)));

	if (t55 != 11U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = 31;
	static int8_t x235 = INT8_MAX;
	volatile int32_t t56 = -136477;

	t56 = (x233%(x234^(x235/x236)));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 2254224U;
	static int32_t x238 = -1;
	static uint8_t x240 = UINT8_MAX;
	volatile uint64_t t57 = 16534505498955524LLU;

	t57 = (x237%(x238^(x239/x240)));

	if (t57 != 2254224LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x242 = 9722LLU;
	uint8_t x243 = 3U;
	volatile uint64_t t58 = 3535LLU;

	t58 = (x241%(x242^(x243/x244)));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = 300LL;
	volatile uint64_t t59 = 26331149858LLU;

	t59 = (x245%(x246^(x247/x248)));

	if (t59 != 1913083795LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	int8_t x252 = -1;

	t60 = (x249%(x250^(x251/x252)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	volatile uint8_t x254 = UINT8_MAX;
	static uint32_t x255 = 981490U;
	volatile uint16_t x256 = UINT16_MAX;
	volatile uint32_t t61 = 126444U;

	t61 = (x253%(x254^(x255/x256)));

	if (t61 != 14U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = -1;
	volatile uint64_t x258 = 30915049491702394LLU;
	static int8_t x259 = -13;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t62 = 2815789395731181LLU;

	t62 = (x257%(x258^(x259/x260)));

	if (t62 != 21374576654924791LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 25741U;
	uint16_t x262 = UINT16_MAX;
	static int64_t x263 = -24082931258343LL;
	volatile int64_t x264 = -1LL;

	t63 = (x261%(x262^(x263/x264)));

	if (t63 != 25741LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static int64_t x267 = -12519148367LL;
	uint16_t x268 = UINT16_MAX;
	static volatile int64_t t64 = 1911LL;

	t64 = (x265%(x266^(x267/x268)));

	if (t64 != 29025LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 2U;
	int32_t x270 = 0;
	volatile int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	uint64_t t65 = 55809LLU;

	t65 = (x269%(x270^(x271/x272)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 79867734924LL;
	volatile uint64_t x274 = 2103838LLU;
	int16_t x275 = -3;
	int32_t x276 = -242;
	static volatile uint64_t t66 = 6699042053LLU;

	t66 = (x273%(x274^(x275/x276)));

	if (t66 != 1836768LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int8_t x280 = 30;
	uint32_t t67 = 108213U;

	t67 = (x277%(x278^(x279/x280)));

	if (t67 != 32753U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = 73;
	static int16_t x283 = 1;
	int64_t x284 = INT64_MAX;

	t68 = (x281%(x282^(x283/x284)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = 20877;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = 77U;
	int32_t t69 = -15;

	t69 = (x285%(x286^(x287/x288)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MIN;
	static volatile int32_t x290 = -1;
	int8_t x291 = 16;
	static int32_t x292 = -1;
	int32_t t70 = -1992317;

	t70 = (x289%(x290^(x291/x292)));

	if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x293 = 4;
	static int8_t x294 = INT8_MIN;
	static int8_t x295 = INT8_MAX;
	static int32_t x296 = -1;
	volatile int32_t t71 = -30842;

	t71 = (x293%(x294^(x295/x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 102U;
	uint8_t x300 = 9U;
	int32_t t72 = 1496327;

	t72 = (x297%(x298^(x299/x300)));

	if (t72 != -11) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x301 = 223416;
	uint16_t x303 = UINT16_MAX;
	static uint32_t x304 = UINT32_MAX;
	uint32_t t73 = 22092403U;

	t73 = (x301%(x302^(x303/x304)));

	if (t73 != 18045U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x305 = 246045LLU;
	static volatile int32_t x306 = -1;
	volatile int64_t x307 = -1LL;
	int32_t x308 = -250;
	uint64_t t74 = 941893957838314901LLU;

	t74 = (x305%(x306^(x307/x308)));

	if (t74 != 246045LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -1LL;
	static volatile int16_t x310 = 631;
	static int8_t x311 = INT8_MIN;
	uint16_t x312 = 3062U;
	int64_t t75 = -14302LL;

	t75 = (x309%(x310^(x311/x312)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x314 = 218;
	volatile int64_t t76 = 452178280LL;

	t76 = (x313%(x314^(x315/x316)));

	if (t76 != -8LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = 194;
	int32_t x318 = INT32_MAX;
	uint16_t x319 = 1513U;
	int32_t x320 = 292046936;

	t77 = (x317%(x318^(x319/x320)));

	if (t77 != 194) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x322 = -1;
	volatile int32_t x324 = INT32_MIN;
	int64_t t78 = -18356376533233LL;

	t78 = (x321%(x322^(x323/x324)));

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = -211;
	int32_t x330 = 7;
	int32_t x331 = INT32_MIN;

	t79 = (x329%(x330^(x331/x332)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x333 = -1;
	static int64_t x334 = -1LL;
	volatile int64_t x336 = INT64_MIN;

	t80 = (x333%(x334^(x335/x336)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x338 = INT32_MIN;
	volatile int16_t x340 = INT16_MAX;
	int64_t t81 = 33623646485042LL;

	t81 = (x337%(x338^(x339/x340)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -51622;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;

	t82 = (x341%(x342^(x343/x344)));

	if (t82 != -60) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MIN;
	static int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	int16_t x348 = 1;
	volatile int64_t t83 = 13LL;

	t83 = (x345%(x346^(x347/x348)));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 6005U;
	uint16_t x350 = UINT16_MAX;
	static uint32_t x352 = 19700857U;

	t84 = (x349%(x350^(x351/x352)));

	if (t84 != 6005U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x354 = 1761U;
	volatile uint8_t x355 = 0U;
	static int8_t x356 = 23;
	volatile int32_t t85 = 13;

	t85 = (x353%(x354^(x355/x356)));

	if (t85 != -954) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 376742718;
	uint16_t x358 = 159U;
	int16_t x359 = 1880;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t86 = 27626;

	t86 = (x357%(x358^(x359/x360)));

	if (t86 != 78) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = 5;
	int64_t x362 = 1LL;
	int64_t x363 = -1121052193662100182LL;
	int64_t t87 = 7371588603773753LL;

	t87 = (x361%(x362^(x363/x364)));

	if (t87 != 5LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = INT8_MIN;
	uint8_t x366 = 54U;
	int32_t x368 = INT32_MIN;

	t88 = (x365%(x366^(x367/x368)));

	if (t88 != -20) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = 2;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t89 = 64475591LLU;

	t89 = (x369%(x370^(x371/x372)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = 103681883U;
	uint8_t x374 = 1U;
	uint64_t x375 = 16740832LLU;
	volatile int8_t x376 = INT8_MAX;

	t90 = (x373%(x374^(x375/x376)));

	if (t90 != 74507LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = 61;
	volatile int16_t x383 = INT16_MIN;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t91 = 10167708;

	t91 = (x381%(x382^(x383/x384)));

	if (t91 != 61) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	volatile uint64_t t92 = 821794497LLU;

	t92 = (x385%(x386^(x387/x388)));

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x389 = INT8_MIN;
	volatile int8_t x392 = -1;
	uint32_t t93 = 2127U;

	t93 = (x389%(x390^(x391/x392)));

	if (t93 != 4294967168U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = 30U;
	static int8_t x394 = INT8_MAX;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MAX;
	static int32_t t94 = -5386;

	t94 = (x393%(x394^(x395/x396)));

	if (t94 != 30) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = 9991U;
	uint32_t x398 = 15452U;
	volatile uint32_t x399 = 25U;
	volatile int16_t x400 = 12622;
	volatile uint32_t t95 = 1099809U;

	t95 = (x397%(x398^(x399/x400)));

	if (t95 != 9991U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = -1;
	int8_t x402 = INT8_MAX;
	uint64_t x403 = 3LLU;
	static volatile int16_t x404 = -203;

	t96 = (x401%(x402^(x403/x404)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x406 = INT32_MIN;
	int64_t x407 = 5315LL;
	uint64_t t97 = 128818138664943LLU;

	t97 = (x405%(x406^(x407/x408)));

	if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = -10;
	uint32_t x412 = 48U;

	t98 = (x409%(x410^(x411/x412)));

	if (t98 != 89478U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x414 = 10U;
	uint16_t x415 = 180U;
	int32_t x416 = 1182639;
	static int64_t t99 = 72090065866LL;

	t99 = (x413%(x414^(x415/x416)));

	if (t99 != 7LL) { NG(); } else { ; }
	
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

