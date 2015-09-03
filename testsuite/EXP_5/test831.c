#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 1U;
int8_t x6 = INT8_MIN;
static volatile int8_t x19 = -1;
static int8_t x22 = INT8_MAX;
static int16_t x32 = INT16_MAX;
volatile int32_t x43 = INT32_MIN;
uint8_t x44 = 3U;
static int8_t x46 = -1;
static uint8_t x51 = 37U;
static int32_t x52 = INT32_MIN;
volatile int32_t t12 = 93339812;
int32_t t13 = -127;
static uint16_t x57 = 444U;
uint32_t x66 = 11340U;
volatile int64_t t17 = 1434881300507069LL;
uint64_t t18 = 1601691219218900077LLU;
uint32_t x80 = 96241858U;
int32_t t20 = -282763536;
int8_t x89 = INT8_MIN;
volatile uint64_t t21 = 1735312LLU;
uint32_t x95 = 229835U;
volatile int64_t x96 = INT64_MIN;
static volatile int64_t t22 = 303477098LL;
uint32_t x101 = 100U;
volatile uint32_t t24 = 10667624U;
int8_t x107 = INT8_MIN;
volatile uint16_t x110 = 1U;
int8_t x119 = INT8_MAX;
static int64_t x123 = -59LL;
uint64_t x139 = 5471979LLU;
static uint16_t x148 = 187U;
volatile int8_t x149 = -1;
uint64_t x153 = 9655074445873LLU;
int8_t x160 = 0;
static uint16_t x162 = UINT16_MAX;
uint64_t x166 = 40974506333994517LLU;
uint64_t x167 = UINT64_MAX;
static volatile uint64_t t41 = 37078456519LLU;
uint32_t x178 = UINT32_MAX;
volatile int16_t x179 = INT16_MIN;
uint16_t x183 = 38U;
volatile int32_t x188 = INT32_MAX;
uint16_t x198 = 6U;
int16_t x201 = INT16_MAX;
int16_t x202 = -1;
static volatile uint64_t x208 = 128156LLU;
static uint64_t t50 = UINT64_MAX;
volatile uint32_t x219 = 383583U;
volatile int64_t t54 = 4443LL;
uint64_t t55 = 7390605LLU;
int64_t t56 = 0LL;
static volatile int32_t x240 = -859293424;
int32_t t58 = -742504;
volatile uint16_t x242 = 727U;
volatile int8_t x249 = INT8_MIN;
int8_t x260 = INT8_MIN;
volatile int64_t t62 = 62325LL;
volatile int64_t t64 = -15560732431LL;
int8_t x272 = INT8_MIN;
volatile uint32_t x273 = 278762483U;
volatile int8_t x274 = INT8_MIN;
int8_t x280 = 3;
int64_t x295 = INT64_MIN;
volatile int64_t t70 = -114219LL;
static int64_t x297 = INT64_MAX;
int64_t x301 = INT64_MIN;
uint64_t x307 = 217014767126411LLU;
volatile uint64_t t73 = UINT64_MAX;
int8_t x310 = -1;
volatile uint8_t x312 = UINT8_MAX;
volatile int32_t x313 = -1;
int64_t t75 = 38LL;
int64_t t76 = 60448183607LL;
int16_t x321 = INT16_MAX;
static int16_t x326 = INT16_MAX;
static volatile uint8_t x342 = UINT8_MAX;
int64_t x343 = -1LL;
uint64_t x349 = UINT64_MAX;
static int64_t x351 = INT64_MAX;
volatile uint64_t t83 = UINT64_MAX;
int8_t x357 = 1;
int8_t x359 = INT8_MIN;
static int32_t t85 = -15646;
int64_t t86 = 5LL;
static int64_t x376 = -584990684563338906LL;
int64_t x386 = -1LL;
int64_t t92 = -14618312296902434LL;
static uint8_t x390 = 18U;
uint16_t x391 = 995U;
uint32_t x393 = 1U;
int8_t x402 = 7;
static int16_t x404 = -7619;
volatile uint64_t t96 = UINT64_MAX;
int64_t x408 = INT64_MIN;
volatile uint32_t x410 = UINT32_MAX;


