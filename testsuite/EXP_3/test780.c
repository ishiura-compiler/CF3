#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = 60889;
int16_t x9 = -77;
volatile uint16_t x18 = 3U;
int16_t x20 = INT16_MIN;
volatile int16_t x21 = INT16_MAX;
volatile int32_t x32 = INT32_MIN;
int32_t x33 = INT32_MIN;
int64_t x35 = -1LL;
int8_t x36 = 58;
volatile uint32_t t9 = 166U;
int8_t x43 = INT8_MAX;
uint32_t x49 = 1U;
int64_t t11 = 12LL;
int16_t x53 = INT16_MIN;
int32_t x62 = -1;
int16_t x65 = INT16_MIN;
int64_t x66 = -50855832840028LL;
int32_t x73 = INT32_MIN;
int16_t x74 = INT16_MAX;
int64_t x77 = 1049793791LL;
static int32_t t18 = 1016696734;
int16_t x87 = -1;
volatile int32_t x88 = -1;
static volatile int16_t x91 = INT16_MIN;
int64_t x105 = INT64_MIN;
volatile int32_t x110 = -1;
uint32_t x112 = UINT32_MAX;
static int8_t x115 = -1;
static int8_t x116 = INT8_MIN;
int32_t t26 = -4;
static int16_t x117 = 1241;
int16_t x118 = 10786;
volatile int64_t x119 = 11613LL;
static volatile int64_t t27 = -1580717LL;
int16_t x122 = 1473;
volatile int8_t x127 = INT8_MAX;
volatile int64_t x130 = -1LL;
volatile uint32_t x134 = 16145U;
int64_t x138 = INT64_MAX;
static int16_t x142 = INT16_MIN;
volatile uint8_t x151 = UINT8_MAX;
volatile uint8_t x152 = UINT8_MAX;
static volatile int8_t x154 = 19;
int8_t x167 = -3;
volatile uint64_t t42 = 119738615626LLU;
int64_t x190 = -1LL;
int64_t x210 = -45073531173LL;
volatile int32_t x215 = INT32_MIN;
volatile int32_t t51 = -32;
volatile int8_t x222 = -1;
volatile int64_t x236 = INT64_MIN;
static volatile int16_t x237 = INT16_MAX;
int64_t x238 = INT64_MAX;
int32_t x239 = INT32_MAX;
uint16_t x245 = 576U;
int16_t x250 = 1;
uint64_t x253 = 10226884690359127LLU;
static uint16_t x259 = UINT16_MAX;
uint32_t x261 = 224290U;
volatile int8_t x264 = 3;
int8_t x274 = INT8_MIN;
uint64_t x276 = 87LLU;
int64_t x283 = INT64_MIN;
int16_t x286 = -9480;
int32_t x289 = INT32_MIN;
static volatile uint32_t x290 = 30U;
int32_t x295 = -1;
volatile int32_t t71 = 14093;
static int32_t x299 = -1;
volatile int32_t t73 = 18552;
static uint16_t x305 = UINT16_MAX;
int64_t x309 = -3314LL;
volatile int16_t x324 = INT16_MAX;
int32_t x329 = INT32_MIN;
static volatile uint8_t x332 = UINT8_MAX;
uint32_t x334 = 62U;
uint32_t x336 = UINT32_MAX;
int32_t x338 = INT32_MIN;
static volatile int64_t t82 = -4766730561LL;
int32_t x341 = INT32_MAX;
volatile int32_t t85 = 8;
volatile int32_t x354 = -156;
volatile uint64_t x358 = 25150885213351LLU;
int64_t x359 = INT64_MIN;
static volatile int64_t t91 = 26590249LL;
uint8_t x377 = 43U;
int32_t x380 = -1;
volatile int16_t x390 = INT16_MIN;
int64_t x391 = INT64_MIN;
static uint8_t x392 = 9U;
int64_t t96 = -14378LL;
uint16_t x399 = 24U;
static int64_t t99 = 1LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x2 = INT32_MIN;
	uint64_t x3 = UINT64_MAX;
	volatile uint64_t t0 = 196LLU;

	t0 = ((x1==x2)^(x3%x4));

	if (t0 != 2059LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static int8_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 4239974284325602748LL;

	t1 = ((x5==x6)^(x7%x8));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int32_t x11 = -472585;
	int64_t x12 = -22830439443LL;
	volatile int64_t t2 = -110LL;

	t2 = ((x9==x10)^(x11%x12));

	if (t2 != -472585LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MAX;
	uint32_t x15 = 8U;
	static int16_t x16 = -30;
	volatile uint32_t t3 = 1U;

	t3 = ((x13==x14)^(x15%x16));

	if (t3 != 8U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 1817465436879LLU;
	volatile uint8_t x19 = UINT8_MAX;
	volatile int32_t t4 = -906457114;

	t4 = ((x17==x18)^(x19%x20));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 16907U;
	volatile int8_t x23 = -1;
	int16_t x24 = -1;
	volatile int32_t t5 = -503;

	t5 = ((x21==x22)^(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 385741928152LLU;
	uint16_t x26 = 75U;
	static int64_t x27 = -1LL;
	int16_t x28 = INT16_MAX;
	volatile int64_t t6 = -13LL;

	t6 = ((x25==x26)^(x27%x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = -400952890LL;
	int32_t x31 = -1;
	int32_t t7 = 4;

	t7 = ((x29==x30)^(x31%x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -270876596LL;
	int64_t t8 = -111LL;

	t8 = ((x33==x34)^(x35%x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1465674LLU;
	static volatile int64_t x38 = -1247635323783252LL;
	uint32_t x39 = 1851U;
	volatile uint8_t x40 = UINT8_MAX;

	t9 = ((x37==x38)^(x39%x40));

	if (t9 != 66U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile uint64_t x42 = UINT64_MAX;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 50672720LL;

	t10 = ((x41==x42)^(x43%x44));

	if (t10 != 126LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x50 = INT8_MIN;
	volatile int64_t x51 = 108785LL;
	int64_t x52 = INT64_MIN;

	t11 = ((x49==x50)^(x51%x52));

	if (t11 != 108785LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MAX;
	uint16_t x55 = 772U;
	int64_t x56 = -1LL;
	int64_t t12 = -9173123080LL;

	t12 = ((x53==x54)^(x55%x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x61 = UINT16_MAX;
	uint16_t x63 = 0U;
	volatile uint64_t x64 = 437214537230297LLU;
	static volatile uint64_t t13 = 775LLU;

	t13 = ((x61==x62)^(x63%x64));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x67 = 8650LLU;
	static uint64_t x68 = 150LLU;
	uint64_t t14 = 16740556492518LLU;

	t14 = ((x65==x66)^(x67%x68));

	if (t14 != 100LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = INT16_MAX;
	static uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -1LL;
	static int64_t t15 = 844428553864369LL;

	t15 = ((x69==x70)^(x71%x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x75 = UINT16_MAX;
	static volatile int32_t x76 = -1;
	volatile int32_t t16 = 7016999;

	t16 = ((x73==x74)^(x75%x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	int8_t x80 = -25;
	int32_t t17 = 12673370;

	t17 = ((x77==x78)^(x79%x80));

	if (t17 != -23) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 522U;
	static uint16_t x82 = UINT16_MAX;
	int8_t x83 = INT8_MAX;
	static int16_t x84 = INT16_MIN;

	t18 = ((x81==x82)^(x83%x84));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MAX;
	int8_t x86 = 58;
	int32_t t19 = 11;

	t19 = ((x85==x86)^(x87%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -2669340852478LL;
	volatile int16_t x90 = INT16_MIN;
	static int8_t x92 = INT8_MIN;
	int32_t t20 = -110548;

	t20 = ((x89==x90)^(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = 59U;
	int32_t x95 = -1;
	int16_t x96 = -638;
	int32_t t21 = -115;

	t21 = ((x93==x94)^(x95%x96));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MAX;
	int8_t x98 = 0;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MAX;
	volatile int64_t t22 = 212757LL;

	t22 = ((x97==x98)^(x99%x100));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	uint16_t x103 = 7377U;
	static uint8_t x104 = 11U;
	volatile int32_t t23 = 0;

	t23 = ((x101==x102)^(x103%x104));

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = 13291;
	int32_t t24 = -409180;

	t24 = ((x105==x106)^(x107%x108));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static int64_t x111 = INT64_MIN;
	volatile int64_t t25 = 244193205628744598LL;

	t25 = ((x109==x110)^(x111%x112));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;

	t26 = ((x113==x114)^(x115%x116));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x120 = 29U;

	t27 = ((x117==x118)^(x119%x120));

	if (t27 != 13LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 73U;
	int8_t x123 = INT8_MAX;
	int64_t x124 = -1LL;
	static int64_t t28 = 9526428341013618LL;

	t28 = ((x121==x122)^(x123%x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = INT16_MAX;
	int16_t x128 = -1;
	volatile int32_t t29 = 50;

	t29 = ((x125==x126)^(x127%x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x131 = INT32_MAX;
	static int32_t x132 = INT32_MIN;
	static int32_t t30 = INT32_MAX;

	t30 = ((x129==x130)^(x131%x132));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 282750U;
	uint8_t x135 = 60U;
	int16_t x136 = INT16_MIN;
	int32_t t31 = 188050925;

	t31 = ((x133==x134)^(x135%x136));

	if (t31 != 60) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = UINT8_MAX;
	int8_t x139 = INT8_MAX;
	int64_t x140 = 101LL;
	int64_t t32 = 20056LL;

	t32 = ((x137==x138)^(x139%x140));

	if (t32 != 26LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MIN;
	static int32_t x143 = -1;
	uint32_t x144 = 1154U;
	volatile uint32_t t33 = 953986U;

	t33 = ((x141==x142)^(x143%x144));

	if (t33 != 863U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -4;
	volatile int32_t x146 = 921;
	volatile uint8_t x147 = 48U;
	static int8_t x148 = INT8_MIN;
	static int32_t t34 = 920639262;

	t34 = ((x145==x146)^(x147%x148));

	if (t34 != 48) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -68;
	int16_t x150 = -1;
	int32_t t35 = 3;

	t35 = ((x149==x150)^(x151%x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -9382109;
	uint64_t x155 = 486623919063LLU;
	volatile int16_t x156 = 195;
	uint64_t t36 = 33966769466082LLU;

	t36 = ((x153==x154)^(x155%x156));

	if (t36 != 48LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = -1;
	volatile int8_t x159 = -1;
	uint16_t x160 = 18336U;
	int32_t t37 = 17390945;

	t37 = ((x157==x158)^(x159%x160));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = 10140484LLU;
	uint16_t x163 = 1768U;
	volatile int64_t x164 = 1007778271LL;
	volatile int64_t t38 = 11308595424952197LL;

	t38 = ((x161==x162)^(x163%x164));

	if (t38 != 1768LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MIN;
	volatile int16_t x166 = -436;
	uint64_t x168 = 102572481724324856LLU;
	volatile uint64_t t39 = 23100623945LLU;

	t39 = ((x165==x166)^(x167%x168));

	if (t39 != 86269845055402389LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = -22;
	uint16_t x170 = 12U;
	static uint8_t x171 = 3U;
	uint64_t x172 = 147557LLU;
	uint64_t t40 = 52475LLU;

	t40 = ((x169==x170)^(x171%x172));

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = -5;
	uint64_t x174 = 40156LLU;
	volatile int8_t x175 = INT8_MIN;
	uint16_t x176 = 1550U;
	static volatile int32_t t41 = 0;

	t41 = ((x173==x174)^(x175%x176));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = INT8_MIN;
	static volatile uint64_t x178 = 2313343LLU;
	static uint64_t x179 = 8374400750947042601LLU;
	volatile int64_t x180 = INT64_MAX;

	t42 = ((x177==x178)^(x179%x180));

	if (t42 != 8374400750947042601LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 7U;
	int16_t x182 = INT16_MIN;
	int8_t x183 = -2;
	int32_t x184 = -172;
	volatile int32_t t43 = -1;

	t43 = ((x181==x182)^(x183%x184));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	volatile uint16_t x186 = 29U;
	int8_t x187 = -1;
	static uint16_t x188 = 1745U;
	int32_t t44 = -2760;

	t44 = ((x185==x186)^(x187%x188));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	int16_t x191 = -12420;
	static int64_t x192 = -1LL;
	volatile int64_t t45 = -6LL;

	t45 = ((x189==x190)^(x191%x192));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	static uint16_t x194 = 59U;
	int16_t x195 = INT16_MAX;
	int16_t x196 = -780;
	static int32_t t46 = -1;

	t46 = ((x193==x194)^(x195%x196));

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = 13917LL;
	int32_t x198 = INT32_MIN;
	volatile int64_t x199 = INT64_MAX;
	static int64_t x200 = -35LL;
	int64_t t47 = 3703913096672LL;

	t47 = ((x197==x198)^(x199%x200));

	if (t47 != 7LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = -24LL;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	volatile int64_t t48 = -1037482495343268LL;

	t48 = ((x201==x202)^(x203%x204));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t49 = 960280083;

	t49 = ((x205==x206)^(x207%x208));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t50 = 365461LLU;

	t50 = ((x209==x210)^(x211%x212));

	if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = INT32_MAX;
	int64_t x214 = INT64_MAX;
	int16_t x216 = 27;

	t51 = ((x213==x214)^(x215%x216));

	if (t51 != -11) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 69318429621323242LLU;
	int8_t x218 = -1;
	int8_t x219 = -1;
	uint64_t x220 = 2466137779046300LLU;
	volatile uint64_t t52 = 243682650379453LLU;

	t52 = ((x217==x218)^(x219%x220));

	if (t52 != 33486443227615LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x221 = UINT32_MAX;
	static volatile uint16_t x223 = UINT16_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t53 = 317571411588499635LLU;

	t53 = ((x221==x222)^(x223%x224));

	if (t53 != 65534LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	volatile int64_t x226 = -1LL;
	volatile int32_t x227 = 17908;
	int32_t x228 = INT32_MAX;
	volatile int32_t t54 = 15840;

	t54 = ((x225==x226)^(x227%x228));

	if (t54 != 17908) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 137U;
	int8_t x230 = 0;
	int8_t x231 = INT8_MAX;
	static volatile uint64_t x232 = 14625161572LLU;
	uint64_t t55 = 8833405849452255023LLU;

	t55 = ((x229==x230)^(x231%x232));

	if (t55 != 127LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 473013867118442LLU;
	int64_t x234 = -1LL;
	int32_t x235 = INT32_MIN;
	int64_t t56 = -21613284759LL;

	t56 = ((x233==x234)^(x235%x236));

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x240 = 502U;
	volatile int32_t t57 = 6689;

	t57 = ((x237==x238)^(x239%x240));

	if (t57 != 437) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x241 = 1320;
	uint32_t x242 = UINT32_MAX;
	uint32_t x243 = 109571504U;
	int32_t x244 = INT32_MIN;
	uint32_t t58 = 30U;

	t58 = ((x241==x242)^(x243%x244));

	if (t58 != 109571504U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = INT8_MIN;
	volatile uint16_t x247 = 59U;
	int64_t x248 = INT64_MIN;
	static int64_t t59 = 81351454805LL;

	t59 = ((x245==x246)^(x247%x248));

	if (t59 != 59LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x249 = -1;
	volatile int32_t x251 = INT32_MIN;
	uint8_t x252 = 45U;
	volatile int32_t t60 = 55;

	t60 = ((x249==x250)^(x251%x252));

	if (t60 != -38) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;
	static volatile uint64_t t61 = 3194951715LLU;

	t61 = ((x253==x254)^(x255%x256));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -7;
	int16_t x258 = INT16_MAX;
	static int8_t x260 = 3;
	volatile int32_t t62 = -123;

	t62 = ((x257==x258)^(x259%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MAX;
	static int32_t t63 = 7;

	t63 = ((x261==x262)^(x263%x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MAX;
	volatile int32_t x266 = 1099732;
	uint32_t x267 = 1U;
	static uint8_t x268 = UINT8_MAX;
	uint32_t t64 = 1959831U;

	t64 = ((x265==x266)^(x267%x268));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x269 = -1LL;
	static uint32_t x270 = UINT32_MAX;
	static volatile int32_t x271 = 1061809434;
	int16_t x272 = INT16_MAX;
	volatile int32_t t65 = -93;

	t65 = ((x269==x270)^(x271%x272));

	if (t65 != 27566) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1;
	int64_t x275 = 4472030060711402210LL;
	static uint64_t t66 = 16832797439211216LLU;

	t66 = ((x273==x274)^(x275%x276));

	if (t66 != 74LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1475885842LL;
	static volatile int16_t x278 = 1;
	static uint8_t x279 = 1U;
	int16_t x280 = INT16_MAX;
	int32_t t67 = 878722839;

	t67 = ((x277==x278)^(x279%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = INT8_MIN;
	static int64_t x282 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t68 = 21242LL;

	t68 = ((x281==x282)^(x283%x284));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -1;
	int64_t x287 = -94109863607LL;
	int8_t x288 = INT8_MIN;
	int64_t t69 = -718157348545697LL;

	t69 = ((x285==x286)^(x287%x288));

	if (t69 != -55LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x291 = 249439614U;
	static int8_t x292 = -1;
	uint32_t t70 = 935838484U;

	t70 = ((x289==x290)^(x291%x292));

	if (t70 != 249439614U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	volatile uint8_t x294 = 9U;
	int16_t x296 = -4748;

	t71 = ((x293==x294)^(x295%x296));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x297 = INT16_MIN;
	int64_t x298 = -2LL;
	int16_t x300 = INT16_MAX;
	volatile int32_t t72 = 3;

	t72 = ((x297==x298)^(x299%x300));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = -1;
	int64_t x302 = -89994LL;
	static int16_t x303 = 0;
	int32_t x304 = 35;

	t73 = ((x301==x302)^(x303%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x306 = INT64_MIN;
	static int32_t x307 = -1;
	static uint32_t x308 = UINT32_MAX;
	uint32_t t74 = 0U;

	t74 = ((x305==x306)^(x307%x308));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 244259785712324474LLU;
	uint64_t x312 = UINT64_MAX;
	uint64_t t75 = 226630153764LLU;

	t75 = ((x309==x310)^(x311%x312));

	if (t75 != 244259785712324474LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = UINT16_MAX;
	static uint64_t x314 = UINT64_MAX;
	uint8_t x315 = 2U;
	int32_t x316 = INT32_MAX;
	int32_t t76 = -7574;

	t76 = ((x313==x314)^(x315%x316));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -50;
	volatile uint64_t t77 = 462894560081950LLU;

	t77 = ((x317==x318)^(x319%x320));

	if (t77 != 49LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = 1086415LLU;
	uint16_t x322 = UINT16_MAX;
	uint64_t x323 = 1LLU;
	uint64_t t78 = 4684338LLU;

	t78 = ((x321==x322)^(x323%x324));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = 19980U;
	volatile uint32_t x328 = UINT32_MAX;
	static uint32_t t79 = 833U;

	t79 = ((x325==x326)^(x327%x328));

	if (t79 != 19980U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x330 = -1;
	int32_t x331 = 9;
	volatile int32_t t80 = 85792775;

	t80 = ((x329==x330)^(x331%x332));

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -1;
	int64_t x335 = INT64_MIN;
	volatile int64_t t81 = 536634856LL;

	t81 = ((x333==x334)^(x335%x336));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MIN;

	t82 = ((x337==x338)^(x339%x340));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x342 = 585537411U;
	static int16_t x343 = 3574;
	volatile int32_t x344 = INT32_MIN;
	int32_t t83 = -26;

	t83 = ((x341==x342)^(x343%x344));

	if (t83 != 3574) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = INT8_MIN;
	static uint64_t x346 = UINT64_MAX;
	uint32_t x347 = 1196233U;
	volatile int8_t x348 = -1;
	volatile uint32_t t84 = 5871733U;

	t84 = ((x345==x346)^(x347%x348));

	if (t84 != 1196233U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x350 = 12747235LLU;
	static uint8_t x351 = 1U;
	static int8_t x352 = -1;

	t85 = ((x349==x350)^(x351%x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = -1;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	static volatile int64_t t86 = 2760926510231649699LL;

	t86 = ((x353==x354)^(x355%x356));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = 0;
	uint8_t x360 = 9U;
	volatile int64_t t87 = -475707954022098LL;

	t87 = ((x357==x358)^(x359%x360));

	if (t87 != -8LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = 3U;
	int16_t x362 = 11;
	uint8_t x363 = UINT8_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t88 = 5320194;

	t88 = ((x361==x362)^(x363%x364));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = 15433;
	int16_t x367 = -12;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t89 = 8384055344123999LLU;

	t89 = ((x365==x366)^(x367%x368));

	if (t89 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = INT16_MAX;
	volatile int16_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t90 = 750;

	t90 = ((x369==x370)^(x371%x372));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x373 = -63;
	uint64_t x374 = 27813LLU;
	static int64_t x375 = INT64_MIN;
	int16_t x376 = -7622;

	t91 = ((x373==x374)^(x375%x376));

	if (t91 != -2448LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x378 = INT32_MIN;
	volatile int32_t x379 = 6658;
	int32_t t92 = -180348320;

	t92 = ((x377==x378)^(x379%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile int64_t x382 = INT64_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	int64_t t93 = 5395LL;

	t93 = ((x381==x382)^(x383%x384));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MAX;
	int16_t x387 = -1;
	static int32_t x388 = INT32_MIN;
	int32_t t94 = 375801563;

	t94 = ((x385==x386)^(x387%x388));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = UINT8_MAX;
	static volatile int64_t t95 = -387347LL;

	t95 = ((x389==x390)^(x391%x392));

	if (t95 != -8LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -12;
	static int8_t x394 = INT8_MIN;
	volatile int8_t x395 = INT8_MIN;
	static int64_t x396 = 809LL;

	t96 = ((x393==x394)^(x395%x396));

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t97 = -5587157009LL;

	t97 = ((x397==x398)^(x399%x400));

	if (t97 != 25LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x401 = INT16_MIN;
	int32_t x402 = -10204996;
	int64_t x403 = INT64_MAX;
	int64_t x404 = -1LL;
	volatile int64_t t98 = 249590484LL;

	t98 = ((x401==x402)^(x403%x404));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -1;
	static volatile int8_t x406 = INT8_MAX;
	uint8_t x407 = 21U;
	static int64_t x408 = -843441032LL;

	t99 = ((x405==x406)^(x407%x408));

	if (t99 != 21LL) { NG(); } else { ; }
	
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

