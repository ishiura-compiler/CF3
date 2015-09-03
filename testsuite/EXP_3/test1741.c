#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 20U;
int16_t x9 = INT16_MIN;
int8_t x15 = -1;
int8_t x24 = -1;
volatile uint16_t x25 = 12U;
volatile uint8_t x27 = 1U;
int8_t x33 = INT8_MAX;
int64_t x36 = INT64_MIN;
uint8_t x38 = 78U;
int16_t x39 = -1;
volatile int64_t t10 = INT64_MIN;
static int32_t x52 = INT32_MIN;
int32_t t12 = 1;
volatile int32_t x55 = INT32_MIN;
int32_t t13 = -21935;
volatile int64_t x75 = INT64_MAX;
static int64_t t18 = 111246256038297035LL;
volatile uint64_t t19 = 96367202LLU;
int16_t x82 = -21;
static volatile uint32_t t20 = 1491061751U;
static int16_t x86 = -1;
volatile int32_t t21 = -27206;
uint32_t x91 = UINT32_MAX;
static volatile uint32_t t23 = 176417U;
int64_t t24 = -956236LL;
uint32_t x101 = 404614U;
uint8_t x102 = 1U;
uint64_t x126 = 383997139160LLU;
static volatile uint64_t x127 = 8427215551047762LLU;
static uint16_t x141 = 14U;
volatile uint32_t x145 = UINT32_MAX;
volatile int8_t x150 = INT8_MAX;
uint16_t x152 = 5556U;
int16_t x162 = -1;
int64_t x165 = -1LL;
int16_t x175 = INT16_MAX;
int32_t x178 = 35969;
volatile int64_t x189 = INT64_MIN;
static volatile int64_t t45 = 13609392LL;
static volatile uint8_t x202 = 40U;
uint16_t x203 = 1875U;
uint64_t x207 = 5LLU;
int16_t x211 = INT16_MAX;
uint32_t x212 = 56U;
uint8_t x213 = UINT8_MAX;
int32_t x215 = -1;
int32_t t51 = -1696746;
int16_t x219 = -1;
int8_t x221 = INT8_MAX;
int32_t x222 = INT32_MIN;
int32_t t53 = 875;
int64_t t54 = -50941530938588LL;
static int64_t x233 = -1LL;
uint8_t x240 = 18U;
uint64_t x242 = 4748700883175183738LLU;
int8_t x244 = INT8_MAX;
static uint64_t t57 = 140094LLU;
int16_t x246 = -1;
static volatile uint64_t x247 = UINT64_MAX;
static volatile int64_t x249 = INT64_MIN;
static uint16_t x252 = UINT16_MAX;
volatile int64_t t59 = 718856665LL;
int8_t x257 = INT8_MAX;
volatile int8_t x259 = INT8_MAX;
int64_t t63 = 31447590729LL;
int32_t x275 = INT32_MIN;
uint8_t x277 = 0U;
volatile int64_t x278 = 233019701850611LL;
int64_t x285 = INT64_MAX;
volatile int64_t t68 = -1458718195405658819LL;
volatile int16_t x289 = INT16_MIN;
uint64_t t69 = 75LLU;
volatile uint64_t x293 = 501864LLU;
volatile uint64_t t70 = 946LLU;
volatile int64_t x299 = INT64_MIN;
volatile int16_t x300 = 263;
static volatile int64_t t71 = 34259085253LL;
static uint32_t x302 = UINT32_MAX;
int32_t t75 = 871997330;
int64_t x319 = INT64_MIN;
uint8_t x320 = 8U;
volatile uint64_t x321 = UINT64_MAX;
uint64_t x328 = UINT64_MAX;
int64_t x330 = INT64_MIN;
int16_t x338 = INT16_MIN;
int16_t x340 = INT16_MAX;
volatile uint16_t x342 = UINT16_MAX;
int64_t t82 = 3236LL;
int32_t t83 = -326108088;
volatile int64_t x356 = INT64_MIN;
int32_t x358 = -342212;
uint32_t t87 = 33407612U;
static int8_t x375 = 1;
uint16_t x385 = UINT16_MAX;
uint32_t x400 = 9558115U;
uint32_t x402 = 423544U;
volatile int8_t x405 = INT8_MIN;
int64_t x409 = INT64_MIN;
int16_t x417 = INT16_MIN;
uint32_t x419 = 56U;
int16_t x421 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int64_t x3 = INT64_MIN;
	static volatile int64_t t0 = -2790607338699554414LL;

	t0 = ((x1/x2)|(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 9U;
	uint32_t x6 = 11110467U;
	static int16_t x7 = -53;
	int32_t x8 = -1;
	uint32_t t1 = 2058758579U;

	t1 = ((x5/x6)|(x7&x8));

	if (t1 != 4294967243U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -2943075314637LL;
	static volatile int8_t x11 = -1;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = -1056501278718218493LL;

	t2 = ((x9/x10)|(x11&x12));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -20;
	static volatile int8_t x14 = INT8_MAX;
	uint16_t x16 = 28U;
	int32_t t3 = 451;

	t3 = ((x13/x14)|(x15&x16));

	if (t3 != 28) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 12U;
	int8_t x18 = INT8_MIN;
	static int16_t x19 = 3;
	uint64_t x20 = 168304481959LLU;
	uint64_t t4 = 10020LLU;

	t4 = ((x17/x18)|(x19&x20));

	if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 34U;
	int8_t x22 = -1;
	int32_t x23 = 1959;
	volatile int32_t t5 = -9175;

	t5 = ((x21/x22)|(x23&x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 28U;
	volatile int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 0LL;

	t6 = ((x25/x26)|(x27&x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 3354U;
	int32_t x30 = -1;
	static int16_t x31 = INT16_MIN;
	uint32_t x32 = 99583U;
	volatile uint32_t t7 = 104468U;

	t7 = ((x29/x30)|(x31&x32));

	if (t7 != 98304U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	uint8_t x35 = 4U;
	int64_t t8 = -625LL;

	t8 = ((x33/x34)|(x35&x36));

	if (t8 != -127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int32_t x40 = 62;
	static volatile int32_t t9 = 1;

	t9 = ((x37/x38)|(x39&x40));

	if (t9 != -27531841) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	int64_t x42 = 1680770LL;
	int64_t x43 = INT64_MIN;
	int16_t x44 = -1;

	t10 = ((x41/x42)|(x43&x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = 53U;
	int8_t x47 = INT8_MIN;
	volatile int8_t x48 = -1;
	uint64_t t11 = 101929493194LLU;

	t11 = ((x45/x46)|(x47&x48));

	if (t11 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	volatile int16_t x50 = 5;
	static uint8_t x51 = UINT8_MAX;

	t12 = ((x49/x50)|(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -540;
	static int8_t x54 = -1;
	int16_t x56 = INT16_MIN;

	t13 = ((x53/x54)|(x55&x56));

	if (t13 != -2147483108) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 90539342803923749LLU;
	int32_t x58 = INT32_MIN;
	static int32_t x59 = -97;
	int8_t x60 = INT8_MIN;
	uint64_t t14 = 1094929404387922LLU;

	t14 = ((x57/x58)|(x59&x60));

	if (t14 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = -56;
	volatile int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = -400106;

	t15 = ((x61/x62)|(x63&x64));

	if (t15 != 38348031) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3197U;
	uint16_t x66 = 1U;
	int64_t x67 = INT64_MIN;
	static uint16_t x68 = 416U;
	int64_t t16 = 10095202921LL;

	t16 = ((x65/x66)|(x67&x68));

	if (t16 != 3197LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int64_t t17 = INT64_MIN;

	t17 = ((x69/x70)|(x71&x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 119U;
	int8_t x74 = INT8_MAX;
	volatile uint8_t x76 = 62U;

	t18 = ((x73/x74)|(x75&x76));

	if (t18 != 62LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 4930114U;
	static volatile uint64_t x78 = 5813LLU;
	uint16_t x79 = 10034U;
	static int32_t x80 = INT32_MAX;

	t19 = ((x77/x78)|(x79&x80));

	if (t19 != 10098LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -384381071;
	uint32_t x83 = 1688416U;
	int16_t x84 = 2580;

	t20 = ((x81/x82)|(x83&x84));

	if (t20 != 18303860U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	int16_t x87 = INT16_MIN;
	static uint8_t x88 = 18U;

	t21 = ((x85/x86)|(x87&x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 18148U;
	int64_t x90 = INT64_MAX;
	static uint64_t x92 = 788578190294894003LLU;
	uint64_t t22 = 23955096LLU;

	t22 = ((x89/x90)|(x91&x92));

	if (t22 != 2653275571LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MIN;
	volatile int32_t x95 = INT32_MIN;
	int32_t x96 = INT32_MIN;

	t23 = ((x93/x94)|(x95&x96));

	if (t23 != 2147483649U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;

	t24 = ((x97/x98)|(x99&x100));

	if (t24 != -32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = INT8_MAX;
	static uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 63579686U;

	t25 = ((x101/x102)|(x103&x104));

	if (t25 != 404735U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile uint64_t x106 = 406818540271528LLU;
	static volatile int64_t x107 = INT64_MIN;
	static volatile uint16_t x108 = 511U;
	uint64_t t26 = 99253077447LLU;

	t26 = ((x105/x106)|(x107&x108));

	if (t26 != 45343LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 0;
	static volatile uint32_t x114 = UINT32_MAX;
	static int32_t x115 = INT32_MIN;
	int64_t x116 = -93312380882189LL;
	volatile int64_t t27 = -14219504205774171LL;

	t27 = ((x113/x114)|(x115&x116));

	if (t27 != -93312459472896LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -191;
	int64_t x118 = -4110921514LL;
	static int32_t x119 = 56346;
	uint32_t x120 = 878U;
	volatile int64_t t28 = 1425742133LL;

	t28 = ((x117/x118)|(x119&x120));

	if (t28 != 10LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = UINT16_MAX;
	uint16_t x122 = 341U;
	static int8_t x123 = INT8_MIN;
	int8_t x124 = -10;
	int32_t t29 = -131111;

	t29 = ((x121/x122)|(x123&x124));

	if (t29 != -64) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t30 = 2983603887047LLU;

	t30 = ((x125/x126)|(x127&x128));

	if (t30 != 8427215551047680LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = 1;
	uint16_t x134 = UINT16_MAX;
	static volatile int64_t x135 = -1LL;
	int64_t x136 = INT64_MIN;
	volatile int64_t t31 = INT64_MIN;

	t31 = ((x133/x134)|(x135&x136));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 1;
	volatile int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MAX;
	int64_t t32 = 174088LL;

	t32 = ((x137/x138)|(x139&x140));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x142 = 62824360LLU;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 6U;
	uint64_t t33 = 68177661809604396LLU;

	t33 = ((x141/x142)|(x143&x144));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x146 = -1;
	int16_t x147 = INT16_MAX;
	int32_t x148 = INT32_MAX;
	volatile uint32_t t34 = 1656U;

	t34 = ((x145/x146)|(x147&x148));

	if (t34 != 32767U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int8_t x151 = INT8_MAX;
	int32_t t35 = -24044;

	t35 = ((x149/x150)|(x151&x152));

	if (t35 != -16909316) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = 0;
	int8_t x154 = -42;
	int32_t x155 = 266870679;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t36 = 849708473;

	t36 = ((x153/x154)|(x155&x156));

	if (t36 != 151) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	volatile uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MAX;
	int32_t x160 = -20891753;
	uint32_t t37 = 103932U;

	t37 = ((x157/x158)|(x159&x160));

	if (t37 != 14231U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	static int8_t x163 = INT8_MIN;
	static uint32_t x164 = 1U;
	int64_t t38 = 19516829973318LL;

	t38 = ((x161/x162)|(x163&x164));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x166 = -392839LL;
	int16_t x167 = INT16_MAX;
	int32_t x168 = 3450;
	volatile int64_t t39 = 5638419036951052LL;

	t39 = ((x165/x166)|(x167&x168));

	if (t39 != 3450LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 0U;
	int32_t x170 = 3;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = -1;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x169/x170)|(x171&x172));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	uint16_t x174 = 26U;
	int8_t x176 = -1;
	int32_t t41 = 58298;

	t41 = ((x173/x174)|(x175&x176));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = -35;
	static volatile uint16_t x179 = 13U;
	uint8_t x180 = 93U;
	volatile int32_t t42 = 1443703;

	t42 = ((x177/x178)|(x179&x180));

	if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = INT8_MIN;
	uint64_t x182 = 6761008LLU;
	static uint64_t x183 = 3440347180113976651LLU;
	static uint32_t x184 = UINT32_MAX;
	uint64_t t43 = 463LLU;

	t43 = ((x181/x182)|(x183&x184));

	if (t43 != 2728780094959LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 0U;
	volatile uint16_t x186 = 8186U;
	static int32_t x187 = -1;
	int8_t x188 = -1;
	int32_t t44 = -2;

	t44 = ((x185/x186)|(x187&x188));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x190 = INT16_MAX;
	volatile int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MIN;

	t45 = ((x189/x190)|(x191&x192));

	if (t45 != -262152LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 1LLU;
	uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 81143LLU;
	uint64_t x196 = 79970114651LLU;
	uint64_t t46 = 1690874780826316573LLU;

	t46 = ((x193/x194)|(x195&x196));

	if (t46 != 72787LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	volatile uint8_t x198 = 3U;
	volatile uint8_t x199 = 4U;
	static uint32_t x200 = UINT32_MAX;
	volatile uint32_t t47 = 18281U;

	t47 = ((x197/x198)|(x199&x200));

	if (t47 != 4294967254U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -5950172720481LL;
	int16_t x204 = INT16_MIN;
	static volatile int64_t t48 = 2977214LL;

	t48 = ((x201/x202)|(x203&x204));

	if (t48 != -148754318012LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int8_t x206 = INT8_MAX;
	volatile int8_t x208 = INT8_MAX;
	uint64_t t49 = 2885117027584441916LLU;

	t49 = ((x205/x206)|(x207&x208));

	if (t49 != 33818645LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x209 = UINT8_MAX;
	volatile int64_t x210 = INT64_MAX;
	volatile int64_t t50 = 1139LL;

	t50 = ((x209/x210)|(x211&x212));

	if (t50 != 56LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x214 = UINT16_MAX;
	int8_t x216 = -1;

	t51 = ((x213/x214)|(x215&x216));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -44669;
	volatile int16_t x218 = 1316;
	uint8_t x220 = 24U;
	static volatile int32_t t52 = 941626;

	t52 = ((x217/x218)|(x219&x220));

	if (t52 != -33) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x223 = 7085;
	int8_t x224 = INT8_MAX;

	t53 = ((x221/x222)|(x223&x224));

	if (t53 != 45) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MAX;
	volatile int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 0U;

	t54 = ((x225/x226)|(x227&x228));

	if (t54 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x234 = 19224041924944081LL;
	static int8_t x235 = 6;
	static uint64_t x236 = 392770722974009556LLU;
	uint64_t t55 = 4594LLU;

	t55 = ((x233/x234)|(x235&x236));

	if (t55 != 4LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 58U;
	static int32_t x238 = 93;
	volatile uint32_t x239 = UINT32_MAX;
	static uint32_t t56 = 416680U;

	t56 = ((x237/x238)|(x239&x240));

	if (t56 != 18U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = -1;
	uint16_t x243 = 173U;

	t57 = ((x241/x242)|(x243&x244));

	if (t57 != 47LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -5;
	static uint64_t x248 = 1600965467079224LLU;
	uint64_t t58 = 2667231825833341626LLU;

	t58 = ((x245/x246)|(x247&x248));

	if (t58 != 1600965467079229LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x250 = -81;
	volatile int32_t x251 = -1;

	t59 = ((x249/x250)|(x251&x252));

	if (t59 != 113868790578479103LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	uint16_t x254 = 451U;
	uint32_t x255 = 126653174U;
	int8_t x256 = INT8_MIN;
	static int64_t t60 = -43984LL;

	t60 = ((x253/x254)|(x255&x256));

	if (t60 != -20450935738222632LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x258 = 5278373028901LL;
	uint64_t x260 = UINT64_MAX;
	uint64_t t61 = 160440344LLU;

	t61 = ((x257/x258)|(x259&x260));

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = -50574;
	uint8_t x263 = UINT8_MAX;
	static int64_t x264 = -313279LL;
	volatile uint64_t t62 = 1458411596966052LLU;

	t62 = ((x261/x262)|(x263&x264));

	if (t62 != 65LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = -1LL;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MAX;

	t63 = ((x265/x266)|(x267&x268));

	if (t63 != -2147483521LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = UINT8_MAX;
	uint64_t x270 = 1238518734707055LLU;
	uint16_t x271 = 84U;
	int32_t x272 = INT32_MIN;
	volatile uint64_t t64 = 15LLU;

	t64 = ((x269/x270)|(x271&x272));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 1U;
	static int16_t x274 = -1;
	static int64_t x276 = 48801632605LL;
	volatile int64_t t65 = 34505719744880LL;

	t65 = ((x273/x274)|(x275&x276));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x279 = -1LL;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t66 = UINT64_MAX;

	t66 = ((x277/x278)|(x279&x280));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = 1820915;
	int16_t x282 = INT16_MIN;
	int16_t x283 = 738;
	volatile int32_t x284 = INT32_MIN;
	int32_t t67 = -8;

	t67 = ((x281/x282)|(x283&x284));

	if (t67 != -55) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x286 = -1;
	int8_t x287 = -5;
	volatile int8_t x288 = INT8_MIN;

	t68 = ((x285/x286)|(x287&x288));

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x290 = 63;
	uint64_t x291 = 297142244368928LLU;
	uint64_t x292 = UINT64_MAX;

	t69 = ((x289/x290)|(x291&x292));

	if (t69 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x294 = 1785837054U;
	int32_t x295 = -1;
	int32_t x296 = INT32_MIN;

	t70 = ((x293/x294)|(x295&x296));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = INT16_MIN;
	int32_t x298 = INT32_MAX;

	t71 = ((x297/x298)|(x299&x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x301 = -1LL;
	static volatile uint64_t x303 = 0LLU;
	int32_t x304 = INT32_MIN;
	static volatile uint64_t t72 = 241361LLU;

	t72 = ((x301/x302)|(x303&x304));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = 977497875002654LL;
	uint32_t x306 = 2044036885U;
	static volatile uint16_t x307 = 13U;
	int16_t x308 = INT16_MAX;
	volatile int64_t t73 = -86173249038957917LL;

	t73 = ((x305/x306)|(x307&x308));

	if (t73 != 478223LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -396;
	static int8_t x310 = -29;
	static int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;
	static int32_t t74 = 105678;

	t74 = ((x309/x310)|(x311&x312));

	if (t74 != 13) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MAX;
	uint16_t x314 = 88U;
	volatile int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MAX;

	t75 = ((x313/x314)|(x315&x316));

	if (t75 != 2147474711) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = 76;
	int32_t x318 = INT32_MIN;
	static int64_t t76 = -6252587LL;

	t76 = ((x317/x318)|(x319&x320));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	uint64_t t77 = 170284241663LLU;

	t77 = ((x321/x322)|(x323&x324));

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = 8755094578534005LLU;
	volatile uint64_t t78 = 0LLU;

	t78 = ((x325/x326)|(x327&x328));

	if (t78 != 8755094578599543LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -22412941464LL;
	int64_t x331 = INT64_MIN;
	volatile int32_t x332 = INT32_MAX;
	int64_t t79 = 27062935802LL;

	t79 = ((x329/x330)|(x331&x332));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MAX;
	int64_t t80 = 8019LL;

	t80 = ((x333/x334)|(x335&x336));

	if (t80 != 32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 980300644U;
	int16_t x339 = 25;
	uint32_t t81 = 203533332U;

	t81 = ((x337/x338)|(x339&x340));

	if (t81 != 25U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = INT64_MIN;
	int8_t x343 = -1;
	int16_t x344 = -149;

	t82 = ((x341/x342)|(x343&x344));

	if (t82 != -149LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x349 = -1;
	int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MAX;
	volatile int16_t x352 = -488;

	t83 = ((x349/x350)|(x351&x352));

	if (t83 != 2147483160) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 87;
	uint16_t x354 = 476U;
	static int64_t x355 = INT64_MIN;
	static volatile int64_t t84 = INT64_MIN;

	t84 = ((x353/x354)|(x355&x356));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = INT16_MIN;
	volatile int64_t x359 = INT64_MIN;
	volatile int16_t x360 = -1;
	volatile int64_t t85 = INT64_MIN;

	t85 = ((x357/x358)|(x359&x360));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x361 = 379510985436546LLU;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = 812545031741716894LL;
	volatile int8_t x364 = -1;
	static volatile uint64_t t86 = 6098475359379523210LLU;

	t86 = ((x361/x362)|(x363&x364));

	if (t86 != 812545031741716894LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 34274883U;
	int8_t x370 = 15;
	int16_t x371 = 492;
	int32_t x372 = 592;

	t87 = ((x369/x370)|(x371&x372));

	if (t87 != 2284992U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x374 = 496246U;
	int64_t x376 = -1LL;
	int64_t t88 = 1025657941616514LL;

	t88 = ((x373/x374)|(x375&x376));

	if (t88 != 8655LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = 187U;
	uint8_t x378 = 13U;
	uint8_t x379 = UINT8_MAX;
	static int16_t x380 = 0;
	volatile int32_t t89 = 118663503;

	t89 = ((x377/x378)|(x379&x380));

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x381 = INT64_MIN;
	static volatile int8_t x382 = INT8_MIN;
	uint64_t x383 = 392988280LLU;
	int32_t x384 = INT32_MIN;
	static uint64_t t90 = 11419290LLU;

	t90 = ((x381/x382)|(x383&x384));

	if (t90 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MIN;
	static uint16_t x388 = 0U;
	int32_t t91 = -567129225;

	t91 = ((x385/x386)|(x387&x388));

	if (t91 != 516) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = 144992LLU;
	static int64_t x394 = 7240LL;
	uint64_t x395 = 183611LLU;
	static int64_t x396 = -13LL;
	volatile uint64_t t92 = 1021755255935672831LLU;

	t92 = ((x393/x394)|(x395&x396));

	if (t92 != 183607LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x398 = 1;
	static int64_t x399 = -1LL;
	volatile int64_t t93 = -298LL;

	t93 = ((x397/x398)|(x399&x400));

	if (t93 != -29LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = 84774257723568LL;
	uint64_t x403 = 6900789246109594LLU;
	int64_t x404 = -97058277892LL;
	volatile uint64_t t94 = 43964172LLU;

	t94 = ((x401/x402)|(x403&x404));

	if (t94 != 6900711806614971LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x406 = 1U;
	int32_t x407 = -1;
	static int32_t x408 = INT32_MIN;
	int32_t t95 = -76;

	t95 = ((x405/x406)|(x407&x408));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x410 = 44532LL;
	volatile int8_t x411 = INT8_MIN;
	static volatile int16_t x412 = -349;
	volatile int64_t t96 = 32LL;

	t96 = ((x409/x410)|(x411&x412));

	if (t96 != -93LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x418 = INT16_MIN;
	uint32_t x420 = UINT32_MAX;
	uint32_t t97 = 51320U;

	t97 = ((x417/x418)|(x419&x420));

	if (t97 != 57U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x422 = 1753482472U;
	static int8_t x423 = 1;
	volatile uint64_t x424 = UINT64_MAX;
	uint64_t t98 = 33053357232662LLU;

	t98 = ((x421/x422)|(x423&x424));

	if (t98 != 3LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x425 = 620U;
	uint16_t x426 = 32511U;
	uint64_t x427 = UINT64_MAX;
	int32_t x428 = -1;
	uint64_t t99 = UINT64_MAX;

	t99 = ((x425/x426)|(x427&x428));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

