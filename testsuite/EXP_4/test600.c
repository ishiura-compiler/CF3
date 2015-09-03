#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 503555LL;
uint32_t x3 = UINT32_MAX;
volatile int64_t x7 = INT64_MIN;
int8_t x22 = 1;
int64_t x23 = INT64_MIN;
volatile int8_t x24 = 1;
int16_t x26 = 0;
static int32_t x29 = INT32_MIN;
int64_t x30 = -224019251235816LL;
static int32_t t7 = INT32_MIN;
int16_t x37 = INT16_MIN;
volatile uint16_t x42 = UINT16_MAX;
uint32_t x49 = UINT32_MAX;
static volatile uint64_t x50 = 6264698260053023LLU;
uint32_t x54 = 244U;
static int32_t t13 = INT32_MIN;
int32_t t15 = 95643;
int16_t x66 = 24;
static volatile uint32_t x67 = UINT32_MAX;
uint8_t x76 = UINT8_MAX;
int16_t x77 = INT16_MAX;
uint8_t x81 = 5U;
static int64_t x83 = -8621450769824LL;
static int32_t x84 = 13;
uint8_t x85 = UINT8_MAX;
volatile int32_t t21 = -12;
uint64_t x89 = UINT64_MAX;
static uint32_t x95 = 0U;
uint64_t x96 = 54299171747264LLU;
int32_t t24 = 396155811;
int64_t x101 = 51644067124LL;
volatile int16_t x102 = INT16_MIN;
int64_t t25 = 715LL;
int16_t x118 = INT16_MAX;
int64_t x122 = -2189LL;
int32_t x123 = -1;
int32_t t30 = -255;
int8_t x127 = INT8_MIN;
int64_t x136 = -1LL;
uint16_t x140 = UINT16_MAX;
static int64_t x148 = INT64_MIN;
int32_t x150 = -298;
static volatile int32_t x152 = INT32_MAX;
int32_t x158 = INT32_MIN;
int32_t t40 = 8650124;
static int32_t x172 = -3002;
volatile int64_t x175 = INT64_MAX;
int32_t t43 = -2496172;
int32_t x178 = -1;
int64_t x187 = -1LL;
volatile uint32_t x188 = 393878U;
int32_t t46 = 3574;
uint64_t x191 = UINT64_MAX;
uint32_t t47 = 54U;
int8_t x193 = INT8_MAX;
volatile uint32_t x194 = 127U;
static int8_t x195 = INT8_MIN;
volatile int8_t x196 = INT8_MIN;
int32_t t48 = 4362143;
volatile uint16_t x200 = 22U;
static int32_t x201 = INT32_MIN;
static uint16_t x203 = 233U;
volatile uint8_t x215 = 103U;
uint32_t t52 = 163065U;
uint16_t x219 = 31U;
static volatile int16_t x224 = -1;
volatile uint32_t x230 = 1174U;
uint32_t x233 = 174U;
volatile int16_t x241 = -377;
volatile int64_t x247 = INT64_MIN;
static int64_t x248 = INT64_MIN;
volatile int32_t t63 = 79764893;
uint8_t x265 = 15U;
volatile int32_t t65 = 1;
int16_t x271 = -449;
int8_t x272 = 4;
static uint64_t t66 = UINT64_MAX;
int32_t t67 = -1646;
int32_t x279 = INT32_MAX;
static int8_t x283 = INT8_MIN;
int32_t x284 = -1;
uint32_t x288 = UINT32_MAX;
static uint16_t x297 = 536U;
int16_t x303 = -12;
volatile uint32_t x304 = UINT32_MAX;
volatile int32_t t74 = 1;
int32_t x309 = INT32_MIN;
uint32_t x316 = 4684U;
int64_t x317 = INT64_MIN;
int64_t t78 = INT64_MIN;
int32_t x323 = INT32_MIN;
int64_t x326 = -1050LL;
static int64_t x328 = INT64_MAX;
int16_t x333 = INT16_MIN;
int8_t x344 = INT8_MIN;
static uint32_t x349 = 17140U;
volatile uint32_t x350 = 223887U;
static uint32_t t86 = 68038462U;
int32_t x354 = INT32_MIN;
static volatile int32_t x357 = INT32_MIN;
int16_t x361 = 94;
static volatile int8_t x365 = INT8_MIN;
static int32_t x377 = INT32_MAX;
int32_t x379 = -1;
int64_t x382 = -97361885880092429LL;
int16_t x384 = INT16_MAX;
int8_t x387 = INT8_MIN;
int64_t t97 = -104727634365935456LL;
int8_t x401 = INT8_MIN;
volatile uint16_t x406 = 14U;
static int8_t x407 = -1;


