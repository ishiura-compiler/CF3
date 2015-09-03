#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
static volatile int32_t x5 = INT32_MAX;
uint32_t x11 = 6884912U;
uint32_t x13 = UINT32_MAX;
int64_t x14 = INT64_MIN;
uint32_t t3 = 5612U;
volatile int32_t x26 = -395638;
uint64_t x27 = UINT64_MAX;
int32_t t6 = -2216821;
int8_t x43 = -1;
static volatile int16_t x44 = INT16_MAX;
volatile int64_t t9 = 339932487650432LL;
int16_t x46 = INT16_MAX;
int64_t x47 = 14289431LL;
uint64_t t10 = 223341144211025208LLU;
uint32_t x58 = 24563630U;
static uint64_t x69 = 958561810LLU;
int16_t x70 = INT16_MIN;
int8_t x72 = INT8_MIN;
uint64_t t15 = 48391935555LLU;
uint32_t x80 = 160276U;
int64_t x84 = -3LL;
int64_t t18 = -9472469402LL;
int32_t t19 = 433;
static volatile uint32_t x89 = UINT32_MAX;
int64_t x90 = INT64_MIN;
volatile int8_t x95 = INT8_MIN;
int8_t x113 = -6;
int16_t x125 = INT16_MAX;
int64_t x130 = -1LL;
static int16_t x131 = INT16_MIN;
volatile uint64_t t30 = 140941831829LLU;
int64_t x137 = 4606564036453359LL;
int64_t x142 = -1LL;
volatile int16_t x147 = INT16_MIN;
static uint64_t t33 = 696LLU;
static uint8_t x153 = UINT8_MAX;
static int8_t x156 = INT8_MAX;
int64_t x166 = -1LL;
int16_t x167 = INT16_MAX;
volatile uint8_t x178 = 1U;
volatile int8_t x179 = 5;
int16_t x180 = INT16_MAX;
int16_t x187 = INT16_MIN;
static int16_t x201 = INT16_MIN;
uint32_t t45 = 0U;
int16_t x219 = -1;
uint8_t x220 = 0U;
int32_t t49 = 341033527;
static int32_t x226 = 1;
int16_t x228 = INT16_MIN;
int64_t t50 = 7214677LL;
volatile int16_t x236 = 1284;
volatile uint32_t t53 = 0U;
volatile int64_t x251 = 13674400LL;
volatile int32_t x281 = 37;
static int32_t t61 = 20512464;
static int8_t x287 = 0;
static uint64_t t62 = 0LLU;
int32_t x292 = -1;
volatile int16_t x299 = INT16_MAX;
volatile int64_t x304 = INT64_MIN;
static int8_t x311 = INT8_MIN;
int8_t x318 = -1;
uint32_t x324 = 43U;
int32_t x326 = 1197;
uint8_t x328 = 3U;
static int32_t x331 = -1;
int8_t x332 = INT8_MAX;
static int16_t x342 = 1174;
volatile uint64_t x348 = 40LLU;
static int64_t x362 = -1LL;
volatile uint64_t t77 = 14344783030658LLU;
volatile int32_t x375 = INT32_MAX;
static int16_t x378 = 80;
static int32_t x380 = INT32_MIN;
volatile uint32_t t81 = 11811029U;
volatile int16_t x381 = INT16_MAX;
static int32_t x383 = INT32_MIN;
uint32_t x389 = UINT32_MAX;
static uint32_t x390 = 364U;
uint8_t x391 = UINT8_MAX;
uint32_t t84 = 618755548U;
uint16_t x399 = UINT16_MAX;
int16_t x404 = -17;
int64_t t88 = 59237934864187LL;
uint16_t x424 = 10107U;
uint32_t t90 = 3U;
volatile int64_t t94 = -232LL;
volatile uint32_t x447 = UINT32_MAX;
static volatile uint16_t x457 = 4U;
uint64_t x465 = 85968625940483931LLU;


