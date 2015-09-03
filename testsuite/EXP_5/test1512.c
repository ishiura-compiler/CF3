#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = INT32_MIN;
int64_t x14 = INT64_MIN;
volatile int64_t x16 = 8370897928LL;
static int16_t x21 = INT16_MAX;
int32_t x25 = INT32_MIN;
int8_t x32 = 3;
uint16_t x46 = 3550U;
static uint16_t x48 = UINT16_MAX;
int64_t t11 = 16184205624LL;
volatile int32_t x55 = INT32_MAX;
int16_t x65 = 177;
volatile uint16_t x66 = 16U;
int32_t x69 = -1;
int32_t x70 = 9218393;
int64_t x78 = -1LL;
uint8_t x80 = 23U;
uint8_t x89 = 26U;
int32_t t21 = 60188402;
int8_t x94 = 1;
int8_t x96 = -1;
static int64_t x98 = -1LL;
uint32_t x105 = 645334691U;
uint32_t x117 = 2U;
static int8_t x130 = -1;
int32_t x136 = INT32_MIN;
static uint32_t x137 = 9120645U;
static int32_t x138 = -1;
int32_t x143 = -783426;
volatile int32_t x144 = INT32_MIN;
static int32_t t33 = 2;
int16_t x145 = INT16_MIN;
static volatile int16_t x148 = INT16_MIN;
volatile int32_t t34 = 606559707;
int64_t x149 = 16414LL;
int8_t x150 = INT8_MIN;
int32_t x152 = 2053;
volatile int16_t x157 = -503;
int16_t x160 = INT16_MIN;
static int32_t t37 = 1;
int64_t t40 = 395020LL;
static int16_t x173 = INT16_MIN;
static int32_t x187 = 29;
int8_t x188 = INT8_MAX;
volatile int8_t x189 = INT8_MIN;
static int32_t x192 = INT32_MIN;
int16_t x196 = INT16_MAX;
static int32_t x200 = INT32_MIN;
int16_t x201 = 31;
volatile int16_t x203 = INT16_MAX;
int16_t x206 = INT16_MIN;
static volatile uint8_t x212 = 7U;
int32_t t50 = 1836090;
int32_t x216 = INT32_MAX;
int8_t x232 = 32;
volatile int64_t t54 = -6744LL;
int8_t x234 = INT8_MAX;
int64_t x239 = -1LL;
volatile uint16_t x244 = 12594U;
volatile int32_t x245 = INT32_MAX;
int32_t x247 = -34;
static volatile int16_t x250 = 0;
int8_t x251 = INT8_MIN;
static volatile int8_t x260 = -2;
int8_t x267 = 3;
static int8_t x269 = INT8_MIN;
uint32_t x278 = 7453U;
int64_t x285 = -149394162197LL;
static volatile int64_t x288 = -423418LL;
static uint16_t x289 = 15037U;
int64_t x290 = -726792336427665900LL;
uint64_t x293 = 43641LLU;
uint64_t t70 = 40717822LLU;
int64_t t72 = -2395164407LL;
static volatile uint64_t x312 = UINT64_MAX;
uint32_t x313 = 1100851007U;
int64_t x316 = INT64_MAX;
uint32_t x320 = 60713142U;
static int64_t t77 = -59503788051LL;
int8_t x325 = 4;
uint8_t x331 = UINT8_MAX;
int32_t t79 = -1;
int64_t x345 = -1LL;
int8_t x346 = -1;
uint16_t x348 = 2U;
static int32_t x359 = -1;
int8_t x366 = 0;
uint32_t x371 = UINT32_MAX;
volatile int8_t x376 = 9;
volatile int16_t x377 = INT16_MAX;
volatile int64_t x380 = -932716369966739LL;
int32_t x389 = 36695161;
int16_t x396 = INT16_MIN;
volatile int32_t t95 = -65527;
uint64_t x403 = UINT64_MAX;
int16_t x404 = -2509;
volatile uint32_t t98 = 835U;
uint64_t x410 = 1380495679LLU;
static volatile int64_t t99 = -1LL;


