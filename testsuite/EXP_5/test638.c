#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = -3086752LL;
static int64_t t2 = INT64_MIN;
int32_t x18 = -1;
static volatile int64_t t5 = 16643453644235LL;
volatile uint16_t x29 = UINT16_MAX;
int8_t x31 = INT8_MAX;
volatile uint32_t t7 = 7U;
uint64_t x38 = 13589425723610LLU;
int16_t x40 = INT16_MAX;
static uint8_t x45 = 61U;
uint64_t x51 = 338515841988547041LLU;
int16_t x55 = INT16_MAX;
uint16_t x66 = 2823U;
static int64_t x71 = 1LL;
uint64_t x79 = 1361543LLU;
int8_t x80 = 0;
uint64_t t18 = 4299616927LLU;
uint8_t x83 = 43U;
int8_t x86 = 11;
int32_t x92 = -1;
int16_t x94 = -1;
uint64_t x96 = 1903673570LLU;
volatile int64_t t23 = 323253854855454016LL;
int16_t x101 = INT16_MAX;
int16_t x102 = 335;
int64_t x103 = 26569602LL;
volatile int64_t t24 = 227LL;
volatile int64_t x111 = 737597284172554LL;
volatile int64_t t26 = -193090893LL;
volatile int32_t x114 = 1;
uint64_t x115 = UINT64_MAX;
volatile uint8_t x123 = 56U;
int32_t x124 = -248797574;
uint32_t t29 = 175244U;
int16_t x127 = -4358;
uint64_t x129 = 1221173470170078020LLU;
int32_t t32 = 1;
static uint32_t t33 = UINT32_MAX;
uint8_t x151 = 2U;
int8_t x152 = INT8_MAX;
int64_t t39 = INT64_MIN;
volatile int16_t x173 = INT16_MIN;
volatile uint8_t x174 = 108U;
volatile uint64_t t43 = UINT64_MAX;
int32_t x194 = INT32_MAX;
volatile int64_t x205 = INT64_MIN;
uint32_t x210 = 159722999U;
int8_t x211 = -1;
volatile uint64_t t48 = 0LLU;
int64_t x213 = 2728090775LL;
int8_t x214 = -1;
int64_t t50 = -845204957912445LL;
int64_t x226 = -1LL;
static int64_t x229 = -45494962LL;
int64_t x236 = 4655309218LL;
int64_t x239 = -1LL;
int32_t x247 = INT32_MAX;
int8_t x258 = 0;
uint16_t x261 = 312U;
int64_t x263 = INT64_MIN;
uint16_t x265 = 1U;
volatile int64_t t65 = 450828LL;
int32_t t66 = INT32_MAX;
volatile int16_t x296 = -1;
static uint64_t t67 = 57486016LLU;
int16_t x305 = INT16_MIN;
int64_t x322 = 56LL;
uint8_t x337 = 52U;
volatile int32_t t77 = 67292268;
int16_t x354 = -27;
volatile int8_t x355 = -1;
uint32_t x357 = 26313793U;
int16_t x358 = INT16_MAX;
static int64_t x359 = 5793LL;
static int16_t x363 = -1219;
int32_t x371 = INT32_MAX;
int32_t x374 = INT32_MIN;
volatile int32_t x378 = -7;
uint32_t x389 = 14098U;
static int32_t x392 = -1;
volatile uint32_t x395 = UINT32_MAX;
uint32_t x396 = 1828763822U;
static uint64_t t90 = 28968310365LLU;
volatile int8_t x401 = 2;
uint64_t x402 = 3376LLU;
int16_t x404 = 741;
int8_t x405 = INT8_MIN;
int8_t x407 = INT8_MIN;
uint16_t x412 = UINT16_MAX;
uint32_t x418 = 2013U;
uint64_t x420 = UINT64_MAX;
volatile int8_t x436 = -25;


