#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -1513958;
int64_t x12 = -146LL;
int32_t x18 = INT32_MIN;
uint16_t x21 = UINT16_MAX;
uint32_t x22 = UINT32_MAX;
static volatile uint32_t x28 = 13U;
int16_t x30 = INT16_MAX;
int64_t x32 = -1LL;
uint16_t x35 = UINT16_MAX;
static int16_t x41 = INT16_MIN;
volatile int64_t x45 = INT64_MIN;
uint32_t x48 = 4633220U;
static int8_t x50 = 3;
int16_t x51 = -1;
static int64_t x52 = INT64_MAX;
int16_t x54 = 2281;
int64_t x55 = INT64_MAX;
volatile int32_t t13 = 1;
int32_t x63 = -1;
uint64_t x65 = 7LLU;
uint64_t x78 = 457595LLU;
int16_t x81 = -1;
int64_t x83 = 1759397144LL;
int32_t t21 = -1;
int64_t x95 = INT64_MAX;
int64_t x96 = 17277275006147734LL;
int16_t x101 = -58;
uint32_t x108 = 71U;
static uint64_t x109 = 33959376LLU;
uint16_t x112 = 1457U;
uint64_t t27 = 331657855084847062LLU;
int16_t x121 = 13;
int16_t x127 = 2;
uint64_t x133 = UINT64_MAX;
uint32_t x136 = 81938339U;
volatile int32_t x142 = INT32_MIN;
static int8_t x161 = -59;
int64_t x163 = -127239399701905LL;
int32_t x164 = -67300403;
volatile int32_t t39 = -138969052;
int64_t x180 = 8424793447LL;
int64_t x183 = INT64_MIN;
int32_t x187 = INT32_MIN;
int16_t x199 = INT16_MIN;
volatile uint32_t x216 = UINT32_MAX;
static int64_t x217 = INT64_MIN;
static int16_t x219 = 13374;
volatile uint64_t t53 = 7482817857738999394LLU;
int16_t x235 = INT16_MIN;
uint64_t x236 = 3033379717417061LLU;
uint8_t x241 = 11U;
volatile int64_t t57 = -313LL;
volatile int8_t x251 = -1;
volatile int64_t x252 = INT64_MIN;
volatile int64_t t59 = -1LL;
volatile int8_t x258 = INT8_MIN;
int64_t x264 = INT64_MIN;
volatile int32_t x270 = INT32_MIN;
static uint64_t t65 = 136334136897LLU;
int32_t x278 = -1;
volatile uint16_t x288 = 15U;
int64_t t69 = 5683904LL;
uint32_t x301 = 293752191U;
uint16_t x302 = 12U;
uint32_t x305 = 0U;
static volatile int64_t t72 = -25182392685LL;
uint64_t t75 = 45658545029LLU;
int16_t x324 = INT16_MIN;
int8_t x329 = INT8_MIN;
volatile int64_t x340 = -51LL;
int8_t x347 = INT8_MIN;
static int16_t x348 = INT16_MIN;
int32_t x353 = INT32_MIN;
static uint64_t x358 = UINT64_MAX;
int32_t x370 = INT32_MIN;
int64_t t88 = -14973570849349454LL;
volatile int8_t x375 = INT8_MIN;
int32_t x381 = INT32_MIN;
volatile int64_t t91 = 218LL;
volatile int64_t x392 = -24546836876637LL;
volatile uint64_t x393 = 427LLU;
int16_t x400 = INT16_MIN;
uint64_t x402 = 35595099025959340LLU;
static int8_t x414 = -1;


