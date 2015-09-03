#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 399276U;
volatile int32_t t1 = 0;
volatile uint16_t x9 = UINT16_MAX;
uint64_t x11 = 364562246167175522LLU;
volatile int32_t x16 = INT32_MIN;
int32_t x18 = -1;
static int16_t x26 = 78;
static int64_t x28 = -2512292903LL;
volatile int32_t t6 = 1992;
static volatile uint16_t x33 = 72U;
uint8_t x35 = 2U;
volatile uint64_t x36 = 19723294703678302LLU;
int32_t t8 = 5261388;
static uint16_t x37 = UINT16_MAX;
int16_t x40 = INT16_MIN;
int16_t x46 = -1;
int32_t x49 = INT32_MIN;
static volatile uint32_t x50 = 552557988U;
int16_t x52 = -1;
uint32_t t12 = 3U;
int64_t x56 = 288563031023959LL;
uint8_t x62 = 1U;
volatile uint16_t x68 = 442U;
volatile uint64_t t22 = 1273587144212023697LLU;
int16_t x95 = INT16_MIN;
int16_t x96 = 8183;
int32_t t23 = -58581018;
uint8_t x97 = UINT8_MAX;
int64_t x100 = INT64_MIN;
static volatile uint8_t x106 = 61U;
int32_t t26 = -260;
static int16_t x111 = INT16_MAX;
int32_t x113 = -1;
volatile uint32_t t28 = 711U;
uint8_t x120 = UINT8_MAX;
uint32_t t29 = 104408U;
uint8_t x121 = 5U;
static int16_t x126 = INT16_MIN;
int32_t x132 = -25;
volatile uint64_t t32 = 1LLU;
uint64_t x138 = 2997006LLU;
int16_t x140 = 0;
int32_t x141 = -155;
uint32_t x143 = UINT32_MAX;
int32_t x144 = -1;
static volatile int32_t t35 = -349;
uint64_t x147 = UINT64_MAX;
static int32_t x151 = 1;
volatile int64_t t37 = 58LL;
static uint8_t x158 = 4U;
volatile uint64_t x160 = 23795239LLU;
static int64_t x161 = INT64_MIN;
volatile int64_t x162 = INT64_MIN;
uint32_t x167 = 14U;
static volatile int64_t x171 = INT64_MIN;
int64_t x175 = 136930762LL;
int8_t x179 = -1;
volatile uint64_t x185 = UINT64_MAX;
volatile int64_t x187 = INT64_MIN;
static volatile int32_t t47 = 362426;
uint32_t x203 = 142619318U;
static int64_t x209 = INT64_MIN;
uint16_t x216 = 36U;
int64_t x220 = INT64_MIN;
volatile int32_t x229 = INT32_MIN;
volatile int32_t t57 = 363918;
static uint64_t x233 = 107040626020022088LLU;
static int32_t x239 = INT32_MAX;
int8_t x243 = INT8_MIN;
static uint8_t x244 = 36U;
static uint8_t x245 = UINT8_MAX;
volatile int32_t x249 = -39;
uint32_t x255 = 12692U;
uint8_t x256 = UINT8_MAX;
volatile int64_t t63 = 104528LL;
static volatile uint64_t x257 = UINT64_MAX;
int16_t x262 = 4002;
static uint32_t x264 = 2U;
int8_t x270 = -1;
static int32_t t67 = 21007;
static uint8_t x274 = UINT8_MAX;
uint32_t t68 = 849318188U;
volatile int64_t x290 = -1LL;
volatile int64_t t72 = -919627LL;
static uint32_t x298 = 1357U;
static int16_t x306 = -54;
uint8_t x307 = UINT8_MAX;
uint32_t x309 = UINT32_MAX;
uint64_t x317 = UINT64_MAX;
int32_t x328 = -61471719;
int64_t x330 = 88LL;
static volatile uint8_t x335 = UINT8_MAX;
static int16_t x336 = 1;
static uint32_t x337 = UINT32_MAX;
int16_t x340 = INT16_MAX;
int64_t t84 = 65488804484989118LL;
int8_t x351 = 6;
uint64_t x353 = 395470735642LLU;
int16_t x367 = INT16_MIN;
uint64_t t91 = 8824285247215643991LLU;
int64_t x371 = -1LL;
static int8_t x373 = -1;
int16_t x374 = -1;
int64_t x380 = INT64_MAX;
volatile int32_t t94 = 50725;
int32_t x382 = 97687218;
static uint16_t x383 = 57U;
int64_t x384 = -132389981336229232LL;
uint64_t x386 = UINT64_MAX;
int32_t t97 = 14;
static int64_t x396 = 5LL;


