#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 274552167582713082LL;
volatile int64_t x5 = INT64_MIN;
int64_t x7 = INT64_MIN;
volatile int16_t x10 = -1;
int8_t x22 = INT8_MIN;
volatile int16_t x27 = 1015;
uint32_t x30 = 136546487U;
uint16_t x31 = 37U;
uint64_t x32 = UINT64_MAX;
static volatile uint8_t x34 = 0U;
uint32_t x37 = 8U;
uint32_t x41 = UINT32_MAX;
uint64_t x50 = 135370970838LLU;
int8_t x52 = -1;
volatile uint64_t t12 = 3775LLU;
uint64_t t13 = 2836129952035LLU;
volatile uint16_t x59 = 240U;
static int64_t x60 = INT64_MAX;
uint8_t x63 = 97U;
volatile int16_t x64 = -6;
volatile uint64_t t17 = 905383662294702706LLU;
int32_t x73 = INT32_MIN;
uint64_t x75 = UINT64_MAX;
static int8_t x76 = INT8_MIN;
volatile uint64_t t18 = 374146794LLU;
volatile int64_t t20 = 23210670276275935LL;
int32_t x85 = 2994859;
volatile int32_t t21 = -251;
uint16_t x89 = 9U;
uint16_t x93 = UINT16_MAX;
volatile int64_t x96 = INT64_MIN;
static int16_t x97 = -1;
int8_t x104 = -1;
int64_t x108 = INT64_MIN;
volatile int32_t x111 = -1;
volatile int32_t t27 = -11112231;
int16_t x113 = INT16_MIN;
uint64_t t28 = 123151LLU;
int32_t x121 = INT32_MIN;
volatile int16_t x123 = -9;
uint32_t x126 = 1U;
volatile int64_t t31 = -1LL;
uint32_t x132 = 52251U;
int16_t x133 = -1;
int32_t x134 = -1;
volatile int16_t x141 = INT16_MAX;
uint8_t x142 = 30U;
int64_t x143 = -10363050582LL;
uint32_t x154 = 914054U;
static uint64_t x155 = UINT64_MAX;
int32_t x164 = INT32_MIN;
int32_t x170 = INT32_MIN;
int32_t t42 = 369;
uint16_t x181 = 94U;
uint32_t t44 = 192819046U;
int8_t x199 = INT8_MIN;
int64_t x200 = 4091186LL;
uint16_t x205 = 10103U;
int32_t t50 = 6292;
static int64_t x210 = 277845881164821401LL;
int64_t x228 = INT64_MIN;
volatile int64_t t55 = 29368LL;
uint32_t x240 = 14952U;
uint64_t t58 = 36LLU;
int8_t x243 = INT8_MIN;
uint32_t x244 = 27089U;
static int32_t x248 = INT32_MIN;
int32_t x250 = INT32_MAX;
int32_t x257 = INT32_MIN;
static volatile uint64_t x265 = UINT64_MAX;
static volatile int64_t t69 = 537688144178788LL;
static volatile int32_t t71 = -83862;
uint16_t x301 = 11U;
int64_t x308 = INT64_MAX;
uint32_t x313 = 1466U;
int64_t x317 = 3429LL;
volatile int64_t t77 = -223939LL;
volatile uint16_t x324 = 265U;
int16_t x326 = -1;
uint64_t x329 = 778971031137797441LLU;
uint64_t x332 = 205873LLU;
static int16_t x337 = INT16_MIN;
int64_t x338 = 760180613100155486LL;
static uint8_t x339 = 41U;
int8_t x341 = INT8_MAX;
static uint16_t x350 = 2U;
int64_t x353 = INT64_MAX;
int32_t x354 = 3247;
int16_t x361 = 20;
static volatile int32_t x366 = -1;
uint8_t x370 = 0U;
volatile int32_t t90 = -1;
uint64_t x377 = 1672759433879054386LLU;
int8_t x385 = -1;
int32_t x387 = INT32_MAX;
volatile int32_t x389 = INT32_MIN;
uint16_t x397 = 7U;
int64_t x408 = 7346999172891LL;


