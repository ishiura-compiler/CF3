#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int32_t x15 = INT32_MIN;
volatile uint64_t x24 = 1002501465LLU;
int16_t x25 = INT16_MIN;
uint32_t x31 = 147801U;
uint64_t x38 = 501409LLU;
uint16_t x45 = 186U;
int64_t x54 = 632035608886086693LL;
int32_t x59 = -34169030;
int32_t x62 = -22469984;
static volatile int64_t x63 = INT64_MIN;
int32_t t15 = -10;
int64_t x70 = INT64_MIN;
uint16_t x83 = UINT16_MAX;
volatile int32_t t20 = -29301374;
uint32_t x87 = UINT32_MAX;
uint16_t x88 = 200U;
int8_t x90 = INT8_MIN;
int16_t x92 = 2448;
static int8_t x99 = -1;
int16_t x108 = INT16_MIN;
int32_t x114 = -1;
int32_t x115 = INT32_MIN;
volatile uint8_t x117 = 0U;
volatile int32_t x122 = -664072;
uint16_t x123 = 441U;
static uint16_t x129 = UINT16_MAX;
int64_t x140 = -44960522097204715LL;
uint64_t x141 = 246271549067LLU;
int32_t t36 = 2472;
int8_t x163 = INT8_MAX;
int32_t x164 = 5128;
volatile int64_t t40 = -324438778372LL;
int32_t x173 = -1;
int8_t x176 = INT8_MIN;
static uint16_t x181 = 199U;
volatile uint32_t t44 = 942U;
int32_t x189 = 197220;
static uint8_t x191 = 1U;
int32_t x192 = -1188;
int32_t x201 = -1;
static int8_t x204 = -1;
static uint32_t x205 = UINT32_MAX;
int16_t x212 = 188;
static uint32_t x214 = 118U;
int64_t x218 = -1LL;
volatile uint8_t x220 = 89U;
uint8_t x223 = 12U;
int16_t x225 = INT16_MAX;
volatile uint16_t x230 = 22U;
volatile uint64_t x236 = 194002278613675LLU;
static uint64_t t55 = 484255288LLU;
int32_t x238 = INT32_MIN;
int32_t t56 = 1589;
uint8_t x243 = UINT8_MAX;
int16_t x250 = INT16_MIN;
int32_t x254 = -1;
int8_t x257 = INT8_MIN;
int8_t x258 = INT8_MIN;
int32_t t61 = -80121;
uint64_t t63 = UINT64_MAX;
int16_t x274 = -1;
uint8_t x275 = 2U;
volatile int32_t t67 = -5134387;
int8_t x286 = 0;
int16_t x290 = -8150;
int64_t x296 = INT64_MAX;
static volatile int32_t t70 = 1;
static int8_t x297 = INT8_MIN;
volatile uint16_t x298 = 4654U;
int32_t x299 = INT32_MAX;
int32_t t71 = 190;
volatile uint64_t x304 = 16172941887206596LLU;
static int8_t x306 = INT8_MAX;
int32_t t73 = 210;
int8_t x309 = 1;
int64_t x310 = INT64_MIN;
static int8_t x313 = INT8_MIN;
uint16_t x316 = 1U;
uint64_t t76 = 522498532583LLU;
static int32_t x321 = INT32_MIN;
static int64_t t78 = INT64_MIN;
static volatile int32_t x331 = INT32_MIN;
uint16_t x332 = 2410U;
static int32_t x334 = -61;
uint16_t x335 = 77U;
int64_t x341 = -1LL;
volatile int64_t t82 = 19818LL;
int16_t x345 = INT16_MIN;
int64_t x353 = -1LL;
int16_t x355 = -1;
int8_t x360 = 44;
volatile int32_t t86 = -2526171;
int64_t x362 = -1LL;
volatile int64_t t88 = INT64_MIN;
static volatile int16_t x377 = INT16_MAX;
uint64_t x380 = UINT64_MAX;
volatile int8_t x383 = INT8_MIN;
volatile int64_t x384 = INT64_MIN;
uint16_t x389 = 1553U;
uint16_t x390 = 8U;
int32_t x392 = -11385716;
volatile int32_t t94 = -1;
uint16_t x400 = UINT16_MAX;
volatile int32_t t97 = 1592769;
static int16_t x405 = 432;