void f0(void) {
	uint32_t x1 = 869U;
	int32_t x2 = INT32_MAX;
	int8_t x3 = -4;
	int8_t x4 = 1;

	t0 = ((x1^x2)|(x3==x4));

	if (t0 != 2147482778U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = -862939;
	int32_t x7 = 246421;
	int8_t x8 = -1;

	t1 = ((x5^x6)|(x7==x8));

	if (t1 != 862938) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -1392224;

	t2 = ((x9^x10)|(x11==x12));

	if (t2 != -65536) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MAX;
	int64_t t3 = -204934639288LL;

	t3 = ((x13^x14)|(x15==x16));

	if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = 24;
	volatile int32_t t4 = -5;

	t4 = ((x17^x18)|(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	uint32_t x22 = 517989001U;
	int16_t x23 = -1;
	int8_t x24 = 12;
	volatile uint32_t t5 = 3256U;

	t5 = ((x21^x22)|(x23==x24));

	if (t5 != 3776978294U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -12;
	uint64_t x27 = UINT64_MAX;

	t6 = ((x25^x26)|(x27==x28));

	if (t6 != -70) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	int16_t x30 = INT16_MAX;
	volatile uint64_t x31 = UINT64_MAX;
	int8_t x32 = -1;
	volatile int32_t t7 = -3669521;

	t7 = ((x29^x30)|(x31==x32));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 30U;

	t8 = ((x33^x34)|(x35==x36));

	if (t8 != 86) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -502;
	uint8_t x39 = 72U;
	volatile int32_t t9 = -1740371;

	t9 = ((x37^x38)|(x39==x40));

	if (t9 != -65035) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint8_t x42 = UINT8_MAX;
	static int32_t x43 = 4986;
	uint16_t x44 = 14988U;
	volatile int64_t t10 = -63316656895LL;

	t10 = ((x41^x42)|(x43==x44));

	if (t10 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int16_t x47 = 560;
	uint16_t x48 = 7U;
	int64_t t11 = INT64_MIN;

	t11 = ((x45^x46)|(x47==x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = INT16_MAX;

	t12 = ((x49^x50)|(x51==x52));

	if (t12 != 2700041636U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	uint8_t x55 = 12U;
	int32_t t13 = -14951250;

	t13 = ((x53^x54)|(x55==x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x58 = 63218U;
	uint16_t x59 = 21834U;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -25404503328174LL;

	t14 = ((x57^x58)|(x59==x60));

	if (t14 != -9223372036854712590LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 31;

	t15 = ((x61^x62)|(x63==x64));

	if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	volatile uint16_t x67 = 0U;
	volatile uint32_t t16 = 90932U;

	t16 = ((x65^x66)|(x67==x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	volatile uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = 95260;

	t17 = ((x69^x70)|(x71==x72));

	if (t17 != -65536) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 3U;
	volatile int8_t x74 = -1;
	volatile uint8_t x75 = UINT8_MAX;
	static volatile int16_t x76 = 218;
	volatile int32_t t18 = 3678;

	t18 = ((x73^x74)|(x75==x76));

	if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	static volatile uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = -472;
	volatile int64_t x80 = -627420LL;
	static volatile uint64_t t19 = 250267147920669872LLU;

	t19 = ((x77^x78)|(x79==x80));

	if (t19 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	static int32_t x84 = -1;
	volatile int32_t t20 = -1744422;

	t20 = ((x81^x82)|(x83==x84));

	if (t20 != 2147450880) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 1212U;
	uint64_t x86 = 1LLU;
	volatile int32_t x87 = -52788680;
	int8_t x88 = INT8_MIN;
	uint64_t t21 = 63LLU;

	t21 = ((x85^x86)|(x87==x88));

	if (t21 != 1213LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static volatile uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MAX;

	t22 = ((x89^x90)|(x91==x92));

	if (t22 != 32767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint16_t x94 = 3341U;

	t23 = ((x93^x94)|(x95==x96));

	if (t23 != 2147480306) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	int64_t t24 = 116419034943LL;

	t24 = ((x97^x98)|(x99==x100));

	if (t24 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -64227609;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MAX;
	static int32_t t25 = -272757;

	t25 = ((x101^x102)|(x103==x104));

	if (t25 != 2083256039) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -1;
	int16_t x107 = INT16_MIN;
	static uint8_t x108 = 13U;

	t26 = ((x105^x106)|(x107==x108));

	if (t26 != -62) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	static int32_t x110 = -1;
	volatile int8_t x112 = -1;
	volatile int32_t t27 = -224730250;

	t27 = ((x109^x110)|(x111==x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 18U;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;

	t28 = ((x113^x114)|(x115==x116));

	if (t28 != 4294967277U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 3U;
	static volatile int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MAX;

	t29 = ((x117^x118)|(x119==x120));

	if (t29 != 4294967171U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MAX;
	int8_t x123 = -1;
	static int32_t x124 = -1;
	static volatile int32_t t30 = 22996298;

	t30 = ((x121^x122)|(x123==x124));

	if (t30 != 123) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 1U;
	uint64_t x127 = 10LLU;
	static int8_t x128 = 5;
	static int32_t t31 = -615458;

	t31 = ((x125^x126)|(x127==x128));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 10125LLU;
	uint16_t x130 = 3658U;
	uint8_t x131 = UINT8_MAX;

	t32 = ((x129^x130)|(x131==x132));

	if (t32 != 10695LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 4675U;
	static uint16_t x134 = 514U;
	static int16_t x135 = -3;
	volatile int64_t x136 = -1LL;
	volatile int32_t t33 = 3;

	t33 = ((x133^x134)|(x135==x136));

	if (t33 != 4161) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int64_t x139 = INT64_MAX;
	volatile uint64_t t34 = 1885433LLU;

	t34 = ((x137^x138)|(x139==x140));

	if (t34 != 18446744073706554609LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 12;

	t35 = ((x141^x142)|(x143==x144));

	if (t35 != -151) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	int8_t x146 = INT8_MIN;
	uint64_t x148 = 1684544682823396247LLU;
	int32_t t36 = -5055102;

	t36 = ((x145^x146)|(x147==x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = -20082LL;
	volatile int32_t x152 = INT32_MIN;

	t37 = ((x149^x150)|(x151==x152));

	if (t37 != 19982LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x153 = INT64_MAX;
	uint16_t x154 = 13U;
	volatile uint16_t x155 = 0U;
	volatile int16_t x156 = -1;
	static volatile int64_t t38 = -711090086861LL;

	t38 = ((x153^x154)|(x155==x156));

	if (t38 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	int8_t x159 = INT8_MAX;
	static volatile int32_t t39 = -303239;

	t39 = ((x157^x158)|(x159==x160));

	if (t39 != -124) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x163 = -3993;
	int32_t x164 = -89638141;
	volatile int64_t t40 = -89057LL;

	t40 = ((x161^x162)|(x163==x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	volatile uint16_t x166 = UINT16_MAX;
	int16_t x168 = -1;
	int32_t t41 = -21;

	t41 = ((x165^x166)|(x167==x168));

	if (t41 != 65408) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 534U;
	uint16_t x170 = UINT16_MAX;
	uint64_t x172 = 541611260862973057LLU;
	static int32_t t42 = 54208957;

	t42 = ((x169^x170)|(x171==x172));

	if (t42 != 65001) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 1159070221262057LLU;
	volatile uint32_t x174 = 17U;
	uint16_t x176 = 3U;
	volatile uint64_t t43 = 2757688LLU;

	t43 = ((x173^x174)|(x175==x176));

	if (t43 != 1159070221262072LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 121U;
	int32_t x178 = INT32_MIN;
	volatile int32_t x180 = -1;
	volatile uint32_t t44 = 126338353U;

	t44 = ((x177^x178)|(x179==x180));

	if (t44 != 2147483769U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = 2;
	static int16_t x183 = INT16_MAX;
	volatile int64_t x184 = INT64_MAX;
	int32_t t45 = -314439586;

	t45 = ((x181^x182)|(x183==x184));

	if (t45 != 32765) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x186 = 384U;
	static int64_t x188 = 1047236LL;
	uint64_t t46 = 2414LLU;

	t46 = ((x185^x186)|(x187==x188));

	if (t46 != 18446744073709551231LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	static int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MAX;

	t47 = ((x189^x190)|(x191==x192));

	if (t47 != 32640) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 9U;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 3U;
	int64_t x196 = 8635489271880158LL;
	uint32_t t48 = 16794112U;

	t48 = ((x193^x194)|(x195==x196));

	if (t48 != 4294967177U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int16_t x198 = INT16_MAX;
	volatile int8_t x199 = 17;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -3;

	t49 = ((x197^x198)|(x199==x200));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -5;
	static uint8_t x202 = 0U;
	static volatile int32_t x204 = -1;
	static volatile int32_t t50 = -178731953;

	t50 = ((x201^x202)|(x203==x204));

	if (t50 != -5) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 846441629LLU;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 229U;
	int8_t x208 = INT8_MAX;
	static volatile uint64_t t51 = 3821940LLU;

	t51 = ((x205^x206)|(x207==x208));

	if (t51 != 18446744072408509597LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x210 = 2735635U;
	uint32_t x211 = UINT32_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int64_t t52 = -18905161324LL;

	t52 = ((x209^x210)|(x211==x212));

	if (t52 != -9223372036852040173LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 508890LLU;
	volatile int8_t x214 = -1;
	uint32_t x215 = 30350U;
	volatile uint64_t t53 = 6078630412703LLU;

	t53 = ((x213^x214)|(x215==x216));

	if (t53 != 18446744073709042725LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 2049329U;
	int16_t x218 = -31;
	uint32_t x219 = 921362618U;
	volatile uint32_t t54 = 3843U;

	t54 = ((x217^x218)|(x219==x220));

	if (t54 != 4292917968U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -5639;
	volatile uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MIN;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t55 = 1LLU;

	t55 = ((x221^x222)|(x223==x224));

	if (t55 != 5639LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 14U;
	int64_t x226 = 2612936501351264LL;
	int8_t x227 = INT8_MAX;
	static volatile int16_t x228 = -1;
	volatile int64_t t56 = 3126605528370597832LL;

	t56 = ((x225^x226)|(x227==x228));

	if (t56 != 2612936501351278LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x230 = -2;
	volatile int8_t x231 = 1;
	uint64_t x232 = 1142280045843916LLU;

	t57 = ((x229^x230)|(x231==x232));

	if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x234 = 29U;
	static volatile int64_t x235 = INT64_MIN;
	int16_t x236 = 0;
	volatile uint64_t t58 = 77620LLU;

	t58 = ((x233^x234)|(x235==x236));

	if (t58 != 107040626020022101LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -4;
	volatile uint16_t x238 = 31325U;
	int32_t x240 = 735783934;
	static volatile int32_t t59 = -2229180;

	t59 = ((x237^x238)|(x239==x240));

	if (t59 != -31327) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	volatile int32_t t60 = 135875;

	t60 = ((x241^x242)|(x243==x244));

	if (t60 != 2147450880) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 0;
	volatile int16_t x247 = INT16_MIN;
	volatile uint64_t x248 = 33334LLU;
	static volatile int32_t t61 = 0;

	t61 = ((x245^x246)|(x247==x248));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -1603;
	static int64_t x251 = INT64_MAX;
	volatile int64_t x252 = -1LL;
	int32_t t62 = -1697710;

	t62 = ((x249^x250)|(x251==x252));

	if (t62 != 1636) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MAX;

	t63 = ((x253^x254)|(x255==x256));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x258 = -1LL;
	int32_t x259 = -1;
	int8_t x260 = 1;
	uint64_t t64 = 15271888LLU;

	t64 = ((x257^x258)|(x259==x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 14850;
	static int8_t x263 = 4;
	int32_t t65 = -72273628;

	t65 = ((x261^x262)|(x263==x264));

	if (t65 != 13728) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -84;
	uint8_t x266 = 51U;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;
	int32_t t66 = -520023;

	t66 = ((x265^x266)|(x267==x268));

	if (t66 != -97) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint16_t x271 = 0U;
	int16_t x272 = INT16_MIN;

	t67 = ((x269^x270)|(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 4U;
	int32_t x275 = -82;
	int64_t x276 = 15356LL;

	t68 = ((x273^x274)|(x275==x276));

	if (t68 != 251U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 1U;
	int16_t x278 = 1027;
	uint16_t x279 = 6U;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 445389152;

	t69 = ((x277^x278)|(x279==x280));

	if (t69 != 1026) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 74734399U;
	int32_t x282 = 1562250;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t70 = 378625U;

	t70 = ((x281^x282)|(x283==x284));

	if (t70 != 73633205U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x286 = 2U;
	int8_t x287 = INT8_MIN;
	uint32_t x288 = UINT32_MAX;
	int32_t t71 = -19;

	t71 = ((x285^x286)|(x287==x288));

	if (t71 != 65533) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MAX;
	volatile int32_t x291 = -1;
	static int8_t x292 = INT8_MIN;

	t72 = ((x289^x290)|(x291==x292));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int16_t x294 = 7;
	int16_t x295 = 0;
	int32_t x296 = 2552131;
	int64_t t73 = 5668100981212LL;

	t73 = ((x293^x294)|(x295==x296));

	if (t73 != -8LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x299 = -1;
	uint64_t x300 = UINT64_MAX;
	static volatile uint32_t t74 = 15U;

	t74 = ((x297^x298)|(x299==x300));

	if (t74 != 4294965965U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 1U;
	int64_t x302 = 2029LL;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = 9;
	int64_t t75 = -1329203333154276LL;

	t75 = ((x301^x302)|(x303==x304));

	if (t75 != 2028LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x305 = -1;
	uint32_t x308 = 1U;
	int32_t t76 = 128;

	t76 = ((x305^x306)|(x307==x308));

	if (t76 != 53) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = 2270U;
	int16_t x311 = -1;
	int32_t x312 = INT32_MIN;
	volatile uint32_t t77 = 228041U;

	t77 = ((x309^x310)|(x311==x312));

	if (t77 != 4294965025U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = -80LL;
	uint8_t x315 = UINT8_MAX;
	volatile int32_t x316 = -1;
	int64_t t78 = 1220986020552408LL;

	t78 = ((x313^x314)|(x315==x316));

	if (t78 != 2147483568LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x318 = -1;
	uint16_t x319 = 25U;
	uint64_t x320 = 5472LLU;
	volatile uint64_t t79 = 113021731535007271LLU;

	t79 = ((x317^x318)|(x319==x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 68U;
	uint32_t x322 = 1301U;
	int64_t x323 = INT64_MAX;
	int8_t x324 = -1;
	volatile uint32_t t80 = 891063U;

	t80 = ((x321^x322)|(x323==x324));

	if (t80 != 1361U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 752U;
	static uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	static volatile int32_t t81 = -433140;

	t81 = ((x325^x326)|(x327==x328));

	if (t81 != 64783) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	volatile int16_t x331 = INT16_MAX;
	int32_t x332 = INT32_MAX;
	static int64_t t82 = 0LL;

	t82 = ((x329^x330)|(x331==x332));

	if (t82 != -2147483560LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 23U;
	int8_t x334 = 0;
	static volatile int32_t t83 = -5621;

	t83 = ((x333^x334)|(x335==x336));

	if (t83 != 23) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MAX;
	static uint16_t x339 = UINT16_MAX;

	t84 = ((x337^x338)|(x339==x340));

	if (t84 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -281;
	uint8_t x342 = 13U;
	uint64_t x343 = UINT64_MAX;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -14;

	t85 = ((x341^x342)|(x343==x344));

	if (t85 != -278) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -12LL;
	uint64_t x346 = 2726353092LLU;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile uint64_t t86 = 21748962973336220LLU;

	t86 = ((x345^x346)|(x347==x348));

	if (t86 != 18446744070983198512LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = 20;
	static uint16_t x350 = 251U;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 3;

	t87 = ((x349^x350)|(x351==x352));

	if (t87 != 239) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	int16_t x355 = -121;
	int32_t x356 = INT32_MAX;
	uint64_t t88 = 73624207393277613LLU;

	t88 = ((x353^x354)|(x355==x356));

	if (t88 != 18446743678238815973LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = 256U;
	static int16_t x359 = INT16_MIN;
	static int32_t x360 = -48781;
	int32_t t89 = -86847650;

	t89 = ((x357^x358)|(x359==x360));

	if (t89 != -2147483392) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 122U;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = INT32_MIN;
	static volatile int8_t x364 = INT8_MIN;
	int32_t t90 = -23374;

	t90 = ((x361^x362)|(x363==x364));

	if (t90 != -6) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	volatile uint16_t x366 = 47U;
	static uint16_t x368 = 42U;

	t91 = ((x365^x366)|(x367==x368));

	if (t91 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 1067678;
	volatile int64_t x370 = 122556LL;
	volatile int32_t x372 = INT32_MIN;
	volatile int64_t t92 = -101042350153764LL;

	t92 = ((x369^x370)|(x371==x372));

	if (t92 != 1152034LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x375 = INT16_MAX;
	volatile int32_t x376 = -1;
	static int32_t t93 = 403505;

	t93 = ((x373^x374)|(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -10412;
	int16_t x378 = -302;
	int16_t x379 = INT16_MAX;

	t94 = ((x377^x378)|(x379==x380));

	if (t94 != 10630) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 1289LL;
	volatile int64_t t95 = -6LL;

	t95 = ((x381^x382)|(x383==x384));

	if (t95 != 97686459LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	static uint64_t x388 = 56933375LLU;
	uint64_t t96 = 11LLU;

	t96 = ((x385^x386)|(x387==x388));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 6903;
	volatile int8_t x390 = INT8_MAX;
	static uint8_t x391 = 12U;
	volatile int8_t x392 = 2;

	t97 = ((x389^x390)|(x391==x392));

	if (t97 != 6792) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = -4;
	uint64_t x395 = 1394382753412LLU;
	volatile int32_t t98 = 2260;

	t98 = ((x393^x394)|(x395==x396));

	if (t98 != 2147483644) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	volatile uint8_t x398 = 0U;
	int16_t x399 = 1355;
	int32_t x400 = -472;
	volatile int32_t t99 = 1776350;

	t99 = ((x397^x398)|(x399==x400));

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

