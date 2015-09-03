#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 420U;
int16_t x8 = INT16_MAX;
static volatile uint64_t t2 = 202498781LLU;
int8_t x13 = INT8_MAX;
static volatile uint32_t x20 = 3U;
int32_t x23 = -3891358;
int32_t x35 = INT32_MIN;
int64_t x37 = -1LL;
static uint8_t x38 = 76U;
int16_t x39 = INT16_MAX;
int16_t x40 = INT16_MAX;
static int64_t x50 = -1LL;
static int32_t x51 = INT32_MIN;
uint64_t x52 = 7LLU;
static uint16_t x54 = 2377U;
static int16_t x59 = 1;
static int8_t x62 = -1;
int16_t x66 = 3;
int8_t x69 = INT8_MIN;
volatile int64_t t17 = 3713649324039LL;
static int32_t x78 = -1;
static volatile int64_t x79 = INT64_MIN;
int64_t x81 = -9893177107591494LL;
volatile int32_t x82 = INT32_MIN;
static int32_t x87 = INT32_MAX;
int16_t x90 = INT16_MIN;
static uint8_t x94 = 0U;
int64_t x95 = INT64_MAX;
int64_t x98 = INT64_MIN;
volatile int8_t x124 = INT8_MIN;
static int16_t x125 = -7;
int64_t x127 = 802397486460733298LL;
int32_t x134 = -1;
int64_t t33 = -53LL;
int64_t x139 = INT64_MAX;
volatile uint64_t t34 = 92485024193964LLU;
static uint64_t x155 = 430162118227LLU;
static volatile uint64_t t38 = UINT64_MAX;
static uint16_t x158 = UINT16_MAX;
volatile uint64_t x164 = 32674LLU;
int16_t x168 = INT16_MIN;
uint32_t t42 = UINT32_MAX;
uint16_t x173 = 28630U;
int16_t x182 = 227;
int16_t x191 = INT16_MIN;
int32_t t48 = 0;
uint32_t x197 = 206954288U;
uint32_t x202 = 1847U;
volatile int32_t t52 = 284;
int64_t x221 = INT64_MIN;
volatile int8_t x224 = INT8_MIN;
int64_t t55 = 305665LL;
int64_t t56 = 12901LL;
volatile uint8_t x234 = UINT8_MAX;
int8_t x236 = 32;
volatile uint8_t x247 = 12U;
static int8_t x250 = INT8_MIN;
static uint64_t x273 = 34LLU;
volatile int16_t x276 = -1;
volatile int64_t t69 = 398383LL;
static volatile uint32_t x282 = 12U;
static int32_t x302 = INT32_MIN;
uint8_t x304 = 1U;
uint8_t x313 = 2U;
static int64_t x314 = INT64_MIN;
static int32_t x319 = -1;
int8_t x320 = -7;
uint32_t x324 = 135307189U;
int64_t x326 = 824314617173281211LL;
volatile int8_t x328 = INT8_MIN;
static volatile uint64_t t81 = 13LLU;
volatile int32_t t83 = 5;
static uint64_t t86 = UINT64_MAX;
static volatile int64_t x351 = INT64_MIN;
int32_t x354 = INT32_MIN;
int16_t x358 = INT16_MAX;
uint32_t x364 = 210184801U;
int16_t x365 = INT16_MAX;
int16_t x366 = -114;
uint32_t x367 = UINT32_MAX;
uint16_t x378 = 5U;
int32_t x380 = INT32_MIN;
uint32_t t94 = 751883U;
int16_t x382 = 111;
int32_t x385 = -1;
static volatile uint8_t x387 = 2U;
volatile uint8_t x389 = 15U;
uint16_t x390 = UINT16_MAX;
int64_t t97 = -128862419490LL;
static int16_t x394 = INT16_MAX;
static int64_t x399 = INT64_MAX;


