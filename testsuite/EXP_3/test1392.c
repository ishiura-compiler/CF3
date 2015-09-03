#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
uint64_t x3 = 227415LLU;
static int16_t x5 = INT16_MIN;
int32_t x13 = INT32_MIN;
int32_t x19 = INT32_MIN;
volatile int8_t x26 = -2;
static uint64_t x29 = 123LLU;
uint16_t x30 = 532U;
int32_t x33 = INT32_MIN;
volatile uint32_t x36 = 17853800U;
uint16_t x39 = UINT16_MAX;
volatile int16_t x42 = 20;
static int8_t x46 = INT8_MIN;
int32_t t10 = -238825;
uint32_t x49 = UINT32_MAX;
int64_t x50 = INT64_MAX;
uint32_t x54 = UINT32_MAX;
uint16_t x57 = 0U;
volatile int32_t x58 = INT32_MIN;
uint8_t x60 = 3U;
static uint64_t x67 = UINT64_MAX;
static int64_t t16 = -66LL;
int64_t x73 = INT64_MIN;
volatile int64_t t17 = 253514499669617020LL;
int16_t x77 = -163;
uint16_t x85 = 4023U;
uint64_t x86 = UINT64_MAX;
uint64_t t20 = 139023LLU;
int64_t x93 = 4915494447LL;
static uint32_t x94 = UINT32_MAX;
volatile int64_t t23 = 19415604330719LL;
uint64_t x101 = 1871LLU;
uint32_t x102 = 1336488917U;
int64_t x104 = INT64_MAX;
volatile uint64_t t24 = 9313LLU;
volatile int32_t t28 = 462777;
volatile int16_t x123 = INT16_MIN;
volatile uint8_t x126 = UINT8_MAX;
volatile uint32_t x130 = 80U;
int8_t x133 = INT8_MAX;
volatile int32_t t32 = -18;
volatile int32_t x143 = INT32_MAX;
int64_t x147 = -1LL;
uint32_t x148 = 1303U;
uint32_t x151 = 61U;
int64_t x156 = INT64_MIN;
volatile int32_t t37 = 4391367;
int32_t t39 = 66339267;
int64_t x176 = INT64_MIN;
volatile int8_t x179 = -35;
static uint8_t x185 = UINT8_MAX;
int32_t x191 = -1;
uint32_t x193 = 732434156U;
int64_t x200 = INT64_MAX;
uint32_t x205 = 4U;
uint32_t t49 = 7958006U;
int16_t x211 = -1;
static int8_t x214 = 1;
volatile int16_t x216 = INT16_MIN;
uint32_t x223 = UINT32_MAX;
int64_t t55 = 1239440410919967LL;
int8_t x239 = INT8_MIN;
int32_t x247 = -25064681;
int16_t x252 = INT16_MIN;
int32_t x256 = 4;
volatile int32_t x257 = INT32_MIN;
int64_t x258 = INT64_MIN;
static int64_t x264 = INT64_MAX;
volatile uint64_t t63 = 38662587678976LLU;
volatile uint16_t x265 = 194U;
uint16_t x268 = UINT16_MAX;
uint8_t x271 = 3U;
int16_t x274 = INT16_MAX;
int8_t x279 = 0;
int64_t x282 = -146LL;
volatile uint16_t x294 = UINT16_MAX;
volatile int32_t t71 = -11;
int16_t x297 = -1687;
int16_t x298 = -1;
int64_t x302 = INT64_MIN;
int64_t x311 = -1LL;
int16_t x315 = 6;
volatile uint32_t t76 = 5U;
static volatile int32_t x317 = INT32_MIN;
uint32_t x320 = 1759U;
static volatile int32_t t77 = 91;
int8_t x321 = -1;
int32_t x322 = INT32_MIN;
uint8_t x329 = 0U;
volatile int32_t t80 = 631193950;
uint8_t x333 = 6U;
static uint32_t t82 = 198998U;
volatile int64_t x342 = 119LL;
volatile uint8_t x344 = UINT8_MAX;
static volatile int32_t x350 = -7;
int32_t x354 = INT32_MAX;
static int32_t x357 = INT32_MAX;
int64_t x358 = -5877391106LL;
int8_t x363 = -1;
static int16_t x367 = INT16_MAX;
volatile int64_t t90 = 1LL;
static uint8_t x374 = UINT8_MAX;
static uint8_t x385 = 29U;
uint32_t x388 = UINT32_MAX;
int64_t x391 = -1LL;
int32_t x395 = INT32_MAX;
volatile int64_t t96 = -2023440358016204676LL;
uint64_t x405 = 15359LLU;


