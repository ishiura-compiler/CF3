#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 5;
uint8_t x10 = 47U;
static volatile uint16_t x26 = 6872U;
int32_t t6 = 23309;
volatile uint8_t x31 = 5U;
static uint8_t x34 = 23U;
int64_t x35 = INT64_MAX;
int8_t x37 = INT8_MIN;
int8_t x38 = INT8_MIN;
static int64_t x43 = 3170LL;
volatile uint16_t x44 = 1U;
static uint32_t x45 = 881681412U;
int64_t x47 = 23583204482LL;
int8_t x48 = INT8_MIN;
uint8_t x50 = UINT8_MAX;
uint16_t x61 = 48U;
volatile int32_t t15 = 3;
int64_t x68 = 0LL;
volatile uint16_t x70 = 170U;
uint8_t x73 = 1U;
int16_t x74 = INT16_MIN;
int64_t x75 = -380081768585970445LL;
uint32_t x76 = UINT32_MAX;
int64_t x79 = 39077439018LL;
int8_t x86 = INT8_MIN;
volatile int32_t t21 = 22161961;
int64_t t22 = 875335915605LL;
int64_t x93 = INT64_MAX;
int64_t t24 = 67959300167650LL;
int16_t x103 = -1;
volatile int64_t t25 = -1064700780LL;
int32_t x106 = -119381814;
volatile uint64_t t27 = 291554LLU;
uint64_t x113 = UINT64_MAX;
volatile uint32_t x115 = 5648U;
int64_t x121 = INT64_MIN;
int64_t x124 = -277986LL;
int32_t t31 = -2;
int32_t x129 = INT32_MAX;
volatile int32_t t32 = 2661319;
uint32_t x137 = 4843U;
volatile uint32_t t34 = 46941U;
volatile int16_t x145 = INT16_MIN;
int64_t x147 = -1LL;
volatile int32_t t36 = -178072682;
volatile int32_t x150 = INT32_MIN;
volatile int16_t x151 = 0;
volatile uint16_t x158 = 120U;
uint64_t x166 = UINT64_MAX;
static volatile int32_t x168 = -1;
volatile uint8_t x175 = UINT8_MAX;
uint64_t x176 = UINT64_MAX;
int32_t x178 = INT32_MIN;
int8_t x180 = INT8_MAX;
int64_t x196 = -1LL;
volatile int32_t t49 = 64368985;
uint8_t x204 = UINT8_MAX;
uint8_t x210 = 0U;
int8_t x212 = -1;
static int8_t x215 = INT8_MAX;
int16_t x217 = 0;
int8_t x232 = -1;
volatile int32_t t57 = 13935;
int64_t x233 = 234967522LL;
int16_t x236 = -1;
volatile int64_t t58 = 4897985LL;
int32_t x242 = 5646;
static int8_t x249 = INT8_MAX;
uint64_t x250 = 123333454894682260LLU;
uint8_t x261 = 1U;
static int32_t x268 = INT32_MIN;
volatile int64_t t66 = -2916427592891700LL;
uint32_t x270 = 6005146U;
int32_t x271 = -253476614;
int16_t x279 = 1583;
static volatile uint16_t x287 = 209U;
int16_t x290 = 114;
static int8_t x293 = -1;
uint16_t x298 = 22U;
int16_t x308 = INT16_MIN;
static volatile uint64_t x312 = 541612829160074LLU;
static uint8_t x314 = UINT8_MAX;
static int16_t x321 = -1;
int32_t x335 = INT32_MIN;
static int16_t x336 = INT16_MIN;
uint16_t x338 = 5933U;
int16_t x341 = -1;
uint16_t x342 = 12930U;
int32_t t85 = -11268;
static volatile int16_t x348 = INT16_MIN;
int64_t x349 = INT64_MIN;
volatile int64_t x350 = -1LL;
volatile int64_t t87 = 0LL;
int16_t x354 = 3825;
volatile int16_t x355 = -1;
int64_t t88 = -4380142315LL;
int32_t x359 = 4301188;
static volatile uint64_t t90 = 102602984809LLU;
volatile int8_t x365 = 5;
int8_t x369 = INT8_MAX;
int32_t x370 = 229518;
uint32_t x379 = 61445089U;
uint16_t x384 = 0U;
static int32_t t95 = 3619;
int32_t x387 = INT32_MAX;
static int32_t t96 = -99437758;
uint8_t x395 = 0U;
int64_t x397 = INT64_MIN;


