#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
static int32_t x9 = -1;
int16_t x10 = -1;
uint8_t x15 = UINT8_MAX;
volatile uint16_t x17 = UINT16_MAX;
int8_t x20 = INT8_MIN;
uint8_t x27 = 25U;
static uint16_t x37 = 468U;
volatile uint16_t x42 = UINT16_MAX;
volatile int32_t t10 = 1192001;
uint8_t x46 = 80U;
volatile uint32_t x54 = 20U;
uint64_t t13 = 45827677648734198LLU;
static volatile int8_t x58 = INT8_MIN;
int32_t x59 = INT32_MIN;
int64_t x63 = INT64_MIN;
int32_t t15 = -5177;
uint8_t x71 = 56U;
int64_t t17 = -188641431326LL;
uint8_t x74 = 0U;
uint64_t x80 = 226LLU;
uint32_t x83 = 1787U;
static int8_t x88 = INT8_MAX;
volatile int32_t x95 = INT32_MIN;
int8_t x110 = INT8_MAX;
uint32_t x117 = UINT32_MAX;
volatile int16_t x143 = -1;
static uint32_t x148 = 25006U;
int32_t x154 = INT32_MAX;
int32_t x160 = INT32_MAX;
int32_t x164 = 50133007;
volatile int32_t t40 = 18;
static int16_t x176 = INT16_MAX;
int16_t x185 = INT16_MAX;
int32_t x186 = INT32_MIN;
volatile int8_t x188 = -1;
volatile int32_t t46 = 491130;
static uint64_t x192 = UINT64_MAX;
static int8_t x197 = -1;
int16_t x198 = INT16_MAX;
uint64_t x200 = 876744547724441473LLU;
uint64_t t50 = UINT64_MAX;
int32_t x206 = 1677;
volatile uint16_t x208 = 23221U;
int16_t x209 = 306;
int64_t x217 = 16473067LL;
uint64_t x219 = 114540LLU;
volatile int64_t x220 = -1LL;
static int16_t x223 = INT16_MIN;
int32_t x233 = 0;
volatile int8_t x240 = INT8_MIN;
static int16_t x241 = INT16_MIN;
static uint64_t x245 = UINT64_MAX;
int8_t x249 = INT8_MIN;
uint32_t x259 = 22934U;
volatile uint64_t x262 = 64591532713LLU;
int16_t x268 = INT16_MIN;
int32_t t66 = -29778;
int64_t x270 = INT64_MIN;
int64_t x275 = 676576003374LL;
int32_t t68 = 6765;
uint8_t x284 = UINT8_MAX;
int16_t x289 = -1;
static int16_t x290 = 15549;
int32_t x294 = INT32_MIN;
uint8_t x295 = 0U;
int8_t x299 = INT8_MIN;
uint32_t x304 = 3248438U;
int32_t t81 = 60633;
static int32_t t83 = 46423679;
uint32_t x339 = 94305U;
uint64_t x340 = 41243847808718LLU;
int32_t x348 = -1;
static int32_t x355 = INT32_MIN;
int32_t t88 = 3952543;
volatile int64_t x357 = -1LL;
static volatile uint32_t t89 = UINT32_MAX;
static int16_t x364 = INT16_MAX;
int32_t t90 = -17422603;
uint64_t x367 = 46605185LLU;
static int64_t x373 = INT64_MIN;
volatile int32_t t95 = 9;
volatile int16_t x385 = INT16_MIN;
int16_t x388 = INT16_MIN;
static volatile int32_t t96 = 5722272;
static volatile uint64_t x389 = 169LLU;
static int16_t x391 = -15;
volatile int64_t x397 = -1087020LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = INT32_MIN;
	static int32_t t0 = 1;

	t0 = ((x1<=(x2<=x3))|x4);

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int64_t x6 = -1LL;
	int8_t x7 = -1;
	static uint64_t x8 = 647LLU;
	uint64_t t1 = 1208621097LLU;

	t1 = ((x5<=(x6<=x7))|x8);

	if (t1 != 647LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x11 = 27541623U;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 365;

	t2 = ((x9<=(x10<=x11))|x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 17U;
	volatile int8_t x14 = -45;
	uint32_t x16 = 2601831U;
	static volatile uint32_t t3 = 1276520939U;

	t3 = ((x13<=(x14<=x15))|x16);

	if (t3 != 2601831U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x18 = 125026869600094880LLU;
	static volatile int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -485;

	t4 = ((x17<=(x18<=x19))|x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int64_t x22 = INT64_MAX;
	volatile int8_t x23 = INT8_MAX;
	volatile int16_t x24 = 0;
	volatile int32_t t5 = 0;

	t5 = ((x21<=(x22<=x23))|x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int64_t x26 = INT64_MIN;
	volatile int32_t x28 = INT32_MIN;
	static int32_t t6 = -29;

	t6 = ((x25<=(x26<=x27))|x28);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 2U;
	volatile uint8_t x32 = 70U;
	static int32_t t7 = -112126184;

	t7 = ((x29<=(x30<=x31))|x32);

	if (t7 != 71) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = -11462761407266LL;
	int16_t x35 = -1;
	uint16_t x36 = 6U;
	volatile int32_t t8 = -15;

	t8 = ((x33<=(x34<=x35))|x36);

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	uint16_t x39 = 0U;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MIN;

	t9 = ((x37<=(x38<=x39))|x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	static uint64_t x43 = 111228113463LLU;
	int8_t x44 = -1;

	t10 = ((x41<=(x42<=x43))|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	static int32_t x47 = INT32_MIN;
	volatile uint32_t x48 = 25442607U;
	uint32_t t11 = 333819U;

	t11 = ((x45<=(x46<=x47))|x48);

	if (t11 != 25442607U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = 18418972157078LLU;
	uint8_t x51 = 0U;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 0;

	t12 = ((x49<=(x50<=x51))|x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	static uint64_t x55 = UINT64_MAX;
	uint64_t x56 = 120073144664089741LLU;

	t13 = ((x53<=(x54<=x55))|x56);

	if (t13 != 120073144664089741LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;
	static int32_t t14 = -71;

	t14 = ((x57<=(x58<=x59))|x60);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -44LL;
	uint16_t x62 = UINT16_MAX;
	uint8_t x64 = 107U;

	t15 = ((x61<=(x62<=x63))|x64);

	if (t15 != 107) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = 31291200618LLU;
	uint64_t t16 = 10LLU;

	t16 = ((x65<=(x66<=x67))|x68);

	if (t16 != 31291200619LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	static int64_t x70 = INT64_MIN;
	volatile int64_t x72 = 1LL;

	t17 = ((x69<=(x70<=x71))|x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = INT8_MAX;
	static int8_t x75 = INT8_MIN;
	uint16_t x76 = 466U;
	int32_t t18 = -16667;

	t18 = ((x73<=(x74<=x75))|x76);

	if (t18 != 466) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x78 = INT16_MIN;
	static int16_t x79 = 41;
	volatile uint64_t t19 = 3LLU;

	t19 = ((x77<=(x78<=x79))|x80);

	if (t19 != 227LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	static int32_t x82 = INT32_MIN;
	int64_t x84 = -6849487748011LL;
	int64_t t20 = 238742319171359091LL;

	t20 = ((x81<=(x82<=x83))|x84);

	if (t20 != -6849487748011LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 468LLU;
	uint32_t x86 = UINT32_MAX;
	static int32_t x87 = -15734;
	int32_t t21 = 12;

	t21 = ((x85<=(x86<=x87))|x88);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	volatile int32_t x90 = INT32_MIN;
	static int8_t x91 = 1;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = ((x89<=(x90<=x91))|x92);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static uint8_t x94 = 0U;
	volatile int64_t x96 = INT64_MAX;
	volatile int64_t t23 = INT64_MAX;

	t23 = ((x93<=(x94<=x95))|x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	static int8_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x97<=(x98<=x99))|x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	static int64_t x103 = -3474787435023426853LL;
	uint32_t x104 = 1738U;
	volatile uint32_t t25 = 686553970U;

	t25 = ((x101<=(x102<=x103))|x104);

	if (t25 != 1739U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -20;
	int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 169818277381LLU;
	static volatile uint64_t t26 = 2LLU;

	t26 = ((x105<=(x106<=x107))|x108);

	if (t26 != 169818277381LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 6;
	uint32_t x111 = 6591289U;
	int64_t x112 = INT64_MIN;
	volatile int64_t t27 = INT64_MIN;

	t27 = ((x109<=(x110<=x111))|x112);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	volatile uint32_t x114 = 306U;
	int32_t x115 = 42;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = ((x113<=(x114<=x115))|x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = INT8_MAX;
	int64_t x119 = -1029LL;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = ((x117<=(x118<=x119))|x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -3363212764341717LL;
	int64_t x122 = -265587272296550328LL;
	volatile int8_t x123 = INT8_MAX;
	int32_t x124 = -1;
	static int32_t t30 = -58488845;

	t30 = ((x121<=(x122<=x123))|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int8_t x126 = INT8_MIN;
	uint16_t x127 = 1U;
	int32_t x128 = 448;
	int32_t t31 = 1342;

	t31 = ((x125<=(x126<=x127))|x128);

	if (t31 != 449) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	uint32_t x132 = 325093014U;
	volatile uint32_t t32 = 9U;

	t32 = ((x129<=(x130<=x131))|x132);

	if (t32 != 325093014U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 0U;
	int8_t x134 = -1;
	int32_t x135 = INT32_MIN;
	int64_t x136 = 9586059956221771LL;
	static volatile int64_t t33 = 27878674721404LL;

	t33 = ((x133<=(x134<=x135))|x136);

	if (t33 != 9586059956221771LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static uint8_t x138 = 31U;
	int16_t x139 = 7;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -1675;

	t34 = ((x137<=(x138<=x139))|x140);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 2U;
	static volatile int16_t x142 = INT16_MIN;
	int8_t x144 = 57;
	volatile int32_t t35 = 32794546;

	t35 = ((x141<=(x142<=x143))|x144);

	if (t35 != 57) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	int16_t x146 = -1869;
	volatile int32_t x147 = -1;
	static volatile uint32_t t36 = 0U;

	t36 = ((x145<=(x146<=x147))|x148);

	if (t36 != 25006U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x150 = 1U;
	int64_t x151 = INT64_MAX;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = -19LL;

	t37 = ((x149<=(x150<=x151))|x152);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = INT16_MAX;
	static int32_t t38 = -54597;

	t38 = ((x153<=(x154<=x155))|x156);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = 3051162425LL;
	int16_t x158 = INT16_MAX;
	static uint32_t x159 = 4U;
	int32_t t39 = INT32_MAX;

	t39 = ((x157<=(x158<=x159))|x160);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	volatile int32_t x162 = 954;
	uint16_t x163 = 9623U;

	t40 = ((x161<=(x162<=x163))|x164);

	if (t40 != 50133007) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 96719600804699LLU;
	int64_t x166 = INT64_MIN;
	static int32_t x167 = -3;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 923;

	t41 = ((x165<=(x166<=x167))|x168);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MIN;
	static uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 0U;
	static int32_t t42 = -1;

	t42 = ((x169<=(x170<=x171))|x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	volatile uint8_t x174 = UINT8_MAX;
	volatile int16_t x175 = INT16_MAX;
	int32_t t43 = -165;

	t43 = ((x173<=(x174<=x175))|x176);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 8U;
	int16_t x179 = 31;
	uint8_t x180 = 1U;
	volatile int32_t t44 = 8237675;

	t44 = ((x177<=(x178<=x179))|x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 55;
	volatile int16_t x182 = -48;
	uint32_t x183 = 779749U;
	int16_t x184 = 2;
	volatile int32_t t45 = 71760;

	t45 = ((x181<=(x182<=x183))|x184);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x187 = 19U;

	t46 = ((x185<=(x186<=x187))|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = -113;
	volatile int8_t x190 = -39;
	uint16_t x191 = 7U;
	static uint64_t t47 = UINT64_MAX;

	t47 = ((x189<=(x190<=x191))|x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 118U;
	int16_t x194 = -1;
	int16_t x195 = -1;
	static int64_t x196 = 7645440006LL;
	int64_t t48 = 48154583LL;

	t48 = ((x193<=(x194<=x195))|x196);

	if (t48 != 7645440006LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x199 = INT32_MIN;
	volatile uint64_t t49 = 395LLU;

	t49 = ((x197<=(x198<=x199))|x200);

	if (t49 != 876744547724441473LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 185364843643LLU;
	static int8_t x202 = INT8_MAX;
	static int8_t x203 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;

	t50 = ((x201<=(x202<=x203))|x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int8_t x207 = INT8_MAX;
	volatile int32_t t51 = -239;

	t51 = ((x205<=(x206<=x207))|x208);

	if (t51 != 23221) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = 0;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	static int64_t t52 = INT64_MIN;

	t52 = ((x209<=(x210<=x211))|x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	static volatile int32_t x214 = INT32_MAX;
	static int32_t x215 = 0;
	volatile int16_t x216 = -5;
	volatile int32_t t53 = 23850;

	t53 = ((x213<=(x214<=x215))|x216);

	if (t53 != -5) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = 0U;
	int64_t t54 = 29006LL;

	t54 = ((x217<=(x218<=x219))|x220);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static int16_t x222 = -204;
	int8_t x224 = INT8_MIN;
	int32_t t55 = -15966;

	t55 = ((x221<=(x222<=x223))|x224);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = 0LL;
	uint64_t x227 = 41247684447893LLU;
	uint64_t x228 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x225<=(x226<=x227))|x228);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -1304;
	int32_t x230 = 4070;
	int8_t x231 = -1;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 25;

	t57 = ((x229<=(x230<=x231))|x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 806LLU;
	volatile uint8_t x235 = UINT8_MAX;
	uint8_t x236 = 16U;
	int32_t t58 = 3;

	t58 = ((x233<=(x234<=x235))|x236);

	if (t58 != 17) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint8_t x238 = UINT8_MAX;
	volatile uint32_t x239 = 8322U;
	int32_t t59 = 2867;

	t59 = ((x237<=(x238<=x239))|x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 0;
	volatile uint8_t x243 = 79U;
	int64_t x244 = INT64_MIN;
	int64_t t60 = 505LL;

	t60 = ((x241<=(x242<=x243))|x244);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	uint16_t x247 = 1385U;
	int16_t x248 = INT16_MAX;
	int32_t t61 = -977104109;

	t61 = ((x245<=(x246<=x247))|x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x250 = -41LL;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	volatile int32_t t62 = -917699732;

	t62 = ((x249<=(x250<=x251))|x252);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -160971;
	int64_t x254 = 101278589131563030LL;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 0;
	static volatile int32_t t63 = 114707062;

	t63 = ((x253<=(x254<=x255))|x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 825U;
	uint16_t x258 = 182U;
	volatile int16_t x260 = INT16_MIN;
	int32_t t64 = -3492;

	t64 = ((x257<=(x258<=x259))|x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -231;
	static int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 1922633;

	t65 = ((x261<=(x262<=x263))|x264);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 5340918834800945LLU;
	uint16_t x266 = 96U;
	int16_t x267 = INT16_MAX;

	t66 = ((x265<=(x266<=x267))|x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 850;
	int64_t x271 = 2050007776494LL;
	uint32_t x272 = 7U;
	uint32_t t67 = 20654U;

	t67 = ((x269<=(x270<=x271))|x272);

	if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = 3;
	int8_t x274 = INT8_MIN;
	int8_t x276 = INT8_MIN;

	t68 = ((x273<=(x274<=x275))|x276);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 3;
	static volatile int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 13200;

	t69 = ((x277<=(x278<=x279))|x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int64_t x282 = 270330287135127LL;
	static volatile int32_t x283 = 377;
	int32_t t70 = -959;

	t70 = ((x281<=(x282<=x283))|x284);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = UINT8_MAX;
	static int64_t x287 = -147861157884LL;
	uint8_t x288 = 31U;
	static volatile int32_t t71 = -1;

	t71 = ((x285<=(x286<=x287))|x288);

	if (t71 != 31) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x291 = INT64_MIN;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t72 = -19092423623249LL;

	t72 = ((x289<=(x290<=x291))|x292);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 1877445543562761112LLU;
	int8_t x296 = INT8_MIN;
	static int32_t t73 = -95131;

	t73 = ((x293<=(x294<=x295))|x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 5U;
	int16_t x298 = -7;
	volatile int64_t x300 = 36533284LL;
	int64_t t74 = 3104350LL;

	t74 = ((x297<=(x298<=x299))|x300);

	if (t74 != 36533284LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -1;
	uint64_t x302 = 644526559LLU;
	int64_t x303 = INT64_MAX;
	volatile uint32_t t75 = 282418259U;

	t75 = ((x301<=(x302<=x303))|x304);

	if (t75 != 3248439U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = -1;
	uint32_t x308 = 3279U;
	volatile uint32_t t76 = 174010315U;

	t76 = ((x305<=(x306<=x307))|x308);

	if (t76 != 3279U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static uint8_t x310 = 124U;
	int8_t x311 = INT8_MAX;
	int8_t x312 = -1;
	int32_t t77 = -5879478;

	t77 = ((x309<=(x310<=x311))|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 3U;
	int16_t x314 = INT16_MIN;
	uint16_t x315 = UINT16_MAX;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x313<=(x314<=x315))|x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 14;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = 3;
	static int8_t x320 = -1;
	volatile int32_t t79 = -15;

	t79 = ((x317<=(x318<=x319))|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	static uint64_t x323 = 1049119106LLU;
	int8_t x324 = INT8_MIN;
	int32_t t80 = 6;

	t80 = ((x321<=(x322<=x323))|x324);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 1037U;
	uint8_t x326 = UINT8_MAX;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = 1;

	t81 = ((x325<=(x326<=x327))|x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int16_t x332 = 1119;
	static volatile int32_t t82 = -3;

	t82 = ((x329<=(x330<=x331))|x332);

	if (t82 != 1119) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x333 = 62U;
	int16_t x334 = -1;
	uint32_t x335 = 165054U;
	int16_t x336 = -4;

	t83 = ((x333<=(x334<=x335))|x336);

	if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MAX;
	int64_t x338 = -2981LL;
	uint64_t t84 = 106047495074520LLU;

	t84 = ((x337<=(x338<=x339))|x340);

	if (t84 != 41243847808718LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static volatile uint8_t x342 = UINT8_MAX;
	int32_t x343 = 11;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -150825;

	t85 = ((x341<=(x342<=x343))|x344);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 15;
	uint64_t x346 = UINT64_MAX;
	static volatile int64_t x347 = INT64_MIN;
	volatile int32_t t86 = 833835;

	t86 = ((x345<=(x346<=x347))|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x349 = UINT64_MAX;
	int32_t x350 = -664868;
	uint8_t x351 = UINT8_MAX;
	static uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x349<=(x350<=x351))|x352);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -25235;
	int64_t x354 = -1LL;
	static int16_t x356 = INT16_MAX;

	t88 = ((x353<=(x354<=x355))|x356);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -984446LL;
	uint32_t x359 = 471U;
	static uint32_t x360 = UINT32_MAX;

	t89 = ((x357<=(x358<=x359))|x360);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 5;
	static volatile uint8_t x362 = 1U;
	volatile int8_t x363 = INT8_MIN;

	t90 = ((x361<=(x362<=x363))|x364);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -84655537009358850LL;
	int8_t x366 = INT8_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -26515041;

	t91 = ((x365<=(x366<=x367))|x368);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = 0;
	volatile int16_t x370 = INT16_MAX;
	uint32_t x371 = UINT32_MAX;
	static uint8_t x372 = 1U;
	volatile int32_t t92 = -6058;

	t92 = ((x369<=(x370<=x371))|x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = -1;
	uint32_t x375 = 70U;
	static volatile uint32_t x376 = UINT32_MAX;
	static uint32_t t93 = UINT32_MAX;

	t93 = ((x373<=(x374<=x375))|x376);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = -1;
	volatile uint8_t x379 = 1U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -2;

	t94 = ((x377<=(x378<=x379))|x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = -957899798674810LL;
	uint64_t x382 = 1804869044274LLU;
	static uint8_t x383 = 11U;
	int32_t x384 = -175487;

	t95 = ((x381<=(x382<=x383))|x384);

	if (t95 != -175487) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x386 = INT32_MIN;
	uint16_t x387 = UINT16_MAX;

	t96 = ((x385<=(x386<=x387))|x388);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = 153;
	int64_t x392 = INT64_MAX;
	volatile int64_t t97 = INT64_MAX;

	t97 = ((x389<=(x390<=x391))|x392);

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	int32_t x396 = -1;
	volatile int32_t t98 = 25;

	t98 = ((x393<=(x394<=x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = -38;
	volatile int32_t x399 = 13670;
	int16_t x400 = INT16_MAX;
	static volatile int32_t t99 = -219;

	t99 = ((x397<=(x398<=x399))|x400);

	if (t99 != 32767) { NG(); } else { ; }
	
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

