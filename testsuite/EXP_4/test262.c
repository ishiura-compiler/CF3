#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int64_t t3 = INT64_MIN;
int32_t x24 = -2141959;
int8_t x28 = INT8_MAX;
static uint64_t x29 = 3797241256654LLU;
volatile uint64_t x31 = UINT64_MAX;
int32_t x36 = INT32_MAX;
uint64_t t7 = UINT64_MAX;
int32_t x54 = INT32_MIN;
static int64_t x58 = INT64_MIN;
int32_t t13 = 589671713;
volatile uint8_t x64 = 19U;
int16_t x70 = 1;
int16_t x73 = -3;
uint16_t x75 = 7U;
int32_t t17 = -4812073;
volatile int16_t x78 = INT16_MIN;
uint64_t x80 = 70203683947741723LLU;
int64_t t18 = INT64_MAX;
int16_t x82 = INT16_MAX;
static uint64_t x83 = 29449778554164LLU;
static int32_t t19 = -977;
static uint8_t x91 = 0U;
volatile int64_t x100 = 32297113LL;
uint32_t x106 = UINT32_MAX;
static volatile int32_t t25 = 15683255;
static int64_t x118 = -1LL;
volatile int8_t x127 = 3;
uint64_t x129 = 49687624273077201LLU;
uint32_t x133 = UINT32_MAX;
int16_t x138 = INT16_MIN;
static volatile uint64_t x141 = 7838692272631316LLU;
int32_t x145 = INT32_MIN;
volatile uint64_t t36 = UINT64_MAX;
int16_t x156 = -1;
static uint32_t x158 = 88U;
uint64_t x163 = 110346882LLU;
int32_t x168 = -10;
volatile int32_t x172 = -1;
uint64_t x182 = UINT64_MAX;
volatile uint32_t t46 = UINT32_MAX;
uint32_t x209 = 1538212054U;
volatile int64_t x212 = -1LL;
int8_t x215 = INT8_MIN;
int16_t x227 = INT16_MAX;
int32_t x229 = INT32_MAX;
int32_t x230 = INT32_MIN;
int8_t x232 = INT8_MAX;
volatile int32_t t55 = INT32_MAX;
int32_t x233 = INT32_MAX;
int32_t t56 = INT32_MAX;
int8_t x243 = INT8_MAX;
uint32_t x244 = 25622U;
int32_t t58 = -1;
static int64_t x246 = -16889330LL;
int16_t x247 = INT16_MIN;
int8_t x249 = INT8_MAX;
volatile int32_t t60 = -15744687;
volatile int64_t t61 = 393803769504693LL;
volatile int16_t x274 = INT16_MIN;
volatile uint32_t x276 = 1026146U;
int32_t x279 = -1;
volatile uint32_t t66 = UINT32_MAX;
int64_t x292 = -1LL;
static int64_t x295 = INT64_MIN;
int8_t x303 = INT8_MAX;
volatile int16_t x314 = INT16_MIN;
int64_t t73 = INT64_MIN;
int8_t x325 = -1;
uint8_t x331 = 10U;
volatile uint8_t x350 = UINT8_MAX;
static int16_t x356 = -4;
int64_t x360 = -107404999LL;
static int8_t x362 = INT8_MAX;
static volatile int64_t t83 = -79450401657516LL;
volatile int8_t x367 = INT8_MIN;
volatile int32_t t84 = -564942;
volatile int32_t t87 = 87220;
int16_t x382 = 0;
int64_t x384 = -1LL;
int8_t x388 = INT8_MAX;
uint64_t x399 = 91944LLU;
volatile uint64_t t91 = 2134370200073318LLU;
volatile int32_t x407 = 3380396;
uint32_t x412 = 53588608U;
volatile int32_t t94 = 3752;
volatile uint16_t x422 = UINT16_MAX;
uint16_t x425 = 12U;
static int8_t x428 = INT8_MIN;
static int16_t x432 = -401;


