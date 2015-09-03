#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = INT64_MIN;
int64_t x13 = -2539LL;
static int64_t x15 = 3661LL;
uint16_t x17 = UINT16_MAX;
int32_t x19 = -1;
uint64_t x20 = UINT64_MAX;
int8_t x27 = INT8_MIN;
volatile int64_t t6 = -31281851889LL;
volatile int64_t t7 = 678850LL;
uint64_t x35 = 1870987963LLU;
int8_t x38 = -1;
int32_t x39 = INT32_MIN;
uint8_t x42 = 15U;
volatile int32_t t11 = 3998418;
int16_t x51 = INT16_MIN;
int64_t x52 = 32898339138170LL;
uint64_t t12 = 72356592798789017LLU;
int32_t x58 = INT32_MIN;
static int32_t x59 = 3467;
int8_t x63 = -1;
int64_t x68 = -8004728LL;
uint16_t x71 = 8033U;
static uint32_t x85 = UINT32_MAX;
uint32_t x96 = 15007U;
static int64_t x113 = -1LL;
int32_t t29 = 232;
int64_t t31 = INT64_MIN;
static uint8_t x129 = UINT8_MAX;
static volatile uint32_t x130 = 16530446U;
static int64_t x134 = INT64_MAX;
int32_t t33 = -420;
int64_t x141 = -1LL;
static int32_t x145 = INT32_MIN;
uint16_t x149 = 0U;
int16_t x150 = 8120;
int16_t x157 = INT16_MIN;
uint32_t x158 = UINT32_MAX;
uint64_t x174 = 492LLU;
static volatile uint64_t x180 = 100684216LLU;
int32_t x187 = INT32_MIN;
int64_t x195 = INT64_MIN;
volatile int8_t x200 = -1;
volatile int16_t x207 = INT16_MAX;
int16_t x213 = -9;
static volatile int32_t x218 = -1;
static volatile uint32_t x223 = UINT32_MAX;
uint32_t x224 = UINT32_MAX;
uint32_t x230 = 6312U;
volatile uint8_t x234 = UINT8_MAX;
int8_t x235 = INT8_MAX;
volatile int8_t x236 = -1;
static volatile uint64_t t58 = UINT64_MAX;
volatile int16_t x241 = -1;
int8_t x242 = INT8_MIN;
int8_t x244 = INT8_MIN;
int64_t x245 = 8LL;
int32_t x251 = INT32_MIN;
static uint64_t x252 = 520830LLU;
volatile int32_t t62 = INT32_MIN;
static int32_t x253 = 43078965;
volatile int32_t x255 = -1;
int16_t x267 = INT16_MIN;
uint64_t x268 = 38794467LLU;
uint64_t x280 = 21342286585580932LLU;
uint8_t x296 = UINT8_MAX;
int32_t t75 = 120;
uint16_t x310 = UINT16_MAX;
static int32_t t77 = 4135;
static uint64_t x317 = UINT64_MAX;
static volatile int32_t x320 = -1;
volatile int32_t t80 = -6;
static int16_t x326 = INT16_MIN;
volatile uint64_t t81 = 3LLU;
int16_t x330 = INT16_MAX;
int32_t t83 = -1426795;
static int8_t x341 = -1;
static volatile int64_t x342 = 1LL;
volatile int32_t x346 = -1;
uint8_t x348 = 0U;
int32_t x350 = -19393490;
int64_t x351 = 380500490256LL;
volatile uint32_t t87 = 57106U;
uint32_t x356 = 300U;
uint8_t x366 = 70U;
uint16_t x368 = 294U;
volatile int32_t t91 = 96;
uint64_t x369 = 599LLU;
static uint64_t t92 = 52LLU;
volatile int64_t x375 = -1LL;
volatile uint8_t x380 = 0U;
int64_t x385 = INT64_MIN;
static int64_t x387 = 620405LL;
int64_t t96 = 1749151150215114LL;
uint64_t x390 = 63555258919LLU;
int64_t x393 = INT64_MIN;
volatile int32_t x400 = -130387162;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -469732140236LL;
	uint32_t x3 = 518329U;
	uint16_t x4 = 24223U;
	int32_t t0 = 99;

	t0 = (x1+(x2==(x3==x4)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	int64_t x7 = -673891123069029LL;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5+(x6==(x7==x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile int16_t x10 = -1;
	int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 195063031;

	t2 = (x9+(x10==(x11==x12)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 13U;
	int16_t x16 = INT16_MIN;
	int64_t t3 = 2711107310872742928LL;

	t3 = (x13+(x14==(x15==x16)));

	if (t3 != -2539LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	volatile int32_t t4 = -240;

	t4 = (x17+(x18==(x19==x20)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 1U;
	static int64_t x22 = 225LL;
	uint8_t x23 = 0U;
	uint32_t x24 = 5128831U;
	volatile int32_t t5 = 340140;

	t5 = (x21+(x22==(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 38LL;
	static int32_t x26 = -1;
	uint64_t x28 = UINT64_MAX;

	t6 = (x25+(x26==(x27==x28)));

	if (t6 != 38LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 2050788LL;
	uint8_t x30 = 57U;
	volatile int32_t x31 = -6447;
	int16_t x32 = -1;

	t7 = (x29+(x30==(x31==x32)));

	if (t7 != 2050788LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = 72U;
	uint32_t x36 = 15704704U;
	int64_t t8 = -8380424041467LL;

	t8 = (x33+(x34==(x35==x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	static int8_t x40 = 59;
	int32_t t9 = 9084771;

	t9 = (x37+(x38==(x39==x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 540416385606341LLU;
	volatile int16_t x43 = 843;
	int32_t x44 = -125850016;
	volatile uint64_t t10 = 1LLU;

	t10 = (x41+(x42==(x43==x44)));

	if (t10 != 540416385606341LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	volatile int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	static int64_t x48 = 4LL;

	t11 = (x45+(x46==(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 763726459890654LLU;
	volatile int32_t x50 = -1279;

	t12 = (x49+(x50==(x51==x52)));

	if (t12 != 763726459890654LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	uint8_t x55 = UINT8_MAX;
	uint16_t x56 = 6321U;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x53+(x54==(x55==x56)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -467859166;

	t14 = (x57+(x58==(x59==x60)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = -7124;
	uint8_t x64 = 12U;
	volatile int32_t t15 = 1100548;

	t15 = (x61+(x62==(x63==x64)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 1312U;
	int32_t x66 = -1;
	volatile int8_t x67 = 38;
	volatile int32_t t16 = -13;

	t16 = (x65+(x66==(x67==x68)));

	if (t16 != 1312) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 0;
	int32_t x70 = INT32_MAX;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -934027339;

	t17 = (x69+(x70==(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	static int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t18 = -855;

	t18 = (x73+(x74==(x75==x76)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 202586919456098LL;
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = -1;
	int32_t x80 = 4702;
	int64_t t19 = 995275LL;

	t19 = (x77+(x78==(x79==x80)));

	if (t19 != 202586919456098LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile int8_t x82 = 14;
	uint64_t x83 = UINT64_MAX;
	static uint8_t x84 = 1U;
	volatile int32_t t20 = -6496401;

	t20 = (x81+(x82==(x83==x84)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x86 = UINT8_MAX;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;
	uint32_t t21 = UINT32_MAX;

	t21 = (x85+(x86==(x87==x88)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile uint16_t x90 = 58U;
	int16_t x91 = INT16_MIN;
	int32_t x92 = 47553;
	int32_t t22 = -3;

	t22 = (x89+(x90==(x91==x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 0U;
	volatile uint32_t x95 = 464359U;
	volatile int32_t t23 = -167910277;

	t23 = (x93+(x94==(x95==x96)));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint16_t x98 = 6940U;
	uint32_t x99 = 1007U;
	int8_t x100 = -2;
	static int32_t t24 = 23827;

	t24 = (x97+(x98==(x99==x100)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	static uint64_t x104 = UINT64_MAX;
	int32_t t25 = -1;

	t25 = (x101+(x102==(x103==x104)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -359706161375990LL;
	uint16_t x106 = 445U;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -1;
	static int64_t t26 = 5634236196307423LL;

	t26 = (x105+(x106==(x107==x108)));

	if (t26 != -359706161375990LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 167U;
	uint64_t t27 = UINT64_MAX;

	t27 = (x109+(x110==(x111==x112)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -41731241;
	volatile int8_t x115 = -1;
	volatile uint8_t x116 = UINT8_MAX;
	int64_t t28 = -101288636242512LL;

	t28 = (x113+(x114==(x115==x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = UINT8_MAX;
	static int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t29 = (x117+(x118==(x119==x120)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile int16_t x122 = 0;
	volatile int8_t x123 = -1;
	uint64_t x124 = UINT64_MAX;
	int64_t t30 = INT64_MIN;

	t30 = (x121+(x122==(x123==x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MAX;
	static uint16_t x127 = 0U;
	static int8_t x128 = INT8_MAX;

	t31 = (x125+(x126==(x127==x128)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x131 = INT16_MAX;
	uint32_t x132 = 3966U;
	static int32_t t32 = 0;

	t32 = (x129+(x130==(x131==x132)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = 0;
	uint16_t x135 = 2U;
	int8_t x136 = INT8_MAX;

	t33 = (x133+(x134==(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int64_t x138 = -1LL;
	volatile int32_t x139 = INT32_MAX;
	int32_t x140 = -124603;
	volatile int32_t t34 = INT32_MAX;

	t34 = (x137+(x138==(x139==x140)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = UINT16_MAX;
	volatile int16_t x143 = INT16_MIN;
	uint16_t x144 = 624U;
	volatile int64_t t35 = 12239552LL;

	t35 = (x141+(x142==(x143==x144)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = 548U;
	int64_t x147 = -6773461108LL;
	static int8_t x148 = -20;
	int32_t t36 = INT32_MIN;

	t36 = (x145+(x146==(x147==x148)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = INT32_MAX;
	volatile int8_t x152 = -1;
	static int32_t t37 = -374846749;

	t37 = (x149+(x150==(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MAX;
	volatile uint16_t x156 = 871U;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x153+(x154==(x155==x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = INT32_MAX;
	int32_t x160 = -401225;
	int32_t t39 = 1;

	t39 = (x157+(x158==(x159==x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = INT8_MIN;
	static uint64_t x163 = 121LLU;
	int8_t x164 = INT8_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (x161+(x162==(x163==x164)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	volatile uint8_t x167 = 3U;
	int8_t x168 = -1;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x165+(x166==(x167==x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = -13;
	volatile int16_t x171 = -1;
	static int64_t x172 = -160324123864423LL;
	int32_t t42 = INT32_MIN;

	t42 = (x169+(x170==(x171==x172)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 28U;
	static int16_t x175 = INT16_MAX;
	int16_t x176 = -51;
	int32_t t43 = 5;

	t43 = (x173+(x174==(x175==x176)));

	if (t43 != 28) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 1641267770948LL;
	static uint32_t x178 = 1250540U;
	static int32_t x179 = -449801;
	int64_t t44 = -3922021276723152898LL;

	t44 = (x177+(x178==(x179==x180)));

	if (t44 != 1641267770948LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	int64_t x182 = -1953525707LL;
	static uint8_t x183 = UINT8_MAX;
	volatile uint32_t x184 = 3024743U;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x181+(x182==(x183==x184)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 23U;
	static int16_t x186 = INT16_MIN;
	int64_t x188 = 5LL;
	int32_t t46 = 262284;

	t46 = (x185+(x186==(x187==x188)));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x189 = -1;
	int16_t x190 = 48;
	int64_t x191 = INT64_MIN;
	volatile uint8_t x192 = 10U;
	static int32_t t47 = -13;

	t47 = (x189+(x190==(x191==x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	static volatile int16_t x194 = INT16_MAX;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 20893;

	t48 = (x193+(x194==(x195==x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 24U;
	int32_t x198 = INT32_MIN;
	volatile int64_t x199 = -231325LL;
	uint32_t t49 = 150233745U;

	t49 = (x197+(x198==(x199==x200)));

	if (t49 != 24U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 3U;
	static int16_t x202 = 4768;
	int64_t x203 = INT64_MAX;
	int32_t x204 = -1;
	volatile int32_t t50 = 1334918;

	t50 = (x201+(x202==(x203==x204)));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 385370553;
	static int8_t x206 = 50;
	int32_t x208 = -68;
	int32_t t51 = -1375829;

	t51 = (x205+(x206==(x207==x208)));

	if (t51 != 385370553) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 970089459928LL;
	static int64_t x210 = 939751LL;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MAX;
	volatile int64_t t52 = -5133901147LL;

	t52 = (x209+(x210==(x211==x212)));

	if (t52 != 970089459928LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x214 = INT8_MAX;
	volatile int8_t x215 = -47;
	int32_t x216 = INT32_MIN;
	static int32_t t53 = -5688;

	t53 = (x213+(x214==(x215==x216)));

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 387U;
	static int32_t x219 = INT32_MAX;
	uint16_t x220 = 8014U;
	uint32_t t54 = 50438738U;

	t54 = (x217+(x218==(x219==x220)));

	if (t54 != 387U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 92U;
	int64_t x222 = 1677754518245535802LL;
	volatile int32_t t55 = -6;

	t55 = (x221+(x222==(x223==x224)));

	if (t55 != 92) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	static int32_t x226 = 21603;
	uint16_t x227 = 1686U;
	int32_t x228 = -2346757;
	volatile int32_t t56 = -229;

	t56 = (x225+(x226==(x227==x228)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 15509;
	int16_t x231 = 11039;
	int8_t x232 = -1;
	volatile int32_t t57 = 22;

	t57 = (x229+(x230==(x231==x232)));

	if (t57 != 15509) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;

	t58 = (x233+(x234==(x235==x236)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x237 = 1449U;
	int8_t x238 = -6;
	volatile int64_t x239 = -1LL;
	static volatile int64_t x240 = 18722LL;
	int32_t t59 = 1;

	t59 = (x237+(x238==(x239==x240)));

	if (t59 != 1449) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x243 = INT64_MIN;
	volatile int32_t t60 = 47;

	t60 = (x241+(x242==(x243==x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	volatile int8_t x248 = INT8_MAX;
	int64_t t61 = 6LL;

	t61 = (x245+(x246==(x247==x248)));

	if (t61 != 8LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MIN;

	t62 = (x249+(x250==(x251==x252)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	int32_t x256 = -1;
	volatile int32_t t63 = 3069733;

	t63 = (x253+(x254==(x255==x256)));

	if (t63 != 43078965) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 7U;
	int32_t x259 = -1;
	int8_t x260 = 1;
	uint32_t t64 = UINT32_MAX;

	t64 = (x257+(x258==(x259==x260)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int32_t x262 = INT32_MIN;
	volatile int64_t x263 = INT64_MIN;
	static int16_t x264 = INT16_MIN;
	int64_t t65 = 1936111610606836979LL;

	t65 = (x261+(x262==(x263==x264)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = -1;
	volatile int16_t x266 = -12467;
	volatile int32_t t66 = -8;

	t66 = (x265+(x266==(x267==x268)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 31549U;
	static int32_t x272 = INT32_MIN;
	static int32_t t67 = 119854;

	t67 = (x269+(x270==(x271==x272)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	volatile uint16_t x274 = 478U;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -37;
	int32_t t68 = 150456;

	t68 = (x273+(x274==(x275==x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = 0;
	static int16_t x279 = -1;
	volatile int32_t t69 = 234;

	t69 = (x277+(x278==(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	volatile uint64_t x282 = 7434501409968LLU;
	int64_t x283 = -52123477486681785LL;
	volatile uint32_t x284 = UINT32_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x281+(x282==(x283==x284)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 58473039U;
	uint8_t x286 = 0U;
	int64_t x287 = 125LL;
	static volatile uint32_t x288 = 94276846U;
	uint32_t t71 = 515513U;

	t71 = (x285+(x286==(x287==x288)));

	if (t71 != 58473040U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = -9059;
	int64_t x291 = -426281LL;
	volatile int8_t x292 = INT8_MAX;
	volatile int32_t t72 = -1;

	t72 = (x289+(x290==(x291==x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = INT8_MIN;
	int16_t x294 = 88;
	volatile int32_t x295 = 3434;
	int32_t t73 = 0;

	t73 = (x293+(x294==(x295==x296)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 4U;
	uint64_t x298 = 3019314582094LLU;
	static int32_t x299 = INT32_MAX;
	static volatile int32_t x300 = -3689;
	int32_t t74 = -239420515;

	t74 = (x297+(x298==(x299==x300)));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = 642;
	volatile int16_t x302 = 14551;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;

	t75 = (x301+(x302==(x303==x304)));

	if (t75 != 642) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -7;
	int64_t x308 = 0LL;
	volatile int32_t t76 = -100183;

	t76 = (x305+(x306==(x307==x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -1;
	volatile int64_t x311 = INT64_MAX;
	int16_t x312 = -1;

	t77 = (x309+(x310==(x311==x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x314 = UINT8_MAX;
	static int16_t x315 = -696;
	uint32_t x316 = 7587U;
	int64_t t78 = INT64_MIN;

	t78 = (x313+(x314==(x315==x316)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MIN;
	int16_t x319 = -7665;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x317+(x318==(x319==x320)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 5U;
	int32_t x322 = INT32_MAX;
	static uint64_t x323 = 176876984800902798LLU;
	static int16_t x324 = 455;

	t80 = (x321+(x322==(x323==x324)));

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 2LLU;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MAX;

	t81 = (x325+(x326==(x327==x328)));

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 46U;
	static int64_t x331 = -2549358553182709286LL;
	int8_t x332 = -1;
	volatile int32_t t82 = 49614666;

	t82 = (x329+(x330==(x331==x332)));

	if (t82 != 46) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	uint16_t x334 = 29U;
	uint32_t x335 = UINT32_MAX;
	static int64_t x336 = INT64_MIN;

	t83 = (x333+(x334==(x335==x336)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	static int32_t x338 = -1;
	volatile uint64_t x339 = 79LLU;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 117808443;

	t84 = (x337+(x338==(x339==x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x343 = INT8_MIN;
	int16_t x344 = -1;
	volatile int32_t t85 = 136159;

	t85 = (x341+(x342==(x343==x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 21844589046662LLU;
	static int16_t x347 = -1;
	uint64_t t86 = 15262754487979LLU;

	t86 = (x345+(x346==(x347==x348)));

	if (t86 != 21844589046662LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 319529U;
	int16_t x352 = INT16_MIN;

	t87 = (x349+(x350==(x351==x352)));

	if (t87 != 319529U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 2U;
	int32_t x354 = 0;
	volatile uint8_t x355 = 16U;
	volatile int32_t t88 = -268215;

	t88 = (x353+(x354==(x355==x356)));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = INT64_MIN;
	static uint64_t x358 = 248651747918939LLU;
	static int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x357+(x358==(x359==x360)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile int64_t x362 = INT64_MAX;
	int32_t x363 = -1;
	static uint64_t x364 = 14662705483423668LLU;
	static int32_t t90 = -162546;

	t90 = (x361+(x362==(x363==x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x367 = 0U;

	t91 = (x365+(x366==(x367==x368)));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	static int32_t x371 = -1;
	static int16_t x372 = INT16_MIN;

	t92 = (x369+(x370==(x371==x372)));

	if (t92 != 599LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	volatile uint32_t x374 = UINT32_MAX;
	static int8_t x376 = 0;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x373+(x374==(x375==x376)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 0U;
	int16_t x378 = INT16_MIN;
	static int16_t x379 = -1;
	static int32_t t94 = 10877254;

	t94 = (x377+(x378==(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 10U;
	static int64_t x384 = 4230187312LL;
	static volatile int64_t t95 = -61059LL;

	t95 = (x381+(x382==(x383==x384)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = 0;
	static uint32_t x388 = 1U;

	t96 = (x385+(x386==(x387==x388)));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 17U;
	volatile int16_t x391 = 52;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t97 = -152;

	t97 = (x389+(x390==(x391==x392)));

	if (t97 != 17) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -466;
	uint64_t x395 = UINT64_MAX;
	volatile int8_t x396 = -1;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x393+(x394==(x395==x396)));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int64_t x398 = INT64_MIN;
	volatile uint8_t x399 = UINT8_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x397+(x398==(x399==x400)));

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

