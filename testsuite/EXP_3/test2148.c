#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x13 = UINT64_MAX;
int64_t t3 = 359576LL;
int64_t x23 = INT64_MIN;
static uint64_t x25 = UINT64_MAX;
int64_t x26 = INT64_MIN;
uint32_t x27 = 2647U;
static int32_t x30 = INT32_MAX;
int32_t t7 = -295916;
uint8_t x37 = 26U;
uint32_t t9 = 171U;
uint16_t x43 = 22U;
int32_t t10 = -535528;
int64_t x49 = INT64_MIN;
uint32_t t13 = 23U;
uint64_t x57 = UINT64_MAX;
volatile int8_t x62 = 1;
volatile uint8_t x75 = UINT8_MAX;
int8_t x76 = INT8_MIN;
uint32_t x78 = 4745479U;
int64_t x82 = -1LL;
volatile int8_t x90 = INT8_MIN;
int16_t x92 = -1;
uint32_t x96 = UINT32_MAX;
int16_t x99 = INT16_MAX;
uint32_t x100 = UINT32_MAX;
uint16_t x107 = 19134U;
uint64_t x108 = UINT64_MAX;
int16_t x114 = INT16_MAX;
static volatile int64_t x118 = -1LL;
uint64_t x120 = UINT64_MAX;
volatile uint32_t x122 = UINT32_MAX;
volatile uint64_t t30 = UINT64_MAX;
static uint64_t x128 = 274248787249586563LLU;
uint64_t t31 = 533604929599LLU;
int32_t t33 = -1;
int16_t x138 = INT16_MIN;
int64_t x140 = -1LL;
uint16_t x142 = 289U;
int16_t x145 = 1132;
static uint16_t x146 = UINT16_MAX;
static int16_t x150 = INT16_MIN;
int16_t x167 = -125;
static uint16_t x183 = UINT16_MAX;
static uint32_t x186 = 12U;
volatile int64_t x190 = INT64_MAX;
uint16_t x191 = 251U;
static uint32_t x203 = UINT32_MAX;
int16_t x207 = -5;
int64_t x219 = INT64_MIN;
uint16_t x221 = 1U;
volatile int32_t t56 = -123601;
static uint64_t x230 = 246017985265226007LLU;
uint32_t x231 = 51001U;
uint64_t x232 = UINT64_MAX;
static volatile int16_t x233 = INT16_MAX;
int64_t x239 = 1395785021234776LL;
volatile int32_t t61 = -345186;
uint16_t x253 = 32681U;
uint32_t t64 = 1923U;
volatile uint32_t t66 = 16306U;
uint64_t t67 = 114171LLU;
static volatile uint16_t x276 = UINT16_MAX;
int8_t x278 = INT8_MIN;
uint64_t x282 = 506207202542433043LLU;
static uint8_t x284 = 30U;
uint8_t x289 = UINT8_MAX;
uint16_t x291 = UINT16_MAX;
int8_t x294 = INT8_MIN;
static int16_t x296 = INT16_MAX;
volatile int32_t x298 = -29;
int32_t t74 = -5615;
int64_t t76 = -92032347020029LL;
uint8_t x311 = 2U;
uint16_t x314 = 19815U;
int16_t x320 = -12;
uint64_t t79 = 8112544462LLU;
static uint16_t x323 = 1741U;
int32_t x324 = -1;
volatile int32_t t80 = -3;
volatile uint8_t x328 = UINT8_MAX;
volatile int64_t x329 = -3122091LL;
static volatile int32_t x332 = -1;
static int8_t x344 = -1;
uint16_t x346 = UINT16_MAX;
uint32_t x352 = 16U;
static volatile uint8_t x357 = 6U;
uint16_t x360 = UINT16_MAX;
uint8_t x362 = 15U;
uint64_t x363 = UINT64_MAX;
int32_t x366 = -1;
uint32_t x370 = UINT32_MAX;
int32_t t93 = 30;
int64_t x379 = INT64_MIN;
int8_t x382 = -1;
volatile int32_t t95 = 45;
int64_t x385 = 355843470575465744LL;
static int64_t x390 = -1LL;
static uint16_t x391 = 0U;
uint8_t x393 = 3U;
uint32_t x395 = 124585U;
int8_t x400 = INT8_MIN;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 323168127LL;

	t0 = ((x1<=x2)*(x3^x4));

	if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = 0;
	static volatile int16_t x7 = INT16_MIN;
	int32_t x8 = -18996;
	int32_t t1 = 7;

	t1 = ((x5<=x6)*(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 1;
	volatile int32_t x10 = 6;
	volatile int8_t x11 = -1;
	int32_t x12 = -6262;
	volatile int32_t t2 = -56;

	t2 = ((x9<=x10)*(x11^x12));

	if (t2 != 6261) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	volatile int8_t x15 = INT8_MIN;
	int64_t x16 = -216570507752LL;

	t3 = ((x13<=x14)*(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 1949U;
	volatile int32_t x18 = -1;
	int8_t x19 = 27;
	uint8_t x20 = 2U;
	volatile int32_t t4 = -3;

	t4 = ((x17<=x18)*(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 10098925U;
	int16_t x22 = INT16_MIN;
	uint32_t x24 = 2152U;
	int64_t t5 = -290111142LL;

	t5 = ((x21<=x22)*(x23^x24));

	if (t5 != -9223372036854773656LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x28 = -1;
	uint32_t t6 = 1607989535U;

	t6 = ((x25<=x26)*(x27^x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int16_t x31 = 8;
	int16_t x32 = INT16_MAX;

	t7 = ((x29<=x30)*(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -94834;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -266106374835291LL;

	t8 = ((x33<=x34)*(x35^x36));

	if (t8 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -5836391LL;
	uint32_t x39 = 1580696560U;
	int32_t x40 = INT32_MIN;

	t9 = ((x37<=x38)*(x39^x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 0U;
	int16_t x42 = -1;
	int8_t x44 = INT8_MIN;

	t10 = ((x41<=x42)*(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 7U;
	static uint64_t x46 = 1467487LLU;
	volatile int16_t x47 = -1;
	volatile int64_t x48 = -1LL;
	static int64_t t11 = -1091100633278LL;

	t11 = ((x45<=x46)*(x47^x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x50 = INT8_MIN;
	int16_t x51 = 0;
	static uint16_t x52 = 1U;
	int32_t t12 = -559708979;

	t12 = ((x49<=x50)*(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = UINT8_MAX;
	uint32_t x55 = 16630474U;
	uint8_t x56 = UINT8_MAX;

	t13 = ((x53<=x54)*(x55^x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = INT8_MAX;
	int64_t x59 = -1573338348788LL;
	uint16_t x60 = UINT16_MAX;
	volatile int64_t t14 = 97520561292055601LL;

	t14 = ((x57<=x58)*(x59^x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -1;
	int8_t x63 = INT8_MAX;
	uint8_t x64 = 33U;
	static volatile int32_t t15 = 10885;

	t15 = ((x61<=x62)*(x63^x64));

	if (t15 != 94) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = -932544;
	volatile int16_t x68 = -12;
	int32_t t16 = -6808544;

	t16 = ((x65<=x66)*(x67^x68));

	if (t16 != 932532) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int64_t x70 = -1LL;
	uint64_t x71 = 2558389633201243LLU;
	volatile int64_t x72 = INT64_MIN;
	volatile uint64_t t17 = 44LLU;

	t17 = ((x69<=x70)*(x71^x72));

	if (t17 != 9225930426487977051LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint16_t x74 = 14U;
	int32_t t18 = 347;

	t18 = ((x73<=x74)*(x75^x76));

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 60136;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = 2404U;
	int32_t t19 = -112410708;

	t19 = ((x77<=x78)*(x79^x80));

	if (t19 != -2332) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	volatile int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;
	int32_t t20 = -16;

	t20 = ((x81<=x82)*(x83^x84));

	if (t20 != 2147450880) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -6686720586LL;
	volatile uint16_t x86 = 3128U;
	uint32_t x87 = 132U;
	static int64_t x88 = -380525406919LL;
	volatile int64_t t21 = 6565098461LL;

	t21 = ((x85<=x86)*(x87^x88));

	if (t21 != -380525406787LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	uint8_t x91 = 1U;
	int32_t t22 = 121026238;

	t22 = ((x89<=x90)*(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int64_t x94 = -80LL;
	static volatile int64_t x95 = 11197844855LL;
	volatile int64_t t23 = -1328102989LL;

	t23 = ((x93<=x94)*(x95^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 19824005U;
	static volatile int8_t x98 = -1;
	uint32_t t24 = 562604U;

	t24 = ((x97<=x98)*(x99^x100));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 1U;
	volatile int8_t x104 = INT8_MAX;
	int32_t t25 = -93107488;

	t25 = ((x101<=x102)*(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	uint16_t x106 = 3408U;
	uint64_t t26 = 136613552476087380LLU;

	t26 = ((x105<=x106)*(x107^x108));

	if (t26 != 18446744073709532481LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 21564381036946497LLU;
	int32_t x110 = -51;
	int8_t x111 = INT8_MAX;
	static volatile int64_t x112 = INT64_MIN;
	volatile int64_t t27 = 19LL;

	t27 = ((x109<=x110)*(x111^x112));

	if (t27 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 0U;
	uint64_t x115 = 483842299904466189LLU;
	volatile int16_t x116 = INT16_MIN;
	volatile uint64_t t28 = 9135411661099648500LLU;

	t28 = ((x113<=x114)*(x115^x116));

	if (t28 != 17962901773805067533LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static uint16_t x119 = 2721U;
	volatile uint64_t t29 = 21LLU;

	t29 = ((x117<=x118)*(x119^x120));

	if (t29 != 18446744073709548894LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -797;
	uint8_t x123 = 0U;
	static volatile uint64_t x124 = UINT64_MAX;

	t30 = ((x121<=x122)*(x123^x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static int64_t x126 = INT64_MAX;
	uint64_t x127 = 14175663558414LLU;

	t31 = ((x125<=x126)*(x127^x128));

	if (t31 != 274261309350211213LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 35162409308LLU;
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -3;

	t32 = ((x129<=x130)*(x131^x132));

	if (t32 != 2147450880) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int32_t x135 = -2999;
	static int32_t x136 = INT32_MIN;

	t33 = ((x133<=x134)*(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int8_t x139 = 0;
	int64_t t34 = 3310176898528689879LL;

	t34 = ((x137<=x138)*(x139^x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;
	uint32_t x144 = 2788432U;
	uint32_t t35 = 850663U;

	t35 = ((x141<=x142)*(x143^x144));

	if (t35 != 2782127U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MIN;
	volatile int64_t t36 = -2080LL;

	t36 = ((x145<=x146)*(x147^x148));

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 1525U;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 12666U;
	static int32_t t37 = 18286416;

	t37 = ((x149<=x150)*(x151^x152));

	if (t37 != -2147470982) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 407LLU;
	static uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	int64_t x156 = -87280831292057LL;
	static int64_t t38 = -15870860424306176LL;

	t38 = ((x153<=x154)*(x155^x156));

	if (t38 != 87280831274343LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	static volatile uint16_t x160 = 3268U;
	static volatile int32_t t39 = -10325;

	t39 = ((x157<=x158)*(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = UINT16_MAX;
	static int64_t x162 = -135339412LL;
	volatile int8_t x163 = -1;
	int32_t x164 = INT32_MIN;
	int32_t t40 = -15861;

	t40 = ((x161<=x162)*(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 12LLU;
	uint16_t x166 = 30U;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -15511;

	t41 = ((x165<=x166)*(x167^x168));

	if (t41 != 32643) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	int32_t x170 = 77544302;
	volatile int32_t x171 = INT32_MIN;
	volatile uint8_t x172 = UINT8_MAX;
	static volatile int32_t t42 = 1557;

	t42 = ((x169<=x170)*(x171^x172));

	if (t42 != -2147483393) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 0LL;
	int64_t x174 = INT64_MAX;
	int64_t x175 = 2475LL;
	uint64_t x176 = 115913690785LLU;
	uint64_t t43 = 31259269644297191LLU;

	t43 = ((x173<=x174)*(x175^x176));

	if (t43 != 115913688842LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	static int8_t x178 = 0;
	static int32_t x179 = INT32_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t44 = 15361392914974610LLU;

	t44 = ((x177<=x178)*(x179^x180));

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	static int64_t x182 = -1LL;
	static int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = -123879;

	t45 = ((x181<=x182)*(x183^x184));

	if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static volatile int32_t x187 = INT32_MIN;
	volatile int8_t x188 = INT8_MAX;
	static volatile int32_t t46 = -84333636;

	t46 = ((x185<=x186)*(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	volatile int16_t x192 = INT16_MAX;
	static int32_t t47 = -27;

	t47 = ((x189<=x190)*(x191^x192));

	if (t47 != 32516) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	int64_t x194 = INT64_MIN;
	static volatile uint32_t x195 = 11U;
	uint64_t x196 = 4LLU;
	static volatile uint64_t t48 = 1887LLU;

	t48 = ((x193<=x194)*(x195^x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint64_t x198 = 22452736448LLU;
	static volatile int16_t x199 = -1;
	int32_t x200 = -473147;
	volatile int32_t t49 = 3748355;

	t49 = ((x197<=x198)*(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = UINT8_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile uint32_t t50 = 5037143U;

	t50 = ((x201<=x202)*(x203^x204));

	if (t50 != 4294901760U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	volatile int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = 3611097794LL;

	t51 = ((x205<=x206)*(x207^x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	static uint8_t x211 = 0U;
	uint16_t x212 = UINT16_MAX;
	int32_t t52 = 562109170;

	t52 = ((x209<=x210)*(x211^x212));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 9986U;
	int8_t x214 = -2;
	int64_t x215 = -1LL;
	int8_t x216 = INT8_MIN;
	volatile int64_t t53 = -14LL;

	t53 = ((x213<=x214)*(x215^x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = UINT16_MAX;
	uint32_t x218 = UINT32_MAX;
	static int64_t x220 = INT64_MAX;
	static int64_t t54 = -3131217635478029523LL;

	t54 = ((x217<=x218)*(x219^x220));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x222 = 404444803LL;
	volatile int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 25763420;

	t55 = ((x221<=x222)*(x223^x224));

	if (t55 != 2147450880) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 1077917427776799242LL;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = UINT16_MAX;

	t56 = ((x225<=x226)*(x227^x228));

	if (t56 != -65409) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x229 = 9972713LLU;
	volatile uint64_t t57 = 54325200LLU;

	t57 = ((x229<=x230)*(x231^x232));

	if (t57 != 18446744073709500614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	uint8_t x235 = 1U;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -18;

	t58 = ((x233<=x234)*(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	uint32_t x238 = 81U;
	static uint64_t x240 = 656420784963280154LLU;
	uint64_t t59 = 17959389414964918LLU;

	t59 = ((x237<=x238)*(x239^x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MIN;
	int8_t x244 = -2;
	static int64_t t60 = 245522LL;

	t60 = ((x241<=x242)*(x243^x244));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MAX;
	volatile int8_t x246 = -1;
	static int8_t x247 = -1;
	static volatile uint8_t x248 = 111U;

	t61 = ((x245<=x246)*(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	static int16_t x250 = -840;
	static int32_t x251 = INT32_MIN;
	int8_t x252 = -1;
	volatile int32_t t62 = -22696849;

	t62 = ((x249<=x250)*(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = INT32_MIN;
	static int8_t x255 = -1;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 1906;

	t63 = ((x253<=x254)*(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	volatile uint32_t x259 = 635543U;
	static int16_t x260 = -3732;

	t64 = ((x257<=x258)*(x259^x260));

	if (t64 != 4294329339U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = -4427539LL;
	uint16_t x262 = UINT16_MAX;
	volatile uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 24U;
	volatile uint32_t t65 = 208261U;

	t65 = ((x261<=x262)*(x263^x264));

	if (t65 != 4294967271U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 14516510096LLU;
	int64_t x266 = 70LL;
	static volatile uint8_t x267 = 10U;
	uint32_t x268 = 114424240U;

	t66 = ((x265<=x266)*(x267^x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -111;
	int8_t x270 = 14;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = UINT64_MAX;

	t67 = ((x269<=x270)*(x271^x272));

	if (t67 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 5546U;
	int16_t x274 = INT16_MAX;
	int8_t x275 = INT8_MAX;
	volatile int32_t t68 = -7732725;

	t68 = ((x273<=x274)*(x275^x276));

	if (t68 != 65408) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static int32_t x279 = INT32_MAX;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 41;

	t69 = ((x277<=x278)*(x279^x280));

	if (t69 != -2147450881) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	int32_t t70 = -1;

	t70 = ((x281<=x282)*(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 5008352677779LLU;
	uint16_t x286 = UINT16_MAX;
	volatile int16_t x287 = INT16_MIN;
	uint32_t x288 = UINT32_MAX;
	uint32_t t71 = 66U;

	t71 = ((x285<=x286)*(x287^x288));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x290 = 1099610854460385852LL;
	int32_t x292 = -1;
	volatile int32_t t72 = 10134;

	t72 = ((x289<=x290)*(x291^x292));

	if (t72 != -65536) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	static int64_t x295 = INT64_MAX;
	volatile int64_t t73 = 1151028LL;

	t73 = ((x293<=x294)*(x295^x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	volatile int32_t x299 = INT32_MAX;
	int16_t x300 = -288;

	t74 = ((x297<=x298)*(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = -7387089801LL;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = -3;
	volatile int32_t t75 = 63657285;

	t75 = ((x301<=x302)*(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MIN;
	int64_t x307 = -231LL;
	volatile int64_t x308 = INT64_MIN;

	t76 = ((x305<=x306)*(x307^x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 755560;
	volatile uint16_t x310 = UINT16_MAX;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t77 = 329668346220736802LLU;

	t77 = ((x309<=x310)*(x311^x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static int32_t x315 = INT32_MIN;
	uint16_t x316 = 302U;
	volatile int32_t t78 = -588379501;

	t78 = ((x313<=x314)*(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	volatile uint64_t x318 = 12895090563320554LLU;
	uint64_t x319 = 16358956LLU;

	t79 = ((x317<=x318)*(x319^x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;

	t80 = ((x321<=x322)*(x323^x324));

	if (t80 != -1742) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 39;
	int64_t x326 = INT64_MAX;
	static int8_t x327 = -4;
	volatile int32_t t81 = -1312565;

	t81 = ((x325<=x326)*(x327^x328));

	if (t81 != -253) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MAX;
	static int32_t x331 = 638;
	static int32_t t82 = -44;

	t82 = ((x329<=x330)*(x331^x332));

	if (t82 != -639) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	int8_t x334 = INT8_MAX;
	static int8_t x335 = -1;
	static volatile uint16_t x336 = 15934U;
	int32_t t83 = -420100;

	t83 = ((x333<=x334)*(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 2U;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = -5876;

	t84 = ((x337<=x338)*(x339^x340));

	if (t84 != -126) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = 2;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = -1165424590403945670LL;
	int64_t t85 = 52299383392882LL;

	t85 = ((x341<=x342)*(x343^x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile int32_t x347 = -837279;
	int64_t x348 = INT64_MIN;
	static int64_t t86 = 3236911076LL;

	t86 = ((x345<=x346)*(x347^x348));

	if (t86 != 9223372036853938529LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int64_t x350 = 0LL;
	uint16_t x351 = 10506U;
	volatile uint32_t t87 = 1336362293U;

	t87 = ((x349<=x350)*(x351^x352));

	if (t87 != 10522U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 14U;
	volatile int64_t x354 = 2116105842980LL;
	volatile int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t88 = -7180782520170LL;

	t88 = ((x353<=x354)*(x355^x356));

	if (t88 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -1;
	int32_t x359 = 7;
	static int32_t t89 = 46162;

	t89 = ((x357<=x358)*(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -6;
	int32_t x364 = -1;
	volatile uint64_t t90 = 14405769322LLU;

	t90 = ((x361<=x362)*(x363^x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 3479U;
	int64_t x367 = -1LL;
	volatile int32_t x368 = -1220141;
	static volatile int64_t t91 = -670128873402857184LL;

	t91 = ((x365<=x366)*(x367^x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = UINT8_MAX;
	static int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MAX;
	int32_t t92 = 50662269;

	t92 = ((x369<=x370)*(x371^x372));

	if (t92 != -2147450881) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = 7U;
	uint16_t x376 = 2U;

	t93 = ((x373<=x374)*(x375^x376));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int32_t x378 = 5534;
	uint64_t x380 = 2066113798506LLU;
	static volatile uint64_t t94 = 99LLU;

	t94 = ((x377<=x378)*(x379^x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x383 = -1;
	int8_t x384 = -3;

	t95 = ((x381<=x382)*(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = 1U;
	int8_t x387 = INT8_MAX;
	volatile int32_t x388 = INT32_MIN;
	static int32_t t96 = -2;

	t96 = ((x385<=x386)*(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 91472167;

	t97 = ((x389<=x390)*(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -62;
	int64_t x396 = 303906742884LL;
	volatile int64_t t98 = -13337951727964LL;

	t98 = ((x393<=x394)*(x395^x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -1;
	int64_t x398 = INT64_MIN;
	int16_t x399 = 13;
	int32_t t99 = -156922293;

	t99 = ((x397<=x398)*(x399^x400));

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

