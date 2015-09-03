#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -57599998;
int16_t x11 = INT16_MAX;
static uint32_t x18 = 11742U;
uint8_t x32 = UINT8_MAX;
uint32_t t8 = 22062U;
uint16_t x50 = UINT16_MAX;
int32_t t12 = -683627;
int32_t t13 = -787200;
int32_t x67 = 496667;
volatile uint8_t x70 = 3U;
int32_t x73 = -1;
int32_t x75 = INT32_MAX;
int16_t x80 = -1;
int8_t x81 = -1;
int32_t x84 = 7392129;
static volatile int32_t t20 = 115112191;
uint8_t x85 = 14U;
volatile int32_t t21 = 106759;
int64_t x95 = -1LL;
int16_t x97 = -9953;
volatile uint32_t x98 = 174438238U;
volatile int64_t x101 = INT64_MIN;
volatile int64_t t25 = INT64_MIN;
int32_t x106 = 213562155;
volatile uint8_t x110 = 2U;
uint8_t x123 = UINT8_MAX;
uint64_t x132 = 507990097979LLU;
int8_t x135 = -1;
int32_t x138 = -5358693;
int32_t x142 = -480;
static uint8_t x144 = UINT8_MAX;
static volatile int32_t t36 = 1;
int8_t x152 = -1;
uint64_t x159 = UINT64_MAX;
int64_t x161 = INT64_MAX;
static uint8_t x165 = 75U;
uint16_t x168 = UINT16_MAX;
int16_t x172 = 1;
static uint8_t x175 = UINT8_MAX;
volatile int64_t t43 = INT64_MAX;
int8_t x179 = 0;
int64_t x184 = INT64_MAX;
int8_t x188 = INT8_MIN;
static int8_t x191 = 49;
volatile int64_t x195 = INT64_MIN;
uint64_t x197 = UINT64_MAX;
int8_t x198 = 0;
uint64_t t49 = 25362032338LLU;
volatile int16_t x204 = INT16_MIN;
int32_t t51 = 5;
uint8_t x210 = 29U;
int8_t x213 = INT8_MIN;
uint64_t x215 = 0LLU;
static int64_t x219 = INT64_MAX;
volatile int32_t t54 = 264;
int16_t x225 = 191;
int64_t x226 = -7367388349LL;
static uint32_t x234 = 279325009U;
volatile int8_t x235 = INT8_MIN;
int16_t x241 = 156;
volatile int64_t x243 = INT64_MIN;
int32_t x244 = INT32_MAX;
volatile int32_t t60 = -116928110;
uint16_t x245 = 282U;
uint8_t x247 = 0U;
uint16_t x249 = 13U;
int32_t t62 = -17;
volatile int64_t t64 = INT64_MAX;
int64_t x261 = INT64_MIN;
static volatile int8_t x263 = INT8_MIN;
static int64_t x265 = INT64_MIN;
int8_t x269 = -1;
static int16_t x276 = 220;
static uint16_t x282 = UINT16_MAX;
volatile uint16_t x285 = 44U;
int32_t t71 = 496877770;
int8_t x291 = INT8_MIN;
int32_t t72 = 11;
uint16_t x299 = 11U;
int64_t x301 = INT64_MIN;
volatile int64_t t75 = INT64_MIN;
uint8_t x305 = UINT8_MAX;
int32_t t76 = 473509;
int16_t x322 = INT16_MIN;
uint32_t x324 = UINT32_MAX;
int16_t x334 = -1;
uint64_t x340 = UINT64_MAX;
uint16_t x347 = UINT16_MAX;
uint16_t x348 = 1U;
static volatile uint32_t x352 = 730U;
int64_t x355 = 52640673858LL;
int64_t x363 = -1LL;
int32_t x369 = 834968296;
int16_t x370 = -3878;
volatile uint32_t t94 = 263899543U;
int16_t x382 = INT16_MIN;
static volatile uint8_t x390 = UINT8_MAX;
uint8_t x400 = 6U;