void f0(void) {
	volatile uint32_t x1 = 65719U;
	volatile uint8_t x2 = 0U;
	volatile uint32_t x4 = 845812249U;
	static uint32_t t0 = 5226U;

	t0 = ((x1-(x2<=x3))+x4);

	if (t0 != 845877968U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = 0;
	volatile int64_t x7 = -1LL;
	uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t1 = 20042909084700703LLU;

	t1 = ((x5-(x6<=x7))+x8);

	if (t1 != 2147483646LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint32_t x10 = UINT32_MAX;
	uint8_t x12 = 31U;
	uint64_t t2 = 21885009267353531LLU;

	t2 = ((x9-(x10<=x11))+x12);

	if (t2 != 30LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = -7;
	uint8_t x16 = 3U;

	t3 = ((x13-(x14<=x15))+x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 73298LL;
	static int64_t x18 = 28368567LL;
	uint32_t x19 = 278U;
	static int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 479752681LL;

	t4 = ((x17-(x18<=x19))+x20);

	if (t4 != 40530LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -178469;
	uint16_t x28 = 3U;
	int32_t t5 = -3;

	t5 = ((x25-(x26<=x27))+x28);

	if (t5 != -178467) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 4;
	int64_t x30 = -221402977917464515LL;
	static uint64_t x31 = UINT64_MAX;
	uint16_t x32 = 1036U;

	t6 = ((x29-(x30<=x31))+x32);

	if (t6 != 1039) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -1;
	int16_t x34 = 10732;
	volatile int32_t x35 = -409947662;
	int16_t x36 = -1;
	volatile int32_t t7 = -103613599;

	t7 = ((x33-(x34<=x35))+x36);

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 10421567406LL;
	int32_t x38 = INT32_MAX;
	int16_t x39 = INT16_MIN;
	static int64_t x40 = -1LL;
	static int64_t t8 = -19LL;

	t8 = ((x37-(x38<=x39))+x40);

	if (t8 != 10421567405LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 49264076256506541LL;
	volatile int8_t x42 = INT8_MAX;

	t9 = ((x41-(x42<=x43))+x44);

	if (t9 != 49264076256539308LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 30619765056252231LLU;
	volatile uint64_t x48 = 102740158680LLU;

	t10 = ((x45-(x46<=x47))+x48);

	if (t10 != 30619867796410910LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = 1;
	int64_t x51 = INT64_MIN;
	int16_t x52 = 0;
	static int32_t t11 = INT32_MIN;

	t11 = ((x49-(x50<=x51))+x52);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t12 = 6;

	t12 = ((x57-(x58<=x59))+x60);

	if (t12 != -256) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = 0;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = 3;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = ((x61-(x62<=x63))+x64);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x65 = -1;
	volatile uint16_t x66 = 3U;
	uint64_t x67 = 110952LLU;
	int64_t x68 = -1LL;
	volatile int64_t t14 = 25155351287288852LL;

	t14 = ((x65-(x66<=x67))+x68);

	if (t14 != -3LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x71 = INT32_MIN;

	t15 = ((x69-(x70<=x71))+x72);

	if (t15 != 958561682LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = 702454934LL;
	int16_t x76 = -1;
	volatile int32_t t16 = 2347;

	t16 = ((x73-(x74<=x75))+x76);

	if (t16 != -32770) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -1LL;
	int16_t x78 = -1;
	uint64_t x79 = 1683501348965226LLU;
	volatile int64_t t17 = 820153904273111LL;

	t17 = ((x77-(x78<=x79))+x80);

	if (t17 != 160275LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = INT64_MAX;
	volatile int16_t x82 = INT16_MAX;
	uint16_t x83 = 1U;

	t18 = ((x81-(x82<=x83))+x84);

	if (t18 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MAX;
	int16_t x87 = -706;
	int32_t x88 = INT32_MIN;

	t19 = ((x85-(x86<=x87))+x88);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x91 = 270948183090647568LL;
	static int16_t x92 = INT16_MIN;
	uint32_t t20 = 382430U;

	t20 = ((x89-(x90<=x91))+x92);

	if (t20 != 4294934526U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	static volatile int32_t x94 = 122322;
	int16_t x96 = INT16_MIN;
	volatile int32_t t21 = 215631896;

	t21 = ((x93-(x94<=x95))+x96);

	if (t21 != -32769) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = -59;
	uint16_t x99 = UINT16_MAX;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t22 = 6;

	t22 = ((x97-(x98<=x99))+x100);

	if (t22 != 33021) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = 14LL;
	int16_t x102 = -7;
	int8_t x103 = -28;
	static int32_t x104 = INT32_MIN;
	volatile int64_t t23 = -622LL;

	t23 = ((x101-(x102<=x103))+x104);

	if (t23 != -2147483634LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	uint8_t x106 = 3U;
	int16_t x107 = INT16_MIN;
	static volatile uint16_t x108 = 6U;
	volatile int32_t t24 = -507;

	t24 = ((x105-(x106<=x107))+x108);

	if (t24 != -32762) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 3008224621057616LLU;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t25 = 546152307595LLU;

	t25 = ((x109-(x110<=x111))+x112);

	if (t25 != 3008224621057488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x114 = INT32_MAX;
	uint16_t x115 = 2866U;
	int64_t x116 = INT64_MAX;
	int64_t t26 = 15070672532LL;

	t26 = ((x113-(x114<=x115))+x116);

	if (t26 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = INT8_MAX;
	int64_t x122 = -1LL;
	volatile int64_t x123 = INT64_MIN;
	uint64_t x124 = 34975691010235618LLU;
	uint64_t t27 = 31LLU;

	t27 = ((x121-(x122<=x123))+x124);

	if (t27 != 34975691010235745LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x126 = -33;
	static int64_t x127 = 1908306LL;
	volatile int8_t x128 = INT8_MAX;
	volatile int32_t t28 = 90135570;

	t28 = ((x125-(x126<=x127))+x128);

	if (t28 != 32893) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MAX;
	uint64_t x132 = 11097541993LLU;
	uint64_t t29 = 199741158637427332LLU;

	t29 = ((x129-(x130<=x131))+x132);

	if (t29 != 13245025640LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 6U;
	static int16_t x134 = 1;
	int16_t x135 = -18;
	uint64_t x136 = UINT64_MAX;

	t30 = ((x133-(x134<=x135))+x136);

	if (t30 != 5LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x138 = 1639489439LLU;
	static int32_t x139 = INT32_MIN;
	uint8_t x140 = 0U;
	int64_t t31 = 3256922LL;

	t31 = ((x137-(x138<=x139))+x140);

	if (t31 != 4606564036453358LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 10383;
	static volatile int32_t x143 = 518067;
	int16_t x144 = -1;
	static volatile int32_t t32 = -5;

	t32 = ((x141-(x142<=x143))+x144);

	if (t32 != 10381) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 231883LLU;
	int16_t x146 = 220;
	volatile int32_t x148 = INT32_MAX;

	t33 = ((x145-(x146<=x147))+x148);

	if (t33 != 2147715530LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 0U;
	static uint32_t x150 = 201667850U;
	volatile int8_t x151 = INT8_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t34 = -27843002;

	t34 = ((x149-(x150<=x151))+x152);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x154 = 22U;
	uint8_t x155 = 26U;
	volatile int32_t t35 = 81214;

	t35 = ((x153-(x154<=x155))+x156);

	if (t35 != 381) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1LL;
	int16_t x158 = 6;
	volatile int64_t x159 = INT64_MAX;
	static uint32_t x160 = 1062082U;
	int64_t t36 = -527785029321942LL;

	t36 = ((x157-(x158<=x159))+x160);

	if (t36 != 1062080LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = 3;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	uint32_t t37 = 1536U;

	t37 = ((x161-(x162<=x163))+x164);

	if (t37 != 4294967167U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x165 = 1;
	static int16_t x168 = 11298;
	int32_t t38 = -183454;

	t38 = ((x165-(x166<=x167))+x168);

	if (t38 != 11298) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 956133205U;
	int16_t x176 = INT16_MAX;
	volatile int32_t t39 = 5879;

	t39 = ((x173-(x174<=x175))+x176);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -577;
	int32_t t40 = -16081;

	t40 = ((x177-(x178<=x179))+x180);

	if (t40 != 32189) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MAX;
	volatile uint16_t x186 = 870U;
	int32_t x188 = -1;
	int32_t t41 = 26741291;

	t41 = ((x185-(x186<=x187))+x188);

	if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x189 = 1398936U;
	static int16_t x190 = INT16_MAX;
	static volatile int64_t x191 = -1LL;
	static int64_t x192 = -11734934631933062LL;
	volatile int64_t t42 = 10468462125097889LL;

	t42 = ((x189-(x190<=x191))+x192);

	if (t42 != -11734934630534126LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = -87;
	static uint32_t x195 = 7U;
	static volatile int8_t x196 = INT8_MIN;
	static volatile int32_t t43 = -7;

	t43 = ((x193-(x194<=x195))+x196);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x202 = -1;
	int64_t x203 = INT64_MIN;
	int8_t x204 = -1;
	volatile int32_t t44 = -994;

	t44 = ((x201-(x202<=x203))+x204);

	if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = 7U;
	int32_t x206 = -32;
	int32_t x207 = 26;
	volatile int16_t x208 = INT16_MAX;

	t45 = ((x205-(x206<=x207))+x208);

	if (t45 != 32773U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x209 = -2383;
	int64_t x210 = -1LL;
	int8_t x211 = -2;
	uint8_t x212 = 12U;
	volatile int32_t t46 = -1;

	t46 = ((x209-(x210<=x211))+x212);

	if (t46 != -2371) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = -1LL;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = 493476945U;
	volatile uint32_t t47 = 3813607U;

	t47 = ((x213-(x214<=x215))+x216);

	if (t47 != 493476816U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x217 = 83801092U;
	int8_t x218 = INT8_MAX;
	volatile uint32_t t48 = 199838U;

	t48 = ((x217-(x218<=x219))+x220);

	if (t48 != 83801092U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile int8_t x224 = -1;

	t49 = ((x221-(x222<=x223))+x224);

	if (t49 != -130) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -31971LL;
	uint32_t x227 = 328U;

	t50 = ((x225-(x226<=x227))+x228);

	if (t50 != -64740LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x229 = 10114U;
	int8_t x230 = -3;
	int16_t x231 = -1;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t51 = 2072450U;

	t51 = ((x229-(x230<=x231))+x232);

	if (t51 != 4294944641U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = -1;
	volatile int8_t x234 = -1;
	uint32_t x235 = 2778U;
	static volatile int32_t t52 = -12069;

	t52 = ((x233-(x234<=x235))+x236);

	if (t52 != 1283) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = -1;
	static uint16_t x238 = 3U;
	uint8_t x239 = 8U;
	volatile uint32_t x240 = 3U;

	t53 = ((x237-(x238<=x239))+x240);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 94U;
	int16_t x242 = 1870;
	int64_t x243 = 1518141LL;
	static int64_t x244 = -244897LL;
	static volatile int64_t t54 = -26466412136223LL;

	t54 = ((x241-(x242<=x243))+x244);

	if (t54 != -244804LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -1;
	uint64_t x246 = 387381829724LLU;
	int16_t x247 = -1;
	static volatile uint8_t x248 = UINT8_MAX;
	static int32_t t55 = 94;

	t55 = ((x245-(x246<=x247))+x248);

	if (t55 != 253) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 1U;
	volatile int32_t x250 = -1;
	uint32_t x252 = 67116U;
	static volatile uint32_t t56 = 218255U;

	t56 = ((x249-(x250<=x251))+x252);

	if (t56 != 67116U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x257 = INT64_MIN;
	uint32_t x258 = UINT32_MAX;
	volatile int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;
	volatile int64_t t57 = 42702816567LL;

	t57 = ((x257-(x258<=x259))+x260);

	if (t57 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = -1LL;
	int16_t x266 = 16201;
	int8_t x267 = -59;
	volatile int16_t x268 = INT16_MAX;
	static int64_t t58 = 1LL;

	t58 = ((x265-(x266<=x267))+x268);

	if (t58 != 32766LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	volatile int32_t x271 = INT32_MIN;
	volatile int32_t x272 = -582;
	int32_t t59 = -49;

	t59 = ((x269-(x270<=x271))+x272);

	if (t59 != 64953) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = 64815U;
	uint8_t x274 = 5U;
	int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = 98376613086LLU;
	volatile uint64_t t60 = 11329076988621501LLU;

	t60 = ((x273-(x274<=x275))+x276);

	if (t60 != 98376677901LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = UINT8_MAX;

	t61 = ((x281-(x282<=x283))+x284);

	if (t61 != 291) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = -1;
	static int8_t x286 = -1;
	uint64_t x288 = 0LLU;

	t62 = ((x285-(x286<=x287))+x288);

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x289 = 1U;
	uint32_t x290 = 22797U;
	int16_t x291 = 14320;
	volatile int32_t t63 = -1992;

	t63 = ((x289-(x290<=x291))+x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = 478970996387245327LL;
	static volatile int16_t x298 = INT16_MIN;
	static uint64_t x300 = 51766883LLU;
	static uint64_t t64 = 793240677891772LLU;

	t64 = ((x297-(x298<=x299))+x300);

	if (t64 != 478970996439012209LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x301 = 12;
	uint64_t x302 = 253255042078604LLU;
	int8_t x303 = INT8_MIN;
	int64_t t65 = -107175140870638LL;

	t65 = ((x301-(x302<=x303))+x304);

	if (t65 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MAX;
	uint64_t x310 = 129LLU;
	uint32_t x312 = 49U;
	static uint32_t t66 = 220171875U;

	t66 = ((x309-(x310<=x311))+x312);

	if (t66 != 175U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 563979098LLU;
	int8_t x319 = INT8_MIN;
	static uint32_t x320 = 742U;
	uint64_t t67 = 2531967377944653521LLU;

	t67 = ((x317-(x318<=x319))+x320);

	if (t67 != 563979840LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x321 = 0U;
	volatile int64_t x322 = INT64_MAX;
	int16_t x323 = -240;
	volatile uint32_t t68 = 7U;

	t68 = ((x321-(x322<=x323))+x324);

	if (t68 != 43U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = 3281530LL;
	int8_t x327 = INT8_MIN;
	volatile int64_t t69 = -14LL;

	t69 = ((x325-(x326<=x327))+x328);

	if (t69 != 3281533LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x329 = -1;
	int16_t x330 = -1;
	int32_t t70 = 770988;

	t70 = ((x329-(x330<=x331))+x332);

	if (t70 != 125) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = 744503925042857820LLU;
	volatile int8_t x334 = 1;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = 617U;
	uint64_t t71 = 15845736867LLU;

	t71 = ((x333-(x334<=x335))+x336);

	if (t71 != 744503925042858436LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x341 = 137605LLU;
	volatile uint16_t x343 = 87U;
	uint64_t x344 = 257492896LLU;
	static uint64_t t72 = 128440171761958LLU;

	t72 = ((x341-(x342<=x343))+x344);

	if (t72 != 257630501LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = 4;
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 1U;
	volatile uint64_t t73 = 1799741LLU;

	t73 = ((x345-(x346<=x347))+x348);

	if (t73 != 44LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = 96U;
	uint16_t x350 = 385U;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = 9;
	volatile int32_t t74 = 26;

	t74 = ((x349-(x350<=x351))+x352);

	if (t74 != 104) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x353 = 5326U;
	int64_t x354 = -9137LL;
	volatile int16_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	static uint64_t t75 = 895466918619LLU;

	t75 = ((x353-(x354<=x355))+x356);

	if (t75 != 5324LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = INT64_MIN;
	int64_t x359 = 8179621LL;
	static int16_t x360 = INT16_MIN;
	static volatile int32_t t76 = -870;

	t76 = ((x357-(x358<=x359))+x360);

	if (t76 != 2147450878) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = UINT64_MAX;
	static int32_t x363 = -45685467;
	static int8_t x364 = INT8_MIN;

	t77 = ((x361-(x362<=x363))+x364);

	if (t77 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x365 = 31U;
	int64_t x366 = 949128522126LL;
	static int8_t x367 = -1;
	int64_t x368 = 4092661389785483LL;
	int64_t t78 = -14579774208071584LL;

	t78 = ((x365-(x366<=x367))+x368);

	if (t78 != 4092661389785514LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x369 = 32;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	volatile int8_t x372 = 1;
	int32_t t79 = -5714;

	t79 = ((x369-(x370<=x371))+x372);

	if (t79 != 32) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x373 = 1U;
	uint8_t x374 = UINT8_MAX;
	volatile int32_t x376 = INT32_MIN;
	int32_t t80 = INT32_MIN;

	t80 = ((x373-(x374<=x375))+x376);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x377 = UINT32_MAX;
	static uint16_t x379 = UINT16_MAX;

	t81 = ((x377-(x378<=x379))+x380);

	if (t81 != 2147483646U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x382 = 0U;
	static volatile int8_t x384 = 27;
	int32_t t82 = 614878545;

	t82 = ((x381-(x382<=x383))+x384);

	if (t82 != 32794) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	int16_t x387 = -2804;
	volatile uint16_t x388 = 104U;
	volatile int32_t t83 = -2463984;

	t83 = ((x385-(x386<=x387))+x388);

	if (t83 != 65639) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x392 = INT16_MIN;

	t84 = ((x389-(x390<=x391))+x392);

	if (t84 != 4294934527U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = 204835446;
	static int64_t x394 = 733331813746143LL;
	uint16_t x395 = 1U;
	uint16_t x396 = 126U;
	int32_t t85 = 243814;

	t85 = ((x393-(x394<=x395))+x396);

	if (t85 != 204835572) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x397 = UINT16_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x400 = 1;
	volatile int32_t t86 = 1577;

	t86 = ((x397-(x398<=x399))+x400);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = 11698693;
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	static volatile int32_t t87 = -205372;

	t87 = ((x401-(x402<=x403))+x404);

	if (t87 != 11698675) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = -1;
	volatile uint8_t x406 = UINT8_MAX;
	int8_t x407 = -3;
	int64_t x408 = INT64_MAX;

	t88 = ((x405-(x406<=x407))+x408);

	if (t88 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	int16_t x415 = 24;
	int16_t x416 = -407;
	uint32_t t89 = 2U;

	t89 = ((x413-(x414<=x415))+x416);

	if (t89 != 4294966887U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 246U;
	uint32_t x422 = 819U;
	int32_t x423 = 426557;

	t90 = ((x421-(x422<=x423))+x424);

	if (t90 != 10352U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = -179399;
	int32_t x426 = -2080;
	uint64_t x427 = UINT64_MAX;
	static uint64_t x428 = 1LLU;
	volatile uint64_t t91 = 6LLU;

	t91 = ((x425-(x426<=x427))+x428);

	if (t91 != 18446744073709372217LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x429 = INT16_MIN;
	volatile int32_t x430 = INT32_MIN;
	int8_t x431 = 38;
	int8_t x432 = -1;
	static int32_t t92 = 12457;

	t92 = ((x429-(x430<=x431))+x432);

	if (t92 != -32770) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x433 = 17447LLU;
	volatile int8_t x434 = 0;
	uint64_t x435 = UINT64_MAX;
	uint64_t x436 = UINT64_MAX;
	uint64_t t93 = 9010LLU;

	t93 = ((x433-(x434<=x435))+x436);

	if (t93 != 17445LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x441 = 52735837370LL;
	static volatile uint8_t x442 = 3U;
	int16_t x443 = -23;
	int64_t x444 = INT64_MIN;

	t94 = ((x441-(x442<=x443))+x444);

	if (t94 != -9223371984118938438LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x445 = 1U;
	int16_t x446 = INT16_MAX;
	static int64_t x448 = -1LL;
	static volatile int64_t t95 = -292703060LL;

	t95 = ((x445-(x446<=x447))+x448);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x449 = 212;
	int8_t x450 = INT8_MAX;
	static volatile int16_t x451 = -3612;
	int32_t x452 = -199618274;
	volatile int32_t t96 = 111138;

	t96 = ((x449-(x450<=x451))+x452);

	if (t96 != -199618062) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x458 = UINT32_MAX;
	int8_t x459 = -2;
	volatile int64_t x460 = -1LL;
	int64_t t97 = -1782309LL;

	t97 = ((x457-(x458<=x459))+x460);

	if (t97 != 3LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x461 = 936;
	int64_t x462 = INT64_MIN;
	volatile int64_t x463 = -3380434LL;
	uint32_t x464 = UINT32_MAX;
	uint32_t t98 = 21480093U;

	t98 = ((x461-(x462<=x463))+x464);

	if (t98 != 934U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x466 = INT8_MAX;
	int8_t x467 = -3;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t99 = 11709LLU;

	t99 = ((x465-(x466<=x467))+x468);

	if (t99 != 85968625940483930LLU) { NG(); } else { ; }
	
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

