#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 20U;
static uint16_t x3 = UINT16_MAX;
int8_t x8 = -1;
int8_t x17 = -12;
uint32_t x20 = 71108U;
volatile int64_t x23 = -1LL;
int8_t x24 = INT8_MIN;
volatile int8_t x27 = -1;
static uint8_t x29 = 30U;
int16_t x30 = -1779;
int32_t x38 = INT32_MIN;
volatile int64_t t9 = -4289291911LL;
int32_t x45 = -1803360;
volatile int64_t x46 = INT64_MIN;
static uint8_t x49 = UINT8_MAX;
volatile uint64_t x50 = UINT64_MAX;
int64_t x52 = 306LL;
volatile int32_t t13 = -44;
int64_t x57 = INT64_MIN;
static volatile int64_t t14 = -682900522LL;
static volatile int64_t x67 = INT64_MIN;
static int64_t t15 = -3803440LL;
uint64_t x71 = UINT64_MAX;
int8_t x80 = -21;
static int64_t x82 = INT64_MIN;
int8_t x85 = INT8_MIN;
volatile int8_t x92 = -1;
int8_t x104 = -6;
static volatile uint32_t x110 = UINT32_MAX;
int32_t x112 = 105;
int64_t t24 = 2925201959904LL;
volatile int8_t x116 = INT8_MIN;
int32_t x122 = INT32_MIN;
static int16_t x123 = INT16_MIN;
int8_t x124 = -1;
int16_t x142 = -1;
uint32_t t30 = 202929953U;
static uint64_t t31 = 544337018553646LLU;
int32_t x154 = INT32_MIN;
int16_t x156 = INT16_MIN;
int8_t x157 = INT8_MIN;
static uint64_t x158 = 2235284000107LLU;
int16_t x162 = -22;
volatile uint64_t t36 = 760584926LLU;
uint16_t x170 = 29598U;
static int16_t x181 = INT16_MAX;
volatile int64_t x183 = -783238LL;
static volatile int64_t t40 = 14472LL;
static uint64_t t41 = 15641661LLU;
uint64_t x190 = UINT64_MAX;
int64_t x194 = 5363061LL;
static int32_t x195 = INT32_MIN;
static int64_t t43 = -579347369LL;
uint16_t x197 = UINT16_MAX;
int8_t x206 = INT8_MIN;
static int8_t x207 = -12;
int64_t x216 = -1LL;
int32_t x217 = INT32_MIN;
int32_t t49 = 13899;
static uint8_t x221 = 6U;
int8_t x222 = INT8_MAX;
uint8_t x230 = 1U;
static int32_t t51 = 40050862;
int64_t x235 = INT64_MAX;
int64_t x237 = -1LL;
uint64_t x243 = UINT64_MAX;
volatile uint64_t x255 = 193852423434LLU;
int16_t x258 = INT16_MIN;
volatile int64_t t59 = -3811411197621716LL;
int16_t x268 = -1;
uint64_t x277 = 158911241LLU;
int8_t x278 = INT8_MIN;
uint64_t x279 = 14738499454985LLU;
int8_t x280 = INT8_MIN;
uint8_t x281 = 2U;
int64_t x284 = 8648152LL;
int64_t t66 = 206451346743390100LL;
volatile int8_t x302 = 0;
int32_t t68 = -7;
int8_t x309 = 0;
uint32_t x310 = UINT32_MAX;
volatile int8_t x312 = 8;
int64_t t73 = -20954836LL;
static int64_t x328 = -1LL;
static uint8_t x332 = 0U;
static int32_t x336 = 185;
volatile uint16_t x337 = 64U;
int64_t x340 = -1LL;
int64_t t77 = -250349488LL;
int16_t x342 = -1;
int32_t x345 = -2300;
int16_t x349 = -1;
uint16_t x350 = UINT16_MAX;
static uint8_t x352 = 1U;
volatile int8_t x354 = INT8_MIN;
int64_t x363 = 3LL;
static int8_t x364 = INT8_MIN;
uint64_t t84 = 160874489LLU;
int16_t x369 = -869;
volatile int64_t t85 = -4467LL;
uint8_t x381 = UINT8_MAX;
uint16_t x383 = UINT16_MAX;
uint64_t x387 = 1LLU;
int32_t x389 = INT32_MAX;
static int64_t t89 = 3912344771586LL;
uint16_t x397 = 2U;
volatile uint16_t x400 = 0U;
volatile int32_t x403 = -1;
int16_t x406 = 1;
static int16_t x409 = INT16_MIN;
int16_t x410 = INT16_MIN;
volatile int64_t t96 = -805LL;
static int32_t x422 = 40816;
int32_t x428 = INT32_MAX;
int64_t x432 = 36810939376681LL;


