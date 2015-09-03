#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 1;
int16_t x3 = -1;
int64_t x5 = -1LL;
int64_t x6 = INT64_MIN;
static int32_t x17 = -1;
int64_t x29 = INT64_MIN;
int16_t x33 = INT16_MIN;
volatile int8_t x38 = -36;
volatile int32_t t9 = -22;
static int16_t x41 = 14;
int16_t x43 = 24;
static volatile int32_t x44 = -348384994;
static int32_t x49 = INT32_MIN;
int64_t x51 = INT64_MAX;
volatile int32_t t14 = 11267;
int32_t x66 = INT32_MIN;
volatile uint64_t x67 = UINT64_MAX;
uint64_t x68 = 294LLU;
int32_t x69 = -1;
uint16_t x73 = 16U;
int8_t x82 = 0;
int8_t x89 = -1;
uint8_t x90 = 26U;
volatile int32_t t23 = -135040897;
static volatile uint64_t t24 = 1845693447LLU;
uint8_t x102 = 12U;
static volatile uint16_t x109 = 55U;
int16_t x113 = 5;
volatile uint32_t x118 = 5U;
volatile int32_t t29 = 15;
volatile int32_t t30 = -1496540;
volatile int16_t x126 = 1;
volatile uint64_t x127 = UINT64_MAX;
volatile int32_t t31 = -7;
int8_t x131 = -1;
static int32_t x134 = -1;
volatile int32_t x137 = INT32_MIN;
int8_t x151 = -2;
int8_t x155 = INT8_MAX;
static volatile uint16_t x165 = UINT16_MAX;
int64_t x166 = -1LL;
int8_t x174 = INT8_MIN;
int64_t t43 = 2763LL;
int16_t x177 = 2;
volatile int64_t t44 = 407193138810585LL;
uint32_t t45 = 1607333138U;
volatile int32_t t47 = -418356353;
int64_t t51 = -2868842017276859954LL;
static uint16_t x212 = 1U;
static volatile int8_t x218 = INT8_MAX;
static uint64_t x223 = UINT64_MAX;
int64_t x226 = INT64_MIN;
int32_t x233 = INT32_MIN;
int32_t x235 = -365;
int8_t x238 = INT8_MAX;
int16_t x240 = 482;
static int32_t t61 = -10859889;
volatile int16_t x250 = 0;
volatile int64_t t62 = -1194971825800LL;
int8_t x256 = 28;
int32_t x257 = 1;
int32_t x258 = -1;
uint64_t x263 = 118LLU;
int64_t x264 = -1LL;
int8_t x268 = INT8_MIN;
uint16_t x271 = 13U;
static uint32_t x279 = 1414U;
int64_t t70 = -108LL;
uint32_t x289 = 715786U;
uint8_t x295 = 1U;
uint8_t x307 = 33U;
uint8_t x309 = 0U;
int32_t x321 = -1;
static int32_t x324 = -1;
static int32_t t80 = -640;
static int16_t x328 = -1;
uint32_t x330 = 25U;
volatile int32_t x332 = -1;
int16_t x340 = INT16_MAX;
volatile uint64_t t84 = 2679LLU;
volatile int32_t t85 = -1001;
static int16_t x356 = INT16_MAX;
int8_t x360 = 0;
int64_t x362 = 2899829LL;
static uint16_t x363 = 6U;
static volatile int64_t t90 = 1595337539LL;
int32_t x369 = 527024;
uint8_t x372 = UINT8_MAX;
int32_t x376 = 742882827;
uint64_t x389 = 8719940LLU;
uint16_t x392 = 69U;
static int64_t x396 = INT64_MIN;
static uint32_t x398 = 12443441U;


