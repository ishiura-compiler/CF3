#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
static int16_t x5 = -12732;
int32_t x6 = -7190048;
static int64_t x8 = -20475645178347LL;
static int32_t x9 = INT32_MIN;
int32_t x20 = INT32_MAX;
volatile int32_t t4 = -162136096;
int64_t x22 = 2243775918963LL;
static int16_t x23 = 1;
int8_t x38 = INT8_MAX;
int8_t x40 = 11;
static uint16_t x41 = UINT16_MAX;
int32_t x43 = INT32_MIN;
static uint16_t x46 = UINT16_MAX;
volatile int64_t t11 = -437618918LL;
static uint8_t x53 = 6U;
int32_t x55 = INT32_MIN;
uint8_t x59 = UINT8_MAX;
static uint64_t x60 = UINT64_MAX;
uint16_t x62 = 99U;
int64_t x72 = -1LL;
static int32_t t17 = -2877;
int8_t x93 = INT8_MAX;
uint8_t x99 = 3U;
int8_t x100 = INT8_MIN;
uint64_t x102 = UINT64_MAX;
uint16_t x104 = 2U;
static int8_t x113 = INT8_MIN;
uint64_t t26 = 10278428563LLU;
uint8_t x117 = UINT8_MAX;
uint8_t x121 = 16U;
int64_t x124 = INT64_MIN;
int8_t x128 = 51;
uint16_t x147 = 17U;
int32_t x150 = -1;
volatile int16_t x156 = INT16_MIN;
volatile uint8_t x157 = 5U;
int16_t x160 = INT16_MAX;
volatile uint8_t x164 = 1U;
volatile int64_t t40 = 306641LL;
static int32_t x188 = INT32_MIN;
uint64_t x193 = 7574286861117150LLU;
int8_t x203 = -15;
int64_t t46 = 826656585393274LL;
uint16_t x216 = 5448U;
volatile int64_t t49 = -6731448LL;
int64_t x217 = 203574724082LL;
volatile int8_t x225 = 1;
uint8_t x227 = UINT8_MAX;
static int32_t x229 = 860351395;
uint8_t x230 = UINT8_MAX;
volatile int64_t t53 = 369304LL;
int32_t x234 = INT32_MAX;
static int16_t x239 = 3909;
uint32_t x241 = 42648338U;
int8_t x244 = INT8_MAX;
uint8_t x247 = 15U;
uint32_t x254 = UINT32_MAX;
int64_t x257 = 96897577006LL;
uint16_t x258 = 291U;
uint32_t x263 = 765141023U;
uint32_t x267 = 5U;
uint64_t x270 = 547398663369LLU;
int64_t x279 = INT64_MAX;
int32_t x287 = -2;
static volatile uint64_t t67 = 895901441158086LLU;
volatile int16_t x291 = -1;
uint64_t x292 = 1920273380LLU;
int32_t x295 = INT32_MIN;
int16_t x296 = -1;
volatile int16_t x297 = 93;
int64_t x299 = 2386390957LL;
int32_t t70 = 119697;
int8_t x309 = -4;
static uint32_t x314 = UINT32_MAX;
static int64_t x319 = INT64_MAX;
volatile int32_t t75 = 920;
static volatile int8_t x324 = 5;
static int16_t x325 = INT16_MIN;
int8_t x330 = 3;
uint16_t x332 = 2169U;
static volatile uint64_t t80 = 42278LLU;
int32_t x354 = -966;
int8_t x355 = 0;
volatile uint8_t x358 = 0U;
uint32_t x365 = UINT32_MAX;
int16_t x366 = INT16_MIN;
int8_t x367 = INT8_MIN;
static uint8_t x370 = 1U;
int8_t x376 = INT8_MIN;
uint8_t x380 = 1U;
volatile int8_t x381 = INT8_MIN;
int32_t t91 = -442001566;
static int64_t x387 = -1LL;
static int32_t x388 = -511775146;
static uint8_t x400 = UINT8_MAX;
static volatile int32_t t95 = 105998;
int16_t x410 = -1;
static int16_t x412 = -1;


