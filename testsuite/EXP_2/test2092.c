#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MAX;
volatile int16_t x22 = INT16_MIN;
volatile int32_t t3 = -150482469;
uint16_t x28 = 1036U;
int32_t t4 = -516;
volatile uint64_t t6 = UINT64_MAX;
volatile int8_t x47 = INT8_MAX;
int8_t x48 = -1;
volatile int64_t x54 = 834374012483LL;
uint64_t x57 = UINT64_MAX;
int16_t x76 = -15;
uint8_t x77 = UINT8_MAX;
volatile int8_t x90 = INT8_MAX;
uint32_t x93 = 136416U;
volatile uint8_t x94 = UINT8_MAX;
volatile int64_t t21 = 2685411272LL;
volatile int32_t x102 = -1;
static int64_t x103 = INT64_MIN;
int8_t x104 = INT8_MIN;
int16_t x107 = 21;
volatile int64_t t23 = -117402295656LL;
uint32_t x109 = UINT32_MAX;
uint32_t x110 = 79U;
static uint32_t x112 = 4U;
int64_t x117 = INT64_MAX;
volatile int16_t x122 = INT16_MIN;
volatile int16_t x126 = -596;
int64_t x136 = INT64_MIN;
int64_t t30 = -15925143LL;
int64_t x137 = -1LL;
static volatile uint64_t t31 = 50672465099LLU;
int8_t x143 = INT8_MIN;
uint16_t x144 = 406U;
uint16_t x145 = UINT16_MAX;
int16_t x150 = INT16_MIN;
int8_t x155 = INT8_MIN;
int32_t x160 = -1;
uint64_t x161 = 457695LLU;
static volatile int64_t t38 = -60838156LL;
int16_t x170 = INT16_MIN;
int16_t x172 = INT16_MAX;
int64_t x175 = INT64_MAX;
uint32_t x177 = UINT32_MAX;
volatile uint32_t t41 = 820517789U;
uint8_t x186 = 13U;
int64_t x189 = INT64_MIN;
int16_t x190 = -15575;
uint16_t x191 = 4U;
uint32_t x196 = UINT32_MAX;
int16_t x203 = INT16_MAX;
volatile uint32_t x211 = UINT32_MAX;
static uint64_t x221 = UINT64_MAX;
int32_t x223 = -1508;
uint32_t x229 = UINT32_MAX;
uint64_t x230 = 28702815270080LLU;
static int16_t x232 = -1;
volatile int8_t x234 = INT8_MIN;
int8_t x235 = 1;
static int32_t x240 = INT32_MAX;
int32_t x253 = -36312884;
int16_t x266 = INT16_MIN;
uint32_t x274 = 884884U;
static int16_t x277 = 86;
int64_t x278 = 28109321344LL;
static volatile int32_t x288 = INT32_MIN;
uint8_t x291 = 9U;
volatile uint64_t x292 = UINT64_MAX;
volatile uint64_t t69 = UINT64_MAX;
static int8_t x296 = -1;
volatile int32_t t70 = 53464;
int32_t x298 = INT32_MAX;
int64_t t72 = -962562386LL;
static int8_t x308 = -1;
static int32_t x315 = INT32_MIN;
static volatile uint64_t t76 = 3LLU;
volatile int32_t x323 = -1336;
int64_t t79 = -131688381384734LL;
int32_t x333 = 9401;
int64_t x337 = -50126666835675984LL;
uint16_t x340 = UINT16_MAX;
volatile int32_t x347 = INT32_MIN;
int8_t x349 = INT8_MIN;
static uint16_t x352 = UINT16_MAX;
uint32_t x353 = UINT32_MAX;
int16_t x356 = INT16_MIN;
volatile uint32_t t85 = 62569U;
int8_t x359 = INT8_MAX;
static uint16_t x363 = UINT16_MAX;
int64_t x369 = INT64_MIN;
volatile int64_t t89 = -31364493050738LL;
uint8_t x380 = UINT8_MAX;
static int32_t t93 = -5457;
int16_t x395 = 0;
uint64_t t94 = 1858730473560LLU;
int8_t x402 = INT8_MIN;
volatile uint32_t x404 = UINT32_MAX;
int8_t x408 = 6;
static int32_t x413 = -58;
static uint8_t x417 = 15U;


