#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
int32_t x12 = -61855;
volatile int16_t x25 = 82;
int8_t x26 = INT8_MIN;
int32_t t6 = -487;
uint8_t x37 = 0U;
uint16_t x40 = UINT16_MAX;
static int32_t x41 = 6220034;
int16_t x54 = 0;
int16_t x55 = INT16_MIN;
static volatile int32_t t9 = -1;
volatile int64_t t10 = -794457436LL;
uint8_t x67 = UINT8_MAX;
int64_t x69 = INT64_MAX;
int16_t x72 = INT16_MIN;
int16_t x73 = -25;
int8_t x96 = -5;
uint64_t t16 = 12371211566819387LLU;
uint64_t x101 = 16971505536429642LLU;
int64_t x108 = INT64_MAX;
static int64_t t18 = -7387997LL;
volatile int64_t t19 = -22LL;
uint16_t x124 = 1792U;
volatile int32_t t22 = -5430;
uint32_t x132 = 1879319213U;
int16_t x133 = -1;
uint64_t x137 = 1074712LLU;
static int64_t x140 = -5587391108462722LL;
volatile uint64_t t27 = 106876LLU;
int8_t x150 = INT8_MIN;
int64_t x153 = INT64_MIN;
uint16_t x156 = 5928U;
volatile uint64_t x158 = 119656873LLU;
int32_t x159 = 6;
int64_t x161 = INT64_MIN;
int16_t x163 = INT16_MIN;
int64_t t31 = -6095627040LL;
volatile int64_t x176 = 343781LL;
uint32_t x188 = UINT32_MAX;
uint64_t x190 = 85704822LLU;
int32_t x200 = -1;
int16_t x205 = INT16_MAX;
static uint16_t x206 = 2U;
int16_t x214 = INT16_MIN;
int64_t x220 = INT64_MIN;
uint32_t x228 = 41901435U;
uint8_t x230 = 0U;
volatile int16_t x234 = 226;
int64_t x236 = -1LL;
volatile int8_t x250 = INT8_MIN;
uint64_t x251 = 2343915184LLU;
int64_t x252 = INT64_MAX;
static int8_t x254 = INT8_MIN;
uint8_t x256 = UINT8_MAX;
volatile int32_t t50 = -220316;
uint64_t x261 = UINT64_MAX;
int32_t x276 = 348759;
static uint64_t x279 = 1549023LLU;
uint16_t x284 = 22U;
volatile int16_t x290 = INT16_MIN;
uint64_t x293 = UINT64_MAX;
volatile uint64_t t57 = 61838122858LLU;
uint16_t x313 = 15512U;
uint16_t x316 = 619U;
volatile uint32_t t60 = 156U;
uint64_t x345 = UINT64_MAX;
static int64_t x346 = -1LL;
uint8_t x348 = 2U;
static int64_t t65 = -55512096605980LL;
volatile uint8_t x353 = 34U;
int64_t t66 = 207584543832222LL;
int8_t x358 = 11;
int64_t t68 = -917848724447710LL;
int32_t x368 = -1;
static int16_t x369 = INT16_MIN;
int16_t x372 = -1846;
int16_t x373 = INT16_MIN;
volatile uint32_t t71 = 4U;
static volatile uint64_t x379 = 24367348495402LLU;
int8_t x381 = 14;
volatile int64_t x383 = INT64_MAX;
uint64_t x384 = 8369074988LLU;
int8_t x394 = INT8_MAX;
uint8_t x396 = 1U;
int8_t x401 = INT8_MIN;
uint8_t x405 = UINT8_MAX;
volatile uint32_t t77 = 2U;
static uint16_t x411 = UINT16_MAX;
volatile uint64_t t78 = 10170116790166051LLU;
uint64_t x415 = UINT64_MAX;
volatile uint64_t t79 = 1130237584487LLU;
int32_t x426 = INT32_MIN;
static int8_t x433 = INT8_MAX;
uint32_t x434 = 0U;
static uint64_t x448 = UINT64_MAX;
uint64_t t84 = 55287269109226LLU;
uint64_t t86 = 8808370250712363483LLU;
static int32_t x463 = -320;
int8_t x466 = -1;
uint64_t t88 = 560958899565048LLU;
static int64_t x469 = INT64_MIN;
int16_t x470 = INT16_MIN;
int8_t x477 = INT8_MIN;
volatile int8_t x483 = INT8_MAX;
int8_t x484 = 52;
uint64_t x492 = 108LLU;
static uint64_t t95 = 147160LLU;
volatile uint8_t x508 = 2U;


