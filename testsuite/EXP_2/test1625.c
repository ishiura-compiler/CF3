#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 5LLU;
int16_t x12 = INT16_MIN;
int64_t x13 = INT64_MAX;
int16_t x17 = INT16_MAX;
static int16_t x18 = -1;
volatile int64_t t4 = -6188LL;
int8_t x26 = 0;
static uint32_t x31 = UINT32_MAX;
uint32_t t7 = 3101U;
int8_t x36 = -19;
int32_t t8 = 1364;
uint64_t x37 = UINT64_MAX;
int32_t x41 = INT32_MIN;
volatile int32_t x59 = 377663;
int32_t x76 = -1;
int32_t x82 = INT32_MAX;
volatile int8_t x88 = -1;
int8_t x92 = INT8_MIN;
int64_t x96 = INT64_MAX;
volatile uint8_t x99 = 45U;
static volatile int8_t x101 = -1;
uint8_t x103 = UINT8_MAX;
uint64_t t25 = 563647LLU;
int16_t x126 = -48;
volatile int32_t x134 = INT32_MIN;
int8_t x135 = INT8_MIN;
volatile uint16_t x138 = UINT16_MAX;
volatile int64_t x146 = -2023628232618796LL;
static int16_t x153 = INT16_MIN;
volatile int32_t t38 = INT32_MIN;
int64_t x157 = 73LL;
int8_t x161 = INT8_MIN;
volatile int32_t t40 = 731121;
uint64_t x169 = 1183172750184162LLU;
static uint64_t x171 = 1682LLU;
static volatile int64_t t42 = INT64_MAX;
volatile int32_t t43 = -87529914;
static volatile int16_t x178 = -32;
uint32_t t45 = 0U;
volatile int64_t t46 = 677LL;
uint32_t x189 = UINT32_MAX;
static int16_t x195 = -144;
uint16_t x197 = 245U;
int64_t x199 = -1LL;
int8_t x206 = 8;
int16_t x210 = -9;
int32_t t52 = -1245;
uint32_t x217 = UINT32_MAX;
uint32_t x225 = 401U;
static uint8_t x228 = 14U;
volatile int8_t x236 = 41;
static volatile int16_t x237 = -5108;
int16_t x241 = -1;
int64_t x245 = -1LL;
int32_t x246 = INT32_MIN;
static int32_t t61 = -248772049;
volatile int32_t t62 = 8;
int8_t x264 = INT8_MIN;
int8_t x269 = -1;
int32_t x276 = 13209051;
volatile uint16_t x281 = UINT16_MAX;
int8_t x289 = -6;
uint64_t x298 = 758099553964LLU;
int16_t x303 = -2856;
volatile int64_t t75 = INT64_MIN;
static uint8_t x310 = 0U;
uint16_t x312 = 505U;
volatile int64_t x315 = -1LL;
int8_t x319 = 63;
int32_t x320 = INT32_MIN;
static int8_t x321 = INT8_MIN;
int64_t x322 = -342205864281922936LL;
int8_t x323 = INT8_MAX;
volatile int8_t x328 = INT8_MAX;
volatile int64_t x333 = -1LL;
int16_t x334 = INT16_MIN;
int16_t x336 = -115;
uint8_t x343 = 30U;
volatile int32_t x344 = 2;
volatile uint8_t x347 = 22U;
static int8_t x349 = INT8_MIN;
uint16_t x350 = UINT16_MAX;
int64_t x355 = 1357671LL;
uint8_t x356 = 0U;
int8_t x358 = -5;
static uint16_t x359 = 1U;
volatile int32_t t89 = 1202575;
static int32_t x363 = -27;
uint16_t x365 = 2628U;
int64_t x367 = INT64_MAX;
volatile int8_t x369 = -1;
uint64_t x378 = 2483582496LLU;
volatile uint32_t t94 = UINT32_MAX;
volatile int32_t t95 = 1669982;
int16_t x391 = 1519;
int64_t x395 = INT64_MIN;
int16_t x397 = -1;


