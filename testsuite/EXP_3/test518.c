#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
uint32_t x3 = 387325462U;
static uint16_t x7 = 1U;
volatile uint64_t x8 = 101500704590345323LLU;
int64_t x11 = -1LL;
int32_t x13 = -1;
int64_t x15 = -899890441LL;
int64_t t6 = 29123001551LL;
volatile int64_t t8 = -31247LL;
static int16_t x39 = 62;
volatile int32_t x41 = INT32_MIN;
int8_t x46 = INT8_MAX;
uint32_t x52 = UINT32_MAX;
static int16_t x54 = -1502;
uint64_t x55 = 7536LLU;
static int32_t x59 = -1;
int16_t x67 = -1;
volatile uint32_t t16 = 4U;
volatile uint32_t x69 = 172217564U;
int32_t t18 = 178;
uint8_t x83 = UINT8_MAX;
int32_t t20 = -5;
uint8_t x98 = 26U;
int32_t x100 = INT32_MIN;
uint64_t x104 = 519790940741082081LLU;
static uint64_t t23 = 1280668LLU;
static uint32_t x108 = 4U;
static volatile int8_t x110 = 14;
int16_t x111 = -1;
volatile int32_t x115 = 210057658;
int8_t x120 = INT8_MIN;
volatile int8_t x126 = INT8_MAX;
int8_t x129 = 1;
uint8_t x138 = 3U;
int64_t x141 = 1992LL;
volatile int8_t x148 = INT8_MAX;
volatile int16_t x149 = -1;
int8_t x152 = INT8_MIN;
int32_t x155 = INT32_MIN;
int64_t x157 = INT64_MAX;
uint64_t x160 = 11834483622605050LLU;
volatile uint64_t t38 = 3103814382154129080LLU;
int32_t x174 = INT32_MIN;
volatile uint8_t x175 = UINT8_MAX;
int16_t x180 = INT16_MIN;
volatile uint64_t t41 = 8100509LLU;
static uint8_t x183 = 57U;
int32_t x187 = -878;
static volatile uint16_t x191 = 8327U;
int64_t x192 = -1LL;
int8_t x194 = 0;
int16_t x195 = INT16_MAX;
volatile int32_t t45 = 5731;
int32_t x202 = INT32_MAX;
uint16_t x203 = 15253U;
static uint32_t x216 = 747U;
volatile uint32_t t49 = 72U;
uint64_t x217 = UINT64_MAX;
int16_t x224 = INT16_MIN;
int32_t x228 = INT32_MIN;
volatile int8_t x230 = -1;
int64_t x231 = -1LL;
uint32_t x232 = UINT32_MAX;
uint8_t x237 = 58U;
uint64_t x238 = 5524LLU;
uint16_t x249 = 8279U;
uint64_t x253 = 3661135968218092114LLU;
static uint8_t x262 = UINT8_MAX;
uint64_t t58 = 256524669340LLU;
uint32_t x265 = 500677U;
int32_t x267 = INT32_MIN;
int64_t t61 = 51561586079LL;
static uint16_t x279 = 66U;
int64_t x280 = INT64_MIN;
static int8_t x288 = 1;
static uint8_t x299 = 17U;
uint8_t x301 = 7U;
static int8_t x320 = INT8_MIN;
volatile int16_t x321 = INT16_MIN;
volatile uint64_t x322 = 1288552716LLU;
int16_t x334 = INT16_MAX;
uint32_t x336 = 762U;
uint32_t t71 = 109U;
int16_t x343 = INT16_MIN;
int64_t x346 = 111590662218866544LL;
int8_t x350 = INT8_MIN;
int32_t x356 = -87961899;
int8_t x368 = INT8_MIN;
uint64_t x373 = UINT64_MAX;
static uint32_t x375 = 10U;
int32_t x376 = INT32_MIN;
static int32_t x377 = 1;
int32_t t80 = 781394784;
uint64_t t82 = 126LLU;
uint32_t x394 = 3199717U;
uint16_t x395 = 786U;
int32_t x400 = 28;
int32_t x403 = -1;
volatile int8_t x405 = INT8_MIN;
volatile uint8_t x411 = 0U;
volatile uint64_t t88 = 1002648604123167LLU;
int8_t x419 = INT8_MAX;
static int64_t x425 = -121LL;
static volatile int32_t x429 = -1525631;
int32_t x441 = INT32_MIN;
int8_t x451 = -17;
uint64_t t97 = 3977039LLU;
int8_t x462 = 35;
int32_t x465 = INT32_MIN;


