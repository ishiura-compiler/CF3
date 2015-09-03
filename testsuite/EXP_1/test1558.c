#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
int8_t x8 = INT8_MIN;
int64_t t1 = INT64_MIN;
int64_t x10 = 11153707LL;
uint32_t t4 = 14U;
int64_t x21 = -1LL;
uint64_t t5 = 1728LLU;
int16_t x28 = INT16_MIN;
int16_t x29 = -1;
int64_t x31 = -1LL;
uint16_t x32 = UINT16_MAX;
uint16_t x34 = UINT16_MAX;
int64_t x40 = INT64_MIN;
int64_t x44 = -1LL;
static int8_t x46 = INT8_MIN;
volatile int64_t x59 = -1LL;
volatile int64_t t14 = -5345207LL;
int32_t t17 = -131541308;
volatile int32_t x76 = -18499;
volatile int64_t x77 = 719081LL;
int16_t x79 = INT16_MIN;
int64_t t19 = 0LL;
volatile int32_t x82 = INT32_MIN;
uint64_t x83 = 7742522564256LLU;
volatile uint32_t x91 = 762730U;
int64_t x92 = -1LL;
int32_t x95 = -1;
int32_t x98 = -1;
int8_t x100 = -1;
uint64_t x101 = 103566LLU;
int32_t t25 = 1;
volatile int64_t x106 = 2LL;
int64_t x112 = 51474960999398LL;
volatile uint16_t x114 = 6291U;
uint8_t x121 = 14U;
static uint8_t x125 = UINT8_MAX;
static int32_t x131 = -1;
uint8_t x142 = 0U;
volatile int8_t x143 = -1;
volatile uint64_t t35 = 700086429793769859LLU;
static volatile uint8_t x148 = UINT8_MAX;
volatile uint32_t x156 = UINT32_MAX;
uint8_t x157 = UINT8_MAX;
static int64_t x158 = INT64_MIN;
static uint8_t x161 = 0U;
static int8_t x168 = INT8_MIN;
volatile int32_t t41 = -3;
int32_t x173 = INT32_MIN;
static int64_t x177 = 15LL;
uint64_t x178 = 5LLU;
static int64_t x182 = INT64_MIN;
int32_t x184 = -147871166;
volatile int64_t x203 = 148818864249021907LL;
volatile int8_t x205 = -1;
static int16_t x206 = -1;
int64_t x207 = 1LL;
int64_t t51 = -676996234LL;
volatile int64_t t52 = -50760807192LL;
uint64_t t53 = 2681LLU;
int32_t t55 = 1;
int32_t t56 = 3258118;
int64_t t57 = 462296LL;
static volatile int16_t x233 = INT16_MIN;
uint64_t x234 = UINT64_MAX;
uint8_t x241 = UINT8_MAX;
int64_t x243 = -1268822844513LL;
int16_t x246 = INT16_MAX;
uint32_t x255 = 652371U;
int32_t x259 = 447072;
uint16_t x261 = 9023U;
static uint16_t x262 = 398U;
int32_t x265 = -1;
int64_t x268 = INT64_MAX;
int32_t x271 = 1;
volatile uint16_t x276 = UINT16_MAX;
int32_t x278 = INT32_MAX;
uint16_t x282 = 638U;
int8_t x283 = INT8_MIN;
uint32_t x289 = UINT32_MAX;
static int32_t x290 = INT32_MIN;
uint16_t x300 = 6016U;
volatile int32_t t74 = -1;
uint16_t x302 = 2075U;
int16_t x307 = -1;
int32_t x308 = INT32_MAX;
int16_t x311 = 1744;
volatile int64_t x315 = -29937779LL;
int32_t t81 = 1;
int64_t x335 = INT64_MIN;
uint64_t x336 = 3367169770LLU;
static int32_t x337 = INT32_MAX;
volatile uint32_t x351 = 10557715U;
volatile int32_t x353 = INT32_MAX;
volatile uint32_t x355 = UINT32_MAX;
static int32_t x359 = -1;
int8_t x362 = 0;
int64_t t90 = -1LL;
uint8_t x365 = 3U;
volatile uint64_t t93 = 233296717364391LLU;
int64_t t95 = 14130855990817LL;
volatile int16_t x386 = -715;
int8_t x392 = INT8_MIN;
volatile uint8_t x396 = 44U;


