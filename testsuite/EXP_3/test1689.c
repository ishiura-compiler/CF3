#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int8_t x3 = -1;
uint64_t t1 = 47LLU;
volatile int8_t x13 = -15;
uint32_t x16 = 7867U;
uint8_t x20 = 29U;
int16_t x22 = 12;
uint8_t x27 = 14U;
int32_t x30 = INT32_MIN;
static int16_t x32 = 11;
volatile int32_t t8 = 194;
uint64_t x38 = 5433089068028587882LLU;
static uint64_t x39 = UINT64_MAX;
static volatile uint64_t t9 = 484589220288205LLU;
uint64_t x41 = UINT64_MAX;
int32_t x42 = INT32_MAX;
int64_t x46 = INT64_MIN;
static uint32_t x47 = UINT32_MAX;
int8_t x57 = -1;
static int8_t x64 = -1;
uint8_t x69 = 27U;
int64_t x72 = -1LL;
int32_t t17 = -283;
int8_t x73 = INT8_MIN;
int64_t x74 = INT64_MIN;
int32_t x85 = INT32_MIN;
volatile int16_t x96 = INT16_MAX;
volatile uint16_t x101 = 1381U;
int16_t x107 = INT16_MIN;
static uint16_t x112 = 0U;
int8_t x115 = -1;
volatile int16_t x119 = INT16_MAX;
static uint16_t x125 = 1U;
static int64_t x129 = INT64_MAX;
volatile int16_t x130 = INT16_MIN;
static uint16_t x136 = 405U;
int16_t x142 = -7;
uint64_t x145 = 24118LLU;
uint32_t x146 = 30U;
int32_t x161 = INT32_MIN;
int32_t x168 = -1;
static uint32_t x174 = UINT32_MAX;
int16_t x178 = -1;
int16_t x180 = -1;
static volatile int32_t t44 = 498164;
uint64_t x184 = 9749440LLU;
int32_t t45 = INT32_MAX;
int16_t x186 = 461;
int64_t x188 = INT64_MIN;
int8_t x189 = INT8_MIN;
int32_t t52 = -1670733;
int64_t x213 = INT64_MAX;
static int8_t x216 = INT8_MIN;
int64_t x221 = INT64_MIN;
int64_t x229 = 1LL;
int64_t x230 = -50LL;
int64_t t57 = -169LL;
int32_t x233 = INT32_MAX;
volatile int64_t x243 = INT64_MIN;
uint8_t x245 = 9U;
uint16_t x246 = 130U;
int8_t x248 = INT8_MIN;
volatile int8_t x257 = -1;
volatile int32_t t64 = -23;
int32_t x261 = INT32_MIN;
int16_t x263 = -1;
int64_t x265 = -1LL;
int64_t x267 = INT64_MIN;
uint64_t t66 = 1001262LLU;
int8_t x269 = 60;
uint32_t x273 = UINT32_MAX;
int16_t x277 = 1589;
uint8_t x280 = 5U;
static volatile int32_t t69 = 181;
int16_t x294 = -1;
static volatile uint16_t x306 = UINT16_MAX;
uint8_t x309 = UINT8_MAX;
uint32_t t77 = 125U;
int32_t x319 = -1;
uint8_t x320 = 1U;
static int64_t x325 = INT64_MIN;
volatile int32_t t83 = -178;
volatile int8_t x339 = INT8_MAX;
volatile uint8_t x341 = 3U;
volatile int8_t x343 = INT8_MAX;
static int32_t x352 = -59;
static uint8_t x354 = UINT8_MAX;
int16_t x356 = -1;
int8_t x357 = INT8_MIN;
volatile uint32_t x361 = 20474U;
volatile uint32_t t90 = 1289608U;
static int16_t x370 = INT16_MIN;
uint32_t x371 = 2518U;
int64_t x372 = INT64_MIN;
int32_t x378 = -1;
int8_t x381 = INT8_MIN;
uint8_t x385 = 0U;
uint64_t x386 = 7994LLU;
uint64_t x390 = UINT64_MAX;
volatile uint64_t t97 = 52826170886830LLU;
volatile int8_t x395 = -1;
static volatile int32_t x396 = -2745;


