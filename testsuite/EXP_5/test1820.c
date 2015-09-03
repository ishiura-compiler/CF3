#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
volatile int32_t t1 = INT32_MIN;
int32_t x10 = -1;
int32_t x14 = INT32_MAX;
int8_t x21 = INT8_MIN;
volatile int32_t t5 = 94362984;
volatile uint8_t x26 = 2U;
static volatile int32_t t6 = 1;
int32_t x46 = -1;
volatile int32_t x48 = INT32_MIN;
int32_t t12 = 3252278;
static uint32_t x55 = UINT32_MAX;
uint8_t x56 = 2U;
volatile int8_t x66 = 0;
int32_t t17 = -603134403;
volatile int16_t x74 = -314;
static int8_t x75 = INT8_MIN;
static int32_t x76 = INT32_MIN;
volatile uint32_t x82 = 5U;
int64_t x83 = -1LL;
uint64_t x89 = 721183LLU;
int64_t x96 = INT64_MIN;
int8_t x98 = INT8_MIN;
int32_t t24 = 1589303;
static int32_t x101 = 0;
uint64_t x103 = 740LLU;
volatile int32_t t25 = -1;
static volatile int32_t x107 = -48682785;
static int64_t x119 = INT64_MIN;
int8_t x122 = INT8_MAX;
volatile uint64_t x123 = UINT64_MAX;
uint8_t x125 = 0U;
uint16_t x126 = UINT16_MAX;
uint16_t x127 = 28882U;
volatile int8_t x132 = INT8_MIN;
volatile int32_t t32 = 0;
static volatile int64_t x133 = INT64_MIN;
volatile uint16_t x134 = 16836U;
volatile uint8_t x147 = 1U;
int32_t x150 = INT32_MIN;
static int64_t x153 = 3361062LL;
int16_t x156 = -1227;
int32_t t43 = -4;
int8_t x178 = INT8_MAX;
uint64_t x179 = 21822945584818LLU;
int8_t x182 = -1;
int32_t t45 = -109;
int64_t x187 = 34773487080175492LL;
static volatile uint16_t x189 = 6898U;
int32_t x191 = INT32_MAX;
volatile uint8_t x194 = 7U;
uint16_t x195 = 7U;
volatile int32_t t49 = 9865;
int8_t x201 = 1;
int32_t x202 = INT32_MIN;
uint32_t x212 = UINT32_MAX;
int32_t x218 = -1;
volatile uint8_t x224 = 72U;
static uint16_t x232 = 0U;
int32_t x234 = INT32_MIN;
int32_t t58 = 853;
volatile int64_t x240 = -1LL;
volatile int32_t x244 = -1;
int32_t x252 = 20185531;
uint64_t x265 = 1863563613972268866LLU;
uint16_t x276 = 11U;
int32_t x279 = 1037;
int16_t x280 = -1;
static int32_t x284 = 53093154;
volatile int32_t t70 = -40;
int32_t t72 = 1888462;
int64_t x294 = 131508648667LL;
int32_t x301 = -725290;
static int8_t x318 = INT8_MAX;
volatile uint16_t x319 = 22622U;
uint16_t x325 = 2U;
volatile uint32_t x326 = UINT32_MAX;
volatile int64_t x330 = 2153447060048473LL;
static int32_t x335 = INT32_MIN;
int16_t x348 = INT16_MIN;
int64_t t90 = 1075LL;
static uint8_t x371 = 26U;
int8_t x373 = INT8_MIN;
int16_t x381 = INT16_MAX;
int32_t x382 = INT32_MAX;
volatile int16_t x387 = INT16_MIN;
volatile uint8_t x390 = 22U;
int16_t x392 = 2521;
uint32_t t97 = 1U;
int8_t x393 = -28;
int64_t x395 = INT64_MAX;


