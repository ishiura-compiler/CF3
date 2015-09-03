#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = -1;
static uint64_t x15 = 141274168047LLU;
int64_t x25 = -1LL;
static int32_t x28 = 130255;
volatile int8_t x31 = INT8_MIN;
int32_t x32 = INT32_MIN;
int64_t x34 = INT64_MAX;
static volatile int32_t t8 = -10319;
volatile int8_t x37 = 10;
volatile int32_t t9 = -40;
static uint32_t x42 = UINT32_MAX;
volatile int64_t t10 = -8402068220118LL;
int16_t x48 = -1;
int16_t x50 = INT16_MIN;
int64_t x60 = 121338788432LL;
uint64_t t14 = 1293526203636LLU;
static int32_t x62 = 588181;
int64_t x65 = -424746881091794LL;
int64_t x66 = -2651107879131961LL;
int16_t x67 = INT16_MIN;
static volatile int64_t t16 = 446LL;
int16_t x75 = INT16_MAX;
int16_t x79 = -1;
int32_t x80 = 7278;
int16_t x90 = INT16_MIN;
volatile int32_t t21 = 15323520;
static volatile int8_t x94 = INT8_MIN;
uint16_t x98 = 254U;
static volatile int64_t t24 = -105763903766873LL;
int16_t x105 = INT16_MAX;
int64_t x109 = 1711LL;
static volatile int16_t x131 = INT16_MAX;
int32_t x132 = 7287;
uint16_t x135 = 395U;
static int16_t x152 = -30;
volatile int32_t x155 = INT32_MAX;
int8_t x159 = INT8_MIN;
int64_t x160 = INT64_MIN;
static volatile int32_t x166 = INT32_MAX;
static int16_t x169 = -1;
int32_t t41 = 64;
int64_t x178 = -3LL;
volatile uint64_t t45 = 111704281760279564LLU;
uint8_t x191 = 0U;
static int32_t t46 = -97;
int8_t x194 = 62;
static int8_t x196 = -1;
volatile int64_t x198 = 448174671523LL;
static int32_t t49 = -5;
int64_t x205 = INT64_MIN;
int32_t x207 = INT32_MIN;
volatile int64_t t51 = 6421343355LL;
static int16_t x223 = INT16_MAX;
volatile int32_t t54 = 587168691;
volatile uint8_t x227 = UINT8_MAX;
int8_t x228 = -48;
static int16_t x229 = INT16_MIN;
int8_t x232 = INT8_MIN;
int64_t x238 = INT64_MIN;
static uint32_t x241 = 603U;
volatile uint8_t x242 = 26U;
int64_t x244 = INT64_MAX;
int16_t x245 = INT16_MAX;
int16_t x248 = INT16_MIN;
volatile int32_t x252 = INT32_MIN;
static int64_t x255 = 83230803531080311LL;
volatile int64_t t62 = -1706LL;
int32_t x266 = INT32_MAX;
int32_t t65 = 30397523;
int16_t x271 = INT16_MIN;
static int16_t x275 = INT16_MIN;
int64_t x282 = 3981212868004183LL;
volatile int8_t x284 = INT8_MAX;
int8_t x285 = 1;
volatile int16_t x287 = -1;
int16_t x292 = 659;
int16_t x293 = -13;
int64_t x298 = INT64_MAX;
volatile int32_t t75 = 1;
int8_t x321 = INT8_MAX;
volatile int64_t t79 = -77611161237LL;
int64_t x327 = INT64_MIN;
int32_t t80 = 30843802;
int8_t x335 = INT8_MIN;
int64_t x337 = INT64_MIN;
uint8_t x345 = 15U;
volatile uint8_t x349 = 62U;
static int32_t t86 = 68191115;
int8_t x360 = INT8_MIN;
int16_t x361 = -206;
int64_t x362 = 18LL;
uint8_t x363 = 0U;
uint32_t x368 = 1166248U;
volatile uint32_t t90 = 28891U;
int64_t x370 = INT64_MIN;
static uint32_t x379 = 30959U;
uint64_t x383 = UINT64_MAX;
int8_t x391 = -1;
volatile int8_t x397 = -3;
static volatile int32_t t97 = 0;
int8_t x402 = 0;
volatile int64_t t98 = 4LL;
int16_t x406 = -1;
int64_t x407 = 128407063432048LL;
int8_t x408 = 0;