void f0(void) {
	uint16_t x6 = 26U;
	static int64_t x7 = INT64_MAX;
	int32_t x8 = -1;
	int64_t t0 = 43374905311485791LL;

	t0 = ((x5%(x6^x7))|x8);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = 17;
	int64_t x14 = -15227921028122811LL;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	static int64_t t1 = 21350LL;

	t1 = ((x13%(x14^x15))|x16);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	static int16_t x18 = INT16_MAX;
	int16_t x19 = -1;
	static uint8_t x20 = 9U;
	static volatile int64_t t2 = -1222LL;

	t2 = ((x17%(x18^x19))|x20);

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 7;
	volatile int16_t x23 = INT16_MAX;
	int16_t x24 = INT16_MIN;

	t3 = ((x21%(x22^x23))|x24);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MIN;
	static int8_t x27 = -1;

	t4 = ((x25%(x26^x27))|x28);

	if (t4 != -31732) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	static int32_t x30 = INT32_MIN;
	uint8_t x31 = 37U;
	int8_t x32 = INT8_MIN;
	int64_t t5 = -8146396LL;

	t5 = ((x29%(x30^x31))|x32);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = 327695312166093LL;
	int8_t x34 = INT8_MAX;
	int32_t x35 = 21;
	uint64_t x36 = UINT64_MAX;

	t6 = ((x33%(x34^x35))|x36);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	volatile int32_t x38 = 1;
	int16_t x39 = INT16_MAX;
	static int8_t x40 = -1;
	int32_t t7 = 4002;

	t7 = ((x37%(x38^x39))|x40);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x45 = 4U;
	static uint64_t x46 = 459532753LLU;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x45%(x46^x47))|x48);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 6;
	static int8_t x50 = INT8_MIN;
	static volatile int8_t x51 = -58;
	uint16_t x52 = 2853U;
	volatile int32_t t9 = -139;

	t9 = ((x49%(x50^x51))|x52);

	if (t9 != 2855) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = -1;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = 1U;
	int64_t t10 = 199499486475315441LL;

	t10 = ((x53%(x54^x55))|x56);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x58 = INT32_MIN;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;
	uint64_t t11 = 105955133525LLU;

	t11 = ((x57%(x58^x59))|x60);

	if (t11 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x61 = UINT16_MAX;
	static uint64_t x62 = 111916540888843LLU;
	static int8_t x63 = INT8_MIN;
	volatile uint32_t x64 = UINT32_MAX;
	volatile uint64_t t12 = 14290349321793LLU;

	t12 = ((x61%(x62^x63))|x64);

	if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = 1U;
	static int16_t x66 = INT16_MAX;
	volatile int8_t x67 = -1;
	int64_t x68 = -1LL;
	volatile int64_t t13 = 1329246328LL;

	t13 = ((x65%(x66^x67))|x68);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = -1;
	int64_t x71 = 246346104096LL;
	int32_t x72 = INT32_MIN;
	int64_t t14 = -46LL;

	t14 = ((x69%(x70^x71))|x72);

	if (t14 != -2121408031LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	static int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MIN;
	static volatile int32_t t15 = 254962379;

	t15 = ((x73%(x74^x75))|x76);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x78 = UINT8_MAX;
	static int64_t x79 = 57LL;
	volatile int8_t x80 = INT8_MIN;
	volatile int64_t t16 = 184565316LL;

	t16 = ((x77%(x78^x79))|x80);

	if (t16 != -71LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 0U;
	int16_t x82 = 42;
	uint32_t x83 = 8000453U;
	volatile int32_t x84 = INT32_MIN;
	uint32_t t17 = 3825U;

	t17 = ((x81%(x82^x83))|x84);

	if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	static int16_t x86 = INT16_MAX;
	volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = 47;
	volatile uint64_t t18 = 104LLU;

	t18 = ((x85%(x86^x87))|x88);

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 1;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -1;
	int32_t t19 = 115682;

	t19 = ((x89%(x90^x91))|x92);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x95 = -3;
	static uint64_t x96 = 112956083LLU;
	uint64_t t20 = 787926722351403LLU;

	t20 = ((x93%(x94^x95))|x96);

	if (t20 != 112957171LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	int8_t x100 = -15;

	t21 = ((x97%(x98^x99))|x100);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	volatile int64_t t22 = -4722425LL;

	t22 = ((x101%(x102^x103))|x104);

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	static uint8_t x106 = UINT8_MAX;
	uint8_t x108 = 15U;

	t23 = ((x105%(x106^x107))|x108);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x111 = INT16_MIN;
	static uint32_t t24 = 12980844U;

	t24 = ((x109%(x110^x111))|x112);

	if (t24 != 32692U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = UINT16_MAX;
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	int16_t x116 = -1;
	volatile int32_t t25 = 199466764;

	t25 = ((x113%(x114^x115))|x116);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x118 = UINT32_MAX;
	int64_t x119 = -1LL;
	static volatile int8_t x120 = -3;
	int64_t t26 = -57277161LL;

	t26 = ((x117%(x118^x119))|x120);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = -1803;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 101539342949LLU;
	volatile uint64_t t27 = 68421960455503LLU;

	t27 = ((x121%(x122^x123))|x124);

	if (t27 != 101539342949LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = -1LL;
	static int16_t x127 = 1342;
	int64_t x128 = INT64_MIN;
	int64_t t28 = 3383LL;

	t28 = ((x125%(x126^x127))|x128);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 30437U;
	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t29 = 85;

	t29 = ((x129%(x130^x131))|x132);

	if (t29 != -2331) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = -1501730;
	uint16_t x135 = 7U;

	t30 = ((x133%(x134^x135))|x136);

	if (t30 != -9223372036854773211LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x138 = INT8_MIN;
	volatile uint64_t x139 = 9702LLU;
	int32_t x140 = -12657;

	t31 = ((x137%(x138^x139))|x140);

	if (t31 != 18446744073709547423LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	volatile int16_t x142 = INT16_MAX;
	volatile int64_t t32 = 8032LL;

	t32 = ((x141%(x142^x143))|x144);

	if (t32 != -31850LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x146 = 1U;
	int8_t x147 = INT8_MAX;
	uint8_t x148 = UINT8_MAX;
	int32_t t33 = -581;

	t33 = ((x145%(x146^x147))|x148);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x149 = 2166702;
	static int16_t x151 = -1;
	volatile int32_t x152 = INT32_MIN;
	int32_t t34 = -813;

	t34 = ((x149%(x150^x151))|x152);

	if (t34 != -2147479568) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = -4;
	int64_t x154 = -1LL;
	static uint64_t x156 = 51881808603991186LLU;
	uint64_t t35 = 34448031LLU;

	t35 = ((x153%(x154^x155))|x156);

	if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = -1;
	static int64_t x158 = -1LL;
	static int16_t x159 = -7381;
	int64_t t36 = 34LL;

	t36 = ((x157%(x158^x159))|x160);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 484665U;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t37 = 161774LLU;

	t37 = ((x161%(x162^x163))|x164);

	if (t37 != 18446744073709550559LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -16056;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 14U;
	int8_t x168 = INT8_MIN;

	t38 = ((x165%(x166^x167))|x168);

	if (t38 != -56LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	volatile uint16_t x171 = 3615U;
	int32_t t39 = 945520;

	t39 = ((x169%(x170^x171))|x172);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = -56655;
	uint64_t x176 = 5LLU;
	volatile uint64_t t40 = 1617335776580LLU;

	t40 = ((x173%(x174^x175))|x176);

	if (t40 != 18446744073709494967LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;

	t41 = ((x177%(x178^x179))|x180);

	if (t41 != 4294934543U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x181 = 58LLU;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 198039467LLU;
	int8_t x184 = INT8_MIN;
	uint64_t t42 = 269045730178LLU;

	t42 = ((x181%(x182^x183))|x184);

	if (t42 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = -1;
	volatile uint8_t x187 = 0U;
	volatile int16_t x188 = 980;
	int32_t t43 = 9760;

	t43 = ((x185%(x186^x187))|x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x192 = INT16_MAX;
	volatile int64_t t44 = -661060727184153LL;

	t44 = ((x189%(x190^x191))|x192);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 14U;
	uint8_t x194 = 1U;
	int16_t x195 = INT16_MIN;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x193%(x194^x195))|x196);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = -12319915865430LL;
	int16_t x198 = -1;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MAX;
	volatile int64_t t46 = 7506LL;

	t46 = ((x197%(x198^x199))|x200);

	if (t46 != -2689LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = -1;
	volatile uint32_t x202 = 900011141U;
	static int64_t x204 = INT64_MAX;
	int64_t t47 = INT64_MAX;

	t47 = ((x201%(x202^x203))|x204);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x205 = 5LLU;
	volatile int16_t x206 = -1;
	uint32_t x207 = 152U;
	int64_t x208 = INT64_MAX;
	volatile uint64_t t48 = 190394855383484209LLU;

	t48 = ((x205%(x206^x207))|x208);

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = UINT64_MAX;
	int8_t x210 = 1;
	static uint16_t x212 = 1904U;
	uint64_t t49 = 62141445586LLU;

	t49 = ((x209%(x210^x211))|x212);

	if (t49 != 1907LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x213 = 503U;
	volatile int32_t x214 = INT32_MAX;
	volatile int8_t x215 = 1;
	static volatile int16_t x216 = INT16_MIN;
	int32_t t50 = -44;

	t50 = ((x213%(x214^x215))|x216);

	if (t50 != -32265) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = 491810641714773LLU;
	static int32_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x217%(x218^x219))|x220);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x222 = UINT16_MAX;
	int16_t x224 = -6504;
	uint64_t t52 = 196LLU;

	t52 = ((x221%(x222^x223))|x224);

	if (t52 != 18446744073709551260LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x225 = 1076775LLU;
	uint8_t x226 = 6U;
	int8_t x227 = -18;
	int32_t x228 = INT32_MAX;
	volatile uint64_t t53 = 2122800634258516LLU;

	t53 = ((x225%(x226^x227))|x228);

	if (t53 != 2147483647LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x231 = UINT16_MAX;
	static volatile uint64_t t54 = UINT64_MAX;

	t54 = ((x229%(x230^x231))|x232);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = -3684252398593834365LL;
	static volatile int16_t x236 = INT16_MIN;
	volatile int64_t t55 = 4382389873999727LL;

	t55 = ((x233%(x234^x235))|x236);

	if (t55 != -37LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 45U;
	int16_t x238 = INT16_MAX;
	static volatile uint32_t x239 = 69U;
	volatile uint32_t t56 = 11U;

	t56 = ((x237%(x238^x239))|x240);

	if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x241 = -1;
	int8_t x242 = -1;
	int8_t x243 = INT8_MAX;
	static int8_t x244 = -12;
	volatile int32_t t57 = 4793510;

	t57 = ((x241%(x242^x243))|x244);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x245 = 3U;
	static volatile int64_t x246 = INT64_MIN;
	volatile int32_t x247 = INT32_MAX;
	int32_t x248 = 36680;
	int64_t t58 = 2974754LL;

	t58 = ((x245%(x246^x247))|x248);

	if (t58 != 36683LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x249 = 6922U;
	volatile int32_t x250 = -36435;
	int16_t x251 = INT16_MIN;
	uint64_t x252 = 1141321LLU;
	volatile uint64_t t59 = 90LLU;

	t59 = ((x249%(x250^x251))|x252);

	if (t59 != 1145675LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x254 = 2147;
	uint32_t x255 = 5U;
	int16_t x256 = -1;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x253%(x254^x255))|x256);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = 113;
	static int16_t x259 = INT16_MIN;
	int16_t x260 = 0;
	volatile int32_t t61 = -1;

	t61 = ((x257%(x258^x259))|x260);

	if (t61 != -113) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -1;
	static volatile int16_t x262 = INT16_MAX;
	int8_t x263 = -1;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t62 = -424922806;

	t62 = ((x261%(x262^x263))|x264);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x265 = INT64_MIN;
	int64_t x267 = 1445322707LL;
	volatile int16_t x268 = INT16_MIN;
	static volatile int64_t t63 = -40853002576LL;

	t63 = ((x265%(x266^x267))|x268);

	if (t63 != -21452LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MAX;
	static volatile int16_t x271 = INT16_MAX;
	int64_t x272 = INT64_MAX;
	static volatile int64_t t64 = INT64_MAX;

	t64 = ((x269%(x270^x271))|x272);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x273 = UINT8_MAX;
	int32_t x275 = 115745977;
	int64_t x276 = 16776265467LL;
	int64_t t65 = -18LL;

	t65 = ((x273%(x274^x275))|x276);

	if (t65 != 16776265471LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x279 = 5143028797LL;
	volatile uint64_t x280 = 29951544812LLU;
	uint64_t t66 = 205LLU;

	t66 = ((x277%(x278^x279))|x280);

	if (t66 != 29951544830LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -12984;
	uint64_t x283 = UINT64_MAX;
	uint64_t x284 = 24LLU;
	volatile uint64_t t67 = 71LLU;

	t67 = ((x281%(x282^x283))|x284);

	if (t67 != 255LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 12U;
	int8_t x287 = INT8_MAX;
	static int32_t t68 = 58819218;

	t68 = ((x285%(x286^x287))|x288);

	if (t68 != -108) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = -160;
	int64_t x290 = -1LL;

	t69 = ((x289%(x290^x291))|x292);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = 0;
	int8_t x294 = INT8_MIN;
	static int16_t x295 = INT16_MAX;

	t70 = ((x293%(x294^x295))|x296);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x297 = 7560U;
	uint16_t x299 = 0U;
	int64_t x300 = INT64_MAX;
	volatile int64_t t71 = INT64_MAX;

	t71 = ((x297%(x298^x299))|x300);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MAX;
	int64_t x303 = -19297455LL;
	uint32_t x304 = 8U;

	t72 = ((x301%(x302^x303))|x304);

	if (t72 != -32760LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = -1063442574;
	static volatile uint64_t x306 = 3995LLU;
	uint32_t x307 = 16647513U;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x305%(x306^x307))|x308);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 7204142953097635LLU;
	uint8_t x310 = 2U;
	int64_t x311 = INT64_MAX;
	int32_t x312 = 177553;
	uint64_t t74 = 39818174392596681LLU;

	t74 = ((x309%(x310^x311))|x312);

	if (t74 != 7204142953266611LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = -1;
	static int32_t x316 = INT32_MAX;
	volatile int64_t t75 = 2046188420756LL;

	t75 = ((x313%(x314^x315))|x316);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x317 = UINT64_MAX;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MIN;

	t76 = ((x317%(x318^x319))|x320);

	if (t76 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x321 = UINT16_MAX;
	static int32_t x322 = 0;
	int8_t x324 = 1;
	volatile int32_t t77 = -435;

	t77 = ((x321%(x322^x323))|x324);

	if (t77 != 71) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = INT16_MAX;
	volatile int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MAX;
	int64_t t78 = -2LL;

	t78 = ((x325%(x326^x327))|x328);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 6491U;
	int32_t x330 = 3085;
	int64_t x331 = 1363749LL;
	static int16_t x332 = INT16_MIN;

	t79 = ((x329%(x330^x331))|x332);

	if (t79 != -26277LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x334 = -1;
	volatile int64_t x335 = 1670LL;
	int64_t x336 = INT64_MIN;
	int64_t t80 = -26897LL;

	t80 = ((x333%(x334^x335))|x336);

	if (t80 != -9223372036854774762LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x338 = 1U;
	int64_t x339 = INT64_MAX;
	volatile int64_t t81 = 33046373999LL;

	t81 = ((x337%(x338^x339))|x340);

	if (t81 != -50126666835623937LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 119356870600LLU;
	int16_t x342 = INT16_MIN;
	uint64_t x343 = 3404LLU;
	static volatile int8_t x344 = -1;
	uint64_t t82 = UINT64_MAX;

	t82 = ((x341%(x342^x343))|x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = INT8_MIN;
	uint64_t x346 = 37LLU;
	static int32_t x348 = 12365;
	uint64_t t83 = 74LLU;

	t83 = ((x345%(x346^x347))|x348);

	if (t83 != 2147483487LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x350 = 3714287U;
	int64_t x351 = INT64_MIN;
	int64_t t84 = 40LL;

	t84 = ((x349%(x350^x351))|x352);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x354 = INT16_MAX;
	static volatile uint32_t x355 = 2461673U;

	t85 = ((x353%(x354^x355))|x356);

	if (t85 != 4294957973U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x357 = 110423LLU;
	static int32_t x358 = 1571;
	int8_t x360 = -1;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x357%(x358^x359))|x360);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = -1;
	static uint64_t x362 = UINT64_MAX;
	uint32_t x364 = UINT32_MAX;
	uint64_t t87 = 1054LLU;

	t87 = ((x361%(x362^x363))|x364);

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x370 = 3U;
	static int16_t x371 = INT16_MIN;
	volatile int8_t x372 = INT8_MIN;
	int64_t t88 = 509901LL;

	t88 = ((x369%(x370^x371))|x372);

	if (t88 != -8LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = 941694751174LL;
	int32_t x374 = INT32_MAX;
	volatile int16_t x375 = INT16_MAX;
	uint32_t x376 = 1925584U;

	t89 = ((x373%(x374^x375))|x376);

	if (t89 != 1111355862LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MAX;
	static int64_t x378 = INT64_MIN;
	static int16_t x379 = INT16_MIN;
	int64_t t90 = -3593033576LL;

	t90 = ((x377%(x378^x379))|x380);

	if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x381 = -1;
	int32_t x382 = -48;
	static volatile uint64_t x383 = UINT64_MAX;
	volatile int8_t x384 = 2;
	uint64_t t91 = 14LLU;

	t91 = ((x381%(x382^x383))|x384);

	if (t91 != 26LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	volatile uint64_t x386 = 4062168936499LLU;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 311U;
	volatile uint64_t t92 = 70013594LLU;

	t92 = ((x385%(x386^x387))|x388);

	if (t92 != 9223372036854776119LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = -1;
	static volatile int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	static int8_t x392 = INT8_MAX;

	t93 = ((x389%(x390^x391))|x392);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x393 = 3LLU;
	volatile int32_t x394 = 448165;
	int16_t x396 = INT16_MIN;

	t94 = ((x393%(x394^x395))|x396);

	if (t94 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 188168907U;
	int64_t x398 = -1LL;
	int32_t x399 = -7757545;
	int64_t x400 = -1LL;
	int64_t t95 = 1662LL;

	t95 = ((x397%(x398^x399))|x400);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x401 = 27171U;
	int64_t x403 = INT64_MIN;
	int64_t t96 = 71LL;

	t96 = ((x401%(x402^x403))|x404);

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -1LL;
	int64_t t97 = -34699814502LL;

	t97 = ((x405%(x406^x407))|x408);

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x414 = 6;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MAX;
	volatile int64_t t98 = 45LL;

	t98 = ((x413%(x414^x415))|x416);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x418 = -1;
	int8_t x419 = 31;
	int64_t x420 = INT64_MAX;
	volatile int64_t t99 = INT64_MAX;

	t99 = ((x417%(x418^x419))|x420);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

