#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x24 = UINT64_MAX;
uint32_t x38 = 38699U;
int16_t x40 = 81;
int8_t x44 = INT8_MAX;
volatile int32_t x45 = -1;
volatile int64_t t10 = 261690235117272637LL;
int16_t x59 = -673;
uint32_t x60 = UINT32_MAX;
static volatile uint32_t t12 = 3U;
volatile uint32_t x63 = 520U;
uint32_t t13 = 528138U;
int8_t x75 = 0;
volatile int16_t x76 = -14268;
volatile int32_t t16 = -9251202;
static volatile int32_t t18 = -12479;
uint32_t x90 = 1423U;
uint32_t x91 = 125746154U;
int16_t x97 = 5;
volatile int64_t x102 = -23976LL;
static int16_t x112 = 0;
int16_t x115 = INT16_MIN;
static volatile uint32_t x116 = 2643422U;
static uint64_t t29 = 2240749499758196LLU;
int64_t x147 = 5161490LL;
volatile int16_t x149 = INT16_MIN;
int32_t x150 = INT32_MAX;
uint32_t x155 = UINT32_MAX;
volatile int32_t x156 = INT32_MIN;
int64_t x165 = -1LL;
uint8_t x167 = UINT8_MAX;
int64_t x170 = -1LL;
volatile int32_t t37 = 15144;
volatile uint64_t x175 = UINT64_MAX;
uint32_t x183 = 61409U;
volatile int64_t t41 = 2058165358764LL;
uint64_t x192 = 3LLU;
volatile uint64_t x194 = 299LLU;
volatile int32_t x195 = -1;
uint64_t t45 = 419007LLU;
int64_t x206 = INT64_MIN;
uint32_t t48 = 993453105U;
static uint32_t x233 = 2890U;
static volatile int64_t t52 = 604096LL;
uint64_t x237 = UINT64_MAX;
volatile uint16_t x240 = UINT16_MAX;
int64_t x245 = INT64_MIN;
int64_t x247 = -4194716640978502LL;
int64_t x251 = 628842739744697LL;
uint64_t x257 = 22927917877LLU;
volatile uint64_t t58 = 51968LLU;
static volatile int32_t x263 = 59632501;
int16_t x264 = INT16_MIN;
static volatile uint64_t t62 = 9711LLU;
int64_t x277 = INT64_MIN;
static uint64_t x281 = 133761117454920769LLU;
int16_t x286 = INT16_MIN;
uint32_t x303 = UINT32_MAX;
uint32_t x309 = 18069942U;
static int32_t x310 = 128831868;
static int8_t x312 = INT8_MAX;
int32_t t69 = -2;
int32_t t70 = 332796087;
int64_t x318 = -209357LL;
volatile int32_t t72 = -11375388;
volatile int64_t x331 = -79273LL;
static int8_t x338 = -14;
int32_t t76 = INT32_MIN;
static uint64_t x345 = 372230709285LLU;
static int64_t x347 = -484119866365LL;
volatile int64_t t79 = -3877586645LL;
volatile int8_t x353 = 1;
int64_t x354 = 46081LL;
uint32_t x355 = UINT32_MAX;
volatile int16_t x359 = INT16_MIN;
static int64_t t81 = 284146129753LL;
int16_t x363 = -1;
int64_t x366 = INT64_MAX;
int8_t x367 = INT8_MIN;
uint64_t t84 = 1783LLU;
uint32_t x382 = UINT32_MAX;
uint64_t x385 = UINT64_MAX;
int8_t x393 = INT8_MIN;
int16_t x397 = -1;
uint64_t x398 = 15191849LLU;
int32_t x402 = INT32_MIN;
static int64_t x405 = -1LL;
uint64_t x414 = UINT64_MAX;
int16_t x449 = INT16_MAX;
volatile int32_t t99 = 93253;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 17097709LLU;
	volatile int8_t x3 = -1;
	uint8_t x4 = 15U;
	volatile int32_t t0 = -41;

	t0 = ((x1<x2)*(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	volatile uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 14U;
	volatile int32_t x12 = 6473;
	int32_t t1 = -6;

	t1 = ((x9<x10)*(x11-x12));

	if (t1 != -6459) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	uint16_t x14 = UINT16_MAX;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MIN;
	uint64_t t2 = 8351218270797875LLU;

	t2 = ((x13<x14)*(x15-x16));

	if (t2 != 32767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 455U;
	uint64_t x18 = 279LLU;
	static int16_t x19 = INT16_MIN;
	volatile int64_t x20 = -90786LL;
	int64_t t3 = 2886LL;

	t3 = ((x17<x18)*(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 13U;
	int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MAX;
	static volatile uint64_t t4 = 19853695616LLU;

	t4 = ((x21<x22)*(x23-x24));

	if (t4 != 2147483648LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = -1;
	int64_t x27 = -1LL;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 2902157405654976LL;

	t5 = ((x25<x26)*(x27-x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 970552482U;
	static volatile int16_t x30 = -1;
	static volatile int8_t x31 = -1;
	volatile uint32_t x32 = UINT32_MAX;
	uint32_t t6 = 133492663U;

	t6 = ((x29<x30)*(x31-x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 14;
	int32_t x34 = -62290534;
	int64_t x35 = -477LL;
	int32_t x36 = 0;
	int64_t t7 = 949770073547223001LL;

	t7 = ((x33<x34)*(x35-x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int64_t x39 = -1LL;
	int64_t t8 = 1523825675LL;

	t8 = ((x37<x38)*(x39-x40));

	if (t8 != -82LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	static int64_t x42 = -1LL;
	static uint8_t x43 = UINT8_MAX;
	int32_t t9 = -5386;

	t9 = ((x41<x42)*(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x46 = 7268U;
	static int64_t x47 = -1LL;
	int32_t x48 = 0;

	t10 = ((x45<x46)*(x47-x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MIN;
	uint16_t x54 = 3276U;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MAX;
	static volatile int32_t t11 = -1;

	t11 = ((x53<x54)*(x55-x56));

	if (t11 != -32895) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	static volatile int64_t x58 = INT64_MAX;

	t12 = ((x57<x58)*(x59-x60));

	if (t12 != 4294966624U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = 74U;
	volatile int8_t x62 = -32;
	int8_t x64 = -13;

	t13 = ((x61<x62)*(x63-x64));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = 116U;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t14 = -7;

	t14 = ((x65<x66)*(x67-x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t15 = -2613195171572994LL;

	t15 = ((x69<x70)*(x71-x72));

	if (t15 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = 1;
	int16_t x74 = INT16_MIN;

	t16 = ((x73<x74)*(x75-x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 1LLU;
	int8_t x78 = INT8_MIN;
	volatile int64_t x79 = -273335594LL;
	volatile int64_t x80 = INT64_MIN;
	int64_t t17 = -119362LL;

	t17 = ((x77<x78)*(x79-x80));

	if (t17 != 9223372036581440214LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 6210329931831LLU;
	int8_t x82 = INT8_MAX;
	int8_t x83 = -1;
	volatile int32_t x84 = -3221602;

	t18 = ((x81<x82)*(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	static uint64_t x88 = UINT64_MAX;
	uint64_t t19 = 528LLU;

	t19 = ((x85<x86)*(x87-x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 3424U;
	uint16_t x92 = 16U;
	uint32_t t20 = 122450U;

	t20 = ((x89<x90)*(x91-x92));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 7698U;
	uint32_t x94 = 7U;
	int64_t x95 = -46443580207773293LL;
	int16_t x96 = INT16_MIN;
	volatile int64_t t21 = 5190072874348LL;

	t21 = ((x93<x94)*(x95-x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x98 = INT8_MIN;
	static uint16_t x99 = 421U;
	static uint16_t x100 = UINT16_MAX;
	int32_t t22 = 50805;

	t22 = ((x97<x98)*(x99-x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MIN;
	int64_t x103 = INT64_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int64_t t23 = -977901518871LL;

	t23 = ((x101<x102)*(x103-x104));

	if (t23 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	int32_t x108 = -1898;
	int64_t t24 = -4475363461277270LL;

	t24 = ((x105<x106)*(x107-x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 1;
	int16_t x110 = INT16_MAX;
	static uint32_t x111 = UINT32_MAX;
	uint32_t t25 = UINT32_MAX;

	t25 = ((x109<x110)*(x111-x112));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = 501555LLU;
	uint32_t x114 = 2414U;
	volatile uint32_t t26 = 55225195U;

	t26 = ((x113<x114)*(x115-x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 2118933939122251570LLU;
	uint8_t x118 = UINT8_MAX;
	int64_t x119 = -34600LL;
	int8_t x120 = 2;
	int64_t t27 = -1012689745309379858LL;

	t27 = ((x117<x118)*(x119-x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MAX;
	static int8_t x122 = 1;
	volatile int32_t x123 = INT32_MIN;
	volatile int16_t x124 = -58;
	int32_t t28 = -6713;

	t28 = ((x121<x122)*(x123-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = 2U;
	int32_t x130 = -1;
	uint64_t x131 = 3800985810900480LLU;
	volatile uint16_t x132 = 14504U;

	t29 = ((x129<x130)*(x131-x132));

	if (t29 != 3800985810885976LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int8_t x138 = -1;
	int32_t x139 = -4;
	int64_t x140 = -845322227LL;
	volatile int64_t t30 = -268362449391LL;

	t30 = ((x137<x138)*(x139-x140));

	if (t30 != 845322223LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	static uint16_t x142 = UINT16_MAX;
	static uint8_t x143 = 3U;
	static volatile uint8_t x144 = 18U;
	volatile int32_t t31 = 93942;

	t31 = ((x141<x142)*(x143-x144));

	if (t31 != -15) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 1U;
	int32_t x146 = -1;
	static int32_t x148 = INT32_MIN;
	int64_t t32 = -61613944LL;

	t32 = ((x145<x146)*(x147-x148));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t33 = 120U;

	t33 = ((x149<x150)*(x151-x152));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x153 = 64U;
	int8_t x154 = INT8_MAX;
	static volatile uint32_t t34 = 1U;

	t34 = ((x153<x154)*(x155-x156));

	if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = INT64_MAX;
	static uint32_t x158 = UINT32_MAX;
	volatile int8_t x159 = INT8_MAX;
	static int8_t x160 = 1;
	static volatile int32_t t35 = 6712505;

	t35 = ((x157<x158)*(x159-x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x166 = 49U;
	volatile int32_t x168 = -857019;
	volatile int32_t t36 = -108;

	t36 = ((x165<x166)*(x167-x168));

	if (t36 != 857274) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = 13043U;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = INT8_MIN;

	t37 = ((x169<x170)*(x171-x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x173 = INT16_MAX;
	int32_t x174 = INT32_MAX;
	uint32_t x176 = 35U;
	volatile uint64_t t38 = 88151075LLU;

	t38 = ((x173<x174)*(x175-x176));

	if (t38 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 47362692U;
	int8_t x178 = -6;
	int32_t x179 = -1;
	int8_t x180 = INT8_MIN;
	static int32_t t39 = 14409170;

	t39 = ((x177<x178)*(x179-x180));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	static uint32_t x184 = 587182580U;
	uint32_t t40 = 45U;

	t40 = ((x181<x182)*(x183-x184));

	if (t40 != 3707846125U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = -642;
	int8_t x187 = 0;
	static volatile int64_t x188 = 1078931921LL;

	t41 = ((x185<x186)*(x187-x188));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	int64_t x190 = -570189707LL;
	uint32_t x191 = UINT32_MAX;
	static volatile uint64_t t42 = 965727552LLU;

	t42 = ((x189<x190)*(x191-x192));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = -1;
	volatile uint32_t x196 = 1277154473U;
	uint32_t t43 = 879U;

	t43 = ((x193<x194)*(x195-x196));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MAX;
	int8_t x199 = 3;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t44 = 202668114598905656LLU;

	t44 = ((x197<x198)*(x199-x200));

	if (t44 != 4LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	volatile int8_t x202 = 1;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = 76U;

	t45 = ((x201<x202)*(x203-x204));

	if (t45 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x207 = 30610209;
	static int16_t x208 = -610;
	volatile int32_t t46 = 3264602;

	t46 = ((x205<x206)*(x207-x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	volatile uint64_t x210 = 119409364496195513LLU;
	uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t47 = 2815047383963355LLU;

	t47 = ((x209<x210)*(x211-x212));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	int64_t x214 = INT64_MIN;
	static uint32_t x215 = 120563U;
	int32_t x216 = -10070;

	t48 = ((x213<x214)*(x215-x216));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = -1;
	int8_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	int16_t x220 = -1;
	static volatile int32_t t49 = 4;

	t49 = ((x217<x218)*(x219-x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x221 = 0U;
	uint16_t x222 = 0U;
	volatile int16_t x223 = INT16_MIN;
	uint64_t x224 = 24557104482506LLU;
	volatile uint64_t t50 = 736LLU;

	t50 = ((x221<x222)*(x223-x224));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = -31881810735LL;
	int8_t x226 = 1;
	int16_t x227 = -1;
	uint8_t x228 = 104U;
	volatile int32_t t51 = -17063499;

	t51 = ((x225<x226)*(x227-x228));

	if (t51 != -105) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x234 = -28;
	int8_t x235 = -6;
	int64_t x236 = 523571081894125LL;

	t52 = ((x233<x234)*(x235-x236));

	if (t52 != -523571081894131LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x238 = -162360;
	volatile uint32_t x239 = UINT32_MAX;
	volatile uint32_t t53 = 308U;

	t53 = ((x237<x238)*(x239-x240));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = 0;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = -3585;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t54 = 1U;

	t54 = ((x241<x242)*(x243-x244));

	if (t54 != 4294963712U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = 38;
	static int64_t x248 = INT64_MIN;
	int64_t t55 = -750784936339608LL;

	t55 = ((x245<x246)*(x247-x248));

	if (t55 != 9219177320213797306LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -14;
	volatile uint8_t x250 = UINT8_MAX;
	uint32_t x252 = UINT32_MAX;
	int64_t t56 = -6591605693628LL;

	t56 = ((x249<x250)*(x251-x252));

	if (t56 != 628838444777402LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = 50U;
	static int64_t x254 = 182700264133330864LL;
	uint64_t x255 = 10953568589942LLU;
	int64_t x256 = INT64_MIN;
	uint64_t t57 = 603619365751LLU;

	t57 = ((x253<x254)*(x255-x256));

	if (t57 != 9223382990423365750LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x258 = INT8_MAX;
	static uint32_t x259 = 869144U;
	volatile uint64_t x260 = UINT64_MAX;

	t58 = ((x257<x258)*(x259-x260));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MAX;
	volatile int32_t t59 = -573925394;

	t59 = ((x261<x262)*(x263-x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x265 = 215167015LLU;
	volatile int64_t x266 = INT64_MAX;
	uint64_t x267 = 170968601001182486LLU;
	uint16_t x268 = UINT16_MAX;
	volatile uint64_t t60 = 10451LLU;

	t60 = ((x265<x266)*(x267-x268));

	if (t60 != 170968601001116951LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = -240;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MIN;
	uint64_t t61 = 98LLU;

	t61 = ((x269<x270)*(x271-x272));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x273 = INT32_MIN;
	static uint64_t x274 = 15240400222LLU;
	uint64_t x275 = 121457797612402065LLU;
	int32_t x276 = INT32_MAX;

	t62 = ((x273<x274)*(x275-x276));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = -1;
	volatile int32_t t63 = -137631;

	t63 = ((x277<x278)*(x279-x280));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x282 = INT32_MAX;
	int16_t x283 = 318;
	volatile int16_t x284 = INT16_MIN;
	int32_t t64 = -1;

	t64 = ((x281<x282)*(x283-x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x285 = 1050242LLU;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = -1;
	int32_t t65 = 21093353;

	t65 = ((x285<x286)*(x287-x288));

	if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = -107;
	uint64_t x290 = 370828LLU;
	int32_t x291 = INT32_MAX;
	volatile uint64_t x292 = 203672028716LLU;
	static uint64_t t66 = 26348LLU;

	t66 = ((x289<x290)*(x291-x292));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MAX;
	int32_t t67 = -6;

	t67 = ((x297<x298)*(x299-x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x301 = -1;
	uint64_t x302 = UINT64_MAX;
	uint8_t x304 = 1U;
	uint32_t t68 = 160U;

	t68 = ((x301<x302)*(x303-x304));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x311 = INT16_MAX;

	t69 = ((x309<x310)*(x311-x312));

	if (t69 != 32640) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = INT64_MIN;
	static int32_t x314 = INT32_MAX;
	int16_t x315 = 286;
	int16_t x316 = -3422;

	t70 = ((x313<x314)*(x315-x316));

	if (t70 != 3708) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = -1LL;
	volatile int8_t x319 = -1;
	uint32_t x320 = 165927692U;
	volatile uint32_t t71 = 307092U;

	t71 = ((x317<x318)*(x319-x320));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = 16105U;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = INT16_MIN;

	t72 = ((x321<x322)*(x323-x324));

	if (t72 != 98303) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x325 = UINT32_MAX;
	int16_t x326 = 15;
	int8_t x327 = INT8_MIN;
	volatile int32_t x328 = -1;
	volatile int32_t t73 = 54;

	t73 = ((x325<x326)*(x327-x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x329 = -1;
	uint32_t x330 = UINT32_MAX;
	int64_t x332 = INT64_MIN;
	static volatile int64_t t74 = -2839149LL;

	t74 = ((x329<x330)*(x331-x332));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = 0;
	volatile int64_t x334 = INT64_MIN;
	static volatile uint8_t x335 = UINT8_MAX;
	int16_t x336 = -16;
	static volatile int32_t t75 = -149464;

	t75 = ((x333<x334)*(x335-x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x337 = -2666584LL;
	int8_t x339 = -1;
	volatile int32_t x340 = INT32_MAX;

	t76 = ((x337<x338)*(x339-x340));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x341 = 1917695343430LLU;
	int32_t x342 = INT32_MAX;
	volatile int32_t x343 = -1;
	int8_t x344 = -5;
	int32_t t77 = -3;

	t77 = ((x341<x342)*(x343-x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x346 = 1U;
	int8_t x348 = INT8_MAX;
	int64_t t78 = 10LL;

	t78 = ((x345<x346)*(x347-x348));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = -1;
	volatile int16_t x350 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	volatile int64_t x352 = INT64_MAX;

	t79 = ((x349<x350)*(x351-x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x356 = INT8_MAX;
	volatile uint32_t t80 = 17311U;

	t80 = ((x353<x354)*(x355-x356));

	if (t80 != 4294967168U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = -1;
	int32_t x358 = 10531;
	int64_t x360 = -1LL;

	t81 = ((x357<x358)*(x359-x360));

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x361 = UINT8_MAX;
	static uint16_t x362 = UINT16_MAX;
	int64_t x364 = INT64_MIN;
	static int64_t t82 = INT64_MAX;

	t82 = ((x361<x362)*(x363-x364));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x368 = 95388U;
	uint32_t t83 = 402535826U;

	t83 = ((x365<x366)*(x367-x368));

	if (t83 != 4294871780U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	static volatile int16_t x376 = -518;

	t84 = ((x373<x374)*(x375-x376));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = 698LL;
	volatile int16_t x379 = INT16_MIN;
	int8_t x380 = 1;
	int32_t t85 = 28681;

	t85 = ((x377<x378)*(x379-x380));

	if (t85 != -32769) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t86 = 6580959U;

	t86 = ((x381<x382)*(x383-x384));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MAX;
	static int64_t x388 = -1LL;
	volatile int64_t t87 = -1529741699867LL;

	t87 = ((x385<x386)*(x387-x388));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x394 = 0;
	int16_t x395 = -95;
	int64_t x396 = INT64_MIN;
	int64_t t88 = -10791258736443033LL;

	t88 = ((x393<x394)*(x395-x396));

	if (t88 != 9223372036854775713LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x399 = -3425944364672440LL;
	uint32_t x400 = 94U;
	int64_t t89 = -1153981417280LL;

	t89 = ((x397<x398)*(x399-x400));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = -1282;
	uint8_t x403 = 7U;
	volatile int32_t x404 = INT32_MAX;
	int32_t t90 = -21;

	t90 = ((x401<x402)*(x403-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x406 = 28U;
	int16_t x407 = INT16_MIN;
	volatile int16_t x408 = INT16_MIN;
	static int32_t t91 = 75533;

	t91 = ((x405<x406)*(x407-x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x413 = INT8_MAX;
	int32_t x415 = INT32_MIN;
	int16_t x416 = -6;
	volatile int32_t t92 = 57014657;

	t92 = ((x413<x414)*(x415-x416));

	if (t92 != -2147483642) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int8_t x418 = 0;
	int8_t x419 = -5;
	volatile uint8_t x420 = 6U;
	volatile int32_t t93 = 11676649;

	t93 = ((x417<x418)*(x419-x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x421 = -9;
	uint16_t x422 = UINT16_MAX;
	static int64_t x423 = INT64_MAX;
	static uint8_t x424 = UINT8_MAX;
	volatile int64_t t94 = -13144LL;

	t94 = ((x421<x422)*(x423-x424));

	if (t94 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x425 = -874LL;
	uint64_t x426 = 714331132619744LLU;
	int16_t x427 = -34;
	uint64_t x428 = 1190LLU;
	uint64_t t95 = 216LLU;

	t95 = ((x425<x426)*(x427-x428));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = 3U;
	uint64_t x438 = 94LLU;
	int32_t x439 = -1;
	static uint32_t x440 = 1654076U;
	static volatile uint32_t t96 = 61U;

	t96 = ((x437<x438)*(x439-x440));

	if (t96 != 4293313219U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x441 = INT32_MIN;
	static uint64_t x442 = 267573012453359LLU;
	volatile int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MIN;
	volatile int32_t t97 = 2291886;

	t97 = ((x441<x442)*(x443-x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = INT64_MIN;
	static int16_t x447 = -675;
	static int64_t x448 = INT64_MIN;
	volatile int64_t t98 = 664240098412LL;

	t98 = ((x445<x446)*(x447-x448));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x450 = 1;
	static int16_t x451 = -1;
	volatile uint16_t x452 = 11222U;

	t99 = ((x449<x450)*(x451-x452));

	if (t99 != 0) { NG(); } else { ; }
	
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