void f0(void) {
	static int8_t x1 = -1;
	int64_t x3 = INT64_MAX;
	static int64_t x4 = INT64_MAX;
	int32_t t0 = 2016;

	t0 = (x1^((x2&x3)<=x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	static int32_t x6 = 1;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = -1780712126284LL;

	t1 = (x5^((x6&x7)<=x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x11 = -1;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -108;

	t2 = (x9^((x10&x11)<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = 52281069;
	volatile int32_t t3 = -6066884;

	t3 = (x13^((x14&x15)<=x16));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static uint64_t x18 = UINT64_MAX;
	static int32_t x19 = -62741;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t4 = 1;

	t4 = (x17^((x18&x19)<=x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	volatile int64_t x24 = -1LL;

	t5 = (x21^((x22&x23)<=x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	volatile uint8_t x27 = UINT8_MAX;
	uint32_t x28 = UINT32_MAX;

	t6 = (x25^((x26&x27)<=x28));

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 41;
	uint64_t x30 = 13900045581LLU;
	volatile uint32_t x31 = 110564587U;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -22990;

	t7 = (x29^((x30&x31)<=x32));

	if (t7 != 41) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 3427654U;
	int32_t x34 = -120472466;
	static uint8_t x35 = 11U;
	volatile uint16_t x36 = UINT16_MAX;
	uint32_t t8 = 16576U;

	t8 = (x33^((x34&x35)<=x36));

	if (t8 != 3427655U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x38 = 484053219U;
	volatile uint8_t x39 = 22U;
	static int8_t x40 = 0;
	volatile int32_t t9 = INT32_MIN;

	t9 = (x37^((x38&x39)<=x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 372883586110294LLU;
	uint32_t x42 = 1822945545U;
	int32_t x43 = INT32_MIN;
	uint8_t x44 = UINT8_MAX;
	static volatile uint64_t t10 = 133410LLU;

	t10 = (x41^((x42&x43)<=x44));

	if (t10 != 372883586110295LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 3747;
	volatile uint32_t x47 = 82454U;
	int32_t t11 = -4;

	t11 = (x45^((x46&x47)<=x48));

	if (t11 != 3746) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -196;
	static int16_t x50 = -1;
	int8_t x51 = 1;
	int8_t x52 = INT8_MAX;

	t12 = (x49^((x50&x51)<=x52));

	if (t12 != -195) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 71655691992202417LLU;
	int32_t x54 = INT32_MAX;
	static volatile uint64_t t13 = 268827085610LLU;

	t13 = (x53^((x54&x55)<=x56));

	if (t13 != 71655691992202417LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 4273U;
	int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MAX;
	uint64_t t14 = 3445614LLU;

	t14 = (x57^((x58&x59)<=x60));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 872U;
	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	int16_t x64 = 0;
	int32_t t15 = -750;

	t15 = (x61^((x62&x63)<=x64));

	if (t15 != 873) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	uint16_t x67 = 1U;
	static volatile uint64_t x68 = UINT64_MAX;
	volatile int64_t t16 = 6869257541LL;

	t16 = (x65^((x66&x67)<=x68));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	volatile int8_t x71 = 1;
	int16_t x72 = -13669;

	t17 = (x69^((x70&x71)<=x72));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 436U;
	volatile int32_t t18 = -116888092;

	t18 = (x73^((x74&x75)<=x76));

	if (t18 != 436) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	uint16_t x78 = 5592U;
	volatile int32_t x79 = INT32_MAX;
	static int8_t x80 = INT8_MIN;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x77^((x78&x79)<=x80));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -45;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t20 = -2;

	t20 = (x81^((x82&x83)<=x84));

	if (t20 != -46) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = UINT8_MAX;
	volatile int64_t x86 = INT64_MIN;
	static volatile uint64_t x87 = 128071LLU;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 31293;

	t21 = (x85^((x86&x87)<=x88));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MAX;
	volatile uint16_t x91 = 12009U;
	int8_t x92 = -13;
	volatile uint64_t t22 = 1186986504LLU;

	t22 = (x89^((x90&x91)<=x92));

	if (t22 != 721183LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MIN;
	static int8_t x95 = -1;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x93^((x94&x95)<=x96));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	uint64_t x99 = 2192229821032304829LLU;
	volatile int32_t x100 = -270;

	t24 = (x97^((x98&x99)<=x100));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MAX;
	volatile int16_t x104 = INT16_MAX;

	t25 = (x101^((x102&x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	volatile int16_t x106 = INT16_MIN;
	uint32_t x108 = 278621U;
	int32_t t26 = 1;

	t26 = (x105^((x106&x107)<=x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile uint16_t x110 = 452U;
	volatile int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 18561181;

	t27 = (x109^((x110&x111)<=x112));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static volatile uint64_t x114 = 111856LLU;
	int64_t x115 = INT64_MIN;
	static volatile uint16_t x116 = 410U;
	static int32_t t28 = -7136;

	t28 = (x113^((x114&x115)<=x116));

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 3U;
	static volatile uint8_t x118 = 95U;
	static volatile int16_t x120 = 8728;
	static volatile int32_t t29 = 973;

	t29 = (x117^((x118&x119)<=x120));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint32_t x124 = 3U;
	volatile int32_t t30 = 3652;

	t30 = (x121^((x122&x123)<=x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x128 = 35LL;
	int32_t t31 = -732083256;

	t31 = (x125^((x126&x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 0;
	int32_t x130 = 142;
	int16_t x131 = -2;

	t32 = (x129^((x130&x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x135 = -552;
	static int32_t x136 = -169;
	static volatile int64_t t33 = INT64_MIN;

	t33 = (x133^((x134&x135)<=x136));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 865052111U;
	int32_t x138 = INT32_MAX;
	static int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	volatile uint32_t t34 = 425190945U;

	t34 = (x137^((x138&x139)<=x140));

	if (t34 != 865052111U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MIN;
	int32_t x143 = -22;
	int32_t x144 = INT32_MAX;
	int32_t t35 = 3337;

	t35 = (x141^((x142&x143)<=x144));

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = UINT8_MAX;
	uint8_t x148 = 18U;
	static volatile int32_t t36 = 1;

	t36 = (x145^((x146&x147)<=x148));

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 1;
	static uint64_t x151 = 1225LLU;
	int32_t x152 = INT32_MAX;
	int32_t t37 = -198;

	t37 = (x149^((x150&x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = -1;
	int64_t x155 = INT64_MAX;
	int64_t t38 = -2944982960913LL;

	t38 = (x153^((x154&x155)<=x156));

	if (t38 != 3361062LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 80U;
	volatile uint32_t x158 = 2297189U;
	int32_t x159 = 27526015;
	int32_t x160 = INT32_MAX;
	volatile uint32_t t39 = 50572021U;

	t39 = (x157^((x158&x159)<=x160));

	if (t39 != 81U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static uint32_t x162 = 68332197U;
	static volatile uint8_t x163 = 2U;
	int64_t x164 = -490465676255969214LL;
	int32_t t40 = 15815686;

	t40 = (x161^((x162&x163)<=x164));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -681222689395LL;
	uint16_t x166 = 26U;
	int8_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int64_t t41 = 1LL;

	t41 = (x165^((x166&x167)<=x168));

	if (t41 != -681222689395LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MAX;
	static int8_t x172 = INT8_MIN;
	int64_t t42 = INT64_MIN;

	t42 = (x169^((x170&x171)<=x172));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -113;
	volatile int16_t x174 = -1;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = UINT8_MAX;

	t43 = (x173^((x174&x175)<=x176));

	if (t43 != -113) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int16_t x180 = -1;
	uint32_t t44 = 10926904U;

	t44 = (x177^((x178&x179)<=x180));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MIN;
	int32_t x183 = -90;
	uint8_t x184 = 8U;

	t45 = (x181^((x182&x183)<=x184));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;
	int32_t t46 = -782;

	t46 = (x185^((x186&x187)<=x188));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	int16_t x192 = -6526;
	volatile int32_t t47 = -242;

	t47 = (x189^((x190&x191)<=x192));

	if (t47 != 6898) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x193 = INT32_MAX;
	int8_t x196 = 0;
	int32_t t48 = INT32_MAX;

	t48 = (x193^((x194&x195)<=x196));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 13786955;
	int8_t x198 = -28;
	static int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;

	t49 = (x197^((x198&x199)<=x200));

	if (t49 != 13786954) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = -1245;

	t50 = (x201^((x202&x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 10125U;
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	volatile int32_t x208 = -34;
	static uint32_t t51 = 9590U;

	t51 = (x205^((x206&x207)<=x208));

	if (t51 != 10125U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -3502;
	int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	int32_t t52 = 0;

	t52 = (x209^((x210&x211)<=x212));

	if (t52 != -3501) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	uint64_t x215 = 10182961238LLU;
	uint32_t x216 = 100213U;
	int32_t t53 = -1249000;

	t53 = (x213^((x214&x215)<=x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = INT16_MIN;
	int16_t x219 = 3;
	volatile uint64_t x220 = 5787364LLU;
	volatile int32_t t54 = -8919;

	t54 = (x217^((x218&x219)<=x220));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = 53LL;
	uint16_t x223 = 1U;
	volatile int32_t t55 = -1;

	t55 = (x221^((x222&x223)<=x224));

	if (t55 != 32766) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	volatile uint64_t x226 = 60008LLU;
	uint16_t x227 = 57U;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 662373660;

	t56 = (x225^((x226&x227)<=x228));

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static uint8_t x230 = 43U;
	uint16_t x231 = 41U;
	int32_t t57 = 1;

	t57 = (x229^((x230&x231)<=x232));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 51U;
	uint8_t x235 = 109U;
	uint64_t x236 = 6395529013375211LLU;

	t58 = (x233^((x234&x235)<=x236));

	if (t58 != 50) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 5LLU;
	volatile int32_t t59 = -185737;

	t59 = (x237^((x238&x239)<=x240));

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -31;
	uint8_t x242 = 29U;
	int64_t x243 = INT64_MIN;
	static int32_t t60 = 42524422;

	t60 = (x241^((x242&x243)<=x244));

	if (t60 != -31) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -693;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = -1;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = -44871;

	t61 = (x245^((x246&x247)<=x248));

	if (t61 != -694) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 123292U;
	uint16_t x250 = 14252U;
	static volatile int16_t x251 = 9290;
	volatile uint32_t t62 = 318046U;

	t62 = (x249^((x250&x251)<=x252));

	if (t62 != 123293U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = 7;
	int32_t t63 = 31543;

	t63 = (x253^((x254&x255)<=x256));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -1678550064LL;
	int32_t x258 = INT32_MIN;
	static uint8_t x259 = UINT8_MAX;
	static uint8_t x260 = 1U;
	volatile int64_t t64 = 68067274LL;

	t64 = (x257^((x258&x259)<=x260));

	if (t64 != -1678550063LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -2;
	uint32_t x262 = 7784U;
	int8_t x263 = INT8_MAX;
	static volatile int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 31;

	t65 = (x261^((x262&x263)<=x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -1LL;
	uint64_t x267 = 4196265854LLU;
	int8_t x268 = -1;
	static volatile uint64_t t66 = 682692LLU;

	t66 = (x265^((x266&x267)<=x268));

	if (t66 != 1863563613972268867LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MIN;
	int64_t x270 = INT64_MAX;
	int32_t x271 = INT32_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 8182;

	t67 = (x269^((x270&x271)<=x272));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -11;
	volatile int64_t x274 = INT64_MAX;
	volatile uint16_t x275 = 1556U;
	int32_t t68 = 0;

	t68 = (x273^((x274&x275)<=x276));

	if (t68 != -11) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static uint16_t x278 = UINT16_MAX;
	int32_t t69 = -1842;

	t69 = (x277^((x278&x279)<=x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	static uint16_t x282 = UINT16_MAX;
	static int64_t x283 = 0LL;

	t70 = (x281^((x282&x283)<=x284));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 7160605;

	t71 = (x285^((x286&x287)<=x288));

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -1;
	volatile int16_t x290 = 70;
	int16_t x291 = -6615;
	volatile uint64_t x292 = 79083679781LLU;

	t72 = (x289^((x290&x291)<=x292));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 316;
	static int64_t x295 = INT64_MIN;
	volatile int8_t x296 = 11;
	static volatile int32_t t73 = -5;

	t73 = (x293^((x294&x295)<=x296));

	if (t73 != 317) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 0;
	int8_t x298 = -1;
	uint64_t x299 = 11964023LLU;
	int8_t x300 = -1;
	int32_t t74 = -16996;

	t74 = (x297^((x298&x299)<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = UINT16_MAX;
	static int8_t x303 = INT8_MIN;
	static int8_t x304 = -2;
	int32_t t75 = -173471014;

	t75 = (x301^((x302&x303)<=x304));

	if (t75 != -725290) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -789033770257542LL;
	int16_t x306 = INT16_MAX;
	volatile int32_t x307 = INT32_MIN;
	static uint16_t x308 = UINT16_MAX;
	int64_t t76 = -13990LL;

	t76 = (x305^((x306&x307)<=x308));

	if (t76 != -789033770257541LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 759190520202504503LLU;
	uint16_t x311 = 251U;
	int32_t x312 = -50;
	static volatile int32_t t77 = -3454174;

	t77 = (x309^((x310&x311)<=x312));

	if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 11LL;
	int64_t x314 = INT64_MIN;
	uint8_t x315 = 17U;
	int16_t x316 = -16129;
	volatile int64_t t78 = 2060145LL;

	t78 = (x313^((x314&x315)<=x316));

	if (t78 != 11LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = -1;

	t79 = (x317^((x318&x319)<=x320));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	uint32_t x322 = 22584216U;
	int64_t x323 = -1LL;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -1;

	t80 = (x321^((x322&x323)<=x324));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x327 = INT64_MIN;
	int64_t x328 = 13638216548881LL;
	volatile int32_t t81 = 7;

	t81 = (x325^((x326&x327)<=x328));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	static int64_t x332 = -1LL;
	uint32_t t82 = UINT32_MAX;

	t82 = (x329^((x330&x331)<=x332));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 110U;
	uint32_t x334 = 324U;
	int64_t x336 = INT64_MIN;
	int32_t t83 = -193488953;

	t83 = (x333^((x334&x335)<=x336));

	if (t83 != 110) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static uint32_t x338 = UINT32_MAX;
	int64_t x339 = 7589907278LL;
	int32_t x340 = INT32_MIN;
	int64_t t84 = INT64_MAX;

	t84 = (x337^((x338&x339)<=x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 231LLU;
	int32_t x342 = INT32_MIN;
	int8_t x343 = 0;
	volatile int8_t x344 = -1;
	volatile uint64_t t85 = 4155383086904617904LLU;

	t85 = (x341^((x342&x343)<=x344));

	if (t85 != 231LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	volatile int64_t t86 = 269501912270LL;

	t86 = (x345^((x346&x347)<=x348));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -1LL;
	uint16_t x350 = 7262U;
	static volatile uint8_t x351 = UINT8_MAX;
	volatile uint16_t x352 = UINT16_MAX;
	static int64_t t87 = 453779199459383LL;

	t87 = (x349^((x350&x351)<=x352));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -58417080617934LL;
	int8_t x354 = INT8_MAX;
	uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = INT8_MIN;
	int64_t t88 = -46446LL;

	t88 = (x353^((x354&x355)<=x356));

	if (t88 != -58417080617934LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 1804019903488156069LLU;
	volatile int8_t x358 = INT8_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	uint64_t t89 = 118LLU;

	t89 = (x357^((x358&x359)<=x360));

	if (t89 != 1804019903488156068LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 835849293285LL;
	int64_t x362 = -1LL;
	int32_t x363 = -1;
	int64_t x364 = -1LL;

	t90 = (x361^((x362&x363)<=x364));

	if (t90 != 835849293284LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 3;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = -1;
	int64_t x368 = -141899372081580522LL;
	volatile int32_t t91 = -3787;

	t91 = (x365^((x366&x367)<=x368));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -18LL;
	int32_t x370 = INT32_MIN;
	uint32_t x372 = 2019559560U;
	volatile int64_t t92 = 621291986250LL;

	t92 = (x369^((x370&x371)<=x372));

	if (t92 != -17LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	static volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = 536;

	t93 = (x373^((x374&x375)<=x376));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = -1LL;
	static int8_t x379 = INT8_MIN;
	int8_t x380 = 16;
	int32_t t94 = 1;

	t94 = (x377^((x378&x379)<=x380));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x383 = INT16_MIN;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = 1;

	t95 = (x381^((x382&x383)<=x384));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1876732673616977LL;
	volatile uint32_t x386 = 0U;
	uint16_t x388 = 3U;
	int64_t t96 = 0LL;

	t96 = (x385^((x386&x387)<=x388));

	if (t96 != -1876732673616978LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x391 = INT16_MIN;

	t97 = (x389^((x390&x391)<=x392));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = 0;
	static uint16_t x396 = 12839U;
	int32_t t98 = 32557;

	t98 = (x393^((x394&x395)<=x396));

	if (t98 != -27) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = 2U;
	uint8_t x399 = 7U;
	static volatile int8_t x400 = INT8_MAX;
	int32_t t99 = -27906;

	t99 = (x397^((x398&x399)<=x400));

	if (t99 != 32766) { NG(); } else { ; }
	
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