void f0(void) {
	volatile uint16_t x1 = 78U;
	int32_t x2 = 1661328;
	uint64_t x3 = UINT64_MAX;
	uint64_t t0 = 301821LLU;

	t0 = (x1|((x2%x3)|x4));

	if (t0 != 1661407LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -17495LL;

	t1 = (x5|((x6%x7)|x8));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint16_t x10 = 15192U;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = -79;

	t2 = (x9|((x10%x11)|x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1830547U;
	uint16_t x14 = 3U;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	volatile uint32_t t3 = 534U;

	t3 = (x13|((x14%x15)|x16));

	if (t3 != 4294967187U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 3305U;
	static volatile int64_t x18 = -1LL;
	uint32_t x20 = 112U;
	int64_t t4 = 1195530902778850092LL;

	t4 = (x17|((x18%x19)|x20));

	if (t4 != 3321LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 1U;
	volatile int8_t x23 = -1;
	uint16_t x24 = 25U;
	volatile int32_t t5 = 1243988;

	t5 = (x21|((x22%x23)|x24));

	if (t5 != 25) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 435627U;
	int8_t x26 = 0;
	volatile uint32_t x27 = 809364801U;
	static int16_t x28 = -1;
	static uint32_t t6 = UINT32_MAX;

	t6 = (x25|((x26%x27)|x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 334744886890LL;
	uint16_t x30 = UINT16_MAX;
	static int16_t x31 = INT16_MIN;
	int64_t t7 = -11411863LL;

	t7 = (x29|((x30%x31)|x32));

	if (t7 != 334744911871LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static int16_t x34 = 0;
	volatile uint8_t x35 = 3U;
	int32_t x36 = INT32_MIN;
	int32_t t8 = 624551;

	t8 = (x33|((x34%x35)|x36));

	if (t8 != -2147418113) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int64_t x38 = 1LL;
	int64_t x39 = -1LL;
	int8_t x40 = INT8_MAX;
	volatile int64_t t9 = 397857136027932LL;

	t9 = (x37|((x38%x39)|x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = UINT16_MAX;
	volatile int64_t t10 = -3680814LL;

	t10 = (x41|((x42%x43)|x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 1409047276195182065LL;
	volatile int32_t x47 = INT32_MIN;
	int8_t x48 = 3;
	int64_t t11 = 629462116768LL;

	t11 = (x45|((x46%x47)|x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;

	t12 = (x49|((x50%x51)|x52));

	if (t12 != -23) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;

	t13 = (x53|((x54%x55)|x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MAX;
	uint32_t x59 = UINT32_MAX;
	int8_t x60 = -1;
	static uint32_t t14 = UINT32_MAX;

	t14 = (x57|((x58%x59)|x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int32_t x62 = INT32_MIN;
	uint16_t x63 = 7105U;
	int64_t x64 = -1LL;
	volatile int64_t t15 = 281223371927522LL;

	t15 = (x61|((x62%x63)|x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -4;
	static uint16_t x67 = UINT16_MAX;
	uint16_t x68 = 2U;
	volatile uint32_t t16 = 1621894069U;

	t16 = (x65|((x66%x67)|x68));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 291148275U;
	int8_t x70 = 43;
	uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = -4132960LL;

	t17 = (x69|((x70%x71)|x72));

	if (t17 != -2424837LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 52U;
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = 6517LLU;
	int32_t x76 = -3;

	t18 = (x73|((x74%x75)|x76));

	if (t18 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = 59;
	volatile int32_t x78 = -1;
	uint8_t x79 = 1U;
	static uint32_t t19 = 4U;

	t19 = (x77|((x78%x79)|x80));

	if (t19 != 96241915U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 794U;
	int32_t x82 = -262832;
	uint16_t x83 = UINT16_MAX;
	uint8_t x84 = 1U;

	t20 = (x81|((x82%x83)|x84));

	if (t20 != -161) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = 7U;
	uint64_t x91 = 2253373399866511524LLU;
	uint8_t x92 = 0U;

	t21 = (x89|((x90%x91)|x92));

	if (t21 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 8656398;
	static uint16_t x94 = 13611U;

	t22 = (x93|((x94%x95)|x96));

	if (t22 != -9223372036846110929LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x98 = 11U;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;
	static volatile uint32_t t23 = UINT32_MAX;

	t23 = (x97|((x98%x99)|x100));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MIN;

	t24 = (x101|((x102%x103)|x104));

	if (t24 != 4294934628U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	uint64_t x108 = UINT64_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = (x105|((x106%x107)|x108));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 4907LLU;
	int16_t x111 = INT16_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x109|((x110%x111)|x112));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = -26671998;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MAX;
	static volatile int64_t t27 = 227016049592081LL;

	t27 = (x113|((x114%x115)|x116));

	if (t27 != -26607617LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = 8;
	int64_t x118 = INT64_MIN;
	static volatile int32_t x120 = -1;
	int64_t t28 = -279062649LL;

	t28 = (x117|((x118%x119)|x120));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = INT64_MAX;
	static uint64_t x122 = UINT64_MAX;
	uint32_t x124 = 14U;
	static volatile uint64_t t29 = 12646971195249916LLU;

	t29 = (x121|((x122%x123)|x124));

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 472U;
	volatile int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	int32_t x128 = -1;
	static volatile int32_t t30 = 15694;

	t30 = (x125|((x126%x127)|x128));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -1;
	static int8_t x130 = -1;
	static int8_t x131 = INT8_MIN;
	uint64_t x132 = 14212259LLU;
	static uint64_t t31 = UINT64_MAX;

	t31 = (x129|((x130%x131)|x132));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 5U;
	volatile uint32_t x134 = UINT32_MAX;
	uint16_t x135 = 5U;
	int8_t x136 = -1;
	uint32_t t32 = UINT32_MAX;

	t32 = (x133|((x134%x135)|x136));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -31995956384544606LL;
	static uint8_t x138 = UINT8_MAX;
	int8_t x140 = INT8_MAX;
	uint64_t t33 = 20LLU;

	t33 = (x137|((x138%x139)|x140));

	if (t33 != 18414748117325007103LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	int32_t x142 = -1;
	volatile int32_t x143 = INT32_MAX;
	uint64_t x144 = 510LLU;
	uint64_t t34 = UINT64_MAX;

	t34 = (x141|((x142%x143)|x144));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	static int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MAX;
	volatile int32_t t35 = -26535388;

	t35 = (x145|((x146%x147)|x148));

	if (t35 != -69) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x150 = 10;
	static int64_t x151 = INT64_MIN;
	int8_t x152 = 58;
	volatile int64_t t36 = 59263489LL;

	t36 = (x149|((x150%x151)|x152));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = -1LL;
	volatile int32_t x156 = INT32_MAX;
	uint64_t t37 = 577482046904LLU;

	t37 = (x153|((x154%x155)|x156));

	if (t37 != 9655086481407LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -773;
	volatile uint32_t x158 = 145U;
	volatile int64_t x159 = INT64_MIN;
	static int64_t t38 = -498038861654666LL;

	t38 = (x157|((x158%x159)|x160));

	if (t38 != -773LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = -2;
	static uint32_t x163 = UINT32_MAX;
	static int8_t x164 = INT8_MAX;
	uint32_t t39 = UINT32_MAX;

	t39 = (x161|((x162%x163)|x164));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	int64_t x168 = 2125192478300LL;
	volatile uint64_t t40 = 50LLU;

	t40 = (x165|((x166%x167)|x168));

	if (t40 != 40976594780028671LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = 3769;
	volatile int8_t x171 = -14;
	uint64_t x172 = 683218LLU;

	t41 = (x169|((x170%x171)|x172));

	if (t41 != 18446744073709546707LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MAX;
	uint64_t x174 = 247LLU;
	int32_t x175 = INT32_MAX;
	uint8_t x176 = 118U;
	uint64_t t42 = 2811943796819094LLU;

	t42 = (x173|((x174%x175)|x176));

	if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x177|((x178%x179)|x180));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 23U;
	uint64_t x182 = 1LLU;
	volatile int16_t x184 = 419;
	volatile uint64_t t44 = 160487LLU;

	t44 = (x181|((x182%x183)|x184));

	if (t44 != 439LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = INT64_MIN;
	uint16_t x186 = 69U;
	int32_t x187 = -470;
	volatile int64_t t45 = 237457836632583089LL;

	t45 = (x185|((x186%x187)|x188));

	if (t45 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = -1;
	int32_t t46 = 29883;

	t46 = (x189|((x190%x191)|x192));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = -6;
	uint16_t x194 = 13U;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = -62061;

	t47 = (x193|((x194%x195)|x196));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 1;
	int16_t x199 = -382;
	static int32_t x200 = -1;
	int32_t t48 = 57;

	t48 = (x197|((x198%x199)|x200));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x203 = 3U;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x201|((x202%x203)|x204));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	int32_t x206 = INT32_MAX;
	volatile int32_t x207 = -1;

	t50 = (x205|((x206%x207)|x208));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	volatile int32_t x210 = -1;
	uint64_t x211 = 813617613618787LLU;
	volatile int8_t x212 = 40;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x209|((x210%x211)|x212));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 15U;
	int8_t x214 = 1;
	volatile uint8_t x215 = 5U;
	int64_t x216 = -18837LL;
	volatile int64_t t52 = -140336LL;

	t52 = (x213|((x214%x215)|x216));

	if (t52 != -18833LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MIN;
	static int32_t x218 = -195;
	volatile int8_t x220 = -35;
	int64_t t53 = -34438886000483609LL;

	t53 = (x217|((x218%x219)|x220));

	if (t53 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x221 = 4U;
	int64_t x222 = INT64_MAX;
	static int64_t x223 = -33706182795902LL;
	volatile int64_t x224 = INT64_MIN;

	t54 = (x221|((x222%x223)|x224));

	if (t54 != -9223359860270623281LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 11480LLU;
	static int8_t x227 = -1;
	int16_t x228 = INT16_MIN;

	t55 = (x225|((x226%x227)|x228));

	if (t55 != 18446744073709530367LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 472383150LL;
	int64_t x230 = -695LL;
	int64_t x231 = -1LL;
	static uint8_t x232 = 1U;

	t56 = (x229|((x230%x231)|x232));

	if (t56 != 472383151LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	uint32_t x234 = UINT32_MAX;
	uint32_t x235 = 27323642U;
	int8_t x236 = INT8_MIN;
	volatile int64_t t57 = INT64_MAX;

	t57 = (x233|((x234%x235)|x236));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x237 = INT16_MIN;
	int16_t x238 = -1783;
	static int8_t x239 = -1;

	t58 = (x237|((x238%x239)|x240));

	if (t58 != -18160) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = 223;
	int32_t x244 = 2094;
	int32_t t59 = 254;

	t59 = (x241|((x242%x243)|x244));

	if (t59 != -2147481538) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x250 = 794905U;
	int32_t x251 = -1;
	uint16_t x252 = 12U;
	static volatile uint32_t t60 = 1580214U;

	t60 = (x249|((x250%x251)|x252));

	if (t60 != 4294967197U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = INT64_MIN;
	static int8_t x254 = INT8_MAX;
	static int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MAX;
	int64_t t61 = 494615069527LL;

	t61 = (x253|((x254%x255)|x256));

	if (t61 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -88LL;
	int32_t x258 = INT32_MIN;
	int64_t x259 = 162342970886312LL;

	t62 = (x257|((x258%x259)|x260));

	if (t62 != -88LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	int16_t x262 = 185;
	int32_t x263 = INT32_MAX;
	int8_t x264 = -12;
	volatile int32_t t63 = -47763972;

	t63 = (x261|((x262%x263)|x264));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x265 = INT32_MAX;
	int64_t x266 = 722251LL;
	volatile int64_t x267 = INT64_MAX;
	int32_t x268 = -1;

	t64 = (x265|((x266%x267)|x268));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 694U;
	int64_t t65 = 10303714321LL;

	t65 = (x269|((x270%x271)|x272));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = 1922137LLU;
	static volatile uint64_t t66 = 41590478258171814LLU;

	t66 = (x273|((x274%x275)|x276));

	if (t66 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 19U;
	volatile int8_t x278 = INT8_MIN;
	uint64_t x279 = 7950906978528845LLU;
	volatile uint64_t t67 = 2266994012669569LLU;

	t67 = (x277|((x278%x279)|x280));

	if (t67 != 639883522631091LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MAX;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = -13896;
	int8_t x288 = INT8_MAX;
	volatile uint32_t t68 = 16073U;

	t68 = (x285|((x286%x287)|x288));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = -1;
	int16_t x291 = 1;
	int8_t x292 = INT8_MIN;
	int64_t t69 = -6LL;

	t69 = (x289|((x290%x291)|x292));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = INT32_MAX;
	static int8_t x294 = 4;
	uint16_t x296 = 11U;

	t70 = (x293|((x294%x295)|x296));

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x298 = INT8_MIN;
	int8_t x299 = 2;
	int8_t x300 = 3;
	int64_t t71 = INT64_MAX;

	t71 = (x297|((x298%x299)|x300));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x302 = 78544379U;
	static int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MIN;
	static int64_t t72 = 531874199239637LL;

	t72 = (x301|((x302%x303)|x304));

	if (t72 != -9223372036776231429LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x305 = INT64_MIN;
	static volatile int64_t x306 = 77788868158454130LL;
	int32_t x308 = -1;

	t73 = (x305|((x306%x307)|x308));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 48LLU;
	int8_t x311 = -1;
	static volatile uint64_t t74 = 2538192866069LLU;

	t74 = (x309|((x310%x311)|x312));

	if (t74 != 255LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x314 = 214U;
	int16_t x315 = 43;
	volatile int64_t x316 = -318964103094331LL;

	t75 = (x313|((x314%x315)|x316));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -1;
	int64_t x318 = 1528624891043320887LL;
	uint8_t x319 = 123U;
	uint16_t x320 = 273U;

	t76 = (x317|((x318%x319)|x320));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x322 = INT64_MIN;
	uint16_t x323 = 1868U;
	uint64_t x324 = 102186489294LLU;
	uint64_t t77 = UINT64_MAX;

	t77 = (x321|((x322%x323)|x324));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = -1;
	int32_t x327 = 259057;
	uint8_t x328 = 0U;
	volatile int32_t t78 = 11865;

	t78 = (x325|((x326%x327)|x328));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -993;
	static int16_t x330 = INT16_MIN;
	int64_t x331 = -9581288647858148LL;
	static uint8_t x332 = 4U;
	int64_t t79 = -81413992612353509LL;

	t79 = (x329|((x330%x331)|x332));

	if (t79 != -993LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 1770U;
	uint32_t x334 = UINT32_MAX;
	uint32_t x335 = 258048266U;
	int32_t x336 = INT32_MAX;
	uint32_t t80 = 1U;

	t80 = (x333|((x334%x335)|x336));

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = 151723699;
	int16_t x338 = -73;
	static volatile int32_t x339 = INT32_MIN;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t81 = 7166595;

	t81 = (x337|((x338%x339)|x340));

	if (t81 != -73) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x341 = 1248203LLU;
	int16_t x344 = INT16_MAX;
	volatile uint64_t t82 = 41372056LLU;

	t82 = (x341|((x342%x343)|x344));

	if (t82 != 1277951LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x350 = INT64_MIN;
	int64_t x352 = 18925649940220LL;

	t83 = (x349|((x350%x351)|x352));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	static volatile int64_t t84 = -123772LL;

	t84 = (x353|((x354%x355)|x356));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = INT32_MIN;
	int32_t x360 = INT32_MIN;

	t85 = (x357|((x358%x359)|x360));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	int32_t x364 = -5;

	t86 = (x361|((x362%x363)|x364));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = 165802012LL;
	int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t87 = 88227916178822LL;

	t87 = (x365|((x366%x367)|x368));

	if (t87 != -100LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x369 = -1LL;
	volatile uint64_t x370 = 468085105458LLU;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = -4703682171988653LL;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x369|((x370%x371)|x372));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = 721522LL;
	static int8_t x375 = -1;
	volatile int64_t t89 = 50469LL;

	t89 = (x373|((x374%x375)|x376));

	if (t89 != -26LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MIN;
	static int16_t x379 = 1816;
	uint8_t x380 = 7U;
	int32_t t90 = 3;

	t90 = (x377|((x378%x379)|x380));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x381 = 24U;
	int8_t x382 = 23;
	static int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t91 = 1;

	t91 = (x381|((x382%x383)|x384));

	if (t91 != -97) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = 52950U;
	volatile int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MAX;

	t92 = (x385|((x386%x387)|x388));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x389 = 18361588LLU;
	volatile uint16_t x392 = 872U;
	static uint64_t t93 = 24397LLU;

	t93 = (x389|((x390%x391)|x392));

	if (t93 != 18362366LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x394 = -1;
	int64_t x395 = INT64_MAX;
	volatile int8_t x396 = -1;
	volatile int64_t t94 = 169960502474938588LL;

	t94 = (x393|((x394%x395)|x396));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 65LLU;
	static volatile int64_t x398 = 1244921155889866LL;
	static uint64_t x399 = 13003870586LLU;
	int64_t x400 = INT64_MAX;
	volatile uint64_t t95 = 29LLU;

	t95 = (x397|((x398%x399)|x400));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint8_t x403 = UINT8_MAX;

	t96 = (x401|((x402%x403)|x404));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = INT64_MAX;
	volatile int8_t x407 = INT8_MIN;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x405|((x406%x407)|x408));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	static int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	static volatile uint32_t t98 = UINT32_MAX;

	t98 = (x409|((x410%x411)|x412));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	int8_t x414 = 28;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = 49U;
	static volatile int64_t t99 = 16464160727976LL;

	t99 = (x413|((x414%x415)|x416));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