void f0(void) {
	int16_t x2 = -1;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = 1723;

	t0 = (x1-((x2<=x3)<=x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -2724;
	static int64_t x6 = INT64_MIN;
	static volatile int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 98329415;

	t1 = (x5-((x6<=x7)<=x8));

	if (t1 != -2724) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int64_t x10 = INT64_MIN;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 100;

	t2 = (x9-((x10<=x11)<=x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -29053852862LL;
	int32_t x14 = INT32_MIN;
	uint64_t x16 = 204682656936LLU;
	static int64_t t3 = -285539836535768488LL;

	t3 = (x13-((x14<=x15)<=x16));

	if (t3 != -29053852863LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint64_t x18 = 14669902043892815LLU;
	uint64_t x19 = 115472229499LLU;
	volatile int32_t x20 = INT32_MIN;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x17-((x18<=x19)<=x20));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -53;
	int16_t x22 = INT16_MAX;
	uint64_t x23 = 0LLU;
	int32_t t5 = -2;

	t5 = (x21-((x22<=x23)<=x24));

	if (t5 != -54) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static uint32_t x27 = UINT32_MAX;
	int64_t x28 = 2588999183804LL;
	static int32_t t6 = -4114;

	t6 = (x25-((x26<=x27)<=x28));

	if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	static uint32_t x30 = 9850U;
	int16_t x32 = 0;
	static int32_t t7 = -4611264;

	t7 = (x29-((x30<=x31)<=x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 18U;
	volatile uint16_t x34 = UINT16_MAX;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = 349U;
	int32_t t8 = -417;

	t8 = (x33-((x34<=x35)<=x36));

	if (t8 != 17) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	static int8_t x39 = -56;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 24;

	t9 = (x37-((x38<=x39)<=x40));

	if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = 1LL;
	int16_t x43 = 225;
	volatile int8_t x44 = -1;
	static int32_t t10 = -25;

	t10 = (x41-((x42<=x43)<=x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x46 = UINT32_MAX;
	static int64_t x47 = 61357190376136389LL;
	static volatile uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = 6;

	t11 = (x45-((x46<=x47)<=x48));

	if (t11 != 185) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	volatile int64_t x52 = -1LL;
	volatile int32_t t12 = 5503785;

	t12 = (x49-((x50<=x51)<=x52));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 92;
	int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 1533;

	t13 = (x53-((x54<=x55)<=x56));

	if (t13 != 92) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 0;
	int16_t x58 = INT16_MAX;
	static int8_t x60 = 1;
	static volatile int32_t t14 = -147716546;

	t14 = (x57-((x58<=x59)<=x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 18244U;
	int32_t x64 = 33272;

	t15 = (x61-((x62<=x63)<=x64));

	if (t15 != 18243) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static int8_t x66 = -12;
	uint8_t x67 = 7U;
	uint8_t x68 = 0U;
	int32_t t16 = 780;

	t16 = (x65-((x66<=x67)<=x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x71 = -6378786414481767LL;
	volatile int8_t x72 = INT8_MIN;
	static int32_t t17 = -925;

	t17 = (x69-((x70<=x71)<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = 30;
	static volatile int16_t x76 = 158;
	volatile int32_t t18 = -78;

	t18 = (x73-((x74<=x75)<=x76));

	if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 1;
	volatile uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 987U;
	volatile int64_t x80 = INT64_MAX;
	volatile int32_t t19 = -13;

	t19 = (x77-((x78<=x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	volatile int8_t x82 = -1;
	static uint64_t x84 = 211431113LLU;

	t20 = (x81-((x82<=x83)<=x84));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = 7704890777055LLU;
	int32_t t21 = 0;

	t21 = (x85-((x86<=x87)<=x88));

	if (t21 != -32769) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int32_t x91 = -23347;
	volatile int64_t t22 = -223728677709LL;

	t22 = (x89-((x90<=x91)<=x92));

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	uint8_t x94 = 36U;
	int64_t x95 = 17294370754242LL;
	uint32_t x96 = 976U;
	static volatile int32_t t23 = -79857;

	t23 = (x93-((x94<=x95)<=x96));

	if (t23 != -129) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -3;
	int64_t x98 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = -1;

	t24 = (x97-((x98<=x99)<=x100));

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	volatile int8_t x102 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t25 = 24294;

	t25 = (x101-((x102<=x103)<=x104));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	static volatile uint16_t x107 = 1U;
	volatile int32_t t26 = -148348;

	t26 = (x105-((x106<=x107)<=x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -19512554505LL;
	volatile int8_t x110 = -3;
	static int16_t x111 = INT16_MIN;
	static volatile int16_t x112 = INT16_MIN;
	volatile int64_t t27 = 1807495170092521403LL;

	t27 = (x109-((x110<=x111)<=x112));

	if (t27 != -19512554505LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	volatile uint64_t x116 = 144LLU;
	volatile int64_t t28 = -1648381698434LL;

	t28 = (x113-((x114<=x115)<=x116));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	int8_t x119 = -38;
	uint32_t x120 = 64518U;
	volatile int32_t t29 = -6757;

	t29 = (x117-((x118<=x119)<=x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	volatile uint8_t x124 = 1U;
	volatile int32_t t30 = 296469;

	t30 = (x121-((x122<=x123)<=x124));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 12309U;
	uint64_t x126 = UINT64_MAX;
	static int32_t x127 = INT32_MIN;
	int64_t x128 = -1LL;
	volatile int32_t t31 = 33830;

	t31 = (x125-((x126<=x127)<=x128));

	if (t31 != 12309) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	volatile uint32_t x131 = 7300U;
	volatile int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -890694181;

	t32 = (x129-((x130<=x131)<=x132));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -2822799206LL;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 2LLU;
	uint8_t x136 = UINT8_MAX;
	int64_t t33 = 43268923934LL;

	t33 = (x133-((x134<=x135)<=x136));

	if (t33 != -2822799207LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MAX;
	volatile int64_t t34 = INT64_MIN;

	t34 = (x137-((x138<=x139)<=x140));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	uint32_t x143 = 640569832U;
	uint32_t x144 = 72116475U;
	volatile uint64_t t35 = 9718188465LLU;

	t35 = (x141-((x142<=x143)<=x144));

	if (t35 != 246271549066LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = 3U;
	int8_t x147 = -1;
	uint16_t x148 = 1670U;

	t36 = (x145-((x146<=x147)<=x148));

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int16_t x150 = -1;
	volatile int32_t x151 = INT32_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t37 = 502LL;

	t37 = (x149-((x150<=x151)<=x152));

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = -12;
	static uint16_t x155 = 99U;
	static int64_t x156 = -177LL;
	int32_t t38 = INT32_MIN;

	t38 = (x153-((x154<=x155)<=x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x161 = UINT32_MAX;
	volatile uint32_t x162 = 7566693U;
	uint32_t t39 = 2588529U;

	t39 = (x161-((x162<=x163)<=x164));

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -181142LL;
	int32_t x166 = 63747610;
	volatile uint64_t x167 = 25255LLU;
	uint64_t x168 = UINT64_MAX;

	t40 = (x165-((x166<=x167)<=x168));

	if (t40 != -181143LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x174 = INT64_MIN;
	static int16_t x175 = INT16_MAX;
	static volatile int32_t t41 = 5207274;

	t41 = (x173-((x174<=x175)<=x176));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 3247448U;
	volatile uint8_t x178 = UINT8_MAX;
	int8_t x179 = 7;
	volatile int64_t x180 = INT64_MIN;
	uint32_t t42 = 108003U;

	t42 = (x177-((x178<=x179)<=x180));

	if (t42 != 3247448U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x182 = INT8_MIN;
	static volatile int32_t x183 = -1;
	int16_t x184 = -1;
	volatile int32_t t43 = 49979335;

	t43 = (x181-((x182<=x183)<=x184));

	if (t43 != 199) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 0U;
	int64_t x186 = -9997LL;
	static int16_t x187 = 1643;
	int8_t x188 = -1;

	t44 = (x185-((x186<=x187)<=x188));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = -1;
	volatile int32_t t45 = 2;

	t45 = (x189-((x190<=x191)<=x192));

	if (t45 != 197220) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 9;
	static volatile int64_t x194 = -1LL;
	volatile int8_t x195 = -1;
	static int8_t x196 = INT8_MAX;
	int32_t t46 = -34390;

	t46 = (x193-((x194<=x195)<=x196));

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x202 = 0U;
	uint8_t x203 = 1U;
	int32_t t47 = -252;

	t47 = (x201-((x202<=x203)<=x204));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x206 = INT32_MAX;
	volatile int64_t x207 = 26924671030240285LL;
	volatile int16_t x208 = -1765;
	uint32_t t48 = UINT32_MAX;

	t48 = (x205-((x206<=x207)<=x208));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = 292512740189LL;
	int32_t x210 = -697;
	static int64_t x211 = INT64_MAX;
	int64_t t49 = -137LL;

	t49 = (x209-((x210<=x211)<=x212));

	if (t49 != 292512740188LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = 0;
	int8_t x215 = 2;
	static uint64_t x216 = UINT64_MAX;
	int32_t t50 = -5985;

	t50 = (x213-((x214<=x215)<=x216));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x217 = 29;
	uint64_t x219 = 2279713LLU;
	int32_t t51 = -45142089;

	t51 = (x217-((x218<=x219)<=x220));

	if (t51 != 28) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MAX;
	volatile int16_t x222 = INT16_MIN;
	int64_t x224 = -1LL;
	int32_t t52 = 5757;

	t52 = (x221-((x222<=x223)<=x224));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x226 = INT8_MAX;
	uint32_t x227 = 1144U;
	static int8_t x228 = INT8_MIN;
	static volatile int32_t t53 = 104815819;

	t53 = (x225-((x226<=x227)<=x228));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -197195290;
	int32_t x231 = INT32_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t54 = 355440623;

	t54 = (x229-((x230<=x231)<=x232));

	if (t54 != -197195290) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x233 = 241353LLU;
	static int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MIN;

	t55 = (x233-((x234<=x235)<=x236));

	if (t55 != 241352LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = 439U;
	int16_t x239 = -1;
	int64_t x240 = 70262LL;

	t56 = (x237-((x238<=x239)<=x240));

	if (t56 != 438) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = UINT32_MAX;
	uint8_t x242 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	uint32_t t57 = UINT32_MAX;

	t57 = (x241-((x242<=x243)<=x244));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = INT8_MAX;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = 2;
	uint16_t x248 = 2U;
	int32_t t58 = -769591;

	t58 = (x245-((x246<=x247)<=x248));

	if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x249 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	uint32_t x252 = 3014U;
	volatile int32_t t59 = -146172817;

	t59 = (x249-((x250<=x251)<=x252));

	if (t59 != -129) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = -13180512LL;
	uint16_t x255 = 243U;
	static uint64_t x256 = UINT64_MAX;
	int64_t t60 = 2LL;

	t60 = (x253-((x254<=x255)<=x256));

	if (t60 != -13180513LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x259 = INT32_MIN;
	volatile int64_t x260 = INT64_MAX;

	t61 = (x257-((x258<=x259)<=x260));

	if (t61 != -129) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -1;
	volatile uint16_t x262 = 109U;
	static volatile int32_t x263 = INT32_MAX;
	uint8_t x264 = 1U;
	volatile int32_t t62 = 28714;

	t62 = (x261-((x262<=x263)<=x264));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = 409391924362930101LL;
	uint8_t x267 = 1U;
	int64_t x268 = -1467848502184LL;

	t63 = (x265-((x266<=x267)<=x268));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x269 = 0;
	volatile int32_t x270 = INT32_MAX;
	int64_t x271 = -1LL;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t64 = 681514540;

	t64 = (x269-((x270<=x271)<=x272));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x273 = INT8_MAX;
	static volatile int8_t x276 = -15;
	int32_t t65 = 2806;

	t65 = (x273-((x274<=x275)<=x276));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int16_t x278 = INT16_MIN;
	int32_t x279 = 538;
	uint32_t x280 = 1034261U;
	static volatile uint32_t t66 = 1U;

	t66 = (x277-((x278<=x279)<=x280));

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MAX;
	uint8_t x282 = 122U;
	static volatile int64_t x283 = INT64_MAX;
	volatile uint32_t x284 = UINT32_MAX;

	t67 = (x281-((x282<=x283)<=x284));

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -4001915;
	int64_t x287 = INT64_MAX;
	static uint8_t x288 = UINT8_MAX;
	volatile int32_t t68 = -7673;

	t68 = (x285-((x286<=x287)<=x288));

	if (t68 != -4001916) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 21U;
	int16_t x291 = -10;
	int64_t x292 = -597249LL;
	static int32_t t69 = 15;

	t69 = (x289-((x290<=x291)<=x292));

	if (t69 != 21) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -1;
	int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MIN;

	t70 = (x293-((x294<=x295)<=x296));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x300 = 3195752326883489LL;

	t71 = (x297-((x298<=x299)<=x300));

	if (t71 != -129) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 13U;
	int64_t x302 = INT64_MIN;
	static uint16_t x303 = 71U;
	int32_t t72 = 3;

	t72 = (x301-((x302<=x303)<=x304));

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 332U;
	volatile int16_t x307 = 0;
	volatile int16_t x308 = -1;

	t73 = (x305-((x306<=x307)<=x308));

	if (t73 != 332) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x311 = INT32_MAX;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t74 = -121;

	t74 = (x309-((x310<=x311)<=x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x314 = INT16_MAX;
	int64_t x315 = -1LL;
	int32_t t75 = 1;

	t75 = (x313-((x314<=x315)<=x316));

	if (t75 != -129) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = 50641033LLU;
	int32_t x318 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	int32_t x320 = 22707;

	t76 = (x317-((x318<=x319)<=x320));

	if (t76 != 50641032LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x322 = UINT64_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile int16_t x324 = -1;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x321-((x322<=x323)<=x324));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	volatile int64_t x326 = INT64_MIN;
	volatile int32_t x327 = INT32_MAX;
	static volatile int64_t x328 = INT64_MIN;

	t78 = (x325-((x326<=x327)<=x328));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = -1;
	uint8_t x330 = 6U;
	volatile int32_t t79 = 74;

	t79 = (x329-((x330<=x331)<=x332));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int64_t x336 = INT64_MAX;
	volatile int32_t t80 = -345;

	t80 = (x333-((x334<=x335)<=x336));

	if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x337 = UINT32_MAX;
	volatile int16_t x338 = INT16_MIN;
	int64_t x339 = -1LL;
	volatile uint8_t x340 = 1U;
	uint32_t t81 = 50237008U;

	t81 = (x337-((x338<=x339)<=x340));

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = INT64_MIN;
	int32_t x344 = -1;

	t82 = (x341-((x342<=x343)<=x344));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x346 = 1657U;
	static uint16_t x347 = UINT16_MAX;
	int32_t x348 = INT32_MIN;
	int32_t t83 = -35652502;

	t83 = (x345-((x346<=x347)<=x348));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = INT32_MIN;
	static uint32_t x350 = 1820518595U;
	uint16_t x351 = 1U;
	volatile int64_t x352 = -2958472LL;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x349-((x350<=x351)<=x352));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x354 = -1349636;
	int64_t x356 = INT64_MIN;
	int64_t t85 = 18306458338841876LL;

	t85 = (x353-((x354<=x355)<=x356));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = UINT8_MAX;
	static int64_t x358 = 22LL;
	uint8_t x359 = UINT8_MAX;

	t86 = (x357-((x358<=x359)<=x360));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 1908LLU;
	int8_t x363 = INT8_MAX;
	int8_t x364 = 2;
	static uint64_t t87 = 11400493LLU;

	t87 = (x361-((x362<=x363)<=x364));

	if (t87 != 1907LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = INT64_MIN;
	uint16_t x366 = 12U;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MIN;

	t88 = (x365-((x366<=x367)<=x368));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 315LL;
	int32_t x370 = -204116;
	int32_t x371 = INT32_MAX;
	uint32_t x372 = 206550U;
	static int64_t t89 = -824504854LL;

	t89 = (x369-((x370<=x371)<=x372));

	if (t89 != 314LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x374 = 1U;
	static int16_t x375 = INT16_MAX;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x373-((x374<=x375)<=x376));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = INT8_MIN;
	static volatile int32_t t91 = 0;

	t91 = (x377-((x378<=x379)<=x380));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x381 = -1;
	uint8_t x382 = 1U;
	volatile int32_t t92 = -167170487;

	t92 = (x381-((x382<=x383)<=x384));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = 0;
	volatile int32_t t93 = 51950625;

	t93 = (x385-((x386<=x387)<=x388));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x391 = 3U;

	t94 = (x389-((x390<=x391)<=x392));

	if (t94 != 1553) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = INT8_MIN;
	volatile uint8_t x394 = 2U;
	uint32_t x395 = 303630U;
	volatile int8_t x396 = -5;
	static volatile int32_t t95 = 698;

	t95 = (x393-((x394<=x395)<=x396));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = 55U;
	static int16_t x398 = -199;
	uint64_t x399 = 3442LLU;
	uint32_t t96 = 964440400U;

	t96 = (x397-((x398<=x399)<=x400));

	if (t96 != 54U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	static volatile uint64_t x403 = 52944LLU;
	uint64_t x404 = 68638LLU;

	t97 = (x401-((x402<=x403)<=x404));

	if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x406 = -3;
	volatile int32_t x407 = INT32_MIN;
	int8_t x408 = -1;
	volatile int32_t t98 = 30;

	t98 = (x405-((x406<=x407)<=x408));

	if (t98 != 432) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = INT32_MAX;
	int32_t x410 = -1;
	int64_t x411 = INT64_MAX;
	uint32_t x412 = 30U;
	volatile int32_t t99 = 48;

	t99 = (x409-((x410<=x411)<=x412));

	if (t99 != 2147483646) { NG(); } else { ; }
	
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

