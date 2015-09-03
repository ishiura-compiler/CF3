#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int8_t x21 = -1;
int8_t x23 = INT8_MIN;
uint32_t t5 = 36644544U;
volatile int8_t x31 = INT8_MAX;
uint64_t t7 = 7229LLU;
int32_t x35 = -1018596;
int64_t x43 = -654723LL;
int16_t x44 = INT16_MAX;
int8_t x55 = 8;
int8_t x58 = -1;
volatile int64_t t13 = 94385LL;
volatile int64_t t14 = 0LL;
int8_t x65 = INT8_MIN;
static uint32_t x72 = UINT32_MAX;
static volatile int64_t x73 = INT64_MIN;
static int8_t x75 = INT8_MIN;
static int8_t x77 = -1;
volatile uint16_t x79 = UINT16_MAX;
static int16_t x82 = -1;
static volatile int8_t x85 = INT8_MIN;
static int64_t x86 = INT64_MIN;
static volatile uint16_t x88 = 27031U;
uint32_t x90 = 111357885U;
int8_t x92 = 8;
int64_t x95 = -3866LL;
volatile int8_t x97 = INT8_MAX;
static uint64_t x104 = UINT64_MAX;
int64_t x108 = -1LL;
int8_t x115 = -12;
uint64_t t26 = 24755877169LLU;
static uint8_t x123 = 4U;
static int8_t x124 = -1;
volatile uint64_t t28 = 496LLU;
volatile int64_t x127 = INT64_MIN;
volatile int64_t t29 = 5LL;
int64_t x129 = INT64_MAX;
static int32_t x132 = INT32_MAX;
int8_t x138 = -1;
static volatile int64_t t32 = 12613657563481996LL;
volatile int8_t x147 = INT8_MIN;
volatile uint32_t x150 = 3502156U;
volatile int8_t x154 = INT8_MIN;
int32_t x155 = -44;
volatile uint8_t x160 = UINT8_MAX;
int16_t x163 = -5;
uint64_t x170 = UINT64_MAX;
uint8_t x175 = 104U;
uint32_t x176 = 10957U;
static int32_t x178 = INT32_MIN;
uint8_t x184 = 10U;
int64_t x186 = INT64_MIN;
int8_t x187 = 1;
uint8_t x188 = 38U;
volatile uint64_t x189 = 513532091058316614LLU;
volatile uint64_t t45 = 54863445LLU;
uint64_t x194 = 960630911112626725LLU;
int8_t x195 = INT8_MAX;
int64_t x197 = 234446760971LL;
uint32_t x201 = UINT32_MAX;
int64_t t50 = -2509368647046236454LL;
int64_t x224 = INT64_MIN;
uint64_t t53 = 2153652LLU;
static int64_t x229 = INT64_MIN;
uint64_t x239 = 893698580224626LLU;
int64_t x247 = -1LL;
volatile int64_t t59 = -437556890LL;
static uint8_t x249 = 88U;
volatile uint32_t x252 = 7U;
uint16_t x253 = 11U;
int32_t t61 = -740320;
volatile uint64_t x259 = 1447572LLU;
int16_t x260 = INT16_MAX;
volatile uint64_t t62 = 2919126687086LLU;
int32_t x277 = INT32_MIN;
uint16_t x280 = 1U;
int8_t x283 = -1;
int32_t t68 = 943861;
static uint64_t t69 = 233922LLU;
static int64_t t71 = 196LL;
int16_t x297 = INT16_MAX;
int8_t x304 = -1;
volatile int64_t x315 = INT64_MAX;
uint64_t t76 = 4682736419826LLU;
int64_t x321 = -1LL;
int16_t x322 = INT16_MIN;
int64_t x324 = 61902LL;
volatile uint8_t x327 = UINT8_MAX;
int8_t x332 = -18;
int32_t x333 = INT32_MIN;
volatile int64_t t82 = 507801LL;
int32_t x349 = INT32_MAX;
int64_t t85 = 137859765722602LL;
uint8_t x360 = 1U;
uint64_t x367 = UINT64_MAX;
int16_t x368 = INT16_MIN;
uint64_t x371 = 892205126717LLU;
volatile int8_t x377 = INT8_MAX;
int32_t x383 = -56986821;
static int32_t t94 = 5820;
int16_t x396 = 1899;
static uint8_t x401 = 126U;
volatile int64_t t98 = 306395LL;
int16_t x407 = INT16_MIN;
int32_t t99 = -5460532;