void f0(void) {
	int64_t x2 = 0LL;
	volatile uint64_t x4 = 31416993823945893LLU;
	volatile int64_t t0 = 5086107LL;

	t0 = (x1-(x2==(x3/x4)));

	if (t0 != 503554LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 55;
	static volatile uint8_t x6 = 0U;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = -19903;

	t1 = (x5-(x6==(x7/x8)));

	if (t1 != 55) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 119U;
	static int16_t x10 = 7411;
	uint64_t x11 = 121LLU;
	uint16_t x12 = 3984U;
	static volatile int32_t t2 = 515343;

	t2 = (x9-(x10==(x11/x12)));

	if (t2 != 119) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = 0U;
	volatile int64_t x15 = INT64_MAX;
	uint8_t x16 = 120U;
	int32_t t3 = 64401;

	t3 = (x13-(x14==(x15/x16)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = 4;
	uint8_t x19 = 13U;
	volatile uint16_t x20 = 20418U;
	int64_t t4 = 141828026583256086LL;

	t4 = (x17-(x18==(x19/x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 0;
	volatile int32_t t5 = 154357;

	t5 = (x21-(x22==(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	static int16_t x27 = -6949;
	static int8_t x28 = INT8_MAX;
	int32_t t6 = 4512241;

	t6 = (x25-(x26==(x27/x28)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MIN;

	t7 = (x29-(x30==(x31/x32)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -830016715;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = INT8_MAX;
	int32_t t8 = -37087051;

	t8 = (x33-(x34==(x35/x36)));

	if (t8 != -830016715) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	volatile int32_t x39 = -1;
	int32_t x40 = -1;
	static int32_t t9 = 7035;

	t9 = (x37-(x38==(x39/x40)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 1;
	static int32_t x43 = -3427995;
	static int8_t x44 = -1;
	static volatile int32_t t10 = 1914875;

	t10 = (x41-(x42==(x43/x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = INT64_MAX;
	int16_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x45-(x46==(x47/x48)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 7U;
	uint32_t t12 = UINT32_MAX;

	t12 = (x49-(x50==(x51/x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile uint16_t x55 = 19873U;
	int16_t x56 = INT16_MAX;

	t13 = (x53-(x54==(x55/x56)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x57 = 95U;
	static int8_t x58 = -22;
	int16_t x59 = INT16_MIN;
	int16_t x60 = -1;
	static volatile int32_t t14 = 56136836;

	t14 = (x57-(x58==(x59/x60)));

	if (t14 != 95) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int64_t x62 = INT64_MAX;
	uint8_t x63 = 11U;
	volatile uint8_t x64 = UINT8_MAX;

	t15 = (x61-(x62==(x63/x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 1098226399893186LLU;
	volatile int16_t x68 = INT16_MAX;
	uint64_t t16 = 83867948777LLU;

	t16 = (x65-(x66==(x67/x68)));

	if (t16 != 1098226399893186LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	volatile int32_t x70 = 0;
	static int64_t x71 = INT64_MIN;
	uint32_t x72 = 37508U;
	volatile int32_t t17 = 0;

	t17 = (x69-(x70==(x71/x72)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 3790U;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 21236U;
	volatile uint32_t t18 = 13U;

	t18 = (x73-(x74==(x75/x76)));

	if (t18 != 3790U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = -1LL;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -112805348;

	t19 = (x77-(x78==(x79/x80)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	int32_t t20 = -433469784;

	t20 = (x81-(x82==(x83/x84)));

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	uint8_t x87 = 28U;
	int64_t x88 = INT64_MAX;

	t21 = (x85-(x86==(x87/x88)));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x90 = -392;
	int32_t x91 = 32915;
	int64_t x92 = INT64_MIN;
	uint64_t t22 = UINT64_MAX;

	t22 = (x89-(x90==(x91/x92)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	static int64_t x94 = INT64_MIN;
	static volatile int32_t t23 = -1021654;

	t23 = (x93-(x94==(x95/x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 44U;
	int16_t x98 = INT16_MAX;
	volatile int64_t x99 = INT64_MIN;
	uint32_t x100 = 9498U;

	t24 = (x97-(x98==(x99/x100)));

	if (t24 != 44) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MAX;

	t25 = (x101-(x102==(x103/x104)));

	if (t25 != 51644067124LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -2LL;
	int32_t x106 = -45;
	static uint8_t x107 = 10U;
	int8_t x108 = -1;
	volatile int64_t t26 = 0LL;

	t26 = (x105-(x106==(x107/x108)));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MAX;
	uint8_t x111 = 2U;
	static int16_t x112 = INT16_MIN;
	static int64_t t27 = INT64_MIN;

	t27 = (x109-(x110==(x111/x112)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	volatile int32_t x114 = -1;
	int8_t x115 = INT8_MAX;
	int64_t x116 = -41LL;
	int32_t t28 = 874;

	t28 = (x113-(x114==(x115/x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint32_t x119 = 7440556U;
	volatile uint64_t x120 = 85897LLU;
	volatile int32_t t29 = -998092693;

	t29 = (x117-(x118==(x119/x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 2;
	uint32_t x124 = 2U;

	t30 = (x121-(x122==(x123/x124)));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	uint16_t x126 = 2812U;
	static int16_t x128 = -4997;
	int32_t t31 = 96426;

	t31 = (x125-(x126==(x127/x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 100U;
	int8_t x131 = -1;
	int32_t x132 = -1;
	int32_t t32 = INT32_MIN;

	t32 = (x129-(x130==(x131/x132)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	volatile uint64_t x134 = 105516LLU;
	int8_t x135 = INT8_MAX;
	int32_t t33 = 96;

	t33 = (x133-(x134==(x135/x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t t34 = 1801;

	t34 = (x137-(x138==(x139/x140)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	static uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	int64_t x144 = 394016662680218LL;
	static uint32_t t35 = UINT32_MAX;

	t35 = (x141-(x142==(x143/x144)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = INT16_MIN;
	volatile uint32_t x146 = UINT32_MAX;
	int8_t x147 = 1;
	volatile int32_t t36 = 1006;

	t36 = (x145-(x146==(x147/x148)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 3U;
	uint8_t x151 = UINT8_MAX;
	volatile int32_t t37 = 46997;

	t37 = (x149-(x150==(x151/x152)));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 595U;
	int32_t x154 = -1;
	int32_t x155 = -1;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -5;

	t38 = (x153-(x154==(x155/x156)));

	if (t38 != 595) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MAX;
	uint64_t x159 = 44LLU;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -518;

	t39 = (x157-(x158==(x159/x160)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = 1;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -1;

	t40 = (x161-(x162==(x163/x164)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 3U;
	uint8_t x166 = 31U;
	volatile int32_t x167 = INT32_MAX;
	int32_t x168 = INT32_MIN;
	volatile uint32_t t41 = 14973901U;

	t41 = (x165-(x166==(x167/x168)));

	if (t41 != 3U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MAX;
	volatile int8_t x171 = INT8_MIN;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (x169-(x170==(x171/x172)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 0U;
	int64_t x174 = 121LL;
	int8_t x176 = 5;

	t43 = (x173-(x174==(x175/x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = -5;
	uint32_t x179 = 0U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -230;

	t44 = (x177-(x178==(x179/x180)));

	if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 15129;
	uint16_t x182 = 3608U;
	int8_t x183 = INT8_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = -155754972;

	t45 = (x181-(x182==(x183/x184)));

	if (t45 != 15129) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -537;
	uint16_t x186 = 157U;

	t46 = (x185-(x186==(x187/x188)));

	if (t46 != -537) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 16U;
	uint64_t x190 = 358420809985729938LLU;
	static int32_t x192 = 1;

	t47 = (x189-(x190==(x191/x192)));

	if (t47 != 16U) { NG(); } else { ; }
	
}

void f48(void) {


	t48 = (x193-(x194==(x195/x196)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 54470454434628LLU;
	int8_t x198 = INT8_MAX;
	static uint32_t x199 = UINT32_MAX;
	volatile uint64_t t49 = 130942609889947517LLU;

	t49 = (x197-(x198==(x199/x200)));

	if (t49 != 54470454434628LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 2U;
	int32_t x204 = INT32_MAX;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x201-(x202==(x203/x204)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 61;
	static int64_t x206 = INT64_MIN;
	volatile uint64_t x207 = UINT64_MAX;
	volatile uint8_t x208 = 6U;
	int32_t t51 = -2742869;

	t51 = (x205-(x206==(x207/x208)));

	if (t51 != 61) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 862818830U;
	int16_t x214 = INT16_MAX;
	uint32_t x216 = 1U;

	t52 = (x213-(x214==(x215/x216)));

	if (t52 != 862818830U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -12360;
	int64_t x218 = -1LL;
	int64_t x220 = -1LL;
	static volatile int32_t t53 = -97;

	t53 = (x217-(x218==(x219/x220)));

	if (t53 != -12360) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 98U;
	int16_t x222 = -178;
	int32_t x223 = INT32_MAX;
	int32_t t54 = 390959171;

	t54 = (x221-(x222==(x223/x224)));

	if (t54 != 98) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = INT32_MAX;
	uint32_t x226 = UINT32_MAX;
	volatile int32_t x227 = INT32_MAX;
	static volatile uint8_t x228 = UINT8_MAX;
	int32_t t55 = INT32_MAX;

	t55 = (x225-(x226==(x227/x228)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MAX;
	static volatile uint64_t x231 = 174626939694140727LLU;
	int32_t x232 = 46850;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x229-(x230==(x231/x232)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x234 = UINT32_MAX;
	static int64_t x235 = 14152437817LL;
	volatile int8_t x236 = 1;
	volatile uint32_t t57 = 353U;

	t57 = (x233-(x234==(x235/x236)));

	if (t57 != 174U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x237 = INT16_MIN;
	static volatile uint8_t x238 = UINT8_MAX;
	uint8_t x239 = 0U;
	int32_t x240 = -1;
	int32_t t58 = 14196857;

	t58 = (x237-(x238==(x239/x240)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x242 = 0U;
	static uint8_t x243 = UINT8_MAX;
	uint64_t x244 = 5662273845LLU;
	int32_t t59 = 1658;

	t59 = (x241-(x242==(x243/x244)));

	if (t59 != -378) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x245 = 9263;
	uint32_t x246 = 9169U;
	volatile int32_t t60 = 1112;

	t60 = (x245-(x246==(x247/x248)));

	if (t60 != 9263) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x249 = -1;
	uint16_t x250 = 0U;
	static int8_t x251 = 0;
	int32_t x252 = INT32_MIN;
	volatile int32_t t61 = -33569;

	t61 = (x249-(x250==(x251/x252)));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MIN;
	int8_t x255 = -1;
	volatile uint32_t x256 = 575U;
	uint64_t t62 = UINT64_MAX;

	t62 = (x253-(x254==(x255/x256)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 0;
	uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = INT64_MIN;
	volatile int64_t x260 = INT64_MIN;

	t63 = (x257-(x258==(x259/x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MIN;
	uint32_t t64 = UINT32_MAX;

	t64 = (x261-(x262==(x263/x264)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x266 = 7U;
	int64_t x267 = INT64_MIN;
	uint8_t x268 = UINT8_MAX;

	t65 = (x265-(x266==(x267/x268)));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = -12702;

	t66 = (x269-(x270==(x271/x272)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = UINT16_MAX;
	uint16_t x274 = 1331U;
	int8_t x275 = 1;
	int8_t x276 = 14;

	t67 = (x273-(x274==(x275/x276)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x277 = 2U;
	uint8_t x278 = 0U;
	int64_t x280 = INT64_MIN;
	int32_t t68 = -5125;

	t68 = (x277-(x278==(x279/x280)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x281 = 1626;
	int64_t x282 = INT64_MIN;
	volatile int32_t t69 = 0;

	t69 = (x281-(x282==(x283/x284)));

	if (t69 != 1626) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MAX;
	static int8_t x287 = INT8_MIN;
	volatile int32_t t70 = INT32_MIN;

	t70 = (x285-(x286==(x287/x288)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = 122506LLU;
	int32_t x291 = -137;
	int32_t x292 = 32216235;
	int32_t t71 = -5890768;

	t71 = (x289-(x290==(x291/x292)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	static uint16_t x295 = 4558U;
	volatile int32_t x296 = -1;
	static int32_t t72 = 791955;

	t72 = (x293-(x294==(x295/x296)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x298 = 29U;
	int16_t x299 = 0;
	static int8_t x300 = INT8_MAX;
	volatile int32_t t73 = -1015300026;

	t73 = (x297-(x298==(x299/x300)));

	if (t73 != 536) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	volatile uint32_t x302 = 10554733U;

	t74 = (x301-(x302==(x303/x304)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = UINT64_MAX;
	int64_t x306 = 28LL;
	int64_t x307 = 6772802604892LL;
	static int64_t x308 = INT64_MIN;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x305-(x306==(x307/x308)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x310 = INT32_MIN;
	int16_t x311 = -25;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t76 = INT32_MIN;

	t76 = (x309-(x310==(x311/x312)));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = 511LL;
	int32_t x314 = -120987192;
	int64_t x315 = INT64_MIN;
	volatile int64_t t77 = -14LL;

	t77 = (x313-(x314==(x315/x316)));

	if (t77 != 511LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = 490LL;
	int8_t x320 = -2;

	t78 = (x317-(x318==(x319/x320)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	static int8_t x322 = INT8_MAX;
	volatile int64_t x324 = INT64_MAX;
	int32_t t79 = -534244944;

	t79 = (x321-(x322==(x323/x324)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MAX;
	int16_t x327 = INT16_MIN;
	static int32_t t80 = 2;

	t80 = (x325-(x326==(x327/x328)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x329 = INT64_MIN;
	int16_t x330 = -15;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int64_t t81 = INT64_MIN;

	t81 = (x329-(x330==(x331/x332)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x334 = 169012;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1056;
	volatile int32_t t82 = 177953051;

	t82 = (x333-(x334==(x335/x336)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = 7748749916287207LLU;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -1;
	int32_t t83 = INT32_MIN;

	t83 = (x337-(x338==(x339/x340)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = -335660132688LL;
	static int8_t x342 = INT8_MAX;
	int8_t x343 = INT8_MAX;
	int64_t t84 = -1549276334217970514LL;

	t84 = (x341-(x342==(x343/x344)));

	if (t84 != -335660132688LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	static int64_t x347 = INT64_MIN;
	volatile uint16_t x348 = UINT16_MAX;
	int32_t t85 = INT32_MIN;

	t85 = (x345-(x346==(x347/x348)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x351 = -1977845508LL;
	uint64_t x352 = 6585980102505LLU;

	t86 = (x349-(x350==(x351/x352)));

	if (t86 != 17140U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -1;
	int32_t x355 = INT32_MIN;
	static int8_t x356 = 3;
	volatile int32_t t87 = 1;

	t87 = (x353-(x354==(x355/x356)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x358 = UINT64_MAX;
	volatile uint8_t x359 = UINT8_MAX;
	int64_t x360 = -1LL;
	static int32_t t88 = INT32_MIN;

	t88 = (x357-(x358==(x359/x360)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x362 = UINT32_MAX;
	uint32_t x363 = 3719U;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t89 = 245394;

	t89 = (x361-(x362==(x363/x364)));

	if (t89 != 94) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	uint8_t x368 = UINT8_MAX;
	int32_t t90 = 128139;

	t90 = (x365-(x366==(x367/x368)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = UINT32_MAX;
	static int32_t x370 = INT32_MIN;
	volatile int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x369-(x370==(x371/x372)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = 257569895U;
	uint16_t x374 = 213U;
	int8_t x375 = -1;
	volatile int64_t x376 = -916570571722181719LL;
	volatile uint32_t t92 = 6573U;

	t92 = (x373-(x374==(x375/x376)));

	if (t92 != 257569895U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x378 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t93 = INT32_MAX;

	t93 = (x377-(x378==(x379/x380)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	volatile int16_t x383 = INT16_MAX;
	static volatile int64_t t94 = INT64_MIN;

	t94 = (x381-(x382==(x383/x384)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MIN;
	static volatile int64_t x386 = -1LL;
	int64_t x388 = 780774270LL;
	int32_t t95 = 12;

	t95 = (x385-(x386==(x387/x388)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x393 = -1LL;
	uint64_t x394 = 37121612LLU;
	uint16_t x395 = 76U;
	int64_t x396 = -1LL;
	int64_t t96 = 0LL;

	t96 = (x393-(x394==(x395/x396)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = -1LL;
	static int16_t x398 = -1;
	int64_t x399 = 26179543572LL;
	uint64_t x400 = 766251049641864LLU;

	t97 = (x397-(x398==(x399/x400)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x402 = -1;
	static uint16_t x403 = UINT16_MAX;
	static volatile uint8_t x404 = UINT8_MAX;
	volatile int32_t t98 = 139594;

	t98 = (x401-(x402==(x403/x404)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = UINT8_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t99 = 510;

	t99 = (x405-(x406==(x407/x408)));

	if (t99 != 255) { NG(); } else { ; }
	
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

