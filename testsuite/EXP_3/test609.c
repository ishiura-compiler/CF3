#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
int32_t x2 = INT32_MAX;
volatile int64_t x3 = INT64_MIN;
int8_t x4 = INT8_MAX;
int32_t x18 = -3;
volatile int64_t t4 = 15659221214LL;
int16_t x43 = INT16_MAX;
static volatile uint32_t t10 = 1614854116U;
int16_t x45 = INT16_MIN;
volatile int32_t t11 = -7;
int16_t x61 = INT16_MIN;
volatile int16_t x63 = -1;
uint16_t x70 = 19U;
uint16_t x77 = UINT16_MAX;
uint32_t x84 = UINT32_MAX;
static int32_t x86 = INT32_MAX;
int8_t x89 = 0;
volatile int64_t x92 = -1LL;
int64_t x97 = -1LL;
uint64_t x98 = UINT64_MAX;
int64_t x103 = -54569361550LL;
int32_t x110 = INT32_MAX;
int32_t x111 = -1;
int16_t x136 = INT16_MIN;
static int32_t x139 = 98540813;
volatile int64_t t33 = 249213976LL;
int64_t x141 = 1214543LL;
uint8_t x145 = 11U;
int16_t x147 = INT16_MAX;
uint16_t x152 = 1U;
int32_t x157 = INT32_MIN;
uint32_t x165 = 328U;
int32_t t43 = 24456456;
static int8_t x183 = -61;
int32_t x190 = INT32_MAX;
int64_t x202 = 27LL;
uint16_t x206 = UINT16_MAX;
static int8_t x207 = INT8_MIN;
static volatile int8_t x208 = -1;
int32_t x214 = -3;
static int64_t x224 = INT64_MAX;
int64_t x225 = INT64_MAX;
static int64_t t55 = 1023647461643LL;
volatile int16_t x234 = 2;
volatile uint32_t x237 = 669574479U;
volatile uint16_t x247 = UINT16_MAX;
int64_t x253 = 7780762LL;
int64_t x264 = 7623731242LL;
int64_t x267 = INT64_MIN;
volatile int8_t x270 = INT8_MIN;
static int32_t x271 = INT32_MIN;
volatile int16_t x272 = INT16_MIN;
int16_t x293 = -2284;
uint64_t t72 = 5611LLU;
static volatile int64_t x297 = INT64_MAX;
static uint8_t x299 = 60U;
volatile int32_t x300 = -1;
static uint8_t x309 = 1U;
static volatile int64_t x310 = INT64_MIN;
uint64_t x311 = 12132958LLU;
uint64_t t75 = 149317341LLU;
static int32_t x315 = -1;
int32_t x320 = -317110248;
int16_t x324 = -1;
volatile int64_t t78 = 37LL;
int8_t x329 = 13;
volatile int64_t x330 = INT64_MAX;
uint64_t t80 = 128LLU;
static uint16_t x333 = UINT16_MAX;
volatile int32_t t82 = 298334;
static int64_t x347 = 379985760421013LL;
static volatile uint64_t x348 = UINT64_MAX;
static int32_t t85 = 25;
int64_t t86 = -126493447831LL;
int64_t x358 = 176564926616359LL;
volatile int32_t x362 = -454142;
volatile int16_t x366 = INT16_MIN;
static volatile int8_t x368 = INT8_MIN;
uint32_t x373 = 27059U;
int64_t t93 = 61348214LL;
static int8_t x385 = -31;
int8_t x387 = INT8_MIN;
static uint64_t x388 = 31650926976856412LLU;
int64_t x389 = INT64_MAX;
volatile int32_t x401 = -1;
int64_t t99 = 793901LL;