void f0(void) {
	uint64_t x1 = 0LLU;
	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 89;

	t0 = (((x1<=x2)*x3)&x4);

	if (t0 != 2147450880) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	static int64_t x7 = INT64_MIN;

	t1 = (((x5<=x6)*x7)&x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 8;
	int64_t x11 = -1LL;
	uint16_t x12 = 1U;
	volatile int64_t t2 = 1050293804585LL;

	t2 = (((x9<=x10)*x11)&x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -46;
	int16_t x14 = 3858;
	volatile int16_t x15 = INT16_MIN;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 30;

	t3 = (((x13<=x14)*x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int8_t x18 = 2;
	uint32_t x19 = 0U;
	volatile uint16_t x20 = 1U;

	t4 = (((x17<=x18)*x19)&x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	volatile uint64_t x23 = 862630392315701889LLU;
	static int16_t x24 = -1;

	t5 = (((x21<=x22)*x23)&x24);

	if (t5 != 862630392315701889LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 201281;
	static int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MAX;
	int32_t t6 = 982140;

	t6 = (((x25<=x26)*x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	int64_t t7 = -5761LL;

	t7 = (((x29<=x30)*x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = -1LL;
	volatile int64_t x35 = INT64_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 14623089764233LLU;

	t8 = (((x33<=x34)*x35)&x36);

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = -17;
	int64_t x39 = INT64_MIN;
	volatile int64_t t9 = -651611147730471412LL;

	t9 = (((x37<=x38)*x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 19U;
	int16_t x42 = INT16_MAX;
	int64_t x43 = 37LL;
	volatile int64_t t10 = 3910670194397LL;

	t10 = (((x41<=x42)*x43)&x44);

	if (t10 != 37LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 19;
	int32_t x47 = 20;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -1;

	t11 = (((x45<=x46)*x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1247651LL;
	volatile int32_t x50 = INT32_MIN;
	volatile int32_t x51 = -1;
	static int64_t x52 = INT64_MAX;
	int64_t t12 = 330513LL;

	t12 = (((x49<=x50)*x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile uint32_t x54 = UINT32_MAX;
	static int8_t x55 = -1;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = -5219652LL;

	t13 = (((x53<=x54)*x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = 1;
	static int8_t x60 = -1;

	t14 = (((x57<=x58)*x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 28U;
	int16_t x62 = INT16_MIN;
	volatile uint8_t x63 = 0U;
	int64_t x64 = 7LL;
	int64_t t15 = 128221215588785LL;

	t15 = (((x61<=x62)*x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1U;
	int32_t x66 = 7013;
	int16_t x67 = 507;
	uint64_t x68 = 378608456573445102LLU;
	uint64_t t16 = 16003042857042LLU;

	t16 = (((x65<=x66)*x67)&x68);

	if (t16 != 490LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	uint8_t x71 = 11U;
	static int8_t x72 = 0;

	t17 = (((x69<=x70)*x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	volatile int32_t t18 = 28;

	t18 = (((x73<=x74)*x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 216LLU;
	static int64_t x80 = INT64_MIN;

	t19 = (((x77<=x78)*x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 3LLU;
	int32_t x84 = INT32_MIN;
	volatile uint64_t t20 = 92LLU;

	t20 = (((x81<=x82)*x83)&x84);

	if (t20 != 7741678551040LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	int16_t x88 = -77;
	int32_t t21 = 1994;

	t21 = (((x85<=x86)*x87)&x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = UINT32_MAX;
	static uint64_t x90 = 21342275699179LLU;
	volatile int64_t t22 = 203244554LL;

	t22 = (((x89<=x90)*x91)&x92);

	if (t22 != 762730LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 3;
	static int64_t x94 = INT64_MIN;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 61993;

	t23 = (((x93<=x94)*x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 5677U;
	int8_t x99 = INT8_MAX;
	static int32_t t24 = 390896620;

	t24 = (((x97<=x98)*x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = UINT8_MAX;
	static int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MIN;

	t25 = (((x101<=x102)*x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static int64_t x107 = INT64_MIN;
	uint16_t x108 = 3038U;
	static int64_t t26 = -3223LL;

	t26 = (((x105<=x106)*x107)&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -72;
	static int32_t x110 = INT32_MIN;
	static int32_t x111 = INT32_MIN;
	volatile int64_t t27 = 4506868LL;

	t27 = (((x109<=x110)*x111)&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 245U;
	static uint32_t x115 = 17784U;
	int16_t x116 = -1;
	volatile uint32_t t28 = 0U;

	t28 = (((x113<=x114)*x115)&x116);

	if (t28 != 17784U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 994;
	int32_t x118 = 24300327;
	static int32_t x119 = INT32_MAX;
	volatile int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -1550;

	t29 = (((x117<=x118)*x119)&x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;
	int64_t t30 = -1296LL;

	t30 = (((x121<=x122)*x123)&x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	volatile int8_t x128 = -1;
	volatile int64_t t31 = INT64_MIN;

	t31 = (((x125<=x126)*x127)&x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 459U;
	static int8_t x130 = 3;
	uint16_t x132 = 1U;
	int32_t t32 = 29320339;

	t32 = (((x129<=x130)*x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 1;
	static int64_t x134 = 66178832357047LL;
	volatile int16_t x135 = INT16_MIN;
	static uint32_t x136 = 0U;
	uint32_t t33 = 63U;

	t33 = (((x133<=x134)*x135)&x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 0U;
	volatile int32_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 0LL;

	t34 = (((x137<=x138)*x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 12770246U;
	uint64_t x144 = UINT64_MAX;

	t35 = (((x141<=x142)*x143)&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint16_t x146 = 1U;
	int8_t x147 = 0;
	int32_t t36 = -1291389;

	t36 = (((x145<=x146)*x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -285268;
	int16_t x150 = INT16_MIN;
	static int16_t x151 = 35;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -1;

	t37 = (((x149<=x150)*x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 269776866722LLU;
	volatile int16_t x154 = INT16_MIN;
	uint64_t x155 = 1393442LLU;
	uint64_t t38 = 56422285178LLU;

	t38 = (((x153<=x154)*x155)&x156);

	if (t38 != 1393442LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x159 = INT8_MIN;
	static int16_t x160 = -1;
	int32_t t39 = 345183;

	t39 = (((x157<=x158)*x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = -16;
	volatile int32_t t40 = -226746;

	t40 = (((x161<=x162)*x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = UINT8_MAX;
	volatile int32_t x167 = -60182415;

	t41 = (((x165<=x166)*x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -9557;
	static int16_t x170 = INT16_MIN;
	static volatile int64_t x171 = INT64_MIN;
	int16_t x172 = 56;
	static volatile int64_t t42 = 4LL;

	t42 = (((x169<=x170)*x171)&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x174 = -2;
	int32_t x175 = INT32_MAX;
	volatile int64_t x176 = INT64_MIN;
	int64_t t43 = 345LL;

	t43 = (((x173<=x174)*x175)&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x179 = 25112927287208843LL;
	int32_t x180 = -10;
	int64_t t44 = 29565948455911977LL;

	t44 = (((x177<=x178)*x179)&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 4;
	uint16_t x183 = 211U;
	volatile int32_t t45 = -6;

	t45 = (((x181<=x182)*x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	static uint32_t x186 = 39220452U;
	int64_t x187 = INT64_MIN;
	int16_t x188 = -1;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x185<=x186)*x187)&x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 1U;
	uint64_t x190 = 73218724712025395LLU;
	volatile uint32_t x191 = 110095568U;
	int32_t x192 = 711;
	uint32_t t47 = 0U;

	t47 = (((x189<=x190)*x191)&x192);

	if (t47 != 192U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	static uint32_t x194 = 0U;
	int64_t x195 = INT64_MIN;
	volatile int8_t x196 = INT8_MAX;
	volatile int64_t t48 = -8LL;

	t48 = (((x193<=x194)*x195)&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -50;
	static int32_t t49 = 862661;

	t49 = (((x197<=x198)*x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	uint64_t x202 = 834143743036818695LLU;
	volatile int32_t x204 = INT32_MIN;
	volatile int64_t t50 = 852400985016443LL;

	t50 = (((x201<=x202)*x203)&x204);

	if (t50 != 148818862312259584LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x208 = 0;

	t51 = (((x205<=x206)*x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 51LLU;
	static int32_t x210 = INT32_MAX;
	int8_t x211 = 2;
	int64_t x212 = 97LL;

	t52 = (((x209<=x210)*x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 948U;
	volatile int64_t x214 = INT64_MIN;
	volatile uint32_t x215 = 9758002U;
	uint64_t x216 = 123133530346LLU;

	t53 = (((x213<=x214)*x215)&x216);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 1724353039U;
	volatile int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t54 = -135631433LL;

	t54 = (((x217<=x218)*x219)&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = 1;
	static uint16_t x222 = 184U;
	uint8_t x223 = 0U;
	int16_t x224 = INT16_MIN;

	t55 = (((x221<=x222)*x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int16_t x226 = -1;
	int8_t x227 = INT8_MIN;
	volatile int8_t x228 = INT8_MIN;

	t56 = (((x225<=x226)*x227)&x228);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static int64_t x230 = -1LL;
	volatile uint16_t x231 = 8508U;
	int64_t x232 = -1667515369507LL;

	t57 = (((x229<=x230)*x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t58 = 52202722LL;

	t58 = (((x233<=x234)*x235)&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	static volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 1915044304U;
	static volatile int64_t t59 = -1622637227863869LL;

	t59 = (((x237<=x238)*x239)&x240);

	if (t59 != 1915044304LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x242 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;
	static int64_t t60 = 243492LL;

	t60 = (((x241<=x242)*x243)&x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 62;
	uint32_t x247 = 200U;
	uint64_t x248 = 226613200430582LLU;
	uint64_t t61 = 1343425LLU;

	t61 = (((x245<=x246)*x247)&x248);

	if (t61 != 192LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MIN;
	static int8_t x250 = -1;
	int64_t x251 = INT64_MIN;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = (((x249<=x250)*x251)&x252);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	volatile int16_t x254 = -1;
	volatile int8_t x256 = -1;
	volatile uint32_t t63 = 710U;

	t63 = (((x253<=x254)*x255)&x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 86;
	uint16_t x258 = 5U;
	uint32_t x260 = 2337893U;
	volatile uint32_t t64 = 48761535U;

	t64 = (((x257<=x258)*x259)&x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x263 = 145476203323LLU;
	uint32_t x264 = UINT32_MAX;
	static uint64_t t65 = 3621097705090LLU;

	t65 = (((x261<=x262)*x263)&x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MAX;
	static volatile int64_t t66 = -81LL;

	t66 = (((x265<=x266)*x267)&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 15;
	int64_t x270 = 113347489LL;
	int64_t x272 = INT64_MAX;
	volatile int64_t t67 = 260LL;

	t67 = (((x269<=x270)*x271)&x272);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -15255;
	int8_t x274 = -3;
	static int64_t x275 = INT64_MAX;
	int64_t t68 = -82LL;

	t68 = (((x273<=x274)*x275)&x276);

	if (t68 != 65535LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int16_t x279 = INT16_MAX;
	volatile int8_t x280 = INT8_MAX;
	int32_t t69 = -43415316;

	t69 = (((x277<=x278)*x279)&x280);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 2U;
	static uint32_t x284 = UINT32_MAX;
	volatile uint32_t t70 = 0U;

	t70 = (((x281<=x282)*x283)&x284);

	if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static int16_t x286 = -64;
	uint16_t x287 = 10075U;
	uint32_t x288 = 3698891U;
	uint32_t t71 = 15U;

	t71 = (((x285<=x286)*x287)&x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x291 = 3498U;
	volatile int64_t x292 = -1LL;
	int64_t t72 = 14884LL;

	t72 = (((x289<=x290)*x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	uint16_t x294 = 2452U;
	int64_t x295 = -10992854146LL;
	static volatile uint32_t x296 = 82981281U;
	volatile int64_t t73 = 79557640LL;

	t73 = (((x293<=x294)*x295)&x296);

	if (t73 != 12718368LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int16_t x298 = INT16_MAX;
	static int16_t x299 = -20;

	t74 = (((x297<=x298)*x299)&x300);

	if (t74 != 6016) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 30031584U;
	int16_t x303 = INT16_MIN;
	int64_t x304 = 6158682099LL;
	volatile int64_t t75 = 26885LL;

	t75 = (((x301<=x302)*x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	int32_t t76 = INT32_MAX;

	t76 = (((x305<=x306)*x307)&x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	uint16_t x310 = 30U;
	static uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = -7881;

	t77 = (((x309<=x310)*x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	static int64_t x314 = INT64_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t78 = INT64_MIN;

	t78 = (((x313<=x314)*x315)&x316);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = 441890994577LL;
	static int32_t x319 = -48786226;
	int8_t x320 = 15;
	volatile int32_t t79 = 0;

	t79 = (((x317<=x318)*x319)&x320);

	if (t79 != 14) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int64_t x322 = 147597563198287LL;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = 27U;
	int64_t t80 = -2946182475LL;

	t80 = (((x321<=x322)*x323)&x324);

	if (t80 != 27LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -30;
	uint16_t x326 = 123U;
	volatile uint8_t x327 = UINT8_MAX;
	static int32_t x328 = -1;

	t81 = (((x325<=x326)*x327)&x328);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	uint32_t x330 = 2U;
	uint64_t x331 = UINT64_MAX;
	int16_t x332 = -9;
	volatile uint64_t t82 = 423454507852LLU;

	t82 = (((x329<=x330)*x331)&x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = -1LL;
	uint8_t x334 = 18U;
	uint64_t t83 = 2LLU;

	t83 = (((x333<=x334)*x335)&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = 1;
	uint8_t x339 = 57U;
	static volatile int64_t x340 = -1LL;
	volatile int64_t t84 = -9043164095LL;

	t84 = (((x337<=x338)*x339)&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x342 = -10;
	static volatile int8_t x343 = 62;
	volatile int8_t x344 = -3;
	volatile int32_t t85 = -9;

	t85 = (((x341<=x342)*x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 1873558U;
	int64_t x348 = -1LL;
	volatile int64_t t86 = -11972321LL;

	t86 = (((x345<=x346)*x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	uint32_t x352 = 12921739U;
	volatile uint32_t t87 = 1627611U;

	t87 = (((x349<=x350)*x351)&x352);

	if (t87 != 8456451U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	uint32_t t88 = 66778U;

	t88 = (((x353<=x354)*x355)&x356);

	if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t89 = 4586239296529LL;

	t89 = (((x357<=x358)*x359)&x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 46;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;

	t90 = (((x361<=x362)*x363)&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = 382;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = -1289;

	t91 = (((x365<=x366)*x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MAX;
	uint16_t x370 = 1U;
	uint64_t x371 = UINT64_MAX;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t92 = 272914370516982LLU;

	t92 = (((x369<=x370)*x371)&x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = 26U;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = 152157034U;
	uint64_t x376 = UINT64_MAX;

	t93 = (((x373<=x374)*x375)&x376);

	if (t93 != 152157034LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 19U;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = UINT16_MAX;
	volatile uint8_t x380 = 4U;
	int32_t t94 = -1436;

	t94 = (((x377<=x378)*x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x381 = 1U;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MIN;

	t95 = (((x381<=x382)*x383)&x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x387 = 3;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -411119;

	t96 = (((x385<=x386)*x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -41;
	int64_t x390 = INT64_MAX;
	volatile int8_t x391 = -1;
	volatile int32_t t97 = -1923086;

	t97 = (((x389<=x390)*x391)&x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MIN;
	volatile uint32_t x395 = UINT32_MAX;
	uint32_t t98 = 0U;

	t98 = (((x393<=x394)*x395)&x396);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	static uint8_t x398 = 3U;
	volatile uint64_t x399 = UINT64_MAX;
	volatile int8_t x400 = 1;
	volatile uint64_t t99 = 16142242920441LLU;

	t99 = (((x397<=x398)*x399)&x400);

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

