#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
uint16_t x7 = 1U;
static int64_t x25 = -280239317676631LL;
int64_t x28 = -1630LL;
static volatile int64_t t4 = 18831487245626792LL;
int16_t x31 = 1;
static volatile uint16_t x36 = 8905U;
int64_t x37 = 106842522284435LL;
int32_t x42 = INT32_MAX;
static uint32_t t8 = UINT32_MAX;
int16_t x45 = 33;
int64_t t12 = 38361896LL;
int64_t x66 = INT64_MIN;
int32_t x67 = INT32_MAX;
int32_t x71 = -1;
volatile int32_t t16 = 1713;
static volatile uint64_t t18 = UINT64_MAX;
static uint64_t x91 = UINT64_MAX;
volatile int16_t x102 = INT16_MIN;
int64_t x104 = INT64_MIN;
volatile uint8_t x111 = UINT8_MAX;
int64_t x116 = INT64_MAX;
volatile int64_t t26 = -32086421LL;
static int8_t x119 = INT8_MAX;
uint16_t x122 = UINT16_MAX;
int32_t x127 = -2390;
uint32_t x128 = 16682U;
int64_t x135 = INT64_MIN;
volatile int8_t x137 = INT8_MIN;
int16_t x145 = -10;
int32_t t34 = -162263684;
volatile int64_t t35 = -639666255LL;
static uint8_t x157 = 6U;
static int16_t x159 = -1;
uint16_t x160 = 981U;
volatile int16_t x164 = 25;
volatile int64_t x165 = INT64_MIN;
uint32_t x167 = 181U;
int32_t x173 = INT32_MAX;
static int16_t x176 = INT16_MIN;
int32_t x179 = INT32_MAX;
static int16_t x183 = INT16_MIN;
int64_t t42 = -438911113632380430LL;
uint16_t x185 = UINT16_MAX;
uint8_t x186 = 49U;
int32_t x195 = -1236;
uint64_t x206 = UINT64_MAX;
int32_t x215 = INT32_MAX;
int16_t x223 = INT16_MIN;
int64_t x224 = INT64_MIN;
int64_t x228 = INT64_MIN;
uint8_t x233 = 0U;
volatile uint16_t x235 = 1U;
int64_t x239 = INT64_MIN;
static int64_t x241 = 274929679781LL;
static int8_t x242 = 7;
int32_t x243 = INT32_MAX;
volatile int64_t x248 = INT64_MIN;
int8_t x249 = INT8_MAX;
int8_t x250 = 1;
int32_t x252 = INT32_MAX;
volatile uint64_t x255 = 9692217834978627LLU;
uint8_t x261 = 14U;
int64_t x267 = 7LL;
uint16_t x268 = 4U;
static volatile uint32_t x288 = 216U;
volatile int64_t t68 = -1LL;
int8_t x295 = INT8_MAX;
volatile int16_t x296 = 1;
uint64_t t69 = 1LLU;
int8_t x297 = INT8_MAX;
static int8_t x298 = INT8_MIN;
uint64_t t70 = 1LLU;
int64_t t71 = -109591688007560LL;
uint64_t t72 = 7LLU;
uint64_t x311 = 125760LLU;
int64_t t74 = 42386866LL;
int16_t x318 = 6;
uint32_t x319 = 1U;
volatile uint32_t t75 = UINT32_MAX;
uint8_t x321 = 0U;
static int64_t x323 = INT64_MAX;
static uint8_t x329 = 14U;
uint64_t x332 = 76031591836989LLU;
uint16_t x333 = UINT16_MAX;
uint64_t x339 = UINT64_MAX;
uint16_t x340 = UINT16_MAX;
volatile uint8_t x345 = UINT8_MAX;
int32_t t82 = -352547;
volatile int32_t x350 = INT32_MIN;
static volatile int8_t x351 = INT8_MIN;
int16_t x352 = -1;
uint64_t t84 = 3LLU;
uint16_t x358 = 2U;
int16_t x360 = -4931;
int32_t x361 = -2423220;
int8_t x368 = INT8_MIN;
volatile int64_t x369 = INT64_MIN;
volatile uint64_t t88 = UINT64_MAX;
int64_t x380 = INT64_MIN;
int16_t x381 = -1;
volatile int32_t x385 = INT32_MIN;
int64_t x392 = INT64_MIN;
static int8_t x394 = INT8_MIN;
volatile int32_t t95 = 1968;
volatile uint16_t x401 = 182U;
int32_t x415 = -1;


