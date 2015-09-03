#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x24 = INT64_MIN;
int8_t x28 = -1;
uint32_t x30 = 1U;
volatile int8_t x32 = -1;
volatile int32_t x35 = -1;
int32_t x37 = INT32_MIN;
volatile uint64_t x50 = UINT64_MAX;
int16_t x54 = INT16_MAX;
int16_t x55 = INT16_MAX;
int16_t x56 = INT16_MAX;
int16_t x57 = -1;
int32_t t15 = 2527;
int8_t x67 = 0;
volatile int8_t x87 = -5;
int32_t t22 = 0;
uint8_t x98 = UINT8_MAX;
int8_t x100 = -59;
volatile int32_t x104 = INT32_MIN;
volatile int64_t t25 = INT64_MIN;
uint32_t x107 = UINT32_MAX;
uint16_t x111 = 19695U;
int64_t x114 = INT64_MIN;
uint16_t x115 = 2806U;
uint8_t x126 = UINT8_MAX;
int64_t x127 = -1LL;
static int32_t x128 = -1;
int32_t x129 = INT32_MIN;
static volatile int8_t x134 = INT8_MIN;
volatile int8_t x136 = -18;
static int64_t t33 = -193243702303694492LL;
volatile int32_t t34 = 1065979364;
int8_t x147 = -36;
int64_t x155 = 29150584414725LL;
volatile uint16_t x156 = UINT16_MAX;
int8_t x160 = -1;
volatile int8_t x164 = INT8_MIN;
int8_t x166 = INT8_MIN;
int64_t t41 = INT64_MIN;
int8_t x172 = -1;
volatile uint32_t t42 = 9988U;
int64_t x176 = INT64_MAX;
static volatile int32_t x181 = INT32_MIN;
int32_t x182 = 21674859;
uint8_t x183 = 2U;
int8_t x188 = -32;
uint32_t x195 = UINT32_MAX;
volatile int32_t t48 = -8059513;
static int32_t x203 = -1;
uint32_t x205 = 62U;
int64_t x208 = INT64_MIN;
int64_t x209 = INT64_MIN;
int16_t x211 = 759;
volatile int64_t x220 = -1LL;
uint32_t t54 = 5584U;
int16_t x223 = INT16_MIN;
int8_t x224 = -3;
volatile int32_t t55 = 2392;
volatile uint16_t x226 = UINT16_MAX;
uint8_t x233 = 32U;
volatile int32_t x235 = -1;
volatile uint8_t x240 = 0U;
int64_t x246 = INT64_MAX;
static int16_t x247 = INT16_MIN;
volatile uint32_t t61 = 4882143U;
volatile int32_t t62 = INT32_MAX;
int32_t x253 = -1231;
int8_t x254 = -1;
int64_t x260 = INT64_MIN;
uint8_t x266 = 0U;
volatile int64_t x276 = INT64_MIN;
int32_t t68 = 1300989;
volatile int64_t x279 = -8044024022LL;
static int8_t x281 = -6;
int32_t x282 = INT32_MIN;
static int32_t x283 = INT32_MAX;
int16_t x287 = INT16_MIN;
volatile int16_t x290 = 3602;
volatile uint8_t x297 = 9U;
static int64_t x307 = -1LL;
int32_t t76 = 3;
int32_t x309 = INT32_MIN;
volatile uint16_t x323 = 36U;
uint16_t x324 = UINT16_MAX;
int32_t x326 = 3542568;
static int16_t x329 = 344;
int8_t x332 = INT8_MIN;
volatile uint32_t x337 = 154586310U;
uint32_t x343 = 3U;
uint64_t x349 = UINT64_MAX;
uint32_t x352 = 0U;
volatile int32_t x353 = INT32_MIN;
volatile uint8_t x360 = 4U;
int8_t x362 = INT8_MIN;
int64_t x369 = INT64_MAX;
static int8_t x370 = INT8_MIN;
volatile int64_t t92 = INT64_MAX;
int16_t x374 = -1;
int16_t x382 = 15;
uint64_t x398 = UINT64_MAX;