void f0(void) {
	int8_t x1 = -1;
	int32_t x2 = INT32_MAX;
	static int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -151171460381LL;

	t0 = (x1/((x2<=x3)|x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = UINT8_MAX;
	static volatile int64_t x6 = -1LL;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = 3259U;
	volatile uint32_t t1 = 6513429U;

	t1 = (x5/((x6<=x7)|x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	volatile int64_t x11 = INT64_MAX;
	uint32_t x12 = 77U;
	volatile int64_t t2 = -46984839LL;

	t2 = (x9/((x10<=x11)|x12));

	if (t2 != 119784052426685400LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int32_t x14 = -35;
	static int32_t x16 = 1640;
	int32_t t3 = -430950;

	t3 = (x13/((x14<=x15)|x16));

	if (t3 != 39) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 61U;
	uint32_t x18 = 8U;
	int16_t x19 = INT16_MAX;
	static uint8_t x20 = 0U;
	volatile int32_t t4 = -1;

	t4 = (x17/((x18<=x19)|x20));

	if (t4 != 61) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 26700415666455LL;
	int8_t x22 = -1;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = 802781LLU;
	volatile uint64_t t5 = 1615814035500585LLU;

	t5 = (x21/((x22<=x23)|x24));

	if (t5 != 33259899LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = -1;
	volatile int64_t x27 = 2LL;
	volatile int64_t t6 = 8779325002LL;

	t6 = (x25/((x26<=x27)|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	static volatile int16_t x30 = 14790;
	uint64_t t7 = 381849386052000813LLU;

	t7 = (x29/((x30<=x31)|x32));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x35 = -1;
	int32_t x36 = INT32_MIN;

	t8 = (x33/((x34<=x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	int64_t x39 = -1644978434767LL;
	uint16_t x40 = 16957U;

	t9 = (x37/((x38<=x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 1LL;
	int8_t x43 = 2;
	int64_t x44 = INT64_MAX;

	t10 = (x41/((x42<=x43)|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	static int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	volatile int32_t t11 = -96;

	t11 = (x45/((x46<=x47)|x48));

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1753;
	int32_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -147827;

	t12 = (x49/((x50<=x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 23961567425872LLU;
	int8_t x54 = 1;
	static int32_t x55 = -1;
	int16_t x56 = INT16_MAX;
	uint64_t t13 = 45345195LLU;

	t13 = (x53/((x54<=x55)|x56));

	if (t13 != 731271322LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = 1993645076U;
	static int16_t x59 = -1;

	t14 = (x57/((x58<=x59)|x60));

	if (t14 != 152026769LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -191932LL;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = INT32_MAX;
	volatile int64_t t15 = 11599668844354LL;

	t15 = (x61/((x62<=x63)|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x68 = 0;

	t16 = (x65/((x66<=x67)|x68));

	if (t16 != -424746881091794LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = 0;
	volatile int32_t x74 = INT32_MIN;
	uint64_t x76 = 625670LLU;
	uint64_t t17 = 120286LLU;

	t17 = (x73/((x74<=x75)|x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	volatile uint16_t x78 = UINT16_MAX;
	int32_t t18 = 46860;

	t18 = (x77/((x78<=x79)|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 3932852258963896928LL;
	static int64_t x82 = -1404906LL;
	int64_t x83 = -33LL;
	int64_t x84 = -151209893701LL;
	volatile int64_t t19 = 355961LL;

	t19 = (x81/((x82<=x83)|x84));

	if (t19 != -26009225LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int8_t x86 = -1;
	volatile int64_t x87 = INT64_MAX;
	int64_t x88 = -166LL;
	volatile int64_t t20 = 0LL;

	t20 = (x85/((x86<=x87)|x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -3;
	int16_t x91 = -36;
	volatile int32_t x92 = -21634;

	t21 = (x89/((x90<=x91)|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 27035372650LL;
	static int32_t x95 = INT32_MAX;
	uint64_t x96 = 88622LLU;
	static volatile uint64_t t22 = 41070LLU;

	t22 = (x93/((x94<=x95)|x96));

	if (t22 != 305060LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = 2306;
	int16_t x99 = INT16_MAX;
	static uint64_t x100 = 16716785410431142LLU;
	volatile uint64_t t23 = 28059463480LLU;

	t23 = (x97/((x98<=x99)|x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	volatile int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	int64_t x104 = -129LL;

	t24 = (x101/((x102<=x103)|x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = INT32_MIN;
	static uint16_t x107 = UINT16_MAX;
	int64_t x108 = -9756833965LL;
	int64_t t25 = 0LL;

	t25 = (x105/((x106<=x107)|x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x110 = -1;
	static volatile uint64_t x111 = 295784244076688394LLU;
	static int64_t x112 = INT64_MIN;
	volatile int64_t t26 = 95LL;

	t26 = (x109/((x110<=x111)|x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 129287302059LLU;
	static volatile uint64_t x114 = 192512LLU;
	static int16_t x115 = -1;
	uint32_t x116 = UINT32_MAX;
	volatile uint64_t t27 = 3LLU;

	t27 = (x113/((x114<=x115)|x116));

	if (t27 != 30LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = 3;
	int32_t x118 = 25409466;
	int64_t x119 = -1030146738LL;
	int16_t x120 = INT16_MIN;
	int32_t t28 = 621224;

	t28 = (x117/((x118<=x119)|x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	static int16_t x124 = 5061;
	static uint32_t t29 = 46716U;

	t29 = (x121/((x122<=x123)|x124));

	if (t29 != 848640U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MIN;
	int32_t x126 = -1;
	static int32_t x127 = INT32_MAX;
	volatile int64_t x128 = -1LL;
	int64_t t30 = 2659177LL;

	t30 = (x125/((x126<=x127)|x128));

	if (t30 != 2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = -8;
	int32_t x130 = 486422;
	volatile int32_t t31 = 346162909;

	t31 = (x129/((x130<=x131)|x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = INT16_MAX;
	static int16_t x134 = INT16_MAX;
	int32_t x136 = -1;
	volatile int32_t t32 = 1394;

	t32 = (x133/((x134<=x135)|x136));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = INT8_MIN;
	static uint16_t x139 = 31U;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t33 = 10504741893LLU;

	t33 = (x137/((x138<=x139)|x140));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -13520490922LL;
	uint8_t x142 = UINT8_MAX;
	static uint32_t x143 = UINT32_MAX;
	int64_t x144 = -1LL;
	static int64_t t34 = 98048868LL;

	t34 = (x141/((x142<=x143)|x144));

	if (t34 != 13520490922LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	volatile int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MIN;
	int16_t x148 = -1;
	static volatile uint32_t t35 = 685322U;

	t35 = (x145/((x146<=x147)|x148));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -1;
	static int64_t x150 = -174077LL;
	int32_t x151 = -1;
	int32_t t36 = 1005671692;

	t36 = (x149/((x150<=x151)|x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	uint64_t x154 = 5LLU;
	int32_t x156 = INT32_MAX;
	volatile int32_t t37 = -8513;

	t37 = (x153/((x154<=x155)|x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = 77;
	int64_t t38 = 1439LL;

	t38 = (x157/((x158<=x159)|x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x161 = 0U;
	int8_t x162 = INT8_MAX;
	volatile int64_t x163 = -386789142LL;
	uint16_t x164 = 3416U;
	volatile int32_t t39 = -21345730;

	t39 = (x161/((x162<=x163)|x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -1;
	static uint16_t x167 = 183U;
	volatile int16_t x168 = -9;
	volatile int32_t t40 = 4;

	t40 = (x165/((x166<=x167)|x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x170 = 7;
	volatile int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MAX;

	t41 = (x169/((x170<=x171)|x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = 162U;
	int16_t x174 = -13;
	volatile uint8_t x175 = 0U;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t42 = 24;

	t42 = (x173/((x174<=x175)|x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 600U;
	int32_t x179 = -1;
	volatile int32_t x180 = -2252487;
	volatile int32_t t43 = -3697774;

	t43 = (x177/((x178<=x179)|x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 0U;
	int64_t x182 = -1LL;
	static int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;
	volatile int32_t t44 = 20471414;

	t44 = (x181/((x182<=x183)|x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	volatile uint64_t x188 = 3859942LLU;

	t45 = (x185/((x186<=x187)|x188));

	if (t45 != 2389509906455LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = -56;
	volatile int8_t x190 = INT8_MIN;
	uint8_t x192 = 6U;

	t46 = (x189/((x190<=x191)|x192));

	if (t46 != -8) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 94327611LLU;
	int64_t x195 = 37634347978LL;
	volatile uint64_t t47 = 251864479LLU;

	t47 = (x193/((x194<=x195)|x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MAX;
	static uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 107U;
	static volatile int32_t t48 = 6834;

	t48 = (x197/((x198<=x199)|x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -34;
	static volatile int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MAX;
	volatile int32_t x204 = -1;

	t49 = (x201/((x202<=x203)|x204));

	if (t49 != 34) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = -1545050;
	volatile uint16_t x208 = UINT16_MAX;
	volatile int64_t t50 = -773918214337070582LL;

	t50 = (x205/((x206<=x207)|x208));

	if (t50 != -140739635871744LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	int64_t x212 = 10942091025885913LL;

	t51 = (x209/((x210<=x211)|x212));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = 1;
	static int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	int32_t x216 = -2437;
	static int32_t t52 = 586135598;

	t52 = (x213/((x214<=x215)|x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 2U;
	int16_t x218 = INT16_MIN;
	int16_t x219 = -1;
	int32_t x220 = INT32_MIN;
	int32_t t53 = 539;

	t53 = (x217/((x218<=x219)|x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x221 = 12669U;
	static int8_t x222 = -1;
	static int8_t x224 = INT8_MAX;

	t54 = (x221/((x222<=x223)|x224));

	if (t54 != 99) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = -20;
	int8_t x226 = INT8_MAX;
	volatile int32_t t55 = -223;

	t55 = (x225/((x226<=x227)|x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = 34899;
	int64_t x231 = 24295848440761LL;
	static int32_t t56 = -1;

	t56 = (x229/((x230<=x231)|x232));

	if (t56 != 258) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MAX;
	volatile uint64_t x234 = 114339922465LLU;
	volatile int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	static volatile int32_t t57 = 304;

	t57 = (x233/((x234<=x235)|x236));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MAX;
	static uint64_t x239 = 41230611316698858LLU;
	volatile int64_t x240 = INT64_MIN;
	volatile int64_t t58 = 36012765272830906LL;

	t58 = (x237/((x238<=x239)|x240));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x243 = 30067520917680LL;
	static int64_t t59 = -43153219LL;

	t59 = (x241/((x242<=x243)|x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x246 = -1480;
	int64_t x247 = INT64_MAX;
	volatile int32_t t60 = -420;

	t60 = (x245/((x246<=x247)|x248));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	static int8_t x251 = INT8_MAX;
	volatile int32_t t61 = 35441523;

	t61 = (x249/((x250<=x251)|x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -1;
	uint8_t x254 = 2U;
	static int64_t x256 = -1442272LL;

	t62 = (x253/((x254<=x255)|x256));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 21509U;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	volatile int64_t t63 = 446LL;

	t63 = (x257/((x258<=x259)|x260));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	uint32_t x262 = 1U;
	volatile int8_t x263 = -1;
	int8_t x264 = INT8_MAX;
	int32_t t64 = 806;

	t64 = (x261/((x262<=x263)|x264));

	if (t64 != -16909320) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = -1;

	t65 = (x265/((x266<=x267)|x268));

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1087;
	int64_t x270 = -262249498574LL;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t66 = -1519;

	t66 = (x269/((x270<=x271)|x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x273 = 3U;
	static int64_t x274 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t67 = 1023627439;

	t67 = (x273/((x274<=x275)|x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x277 = 20U;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MIN;
	volatile int8_t x280 = 23;
	volatile int32_t t68 = 95980;

	t68 = (x277/((x278<=x279)|x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = 1;
	volatile int64_t x283 = INT64_MIN;
	volatile int32_t t69 = -2;

	t69 = (x281/((x282<=x283)|x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x286 = INT8_MAX;
	static volatile uint8_t x288 = UINT8_MAX;
	static volatile int32_t t70 = -3662926;

	t70 = (x285/((x286<=x287)|x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x289 = INT8_MAX;
	int8_t x290 = -1;
	int16_t x291 = INT16_MAX;
	int32_t t71 = 0;

	t71 = (x289/((x290<=x291)|x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x294 = 28U;
	uint64_t x295 = 19604402450LLU;
	int8_t x296 = INT8_MIN;
	volatile int32_t t72 = -10240;

	t72 = (x293/((x294<=x295)|x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x297 = UINT64_MAX;
	static int64_t x299 = 26462701883277LL;
	int16_t x300 = INT16_MAX;
	uint64_t t73 = 154293105737150LLU;

	t73 = (x297/((x298<=x299)|x300));

	if (t73 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x301 = 28813LLU;
	int32_t x302 = -1;
	int8_t x303 = 31;
	int32_t x304 = -274211;
	static volatile uint64_t t74 = 15LLU;

	t74 = (x301/((x302<=x303)|x304));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x305 = 84U;
	int16_t x306 = -1839;
	int64_t x307 = INT64_MIN;
	static volatile int32_t x308 = INT32_MIN;

	t75 = (x305/((x306<=x307)|x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = 10259U;
	uint64_t x310 = 8736317937LLU;
	static volatile int64_t x311 = -786475269410963389LL;
	uint8_t x312 = 30U;
	int32_t t76 = -819022;

	t76 = (x309/((x310<=x311)|x312));

	if (t76 != 330) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = -73847974096424LL;
	int32_t x314 = INT32_MAX;
	uint64_t x315 = 246584LLU;
	int64_t x316 = -6395LL;
	int64_t t77 = 3032946LL;

	t77 = (x313/((x314<=x315)|x316));

	if (t77 != 11547767646LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = 59U;
	volatile int16_t x318 = -1;
	int8_t x319 = INT8_MIN;
	volatile int8_t x320 = INT8_MAX;
	int32_t t78 = 406703;

	t78 = (x317/((x318<=x319)|x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x322 = 59845421U;
	static int8_t x323 = 0;
	int64_t x324 = INT64_MAX;

	t79 = (x321/((x322<=x323)|x324));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = 86242912LL;
	volatile int32_t x328 = -1;

	t80 = (x325/((x326<=x327)|x328));

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MAX;
	uint64_t x330 = UINT64_MAX;
	volatile int32_t x331 = -13;
	int16_t x332 = -465;
	volatile int32_t t81 = 324170778;

	t81 = (x329/((x330<=x331)|x332));

	if (t81 != -70) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 3759391162825LLU;
	uint8_t x336 = 14U;
	static volatile int32_t t82 = 717347;

	t82 = (x333/((x334<=x335)|x336));

	if (t82 != 4369) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x338 = INT8_MAX;
	int16_t x339 = -1;
	int64_t x340 = -4897LL;
	volatile int64_t t83 = 1791870690645LL;

	t83 = (x337/((x338<=x339)|x340));

	if (t83 != 1883473971177205LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x342 = 218938479U;
	int32_t x343 = -1;
	static volatile uint8_t x344 = 0U;
	volatile int32_t t84 = 14501024;

	t84 = (x341/((x342<=x343)|x344));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = INT8_MIN;
	static int16_t x347 = 7;
	uint8_t x348 = 58U;
	int32_t t85 = 1;

	t85 = (x345/((x346<=x347)|x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x350 = 53897434803LLU;
	volatile int32_t x351 = INT32_MAX;
	int32_t x352 = INT32_MIN;

	t86 = (x349/((x350<=x351)|x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = 14;
	int64_t x354 = INT64_MAX;
	int8_t x355 = -48;
	uint8_t x356 = 24U;
	volatile int32_t t87 = -387018;

	t87 = (x353/((x354<=x355)|x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x357 = -1;
	int16_t x358 = 197;
	static volatile uint8_t x359 = 57U;
	int32_t t88 = -369474;

	t88 = (x357/((x358<=x359)|x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x364 = INT32_MIN;
	int32_t t89 = -6595218;

	t89 = (x361/((x362<=x363)|x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x365 = 2;
	volatile uint64_t x366 = 91169720917LLU;
	int32_t x367 = -1062878600;

	t90 = (x365/((x366<=x367)|x368));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 836U;
	volatile int64_t t91 = 1LL;

	t91 = (x369/((x370<=x371)|x372));

	if (t91 != 11019560378560066LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 0;
	int16_t x374 = INT16_MAX;
	volatile uint8_t x375 = UINT8_MAX;
	int16_t x376 = -122;
	volatile int32_t t92 = 3177;

	t92 = (x373/((x374<=x375)|x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = -1LL;
	int32_t x380 = INT32_MIN;
	static int32_t t93 = -308647;

	t93 = (x377/((x378<=x379)|x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x381 = -178249;
	int64_t x382 = INT64_MIN;
	static int16_t x384 = -1;
	static volatile int32_t t94 = -14356;

	t94 = (x381/((x382<=x383)|x384));

	if (t94 != 178249) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x389 = -36774;
	int8_t x390 = INT8_MIN;
	int32_t x392 = -3211960;
	static volatile int32_t t95 = -11279821;

	t95 = (x389/((x390<=x391)|x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x394 = -1;
	volatile int8_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t96 = 16312666;

	t96 = (x393/((x394<=x395)|x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MIN;
	uint32_t x399 = UINT32_MAX;
	uint16_t x400 = UINT16_MAX;

	t97 = (x397/((x398<=x399)|x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x401 = 15055796304822LL;
	int32_t x403 = INT32_MAX;
	uint16_t x404 = UINT16_MAX;

	t98 = (x401/((x402<=x403)|x404));

	if (t98 != 229736725LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	int32_t t99 = -42332;

	t99 = (x405/((x406<=x407)|x408));

	if (t99 != -128) { NG(); } else { ; }
	
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