void f0(void) {
	int32_t x2 = -1;
	static int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -19;

	t0 = ((x1&(x2==x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 25984907U;
	volatile uint16_t x8 = UINT16_MAX;
	int64_t t1 = -1957525401LL;

	t1 = ((x5&(x6==x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static int32_t x10 = -406;
	static int16_t x11 = -1;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 0LL;

	t2 = ((x9&(x10==x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	volatile int8_t x14 = INT8_MAX;
	volatile int64_t x15 = -1LL;
	volatile uint64_t x16 = 11262680358LLU;
	volatile uint64_t t3 = 3878982LLU;

	t3 = ((x13&(x14==x15))&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	volatile int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 19984113;

	t4 = ((x17&(x18==x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 9424U;
	static int64_t x22 = -1LL;
	int8_t x23 = INT8_MIN;
	volatile int16_t x24 = -1;
	static volatile int32_t t5 = 45;

	t5 = ((x21&(x22==x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 57559867731LLU;
	uint16_t x26 = 5U;
	volatile uint32_t x27 = 2728656U;
	uint8_t x28 = UINT8_MAX;
	uint64_t t6 = 375411LLU;

	t6 = ((x25&(x26==x27))&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MIN;
	volatile uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 2685158494LLU;

	t7 = ((x29&(x30==x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	int64_t x35 = -12051821075645LL;
	static uint16_t x36 = 390U;
	volatile int32_t t8 = 16189;

	t8 = ((x33&(x34==x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -10;
	volatile int16_t x39 = INT16_MAX;
	int32_t x40 = -1;

	t9 = ((x37&(x38==x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = -1LL;
	volatile int32_t t10 = 5;

	t10 = ((x41&(x42==x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	int32_t x47 = 803;
	static int32_t x48 = INT32_MIN;
	int32_t t11 = 17848;

	t11 = ((x45&(x46==x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 20524LLU;
	int16_t x52 = 3913;
	volatile int32_t t12 = -7618;

	t12 = ((x49&(x50==x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x53 = 21U;
	int16_t x54 = -472;
	static uint64_t x55 = 28832095824LLU;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 14996562;

	t13 = ((x53&(x54==x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	int8_t x60 = -16;

	t14 = ((x57&(x58==x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -90824740126LL;
	uint16_t x62 = 3U;
	volatile int8_t x63 = INT8_MAX;
	volatile int32_t x64 = INT32_MAX;
	int64_t t15 = 3594149822184343LL;

	t15 = ((x61&(x62==x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	uint64_t t16 = 10212959889LLU;

	t16 = ((x65&(x66==x67))&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -41935389;

	t17 = ((x69&(x70==x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x74 = INT64_MIN;
	static volatile uint64_t x75 = 19LLU;
	int32_t x76 = -1;
	int32_t t18 = 7;

	t18 = ((x73&(x74==x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	static uint16_t x79 = UINT16_MAX;
	int64_t x80 = -1LL;
	static int64_t t19 = 434656929LL;

	t19 = ((x77&(x78==x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint8_t x83 = 0U;
	volatile int32_t x84 = 351496094;
	int32_t t20 = 991;

	t20 = ((x81&(x82==x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 1U;
	volatile uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = -16;
	static int16_t x88 = 8;
	int32_t t21 = -275;

	t21 = ((x85&(x86==x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = 0;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 0;

	t22 = ((x89&(x90==x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MIN;
	int8_t x95 = -3;
	uint8_t x96 = UINT8_MAX;

	t23 = ((x93&(x94==x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 793U;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MIN;
	static uint64_t x100 = 598813935295854385LLU;

	t24 = ((x97&(x98==x99))&x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 2133047LL;
	uint8_t x103 = 1U;
	int64_t x104 = -1774708354559850595LL;
	volatile int64_t t25 = -100LL;

	t25 = ((x101&(x102==x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 58;
	int64_t x106 = INT64_MAX;
	int16_t x107 = -167;
	static uint64_t x108 = 4144713085243785236LLU;
	volatile uint64_t t26 = 906514LLU;

	t26 = ((x105&(x106==x107))&x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x110 = INT32_MAX;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = -1;
	static volatile int32_t t27 = -20;

	t27 = ((x109&(x110==x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x114 = 38U;
	int64_t x115 = INT64_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t28 = 3136885LL;

	t28 = ((x113&(x114==x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int32_t x119 = 2094519;
	uint16_t x120 = UINT16_MAX;

	t29 = ((x117&(x118==x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 3989U;
	volatile int16_t x122 = 0;
	static int8_t x123 = INT8_MAX;
	uint8_t x124 = 5U;

	t30 = ((x121&(x122==x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x128 = INT32_MIN;

	t31 = ((x125&(x126==x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static volatile int8_t x130 = INT8_MAX;
	int64_t x132 = -1LL;
	int64_t t32 = -1773101394LL;

	t32 = ((x129&(x130==x131))&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int8_t x135 = -5;
	uint8_t x136 = 43U;
	int32_t t33 = 667760382;

	t33 = ((x133&(x134==x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	uint64_t t34 = 0LLU;

	t34 = ((x137&(x138==x139))&x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 248;
	static uint32_t x142 = 182154U;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = 33;
	int32_t t35 = -1357;

	t35 = ((x141&(x142==x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 2058965894LL;
	volatile int32_t x146 = INT32_MAX;
	int32_t x147 = -1;
	volatile int64_t x148 = -1LL;
	static int64_t t36 = -17520986442LL;

	t36 = ((x145&(x146==x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 516290109921120019LL;
	int8_t x150 = INT8_MIN;
	int8_t x152 = -1;
	volatile int64_t t37 = -5611853256LL;

	t37 = ((x149&(x150==x151))&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	volatile int16_t x156 = INT16_MIN;
	int64_t t38 = 24550902LL;

	t38 = ((x153&(x154==x155))&x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MAX;
	static int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	static int8_t x160 = -1;
	int32_t t39 = 82;

	t39 = ((x157&(x158==x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 62U;
	volatile uint8_t x162 = 3U;
	int32_t x163 = 2468880;
	volatile int32_t x164 = INT32_MAX;
	static int32_t t40 = 145113952;

	t40 = ((x161&(x162==x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x167 = INT64_MAX;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -50081;

	t41 = ((x165&(x166==x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = 2LLU;
	int16_t x170 = INT16_MAX;
	int16_t x171 = -563;
	volatile uint32_t x172 = 3U;
	uint64_t t42 = 4030LLU;

	t42 = ((x169&(x170==x171))&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 28U;
	static int32_t x175 = INT32_MIN;
	volatile int64_t x176 = INT64_MAX;

	t43 = ((x173&(x174==x175))&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = INT8_MIN;
	static uint16_t x179 = 8979U;
	int64_t x180 = -105577273868916LL;

	t44 = ((x177&(x178==x179))&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 124429;
	static uint16_t x182 = 9769U;
	volatile int16_t x183 = INT16_MIN;
	static volatile uint32_t x184 = UINT32_MAX;

	t45 = ((x181&(x182==x183))&x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -2355;
	volatile int64_t x186 = -180719598LL;
	static uint8_t x187 = 20U;
	uint32_t x188 = UINT32_MAX;
	uint32_t t46 = 2112128922U;

	t46 = ((x185&(x186==x187))&x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	static volatile int32_t x190 = INT32_MAX;
	uint64_t x191 = UINT64_MAX;
	static int16_t x192 = INT16_MAX;

	t47 = ((x189&(x190==x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 0U;
	int64_t x196 = 1LL;
	static int64_t t48 = 148645LL;

	t48 = ((x193&(x194==x195))&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x197 = 1145329522393986688LLU;
	uint64_t x198 = UINT64_MAX;
	uint16_t x199 = 130U;
	volatile int16_t x200 = -1;
	volatile uint64_t t49 = 14359913347997724LLU;

	t49 = ((x197&(x198==x199))&x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 185;
	int8_t x202 = INT8_MAX;
	uint16_t x203 = 10U;
	volatile int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = 58481438LL;

	t50 = ((x201&(x202==x203))&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 9278;
	static volatile int8_t x206 = 1;
	uint64_t x207 = 438206587439733542LLU;
	int64_t x208 = INT64_MIN;

	t51 = ((x205&(x206==x207))&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	volatile int32_t t52 = -127956;

	t52 = ((x209&(x210==x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	static int64_t x215 = 10001075495884952LL;
	int64_t x216 = 6395798444247503LL;
	int64_t t53 = 49556012031LL;

	t53 = ((x213&(x214==x215))&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	uint8_t x219 = 16U;
	volatile int8_t x220 = INT8_MIN;
	int32_t t54 = -50;

	t54 = ((x217&(x218==x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 10;
	int64_t x222 = INT64_MIN;
	int32_t x224 = -16807556;
	int32_t t55 = -141;

	t55 = ((x221&(x222==x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -23908382185LL;
	int16_t x227 = 11078;
	int16_t x228 = INT16_MAX;
	volatile int64_t t56 = 1258584864912LL;

	t56 = ((x225&(x226==x227))&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint8_t x230 = 102U;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = 186978771638LLU;
	volatile uint64_t t57 = 5LLU;

	t57 = ((x229&(x230==x231))&x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 1U;
	uint8_t x236 = 0U;
	volatile int32_t t58 = -228135;

	t58 = ((x233&(x234==x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	uint32_t x239 = UINT32_MAX;
	int32_t t59 = -121217100;

	t59 = ((x237&(x238==x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	static int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 281224518;

	t60 = ((x241&(x242==x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x246 = 0U;
	uint16_t x247 = 4U;
	uint8_t x248 = 14U;

	t61 = ((x245&(x246==x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -95;
	int8_t x251 = INT8_MIN;
	static int64_t x252 = INT64_MIN;

	t62 = ((x249&(x250==x251))&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	uint64_t x254 = 2144241783315691LLU;
	int16_t x255 = -1;
	static volatile uint64_t t63 = 46209737207497730LLU;

	t63 = ((x253&(x254==x255))&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x259 = -1LL;
	uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t64 = 381297181LLU;

	t64 = ((x257&(x258==x259))&x260);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = INT64_MAX;
	volatile uint64_t t65 = 40418824803195907LLU;

	t65 = ((x261&(x262==x263))&x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	static int32_t x266 = INT32_MAX;
	uint8_t x267 = 109U;
	static int64_t t66 = -23461955LL;

	t66 = ((x265&(x266==x267))&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	volatile int32_t x272 = -13;
	int32_t t67 = -1;

	t67 = ((x269&(x270==x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 1751U;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 6LLU;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -21362;

	t68 = ((x273&(x274==x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 8U;
	int8_t x278 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -35201;

	t69 = ((x277&(x278==x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = -1LL;
	volatile uint32_t x282 = 325610838U;
	int64_t x283 = -1LL;
	int64_t x284 = INT64_MIN;

	t70 = ((x281&(x282==x283))&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -1;
	static int32_t x287 = INT32_MIN;
	int16_t x288 = 15;
	int32_t t71 = -1;

	t71 = ((x285&(x286==x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	volatile int16_t x291 = INT16_MIN;
	static uint64_t x292 = 23870LLU;
	uint64_t t72 = 554271532803208920LLU;

	t72 = ((x289&(x290==x291))&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = 469876047742LL;
	uint32_t x296 = 2939028U;
	volatile uint32_t t73 = 3U;

	t73 = ((x293&(x294==x295))&x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = UINT16_MAX;
	uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t74 = 781U;

	t74 = ((x297&(x298==x299))&x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = 5U;
	static uint16_t x304 = 85U;
	static volatile int32_t t75 = 1059535015;

	t75 = ((x301&(x302==x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 11545521415LLU;
	volatile int32_t x306 = 228;
	int64_t x308 = -22820824016LL;
	uint64_t t76 = 3552662207806727940LLU;

	t76 = ((x305&(x306==x307))&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x310 = 0U;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = INT64_MIN;
	int64_t t77 = -24996678493624LL;

	t77 = ((x309&(x310==x311))&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	static int32_t x314 = INT32_MIN;
	int8_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t78 = 26LLU;

	t78 = ((x313&(x314==x315))&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 1083979588U;
	volatile uint32_t t79 = 10U;

	t79 = ((x317&(x318==x319))&x320);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 735281847U;
	static int64_t x323 = 3868648744813LL;

	t80 = ((x321&(x322==x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	static uint32_t x326 = 2592U;
	static volatile uint64_t x327 = 699930690878LLU;
	volatile int32_t t81 = -15207;

	t81 = ((x325&(x326==x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 22U;
	static uint32_t x331 = UINT32_MAX;
	static volatile int32_t t82 = -1897778;

	t82 = ((x329&(x330==x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static volatile uint8_t x334 = 97U;
	volatile int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MAX;
	volatile int64_t t83 = 28427196348LL;

	t83 = ((x333&(x334==x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 35805LLU;
	volatile int8_t x338 = 2;
	int8_t x339 = -1;

	t84 = ((x337&(x338==x339))&x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MAX;
	uint32_t x342 = UINT32_MAX;
	volatile uint8_t x343 = 0U;
	int32_t x344 = INT32_MAX;

	t85 = ((x341&(x342==x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 1582LL;
	volatile uint16_t x346 = 42U;
	volatile int8_t x347 = INT8_MIN;
	static uint64_t x348 = UINT64_MAX;
	uint64_t t86 = 799LLU;

	t86 = ((x345&(x346==x347))&x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	uint64_t x350 = UINT64_MAX;
	volatile int16_t x351 = -16318;
	int32_t x352 = INT32_MIN;
	int64_t t87 = -344LL;

	t87 = ((x349&(x350==x351))&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MIN;
	uint8_t x354 = 88U;
	static int64_t x355 = 869235472880910LL;
	static int32_t t88 = 20584127;

	t88 = ((x353&(x354==x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 123836798442LLU;
	uint64_t x358 = 444127519667LLU;
	int16_t x359 = INT16_MAX;
	uint64_t t89 = 48LLU;

	t89 = ((x357&(x358==x359))&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -333LL;
	int32_t x364 = INT32_MAX;

	t90 = ((x361&(x362==x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1038;
	static uint32_t x366 = UINT32_MAX;
	int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MAX;
	int64_t t91 = 64141214LL;

	t91 = ((x365&(x366==x367))&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MAX;
	volatile int32_t t92 = 129489;

	t92 = ((x369&(x370==x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 0U;
	volatile int64_t x374 = INT64_MIN;
	static int16_t x375 = -1;
	static int32_t t93 = -15960562;

	t93 = ((x373&(x374==x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 99634310LLU;
	int16_t x378 = 1;
	int8_t x379 = 1;
	int64_t x380 = -147718259901457871LL;
	static uint64_t t94 = 314652053LLU;

	t94 = ((x377&(x378==x379))&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x381 = 62U;
	int16_t x382 = 23;
	volatile int32_t x383 = -1;
	static int16_t x384 = INT16_MIN;
	int32_t t95 = -74;

	t95 = ((x381&(x382==x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = 61;
	volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 101U;
	volatile uint32_t t96 = 34846153U;

	t96 = ((x385&(x386==x387))&x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = -1LL;
	volatile int8_t x391 = INT8_MIN;
	volatile uint64_t t97 = 156813368LLU;

	t97 = ((x389&(x390==x391))&x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 13U;
	uint64_t x394 = 19029045551LLU;
	volatile uint16_t x395 = 12U;
	int64_t t98 = 1123921LL;

	t98 = ((x393&(x394==x395))&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	static int32_t x399 = 16129013;
	static int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -444;

	t99 = ((x397&(x398==x399))&x400);

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