void f0(void) {
	volatile uint64_t x1 = 102012979515855LLU;
	volatile int64_t x2 = -1020739171LL;
	static int8_t x3 = 0;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = ((x1==(x2<=x3))^x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 3U;
	int64_t x7 = -1LL;
	static int16_t x8 = -1;
	int32_t t1 = 25804;

	t1 = ((x5==(x6<=x7))^x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x10 = -1;
	int64_t x11 = -4150759LL;
	volatile int32_t t2 = 2817350;

	t2 = ((x9==(x10<=x11))^x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 34086549650919LLU;
	static uint64_t x15 = 1906164129LLU;
	int32_t x16 = INT32_MAX;
	int32_t t3 = INT32_MAX;

	t3 = ((x13==(x14<=x15))^x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x19 = 37U;
	int64_t x20 = 2059LL;

	t4 = ((x17==(x18<=x19))^x20);

	if (t4 != 2059LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = -1;
	int32_t t5 = 2;

	t5 = ((x21==(x22<=x23))^x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static volatile uint64_t x27 = 2018221LLU;
	int32_t x28 = 226442;
	volatile int32_t t6 = -1;

	t6 = ((x25==(x26<=x27))^x28);

	if (t6 != 226442) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MAX;
	static uint32_t x32 = 218899U;

	t7 = ((x29==(x30<=x31))^x32);

	if (t7 != 218899U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	uint32_t x34 = 15328U;
	int64_t x35 = -5LL;

	t8 = ((x33==(x34<=x35))^x36);

	if (t8 != -19) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = -1;
	volatile int64_t x39 = -1LL;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MIN;

	t9 = ((x37==(x38<=x39))^x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = 2;
	int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = 10720;

	t10 = ((x41==(x42<=x43))^x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	static volatile int32_t x46 = 48;
	int64_t x47 = INT64_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -846;

	t11 = ((x45==(x46<=x47))^x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static uint64_t x50 = 30190288972434892LLU;
	int64_t x51 = INT64_MIN;
	volatile int64_t x52 = -401152916031805566LL;
	volatile int64_t t12 = -833615LL;

	t12 = ((x49==(x50<=x51))^x52);

	if (t12 != -401152916031805566LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -13972049;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t13 = INT64_MIN;

	t13 = ((x53==(x54<=x55))^x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static volatile uint16_t x58 = UINT16_MAX;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57==(x58<=x59))^x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static volatile uint64_t x62 = 59LLU;
	uint8_t x63 = 28U;
	volatile uint16_t x64 = UINT16_MAX;
	static int32_t t15 = -120;

	t15 = ((x61==(x62<=x63))^x64);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint64_t x66 = 333633642LLU;
	static int16_t x67 = -1;
	int16_t x68 = 12656;
	volatile int32_t t16 = -1;

	t16 = ((x65==(x66<=x67))^x68);

	if (t16 != 12656) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = 4283;
	int16_t x70 = -582;
	volatile int64_t x71 = INT64_MIN;
	int64_t x72 = 925878935047661LL;
	int64_t t17 = 35311508317165430LL;

	t17 = ((x69==(x70<=x71))^x72);

	if (t17 != 925878935047661LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -415;
	static int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	volatile int32_t t18 = -43302634;

	t18 = ((x73==(x74<=x75))^x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 7;
	static int64_t x78 = INT64_MIN;
	uint32_t x79 = UINT32_MAX;
	static int16_t x80 = -1;
	int32_t t19 = -12169;

	t19 = ((x77==(x78<=x79))^x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 28410966U;
	volatile int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = ((x81==(x82<=x83))^x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 27391256LL;
	int8_t x86 = -7;
	volatile int32_t x87 = INT32_MAX;
	int32_t t21 = -137810804;

	t21 = ((x85==(x86<=x87))^x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 3614LLU;
	uint16_t x90 = 141U;
	volatile uint16_t x91 = UINT16_MAX;
	static int32_t t22 = 6;

	t22 = ((x89==(x90<=x91))^x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = INT16_MAX;
	volatile int64_t t23 = INT64_MAX;

	t23 = ((x93==(x94<=x95))^x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int8_t x98 = INT8_MAX;
	int8_t x100 = -2;
	static int32_t t24 = 3460;

	t24 = ((x97==(x98<=x99))^x100);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	volatile uint64_t x104 = 7030193132510LLU;

	t25 = ((x101==(x102<=x103))^x104);

	if (t25 != 7030193132510LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	volatile int32_t x108 = 6538;
	volatile int32_t t26 = 51756;

	t26 = ((x105==(x106<=x107))^x108);

	if (t26 != 6538) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = INT64_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = ((x109==(x110<=x111))^x112);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	uint64_t x114 = 1110893669948LLU;
	uint32_t x115 = 7406273U;
	static uint32_t x116 = 105U;
	volatile uint32_t t28 = 477537U;

	t28 = ((x113==(x114<=x115))^x116);

	if (t28 != 105U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile uint64_t x118 = 177165784LLU;
	uint64_t x119 = 625772730792LLU;
	static volatile int64_t x120 = INT64_MIN;
	int64_t t29 = INT64_MIN;

	t29 = ((x117==(x118<=x119))^x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	int16_t x122 = 809;
	uint16_t x123 = 7U;
	static volatile uint32_t x124 = 1811773U;
	static uint32_t t30 = 12U;

	t30 = ((x121==(x122<=x123))^x124);

	if (t30 != 1811773U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 31U;
	static int64_t x127 = -1LL;
	int64_t x128 = 0LL;
	int64_t t31 = -263209020858048425LL;

	t31 = ((x125==(x126<=x127))^x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -140427334044948LL;
	int16_t x130 = INT16_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = INT32_MAX;

	t32 = ((x129==(x130<=x131))^x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	volatile int16_t x136 = INT16_MAX;
	static volatile int32_t t33 = -15;

	t33 = ((x133==(x134<=x135))^x136);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile int8_t x139 = INT8_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = ((x137==(x138<=x139))^x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	volatile uint64_t x142 = UINT64_MAX;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = INT16_MAX;
	static volatile int32_t t35 = -572863;

	t35 = ((x141==(x142<=x143))^x144);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static volatile uint64_t x147 = UINT64_MAX;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 3636;

	t36 = ((x145==(x146<=x147))^x148);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 1785645593U;
	uint8_t x151 = 8U;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = INT32_MIN;

	t37 = ((x149==(x150<=x151))^x152);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MAX;
	int64_t x155 = 1134746893955781877LL;
	int32_t x156 = INT32_MIN;

	t38 = ((x153==(x154<=x155))^x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	static int8_t x159 = 9;
	int8_t x160 = -1;
	int32_t t39 = 55;

	t39 = ((x157==(x158<=x159))^x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x162 = INT32_MIN;
	int32_t x163 = 1801631;
	int16_t x164 = -1;

	t40 = ((x161==(x162<=x163))^x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x165 = 994LLU;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = 0U;
	uint16_t x168 = UINT16_MAX;
	int32_t t41 = 5;

	t41 = ((x165==(x166<=x167))^x168);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = -5265183;
	int64_t x172 = INT64_MAX;

	t42 = ((x169==(x170<=x171))^x172);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 138437919653811997LLU;
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MAX;

	t43 = ((x173==(x174<=x175))^x176);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t44 = -1;

	t44 = ((x177==(x178<=x179))^x180);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 5142;
	static volatile int64_t x182 = INT64_MIN;
	static int16_t x183 = INT16_MIN;
	uint32_t x184 = 1U;

	t45 = ((x181==(x182<=x183))^x184);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MAX;
	int16_t x187 = -1;
	int64_t x188 = 1LL;

	t46 = ((x185==(x186<=x187))^x188);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	int16_t x191 = -1;
	int8_t x192 = -15;
	int32_t t47 = 49;

	t47 = ((x189==(x190<=x191))^x192);

	if (t47 != -15) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	volatile int8_t x194 = INT8_MAX;
	int16_t x196 = -1;
	int32_t t48 = 60725;

	t48 = ((x193==(x194<=x195))^x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = 1596030493U;
	int32_t x200 = -1;
	static volatile int32_t t49 = 147;

	t49 = ((x197==(x198<=x199))^x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 5842U;
	uint16_t x202 = 1U;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	static int32_t t50 = -10338;

	t50 = ((x201==(x202<=x203))^x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 48639042688375814LLU;
	uint64_t t51 = 3862045657265576356LLU;

	t51 = ((x205==(x206<=x207))^x208);

	if (t51 != 48639042688375814LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 40157165458781LLU;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = INT16_MAX;

	t52 = ((x209==(x210<=x211))^x212);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MAX;
	static uint32_t x216 = 263629557U;
	volatile uint32_t t53 = 110U;

	t53 = ((x213==(x214<=x215))^x216);

	if (t53 != 263629557U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -1;
	volatile uint16_t x219 = 12795U;
	volatile uint64_t x220 = 2LLU;
	uint64_t t54 = 29727307898LLU;

	t54 = ((x217==(x218<=x219))^x220);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	int16_t x223 = -129;
	static uint32_t x224 = 23U;
	volatile uint32_t t55 = 1329659U;

	t55 = ((x221==(x222<=x223))^x224);

	if (t55 != 23U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x226 = 0U;
	int16_t x227 = -1;
	volatile int32_t t56 = 5537;

	t56 = ((x225==(x226<=x227))^x228);

	if (t56 != 14) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -394;
	int64_t x230 = 3567614LL;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MAX;
	int32_t t57 = 6194862;

	t57 = ((x229==(x230<=x231))^x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 47103U;
	static int32_t x234 = -1;
	int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 1105630;

	t58 = ((x233==(x234<=x235))^x236);

	if (t58 != 41) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x238 = 0U;
	uint32_t x239 = 60963U;
	uint64_t x240 = 1867606945LLU;
	uint64_t t59 = 772039727LLU;

	t59 = ((x237==(x238<=x239))^x240);

	if (t59 != 1867606945LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 15U;
	int8_t x243 = -46;
	uint8_t x244 = 88U;
	volatile int32_t t60 = 38823491;

	t60 = ((x241==(x242<=x243))^x244);

	if (t60 != 88) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x247 = INT16_MIN;
	volatile int32_t x248 = -1;

	t61 = ((x245==(x246<=x247))^x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -666833370058359742LL;
	int64_t x250 = 3012LL;
	int32_t x251 = INT32_MAX;
	int16_t x252 = INT16_MIN;

	t62 = ((x249==(x250<=x251))^x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 1061667484U;
	static int8_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static uint16_t x256 = 2916U;
	volatile int32_t t63 = 64168;

	t63 = ((x253==(x254<=x255))^x256);

	if (t63 != 2916) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 88U;
	static uint8_t x258 = 7U;
	static int8_t x259 = 28;
	int16_t x260 = -1;
	int32_t t64 = 73;

	t64 = ((x257==(x258<=x259))^x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 0U;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t65 = 2871715;

	t65 = ((x261==(x262<=x263))^x264);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = -23629006;
	volatile uint32_t x267 = 242578048U;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t66 = 172;

	t66 = ((x265==(x266<=x267))^x268);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 40U;
	uint64_t x271 = 10492743758140LLU;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = ((x269==(x270<=x271))^x272);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int32_t x274 = 10132529;
	int64_t x275 = -1277633209972LL;
	int32_t t68 = -25889;

	t68 = ((x273==(x274<=x275))^x276);

	if (t68 != 13209051) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = 10U;
	uint32_t x280 = 0U;
	static uint32_t t69 = 60U;

	t69 = ((x277==(x278<=x279))^x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = 26557997LL;
	int32_t x283 = -345;
	static uint8_t x284 = 10U;
	int32_t t70 = 0;

	t70 = ((x281==(x282<=x283))^x284);

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 3U;
	static uint8_t x286 = 0U;
	uint32_t x287 = 113376U;
	int32_t x288 = -1;
	int32_t t71 = -2488382;

	t71 = ((x285==(x286<=x287))^x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = 77860LL;
	static uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x289==(x290<=x291))^x292);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MAX;
	uint8_t x295 = 1U;
	volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x293==(x294<=x295))^x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	volatile int8_t x299 = INT8_MIN;
	uint16_t x300 = 11U;
	volatile int32_t t74 = 679462;

	t74 = ((x297==(x298<=x299))^x300);

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x301 = 7452717U;
	uint16_t x302 = 10U;
	static volatile int64_t x304 = INT64_MIN;

	t75 = ((x301==(x302<=x303))^x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = 1;
	uint16_t x308 = 27U;
	static volatile int32_t t76 = 4113533;

	t76 = ((x305==(x306<=x307))^x308);

	if (t76 != 27) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile uint8_t x311 = 3U;
	static int32_t t77 = 1025;

	t77 = ((x309==(x310<=x311))^x312);

	if (t77 != 505) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -138;
	int8_t x314 = INT8_MAX;
	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -45505;

	t78 = ((x313==(x314<=x315))^x316);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	uint64_t x318 = UINT64_MAX;
	static int32_t t79 = INT32_MIN;

	t79 = ((x317==(x318<=x319))^x320);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x324 = -1;
	int32_t t80 = 51416;

	t80 = ((x321==(x322<=x323))^x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int64_t x326 = INT64_MAX;
	static int16_t x327 = INT16_MIN;
	static int32_t t81 = -12;

	t81 = ((x325==(x326<=x327))^x328);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MAX;
	int32_t x330 = 2;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 3368337LLU;
	static volatile uint64_t t82 = 7045028438215358445LLU;

	t82 = ((x329==(x330<=x331))^x332);

	if (t82 != 3368337LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x335 = 39LL;
	int32_t t83 = 0;

	t83 = ((x333==(x334<=x335))^x336);

	if (t83 != -115) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 975;
	int16_t x338 = 508;
	static uint32_t x339 = UINT32_MAX;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x337==(x338<=x339))^x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 99158934;
	uint32_t x342 = UINT32_MAX;
	volatile int32_t t85 = -31;

	t85 = ((x341==(x342<=x343))^x344);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 3;
	int64_t x346 = -1LL;
	static int16_t x348 = -2014;
	int32_t t86 = 5090;

	t86 = ((x345==(x346<=x347))^x348);

	if (t86 != -2014) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x351 = -5;
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = ((x349==(x350<=x351))^x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = 62;
	int8_t x354 = INT8_MIN;
	int32_t t88 = -93426;

	t88 = ((x353==(x354<=x355))^x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int16_t x360 = -7754;

	t89 = ((x357==(x358<=x359))^x360);

	if (t89 != -7754) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = 3U;
	uint32_t x364 = 5322U;
	static uint32_t t90 = 4706782U;

	t90 = ((x361==(x362<=x363))^x364);

	if (t90 != 5322U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x365==(x366<=x367))^x368);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = 5458U;
	int64_t x371 = INT64_MIN;
	static volatile int8_t x372 = -7;
	int32_t t92 = 1232344;

	t92 = ((x369==(x370<=x371))^x372);

	if (t92 != -7) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	volatile int64_t x374 = INT64_MIN;
	int16_t x375 = -1;
	static uint8_t x376 = UINT8_MAX;
	static volatile int32_t t93 = 13664617;

	t93 = ((x373==(x374<=x375))^x376);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int32_t x379 = INT32_MAX;
	uint32_t x380 = UINT32_MAX;

	t94 = ((x377==(x378<=x379))^x380);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	volatile int16_t x382 = -1;
	uint8_t x383 = 11U;
	static int16_t x384 = INT16_MIN;

	t95 = ((x381==(x382<=x383))^x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 4096812LLU;
	uint8_t x386 = 10U;
	volatile uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 1411U;
	volatile int32_t t96 = -144;

	t96 = ((x385==(x386<=x387))^x388);

	if (t96 != 1411) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int16_t x390 = INT16_MAX;
	int32_t x392 = -2726703;
	static int32_t t97 = 1006;

	t97 = ((x389==(x390<=x391))^x392);

	if (t97 != -2726703) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	static uint16_t x396 = 463U;
	int32_t t98 = 17;

	t98 = ((x393==(x394<=x395))^x396);

	if (t98 != 463) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x398 = 0U;
	static int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -205577922;

	t99 = ((x397==(x398<=x399))^x400);

	if (t99 != -32768) { NG(); } else { ; }
	
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