void f0(void) {
	int8_t x2 = -1;
	int8_t x4 = -1;
	static volatile uint32_t t0 = 1689809U;

	t0 = (x1-((x2^x3)|x4));

	if (t0 != 21U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -130;
	int64_t x6 = INT64_MAX;
	static int16_t x7 = INT16_MIN;
	static int64_t t1 = -202621355188LL;

	t1 = (x5-((x6^x7)|x8));

	if (t1 != -129LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 15603352550LLU;
	static uint32_t x10 = UINT32_MAX;
	volatile int8_t x11 = INT8_MIN;
	static int64_t x12 = INT64_MAX;
	static uint64_t t2 = 56535141LLU;

	t2 = (x9-((x10^x11)|x12));

	if (t2 != 9223372052458128359LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint32_t x14 = 214342U;
	uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 19LLU;
	uint64_t t3 = 0LLU;

	t3 = (x13-((x14^x15)|x16));

	if (t3 != 214340LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	uint16_t x19 = UINT16_MAX;
	volatile uint32_t t4 = 38464U;

	t4 = (x17-((x18^x19)|x20));

	if (t4 != 4294836272U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 155LLU;
	uint64_t x22 = 618507509068LLU;
	uint64_t t5 = 12547LLU;

	t5 = (x21-((x22^x23)|x24));

	if (t5 != 232LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1367;
	uint16_t x26 = 31U;
	volatile int64_t x28 = INT64_MIN;
	int64_t t6 = 2649215365899067LL;

	t6 = (x25-((x26^x27)|x28));

	if (t6 != -1335LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	uint64_t t7 = 5LLU;

	t7 = (x29-((x30^x31)|x32));

	if (t7 != 31020LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = 197;
	uint64_t x35 = UINT64_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile uint64_t t8 = 60246LLU;

	t8 = (x33-((x34^x35)|x36));

	if (t8 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1U;
	uint16_t x39 = UINT16_MAX;
	static volatile int64_t x40 = 22548757644412LL;

	t9 = (x37-((x38^x39)|x40));

	if (t9 != 1968111618LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 0;
	int32_t x42 = INT32_MAX;
	int32_t x43 = -59;
	uint16_t x44 = 3U;
	int32_t t10 = 7125;

	t10 = (x41-((x42^x43)|x44));

	if (t10 != 2147483589) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x47 = INT64_MIN;
	int16_t x48 = -59;
	volatile int64_t t11 = -133308632LL;

	t11 = (x45-((x46^x47)|x48));

	if (t11 != -1803301LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = -1;
	volatile uint64_t t12 = 28LLU;

	t12 = (x49-((x50^x51)|x52));

	if (t12 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile int8_t x54 = INT8_MIN;
	volatile int16_t x55 = 49;
	static int16_t x56 = INT16_MIN;

	t13 = (x53-((x54^x55)|x56));

	if (t13 != -2147483569) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MAX;
	static int32_t x59 = INT32_MIN;
	volatile uint16_t x60 = UINT16_MAX;

	t14 = (x57-((x58^x59)|x60));

	if (t14 != -9223372034707357695LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 17U;
	volatile uint8_t x66 = 18U;
	int32_t x68 = INT32_MIN;

	t15 = (x65-((x66^x67)|x68));

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MIN;
	uint8_t x72 = 5U;
	uint64_t t16 = 47961843092973LLU;

	t16 = (x69-((x70^x71)|x72));

	if (t16 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -18;
	uint64_t x74 = 915467378LLU;
	int8_t x75 = INT8_MIN;
	volatile uint32_t x76 = 25456583U;
	static volatile uint64_t t17 = 262220127102618873LLU;

	t17 = (x73-((x74^x75)|x76));

	if (t17 != 907050999LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 2U;
	volatile uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;
	static int64_t t18 = -133519081649LL;

	t18 = (x77-((x78^x79)|x80));

	if (t18 != 23LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	static uint32_t x84 = UINT32_MAX;
	static int64_t t19 = 107024870433LL;

	t19 = (x81-((x82^x83)|x84));

	if (t19 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x86 = -1;
	volatile int64_t x87 = -10913324LL;
	volatile int8_t x88 = 1;
	int64_t t20 = 27267LL;

	t20 = (x85-((x86^x87)|x88));

	if (t20 != -10913451LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = 1U;
	static int32_t x90 = INT32_MIN;
	static int16_t x91 = INT16_MIN;
	static volatile int32_t t21 = -1739;

	t21 = (x89-((x90^x91)|x92));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	uint32_t x94 = 3U;
	volatile int32_t x95 = INT32_MAX;
	int32_t x96 = -1;
	volatile int64_t t22 = -410630783LL;

	t22 = (x93-((x94^x95)|x96));

	if (t22 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 8U;
	uint16_t x102 = UINT16_MAX;
	volatile int8_t x103 = INT8_MAX;
	static volatile int32_t t23 = -1732;

	t23 = (x101-((x102^x103)|x104));

	if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = UINT8_MAX;
	int64_t x111 = INT64_MIN;

	t24 = (x109-((x110^x111)|x112));

	if (t24 != 9223372032559808768LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x113 = 14U;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	volatile uint64_t t25 = 6830378177550LLU;

	t25 = (x113-((x114^x115)|x116));

	if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 113U;
	volatile int64_t x118 = 1LL;
	int64_t x119 = INT64_MAX;
	volatile int16_t x120 = INT16_MIN;
	int64_t t26 = -105557124543LL;

	t26 = (x117-((x118^x119)|x120));

	if (t26 != 115LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = -1152272994571489LL;
	int64_t t27 = -261044389580104130LL;

	t27 = (x121-((x122^x123)|x124));

	if (t27 != -1152272994571488LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 13976594LLU;
	static int32_t x134 = INT32_MAX;
	static int32_t x135 = -2973;
	uint8_t x136 = 12U;
	uint64_t t28 = 18LLU;

	t28 = (x133-((x134^x135)|x136));

	if (t28 != 2161457270LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = INT32_MAX;
	int64_t x138 = INT64_MAX;
	int32_t x139 = -1;
	int16_t x140 = INT16_MIN;
	int64_t t29 = -4265182459596865330LL;

	t29 = (x137-((x138^x139)|x140));

	if (t29 != 2147516415LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = UINT8_MAX;
	int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;

	t30 = (x141-((x142^x143)|x144));

	if (t30 != 256U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 1925801213LLU;
	volatile int64_t x146 = -18LL;
	int8_t x147 = 0;
	int64_t x148 = -1LL;

	t31 = (x145-((x146^x147)|x148));

	if (t31 != 1925801214LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 51U;
	uint64_t x151 = 117LLU;
	static volatile int8_t x152 = 0;
	uint64_t t32 = 200374241562LLU;

	t32 = (x149-((x150^x151)|x152));

	if (t32 != 18446744071562067898LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = 21;
	uint32_t x155 = UINT32_MAX;
	uint32_t t33 = 3701712U;

	t33 = (x153-((x154^x155)|x156));

	if (t33 != 22U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x159 = INT8_MIN;
	volatile int8_t x160 = INT8_MAX;
	uint64_t t34 = 509LLU;

	t34 = (x157-((x158^x159)|x160));

	if (t34 != 2235283999873LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = 0;
	uint8_t x163 = 68U;
	uint16_t x164 = 4741U;
	volatile int32_t t35 = 3217017;

	t35 = (x161-((x162^x163)|x164));

	if (t35 != 81) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = 208;
	volatile int32_t x166 = INT32_MAX;
	uint64_t x167 = 10678103643091941LLU;
	uint16_t x168 = 0U;

	t36 = (x165-((x166^x167)|x168));

	if (t36 != 18436065970016842934LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x169 = UINT16_MAX;
	static int16_t x171 = -1;
	volatile uint16_t x172 = 1049U;
	volatile int32_t t37 = -110545585;

	t37 = (x169-((x170^x171)|x172));

	if (t37 != 95110) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 253794023977433067LLU;
	int8_t x174 = -1;
	static volatile uint32_t x175 = 88890U;
	volatile uint64_t x176 = 51396028028910022LLU;
	static uint64_t t38 = 859506082603861LLU;

	t38 = (x173-((x174^x175)|x176));

	if (t38 != 202397992887171620LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x177 = -1;
	static int32_t x178 = INT32_MAX;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = -1;
	int32_t t39 = 1;

	t39 = (x177-((x178^x179)|x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x182 = 1U;
	int32_t x184 = INT32_MIN;

	t40 = (x181-((x182^x183)|x184));

	if (t40 != 816004LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x185 = INT64_MIN;
	uint64_t x186 = 37912576508860LLU;
	int64_t x187 = -1LL;
	volatile int64_t x188 = INT64_MIN;

	t41 = (x185-((x186^x187)|x188));

	if (t41 != 9223409949431284669LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = 142365;
	int32_t x191 = INT32_MIN;
	int8_t x192 = 6;
	volatile uint64_t t42 = 382628LLU;

	t42 = (x189-((x190^x191)|x192));

	if (t42 != 18446744071562210334LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = -280621417;
	int64_t x196 = 0LL;

	t43 = (x193-((x194^x195)|x196));

	if (t43 != 1861499170LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x198 = 1896U;
	int8_t x199 = 50;
	int8_t x200 = INT8_MIN;
	static int32_t t44 = 735;

	t44 = (x197-((x198^x199)|x200));

	if (t44 != 65573) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = -28151423110LL;
	int16_t x203 = -1;
	int64_t x204 = INT64_MAX;
	int64_t t45 = 58338LL;

	t45 = (x201-((x202^x203)|x204));

	if (t45 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 61U;
	int16_t x208 = 13707;
	static volatile uint32_t t46 = 3U;

	t46 = (x205-((x206^x207)|x208));

	if (t46 != 4294953534U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MIN;
	static int32_t x211 = -1;
	int32_t x212 = 9;
	static int32_t t47 = 27336;

	t47 = (x209-((x210^x211)|x212));

	if (t47 != 2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = INT64_MIN;
	int64_t t48 = -56LL;

	t48 = (x213-((x214^x215)|x216));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x218 = INT16_MIN;
	volatile int8_t x219 = 0;
	volatile int16_t x220 = 1;

	t49 = (x217-((x218^x219)|x220));

	if (t49 != -2147450881) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x223 = UINT32_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t50 = 183LL;

	t50 = (x221-((x222^x223)|x224));

	if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -51;
	volatile int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MAX;

	t51 = (x229-((x230^x231)|x232));

	if (t51 != -50) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x233 = -1;
	uint8_t x234 = UINT8_MAX;
	uint16_t x236 = 251U;
	volatile int64_t t52 = 208922LL;

	t52 = (x233-((x234^x235)|x236));

	if (t52 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x238 = INT16_MIN;
	static volatile int64_t x239 = -130931LL;
	int32_t x240 = -1;
	volatile int64_t t53 = -10189341084186016LL;

	t53 = (x237-((x238^x239)|x240));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MAX;
	static volatile int32_t x244 = INT32_MAX;
	uint64_t t54 = 6414522LLU;

	t54 = (x241-((x242^x243)|x244));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = -101LL;
	static uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MAX;
	volatile int8_t x248 = -35;
	volatile int64_t t55 = 649863196LL;

	t55 = (x245-((x246^x247)|x248));

	if (t55 != -66LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 7U;
	int32_t x250 = -1543463;
	uint16_t x251 = 7U;
	uint32_t x252 = 549U;
	uint32_t t56 = 106137182U;

	t56 = (x249-((x250^x251)|x252));

	if (t56 != 1543432U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MAX;
	static uint32_t x254 = 633651630U;
	int8_t x256 = -1;
	uint64_t t57 = 19366195227LLU;

	t57 = (x253-((x254^x255)|x256));

	if (t57 != 2147483648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 0U;
	int8_t x259 = 1;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t58 = -13;

	t58 = (x257-((x258^x259)|x260));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = 753;
	volatile int64_t x262 = INT64_MIN;
	volatile int32_t x263 = -1;
	volatile int16_t x264 = -1;

	t59 = (x261-((x262^x263)|x264));

	if (t59 != 754LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x265 = 208135271264033222LLU;
	uint32_t x266 = 183659217U;
	int8_t x267 = 1;
	static volatile uint64_t t60 = 4LLU;

	t60 = (x265-((x266^x267)|x268));

	if (t60 != 208135266969065927LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	volatile int32_t x275 = -51;
	int64_t x276 = -15597173LL;
	static int64_t t61 = -49LL;

	t61 = (x273-((x274^x275)|x276));

	if (t61 != -9223372036839210959LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t t62 = 824286003LLU;

	t62 = (x277-((x278^x279)|x280));

	if (t62 != 158911360LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x282 = 2U;
	int16_t x283 = -1;
	int64_t t63 = -793LL;

	t63 = (x281-((x282^x283)|x284));

	if (t63 != 5LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -1;
	volatile int32_t t64 = -27614;

	t64 = (x285-((x286^x287)|x288));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MAX;
	volatile uint16_t x291 = 14U;
	uint16_t x292 = 23575U;
	int32_t t65 = 718;

	t65 = (x289-((x290^x291)|x292));

	if (t65 != 2147450888) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MIN;
	int64_t x295 = -377376796353LL;
	static int32_t x296 = -1;

	t66 = (x293-((x294^x295)|x296));

	if (t66 != -2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x297 = 23;
	static uint16_t x298 = 16U;
	int64_t x299 = INT64_MIN;
	int16_t x300 = 96;
	int64_t t67 = 24595242LL;

	t67 = (x297-((x298^x299)|x300));

	if (t67 != 9223372036854775719LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x301 = 40U;
	int8_t x303 = INT8_MAX;
	static int16_t x304 = -6;

	t68 = (x301-((x302^x303)|x304));

	if (t68 != 41) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = -776818383;
	uint32_t x306 = 227U;
	int32_t x307 = -1;
	int16_t x308 = INT16_MIN;
	volatile uint32_t t69 = 756074U;

	t69 = (x305-((x306^x307)|x308));

	if (t69 != 3518149141U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x311 = 1;
	volatile uint32_t t70 = 1334041109U;

	t70 = (x309-((x310^x311)|x312));

	if (t70 != 2U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = INT32_MIN;
	static int32_t x314 = -1;
	uint16_t x315 = 344U;
	uint16_t x316 = 29395U;
	int32_t t71 = 265542;

	t71 = (x313-((x314^x315)|x316));

	if (t71 != -2147483383) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = UINT32_MAX;
	volatile uint64_t x318 = 207950335141LLU;
	uint64_t x319 = 229464LLU;
	int8_t x320 = -1;
	uint64_t t72 = 4316442883073LLU;

	t72 = (x317-((x318^x319)|x320));

	if (t72 != 4294967296LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = INT16_MIN;
	static int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MAX;
	static int64_t x324 = -179414686511405LL;

	t73 = (x321-((x322^x323)|x324));

	if (t73 != -32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = 23;
	uint16_t x326 = 5U;
	volatile uint8_t x327 = UINT8_MAX;
	static int64_t t74 = -7555LL;

	t74 = (x325-((x326^x327)|x328));

	if (t74 != 24LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	uint16_t x331 = 6084U;
	volatile int32_t t75 = 4;

	t75 = (x329-((x330^x331)|x332));

	if (t75 != 2147477436) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x333 = -1;
	uint16_t x334 = 25455U;
	volatile uint64_t x335 = 53288LLU;
	volatile uint64_t t76 = 463803684558LLU;

	t76 = (x333-((x334^x335)|x336));

	if (t76 != 18446744073709505536LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x338 = UINT8_MAX;
	uint8_t x339 = 1U;

	t77 = (x337-((x338^x339)|x340));

	if (t77 != 65LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = 450493LLU;
	int16_t x343 = INT16_MIN;
	static int32_t x344 = INT32_MAX;
	volatile uint64_t t78 = 553539747LLU;

	t78 = (x341-((x342^x343)|x344));

	if (t78 != 18446744071562518462LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	uint32_t x348 = 767197U;
	static volatile int64_t t79 = 1152718495719LL;

	t79 = (x345-((x346^x347)|x348));

	if (t79 != 9223372036853987077LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x351 = -1;
	int32_t t80 = -11820340;

	t80 = (x349-((x350^x351)|x352));

	if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x353 = 1312LL;
	volatile uint32_t x355 = UINT32_MAX;
	volatile int16_t x356 = 15;
	int64_t t81 = -248764318LL;

	t81 = (x353-((x354^x355)|x356));

	if (t81 != 1185LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x357 = 0;
	int64_t x358 = -1LL;
	int8_t x359 = -1;
	volatile int8_t x360 = 0;
	int64_t t82 = 1391714180985LL;

	t82 = (x357-((x358^x359)|x360));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x361 = -1;
	int64_t x362 = INT64_MAX;
	int64_t t83 = -3173245541LL;

	t83 = (x361-((x362^x363)|x364));

	if (t83 != 3LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = 2;
	uint64_t x366 = 1053456419611LLU;
	int64_t x367 = -1LL;
	static uint16_t x368 = UINT16_MAX;

	t84 = (x365-((x366^x367)|x368));

	if (t84 != 1053456400387LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MIN;
	volatile uint16_t x372 = 11606U;

	t85 = (x369-((x370^x371)|x372));

	if (t85 != 9223372036854763292LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = INT16_MAX;
	uint32_t x378 = 315U;
	int8_t x379 = 1;
	int8_t x380 = -1;
	static volatile uint32_t t86 = 1U;

	t86 = (x377-((x378^x379)|x380));

	if (t86 != 32768U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x382 = -1;
	uint16_t x384 = 87U;
	static int32_t t87 = -11;

	t87 = (x381-((x382^x383)|x384));

	if (t87 != 65704) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = -1;
	int8_t x386 = INT8_MAX;
	static volatile int64_t x388 = -11632599525173308LL;
	uint64_t t88 = 8LLU;

	t88 = (x385-((x386^x387)|x388));

	if (t88 != 11632599525173249LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x390 = 0LL;
	int16_t x391 = -1;
	int8_t x392 = -22;

	t89 = (x389-((x390^x391)|x392));

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	uint32_t x395 = 1946403U;
	int32_t x396 = INT32_MIN;
	static volatile uint32_t t90 = 772U;

	t90 = (x393-((x394^x395)|x396));

	if (t90 != 1913693U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x398 = -13245;
	static int8_t x399 = INT8_MIN;
	int32_t t91 = -233419;

	t91 = (x397-((x398^x399)|x400));

	if (t91 != -13249) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x401 = -30;
	int32_t x402 = 11468618;
	static uint32_t x404 = UINT32_MAX;
	uint32_t t92 = 21U;

	t92 = (x401-((x402^x403)|x404));

	if (t92 != 4294967267U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x405 = -1569;
	static uint64_t x407 = 5367LLU;
	volatile uint8_t x408 = 5U;
	static volatile uint64_t t93 = 3012575526434LLU;

	t93 = (x405-((x406^x407)|x408));

	if (t93 != 18446744073709544680LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x411 = INT8_MIN;
	int16_t x412 = -1;
	int32_t t94 = -748424;

	t94 = (x409-((x410^x411)|x412));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = INT8_MIN;
	static int32_t x414 = INT32_MAX;
	volatile int64_t x415 = INT64_MIN;
	static volatile int8_t x416 = -1;
	volatile int64_t t95 = 19166LL;

	t95 = (x413-((x414^x415)|x416));

	if (t95 != -127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = 5127166;
	int64_t x418 = -1LL;
	int16_t x419 = INT16_MIN;
	uint32_t x420 = UINT32_MAX;

	t96 = (x417-((x418^x419)|x420));

	if (t96 != -4289840129LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x421 = UINT8_MAX;
	uint32_t x423 = UINT32_MAX;
	volatile int16_t x424 = -457;
	static volatile uint32_t t97 = 1U;

	t97 = (x421-((x422^x423)|x424));

	if (t97 != 576U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x425 = UINT64_MAX;
	uint16_t x426 = UINT16_MAX;
	volatile uint8_t x427 = 0U;
	uint64_t t98 = 113274993LLU;

	t98 = (x425-((x426^x427)|x428));

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x429 = 52;
	int16_t x430 = INT16_MAX;
	uint64_t x431 = 54577074LLU;
	volatile uint64_t t99 = 80LLU;

	t99 = (x429-((x430^x431)|x432));

	if (t99 != 18446707262753358791LLU) { NG(); } else { ; }
	
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