void f0(void) {
	int64_t x1 = 1254830170LL;
	volatile int8_t x2 = -2;
	int64_t x3 = INT64_MIN;
	int16_t x4 = -8;
	int64_t t0 = 4800133075261393LL;

	t0 = (x1/((x2<x3)^x4));

	if (t0 != -156853771LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = -1;

	t1 = (x9/((x10<x11)^x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -21009514533689LL;
	uint16_t x15 = 9799U;
	int64_t t2 = 200683823423724LL;

	t2 = (x13/((x14<x15)^x16));

	if (t2 != -2509LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	static uint16_t x18 = 16535U;
	static volatile int64_t x19 = -1LL;
	static int16_t x20 = INT16_MAX;
	int64_t t3 = 0LL;

	t3 = (x17/((x18<x19)^x20));

	if (t3 != 281483566907400LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x22 = UINT32_MAX;
	static uint64_t x23 = 11175909485LLU;
	volatile int64_t x24 = 7307LL;
	volatile int64_t t4 = 257LL;

	t4 = (x21/((x22<x23)^x24));

	if (t4 != 4LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x26 = -1;
	static int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MAX;
	volatile int64_t t5 = 12067LL;

	t5 = (x25/((x26<x27)^x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = 104750;
	int64_t x31 = INT64_MIN;
	volatile int32_t t6 = -7096932;

	t6 = (x29/((x30<x31)^x32));

	if (t6 != -715827882) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x33 = -10402814;
	volatile int8_t x34 = INT8_MIN;
	static int16_t x35 = -4;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t7 = -1;

	t7 = (x33/((x34<x35)^x36));

	if (t7 != -158) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 86U;
	int32_t x38 = INT32_MAX;
	static volatile int32_t x39 = INT32_MIN;
	uint64_t x40 = 87LLU;
	volatile uint64_t t8 = 7136001420LLU;

	t8 = (x37/((x38<x39)^x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 563577961LLU;
	int16_t x42 = INT16_MIN;
	static int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t9 = 1248512941LLU;

	t9 = (x41/((x42<x43)^x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -25;
	int16_t x47 = INT16_MIN;
	volatile int32_t t10 = -14496186;

	t10 = (x45/((x46<x47)^x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	int32_t x50 = -138042;
	volatile int64_t x51 = INT64_MIN;
	static int16_t x52 = -1298;

	t11 = (x49/((x50<x51)^x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x53 = 20U;
	volatile int64_t x54 = -170500006953661772LL;
	static uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = -208666410;

	t12 = (x53/((x54<x55)^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 1U;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MAX;
	static int64_t x60 = INT64_MIN;
	int64_t t13 = -7LL;

	t13 = (x57/((x58<x59)^x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	static int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	int64_t x64 = -1LL;
	int64_t t14 = 1325573LL;

	t14 = (x61/((x62<x63)^x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x67 = 1;
	static int64_t x68 = -22917958296657233LL;
	volatile int64_t t15 = -52178LL;

	t15 = (x65/((x66<x67)^x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x71 = 1306461683LLU;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t16 = 2958U;

	t16 = (x69/((x70<x71)^x72));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = 1137553587201065702LL;
	volatile int8_t x74 = -1;
	static int8_t x75 = INT8_MIN;
	static int64_t x76 = -1LL;
	static int64_t t17 = 628617450775328355LL;

	t17 = (x73/((x74<x75)^x76));

	if (t17 != -1137553587201065702LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MAX;
	int32_t x79 = -385504;
	volatile int32_t t18 = 100537;

	t18 = (x77/((x78<x79)^x80));

	if (t18 != 1424) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int32_t x82 = -1;
	int32_t x83 = -51755481;
	volatile int32_t x84 = -32820474;
	uint64_t t19 = 58LLU;

	t19 = (x81/((x82<x83)^x84));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = 2;
	int32_t x86 = -14804401;
	volatile int8_t x87 = INT8_MAX;
	volatile int32_t x88 = 389960;
	int32_t t20 = 67199;

	t20 = (x85/((x86<x87)^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = 58;
	int32_t x91 = -1;
	uint16_t x92 = 7U;

	t21 = (x89/((x90<x91)^x92));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	int32_t x95 = INT32_MAX;
	volatile int64_t t22 = 98858417LL;

	t22 = (x93/((x94<x95)^x96));

	if (t22 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 925495056617420LL;
	int8_t x99 = 0;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t23 = 1731119098LL;

	t23 = (x97/((x98<x99)^x100));

	if (t23 != 3643681325265LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	static int16_t x102 = -1175;
	int16_t x103 = -11;
	static uint8_t x104 = UINT8_MAX;
	int64_t t24 = -133656609LL;

	t24 = (x101/((x102<x103)^x104));

	if (t24 != 36312488334073920LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = INT64_MIN;
	uint64_t x107 = 27LLU;
	int8_t x108 = INT8_MIN;
	uint32_t t25 = 352898U;

	t25 = (x105/((x106<x107)^x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x113 = INT64_MIN;
	volatile int32_t x114 = INT32_MIN;
	uint8_t x115 = 111U;
	volatile uint8_t x116 = 25U;
	volatile int64_t t26 = -125LL;

	t26 = (x113/((x114<x115)^x116));

	if (t26 != -384307168202282325LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = INT32_MIN;
	static uint8_t x119 = 1U;
	int16_t x120 = INT16_MIN;
	volatile uint32_t t27 = 232970U;

	t27 = (x117/((x118<x119)^x120));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 1;
	static int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MAX;
	static uint32_t x124 = 106974U;
	static volatile uint32_t t28 = 13071523U;

	t28 = (x121/((x122<x123)^x124));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 3LL;
	volatile int16_t x126 = INT16_MAX;
	static int16_t x127 = -1;
	uint32_t x128 = 835705U;
	volatile int64_t t29 = 4000122387151509LL;

	t29 = (x125/((x126<x127)^x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = INT8_MIN;
	uint8_t x131 = 52U;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t30 = 0;

	t30 = (x129/((x130<x131)^x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	uint8_t x134 = 16U;
	int64_t x135 = INT64_MIN;
	int32_t t31 = 206;

	t31 = (x133/((x134<x135)^x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x139 = INT64_MAX;
	static int16_t x140 = -21;
	volatile uint32_t t32 = 2U;

	t32 = (x137/((x138<x139)^x140));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 1;
	static volatile uint64_t x142 = 34159862922LLU;

	t33 = (x141/((x142<x143)^x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;

	t34 = (x145/((x146<x147)^x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x151 = -3;
	int64_t t35 = -15673986078LL;

	t35 = (x149/((x150<x151)^x152));

	if (t35 != 7LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 7612U;
	int16_t x155 = -1;
	static int32_t x156 = -20060129;
	volatile int32_t t36 = -1;

	t36 = (x153/((x154<x155)^x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x158 = INT32_MIN;
	static int8_t x159 = -1;

	t37 = (x157/((x158<x159)^x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 26801U;
	uint32_t x162 = 3530U;
	volatile int64_t x163 = INT64_MIN;
	volatile int64_t x164 = INT64_MIN;
	static int64_t t38 = 29450016LL;

	t38 = (x161/((x162<x163)^x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	volatile int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MAX;
	int32_t x168 = -9;
	volatile int64_t t39 = 4146246027LL;

	t39 = (x165/((x166<x167)^x168));

	if (t39 != 922337203685477580LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = -398;
	uint16_t x170 = UINT16_MAX;
	static uint16_t x171 = 10U;
	static volatile int64_t x172 = INT64_MAX;

	t40 = (x169/((x170<x171)^x172));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x174 = 3;
	int16_t x175 = INT16_MIN;
	static volatile uint16_t x176 = 4518U;
	int32_t t41 = -107803;

	t41 = (x173/((x174<x175)^x176));

	if (t41 != -7) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = 8U;
	volatile uint8_t x179 = 0U;
	int16_t x180 = INT16_MIN;
	volatile int32_t t42 = 0;

	t42 = (x177/((x178<x179)^x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	static volatile int8_t x182 = -1;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = -7;
	volatile int32_t t43 = -1823;

	t43 = (x181/((x182<x183)^x184));

	if (t43 != 4681) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	int32_t t44 = -566848;

	t44 = (x185/((x186<x187)^x188));

	if (t44 != -260) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t45 = 1;

	t45 = (x189/((x190<x191)^x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -1;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	int32_t t46 = 9375;

	t46 = (x193/((x194<x195)^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 6LLU;
	volatile uint8_t x198 = 66U;
	volatile int32_t x199 = INT32_MAX;
	volatile uint64_t t47 = 3LLU;

	t47 = (x197/((x198<x199)^x200));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = 1463820U;
	int64_t x204 = INT64_MAX;
	volatile int64_t t48 = -22654750204LL;

	t48 = (x201/((x202<x203)^x204));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static int16_t x207 = -7;
	int16_t x208 = INT16_MAX;
	volatile int32_t t49 = 2777;

	t49 = (x205/((x206<x207)^x208));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MAX;
	static volatile uint64_t x210 = UINT64_MAX;
	uint32_t x211 = UINT32_MAX;

	t50 = (x209/((x210<x211)^x212));

	if (t50 != 306783378) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = 12U;
	uint8_t x215 = 7U;
	volatile int32_t t51 = -31;

	t51 = (x213/((x214<x215)^x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = 1U;
	static uint8_t x218 = 28U;
	int8_t x219 = 31;
	static volatile int16_t x220 = INT16_MIN;
	volatile int32_t t52 = -15033;

	t52 = (x217/((x218<x219)^x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = INT16_MIN;
	static int8_t x226 = INT8_MIN;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	int64_t t53 = -4992920LL;

	t53 = (x225/((x226<x227)^x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x229 = -16053631LL;
	static volatile int32_t x230 = -1;
	uint32_t x231 = 56U;

	t54 = (x229/((x230<x231)^x232));

	if (t54 != -501675LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t55 = -459708;

	t55 = (x233/((x234<x235)^x236));

	if (t55 != 65538) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = 227;
	int32_t x238 = 99;
	int32_t x240 = INT32_MAX;
	volatile int32_t t56 = -605965034;

	t56 = (x237/((x238<x239)^x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = INT32_MAX;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = -187;
	static int32_t t57 = 800;

	t57 = (x241/((x242<x243)^x244));

	if (t57 != 170502) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x246 = INT64_MIN;
	uint32_t x248 = 503619U;
	volatile uint32_t t58 = 102U;

	t58 = (x245/((x246<x247)^x248));

	if (t58 != 4264U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 4351U;
	static uint64_t x252 = 22LLU;
	uint64_t t59 = 447237707031170592LLU;

	t59 = (x249/((x250<x251)^x252));

	if (t59 != 197LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 10U;
	static uint32_t x254 = 1197868U;
	int8_t x255 = -1;
	uint64_t x256 = 1198104693LLU;
	volatile uint64_t t60 = 640361LLU;

	t60 = (x253/((x254<x255)^x256));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 0U;
	uint32_t x258 = 8U;
	int8_t x259 = -1;
	int32_t t61 = 28;

	t61 = (x257/((x258<x259)^x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	volatile uint16_t x262 = 12175U;
	uint64_t x263 = 677273LLU;
	int16_t x264 = INT16_MIN;
	int32_t t62 = 1;

	t62 = (x261/((x262<x263)^x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	int32_t x268 = -1;
	volatile int32_t t63 = 296422776;

	t63 = (x265/((x266<x267)^x268));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x270 = INT16_MIN;
	int8_t x271 = -55;
	static int64_t x272 = 276038669534515LL;
	volatile int64_t t64 = 3988885863284LL;

	t64 = (x269/((x270<x271)^x272));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MAX;
	int64_t x275 = 223LL;
	int8_t x276 = INT8_MIN;
	int32_t t65 = -35715667;

	t65 = (x273/((x274<x275)^x276));

	if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x277 = INT64_MIN;
	int64_t x279 = 12084934473877940LL;
	volatile int32_t x280 = INT32_MAX;
	static volatile int64_t t66 = -298775806742LL;

	t66 = (x277/((x278<x279)^x280));

	if (t66 != -4294967300LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = INT64_MIN;
	uint64_t x282 = 34334390456LLU;
	static uint64_t x283 = UINT64_MAX;
	volatile int16_t x284 = INT16_MAX;
	int64_t t67 = 66092407548982LL;

	t67 = (x281/((x282<x283)^x284));

	if (t67 != -281492157628480LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x286 = 76U;
	volatile int32_t x287 = -51947977;
	volatile int64_t t68 = 26486774LL;

	t68 = (x285/((x286<x287)^x288));

	if (t68 != 352829LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 25LLU;
	static uint64_t t69 = 4599544607327LLU;

	t69 = (x289/((x290<x291)^x292));

	if (t69 != 626LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = 0;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;

	t70 = (x293/((x294<x295)^x296));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = 15;
	volatile int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t71 = 0;

	t71 = (x297/((x298<x299)^x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 8004602U;
	int32_t x302 = 176361337;
	int16_t x303 = 0;
	int64_t x304 = 4222608134127734143LL;

	t72 = (x301/((x302<x303)^x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 30537621U;
	int16_t x306 = 10178;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 665U;
	static volatile uint32_t t73 = 930771410U;

	t73 = (x305/((x306<x307)^x308));

	if (t73 != 45921U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	static uint32_t x310 = 408696U;
	static volatile int8_t x311 = -6;
	uint64_t t74 = 2841432308427LLU;

	t74 = (x309/((x310<x311)^x312));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x314 = 28;
	int16_t x315 = INT16_MIN;
	int64_t t75 = -9999LL;

	t75 = (x313/((x314<x315)^x316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = INT32_MAX;
	int8_t x318 = 1;
	uint16_t x319 = 542U;
	uint32_t t76 = 114560019U;

	t76 = (x317/((x318<x319)^x320));

	if (t76 != 35U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = -1LL;
	uint32_t x322 = 5U;
	static int32_t x323 = -11;
	static int32_t x324 = INT32_MIN;

	t77 = (x321/((x322<x323)^x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = 116225948LLU;
	static volatile uint64_t t78 = 4461733326173851002LLU;

	t78 = (x325/((x326<x327)^x328));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x329 = 1U;
	static int16_t x330 = -1;
	static int16_t x332 = -906;

	t79 = (x329/((x330<x331)^x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	static uint16_t x335 = 14U;
	static uint64_t x336 = 1531LLU;
	uint64_t t80 = 1819LLU;

	t80 = (x333/((x334<x335)^x336));

	if (t80 != 12056695473012778LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = UINT32_MAX;
	static uint32_t x338 = UINT32_MAX;
	volatile uint64_t x339 = 11LLU;
	static uint32_t x340 = UINT32_MAX;
	uint32_t t81 = 127126U;

	t81 = (x337/((x338<x339)^x340));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -94397;
	volatile int32_t x342 = 2467;
	int16_t x343 = INT16_MAX;
	int8_t x344 = INT8_MAX;
	volatile int32_t t82 = 0;

	t82 = (x341/((x342<x343)^x344));

	if (t82 != -749) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x347 = INT16_MIN;
	static int64_t t83 = 218498LL;

	t83 = (x345/((x346<x347)^x348));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x349 = 2;
	int8_t x350 = INT8_MIN;
	int16_t x351 = 0;
	int8_t x352 = INT8_MIN;
	volatile int32_t t84 = 352249379;

	t84 = (x349/((x350<x351)^x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	volatile uint32_t x354 = UINT32_MAX;
	static uint16_t x355 = 3U;
	uint32_t x356 = 47942U;
	uint32_t t85 = 4403414U;

	t85 = (x353/((x354<x355)^x356));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = -37;
	int32_t x360 = INT32_MAX;
	volatile int32_t t86 = -48;

	t86 = (x357/((x358<x359)^x360));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MAX;
	static int8_t x362 = -1;
	uint16_t x363 = 3U;
	volatile int16_t x364 = INT16_MAX;
	int32_t t87 = -44398;

	t87 = (x361/((x362<x363)^x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -1;
	int64_t x367 = INT64_MIN;
	int32_t x368 = 3;
	int32_t t88 = -7050;

	t88 = (x365/((x366<x367)^x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MAX;
	static volatile int8_t x370 = -1;
	static volatile uint32_t x372 = UINT32_MAX;
	int64_t t89 = 2564558LL;

	t89 = (x369/((x370<x371)^x372));

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = -1;
	volatile uint32_t x374 = UINT32_MAX;
	uint8_t x375 = UINT8_MAX;
	volatile int32_t t90 = 4;

	t90 = (x373/((x374<x375)^x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x378 = 1U;
	uint32_t x379 = 507U;
	int64_t t91 = -7590577212848399LL;

	t91 = (x377/((x378<x379)^x380));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = 31361487;
	int8_t x383 = 0;
	int8_t x384 = -56;
	int32_t t92 = -1016904805;

	t92 = (x381/((x382<x383)^x384));

	if (t92 != 38347922) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x385 = 76722611LLU;
	int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = UINT8_MAX;
	volatile uint64_t t93 = 15404828538LLU;

	t93 = (x385/((x386<x387)^x388));

	if (t93 != 300872LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x390 = 1892681U;
	volatile int32_t x391 = INT32_MIN;
	volatile int64_t x392 = INT64_MAX;
	int64_t t94 = -949286LL;

	t94 = (x389/((x390<x391)^x392));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x393 = INT16_MIN;
	static uint64_t x394 = UINT64_MAX;
	volatile int64_t x395 = -1LL;

	t95 = (x393/((x394<x395)^x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x397 = 170259LLU;
	uint32_t x398 = UINT32_MAX;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	uint64_t t96 = 2915767LLU;

	t96 = (x397/((x398<x399)^x400));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -374361LL;
	int32_t x402 = INT32_MIN;
	int64_t t97 = -29305LL;

	t97 = (x401/((x402<x403)^x404));

	if (t97 != 149LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x405 = UINT16_MAX;
	uint16_t x406 = UINT16_MAX;
	volatile int32_t x407 = 9;
	static uint32_t x408 = 2U;

	t98 = (x405/((x406<x407)^x408));

	if (t98 != 32767U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;

	t99 = (x409/((x410<x411)^x412));

	if (t99 != 72624976668147841LL) { NG(); } else { ; }
	
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