void f0(void) {
	int8_t x1 = 51;
	static uint16_t x2 = 102U;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -4100599;

	t0 = ((x1%x2)|(x3|x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -27;
	static uint16_t x8 = 94U;
	static volatile int64_t t1 = 189785182LL;

	t1 = ((x5%x6)|(x7|x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static int64_t x10 = INT64_MIN;
	int16_t x11 = -1;
	uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x9%x10)|(x11|x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = 71395U;
	uint32_t x24 = 1554426U;
	uint32_t t3 = UINT32_MAX;

	t3 = ((x21%x22)|(x23|x24));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x26 = INT32_MAX;
	uint8_t x27 = 1U;

	t4 = ((x25%x26)|(x27|x28));

	if (t4 != -21LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	int32_t x32 = 4839;
	volatile uint64_t t5 = 423512LLU;

	t5 = ((x29%x30)|(x31|x32));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	uint16_t x35 = 31U;
	volatile uint32_t t6 = 0U;

	t6 = ((x33%x34)|(x35|x36));

	if (t6 != 2147492575U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = INT32_MIN;
	volatile uint16_t x39 = 37U;
	static int8_t x40 = INT8_MIN;
	volatile int64_t t7 = -10LL;

	t7 = ((x37%x38)|(x39|x40));

	if (t7 != -73LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 414U;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;

	t8 = ((x41%x42)|(x43|x44));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x46 = 12680;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = 130209444930LLU;
	static uint64_t t9 = 1442055940156LLU;

	t9 = ((x45%x46)|(x47|x48));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 6U;
	uint64_t x50 = UINT64_MAX;
	static int32_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	volatile uint64_t t10 = 7079605892LLU;

	t10 = ((x49%x50)|(x51|x52));

	if (t10 != 4294967295LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	uint16_t x54 = 66U;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = 0U;
	volatile int32_t t11 = 994;

	t11 = ((x53%x54)|(x55|x56));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 327171101772180265LL;
	int32_t x58 = 219953;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;

	t12 = ((x57%x58)|(x59|x60));

	if (t12 != -17573LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = 7367;
	static int32_t x63 = INT32_MIN;
	int16_t x64 = 57;
	static uint32_t t13 = 1U;

	t13 = ((x61%x62)|(x63|x64));

	if (t13 != 2147489983U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 3;
	volatile int32_t x68 = -187547134;
	static int64_t t14 = -348903600266LL;

	t14 = ((x65%x66)|(x67|x68));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 69689U;
	int32_t x70 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t15 = 27868863LL;

	t15 = ((x69%x70)|(x71|x72));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -6;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	uint8_t x76 = 86U;

	t16 = ((x73%x74)|(x75|x76));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x77 = UINT64_MAX;
	static uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x77%x78)|(x79|x80));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 34010446230216LLU;
	int16_t x82 = 12248;
	volatile int8_t x83 = -3;
	static uint8_t x84 = 2U;

	t18 = ((x81%x82)|(x83|x84));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 22U;
	int64_t x86 = INT64_MIN;
	uint8_t x87 = 2U;
	static uint64_t x88 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x85%x86)|(x87|x88));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 136U;
	static int64_t x90 = 4195260182181LL;
	int32_t x92 = INT32_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = ((x89%x90)|(x91|x92));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = -5771;
	static uint64_t x96 = 47158LLU;
	static uint64_t t21 = 127195727LLU;

	t21 = ((x93%x94)|(x95|x96));

	if (t21 != 18446744073709549943LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 39U;
	static volatile uint32_t x98 = 8U;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MIN;
	volatile int64_t t22 = -21269169405061098LL;

	t22 = ((x97%x98)|(x99|x100));

	if (t22 != -121LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	int8_t x103 = -7;
	volatile int64_t t23 = -519599LL;

	t23 = ((x101%x102)|(x103|x104));

	if (t23 != -7LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	int16_t x107 = 125;
	int16_t x108 = -1;
	static volatile int32_t t24 = -71;

	t24 = ((x105%x106)|(x107|x108));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	volatile int32_t t25 = 1785407;

	t25 = ((x109%x110)|(x111|x112));

	if (t25 != -32513) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MIN;
	uint8_t x114 = 54U;
	int8_t x115 = INT8_MIN;

	t26 = ((x113%x114)|(x115|x116));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x117 = -1;
	uint16_t x118 = 341U;
	int64_t x120 = 2003693LL;
	int64_t t27 = -140184361248398522LL;

	t27 = ((x117%x118)|(x119|x120));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x123 = 8449205LLU;
	volatile int32_t x124 = 202;
	volatile uint64_t t28 = 3765467LLU;

	t28 = ((x121%x122)|(x123|x124));

	if (t28 != 18446744073709546751LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	int64_t x126 = -1LL;
	volatile int64_t t29 = 3LL;

	t29 = ((x125%x126)|(x127|x128));

	if (t29 != 4294965162LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 5677LLU;
	int64_t x130 = -1LL;
	uint64_t x131 = 984618166LLU;
	static volatile int32_t x132 = -3337915;
	static volatile uint64_t t30 = 1022865180107LLU;

	t30 = ((x129%x130)|(x131|x132));

	if (t30 != 18446744073709361151LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 30007392LLU;
	int32_t x134 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	uint64_t t31 = 5404032837LLU;

	t31 = ((x133%x134)|(x135|x136));

	if (t31 != 18446744073709543520LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x138 = INT16_MAX;
	volatile int32_t x139 = -33;
	uint8_t x140 = UINT8_MAX;
	static volatile int32_t t32 = -4093;

	t32 = ((x137%x138)|(x139|x140));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 9U;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 2706290318LLU;
	uint8_t x144 = 56U;
	uint64_t t33 = 30676383948733540LLU;

	t33 = ((x141%x142)|(x143|x144));

	if (t33 != 2706290367LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x146 = INT8_MIN;
	static int16_t x147 = -1;
	int32_t x148 = -58987565;

	t34 = ((x145%x146)|(x147|x148));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 40;
	int16_t x151 = -1;
	volatile int64_t x152 = -1LL;

	t35 = ((x149%x150)|(x151|x152));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = -1;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	static volatile uint32_t t36 = 14937U;

	t36 = ((x153%x154)|(x155|x156));

	if (t36 != 4294934528U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = INT64_MIN;
	volatile int64_t t37 = -9638LL;

	t37 = ((x157%x158)|(x159|x160));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = -60444628829LL;
	int16_t x163 = 1;
	int64_t t38 = -3529LL;

	t38 = ((x161%x162)|(x163|x164));

	if (t38 != -36341928513LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x166 = -118347568406053LL;
	static int32_t x168 = -1;
	volatile int64_t t39 = 115LL;

	t39 = ((x165%x166)|(x167|x168));

	if (t39 != -72636486909953LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = INT64_MIN;
	uint16_t x175 = 29U;
	volatile int64_t t40 = 97243294222068373LL;

	t40 = ((x173%x174)|(x175|x176));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 3493824262150364626LLU;
	int32_t x178 = -1;
	uint16_t x180 = 1415U;
	uint64_t t41 = 204003019LLU;

	t41 = ((x177%x178)|(x179|x180));

	if (t41 != 3493824263138312191LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	volatile int64_t x182 = -144609LL;
	volatile int8_t x184 = INT8_MAX;

	t42 = ((x181%x182)|(x183|x184));

	if (t42 != -28417LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x187 = 16;
	int16_t x188 = 293;
	int32_t t43 = 6738;

	t43 = ((x185%x186)|(x187|x188));

	if (t43 != 311) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x189 = 48U;
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int64_t x192 = 60748656227779874LL;
	volatile int64_t t44 = 1878802LL;

	t44 = ((x189%x190)|(x191|x192));

	if (t44 != -78LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MIN;
	static uint32_t x194 = UINT32_MAX;
	volatile int64_t x196 = INT64_MAX;
	int64_t t45 = -1LL;

	t45 = ((x193%x194)|(x195|x196));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x197 = 5U;
	static int32_t x198 = 4107495;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	static int32_t t46 = 2899393;

	t46 = ((x197%x198)|(x199|x200));

	if (t46 != -32513) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 128834;
	volatile int64_t x202 = -1278543LL;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = INT32_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x201%x202)|(x203|x204));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = INT32_MIN;
	uint16_t x207 = 607U;
	static uint64_t x208 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x205%x206)|(x207|x208));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MAX;
	volatile int8_t x210 = INT8_MAX;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;
	static uint64_t t49 = UINT64_MAX;

	t49 = ((x209%x210)|(x211|x212));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	volatile int32_t x214 = INT32_MIN;
	static volatile int64_t x216 = INT64_MIN;
	int64_t t50 = -221LL;

	t50 = ((x213%x214)|(x215|x216));

	if (t50 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MIN;
	int64_t x219 = -1LL;
	int64_t x220 = 1LL;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x217%x218)|(x219|x220));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t x222 = UINT64_MAX;
	volatile uint64_t t52 = 1213LLU;

	t52 = ((x221%x222)|(x223|x224));

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 8151423957910794LLU;
	int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	uint64_t t53 = UINT64_MAX;

	t53 = ((x225%x226)|(x227|x228));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	static int8_t x232 = -1;
	int32_t t54 = 0;

	t54 = ((x229%x230)|(x231|x232));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = INT16_MIN;
	volatile int16_t x236 = 2;
	int32_t t55 = 8;

	t55 = ((x233%x234)|(x235|x236));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	int16_t x238 = INT16_MAX;
	volatile int8_t x240 = 56;
	static volatile int64_t t56 = 62599LL;

	t56 = ((x237%x238)|(x239|x240));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x244 = 218LL;
	static int64_t t57 = -4025LL;

	t57 = ((x241%x242)|(x243|x244));

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	volatile uint16_t x246 = UINT16_MAX;
	int16_t x247 = 3;
	volatile int64_t t58 = -18645904653LL;

	t58 = ((x245%x246)|(x247|x248));

	if (t58 != -32765LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x251 = -1;
	int32_t t59 = 312907;

	t59 = ((x249%x250)|(x251|x252));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = INT32_MAX;
	int8_t x256 = INT8_MAX;
	volatile uint64_t t60 = 3609653732LLU;

	t60 = ((x253%x254)|(x255|x256));

	if (t60 != 9692217834978687LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MIN;
	volatile uint8_t x258 = UINT8_MAX;
	int16_t x259 = -1;
	volatile uint16_t x260 = 92U;
	volatile int32_t t61 = 2481688;

	t61 = ((x257%x258)|(x259|x260));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = INT8_MAX;
	int64_t x263 = 2047LL;
	uint32_t x264 = 3371U;
	volatile int64_t t62 = 803LL;

	t62 = ((x261%x262)|(x263|x264));

	if (t62 != 4095LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	int64_t x266 = -99982893169LL;
	int64_t t63 = 2848220172109012LL;

	t63 = ((x265%x266)|(x267|x268));

	if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x269 = -3239688862366387LL;
	static volatile int32_t x270 = INT32_MIN;
	volatile int32_t x271 = INT32_MIN;
	uint16_t x272 = 6024U;
	static volatile int64_t t64 = 30LL;

	t64 = ((x269%x270)|(x271|x272));

	if (t64 != -1473439795LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = 1829920454793956224LLU;
	static int16_t x275 = -602;
	volatile int32_t x276 = -1;
	static uint64_t t65 = UINT64_MAX;

	t65 = ((x273%x274)|(x275|x276));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = 56U;
	int32_t x278 = -36473;
	uint16_t x279 = 2U;
	int16_t x280 = INT16_MAX;
	uint32_t t66 = 839515095U;

	t66 = ((x277%x278)|(x279|x280));

	if (t66 != 32767U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MIN;
	volatile uint64_t t67 = 581276892909587649LLU;

	t67 = ((x285%x286)|(x287|x288));

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MAX;
	int8_t x291 = 3;
	uint16_t x292 = 12144U;

	t68 = ((x289%x290)|(x291|x292));

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x293 = 0;
	uint64_t x294 = UINT64_MAX;

	t69 = ((x293%x294)|(x295|x296));

	if (t69 != 127LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x299 = 15363860750LLU;
	volatile uint64_t x300 = 1119LLU;

	t70 = ((x297%x298)|(x299|x300));

	if (t70 != 15363861887LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	volatile int64_t x302 = -2148204605LL;
	int8_t x303 = -1;
	volatile int64_t x304 = INT64_MAX;

	t71 = ((x301%x302)|(x303|x304));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MAX;
	static uint64_t x306 = 121527LLU;
	uint16_t x307 = 1U;
	static int16_t x308 = INT16_MAX;

	t72 = ((x305%x306)|(x307|x308));

	if (t72 != 32767LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x310 = -1;
	uint16_t x312 = UINT16_MAX;
	volatile uint64_t t73 = 764151761111824626LLU;

	t73 = ((x309%x310)|(x311|x312));

	if (t73 != 131071LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;

	t74 = ((x313%x314)|(x315|x316));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MAX;
	volatile int16_t x320 = -1;

	t75 = ((x317%x318)|(x319|x320));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x322 = 14228U;
	uint64_t x324 = 150321048LLU;
	uint64_t t76 = 166908484518LLU;

	t76 = ((x321%x322)|(x323|x324));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 1682U;
	static int8_t x326 = INT8_MIN;
	int8_t x327 = -3;
	static uint32_t x328 = 78U;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x325%x326)|(x327|x328));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x330 = 29U;
	int8_t x331 = INT8_MIN;
	uint64_t t78 = 158745LLU;

	t78 = ((x329%x330)|(x331|x332));

	if (t78 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x334 = -1;
	uint8_t x335 = 100U;
	int32_t x336 = -1;
	int32_t t79 = -389636916;

	t79 = ((x333%x334)|(x335|x336));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = -1;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x337%x338)|(x339|x340));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = -1LL;
	int32_t x343 = INT32_MIN;
	uint16_t x344 = UINT16_MAX;
	int64_t t81 = 18747292LL;

	t81 = ((x341%x342)|(x343|x344));

	if (t81 != -2147418113LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	int16_t x348 = -1;

	t82 = ((x345%x346)|(x347|x348));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -1LL;
	volatile int64_t t83 = -1922982697976LL;

	t83 = ((x349%x350)|(x351|x352));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = -1LL;
	uint64_t x355 = 4LLU;
	volatile int16_t x356 = 243;

	t84 = ((x353%x354)|(x355|x356));

	if (t84 != 247LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = -416;
	int16_t x359 = 0;
	int32_t t85 = 173480073;

	t85 = ((x357%x358)|(x359|x360));

	if (t85 != -4931) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x362 = 34096833LLU;
	int16_t x363 = -4042;
	uint32_t x364 = UINT32_MAX;
	static uint64_t t86 = 0LLU;

	t86 = ((x361%x362)|(x363|x364));

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	volatile int32_t x366 = 3;
	uint16_t x367 = UINT16_MAX;
	int32_t t87 = 96085;

	t87 = ((x365%x366)|(x367|x368));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x370 = -399218182LL;
	static uint64_t x371 = UINT64_MAX;
	int16_t x372 = -6;

	t88 = ((x369%x370)|(x371|x372));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = INT16_MIN;
	static int32_t x376 = -781677624;
	uint32_t t89 = 302U;

	t89 = ((x373%x374)|(x375|x376));

	if (t89 != 4294937544U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 19U;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static int64_t t90 = -9848439013723LL;

	t90 = ((x377%x378)|(x379|x380));

	if (t90 != -109LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	volatile int64_t x384 = -518LL;
	int64_t t91 = -474LL;

	t91 = ((x381%x382)|(x383|x384));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x386 = INT16_MAX;
	int64_t x387 = -1036239087445550396LL;
	volatile int8_t x388 = INT8_MAX;
	int64_t t92 = -9LL;

	t92 = ((x385%x386)|(x387|x388));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = -1LL;
	static int32_t x391 = -1;
	int64_t t93 = 19918593106LL;

	t93 = ((x389%x390)|(x391|x392));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	static int64_t t94 = -82906730LL;

	t94 = ((x393%x394)|(x395|x396));

	if (t94 != -2147483393LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x397 = INT16_MIN;
	static volatile int16_t x398 = INT16_MIN;
	int16_t x399 = 938;
	int8_t x400 = INT8_MIN;

	t95 = ((x397%x398)|(x399|x400));

	if (t95 != -86) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x402 = UINT16_MAX;
	volatile int64_t x403 = -148344552LL;
	int32_t x404 = -196;
	int64_t t96 = 5201244LL;

	t96 = ((x401%x402)|(x403|x404));

	if (t96 != -66LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = 0;
	uint8_t x406 = 60U;
	volatile int64_t x407 = INT64_MAX;
	int8_t x408 = -1;
	static int64_t t97 = 5489236276540630LL;

	t97 = ((x405%x406)|(x407|x408));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x409 = INT32_MAX;
	int16_t x410 = -1;
	static uint64_t x411 = 64406976LLU;
	uint32_t x412 = 957U;
	volatile uint64_t t98 = 1LLU;

	t98 = ((x409%x410)|(x411|x412));

	if (t98 != 64407549LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x413 = -2;
	int8_t x414 = -20;
	int64_t x416 = -1LL;
	volatile int64_t t99 = 9408818684LL;

	t99 = ((x413%x414)|(x415|x416));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