void f0(void) {
	int64_t x2 = 1454091753568171LL;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 161593991410101749LLU;

	t0 = ((x1+x2)&(x3/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = INT8_MIN;
	volatile uint64_t t1 = 127653599LLU;

	t1 = ((x5+x6)&(x7/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static int32_t x10 = -1;
	int64_t x12 = 701LL;
	volatile int64_t t2 = -1LL;

	t2 = ((x9+x10)&(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 0U;
	uint32_t x16 = 21U;
	volatile int64_t t3 = 197252LL;

	t3 = ((x13+x14)&(x15/x16));

	if (t3 != -42851925LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	static int32_t x18 = INT32_MAX;
	volatile int16_t x19 = INT16_MIN;
	uint32_t x20 = 44836U;
	uint32_t t4 = 1576670862U;

	t4 = ((x17+x18)&(x19/x20));

	if (t4 != 95792U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 30302444359609078LLU;
	uint32_t x22 = UINT32_MAX;
	static volatile int32_t x23 = 43429733;
	static int64_t x24 = -1LL;
	uint64_t t5 = 30705393269LLU;

	t5 = ((x21+x22)&(x23/x24));

	if (t5 != 30302448612622481LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	uint32_t x26 = 16224103U;
	int16_t x27 = INT16_MAX;
	int64_t x28 = INT64_MAX;

	t6 = ((x25+x26)&(x27/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 163454LLU;
	int64_t x30 = 157698200LL;
	int64_t x31 = 97648996291670155LL;
	int32_t x32 = INT32_MIN;
	static uint64_t t7 = 18152LLU;

	t7 = ((x29+x30)&(x31/x32));

	if (t7 != 155713794LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = 7507;
	int16_t x34 = INT16_MAX;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MIN;

	t8 = ((x33+x34)&(x35/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static int16_t x38 = -437;
	int8_t x40 = -26;
	static uint64_t t9 = 156311250389668LLU;

	t9 = ((x37+x38)&(x39/x40));

	if (t9 != 18446744073709551178LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = -466LL;

	t10 = ((x41+x42)&(x43/x44));

	if (t10 != 256LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 104LLU;
	volatile uint32_t x47 = 7084917U;
	int32_t x48 = -7;
	volatile uint64_t t11 = 91LLU;

	t11 = ((x45+x46)&(x47/x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 11042954771LLU;
	int32_t x50 = -1;
	volatile uint32_t x51 = 222687U;
	uint64_t t12 = 93006LLU;

	t12 = ((x49+x50)&(x51/x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = UINT32_MAX;
	int64_t x56 = 46470702403LL;
	volatile uint64_t t13 = 27902153LLU;

	t13 = ((x53+x54)&(x55/x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x58 = 6742413U;
	volatile uint8_t x60 = UINT8_MAX;
	static volatile int64_t t14 = -316294270LL;

	t14 = ((x57+x58)&(x59/x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile uint64_t x62 = UINT64_MAX;
	int8_t x63 = 0;
	static uint32_t x64 = 2983985U;
	volatile uint64_t t15 = 3719378480103297LLU;

	t15 = ((x61+x62)&(x63/x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 19;
	uint32_t x66 = UINT32_MAX;
	int32_t x68 = INT32_MIN;

	t16 = ((x65+x66)&(x67/x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	int64_t x71 = -15750158778889811LL;
	int32_t x72 = -3;
	volatile int64_t t17 = 2074985601230LL;

	t17 = ((x69+x70)&(x71/x72));

	if (t17 != 33640475LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -5;
	int16_t x78 = -1;
	uint8_t x79 = 76U;
	static int16_t x80 = -3;

	t18 = ((x77+x78)&(x79/x80));

	if (t18 != -30) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	static uint16_t x82 = UINT16_MAX;
	static int8_t x84 = -1;
	int32_t t19 = -4;

	t19 = ((x81+x82)&(x83/x84));

	if (t19 != 98048) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	uint8_t x90 = 14U;
	int32_t x91 = -1;
	int8_t x92 = -1;

	t20 = ((x89+x90)&(x91/x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	static int64_t x94 = -1LL;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = -1;
	volatile int64_t t21 = 11589031809611LL;

	t21 = ((x93+x94)&(x95/x96));

	if (t21 != -65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -183LL;
	int8_t x99 = INT8_MIN;
	int64_t t22 = -3941347808379LL;

	t22 = ((x97+x98)&(x99/x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = 1702932674732LL;
	int8_t x103 = INT8_MIN;

	t23 = ((x101+x102)&(x103/x104));

	if (t23 != 32LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 79U;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile uint32_t t24 = 1274132U;

	t24 = ((x105+x106)&(x107/x108));

	if (t24 != 1073709135U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 4688357;
	uint32_t x112 = UINT32_MAX;
	uint32_t t25 = 106825090U;

	t25 = ((x109+x110)&(x111/x112));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MAX;
	uint8_t x114 = 0U;
	static int16_t x116 = INT16_MIN;
	int32_t t26 = 165430764;

	t26 = ((x113+x114)&(x115/x116));

	if (t26 != 2147477238) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 17168324518522288LL;
	int64_t x118 = -1LL;
	int32_t x119 = -1;
	static volatile int64_t t27 = -114385LL;

	t27 = ((x117+x118)&(x119/x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	uint16_t x122 = 68U;
	volatile int8_t x123 = -10;
	static int8_t x124 = INT8_MIN;
	static int32_t t28 = -19494;

	t28 = ((x121+x122)&(x123/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = 4U;
	int32_t x127 = -1;
	int32_t x128 = 1;
	int32_t t29 = 96;

	t29 = ((x125+x126)&(x127/x128));

	if (t29 != 131) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 9U;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 16224U;
	int32_t t30 = 1392660;

	t30 = ((x129+x130)&(x131/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -2731772367192LL;
	int8_t x134 = -1;
	int8_t x135 = INT8_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int64_t t31 = 3364694461926970900LL;

	t31 = ((x133+x134)&(x135/x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	static volatile int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	volatile int64_t t32 = -263221228361976LL;

	t32 = ((x137+x138)&(x139/x140));

	if (t32 != 281474976710656LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	static volatile uint16_t x144 = UINT16_MAX;
	static volatile int64_t t33 = 73040LL;

	t33 = ((x141+x142)&(x143/x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 1129LL;
	uint8_t x146 = 2U;
	static uint16_t x147 = 20U;
	volatile int64_t t34 = 7077479LL;

	t34 = ((x145+x146)&(x147/x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -1;
	int8_t x151 = INT8_MIN;
	volatile int32_t t35 = -1;

	t35 = ((x149+x150)&(x151/x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 1U;
	uint64_t x154 = UINT64_MAX;
	int64_t x156 = INT64_MAX;
	uint64_t t36 = 1097902LLU;

	t36 = ((x153+x154)&(x155/x156));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x158 = 4336125195477LLU;
	int32_t x159 = INT32_MIN;
	static volatile uint64_t t37 = 54193633280LLU;

	t37 = ((x157+x158)&(x159/x160));

	if (t37 != 1044LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x165 = 2LLU;
	int64_t x166 = -1LL;
	static int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;

	t38 = ((x165+x166)&(x167/x168));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = 1967;
	uint64_t x170 = 3777604LLU;
	int64_t x171 = 17930054912470950LL;
	int8_t x172 = INT8_MIN;
	uint64_t t39 = 503975LLU;

	t39 = ((x169+x170)&(x171/x172));

	if (t39 != 525089LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 2U;
	int8_t x176 = INT8_MIN;
	static uint32_t t40 = 268897U;

	t40 = ((x173+x174)&(x175/x176));

	if (t40 != 2147483650U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = -3;

	t41 = ((x177+x178)&(x179/x180));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	volatile int16_t x182 = INT16_MAX;
	uint32_t x184 = 31279U;
	uint32_t t42 = 214U;

	t42 = ((x181+x182)&(x183/x184));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -59526;
	int16_t x186 = -11541;
	static int8_t x188 = -1;
	static int32_t t43 = 12654168;

	t43 = ((x185+x186)&(x187/x188));

	if (t43 != 612) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MIN;
	int64_t t44 = -204LL;

	t44 = ((x189+x190)&(x191/x192));

	if (t44 != 9223372036854734713LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 46U;
	uint8_t x196 = 19U;

	t45 = ((x193+x194)&(x195/x196));

	if (t45 != 44) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -1;
	int64_t x204 = INT64_MIN;
	volatile int64_t t46 = 59LL;

	t46 = ((x201+x202)&(x203/x204));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = -904913;
	volatile int64_t x206 = -79LL;
	int64_t x207 = 18723530LL;
	uint8_t x208 = 57U;
	int64_t t47 = 1LL;

	t47 = ((x205+x206)&(x207/x208));

	if (t47 != 32LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 70U;
	static volatile int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	uint32_t x212 = UINT32_MAX;
	static volatile int64_t t48 = 76907LL;

	t48 = ((x209+x210)&(x211/x212));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x213 = INT32_MAX;
	int16_t x214 = -23;
	int16_t x215 = INT16_MAX;

	t49 = ((x213+x214)&(x215/x216));

	if (t49 != 40U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile uint64_t t50 = 404LLU;

	t50 = ((x217+x218)&(x219/x220));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x221 = 6U;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 28512U;
	int32_t t51 = -76981;

	t51 = ((x221+x222)&(x223/x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = -17263623077797908LL;
	int16_t x226 = -15;
	volatile uint32_t x227 = 264988U;
	static volatile int64_t t52 = 8LL;

	t52 = ((x225+x226)&(x227/x228));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = UINT16_MAX;
	static volatile int64_t t53 = 2781LL;

	t53 = ((x229+x230)&(x231/x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x239 = 0;
	int64_t x240 = 1895094922429LL;
	uint64_t t54 = 21LLU;

	t54 = ((x237+x238)&(x239/x240));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	volatile uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	uint32_t t55 = 724131U;

	t55 = ((x241+x242)&(x243/x244));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x250 = -61;
	int16_t x251 = 122;
	int64_t x252 = INT64_MIN;
	volatile int64_t t56 = -861054269789LL;

	t56 = ((x249+x250)&(x251/x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x254 = 31404757864LLU;
	static uint8_t x255 = 3U;
	uint64_t x256 = 8240903LLU;
	volatile uint64_t t57 = 11LLU;

	t57 = ((x253+x254)&(x255/x256));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 542150095924LLU;
	volatile int64_t x263 = INT64_MIN;
	uint64_t x264 = 3943LLU;

	t58 = ((x261+x262)&(x263/x264));

	if (t58 != 507521291314LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x266 = 23U;
	int16_t x268 = INT16_MIN;
	volatile uint32_t t59 = 50701915U;

	t59 = ((x265+x266)&(x267/x268));

	if (t59 != 65536U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = 9393;
	static int64_t x271 = 251021167312269147LL;
	volatile int64_t x272 = -29009839646247635LL;
	static volatile int64_t t60 = -1583LL;

	t60 = ((x269+x270)&(x271/x272));

	if (t60 != 9264LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x273 = -1;
	int32_t x274 = INT32_MAX;
	volatile int64_t x275 = INT64_MAX;
	static int32_t x276 = 550;

	t61 = ((x273+x274)&(x275/x276));

	if (t61 != 960510868LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = 139689;
	int32_t x278 = -9689;
	volatile int64_t t62 = -13203405871LL;

	t62 = ((x277+x278)&(x279/x280));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x285 = 0;
	uint32_t x286 = 0U;
	static int64_t x287 = INT64_MIN;
	volatile int64_t t63 = -669341LL;

	t63 = ((x285+x286)&(x287/x288));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x290 = 1534700305LLU;
	int32_t x291 = INT32_MIN;
	volatile int16_t x292 = 7;
	volatile uint64_t t64 = 647LLU;

	t64 = ((x289+x290)&(x291/x292));

	if (t64 != 18446744072789986048LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x293 = INT8_MAX;
	volatile int16_t x294 = -1;
	static int16_t x295 = 24;
	static uint8_t x296 = 9U;
	volatile int32_t t65 = -213908116;

	t65 = ((x293+x294)&(x295/x296));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x297 = 18U;
	int8_t x298 = -1;
	uint32_t x300 = 24U;
	uint32_t t66 = 5119U;

	t66 = ((x297+x298)&(x299/x300));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x302 = -7825486;
	static uint64_t x303 = 81396756864LLU;
	uint32_t x304 = 1111U;
	volatile uint64_t t67 = 21349487700953384LLU;

	t67 = ((x301+x302)&(x303/x304));

	if (t67 != 67667217LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x313 = 8;
	uint64_t x314 = 107928557561301LLU;
	static int32_t x315 = -449;
	int16_t x316 = -1;
	volatile uint64_t t68 = 522676096009LLU;

	t68 = ((x313+x314)&(x315/x316));

	if (t68 != 449LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = -1;
	int64_t x318 = -854173LL;
	static volatile uint32_t x319 = 986U;
	static volatile int64_t t69 = 232696652122LL;

	t69 = ((x317+x318)&(x319/x320));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x323 = -126;
	uint64_t x324 = 5826367LLU;
	uint64_t t70 = 236628LLU;

	t70 = ((x321+x322)&(x323/x324));

	if (t70 != 134234116LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = UINT16_MAX;
	volatile int8_t x335 = INT8_MIN;

	t71 = ((x333+x334)&(x335/x336));

	if (t71 != 342U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = INT32_MIN;
	uint64_t x344 = 2344545887847LLU;
	uint64_t t72 = 9LLU;

	t72 = ((x341+x342)&(x343/x344));

	if (t72 != 3619LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = -1;
	volatile uint32_t x347 = 37U;
	volatile int8_t x348 = INT8_MAX;
	volatile int64_t t73 = -1390238503210650914LL;

	t73 = ((x345+x346)&(x347/x348));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x349 = 6U;
	uint8_t x351 = 5U;
	volatile int16_t x352 = -2;
	volatile int32_t t74 = 1;

	t74 = ((x349+x350)&(x351/x352));

	if (t74 != -122) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = 30U;
	volatile uint64_t x354 = 6271142746511924375LLU;
	int32_t x355 = 390509;
	volatile uint64_t t75 = 1LLU;

	t75 = ((x353+x354)&(x355/x356));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = 93;
	int16_t x358 = 19;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 1LLU;
	volatile uint64_t t76 = 2150175112LLU;

	t76 = ((x357+x358)&(x359/x360));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x365 = 9647064LLU;
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	uint64_t t77 = 513324LLU;

	t77 = ((x365+x366)&(x367/x368));

	if (t77 != 256LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x369 = UINT8_MAX;
	uint8_t x370 = UINT8_MAX;
	static uint8_t x371 = 116U;
	int64_t x372 = INT64_MIN;
	volatile int64_t t78 = -50002555LL;

	t78 = ((x369+x370)&(x371/x372));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x374 = INT64_MAX;
	uint64_t t79 = 283LLU;

	t79 = ((x373+x374)&(x375/x376));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x378 = INT32_MIN;
	int16_t x379 = -3;
	int16_t x380 = INT16_MIN;

	t80 = ((x377+x378)&(x379/x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MAX;
	uint32_t x382 = 175U;
	int64_t x383 = 1407505287LL;
	volatile int16_t x384 = INT16_MIN;
	int64_t t81 = 66945258340LL;

	t81 = ((x381+x382)&(x383/x384));

	if (t81 != 38LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x385 = -7924488LL;
	int16_t x386 = 96;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = UINT64_MAX;

	t82 = ((x385+x386)&(x387/x388));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x389 = 3LLU;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 1U;
	static int64_t x392 = INT64_MIN;
	uint64_t t83 = 354877LLU;

	t83 = ((x389+x390)&(x391/x392));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x393 = INT16_MIN;
	static int8_t x396 = INT8_MAX;
	uint32_t t84 = 117946U;

	t84 = ((x393+x394)&(x395/x396));

	if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = -1;
	int8_t x399 = -8;
	static volatile int32_t t85 = -4417;

	t85 = ((x397+x398)&(x399/x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = INT32_MIN;
	static uint64_t x402 = 1159878857086548572LLU;
	static uint32_t x404 = 217U;
	volatile uint64_t t86 = 1097328360171556LLU;

	t86 = ((x401+x402)&(x403/x404));

	if (t86 != 18874972LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x406 = -1LL;
	static uint64_t x407 = 2415310004217LLU;
	uint8_t x408 = 90U;
	uint64_t t87 = 1LLU;

	t87 = ((x405+x406)&(x407/x408));

	if (t87 != 26836777824LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	uint64_t x412 = UINT64_MAX;

	t88 = ((x409+x410)&(x411/x412));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x413 = INT16_MIN;
	int64_t x414 = -5883669LL;
	static int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	static int64_t t89 = -124256LL;

	t89 = ((x413+x414)&(x415/x416));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x417 = 5U;
	static int64_t x418 = INT64_MIN;
	int8_t x420 = INT8_MIN;
	int64_t t90 = 239LL;

	t90 = ((x417+x418)&(x419/x420));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x426 = INT64_MAX;
	uint32_t x427 = 13621322U;
	volatile int16_t x428 = INT16_MAX;
	static int64_t t91 = 3321296531556360LL;

	t91 = ((x425+x426)&(x427/x428));

	if (t91 != 390LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x430 = -1;
	int16_t x431 = INT16_MAX;
	uint16_t x432 = 1U;
	volatile int32_t t92 = -1;

	t92 = ((x429+x430)&(x431/x432));

	if (t92 != 14464) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 63U;
	uint16_t x439 = 26648U;
	uint16_t x440 = UINT16_MAX;
	int32_t t93 = -3504606;

	t93 = ((x437+x438)&(x439/x440));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x442 = 344921753U;
	int8_t x443 = INT8_MIN;
	volatile int8_t x444 = -1;
	static volatile uint32_t t94 = 4109U;

	t94 = ((x441+x442)&(x443/x444));

	if (t94 != 128U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x445 = 65603193937767LLU;
	uint16_t x446 = 0U;
	static volatile uint8_t x447 = 33U;
	uint16_t x448 = 1U;
	uint64_t t95 = 7158801LLU;

	t95 = ((x445+x446)&(x447/x448));

	if (t95 != 33LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = 1863U;
	static volatile uint64_t x450 = 21LLU;
	int64_t x452 = INT64_MIN;
	volatile uint64_t t96 = 1138959LLU;

	t96 = ((x449+x450)&(x451/x452));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = -1LL;
	static uint64_t x454 = 8053108816893LLU;
	int16_t x455 = 2;
	uint64_t x456 = 114LLU;

	t97 = ((x453+x454)&(x455/x456));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = INT8_MIN;
	uint32_t x463 = 6U;
	volatile int16_t x464 = INT16_MAX;
	static volatile uint32_t t98 = 31U;

	t98 = ((x461+x462)&(x463/x464));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x466 = 410817294310LLU;
	volatile uint32_t x467 = 55725U;
	static int16_t x468 = -1920;
	volatile uint64_t t99 = 519558044844LLU;

	t99 = ((x465+x466)&(x467/x468));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

