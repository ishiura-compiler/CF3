#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 5U;
static int8_t x10 = -1;
int32_t x15 = -1780;
volatile uint64_t t4 = 30826LLU;
int32_t x31 = INT32_MAX;
int64_t t7 = INT64_MIN;
static volatile int8_t x42 = INT8_MAX;
int64_t x50 = 39487LL;
int16_t x51 = -95;
int16_t x66 = -1;
int8_t x67 = 40;
int8_t x74 = INT8_MIN;
volatile int32_t t15 = 96386;
static int16_t x77 = -1;
uint16_t x80 = 1U;
int16_t x90 = 1;
volatile uint16_t x99 = 6824U;
static volatile uint16_t x100 = 1U;
int64_t x101 = INT64_MIN;
int8_t x102 = -1;
uint8_t x103 = 15U;
volatile uint64_t t26 = 443LLU;
static uint8_t x125 = 9U;
int32_t x128 = INT32_MAX;
static volatile int8_t x132 = INT8_MAX;
uint32_t x135 = 0U;
int32_t x139 = -22;
static int32_t x141 = INT32_MAX;
int32_t x157 = INT32_MIN;
static uint16_t x164 = 441U;
int8_t x166 = INT8_MIN;
int32_t x167 = INT32_MAX;
static int8_t x170 = INT8_MIN;
uint16_t x178 = UINT16_MAX;
int64_t x182 = -53299280446LL;
volatile int64_t t40 = -6099926723887573LL;
volatile uint32_t t42 = 42884848U;
volatile int64_t x198 = INT64_MIN;
int8_t x204 = INT8_MIN;
volatile uint64_t t45 = 2367LLU;
volatile int32_t x220 = INT32_MAX;
volatile int64_t t47 = -2261788380000845891LL;
int32_t x224 = INT32_MIN;
uint8_t x239 = 30U;
static int16_t x241 = INT16_MIN;
int32_t x242 = -1;
uint16_t x245 = 7835U;
int64_t t57 = -2330230848021834777LL;
int32_t x264 = INT32_MAX;
uint64_t x266 = 2126297125991LLU;
uint64_t t59 = 312933560LLU;
static int64_t t60 = 4448087588LL;
uint32_t x276 = 503376U;
uint64_t t63 = 17LLU;
int8_t x287 = INT8_MIN;
int64_t x289 = -4703598LL;
uint64_t t68 = 196321385275LLU;
int16_t x310 = -3015;
int32_t x312 = INT32_MAX;
static int8_t x317 = INT8_MIN;
int16_t x334 = INT16_MIN;
int64_t x346 = -4106776973749LL;
int8_t x361 = INT8_MIN;
uint32_t x376 = 14320U;
int32_t x377 = 0;
uint16_t x382 = 35U;
static volatile int64_t t83 = -5171898LL;
static int16_t x388 = INT16_MIN;
int16_t x393 = -3482;
int8_t x395 = INT8_MIN;
uint32_t x399 = 6368403U;
volatile int64_t x402 = -1LL;
static int64_t x404 = 249LL;
static uint64_t x406 = UINT64_MAX;
volatile int32_t t89 = 1738;
uint64_t x413 = 7667204LLU;
uint32_t x414 = 2877U;
static volatile int32_t x415 = INT32_MIN;
uint64_t t90 = 14LLU;
int64_t x428 = INT64_MIN;
volatile uint64_t x431 = 1LLU;
int64_t x443 = -1LL;
uint64_t x451 = 1912397395188629156LLU;
static uint64_t t99 = 2009856761982LLU;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint16_t x2 = 5024U;
	static volatile uint64_t x3 = 1927696240489072493LLU;
	volatile uint64_t t0 = 742187324LLU;

	t0 = (x1&((x2+x3)^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 473803992808LL;
	uint32_t x11 = 8U;
	int32_t x12 = -183720;
	volatile int64_t t1 = -2593784663774423722LL;

	t1 = (x9&((x10+x11)^x12));

	if (t1 != 1357455944LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = -3305200;
	static int64_t x14 = 1365290294635435432LL;
	uint64_t x16 = 15524287LLU;
	volatile uint64_t t2 = 30500175484172LLU;

	t2 = (x13&((x14+x15)^x16));

	if (t2 != 1365290294647718144LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = INT64_MIN;
	uint8_t x18 = UINT8_MAX;
	volatile uint64_t x19 = 13155579847820LLU;
	uint32_t x20 = 75183U;
	static volatile uint64_t t3 = 6LLU;

	t3 = (x17&((x18+x19)^x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = UINT64_MAX;
	volatile uint32_t x26 = 25546U;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 23038016U;

	t4 = (x25&((x26+x27)^x28));

	if (t4 != 4271926154LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -536792LL;
	int8_t x30 = INT8_MIN;
	uint8_t x32 = UINT8_MAX;
	int64_t t5 = 1223458105322459LL;

	t5 = (x29&((x30+x31)^x32));

	if (t5 != 2146946816LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MAX;
	int8_t x34 = 41;
	int16_t x35 = -7552;
	int8_t x36 = -1;
	int64_t t6 = 281449284824LL;

	t6 = (x33&((x34+x35)^x36));

	if (t6 != 7510LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MIN;
	static volatile uint8_t x38 = UINT8_MAX;
	static volatile int16_t x39 = INT16_MIN;
	int16_t x40 = 1;

	t7 = (x37&((x38+x39)^x40));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 1LLU;
	int16_t x43 = INT16_MIN;
	volatile uint16_t x44 = 11U;
	volatile uint64_t t8 = 3187383LLU;

	t8 = (x41&((x42+x43)^x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 3U;
	volatile uint32_t x52 = 11593119U;
	static int64_t t9 = 1754LL;

	t9 = (x49&((x50+x51)^x52));

	if (t9 != 3LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 59U;
	static int32_t x54 = -1;
	volatile int64_t x55 = -4LL;
	volatile int16_t x56 = 1;
	int64_t t10 = -4566526955915328519LL;

	t10 = (x53&((x54+x55)^x56));

	if (t10 != 58LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = -156360LL;
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	uint32_t x60 = 41657172U;
	static volatile int64_t t11 = -456LL;

	t11 = (x57&((x58+x59)^x60));

	if (t11 != 4253286696LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = 3133744;
	volatile uint32_t x62 = 10U;
	static volatile int8_t x63 = INT8_MIN;
	volatile int8_t x64 = -1;
	uint32_t t12 = 885239398U;

	t12 = (x61&((x62+x63)^x64));

	if (t12 != 48U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = 1219;
	int16_t x68 = INT16_MIN;
	int32_t t13 = -621;

	t13 = (x65&((x66+x67)^x68));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x69 = 5;
	int32_t x70 = -952;
	volatile int32_t x71 = 498;
	int64_t x72 = INT64_MIN;
	int64_t t14 = 1214416174819LL;

	t14 = (x69&((x70+x71)^x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 1021U;
	static int16_t x75 = 7;
	int32_t x76 = INT32_MAX;

	t15 = (x73&((x74+x75)^x76));

	if (t15 != 120) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x78 = UINT32_MAX;
	volatile int64_t x79 = 50715861784753LL;
	volatile int64_t t16 = -263800503752307265LL;

	t16 = (x77&((x78+x79)^x80));

	if (t16 != 50720156752049LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -89;
	int64_t x82 = -681971946317384LL;
	int32_t x83 = INT32_MAX;
	int8_t x84 = -1;
	volatile int64_t t17 = 8690665892LL;

	t17 = (x81&((x82+x83)^x84));

	if (t17 != 681969798833664LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int32_t x86 = INT32_MIN;
	uint16_t x87 = 8U;
	static int16_t x88 = -6745;
	int32_t t18 = 24525;

	t18 = (x85&((x86+x87)^x88));

	if (t18 != 58799) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x89 = 106U;
	int64_t x91 = INT64_MIN;
	int64_t x92 = -1LL;
	static volatile int64_t t19 = 2378842249LL;

	t19 = (x89&((x90+x91)^x92));

	if (t19 != 106LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = 1;
	uint16_t x94 = 0U;
	static uint16_t x95 = UINT16_MAX;
	int16_t x96 = INT16_MIN;
	int32_t t20 = -426554;

	t20 = (x93&((x94+x95)^x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MIN;
	int16_t x98 = 1828;
	static int64_t t21 = 74947LL;

	t21 = (x97&((x98+x99)^x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x104 = INT16_MIN;
	static volatile int64_t t22 = INT64_MIN;

	t22 = (x101&((x102+x103)^x104));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = INT32_MAX;
	uint16_t x106 = 27346U;
	int16_t x107 = -888;
	int32_t x108 = INT32_MIN;
	int32_t t23 = -207643866;

	t23 = (x105&((x106+x107)^x108));

	if (t23 != 26458) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x109 = -1;
	uint64_t x110 = 58LLU;
	static int16_t x111 = 1244;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t24 = 35740290188457LLU;

	t24 = (x109&((x110+x111)^x112));

	if (t24 != 18446744071562069270LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = 110082LL;
	uint8_t x119 = 13U;
	int64_t x120 = -371005LL;
	volatile int64_t t25 = 5911LL;

	t25 = (x117&((x118+x119)^x120));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x122 = 9U;
	uint64_t x123 = 1618438203839017LLU;
	static int32_t x124 = INT32_MIN;

	t26 = (x121&((x122+x123)^x124));

	if (t26 != 18445125633433080320LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = INT16_MAX;
	static uint64_t x127 = UINT64_MAX;
	static volatile uint64_t t27 = 27163LLU;

	t27 = (x125&((x126+x127)^x128));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x129 = 107U;
	volatile int16_t x130 = 119;
	static int8_t x131 = 7;
	int32_t t28 = 44249724;

	t28 = (x129&((x130+x131)^x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = -7;
	uint8_t x134 = 0U;
	int32_t x136 = -1;
	static uint32_t t29 = 3060U;

	t29 = (x133&((x134+x135)^x136));

	if (t29 != 4294967289U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 7U;
	int16_t x138 = INT16_MAX;
	int8_t x140 = 1;
	volatile int32_t t30 = -4632;

	t30 = (x137&((x138+x139)^x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = 8346293LL;
	uint32_t x143 = 1147U;
	static int32_t x144 = INT32_MAX;
	int64_t t31 = -914LL;

	t31 = (x141&((x142+x143)^x144));

	if (t31 != 2139136207LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -1;
	uint64_t x146 = 3393512055LLU;
	int32_t x147 = INT32_MAX;
	volatile int16_t x148 = INT16_MIN;
	uint64_t t32 = 35168158261256668LLU;

	t32 = (x145&((x146+x147)^x148));

	if (t32 != 18446744068168573558LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = 0;
	uint8_t x155 = UINT8_MAX;
	int8_t x156 = 7;
	volatile int32_t t33 = 46610;

	t33 = (x153&((x154+x155)^x156));

	if (t33 != 120) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x158 = INT16_MIN;
	int8_t x159 = -1;
	volatile int64_t x160 = -1LL;
	static int64_t t34 = -250095292562LL;

	t34 = (x157&((x158+x159)^x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = 1LL;
	static int64_t x162 = INT64_MIN;
	volatile uint64_t x163 = 1483LLU;
	uint64_t t35 = 3529LLU;

	t35 = (x161&((x162+x163)^x164));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 12;
	static int64_t x168 = -5795716114LL;
	volatile int64_t t36 = -1437188LL;

	t36 = (x165&((x166+x167)^x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MIN;
	static uint32_t x171 = UINT32_MAX;
	volatile int64_t x172 = 14798LL;
	static volatile int64_t t37 = -45438LL;

	t37 = (x169&((x170+x171)^x172));

	if (t37 != 4294934528LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x173 = -2017;
	volatile uint32_t x174 = 1604607025U;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	uint32_t t38 = 1243U;

	t38 = (x173&((x174+x175)^x176));

	if (t38 != 542908430U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int16_t x179 = -198;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t39 = 2707809U;

	t39 = (x177&((x178+x179)^x180));

	if (t39 != 4294901958U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 333800U;
	static volatile uint8_t x183 = 9U;
	int8_t x184 = -1;

	t40 = (x181&((x182+x183)^x184));

	if (t40 != 4640LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = INT8_MIN;
	uint8_t x186 = 1U;
	static int8_t x187 = 1;
	int64_t x188 = INT64_MIN;
	int64_t t41 = INT64_MIN;

	t41 = (x185&((x186+x187)^x188));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MAX;
	uint32_t x190 = 7U;
	static int32_t x191 = -52;
	static int16_t x192 = INT16_MIN;

	t42 = (x189&((x190+x191)^x192));

	if (t42 != 83U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = 26425681774092LL;
	int32_t x199 = 116278168;
	int32_t x200 = INT32_MAX;
	static int64_t t43 = 546904847436156650LL;

	t43 = (x197&((x198+x199)^x200));

	if (t43 != 822084612LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -7423471;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = -398137746;
	volatile int32_t t44 = -15;

	t44 = (x201&((x202+x203)^x204));

	if (t44 != 394926081) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -1LL;
	static int8_t x210 = -3;
	uint64_t x211 = UINT64_MAX;
	uint64_t x212 = UINT64_MAX;

	t45 = (x209&((x210+x211)^x212));

	if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = -1;
	uint64_t x214 = 828LLU;
	uint16_t x215 = 18163U;
	uint64_t x216 = 8109932097790LLU;
	static uint64_t t46 = 164625527016LLU;

	t46 = (x213&((x214+x215)^x216));

	if (t46 != 8109932116689LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -5LL;
	uint32_t x218 = 207593U;
	uint16_t x219 = 1443U;

	t47 = (x217&((x218+x219)^x220));

	if (t47 != 2147274611LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = UINT32_MAX;
	uint32_t x222 = 78U;
	volatile uint16_t x223 = UINT16_MAX;
	static volatile uint32_t t48 = 10U;

	t48 = (x221&((x222+x223)^x224));

	if (t48 != 2147549261U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x225 = INT32_MIN;
	int16_t x226 = -10424;
	int8_t x227 = INT8_MIN;
	volatile int32_t x228 = 38813;
	static int32_t t49 = INT32_MIN;

	t49 = (x225&((x226+x227)^x228));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	static int8_t x230 = INT8_MAX;
	static int32_t x231 = INT32_MIN;
	static int8_t x232 = -51;
	static int32_t t50 = -1536026;

	t50 = (x229&((x230+x231)^x232));

	if (t50 != 65458) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = INT32_MAX;
	static int32_t x234 = INT32_MIN;
	uint32_t x235 = 1064563211U;
	int8_t x236 = INT8_MIN;
	static volatile uint32_t t51 = 131272U;

	t51 = (x233&((x234+x235)^x236));

	if (t51 != 1082920331U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x237 = 3U;
	static int64_t x238 = 688LL;
	int64_t x240 = -180329955392LL;
	volatile int64_t t52 = 75607178967LL;

	t52 = (x237&((x238+x239)^x240));

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x243 = 10117903378948685LL;
	int16_t x244 = INT16_MIN;
	int64_t t53 = 20294746LL;

	t53 = (x241&((x242+x243)^x244));

	if (t53 != -10117903378972672LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x246 = 9U;
	int64_t x247 = 623687163LL;
	int32_t x248 = 233555;
	int64_t t54 = -23731706013LL;

	t54 = (x245&((x246+x247)^x248));

	if (t54 != 1555LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x249 = INT16_MIN;
	uint64_t x250 = 13817LLU;
	volatile int32_t x251 = INT32_MAX;
	uint64_t x252 = 2LLU;
	volatile uint64_t t55 = 244723282025014LLU;

	t55 = (x249&((x250+x251)^x252));

	if (t55 != 2147483648LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = INT64_MIN;
	int32_t x254 = -8037800;
	volatile int32_t x255 = -1;
	volatile int32_t x256 = INT32_MAX;
	int64_t t56 = INT64_MIN;

	t56 = (x253&((x254+x255)^x256));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = INT32_MIN;
	static int16_t x258 = 241;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;

	t57 = (x257&((x258+x259)^x260));

	if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = -1LL;
	int32_t x263 = 493;
	volatile int64_t t58 = -188314559LL;

	t58 = (x261&((x262+x263)^x264));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x265 = 51U;
	int32_t x267 = -11825391;
	int64_t x268 = INT64_MAX;

	t59 = (x265&((x266+x267)^x268));

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;

	t60 = (x269&((x270+x271)^x272));

	if (t60 != 4294934527LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 675302142U;
	int32_t x274 = INT32_MAX;
	volatile int16_t x275 = -1;
	uint32_t t61 = 662762085U;

	t61 = (x273&((x274+x275)^x276));

	if (t61 != 675299502U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = 387417988U;
	volatile uint8_t x279 = 40U;
	int32_t x280 = 113273091;
	volatile uint64_t t62 = 1883LLU;

	t62 = (x277&((x278+x279)^x280));

	if (t62 != 299364015LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x281 = 74798482751214830LLU;
	int8_t x282 = -1;
	uint8_t x283 = 0U;
	uint8_t x284 = 3U;

	t63 = (x281&((x282+x283)^x284));

	if (t63 != 74798482751214828LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = 3823011044LL;
	uint8_t x286 = 6U;
	volatile int16_t x288 = INT16_MAX;
	volatile int64_t t64 = 0LL;

	t64 = (x285&((x286+x287)^x288));

	if (t64 != 3823009888LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x290 = 41U;
	int64_t x291 = INT64_MIN;
	int64_t x292 = -1LL;
	int64_t t65 = 194485078340427LL;

	t65 = (x289&((x290+x291)^x292));

	if (t65 != 9223372036850072210LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x293 = 232U;
	static int32_t x294 = INT32_MIN;
	int8_t x295 = 25;
	uint8_t x296 = 116U;
	uint32_t t66 = 92U;

	t66 = (x293&((x294+x295)^x296));

	if (t66 != 104U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = UINT16_MAX;
	volatile int64_t x300 = 1998601071LL;
	int64_t t67 = -8702328LL;

	t67 = (x297&((x298+x299)^x300));

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = 25909261LL;
	uint64_t x302 = 1028910588249716727LLU;
	uint64_t x303 = 712961134030889LLU;
	int64_t x304 = 4200LL;

	t68 = (x301&((x302+x303)^x304));

	if (t68 != 16848904LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x309 = -561548711;
	static int8_t x311 = INT8_MIN;
	int32_t t69 = 1055065892;

	t69 = (x309&((x310+x311)^x312));

	if (t69 != -2147483584) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile uint32_t x314 = 18798U;
	int32_t x315 = 4325010;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t70 = 131679111701LLU;

	t70 = (x313&((x314+x315)^x316));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x318 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = -4028723LL;
	volatile int64_t t71 = -176619552370131949LL;

	t71 = (x317&((x318+x319)^x320));

	if (t71 != 2143451392LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = -15;
	uint32_t x322 = 148U;
	int16_t x323 = 5;
	static volatile int16_t x324 = -1;
	static volatile uint32_t t72 = 21U;

	t72 = (x321&((x322+x323)^x324));

	if (t72 != 4294967136U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x325 = 10;
	volatile int8_t x326 = INT8_MAX;
	static volatile int16_t x327 = INT16_MIN;
	static int64_t x328 = INT64_MAX;
	static int64_t t73 = 603034LL;

	t73 = (x325&((x326+x327)^x328));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x329 = 377U;
	int64_t x330 = INT64_MIN;
	static uint32_t x331 = 31U;
	uint64_t x332 = 3612490286LLU;
	volatile uint64_t t74 = 54883031718LLU;

	t74 = (x329&((x330+x331)^x332));

	if (t74 != 49LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x333 = 9072LLU;
	volatile int16_t x335 = -1;
	int32_t x336 = INT32_MIN;
	uint64_t t75 = 9540221675LLU;

	t75 = (x333&((x334+x335)^x336));

	if (t75 != 9072LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	static int64_t x344 = -1LL;
	int64_t t76 = 25896784LL;

	t76 = (x341&((x342+x343)^x344));

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x345 = INT64_MAX;
	volatile uint8_t x347 = 122U;
	uint64_t x348 = 1479815536609LLU;
	volatile uint64_t t77 = 180142779LLU;

	t77 = (x345&((x346+x347)^x348));

	if (t77 != 9223368855808995620LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = 1;
	static int16_t x354 = -13005;
	static uint64_t x355 = 10726199760145LLU;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t78 = 136078916872753191LLU;

	t78 = (x353&((x354+x355)^x356));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = INT8_MIN;
	static int32_t x364 = 472255571;
	static volatile int32_t t79 = -33;

	t79 = (x361&((x362+x363)^x364));

	if (t79 != -472255616) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = 0;
	int32_t x371 = 788;
	volatile int16_t x372 = INT16_MIN;
	int32_t t80 = -3;

	t80 = (x369&((x370+x371)^x372));

	if (t80 != -32000) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	static int64_t x375 = INT64_MAX;
	volatile int64_t t81 = -29258761592451LL;

	t81 = (x373&((x374+x375)^x376));

	if (t81 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x378 = UINT8_MAX;
	uint32_t x379 = 1U;
	int32_t x380 = INT32_MIN;
	uint32_t t82 = 6117U;

	t82 = (x377&((x378+x379)^x380));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = -1176767361LL;
	int32_t x383 = INT32_MIN;
	static int32_t x384 = INT32_MIN;

	t83 = (x381&((x382+x383)^x384));

	if (t83 != 35LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x385 = 2U;
	volatile int32_t x386 = INT32_MIN;
	volatile uint8_t x387 = 9U;
	int32_t t84 = 257;

	t84 = (x385&((x386+x387)^x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x394 = -1;
	volatile uint16_t x396 = 3538U;
	volatile int32_t t85 = 1;

	t85 = (x393&((x394+x395)^x396));

	if (t85 != -3548) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MAX;
	volatile uint64_t x400 = 235934360515020454LLU;
	uint64_t t86 = 29082LLU;

	t86 = (x397&((x398+x399)^x400));

	if (t86 != 235934362660470784LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -1;
	volatile uint8_t x403 = UINT8_MAX;
	volatile int64_t t87 = -56687094762606LL;

	t87 = (x401&((x402+x403)^x404));

	if (t87 != 7LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x405 = INT16_MAX;
	int64_t x407 = -18LL;
	volatile int32_t x408 = 19;
	uint64_t t88 = 3LLU;

	t88 = (x405&((x406+x407)^x408));

	if (t88 != 32766LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = -1;
	uint16_t x410 = 765U;
	uint8_t x411 = 10U;
	int16_t x412 = INT16_MAX;

	t89 = (x409&((x410+x411)^x412));

	if (t89 != 31992) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x416 = 58LLU;

	t90 = (x413&((x414+x415)^x416));

	if (t90 != 2564LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = UINT16_MAX;
	static uint64_t x418 = UINT64_MAX;
	static int64_t x419 = INT64_MAX;
	static volatile int64_t x420 = -1LL;
	volatile uint64_t t91 = 44108724409356931LLU;

	t91 = (x417&((x418+x419)^x420));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x421 = 15933436904741629LLU;
	uint64_t x422 = 3368555895764LLU;
	volatile int16_t x423 = 168;
	int32_t x424 = -1;
	volatile uint64_t t92 = 82712977825LLU;

	t92 = (x421&((x422+x423)^x424));

	if (t92 != 15930137086263937LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = -3016;
	volatile uint8_t x426 = 0U;
	int16_t x427 = INT16_MAX;
	volatile int64_t t93 = 78846865693LL;

	t93 = (x425&((x426+x427)^x428));

	if (t93 != -9223372036854746056LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = 3776U;
	uint32_t x430 = 143U;
	volatile int16_t x432 = INT16_MAX;
	volatile uint64_t t94 = 235320376960LLU;

	t94 = (x429&((x430+x431)^x432));

	if (t94 != 3648LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x433 = INT8_MAX;
	int32_t x434 = -85848140;
	int8_t x435 = INT8_MIN;
	volatile uint64_t x436 = 0LLU;
	uint64_t t95 = 24976381LLU;

	t95 = (x433&((x434+x435)^x436));

	if (t95 != 52LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint32_t x439 = 262461U;
	volatile int32_t x440 = INT32_MIN;
	volatile uint32_t t96 = 36699U;

	t96 = (x437&((x438+x439)^x440));

	if (t96 != 262461U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x441 = -1;
	int64_t x442 = -1LL;
	volatile int32_t x444 = -1;
	volatile int64_t t97 = 86803LL;

	t97 = (x441&((x442+x443)^x444));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x445 = -13228;
	static volatile int8_t x446 = 61;
	int16_t x447 = -1;
	int8_t x448 = -1;
	volatile int32_t t98 = -5483;

	t98 = (x445&((x446+x447)^x448));

	if (t98 != -13248) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = -1;
	uint64_t x450 = 105844683385315LLU;
	int32_t x452 = 86330;

	t99 = (x449&((x450+x451)^x452));

	if (t99 != 1912503239872068029LLU) { NG(); } else { ; }
	
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