void f0(void) {
	uint64_t x1 = 3LLU;
	uint8_t x2 = 25U;
	volatile int64_t x3 = -1LL;
	int16_t x4 = INT16_MIN;

	t0 = ((x1<x2)%(x3^x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = 45U;
	int64_t x8 = INT64_MAX;
	int64_t t1 = -1LL;

	t1 = ((x5<x6)%(x7^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 62U;
	volatile int64_t x11 = -473LL;
	int32_t x12 = -294195301;
	volatile int64_t t2 = -3LL;

	t2 = ((x9<x10)%(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	uint8_t x14 = UINT8_MAX;
	static volatile int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -53119334256173910LL;

	t3 = ((x13<x14)%(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile int16_t x18 = INT16_MIN;
	int16_t x19 = 7644;
	static uint8_t x20 = 1U;
	int32_t t4 = -20;

	t4 = ((x17<x18)%(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	static volatile uint8_t x23 = 2U;
	static int32_t x24 = -1;
	volatile int32_t t5 = 55575;

	t5 = ((x21<x22)%(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile int32_t x26 = 15319;
	int64_t x28 = INT64_MAX;
	volatile int64_t t6 = 44899LL;

	t6 = ((x25<x26)%(x27^x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint64_t t7 = 4552023108647LLU;

	t7 = ((x29<x30)%(x31^x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	int32_t x36 = 52526987;
	int32_t t8 = -2664;

	t8 = ((x33<x34)%(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -1;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -177126955217488494LL;

	t9 = ((x37<x38)%(x39^x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = UINT32_MAX;
	int64_t x43 = -1LL;
	uint32_t x44 = 47530113U;
	volatile int64_t t10 = -1LL;

	t10 = ((x41<x42)%(x43^x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = 1357470346676LL;
	int8_t x48 = -1;
	int64_t t11 = 2871593022LL;

	t11 = ((x45<x46)%(x47^x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	volatile uint64_t x51 = 63LLU;

	t12 = ((x49<x50)%(x51^x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	volatile uint8_t x54 = 5U;
	static uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MIN;

	t13 = ((x53<x54)%(x55^x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 29;
	uint64_t x58 = 99537209350LLU;
	volatile int64_t t14 = -92777314777040784LL;

	t14 = ((x57<x58)%(x59^x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -5;
	uint32_t x62 = 1U;
	int32_t t15 = 1;

	t15 = ((x61<x62)%(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -5;
	static volatile int8_t x66 = INT8_MIN;
	volatile int64_t x67 = INT64_MAX;
	static int64_t x68 = INT64_MIN;
	int64_t t16 = 23760761011LL;

	t16 = ((x65<x66)%(x67^x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = -1LL;
	uint64_t x71 = 7LLU;
	static uint8_t x72 = 25U;

	t17 = ((x69<x70)%(x71^x72));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;

	t18 = ((x73<x74)%(x75^x76));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 30;
	volatile uint64_t x78 = UINT64_MAX;
	int64_t x79 = -1LL;
	volatile uint8_t x80 = 9U;
	volatile int64_t t19 = -2088421830LL;

	t19 = ((x77<x78)%(x79^x80));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = 1;
	int64_t x83 = -1LL;
	int32_t x84 = INT32_MIN;

	t20 = ((x81<x82)%(x83^x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	uint16_t x88 = 42U;

	t21 = ((x85<x86)%(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 7U;
	volatile int16_t x91 = -1;
	int32_t x92 = 1150;
	int32_t t22 = -58919419;

	t22 = ((x89<x90)%(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	volatile int64_t t23 = -66LL;

	t23 = ((x93<x94)%(x95^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x98 = 3;
	int8_t x99 = INT8_MAX;
	uint64_t x100 = 5508225712LLU;
	volatile uint64_t t24 = 6811897266904LLU;

	t24 = ((x97<x98)%(x99^x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 999U;
	uint16_t x102 = 143U;
	int16_t x103 = INT16_MIN;
	int32_t t25 = 64927339;

	t25 = ((x101<x102)%(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 20U;
	int8_t x106 = INT8_MAX;
	static int16_t x107 = INT16_MIN;
	volatile int64_t t26 = -216372954679506019LL;

	t26 = ((x105<x106)%(x107^x108));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -5;
	static int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MAX;

	t27 = ((x109<x110)%(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 5948846190707338LLU;
	uint64_t x115 = 194455684273LLU;
	static uint16_t x116 = UINT16_MAX;

	t28 = ((x113<x114)%(x115^x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -16;
	static uint8_t x118 = 1U;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = 645302;

	t29 = ((x117<x118)%(x119^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 13901236;

	t30 = ((x121<x122)%(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 24U;
	static uint16_t x127 = 417U;
	int64_t x128 = INT64_MIN;

	t31 = ((x125<x126)%(x127^x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 2U;
	volatile int8_t x130 = 1;
	static volatile uint32_t x131 = 8021867U;
	uint32_t t32 = 1862U;

	t32 = ((x129<x130)%(x131^x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x135 = 119313U;
	volatile int16_t x136 = -846;
	uint32_t t33 = 3546U;

	t33 = ((x133<x134)%(x135^x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 4125U;
	uint16_t x140 = 1U;
	volatile int32_t t34 = -575;

	t34 = ((x137<x138)%(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x144 = -32216;
	int64_t t35 = -1044024925536389LL;

	t35 = ((x141<x142)%(x143^x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 3U;
	int32_t x146 = -1;
	volatile uint64_t x147 = UINT64_MAX;
	static int16_t x148 = INT16_MIN;
	uint64_t t36 = 84635928152658465LLU;

	t36 = ((x145<x146)%(x147^x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = -5;
	volatile int64_t x156 = INT64_MIN;
	volatile uint64_t t37 = 103359856LLU;

	t37 = ((x153<x154)%(x155^x156));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -1LL;
	int32_t x158 = -1;
	int64_t x159 = -51904909485118751LL;
	volatile int8_t x160 = INT8_MAX;
	int64_t t38 = -29459LL;

	t38 = ((x157<x158)%(x159^x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x161 = 7LLU;
	static int64_t x162 = INT64_MIN;
	volatile int32_t x163 = -1;
	volatile int32_t t39 = -3;

	t39 = ((x161<x162)%(x163^x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x165 = 3114713345363LLU;
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	volatile int32_t x168 = INT32_MIN;
	int32_t t40 = -221598156;

	t40 = ((x165<x166)%(x167^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	int32_t t41 = -3;

	t41 = ((x169<x170)%(x171^x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 5718LL;
	uint64_t x174 = UINT64_MAX;
	static int32_t x175 = 1068954605;
	int32_t x176 = INT32_MIN;

	t42 = ((x173<x174)%(x175^x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 1U;
	static int32_t x178 = -5;
	volatile int8_t x179 = 1;
	int64_t x180 = -1LL;
	volatile int64_t t43 = -14595LL;

	t43 = ((x177<x178)%(x179^x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x182 = -27;
	volatile uint32_t x183 = 43U;
	static int8_t x184 = INT8_MIN;

	t44 = ((x181<x182)%(x183^x184));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 66U;
	int64_t x186 = INT64_MIN;
	int32_t x187 = 4077912;
	volatile int64_t x188 = INT64_MAX;
	int64_t t45 = 34897924066200LL;

	t45 = ((x185<x186)%(x187^x188));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 1LLU;
	static volatile int32_t x190 = INT32_MAX;
	uint8_t x191 = 0U;
	int32_t x192 = INT32_MAX;
	int32_t t46 = -27;

	t46 = ((x189<x190)%(x191^x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -5LL;
	int64_t x194 = -14LL;
	static int16_t x195 = 1663;
	int32_t x196 = INT32_MIN;
	int32_t t47 = -268243747;

	t47 = ((x193<x194)%(x195^x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = -1;
	uint8_t x198 = 17U;
	volatile int64_t t48 = 6416652596015LL;

	t48 = ((x197<x198)%(x199^x200));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 1;
	volatile int32_t x202 = 6544;
	int64_t x203 = -1LL;
	int8_t x204 = INT8_MAX;
	volatile int64_t t49 = 92925805240886591LL;

	t49 = ((x201<x202)%(x203^x204));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = 379296;
	int32_t x207 = -1;
	int16_t x208 = 1;

	t50 = ((x205<x206)%(x207^x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = 4095;
	int8_t x211 = INT8_MAX;
	int64_t x212 = -1LL;
	int64_t t51 = 419313725469066835LL;

	t51 = ((x209<x210)%(x211^x212));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x213 = 14545;
	uint8_t x214 = 1U;
	uint64_t x215 = 7322790084139LLU;
	static volatile uint8_t x216 = 38U;
	volatile uint64_t t52 = 58LLU;

	t52 = ((x213<x214)%(x215^x216));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int16_t x218 = INT16_MAX;
	volatile int8_t x219 = -2;
	int8_t x220 = -1;
	volatile int32_t t53 = -3;

	t53 = ((x217<x218)%(x219^x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = INT64_MAX;
	volatile int8_t x222 = -1;
	volatile int8_t x223 = 0;
	int32_t x224 = -1;
	static volatile int32_t t54 = 20952168;

	t54 = ((x221<x222)%(x223^x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -13378;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;

	t55 = ((x225<x226)%(x227^x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x229 = INT64_MIN;
	static int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int32_t x232 = -1;
	volatile int32_t t56 = 8;

	t56 = ((x229<x230)%(x231^x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 15476LLU;
	static int64_t x234 = INT64_MIN;
	volatile int16_t x235 = -1;
	int32_t x236 = 856608354;
	volatile int32_t t57 = 0;

	t57 = ((x233<x234)%(x235^x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x237 = 193385242LLU;
	uint16_t x238 = 360U;
	uint64_t x239 = UINT64_MAX;

	t58 = ((x237<x238)%(x239^x240));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x241 = INT8_MAX;
	uint16_t x242 = 130U;
	volatile uint32_t t59 = 14006U;

	t59 = ((x241<x242)%(x243^x244));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	static volatile int8_t x246 = 3;
	volatile uint16_t x247 = 126U;
	int32_t t60 = -155419494;

	t60 = ((x245<x246)%(x247^x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x249 = INT8_MIN;
	int64_t x251 = -1LL;
	uint64_t x252 = 387913314LLU;
	volatile uint64_t t61 = 973756261168LLU;

	t61 = ((x249<x250)%(x251^x252));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x253 = INT64_MAX;
	int16_t x254 = -1;
	static int16_t x255 = 54;
	uint32_t x256 = 771976U;
	volatile uint32_t t62 = 48U;

	t62 = ((x253<x254)%(x255^x256));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	static uint32_t x260 = 92180U;
	uint32_t t63 = 70091519U;

	t63 = ((x257<x258)%(x259^x260));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = INT8_MAX;
	int32_t x263 = INT32_MIN;
	int64_t x264 = 471999LL;
	volatile int64_t t64 = 8813793996717329LL;

	t64 = ((x261<x262)%(x263^x264));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x266 = INT16_MIN;
	volatile int64_t x267 = INT64_MIN;
	static uint32_t x268 = 21669U;
	static int64_t t65 = -197357530153166938LL;

	t65 = ((x265<x266)%(x267^x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 12403LLU;
	uint16_t x270 = UINT16_MAX;
	static int8_t x271 = -60;
	volatile int16_t x272 = INT16_MIN;
	volatile int32_t t66 = -54062465;

	t66 = ((x269<x270)%(x271^x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x273 = -99;
	volatile uint8_t x274 = 17U;
	static int64_t x275 = INT64_MAX;
	int64_t x276 = -55677794LL;
	volatile int64_t t67 = -54815542793703944LL;

	t67 = ((x273<x274)%(x275^x276));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x277 = INT16_MAX;
	volatile int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MAX;
	static int64_t t68 = 387565931495807899LL;

	t68 = ((x277<x278)%(x279^x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	volatile int64_t x284 = -71618059652726LL;

	t69 = ((x281<x282)%(x283^x284));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	volatile int32_t x286 = 40;
	uint16_t x287 = UINT16_MAX;
	static int8_t x288 = INT8_MIN;
	int32_t t70 = -38294;

	t70 = ((x285<x286)%(x287^x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = 221LLU;
	int32_t x290 = -1;
	static int32_t x291 = -175041;
	int8_t x292 = -43;

	t71 = ((x289<x290)%(x291^x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 32U;
	uint64_t x295 = 76171147LLU;
	volatile int64_t x296 = -1LL;
	uint64_t t72 = 129820306LLU;

	t72 = ((x293<x294)%(x295^x296));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x297 = -13;
	uint16_t x298 = UINT16_MAX;
	uint32_t x299 = 2192U;
	int64_t x300 = INT64_MIN;
	volatile int64_t t73 = 22LL;

	t73 = ((x297<x298)%(x299^x300));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = -1;
	uint32_t x303 = 26U;
	volatile int64_t x304 = 10LL;
	int64_t t74 = 797389235365LL;

	t74 = ((x301<x302)%(x303^x304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = 1;
	volatile int32_t x306 = 243161242;
	int16_t x307 = INT16_MAX;
	int64_t t75 = -4018202837507LL;

	t75 = ((x305<x306)%(x307^x308));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = -1;
	int32_t t76 = -837;

	t76 = ((x313<x314)%(x315^x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x318 = -1;
	volatile int32_t x319 = -190148;
	int64_t x320 = INT64_MIN;

	t77 = ((x317<x318)%(x319^x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x321 = 10;
	int64_t x322 = 518964757118698390LL;
	int8_t x323 = INT8_MAX;
	volatile int32_t t78 = -120976206;

	t78 = ((x321<x322)%(x323^x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -1;
	int64_t x327 = INT64_MAX;
	uint32_t x328 = 1506724466U;
	int64_t t79 = 9030632LL;

	t79 = ((x325<x326)%(x327^x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 2U;
	uint64_t t80 = 1477628907995578116LLU;

	t80 = ((x329<x330)%(x331^x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x333 = UINT32_MAX;
	volatile int32_t x334 = 2008484;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t81 = 1471497320727858LL;

	t81 = ((x333<x334)%(x335^x336));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x340 = -1;
	volatile int32_t t82 = -1031231464;

	t82 = ((x337<x338)%(x339^x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x342 = -1LL;
	volatile int8_t x343 = -27;
	static uint8_t x344 = 2U;
	static int32_t t83 = -94178421;

	t83 = ((x341<x342)%(x343^x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MAX;
	int32_t x346 = -107223;
	volatile int64_t x347 = INT64_MIN;
	int16_t x348 = -1;
	int64_t t84 = -6022436856850398LL;

	t84 = ((x345<x346)%(x347^x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = INT64_MIN;
	volatile int32_t x351 = 6;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t85 = 14741LLU;

	t85 = ((x349<x350)%(x351^x352));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x355 = UINT16_MAX;
	uint64_t x356 = 1011087058590474269LLU;
	uint64_t t86 = 184717LLU;

	t86 = ((x353<x354)%(x355^x356));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = -2LL;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -1;
	int32_t x360 = INT32_MAX;
	int32_t t87 = -2824177;

	t87 = ((x357<x358)%(x359^x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x362 = INT8_MIN;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = 238283907695455LL;
	volatile int64_t t88 = 21LL;

	t88 = ((x361<x362)%(x363^x364));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 12U;
	int32_t x367 = 344962670;
	uint8_t x368 = 70U;
	int32_t t89 = -251901;

	t89 = ((x365<x366)%(x367^x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = 13LL;
	uint16_t x371 = 11776U;
	static int8_t x372 = INT8_MIN;

	t90 = ((x369<x370)%(x371^x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = -1;
	static int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t91 = -20;

	t91 = ((x373<x374)%(x375^x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x378 = INT64_MAX;
	static int16_t x379 = INT16_MIN;
	volatile int32_t x380 = 48;
	int32_t t92 = -1;

	t92 = ((x377<x378)%(x379^x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MAX;
	volatile int64_t x383 = INT64_MIN;
	volatile uint32_t x384 = 0U;
	int64_t t93 = 0LL;

	t93 = ((x381<x382)%(x383^x384));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x386 = INT32_MIN;
	volatile int64_t x388 = INT64_MIN;
	volatile int64_t t94 = 1504LL;

	t94 = ((x385<x386)%(x387^x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x390 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	volatile int8_t x392 = INT8_MIN;
	static uint32_t t95 = 129627U;

	t95 = ((x389<x390)%(x391^x392));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = 67728856;
	static int16_t x394 = -3137;
	int8_t x395 = 14;
	int64_t x396 = 640669166256LL;
	int64_t t96 = 41549168LL;

	t96 = ((x393<x394)%(x395^x396));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t97 = -218;

	t97 = ((x397<x398)%(x399^x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	uint64_t x404 = 1544831512766755486LLU;
	uint64_t t98 = 10LLU;

	t98 = ((x401<x402)%(x403^x404));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MAX;
	int64_t x406 = INT64_MAX;
	volatile int16_t x407 = -342;
	volatile int64_t t99 = -1573207493957281LL;

	t99 = ((x405<x406)%(x407^x408));

	if (t99 != 1LL) { NG(); } else { ; }
	
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