void f0(void) {
	static volatile int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MIN;
	int16_t x7 = 34;
	uint8_t x8 = 5U;
	volatile int32_t t0 = 1510083;

	t0 = ((x5|(x6-x7))*x8);

	if (t0 != -164010) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -3;
	volatile int64_t x11 = 4009224054868LL;
	static volatile int64_t t1 = 1LL;

	t1 = ((x9|(x10-x11))*x12);

	if (t1 != 185565LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 0;
	static volatile int32_t x14 = -5;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 7;

	t2 = ((x13|(x14-x15))*x16);

	if (t2 != -4193664) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 4;
	int64_t x18 = INT64_MAX;
	int16_t x19 = 1;
	static uint64_t x20 = 5522673LLU;
	uint64_t t3 = 1LLU;

	t3 = ((x17|(x18-x19))*x20);

	if (t3 != 9223372036843730462LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	volatile int64_t x22 = 70207389LL;
	uint64_t x23 = 20059860495LLU;
	static uint64_t x24 = 9101411794975172197LLU;
	uint64_t t4 = 32819940LLU;

	t4 = ((x21|(x22-x23))*x24);

	if (t4 != 9345332278734379419LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x27 = 461LL;
	int32_t x28 = 72;
	int64_t t5 = 10LL;

	t5 = ((x25|(x26-x27))*x28);

	if (t5 != -37800LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -967687189;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = -387;
	int16_t x32 = -1;

	t6 = ((x29|(x30-x31))*x32);

	if (t6 != 967621653) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MAX;
	volatile uint64_t t7 = 21553958LLU;

	t7 = ((x37|(x38-x39))*x40);

	if (t7 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x42 = 77U;
	static int16_t x43 = INT16_MIN;
	static int16_t x44 = INT16_MAX;
	static volatile uint32_t t8 = 47656U;

	t8 = ((x41|(x42-x43))*x44);

	if (t8 != 1950914225U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	int32_t x56 = -1;

	t9 = ((x53|(x54-x55))*x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int16_t x58 = 234;
	volatile int64_t x59 = -89140469577LL;
	static volatile int32_t x60 = INT32_MAX;

	t10 = ((x57|(x58-x59))*x60);

	if (t10 != -2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x61 = 94846063LL;
	uint32_t x62 = 5826473U;
	volatile uint32_t x63 = UINT32_MAX;
	static int64_t x64 = -1LL;
	static int64_t t11 = -32700965LL;

	t11 = ((x61|(x62-x63))*x64);

	if (t11 != -100663279LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	static int8_t x66 = INT8_MIN;
	int16_t x68 = -1;
	int32_t t12 = -852266939;

	t12 = ((x65|(x66-x67))*x68);

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x70 = INT16_MIN;
	static int8_t x71 = INT8_MAX;
	int64_t t13 = 193444607161678LL;

	t13 = ((x69|(x70-x71))*x72);

	if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 507523211LLU;
	uint64_t t14 = 64327873534LLU;

	t14 = ((x73|(x74-x75))*x76);

	if (t14 != 18446744061021471341LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = -1;
	int8_t x90 = -1;
	int32_t x91 = INT32_MAX;
	int64_t x92 = 177LL;
	static int64_t t15 = -193477224440LL;

	t15 = ((x89|(x90-x91))*x92);

	if (t15 != -177LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x93 = UINT64_MAX;
	int16_t x94 = -1;
	volatile uint16_t x95 = 228U;

	t16 = ((x93|(x94-x95))*x96);

	if (t16 != 5LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x102 = 14U;
	static uint32_t x103 = UINT32_MAX;
	int16_t x104 = -1787;
	uint64_t t17 = 775184LLU;

	t17 = ((x101|(x102-x103))*x104);

	if (t17 != 6565407753819324043LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = -1LL;
	volatile uint8_t x106 = 4U;
	volatile int32_t x107 = 5;

	t18 = ((x105|(x106-x107))*x108);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x113 = -1LL;
	uint32_t x114 = 126146U;
	volatile int32_t x115 = 948798852;
	volatile uint32_t x116 = UINT32_MAX;

	t19 = ((x113|(x114-x115))*x116);

	if (t19 != -4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	uint8_t x119 = UINT8_MAX;
	volatile int64_t x120 = -33300LL;
	int64_t t20 = -180496973LL;

	t20 = ((x117|(x118-x119))*x120);

	if (t20 != 4262400LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = -14;
	int64_t x122 = 181344502854177788LL;
	int16_t x123 = -1;
	volatile int64_t t21 = 3202077931888LL;

	t21 = ((x121|(x122-x123))*x124);

	if (t21 != -1792LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 0U;

	t22 = ((x125|(x126-x127))*x128);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MAX;
	int32_t x131 = INT32_MAX;
	volatile uint32_t t23 = 28620644U;

	t23 = ((x129|(x130-x131))*x132);

	if (t23 != 2415648083U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x134 = INT32_MIN;
	static uint64_t x135 = 55485739308562306LLU;
	int64_t x136 = INT64_MAX;
	uint64_t t24 = 5144385258LLU;

	t24 = ((x133|(x134-x135))*x136);

	if (t24 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x138 = INT16_MAX;
	static int16_t x139 = -1;
	static uint64_t t25 = 18320LLU;

	t25 = ((x137|(x138-x139))*x140);

	if (t25 != 10182103966113982416LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = -1;
	static volatile uint8_t x142 = 2U;
	uint32_t x143 = 1456U;
	static uint32_t x144 = 471268872U;
	volatile uint32_t t26 = 368140U;

	t26 = ((x141|(x142-x143))*x144);

	if (t26 != 3823698424U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = UINT8_MAX;
	volatile uint64_t x146 = 170931765450LLU;
	int16_t x147 = INT16_MAX;
	int8_t x148 = -1;

	t27 = ((x145|(x146-x147))*x148);

	if (t27 != 18446743902777818881LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x149 = UINT8_MAX;
	int8_t x151 = INT8_MAX;
	int16_t x152 = -2;
	volatile int32_t t28 = 1615;

	t28 = ((x149|(x150-x151))*x152);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x154 = -2;
	volatile int64_t x155 = 0LL;
	int64_t t29 = 73618820571767521LL;

	t29 = ((x153|(x154-x155))*x156);

	if (t29 != -11856LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x157 = UINT32_MAX;
	volatile int64_t x160 = -824LL;
	uint64_t t30 = 3707276814935998325LLU;

	t30 = ((x157|(x158-x159))*x160);

	if (t30 != 18446740534656500536LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x162 = -1;
	int8_t x164 = -1;

	t31 = ((x161|(x162-x163))*x164);

	if (t31 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	uint64_t x171 = UINT64_MAX;
	volatile uint8_t x172 = UINT8_MAX;
	static volatile uint64_t t32 = 3766878963LLU;

	t32 = ((x169|(x170-x171))*x172);

	if (t32 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = 0;
	static volatile int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	volatile int64_t t33 = -239351765405513722LL;

	t33 = ((x173|(x174-x175))*x176);

	if (t33 != 738264075649307LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x177 = 14U;
	uint32_t x178 = 1898534616U;
	static int32_t x179 = INT32_MIN;
	uint16_t x180 = 3166U;
	static volatile uint32_t t34 = 268400590U;

	t34 = ((x177|(x178-x179))*x180);

	if (t34 != 2101366148U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 18U;
	volatile uint16_t x183 = UINT16_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t35 = 510;

	t35 = ((x181|(x182-x183))*x184);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = 577445;
	uint16_t x187 = 453U;
	volatile uint64_t t36 = 67974019987LLU;

	t36 = ((x185|(x186-x187))*x188);

	if (t36 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x189 = -1;
	volatile int32_t x191 = 4095233;
	static int32_t x192 = INT32_MAX;
	uint64_t t37 = 17838LLU;

	t37 = ((x189|(x190-x191))*x192);

	if (t37 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	static int64_t x199 = -416157599860133LL;
	volatile int64_t t38 = 2062678746893LL;

	t38 = ((x197|(x198-x199))*x200);

	if (t38 != 31323LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x207 = INT8_MAX;
	static int8_t x208 = INT8_MIN;
	int32_t t39 = -1109234;

	t39 = ((x205|(x206-x207))*x208);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x210 = 108U;
	int16_t x211 = 10;
	uint8_t x212 = 73U;
	volatile int32_t t40 = 8648;

	t40 = ((x209|(x210-x211))*x212);

	if (t40 != -2190) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = -1;
	static uint8_t x215 = 26U;
	int64_t x216 = 2900LL;
	int64_t t41 = -742786LL;

	t41 = ((x213|(x214-x215))*x216);

	if (t41 != -2900LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 3549LLU;
	volatile int8_t x219 = INT8_MIN;
	static volatile uint64_t t42 = 11LLU;

	t42 = ((x217|(x218-x219))*x220);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MAX;
	int16_t x224 = 436;
	static int32_t t43 = -64945425;

	t43 = ((x221|(x222-x223))*x224);

	if (t43 != -14231040) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x225 = 15;
	int64_t x226 = -1LL;
	uint8_t x227 = 108U;
	static volatile int64_t t44 = -442LL;

	t44 = ((x225|(x226-x227))*x228);

	if (t44 != -4064439195LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x229 = INT8_MIN;
	int64_t x231 = 107986734000199LL;
	int8_t x232 = INT8_MAX;
	static int64_t t45 = 1992510420924787LL;

	t45 = ((x229|(x230-x231))*x232);

	if (t45 != -9017LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = INT32_MAX;
	int64_t x235 = 14970141571780727LL;
	static volatile int64_t t46 = -665019539LL;

	t46 = ((x233|(x234-x235))*x236);

	if (t46 != 14970140722462721LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = 22531211616538LL;
	volatile uint64_t x238 = 177889139738600279LLU;
	int16_t x239 = INT16_MIN;
	static int64_t x240 = INT64_MAX;
	volatile uint64_t t47 = 7LLU;

	t47 = ((x237|(x238-x239))*x240);

	if (t47 != 9045482600489196705LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x246 = 125U;
	static int64_t x247 = INT64_MAX;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t48 = 512635591784912737LL;

	t48 = ((x245|(x246-x247))*x248);

	if (t48 != -140196322443390LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x249 = INT8_MIN;
	volatile uint64_t t49 = 721029LLU;

	t49 = ((x249|(x250-x251))*x252);

	if (t49 != 48LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x253 = 7U;
	static int8_t x255 = INT8_MIN;

	t50 = ((x253|(x254-x255))*x256);

	if (t50 != 1785) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x262 = -1LL;
	int16_t x263 = -1;
	int64_t x264 = INT64_MIN;
	uint64_t t51 = 67543834510LLU;

	t51 = ((x261|(x262-x263))*x264);

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x265 = -1;
	int64_t x266 = -1LL;
	int16_t x267 = INT16_MIN;
	static int64_t x268 = -349430043671854LL;
	static volatile int64_t t52 = -935730183LL;

	t52 = ((x265|(x266-x267))*x268);

	if (t52 != 349430043671854LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = 117065456;
	int32_t x275 = 2361;
	static int32_t t53 = -7976477;

	t53 = ((x273|(x274-x275))*x276);

	if (t53 != -25459407) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x277 = INT32_MAX;
	int16_t x278 = -1;
	int64_t x280 = INT64_MIN;
	volatile uint64_t t54 = 474248141LLU;

	t54 = ((x277|(x278-x279))*x280);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = -1;
	volatile int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	int32_t t55 = -4160;

	t55 = ((x281|(x282-x283))*x284);

	if (t55 != -22) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile int64_t x291 = INT64_MIN;
	static volatile int32_t x292 = 3137399;
	int64_t t56 = 228208819LL;

	t56 = ((x289|(x290-x291))*x292);

	if (t56 != -102806290432LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x294 = INT8_MIN;
	static uint8_t x295 = 0U;
	static int16_t x296 = INT16_MAX;

	t57 = ((x293|(x294-x295))*x296);

	if (t57 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x305 = 98U;
	volatile int32_t x306 = -1;
	int64_t x307 = -62185897LL;
	static int8_t x308 = INT8_MAX;
	int64_t t58 = 5506842471770423LL;

	t58 = ((x305|(x306-x307))*x308);

	if (t58 != 7897617174LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x314 = 6U;
	int64_t x315 = -1LL;
	volatile int64_t t59 = -5229691LL;

	t59 = ((x313|(x314-x315))*x316);

	if (t59 != 9606261LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	volatile uint32_t x318 = UINT32_MAX;
	static int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = 43934144U;

	t60 = ((x317|(x318-x319))*x320);

	if (t60 != 4251033152U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x329 = -1;
	int64_t x330 = -1LL;
	volatile int8_t x331 = -1;
	int32_t x332 = -138823930;
	static int64_t t61 = -2158577050354966645LL;

	t61 = ((x329|(x330-x331))*x332);

	if (t61 != 138823930LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MIN;
	int64_t x335 = -125252362574781854LL;
	int16_t x336 = INT16_MIN;
	int64_t t62 = -73LL;

	t62 = ((x333|(x334-x335))*x336);

	if (t62 != 292618240LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MIN;
	static int8_t x339 = INT8_MIN;
	static volatile int8_t x340 = -1;
	int64_t t63 = -152773860LL;

	t63 = ((x337|(x338-x339))*x340);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x347 = -51327814610424058LL;
	uint64_t t64 = 0LLU;

	t64 = ((x345|(x346-x347))*x348);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x349 = 55U;
	int64_t x350 = -27414237872533594LL;
	volatile int8_t x351 = -8;
	uint8_t x352 = 28U;

	t65 = ((x349|(x350-x351))*x352);

	if (t65 != -767598660430939932LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x354 = -1LL;
	int8_t x355 = -1;
	int8_t x356 = INT8_MIN;

	t66 = ((x353|(x354-x355))*x356);

	if (t66 != -4352LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x357 = -8346LL;
	int8_t x359 = INT8_MIN;
	volatile uint32_t x360 = 396086013U;
	static int64_t t67 = -87105607465LL;

	t67 = ((x357|(x358-x359))*x360);

	if (t67 != -3251470080717LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = -1;
	int64_t x362 = INT64_MIN;
	static int64_t x363 = INT64_MIN;
	uint16_t x364 = 1U;

	t68 = ((x361|(x362-x363))*x364);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = -1;
	int16_t x367 = -60;
	int64_t t69 = -11548109LL;

	t69 = ((x365|(x366-x367))*x368);

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x370 = 277628492;
	int8_t x371 = 0;
	static volatile int32_t t70 = 3;

	t70 = ((x369|(x370-x371))*x372);

	if (t70 != 27269112) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x374 = 3349U;
	int32_t x375 = INT32_MIN;
	int32_t x376 = 332;

	t71 = ((x373|(x374-x375))*x376);

	if (t71 != 4285200188U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x377 = -1LL;
	volatile int32_t x378 = -11267;
	static int16_t x380 = INT16_MAX;
	uint64_t t72 = 968775811200491003LLU;

	t72 = ((x377|(x378-x379))*x380);

	if (t72 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x382 = 0;
	uint64_t t73 = 515215430473LLU;

	t73 = ((x381|(x382-x383))*x384);

	if (t73 != 125536124820LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x389 = INT16_MIN;
	volatile int64_t x390 = -1183136167109113LL;
	uint16_t x391 = 0U;
	int8_t x392 = INT8_MIN;
	int64_t t74 = 50608087453421865LL;

	t74 = ((x389|(x390-x391))*x392);

	if (t74 != 1113216LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x393 = INT16_MIN;
	static int8_t x395 = INT8_MIN;
	int32_t t75 = 3;

	t75 = ((x393|(x394-x395))*x396);

	if (t75 != -32513) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x402 = INT16_MAX;
	int64_t x403 = 138247572LL;
	static int32_t x404 = INT32_MIN;
	static volatile int64_t t76 = 1LL;

	t76 = ((x401|(x402-x403))*x404);

	if (t76 != 45097156608LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x406 = 0;
	uint32_t x407 = 260239865U;
	uint32_t x408 = UINT32_MAX;

	t77 = ((x405|(x406-x407))*x408);

	if (t77 != 260239617U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = INT8_MIN;
	volatile int16_t x410 = INT16_MIN;
	volatile uint64_t x412 = 12448LLU;

	t78 = ((x409|(x410-x411))*x412);

	if (t78 != 18446744073707970720LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x413 = 7U;
	int8_t x414 = -6;
	static volatile uint64_t x416 = UINT64_MAX;

	t79 = ((x413|(x414-x415))*x416);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x425 = INT32_MIN;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = -1;
	uint32_t t80 = 2U;

	t80 = ((x425|(x426-x427))*x428);

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = -1;
	volatile uint64_t x431 = 7741368650814LLU;
	int32_t x432 = -1;
	static uint64_t t81 = 109952414812LLU;

	t81 = ((x429|(x430-x431))*x432);

	if (t81 != 7741368650815LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x435 = INT16_MAX;
	static int32_t x436 = INT32_MAX;
	volatile uint32_t t82 = 473578U;

	t82 = ((x433|(x434-x435))*x436);

	if (t82 != 2147516289U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x437 = INT16_MIN;
	static uint64_t x438 = UINT64_MAX;
	int64_t x439 = -1LL;
	int32_t x440 = INT32_MIN;
	static uint64_t t83 = 45649252LLU;

	t83 = ((x437|(x438-x439))*x440);

	if (t83 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x445 = -1516;
	volatile uint64_t x446 = UINT64_MAX;
	int8_t x447 = INT8_MIN;

	t84 = ((x445|(x446-x447))*x448);

	if (t84 != 1409LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x453 = -1;
	int16_t x454 = 79;
	uint16_t x455 = UINT16_MAX;
	uint64_t x456 = 23847368170427274LLU;
	volatile uint64_t t85 = 4861123LLU;

	t85 = ((x453|(x454-x455))*x456);

	if (t85 != 18422896705539124342LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x457 = UINT16_MAX;
	uint64_t x458 = 2628LLU;
	uint16_t x459 = UINT16_MAX;
	uint64_t x460 = 106LLU;

	t86 = ((x457|(x458-x459))*x460);

	if (t86 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x461 = 6U;
	static uint64_t x462 = 54882057015240211LLU;
	int64_t x464 = 12668480159489378LL;
	uint64_t t87 = 32355447580LLU;

	t87 = ((x461|(x462-x463))*x464);

	if (t87 != 7774903172366264910LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x465 = 234023496U;
	static int32_t x467 = 20;
	uint64_t x468 = 135387037513482659LLU;

	t88 = ((x465|(x466-x467))*x468);

	if (t88 != 17202114478257528225LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x471 = INT64_MIN;
	int8_t x472 = 27;
	static int64_t t89 = -87311581821LL;

	t89 = ((x469|(x470-x471))*x472);

	if (t89 != -884736LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = INT32_MIN;
	static int16_t x474 = -1;
	volatile int32_t x475 = INT32_MIN;
	int8_t x476 = -1;
	int32_t t90 = -46900081;

	t90 = ((x473|(x474-x475))*x476);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x478 = UINT64_MAX;
	uint32_t x479 = 1737U;
	static uint16_t x480 = 0U;
	uint64_t t91 = 598783878LLU;

	t91 = ((x477|(x478-x479))*x480);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x481 = -1;
	int8_t x482 = -7;
	volatile int32_t t92 = -1;

	t92 = ((x481|(x482-x483))*x484);

	if (t92 != -52) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MAX;
	static int16_t x487 = INT16_MIN;
	int8_t x488 = 1;
	int32_t t93 = -1;

	t93 = ((x485|(x486-x487))*x488);

	if (t93 != -2147450753) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x489 = INT32_MIN;
	uint16_t x490 = UINT16_MAX;
	uint64_t x491 = 82245LLU;
	uint64_t t94 = 121043093190561173LLU;

	t94 = ((x489|(x490-x491))*x492);

	if (t94 != 18446744073707746936LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x497 = 25U;
	int64_t x498 = INT64_MAX;
	uint64_t x499 = 3753851695650863LLU;
	int8_t x500 = INT8_MAX;

	t95 = ((x497|(x498-x499))*x500);

	if (t95 != 8746632871507117223LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x501 = 25U;
	int16_t x502 = INT16_MAX;
	static int16_t x503 = INT16_MIN;
	int32_t x504 = -1;
	int32_t t96 = -65;

	t96 = ((x501|(x502-x503))*x504);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x505 = 0U;
	uint32_t x506 = UINT32_MAX;
	int8_t x507 = INT8_MIN;
	volatile uint32_t t97 = 173526846U;

	t97 = ((x505|(x506-x507))*x508);

	if (t97 != 254U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = 1;
	int8_t x518 = -1;
	uint8_t x519 = UINT8_MAX;
	static volatile int16_t x520 = INT16_MAX;
	volatile int32_t t98 = -54996523;

	t98 = ((x517|(x518-x519))*x520);

	if (t98 != -8355585) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x521 = 7U;
	uint8_t x522 = 14U;
	int32_t x523 = 239309;
	int32_t x524 = -1;
	volatile int32_t t99 = -583019675;

	t99 = ((x521|(x522-x523))*x524);

	if (t99 != 239289) { NG(); } else { ; }
	
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

