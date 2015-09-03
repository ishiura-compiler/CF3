#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static int32_t x3 = INT32_MIN;
int8_t x7 = INT8_MIN;
static int32_t x8 = -1;
uint16_t x15 = 21U;
int64_t x23 = -1LL;
static uint32_t x31 = 159921113U;
static int8_t x32 = 0;
uint8_t x34 = UINT8_MAX;
int32_t x52 = 342921;
int32_t x53 = INT32_MIN;
uint16_t x56 = 4307U;
int64_t x61 = INT64_MAX;
uint16_t x63 = 249U;
static volatile uint8_t x66 = 94U;
int32_t t16 = 168202933;
uint64_t t18 = 3716813869280743701LLU;
volatile int32_t t19 = 941526380;
int16_t x83 = -1;
static int32_t t20 = -44258036;
int64_t x86 = INT64_MIN;
static int32_t x96 = INT32_MIN;
volatile uint8_t x98 = 107U;
volatile int64_t t25 = 1832163495420835LL;
static volatile int16_t x108 = -11;
volatile int16_t x109 = -25;
static int64_t x117 = 701028161LL;
int16_t x126 = INT16_MIN;
volatile uint32_t t33 = 1436608U;
int8_t x137 = INT8_MIN;
uint64_t x140 = 103547294970LLU;
int64_t x142 = 5731863939310LL;
int32_t x143 = INT32_MIN;
uint16_t x147 = 13891U;
static int64_t x151 = 7609700053136861LL;
volatile int32_t x154 = INT32_MIN;
volatile int64_t t38 = 244750913294464731LL;
uint32_t x178 = 49U;
int32_t x180 = INT32_MIN;
int16_t x186 = -1;
uint16_t x187 = 566U;
volatile int64_t x190 = INT64_MIN;
int16_t x191 = 11385;
int8_t x198 = INT8_MAX;
static volatile int64_t t49 = 3076516180344361LL;
int16_t x201 = -1;
uint64_t t53 = 159404038112123LLU;
int64_t t55 = -43680559863738954LL;
int8_t x225 = -1;
int8_t x227 = INT8_MIN;
int32_t x235 = 28;
int64_t x239 = INT64_MIN;
int32_t x242 = INT32_MIN;
static int16_t x243 = -1;
static uint64_t x244 = 267948827LLU;
volatile uint64_t t60 = 1217627483640991068LLU;
volatile int32_t x246 = 961771848;
volatile uint16_t x249 = 10U;
volatile int32_t t62 = 2;
static uint16_t x254 = 1U;
volatile int8_t x258 = INT8_MIN;
int16_t x259 = INT16_MIN;
int32_t t64 = -1182;
static volatile int16_t x264 = 3105;
volatile int32_t t65 = 38335;
uint8_t x273 = 124U;
uint8_t x274 = UINT8_MAX;
uint16_t x276 = UINT16_MAX;
volatile uint32_t x278 = UINT32_MAX;
int32_t x288 = INT32_MIN;
int64_t x290 = INT64_MIN;
volatile uint64_t x299 = UINT64_MAX;
static int64_t x301 = -1LL;
int16_t x302 = INT16_MIN;
uint32_t x307 = UINT32_MAX;
static int16_t x311 = -1;
uint16_t x312 = UINT16_MAX;
int64_t x320 = INT64_MIN;
static int16_t x323 = INT16_MAX;
volatile int8_t x328 = -1;
volatile int32_t t82 = -154;
uint32_t x335 = UINT32_MAX;
int8_t x338 = INT8_MIN;
volatile uint8_t x342 = 115U;
int8_t x345 = INT8_MIN;
int64_t x348 = INT64_MAX;
static volatile int32_t t87 = 579530075;
int16_t x357 = 7407;
static int8_t x360 = INT8_MIN;
int64_t x363 = -1LL;
static int64_t x364 = -1LL;
int32_t x366 = INT32_MAX;
volatile int32_t t92 = 971;
volatile uint64_t x391 = 64920143044466076LLU;
int32_t x397 = 158081609;