void f0(void) {
	int16_t x1 = 1390;
	static int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MAX;
	int32_t t0 = 7;

	t0 = ((x1%x2)&(x3^x4));

	if (t0 != 120) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile uint16_t x6 = 57U;
	int64_t x7 = -166144548513246148LL;
	volatile int64_t x8 = INT64_MAX;
	int64_t t1 = -2028377978858464074LL;

	t1 = ((x5%x6)&(x7^x8));

	if (t1 != -9057227488341529662LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int64_t x10 = -578046378LL;
	int64_t x11 = 7679395544887714LL;
	uint16_t x12 = 0U;
	volatile int64_t t2 = -31244629598744LL;

	t2 = ((x9%x10)&(x11^x12));

	if (t2 != 7679395133706402LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -31;
	int16_t x14 = INT16_MIN;
	int64_t x15 = 132095643644LL;
	int8_t x16 = -1;
	int64_t t3 = -1LL;

	t3 = ((x13%x14)&(x15^x16));

	if (t3 != -132095643647LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = -1;
	uint32_t x19 = 119739U;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 32487075LL;

	t4 = ((x17%x18)&(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	volatile uint32_t x24 = UINT32_MAX;

	t5 = ((x21%x22)&(x23^x24));

	if (t5 != 127U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -4;
	static int16_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = 438782LLU;

	t6 = ((x25%x26)&(x27^x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = 1877LL;
	volatile uint64_t x32 = UINT64_MAX;

	t7 = ((x29%x30)&(x31^x32));

	if (t7 != 512LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 24U;
	int8_t x34 = INT8_MAX;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = -14079573;

	t8 = ((x33%x34)&(x35^x36));

	if (t8 != 24) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = 7U;
	volatile uint32_t x39 = 515884151U;
	static volatile uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 40U;

	t9 = ((x37%x38)&(x39^x40));

	if (t9 != 3779083144U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int32_t x42 = INT32_MIN;
	int64_t t10 = 924010888117582940LL;

	t10 = ((x41%x42)&(x43^x44));

	if (t10 != 2146860418LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static volatile uint64_t x46 = 83LLU;
	uint32_t x47 = 9761U;
	static uint64_t x48 = 306937775549023LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x45%x46)&(x47^x48));

	if (t11 != 18LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 1;
	volatile uint8_t x54 = 73U;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = 2765541040926589472LL;

	t12 = ((x53%x54)&(x55^x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 7U;
	static int8_t x59 = -63;
	int64_t x60 = -1LL;

	t13 = ((x57%x58)&(x59^x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 488U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;

	t14 = ((x61%x62)&(x63^x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = INT8_MAX;
	int16_t x67 = INT16_MIN;
	volatile uint8_t x68 = 19U;
	volatile int32_t t15 = -1302601;

	t15 = ((x65%x66)&(x67^x68));

	if (t15 != -32749) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	static uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MIN;
	volatile int64_t t16 = 3593144515919734394LL;

	t16 = ((x69%x70)&(x71^x72));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x74 = UINT16_MAX;
	int64_t x76 = INT64_MIN;
	volatile int64_t t17 = 78744596LL;

	t17 = ((x73%x74)&(x75^x76));

	if (t17 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x78 = INT32_MIN;
	int8_t x80 = INT8_MAX;
	volatile int32_t t18 = 57488515;

	t18 = ((x77%x78)&(x79^x80));

	if (t18 != 65408) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -10;
	static int32_t x83 = -1680721;
	static uint8_t x84 = 12U;
	int32_t t19 = -626;

	t19 = ((x81%x82)&(x83^x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x87 = -1LL;
	volatile int64_t t20 = -5007323476706LL;

	t20 = ((x85%x86)&(x87^x88));

	if (t20 != -27136LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 426437449488300LLU;
	uint16_t x91 = 1692U;
	static volatile uint64_t t21 = 46061506LLU;

	t21 = ((x89%x90)&(x91^x92));

	if (t21 != 148LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 13895;
	int32_t x94 = 42951729;
	uint8_t x96 = UINT8_MAX;
	volatile int64_t t22 = -59894757LL;

	t22 = ((x93%x94)&(x95^x96));

	if (t22 != 12289LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = INT32_MIN;
	int32_t t23 = 145263532;

	t23 = ((x97%x98)&(x99^x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x101 = -30;
	int64_t x102 = -1LL;
	int64_t x103 = INT64_MAX;
	volatile uint64_t t24 = 2472441885925414LLU;

	t24 = ((x101%x102)&(x103^x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 10189;
	uint8_t x106 = 13U;
	int64_t x107 = -1LL;
	volatile int64_t t25 = -10155672846656LL;

	t25 = ((x105%x106)&(x107^x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MIN;
	int8_t x116 = 42;

	t26 = ((x113%x114)&(x115^x116));

	if (t26 != 32734LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = INT32_MAX;
	static uint16_t x118 = 488U;
	static int64_t x119 = -156567781671694493LL;
	static volatile uint16_t x120 = 0U;
	volatile int64_t t27 = 880413118LL;

	t27 = ((x117%x118)&(x119^x120));

	if (t27 != 99LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	volatile int64_t x122 = INT64_MAX;

	t28 = ((x121%x122)&(x123^x124));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = -1;
	uint32_t x126 = 15840480U;
	int16_t x128 = INT16_MAX;

	t29 = ((x125%x126)&(x127^x128));

	if (t29 != 1759LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 28U;
	uint64_t x131 = UINT64_MAX;
	uint64_t t30 = 27459060441LLU;

	t30 = ((x129%x130)&(x131^x132));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -3;
	uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = -1LL;
	uint64_t t31 = 7996159787083512401LLU;

	t31 = ((x133%x134)&(x135^x136));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	static volatile int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;

	t32 = ((x137%x138)&(x139^x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	volatile int64_t x142 = -1LL;
	volatile int64_t x143 = -1LL;
	int64_t x144 = 271395376890596LL;
	volatile int64_t t33 = -27907594053LL;

	t33 = ((x141%x142)&(x143^x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = INT64_MIN;
	int32_t x146 = -1;
	volatile uint8_t x148 = 0U;
	volatile int64_t t34 = -19763LL;

	t34 = ((x145%x146)&(x147^x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x149 = 266859112829LL;
	uint8_t x151 = 5U;
	static int16_t x152 = -383;
	int64_t t35 = -7334937681402741LL;

	t35 = ((x149%x150)&(x151^x152));

	if (t35 != 1829892LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	int64_t x156 = 634531LL;
	volatile int64_t t36 = -122769336785683LL;

	t36 = ((x153%x154)&(x155^x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x157 = UINT8_MAX;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 7682010895265016230LLU;
	uint64_t t37 = 228LLU;

	t37 = ((x157%x158)&(x159^x160));

	if (t37 != 89LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = INT32_MIN;
	uint16_t x162 = UINT16_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t38 = 8U;

	t38 = ((x161%x162)&(x163^x164));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 23785157595918492LLU;
	static uint64_t x166 = 440LLU;
	uint32_t x167 = 31U;
	int16_t x168 = 6;
	volatile uint64_t t39 = 7517694490LLU;

	t39 = ((x165%x166)&(x167^x168));

	if (t39 != 24LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = INT64_MIN;
	volatile uint32_t x171 = 710U;
	uint16_t x172 = 2967U;
	static uint64_t t40 = 6975375439639LLU;

	t40 = ((x169%x170)&(x171^x172));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = UINT8_MAX;
	static uint16_t x174 = 3U;
	static uint32_t t41 = 15666U;

	t41 = ((x173%x174)&(x175^x176));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	volatile int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t42 = -10118;

	t42 = ((x177%x178)&(x179^x180));

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = -1;
	int16_t x182 = 725;
	int64_t x183 = -1LL;
	int64_t t43 = 5585073998LL;

	t43 = ((x181%x182)&(x183^x184));

	if (t43 != -11LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint64_t t44 = 3LLU;

	t44 = ((x185%x186)&(x187^x188));

	if (t44 != 39LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = 16;
	uint32_t x191 = 1793U;
	uint16_t x192 = UINT16_MAX;

	t45 = ((x189%x190)&(x191^x192));

	if (t45 != 6LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = 48;
	int16_t x196 = 0;
	uint64_t t46 = 2244057217565LLU;

	t46 = ((x193%x194)&(x195^x196));

	if (t46 != 48LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	static int64_t t47 = 12LL;

	t47 = ((x197%x198)&(x199^x200));

	if (t47 != 234075717632LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = UINT32_MAX;
	static uint8_t x203 = 7U;
	int32_t x204 = INT32_MAX;
	static volatile uint32_t t48 = 1U;

	t48 = ((x201%x202)&(x203^x204));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	static uint32_t x208 = 602030520U;
	uint32_t t49 = 810U;

	t49 = ((x205%x206)&(x207^x208));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -1LL;
	volatile int64_t x212 = INT64_MIN;

	t50 = ((x209%x210)&(x211^x212));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -6;
	int16_t x214 = INT16_MAX;
	uint16_t x215 = UINT16_MAX;
	volatile int32_t x216 = INT32_MAX;
	int32_t t51 = 3770336;

	t51 = ((x213%x214)&(x215^x216));

	if (t51 != 2147418112) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	int32_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile int64_t t52 = 25078LL;

	t52 = ((x217%x218)&(x219^x220));

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 10U;
	int8_t x222 = 26;
	static uint64_t x223 = 47131543750094864LLU;

	t53 = ((x221%x222)&(x223^x224));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MAX;
	static int32_t x226 = -1;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	static volatile uint32_t t54 = 13663U;

	t54 = ((x225%x226)&(x227^x228));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x230 = INT32_MIN;
	static int16_t x231 = -1;
	int16_t x232 = INT16_MIN;
	int64_t t55 = -90LL;

	t55 = ((x229%x230)&(x231^x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 15U;
	int32_t x234 = -1;
	int32_t x235 = -1;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t56 = -479211;

	t56 = ((x233%x234)&(x235^x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 6539782477512LLU;
	volatile int64_t x238 = -1LL;
	static int32_t x240 = -1;
	uint64_t t57 = 1775780975760LLU;

	t57 = ((x237%x238)&(x239^x240));

	if (t57 != 1247704794248LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = 8;
	static volatile int64_t x242 = INT64_MIN;
	int16_t x243 = -1;
	volatile int32_t x244 = 125754;
	int64_t t58 = -3635395LL;

	t58 = ((x241%x242)&(x243^x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x245 = INT64_MAX;
	int32_t x246 = 526094;
	volatile int32_t x248 = INT32_MIN;

	t59 = ((x245%x246)&(x247^x248));

	if (t59 != 237941LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x250 = -1;
	uint8_t x251 = 18U;
	uint32_t t60 = 6U;

	t60 = ((x249%x250)&(x251^x252));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MAX;
	static int16_t x255 = INT16_MIN;
	volatile uint8_t x256 = 0U;

	t61 = ((x253%x254)&(x255^x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x257 = 0;
	uint16_t x258 = UINT16_MAX;

	t62 = ((x257%x258)&(x259^x260));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = -5LL;
	int64_t x263 = -1LL;
	int8_t x264 = INT8_MAX;
	int64_t t63 = 326826618352816LL;

	t63 = ((x261%x262)&(x263^x264));

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x265 = -1;
	volatile int8_t x266 = INT8_MIN;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = -1;
	static volatile int32_t t64 = -101490;

	t64 = ((x265%x266)&(x267^x268));

	if (t64 != -256) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = INT64_MIN;
	static int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = UINT8_MAX;
	int64_t t65 = -36853799LL;

	t65 = ((x269%x270)&(x271^x272));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 32224LLU;
	int8_t x274 = -1;
	static uint32_t x275 = UINT32_MAX;
	static volatile int16_t x276 = -1;
	volatile uint64_t t66 = 9948476367LLU;

	t66 = ((x273%x274)&(x275^x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = INT8_MIN;
	static uint64_t x279 = 60LLU;
	volatile uint64_t t67 = 3792912686718LLU;

	t67 = ((x277%x278)&(x279^x280));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MAX;
	int8_t x282 = INT8_MIN;
	volatile uint8_t x284 = 43U;

	t68 = ((x281%x282)&(x283^x284));

	if (t68 != 84) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MAX;
	int16_t x286 = -1;
	uint32_t x287 = 32U;
	uint64_t x288 = UINT64_MAX;

	t69 = ((x285%x286)&(x287^x288));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x289 = 30U;
	uint8_t x290 = 51U;
	static int64_t x291 = INT64_MIN;
	volatile int16_t x292 = INT16_MIN;
	static int64_t t70 = -51LL;

	t70 = ((x289%x290)&(x291^x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -4;
	int32_t x294 = INT32_MIN;
	static uint16_t x295 = UINT16_MAX;
	volatile int64_t x296 = 611LL;

	t71 = ((x293%x294)&(x295^x296));

	if (t71 != 64924LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x298 = 1U;
	static uint16_t x299 = 18U;
	static int64_t x300 = 870277344076142064LL;
	int64_t t72 = 16266LL;

	t72 = ((x297%x298)&(x299^x300));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x301 = 451U;
	int16_t x302 = INT16_MAX;
	int64_t x303 = INT64_MIN;
	static int64_t t73 = 7LL;

	t73 = ((x301%x302)&(x303^x304));

	if (t73 != 451LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = -1;
	uint32_t x306 = 10323987U;
	volatile int16_t x307 = 11;
	int32_t x308 = -123747;
	uint32_t t74 = 58454U;

	t74 = ((x305%x306)&(x307^x308));

	if (t74 != 131094U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 47114U;
	static int64_t x310 = 2712343067480LL;
	volatile int8_t x311 = -6;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t75 = 223341372539LLU;

	t75 = ((x309%x310)&(x311^x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 4288647774LLU;
	volatile int16_t x316 = 30;

	t76 = ((x313%x314)&(x315^x316));

	if (t76 != 2611401120LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	static volatile uint32_t x318 = 18207U;
	int64_t x319 = 1511815228LL;
	int8_t x320 = INT8_MIN;
	volatile int64_t t77 = -201347651929050LL;

	t77 = ((x317%x318)&(x319^x320));

	if (t77 != 564LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x323 = UINT16_MAX;
	volatile int64_t t78 = -53948881032LL;

	t78 = ((x321%x322)&(x323^x324));

	if (t78 != 3633LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 1U;
	int8_t x326 = INT8_MIN;
	static int32_t x328 = -123189222;
	int32_t t79 = 75156;

	t79 = ((x325%x326)&(x327^x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 2LLU;
	int64_t x330 = 17347688545LL;
	volatile uint8_t x331 = UINT8_MAX;
	uint64_t t80 = 43591021835LLU;

	t80 = ((x329%x330)&(x331^x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x334 = 946370;
	static int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t81 = -1LL;

	t81 = ((x333%x334)&(x335^x336));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = -1;
	int8_t x338 = -1;
	int64_t x339 = -29331817962LL;
	uint8_t x340 = UINT8_MAX;

	t82 = ((x337%x338)&(x339^x340));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 6U;
	uint16_t x342 = 450U;
	static volatile uint32_t x343 = UINT32_MAX;
	static int16_t x344 = INT16_MIN;
	volatile uint32_t t83 = 1836U;

	t83 = ((x341%x342)&(x343^x344));

	if (t83 != 6U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 144U;
	int8_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	uint64_t x348 = 1014304LLU;
	static volatile uint64_t t84 = 3883642LLU;

	t84 = ((x345%x346)&(x347^x348));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = INT64_MAX;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 2U;

	t85 = ((x349%x350)&(x351^x352));

	if (t85 != 2147450882LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = -348LL;
	volatile int8_t x354 = INT8_MAX;
	int64_t x355 = -46964LL;
	static int16_t x356 = INT16_MAX;
	volatile int64_t t86 = 396710LL;

	t86 = ((x353%x354)&(x355^x356));

	if (t86 != -51422LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 66394059LLU;
	uint64_t t87 = 25LLU;

	t87 = ((x357%x358)&(x359^x360));

	if (t87 != 66394056LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = INT32_MAX;
	static uint16_t x362 = 30U;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MAX;
	int64_t t88 = 7410146LL;

	t88 = ((x361%x362)&(x363^x364));

	if (t88 != 7LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MAX;
	volatile uint64_t t89 = 70LLU;

	t89 = ((x365%x366)&(x367^x368));

	if (t89 != 32640LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = UINT8_MAX;
	volatile int64_t x370 = -1LL;
	int16_t x372 = 16;
	volatile uint64_t t90 = 295018559068840LLU;

	t90 = ((x369%x370)&(x371^x372));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 25;
	static uint16_t x374 = 121U;
	uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = 7566486273197LL;
	int64_t t91 = 390203LL;

	t91 = ((x373%x374)&(x375^x376));

	if (t91 != 16LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x378 = UINT32_MAX;
	static uint8_t x379 = 1U;
	volatile int16_t x380 = 211;
	volatile uint32_t t92 = 50790535U;

	t92 = ((x377%x378)&(x379^x380));

	if (t92 != 82U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x381 = 15U;
	static int32_t x382 = -20;
	int32_t x384 = -1;
	uint32_t t93 = 3U;

	t93 = ((x381%x382)&(x383^x384));

	if (t93 != 4U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x385 = -1;
	volatile int32_t x386 = 235;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MIN;

	t94 = ((x385%x386)&(x387^x388));

	if (t94 != 32640) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	volatile uint16_t x391 = 54U;
	static uint32_t x392 = 2U;
	static uint32_t t95 = 879419890U;

	t95 = ((x389%x390)&(x391^x392));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 7U;
	int16_t x394 = -763;
	static int32_t x395 = 1270744;
	int32_t t96 = -742604;

	t96 = ((x393%x394)&(x395^x396));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	volatile int16_t x398 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 1LLU;
	volatile uint64_t t97 = 4149710LLU;

	t97 = ((x397%x398)&(x399^x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x402 = 1;
	int64_t x403 = -1LL;
	static int64_t x404 = INT64_MAX;

	t98 = ((x401%x402)&(x403^x404));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = 14859884;
	int32_t x406 = INT32_MIN;
	int32_t x408 = 261675;

	t99 = ((x405%x406)&(x407^x408));

	if (t99 != 14695976) { NG(); } else { ; }
	
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