void f0(void) {
	int8_t x1 = 1;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -16341;

	t0 = ((x1^x2)|(x3<=x4));

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	uint64_t x6 = 347431LLU;
	volatile int16_t x7 = INT16_MAX;
	int64_t x8 = -82LL;

	t1 = ((x5^x6)|(x7<=x8));

	if (t1 != 347431LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -6LL;
	uint64_t x10 = 3658924149705806416LLU;
	static volatile int8_t x11 = INT8_MIN;
	volatile int64_t x12 = -152808982446814LL;
	volatile uint64_t t2 = 7711617139LLU;

	t2 = ((x9^x10)|(x11<=x12));

	if (t2 != 14787819924003745194LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 98U;
	volatile uint64_t x15 = 411177117LLU;
	volatile int32_t t3 = -34706575;

	t3 = ((x13^x14)|(x15<=x16));

	if (t3 != -109) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -13508734996LL;
	int32_t x18 = 1508310;
	int64_t x19 = INT64_MIN;
	int64_t t4 = 501549139615001139LL;

	t4 = ((x17^x18)|(x19<=x20));

	if (t4 != -13509456837LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1093U;
	static int64_t x23 = INT64_MIN;
	static int32_t x24 = -2;
	static volatile int32_t t5 = -170991;

	t5 = ((x21^x22)|(x23<=x24));

	if (t5 != 1097) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	volatile int8_t x26 = INT8_MIN;
	static int8_t x28 = -50;
	volatile int64_t t6 = 4209695836629427926LL;

	t6 = ((x25^x26)|(x27<=x28));

	if (t6 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 3758636701508LLU;
	volatile int8_t x31 = -1;
	volatile uint64_t t7 = 32139559728768LLU;

	t7 = ((x29^x30)|(x31<=x32));

	if (t7 != 18446740314006001477LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	static int8_t x34 = 1;
	uint32_t x35 = 6U;
	int8_t x36 = 0;

	t8 = ((x33^x34)|(x35<=x36));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 2;
	uint64_t x40 = 22571577LLU;

	t9 = ((x37^x38)|(x39<=x40));

	if (t9 != 5433089068028587880LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = -1;
	int32_t x44 = -818;
	volatile uint64_t t10 = 113901352LLU;

	t10 = ((x41^x42)|(x43<=x44));

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 4;
	static uint8_t x48 = 38U;
	int64_t t11 = -12LL;

	t11 = ((x45^x46)|(x47<=x48));

	if (t11 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 2U;
	int32_t x50 = 418776;
	volatile int64_t x51 = INT64_MIN;
	static int64_t x52 = 24336124LL;
	volatile int32_t t12 = 11132187;

	t12 = ((x49^x50)|(x51<=x52));

	if (t12 != 418779) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static int32_t x54 = INT32_MIN;
	volatile int8_t x55 = INT8_MIN;
	uint64_t x56 = 4725541972898425373LLU;
	static volatile int32_t t13 = 12;

	t13 = ((x53^x54)|(x55<=x56));

	if (t13 != -2147418113) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x58 = 655010062447LLU;
	static volatile int8_t x59 = INT8_MAX;
	int32_t x60 = -1;
	uint64_t t14 = 1869LLU;

	t14 = ((x57^x58)|(x59<=x60));

	if (t14 != 18446743418699489168LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	static uint16_t x62 = UINT16_MAX;
	uint16_t x63 = UINT16_MAX;
	volatile uint64_t t15 = 44427692046162LLU;

	t15 = ((x61^x62)|(x63<=x64));

	if (t15 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = INT64_MIN;
	int16_t x67 = 11;
	int8_t x68 = -3;
	volatile int64_t t16 = 626815LL;

	t16 = ((x65^x66)|(x67<=x68));

	if (t16 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	int32_t x71 = 419751;

	t17 = ((x69^x70)|(x71<=x72));

	if (t17 != -32741) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x75 = -5;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 842140LL;

	t18 = ((x73^x74)|(x75<=x76));

	if (t18 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = INT32_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -2;

	t19 = ((x77^x78)|(x79<=x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int16_t x82 = -1;
	uint8_t x83 = 0U;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 0;

	t20 = ((x81^x82)|(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x86 = 865U;
	int8_t x87 = -16;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -2714;

	t21 = ((x85^x86)|(x87<=x88));

	if (t21 != -2147482783) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -5;
	static uint16_t x90 = 5868U;
	volatile uint64_t x91 = 2LLU;
	static uint64_t x92 = UINT64_MAX;
	static int32_t t22 = 0;

	t22 = ((x89^x90)|(x91<=x92));

	if (t22 != -5865) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = -1;
	uint16_t x95 = 500U;
	int32_t t23 = -27666605;

	t23 = ((x93^x94)|(x95<=x96));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 47U;
	int8_t x98 = -1;
	int16_t x99 = 10275;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = 1;

	t24 = ((x97^x98)|(x99<=x100));

	if (t24 != -48) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 0U;
	static int32_t x103 = INT32_MAX;
	static uint64_t x104 = UINT64_MAX;
	static volatile uint32_t t25 = 90758U;

	t25 = ((x101^x102)|(x103<=x104));

	if (t25 != 1381U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 15U;
	int32_t x106 = INT32_MIN;
	uint64_t x108 = 4833655073LLU;
	volatile int32_t t26 = -5043043;

	t26 = ((x105^x106)|(x107<=x108));

	if (t26 != -2147483633) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = 5;
	int32_t x110 = -1;
	int8_t x111 = 19;
	static int32_t t27 = -2491;

	t27 = ((x109^x110)|(x111<=x112));

	if (t27 != -6) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 9U;
	volatile int32_t x116 = -129709462;
	volatile int32_t t28 = 0;

	t28 = ((x113^x114)|(x115<=x116));

	if (t28 != 65526) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = -1;
	int32_t x120 = -1;
	volatile int32_t t29 = 963;

	t29 = ((x117^x118)|(x119<=x120));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile int32_t x122 = INT32_MIN;
	volatile int16_t x123 = INT16_MIN;
	uint64_t x124 = 2612330LLU;
	volatile int64_t t30 = 115LL;

	t30 = ((x121^x122)|(x123<=x124));

	if (t30 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MIN;
	static int64_t x127 = -11169594310591LL;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = -543480864;

	t31 = ((x125^x126)|(x127<=x128));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x131 = UINT16_MAX;
	static int16_t x132 = -1;
	volatile int64_t t32 = 113794192538576190LL;

	t32 = ((x129^x130)|(x131<=x132));

	if (t32 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	volatile uint64_t x134 = 28LLU;
	volatile uint16_t x135 = 5U;
	volatile uint64_t t33 = 791630322731010446LLU;

	t33 = ((x133^x134)|(x135<=x136));

	if (t33 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = 0;
	int64_t x139 = INT64_MIN;
	static uint32_t x140 = 125475200U;
	volatile int32_t t34 = 38769;

	t34 = ((x137^x138)|(x139<=x140));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 15;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 0U;
	volatile int32_t t35 = 9;

	t35 = ((x141^x142)|(x143<=x144));

	if (t35 != -9) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x147 = INT8_MAX;
	int8_t x148 = 1;
	volatile uint64_t t36 = 15LLU;

	t36 = ((x145^x146)|(x147<=x148));

	if (t36 != 24104LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 2519179U;
	static int16_t x151 = -9;
	uint16_t x152 = UINT16_MAX;
	volatile uint32_t t37 = 220829U;

	t37 = ((x149^x150)|(x151<=x152));

	if (t37 != 2527093U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	int16_t x155 = -1;
	uint8_t x156 = 1U;
	static volatile int64_t t38 = -1377371692663379460LL;

	t38 = ((x153^x154)|(x155<=x156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MIN;
	int64_t x159 = 2990936116254LL;
	int64_t x160 = INT64_MIN;
	int64_t t39 = -14LL;

	t39 = ((x157^x158)|(x159<=x160));

	if (t39 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x162 = 443100713802LLU;
	int64_t x163 = -1LL;
	int8_t x164 = INT8_MIN;
	uint64_t t40 = 3049636LLU;

	t40 = ((x161^x162)|(x163<=x164));

	if (t40 != 18446743629899518794LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = -1;
	int32_t t41 = -641095;

	t41 = ((x165^x166)|(x167<=x168));

	if (t41 != -32769) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	static uint32_t x170 = 316U;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = 0U;
	uint32_t t42 = 43998041U;

	t42 = ((x169^x170)|(x171<=x172));

	if (t42 != 4294966979U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 15297976207086LLU;
	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t43 = 175LLU;

	t43 = ((x173^x174)|(x175<=x176));

	if (t43 != 15295075842321LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x179 = INT64_MAX;

	t44 = ((x177^x178)|(x179<=x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = -1;
	static int32_t x183 = -2247;

	t45 = ((x181^x182)|(x183<=x184));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 13U;
	static int16_t x187 = 11526;
	int32_t t46 = -54985;

	t46 = ((x185^x186)|(x187<=x188));

	if (t46 != 448) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 278LLU;
	static volatile int32_t x191 = INT32_MIN;
	volatile int8_t x192 = INT8_MAX;
	volatile uint64_t t47 = 27035919664LLU;

	t47 = ((x189^x190)|(x191<=x192));

	if (t47 != 18446744073709551255LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = -4811524;
	uint32_t x194 = 19U;
	static int16_t x195 = -2;
	uint32_t x196 = 53U;
	static volatile uint32_t t48 = 117294U;

	t48 = ((x193^x194)|(x195<=x196));

	if (t48 != 4290155759U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint32_t x198 = 648567690U;
	uint64_t x199 = UINT64_MAX;
	volatile int64_t x200 = 52781918449671698LL;
	volatile int64_t t49 = 1LL;

	t49 = ((x197^x198)|(x199<=x200));

	if (t49 != -9223372036206208118LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	uint16_t x202 = 0U;
	int16_t x203 = -1;
	volatile int16_t x204 = -1;
	volatile int32_t t50 = 8620;

	t50 = ((x201^x202)|(x203<=x204));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 230;
	uint32_t x206 = 7145586U;
	uint16_t x207 = 12672U;
	static int32_t x208 = INT32_MIN;
	volatile uint32_t t51 = 42946933U;

	t51 = ((x205^x206)|(x207<=x208));

	if (t51 != 7145620U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = -36;
	uint64_t x211 = 12892357965969LLU;
	int16_t x212 = INT16_MAX;

	t52 = ((x209^x210)|(x211<=x212));

	if (t52 != -2147483613) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -1;
	uint8_t x215 = 11U;
	volatile int64_t t53 = INT64_MIN;

	t53 = ((x213^x214)|(x215<=x216));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 270;
	static volatile int32_t x218 = INT32_MAX;
	int8_t x219 = -22;
	int8_t x220 = -1;
	int32_t t54 = 1;

	t54 = ((x217^x218)|(x219<=x220));

	if (t54 != 2147483377) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MAX;
	uint64_t x224 = 30892495968LLU;
	static uint64_t t55 = 10449937555LLU;

	t55 = ((x221^x222)|(x223<=x224));

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 3;
	int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = 35;
	volatile int32_t t56 = -9443267;

	t56 = ((x225^x226)|(x227<=x228));

	if (t56 != -2147483645) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x231 = UINT32_MAX;
	uint8_t x232 = 0U;

	t57 = ((x229^x230)|(x231<=x232));

	if (t57 != -49LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = INT32_MIN;
	int16_t x235 = -1;
	static uint16_t x236 = 215U;
	static volatile int32_t t58 = 408618;

	t58 = ((x233^x234)|(x235<=x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MIN;
	static int32_t x239 = INT32_MIN;
	int32_t x240 = 25;
	static int32_t t59 = 933489;

	t59 = ((x237^x238)|(x239<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = 1;
	int8_t x242 = INT8_MIN;
	int32_t x244 = -1;
	static volatile int32_t t60 = -261672;

	t60 = ((x241^x242)|(x243<=x244));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x247 = 22U;
	int32_t t61 = 1061;

	t61 = ((x245^x246)|(x247<=x248));

	if (t61 != 139) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = 1;
	volatile int8_t x250 = INT8_MIN;
	volatile int32_t x251 = INT32_MAX;
	static uint16_t x252 = 17U;
	int32_t t62 = -65928;

	t62 = ((x249^x250)|(x251<=x252));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	static int8_t x255 = 11;
	uint16_t x256 = UINT16_MAX;
	int64_t t63 = INT64_MAX;

	t63 = ((x253^x254)|(x255<=x256));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x258 = 4U;
	static volatile int8_t x259 = -1;
	volatile int64_t x260 = -1LL;

	t64 = ((x257^x258)|(x259<=x260));

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 906U;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -10;

	t65 = ((x261^x262)|(x263<=x264));

	if (t65 != -2147482742) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x266 = 214108655609LLU;
	int32_t x268 = INT32_MAX;

	t66 = ((x265^x266)|(x267<=x268));

	if (t66 != 18446743859600896007LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 1U;
	static int16_t x271 = 97;
	static uint16_t x272 = 156U;
	static volatile int32_t t67 = 305;

	t67 = ((x269^x270)|(x271<=x272));

	if (t67 != 61) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 17093894589LLU;
	uint32_t x275 = 7024U;
	uint8_t x276 = UINT8_MAX;
	volatile uint64_t t68 = 4LLU;

	t68 = ((x273^x274)|(x275<=x276));

	if (t68 != 12970876482LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	static int8_t x279 = INT8_MIN;

	t69 = ((x277^x278)|(x279<=x280));

	if (t69 != -31179) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = -5LL;
	static uint16_t x283 = 6233U;
	int8_t x284 = INT8_MAX;
	volatile int64_t t70 = -40069429170985118LL;

	t70 = ((x281^x282)|(x283<=x284));

	if (t70 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = 840276LL;
	int32_t x286 = INT32_MIN;
	int32_t x287 = -13;
	int8_t x288 = -1;
	int64_t t71 = -1371417151895LL;

	t71 = ((x285^x286)|(x287<=x288));

	if (t71 != -2146643371LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 3U;
	int16_t x290 = INT16_MAX;
	int8_t x291 = 11;
	uint32_t x292 = 832U;
	int32_t t72 = -1;

	t72 = ((x289^x290)|(x291<=x292));

	if (t72 != 32765) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	volatile int32_t x295 = INT32_MIN;
	static int8_t x296 = -5;
	volatile int32_t t73 = 504170;

	t73 = ((x293^x294)|(x295<=x296));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	uint64_t x298 = 409LLU;
	int64_t x299 = -5896LL;
	static int64_t x300 = -2135271729967LL;
	uint64_t t74 = 471911146627818859LLU;

	t74 = ((x297^x298)|(x299<=x300));

	if (t74 != 18446744073709551206LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	int8_t x302 = -1;
	int64_t x303 = -1LL;
	volatile uint32_t x304 = 128U;
	int64_t t75 = INT64_MAX;

	t75 = ((x301^x302)|(x303<=x304));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 152548;
	int64_t x307 = INT64_MAX;
	volatile int8_t x308 = -1;
	static int32_t t76 = -4;

	t76 = ((x305^x306)|(x307<=x308));

	if (t76 != 175131) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x310 = 20342515U;
	int8_t x311 = -1;
	static int8_t x312 = INT8_MAX;

	t77 = ((x309^x310)|(x311<=x312));

	if (t77 != 20342285U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 37U;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = -147;
	static uint8_t x316 = 1U;
	volatile uint32_t t78 = 5U;

	t78 = ((x313^x314)|(x315<=x316));

	if (t78 != 4294967259U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 111;
	uint32_t x318 = 822U;
	static volatile uint32_t t79 = 844644839U;

	t79 = ((x317^x318)|(x319<=x320));

	if (t79 != 857U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1;
	int32_t x322 = 254610;
	static int32_t x323 = INT32_MIN;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 38960005;

	t80 = ((x321^x322)|(x323<=x324));

	if (t80 != -254611) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	int32_t x327 = 0;
	int32_t x328 = INT32_MAX;
	int64_t t81 = 33091713LL;

	t81 = ((x325^x326)|(x327<=x328));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	int16_t x332 = -126;
	int64_t t82 = INT64_MAX;

	t82 = ((x329^x330)|(x331<=x332));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = INT16_MIN;
	int32_t x335 = 11565;
	int32_t x336 = -1;

	t83 = ((x333^x334)|(x335<=x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MIN;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -253781;

	t84 = ((x337^x338)|(x339<=x340));

	if (t84 != -2147483393) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -25LL;
	static int32_t x344 = INT32_MIN;
	static int64_t t85 = -27014985176LL;

	t85 = ((x341^x342)|(x343<=x344));

	if (t85 != -28LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 10U;
	volatile int64_t x346 = INT64_MIN;
	static int64_t x347 = INT64_MAX;
	static int16_t x348 = -616;
	int64_t t86 = 457891826456752LL;

	t86 = ((x345^x346)|(x347<=x348));

	if (t86 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = INT64_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 3177U;
	int64_t t87 = 241581412076386021LL;

	t87 = ((x349^x350)|(x351<=x352));

	if (t87 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int16_t x355 = 1;
	volatile int32_t t88 = -15;

	t88 = ((x353^x354)|(x355<=x356));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x358 = -57;
	volatile int16_t x359 = -1;
	volatile int64_t x360 = INT64_MAX;
	static volatile int32_t t89 = 406686512;

	t89 = ((x357^x358)|(x359<=x360));

	if (t89 != 71) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	static uint64_t x363 = 7188581113045LLU;
	uint64_t x364 = UINT64_MAX;

	t90 = ((x361^x362)|(x363<=x364));

	if (t90 != 4294946939U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = -4;
	uint64_t x367 = 964245670955LLU;
	static int8_t x368 = 0;
	volatile int32_t t91 = -54596245;

	t91 = ((x365^x366)|(x367<=x368));

	if (t91 != -125) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile int32_t t92 = 4;

	t92 = ((x369^x370)|(x371<=x372));

	if (t92 != 32640) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 16251715LL;
	volatile uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MIN;
	int16_t x376 = 1163;
	static volatile int64_t t93 = -14689LL;

	t93 = ((x373^x374)|(x375<=x376));

	if (t93 != 4278715581LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 24U;
	int64_t x379 = -1LL;
	int32_t x380 = -1;
	static volatile int32_t t94 = -597;

	t94 = ((x377^x378)|(x379<=x380));

	if (t94 != -25) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = 229;
	int32_t x383 = -256554;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 1;

	t95 = ((x381^x382)|(x383<=x384));

	if (t95 != -155) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x387 = -1LL;
	int16_t x388 = -1;
	volatile uint64_t t96 = 248791523313300LLU;

	t96 = ((x385^x386)|(x387<=x388));

	if (t96 != 7995LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	static int16_t x391 = INT16_MIN;
	volatile int64_t x392 = INT64_MAX;

	t97 = ((x389^x390)|(x391<=x392));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MIN;
	int8_t x394 = -1;
	int32_t t98 = 587271;

	t98 = ((x393^x394)|(x395<=x396));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	volatile int8_t x398 = INT8_MIN;
	int16_t x399 = 1353;
	volatile int16_t x400 = INT16_MIN;
	static int64_t t99 = -72557LL;

	t99 = ((x397^x398)|(x399<=x400));

	if (t99 != 127LL) { NG(); } else { ; }
	
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