void f0(void) {
	volatile int8_t x1 = 27;
	static volatile uint32_t x2 = 5220U;
	static int32_t x3 = -28;
	static int32_t x4 = INT32_MAX;

	t0 = (x1+((x2<=x3)%x4));

	if (t0 != 28) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int64_t x6 = -28LL;
	static uint8_t x7 = 31U;
	uint64_t x8 = 259805467073LLU;
	volatile uint64_t t1 = 1150202307054800457LLU;

	t1 = (x5+((x6<=x7)%x8));

	if (t1 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint8_t x10 = 109U;
	static uint32_t x11 = 27370U;
	int64_t t2 = -28410LL;

	t2 = (x9+((x10<=x11)%x12));

	if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int64_t x14 = -6LL;
	int16_t x15 = 14915;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 118777LLU;

	t3 = (x13+((x14<=x15)%x16));

	if (t3 != 256LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -6;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 103;

	t4 = (x17+((x18<=x19)%x20));

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x23 = -1LL;
	static uint16_t x24 = 1929U;
	volatile int32_t t5 = -41452;

	t5 = (x21+((x22<=x23)%x24));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile uint8_t x26 = 7U;
	uint32_t x27 = 107580U;
	static uint32_t t6 = 214152925U;

	t6 = (x25+((x26<=x27)%x28));

	if (t6 != 4294934529U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	int16_t x31 = INT16_MAX;
	int64_t t7 = -148LL;

	t7 = (x29+((x30<=x31)%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 18529672839LLU;
	uint64_t x34 = 1649698556913LLU;
	volatile int64_t x36 = -34594040302LL;
	uint64_t t8 = 73LLU;

	t8 = (x33+((x34<=x35)%x36));

	if (t8 != 18529672839LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	uint32_t x38 = 1280U;
	int32_t x39 = INT32_MAX;
	static volatile int32_t x40 = -12;
	volatile int32_t t9 = 53423055;

	t9 = (x37+((x38<=x39)%x40));

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 13020091951440LL;
	uint64_t x43 = 893826LLU;
	static uint32_t x44 = 470195507U;
	volatile uint32_t t10 = 3932846U;

	t10 = (x41+((x42<=x43)%x44));

	if (t10 != 4294934528U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x46 = 3038U;
	int64_t x47 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x45+((x46<=x47)%x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 5LLU;
	uint64_t t12 = 842393023140068607LLU;

	t12 = (x49+((x50<=x51)%x52));

	if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	uint16_t x56 = UINT16_MAX;

	t13 = (x53+((x54<=x55)%x56));

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MAX;
	static volatile int32_t x60 = -1;
	static int32_t t14 = 119959871;

	t14 = (x57+((x58<=x59)%x60));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -1LL;
	static uint32_t x62 = 35560U;
	static int8_t x64 = 6;
	int64_t t15 = 435986858187383615LL;

	t15 = (x61+((x62<=x63)%x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = 176;
	int16_t x67 = -180;
	int16_t x68 = -1;
	volatile uint64_t t16 = 13355314LLU;

	t16 = (x65+((x66<=x67)%x68));

	if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 27049252;
	int64_t x70 = INT64_MAX;
	static int8_t x71 = 1;
	uint16_t x72 = 8U;
	volatile int32_t t17 = 0;

	t17 = (x69+((x70<=x71)%x72));

	if (t17 != 27049252) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x73 = 117954U;
	uint8_t x74 = 31U;
	int64_t x75 = -13LL;
	int32_t x76 = INT32_MIN;
	uint32_t t18 = 2706665U;

	t18 = (x73+((x74<=x75)%x76));

	if (t18 != 117954U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 71003154165219228LLU;
	static int64_t x79 = -1LL;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 177982808381301LLU;

	t19 = (x77+((x78<=x79)%x80));

	if (t19 != 71003154165219229LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MAX;
	uint32_t x84 = 9U;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x81+((x82<=x83)%x84));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int16_t x86 = 1;
	volatile int64_t x87 = INT64_MAX;
	static int16_t x88 = INT16_MIN;

	t21 = (x85+((x86<=x87)%x88));

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 64U;
	int16_t x90 = INT16_MIN;
	uint32_t x91 = 0U;
	static volatile uint16_t x92 = UINT16_MAX;
	static int32_t t22 = -2;

	t22 = (x89+((x90<=x91)%x92));

	if (t22 != 64) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	static volatile int64_t x94 = INT64_MIN;
	volatile int64_t t23 = -545434333569356LL;

	t23 = (x93+((x94<=x95)%x96));

	if (t23 != 256LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = INT16_MIN;
	static int16_t x99 = -176;
	static volatile uint32_t x100 = UINT32_MAX;
	uint32_t t24 = 31758U;

	t24 = (x97+((x98<=x99)%x100));

	if (t24 != 128U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 1;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 1U;
	int32_t t25 = 134;

	t25 = (x101+((x102<=x103)%x104));

	if (t25 != -58) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 0U;
	volatile uint8_t x106 = UINT8_MAX;
	uint64_t x107 = 185599559980201LLU;
	static volatile uint32_t t26 = 68014791U;

	t26 = (x105+((x106<=x107)%x108));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = 108U;
	int64_t x111 = 1194982780834941720LL;

	t27 = (x109+((x110<=x111)%x112));

	if (t27 != 33959377LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MAX;
	volatile uint32_t x115 = 46457U;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 14LL;

	t28 = (x113+((x114<=x115)%x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	int64_t x119 = -937631185896374LL;
	volatile int32_t x120 = INT32_MIN;
	int32_t t29 = INT32_MIN;

	t29 = (x117+((x118<=x119)%x120));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	volatile int64_t x123 = -1LL;
	static uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 240;

	t30 = (x121+((x122<=x123)%x124));

	if (t30 != 14) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int16_t x126 = -100;
	volatile uint8_t x128 = 14U;
	volatile int64_t t31 = 155833233LL;

	t31 = (x125+((x126<=x127)%x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = 61;
	int8_t x132 = -1;
	int32_t t32 = INT32_MIN;

	t32 = (x129+((x130<=x131)%x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	static int8_t x135 = INT8_MAX;
	uint64_t t33 = 305164565LLU;

	t33 = (x133+((x134<=x135)%x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	static int32_t x143 = INT32_MAX;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 9;

	t34 = (x141+((x142<=x143)%x144));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 299LL;
	int8_t x146 = -1;
	static int8_t x147 = -1;
	int64_t x148 = INT64_MIN;
	static int64_t t35 = 6216617238987LL;

	t35 = (x145+((x146<=x147)%x148));

	if (t35 != 300LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = INT16_MAX;
	uint16_t x152 = 56U;
	int32_t t36 = -34;

	t36 = (x149+((x150<=x151)%x152));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MAX;
	static uint16_t x155 = 17U;
	uint32_t x156 = 63445809U;
	static uint32_t t37 = 187016962U;

	t37 = (x153+((x154<=x155)%x156));

	if (t37 != 255U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 7U;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	volatile int64_t x160 = INT64_MAX;
	int64_t t38 = -2796222460656LL;

	t38 = (x157+((x158<=x159)%x160));

	if (t38 != 8LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x162 = -1;

	t39 = (x161+((x162<=x163)%x164));

	if (t39 != -59) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	static int32_t x166 = INT32_MAX;
	int64_t x167 = INT64_MIN;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t40 = 5798490;

	t40 = (x165+((x166<=x167)%x168));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 4447;
	int16_t x170 = -1;
	volatile uint64_t x171 = 238224804LLU;
	uint32_t x172 = 56132U;
	static volatile uint32_t t41 = 104U;

	t41 = (x169+((x170<=x171)%x172));

	if (t41 != 4447U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = INT16_MIN;
	static volatile int64_t x174 = INT64_MAX;
	int8_t x175 = 0;
	uint64_t x176 = UINT64_MAX;
	uint64_t t42 = 1LLU;

	t42 = (x173+((x174<=x175)%x176));

	if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 340203641U;
	int8_t x178 = -1;
	int32_t x179 = -1;
	int64_t t43 = 241295LL;

	t43 = (x177+((x178<=x179)%x180));

	if (t43 != 340203642LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = -1;
	static volatile int64_t x182 = 4383321856430LL;
	int8_t x184 = 5;
	int32_t t44 = 5876807;

	t44 = (x181+((x182<=x183)%x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x185 = INT16_MAX;
	uint32_t x186 = 147U;
	int16_t x188 = INT16_MIN;
	int32_t t45 = 30;

	t45 = (x185+((x186<=x187)%x188));

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 2634LLU;
	volatile int8_t x190 = 1;
	uint8_t x191 = 1U;
	static uint16_t x192 = 185U;
	static uint64_t t46 = 505203640463858LLU;

	t46 = (x189+((x190<=x191)%x192));

	if (t46 != 2635LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 1U;
	static int32_t x198 = INT32_MIN;
	static volatile int64_t x200 = -5878497LL;
	static int64_t t47 = -282964LL;

	t47 = (x197+((x198<=x199)%x200));

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MAX;
	static uint16_t x203 = 2928U;
	uint32_t x204 = UINT32_MAX;
	uint32_t t48 = 1U;

	t48 = (x201+((x202<=x203)%x204));

	if (t48 != 255U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	volatile uint16_t x208 = 28U;
	int32_t t49 = -8;

	t49 = (x205+((x206<=x207)%x208));

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 1U;
	volatile int32_t t50 = -321701576;

	t50 = (x209+((x210<=x211)%x212));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	int32_t x214 = 7226;
	int64_t x215 = INT64_MIN;
	uint32_t t51 = UINT32_MAX;

	t51 = (x213+((x214<=x215)%x216));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = 192263378;
	static volatile int8_t x220 = INT8_MAX;
	static int64_t t52 = INT64_MIN;

	t52 = (x217+((x218<=x219)%x220));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	int64_t x227 = 1948181776LL;
	uint64_t x228 = UINT64_MAX;

	t53 = (x225+((x226<=x227)%x228));

	if (t53 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x229 = -2098227760178178246LL;
	int64_t x230 = -1LL;
	volatile int32_t x231 = -415902448;
	int32_t x232 = INT32_MAX;
	static int64_t t54 = -424166707LL;

	t54 = (x229+((x230<=x231)%x232));

	if (t54 != -2098227760178178246LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	uint16_t x234 = UINT16_MAX;
	uint64_t t55 = 277LLU;

	t55 = (x233+((x234<=x235)%x236));

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	static int16_t x238 = INT16_MIN;
	int32_t x239 = -34479;
	int32_t x240 = -1;
	int32_t t56 = INT32_MAX;

	t56 = (x237+((x238<=x239)%x240));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x242 = INT32_MIN;
	volatile int16_t x243 = INT16_MAX;
	int64_t x244 = -1LL;

	t57 = (x241+((x242<=x243)%x244));

	if (t57 != 11LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MAX;
	int64_t x247 = 0LL;
	int16_t x248 = -1;
	int64_t t58 = INT64_MIN;

	t58 = (x245+((x246<=x247)%x248));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 0U;
	uint8_t x250 = UINT8_MAX;

	t59 = (x249+((x250<=x251)%x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = 4715474367LLU;
	uint64_t t60 = 12291LLU;

	t60 = (x253+((x254<=x255)%x256));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x257 = UINT8_MAX;
	static int8_t x259 = INT8_MAX;
	int16_t x260 = 7873;
	static volatile int32_t t61 = 29960;

	t61 = (x257+((x258<=x259)%x260));

	if (t61 != 256) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 611845245357LL;
	int8_t x262 = INT8_MIN;
	int64_t x263 = -1LL;
	volatile int64_t t62 = -1258496592543962373LL;

	t62 = (x261+((x262<=x263)%x264));

	if (t62 != 611845245358LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = 0;
	uint32_t x266 = 21U;
	volatile int8_t x267 = INT8_MAX;
	uint16_t x268 = 193U;
	volatile int32_t t63 = 29736;

	t63 = (x265+((x266<=x267)%x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x269 = INT8_MAX;
	static volatile int8_t x271 = 0;
	static uint16_t x272 = 10U;
	volatile int32_t t64 = 352690080;

	t64 = (x269+((x270<=x271)%x272));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = -12433;
	uint16_t x274 = 18635U;
	volatile int16_t x275 = INT16_MIN;
	volatile uint64_t x276 = 5834440344495142056LLU;

	t65 = (x273+((x274<=x275)%x276));

	if (t65 != 18446744073709539183LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = 390014056U;
	int16_t x279 = -3855;
	uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t66 = 16471164U;

	t66 = (x277+((x278<=x279)%x280));

	if (t66 != 390014056U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MIN;
	int32_t x286 = 1009234;
	static uint16_t x287 = 152U;
	int32_t t67 = INT32_MIN;

	t67 = (x285+((x286<=x287)%x288));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x289 = -1;
	uint16_t x290 = 18593U;
	uint8_t x291 = 44U;
	int64_t x292 = -1LL;
	volatile int64_t t68 = -12054224384LL;

	t68 = (x289+((x290<=x291)%x292));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = INT8_MIN;
	int32_t x295 = 10673;
	int64_t x296 = INT64_MIN;

	t69 = (x293+((x294<=x295)%x296));

	if (t69 != 256LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = -337204003297378LL;
	int16_t x298 = -1;
	uint16_t x299 = 3920U;
	int64_t x300 = INT64_MIN;
	static volatile int64_t t70 = 883640LL;

	t70 = (x297+((x298<=x299)%x300));

	if (t70 != -337204003297377LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x303 = 1035U;
	static int64_t x304 = 484144LL;
	volatile int64_t t71 = 400407306373120LL;

	t71 = (x301+((x302<=x303)%x304));

	if (t71 != 293752192LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x306 = INT64_MAX;
	static int8_t x307 = 0;
	int64_t x308 = -2199LL;

	t72 = (x305+((x306<=x307)%x308));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	int8_t x311 = 10;
	int16_t x312 = INT16_MAX;
	static int32_t t73 = INT32_MIN;

	t73 = (x309+((x310<=x311)%x312));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t74 = 26327053;

	t74 = (x313+((x314<=x315)%x316));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 126352573LLU;
	volatile int16_t x318 = 5076;
	uint32_t x319 = 3U;
	int32_t x320 = INT32_MIN;

	t75 = (x317+((x318<=x319)%x320));

	if (t75 != 126352573LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = INT8_MAX;
	static uint32_t x322 = 92483321U;
	volatile int64_t x323 = -3863LL;
	int32_t t76 = -5;

	t76 = (x321+((x322<=x323)%x324));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 74991369589351LLU;
	uint64_t x328 = 18845502041106151LLU;
	static uint64_t t77 = UINT64_MAX;

	t77 = (x325+((x326<=x327)%x328));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x330 = 2898213LLU;
	int16_t x331 = INT16_MIN;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t78 = 343;

	t78 = (x329+((x330<=x331)%x332));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	volatile uint8_t x334 = 3U;
	int8_t x335 = -5;
	int16_t x336 = -1;
	volatile int32_t t79 = -523302;

	t79 = (x333+((x334<=x335)%x336));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -1;
	uint8_t x338 = 3U;
	volatile uint16_t x339 = UINT16_MAX;
	int64_t t80 = 4298936770LL;

	t80 = (x337+((x338<=x339)%x340));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = INT64_MIN;
	volatile int32_t x342 = -1;
	uint64_t x343 = 192254LLU;
	static volatile int64_t x344 = -22865974361758112LL;
	volatile int64_t t81 = INT64_MIN;

	t81 = (x341+((x342<=x343)%x344));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	int16_t x346 = 948;
	int64_t t82 = INT64_MIN;

	t82 = (x345+((x346<=x347)%x348));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = -1;
	uint16_t x350 = 314U;
	volatile int64_t x351 = INT64_MAX;
	uint64_t x352 = 213LLU;
	static volatile uint64_t t83 = 45614069148LLU;

	t83 = (x349+((x350<=x351)%x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x354 = INT8_MIN;
	volatile int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t84 = INT32_MIN;

	t84 = (x353+((x354<=x355)%x356));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = INT8_MIN;
	int64_t x359 = INT64_MAX;
	int64_t x360 = INT64_MAX;
	int64_t t85 = 19284570947003LL;

	t85 = (x357+((x358<=x359)%x360));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = 24990U;
	static int16_t x362 = 4930;
	static int16_t x363 = INT16_MIN;
	static int8_t x364 = -1;
	volatile int32_t t86 = -1016312521;

	t86 = (x361+((x362<=x363)%x364));

	if (t86 != 24990) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x365 = 1303U;
	volatile int32_t x366 = -1;
	int8_t x367 = INT8_MAX;
	volatile int64_t x368 = INT64_MAX;
	static volatile int64_t t87 = -47391090482759LL;

	t87 = (x365+((x366<=x367)%x368));

	if (t87 != 1304LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = 2155569809635757LL;
	uint32_t x371 = 0U;
	volatile int16_t x372 = -1;

	t88 = (x369+((x370<=x371)%x372));

	if (t88 != 2155569809635757LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MAX;
	volatile uint32_t x374 = UINT32_MAX;
	static int16_t x376 = -1;
	volatile int32_t t89 = -1003170689;

	t89 = (x373+((x374<=x375)%x376));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MIN;
	static int8_t x378 = -1;
	int8_t x379 = -1;
	int32_t x380 = -1;
	int32_t t90 = -65082463;

	t90 = (x377+((x378<=x379)%x380));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x382 = -16;
	int8_t x383 = INT8_MAX;
	volatile int64_t x384 = -1LL;

	t91 = (x381+((x382<=x383)%x384));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	volatile int64_t t92 = -3LL;

	t92 = (x385+((x386<=x387)%x388));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 8U;
	int8_t x390 = 7;
	static int16_t x391 = INT16_MAX;
	int64_t t93 = 365910101478LL;

	t93 = (x389+((x390<=x391)%x392));

	if (t93 != 9LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x394 = INT64_MAX;
	volatile int16_t x395 = INT16_MIN;
	static uint32_t x396 = 90949U;
	volatile uint64_t t94 = 952100990140372158LLU;

	t94 = (x393+((x394<=x395)%x396));

	if (t94 != 427LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = UINT8_MAX;
	static uint16_t x398 = UINT16_MAX;
	int16_t x399 = -29;
	volatile int32_t t95 = 63652455;

	t95 = (x397+((x398<=x399)%x400));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	volatile int32_t x403 = INT32_MAX;
	int8_t x404 = INT8_MAX;
	int32_t t96 = 110;

	t96 = (x401+((x402<=x403)%x404));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = INT8_MIN;
	static int32_t x410 = INT32_MAX;
	int8_t x411 = 60;
	int8_t x412 = -22;
	volatile int32_t t97 = 2393;

	t97 = (x409+((x410<=x411)%x412));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x413 = 0;
	volatile uint64_t x415 = 3LLU;
	int64_t x416 = 1LL;
	int64_t t98 = 109853031984566747LL;

	t98 = (x413+((x414<=x415)%x416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x417 = 0;
	int64_t x418 = -2859205703063413667LL;
	volatile int64_t x419 = -109792586574295511LL;
	int8_t x420 = INT8_MAX;
	int32_t t99 = -18952188;

	t99 = (x417+((x418<=x419)%x420));

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