void f0(void) {
	volatile int64_t x2 = INT64_MAX;
	static uint64_t x3 = 24605392022LLU;
	int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = (x1-(x2==(x3-x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	static uint32_t x6 = 1021U;
	int32_t x7 = -1;
	int16_t x8 = INT16_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5-(x6==(x7-x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 5885;
	static volatile uint32_t x14 = 19U;
	int16_t x15 = -15;
	static volatile int8_t x16 = INT8_MIN;
	int32_t t2 = -7;

	t2 = (x13-(x14==(x15-x16)));

	if (t2 != 5885) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static int64_t x18 = -1LL;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = -2LL;

	t3 = (x17-(x18==(x19-x20)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 6080;
	int32_t x22 = INT32_MAX;
	uint32_t x23 = 2033U;
	int32_t t4 = -58;

	t4 = (x21-(x22==(x23-x24)));

	if (t4 != 6080) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	int32_t t5 = -176178397;

	t5 = (x25-(x26==(x27-x28)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MAX;
	volatile int64_t x32 = 1701595473748393044LL;
	uint64_t t6 = 95070LLU;

	t6 = (x29-(x30==(x31-x32)));

	if (t6 != 3797241256654LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MAX;
	uint64_t x35 = UINT64_MAX;

	t7 = (x33-(x34==(x35-x36)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 26U;
	int8_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	static int64_t x40 = INT64_MAX;
	int32_t t8 = 1;

	t8 = (x37-(x38==(x39-x40)));

	if (t8 != 26) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	volatile uint32_t x42 = UINT32_MAX;
	volatile uint32_t x43 = UINT32_MAX;
	uint64_t x44 = 28LLU;
	volatile int32_t t9 = -622161;

	t9 = (x41-(x42==(x43-x44)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 1969U;
	int64_t x46 = INT64_MAX;
	int64_t x47 = INT64_MIN;
	static int64_t x48 = INT64_MIN;
	volatile int32_t t10 = -341202;

	t10 = (x45-(x46==(x47-x48)));

	if (t10 != 1969) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MAX;
	static int32_t x50 = INT32_MIN;
	int32_t x51 = 4094798;
	uint32_t x52 = 67U;
	static int32_t t11 = INT32_MAX;

	t11 = (x49-(x50==(x51-x52)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 3U;
	int32_t t12 = -1;

	t12 = (x53-(x54==(x55-x56)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;

	t13 = (x57-(x58==(x59-x60)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x62 = UINT16_MAX;
	static uint64_t x63 = 150450LLU;
	int64_t t14 = INT64_MIN;

	t14 = (x61-(x62==(x63-x64)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -7;
	int64_t x66 = -1LL;
	int32_t x67 = 248012;
	static uint64_t x68 = UINT64_MAX;
	static int32_t t15 = 11139174;

	t15 = (x65-(x66==(x67-x68)));

	if (t15 != -7) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 21U;
	volatile int64_t x71 = INT64_MIN;
	static int8_t x72 = -1;
	volatile int32_t t16 = -295;

	t16 = (x69-(x70==(x71-x72)));

	if (t16 != 21) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	int16_t x76 = INT16_MIN;

	t17 = (x73-(x74==(x75-x76)));

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	int32_t x79 = INT32_MAX;

	t18 = (x77-(x78==(x79-x80)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -16;
	int8_t x84 = -17;

	t19 = (x81-(x82==(x83-x84)));

	if (t19 != -16) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = -8;
	uint64_t x86 = 12LLU;
	uint32_t x87 = UINT32_MAX;
	static int64_t x88 = -1LL;
	int32_t t20 = 121330324;

	t20 = (x85-(x86==(x87-x88)));

	if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	int16_t x90 = -1;
	int16_t x92 = INT16_MIN;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x89-(x90==(x91-x92)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = -222679LL;
	uint8_t x94 = UINT8_MAX;
	static int32_t x95 = INT32_MIN;
	static uint64_t x96 = 293670353513LLU;
	int64_t t22 = 22124423129494LL;

	t22 = (x93-(x94==(x95-x96)));

	if (t22 != -222679LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = INT8_MIN;
	int32_t t23 = -7;

	t23 = (x97-(x98==(x99-x100)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MAX;
	static volatile int64_t x102 = -1LL;
	static int64_t x103 = -1LL;
	int16_t x104 = 103;
	int64_t t24 = INT64_MAX;

	t24 = (x101-(x102==(x103-x104)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -2658;
	int8_t x107 = 0;
	int32_t x108 = INT32_MAX;

	t25 = (x105-(x106==(x107-x108)));

	if (t25 != -2658) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	static int64_t x110 = INT64_MIN;
	volatile int64_t x111 = -1LL;
	int8_t x112 = 1;
	volatile int32_t t26 = -125200;

	t26 = (x109-(x110==(x111-x112)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	int64_t x114 = INT64_MIN;
	uint16_t x115 = UINT16_MAX;
	uint64_t x116 = UINT64_MAX;
	static volatile int32_t t27 = -21;

	t27 = (x113-(x114==(x115-x116)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	uint8_t x119 = UINT8_MAX;
	static int8_t x120 = 1;
	int32_t t28 = -3849;

	t28 = (x117-(x118==(x119-x120)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	volatile int64_t x122 = 3744255203624LL;
	int32_t x123 = 0;
	int64_t x124 = -1LL;
	int32_t t29 = 5;

	t29 = (x121-(x122==(x123-x124)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	uint64_t x126 = 118775189LLU;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t30 = -3221353;

	t30 = (x125-(x126==(x127-x128)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x130 = 64572U;
	int16_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t31 = 5252056189113LLU;

	t31 = (x129-(x130==(x131-x132)));

	if (t31 != 49687624273077201LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x134 = -1;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = (x133-(x134==(x135-x136)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x137 = 3280980U;
	uint32_t x139 = UINT32_MAX;
	static int32_t x140 = -42877422;
	uint32_t t33 = 430U;

	t33 = (x137-(x138==(x139-x140)));

	if (t33 != 3280980U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x142 = 2LLU;
	int32_t x143 = INT32_MAX;
	volatile uint64_t x144 = 138173333375110LLU;
	uint64_t t34 = 113LLU;

	t34 = (x141-(x142==(x143-x144)));

	if (t34 != 7838692272631316LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x146 = -14156764LL;
	int64_t x147 = INT64_MAX;
	uint32_t x148 = 7345278U;
	int32_t t35 = INT32_MIN;

	t35 = (x145-(x146==(x147-x148)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int16_t x150 = -7144;
	int64_t x151 = INT64_MIN;
	int64_t x152 = -3315635LL;

	t36 = (x149-(x150==(x151-x152)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -30691;
	volatile uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int32_t t37 = -7394558;

	t37 = (x153-(x154==(x155-x156)));

	if (t37 != -30691) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = 66;
	uint16_t x159 = UINT16_MAX;
	volatile uint16_t x160 = 8602U;
	volatile int32_t t38 = 5;

	t38 = (x157-(x158==(x159-x160)));

	if (t38 != 66) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = -248;
	static uint64_t x164 = 226328064096199727LLU;
	static int32_t t39 = 15098;

	t39 = (x161-(x162==(x163-x164)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = UINT32_MAX;
	int64_t x166 = INT64_MAX;
	uint16_t x167 = UINT16_MAX;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x165-(x166==(x167-x168)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	static volatile int64_t x170 = 65571935555127LL;
	volatile int64_t x171 = -6763738836LL;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x169-(x170==(x171-x172)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 1U;
	uint64_t x174 = 259464810536053LLU;
	int32_t x175 = -1;
	volatile int16_t x176 = 6;
	volatile int32_t t42 = 111;

	t42 = (x173-(x174==(x175-x176)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = UINT64_MAX;
	int8_t x178 = INT8_MIN;
	int64_t x179 = 403318300LL;
	int16_t x180 = 3215;
	uint64_t t43 = UINT64_MAX;

	t43 = (x177-(x178==(x179-x180)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = INT16_MAX;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t44 = 608;

	t44 = (x181-(x182==(x183-x184)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = -1LL;
	uint64_t x186 = 168508592664404412LLU;
	uint8_t x187 = 5U;
	volatile int64_t x188 = INT64_MAX;
	volatile int64_t t45 = -455050124109613405LL;

	t45 = (x185-(x186==(x187-x188)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = 20082U;
	int32_t x196 = INT32_MAX;

	t46 = (x193-(x194==(x195-x196)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = -13;
	int16_t x198 = -1;
	uint64_t x199 = 8452095266037LLU;
	int8_t x200 = -1;
	static volatile int32_t t47 = 0;

	t47 = (x197-(x198==(x199-x200)));

	if (t47 != -13) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	volatile int16_t x202 = 1070;
	uint64_t x203 = 16197685872728495LLU;
	int16_t x204 = -1;
	static volatile int32_t t48 = 0;

	t48 = (x201-(x202==(x203-x204)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = -1;
	int64_t x206 = 0LL;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = -711;
	int32_t t49 = 1421;

	t49 = (x205-(x206==(x207-x208)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = -1025;
	int16_t x211 = -2050;
	uint32_t t50 = 5063837U;

	t50 = (x209-(x210==(x211-x212)));

	if (t50 != 1538212054U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -734;
	int8_t x214 = INT8_MAX;
	uint8_t x216 = 44U;
	volatile int32_t t51 = -6;

	t51 = (x213-(x214==(x215-x216)));

	if (t51 != -734) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = 3;
	uint32_t x218 = 4U;
	uint16_t x219 = 55U;
	uint32_t x220 = 1372818U;
	volatile int32_t t52 = -230283;

	t52 = (x217-(x218==(x219-x220)));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 1U;
	volatile int8_t x222 = -1;
	static int8_t x223 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	uint32_t t53 = 1027648962U;

	t53 = (x221-(x222==(x223-x224)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = UINT32_MAX;
	static int64_t x226 = INT64_MIN;
	static int32_t x228 = INT32_MAX;
	static volatile uint32_t t54 = UINT32_MAX;

	t54 = (x225-(x226==(x227-x228)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x231 = -16;

	t55 = (x229-(x230==(x231-x232)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x234 = 28127U;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -1;

	t56 = (x233-(x234==(x235-x236)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = 14908864680111LL;
	volatile int32_t t57 = -3277;

	t57 = (x237-(x238==(x239-x240)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x241 = 361849;
	uint8_t x242 = UINT8_MAX;

	t58 = (x241-(x242==(x243-x244)));

	if (t58 != 361849) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = -1;
	static uint32_t x248 = 30U;
	static int32_t t59 = -49175;

	t59 = (x245-(x246==(x247-x248)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x250 = 3572168;
	static int16_t x251 = -6;
	volatile int8_t x252 = -1;

	t60 = (x249-(x250==(x251-x252)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = 30LL;
	int8_t x254 = -1;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;

	t61 = (x253-(x254==(x255-x256)));

	if (t61 != 30LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -1;
	int16_t x258 = 97;
	volatile uint32_t x259 = 1956190U;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t62 = -306877;

	t62 = (x257-(x258==(x259-x260)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MIN;
	static int8_t x266 = -1;
	uint16_t x267 = 35U;
	volatile uint64_t x268 = 0LLU;
	int32_t t63 = -66558;

	t63 = (x265-(x266==(x267-x268)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -2;
	static uint32_t x270 = 11115554U;
	int8_t x271 = -5;
	int32_t x272 = -61;
	volatile int32_t t64 = -94385871;

	t64 = (x269-(x270==(x271-x272)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 660231U;
	int32_t x275 = -1;
	volatile uint32_t t65 = 645862U;

	t65 = (x273-(x274==(x275-x276)));

	if (t65 != 660231U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint16_t x278 = 143U;
	volatile int64_t x280 = -1LL;

	t66 = (x277-(x278==(x279-x280)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = 0LLU;
	uint8_t x282 = UINT8_MAX;
	static uint32_t x283 = UINT32_MAX;
	uint8_t x284 = 41U;
	uint64_t t67 = 2360637LLU;

	t67 = (x281-(x282==(x283-x284)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x285 = 287351LLU;
	static int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MAX;
	uint64_t t68 = 15LLU;

	t68 = (x285-(x286==(x287-x288)));

	if (t68 != 287351LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = UINT64_MAX;
	static int64_t x290 = 137965192LL;
	static volatile int32_t x291 = INT32_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x289-(x290==(x291-x292)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MAX;
	int64_t x296 = -1LL;
	int64_t t70 = INT64_MIN;

	t70 = (x293-(x294==(x295-x296)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int8_t x298 = INT8_MAX;
	int8_t x299 = 0;
	int32_t x300 = -22;
	static volatile uint32_t t71 = UINT32_MAX;

	t71 = (x297-(x298==(x299-x300)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x301 = 363914U;
	int32_t x302 = INT32_MIN;
	uint8_t x304 = UINT8_MAX;
	static uint32_t t72 = 30U;

	t72 = (x301-(x302==(x303-x304)));

	if (t72 != 363914U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x315 = 117U;
	uint64_t x316 = 642884212774885035LLU;

	t73 = (x313-(x314==(x315-x316)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x317 = INT16_MAX;
	int16_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t74 = -103267147;

	t74 = (x317-(x318==(x319-x320)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x326 = 435891U;
	uint32_t x327 = 754U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t75 = 4469612;

	t75 = (x325-(x326==(x327-x328)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x329 = -1LL;
	uint16_t x330 = 3U;
	int32_t x332 = -1;
	static int64_t t76 = 13875159550LL;

	t76 = (x329-(x330==(x331-x332)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = 167592305U;
	static int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MAX;
	int32_t x336 = INT32_MAX;
	volatile uint32_t t77 = 36027078U;

	t77 = (x333-(x334==(x335-x336)));

	if (t77 != 167592305U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x341 = 7U;
	uint8_t x342 = 6U;
	int32_t x343 = -1;
	int32_t x344 = 44024;
	int32_t t78 = 245;

	t78 = (x341-(x342==(x343-x344)));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = INT8_MAX;
	static volatile uint8_t x346 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -7289672615LL;
	volatile int32_t t79 = 47482;

	t79 = (x345-(x346==(x347-x348)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MAX;
	static int64_t x351 = -511966805075905LL;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t80 = -100153;

	t80 = (x349-(x350==(x351-x352)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x353 = INT32_MIN;
	int16_t x354 = -1959;
	static uint64_t x355 = 83660212690513713LLU;
	static volatile int32_t t81 = INT32_MIN;

	t81 = (x353-(x354==(x355-x356)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x357 = 22U;
	int16_t x358 = 15355;
	volatile uint32_t x359 = UINT32_MAX;
	int32_t t82 = 490700998;

	t82 = (x357-(x358==(x359-x360)));

	if (t82 != 22) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x361 = 0LL;
	static volatile int32_t x363 = 254;
	volatile uint8_t x364 = UINT8_MAX;

	t83 = (x361-(x362==(x363-x364)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MIN;

	t84 = (x365-(x366==(x367-x368)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x369 = UINT8_MAX;
	static int64_t x370 = INT64_MIN;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	int32_t t85 = -8060;

	t85 = (x369-(x370==(x371-x372)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = INT64_MAX;
	static int8_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x373-(x374==(x375-x376)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -11319102;
	volatile int8_t x380 = 6;

	t87 = (x377-(x378==(x379-x380)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = 1441489;
	int8_t x383 = INT8_MIN;
	int32_t t88 = 48844881;

	t88 = (x381-(x382==(x383-x384)));

	if (t88 != 1441489) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = UINT64_MAX;
	static int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x385-(x386==(x387-x388)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = 399621LL;
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	int16_t x392 = INT16_MAX;
	volatile int64_t t90 = 9733LL;

	t90 = (x389-(x390==(x391-x392)));

	if (t90 != 399621LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 186687263163894LLU;
	int8_t x398 = -28;
	int16_t x400 = INT16_MIN;

	t91 = (x397-(x398==(x399-x400)));

	if (t91 != 186687263163894LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x401 = UINT64_MAX;
	int8_t x402 = -45;
	static volatile int32_t x403 = -1;
	uint16_t x404 = UINT16_MAX;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = (x401-(x402==(x403-x404)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x405 = INT32_MAX;
	uint64_t x406 = 209002587LLU;
	int64_t x408 = INT64_MAX;
	static int32_t t93 = INT32_MAX;

	t93 = (x405-(x406==(x407-x408)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = 0U;
	int64_t x410 = 463368649380824318LL;
	int8_t x411 = -1;

	t94 = (x409-(x410==(x411-x412)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MAX;
	int8_t x414 = -1;
	uint64_t x415 = 1841747140106LLU;
	int64_t x416 = 32035392611110LL;
	volatile int32_t t95 = -3172407;

	t95 = (x413-(x414==(x415-x416)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x417 = UINT64_MAX;
	uint64_t x418 = 91LLU;
	static int64_t x419 = 1LL;
	static uint32_t x420 = 6737U;
	static volatile uint64_t t96 = UINT64_MAX;

	t96 = (x417-(x418==(x419-x420)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x421 = UINT16_MAX;
	uint8_t x423 = 50U;
	int16_t x424 = -1;
	int32_t t97 = -5;

	t97 = (x421-(x422==(x423-x424)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x426 = 49599U;
	int64_t x427 = -1LL;
	int32_t t98 = -7971974;

	t98 = (x425-(x426==(x427-x428)));

	if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x429 = 312163967LLU;
	int8_t x430 = -1;
	static uint32_t x431 = 1069411U;
	volatile uint64_t t99 = 54591LLU;

	t99 = (x429-(x430==(x431-x432)));

	if (t99 != 312163967LLU) { NG(); } else { ; }
	
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

