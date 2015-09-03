#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
int8_t x5 = INT8_MIN;
volatile int64_t x9 = -1LL;
int64_t t2 = -13176885494812960LL;
static int16_t x22 = INT16_MIN;
int16_t x24 = INT16_MIN;
int64_t t7 = -1LL;
volatile uint16_t x36 = 27547U;
int32_t t8 = 113712937;
volatile uint16_t x37 = UINT16_MAX;
static uint32_t x40 = UINT32_MAX;
static volatile uint64_t t10 = 1432486LLU;
volatile int32_t t11 = 11338;
uint64_t x60 = 58316896503033LLU;
static uint64_t x61 = 22289LLU;
int8_t x65 = INT8_MAX;
int16_t x67 = INT16_MIN;
static volatile int8_t x69 = INT8_MIN;
int8_t x77 = INT8_MIN;
int32_t t17 = 2163;
int8_t x86 = -6;
static uint16_t x89 = 3U;
static volatile uint8_t x92 = 3U;
int64_t x115 = -1LL;
static int32_t t24 = -15;
volatile uint8_t x122 = 17U;
volatile int64_t x125 = -1LL;
uint8_t x130 = UINT8_MAX;
int32_t x135 = -1;
uint32_t x139 = UINT32_MAX;
uint8_t x148 = 3U;
static volatile int8_t x156 = INT8_MIN;
int32_t x159 = -1;
static int16_t x162 = -201;
volatile uint16_t x167 = 28U;
uint32_t x192 = 1377287U;
uint32_t t43 = 2665U;
int64_t x193 = -3LL;
uint8_t x207 = 1U;
int8_t x212 = -1;
static int32_t t53 = -6575;
volatile int32_t x236 = INT32_MIN;
uint32_t x239 = 44U;
int32_t t55 = INT32_MIN;
int16_t x248 = 58;
int32_t x257 = INT32_MAX;
volatile uint64_t x258 = 1549349440307268450LLU;
static int32_t t59 = INT32_MAX;
int32_t x261 = INT32_MIN;
int32_t t60 = INT32_MIN;
uint8_t x267 = UINT8_MAX;
static uint32_t x272 = UINT32_MAX;
volatile int32_t t62 = 179903945;
volatile int32_t t64 = -53013078;
int16_t x289 = INT16_MIN;
int64_t t67 = 611783161LL;
uint16_t x299 = 9U;
uint64_t x300 = UINT64_MAX;
int32_t x301 = -812540;
static uint16_t x311 = UINT16_MAX;
int32_t x314 = INT32_MIN;
int8_t x322 = 0;
uint64_t t74 = 6016135819647653LLU;
volatile int64_t x327 = INT64_MAX;
int64_t t76 = -2166653LL;
int64_t x335 = -1LL;
static uint64_t t79 = 2330305341695365863LLU;
volatile int16_t x345 = -1;
static int16_t x347 = 1;
uint16_t x348 = UINT16_MAX;
static int8_t x352 = INT8_MIN;
int64_t x354 = -1LL;
uint32_t x355 = 47624U;
int64_t x360 = -48392066350LL;
static uint64_t x364 = 71087LLU;
static int16_t x369 = -6;
uint8_t x370 = 0U;
uint32_t x371 = 17U;
uint32_t t87 = 296U;
uint64_t x387 = UINT64_MAX;
static volatile int32_t t89 = 143735435;
static volatile int32_t t91 = 395527852;
static int64_t x407 = 171LL;
int32_t x408 = -201362;
volatile int16_t x410 = INT16_MAX;
volatile int32_t t95 = 1971354;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x3 = INT8_MAX;
	static int32_t x4 = -61221693;
	static volatile int64_t t0 = INT64_MAX;

	t0 = (x1-((x2<x3)<x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	volatile int8_t x7 = INT8_MIN;
	static volatile int64_t x8 = INT64_MAX;
	int32_t t1 = -10;

	t1 = (x5-((x6<x7)<x8));

	if (t1 != -129) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MAX;

	t2 = (x9-((x10<x11)<x12));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -578;

	t3 = (x13-((x14<x15)<x16));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 10LLU;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -1LL;
	volatile uint64_t t4 = 34384654317088LLU;

	t4 = (x17-((x18<x19)<x20));

	if (t4 != 10LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 408600558U;
	uint8_t x23 = UINT8_MAX;
	volatile uint32_t t5 = 229139U;

	t5 = (x21-((x22<x23)<x24));

	if (t5 != 408600558U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MAX;
	int8_t x27 = INT8_MAX;
	static int32_t x28 = 231;
	static volatile uint64_t t6 = 417LLU;

	t6 = (x25-((x26<x27)<x28));

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -167LL;
	volatile int8_t x30 = INT8_MIN;
	volatile int64_t x31 = INT64_MAX;
	int16_t x32 = -12817;

	t7 = (x29-((x30<x31)<x32));

	if (t7 != -167LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static volatile int64_t x34 = 1148LL;
	uint32_t x35 = 117838U;

	t8 = (x33-((x34<x35)<x36));

	if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x38 = 444584796429LLU;
	int16_t x39 = -1;
	int32_t t9 = -3;

	t9 = (x37-((x38<x39)<x40));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	uint32_t x42 = UINT32_MAX;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;

	t10 = (x41-((x42<x43)<x44));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int32_t x46 = INT32_MIN;
	uint32_t x47 = 8U;
	int8_t x48 = -1;

	t11 = (x45-((x46<x47)<x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 7U;
	static uint64_t x51 = 112613580749763LLU;
	int32_t x52 = -1;
	volatile int32_t t12 = -28652157;

	t12 = (x49-((x50<x51)<x52));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	uint32_t t13 = 16082448U;

	t13 = (x57-((x58<x59)<x60));

	if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = -1;
	int64_t x63 = INT64_MAX;
	int16_t x64 = -1;
	uint64_t t14 = 2048570875LLU;

	t14 = (x61-((x62<x63)<x64));

	if (t14 != 22289LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MAX;
	uint8_t x68 = 0U;
	static int32_t t15 = -6;

	t15 = (x65-((x66<x67)<x68));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x70 = 1;
	int16_t x71 = -122;
	int64_t x72 = INT64_MAX;
	volatile int32_t t16 = 10736;

	t16 = (x69-((x70<x71)<x72));

	if (t16 != -129) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x78 = -1;
	static uint16_t x79 = UINT16_MAX;
	volatile int16_t x80 = 0;

	t17 = (x77-((x78<x79)<x80));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	uint32_t x84 = 383249628U;
	int32_t t18 = 127;

	t18 = (x81-((x82<x83)<x84));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x85 = INT8_MIN;
	uint32_t x87 = 16611U;
	volatile uint8_t x88 = UINT8_MAX;
	volatile int32_t t19 = 47;

	t19 = (x85-((x86<x87)<x88));

	if (t19 != -129) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x90 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t20 = 82516;

	t20 = (x89-((x90<x91)<x92));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -1;
	static volatile int16_t x94 = -1;
	int32_t x95 = -1;
	uint8_t x96 = 24U;
	volatile int32_t t21 = -63873;

	t21 = (x93-((x94<x95)<x96));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	int16_t x98 = INT16_MAX;
	volatile int8_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	int32_t t22 = 94;

	t22 = (x97-((x98<x99)<x100));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	uint16_t x102 = 0U;
	static int64_t x103 = 14298658470LL;
	int16_t x104 = -2;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x101-((x102<x103)<x104));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 26452U;
	volatile uint16_t x114 = 304U;
	static int16_t x116 = INT16_MAX;

	t24 = (x113-((x114<x115)<x116));

	if (t24 != 26451) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x117 = UINT16_MAX;
	int8_t x118 = -6;
	volatile uint64_t x119 = UINT64_MAX;
	int8_t x120 = -1;
	int32_t t25 = -80;

	t25 = (x117-((x118<x119)<x120));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = -1;
	static int8_t x123 = INT8_MAX;
	int64_t x124 = 175676095LL;
	static int32_t t26 = 51;

	t26 = (x121-((x122<x123)<x124));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x126 = 22693803U;
	int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	static volatile int64_t t27 = 0LL;

	t27 = (x125-((x126<x127)<x128));

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -1LL;
	uint8_t x131 = UINT8_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile int64_t t28 = -30173153217597606LL;

	t28 = (x129-((x130<x131)<x132));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -14;
	int32_t x134 = -11812;
	uint8_t x136 = 66U;
	static int32_t t29 = -233549915;

	t29 = (x133-((x134<x135)<x136));

	if (t29 != -15) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -2453;
	int8_t x138 = INT8_MAX;
	int64_t x140 = INT64_MAX;
	static int32_t t30 = 22140125;

	t30 = (x137-((x138<x139)<x140));

	if (t30 != -2454) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	static volatile uint64_t x143 = 104272194LLU;
	volatile int16_t x144 = -1;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x141-((x142<x143)<x144));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x146 = 5U;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t t32 = -18;

	t32 = (x145-((x146<x147)<x148));

	if (t32 != -129) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -801382;
	int16_t x150 = -1;
	static int32_t x151 = -1;
	int16_t x152 = 2;
	int32_t t33 = 298507;

	t33 = (x149-((x150<x151)<x152));

	if (t33 != -801383) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = -1;
	int32_t x155 = -1;
	volatile int32_t t34 = 9;

	t34 = (x153-((x154<x155)<x156));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = 0;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t35 = 125;

	t35 = (x157-((x158<x159)<x160));

	if (t35 != -32769) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	uint16_t x163 = UINT16_MAX;
	uint8_t x164 = 11U;
	int32_t t36 = 361;

	t36 = (x161-((x162<x163)<x164));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -1;
	uint32_t x166 = 2763U;
	int32_t x168 = -1640118;
	int32_t t37 = -64919;

	t37 = (x165-((x166<x167)<x168));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x169 = 12134U;
	static int32_t x170 = INT32_MAX;
	volatile int64_t x171 = INT64_MAX;
	static uint32_t x172 = UINT32_MAX;
	int32_t t38 = 145876;

	t38 = (x169-((x170<x171)<x172));

	if (t38 != 12133) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MAX;
	static volatile uint8_t x174 = 25U;
	int32_t x175 = INT32_MIN;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t39 = INT64_MAX;

	t39 = (x173-((x174<x175)<x176));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 2262U;
	int32_t x180 = -1;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x177-((x178<x179)<x180));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 3;
	uint64_t x182 = 1765603533194453LLU;
	uint32_t x183 = 514U;
	static uint8_t x184 = 83U;
	int32_t t41 = 20;

	t41 = (x181-((x182<x183)<x184));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = 24494564820313LL;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MAX;
	uint32_t x188 = 1U;
	static int64_t t42 = 112807593LL;

	t42 = (x185-((x186<x187)<x188));

	if (t42 != 24494564820313LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = UINT32_MAX;
	uint8_t x190 = UINT8_MAX;
	static uint16_t x191 = 30789U;

	t43 = (x189-((x190<x191)<x192));

	if (t43 != 4294967294U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x194 = INT64_MAX;
	int16_t x195 = 15695;
	static uint8_t x196 = 117U;
	int64_t t44 = -3LL;

	t44 = (x193-((x194<x195)<x196));

	if (t44 != -4LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x197 = 2U;
	uint8_t x198 = 0U;
	static volatile uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 27733U;
	volatile int32_t t45 = -367621873;

	t45 = (x197-((x198<x199)<x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -1;
	int8_t x202 = -1;
	volatile int16_t x203 = 1424;
	volatile int32_t x204 = INT32_MIN;
	volatile int32_t t46 = 83;

	t46 = (x201-((x202<x203)<x204));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t47 = -2095018;

	t47 = (x205-((x206<x207)<x208));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 13U;
	int32_t x210 = INT32_MAX;
	int64_t x211 = 533662979533289252LL;
	int32_t t48 = 2;

	t48 = (x209-((x210<x211)<x212));

	if (t48 != 13) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x214 = -428;
	uint32_t x215 = 85547U;
	int32_t x216 = INT32_MIN;
	volatile int32_t t49 = -15160049;

	t49 = (x213-((x214<x215)<x216));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -83;
	volatile int64_t x218 = -340415011909660LL;
	int32_t x219 = -1;
	static int64_t x220 = -1LL;
	int32_t t50 = 12411938;

	t50 = (x217-((x218<x219)<x220));

	if (t50 != -83) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MAX;
	int32_t x222 = INT32_MAX;
	volatile int64_t x223 = INT64_MIN;
	static int8_t x224 = -1;
	int32_t t51 = INT32_MAX;

	t51 = (x221-((x222<x223)<x224));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = -1LL;
	int8_t x228 = INT8_MAX;
	int32_t t52 = -2004585;

	t52 = (x225-((x226<x227)<x228));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -91493958;
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MAX;

	t53 = (x229-((x230<x231)<x232));

	if (t53 != -91493959) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = 4465725103LL;
	int16_t x234 = -63;
	uint16_t x235 = 498U;
	volatile int64_t t54 = 3981092387LL;

	t54 = (x233-((x234<x235)<x236));

	if (t54 != 4465725103LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MAX;
	static int64_t x240 = INT64_MIN;

	t55 = (x237-((x238<x239)<x240));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	int16_t x242 = 886;
	uint16_t x243 = 5U;
	static volatile int8_t x244 = INT8_MAX;
	int64_t t56 = -79LL;

	t56 = (x241-((x242<x243)<x244));

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = -1;
	uint64_t x247 = 248533142LLU;
	volatile int32_t t57 = 26;

	t57 = (x245-((x246<x247)<x248));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = -1;
	static uint64_t x251 = UINT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t58 = -2;

	t58 = (x249-((x250<x251)<x252));

	if (t58 != -129) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MIN;

	t59 = (x257-((x258<x259)<x260));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 51990U;
	int16_t x264 = -1;

	t60 = (x261-((x262<x263)<x264));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = INT64_MIN;
	static uint16_t x266 = 0U;
	int16_t x268 = INT16_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x265-((x266<x267)<x268));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MAX;
	static uint16_t x270 = 8U;
	static int64_t x271 = 0LL;

	t62 = (x269-((x270<x271)<x272));

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = 1;
	int8_t x275 = -17;
	int8_t x276 = 0;
	uint32_t t63 = UINT32_MAX;

	t63 = (x273-((x274<x275)<x276));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = INT32_MAX;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;

	t64 = (x281-((x282<x283)<x284));

	if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 52U;
	int64_t x286 = INT64_MIN;
	volatile int16_t x287 = INT16_MAX;
	int32_t x288 = INT32_MAX;
	uint32_t t65 = 1858254U;

	t65 = (x285-((x286<x287)<x288));

	if (t65 != 51U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MIN;
	int16_t x292 = -103;
	int32_t t66 = 437;

	t66 = (x289-((x290<x291)<x292));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = 3302992871LL;
	int8_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = -1323;

	t67 = (x293-((x294<x295)<x296));

	if (t67 != 3302992871LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x297 = 962135573LLU;
	uint8_t x298 = UINT8_MAX;
	volatile uint64_t t68 = 48LLU;

	t68 = (x297-((x298<x299)<x300));

	if (t68 != 962135572LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x302 = INT32_MIN;
	uint64_t x303 = 3053155LLU;
	int16_t x304 = INT16_MAX;
	int32_t t69 = -441731;

	t69 = (x301-((x302<x303)<x304));

	if (t69 != -812541) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x305 = 3893LL;
	volatile int32_t x306 = -1;
	uint32_t x307 = 199210U;
	int64_t x308 = -1LL;
	int64_t t70 = 257634151137828508LL;

	t70 = (x305-((x306<x307)<x308));

	if (t70 != 3893LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MIN;
	static int16_t x312 = 1;
	int64_t t71 = INT64_MIN;

	t71 = (x309-((x310<x311)<x312));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 0U;
	int8_t x315 = 0;
	int8_t x316 = 1;
	volatile uint32_t t72 = 229473651U;

	t72 = (x313-((x314<x315)<x316));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 3U;
	int64_t x320 = INT64_MIN;
	static int32_t t73 = -30781;

	t73 = (x317-((x318<x319)<x320));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 1LLU;
	uint32_t x323 = UINT32_MAX;
	volatile int64_t x324 = INT64_MIN;

	t74 = (x321-((x322<x323)<x324));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 32772727U;
	volatile uint8_t x326 = UINT8_MAX;
	int16_t x328 = INT16_MAX;
	volatile uint32_t t75 = 1672459401U;

	t75 = (x325-((x326<x327)<x328));

	if (t75 != 32772726U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = -1LL;
	int8_t x330 = -1;
	int8_t x331 = -1;
	uint32_t x332 = 818U;

	t76 = (x329-((x330<x331)<x332));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x333 = -1;
	volatile int64_t x334 = -1LL;
	uint32_t x336 = 1777U;
	int32_t t77 = -521131;

	t77 = (x333-((x334<x335)<x336));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x337 = -669045278;
	volatile uint64_t x338 = UINT64_MAX;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = -1;
	int32_t t78 = -1;

	t78 = (x337-((x338<x339)<x340));

	if (t78 != -669045278) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x341 = 332888611131LLU;
	int16_t x342 = INT16_MIN;
	static uint16_t x343 = 1U;
	int64_t x344 = 428748283272LL;

	t79 = (x341-((x342<x343)<x344));

	if (t79 != 332888611130LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x346 = 39U;
	volatile int32_t t80 = 155720;

	t80 = (x345-((x346<x347)<x348));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = -1;
	int32_t x350 = -1;
	int8_t x351 = INT8_MAX;
	int32_t t81 = 1;

	t81 = (x349-((x350<x351)<x352));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x353 = 58U;
	int8_t x356 = 30;
	volatile int32_t t82 = 310366;

	t82 = (x353-((x354<x355)<x356));

	if (t82 != 57) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -11170;
	int8_t x358 = -1;
	static uint64_t x359 = 9041694759610114808LLU;
	volatile int32_t t83 = -5942555;

	t83 = (x357-((x358<x359)<x360));

	if (t83 != -11170) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x361 = UINT16_MAX;
	int32_t x362 = -112090896;
	int8_t x363 = INT8_MIN;
	volatile int32_t t84 = 158470;

	t84 = (x361-((x362<x363)<x364));

	if (t84 != 65534) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x372 = -3;
	int32_t t85 = -96661336;

	t85 = (x369-((x370<x371)<x372));

	if (t85 != -6) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x373 = 120U;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 1;
	volatile int32_t t86 = -416124794;

	t86 = (x373-((x374<x375)<x376));

	if (t86 != 119) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = UINT32_MAX;
	uint8_t x378 = 2U;
	int16_t x379 = INT16_MIN;
	static uint64_t x380 = 87204121895475LLU;

	t87 = (x377-((x378<x379)<x380));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = 2U;
	int8_t x383 = INT8_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t88 = 40;

	t88 = (x381-((x382<x383)<x384));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = 1;
	int32_t x386 = INT32_MIN;
	uint32_t x388 = 118683U;

	t89 = (x385-((x386<x387)<x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x389 = 627409;
	volatile uint64_t x390 = 199432093540274LLU;
	int32_t x391 = 52;
	int8_t x392 = -1;
	static int32_t t90 = -24;

	t90 = (x389-((x390<x391)<x392));

	if (t90 != 627409) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = -1;
	uint32_t x394 = 1U;
	int16_t x395 = -1;
	uint64_t x396 = 173254658113884567LLU;

	t91 = (x393-((x394<x395)<x396));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x397 = INT16_MAX;
	static int64_t x398 = -185549791LL;
	uint32_t x399 = 0U;
	int32_t x400 = -240;
	static volatile int32_t t92 = 55084;

	t92 = (x397-((x398<x399)<x400));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x401 = UINT8_MAX;
	static uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MIN;
	static int32_t t93 = -6;

	t93 = (x401-((x402<x403)<x404));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -1;
	uint32_t x406 = UINT32_MAX;
	volatile int32_t t94 = 2416989;

	t94 = (x405-((x406<x407)<x408));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MIN;
	int32_t x411 = 29104;
	uint16_t x412 = 2041U;

	t95 = (x409-((x410<x411)<x412));

	if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x413 = UINT8_MAX;
	static int8_t x414 = INT8_MAX;
	int32_t x415 = -1;
	uint64_t x416 = 44989199290LLU;
	static int32_t t96 = 12414420;

	t96 = (x413-((x414<x415)<x416));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x421 = UINT8_MAX;
	static uint8_t x422 = 3U;
	uint64_t x423 = 312598494LLU;
	int32_t x424 = 278575;
	int32_t t97 = -18;

	t97 = (x421-((x422<x423)<x424));

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x425 = 673343LLU;
	int16_t x426 = 566;
	int32_t x427 = -190547087;
	uint8_t x428 = UINT8_MAX;
	static volatile uint64_t t98 = 1471046LLU;

	t98 = (x425-((x426<x427)<x428));

	if (t98 != 673342LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x433 = 92U;
	int64_t x434 = INT64_MIN;
	uint64_t x435 = 77560LLU;
	uint16_t x436 = 16U;
	volatile int32_t t99 = 132;

	t99 = (x433-((x434<x435)<x436));

	if (t99 != 91) { NG(); } else { ; }
	
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