void f0(void) {
	int32_t x1 = -9425049;
	int8_t x2 = INT8_MAX;
	uint8_t x3 = 119U;
	int16_t x4 = -749;
	int32_t t0 = -71;

	t0 = (x1|(x2==(x3^x4)));

	if (t0 != -9425049) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MAX;
	static uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = INT64_MIN;

	t1 = (x5|(x6==(x7^x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -774744;
	uint32_t x10 = 1547U;
	static int32_t x11 = -545358079;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 220281471;

	t2 = (x9|(x10==(x11^x12)));

	if (t2 != -774744) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int16_t x14 = -7;
	volatile uint32_t x15 = 12574617U;
	int8_t x16 = INT8_MIN;
	int64_t t3 = -3LL;

	t3 = (x13|(x14==(x15^x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	static volatile uint16_t x19 = 3047U;
	volatile uint8_t x20 = 3U;
	int64_t t4 = INT64_MIN;

	t4 = (x17|(x18==(x19^x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	static uint32_t x22 = UINT32_MAX;
	int16_t x23 = -1;
	static volatile int32_t t5 = 1618212;

	t5 = (x21|(x22==(x23^x24)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 0U;
	int8_t x26 = 8;
	uint64_t x27 = UINT64_MAX;
	uint32_t t6 = 200U;

	t6 = (x25|(x26==(x27^x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	int32_t x31 = -1;
	int32_t t7 = -107598;

	t7 = (x29|(x30==(x31^x32)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 667U;
	volatile int16_t x34 = 0;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 51175;

	t8 = (x33|(x34==(x35^x36)));

	if (t8 != 667) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MIN;
	volatile uint64_t x39 = 4753984606LLU;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MIN;

	t9 = (x37|(x38==(x39^x40)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 2644090U;
	int8_t x42 = 2;
	int16_t x43 = -9687;
	int64_t x44 = INT64_MIN;
	volatile uint32_t t10 = 1757402791U;

	t10 = (x41|(x42==(x43^x44)));

	if (t10 != 2644090U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	uint8_t x46 = 92U;
	volatile uint32_t x47 = 989U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 1300;

	t11 = (x45|(x46==(x47^x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 220;
	uint8_t x51 = UINT8_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	int32_t t12 = 7268;

	t12 = (x49|(x50==(x51^x52)));

	if (t12 != 220) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -2LL;
	int64_t t13 = -1856076LL;

	t13 = (x53|(x54==(x55^x56)));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x58 = 616319457883427311LL;
	int64_t x59 = INT64_MAX;
	static volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -506;

	t14 = (x57|(x58==(x59^x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 15489;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	int8_t x64 = 1;

	t15 = (x61|(x62==(x63^x64)));

	if (t15 != 15489) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int64_t x66 = 81LL;
	volatile int32_t x68 = 53783;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x65|(x66==(x67^x68)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = 105LL;
	volatile int64_t x72 = INT64_MIN;
	static int32_t t17 = 1088939;

	t17 = (x69|(x70==(x71^x72)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = -415534032;
	uint8_t x75 = 2U;
	uint64_t x76 = 16330224539LLU;
	int32_t t18 = 115;

	t18 = (x73|(x74==(x75^x76)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static int64_t x78 = INT64_MIN;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = 1911;
	volatile int64_t t19 = -8148953499820LL;

	t19 = (x77|(x78==(x79^x80)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	static int8_t x82 = INT8_MAX;
	int8_t x83 = -1;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -709920678;

	t20 = (x81|(x82==(x83^x84)));

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile uint8_t x86 = 13U;
	volatile int64_t x88 = -656480400416LL;
	int32_t t21 = -11;

	t21 = (x85|(x86==(x87^x88)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	static int16_t x91 = -60;
	int64_t x92 = INT64_MIN;

	t22 = (x89|(x90==(x91^x92)));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	uint16_t x94 = 16U;
	volatile uint8_t x95 = 1U;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 2520;

	t23 = (x93|(x94==(x95^x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile int32_t x99 = -1;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97|(x98==(x99^x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	volatile int64_t x102 = INT64_MAX;
	static volatile int32_t x103 = INT32_MIN;

	t25 = (x101|(x102==(x103^x104)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 2U;
	int64_t x106 = -16411874408064LL;
	volatile int64_t x108 = INT64_MIN;
	static int32_t t26 = -19364;

	t26 = (x105|(x106==(x107^x108)));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -958;
	int32_t x110 = INT32_MAX;
	int64_t x112 = -107LL;
	static int32_t t27 = -3;

	t27 = (x109|(x110==(x111^x112)));

	if (t27 != -958) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = UINT64_MAX;
	int32_t x116 = INT32_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113|(x114==(x115^x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static int64_t x118 = 83479906688LL;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = UINT16_MAX;
	int64_t t29 = 36545LL;

	t29 = (x117|(x118==(x119^x120)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static int32_t x122 = 178656447;
	int32_t x123 = -1;
	uint8_t x124 = 2U;
	static int32_t t30 = 452;

	t30 = (x121|(x122==(x123^x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 7330U;
	uint32_t t31 = 6423618U;

	t31 = (x125|(x126==(x127^x128)));

	if (t31 != 7330U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -12;
	static volatile int16_t x131 = -1888;
	uint64_t x132 = UINT64_MAX;
	int32_t t32 = INT32_MIN;

	t32 = (x129|(x130==(x131^x132)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -14989368LL;
	int16_t x135 = -1;

	t33 = (x133|(x134==(x135^x136)));

	if (t33 != -14989368LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 56;
	int32_t x138 = -1;
	int16_t x139 = INT16_MIN;
	static int64_t x140 = -1LL;

	t34 = (x137|(x138==(x139^x140)));

	if (t34 != 56) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static volatile int8_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 481U;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x141|(x142==(x143^x144)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -2041410901868LL;
	int64_t x146 = INT64_MAX;
	uint32_t x148 = 460713693U;
	volatile int64_t t36 = -130697528410069LL;

	t36 = (x145|(x146==(x147^x148)));

	if (t36 != -2041410901868LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile uint32_t x150 = 266176U;
	volatile int8_t x151 = INT8_MIN;
	uint32_t x152 = 20127243U;
	int32_t t37 = -5;

	t37 = (x149|(x150==(x151^x152)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	static int8_t x154 = INT8_MAX;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x153|(x154==(x155^x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	volatile uint8_t x159 = UINT8_MAX;
	int32_t t39 = -3641;

	t39 = (x157|(x158==(x159^x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 21U;
	uint64_t t40 = UINT64_MAX;

	t40 = (x161|(x162==(x163^x164)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	static uint16_t x167 = 10359U;
	int32_t x168 = INT32_MIN;

	t41 = (x165|(x166==(x167^x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 1U;
	static uint32_t x170 = 33448037U;
	uint16_t x171 = UINT16_MAX;

	t42 = (x169|(x170==(x171^x172)));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = -1;
	static uint32_t x175 = 62U;
	volatile int32_t t43 = 30591;

	t43 = (x173|(x174==(x175^x176)));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int16_t x178 = INT16_MIN;
	static int8_t x179 = -1;
	volatile int16_t x180 = INT16_MAX;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x177|(x178==(x179^x180)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x184 = 315U;
	static int32_t t45 = INT32_MIN;

	t45 = (x181|(x182==(x183^x184)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 55U;
	uint32_t x186 = 24U;
	volatile int32_t x187 = 1;
	static int32_t t46 = -6;

	t46 = (x185|(x186==(x187^x188)));

	if (t46 != 55) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x189 = -1;
	int16_t x190 = -1;
	static volatile int64_t x191 = -3732LL;
	int32_t x192 = -31;
	volatile int32_t t47 = -1;

	t47 = (x189|(x190==(x191^x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile int16_t x194 = 46;
	int8_t x196 = -1;

	t48 = (x193|(x194==(x195^x196)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 47U;
	int64_t x198 = INT64_MIN;
	static uint32_t x199 = 53144U;
	volatile uint64_t x200 = UINT64_MAX;
	static int32_t t49 = -456;

	t49 = (x197|(x198==(x199^x200)));

	if (t49 != 47) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 2;
	uint16_t x202 = 4174U;
	volatile uint8_t x204 = 24U;
	int32_t t50 = 1209;

	t50 = (x201|(x202==(x203^x204)));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = 0;
	volatile uint8_t x207 = 10U;
	static uint32_t t51 = 15U;

	t51 = (x205|(x206==(x207^x208)));

	if (t51 != 62U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x210 = INT16_MIN;
	uint32_t x212 = 90383U;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x209|(x210==(x211^x212)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	static int8_t x214 = 3;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 123U;
	int32_t t53 = INT32_MAX;

	t53 = (x213|(x214==(x215^x216)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 7507440U;
	uint16_t x218 = 5U;
	uint32_t x219 = 1563U;

	t54 = (x217|(x218==(x219^x220)));

	if (t54 != 7507440U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 20U;
	int64_t x222 = 3345374758580734LL;

	t55 = (x221|(x222==(x223^x224)));

	if (t55 != 20) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -6409;
	volatile int64_t x227 = INT64_MIN;
	int16_t x228 = -112;
	int32_t t56 = 25391;

	t56 = (x225|(x226==(x227^x228)));

	if (t56 != -6409) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 0;
	volatile int32_t x230 = 212;
	int64_t x231 = INT64_MIN;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -20574454;

	t57 = (x229|(x230==(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	static uint16_t x236 = 98U;
	int32_t t58 = -80136;

	t58 = (x233|(x234==(x235^x236)));

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 198245097U;
	uint64_t x238 = 128LLU;
	int64_t x239 = -88024LL;
	volatile uint32_t t59 = 1092307U;

	t59 = (x237|(x238==(x239^x240)));

	if (t59 != 198245097U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int32_t x242 = 71971;
	static int8_t x243 = INT8_MIN;
	volatile uint32_t x244 = 42340214U;
	int32_t t60 = -113;

	t60 = (x241|(x242==(x243^x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 966847U;
	static int16_t x248 = INT16_MAX;

	t61 = (x245|(x246==(x247^x248)));

	if (t61 != 966847U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	static int64_t x250 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;

	t62 = (x249|(x250==(x251^x252)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x255 = INT8_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	static volatile int32_t t63 = 35194;

	t63 = (x253|(x254==(x255^x256)));

	if (t63 != -1231) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int64_t x258 = INT64_MIN;
	static uint32_t x259 = 931U;
	int32_t t64 = -64181112;

	t64 = (x257|(x258==(x259^x260)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -27;
	static int8_t x262 = -1;
	static volatile uint64_t x263 = 19LLU;
	static uint64_t x264 = UINT64_MAX;
	int32_t t65 = 17108;

	t65 = (x261|(x262==(x263^x264)));

	if (t65 != -27) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	static uint64_t x267 = 906388111636540470LLU;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 456;

	t66 = (x265|(x266==(x267^x268)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = UINT32_MAX;
	volatile int32_t x271 = INT32_MIN;
	static int8_t x272 = INT8_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x269|(x270==(x271^x272)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	uint8_t x274 = 2U;
	uint64_t x275 = 1575708LLU;

	t68 = (x273|(x274==(x275^x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	uint8_t x278 = UINT8_MAX;
	volatile uint16_t x280 = UINT16_MAX;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x277|(x278==(x279^x280)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x284 = 3158U;
	volatile int32_t t70 = -120110695;

	t70 = (x281|(x282==(x283^x284)));

	if (t70 != -6) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MAX;
	uint64_t x288 = 1484325066091148LLU;
	static int32_t t71 = -2174;

	t71 = (x285|(x286==(x287^x288)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int64_t x291 = -1LL;
	int8_t x292 = -38;
	static volatile int32_t t72 = -22446060;

	t72 = (x289|(x290==(x291^x292)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile int16_t x294 = INT16_MAX;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t73 = 57734;

	t73 = (x293|(x294==(x295^x296)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MIN;
	static int32_t t74 = 6984959;

	t74 = (x297|(x298==(x299^x300)));

	if (t74 != 9) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	static int16_t x302 = INT16_MIN;
	static volatile uint8_t x303 = UINT8_MAX;
	volatile uint16_t x304 = 2U;
	static uint32_t t75 = UINT32_MAX;

	t75 = (x301|(x302==(x303^x304)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	static uint16_t x306 = 4U;
	int64_t x308 = -354224491553083LL;

	t76 = (x305|(x306==(x307^x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x310 = -1LL;
	static int64_t x311 = INT64_MIN;
	uint16_t x312 = 465U;
	int32_t t77 = INT32_MIN;

	t77 = (x309|(x310==(x311^x312)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x314 = 1604U;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MAX;
	int32_t t78 = INT32_MIN;

	t78 = (x313|(x314==(x315^x316)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	volatile int32_t x318 = INT32_MAX;
	uint64_t x319 = 141828530961LLU;
	volatile uint8_t x320 = 5U;
	volatile int32_t t79 = -3774219;

	t79 = (x317|(x318==(x319^x320)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 2306203950LLU;
	static int64_t x322 = -1LL;
	volatile uint64_t t80 = 3192414844648512LLU;

	t80 = (x321|(x322==(x323^x324)));

	if (t80 != 2306203950LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 588364;
	volatile int32_t x327 = INT32_MIN;
	uint8_t x328 = 58U;
	static int32_t t81 = 142004;

	t81 = (x325|(x326==(x327^x328)));

	if (t81 != 588364) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = UINT64_MAX;
	uint32_t x331 = 845U;
	volatile int32_t t82 = 128576;

	t82 = (x329|(x330==(x331^x332)));

	if (t82 != 344) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	volatile uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MAX;
	volatile uint16_t x336 = 3U;
	int32_t t83 = 0;

	t83 = (x333|(x334==(x335^x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	volatile uint32_t t84 = 32108483U;

	t84 = (x337|(x338==(x339^x340)));

	if (t84 != 154586310U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint32_t x342 = UINT32_MAX;
	int32_t x344 = -262377201;
	int32_t t85 = -461;

	t85 = (x341|(x342==(x343^x344)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile int64_t x346 = INT64_MIN;
	int32_t x347 = 256701;
	volatile uint16_t x348 = UINT16_MAX;
	static int32_t t86 = 116466;

	t86 = (x345|(x346==(x347^x348)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	int16_t x351 = 900;
	uint64_t t87 = UINT64_MAX;

	t87 = (x349|(x350==(x351^x352)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 2015770436299229144LLU;
	int8_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t88 = INT32_MIN;

	t88 = (x353|(x354==(x355^x356)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int64_t x358 = INT64_MAX;
	static volatile uint32_t x359 = 0U;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x357|(x358==(x359^x360)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile uint32_t x363 = UINT32_MAX;
	volatile int8_t x364 = -1;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x361|(x362==(x363^x364)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 14U;
	volatile uint32_t x366 = UINT32_MAX;
	static volatile int16_t x367 = INT16_MAX;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t91 = 6819;

	t91 = (x365|(x366==(x367^x368)));

	if (t91 != 14) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x371 = 13450113U;
	int32_t x372 = -1;

	t92 = (x369|(x370==(x371^x372)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MIN;
	volatile uint8_t x375 = UINT8_MAX;
	static int8_t x376 = 55;
	int32_t t93 = INT32_MIN;

	t93 = (x373|(x374==(x375^x376)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -1040823902;
	int64_t x378 = -2179872955LL;
	static volatile uint32_t x379 = UINT32_MAX;
	volatile uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -130;

	t94 = (x377|(x378==(x379^x380)));

	if (t94 != -1040823902) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x383 = UINT16_MAX;
	static int64_t x384 = 68730544332964187LL;
	volatile int32_t t95 = -101367511;

	t95 = (x381|(x382==(x383^x384)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = UINT64_MAX;
	volatile int32_t x386 = -36;
	volatile uint64_t x387 = 1079038LLU;
	int16_t x388 = 11;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x385|(x386==(x387^x388)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -1;
	uint16_t x390 = 6172U;
	int64_t x391 = -6938302633LL;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 55056;

	t97 = (x389|(x390==(x391^x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MIN;
	uint16_t x394 = 184U;
	int64_t x395 = -1LL;
	int32_t x396 = 1;
	int32_t t98 = INT32_MIN;

	t98 = (x393|(x394==(x395^x396)));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = -1;
	static int32_t x399 = -1;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -10136;

	t99 = (x397|(x398==(x399^x400)));

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