void f0(void) {
	int64_t x2 = -48736181588226LL;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -1244;

	t0 = ((x1==x2)*(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5511U;
	static uint64_t x6 = UINT64_MAX;
	volatile int32_t t1 = -8585053;

	t1 = ((x5==x6)*(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 591660534LL;
	volatile uint32_t x10 = UINT32_MAX;
	int64_t x11 = 34LL;
	int64_t x12 = -1488911LL;
	int64_t t2 = -275316259697LL;

	t2 = ((x9==x10)*(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = -1;
	volatile int8_t x16 = INT8_MAX;
	static int32_t t3 = -1;

	t3 = ((x13==x14)*(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int64_t x18 = -12LL;
	uint8_t x19 = UINT8_MAX;
	volatile int8_t x20 = INT8_MAX;
	int32_t t4 = 1;

	t4 = ((x17==x18)*(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 2;
	int8_t x22 = 61;
	volatile int16_t x24 = -885;
	volatile int64_t t5 = 7LL;

	t5 = ((x21==x22)*(x23^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	static uint64_t x26 = 2833353LLU;
	uint16_t x27 = 14U;
	volatile uint8_t x28 = 7U;
	static volatile int32_t t6 = -123440783;

	t6 = ((x25==x26)*(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MAX;
	uint32_t t7 = 654516057U;

	t7 = ((x29==x30)*(x31^x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 3U;
	volatile int32_t x35 = INT32_MIN;
	uint32_t x36 = 676973U;
	volatile uint32_t t8 = 5U;

	t8 = ((x33==x34)*(x35^x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -24329588005441LL;
	int16_t x38 = INT16_MIN;
	volatile uint64_t x39 = 402341042117419027LLU;
	int8_t x40 = INT8_MIN;
	uint64_t t9 = 251818233250013LLU;

	t9 = ((x37==x38)*(x39^x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = UINT32_MAX;
	int32_t x42 = 0;
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -901140301942890LL;

	t10 = ((x41==x42)*(x43^x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 0;
	volatile int64_t x46 = INT64_MAX;
	int32_t x47 = 36631876;
	static volatile int64_t x48 = -223592LL;
	volatile int64_t t11 = -562659909593953LL;

	t11 = ((x45==x46)*(x47^x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = 1;
	uint8_t x51 = 38U;
	volatile int32_t t12 = -14323413;

	t12 = ((x49==x50)*(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = INT64_MIN;
	uint8_t x55 = 3U;
	volatile int32_t t13 = -1;

	t13 = ((x53==x54)*(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x57 = 105U;
	uint16_t x58 = 0U;
	static uint8_t x59 = 2U;
	uint64_t x60 = 3895247572LLU;
	uint64_t t14 = 64553020LLU;

	t14 = ((x57==x58)*(x59^x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 0;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -12153;

	t15 = ((x61==x62)*(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = INT8_MIN;

	t16 = ((x65==x66)*(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint8_t x70 = UINT8_MAX;
	static volatile uint64_t x71 = 858LLU;
	int16_t x72 = INT16_MIN;
	uint64_t t17 = 1008LLU;

	t17 = ((x69==x70)*(x71^x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	volatile int8_t x74 = 5;
	int32_t x75 = -1;
	uint64_t x76 = UINT64_MAX;

	t18 = ((x73==x74)*(x75^x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 21U;
	int16_t x78 = 6142;
	int16_t x79 = -856;
	volatile int8_t x80 = INT8_MIN;

	t19 = ((x77==x78)*(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 26U;
	volatile int32_t x82 = INT32_MAX;
	int16_t x84 = 0;

	t20 = ((x81==x82)*(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = 417;

	t21 = ((x85==x86)*(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 220U;
	int32_t x90 = -25;
	int16_t x91 = 559;
	volatile uint16_t x92 = UINT16_MAX;
	static int32_t t22 = 1488291;

	t22 = ((x89==x90)*(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MIN;
	volatile uint8_t x95 = UINT8_MAX;
	static int32_t t23 = 10;

	t23 = ((x93==x94)*(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x99 = -1314;
	uint64_t x100 = 4485757845048845972LLU;
	uint64_t t24 = 597772LLU;

	t24 = ((x97==x98)*(x99^x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	uint8_t x102 = 109U;
	static int64_t x103 = -1LL;
	int64_t x104 = 1745922455LL;

	t25 = ((x101==x102)*(x103^x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 3825895U;
	static volatile uint64_t x106 = 222003106602LLU;
	uint64_t x107 = 13887451105420248LLU;
	static volatile uint64_t t26 = 3580022617396LLU;

	t26 = ((x105==x106)*(x107^x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t27 = -210647550LL;

	t27 = ((x109==x110)*(x111^x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -733215057255LL;
	static uint16_t x114 = 468U;
	int8_t x115 = 7;
	int64_t x116 = -8013439055234LL;
	int64_t t28 = 35255398378554275LL;

	t28 = ((x113==x114)*(x115^x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -1LL;
	volatile int16_t x119 = -1;
	int8_t x120 = 3;
	volatile int32_t t29 = -7981;

	t29 = ((x117==x118)*(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = -621778;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = 0;
	static int32_t t30 = -2246;

	t30 = ((x121==x122)*(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -19;
	static int64_t x127 = -1LL;
	volatile uint16_t x128 = UINT16_MAX;
	static volatile int64_t t31 = 2188LL;

	t31 = ((x125==x126)*(x127^x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 63741362168578LLU;
	uint64_t x132 = 6LLU;
	static volatile uint64_t t32 = 13183644LLU;

	t32 = ((x129==x130)*(x131^x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 9781U;
	static int32_t x134 = INT32_MAX;
	uint32_t x135 = 197U;
	volatile uint32_t x136 = UINT32_MAX;

	t33 = ((x133==x134)*(x135^x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	static int32_t x139 = INT32_MIN;
	uint64_t t34 = 1048LLU;

	t34 = ((x137==x138)*(x139^x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 968907;

	t35 = ((x141==x142)*(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	uint64_t x146 = UINT64_MAX;
	int32_t x148 = -10543032;
	volatile int32_t t36 = 312;

	t36 = ((x145==x146)*(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	int64_t x150 = INT64_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t37 = -15005674835LL;

	t37 = ((x149==x150)*(x151^x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	uint16_t x155 = 436U;
	int64_t x156 = INT64_MAX;

	t38 = ((x153==x154)*(x155^x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 406U;
	volatile int64_t x158 = INT64_MIN;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	volatile int64_t t39 = -6841478054LL;

	t39 = ((x157==x158)*(x159^x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MAX;
	uint8_t x162 = UINT8_MAX;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;
	int32_t t40 = -13568413;

	t40 = ((x161==x162)*(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 3LLU;
	int8_t x166 = INT8_MIN;
	volatile uint8_t x167 = 0U;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -118;

	t41 = ((x165==x166)*(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -38;
	int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	int64_t x172 = 73095508076LL;
	volatile int64_t t42 = -29607065199LL;

	t42 = ((x169==x170)*(x171^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	volatile int8_t x174 = 2;
	int16_t x175 = 1;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = 2032LLU;

	t43 = ((x173==x174)*(x175^x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	static uint16_t x179 = 5U;
	volatile int32_t t44 = 2;

	t44 = ((x177==x178)*(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	uint32_t x183 = UINT32_MAX;
	static int16_t x184 = -1;
	volatile uint32_t t45 = 1U;

	t45 = ((x181==x182)*(x183^x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x188 = -1;
	static volatile int32_t t46 = 5;

	t46 = ((x185==x186)*(x187^x188));

	if (t46 != -567) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile uint32_t x192 = 4537U;
	uint32_t t47 = 479960635U;

	t47 = ((x189==x190)*(x191^x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -133;
	int32_t t48 = -2407546;

	t48 = ((x193==x194)*(x195^x196));

	if (t48 != -2147483516) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static int16_t x199 = 3624;
	int64_t x200 = 3181128969LL;

	t49 = ((x197==x198)*(x199^x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 125551354075LLU;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -858LL;
	volatile int64_t t50 = 34787250959LL;

	t50 = ((x201==x202)*(x203^x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x206 = 3431434LLU;
	volatile int64_t x207 = -1LL;
	volatile int16_t x208 = INT16_MAX;
	static volatile int64_t t51 = 162521190088746LL;

	t51 = ((x205==x206)*(x207^x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	int32_t x210 = 26381;
	static int32_t x211 = INT32_MIN;
	int8_t x212 = -1;
	volatile int32_t t52 = -618310;

	t52 = ((x209==x210)*(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 48761U;
	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 15U;
	volatile uint64_t x216 = 155531294731LLU;

	t53 = ((x213==x214)*(x215^x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	uint32_t x218 = 3U;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 210803LLU;
	uint64_t t54 = 48LLU;

	t54 = ((x217==x218)*(x219^x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 3U;
	static int64_t x222 = INT64_MIN;
	int8_t x223 = -1;
	int64_t x224 = 1982508237223768LL;

	t55 = ((x221==x222)*(x223^x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x226 = INT64_MIN;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = 1;

	t56 = ((x225==x226)*(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 1454LLU;
	static int8_t x230 = 7;
	uint16_t x231 = 46U;
	static volatile uint64_t x232 = 7189542LLU;
	static uint64_t t57 = 17049332LLU;

	t57 = ((x229==x230)*(x231^x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x234 = 524215367004583751LLU;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 27912403;

	t58 = ((x233==x234)*(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MIN;
	static int64_t x238 = -3326LL;
	volatile uint16_t x240 = 0U;
	volatile int64_t t59 = 65032250LL;

	t59 = ((x237==x238)*(x239^x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;

	t60 = ((x241==x242)*(x243^x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	static int8_t x247 = INT8_MIN;
	static int32_t x248 = INT32_MAX;
	static volatile int32_t t61 = 3;

	t61 = ((x245==x246)*(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = 112910;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MAX;

	t62 = ((x249==x250)*(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 169U;
	uint64_t x255 = UINT64_MAX;
	volatile int32_t x256 = 4067983;
	static volatile uint64_t t63 = 8701160299289LLU;

	t63 = ((x253==x254)*(x255^x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -117952929LL;
	uint8_t x260 = 0U;

	t64 = ((x257==x258)*(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -12506;
	int8_t x262 = -1;
	int32_t x263 = INT32_MIN;

	t65 = ((x261==x262)*(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 7U;
	int8_t x266 = INT8_MAX;
	int64_t x267 = -1LL;
	int32_t x268 = -130153;
	int64_t t66 = -642466LL;

	t66 = ((x265==x266)*(x267^x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = -1LL;
	int16_t x271 = -93;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t67 = 2036404;

	t67 = ((x269==x270)*(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x275 = 1;
	int32_t t68 = 6;

	t68 = ((x273==x274)*(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	static int64_t x280 = INT64_MIN;
	int64_t t69 = 701530LL;

	t69 = ((x277==x278)*(x279^x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	static int32_t x282 = -1;
	int8_t x283 = -29;
	volatile uint16_t x284 = UINT16_MAX;
	int32_t t70 = -39173167;

	t70 = ((x281==x282)*(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int32_t x286 = INT32_MIN;
	uint8_t x287 = UINT8_MAX;
	static int32_t t71 = -3;

	t71 = ((x285==x286)*(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 25024LLU;
	int32_t x291 = INT32_MAX;
	static int16_t x292 = 1;
	int32_t t72 = -858378076;

	t72 = ((x289==x290)*(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 1U;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	static uint64_t x296 = 141999143LLU;
	volatile uint64_t t73 = 104650LLU;

	t73 = ((x293==x294)*(x295^x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 2571U;
	volatile int64_t x298 = -6301532311690LL;
	uint64_t x300 = UINT64_MAX;
	static uint64_t t74 = 625880248LLU;

	t74 = ((x297==x298)*(x299^x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x303 = 22LLU;
	int64_t x304 = INT64_MIN;
	static volatile uint64_t t75 = 49117LLU;

	t75 = ((x301==x302)*(x303^x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = -1;
	volatile uint8_t x308 = UINT8_MAX;
	uint32_t t76 = 68587U;

	t76 = ((x305==x306)*(x307^x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -63;
	static uint32_t x310 = 699U;
	volatile int32_t t77 = 1;

	t77 = ((x309==x310)*(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	uint16_t x314 = 0U;
	uint32_t x315 = 2265U;
	int32_t x316 = INT32_MIN;
	uint32_t t78 = 1881169U;

	t78 = ((x313==x314)*(x315^x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	volatile int64_t t79 = -2886582162140824413LL;

	t79 = ((x317==x318)*(x319^x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int32_t x322 = -27;
	int32_t x324 = -1;
	int32_t t80 = 474;

	t80 = ((x321==x322)*(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MIN;
	int8_t x327 = -1;
	int32_t t81 = 14;

	t81 = ((x325==x326)*(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = 39;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = INT16_MAX;
	static int16_t x332 = 14;

	t82 = ((x329==x330)*(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	uint64_t x336 = UINT64_MAX;
	uint64_t t83 = 1505731458249424002LLU;

	t83 = ((x333==x334)*(x335^x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int64_t x339 = -1LL;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t84 = 8777874129858LLU;

	t84 = ((x337==x338)*(x339^x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	uint64_t x343 = UINT64_MAX;
	static int16_t x344 = -6398;
	static uint64_t t85 = 686899655582007135LLU;

	t85 = ((x341==x342)*(x343^x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = 1;
	int64_t t86 = 142807828157LL;

	t86 = ((x345==x346)*(x347^x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 0U;
	int16_t x350 = -1;
	int16_t x351 = 0;
	int32_t x352 = INT32_MAX;

	t87 = ((x349==x350)*(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = -1;
	uint8_t x355 = 7U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -3;

	t88 = ((x353==x354)*(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = -1009;
	int32_t t89 = 18;

	t89 = ((x357==x358)*(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x361 = 1352378620470039LLU;
	int16_t x362 = INT16_MAX;
	int64_t t90 = 1621639LL;

	t90 = ((x361==x362)*(x363^x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 13782LLU;
	volatile int64_t x367 = 891183LL;
	volatile int16_t x368 = 10801;
	int64_t t91 = 226LL;

	t91 = ((x365==x366)*(x367^x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 1LLU;
	static int16_t x370 = INT16_MIN;
	static int16_t x371 = -3134;
	int32_t x372 = -1;

	t92 = ((x369==x370)*(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	static volatile int64_t x374 = INT64_MAX;
	int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x373==x374)*(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 205U;
	uint64_t x378 = 66LLU;
	uint16_t x379 = 17U;
	int32_t x380 = -47233;
	volatile int32_t t94 = -63;

	t94 = ((x377==x378)*(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 21584LL;
	volatile uint32_t x382 = 2534724U;
	uint64_t x383 = 7LLU;
	static int8_t x384 = INT8_MIN;
	volatile uint64_t t95 = 16626LLU;

	t95 = ((x381==x382)*(x383^x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 58132503LLU;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 12U;
	volatile int8_t x388 = INT8_MIN;
	int32_t t96 = -9912815;

	t96 = ((x385==x386)*(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = 1;
	int64_t x390 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	uint64_t t97 = 1771234103008LLU;

	t97 = ((x389==x390)*(x391^x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 8050U;
	int16_t x394 = INT16_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile uint64_t t98 = 83246LLU;

	t98 = ((x393==x394)*(x395^x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = -1;
	int16_t x399 = -4;
	static int64_t x400 = -1LL;
	volatile int64_t t99 = 1024888471955397LL;

	t99 = ((x397==x398)*(x399^x400));

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

