#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = 72853924044675301LLU;
volatile uint64_t t0 = 279057122344729LLU;
uint8_t x5 = 56U;
int32_t x6 = 238750;
static int8_t x7 = INT8_MIN;
int8_t x11 = INT8_MIN;
int64_t x16 = 87LL;
static volatile uint64_t t4 = 469770254760693LLU;
volatile int8_t x24 = 0;
int32_t t5 = 143;
volatile int32_t x37 = INT32_MAX;
static int8_t x38 = -6;
uint64_t t7 = 685654579LLU;
uint16_t x45 = UINT16_MAX;
uint8_t x47 = UINT8_MAX;
int32_t x48 = -1;
int64_t x51 = -1LL;
int8_t x62 = -1;
static volatile uint64_t t13 = 203494627031LLU;
int8_t x66 = INT8_MIN;
int16_t x68 = INT16_MAX;
uint64_t x69 = 62494901504789708LLU;
int16_t x70 = 2248;
volatile uint8_t x75 = UINT8_MAX;
int64_t t16 = 583977957256106LL;
int8_t x77 = INT8_MIN;
int32_t x79 = -1;
int8_t x80 = -1;
int64_t x82 = 9044171418747881LL;
volatile int8_t x83 = INT8_MIN;
uint8_t x84 = UINT8_MAX;
uint64_t x106 = UINT64_MAX;
volatile uint64_t t23 = 32100698LLU;
int16_t x115 = INT16_MAX;
int16_t x116 = -1;
static uint64_t x117 = UINT64_MAX;
int16_t x127 = -80;
int8_t x129 = INT8_MIN;
uint32_t x132 = 492066051U;
volatile int32_t t28 = -2222;
volatile uint64_t t29 = 101LLU;
int8_t x146 = INT8_MAX;
int8_t x153 = INT8_MAX;
static volatile int16_t x156 = -1;
int8_t x165 = 7;
static uint64_t t36 = 517054954261LLU;
volatile int64_t x171 = INT64_MIN;
volatile uint64_t x173 = 57830995263444LLU;
volatile uint32_t x184 = 28U;
volatile int8_t x188 = INT8_MAX;
uint8_t x192 = 1U;
static int16_t x200 = -1;
int64_t t44 = -32079249292653LL;
static uint64_t x202 = 833932142390LLU;
uint16_t x205 = UINT16_MAX;
uint64_t x210 = 90547828LLU;
int32_t x219 = INT32_MAX;
uint64_t t49 = 3LLU;
volatile int8_t x222 = INT8_MAX;
int64_t x232 = 4307897517LL;
static int32_t x239 = 23291559;
int8_t x256 = INT8_MAX;
volatile int32_t x257 = INT32_MIN;
int32_t x263 = INT32_MIN;
int64_t x268 = -325023LL;
volatile int64_t x274 = INT64_MIN;
uint64_t x279 = UINT64_MAX;
uint64_t t61 = 8708804028LLU;
static int8_t x289 = INT8_MIN;
int16_t x290 = INT16_MIN;
static int64_t x298 = -1LL;
int64_t x299 = -1LL;
int16_t x313 = -1;
static volatile int32_t x315 = -1;
int16_t x316 = -15567;
int16_t x317 = INT16_MIN;
int8_t x319 = INT8_MIN;
volatile uint32_t x328 = UINT32_MAX;
int16_t x332 = -1;
static volatile int16_t x333 = INT16_MAX;
static int64_t x344 = -1LL;
int8_t x349 = 57;
static int64_t x351 = 3002600930534128039LL;
uint32_t x352 = UINT32_MAX;
volatile uint32_t t80 = 1625U;
volatile uint32_t x361 = 0U;
int64_t x367 = 699LL;
volatile uint64_t t83 = 3080942632666904LLU;
volatile int32_t t84 = -4058931;
int32_t x377 = -757;
int64_t t85 = 3854417581154494LL;
volatile uint8_t x381 = 63U;
int8_t x385 = INT8_MIN;
uint8_t x387 = 23U;
volatile int16_t x388 = -1;
volatile int64_t x390 = 12127LL;
int32_t x392 = 58950631;
int16_t x395 = -3;
int16_t x399 = INT16_MIN;
static volatile uint32_t t90 = 2024858U;
static uint64_t x404 = 108620012964577LLU;
static volatile uint64_t t91 = 79217LLU;
volatile uint64_t x408 = 345848982LLU;
int16_t x423 = INT16_MIN;
int8_t x436 = -1;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint64_t x2 = UINT64_MAX;
	static int16_t x4 = INT16_MAX;

	t0 = ((x1%x2)*(x3&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x8 = 1LLU;
	volatile uint64_t t1 = 13113916126LLU;

	t1 = ((x5%x6)*(x7&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int32_t x10 = 98461196;
	static uint16_t x12 = UINT16_MAX;
	int32_t t2 = -58;

	t2 = ((x9%x10)*(x11&x12));

	if (t2 != -65408) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	volatile int64_t t3 = -129626347347LL;

	t3 = ((x13%x14)*(x15&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -590;
	volatile int32_t x18 = INT32_MIN;
	uint64_t x19 = 218186294LLU;
	int8_t x20 = -30;

	t4 = ((x17%x18)*(x19&x20));

	if (t4 != 18446743944979649956LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	volatile int16_t x22 = -1;
	int32_t x23 = -1;

	t5 = ((x21%x22)*(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 256U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 6689U;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = -1;

	t6 = ((x29%x30)*(x31&x32));

	if (t6 != 1712384) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x39 = UINT16_MAX;
	uint64_t x40 = 86LLU;

	t7 = ((x37%x38)*(x39&x40));

	if (t7 != 86LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -16;
	static int32_t x42 = INT32_MIN;
	uint16_t x43 = 13U;
	int64_t x44 = -1LL;
	volatile int64_t t8 = -7091LL;

	t8 = ((x41%x42)*(x43&x44));

	if (t8 != -208LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x46 = UINT64_MAX;
	volatile uint64_t t9 = 35504287782885459LLU;

	t9 = ((x45%x46)*(x47&x48));

	if (t9 != 16711425LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	volatile int64_t t10 = -2LL;

	t10 = ((x49%x50)*(x51&x52));

	if (t10 != 32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = 0;
	int32_t x54 = INT32_MIN;
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = 36;

	t11 = ((x53%x54)*(x55&x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 1030U;
	uint32_t x58 = 146U;
	static uint64_t x59 = 4LLU;
	volatile int64_t x60 = INT64_MIN;
	volatile uint64_t t12 = 88151056LLU;

	t12 = ((x57%x58)*(x59&x60));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;

	t13 = ((x61%x62)*(x63&x64));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = 500U;
	volatile int16_t x67 = 1316;
	static volatile uint32_t t14 = 7263103U;

	t14 = ((x65%x66)*(x67&x68));

	if (t14 != 658000U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x71 = INT32_MIN;
	static int16_t x72 = INT16_MAX;
	volatile uint64_t t15 = 10654222767692213LLU;

	t15 = ((x69%x70)*(x71&x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x73 = 13U;
	int64_t x74 = INT64_MIN;
	int8_t x76 = -1;

	t16 = ((x73%x74)*(x75&x76));

	if (t16 != 3315LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x78 = 1930725U;
	volatile uint32_t t17 = 14826U;

	t17 = ((x77%x78)*(x79&x80));

	if (t17 != 4293932528U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = -1LL;
	volatile int64_t t18 = 20LL;

	t18 = ((x81%x82)*(x83&x84));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	static uint64_t x86 = 118324532279261554LLU;
	uint64_t x87 = 1332LLU;
	int64_t x88 = INT64_MAX;
	uint64_t t19 = 767303335733377580LLU;

	t19 = ((x85%x86)*(x87&x88));

	if (t19 != 12652963288815451028LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 70523977LL;
	static volatile uint64_t x90 = 66932048LLU;
	int32_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	uint64_t t20 = 50LLU;

	t20 = ((x89%x90)*(x91&x92));

	if (t20 != 915941895LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = UINT32_MAX;
	static volatile uint16_t x95 = 498U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t21 = 114393410LL;

	t21 = ((x93%x94)*(x95&x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	int16_t x98 = 390;
	volatile uint32_t x99 = UINT32_MAX;
	volatile uint8_t x100 = 102U;
	static uint32_t t22 = 818855955U;

	t22 = ((x97%x98)*(x99&x100));

	if (t22 != 4294967194U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x107 = INT32_MAX;
	int32_t x108 = INT32_MIN;

	t23 = ((x105%x106)*(x107&x108));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 12;
	volatile int32_t x114 = -1;
	volatile int32_t t24 = -1;

	t24 = ((x113%x114)*(x115&x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = -20;
	int32_t x119 = -1;
	volatile int8_t x120 = INT8_MIN;
	volatile uint64_t t25 = 870LLU;

	t25 = ((x117%x118)*(x119&x120));

	if (t25 != 18446744073709549184LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	static int32_t x126 = 617;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t26 = 19494;

	t26 = ((x125%x126)*(x127&x128));

	if (t26 != 43520) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x130 = -787828469321736LL;
	static int8_t x131 = 0;
	volatile int64_t t27 = -2869045LL;

	t27 = ((x129%x130)*(x131&x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	int8_t x136 = INT8_MIN;

	t28 = ((x133%x134)*(x135&x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x137 = 14526;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	int16_t x140 = 1865;

	t29 = ((x137%x138)*(x139&x140));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MAX;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile int16_t x144 = -3;
	volatile uint64_t t30 = 1983LLU;

	t30 = ((x141%x142)*(x143&x144));

	if (t30 != 543313362691LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x145 = INT8_MAX;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = -1;
	static volatile uint64_t t31 = 8611336619263830LLU;

	t31 = ((x145%x146)*(x147&x148));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x149 = 2U;
	uint32_t x150 = 3810U;
	uint64_t x151 = UINT64_MAX;
	uint16_t x152 = 2847U;
	uint64_t t32 = 51LLU;

	t32 = ((x149%x150)*(x151&x152));

	if (t32 != 5694LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x154 = INT16_MIN;
	static int8_t x155 = 3;
	volatile int32_t t33 = -5517;

	t33 = ((x153%x154)*(x155&x156));

	if (t33 != 381) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = UINT64_MAX;
	uint64_t x158 = 647799780LLU;
	static int8_t x159 = INT8_MIN;
	static uint8_t x160 = UINT8_MAX;
	uint64_t t34 = 96807LLU;

	t34 = ((x157%x158)*(x159&x160));

	if (t34 != 8795598720LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x161 = INT16_MIN;
	volatile int8_t x162 = -1;
	int8_t x163 = -1;
	static int32_t x164 = INT32_MAX;
	volatile int32_t t35 = -3732177;

	t35 = ((x161%x162)*(x163&x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = 15855097517LL;
	uint16_t x167 = 30U;
	uint64_t x168 = 1821627410LLU;

	t36 = ((x165%x166)*(x167&x168));

	if (t36 != 126LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -57726615119LL;
	static int16_t x170 = -1;
	uint32_t x172 = UINT32_MAX;
	static volatile int64_t t37 = 1226LL;

	t37 = ((x169%x170)*(x171&x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x174 = INT64_MIN;
	static volatile int16_t x175 = -15959;
	int64_t x176 = -12425581LL;
	uint64_t t38 = 85860LLU;

	t38 = ((x173%x174)*(x175&x176));

	if (t38 != 275682038295226836LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	volatile uint32_t x178 = 1386468U;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MAX;
	uint32_t t39 = 232364134U;

	t39 = ((x177%x178)*(x179&x180));

	if (t39 != 757604992U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x181 = INT64_MAX;
	static uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 37U;
	int64_t t40 = -4503LL;

	t40 = ((x181%x182)*(x183&x184));

	if (t40 != 508LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = 1;
	static int8_t x186 = INT8_MIN;
	int64_t x187 = -1LL;
	int64_t t41 = 297714681244273LL;

	t41 = ((x185%x186)*(x187&x188));

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -1;
	int32_t t42 = -41;

	t42 = ((x189%x190)*(x191&x192));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x193 = INT8_MIN;
	volatile int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 5U;
	static volatile int64_t t43 = -442461831273465218LL;

	t43 = ((x193%x194)*(x195&x196));

	if (t43 != -640LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x197 = INT64_MIN;
	int64_t x198 = -59LL;
	static uint8_t x199 = UINT8_MAX;

	t44 = ((x197%x198)*(x199&x200));

	if (t44 != -8160LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = INT16_MIN;
	uint8_t x203 = 14U;
	int64_t x204 = 482960854819LL;
	volatile uint64_t t45 = 1964LLU;

	t45 = ((x201%x202)*(x203&x204));

	if (t45 != 1598821336036LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x206 = INT16_MIN;
	int64_t x207 = -5828752308LL;
	int8_t x208 = INT8_MIN;
	volatile int64_t t46 = 483502641LL;

	t46 = ((x205%x206)*(x207&x208));

	if (t46 != -190990729366528LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x211 = 9240859192385LLU;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t47 = 43LLU;

	t47 = ((x209%x210)*(x211&x212));

	if (t47 != 5838126840LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x213 = 25383U;
	int16_t x214 = INT16_MAX;
	volatile int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MAX;
	volatile int32_t t48 = -29;

	t48 = ((x213%x214)*(x215&x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -2456;
	volatile uint64_t x218 = 24474LLU;
	uint64_t x220 = 2195318854LLU;

	t49 = ((x217%x218)*(x219&x220));

	if (t49 != 942353558200LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 652639823U;
	uint16_t x223 = 10U;
	int64_t x224 = INT64_MIN;
	int64_t t50 = 46630LL;

	t50 = ((x221%x222)*(x223&x224));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	int8_t x226 = -3;
	volatile int64_t x227 = -1LL;
	volatile int8_t x228 = INT8_MAX;
	int64_t t51 = -3LL;

	t51 = ((x225%x226)*(x227&x228));

	if (t51 != -127LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	int16_t x230 = -248;
	volatile uint64_t x231 = UINT64_MAX;
	volatile uint64_t t52 = 84474LLU;

	t52 = ((x229%x230)*(x231&x232));

	if (t52 != 18446744069401654099LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 1;
	int8_t x238 = 21;
	int8_t x240 = -1;
	int32_t t53 = -306001675;

	t53 = ((x237%x238)*(x239&x240));

	if (t53 != 23291559) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MIN;
	static volatile int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t54 = 60877783;

	t54 = ((x245%x246)*(x247&x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 7142U;
	int64_t x250 = 43LL;
	int32_t x251 = INT32_MAX;
	static int64_t x252 = 45LL;
	int64_t t55 = -14LL;

	t55 = ((x249%x250)*(x251&x252));

	if (t55 != 180LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MAX;
	static int64_t x254 = 199LL;
	static int64_t x255 = 278658659LL;
	int64_t t56 = -2818277LL;

	t56 = ((x253%x254)*(x255&x256));

	if (t56 != 2178LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = -1LL;
	static int16_t x259 = -102;
	volatile int8_t x260 = -1;
	static int64_t t57 = -4974LL;

	t57 = ((x257%x258)*(x259&x260));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -1LL;
	volatile uint32_t x262 = 3641433U;
	uint16_t x264 = 8U;
	volatile int64_t t58 = 9155185932LL;

	t58 = ((x261%x262)*(x263&x264));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = INT32_MAX;
	uint32_t x266 = UINT32_MAX;
	static int8_t x267 = INT8_MIN;
	volatile int64_t t59 = -116359LL;

	t59 = ((x265%x266)*(x267&x268));

	if (t59 != -698189883312640LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -1381;
	int8_t x275 = 1;
	static uint32_t x276 = 0U;
	int64_t t60 = -2LL;

	t60 = ((x273%x274)*(x275&x276));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MAX;
	static int16_t x278 = INT16_MIN;
	uint64_t x280 = UINT64_MAX;

	t61 = ((x277%x278)*(x279&x280));

	if (t61 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = -1952;
	uint8_t x282 = 44U;
	uint32_t x283 = 0U;
	volatile uint32_t x284 = 22U;
	volatile uint32_t t62 = 1447843U;

	t62 = ((x281%x282)*(x283&x284));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x285 = UINT32_MAX;
	int32_t x286 = 53442770;
	uint16_t x287 = UINT16_MAX;
	volatile uint32_t x288 = 4U;
	uint32_t t63 = 37918354U;

	t63 = ((x285%x286)*(x287&x288));

	if (t63 != 78182780U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x291 = INT32_MIN;
	volatile int64_t x292 = 378925921LL;
	volatile int64_t t64 = -17593751405654619LL;

	t64 = ((x289%x290)*(x291&x292));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MAX;
	static int64_t x296 = -115LL;
	int64_t t65 = 42760638672193LL;

	t65 = ((x293%x294)*(x295&x296));

	if (t65 != -2147483533LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -1;
	volatile int16_t x300 = -1;
	int64_t t66 = -1LL;

	t66 = ((x297%x298)*(x299&x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = UINT8_MAX;
	static uint64_t x302 = 63LLU;
	int32_t x303 = 1;
	static volatile int8_t x304 = INT8_MAX;
	uint64_t t67 = 22LLU;

	t67 = ((x301%x302)*(x303&x304));

	if (t67 != 3LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 85U;
	int16_t x306 = INT16_MAX;
	static int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t68 = 70840;

	t68 = ((x305%x306)*(x307&x308));

	if (t68 != 10880) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	int64_t x311 = 483608014996LL;
	int32_t x312 = INT32_MIN;
	volatile int64_t t69 = -4LL;

	t69 = ((x309%x310)*(x311&x312));

	if (t69 != -483183820800LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = -15;
	int32_t t70 = 243106714;

	t70 = ((x313%x314)*(x315&x316));

	if (t70 != 15567) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x318 = UINT8_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t71 = 12798339986182LLU;

	t71 = ((x317%x318)*(x319&x320));

	if (t71 != 16384LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x321 = 12055332LLU;
	int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = 74474931359LLU;
	static uint8_t x324 = 0U;
	uint64_t t72 = 66351LLU;

	t72 = ((x321%x322)*(x323&x324));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MAX;
	int64_t x326 = -1LL;
	int16_t x327 = INT16_MAX;
	volatile int64_t t73 = 51851568230765434LL;

	t73 = ((x325%x326)*(x327&x328));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MIN;
	volatile int32_t x331 = INT32_MIN;
	volatile int64_t t74 = -4087387310LL;

	t74 = ((x329%x330)*(x331&x332));

	if (t74 != -547608330240LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x334 = INT16_MAX;
	int16_t x335 = -1;
	volatile int8_t x336 = 26;
	volatile int32_t t75 = 3;

	t75 = ((x333%x334)*(x335&x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = -1;
	uint64_t x338 = 63511907LLU;
	static int16_t x339 = -12;
	int16_t x340 = 15;
	uint64_t t76 = 1059397870091166LLU;

	t76 = ((x337%x338)*(x339&x340));

	if (t76 != 63034672LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = -1;
	int64_t x343 = INT64_MAX;
	volatile int64_t t77 = 69376LL;

	t77 = ((x341%x342)*(x343&x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x345 = UINT32_MAX;
	volatile uint64_t x346 = 108546152LLU;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t78 = 4565158685250662116LLU;

	t78 = ((x345%x346)*(x347&x348));

	if (t78 != 18446744065816128640LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x350 = -1;
	static volatile int64_t t79 = -1931297949LL;

	t79 = ((x349%x350)*(x351&x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x357 = UINT32_MAX;
	uint8_t x358 = 4U;
	volatile int32_t x359 = 15581;
	static uint16_t x360 = UINT16_MAX;

	t80 = ((x357%x358)*(x359&x360));

	if (t80 != 46743U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x362 = UINT32_MAX;
	volatile int16_t x363 = 8;
	static uint32_t x364 = 9768837U;
	uint32_t t81 = 457311783U;

	t81 = ((x361%x362)*(x363&x364));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x366 = 600876066212LLU;
	static int16_t x368 = -608;
	uint64_t t82 = 798863825390722LLU;

	t82 = ((x365%x366)*(x367&x368));

	if (t82 != 20941586963200LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = -1;
	uint32_t x370 = 1870650U;
	volatile uint8_t x371 = 66U;
	static uint64_t x372 = UINT64_MAX;

	t83 = ((x369%x370)*(x371&x372));

	if (t83 != 120485970LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MAX;
	int32_t x374 = INT32_MAX;
	volatile int16_t x375 = INT16_MAX;
	int8_t x376 = -1;

	t84 = ((x373%x374)*(x375&x376));

	if (t84 != 4161409) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x378 = -1LL;
	static volatile uint16_t x379 = 11U;
	static int8_t x380 = -1;

	t85 = ((x377%x378)*(x379&x380));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x382 = 383352705238767LL;
	static int64_t x383 = -1LL;
	static volatile uint32_t x384 = 106832U;
	int64_t t86 = 6LL;

	t86 = ((x381%x382)*(x383&x384));

	if (t86 != 6730416LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x386 = 14U;
	int32_t t87 = 116;

	t87 = ((x385%x386)*(x387&x388));

	if (t87 != -46) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MIN;
	volatile int8_t x391 = 62;
	volatile int64_t t88 = -102826183749347LL;

	t88 = ((x389%x390)*(x391&x392));

	if (t88 != -323532LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x393 = INT8_MAX;
	uint64_t x394 = UINT64_MAX;
	volatile uint64_t x396 = 8396411970862321001LLU;
	volatile uint64_t t89 = 3LLU;

	t89 = ((x393%x394)*(x395&x396));

	if (t89 != 14879908098070325015LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x397 = 14U;
	volatile int8_t x398 = INT8_MIN;
	uint32_t x400 = 74672U;

	t90 = ((x397%x398)*(x399&x400));

	if (t90 != 917504U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x401 = INT64_MIN;
	static int32_t x402 = INT32_MIN;
	int32_t x403 = 189008;

	t91 = ((x401%x402)*(x403&x404));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x405 = 7533;
	int64_t x406 = -227725502453LL;
	uint8_t x407 = 109U;
	volatile uint64_t t92 = 7977818608830494LLU;

	t92 = ((x405%x406)*(x407&x408));

	if (t92 != 30132LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	int8_t x411 = -1;
	int64_t x412 = INT64_MAX;
	volatile int64_t t93 = 28069689041970759LL;

	t93 = ((x409%x410)*(x411&x412));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	uint16_t x415 = 1U;
	int8_t x416 = INT8_MIN;
	uint64_t t94 = 493229595021989119LLU;

	t94 = ((x413%x414)*(x415&x416));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = -14422;
	int64_t x420 = INT64_MAX;
	volatile uint64_t t95 = 43106183LLU;

	t95 = ((x417%x418)*(x419&x420));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x421 = -1080;
	uint32_t x422 = UINT32_MAX;
	volatile int8_t x424 = INT8_MAX;
	volatile uint32_t t96 = 6480791U;

	t96 = ((x421%x422)*(x423&x424));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x425 = 0U;
	static volatile uint64_t x426 = UINT64_MAX;
	static int64_t x427 = INT64_MIN;
	uint16_t x428 = UINT16_MAX;
	uint64_t t97 = 1120299843743772884LLU;

	t97 = ((x425%x426)*(x427&x428));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = -1297;
	int64_t x430 = 167181481LL;
	static uint64_t x431 = 183732842LLU;
	volatile uint8_t x432 = 7U;
	volatile uint64_t t98 = 7337LLU;

	t98 = ((x429%x430)*(x431&x432));

	if (t98 != 18446744073709549022LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MIN;
	int64_t x435 = INT64_MIN;
	volatile int64_t t99 = -2251275619430320408LL;

	t99 = ((x433%x434)*(x435&x436));

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

