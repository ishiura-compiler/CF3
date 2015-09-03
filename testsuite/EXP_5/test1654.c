#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x1 = INT16_MIN;
static uint32_t t1 = 2489U;
uint32_t x10 = UINT32_MAX;
uint8_t x19 = UINT8_MAX;
uint64_t t5 = UINT64_MAX;
uint64_t x35 = 454229LLU;
int8_t x36 = 0;
volatile int32_t t10 = 45953;
uint16_t x45 = UINT16_MAX;
uint64_t x55 = UINT64_MAX;
int64_t t14 = -7386LL;
volatile int16_t x63 = -14;
int16_t x65 = INT16_MAX;
uint32_t t16 = 73443U;
int8_t x74 = INT8_MIN;
static int32_t x77 = INT32_MAX;
static uint32_t x78 = UINT32_MAX;
static int64_t t19 = 44217647107327LL;
int32_t x96 = INT32_MAX;
static uint64_t t26 = 118721215LLU;
static int32_t x111 = -7359;
uint32_t x112 = UINT32_MAX;
int32_t x114 = INT32_MIN;
uint64_t x116 = 7958835929421LLU;
int64_t x119 = -1LL;
int64_t x121 = INT64_MAX;
int16_t x125 = INT16_MIN;
int64_t x129 = -188939LL;
int16_t x130 = INT16_MAX;
int32_t x131 = -1;
int8_t x136 = -1;
volatile int32_t t33 = -10062388;
uint16_t x151 = 29U;
static int8_t x156 = INT8_MIN;
int32_t x157 = INT32_MIN;
uint16_t x171 = 768U;
volatile int32_t t43 = -231;
int8_t x182 = INT8_MAX;
static int32_t t45 = -260317887;
static int8_t x185 = 0;
uint64_t x186 = 2143030215986440LLU;
volatile int32_t t46 = -143;
static volatile int64_t x192 = 173053782122238LL;
volatile int64_t t47 = 16182LL;
volatile int32_t x194 = -48641;
int16_t x195 = INT16_MAX;
int32_t t48 = 110;
int64_t x201 = INT64_MIN;
uint16_t x204 = 1424U;
uint8_t x208 = 74U;
volatile int32_t t51 = 17269776;
uint8_t x209 = UINT8_MAX;
int8_t x229 = INT8_MIN;
static int64_t x231 = INT64_MIN;
volatile int32_t t57 = 711927;
int64_t x234 = INT64_MAX;
int8_t x245 = -1;
uint32_t x248 = 346626443U;
int64_t x249 = 3147750041608413462LL;
volatile int64_t t62 = -2458LL;
uint64_t x256 = 9069534294100330730LLU;
uint64_t t63 = 3324357424137LLU;
int64_t x261 = -54809499473025LL;
int8_t x270 = 4;
int32_t x272 = INT32_MAX;
static uint64_t x273 = 3352724204369LLU;
volatile int8_t x275 = INT8_MAX;
uint8_t x279 = 2U;
static uint32_t x280 = UINT32_MAX;
int32_t x283 = INT32_MAX;
volatile int32_t t71 = 232561;
int64_t x289 = INT64_MIN;
uint32_t x290 = 452286U;
uint16_t x292 = UINT16_MAX;
static uint32_t x294 = UINT32_MAX;
uint32_t x311 = UINT32_MAX;
int32_t x315 = INT32_MIN;
static volatile uint64_t t79 = 1806154085LLU;
int32_t t83 = INT32_MIN;
uint64_t x339 = 4132242LLU;
volatile int32_t t84 = -1024922;
static int64_t x343 = 228183683219777531LL;
int8_t x345 = -27;
int32_t t89 = 27;
static uint64_t x363 = 113392307LLU;
int8_t x376 = 0;
static int32_t x379 = -596878408;
int32_t x380 = INT32_MIN;
volatile int32_t t94 = 211585298;
int32_t t95 = 1231;
volatile int8_t x386 = INT8_MAX;