void f0(void) {
	int64_t t0 = -3361906212593LL;

	t0 = ((x1==x2)&(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 24;
	static uint16_t x6 = 1U;
	int32_t x7 = -1;
	uint32_t x8 = UINT32_MAX;
	static volatile uint32_t t1 = 436U;

	t1 = ((x5==x6)&(x7/x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 42U;
	int16_t x10 = INT16_MIN;
	volatile int32_t x11 = 80;
	int64_t x12 = -1LL;
	volatile int64_t t2 = -3237667924739881LL;

	t2 = ((x9==x10)&(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	int32_t x15 = 65;
	int64_t x16 = INT64_MIN;
	static int64_t t3 = 539811LL;

	t3 = ((x13==x14)&(x15/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = -435042633LL;

	t4 = ((x17==x18)&(x19/x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile uint64_t x22 = UINT64_MAX;
	uint32_t x23 = 51928962U;
	uint16_t x24 = 1U;
	volatile uint32_t t5 = 30621U;

	t5 = ((x21==x22)&(x23/x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -125;
	volatile uint8_t x26 = UINT8_MAX;
	static int64_t x27 = -8635304365773863LL;
	static int8_t x28 = INT8_MIN;
	int64_t t6 = -174226934LL;

	t6 = ((x25==x26)&(x27/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	static volatile uint8_t x30 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = INT8_MAX;
	int32_t t7 = 7264;

	t7 = ((x29==x30)&(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = 4749;
	volatile uint64_t x35 = 3426493372564266LLU;
	int16_t x36 = 4;
	volatile uint64_t t8 = 363LLU;

	t8 = ((x33==x34)&(x35/x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 5U;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = 26325LLU;
	uint64_t t9 = 4826054637623LLU;

	t9 = ((x37==x38)&(x39/x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 4U;
	static volatile uint32_t x42 = UINT32_MAX;
	uint32_t x44 = 1260373182U;

	t10 = ((x41==x42)&(x43/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x46 = -1LL;
	int8_t x47 = -1;
	uint16_t x48 = UINT16_MAX;

	t11 = ((x45==x46)&(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -183007520;
	uint64_t x50 = 5122129988LLU;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 0LLU;

	t12 = ((x49==x50)&(x51/x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -179254633;
	static volatile int32_t x54 = -1;
	static int64_t x55 = -52827237141LL;
	int16_t x56 = INT16_MAX;
	volatile int64_t t13 = 262113067045910854LL;

	t13 = ((x53==x54)&(x55/x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x62 = 514836562U;
	uint64_t x64 = 43LLU;
	volatile uint64_t t14 = 21368LLU;

	t14 = ((x61==x62)&(x63/x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	static int8_t x66 = -3;
	static uint8_t x67 = 1U;
	uint32_t x68 = 689882898U;
	uint32_t t15 = 77U;

	t15 = ((x65==x66)&(x67/x68));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	volatile uint16_t x71 = 18U;
	int64_t x72 = -65393397LL;
	int64_t t16 = 6207LL;

	t16 = ((x69==x70)&(x71/x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	static volatile int32_t x74 = INT32_MAX;
	uint32_t x75 = 75U;
	uint8_t x76 = 1U;
	uint32_t t17 = 36933U;

	t17 = ((x73==x74)&(x75/x76));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 27059;
	uint16_t x79 = 6U;
	int16_t x80 = INT16_MAX;
	int32_t t18 = 188;

	t18 = ((x77==x78)&(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 26;
	volatile int64_t x82 = 170271708182219170LL;
	volatile uint16_t x83 = UINT16_MAX;
	volatile uint32_t t19 = 1716U;

	t19 = ((x81==x82)&(x83/x84));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	uint8_t x87 = 0U;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t20 = -105;

	t20 = ((x85==x86)&(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x90 = 825534178U;
	int32_t x91 = -124930;
	static int64_t t21 = -185271435346599LL;

	t21 = ((x89==x90)&(x91/x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	volatile int64_t x94 = -282927460041814767LL;
	volatile int8_t x95 = -24;
	static int32_t x96 = -1345;
	int32_t t22 = 113;

	t22 = ((x93==x94)&(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x99 = -1;
	static uint16_t x100 = UINT16_MAX;
	int32_t t23 = -77;

	t23 = ((x97==x98)&(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	static int32_t x102 = -1;
	uint32_t x104 = 3038258U;
	int64_t t24 = 505117075453893961LL;

	t24 = ((x101==x102)&(x103/x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	static int8_t x107 = INT8_MIN;
	volatile int32_t x108 = INT32_MIN;
	int32_t t25 = -219841;

	t25 = ((x105==x106)&(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MAX;
	volatile int16_t x112 = -1;
	int32_t t26 = 42556;

	t26 = ((x109==x110)&(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = -1;
	volatile int8_t x114 = 0;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MAX;
	volatile uint64_t t27 = 569525976780748077LLU;

	t27 = ((x113==x114)&(x115/x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 103857U;
	static uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;
	volatile int64_t t28 = -29444017538LL;

	t28 = ((x117==x118)&(x119/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	volatile int64_t x123 = INT64_MIN;
	uint16_t x124 = UINT16_MAX;
	int64_t t29 = -231731568222363LL;

	t29 = ((x121==x122)&(x123/x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MAX;
	static int16_t x128 = INT16_MIN;
	volatile int32_t t30 = 112338532;

	t30 = ((x125==x126)&(x127/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 1;
	int8_t x130 = -27;
	uint32_t x131 = 97U;
	int16_t x132 = INT16_MAX;
	static volatile uint32_t t31 = 52085521U;

	t31 = ((x129==x130)&(x131/x132));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -845463LL;
	int16_t x134 = INT16_MAX;
	int64_t x135 = INT64_MAX;
	int64_t t32 = -20612978072LL;

	t32 = ((x133==x134)&(x135/x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -88;
	uint64_t x138 = UINT64_MAX;
	volatile int64_t x140 = INT64_MAX;

	t33 = ((x137==x138)&(x139/x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = -4;
	volatile uint64_t x143 = 555275319LLU;
	uint64_t x144 = 195724819LLU;
	uint64_t t34 = 223966901LLU;

	t34 = ((x141==x142)&(x143/x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = -389LL;
	int8_t x148 = INT8_MIN;
	static int32_t t35 = 4693337;

	t35 = ((x145==x146)&(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	volatile uint32_t x150 = 1074914U;
	int32_t x151 = INT32_MAX;
	static volatile int32_t t36 = -4047;

	t36 = ((x149==x150)&(x151/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -7;
	int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	int8_t x156 = -2;
	int32_t t37 = 0;

	t37 = ((x153==x154)&(x155/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = INT8_MAX;
	static int32_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t38 = 4071705LLU;

	t38 = ((x157==x158)&(x159/x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 27480536U;
	int16_t x162 = INT16_MAX;
	uint16_t x163 = 1949U;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t39 = 112943;

	t39 = ((x161==x162)&(x163/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = INT32_MAX;
	static int8_t x167 = 22;
	int16_t x168 = INT16_MIN;
	int32_t t40 = 321479328;

	t40 = ((x165==x166)&(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -1;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = 318428781U;
	uint16_t x172 = UINT16_MAX;
	uint32_t t41 = 126U;

	t41 = ((x169==x170)&(x171/x172));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	volatile int16_t x174 = -1;
	static int32_t x175 = -1;
	int64_t x176 = 3415229141443LL;
	volatile int64_t t42 = 72189169978059513LL;

	t42 = ((x173==x174)&(x175/x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x177 = 24;
	static uint16_t x178 = UINT16_MAX;
	int16_t x179 = INT16_MAX;
	int8_t x180 = -57;

	t43 = ((x177==x178)&(x179/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int8_t x182 = INT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = -480;

	t44 = ((x181==x182)&(x183/x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = INT32_MIN;
	static int16_t x186 = 1;
	int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MIN;
	int32_t t45 = 11;

	t45 = ((x185==x186)&(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = -1480388;
	int16_t x191 = -2496;
	static volatile int64_t x192 = -41826190LL;
	int64_t t46 = -7510023524LL;

	t46 = ((x189==x190)&(x191/x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = INT16_MIN;
	static int32_t t47 = 2777;

	t47 = ((x193==x194)&(x195/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = 114U;
	uint64_t x200 = 5LLU;
	uint64_t t48 = 885LLU;

	t48 = ((x197==x198)&(x199/x200));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = INT32_MIN;
	static volatile int64_t x203 = 232009LL;
	int32_t x204 = INT32_MIN;
	int64_t t49 = -248436028623207671LL;

	t49 = ((x201==x202)&(x203/x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = INT64_MAX;
	volatile int32_t t50 = -1;

	t50 = ((x205==x206)&(x207/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = UINT8_MAX;
	uint16_t x210 = UINT16_MAX;
	static uint32_t x211 = UINT32_MAX;
	uint16_t x212 = UINT16_MAX;
	uint32_t t51 = 50675U;

	t51 = ((x209==x210)&(x211/x212));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x213 = INT16_MIN;
	uint16_t x215 = 17097U;
	volatile uint64_t x216 = 50478886468LLU;
	volatile uint64_t t52 = 433263977680577LLU;

	t52 = ((x213==x214)&(x215/x216));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = -385;
	int64_t x218 = -1LL;
	static uint64_t x219 = UINT64_MAX;
	volatile int8_t x220 = INT8_MIN;
	volatile uint64_t t53 = 17LLU;

	t53 = ((x217==x218)&(x219/x220));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x221 = 2933U;
	int64_t x222 = -17505475295673LL;
	uint64_t x223 = 9875100774LLU;
	volatile uint64_t t54 = 37883LLU;

	t54 = ((x221==x222)&(x223/x224));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x226 = -191;
	int64_t x227 = 562731LL;
	uint8_t x228 = 27U;

	t55 = ((x225==x226)&(x227/x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x229 = 249709899924227LLU;
	volatile int64_t x230 = -1LL;
	static int64_t x231 = INT64_MAX;
	uint8_t x232 = 12U;
	volatile int64_t t56 = 8805289265563LL;

	t56 = ((x229==x230)&(x231/x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	int16_t x235 = INT16_MIN;
	int32_t x236 = 2771;
	static volatile int32_t t57 = 569;

	t57 = ((x233==x234)&(x235/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x238 = INT64_MAX;
	volatile int8_t x239 = INT8_MIN;
	volatile int64_t x240 = 179598352828521LL;
	static volatile int64_t t58 = -16986328183139LL;

	t58 = ((x237==x238)&(x239/x240));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x241 = 4U;
	volatile uint8_t x242 = 0U;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;
	static volatile int64_t t59 = -52751667777254LL;

	t59 = ((x241==x242)&(x243/x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -372;
	uint32_t x246 = 1U;
	uint8_t x248 = 2U;
	volatile int32_t t60 = -959;

	t60 = ((x245==x246)&(x247/x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = 11U;
	static int8_t x250 = -1;
	static uint8_t x251 = 15U;
	uint8_t x252 = 5U;
	static int32_t t61 = -60507;

	t61 = ((x249==x250)&(x251/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 1306U;
	int16_t x256 = -1;
	uint32_t t62 = 12U;

	t62 = ((x253==x254)&(x255/x256));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	volatile int8_t x259 = -1;
	int16_t x260 = -660;
	volatile int32_t t63 = 14;

	t63 = ((x257==x258)&(x259/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 9U;
	static uint8_t x263 = 91U;
	volatile int64_t t64 = 253580882LL;

	t64 = ((x261==x262)&(x263/x264));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	int8_t x266 = INT8_MAX;
	static int32_t x268 = INT32_MIN;
	static int64_t t65 = -13435047658846723LL;

	t65 = ((x265==x266)&(x267/x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MAX;
	volatile int32_t t66 = 24982887;

	t66 = ((x269==x270)&(x271/x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = INT32_MIN;
	uint16_t x275 = 3037U;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t67 = -61882808LL;

	t67 = ((x273==x274)&(x275/x276));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -109084067;
	static int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 3917296041654701LLU;
	volatile int8_t x280 = -1;
	uint64_t t68 = 87LLU;

	t68 = ((x277==x278)&(x279/x280));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 9485198LLU;
	int32_t x282 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile int8_t x284 = -48;
	volatile uint64_t t69 = 318083091822LLU;

	t69 = ((x281==x282)&(x283/x284));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	uint64_t x287 = 2474245125LLU;
	static uint32_t x288 = 63221U;
	static uint64_t t70 = 178147374632893LLU;

	t70 = ((x285==x286)&(x287/x288));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 1U;
	volatile uint32_t x290 = UINT32_MAX;
	volatile uint64_t x291 = 576381LLU;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t71 = 183685432967LLU;

	t71 = ((x289==x290)&(x291/x292));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x294 = UINT32_MAX;
	static int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = UINT64_MAX;

	t72 = ((x293==x294)&(x295/x296));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x298 = UINT64_MAX;
	int32_t t73 = -6;

	t73 = ((x297==x298)&(x299/x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -1;
	int8_t x302 = 17;
	int16_t x303 = INT16_MIN;
	static int8_t x304 = INT8_MIN;
	int32_t t74 = -3;

	t74 = ((x301==x302)&(x303/x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x312 = INT8_MIN;

	t75 = ((x309==x310)&(x311/x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = INT16_MAX;
	uint16_t x316 = 9701U;
	volatile int32_t t76 = -37;

	t76 = ((x313==x314)&(x315/x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int16_t x318 = 1;
	static int16_t x319 = INT16_MAX;
	static int32_t t77 = 535773714;

	t77 = ((x317==x318)&(x319/x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = 48;
	static uint32_t x322 = 10U;
	static int64_t x323 = -1LL;

	t78 = ((x321==x322)&(x323/x324));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 3748823219285325075LLU;
	uint64_t t79 = 6804530792373LLU;

	t79 = ((x325==x326)&(x327/x328));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x331 = INT16_MIN;
	uint64_t x332 = 374541LLU;

	t80 = ((x329==x330)&(x331/x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x334 = UINT16_MAX;
	int16_t x335 = INT16_MAX;
	volatile int16_t x336 = -15151;
	volatile int32_t t81 = -554925;

	t81 = ((x333==x334)&(x335/x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x337 = 165U;
	int16_t x338 = INT16_MAX;
	static int8_t x339 = INT8_MIN;
	static int32_t x340 = -3255;

	t82 = ((x337==x338)&(x339/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	volatile int32_t x342 = INT32_MIN;
	volatile int64_t x343 = INT64_MIN;
	int16_t x344 = 5;
	int64_t t83 = -41083656864LL;

	t83 = ((x341==x342)&(x343/x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	volatile uint64_t t84 = 7261041681671960LLU;

	t84 = ((x345==x346)&(x347/x348));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	static int8_t x351 = INT8_MAX;
	volatile uint8_t x352 = 22U;

	t85 = ((x349==x350)&(x351/x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x353 = 2621276U;
	int8_t x354 = INT8_MAX;
	volatile uint8_t x355 = UINT8_MAX;
	int64_t x356 = INT64_MAX;

	t86 = ((x353==x354)&(x355/x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x357 = 0U;
	int32_t x359 = 14;
	uint16_t x360 = UINT16_MAX;
	int32_t t87 = 6;

	t87 = ((x357==x358)&(x359/x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x361 = -1;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 2U;
	int32_t t88 = -45;

	t88 = ((x361==x362)&(x363/x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = INT32_MAX;
	uint16_t x367 = UINT16_MAX;
	int32_t t89 = 116834;

	t89 = ((x365==x366)&(x367/x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = INT64_MIN;
	int8_t x370 = 0;
	static uint64_t x371 = 227237140633LLU;
	static uint32_t x372 = UINT32_MAX;
	uint64_t t90 = 23272LLU;

	t90 = ((x369==x370)&(x371/x372));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = INT64_MIN;
	static volatile uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MIN;
	uint64_t t91 = 2953205042LLU;

	t91 = ((x373==x374)&(x375/x376));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = 422;
	uint32_t x378 = 32714U;
	static int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MAX;
	volatile int64_t t92 = 4163926014LL;

	t92 = ((x377==x378)&(x379/x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 26856U;
	int8_t x382 = 49;
	volatile int64_t x383 = -1LL;
	static int16_t x384 = -1;

	t93 = ((x381==x382)&(x383/x384));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = INT16_MAX;
	static volatile uint64_t t94 = 236944401LLU;

	t94 = ((x385==x386)&(x387/x388));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x390 = 292LLU;
	volatile uint64_t x391 = 17961LLU;
	static uint64_t x392 = UINT64_MAX;
	uint64_t t95 = 119488214644LLU;

	t95 = ((x389==x390)&(x391/x392));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x393 = 39309U;
	uint16_t x394 = 24025U;
	volatile int8_t x395 = INT8_MAX;
	int16_t x396 = -1;
	volatile int32_t t96 = -3032;

	t96 = ((x393==x394)&(x395/x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x397 = -1;
	volatile uint64_t x398 = 8777228900495855LLU;
	static int8_t x399 = INT8_MAX;
	uint64_t x400 = 91039680LLU;
	static volatile uint64_t t97 = 976667583125678LLU;

	t97 = ((x397==x398)&(x399/x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x402 = INT64_MAX;
	int8_t x403 = INT8_MIN;
	uint64_t x404 = 456291812590LLU;
	static volatile uint64_t t98 = 37LLU;

	t98 = ((x401==x402)&(x403/x404));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x406 = 49701386303543LLU;
	int64_t x407 = INT64_MIN;
	volatile int64_t x408 = 393608LL;

	t99 = ((x405==x406)&(x407/x408));

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

