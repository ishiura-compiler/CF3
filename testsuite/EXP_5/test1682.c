#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = -1;
int32_t t2 = -10000343;
static int64_t x22 = 214254LL;
int32_t x23 = 0;
int32_t t5 = 1123265;
int64_t x33 = -1LL;
volatile int64_t t8 = -3019454LL;
int32_t x40 = INT32_MIN;
int8_t x43 = INT8_MAX;
volatile uint8_t x48 = 12U;
volatile int32_t t13 = 78828828;
int32_t x58 = INT32_MAX;
int64_t x60 = 794LL;
volatile int64_t t14 = -10315320978300753LL;
uint32_t x63 = UINT32_MAX;
static int64_t x65 = INT64_MIN;
int8_t x72 = INT8_MAX;
uint32_t t18 = 2032849U;
int64_t t20 = 3LL;
int8_t x87 = INT8_MIN;
int32_t t21 = -1127791;
uint32_t x95 = UINT32_MAX;
uint16_t x96 = 3843U;
int16_t x97 = INT16_MAX;
int16_t x99 = -1;
int32_t x110 = INT32_MIN;
volatile int32_t t25 = 4849208;
int8_t x116 = INT8_MIN;
int16_t x119 = INT16_MIN;
uint32_t x121 = 104U;
int64_t x124 = INT64_MIN;
static volatile int32_t t30 = 6622;
static int64_t t31 = 82LL;
uint32_t x145 = 3U;
static volatile int8_t x148 = -14;
volatile int64_t t35 = -17102008549326LL;
uint64_t x158 = 16LLU;
int16_t x168 = 1787;
int64_t x172 = -12185LL;
uint8_t x175 = UINT8_MAX;
int16_t x181 = INT16_MIN;
int32_t x183 = INT32_MIN;
static int32_t x189 = 951;
static int8_t x195 = -1;
volatile int64_t t45 = 3LL;
uint8_t x197 = 65U;
uint8_t x204 = 3U;
volatile int8_t x206 = INT8_MIN;
static int16_t x207 = -1;
int64_t x208 = 681162800LL;
static uint64_t x211 = 7971527284LLU;
static uint8_t x216 = 98U;
static int32_t t50 = 26306;
static uint32_t x217 = UINT32_MAX;
int32_t t52 = -243417;
int64_t x226 = INT64_MAX;
static uint64_t x232 = 5945870LLU;
int16_t x235 = INT16_MIN;
uint16_t x249 = UINT16_MAX;
int8_t x250 = INT8_MIN;
int8_t x251 = 1;
volatile uint64_t x254 = 9095LLU;
int64_t x261 = -99530071128441LL;
volatile int16_t x262 = -6369;
int64_t x266 = 17025825LL;
int32_t x271 = -65658;
int16_t x274 = -1;
volatile int64_t x280 = INT64_MIN;
uint64_t t66 = 1552334565LLU;
volatile int16_t x283 = INT16_MIN;
int32_t t67 = -2;
uint8_t x285 = 0U;
static uint8_t x289 = UINT8_MAX;
uint8_t x293 = 2U;
uint64_t x294 = 475LLU;
uint8_t x300 = UINT8_MAX;
volatile int32_t t71 = -1686367;
int16_t x303 = INT16_MIN;
uint16_t x307 = UINT16_MAX;
int8_t x308 = INT8_MIN;
int8_t x312 = -1;
volatile int8_t x315 = INT8_MIN;
int8_t x316 = 1;
static uint64_t x317 = 2265937309LLU;
int32_t x319 = -2;
static volatile int32_t t77 = 23461;
int8_t x327 = INT8_MIN;
int64_t x328 = INT64_MIN;
int64_t t79 = 1056065271304LL;
static volatile int32_t t81 = -33601706;
int32_t x352 = 24038405;
int8_t x358 = 1;
int8_t x367 = INT8_MAX;
int64_t t87 = -394731577294893LL;
int16_t x369 = 0;
uint8_t x370 = 9U;
uint8_t x374 = 15U;
static int64_t x379 = 1426064226404197LL;
int32_t x381 = 347284887;
int32_t x384 = -872727;
volatile int32_t t92 = -6;
int16_t x390 = INT16_MAX;
static volatile uint16_t x394 = UINT16_MAX;
volatile int16_t x401 = INT16_MIN;
static uint64_t x408 = 135397017213LLU;
uint64_t x414 = 55690076326LLU;
volatile int32_t t99 = 1706;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 43U;
	int64_t x4 = -623801470806650LL;
	int64_t t0 = 4LL;

	t0 = (x1%((x2<=x3)^x4));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 73U;
	int8_t x6 = -1;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -135018;

	t1 = (x5%((x6<=x7)^x8));

	if (t1 != 73) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 5778530464613324LLU;
	uint16_t x12 = 793U;

	t2 = (x9%((x10<=x11)^x12));

	if (t2 != -200) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	uint32_t x14 = 28336569U;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = 3U;
	volatile uint32_t t3 = 1674U;

	t3 = (x13%((x14<=x15)^x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	volatile int64_t x19 = INT64_MIN;
	uint64_t x20 = 247259179225964LLU;
	static volatile uint64_t t4 = 24874616537960781LLU;

	t4 = (x17%((x18<=x19)^x20));

	if (t4 != 220266735733359LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	int16_t x24 = INT16_MIN;

	t5 = (x21%((x22<=x23)^x24));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 753U;
	static int16_t x26 = 73;
	uint32_t x27 = 635556720U;
	static int64_t x28 = INT64_MAX;
	static int64_t t6 = -1656262LL;

	t6 = (x25%((x26<=x27)^x28));

	if (t6 != 753LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static volatile int16_t x30 = 8;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 242U;
	uint32_t t7 = 6U;

	t7 = (x29%((x30<=x31)^x32));

	if (t7 != 89U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 0U;
	int8_t x35 = INT8_MAX;
	int16_t x36 = 20;

	t8 = (x33%((x34<=x35)^x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MAX;
	volatile uint32_t x38 = 6U;
	int8_t x39 = INT8_MIN;
	static volatile int32_t t9 = 15;

	t9 = (x37%((x38<=x39)^x40));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 0;
	int16_t x42 = -9;
	int8_t x44 = -1;
	int32_t t10 = 441876013;

	t10 = (x41%((x42<=x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -4;
	uint32_t x46 = 7U;
	volatile int8_t x47 = 0;
	volatile int32_t t11 = 1;

	t11 = (x45%((x46<=x47)^x48));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	volatile int32_t x50 = INT32_MAX;
	volatile uint64_t x51 = 1LLU;
	int64_t x52 = -1494588LL;
	int64_t t12 = 124080723LL;

	t12 = (x49%((x50<=x51)^x52));

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	volatile int32_t x54 = -1;
	int32_t x55 = -22;
	int8_t x56 = 1;

	t13 = (x53%((x54<=x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -259856;
	int64_t x59 = INT64_MIN;

	t14 = (x57%((x58<=x59)^x60));

	if (t14 != -218LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 15;
	volatile int32_t x62 = 1409108;
	uint16_t x64 = 31104U;
	volatile int32_t t15 = 5213994;

	t15 = (x61%((x62<=x63)^x64));

	if (t15 != 15) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = 5;
	int8_t x67 = -8;
	int8_t x68 = INT8_MIN;
	static int64_t t16 = -7LL;

	t16 = (x65%((x66<=x67)^x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	uint16_t x70 = 293U;
	uint8_t x71 = 11U;
	int32_t t17 = 5647726;

	t17 = (x69%((x70<=x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 1;
	int8_t x74 = 42;
	int8_t x75 = -1;
	static volatile uint32_t x76 = UINT32_MAX;

	t18 = (x73%((x74<=x75)^x76));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 260529U;
	volatile int32_t x79 = -1;
	static volatile uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 45207022U;

	t19 = (x77%((x78<=x79)^x80));

	if (t19 != 65535U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = INT8_MIN;
	int8_t x82 = -1;
	static uint8_t x83 = UINT8_MAX;
	volatile int64_t x84 = INT64_MIN;

	t20 = (x81%((x82<=x83)^x84));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -654;
	int64_t x86 = -2385139LL;
	static uint16_t x88 = UINT16_MAX;

	t21 = (x85%((x86<=x87)^x88));

	if (t21 != -654) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = -1LL;
	uint16_t x94 = 2655U;
	int64_t t22 = 12783LL;

	t22 = (x93%((x94<=x95)^x96));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x98 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t23 = 20994LL;

	t23 = (x97%((x98<=x99)^x100));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MAX;
	static uint32_t x106 = 21U;
	int16_t x107 = INT16_MIN;
	int32_t x108 = -1;
	int32_t t24 = -34;

	t24 = (x105%((x106<=x107)^x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = -1;
	int64_t x111 = 664164111583646394LL;
	static int16_t x112 = -1;

	t25 = (x109%((x110<=x111)^x112));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x113 = 6U;
	uint16_t x114 = 3U;
	static volatile uint16_t x115 = 2587U;
	int32_t t26 = -183;

	t26 = (x113%((x114<=x115)^x116));

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	static int16_t x118 = INT16_MAX;
	int8_t x120 = -3;
	volatile int32_t t27 = 14809;

	t27 = (x117%((x118<=x119)^x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = -1LL;
	volatile int32_t x123 = 63316;
	volatile int64_t t28 = -640203826LL;

	t28 = (x121%((x122<=x123)^x124));

	if (t28 != 104LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = 8985400U;
	int32_t x126 = -105876209;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t29 = 34691LLU;

	t29 = (x125%((x126<=x127)^x128));

	if (t29 != 8985400LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = 13U;
	int16_t x135 = INT16_MAX;
	int32_t x136 = INT32_MIN;

	t30 = (x133%((x134<=x135)^x136));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = UINT8_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	volatile int16_t x140 = -3995;

	t31 = (x137%((x138<=x139)^x140));

	if (t31 != -80LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MIN;
	int32_t x143 = -1;
	int16_t x144 = INT16_MAX;
	volatile int32_t t32 = 55617;

	t32 = (x141%((x142<=x143)^x144));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x146 = 870U;
	uint16_t x147 = UINT16_MAX;
	volatile uint32_t t33 = 491395U;

	t33 = (x145%((x146<=x147)^x148));

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 1U;
	int64_t x150 = INT64_MAX;
	uint16_t x151 = 67U;
	uint64_t x152 = 830393505034LLU;
	uint64_t t34 = 16510LLU;

	t34 = (x149%((x150<=x151)^x152));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = 18362883U;
	volatile uint8_t x155 = 0U;
	uint32_t x156 = UINT32_MAX;

	t35 = (x153%((x154<=x155)^x156));

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 31567828U;
	uint8_t x159 = 9U;
	int16_t x160 = INT16_MAX;
	uint32_t t36 = 63746U;

	t36 = (x157%((x158<=x159)^x160));

	if (t36 != 13207U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	volatile int8_t x162 = INT8_MIN;
	volatile int8_t x163 = INT8_MIN;
	uint32_t x164 = 209485282U;
	static uint32_t t37 = 1U;

	t37 = (x161%((x162<=x163)^x164));

	if (t37 != 52630818U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -12;
	int8_t x166 = INT8_MAX;
	volatile int64_t x167 = INT64_MIN;
	static int32_t t38 = -106384;

	t38 = (x165%((x166<=x167)^x168));

	if (t38 != -12) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile int32_t x170 = INT32_MIN;
	static int64_t x171 = INT64_MAX;
	volatile int64_t t39 = 887030039783385470LL;

	t39 = (x169%((x170<=x171)^x172));

	if (t39 != -8396LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x173 = UINT64_MAX;
	volatile uint32_t x174 = 6150315U;
	volatile uint64_t x176 = 2LLU;
	volatile uint64_t t40 = 1126809LLU;

	t40 = (x173%((x174<=x175)^x176));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = -1LL;
	static int8_t x180 = INT8_MIN;
	int32_t t41 = 161671;

	t41 = (x177%((x178<=x179)^x180));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = INT8_MIN;
	static volatile int8_t x184 = -3;
	volatile int32_t t42 = 14;

	t42 = (x181%((x182<=x183)^x184));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 15U;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int16_t x188 = INT16_MAX;
	static volatile int32_t t43 = -113;

	t43 = (x185%((x186<=x187)^x188));

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x190 = 14;
	int8_t x191 = -1;
	int8_t x192 = -1;
	int32_t t44 = 1;

	t44 = (x189%((x190<=x191)^x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	static int16_t x194 = -6656;
	volatile uint16_t x196 = 2878U;

	t45 = (x193%((x194<=x195)^x196));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x198 = INT32_MAX;
	uint64_t x199 = 4899035999727002LLU;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = 7650;

	t46 = (x197%((x198<=x199)^x200));

	if (t46 != 65) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	volatile int8_t x202 = INT8_MIN;
	volatile int32_t x203 = -62872260;
	volatile int32_t t47 = -2129;

	t47 = (x201%((x202<=x203)^x204));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int64_t t48 = -1773153103448991475LL;

	t48 = (x205%((x206<=x207)^x208));

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 249U;
	static uint8_t x210 = 46U;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t49 = 356965;

	t49 = (x209%((x210<=x211)^x212));

	if (t49 != 249) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = 52U;
	int16_t x214 = -177;
	int64_t x215 = INT64_MIN;

	t50 = (x213%((x214<=x215)^x216));

	if (t50 != 52) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x218 = 8U;
	uint8_t x219 = 5U;
	int8_t x220 = INT8_MIN;
	static volatile uint32_t t51 = 3864U;

	t51 = (x217%((x218<=x219)^x220));

	if (t51 != 127U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	static int32_t x222 = -322071;
	int64_t x223 = INT64_MAX;
	static int16_t x224 = INT16_MIN;

	t52 = (x221%((x222<=x223)^x224));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -31LL;
	int64_t x227 = INT64_MIN;
	volatile int8_t x228 = INT8_MAX;
	volatile int64_t t53 = 2167169007922LL;

	t53 = (x225%((x226<=x227)^x228));

	if (t53 != -31LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MAX;
	int16_t x230 = -236;
	volatile int8_t x231 = -1;
	uint64_t t54 = 73744751051665LLU;

	t54 = (x229%((x230<=x231)^x232));

	if (t54 != 4668601LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x233 = 962;
	int16_t x234 = -8221;
	int32_t x236 = INT32_MIN;
	static int32_t t55 = -4;

	t55 = (x233%((x234<=x235)^x236));

	if (t55 != 962) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x237 = 4382523584525010197LLU;
	uint32_t x238 = UINT32_MAX;
	volatile int32_t x239 = -1;
	uint16_t x240 = UINT16_MAX;
	volatile uint64_t t56 = 117323056453281LLU;

	t56 = (x237%((x238<=x239)^x240));

	if (t56 != 55895LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -28;
	volatile int32_t x242 = INT32_MIN;
	static int32_t x243 = INT32_MAX;
	int64_t x244 = -13LL;
	volatile int64_t t57 = 36335438454214LL;

	t57 = (x241%((x242<=x243)^x244));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = -1LL;
	uint16_t x247 = 10684U;
	volatile uint32_t x248 = UINT32_MAX;
	uint32_t t58 = 1283353U;

	t58 = (x245%((x246<=x247)^x248));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x252 = 409799LL;
	int64_t t59 = -2003696151042LL;

	t59 = (x249%((x250<=x251)^x252));

	if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t60 = -33765925;

	t60 = (x253%((x254<=x255)^x256));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 1657U;
	volatile uint64_t x258 = 88108484335021614LLU;
	uint64_t x259 = UINT64_MAX;
	static uint32_t x260 = 1917U;
	uint32_t t61 = 76401U;

	t61 = (x257%((x258<=x259)^x260));

	if (t61 != 1657U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x263 = 403145U;
	static int16_t x264 = -174;
	int64_t t62 = 14047733LL;

	t62 = (x261%((x262<=x263)^x264));

	if (t62 != -3LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x265 = 240LLU;
	int16_t x267 = 0;
	int32_t x268 = INT32_MIN;
	static volatile uint64_t t63 = 154LLU;

	t63 = (x265%((x266<=x267)^x268));

	if (t63 != 240LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x269 = 62;
	static int32_t x270 = -1;
	volatile uint16_t x272 = 1243U;
	int32_t t64 = -7491;

	t64 = (x269%((x270<=x271)^x272));

	if (t64 != 62) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -2912629230813865LL;
	int32_t x275 = 526970354;
	volatile int8_t x276 = 62;
	int64_t t65 = 7398818763LL;

	t65 = (x273%((x274<=x275)^x276));

	if (t65 != -31LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 6301LLU;
	static uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;

	t66 = (x277%((x278<=x279)^x280));

	if (t66 != 6301LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	uint16_t x282 = 398U;
	volatile int16_t x284 = INT16_MIN;

	t67 = (x281%((x282<=x283)^x284));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x286 = -1;
	int64_t x287 = 22719486LL;
	int64_t x288 = 3585137620974775LL;
	int64_t t68 = 523506LL;

	t68 = (x285%((x286<=x287)^x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x290 = 1U;
	static volatile int32_t x291 = -1;
	volatile int8_t x292 = INT8_MAX;
	int32_t t69 = -1;

	t69 = (x289%((x290<=x291)^x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x295 = INT64_MAX;
	volatile int32_t x296 = INT32_MAX;
	static volatile int32_t t70 = 913;

	t70 = (x293%((x294<=x295)^x296));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = 0U;

	t71 = (x297%((x298<=x299)^x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = -1;
	int8_t x302 = INT8_MAX;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t72 = -62061197;

	t72 = (x301%((x302<=x303)^x304));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = 78U;
	volatile uint32_t x306 = 18U;
	int32_t t73 = -47012670;

	t73 = (x305%((x306<=x307)^x308));

	if (t73 != 78) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -118969459;
	volatile int16_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t t74 = -3282076;

	t74 = (x309%((x310<=x311)^x312));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MIN;
	static volatile int32_t x314 = -1;
	int64_t t75 = -9461820LL;

	t75 = (x313%((x314<=x315)^x316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x318 = 0;
	int32_t x320 = 458;
	volatile uint64_t t76 = 299LLU;

	t76 = (x317%((x318<=x319)^x320));

	if (t76 != 171LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = 12;
	static volatile int64_t x322 = 6059619196LL;
	int8_t x323 = INT8_MAX;
	static int16_t x324 = -1;

	t77 = (x321%((x322<=x323)^x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x325 = 1U;
	int16_t x326 = INT16_MIN;
	volatile int64_t t78 = -55394076418837LL;

	t78 = (x325%((x326<=x327)^x328));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = 87353147257657108LL;
	volatile int16_t x330 = INT16_MIN;
	uint32_t x331 = 5872U;
	static int64_t x332 = INT64_MIN;

	t79 = (x329%((x330<=x331)^x332));

	if (t79 != 87353147257657108LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 153U;
	int32_t x334 = INT32_MIN;
	volatile uint8_t x335 = 0U;
	static volatile int32_t x336 = 114913320;
	static int32_t t80 = 402;

	t80 = (x333%((x334<=x335)^x336));

	if (t80 != 153) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = -1;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 114579259397LLU;
	static int16_t x340 = INT16_MAX;

	t81 = (x337%((x338<=x339)^x340));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = UINT16_MAX;
	volatile int8_t x342 = INT8_MIN;
	volatile int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t82 = -3856;

	t82 = (x341%((x342<=x343)^x344));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MAX;
	uint8_t x347 = 74U;
	int16_t x348 = INT16_MIN;
	int32_t t83 = -354700564;

	t83 = (x345%((x346<=x347)^x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = -10;
	static uint8_t x350 = 13U;
	uint64_t x351 = 32LLU;
	int32_t t84 = -6;

	t84 = (x349%((x350<=x351)^x352));

	if (t84 != -10) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = INT32_MIN;
	volatile uint8_t x359 = 62U;
	uint64_t x360 = 151401299886332896LLU;
	uint64_t t85 = 404995684LLU;

	t85 = (x357%((x358<=x359)^x360));

	if (t85 != 127186785315787431LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = 35;
	int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	int32_t x364 = -1;
	volatile int32_t t86 = -12;

	t86 = (x361%((x362<=x363)^x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x365 = -1LL;
	int8_t x366 = INT8_MAX;
	int32_t x368 = INT32_MIN;

	t87 = (x365%((x366<=x367)^x368));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x371 = 230U;
	volatile int8_t x372 = 15;
	int32_t t88 = -30196480;

	t88 = (x369%((x370<=x371)^x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int8_t x375 = -1;
	static int32_t x376 = 2000;
	static int32_t t89 = 423445216;

	t89 = (x373%((x374<=x375)^x376));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = -1LL;
	int32_t x378 = -1;
	uint16_t x380 = 2U;
	volatile int64_t t90 = -48814481353388LL;

	t90 = (x377%((x378<=x379)^x380));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	int32_t t91 = 415195;

	t91 = (x381%((x382<=x383)^x384));

	if (t91 != 811871) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	static int64_t x386 = 100657618120LL;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MAX;

	t92 = (x385%((x386<=x387)^x388));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = 12U;
	static int16_t x391 = INT16_MAX;
	uint32_t x392 = 24892346U;
	volatile uint32_t t93 = 49308288U;

	t93 = (x389%((x390<=x391)^x392));

	if (t93 != 12U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	int32_t x395 = -14909;
	uint64_t x396 = UINT64_MAX;
	uint64_t t94 = 1024164539303777LLU;

	t94 = (x393%((x394<=x395)^x396));

	if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = INT16_MAX;
	volatile int64_t x399 = INT64_MIN;
	uint8_t x400 = 17U;
	volatile uint64_t t95 = 65733731997091LLU;

	t95 = (x397%((x398<=x399)^x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = INT8_MIN;
	volatile uint8_t x403 = 52U;
	int8_t x404 = INT8_MIN;
	volatile int32_t t96 = 1308;

	t96 = (x401%((x402<=x403)^x404));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = -12;
	uint16_t x406 = UINT16_MAX;
	static int16_t x407 = 25;
	volatile uint64_t t97 = 78448353588555LLU;

	t97 = (x405%((x406<=x407)^x408));

	if (t97 != 37615088377LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = -1LL;
	int32_t x411 = 3340476;
	int32_t x412 = INT32_MIN;
	int32_t t98 = 15;

	t98 = (x409%((x410<=x411)^x412));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x413 = 1U;
	int32_t x415 = 115;
	int32_t x416 = 5;

	t99 = (x413%((x414<=x415)^x416));

	if (t99 != 1) { NG(); } else { ; }
	
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