void f0(void) {
	int16_t x2 = -19;
	uint16_t x3 = 19074U;
	volatile uint64_t x4 = 333857289730802LLU;
	uint64_t t0 = 33304131809LLU;

	t0 = (x1*((x2<=x3)&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -55;
	uint32_t x6 = 31U;
	int32_t x7 = -58862913;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5*((x6<=x7)&x8));

	if (t1 != 4294967241U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x11 = 14558U;
	int64_t x12 = -196005473844LL;
	volatile int64_t t2 = 0LL;

	t2 = (x9*((x10<=x11)&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	int64_t x14 = 1805604372LL;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -3;
	volatile int32_t t3 = 48168;

	t3 = (x13*((x14<=x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -772;
	int64_t x18 = -1LL;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 124779178;

	t4 = (x17*((x18<=x19)&x20));

	if (t4 != -772) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	static uint32_t x23 = 906013U;
	uint64_t x24 = UINT64_MAX;

	t5 = (x21*((x22<=x23)&x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	uint8_t x26 = 25U;
	uint16_t x27 = 1U;
	int64_t x28 = 179394LL;
	volatile int64_t t6 = 446192LL;

	t6 = (x25*((x26<=x27)&x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	static int64_t x30 = INT64_MIN;
	static int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -1003349;

	t7 = (x29*((x30<=x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 1628U;
	volatile int32_t t8 = -1040413;

	t8 = (x33*((x34<=x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static int8_t x38 = INT8_MIN;
	static int16_t x39 = -1;
	int64_t x40 = 402968LL;
	uint64_t t9 = 267336448029820465LLU;

	t9 = (x37*((x38<=x39)&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MAX;
	int8_t x44 = -1;

	t10 = (x41*((x42<=x43)&x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = 29;
	int64_t x47 = INT64_MAX;
	static int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 1816459;

	t11 = (x45*((x46<=x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 12U;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = -6;
	volatile int8_t x52 = INT8_MAX;
	uint32_t t12 = 184086U;

	t12 = (x49*((x50<=x51)&x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint64_t x54 = 38690778LLU;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -199558494;

	t13 = (x53*((x54<=x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 109U;
	volatile uint8_t x58 = 14U;
	volatile uint8_t x59 = UINT8_MAX;
	int64_t x60 = -1LL;

	t14 = (x57*((x58<=x59)&x60));

	if (t14 != 109LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint32_t x62 = 75239U;
	int8_t x64 = INT8_MAX;
	int32_t t15 = -32943518;

	t15 = (x61*((x62<=x63)&x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 40U;
	static int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;

	t16 = (x65*((x66<=x67)&x68));

	if (t16 != 32767U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -125599;
	int8_t x70 = -1;
	static uint32_t x71 = 336108U;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 2;

	t17 = (x69*((x70<=x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	int8_t x76 = -3;
	int32_t t18 = 10549045;

	t18 = (x73*((x74<=x75)&x76));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x79 = INT8_MIN;
	static int64_t x80 = -1LL;

	t19 = (x77*((x78<=x79)&x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 3367899751768542LLU;
	int32_t x82 = INT32_MAX;
	volatile int64_t x83 = INT64_MAX;
	int64_t x84 = -529866366LL;
	volatile uint64_t t20 = 20581467702LLU;

	t20 = (x81*((x82<=x83)&x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 2778U;
	static volatile int16_t x86 = -1;
	int64_t x87 = -1LL;
	uint64_t x88 = 1743850571608868612LLU;
	uint64_t t21 = 15275497LLU;

	t21 = (x85*((x86<=x87)&x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 21U;
	volatile int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -1719724;

	t22 = (x89*((x90<=x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	static int32_t x94 = INT32_MAX;
	static int8_t x95 = 25;
	int64_t t23 = -414121702340717092LL;

	t23 = (x93*((x94<=x95)&x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile uint8_t x98 = 52U;
	int64_t x99 = INT64_MIN;
	static int8_t x100 = 1;
	volatile int32_t t24 = 1;

	t24 = (x97*((x98<=x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x102 = 290517;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MIN;
	static volatile uint64_t t25 = 248LLU;

	t25 = (x101*((x102<=x103)&x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint32_t x106 = 2742705U;
	int64_t x107 = INT64_MIN;
	static uint64_t x108 = UINT64_MAX;

	t26 = (x105*((x106<=x107)&x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	volatile uint32_t t27 = 12530U;

	t27 = (x109*((x110<=x111)&x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static uint8_t x115 = 15U;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113*((x114<=x115)&x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MAX;
	volatile int64_t x120 = INT64_MIN;
	int64_t t29 = -1913163974231819314LL;

	t29 = (x117*((x118<=x119)&x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	static int8_t x124 = -1;
	static int64_t t30 = 8236475LL;

	t30 = (x121*((x122<=x123)&x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 0;
	volatile int32_t x127 = INT32_MIN;
	static uint32_t x128 = 822112U;
	uint32_t t31 = 993717U;

	t31 = (x125*((x126<=x127)&x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x132 = 7U;
	volatile int64_t t32 = -2076090LL;

	t32 = (x129*((x130<=x131)&x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int8_t x134 = INT8_MIN;
	static volatile int64_t x135 = INT64_MIN;

	t33 = (x133*((x134<=x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static volatile int8_t x138 = -1;
	int8_t x139 = -8;
	int32_t x140 = INT32_MIN;
	uint32_t t34 = 490U;

	t34 = (x137*((x138<=x139)&x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 374;
	int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MIN;
	int16_t x144 = -1;
	volatile int32_t t35 = -210748;

	t35 = (x141*((x142<=x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint8_t x146 = 0U;
	int64_t x147 = -1LL;
	uint16_t x148 = 22U;
	volatile int32_t t36 = 24569643;

	t36 = (x145*((x146<=x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 7690932748604992LL;
	int8_t x150 = INT8_MIN;
	uint16_t x152 = 3U;
	int64_t t37 = -135954568547075LL;

	t37 = (x149*((x150<=x151)&x152));

	if (t37 != 7690932748604992LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x154 = UINT64_MAX;
	static uint32_t x155 = 55949U;
	int32_t t38 = -5;

	t38 = (x153*((x154<=x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 14U;
	static volatile int64_t x159 = INT64_MIN;
	static uint32_t x160 = UINT32_MAX;
	static uint32_t t39 = 10U;

	t39 = (x157*((x158<=x159)&x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint32_t x162 = 0U;
	int32_t x163 = INT32_MIN;
	volatile int8_t x164 = -5;
	static volatile int32_t t40 = 1;

	t40 = (x161*((x162<=x163)&x164));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 11794203U;
	static uint32_t x166 = 25940U;
	volatile int8_t x167 = INT8_MIN;
	uint32_t x168 = 83141U;
	uint32_t t41 = 455U;

	t41 = (x165*((x166<=x167)&x168));

	if (t41 != 11794203U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	volatile int32_t x170 = INT32_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 218078145;

	t42 = (x169*((x170<=x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = 103;
	static uint8_t x176 = UINT8_MAX;

	t43 = (x173*((x174<=x175)&x176));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 5U;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -289421;

	t44 = (x177*((x178<=x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int64_t x183 = -87289935646412904LL;
	int16_t x184 = INT16_MIN;

	t45 = (x181*((x182<=x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = INT64_MAX;
	int8_t x188 = INT8_MIN;

	t46 = (x185*((x186<=x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -66;
	volatile uint32_t x190 = 142935655U;
	uint32_t x191 = UINT32_MAX;

	t47 = (x189*((x190<=x191)&x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = UINT8_MAX;
	int32_t x196 = INT32_MIN;

	t48 = (x193*((x194<=x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int32_t x198 = -1;
	int16_t x199 = -10280;
	int16_t x200 = -1;
	volatile int64_t t49 = 7LL;

	t49 = (x197*((x198<=x199)&x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -1LL;
	uint8_t x203 = 73U;
	volatile int64_t t50 = 7031913158LL;

	t50 = (x201*((x202<=x203)&x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	static volatile int16_t x207 = INT16_MAX;

	t51 = (x205*((x206<=x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = 309441607334LL;

	t52 = (x209*((x210<=x211)&x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int32_t x214 = INT32_MAX;
	int8_t x215 = -1;
	static volatile int8_t x216 = 0;
	volatile int32_t t53 = -157528;

	t53 = (x213*((x214<=x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 28U;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = -1;
	volatile int32_t x220 = -1;
	int32_t t54 = -10652;

	t54 = (x217*((x218<=x219)&x220));

	if (t54 != 28) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static uint64_t x222 = 2861774655678766LLU;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x221*((x222<=x223)&x224));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	static int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MIN;
	int64_t t56 = -4337667922645LL;

	t56 = (x225*((x226<=x227)&x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = INT64_MIN;
	uint8_t x232 = UINT8_MAX;

	t57 = (x229*((x230<=x231)&x232));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x233 = UINT64_MAX;
	uint64_t x235 = 218066LLU;
	int64_t x236 = INT64_MAX;
	static uint64_t t58 = 32765238LLU;

	t58 = (x233*((x234<=x235)&x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1414753247003964150LL;
	volatile int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = 18U;
	volatile int64_t t59 = -26353653806091LL;

	t59 = (x237*((x238<=x239)&x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	static int64_t x242 = INT64_MIN;
	int32_t x243 = 0;
	uint8_t x244 = 67U;
	int32_t t60 = 9;

	t60 = (x241*((x242<=x243)&x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x246 = INT16_MIN;
	uint16_t x247 = 2980U;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x245*((x246<=x247)&x248));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	uint16_t x252 = UINT16_MAX;

	t62 = (x249*((x250<=x251)&x252));

	if (t62 != 3147750041608413462LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = INT64_MIN;
	static int8_t x255 = 26;

	t63 = (x253*((x254<=x255)&x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint64_t x259 = 28847LLU;
	static uint32_t x260 = UINT32_MAX;
	volatile int64_t t64 = -2718708LL;

	t64 = (x257*((x258<=x259)&x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = 1675U;
	int64_t t65 = 229135LL;

	t65 = (x261*((x262<=x263)&x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 7U;
	volatile int8_t x266 = -1;
	int64_t x267 = -225177590970LL;
	int16_t x268 = 22;
	int32_t t66 = 6;

	t66 = (x265*((x266<=x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static int16_t x271 = INT16_MIN;
	static int32_t t67 = -5666;

	t67 = (x269*((x270<=x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = 1U;
	int16_t x276 = -1;
	volatile uint64_t t68 = 779LLU;

	t68 = (x273*((x274<=x275)&x276));

	if (t68 != 3352724204369LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int8_t x278 = -11;
	uint32_t t69 = 1U;

	t69 = (x277*((x278<=x279)&x280));

	if (t69 != 255U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int64_t x282 = -42311087051LL;
	int64_t x284 = 0LL;
	int64_t t70 = -1LL;

	t70 = (x281*((x282<=x283)&x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	static int8_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	uint16_t x288 = 238U;

	t71 = (x285*((x286<=x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x291 = 973LLU;
	volatile int64_t t72 = -4217877841454897LL;

	t72 = (x289*((x290<=x291)&x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 6U;
	static volatile uint8_t x295 = 15U;
	volatile uint64_t x296 = 7790380LLU;
	volatile uint64_t t73 = 0LLU;

	t73 = (x293*((x294<=x295)&x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -1;
	int64_t x298 = INT64_MAX;
	int64_t x299 = INT64_MIN;
	int8_t x300 = 12;
	volatile int32_t t74 = 41610400;

	t74 = (x297*((x298<=x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint64_t x302 = UINT64_MAX;
	uint16_t x303 = UINT16_MAX;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t75 = -3821711407LL;

	t75 = (x301*((x302<=x303)&x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = -17LL;
	static int64_t x307 = -646643601869LL;
	volatile int16_t x308 = 23;
	volatile int32_t t76 = 12400301;

	t76 = (x305*((x306<=x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = UINT16_MAX;
	static int16_t x310 = INT16_MAX;
	int64_t x312 = -4698145038308LL;
	int64_t t77 = 17717630LL;

	t77 = (x309*((x310<=x311)&x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MIN;
	volatile int16_t x314 = -1;
	int8_t x316 = INT8_MAX;
	volatile int64_t t78 = 14295LL;

	t78 = (x313*((x314<=x315)&x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = 24;
	volatile int16_t x319 = -1;
	volatile uint64_t x320 = 34405LLU;

	t79 = (x317*((x318<=x319)&x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 486848;
	volatile int64_t x322 = -30LL;
	volatile int64_t x323 = 14617LL;
	int16_t x324 = 0;
	static volatile int32_t t80 = 1779298;

	t80 = (x321*((x322<=x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x325 = 0U;
	volatile uint16_t x326 = 384U;
	uint64_t x327 = 30859527LLU;
	static int16_t x328 = INT16_MIN;
	int32_t t81 = 3270390;

	t81 = (x325*((x326<=x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 1U;
	uint32_t x330 = 5009376U;
	static int32_t x331 = -19243778;
	static int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = 1;

	t82 = (x329*((x330<=x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = 8;
	uint16_t x336 = UINT16_MAX;

	t83 = (x333*((x334<=x335)&x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -630;
	int16_t x340 = -1;

	t84 = (x337*((x338<=x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -179995323LL;
	static int64_t x342 = -1LL;
	int8_t x344 = INT8_MIN;
	volatile int64_t t85 = 75607875LL;

	t85 = (x341*((x342<=x343)&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	int64_t x348 = -40039227504LL;
	static int64_t t86 = -27204771LL;

	t86 = (x345*((x346<=x347)&x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -4014;
	int8_t x350 = INT8_MAX;
	int32_t x351 = 400487355;
	int32_t x352 = 1;
	int32_t t87 = 822;

	t87 = (x349*((x350<=x351)&x352));

	if (t87 != -4014) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = 18829046;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	volatile int64_t t88 = 9981LL;

	t88 = (x353*((x354<=x355)&x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;

	t89 = (x357*((x358<=x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	volatile int32_t x362 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	int64_t t90 = -103LL;

	t90 = (x361*((x362<=x363)&x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = 1786458LL;
	static volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = 230729625U;
	volatile uint32_t x368 = 5083989U;
	int64_t t91 = 0LL;

	t91 = (x365*((x366<=x367)&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MAX;
	volatile int16_t x370 = INT16_MIN;
	volatile int32_t x371 = -9660;
	uint8_t x372 = 1U;
	int32_t t92 = INT32_MAX;

	t92 = (x369*((x370<=x371)&x372));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MAX;
	static volatile int32_t t93 = 8;

	t93 = (x373*((x374<=x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 0U;
	int64_t x378 = -172017077LL;

	t94 = (x377*((x378<=x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -6;
	int32_t x382 = 1343610;
	static int16_t x383 = -1;
	uint16_t x384 = 1329U;

	t95 = (x381*((x382<=x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	volatile int8_t x387 = INT8_MAX;
	int16_t x388 = -1;
	static int32_t t96 = -805;

	t96 = (x385*((x386<=x387)&x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MIN;
	static volatile int32_t x391 = INT32_MAX;
	static int64_t x392 = INT64_MAX;
	static int64_t t97 = 476708302821529LL;

	t97 = (x389*((x390<=x391)&x392));

	if (t97 != 4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	static volatile int8_t x394 = -55;
	int16_t x395 = INT16_MAX;
	uint8_t x396 = 0U;
	static volatile int32_t t98 = -4858;

	t98 = (x393*((x394<=x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = 8LL;
	int32_t x399 = -427;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = 70747251432138LL;

	t99 = (x397*((x398<=x399)&x400));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