void f0(void) {
	uint16_t x2 = 25U;
	uint32_t x3 = 146U;
	uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 18467095984LLU;

	t0 = ((x1+(x2<x3))%x4);

	if (t0 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = -1;
	static volatile int64_t t1 = 592183LL;

	t1 = ((x5+(x6<x7))%x8);

	if (t1 != -12731LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -1;
	static int32_t x11 = -3513423;
	int8_t x12 = 1;
	static int32_t t2 = 2000240;

	t2 = ((x9+(x10<x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	static int16_t x14 = 8105;
	uint16_t x15 = 3727U;
	volatile int16_t x16 = 1;
	volatile int64_t t3 = -31769221LL;

	t3 = ((x13+(x14<x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;

	t4 = ((x17+(x18<x19))%x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 2LLU;
	int32_t x24 = 532672;
	uint64_t t5 = 1035584433368139729LLU;

	t5 = ((x21+(x22<x23))%x24);

	if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 151460406512502486LLU;
	uint32_t x26 = 19301372U;
	int16_t x27 = INT16_MAX;
	volatile int32_t x28 = -12;
	volatile uint64_t t6 = 20515684LLU;

	t6 = ((x25+(x26<x27))%x28);

	if (t6 != 151460406512502486LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 3U;
	int16_t x34 = INT16_MAX;
	int16_t x35 = 0;
	uint8_t x36 = 91U;
	int32_t t7 = 1556;

	t7 = ((x33+(x34<x35))%x36);

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	int8_t x39 = INT8_MIN;
	static int32_t t8 = 5;

	t8 = ((x37+(x38<x39))%x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = 11566U;
	static volatile uint64_t x44 = 8LLU;
	uint64_t t9 = 234171951517689LLU;

	t9 = ((x41+(x42<x43))%x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = -1;
	uint32_t x47 = 120U;
	static uint32_t x48 = 1225709761U;
	uint32_t t10 = 654184U;

	t10 = ((x45+(x46<x47))%x48);

	if (t10 != 617838012U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile uint8_t x50 = UINT8_MAX;
	static uint8_t x51 = 1U;
	volatile int64_t x52 = 3141145879LL;

	t11 = ((x49+(x50<x51))%x52);

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1;
	int64_t x56 = 1539LL;
	volatile int64_t t12 = -8803250LL;

	t12 = ((x53+(x54<x55))%x56);

	if (t12 != 6LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = 2;
	uint64_t t13 = 129281LLU;

	t13 = ((x57+(x58<x59))%x60);

	if (t13 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	static int32_t t14 = -842;

	t14 = ((x61+(x62<x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -30920LL;
	int32_t x66 = INT32_MIN;
	int32_t x67 = 39707177;
	volatile int64_t x68 = INT64_MAX;
	int64_t t15 = -3726791959742LL;

	t15 = ((x65+(x66<x67))%x68);

	if (t15 != -30919LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -271990458LL;
	static int8_t x70 = -1;
	static volatile int8_t x71 = -39;
	int64_t t16 = -1LL;

	t16 = ((x69+(x70<x71))%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = 2;
	uint32_t x75 = UINT32_MAX;
	static volatile int32_t x76 = INT32_MIN;

	t17 = ((x73+(x74<x75))%x76);

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	uint8_t x79 = UINT8_MAX;
	uint8_t x80 = 6U;
	volatile int32_t t18 = -457203715;

	t18 = ((x77+(x78<x79))%x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	uint32_t x82 = UINT32_MAX;
	volatile uint8_t x83 = 44U;
	static uint64_t x84 = 31826LLU;
	static uint64_t t19 = 302652164799882LLU;

	t19 = ((x81+(x82<x83))%x84);

	if (t19 != 9182LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = UINT8_MAX;
	static volatile int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = 896981LLU;
	volatile uint64_t t20 = 420LLU;

	t20 = ((x85+(x86<x87))%x88);

	if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = 12;
	uint16_t x90 = 23786U;
	volatile uint64_t x91 = 2822950310675LLU;
	static volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 445045672577LLU;

	t21 = ((x89+(x90<x91))%x92);

	if (t21 != 13LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = -1;
	volatile int8_t x95 = INT8_MAX;
	uint8_t x96 = 14U;
	volatile int32_t t22 = 74;

	t22 = ((x93+(x94<x95))%x96);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	int16_t x98 = INT16_MIN;
	int64_t t23 = 14922121378516LL;

	t23 = ((x97+(x98<x99))%x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	int16_t x103 = INT16_MAX;
	int32_t t24 = -249775;

	t24 = ((x101+(x102<x103))%x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x109 = -36;
	volatile int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	static int8_t x112 = INT8_MIN;
	int32_t t25 = -232393593;

	t25 = ((x109+(x110<x111))%x112);

	if (t25 != -35) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x114 = INT32_MAX;
	uint16_t x115 = 25953U;
	static uint64_t x116 = 1646435969118934LLU;

	t26 = ((x113+(x114<x115))%x116);

	if (t26 != 75475701014952LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = 10;
	uint16_t x119 = 709U;
	int16_t x120 = -1;
	volatile int32_t t27 = -1685;

	t27 = ((x117+(x118<x119))%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = 6099;
	volatile uint64_t x123 = 62930951LLU;
	volatile int64_t t28 = -1122725554918232LL;

	t28 = ((x121+(x122<x123))%x124);

	if (t28 != 17LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 1749880U;
	int64_t x126 = INT64_MIN;
	static volatile int16_t x127 = INT16_MIN;
	volatile uint32_t t29 = 12863030U;

	t29 = ((x125+(x126<x127))%x128);

	if (t29 != 20U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 139LLU;
	static int16_t x131 = -1;
	static int64_t x132 = INT64_MAX;
	static volatile int64_t t30 = -3412LL;

	t30 = ((x129+(x130<x131))%x132);

	if (t30 != 256LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = UINT32_MAX;
	uint64_t x134 = 220765LLU;
	volatile int32_t x135 = INT32_MAX;
	volatile uint64_t x136 = 264002811813480157LLU;
	static uint64_t t31 = 233524827555422688LLU;

	t31 = ((x133+(x134<x135))%x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	volatile int16_t x142 = INT16_MIN;
	int32_t x143 = -1;
	uint32_t x144 = 7048435U;
	volatile uint32_t t32 = 10698U;

	t32 = ((x141+(x142<x143))%x144);

	if (t32 != 2470254U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	uint64_t x146 = 1411536843208722LLU;
	static int64_t x148 = -1LL;
	volatile int64_t t33 = -108020303340363431LL;

	t33 = ((x145+(x146<x147))%x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	static uint16_t x151 = 0U;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t34 = -1999618;

	t34 = ((x149+(x150<x151))%x152);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = -1;
	static volatile int64_t x154 = -78469LL;
	int16_t x155 = -6;
	volatile int32_t t35 = -16114718;

	t35 = ((x153+(x154<x155))%x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x158 = INT8_MAX;
	int32_t x159 = INT32_MIN;
	volatile int32_t t36 = -18718387;

	t36 = ((x157+(x158<x159))%x160);

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = -10275575492430605LL;
	int8_t x163 = INT8_MAX;
	volatile int64_t t37 = -15735LL;

	t37 = ((x161+(x162<x163))%x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MIN;
	static volatile int32_t x167 = INT32_MIN;
	uint64_t x168 = 102LLU;
	volatile uint64_t t38 = 9792634LLU;

	t38 = ((x165+(x166<x167))%x168);

	if (t38 != 26LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	volatile int8_t x170 = -1;
	volatile int8_t x171 = -6;
	volatile uint32_t x172 = 384649527U;
	uint32_t t39 = 12U;

	t39 = ((x169+(x170<x171))%x172);

	if (t39 != 63822371U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = -174923554;
	int8_t x174 = INT8_MIN;
	uint16_t x175 = 0U;
	int64_t x176 = 1433LL;

	t40 = ((x173+(x174<x175))%x176);

	if (t40 != -109LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 276LLU;
	uint64_t x178 = 471087936727820228LLU;
	volatile int8_t x179 = INT8_MIN;
	volatile int64_t x180 = INT64_MIN;
	uint64_t t41 = 107594390372520LLU;

	t41 = ((x177+(x178<x179))%x180);

	if (t41 != 277LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	static uint16_t x183 = UINT16_MAX;
	int8_t x184 = INT8_MAX;
	volatile int32_t t42 = 142741;

	t42 = ((x181+(x182<x183))%x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = INT64_MAX;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	static volatile int64_t t43 = -414920LL;

	t43 = ((x185+(x186<x187))%x188);

	if (t43 != 2147483647LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x194 = 87951367U;
	int64_t x195 = -1962LL;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t44 = 392520160321709634LLU;

	t44 = ((x193+(x194<x195))%x196);

	if (t44 != 7574286861117150LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = UINT16_MAX;
	uint16_t x198 = 59U;
	volatile uint16_t x199 = 1U;
	uint64_t x200 = 281563578674461883LLU;
	volatile uint64_t t45 = 2367813LLU;

	t45 = ((x197+(x198<x199))%x200);

	if (t45 != 65535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = -455351998137LL;
	static volatile int32_t x202 = INT32_MIN;
	int64_t x204 = INT64_MIN;

	t46 = ((x201+(x202<x203))%x204);

	if (t46 != -455351998136LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = INT64_MIN;
	int64_t t47 = 1909484675LL;

	t47 = ((x205+(x206<x207))%x208);

	if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 993367;
	int16_t x210 = INT16_MAX;
	volatile int8_t x211 = -1;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t48 = 2210;

	t48 = ((x209+(x210<x211))%x212);

	if (t48 != 142) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x213 = INT64_MIN;
	static int16_t x214 = INT16_MAX;
	uint16_t x215 = 12U;

	t49 = ((x213+(x214<x215))%x216);

	if (t49 != -4592LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x218 = 218;
	int32_t x219 = INT32_MAX;
	int16_t x220 = 12;
	int64_t t50 = -301787401172207106LL;

	t50 = ((x217+(x218<x219))%x220);

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x221 = 102U;
	int64_t x222 = -1LL;
	uint8_t x223 = UINT8_MAX;
	int64_t x224 = INT64_MIN;
	int64_t t51 = 597945020257303584LL;

	t51 = ((x221+(x222<x223))%x224);

	if (t51 != 103LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x226 = UINT64_MAX;
	uint16_t x228 = UINT16_MAX;
	int32_t t52 = 0;

	t52 = ((x225+(x226<x227))%x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x231 = UINT64_MAX;
	static int64_t x232 = INT64_MAX;

	t53 = ((x229+(x230<x231))%x232);

	if (t53 != 860351396LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x233 = 122U;
	static volatile int16_t x235 = INT16_MIN;
	int32_t x236 = 3930625;
	int32_t t54 = 53;

	t54 = ((x233+(x234<x235))%x236);

	if (t54 != 122) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	uint16_t x238 = 1096U;
	uint16_t x240 = 2U;
	static int32_t t55 = 21395915;

	t55 = ((x237+(x238<x239))%x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x242 = -1LL;
	uint8_t x243 = 6U;
	static uint32_t t56 = 301929U;

	t56 = ((x241+(x242<x243))%x244);

	if (t56 != 88U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -1;
	static int64_t x246 = INT64_MIN;
	uint16_t x248 = 11U;
	volatile int32_t t57 = -30;

	t57 = ((x245+(x246<x247))%x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -1;
	volatile uint32_t x250 = 3U;
	static volatile int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t58 = 510;

	t58 = ((x249+(x250<x251))%x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x253 = 16U;
	static int32_t x255 = 7089964;
	volatile int32_t x256 = INT32_MIN;
	int32_t t59 = -1;

	t59 = ((x253+(x254<x255))%x256);

	if (t59 != 16) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x259 = 14U;
	int16_t x260 = INT16_MIN;
	volatile int64_t t60 = 1640287279292990124LL;

	t60 = ((x257+(x258<x259))%x260);

	if (t60 != 12334LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = 1;
	int32_t x262 = INT32_MAX;
	int64_t x264 = -66893179268329218LL;
	volatile int64_t t61 = 111678LL;

	t61 = ((x261+(x262<x263))%x264);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MAX;
	uint64_t x268 = 7404019984113426LLU;
	static uint64_t t62 = 1LLU;

	t62 = ((x265+(x266<x267))%x268);

	if (t62 != 3330293282974682LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 1U;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 207588822LLU;
	uint64_t t63 = 34264135LLU;

	t63 = ((x269+(x270<x271))%x272);

	if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = UINT32_MAX;
	static int32_t x274 = -4928;
	int64_t x275 = -1LL;
	volatile int32_t x276 = -34278981;
	volatile uint32_t t64 = 893U;

	t64 = ((x273+(x274<x275))%x276);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -793886101LL;
	int8_t x278 = -6;
	volatile int8_t x280 = -1;
	static volatile int64_t t65 = -3971451518265LL;

	t65 = ((x277+(x278<x279))%x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = -1;
	int16_t x282 = -1;
	static int8_t x283 = 0;
	int16_t x284 = 99;
	int32_t t66 = 88295;

	t66 = ((x281+(x282<x283))%x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x285 = INT64_MIN;
	static uint16_t x286 = UINT16_MAX;
	uint64_t x288 = 1084407894349443699LLU;

	t67 = ((x285+(x286<x287))%x288);

	if (t67 != 548108882059226216LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x289 = INT16_MAX;
	static uint32_t x290 = UINT32_MAX;
	static uint64_t t68 = 31241LLU;

	t68 = ((x289+(x290<x291))%x292);

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x293 = 1U;
	uint16_t x294 = 1471U;
	static int32_t t69 = 1018962;

	t69 = ((x293+(x294<x295))%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = 0;
	int32_t x300 = -8015795;

	t70 = ((x297+(x298<x299))%x300);

	if (t70 != 94) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	volatile uint64_t x303 = 0LLU;
	int64_t x304 = INT64_MAX;
	volatile int64_t t71 = -16783733386040LL;

	t71 = ((x301+(x302<x303))%x304);

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = -77302;
	static int32_t x306 = 682072518;
	volatile int8_t x307 = INT8_MAX;
	int16_t x308 = -942;
	int32_t t72 = 20;

	t72 = ((x305+(x306<x307))%x308);

	if (t72 != -58) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x310 = -107767600LL;
	int8_t x311 = -1;
	volatile uint32_t x312 = 121U;
	volatile uint32_t t73 = 7498U;

	t73 = ((x309+(x310<x311))%x312);

	if (t73 != 56U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = 36942196;
	volatile int32_t t74 = 0;

	t74 = ((x313+(x314<x315))%x316);

	if (t74 != -4836280) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = 3;
	int64_t x318 = -1LL;
	uint16_t x320 = UINT16_MAX;

	t75 = ((x317+(x318<x319))%x320);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MAX;
	static volatile int8_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	int32_t t76 = -13731;

	t76 = ((x321+(x322<x323))%x324);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x326 = 2984U;
	static int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t77 = -1195550545684LL;

	t77 = ((x325+(x326<x327))%x328);

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -1;
	volatile int32_t x331 = 2;
	static int32_t t78 = 20;

	t78 = ((x329+(x330<x331))%x332);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x333 = -1;
	uint64_t x334 = 1262196295LLU;
	static uint16_t x335 = 34U;
	uint8_t x336 = 48U;
	int32_t t79 = -121920153;

	t79 = ((x333+(x334<x335))%x336);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 1252176LLU;
	uint8_t x338 = 9U;
	static uint8_t x339 = 1U;
	static int32_t x340 = 2;

	t80 = ((x337+(x338<x339))%x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -1;
	int8_t x342 = -30;
	volatile int8_t x343 = INT8_MAX;
	uint8_t x344 = 79U;
	int32_t t81 = 128;

	t81 = ((x341+(x342<x343))%x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 13966510U;
	uint8_t x346 = UINT8_MAX;
	volatile int8_t x347 = INT8_MAX;
	uint32_t x348 = 348949789U;
	volatile uint32_t t82 = 1U;

	t82 = ((x345+(x346<x347))%x348);

	if (t82 != 13966510U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x349 = -1;
	int16_t x350 = -1;
	int16_t x351 = -1;
	uint32_t x352 = 8U;
	uint32_t t83 = 24117U;

	t83 = ((x349+(x350<x351))%x352);

	if (t83 != 7U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 1;
	volatile uint16_t x356 = 9589U;
	int32_t t84 = 4070437;

	t84 = ((x353+(x354<x355))%x356);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x357 = 45743087632978395LLU;
	int64_t x359 = INT64_MAX;
	volatile int16_t x360 = -100;
	uint64_t t85 = 260565929877401315LLU;

	t85 = ((x357+(x358<x359))%x360);

	if (t85 != 45743087632978396LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = 28;
	int16_t x362 = 29;
	volatile int32_t x363 = INT32_MAX;
	int64_t x364 = INT64_MIN;
	static volatile int64_t t86 = 1154564958265654LL;

	t86 = ((x361+(x362<x363))%x364);

	if (t86 != 29LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x368 = 520LLU;
	uint64_t t87 = 4472367LLU;

	t87 = ((x365+(x366<x367))%x368);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x371 = UINT64_MAX;
	uint16_t x372 = 64U;
	int32_t t88 = -105520282;

	t88 = ((x369+(x370<x371))%x372);

	if (t88 != -63) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -1LL;
	volatile int8_t x374 = INT8_MIN;
	uint8_t x375 = 4U;
	int64_t t89 = -19760478079696LL;

	t89 = ((x373+(x374<x375))%x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = UINT32_MAX;
	volatile uint32_t x378 = 45915U;
	int8_t x379 = INT8_MAX;
	uint32_t t90 = 16928340U;

	t90 = ((x377+(x378<x379))%x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x382 = 13;
	static uint16_t x383 = 1U;
	volatile int8_t x384 = -1;

	t91 = ((x381+(x382<x383))%x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = 5052LL;
	volatile int32_t t92 = 688253733;

	t92 = ((x385+(x386<x387))%x388);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x389 = -63381575LL;
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	volatile int64_t x392 = INT64_MAX;
	static volatile int64_t t93 = 82371038459LL;

	t93 = ((x389+(x390<x391))%x392);

	if (t93 != -63381575LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x393 = 21984U;
	volatile int64_t x394 = -1246581LL;
	static int64_t x395 = INT64_MIN;
	volatile int32_t x396 = -1;
	volatile int32_t t94 = 1;

	t94 = ((x393+(x394<x395))%x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = 0U;
	volatile uint8_t x398 = 4U;
	int16_t x399 = -1;

	t95 = ((x397+(x398<x399))%x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = 2U;
	int64_t x402 = INT64_MAX;
	volatile int64_t x403 = -1LL;
	int64_t x404 = -33102806829175020LL;
	static int64_t t96 = -1LL;

	t96 = ((x401+(x402<x403))%x404);

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	volatile int16_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	volatile int64_t t97 = -306375022238LL;

	t97 = ((x405+(x406<x407))%x408);

	if (t97 != -32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = INT16_MAX;
	uint32_t x411 = 28722922U;
	static volatile int32_t t98 = -1426;

	t98 = ((x409+(x410<x411))%x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	static uint32_t x415 = 2613U;
	int32_t x416 = INT32_MIN;
	int32_t t99 = 56130;

	t99 = ((x413+(x414<x415))%x416);

	if (t99 != -1) { NG(); } else { ; }
	
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

