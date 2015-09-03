#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x8 = INT32_MIN;
int16_t x9 = INT16_MIN;
int16_t x15 = -7403;
uint8_t x17 = 123U;
int16_t x18 = INT16_MAX;
int32_t x20 = INT32_MIN;
volatile int32_t t4 = -6315;
static int32_t x21 = -43113;
uint32_t x29 = 1285U;
int8_t x31 = 18;
int64_t x32 = -235168314539LL;
int16_t x34 = -1;
int32_t x35 = INT32_MIN;
int32_t x36 = -1;
int32_t x42 = INT32_MAX;
int16_t x43 = INT16_MAX;
uint32_t t9 = 57046476U;
uint32_t x47 = 49U;
int64_t x49 = INT64_MIN;
uint64_t x50 = UINT64_MAX;
int64_t x51 = INT64_MIN;
volatile uint64_t t11 = 1832267521297773904LLU;
int8_t x55 = -1;
static int64_t x59 = 149425573194274122LL;
uint32_t t14 = 4U;
volatile uint64_t x68 = 1894LLU;
int16_t x71 = INT16_MIN;
volatile uint16_t x72 = UINT16_MAX;
int16_t x77 = INT16_MIN;
static volatile int64_t x81 = -23828507607LL;
uint16_t x93 = 27U;
volatile uint16_t x95 = UINT16_MAX;
int64_t x126 = INT64_MIN;
int32_t x128 = INT32_MIN;
volatile int16_t x129 = INT16_MIN;
volatile int8_t x130 = INT8_MIN;
volatile int8_t x132 = -30;
static volatile uint16_t x133 = UINT16_MAX;
static uint8_t x139 = 3U;
int64_t x140 = INT64_MAX;
uint64_t x141 = 92LLU;
int8_t x143 = -10;
volatile uint64_t t30 = 22527948217195160LLU;
uint16_t x147 = UINT16_MAX;
static int8_t x156 = INT8_MIN;
volatile int32_t t33 = -1291;
uint8_t x157 = UINT8_MAX;
volatile int32_t t34 = -2935;
volatile uint64_t t36 = 91LLU;
int32_t x174 = 1;
static volatile int64_t t40 = 2435373355185356LL;
uint32_t x189 = 432U;
int8_t x191 = INT8_MIN;
static uint64_t x192 = UINT64_MAX;
uint64_t x197 = UINT64_MAX;
int32_t x204 = 7;
uint64_t x207 = 515900884785LLU;
static volatile int32_t x208 = INT32_MIN;
int64_t x211 = INT64_MAX;
int8_t x212 = -1;
volatile int32_t x221 = -1;
int8_t x224 = -1;
uint8_t x227 = 0U;
volatile uint32_t x232 = 574363489U;
volatile uint64_t t52 = 37703884437615855LLU;
volatile uint16_t x237 = 5069U;
int64_t x239 = INT64_MIN;
volatile int32_t t54 = -555258153;
uint64_t x251 = UINT64_MAX;
static int16_t x252 = 0;
static uint64_t t56 = 3260750527LLU;
uint16_t x255 = UINT16_MAX;
static int64_t x263 = INT64_MIN;
static int64_t x265 = INT64_MAX;
volatile uint32_t t60 = 3045U;
int8_t x282 = INT8_MAX;
uint64_t x283 = 3670205474LLU;
int16_t x284 = INT16_MIN;
uint32_t t62 = 136165093U;
volatile uint16_t x295 = 4U;
uint32_t t64 = 50325811U;
int8_t x300 = -1;
int32_t x301 = -1;
int64_t x307 = 972165987175LL;
int64_t t68 = -141151638466287341LL;
int16_t x316 = INT16_MAX;
uint64_t t69 = 35479836LLU;
volatile int32_t x317 = INT32_MIN;
uint64_t x320 = UINT64_MAX;
uint32_t t71 = 10371661U;
int64_t x337 = INT64_MAX;
int16_t x355 = INT16_MIN;
volatile uint8_t x366 = UINT8_MAX;
int32_t t81 = 1;
int16_t x377 = -5;
uint32_t x380 = UINT32_MAX;
static uint32_t t82 = 0U;
int8_t x381 = 1;
uint64_t x385 = UINT64_MAX;
int16_t x389 = INT16_MIN;
uint8_t x391 = 30U;
uint16_t x392 = 4U;
volatile int32_t t85 = 282;
volatile uint64_t t86 = 2057588458771974925LLU;
volatile int32_t t87 = -53;
int16_t x408 = INT16_MIN;
int16_t x412 = INT16_MIN;
int32_t x417 = -1;
int8_t x422 = INT8_MAX;
volatile uint64_t t92 = 443496127267LLU;
static int16_t x427 = -1;
int8_t x429 = INT8_MAX;
int8_t x432 = INT8_MIN;
volatile uint64_t t96 = 0LLU;
int8_t x447 = -1;
int64_t x449 = INT64_MAX;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static volatile int32_t x2 = INT32_MAX;
	int32_t x3 = -254997191;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 83509437;

	t0 = ((x1+x2)^(x3^x4));

	if (t0 != -1892512455) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile uint8_t x6 = 1U;
	static int16_t x7 = 226;
	volatile uint32_t t1 = 21033196U;

	t1 = ((x5+x6)^(x7^x8));

	if (t1 != 2147483874U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int8_t x11 = INT8_MIN;
	static volatile int64_t x12 = -1LL;
	static volatile int64_t t2 = -639054695494LL;

	t2 = ((x9+x10)^(x11^x12));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 0;
	int32_t x14 = INT32_MIN;
	int64_t x16 = -1674LL;
	int64_t t3 = 5943667915890LL;

	t3 = ((x13+x14)^(x15^x16));

	if (t3 != -2147476893LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MAX;

	t4 = ((x17+x18)^(x19^x20));

	if (t4 != -32891) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 31U;
	static uint8_t x23 = 1U;
	uint16_t x24 = 856U;
	static volatile int32_t t5 = 0;

	t5 = ((x21+x22)^(x23^x24));

	if (t5 != -43793) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 21LLU;
	static int16_t x26 = INT16_MAX;
	volatile int64_t x27 = INT64_MAX;
	uint32_t x28 = 27335U;
	static uint64_t t6 = 4578959080LLU;

	t6 = ((x25+x26)^(x27^x28));

	if (t6 != 9223372036854715692LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	volatile int64_t t7 = 21LL;

	t7 = ((x29+x30)^(x31^x32));

	if (t7 != 9223371801686462018LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 43;
	int32_t t8 = -134866;

	t8 = ((x33+x34)^(x35^x36));

	if (t8 != 2147483605) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	int32_t x44 = -1;

	t9 = ((x41+x42)^(x43^x44));

	if (t9 != 2147516414U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -17563647085678LL;
	int16_t x46 = INT16_MIN;
	volatile int8_t x48 = INT8_MIN;
	int64_t t10 = -149346LL;

	t10 = ((x45+x46)^(x47^x48));

	if (t10 != -17564890395613LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x52 = 424U;

	t11 = ((x49+x50)^(x51^x52));

	if (t11 != 18446744073709551191LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = -650918100;
	uint32_t x54 = 364461581U;
	static uint64_t x56 = 54237591311LLU;
	volatile uint64_t t12 = 60530638617LLU;

	t12 = ((x53+x54)^(x55^x56));

	if (t12 != 18446744020859030985LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -22;
	int32_t x58 = -1;
	int16_t x60 = INT16_MIN;
	int64_t t13 = -3607446837527LL;

	t13 = ((x57+x58)^(x59^x60));

	if (t13 != 149425573194295971LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	uint32_t x62 = 224266U;
	int32_t x63 = 6;
	int32_t x64 = INT32_MIN;

	t14 = ((x61+x62)^(x63^x64));

	if (t14 != 2147707919U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	int8_t x67 = INT8_MAX;
	uint64_t t15 = 23LLU;

	t15 = ((x65+x66)^(x67^x68));

	if (t15 != 18446744073709517030LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = 0U;
	uint32_t x70 = UINT32_MAX;
	static uint32_t t16 = 53198314U;

	t16 = ((x69+x70)^(x71^x72));

	if (t16 != 32768U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	static int8_t x75 = -57;
	volatile uint16_t x76 = UINT16_MAX;
	volatile uint32_t t17 = 8U;

	t17 = ((x73+x74)^(x75^x76));

	if (t17 != 65351U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x78 = -1;
	int32_t x79 = -1;
	int32_t x80 = -3086;
	int32_t t18 = -1322;

	t18 = ((x77+x78)^(x79^x80));

	if (t18 != -35854) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = 17;
	uint32_t x83 = 2385358U;
	static int8_t x84 = -1;
	int64_t t19 = -407LL;

	t19 = ((x81+x82)^(x83^x84));

	if (t19 != -23413764597LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = 980;
	int8_t x86 = INT8_MIN;
	uint16_t x87 = 0U;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t20 = -1;

	t20 = ((x85+x86)^(x87^x88));

	if (t20 != 64683) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 40U;
	uint16_t x90 = 321U;
	int16_t x91 = 10;
	int8_t x92 = INT8_MIN;
	volatile int32_t t21 = 861483;

	t21 = ((x89+x90)^(x91^x92));

	if (t21 != -285) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = INT64_MIN;
	static volatile int32_t x96 = -1;
	int64_t t22 = 210448371LL;

	t22 = ((x93+x94)^(x95^x96));

	if (t22 != 9223372036854710299LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = 159441;
	int32_t x102 = -170589027;
	volatile int32_t x103 = INT32_MAX;
	static volatile uint8_t x104 = UINT8_MAX;
	int32_t t23 = -2;

	t23 = ((x101+x102)^(x103^x104));

	if (t23 != -1977054098) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = -796738279;
	int8_t x106 = -3;
	uint32_t x107 = 21805947U;
	uint64_t x108 = 116104446857594LLU;
	uint64_t t24 = 19LLU;

	t24 = ((x105+x106)^(x107^x108));

	if (t24 != 18446627969964300055LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = -11152724;
	static int16_t x118 = 244;
	static int16_t x119 = INT16_MIN;
	int64_t x120 = 10LL;
	volatile int64_t t25 = -143714922565931817LL;

	t25 = ((x117+x118)^(x119^x120));

	if (t25 != 11162538LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 44LLU;
	int16_t x127 = -12342;
	uint64_t t26 = 6467236340LLU;

	t26 = ((x125+x126)^(x127^x128));

	if (t26 != 9223372039002247142LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x131 = -1;
	int32_t t27 = -20465;

	t27 = ((x129+x130)^(x131^x132));

	if (t27 != -32867) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x134 = 0U;
	uint32_t x135 = 20324333U;
	static int32_t x136 = -2739;
	uint32_t t28 = 116281U;

	t28 = ((x133+x134)^(x135^x136));

	if (t28 != 4274591071U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = -104;
	uint8_t x138 = 2U;
	int64_t t29 = 455293058898LL;

	t29 = ((x137+x138)^(x139^x140));

	if (t29 != -9223372036854775706LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x142 = UINT16_MAX;
	int8_t x144 = INT8_MIN;

	t30 = ((x141+x142)^(x143^x144));

	if (t30 != 65581LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 4668U;
	int64_t x146 = INT64_MIN;
	uint8_t x148 = 16U;
	volatile int64_t t31 = 1435572LL;

	t31 = ((x145+x146)^(x147^x148));

	if (t31 != -9223372036854714925LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MIN;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t32 = -4327574551210591LL;

	t32 = ((x149+x150)^(x151^x152));

	if (t32 != 9223372036854743166LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x153 = INT16_MIN;
	volatile int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MIN;

	t33 = ((x153+x154)^(x155^x156));

	if (t33 != -2147450880) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = INT8_MIN;
	static uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;

	t34 = ((x157+x158)^(x159^x160));

	if (t34 != -256) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -117079432;
	int16_t x162 = 26;
	int64_t x163 = INT64_MIN;
	uint64_t x164 = UINT64_MAX;
	uint64_t t35 = 4LLU;

	t35 = ((x161+x162)^(x163^x164));

	if (t35 != 9223372036971855213LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -323;
	int16_t x166 = -1;
	static volatile int64_t x167 = 288LL;
	uint64_t x168 = 1LLU;

	t36 = ((x165+x166)^(x167^x168));

	if (t36 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = 58382763282029LLU;
	volatile int16_t x171 = 1695;
	uint32_t x172 = 280U;
	volatile uint64_t t37 = 129188716770197LLU;

	t37 = ((x169+x170)^(x171^x172));

	if (t37 != 58382763281002LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	uint32_t x175 = 4301U;
	int32_t x176 = INT32_MIN;
	static uint32_t t38 = 19U;

	t38 = ((x173+x174)^(x175^x176));

	if (t38 != 2147487949U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x177 = -1;
	volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = -1;
	volatile uint32_t x180 = 40U;
	static volatile uint32_t t39 = 70359298U;

	t39 = ((x177+x178)^(x179^x180));

	if (t39 != 41U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MAX;
	int64_t x183 = 1LL;
	int32_t x184 = -1746;

	t40 = ((x181+x182)^(x183^x184));

	if (t40 != -2147449136LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MAX;
	static int64_t x186 = -1LL;
	int64_t x187 = 2849959LL;
	int32_t x188 = INT32_MIN;
	int64_t t41 = -292996921LL;

	t41 = ((x185+x186)^(x187^x188));

	if (t41 != -2144664743LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x190 = INT8_MIN;
	volatile uint64_t t42 = 3616LLU;

	t42 = ((x189+x190)^(x191^x192));

	if (t42 != 335LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x194 = -35;
	static int8_t x195 = INT8_MIN;
	int16_t x196 = 338;
	static int32_t t43 = 386472;

	t43 = ((x193+x194)^(x195^x196));

	if (t43 != 33039) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x198 = -5;
	static int32_t x199 = -1;
	int8_t x200 = -1;
	volatile uint64_t t44 = 467253186641440LLU;

	t44 = ((x197+x198)^(x199^x200));

	if (t44 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = -1;
	static volatile int8_t x203 = -1;
	static int32_t t45 = 2234;

	t45 = ((x201+x202)^(x203^x204));

	if (t45 != 135) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = -554413497LL;
	static volatile uint64_t t46 = 166961713155LLU;

	t46 = ((x205+x206)^(x207^x208));

	if (t46 != 516484667126LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 1075U;
	static int8_t x210 = 0;
	static int64_t t47 = 141218105471051LL;

	t47 = ((x209+x210)^(x211^x212));

	if (t47 != -9223372036854774733LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x213 = UINT64_MAX;
	static int32_t x214 = 0;
	int16_t x215 = -1;
	static int16_t x216 = INT16_MIN;
	volatile uint64_t t48 = 42856909211344236LLU;

	t48 = ((x213+x214)^(x215^x216));

	if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MAX;
	static volatile int32_t x219 = INT32_MAX;
	volatile uint64_t x220 = UINT64_MAX;
	static uint64_t t49 = 24970LLU;

	t49 = ((x217+x218)^(x219^x220));

	if (t49 != 18446744071562100862LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x222 = INT8_MAX;
	static int32_t x223 = INT32_MIN;
	int32_t t50 = -100472072;

	t50 = ((x221+x222)^(x223^x224));

	if (t50 != 2147483521) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 1235U;
	uint32_t x226 = 28U;
	int16_t x228 = INT16_MAX;
	volatile uint32_t t51 = 3634U;

	t51 = ((x225+x226)^(x227^x228));

	if (t51 != 31504U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	uint64_t x231 = 128053416LLU;

	t52 = ((x229+x230)^(x231^x232));

	if (t52 != 18446744073078478902LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x238 = INT8_MAX;
	int16_t x240 = 23;
	volatile int64_t t53 = 668085880683036225LL;

	t53 = ((x237+x238)^(x239^x240));

	if (t53 != -9223372036854770597LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MAX;
	uint8_t x242 = 0U;
	int16_t x243 = 0;
	static int32_t x244 = INT32_MAX;

	t54 = ((x241+x242)^(x243^x244));

	if (t54 != 2147450880) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = -167LL;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = -16;
	static volatile int64_t x248 = 1374548255989881793LL;
	static volatile uint64_t t55 = 36789372970148LLU;

	t55 = ((x245+x246)^(x247^x248));

	if (t55 != 1374548255989881705LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x249 = UINT64_MAX;
	int16_t x250 = 75;

	t56 = ((x249+x250)^(x251^x252));

	if (t56 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x253 = -1;
	volatile int8_t x254 = INT8_MAX;
	uint16_t x256 = 7U;
	volatile int32_t t57 = -486061;

	t57 = ((x253+x254)^(x255^x256));

	if (t57 != 65414) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = 16678;
	uint64_t x262 = 299616LLU;
	static uint64_t x264 = 56289LLU;
	volatile uint64_t t58 = 56950LLU;

	t58 = ((x261+x262)^(x263^x264));

	if (t58 != 9223372036855040103LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x266 = -1;
	static int8_t x267 = INT8_MAX;
	int64_t x268 = 30256504402731261LL;
	int64_t t59 = -376670997706193LL;

	t59 = ((x265+x266)^(x267^x268));

	if (t59 != 9193115532452044668LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x269 = 187U;
	volatile uint32_t x270 = 39749328U;
	int8_t x271 = -7;
	int8_t x272 = -16;

	t60 = ((x269+x270)^(x271^x272));

	if (t60 != 39749506U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint64_t t61 = 1019964875LLU;

	t61 = ((x281+x282)^(x283^x284));

	if (t61 != 18446744070039364956LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x285 = 3U;
	static volatile int32_t x286 = 19;
	uint32_t x287 = UINT32_MAX;
	int32_t x288 = -142899018;

	t62 = ((x285+x286)^(x287^x288));

	if (t62 != 142899039U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x289 = 76599497U;
	static int16_t x290 = INT16_MAX;
	int32_t x291 = -490;
	int64_t x292 = 181LL;
	int64_t t63 = -2LL;

	t63 = ((x289+x290)^(x291^x292));

	if (t63 != -76632469LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x293 = 247114U;
	static uint32_t x294 = 18U;
	uint8_t x296 = 0U;

	t64 = ((x293+x294)^(x295^x296));

	if (t64 != 247128U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 6U;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	volatile int64_t t65 = -17706826LL;

	t65 = ((x297+x298)^(x299^x300));

	if (t65 != -7LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x302 = -12;
	uint8_t x303 = 1U;
	int32_t x304 = 2;
	volatile int32_t t66 = 2991142;

	t66 = ((x301+x302)^(x303^x304));

	if (t66 != -16) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = 0;
	uint32_t x306 = 1817968U;
	static uint64_t x308 = UINT64_MAX;
	uint64_t t67 = 1599289440268LLU;

	t67 = ((x305+x306)^(x307^x308));

	if (t67 != 18446743101545380328LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	uint16_t x310 = 9436U;
	volatile uint16_t x311 = 7351U;
	volatile int64_t x312 = -1LL;

	t68 = ((x309+x310)^(x311^x312));

	if (t68 != -14445LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x313 = UINT64_MAX;
	int8_t x314 = INT8_MAX;
	int64_t x315 = 1523LL;

	t69 = ((x313+x314)^(x315^x316));

	if (t69 != 31346LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x318 = 75569U;
	uint16_t x319 = 4354U;
	static volatile uint64_t t70 = 371733047LLU;

	t70 = ((x317+x318)^(x319^x320));

	if (t70 != 18446744071561988556LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = 0U;
	uint32_t x322 = 110990087U;
	static uint32_t x323 = 1934136U;
	int32_t x324 = INT32_MIN;

	t71 = ((x321+x322)^(x323^x324));

	if (t71 != 2256539711U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x325 = 30U;
	static uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MAX;
	static uint32_t x328 = 22U;
	volatile uint64_t t72 = 72243LLU;

	t72 = ((x325+x326)^(x327^x328));

	if (t72 != 116LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x338 = -1;
	static int16_t x339 = -1;
	static int16_t x340 = -1;
	static volatile int64_t t73 = -5491108569390LL;

	t73 = ((x337+x338)^(x339^x340));

	if (t73 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = INT32_MIN;
	volatile int64_t t74 = 148705LL;

	t74 = ((x345+x346)^(x347^x348));

	if (t74 != 9223372034707226624LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	volatile uint32_t x350 = 414077288U;
	uint8_t x351 = 27U;
	static int16_t x352 = -24;
	uint32_t t75 = 14258U;

	t75 = ((x349+x350)^(x351^x352));

	if (t75 != 3880890139U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = -1LL;
	int64_t x356 = -1LL;
	static int64_t t76 = 1029991LL;

	t76 = ((x353+x354)^(x355^x356));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x357 = -19;
	int8_t x358 = -1;
	volatile int8_t x359 = -20;
	int8_t x360 = INT8_MAX;
	int32_t t77 = -136590;

	t77 = ((x357+x358)^(x359^x360));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MAX;
	volatile int32_t x364 = INT32_MIN;
	uint32_t t78 = 252U;

	t78 = ((x361+x362)^(x363^x364));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = 612LLU;
	int16_t x367 = 786;
	int8_t x368 = 25;
	static uint64_t t79 = 38LLU;

	t79 = ((x365+x366)^(x367^x368));

	if (t79 != 104LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x369 = -28730626;
	volatile uint64_t x370 = 112044010968203123LLU;
	volatile int8_t x371 = -1;
	int64_t x372 = INT64_MAX;
	uint64_t t80 = 76388696561832LLU;

	t80 = ((x369+x370)^(x371^x372));

	if (t80 != 9335416047794248305LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = 1;
	int16_t x374 = 362;
	int16_t x375 = -7;
	volatile int32_t x376 = 37576;

	t81 = ((x373+x374)^(x375^x376));

	if (t81 != -37798) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x378 = 87006302;
	volatile uint32_t x379 = 4763324U;

	t82 = ((x377+x378)^(x379^x380));

	if (t82 != 4204317978U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x382 = UINT16_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = 54;
	int32_t t83 = 374;

	t83 = ((x381+x382)^(x383^x384));

	if (t83 != 65737) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MAX;
	static int32_t x388 = INT32_MAX;
	uint64_t t84 = 3454779530008LLU;

	t84 = ((x385+x386)^(x387^x388));

	if (t84 != 2147483518LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x390 = INT8_MIN;

	t85 = ((x389+x390)^(x391^x392));

	if (t85 != -32870) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x393 = UINT64_MAX;
	volatile int16_t x394 = 42;
	int64_t x395 = -1LL;
	static int32_t x396 = INT32_MAX;

	t86 = ((x393+x394)^(x395^x396));

	if (t86 != 18446744071562068009LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x397 = -1;
	volatile int8_t x398 = -6;
	volatile int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MAX;

	t87 = ((x397+x398)^(x399^x400));

	if (t87 != -32647) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = INT32_MAX;
	static uint32_t x402 = 238672153U;
	static int64_t x403 = -1LL;
	uint64_t x404 = UINT64_MAX;
	uint64_t t88 = 33LLU;

	t88 = ((x401+x402)^(x403^x404));

	if (t88 != 2386155800LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -21LL;
	int16_t x406 = 1610;
	static uint32_t x407 = UINT32_MAX;
	volatile int64_t t89 = 66LL;

	t89 = ((x405+x406)^(x407^x408));

	if (t89 != 31178LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	volatile int16_t x410 = -10;
	uint8_t x411 = UINT8_MAX;
	volatile int32_t t90 = -901;

	t90 = ((x409+x410)^(x411^x412));

	if (t90 != 65289) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x418 = -1;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 0LLU;
	volatile uint64_t t91 = 173LLU;

	t91 = ((x417+x418)^(x419^x420));

	if (t91 != 126LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x421 = 406LLU;
	int16_t x423 = 0;
	int8_t x424 = -1;

	t92 = ((x421+x422)^(x423^x424));

	if (t92 != 18446744073709551082LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x425 = 145;
	int64_t x426 = INT64_MIN;
	uint16_t x428 = 129U;
	static volatile int64_t t93 = 246162171LL;

	t93 = ((x425+x426)^(x427^x428));

	if (t93 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MAX;
	volatile int32_t t94 = 62955627;

	t94 = ((x429+x430)^(x431^x432));

	if (t94 != 2147483520) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = 23;
	int64_t x434 = INT64_MIN;
	int32_t x435 = INT32_MAX;
	uint16_t x436 = UINT16_MAX;
	static int64_t t95 = -25413LL;

	t95 = ((x433+x434)^(x435^x436));

	if (t95 != -9223372034707357673LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = 220;
	int64_t x438 = INT64_MIN;
	uint16_t x439 = 31576U;
	uint64_t x440 = 16674185617LLU;

	t96 = ((x437+x438)^(x439^x440));

	if (t96 != 9223372053528943125LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x445 = INT8_MAX;
	int32_t x446 = -1;
	uint32_t x448 = 33U;
	volatile uint32_t t97 = 58241U;

	t97 = ((x445+x446)^(x447^x448));

	if (t97 != 4294967200U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x450 = 4659351376579513582LLU;
	uint16_t x451 = UINT16_MAX;
	static int64_t x452 = INT64_MAX;
	volatile uint64_t t98 = 62436451LLU;

	t98 = ((x449+x450)^(x451^x452));

	if (t98 != 13787392697130077421LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x453 = 35U;
	int8_t x454 = INT8_MIN;
	int64_t x455 = 30684939LL;
	uint8_t x456 = 35U;
	volatile int64_t t99 = 48358506LL;

	t99 = ((x453+x454)^(x455^x456));

	if (t99 != -30685045LL) { NG(); } else { ; }
	
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

