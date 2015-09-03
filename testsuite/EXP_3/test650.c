#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 401U;
uint16_t x11 = UINT16_MAX;
static int64_t t2 = INT64_MAX;
int8_t x16 = -1;
int16_t x19 = -1;
int16_t x21 = INT16_MIN;
int8_t x22 = INT8_MIN;
int32_t t5 = 2007513;
uint8_t x27 = 4U;
int16_t x32 = -2173;
int8_t x35 = 0;
static int64_t t8 = 29061LL;
volatile int32_t x38 = INT32_MAX;
volatile int32_t t10 = -47595767;
volatile uint16_t x49 = 23U;
uint8_t x76 = UINT8_MAX;
static uint8_t x78 = UINT8_MAX;
uint64_t x82 = 159161306351LLU;
volatile int16_t x83 = 147;
static uint32_t x87 = 1478560441U;
uint64_t x90 = 12202525325LLU;
int64_t x91 = INT64_MIN;
int8_t x94 = 26;
int64_t t23 = -165336718308863395LL;
int64_t x101 = -230823LL;
static volatile int64_t x102 = INT64_MAX;
volatile uint64_t t24 = 6LLU;
volatile int32_t x115 = INT32_MIN;
static volatile int32_t x117 = INT32_MAX;
int8_t x122 = -1;
int16_t x127 = -2027;
uint32_t x128 = 75271U;
int64_t x129 = 40976293LL;
int8_t x139 = 8;
int8_t x140 = INT8_MIN;
volatile int32_t t33 = INT32_MIN;
int32_t x144 = INT32_MIN;
volatile int32_t t35 = 293549;
volatile uint8_t x150 = 1U;
volatile uint32_t t37 = 11778U;
int32_t x164 = INT32_MAX;
uint16_t x174 = 8U;
volatile uint64_t t42 = 1911838249985390LLU;
volatile int64_t x186 = INT64_MIN;
uint16_t x197 = 13762U;
volatile uint32_t t48 = 22454594U;
int16_t x201 = -960;
int8_t x211 = -1;
int16_t x215 = INT16_MAX;
uint64_t x216 = UINT64_MAX;
uint64_t t52 = 88868753692231041LLU;
uint16_t x217 = 3U;
int32_t t53 = -2;
volatile int16_t x222 = INT16_MIN;
int32_t x223 = -773;
uint64_t x224 = 15791431886LLU;
uint32_t x226 = 354U;
int8_t x228 = 1;
int32_t x235 = INT32_MAX;
static uint8_t x248 = 109U;
int8_t x250 = -10;
volatile int32_t x260 = INT32_MIN;
volatile uint64_t t63 = 5608813LLU;
volatile int64_t x261 = -1LL;
uint16_t x262 = UINT16_MAX;
static int32_t x265 = INT32_MIN;
int32_t x268 = INT32_MIN;
volatile uint32_t t67 = 46257U;
uint64_t x277 = UINT64_MAX;
int16_t x279 = -59;
static uint64_t x280 = UINT64_MAX;
static int64_t x281 = INT64_MIN;
static int64_t t69 = INT64_MIN;
volatile int64_t t70 = 3LL;
uint32_t x291 = UINT32_MAX;
static volatile int64_t x295 = INT64_MAX;
static volatile int64_t x302 = INT64_MAX;
int16_t x303 = -184;
int64_t t74 = 17038660961324175LL;
int16_t x310 = -1;
int8_t x314 = 1;
static int8_t x321 = -41;
uint64_t x324 = UINT64_MAX;
volatile uint64_t t80 = 1LLU;
uint32_t t81 = 533337657U;
int64_t x333 = INT64_MIN;
static int64_t x343 = INT64_MAX;
int64_t x349 = INT64_MIN;
int8_t x350 = -1;
int16_t x354 = 730;
static uint8_t x359 = 62U;
int32_t x362 = 524;
int32_t x363 = INT32_MIN;
int32_t x370 = -1;
int16_t x376 = -1;
static volatile uint32_t x382 = 5U;
uint8_t x390 = 37U;
static uint16_t x394 = UINT16_MAX;
int32_t t97 = 43925;
int32_t x397 = -4066;
int64_t x402 = INT64_MIN;
uint32_t x403 = 2214U;