void f0(void) {
	volatile uint64_t x1 = 3513567562659768850LLU;
	static int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 29565632469414LLU;

	t0 = (x1-(x2==(x3==x4)));

	if (t0 != 3513567562659768850LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	uint64_t x6 = UINT64_MAX;
	static int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x5-(x6==(x7==x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 3;
	uint16_t x10 = 4645U;
	uint8_t x12 = 108U;
	int32_t t2 = -113;

	t2 = (x9-(x10==(x11==x12)));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = -3260175945LL;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -27114512;

	t3 = (x13-(x14==(x15==x16)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 16U;
	uint32_t x19 = UINT32_MAX;
	static uint64_t x20 = UINT64_MAX;
	int32_t t4 = 0;

	t4 = (x17-(x18==(x19==x20)));

	if (t4 != 16) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = 1;
	static int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = 1291U;
	int32_t t5 = -1527727;

	t5 = (x21-(x22==(x23==x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = 19U;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = INT32_MAX;
	int32_t t6 = -4186134;

	t6 = (x25-(x26==(x27==x28)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -31;
	static int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	int32_t t7 = 6704673;

	t7 = (x29-(x30==(x31==x32)));

	if (t7 != -31) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 97U;
	volatile int32_t x34 = INT32_MAX;
	static int64_t x35 = INT64_MIN;
	uint64_t x36 = UINT64_MAX;

	t8 = (x33-(x34==(x35==x36)));

	if (t8 != 97U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = -1;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -38;

	t9 = (x37-(x38==(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	uint16_t x43 = 2842U;
	static volatile uint32_t x44 = UINT32_MAX;
	int32_t t10 = -7436;

	t10 = (x41-(x42==(x43==x44)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 7U;
	int16_t x46 = 2784;
	static volatile uint32_t x47 = 84050948U;
	static volatile uint64_t x48 = 15573141526053LLU;
	volatile int32_t t11 = 4850;

	t11 = (x45-(x46==(x47==x48)));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	uint32_t x51 = 107U;
	volatile uint32_t x52 = 1760719821U;

	t12 = (x49-(x50==(x51==x52)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -819996;
	int64_t x54 = INT64_MIN;
	static int8_t x55 = -2;
	int64_t x56 = INT64_MIN;

	t13 = (x53-(x54==(x55==x56)));

	if (t13 != -819996) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	static int8_t x58 = -1;
	int8_t x59 = -1;
	static int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 748;

	t14 = (x57-(x58==(x59==x60)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -6;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 63U;
	volatile int32_t x64 = -222378362;
	int32_t t15 = -1885;

	t15 = (x61-(x62==(x63==x64)));

	if (t15 != -6) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 497U;
	int32_t x66 = INT32_MIN;
	int8_t x68 = -1;
	int32_t t16 = -589791514;

	t16 = (x65-(x66==(x67==x68)));

	if (t16 != 497) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 6U;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 337;

	t17 = (x69-(x70==(x71==x72)));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MAX;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = -219;

	t18 = (x73-(x74==(x75==x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = -1060;
	volatile int8_t x79 = INT8_MAX;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x77-(x78==(x79==x80)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	int8_t x83 = -1;

	t20 = (x81-(x82==(x83==x84)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = 63472U;
	static int8_t x87 = INT8_MIN;
	uint32_t x88 = 1U;

	t21 = (x85-(x86==(x87==x88)));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	uint64_t x90 = 6294708665463936220LLU;
	volatile uint32_t x91 = UINT32_MAX;
	int64_t x92 = -1LL;
	volatile int64_t t22 = 3116239058127438855LL;

	t22 = (x89-(x90==(x91==x92)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	int8_t x94 = -3;
	int32_t x96 = INT32_MIN;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x93-(x94==(x95==x96)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x99 = -3030593802551LL;
	int32_t x100 = -1;
	int32_t t24 = 3227366;

	t24 = (x97-(x98==(x99==x100)));

	if (t24 != -9953) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MAX;
	volatile int16_t x104 = -1;

	t25 = (x101-(x102==(x103==x104)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = -388150;
	int32_t t26 = INT32_MIN;

	t26 = (x105-(x106==(x107==x108)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	static volatile int16_t x112 = INT16_MIN;
	int32_t t27 = 0;

	t27 = (x109-(x110==(x111==x112)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1U;
	uint16_t x114 = 1U;
	int16_t x115 = 60;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 0;

	t28 = (x113-(x114==(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -125;
	static int64_t x118 = INT64_MIN;
	int32_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 4981;

	t29 = (x117-(x118==(x119==x120)));

	if (t29 != -125) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = INT8_MIN;
	static volatile int8_t x124 = 47;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121-(x122==(x123==x124)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = 6U;
	static uint8_t x127 = UINT8_MAX;
	volatile int64_t x128 = 408884419070751809LL;
	int32_t t31 = -127;

	t31 = (x125-(x126==(x127==x128)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MAX;
	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int64_t t32 = INT64_MAX;

	t32 = (x129-(x130==(x131==x132)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 1U;
	int32_t x134 = 21689838;
	int32_t x136 = 134651359;
	volatile uint32_t t33 = 17090U;

	t33 = (x133-(x134==(x135==x136)));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int32_t x139 = 795597741;
	static volatile uint64_t x140 = 0LLU;
	volatile int32_t t34 = 3;

	t34 = (x137-(x138==(x139==x140)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int16_t x143 = INT16_MIN;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x141-(x142==(x143==x144)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 28014U;
	int8_t x146 = 1;
	int32_t x147 = 1;
	static uint16_t x148 = UINT16_MAX;

	t36 = (x145-(x146==(x147==x148)));

	if (t36 != 28014) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 5;
	static int32_t x151 = -1;
	int32_t t37 = INT32_MIN;

	t37 = (x149-(x150==(x151==x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 4U;
	static volatile int32_t x154 = -10407;
	static int16_t x155 = INT16_MAX;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = 1;

	t38 = (x153-(x154==(x155==x156)));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	volatile int32_t x158 = INT32_MAX;
	uint8_t x160 = 71U;
	int64_t t39 = 1LL;

	t39 = (x157-(x158==(x159==x160)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -253436LL;
	uint8_t x163 = 17U;
	volatile int64_t x164 = -1LL;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x161-(x162==(x163==x164)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MAX;
	volatile uint64_t x167 = 1622492LLU;
	int32_t t41 = -2383;

	t41 = (x165-(x166==(x167==x168)));

	if (t41 != 75) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 7119LLU;
	static int64_t x170 = INT64_MIN;
	static uint64_t x171 = 30LLU;
	volatile uint64_t t42 = 3667217185LLU;

	t42 = (x169-(x170==(x171==x172)));

	if (t42 != 7119LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	int32_t x174 = -42;
	volatile int32_t x176 = INT32_MIN;

	t43 = (x173-(x174==(x175==x176)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1073294586950LLU;
	uint32_t x178 = UINT32_MAX;
	int64_t x180 = INT64_MIN;
	static uint64_t t44 = 3193337LLU;

	t44 = (x177-(x178==(x179==x180)));

	if (t44 != 1073294586950LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 1375580LLU;
	static int8_t x182 = -1;
	int8_t x183 = INT8_MIN;
	uint64_t t45 = 1946444LLU;

	t45 = (x181-(x182==(x183==x184)));

	if (t45 != 1375580LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -14;
	int8_t x186 = 0;
	int16_t x187 = INT16_MIN;
	volatile int32_t t46 = 316840349;

	t46 = (x185-(x186==(x187==x188)));

	if (t46 != -15) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = INT32_MIN;
	int16_t x190 = -1;
	int16_t x192 = INT16_MAX;
	int32_t t47 = INT32_MIN;

	t47 = (x189-(x190==(x191==x192)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 0U;
	static int64_t x194 = 21312870837LL;
	int16_t x196 = INT16_MAX;
	int32_t t48 = 74576;

	t48 = (x193-(x194==(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x199 = -15;
	static volatile int64_t x200 = INT64_MIN;

	t49 = (x197-(x198==(x199==x200)));

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 42U;
	uint8_t x202 = 5U;
	static int32_t x203 = INT32_MAX;
	static int32_t t50 = 107;

	t50 = (x201-(x202==(x203==x204)));

	if (t50 != 42) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint16_t x206 = 324U;
	static uint64_t x207 = 3179LLU;
	uint8_t x208 = 61U;

	t51 = (x205-(x206==(x207==x208)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x209-(x210==(x211==x212)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = -13935224LL;
	int64_t x216 = 404874448470724037LL;
	volatile int32_t t53 = 398898634;

	t53 = (x213-(x214==(x215==x216)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static int32_t x218 = -1;
	static int32_t x220 = -1;

	t54 = (x217-(x218==(x219==x220)));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	volatile uint8_t x223 = 0U;
	uint8_t x224 = 95U;
	volatile int32_t t55 = -983051;

	t55 = (x221-(x222==(x223==x224)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x227 = -1LL;
	uint16_t x228 = 113U;
	int32_t t56 = 7;

	t56 = (x225-(x226==(x227==x228)));

	if (t56 != 191) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	volatile uint8_t x231 = 100U;
	int32_t x232 = -12709;
	static volatile int64_t t57 = INT64_MIN;

	t57 = (x229-(x230==(x231==x232)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x236 = 0U;
	int32_t t58 = -864;

	t58 = (x233-(x234==(x235==x236)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 34U;
	static uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 14U;
	volatile uint64_t x240 = UINT64_MAX;
	int32_t t59 = 30;

	t59 = (x237-(x238==(x239==x240)));

	if (t59 != 34) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;

	t60 = (x241-(x242==(x243==x244)));

	if (t60 != 156) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = UINT8_MAX;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = -41429;

	t61 = (x245-(x246==(x247==x248)));

	if (t61 != 282) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = UINT64_MAX;
	int16_t x251 = -1;
	static volatile uint32_t x252 = 8742U;

	t62 = (x249-(x250==(x251==x252)));

	if (t62 != 13) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -1;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = INT8_MIN;
	int64_t t63 = INT64_MIN;

	t63 = (x253-(x254==(x255==x256)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MAX;
	static uint32_t x258 = UINT32_MAX;
	int64_t x259 = INT64_MIN;
	static volatile int8_t x260 = INT8_MIN;

	t64 = (x257-(x258==(x259==x260)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = INT8_MAX;
	int32_t x264 = 21294;
	int64_t t65 = INT64_MIN;

	t65 = (x261-(x262==(x263==x264)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -1;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	static int64_t t66 = INT64_MIN;

	t66 = (x265-(x266==(x267==x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = UINT64_MAX;
	static volatile uint64_t x271 = UINT64_MAX;
	volatile int64_t x272 = 7239283943302311LL;
	volatile int32_t t67 = 319890;

	t67 = (x269-(x270==(x271==x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 3074691643862468LLU;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = UINT16_MAX;
	volatile uint64_t t68 = 4091583537484462713LLU;

	t68 = (x273-(x274==(x275==x276)));

	if (t68 != 3074691643862468LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = UINT16_MAX;
	static int64_t x278 = INT64_MIN;
	volatile uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -953991;

	t69 = (x277-(x278==(x279==x280)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MAX;
	volatile uint64_t x283 = UINT64_MAX;
	int8_t x284 = -2;
	int32_t t70 = 442027;

	t70 = (x281-(x282==(x283==x284)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x286 = UINT16_MAX;
	int32_t x287 = 37;
	int32_t x288 = INT32_MAX;

	t71 = (x285-(x286==(x287==x288)));

	if (t71 != 44) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static volatile uint64_t x290 = UINT64_MAX;
	int64_t x292 = INT64_MAX;

	t72 = (x289-(x290==(x291==x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	int16_t x294 = 1614;
	int8_t x295 = 2;
	uint32_t x296 = 56305U;
	static int32_t t73 = INT32_MIN;

	t73 = (x293-(x294==(x295==x296)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	uint8_t x298 = 1U;
	static volatile uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x297-(x298==(x299==x300)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 0;
	int16_t x303 = -1;
	uint64_t x304 = UINT64_MAX;

	t75 = (x301-(x302==(x303==x304)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = UINT8_MAX;

	t76 = (x305-(x306==(x307==x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static int16_t x310 = INT16_MIN;
	uint8_t x311 = UINT8_MAX;
	static uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = -3541;

	t77 = (x309-(x310==(x311==x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	static volatile int16_t x314 = -1;
	static int64_t x315 = INT64_MAX;
	int16_t x316 = -3;
	volatile int32_t t78 = 728;

	t78 = (x313-(x314==(x315==x316)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 1594U;
	int16_t x319 = INT16_MAX;
	int8_t x320 = 3;
	uint32_t t79 = UINT32_MAX;

	t79 = (x317-(x318==(x319==x320)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	static int32_t x323 = 109;
	int32_t t80 = -159206719;

	t80 = (x321-(x322==(x323==x324)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 5;
	int16_t x326 = 3448;
	int16_t x327 = 2005;
	int8_t x328 = -1;
	int32_t t81 = 48076749;

	t81 = (x325-(x326==(x327==x328)));

	if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	static int16_t x330 = INT16_MIN;
	int8_t x331 = 38;
	int16_t x332 = INT16_MIN;
	int32_t t82 = INT32_MIN;

	t82 = (x329-(x330==(x331==x332)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 18719LL;
	int32_t x335 = -1;
	uint64_t x336 = 8LLU;
	int64_t t83 = 10754200395LL;

	t83 = (x333-(x334==(x335==x336)));

	if (t83 != 18719LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 1;
	volatile int8_t x338 = INT8_MIN;
	volatile uint8_t x339 = 12U;
	static int32_t t84 = -610796384;

	t84 = (x337-(x338==(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = INT32_MIN;
	volatile int64_t x344 = -1LL;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x341-(x342==(x343==x344)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	volatile int32_t t86 = -2743379;

	t86 = (x345-(x346==(x347==x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MIN;
	uint64_t x351 = 551LLU;
	int32_t t87 = 25;

	t87 = (x349-(x350==(x351==x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	uint64_t x354 = 7558683777551477705LLU;
	int32_t x356 = INT32_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x353-(x354==(x355==x356)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -396001097LL;
	int32_t x358 = -44;
	int16_t x359 = -1;
	int32_t x360 = -169;
	volatile int64_t t89 = 184669260LL;

	t89 = (x357-(x358==(x359==x360)));

	if (t89 != -396001097LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 32673371200800LL;
	static uint16_t x362 = UINT16_MAX;
	static int8_t x364 = INT8_MIN;
	volatile int64_t t90 = 466LL;

	t90 = (x361-(x362==(x363==x364)));

	if (t90 != 32673371200800LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MAX;
	int8_t x367 = INT8_MIN;
	int8_t x368 = 48;
	int32_t t91 = -957785;

	t91 = (x365-(x366==(x367==x368)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = 336;
	uint8_t x372 = 5U;
	volatile int32_t t92 = 969;

	t92 = (x369-(x370==(x371==x372)));

	if (t92 != 834968296) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	int64_t x376 = INT64_MAX;
	static volatile int32_t t93 = 25629;

	t93 = (x373-(x374==(x375==x376)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 31407034U;
	int64_t x378 = -190211546059545305LL;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -51583096LL;

	t94 = (x377-(x378==(x379==x380)));

	if (t94 != 31407034U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x383 = -1;
	uint16_t x384 = 1U;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x381-(x382==(x383==x384)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;
	volatile int64_t x387 = 5527914LL;
	int32_t x388 = 698515428;
	int32_t t96 = -12095;

	t96 = (x385-(x386==(x387==x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int8_t x391 = -1;
	uint16_t x392 = 13948U;
	int32_t t97 = 11562198;

	t97 = (x389-(x390==(x391==x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 9U;
	int16_t x394 = INT16_MIN;
	static uint16_t x395 = 9641U;
	int32_t x396 = INT32_MIN;
	static int32_t t98 = -3851628;

	t98 = (x393-(x394==(x395==x396)));

	if (t98 != 9) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MIN;
	static int64_t x399 = INT64_MIN;
	int32_t t99 = INT32_MIN;

	t99 = (x397-(x398==(x399==x400)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

