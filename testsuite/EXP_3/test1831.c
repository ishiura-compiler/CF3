#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
uint64_t t0 = 914034969978139720LLU;
int8_t x6 = INT8_MIN;
volatile uint64_t x9 = UINT64_MAX;
int64_t x11 = INT64_MIN;
static uint64_t x12 = 135201921094959LLU;
volatile int8_t x20 = INT8_MIN;
static uint32_t t4 = 6955560U;
int32_t x22 = INT32_MAX;
int64_t x30 = -1LL;
uint16_t x33 = 814U;
static volatile int32_t x49 = INT32_MIN;
int8_t x52 = INT8_MIN;
int32_t x60 = INT32_MAX;
uint8_t x61 = 10U;
static int32_t x63 = INT32_MIN;
int16_t x64 = INT16_MIN;
volatile int32_t x66 = INT32_MAX;
volatile uint32_t t17 = 12101301U;
int64_t x75 = INT64_MIN;
int32_t x77 = 1256;
static uint8_t x78 = 17U;
int64_t x80 = 77LL;
volatile uint8_t x82 = 25U;
int8_t x85 = 2;
int16_t x88 = INT16_MIN;
volatile int32_t x93 = INT32_MAX;
volatile int8_t x99 = 1;
uint16_t x104 = 0U;
uint64_t x114 = UINT64_MAX;
static volatile int8_t x116 = -1;
volatile uint64_t t28 = 25992130087846LLU;
static int16_t x119 = INT16_MAX;
int32_t x120 = -14261219;
volatile int64_t t32 = -7411079393LL;
int64_t x134 = INT64_MAX;
static volatile int64_t x144 = INT64_MAX;
int16_t x147 = 0;
static int32_t x152 = INT32_MAX;
volatile int16_t x157 = -1;
int32_t x162 = -1;
uint32_t x171 = 255839U;
static int8_t x172 = 1;
volatile int16_t x181 = -6;
uint8_t x193 = UINT8_MAX;
uint32_t x194 = 33344U;
volatile int16_t x195 = 0;
int64_t x196 = -4969LL;
int64_t x202 = 124520226382521LL;
volatile int16_t x205 = INT16_MIN;
int32_t x206 = INT32_MIN;
int64_t x208 = -1LL;
int16_t x209 = INT16_MIN;
uint64_t t54 = 170754542LLU;
volatile uint16_t x224 = 0U;
uint32_t x229 = 13U;
static uint16_t x231 = UINT16_MAX;
volatile uint64_t t57 = 253LLU;
uint32_t x235 = 14U;
volatile uint8_t x237 = UINT8_MAX;
volatile int8_t x243 = INT8_MAX;
volatile int64_t t60 = 71167551LL;
int64_t x246 = INT64_MAX;
static volatile uint64_t t61 = 366817LLU;
volatile int64_t x249 = -1LL;
static volatile uint32_t x253 = UINT32_MAX;
int16_t x265 = 64;
int16_t x266 = INT16_MAX;
uint32_t x270 = UINT32_MAX;
static int32_t x271 = INT32_MIN;
int32_t x275 = INT32_MIN;
volatile int64_t t68 = 464221768603562866LL;
int32_t x279 = -463099;
int32_t t69 = -2887;
static int16_t x281 = INT16_MAX;
volatile uint32_t x283 = 147245008U;
int8_t x284 = -1;
uint32_t t70 = 24582426U;
volatile int32_t x290 = -22413010;
uint16_t x296 = 4223U;
int32_t x297 = INT32_MIN;
int16_t x298 = INT16_MIN;
uint32_t x300 = 90U;
static uint8_t x304 = UINT8_MAX;
int32_t x306 = INT32_MIN;
volatile int32_t t76 = -476482003;
int16_t x320 = 1;
volatile uint64_t t80 = 51223LLU;
volatile int8_t x342 = INT8_MIN;
volatile uint64_t t86 = 4539785586637563LLU;
int8_t x351 = -1;
volatile int64_t x355 = 10034964LL;
volatile int64_t x356 = INT64_MAX;
uint8_t x358 = 51U;
volatile uint32_t x362 = UINT32_MAX;
int64_t x364 = INT64_MAX;
volatile int64_t x368 = INT64_MIN;
volatile int64_t x383 = -1909747848LL;
int32_t x390 = INT32_MIN;
int64_t t97 = -2098017LL;
int16_t x393 = -22;
static uint8_t x400 = 2U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static int64_t x3 = INT64_MAX;
	uint64_t x4 = 1583826851721492LLU;

	t0 = ((x1&x2)&(x3&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	uint8_t x7 = UINT8_MAX;
	static volatile int8_t x8 = INT8_MAX;
	int64_t t1 = -2827145786LL;

	t1 = ((x5&x6)&(x7&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = 3;
	uint64_t t2 = 232225603LLU;

	t2 = ((x9&x10)&(x11&x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = 405402654U;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 1065460984255LLU;

	t3 = ((x13&x14)&(x15&x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 3787U;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = -1;

	t4 = ((x17&x18)&(x19&x20));

	if (t4 != 128U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = INT8_MAX;
	volatile int64_t t5 = 78764177918588300LL;

	t5 = ((x21&x22)&(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 12006663U;
	int32_t x26 = INT32_MIN;
	int16_t x27 = 0;
	uint64_t x28 = 15609170709832355LLU;
	uint64_t t6 = 158193120LLU;

	t6 = ((x25&x26)&(x27&x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int8_t x31 = -1;
	uint32_t x32 = 1155U;
	int64_t t7 = -826350195635LL;

	t7 = ((x29&x30)&(x31&x32));

	if (t7 != 1152LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x34 = 224U;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -11720091;

	t8 = ((x33&x34)&(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = INT8_MAX;
	static int8_t x39 = -1;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 21;

	t9 = ((x37&x38)&(x39&x40));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int32_t x42 = -13860232;
	int16_t x43 = -1;
	volatile uint8_t x44 = UINT8_MAX;
	static uint64_t t10 = 55795280236LLU;

	t10 = ((x41&x42)&(x43&x44));

	if (t10 != 120LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -9274724;

	t11 = ((x45&x46)&(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = -1;
	volatile int32_t x51 = INT32_MIN;
	static int32_t t12 = INT32_MIN;

	t12 = ((x49&x50)&(x51&x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 7;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	static int64_t x56 = -8214463389604540LL;
	volatile uint64_t t13 = 37169890218671253LLU;

	t13 = ((x53&x54)&(x55&x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MIN;
	uint32_t x59 = 15504328U;
	int64_t t14 = -129847LL;

	t14 = ((x57&x58)&(x59&x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MAX;
	int32_t t15 = -3589765;

	t15 = ((x61&x62)&(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -5;
	int32_t x67 = 178518142;
	int64_t x68 = INT64_MAX;
	int64_t t16 = -3068437744125207LL;

	t16 = ((x65&x66)&(x67&x68));

	if (t16 != 178518138LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 976U;
	volatile int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	uint32_t x72 = 1017U;

	t17 = ((x69&x70)&(x71&x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	static volatile int8_t x74 = -1;
	int16_t x76 = -1;
	volatile int64_t t18 = INT64_MIN;

	t18 = ((x73&x74)&(x75&x76));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x79 = 11U;
	volatile int64_t t19 = -21660337632231886LL;

	t19 = ((x77&x78)&(x79&x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -14435;
	int8_t x83 = 21;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -930;

	t20 = ((x81&x82)&(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	static int8_t x87 = -1;
	static int32_t t21 = 187829;

	t21 = ((x85&x86)&(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	int32_t x90 = 1015;
	int64_t x91 = -1LL;
	uint64_t x92 = 2877LLU;
	uint64_t t22 = 3677LLU;

	t22 = ((x89&x90)&(x91&x92));

	if (t22 != 821LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	volatile int32_t x95 = -14;
	int32_t x96 = INT32_MIN;
	static int64_t t23 = -699838566517LL;

	t23 = ((x93&x94)&(x95&x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	static volatile uint32_t x98 = 797714U;
	int16_t x100 = INT16_MAX;
	int64_t t24 = -2LL;

	t24 = ((x97&x98)&(x99&x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 1047U;
	static int16_t x102 = INT16_MIN;
	uint64_t x103 = UINT64_MAX;
	static volatile uint64_t t25 = 695057078225542LLU;

	t25 = ((x101&x102)&(x103&x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static uint8_t x107 = 4U;
	uint8_t x108 = 24U;
	volatile int64_t t26 = -1550082090LL;

	t26 = ((x105&x106)&(x107&x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 542318488525268065LLU;
	int8_t x110 = INT8_MIN;
	int16_t x111 = -1;
	uint64_t x112 = 265LLU;
	volatile uint64_t t27 = 356701371467LLU;

	t27 = ((x109&x110)&(x111&x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 4;
	int8_t x115 = INT8_MAX;

	t28 = ((x113&x114)&(x115&x116));

	if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	static int64_t x118 = INT64_MAX;
	volatile int64_t t29 = -461LL;

	t29 = ((x117&x118)&(x119&x120));

	if (t29 != 29LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -38069492981955250LL;
	static int16_t x122 = 0;
	int64_t x123 = -1LL;
	volatile int32_t x124 = -1;
	int64_t t30 = 147LL;

	t30 = ((x121&x122)&(x123&x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = 3U;
	volatile uint8_t x127 = 21U;
	static int64_t x128 = -16165838601464494LL;
	static volatile int64_t t31 = -15074LL;

	t31 = ((x125&x126)&(x127&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 0;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MAX;
	int8_t x132 = -1;

	t32 = ((x129&x130)&(x131&x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	uint8_t x136 = 36U;
	static volatile int64_t t33 = 56243226272LL;

	t33 = ((x133&x134)&(x135&x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile int8_t x139 = INT8_MAX;
	int8_t x140 = 28;
	volatile int32_t t34 = -2956616;

	t34 = ((x137&x138)&(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 2U;
	int16_t x142 = INT16_MAX;
	int32_t x143 = 113073111;
	volatile int64_t t35 = -137520904918706LL;

	t35 = ((x141&x142)&(x143&x144));

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 4U;
	static uint32_t x146 = 83U;
	int32_t x148 = 0;
	volatile uint32_t t36 = 10U;

	t36 = ((x145&x146)&(x147&x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = 61;
	static int32_t x151 = -1;
	volatile int32_t t37 = 0;

	t37 = ((x149&x150)&(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int32_t x154 = -793;
	static uint8_t x155 = 1U;
	int16_t x156 = -132;
	volatile int32_t t38 = 38911;

	t38 = ((x153&x154)&(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	static uint64_t x159 = 182692972311354511LLU;
	uint32_t x160 = 253155292U;
	static volatile uint64_t t39 = 5686817LLU;

	t39 = ((x157&x158)&(x159&x160));

	if (t39 != 85202060LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 3;
	int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = 238U;
	volatile int32_t t40 = 14;

	t40 = ((x161&x162)&(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x166 = 1052568U;
	static int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	uint32_t t41 = 77128079U;

	t41 = ((x165&x166)&(x167&x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint16_t x170 = 38U;
	uint32_t t42 = 165U;

	t42 = ((x169&x170)&(x171&x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -217;
	static int8_t x174 = INT8_MAX;
	volatile int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 3590;

	t43 = ((x173&x174)&(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 9;
	int64_t x178 = 3501281190048992341LL;
	static uint64_t x179 = 7LLU;
	int16_t x180 = INT16_MAX;
	volatile uint64_t t44 = 4593619700330LLU;

	t44 = ((x177&x178)&(x179&x180));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = -1;
	uint16_t x183 = 6U;
	static int64_t x184 = INT64_MAX;
	volatile int64_t t45 = -8256LL;

	t45 = ((x181&x182)&(x183&x184));

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MAX;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;
	int64_t t46 = 13099182369328LL;

	t46 = ((x185&x186)&(x187&x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 1;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 379U;
	volatile int16_t x192 = -1;
	volatile int32_t t47 = 25;

	t47 = ((x189&x190)&(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t t48 = -17338249881LL;

	t48 = ((x193&x194)&(x195&x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	static uint16_t x198 = 75U;
	volatile int8_t x199 = 1;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = 30934310;

	t49 = ((x197&x198)&(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	volatile int8_t x204 = -1;
	static volatile int64_t t50 = 61LL;

	t50 = ((x201&x202)&(x203&x204));

	if (t50 != 128LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x207 = 4U;
	int64_t t51 = 31588609286094256LL;

	t51 = ((x205&x206)&(x207&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = INT64_MAX;
	volatile int64_t x211 = -1LL;
	int64_t x212 = 1052055298567186LL;
	volatile int64_t t52 = -88126179357657103LL;

	t52 = ((x209&x210)&(x211&x212));

	if (t52 != 1052055298539520LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = -1;
	static uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MAX;
	volatile int64_t t53 = -790LL;

	t53 = ((x213&x214)&(x215&x216));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	uint64_t x218 = 2489027040LLU;
	int32_t x219 = 515033144;
	volatile uint8_t x220 = UINT8_MAX;

	t54 = ((x217&x218)&(x219&x220));

	if (t54 != 32LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = -14;
	int8_t x223 = -26;
	volatile int32_t t55 = -46;

	t55 = ((x221&x222)&(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	static int8_t x226 = INT8_MIN;
	volatile int16_t x227 = INT16_MAX;
	static int32_t x228 = -14;
	static volatile int32_t t56 = -912420;

	t56 = ((x225&x226)&(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = UINT64_MAX;
	static volatile int32_t x232 = INT32_MAX;

	t57 = ((x229&x230)&(x231&x232));

	if (t57 != 13LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	int32_t x236 = INT32_MAX;
	uint32_t t58 = 13067193U;

	t58 = ((x233&x234)&(x235&x236));

	if (t58 != 14U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	static int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -54594036;

	t59 = ((x237&x238)&(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 3099;
	volatile int64_t x242 = -746084297848079LL;
	volatile int16_t x244 = -1;

	t60 = ((x241&x242)&(x243&x244));

	if (t60 != 17LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 398161533LL;
	static volatile uint64_t x247 = 30642LLU;
	int32_t x248 = INT32_MIN;

	t61 = ((x245&x246)&(x247&x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = 49U;
	volatile int64_t t62 = -26579086LL;

	t62 = ((x249&x250)&(x251&x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	int64_t x255 = 9897758LL;
	volatile int64_t x256 = -1LL;
	volatile int64_t t63 = 1124276079LL;

	t63 = ((x253&x254)&(x255&x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile uint64_t x258 = 2LLU;
	volatile int16_t x259 = -1;
	volatile int32_t x260 = INT32_MAX;
	static volatile uint64_t t64 = 54572LLU;

	t64 = ((x257&x258)&(x259&x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = 4U;
	int32_t t65 = 763104008;

	t65 = ((x261&x262)&(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x267 = 5966U;
	int32_t x268 = INT32_MAX;
	volatile int32_t t66 = 4038320;

	t66 = ((x265&x266)&(x267&x268));

	if (t66 != 64) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 2129U;
	int8_t x272 = -1;
	uint32_t t67 = 1U;

	t67 = ((x269&x270)&(x271&x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = 7228;
	volatile int8_t x276 = -1;

	t68 = ((x273&x274)&(x275&x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	uint8_t x278 = 25U;
	volatile int32_t x280 = -1;

	t69 = ((x277&x278)&(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = 0;

	t70 = ((x281&x282)&(x283&x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 31400793245LLU;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = -158;
	static int32_t x288 = INT32_MIN;
	uint64_t t71 = 115690607805LLU;

	t71 = ((x285&x286)&(x287&x288));

	if (t71 != 30064771072LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static uint8_t x291 = UINT8_MAX;
	int16_t x292 = -216;
	volatile int32_t t72 = -203737;

	t72 = ((x289&x290)&(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	volatile uint32_t t73 = 0U;

	t73 = ((x293&x294)&(x295&x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x299 = 12U;
	static uint32_t t74 = 7966U;

	t74 = ((x297&x298)&(x299&x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	volatile int64_t x302 = INT64_MIN;
	volatile int8_t x303 = INT8_MIN;
	int64_t t75 = -48940244LL;

	t75 = ((x301&x302)&(x303&x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 2388;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;

	t76 = ((x305&x306)&(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 46575U;
	uint32_t x310 = 4839U;
	volatile uint16_t x311 = UINT16_MAX;
	static uint64_t x312 = 149658031706LLU;
	volatile uint64_t t77 = 1718LLU;

	t77 = ((x309&x310)&(x311&x312));

	if (t77 != 4162LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MAX;
	uint32_t x315 = 5161095U;
	static uint16_t x316 = UINT16_MAX;
	uint32_t t78 = 436U;

	t78 = ((x313&x314)&(x315&x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 2258956682LLU;
	uint64_t x318 = 307164883277056LLU;
	uint32_t x319 = 9308877U;
	static volatile uint64_t t79 = 1887896135694LLU;

	t79 = ((x317&x318)&(x319&x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = 25386U;
	uint16_t x323 = 5682U;
	static int8_t x324 = INT8_MAX;

	t80 = ((x321&x322)&(x323&x324));

	if (t80 != 34LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1076401924LLU;
	volatile int32_t x326 = INT32_MAX;
	int32_t x327 = -283917339;
	int16_t x328 = -1;
	uint64_t t81 = 369410578947LLU;

	t81 = ((x325&x326)&(x327&x328));

	if (t81 != 1073775364LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -3359362125033570LL;
	volatile uint8_t x330 = UINT8_MAX;
	static int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	volatile int64_t t82 = 1975846060LL;

	t82 = ((x329&x330)&(x331&x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	static int64_t x335 = -10LL;
	int8_t x336 = INT8_MIN;
	int64_t t83 = -222058863881725LL;

	t83 = ((x333&x334)&(x335&x336));

	if (t83 != 4294967168LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MIN;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int64_t t84 = -869568927677969LL;

	t84 = ((x337&x338)&(x339&x340));

	if (t84 != 65408LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint64_t x343 = 7LLU;
	int64_t x344 = INT64_MIN;
	uint64_t t85 = 186923228024778LLU;

	t85 = ((x341&x342)&(x343&x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 1LLU;
	volatile int16_t x348 = INT16_MAX;

	t86 = ((x345&x346)&(x347&x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 2U;
	static volatile int8_t x350 = -1;
	int32_t x352 = -297;
	int32_t t87 = -19;

	t87 = ((x349&x350)&(x351&x352));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = 0;
	int64_t t88 = 0LL;

	t88 = ((x353&x354)&(x355&x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	static int8_t x359 = INT8_MIN;
	uint8_t x360 = 55U;
	volatile int32_t t89 = -3;

	t89 = ((x357&x358)&(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 3U;
	volatile uint64_t x363 = 131977237781356LLU;
	volatile uint64_t t90 = 13LLU;

	t90 = ((x361&x362)&(x363&x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	static uint8_t x366 = 3U;
	static uint32_t x367 = UINT32_MAX;
	int64_t t91 = -435345518896902794LL;

	t91 = ((x365&x366)&(x367&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 1;
	int8_t x370 = -1;
	int32_t x371 = 4;
	static int32_t x372 = INT32_MAX;
	volatile int32_t t92 = -55;

	t92 = ((x369&x370)&(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	uint32_t x374 = 383U;
	int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t93 = 12849567156LL;

	t93 = ((x373&x374)&(x375&x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int16_t x378 = 1;
	static uint64_t x379 = 41537568LLU;
	int32_t x380 = INT32_MIN;
	volatile uint64_t t94 = 927608LLU;

	t94 = ((x377&x378)&(x379&x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 14868902;
	uint8_t x382 = 6U;
	volatile int16_t x384 = INT16_MIN;
	static int64_t t95 = -264LL;

	t95 = ((x381&x382)&(x383&x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 33008150834912LLU;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = 26560U;
	volatile int64_t x388 = INT64_MIN;
	volatile uint64_t t96 = 344319623372LLU;

	t96 = ((x385&x386)&(x387&x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 44U;
	uint16_t x391 = 314U;
	int64_t x392 = INT64_MIN;

	t97 = ((x389&x390)&(x391&x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x394 = -28379480;
	uint16_t x395 = UINT16_MAX;
	volatile uint32_t x396 = 3950U;
	volatile uint32_t t98 = 255713492U;

	t98 = ((x393&x394)&(x395&x396));

	if (t98 != 1576U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	uint8_t x398 = 33U;
	int32_t x399 = -344369;
	static volatile int32_t t99 = -20750760;

	t99 = ((x397&x398)&(x399&x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