void f0(void) {
	int32_t x2 = -1;
	int8_t x3 = 10;
	int64_t x4 = 1045118610228572550LL;
	volatile int64_t t0 = 3847079633482LL;

	t0 = ((x1&x2)^(x3/x4));

	if (t0 != 401LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -15;
	static int16_t x6 = INT16_MIN;
	uint16_t x7 = 388U;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -7813949492LL;

	t1 = ((x5&x6)^(x7/x8));

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -3878171449927087382LL;
	int64_t x10 = INT64_MIN;
	int16_t x12 = INT16_MIN;

	t2 = ((x9&x10)^(x11/x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 11U;
	int8_t x14 = 18;
	int8_t x15 = INT8_MIN;
	int32_t t3 = 124112829;

	t3 = ((x13&x14)^(x15/x16));

	if (t3 != 130) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x18 = -19;
	uint8_t x20 = 10U;
	uint32_t t4 = 231619713U;

	t4 = ((x17&x18)^(x19/x20));

	if (t4 != 4294967277U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;

	t5 = ((x21&x22)^(x23/x24));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int8_t x26 = -3;
	int64_t x28 = 122869424113826LL;
	int64_t t6 = -8099104LL;

	t6 = ((x25&x26)^(x27/x28));

	if (t6 != -3LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = -335;
	volatile int16_t x31 = INT16_MIN;
	static volatile int32_t t7 = 1;

	t7 = ((x29&x30)^(x31/x32));

	if (t7 != -2147483633) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 11U;
	volatile uint32_t x34 = UINT32_MAX;
	int64_t x36 = -1LL;

	t8 = ((x33&x34)^(x35/x36));

	if (t8 != 11LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -2285;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -994486;

	t9 = ((x37&x38)^(x39/x40));

	if (t9 != -2147420398) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -1;
	int32_t x42 = INT32_MAX;
	volatile int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;

	t10 = ((x41&x42)^(x43/x44));

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 96U;
	int32_t x46 = -44151989;
	int64_t x47 = -1LL;
	int16_t x48 = -21;
	volatile int64_t t11 = 212248677327LL;

	t11 = ((x45&x46)^(x47/x48));

	if (t11 != 64LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 795314LL;
	int16_t x51 = INT16_MIN;
	static uint32_t x52 = 44990U;
	volatile int64_t t12 = -24114365228LL;

	t12 = ((x49&x50)^(x51/x52));

	if (t12 != 95482LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int64_t x54 = 113772212413439414LL;
	int16_t x55 = INT16_MIN;
	int16_t x56 = -657;
	int64_t t13 = 107813132187781LL;

	t13 = ((x53&x54)^(x55/x56));

	if (t13 != 49LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 3776412917665LL;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = 26LL;
	uint8_t x60 = 88U;
	int64_t t14 = 80185LL;

	t14 = ((x57&x58)^(x59/x60));

	if (t14 != 3776412909568LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 27;
	int16_t x66 = INT16_MAX;
	volatile int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 70611U;

	t15 = ((x65&x66)^(x67/x68));

	if (t15 != 27U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 3270257LL;
	int16_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t16 = 274850807649LLU;

	t16 = ((x69&x70)^(x71/x72));

	if (t16 != 3270256LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = 20U;
	volatile uint16_t x74 = 3U;
	uint64_t x75 = 264138694303400LLU;
	volatile uint64_t t17 = 1314435153502669LLU;

	t17 = ((x73&x74)^(x75/x76));

	if (t17 != 1035838016876LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 175U;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MIN;
	volatile uint32_t t18 = 489852U;

	t18 = ((x77&x78)^(x79/x80));

	if (t18 != 4294967214U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile uint64_t t19 = 133113131804822LLU;

	t19 = ((x81&x82)^(x83/x84));

	if (t19 != 159161306351LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x85 = 0U;
	int64_t x86 = -1LL;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t20 = 35961951LLU;

	t20 = ((x85&x86)^(x87/x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x92 = 7542U;
	uint64_t t21 = 220468180406418LLU;

	t21 = ((x89&x90)^(x91/x92));

	if (t21 != 18445521139204549192LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	static volatile int16_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	static volatile uint32_t t22 = 1120584917U;

	t22 = ((x93&x94)^(x95/x96));

	if (t22 != 27U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = UINT8_MAX;
	int32_t x98 = INT32_MAX;
	uint16_t x99 = 31775U;
	int64_t x100 = INT64_MIN;

	t23 = ((x97&x98)^(x99/x100));

	if (t23 != 255LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x103 = UINT32_MAX;
	uint64_t x104 = 1508172240726519294LLU;

	t24 = ((x101&x102)^(x103/x104));

	if (t24 != 9223372036854544985LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	volatile int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = UINT16_MAX;
	int32_t t25 = -109440;

	t25 = ((x105&x106)^(x107/x108));

	if (t25 != 32640) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = INT32_MIN;
	int8_t x110 = -1;
	int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MAX;
	volatile int64_t t26 = -27317117193460509LL;

	t26 = ((x109&x110)^(x111/x112));

	if (t26 != -72624978274533247LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = 74515006124674LL;
	int32_t x114 = -1;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t27 = -507527220930007LL;

	t27 = ((x113&x114)^(x115/x116));

	if (t27 != -74515014546174LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x118 = 1800;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;
	int32_t t28 = 121606;

	t28 = ((x117&x118)^(x119/x120));

	if (t28 != 1800) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = 1910;
	volatile uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MIN;
	uint32_t t29 = 533U;

	t29 = ((x121&x122)^(x123/x124));

	if (t29 != 1911U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 1U;
	static int32_t x126 = INT32_MAX;
	volatile uint32_t t30 = 1750U;

	t30 = ((x125&x126)^(x127/x128));

	if (t30 != 57061U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = 2795;
	int64_t x131 = INT64_MAX;
	int8_t x132 = -1;
	static volatile int64_t t31 = -28LL;

	t31 = ((x129&x130)^(x131/x132));

	if (t31 != -9223372036854773088LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int32_t x134 = INT32_MAX;
	static int64_t x135 = INT64_MIN;
	static int8_t x136 = -15;
	static volatile int64_t t32 = -15LL;

	t32 = ((x133&x134)^(x135/x136));

	if (t32 != 614891470984804215LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;

	t33 = ((x137&x138)^(x139/x140));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	static int16_t x142 = INT16_MAX;
	uint8_t x143 = 2U;
	int32_t t34 = -42;

	t34 = ((x141&x142)^(x143/x144));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	volatile int16_t x146 = INT16_MIN;
	uint8_t x147 = 1U;
	uint8_t x148 = 9U;

	t35 = ((x145&x146)^(x147/x148));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	uint64_t x151 = UINT64_MAX;
	uint32_t x152 = 16339U;
	volatile uint64_t t36 = 128420LLU;

	t36 = ((x149&x150)^(x151/x152));

	if (t36 != 1129000800153593LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	static int8_t x154 = INT8_MAX;
	volatile int32_t x155 = -12431;
	static int16_t x156 = 1;

	t37 = ((x153&x154)^(x155/x156));

	if (t37 != 4294954766U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	static uint8_t x158 = 13U;
	static int64_t x159 = INT64_MIN;
	static volatile uint8_t x160 = 9U;
	volatile int64_t t38 = 602LL;

	t38 = ((x157&x158)^(x159/x160));

	if (t38 != -1024819115206086200LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	int32_t x162 = INT32_MAX;
	volatile int64_t x163 = -1LL;
	volatile int64_t t39 = -6105LL;

	t39 = ((x161&x162)^(x163/x164));

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 610787185LLU;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 579U;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t40 = 2050075100LLU;

	t40 = ((x165&x166)^(x167/x168));

	if (t40 != 18446744073709494413LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = -1LL;
	int32_t x170 = INT32_MAX;
	uint16_t x171 = 150U;
	int64_t x172 = INT64_MIN;
	int64_t t41 = -1961315210685052725LL;

	t41 = ((x169&x170)^(x171/x172));

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = INT8_MIN;
	uint64_t x175 = 2126554129LLU;
	static uint64_t x176 = 3LLU;

	t42 = ((x173&x174)^(x175/x176));

	if (t42 != 708851376LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	uint32_t x178 = 3U;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	uint32_t t43 = 129434U;

	t43 = ((x177&x178)^(x179/x180));

	if (t43 != 3U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MIN;
	volatile int8_t x182 = INT8_MIN;
	uint8_t x183 = 78U;
	int8_t x184 = INT8_MIN;
	volatile int32_t t44 = 90;

	t44 = ((x181&x182)^(x183/x184));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = 115646689U;
	static int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MAX;
	int64_t t45 = 4388074787092830LL;

	t45 = ((x185&x186)^(x187/x188));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	static volatile uint8_t x190 = UINT8_MAX;
	int64_t x191 = INT64_MAX;
	volatile int16_t x192 = 73;
	int64_t t46 = -3LL;

	t46 = ((x189&x190)^(x191/x192));

	if (t46 != 126347562148695800LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = -23;
	int64_t x194 = 981861593333071LL;
	int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int64_t t47 = -2792148LL;

	t47 = ((x193&x194)^(x195/x196));

	if (t47 != -71075732444594872LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = 20;
	volatile uint32_t x199 = 13U;
	volatile int32_t x200 = 6625;

	t48 = ((x197&x198)^(x199/x200));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = 30;
	int16_t x203 = 1;
	uint64_t x204 = 9884LLU;
	volatile uint64_t t49 = 122LLU;

	t49 = ((x201&x202)^(x203/x204));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = 5;
	uint64_t x207 = 808659536529357914LLU;
	static volatile uint64_t x208 = 450216171637LLU;
	volatile uint64_t t50 = 30253555LLU;

	t50 = ((x205&x206)^(x207/x208));

	if (t50 != 1796155LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = INT8_MIN;
	uint64_t x212 = UINT64_MAX;
	uint64_t t51 = 237173257369359913LLU;

	t51 = ((x209&x210)^(x211/x212));

	if (t51 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x213 = -1;
	int16_t x214 = INT16_MIN;

	t52 = ((x213&x214)^(x215/x216));

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	int32_t x220 = -101535;

	t53 = ((x217&x218)^(x219/x220));

	if (t53 != 21150) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t t54 = 4045530724986675LLU;

	t54 = ((x221&x222)^(x223/x224));

	if (t54 != 18446744072541374902LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MAX;
	int16_t x227 = -978;
	volatile uint32_t t55 = 563025004U;

	t55 = ((x225&x226)^(x227/x228));

	if (t55 != 4294966604U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x229 = -1LL;
	uint16_t x230 = 515U;
	int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MAX;
	int64_t t56 = 2LL;

	t56 = ((x229&x230)^(x231/x232));

	if (t56 != -4294967811LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	static uint64_t x234 = 58533LLU;
	volatile int8_t x236 = -7;
	uint64_t t57 = 2351168LLU;

	t57 = ((x233&x234)^(x235/x236));

	if (t57 != 18446744073402728430LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	static int64_t x238 = INT64_MIN;
	uint32_t x239 = 1747439678U;
	int32_t x240 = INT32_MAX;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x237&x238)^(x239/x240));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	uint64_t x243 = 3LLU;
	uint64_t x244 = 18155LLU;
	static volatile uint64_t t59 = 274290LLU;

	t59 = ((x241&x242)^(x243/x244));

	if (t59 != 4294934528LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MAX;
	int64_t x247 = -1LL;
	volatile int64_t t60 = 891862945369LL;

	t60 = ((x245&x246)^(x247/x248));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -1LL;
	volatile int64_t x251 = -13LL;
	volatile int32_t x252 = 16627413;
	static int64_t t61 = 1003LL;

	t61 = ((x249&x250)^(x251/x252));

	if (t61 != -10LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MAX;
	uint64_t t62 = 3898223533507124441LLU;

	t62 = ((x253&x254)^(x255/x256));

	if (t62 != 2147483650LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x257 = 6453536178067LLU;
	int8_t x258 = -3;
	int32_t x259 = INT32_MIN;

	t63 = ((x257&x258)^(x259/x260));

	if (t63 != 6453536178064LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x263 = INT16_MIN;
	static int8_t x264 = 3;
	int64_t t64 = -194163059064LL;

	t64 = ((x261&x262)^(x263/x264));

	if (t64 != -54615LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x266 = 28966U;
	int8_t x267 = INT8_MAX;
	volatile int32_t t65 = -746;

	t65 = ((x265&x266)^(x267/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = 4;
	static int32_t x272 = INT32_MIN;
	uint32_t t66 = 2U;

	t66 = ((x269&x270)^(x271/x272));

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x273 = 63172564U;
	static volatile uint32_t x274 = 375577935U;
	volatile int32_t x275 = INT32_MIN;
	volatile uint32_t x276 = 1094U;

	t67 = ((x273&x274)^(x275/x276));

	if (t67 != 39796368U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x278 = 3551;
	volatile uint64_t t68 = 9200856270LLU;

	t68 = ((x277&x278)^(x279/x280));

	if (t68 != 3551LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x282 = INT8_MIN;
	volatile int16_t x283 = INT16_MAX;
	int32_t x284 = INT32_MIN;

	t69 = ((x281&x282)^(x283/x284));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = 11486U;

	t70 = ((x285&x286)^(x287/x288));

	if (t70 != 803009928360387LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	static int8_t x292 = 1;
	static volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x289&x290)^(x291/x292));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	static uint8_t x296 = 2U;
	volatile uint64_t t72 = 1403LLU;

	t72 = ((x293&x294)^(x295/x296));

	if (t72 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = 3;
	uint32_t x298 = 13U;
	int64_t x299 = 456766962LL;
	uint16_t x300 = 1U;
	volatile int64_t t73 = -3LL;

	t73 = ((x297&x298)^(x299/x300));

	if (t73 != 456766963LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -4;
	volatile uint8_t x304 = 7U;

	t74 = ((x301&x302)^(x303/x304));

	if (t74 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = -820LL;
	uint32_t x306 = UINT32_MAX;
	uint8_t x307 = UINT8_MAX;
	volatile int32_t x308 = 95980;
	volatile int64_t t75 = 129095140044061569LL;

	t75 = ((x305&x306)^(x307/x308));

	if (t75 != 4294966476LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = -58;
	volatile int8_t x311 = INT8_MIN;
	int32_t x312 = -81271;
	volatile int32_t t76 = 6828;

	t76 = ((x309&x310)^(x311/x312));

	if (t76 != -58) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 51U;
	static int8_t x315 = -15;
	int32_t x316 = INT32_MIN;
	uint32_t t77 = 14169892U;

	t77 = ((x313&x314)^(x315/x316));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t78 = -15105;

	t78 = ((x317&x318)^(x319/x320));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x322 = 1425441695LLU;
	uint64_t x323 = 3377LLU;
	volatile uint64_t t79 = 966908393719806LLU;

	t79 = ((x321&x322)^(x323/x324));

	if (t79 != 1425441687LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 23950U;
	uint64_t x326 = 6538948045449LLU;
	volatile uint8_t x327 = UINT8_MAX;
	uint16_t x328 = UINT16_MAX;

	t80 = ((x325&x326)^(x327/x328));

	if (t80 != 18568LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x329 = UINT32_MAX;
	int32_t x330 = 1;
	uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = INT8_MIN;

	t81 = ((x329&x330)^(x331/x332));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MAX;
	int32_t x336 = INT32_MIN;
	volatile int64_t t82 = 11961LL;

	t82 = ((x333&x334)^(x335/x336));

	if (t82 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x337 = 1;
	int16_t x338 = -1;
	int64_t x339 = 120846535822514170LL;
	int32_t x340 = INT32_MIN;
	int64_t t83 = -46608647203330LL;

	t83 = ((x337&x338)^(x339/x340));

	if (t83 != -56273554LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -2;
	static int8_t x342 = 2;
	int16_t x344 = -1;
	static volatile int64_t t84 = 1067395592167464LL;

	t84 = ((x341&x342)^(x343/x344));

	if (t84 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = INT16_MIN;
	static volatile int8_t x346 = 0;
	static volatile int64_t x347 = -1LL;
	volatile uint32_t x348 = UINT32_MAX;
	int64_t t85 = -25489LL;

	t85 = ((x345&x346)^(x347/x348));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x351 = 49U;
	volatile uint16_t x352 = 16U;
	int64_t t86 = -1LL;

	t86 = ((x349&x350)^(x351/x352));

	if (t86 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x353 = 0U;
	int64_t x355 = INT64_MAX;
	int16_t x356 = 1;
	int64_t t87 = INT64_MAX;

	t87 = ((x353&x354)^(x355/x356));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = 247U;
	int16_t x358 = 30;
	uint32_t x360 = 29359U;
	uint32_t t88 = 277U;

	t88 = ((x357&x358)^(x359/x360));

	if (t88 != 22U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x361 = INT16_MAX;
	volatile uint16_t x364 = UINT16_MAX;
	volatile int32_t t89 = 526;

	t89 = ((x361&x362)^(x363/x364));

	if (t89 != -32244) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = UINT16_MAX;
	static int16_t x366 = -43;
	volatile uint8_t x367 = UINT8_MAX;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = 0;

	t90 = ((x365&x366)^(x367/x368));

	if (t90 != -65494) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile int64_t x371 = -1LL;
	static uint8_t x372 = 11U;
	static int64_t t91 = 19540145LL;

	t91 = ((x369&x370)^(x371/x372));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x373 = INT16_MIN;
	static volatile uint64_t x374 = 5604380273875951298LLU;
	volatile uint64_t x375 = UINT64_MAX;
	uint64_t t92 = 482LLU;

	t92 = ((x373&x374)^(x375/x376));

	if (t92 != 5604380273875943425LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -1;
	volatile int16_t x378 = -1;
	int16_t x379 = -1;
	int32_t x380 = -18;
	static volatile int32_t t93 = -832;

	t93 = ((x377&x378)^(x379/x380));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 87038LLU;
	int64_t x383 = 4412198362199283LL;
	uint64_t x384 = 8258601001247LLU;
	uint64_t t94 = 1128343200LLU;

	t94 = ((x381&x382)^(x383/x384));

	if (t94 != 530LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MAX;
	int32_t x388 = -1;
	volatile int64_t t95 = -396756LL;

	t95 = ((x385&x386)^(x387/x388));

	if (t95 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 2U;
	static uint64_t t96 = 182LLU;

	t96 = ((x389&x390)^(x391/x392));

	if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x393 = 6;
	volatile int16_t x395 = 171;
	static int32_t x396 = -13275435;

	t97 = ((x393&x394)^(x395/x396));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x398 = 0;
	int16_t x399 = 19;
	int8_t x400 = INT8_MIN;
	int32_t t98 = -54002105;

	t98 = ((x397&x398)^(x399/x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = -1;
	int8_t x404 = 23;
	int64_t t99 = -4577130731593LL;

	t99 = ((x401&x402)^(x403/x404));

	if (t99 != -9223372036854775712LL) { NG(); } else { ; }
	
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