void f0(void) {
	uint8_t x1 = 69U;
	int8_t x2 = 42;
	int64_t x3 = INT64_MIN;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = -4020997965039565LL;

	t0 = (x1+((x2/x3)&x4));

	if (t0 != 69LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = -920LL;
	volatile uint16_t x7 = 3455U;
	int8_t x8 = -4;

	t1 = (x5+((x6/x7)&x8));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;

	t2 = (x9+((x10/x11)&x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	static int16_t x15 = 37;
	int64_t x16 = 449221978485418LL;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13+((x14/x15)&x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 2U;
	int16_t x19 = -696;
	volatile uint8_t x20 = 6U;
	uint32_t t4 = 2331026U;

	t4 = (x17+((x18/x19)&x20));

	if (t4 != 2U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	int8_t x22 = INT8_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	int64_t x24 = INT64_MIN;

	t5 = (x21+((x22/x23)&x24));

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 342991505863LLU;
	uint32_t x28 = 2U;
	volatile uint64_t t6 = 236411321690687790LLU;

	t6 = (x25+((x26/x27)&x28));

	if (t6 != 32769LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MAX;
	static uint32_t x32 = 75362720U;

	t7 = (x29+((x30/x31)&x32));

	if (t7 != 65535U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 26;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	int64_t x36 = 61LL;
	int64_t t8 = -1917191147344973LL;

	t8 = (x33+((x34/x35)&x36));

	if (t8 != 26LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	uint32_t x39 = UINT32_MAX;
	volatile uint64_t t9 = 56852775LLU;

	t9 = (x37+((x38/x39)&x40));

	if (t9 != 2147486811LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = -9;
	int8_t x43 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x41+((x42/x43)&x44));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x46 = 263464273U;
	volatile uint8_t x47 = 20U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = -976703366715LL;

	t11 = (x45+((x46/x47)&x48));

	if (t11 != 61LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = INT64_MIN;
	volatile int32_t x52 = INT32_MAX;
	volatile uint64_t t12 = 298168407848313165LLU;

	t12 = (x49+((x50/x51)&x52));

	if (t12 != 32794LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 5219;
	uint16_t x54 = UINT16_MAX;
	volatile int32_t x56 = -689;
	int32_t t13 = -57157;

	t13 = (x53+((x54/x55)&x56));

	if (t13 != 5221) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 1;
	static volatile uint16_t x58 = 286U;
	volatile uint8_t x59 = 19U;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 177285051;

	t14 = (x57+((x58/x59)&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	static int16_t x67 = INT16_MIN;
	static volatile uint16_t x68 = 2340U;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x65+((x66/x67)&x68));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	volatile int16_t x72 = -1;
	int64_t t16 = 2762782148836LL;

	t16 = (x69+((x70/x71)&x72));

	if (t16 != -2147483776LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	static uint16_t x74 = 4U;
	int64_t x75 = INT64_MIN;
	uint32_t x76 = 239079610U;
	volatile int64_t t17 = 5213LL;

	t17 = (x73+((x74/x75)&x76));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;

	t18 = (x77+((x78/x79)&x80));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 127U;
	uint64_t x82 = 22980899166554LLU;
	int16_t x84 = INT16_MIN;
	uint64_t t19 = 109975480144013791LLU;

	t19 = (x81+((x82/x83)&x84));

	if (t19 != 534439493759LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x85 = UINT64_MAX;
	uint8_t x87 = 35U;
	uint32_t x88 = 83299U;
	uint64_t t20 = UINT64_MAX;

	t20 = (x85+((x86/x87)&x88));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 9878354U;
	static uint32_t x90 = 3U;
	volatile int16_t x91 = INT16_MIN;
	uint32_t t21 = 1U;

	t21 = (x89+((x90/x91)&x92));

	if (t21 != 9878354U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 2U;
	static uint8_t x95 = 6U;
	uint64_t t22 = 220LLU;

	t22 = (x93+((x94/x95)&x96));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 3U;
	int64_t x98 = -2029735878635LL;
	int16_t x99 = INT16_MIN;
	int16_t x100 = -1;

	t23 = (x97+((x98/x99)&x100));

	if (t23 != 61942626LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x104 = INT8_MIN;

	t24 = (x101+((x102/x103)&x104));

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 747863305LLU;
	int64_t x106 = 15252481420LL;
	int32_t x107 = 2;
	uint16_t x108 = UINT16_MAX;
	uint64_t t25 = 10911011LLU;

	t25 = (x105+((x106/x107)&x108));

	if (t25 != 747876303LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x109 = INT16_MIN;
	int64_t x110 = -971665965LL;
	volatile int8_t x112 = 31;

	t26 = (x109+((x110/x111)&x112));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	uint64_t t27 = 20063LLU;

	t27 = (x113+((x114/x115)&x116));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	int8_t x118 = -1;
	static uint64_t x119 = 1LLU;
	volatile int8_t x120 = INT8_MIN;
	uint64_t t28 = 20LLU;

	t28 = (x117+((x118/x119)&x120));

	if (t28 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = 3;
	static uint32_t x122 = UINT32_MAX;

	t29 = (x121+((x122/x123)&x124));

	if (t29 != 131107U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x125 = 6U;
	int32_t x126 = 46426;
	int16_t x128 = -2;
	int32_t t30 = -1399;

	t30 = (x125+((x126/x127)&x128));

	if (t30 != -4) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x130 = 1;
	int32_t x131 = -73390;
	int16_t x132 = -82;
	static volatile uint64_t t31 = 4088908LLU;

	t31 = (x129+((x130/x131)&x132));

	if (t31 != 1221173470170078020LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x133 = 7U;
	int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	int8_t x136 = -1;

	t32 = (x133+((x134/x135)&x136));

	if (t32 != 65543) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	uint8_t x142 = UINT8_MAX;
	volatile uint32_t x143 = 88482920U;
	static uint8_t x144 = UINT8_MAX;

	t33 = (x141+((x142/x143)&x144));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = 0U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	int64_t t34 = INT64_MIN;

	t34 = (x145+((x146/x147)&x148));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = -3;
	volatile int32_t t35 = -15083636;

	t35 = (x149+((x150/x151)&x152));

	if (t35 != 382) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x153 = 932325024608LLU;
	uint8_t x154 = 3U;
	uint8_t x155 = 5U;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t36 = 113801406890916819LLU;

	t36 = (x153+((x154/x155)&x156));

	if (t36 != 932325024608LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 4;
	int16_t x158 = INT16_MAX;
	volatile int32_t x159 = -83551776;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t37 = -999755752;

	t37 = (x157+((x158/x159)&x160));

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = UINT32_MAX;
	volatile uint16_t x162 = UINT16_MAX;
	static uint16_t x163 = 501U;
	uint64_t x164 = 1652367330669055637LLU;
	volatile uint64_t t38 = 429163801LLU;

	t38 = (x161+((x162/x163)&x164));

	if (t38 != 4294967423LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = 1;
	int16_t x167 = 160;
	volatile int16_t x168 = INT16_MIN;

	t39 = (x165+((x166/x167)&x168));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MAX;
	static int64_t x171 = -251444LL;
	volatile uint8_t x172 = UINT8_MAX;
	static int64_t t40 = INT64_MIN;

	t40 = (x169+((x170/x171)&x172));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x175 = 6U;
	int16_t x176 = 15;
	volatile int32_t t41 = 9591;

	t41 = (x173+((x174/x175)&x176));

	if (t41 != -32766) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = -252;
	int8_t x178 = -3;
	int16_t x179 = -3545;
	uint8_t x180 = UINT8_MAX;
	int32_t t42 = -283447380;

	t42 = (x177+((x178/x179)&x180));

	if (t42 != -252) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -1;
	static volatile uint64_t x186 = 399815LLU;
	static uint64_t x187 = 29317689748LLU;
	volatile int16_t x188 = -485;

	t43 = (x185+((x186/x187)&x188));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -1;
	static int32_t x190 = -6005539;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	volatile int32_t t44 = 1887387;

	t44 = (x189+((x190/x191)&x192));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x193 = INT8_MAX;
	uint64_t x195 = 54739110LLU;
	uint8_t x196 = 1U;
	static uint64_t t45 = 215LLU;

	t45 = (x193+((x194/x195)&x196));

	if (t45 != 128LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -1;
	int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int64_t x204 = 4704435LL;
	int64_t t46 = 3582103388662254LL;

	t46 = (x201+((x202/x203)&x204));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = 1157U;
	int8_t x207 = INT8_MIN;
	static uint32_t x208 = 479015U;
	volatile int64_t t47 = -1307LL;

	t47 = (x205+((x206/x207)&x208));

	if (t47 != -9223372036854296793LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 56145377717LLU;
	static volatile int16_t x212 = INT16_MIN;

	t48 = (x209+((x210/x211)&x212));

	if (t48 != 56145377717LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x215 = UINT8_MAX;
	static int32_t x216 = INT32_MIN;
	int64_t t49 = 0LL;

	t49 = (x213+((x214/x215)&x216));

	if (t49 != 2728090775LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = -5685;
	volatile int8_t x222 = 1;
	uint8_t x223 = 88U;
	int64_t x224 = INT64_MIN;

	t50 = (x221+((x222/x223)&x224));

	if (t50 != -5685LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x225 = 1961821945260178650LLU;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	uint64_t t51 = 6LLU;

	t51 = (x225+((x226/x227)&x228));

	if (t51 != 1961821945260178650LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x230 = -138815066787124598LL;
	uint16_t x231 = 11U;
	int32_t x232 = INT32_MAX;
	volatile int64_t t52 = 2058347660292676078LL;

	t52 = (x229+((x230/x231)&x232));

	if (t52 != 794404978LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	static int64_t x234 = INT64_MAX;
	volatile int64_t x235 = INT64_MIN;
	volatile int64_t t53 = -85801LL;

	t53 = (x233+((x234/x235)&x236));

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	volatile uint64_t x238 = 1017115283016754LLU;
	uint16_t x240 = 7U;
	uint64_t t54 = UINT64_MAX;

	t54 = (x237+((x238/x239)&x240));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = UINT64_MAX;
	static int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MAX;
	static int32_t x244 = INT32_MAX;
	volatile uint64_t t55 = 2LLU;

	t55 = (x241+((x242/x243)&x244));

	if (t55 != 2147221495LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = 21616288U;
	int8_t x246 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	uint32_t t56 = 213834U;

	t56 = (x245+((x246/x247)&x248));

	if (t56 != 21616288U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = -1;
	static volatile int16_t x250 = -96;
	volatile int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t57 = -3262;

	t57 = (x249+((x250/x251)&x252));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 4527U;
	uint8_t x254 = 3U;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t58 = 15051696017387842LLU;

	t58 = (x253+((x254/x255)&x256));

	if (t58 != 4527LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 18;
	volatile uint64_t x259 = 341LLU;
	int8_t x260 = -2;
	volatile uint64_t t59 = 68720323LLU;

	t59 = (x257+((x258/x259)&x260));

	if (t59 != 18LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x262 = INT64_MAX;
	static int8_t x264 = -1;
	int64_t t60 = -47035693LL;

	t60 = (x261+((x262/x263)&x264));

	if (t60 != 312LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x266 = INT32_MAX;
	static int16_t x267 = 8219;
	int16_t x268 = INT16_MAX;
	int32_t t61 = 73768;

	t61 = (x265+((x266/x267)&x268));

	if (t61 != 31907) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	static int64_t x270 = -6LL;
	volatile int32_t x271 = INT32_MAX;
	volatile int32_t x272 = -1;
	int64_t t62 = -48LL;

	t62 = (x269+((x270/x271)&x272));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = -253369010424923705LL;
	uint8_t x274 = 1U;
	uint32_t x275 = 370642184U;
	volatile uint64_t x276 = 3983LLU;
	volatile uint64_t t63 = 102438111LLU;

	t63 = (x273+((x274/x275)&x276));

	if (t63 != 18193375063284627911LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	volatile int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;
	int64_t t64 = INT64_MIN;

	t64 = (x277+((x278/x279)&x280));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -1;
	uint32_t x282 = 7512U;
	int64_t x283 = -1410352919775LL;
	int8_t x284 = INT8_MIN;

	t65 = (x281+((x282/x283)&x284));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = INT32_MAX;
	uint8_t x290 = UINT8_MAX;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = 720U;

	t66 = (x289+((x290/x291)&x292));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 239611042496261LLU;
	int8_t x295 = INT8_MIN;

	t67 = (x293+((x294/x295)&x296));

	if (t67 != 255LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x297 = INT16_MIN;
	uint16_t x298 = 2835U;
	uint32_t x299 = 3508489U;
	static int16_t x300 = -1;
	volatile uint32_t t68 = 847008149U;

	t68 = (x297+((x298/x299)&x300));

	if (t68 != 4294934528U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	uint64_t x302 = 748870644439147LLU;
	int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x301+((x302/x303)&x304));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	volatile int32_t t70 = -376112423;

	t70 = (x305+((x306/x307)&x308));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x313 = 121U;
	static int32_t x314 = 7418716;
	int32_t x315 = INT32_MAX;
	int32_t x316 = -1;
	int32_t t71 = 768878230;

	t71 = (x313+((x314/x315)&x316));

	if (t71 != 121) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = -1;
	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 32U;
	int32_t x320 = INT32_MIN;
	static uint32_t t72 = UINT32_MAX;

	t72 = (x317+((x318/x319)&x320));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = INT16_MAX;
	volatile uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MAX;
	int64_t t73 = 1367691821LL;

	t73 = (x321+((x322/x323)&x324));

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = 0;
	int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	int64_t x328 = 20804979074LL;
	int64_t t74 = 186799675622327LL;

	t74 = (x325+((x326/x327)&x328));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x329 = 1136104768U;
	volatile int64_t x330 = INT64_MIN;
	volatile int16_t x331 = INT16_MIN;
	int64_t x332 = -1LL;
	int64_t t75 = -10957LL;

	t75 = (x329+((x330/x331)&x332));

	if (t75 != 281476112815424LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = -1;
	int64_t x334 = -1LL;
	int64_t x335 = INT64_MIN;
	static uint16_t x336 = 10U;
	int64_t t76 = 78826040LL;

	t76 = (x333+((x334/x335)&x336));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x338 = UINT8_MAX;
	int32_t x339 = -1;
	volatile int8_t x340 = INT8_MIN;

	t77 = (x337+((x338/x339)&x340));

	if (t77 != -204) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x345 = 181U;
	int32_t x346 = -1;
	int8_t x347 = -1;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t78 = -2140;

	t78 = (x345+((x346/x347)&x348));

	if (t78 != 182) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = 7U;
	int8_t x350 = -1;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;
	uint32_t t79 = 20U;

	t79 = (x349+((x350/x351)&x352));

	if (t79 != 7U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = 62;
	int16_t x356 = -1;
	int32_t t80 = 301;

	t80 = (x353+((x354/x355)&x356));

	if (t80 != 89) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x360 = INT8_MIN;
	volatile int64_t t81 = -5027LL;

	t81 = (x357+((x358/x359)&x360));

	if (t81 != 26313793LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x362 = UINT16_MAX;
	static volatile int16_t x364 = -184;
	volatile int32_t t82 = -1199953;

	t82 = (x361+((x362/x363)&x364));

	if (t82 != -32952) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x369 = INT8_MAX;
	volatile uint64_t x370 = 12508695453703LLU;
	uint8_t x372 = 12U;
	volatile uint64_t t83 = 558122382511213LLU;

	t83 = (x369+((x370/x371)&x372));

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = -1257;
	volatile int8_t x375 = -46;
	int8_t x376 = -60;
	int32_t t84 = 628937921;

	t84 = (x373+((x374/x375)&x376));

	if (t84 != 46683159) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MIN;
	int8_t x379 = 6;
	uint64_t x380 = UINT64_MAX;
	static uint64_t t85 = 2127950166941720592LLU;

	t85 = (x377+((x378/x379)&x380));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x381 = 86U;
	int16_t x382 = -1;
	uint64_t x383 = 30764LLU;
	volatile uint64_t x384 = 2422LLU;
	volatile uint64_t t86 = 590799LLU;

	t86 = (x381+((x382/x383)&x384));

	if (t86 != 422LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 117857U;
	int16_t x387 = INT16_MIN;
	static uint8_t x388 = UINT8_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = (x385+((x386/x387)&x388));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MAX;
	uint32_t t88 = 163U;

	t88 = (x389+((x390/x391)&x392));

	if (t88 != 14098U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	volatile int8_t x394 = 2;
	uint32_t t89 = 422708U;

	t89 = (x393+((x394/x395)&x396));

	if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x397 = 26;
	volatile int16_t x398 = INT16_MAX;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MAX;

	t90 = (x397+((x398/x399)&x400));

	if (t90 != 26LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x403 = INT32_MIN;
	uint64_t t91 = 17136574357324559LLU;

	t91 = (x401+((x402/x403)&x404));

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x406 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	static int32_t t92 = 1278216;

	t92 = (x405+((x406/x407)&x408));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x409 = INT32_MAX;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 1U;
	volatile int64_t t93 = -36207976100LL;

	t93 = (x409+((x410/x411)&x412));

	if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x417 = 8775U;
	volatile int32_t x419 = INT32_MIN;
	static uint64_t t94 = 358564LLU;

	t94 = (x417+((x418/x419)&x420));

	if (t94 != 8775LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x421 = UINT16_MAX;
	int32_t x422 = -8387819;
	uint16_t x423 = 13897U;
	int32_t x424 = INT32_MIN;
	volatile int32_t t95 = -26386347;

	t95 = (x421+((x422/x423)&x424));

	if (t95 != -2147418113) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = 58;
	static int32_t x426 = INT32_MIN;
	volatile uint8_t x427 = 38U;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t96 = -3094;

	t96 = (x425+((x426/x427)&x428));

	if (t96 != 44899) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 210U;
	int64_t x430 = 1190958770801362LL;
	int32_t x431 = -1;
	int8_t x432 = -17;
	volatile int64_t t97 = 7LL;

	t97 = (x429+((x430/x431)&x432));

	if (t97 != -1190958770801152LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x433 = 0U;
	volatile int8_t x434 = INT8_MIN;
	volatile int64_t x435 = -622LL;
	int64_t t98 = 7117616550605658LL;

	t98 = (x433+((x434/x435)&x436));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x437 = -1LL;
	uint8_t x438 = 0U;
	int16_t x439 = INT16_MAX;
	uint64_t x440 = 440480232543059827LLU;
	uint64_t t99 = UINT64_MAX;

	t99 = (x437+((x438/x439)&x440));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