void f0(void) {
	int64_t x1 = -15668286LL;
	int32_t x2 = -1;
	volatile int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	int64_t t0 = -1LL;

	t0 = (x1|((x2&x3)&x4));

	if (t0 != -62LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x7 = 193U;
	static volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|((x6&x7)&x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 27U;
	uint64_t x10 = UINT64_MAX;
	int64_t x11 = INT64_MAX;
	uint64_t x12 = UINT64_MAX;

	t2 = (x9|((x10&x11)&x12));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = -9675;
	int64_t t3 = 3LL;

	t3 = (x13|((x14&x15)&x16));

	if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int32_t x18 = -1;
	int8_t x19 = -29;
	uint32_t t4 = 1816287393U;

	t4 = (x17|((x18&x19)&x20));

	if (t4 != 4294967171U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 812670373970887LL;
	int32_t x22 = INT32_MAX;
	uint16_t x24 = 71U;
	int64_t t5 = 3411608724LL;

	t5 = (x21|((x22&x23)&x24));

	if (t5 != 812670373970887LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	volatile int16_t x26 = INT16_MIN;
	static int8_t x27 = -12;
	uint8_t x28 = 0U;
	int64_t t6 = INT64_MIN;

	t6 = (x25|((x26&x27)&x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint32_t x30 = 542U;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 556U;
	uint32_t t7 = 66U;

	t7 = (x29|((x30&x31)&x32));

	if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	uint8_t x34 = 1U;
	volatile int16_t x36 = INT16_MIN;
	int64_t t8 = INT64_MAX;

	t8 = (x33|((x34&x35)&x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t t9 = 12LL;

	t9 = (x37|((x38&x39)&x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int64_t x42 = -1LL;
	uint32_t x43 = 31045165U;
	static volatile uint32_t x44 = UINT32_MAX;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x41|((x42&x43)&x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint32_t x46 = 1350348U;
	int64_t x47 = -48LL;
	int32_t x48 = -1;
	int64_t t11 = 963269071LL;

	t11 = (x45|((x46&x47)&x48));

	if (t11 != 1350399LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -13;
	uint64_t t12 = 428882LLU;

	t12 = (x49|((x50&x51)&x52));

	if (t12 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static uint64_t x55 = 679020491737LLU;
	static int16_t x56 = -2;
	uint64_t t13 = 62604369615726LLU;

	t13 = (x53|((x54&x55)&x56));

	if (t13 != 18446744071562068296LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 6U;
	volatile uint64_t x58 = 58LLU;
	volatile uint8_t x60 = 6U;
	uint64_t t14 = 534070036329415374LLU;

	t14 = (x57|((x58&x59)&x60));

	if (t14 != 6LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 13U;
	static volatile int8_t x63 = -1;
	int32_t x64 = INT32_MIN;
	uint32_t t15 = 1149U;

	t15 = (x61|((x62&x63)&x64));

	if (t15 != 2147483661U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int8_t x67 = -49;
	int16_t x68 = INT16_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = (x65|((x66&x67)&x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	static int8_t x71 = 0;
	uint32_t x72 = UINT32_MAX;

	t17 = (x69|((x70&x71)&x72));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MAX;
	static int8_t x75 = INT8_MAX;
	static uint16_t x76 = 4918U;
	volatile int64_t t18 = 88LL;

	t18 = (x73|((x74&x75)&x76));

	if (t18 != 65535LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int32_t x80 = -1;
	int64_t t19 = 9LL;

	t19 = (x77|((x78&x79)&x80));

	if (t19 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x83 = 1U;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 514953776832LL;

	t20 = (x81|((x82&x83)&x84));

	if (t20 != -9893177107591494LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -13;
	int32_t x86 = INT32_MAX;
	int16_t x88 = INT16_MAX;
	int32_t t21 = 19043742;

	t21 = (x85|((x86&x87)&x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 6916U;
	uint8_t x91 = UINT8_MAX;
	int16_t x92 = -4311;
	uint32_t t22 = 54U;

	t22 = (x89|((x90&x91)&x92));

	if (t22 != 6916U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -9;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 20488469091LL;

	t23 = (x93|((x94&x95)&x96));

	if (t23 != -9LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int32_t x99 = -1;
	volatile int8_t x100 = -2;
	int64_t t24 = -14614249136974LL;

	t24 = (x97|((x98&x99)&x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 37959LLU;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 15982513LLU;
	uint32_t x104 = 2456509U;
	volatile uint64_t t25 = 229933712857288LLU;

	t25 = (x101|((x102&x103)&x104));

	if (t25 != 2219975LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 4LLU;
	uint64_t x106 = 34401670403864LLU;
	int16_t x107 = INT16_MAX;
	static int16_t x108 = -3344;
	volatile uint64_t t26 = 1LLU;

	t26 = (x105|((x106&x107)&x108));

	if (t26 != 4628LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -78;
	volatile int16_t x110 = -199;
	volatile int16_t x111 = INT16_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t27 = -14748625095137LL;

	t27 = (x109|((x110&x111)&x112));

	if (t27 != -78LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -24302;
	volatile uint16_t x114 = 13U;
	static uint16_t x115 = UINT16_MAX;
	volatile int8_t x116 = 0;
	volatile int32_t t28 = 116;

	t28 = (x113|((x114&x115)&x116));

	if (t28 != -24302) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 4382558712028674LL;
	int64_t x118 = 2639LL;
	int16_t x119 = -20;
	static uint64_t x120 = UINT64_MAX;
	uint64_t t29 = 9LLU;

	t29 = (x117|((x118&x119)&x120));

	if (t29 != 4382558712028750LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 11892U;
	volatile int64_t x123 = INT64_MIN;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122&x123)&x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 1U;
	volatile int8_t x128 = 3;
	volatile int64_t t31 = 0LL;

	t31 = (x125|((x126&x127)&x128));

	if (t31 != -7LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 3320910U;
	uint8_t x132 = UINT8_MAX;
	volatile uint32_t t32 = 462U;

	t32 = (x129|((x130&x131)&x132));

	if (t32 != 4294967246U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 56586722LL;
	static uint16_t x135 = 0U;
	static int8_t x136 = INT8_MIN;

	t33 = (x133|((x134&x135)&x136));

	if (t33 != 56586722LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 2U;
	static uint64_t x138 = UINT64_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (x137|((x138&x139)&x140));

	if (t34 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 4U;
	static volatile int32_t x142 = INT32_MAX;
	static int64_t x143 = INT64_MIN;
	int32_t x144 = 3256978;
	int64_t t35 = 8LL;

	t35 = (x141|((x142&x143)&x144));

	if (t35 != 4LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 24243U;
	uint64_t x146 = 1516612715162024094LLU;
	volatile int8_t x147 = INT8_MIN;
	int16_t x148 = -1;
	volatile uint64_t t36 = 4250879025772252LLU;

	t36 = (x145|((x146&x147)&x148));

	if (t36 != 1516612715162042035LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -8;
	volatile int16_t x150 = INT16_MIN;
	int32_t x151 = 85;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -533;

	t37 = (x149|((x150&x151)&x152));

	if (t37 != -8) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	uint64_t x154 = 347194994LLU;
	uint64_t x156 = 3078681LLU;

	t38 = (x153|((x154&x155)&x156));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	int8_t x159 = -1;
	int8_t x160 = 26;
	static int64_t t39 = INT64_MAX;

	t39 = (x157|((x158&x159)&x160));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static uint64_t x162 = 6793677454266LLU;
	volatile uint64_t x163 = 865178723376455LLU;
	volatile uint64_t t40 = 250664319LLU;

	t40 = (x161|((x162&x163)&x164));

	if (t40 != 18446744071562074370LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 15;
	int16_t x166 = INT16_MIN;
	uint32_t x167 = 41U;
	uint32_t t41 = 1U;

	t41 = (x165|((x166&x167)&x168));

	if (t41 != 15U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 59114U;
	int8_t x170 = -1;
	static int32_t x171 = -1;
	static uint32_t x172 = UINT32_MAX;

	t42 = (x169|((x170&x171)&x172));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = 0;
	int64_t x175 = INT64_MAX;
	int16_t x176 = -2;
	volatile int64_t t43 = 204917156093LL;

	t43 = (x173|((x174&x175)&x176));

	if (t43 != 28630LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -120997;
	int32_t x178 = INT32_MIN;
	int64_t x179 = 3967241216389471LL;
	int32_t x180 = -341;
	static int64_t t44 = 45LL;

	t44 = (x177|((x178&x179)&x180));

	if (t44 != -120997LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int32_t x183 = 181574126;
	static uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = 106665LLU;

	t45 = (x181|((x182&x183)&x184));

	if (t45 != 255LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 6723U;
	uint8_t x186 = 12U;
	volatile int8_t x187 = -2;
	static volatile int64_t x188 = -1LL;
	static volatile int64_t t46 = 135871528474LL;

	t46 = (x185|((x186&x187)&x188));

	if (t46 != 6735LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	int8_t x190 = 0;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t47 = INT32_MIN;

	t47 = (x189|((x190&x191)&x192));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	volatile int32_t x194 = INT32_MAX;
	int16_t x195 = INT16_MIN;
	static volatile int16_t x196 = 13;

	t48 = (x193|((x194&x195)&x196));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	volatile uint32_t t49 = 78770144U;

	t49 = (x197|((x198&x199)&x200));

	if (t49 != 2354437936U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	int16_t x203 = -49;
	static int32_t x204 = INT32_MAX;
	uint32_t t50 = UINT32_MAX;

	t50 = (x201|((x202&x203)&x204));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 2931U;
	volatile int64_t x206 = 31292057991978LL;
	volatile int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	static int64_t t51 = -12861280309945337LL;

	t51 = (x205|((x206&x207)&x208));

	if (t51 != 2931LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int32_t x210 = -1;
	static int32_t x211 = 1;
	static int16_t x212 = -1;

	t52 = (x209|((x210&x211)&x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	uint8_t x214 = 1U;
	static volatile uint64_t x215 = 17616600604262007LLU;
	int64_t x216 = INT64_MIN;
	volatile uint64_t t53 = 1512768633496LLU;

	t53 = (x213|((x214&x215)&x216));

	if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 3U;
	int64_t x218 = -3LL;
	int16_t x219 = 1;
	int16_t x220 = INT16_MAX;
	int64_t t54 = 1939025459882LL;

	t54 = (x217|((x218&x219)&x220));

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;

	t55 = (x221|((x222&x223)&x224));

	if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	volatile int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	int64_t x228 = INT64_MIN;

	t56 = (x225|((x226&x227)&x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -8702899161LL;
	static volatile int64_t x230 = -1LL;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	volatile int64_t t57 = 130LL;

	t57 = (x229|((x230&x231)&x232));

	if (t57 != -112964569LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	static volatile int32_t x235 = INT32_MIN;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x233|((x234&x235)&x236));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -1760;
	int8_t x238 = -1;
	volatile int32_t x239 = 3098;
	int64_t x240 = INT64_MAX;
	volatile int64_t t59 = 100338027456LL;

	t59 = (x237|((x238&x239)&x240));

	if (t59 != -710LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = UINT32_MAX;
	static int64_t x242 = INT64_MAX;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = -12127;
	int64_t t60 = -337785111142130LL;

	t60 = (x241|((x242&x243)&x244));

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 666U;
	int8_t x248 = INT8_MIN;
	uint32_t t61 = 1U;

	t61 = (x245|((x246&x247)&x248));

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int32_t x251 = INT32_MAX;
	volatile int8_t x252 = 51;
	int32_t t62 = 1310562;

	t62 = (x249|((x250&x251)&x252));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -54726579715133LL;
	static int64_t x254 = 281049388814653LL;
	volatile int64_t x255 = INT64_MAX;
	int32_t x256 = 3;
	volatile int64_t t63 = -651999150LL;

	t63 = (x253|((x254&x255)&x256));

	if (t63 != -54726579715133LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 3538U;
	volatile int8_t x259 = INT8_MIN;
	uint64_t x260 = UINT64_MAX;
	static uint64_t t64 = 7187723631787365715LLU;

	t64 = (x257|((x258&x259)&x260));

	if (t64 != 18446744071562071424LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 275U;
	uint64_t x262 = 124814882826110LLU;
	int64_t x263 = INT64_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	static uint64_t t65 = 14121LLU;

	t65 = (x261|((x262&x263)&x264));

	if (t65 != 275LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 15U;
	uint8_t x266 = 40U;
	int64_t x267 = INT64_MIN;
	static int64_t x268 = INT64_MAX;
	static volatile int64_t t66 = 1600LL;

	t66 = (x265|((x266&x267)&x268));

	if (t66 != 15LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = 313;
	int64_t x270 = -15300193561158LL;
	static uint16_t x271 = 4093U;
	uint16_t x272 = 94U;
	volatile int64_t t67 = -89050LL;

	t67 = (x269|((x270&x271)&x272));

	if (t67 != 313LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MAX;
	volatile uint64_t t68 = 24506LLU;

	t68 = (x273|((x274&x275)&x276));

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	uint8_t x278 = 4U;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = -1LL;

	t69 = (x277|((x278&x279)&x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static volatile int32_t x283 = INT32_MIN;
	int8_t x284 = 1;
	static int64_t t70 = INT64_MIN;

	t70 = (x281|((x282&x283)&x284));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MIN;
	uint64_t t71 = 1543309LLU;

	t71 = (x285|((x286&x287)&x288));

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	int16_t x290 = -1;
	volatile int32_t x291 = INT32_MAX;
	volatile uint16_t x292 = 897U;
	volatile int32_t t72 = -232541;

	t72 = (x289|((x290&x291)&x292));

	if (t72 != -2147482751) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 6333597974778770LL;
	int32_t x294 = INT32_MAX;
	int16_t x295 = -1;
	int32_t x296 = -1;
	volatile int64_t t73 = 46281394659253LL;

	t73 = (x293|((x294&x295)&x296));

	if (t73 != 6333599292850175LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	volatile uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = INT64_MAX;
	static int64_t t74 = 1049700416586LL;

	t74 = (x297|((x298&x299)&x300));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = 203687LL;
	uint16_t x303 = UINT16_MAX;
	int64_t t75 = 5068573139386716LL;

	t75 = (x301|((x302&x303)&x304));

	if (t75 != 203687LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = 1767;
	volatile uint16_t x307 = 90U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -28264208;

	t76 = (x305|((x306&x307)&x308));

	if (t76 != -32702) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = 75309413510654179LL;

	t77 = (x309|((x310&x311)&x312));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x315 = -1;
	int8_t x316 = INT8_MIN;
	static volatile int64_t t78 = -3649803371LL;

	t78 = (x313|((x314&x315)&x316));

	if (t78 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 349547284141295735LLU;
	static volatile int32_t x318 = INT32_MIN;
	volatile uint64_t t79 = 2LLU;

	t79 = (x317|((x318&x319)&x320));

	if (t79 != 18446744072223836279LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MAX;
	int16_t x322 = -1;
	int8_t x323 = INT8_MIN;
	volatile uint32_t t80 = 61090342U;

	t80 = (x321|((x322&x323)&x324));

	if (t80 != 135307263U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 3LLU;
	int16_t x327 = 3;

	t81 = (x325|((x326&x327)&x328));

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -1LL;
	static uint32_t x330 = UINT32_MAX;
	uint16_t x331 = 5648U;
	int16_t x332 = INT16_MAX;
	int64_t t82 = -2078016840143LL;

	t82 = (x329|((x330&x331)&x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 51;
	int8_t x334 = 22;
	int32_t x335 = 475982;
	uint16_t x336 = 21018U;

	t83 = (x333|((x334&x335)&x336));

	if (t83 != 51) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	int64_t t84 = -11470939LL;

	t84 = (x337|((x338&x339)&x340));

	if (t84 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 245U;
	int32_t x342 = INT32_MAX;
	uint32_t x343 = 53088U;
	int64_t x344 = INT64_MIN;
	int64_t t85 = -3685237LL;

	t85 = (x341|((x342&x343)&x344));

	if (t85 != 245LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = -1LL;
	static int32_t x346 = INT32_MAX;
	static uint64_t x347 = 216555043LLU;
	volatile int64_t x348 = -1LL;

	t86 = (x345|((x346&x347)&x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	int32_t x352 = -1;
	int64_t t87 = -86944693518859LL;

	t87 = (x349|((x350&x351)&x352));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 50U;
	int32_t t88 = 29473107;

	t88 = (x353|((x354&x355)&x356));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = 7173U;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = 111U;
	uint64_t t89 = 7335021036LLU;

	t89 = (x357|((x358&x359)&x360));

	if (t89 != 7279LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	static volatile uint32_t t90 = 1U;

	t90 = (x361|((x362&x363)&x364));

	if (t90 != 4294967168U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x368 = UINT64_MAX;
	static uint64_t t91 = 2956209005882LLU;

	t91 = (x365|((x366&x367)&x368));

	if (t91 != 4294967295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = -3;
	int32_t x371 = 16278;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t92 = 47362936;

	t92 = (x369|((x370&x371)&x372));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MIN;
	volatile int32_t x375 = -1;
	int8_t x376 = -1;
	uint64_t t93 = UINT64_MAX;

	t93 = (x373|((x374&x375)&x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	volatile uint32_t x379 = 1U;

	t94 = (x377|((x378&x379)&x380));

	if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	static int8_t x383 = -1;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t95 = -7313120;

	t95 = (x381|((x382&x383)&x384));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x386 = UINT8_MAX;
	static int64_t x388 = 7LL;
	volatile int64_t t96 = 3072292706398711024LL;

	t96 = (x385|((x386&x387)&x388));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x391 = INT64_MIN;
	static int8_t x392 = 6;

	t97 = (x389|((x390&x391)&x392));

	if (t97 != 15LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -980394857LL;
	int16_t x395 = -1;
	int32_t x396 = 403391102;
	volatile int64_t t98 = 35LL;

	t98 = (x393|((x394&x395)&x396));

	if (t98 != -980394241LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 2U;
	uint32_t x400 = UINT32_MAX;
	volatile int64_t t99 = -1006724994LL;

	t99 = (x397|((x398&x399)&x400));

	if (t99 != 255LL) { NG(); } else { ; }
	
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