void f0(void) {
	int16_t x1 = -12413;
	uint8_t x2 = 8U;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 1;

	t0 = (x1&(x2==(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	static int16_t x6 = 7;
	uint64_t x7 = 4975875879947697106LLU;
	volatile int32_t t1 = 7;

	t1 = (x5&(x6==(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 29132520LL;
	uint8_t x11 = 26U;
	int64_t x12 = INT64_MIN;
	int64_t t2 = 1150533496LL;

	t2 = (x9&(x10==(x11==x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MAX;
	uint16_t x15 = UINT16_MAX;
	static uint64_t x16 = UINT64_MAX;
	int32_t t3 = -468;

	t3 = (x13&(x14==(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 2U;
	int64_t x18 = INT64_MIN;
	static int8_t x19 = INT8_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 14212850;

	t4 = (x17&(x18==(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	int32_t x22 = 16;
	uint8_t x23 = UINT8_MAX;
	static int16_t x24 = -3421;
	volatile int32_t t5 = -141930935;

	t5 = (x21&(x22==(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static int32_t x27 = INT32_MAX;
	static int64_t x28 = INT64_MIN;

	t6 = (x25&(x26==(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	volatile int64_t x30 = 176LL;
	uint32_t x32 = 62346U;
	int32_t t7 = -1597962;

	t7 = (x29&(x30==(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = -3938261;

	t8 = (x33&(x34==(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x39 = -1;
	uint32_t x40 = 3861U;
	volatile int32_t t9 = 167276876;

	t9 = (x37&(x38==(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	uint16_t x42 = UINT16_MAX;
	int64_t t10 = -57523026283070LL;

	t10 = (x41&(x42==(x43==x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x46 = 0U;
	uint32_t t11 = 1988187U;

	t11 = (x45&(x46==(x47==x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int32_t x51 = INT32_MIN;
	volatile int32_t x52 = 158633589;
	int32_t t12 = 433;

	t12 = (x49&(x50==(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 2U;
	volatile int8_t x56 = -1;
	int32_t t13 = 4126488;

	t13 = (x53&(x54==(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	static int64_t x58 = 5392619019079LL;
	static volatile int32_t x59 = INT32_MAX;
	int8_t x60 = -1;
	int32_t t14 = 152318;

	t14 = (x57&(x58==(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -4844;
	static int8_t x63 = INT8_MIN;
	static int16_t x64 = -4;

	t15 = (x61&(x62==(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MAX;
	uint8_t x67 = 3U;
	volatile int32_t t16 = -11174;

	t16 = (x65&(x66==(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint32_t x71 = UINT32_MAX;
	uint64_t x72 = 13125234593637458LLU;
	int32_t t17 = -1;

	t17 = (x69&(x70==(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t t18 = -1148;

	t18 = (x73&(x74==(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 2117;
	volatile int64_t x78 = -10266284LL;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 1;

	t19 = (x77&(x78==(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -35663;
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MAX;
	volatile uint64_t x84 = 248LLU;
	int32_t t20 = 15973;

	t20 = (x81&(x82==(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 267U;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = -48;

	t21 = (x85&(x86==(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	int64_t x90 = INT64_MIN;
	static int64_t x91 = INT64_MAX;
	static uint16_t x92 = 7U;

	t22 = (x89&(x90==(x91==x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 1154673;
	static uint64_t x95 = 477364LLU;
	uint16_t x96 = 19866U;
	volatile int64_t t23 = -1640597LL;

	t23 = (x93&(x94==(x95==x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = -1;
	uint64_t x99 = 15291LLU;
	uint16_t x100 = UINT16_MAX;

	t24 = (x97&(x98==(x99==x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = 590875U;
	int16_t x104 = INT16_MIN;

	t25 = (x101&(x102==(x103==x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	volatile int8_t x107 = -1;
	int64_t x108 = -8513LL;
	volatile int64_t t26 = 7LL;

	t26 = (x105&(x106==(x107==x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3307271238651962LLU;
	static uint16_t x110 = UINT16_MAX;
	static uint8_t x111 = UINT8_MAX;
	int64_t x112 = -1LL;

	t27 = (x109&(x110==(x111==x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	uint8_t x116 = UINT8_MAX;
	uint64_t t28 = 86286596690767790LLU;

	t28 = (x113&(x114==(x115==x116)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 5;

	t29 = (x117&(x118==(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x122 = -2959;
	uint32_t x123 = 7212U;
	volatile int64_t t30 = 3141LL;

	t30 = (x121&(x122==(x123==x124)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	uint64_t x127 = 99866420379837LLU;
	static int16_t x128 = INT16_MIN;

	t31 = (x125&(x126==(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x130 = -1;
	static uint64_t x131 = 49457338179445760LLU;
	uint8_t x132 = UINT8_MAX;

	t32 = (x129&(x130==(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile uint16_t x134 = 19U;
	static int8_t x135 = -1;
	static int64_t x136 = -1LL;
	int64_t t33 = -70279527170204LL;

	t33 = (x133&(x134==(x135==x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = INT8_MIN;
	static int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;

	t34 = (x137&(x138==(x139==x140)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	static uint32_t x143 = 103U;
	volatile int8_t x144 = INT8_MAX;
	volatile int64_t t35 = -1094098321257399LL;

	t35 = (x141&(x142==(x143==x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MIN;
	volatile uint16_t x148 = 173U;

	t36 = (x145&(x146==(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 9U;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = 18152617;

	t37 = (x149&(x150==(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 49U;
	static int32_t x154 = -433;
	int32_t x155 = 28674;
	volatile uint8_t x156 = 33U;
	volatile int32_t t38 = 1;

	t38 = (x153&(x154==(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 31U;
	int64_t t39 = 31LL;

	t39 = (x157&(x158==(x159==x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1906U;
	static int16_t x162 = INT16_MIN;
	uint64_t x163 = 564LLU;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = 0;

	t40 = (x161&(x162==(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	uint8_t x167 = 39U;
	static volatile int32_t t41 = -34;

	t41 = (x165&(x166==(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int32_t x171 = -1898;
	int32_t x172 = 112078840;
	static int32_t t42 = -2;

	t42 = (x169&(x170==(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	volatile int16_t x174 = -1;
	int32_t t43 = -17173172;

	t43 = (x173&(x174==(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	static int32_t t44 = -1;

	t44 = (x177&(x178==(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	static int64_t x182 = 0LL;
	uint8_t x183 = 30U;
	static volatile uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = 7393;

	t45 = (x181&(x182==(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 22332;
	volatile int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -38;

	t46 = (x185&(x186==(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = 223004544;
	int8_t x191 = 0;
	static int64_t x192 = INT64_MAX;
	int64_t t47 = -172LL;

	t47 = (x189&(x190==(x191==x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = 1;
	int8_t x195 = -1;
	int64_t t48 = 1017LL;

	t48 = (x193&(x194==(x195==x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -254;
	int64_t x198 = INT64_MAX;
	uint16_t x199 = UINT16_MAX;
	int8_t x200 = -1;

	t49 = (x197&(x198==(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MAX;
	uint8_t x202 = 4U;
	static volatile int8_t x203 = INT8_MIN;
	int64_t t50 = 152491122331LL;

	t50 = (x201&(x202==(x203==x204)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	static uint64_t x206 = UINT64_MAX;
	uint64_t x207 = 2251614315937254647LLU;
	volatile int16_t x208 = 0;
	int32_t t51 = 514336;

	t51 = (x205&(x206==(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 47516736279718339LLU;
	int16_t x211 = -3;
	static volatile uint64_t t52 = 715430482653156331LLU;

	t52 = (x209&(x210==(x211==x212)));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static uint16_t x214 = 4881U;
	volatile uint32_t x216 = 26489296U;
	int32_t t53 = -2585;

	t53 = (x213&(x214==(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 1504U;
	static int8_t x219 = -1;
	volatile int16_t x220 = -937;
	volatile int32_t t54 = 302923;

	t54 = (x217&(x218==(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 38U;
	int64_t x222 = 75582LL;
	static uint8_t x223 = 1U;
	int16_t x224 = 251;
	int32_t t55 = -416;

	t55 = (x221&(x222==(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	volatile int16_t x228 = -856;
	int64_t t56 = 913334LL;

	t56 = (x225&(x226==(x227==x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 7917U;
	int8_t x230 = INT8_MAX;
	int32_t x231 = -793265;

	t57 = (x229&(x230==(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = 0;
	int8_t x235 = -1;

	t58 = (x233&(x234==(x235==x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile uint64_t x238 = 58850094918002LLU;
	int32_t x239 = 32697455;
	static int32_t x240 = INT32_MAX;
	static volatile int32_t t59 = 54239;

	t59 = (x237&(x238==(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 49163267LL;
	static uint16_t x243 = 5U;
	static int8_t x244 = -1;
	int64_t t60 = -418LL;

	t60 = (x241&(x242==(x243==x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x246 = 1U;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	int32_t t61 = 1811;

	t61 = (x245&(x246==(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x251 = 70;
	uint16_t x252 = UINT16_MAX;
	static int32_t t62 = -33456;

	t62 = (x249&(x250==(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 190U;
	uint32_t x254 = 30174791U;
	uint64_t x255 = UINT64_MAX;
	static uint8_t x256 = 7U;
	int32_t t63 = -197;

	t63 = (x253&(x254==(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x258 = UINT8_MAX;
	uint64_t x259 = 2611415455371118LLU;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = 31;

	t64 = (x257&(x258==(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 57LLU;
	int64_t x264 = INT64_MIN;
	int32_t t65 = 25331377;

	t65 = (x261&(x262==(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int32_t x266 = INT32_MIN;
	uint16_t x267 = UINT16_MAX;

	t66 = (x265&(x266==(x267==x268)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 13908LLU;
	static volatile uint8_t x272 = 105U;
	volatile uint64_t t67 = 29799141150950LLU;

	t67 = (x269&(x270==(x271==x272)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int32_t x274 = INT32_MIN;
	static int16_t x275 = 331;
	static volatile int64_t x276 = 119773476LL;
	int32_t t68 = 8;

	t68 = (x273&(x274==(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 601094376;

	t69 = (x277&(x278==(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -40;
	uint32_t x282 = 31136856U;
	static int8_t x283 = INT8_MIN;
	static uint16_t x284 = 1U;
	volatile int32_t t70 = -3;

	t70 = (x281&(x282==(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -1;
	static int64_t x286 = -1LL;
	uint16_t x288 = 12U;
	int32_t t71 = 313428;

	t71 = (x285&(x286==(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 25;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	static int32_t t72 = -308117633;

	t72 = (x289&(x290==(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 7;
	static int16_t x295 = INT16_MIN;
	int16_t x296 = 28;
	static volatile int32_t t73 = -22829;

	t73 = (x293&(x294==(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -14;
	volatile int16_t x299 = -15;
	static uint64_t x300 = UINT64_MAX;
	volatile int32_t t74 = 253;

	t74 = (x297&(x298==(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 79U;
	static volatile uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 18U;
	int64_t x304 = -1LL;
	int32_t t75 = 163500;

	t75 = (x301&(x302==(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	uint16_t x306 = 867U;
	int32_t x307 = INT32_MIN;
	int64_t t76 = 1LL;

	t76 = (x305&(x306==(x307==x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = UINT8_MAX;
	static volatile uint8_t x310 = 4U;
	uint64_t x311 = 214314436145214LLU;
	volatile int32_t t77 = 1;

	t77 = (x309&(x310==(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	static int16_t x315 = -7;
	uint64_t x316 = UINT64_MAX;
	int32_t t78 = -6593;

	t78 = (x313&(x314==(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 6;
	uint32_t x318 = UINT32_MAX;
	static uint32_t x319 = 43240U;
	uint16_t x320 = 1U;
	int32_t t79 = 14384390;

	t79 = (x317&(x318==(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 2777;

	t80 = (x321&(x322==(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = 7U;
	uint32_t x326 = UINT32_MAX;
	int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MAX;
	uint32_t t81 = 333U;

	t81 = (x325&(x326==(x327==x328)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	uint8_t x330 = 7U;
	uint64_t x331 = 433609629370117539LLU;
	volatile uint16_t x332 = 11502U;
	int32_t t82 = 134;

	t82 = (x329&(x330==(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 3U;
	uint32_t x334 = UINT32_MAX;
	static int32_t t83 = -90;

	t83 = (x333&(x334==(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	int32_t x339 = INT32_MAX;
	int32_t x340 = -1;
	volatile int32_t t84 = -30218;

	t84 = (x337&(x338==(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 1392LLU;

	t85 = (x341&(x342==(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	uint16_t x346 = 6484U;
	int32_t x347 = -1;
	static int32_t t86 = 252312425;

	t86 = (x345&(x346==(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x351 = 11U;
	static int16_t x352 = INT16_MAX;

	t87 = (x349&(x350==(x351==x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	int16_t x356 = INT16_MIN;

	t88 = (x353&(x354==(x355==x356)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 2U;
	int64_t x358 = 87712953117962603LL;
	int32_t x360 = -38034;
	static volatile int32_t t89 = 0;

	t89 = (x357&(x358==(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 616124282299LLU;
	uint8_t x362 = 11U;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -255;

	t90 = (x361&(x362==(x363==x364)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = 403547;
	uint8_t x367 = 5U;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 72;

	t91 = (x365&(x366==(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = 31002LL;
	static uint8_t x372 = 3U;
	volatile int32_t t92 = 37226104;

	t92 = (x369&(x370==(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 24;
	int16_t x374 = 6578;
	int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	volatile int32_t t93 = -407026292;

	t93 = (x373&(x374==(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 4U;
	int64_t x378 = -7LL;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = 201;

	t94 = (x377&(x378==(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	static int8_t x382 = -2;
	volatile int8_t x383 = INT8_MAX;

	t95 = (x381&(x382==(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 0;
	int16_t x386 = -3;
	volatile int8_t x388 = -1;

	t96 = (x385&(x386==(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 1;
	int64_t x390 = INT64_MIN;
	static int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	int32_t t97 = -226993;

	t97 = (x389&(x390==(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MAX;
	static int64_t x394 = -26651214LL;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = 3359367;

	t98 = (x393&(x394==(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	static uint8_t x400 = 3U;
	int64_t t99 = -31002250439291LL;

	t99 = (x397&(x398==(x399==x400)));

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