void f0(void) {
	int8_t x2 = INT8_MIN;
	volatile uint32_t x4 = 0U;
	volatile int32_t t0 = 1;

	t0 = ((x1/x2)+(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 10;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = -16630;

	t1 = ((x5/x6)+(x7<x8));

	if (t1 != -3275) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x14 = -1400569835LL;
	volatile int8_t x15 = INT8_MAX;
	uint8_t x16 = 1U;
	volatile int64_t t2 = 3029182987774446356LL;

	t2 = ((x13/x14)+(x15<x16));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = -2;
	uint32_t x18 = 2071453U;
	int64_t x20 = INT64_MAX;
	volatile uint32_t t3 = 197404U;

	t3 = ((x17/x18)+(x19<x20));

	if (t3 != 2074U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MAX;
	uint16_t x22 = 884U;
	int64_t x23 = -1LL;
	int64_t x24 = INT64_MIN;
	static int32_t t4 = 146754;

	t4 = ((x21/x22)+(x23<x24));

	if (t4 != 2429280) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint32_t x27 = 22993073U;
	int16_t x28 = INT16_MAX;
	volatile int64_t t5 = 79918336LL;

	t5 = ((x25/x26)+(x27<x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x31 = 216130986U;
	int8_t x32 = INT8_MAX;
	volatile uint64_t t6 = 102061187LLU;

	t6 = ((x29/x30)+(x31<x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MAX;
	volatile int8_t x35 = 25;
	volatile int32_t t7 = -3494033;

	t7 = ((x33/x34)+(x35<x36));

	if (t7 != -65537) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	static uint64_t x40 = UINT64_MAX;
	int64_t t8 = 0LL;

	t8 = ((x37/x38)+(x39<x40));

	if (t8 != 281474976710657LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static int8_t x43 = -1;
	uint64_t x44 = 25762476565942LLU;
	int64_t t9 = -858396360152LL;

	t9 = ((x41/x42)+(x43<x44));

	if (t9 != -461168601842738790LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = -3264;
	int16_t x47 = -1;
	int32_t x48 = INT32_MIN;

	t10 = ((x45/x46)+(x47<x48));

	if (t10 != 25) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x51 = INT16_MIN;
	uint64_t x52 = 3302171LLU;
	static int64_t t11 = -31LL;

	t11 = ((x49/x50)+(x51<x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 0U;
	int8_t x55 = INT8_MIN;
	int8_t x56 = -1;
	volatile uint32_t t12 = 48376879U;

	t12 = ((x53/x54)+(x55<x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x59 = INT32_MAX;
	static volatile int32_t t13 = -11157;

	t13 = ((x57/x58)+(x59<x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MAX;
	static uint16_t x62 = UINT16_MAX;
	int64_t x63 = -1LL;
	int64_t x64 = -1LL;
	int64_t t14 = -17897525720964LL;

	t14 = ((x61/x62)+(x63<x64));

	if (t14 != 140739635871744LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	static int32_t x66 = -8;
	uint8_t x68 = 3U;
	volatile int32_t t15 = -52370750;

	t15 = ((x65/x66)+(x67<x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	int64_t x70 = -3394LL;
	int8_t x71 = INT8_MAX;
	int16_t x72 = -1;

	t16 = ((x69/x70)+(x71<x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = 1867906;
	int8_t x75 = -3;
	static int8_t x76 = INT8_MIN;

	t17 = ((x73/x74)+(x75<x76));

	if (t17 != -4937813806933LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = INT8_MIN;
	static int32_t x79 = -130791587;
	static int8_t x80 = INT8_MIN;
	static int32_t t18 = 42;

	t18 = ((x77/x78)+(x79<x80));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x81 = 7U;
	static int8_t x82 = 10;
	volatile int8_t x83 = 4;
	int64_t x84 = INT64_MAX;
	volatile int32_t t19 = 9;

	t19 = ((x81/x82)+(x83<x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x87 = 370617871565LL;
	volatile int64_t x88 = INT64_MIN;

	t20 = ((x85/x86)+(x87<x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 5U;
	static uint64_t x90 = 6641490961LLU;
	static uint32_t x91 = 8424U;
	int32_t x92 = 6846517;
	uint64_t t21 = 2504190063LLU;

	t21 = ((x89/x90)+(x91<x92));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x95 = -1;
	static int8_t x96 = INT8_MIN;
	int64_t t22 = -11344728LL;

	t22 = ((x93/x94)+(x95<x96));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	uint16_t x98 = 31U;
	static int16_t x99 = INT16_MIN;
	volatile int64_t x100 = INT64_MIN;

	t23 = ((x97/x98)+(x99<x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x103 = INT32_MIN;

	t24 = ((x101/x102)+(x103<x104));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MAX;
	uint32_t x106 = 3071757U;
	uint8_t x107 = 0U;
	uint16_t x108 = 1U;
	uint32_t t25 = 2848554U;

	t25 = ((x105/x106)+(x107<x108));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -1;
	volatile int32_t x111 = INT32_MIN;
	int32_t x112 = 5586592;
	int32_t t26 = 16444201;

	t26 = ((x109/x110)+(x111<x112));

	if (t26 != -254) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x114 = -2006772LL;
	volatile uint64_t x115 = UINT64_MAX;
	volatile int64_t x116 = INT64_MIN;
	int64_t t27 = 56202LL;

	t27 = ((x113/x114)+(x115<x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	static int8_t x118 = 20;
	uint64_t x119 = 9650232360LLU;
	volatile int16_t x120 = INT16_MIN;

	t28 = ((x117/x118)+(x119<x120));

	if (t28 != 1639) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x121 = 14U;
	static volatile int32_t x122 = INT32_MIN;
	uint8_t x124 = 4U;
	volatile int32_t t29 = -236;

	t29 = ((x121/x122)+(x123<x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x125 = -5;
	int16_t x127 = -1;
	volatile uint64_t x128 = 2281LLU;
	volatile int32_t t30 = 435163316;

	t30 = ((x125/x126)+(x127<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = UINT16_MAX;
	static int32_t x131 = 0;
	int32_t x132 = -1;
	uint32_t t31 = 1068U;

	t31 = ((x129/x130)+(x131<x132));

	if (t31 != 819U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x134 = -1;
	volatile int8_t x135 = -22;
	int16_t x136 = 108;

	t32 = ((x133/x134)+(x135<x136));

	if (t32 != -126) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x137 = -2;
	uint64_t x138 = 1140261LLU;
	static int64_t x139 = INT64_MAX;
	volatile int64_t x140 = INT64_MAX;
	uint64_t t33 = 127756500LLU;

	t33 = ((x137/x138)+(x139<x140));

	if (t33 != 16177650620085LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = 785941346262LLU;
	int16_t x142 = -1;
	static volatile int16_t x144 = INT16_MIN;
	volatile uint64_t t34 = 8111305616838741LLU;

	t34 = ((x141/x142)+(x143<x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 236U;
	uint64_t x146 = 59299034794517915LLU;
	volatile uint64_t t35 = 13759182977LLU;

	t35 = ((x145/x146)+(x147<x148));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 1619;
	static int16_t x150 = INT16_MAX;
	uint64_t x152 = 451657392LLU;
	int32_t t36 = -715;

	t36 = ((x149/x150)+(x151<x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = 8U;
	int32_t x154 = -138;
	uint64_t x155 = 5741738124264214LLU;

	t37 = ((x153/x154)+(x155<x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	static int64_t t38 = 1866843702348LL;

	t38 = ((x157/x158)+(x159<x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 1;
	int8_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 90U;

	t39 = ((x161/x162)+(x163<x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = -15;
	int64_t x166 = 94LL;
	volatile int8_t x167 = -1;
	volatile uint32_t x168 = 780244549U;
	int64_t t40 = -1096840032727811260LL;

	t40 = ((x165/x166)+(x167<x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -2609013629LL;
	volatile int32_t x170 = INT32_MAX;
	volatile uint64_t x171 = 320LLU;
	static int8_t x172 = INT8_MAX;
	volatile int64_t t41 = 33020LL;

	t41 = ((x169/x170)+(x171<x172));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 21U;
	uint64_t x174 = 106091827578LLU;
	int64_t x175 = INT64_MIN;
	volatile uint64_t t42 = 122806746392LLU;

	t42 = ((x173/x174)+(x175<x176));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	volatile uint32_t x178 = 7483U;
	int8_t x180 = -1;
	uint32_t t43 = 1900445834U;

	t43 = ((x177/x178)+(x179<x180));

	if (t43 != 573964U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 3LLU;
	uint32_t x182 = UINT32_MAX;
	int8_t x183 = INT8_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	static uint64_t t44 = 31477LLU;

	t44 = ((x181/x182)+(x183<x184));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MAX;
	int64_t x188 = INT64_MAX;
	volatile uint32_t t45 = 2090899652U;

	t45 = ((x185/x186)+(x187<x188));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	volatile uint32_t x190 = 461U;
	static int16_t x192 = INT16_MIN;
	uint32_t t46 = 29156027U;

	t46 = ((x189/x190)+(x191<x192));

	if (t46 != 9316631U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = -1LL;
	static uint8_t x195 = 25U;
	uint8_t x196 = 28U;
	static volatile int64_t t47 = 316LL;

	t47 = ((x193/x194)+(x195<x196));

	if (t47 != -732434155LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 12435U;
	static volatile int64_t x198 = INT64_MAX;
	uint8_t x199 = 38U;
	int64_t t48 = 32470940910721LL;

	t48 = ((x197/x198)+(x199<x200));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MAX;
	volatile int64_t x208 = INT64_MIN;

	t49 = ((x205/x206)+(x207<x208));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 22925518U;
	volatile int16_t x212 = -1;
	static volatile uint32_t t50 = 871058400U;

	t50 = ((x209/x210)+(x211<x212));

	if (t50 != 93U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MAX;
	volatile int8_t x215 = -1;
	volatile int64_t t51 = INT64_MAX;

	t51 = ((x213/x214)+(x215<x216));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	int8_t x219 = -27;
	static int16_t x220 = -1;
	volatile int64_t t52 = 249956394142023LL;

	t52 = ((x217/x218)+(x219<x220));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 1U;
	int8_t x222 = 1;
	static int16_t x224 = INT16_MIN;
	int32_t t53 = 3;

	t53 = ((x221/x222)+(x223<x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 7388;
	int16_t x226 = INT16_MIN;
	volatile uint16_t x227 = 18U;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t54 = 147227962;

	t54 = ((x225/x226)+(x227<x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 2;
	int64_t x230 = 227454327638675802LL;
	volatile int16_t x231 = INT16_MIN;
	uint64_t x232 = 8666382657178853LLU;

	t55 = ((x229/x230)+(x231<x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 423928U;
	static uint32_t x236 = 65128U;
	int64_t t56 = -253LL;

	t56 = ((x233/x234)+(x235<x236));

	if (t56 != 281474976710656LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = 0;
	static volatile int8_t x238 = -10;
	int32_t x240 = INT32_MIN;
	int32_t t57 = -381;

	t57 = ((x237/x238)+(x239<x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = INT32_MAX;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = INT64_MIN;
	int8_t x244 = -31;
	uint32_t t58 = 25049921U;

	t58 = ((x241/x242)+(x243<x244));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	volatile int8_t x246 = INT8_MIN;
	uint64_t x248 = 66341103528027LLU;
	volatile int32_t t59 = -3817;

	t59 = ((x245/x246)+(x247<x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x249 = UINT64_MAX;
	int64_t x250 = -8427865459LL;
	static uint32_t x251 = 411834927U;
	uint64_t t60 = 1544418260LLU;

	t60 = ((x249/x250)+(x251<x252));

	if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 1U;
	static volatile int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	volatile int64_t t61 = 2LL;

	t61 = ((x253/x254)+(x255<x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x259 = INT16_MIN;
	static int32_t x260 = -1078;
	volatile int64_t t62 = -5070907LL;

	t62 = ((x257/x258)+(x259<x260));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x261 = 2054LLU;
	int32_t x262 = 23224448;
	static volatile int8_t x263 = INT8_MAX;

	t63 = ((x261/x262)+(x263<x264));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x266 = -1;
	volatile int64_t x267 = INT64_MAX;
	int32_t t64 = -31;

	t64 = ((x265/x266)+(x267<x268));

	if (t64 != -194) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	static uint8_t x270 = 3U;
	int16_t x272 = -37;
	int32_t t65 = -44250247;

	t65 = ((x269/x270)+(x271<x272));

	if (t65 != -42) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t66 = 655891;

	t66 = ((x273/x274)+(x275<x276));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = UINT64_MAX;
	static int32_t x278 = 7770;
	int8_t x280 = INT8_MAX;
	uint64_t t67 = 69602432217075959LLU;

	t67 = ((x277/x278)+(x279<x280));

	if (t67 != 2374098336384756LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	static int16_t x283 = -14563;
	static int32_t x284 = -2795471;
	static int64_t t68 = -288935265010432LL;

	t68 = ((x281/x282)+(x283<x284));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 96U;
	int8_t x286 = INT8_MIN;
	int16_t x287 = -39;
	static uint8_t x288 = UINT8_MAX;
	int32_t t69 = -8115;

	t69 = ((x285/x286)+(x287<x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = 703528902;
	volatile int32_t x290 = -1973;
	int64_t x291 = -58874836967LL;
	static int32_t x292 = -1;
	volatile int32_t t70 = -993;

	t70 = ((x289/x290)+(x291<x292));

	if (t70 != -356577) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	static int64_t x296 = INT64_MAX;

	t71 = ((x293/x294)+(x295<x296));

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x299 = INT32_MAX;
	int32_t x300 = -1;
	volatile int32_t t72 = -585008;

	t72 = ((x297/x298)+(x299<x300));

	if (t72 != 1687) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x301 = -1;
	uint64_t x303 = 6961LLU;
	int32_t x304 = -47096;
	volatile int64_t t73 = 26918435LL;

	t73 = ((x301/x302)+(x303<x304));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x305 = 766004078933LLU;
	volatile int32_t x306 = 43;
	static uint8_t x307 = 7U;
	volatile int16_t x308 = INT16_MAX;
	uint64_t t74 = 78303834897LLU;

	t74 = ((x305/x306)+(x307<x308));

	if (t74 != 17814048348LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 48U;
	uint64_t x310 = 169599019584005LLU;
	static volatile int32_t x312 = INT32_MIN;
	volatile uint64_t t75 = 542LLU;

	t75 = ((x309/x310)+(x311<x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = -1;
	uint32_t x314 = 719U;
	static uint32_t x316 = 45800U;

	t76 = ((x313/x314)+(x315<x316));

	if (t76 != 5973529U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MAX;

	t77 = ((x317/x318)+(x319<x320));

	if (t77 != 65536) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x323 = 2U;
	int64_t x324 = INT64_MIN;
	volatile int32_t t78 = -36;

	t78 = ((x321/x322)+(x323<x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	volatile uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	volatile uint8_t x328 = 77U;
	static uint64_t t79 = 494177562620487LLU;

	t79 = ((x325/x326)+(x327<x328));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = INT16_MAX;
	static volatile int64_t x331 = INT64_MAX;
	uint64_t x332 = 19LLU;

	t80 = ((x329/x330)+(x331<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x334 = 23;
	volatile int32_t x335 = INT32_MAX;
	int16_t x336 = 4;
	volatile int32_t t81 = 301;

	t81 = ((x333/x334)+(x335<x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -56239;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MIN;
	volatile int64_t x340 = INT64_MAX;

	t82 = ((x337/x338)+(x339<x340));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x341 = INT8_MAX;
	int32_t x343 = INT32_MIN;
	static volatile int64_t t83 = -10813388114237LL;

	t83 = ((x341/x342)+(x343<x344));

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = 186232LL;
	int64_t x346 = 4358418LL;
	uint64_t x347 = 111012775483612LLU;
	int64_t x348 = INT64_MIN;
	int64_t t84 = -281282LL;

	t84 = ((x345/x346)+(x347<x348));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static int16_t x351 = INT16_MAX;
	uint16_t x352 = 20U;
	static uint32_t t85 = 3U;

	t85 = ((x349/x350)+(x351<x352));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MIN;
	volatile int32_t x355 = -996610;
	int8_t x356 = 7;
	volatile int64_t t86 = 6LL;

	t86 = ((x353/x354)+(x355<x356));

	if (t86 != -4294967297LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x359 = UINT16_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t87 = -188149LL;

	t87 = ((x357/x358)+(x359<x360));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = 16;
	static uint16_t x364 = UINT16_MAX;
	int64_t t88 = -244380439864863675LL;

	t88 = ((x361/x362)+(x363<x364));

	if (t88 != -576460752303423487LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MAX;
	int8_t x368 = -1;
	int32_t t89 = 226944;

	t89 = ((x365/x366)+(x367<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x369 = -863356629;
	int64_t x370 = 1868577045843176619LL;
	static int64_t x371 = INT64_MIN;
	static uint16_t x372 = UINT16_MAX;

	t90 = ((x369/x370)+(x371<x372));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = -13;
	int64_t x375 = -1LL;
	uint8_t x376 = 8U;
	int32_t t91 = -118457;

	t91 = ((x373/x374)+(x375<x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 223699807387440LLU;
	uint32_t x378 = 3357228U;
	uint8_t x379 = 3U;
	volatile uint32_t x380 = 53U;
	uint64_t t92 = 2160920LLU;

	t92 = ((x377/x378)+(x379<x380));

	if (t92 != 66632296LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x382 = 2197157068444003844LLU;
	static uint32_t x383 = 1438640041U;
	uint32_t x384 = 22512261U;
	static uint64_t t93 = 1940921825902983LLU;

	t93 = ((x381/x382)+(x383<x384));

	if (t93 != 4LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x386 = -25;
	int32_t x387 = INT32_MIN;
	volatile int32_t t94 = 0;

	t94 = ((x385/x386)+(x387<x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = UINT16_MAX;
	int32_t x390 = -502;
	uint8_t x392 = 0U;
	int32_t t95 = -11447757;

	t95 = ((x389/x390)+(x391<x392));

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = 13;
	volatile int64_t x394 = -7538LL;
	uint32_t x396 = UINT32_MAX;

	t96 = ((x393/x394)+(x395<x396));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = -567;
	volatile int32_t x398 = INT32_MIN;
	int64_t x399 = 21LL;
	int16_t x400 = INT16_MIN;
	static int32_t t97 = 11099;

	t97 = ((x397/x398)+(x399<x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x402 = -1;
	static int16_t x403 = 3113;
	volatile uint32_t x404 = UINT32_MAX;
	volatile uint32_t t98 = 485109888U;

	t98 = ((x401/x402)+(x403<x404));

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x406 = -3;
	uint16_t x407 = 2U;
	int8_t x408 = 1;
	uint64_t t99 = 236864244096LLU;

	t99 = ((x405/x406)+(x407<x408));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

