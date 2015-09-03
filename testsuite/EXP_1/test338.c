#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = INT16_MAX;
static int64_t x23 = -5029661486LL;
static volatile int64_t t7 = 555LL;
static uint32_t x36 = 7U;
int64_t t8 = 1167LL;
uint64_t x46 = 2859850372792144976LLU;
static int32_t x51 = INT32_MIN;
int16_t x55 = INT16_MIN;
volatile int8_t x58 = INT8_MIN;
static uint64_t x59 = UINT64_MAX;
static volatile uint64_t t13 = 5092LLU;
int16_t x67 = INT16_MIN;
int16_t x73 = 157;
static int16_t x75 = -60;
volatile int16_t x88 = 7235;
int64_t x95 = INT64_MIN;
int64_t x96 = INT64_MIN;
int8_t x102 = INT8_MAX;
int32_t x105 = -8;
uint64_t x108 = 1040666811928515415LLU;
uint64_t x109 = 644804047LLU;
static int16_t x118 = 1414;
int64_t x120 = INT64_MIN;
uint64_t x125 = 4024733397LLU;
volatile uint64_t t28 = 8633682804242686132LLU;
volatile int64_t x129 = -1LL;
int32_t x133 = -1;
int16_t x137 = INT16_MIN;
volatile int16_t x138 = -163;
uint32_t x142 = 308U;
volatile int8_t x143 = 0;
volatile uint32_t t32 = 3342U;
int16_t x148 = INT16_MIN;
int64_t x151 = -731683045588LL;
int16_t x159 = INT16_MIN;
volatile int64_t x170 = INT64_MIN;
uint64_t x172 = 18992569909847LLU;
int64_t x173 = -47400722623LL;
uint16_t x177 = UINT16_MAX;
volatile int64_t t41 = -48049459LL;
volatile int8_t x188 = -2;
volatile uint8_t x192 = 76U;
static volatile int32_t x197 = -204894431;
int8_t x208 = -1;
int8_t x210 = INT8_MIN;
volatile int64_t t48 = -872068360432LL;
volatile int64_t t49 = -20091663LL;
uint64_t x232 = UINT64_MAX;
static volatile int64_t x247 = 1LL;
uint64_t x261 = 23592414563LLU;
static volatile int64_t x284 = INT64_MIN;
int64_t t61 = 58555909025512LL;
static int16_t x290 = INT16_MIN;
volatile uint64_t t65 = 1674392LLU;
volatile int32_t x303 = INT32_MAX;
int16_t x305 = INT16_MIN;
volatile uint64_t x306 = UINT64_MAX;
static int16_t x307 = -1;
int8_t x309 = INT8_MAX;
int32_t t73 = 66720819;
int8_t x333 = INT8_MAX;
static int8_t x336 = 1;
uint8_t x337 = UINT8_MAX;
static int8_t x355 = INT8_MIN;
int16_t x356 = -1;
static int8_t x357 = -1;
int32_t x358 = -1;
int32_t t85 = 61;
int32_t x389 = INT32_MIN;
int8_t x392 = INT8_MIN;
static int64_t t89 = -121LL;
int8_t x403 = 1;
uint64_t x405 = UINT64_MAX;
uint32_t x409 = 0U;
volatile int32_t x411 = INT32_MAX;
int8_t x412 = INT8_MIN;
int16_t x420 = 1354;
volatile int8_t x431 = -2;
volatile uint32_t x432 = UINT32_MAX;
int16_t x433 = -250;
static int64_t x435 = INT64_MIN;
volatile uint64_t x436 = 132587302LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = -1LL;
	int32_t x3 = -1597240;
	int32_t x4 = 5284;
	static uint64_t t0 = 350145872228162649LLU;

	t0 = (((x1-x2)^x3)^x4);

	if (t0 != 18446744073707959404LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 6;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -117091979;

	t1 = (((x5-x6)^x7)^x8);

	if (t1 != 2147450872) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	volatile int8_t x10 = 5;
	static volatile int8_t x11 = INT8_MIN;
	int64_t x12 = -1LL;
	int64_t t2 = 4LL;

	t2 = (((x9-x10)^x11)^x12);

	if (t2 != 5LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint8_t x14 = 1U;
	int64_t x15 = INT64_MAX;
	int64_t x16 = 15190933LL;
	static volatile int64_t t3 = 1711041606LL;

	t3 = (((x13-x14)^x15)^x16);

	if (t3 != -9223372036839585003LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 70U;
	static int32_t x19 = INT32_MIN;
	uint32_t x20 = 660U;
	static uint32_t t4 = 37959509U;

	t4 = (((x17-x18)^x19)^x20);

	if (t4 != 2147482925U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 51;
	static volatile int16_t x22 = -14;
	int8_t x24 = 1;
	volatile int64_t t5 = 28LL;

	t5 = (((x21-x22)^x23)^x24);

	if (t5 != -5029661550LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	uint32_t x26 = 254895U;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 1938540248LLU;
	volatile uint64_t t6 = 1321183354390280LLU;

	t6 = (((x25-x26)^x27)^x28);

	if (t6 != 2356665718LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = -1LL;
	static int64_t x31 = INT64_MIN;
	uint16_t x32 = UINT16_MAX;

	t7 = (((x29-x30)^x31)^x32);

	if (t7 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = 115180833903830LL;
	int16_t x34 = INT16_MIN;
	static volatile int16_t x35 = -12790;

	t8 = (((x33-x34)^x35)^x36);

	if (t8 != -115180833940773LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static int32_t x38 = INT32_MAX;
	static int32_t x39 = INT32_MAX;
	uint8_t x40 = 11U;
	volatile int64_t t9 = 353078122703028LL;

	t9 = (((x37-x38)^x39)^x40);

	if (t9 != -12LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	int8_t x47 = -1;
	int64_t x48 = 514783784060LL;
	uint64_t t10 = 12LLU;

	t10 = (((x45-x46)^x47)^x48);

	if (t10 != 2859850313895671852LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = 24;
	uint8_t x50 = 1U;
	int8_t x52 = 8;
	static volatile int32_t t11 = -12362765;

	t11 = (((x49-x50)^x51)^x52);

	if (t11 != -2147483617) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 3203U;
	int32_t x54 = INT32_MAX;
	int16_t x56 = -1719;
	uint32_t t12 = 1105783U;

	t12 = (((x53-x54)^x55)^x56);

	if (t12 != 2147513805U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 7;
	static volatile int8_t x60 = INT8_MAX;

	t13 = (((x57-x58)^x59)^x60);

	if (t13 != 18446744073709551367LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 0U;
	volatile uint64_t x62 = 2397009LLU;
	int32_t x63 = -2306909;
	volatile int64_t x64 = INT64_MAX;
	static uint64_t t14 = 82948446488137467LLU;

	t14 = (((x61-x62)^x63)^x64);

	if (t14 != 9223372036854276083LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 108;
	int16_t x66 = INT16_MIN;
	int32_t x68 = 1151;
	static volatile int32_t t15 = -87;

	t15 = (((x65-x66)^x67)^x68);

	if (t15 != -64493) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 135661501U;
	int8_t x70 = 2;
	uint8_t x71 = 4U;
	int16_t x72 = INT16_MAX;
	volatile uint32_t t16 = 239U;

	t16 = (((x69-x70)^x71)^x72);

	if (t16 != 135690304U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x74 = UINT16_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t17 = -21534464;

	t17 = (((x73-x74)^x75)^x76);

	if (t17 != -2147418278) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 0U;
	static uint16_t x82 = UINT16_MAX;
	static uint64_t x83 = 471829476491LLU;
	int64_t x84 = -1LL;
	volatile uint64_t t18 = 559710718783170LLU;

	t18 = (((x81-x82)^x83)^x84);

	if (t18 != 471829482357LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 112392U;
	volatile int16_t x86 = -345;
	int32_t x87 = INT32_MAX;
	volatile uint32_t t19 = 4683U;

	t19 = (((x85-x86)^x87)^x88);

	if (t19 != 2147376093U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = 883855198051208LL;
	uint8_t x91 = 4U;
	uint8_t x92 = 0U;
	int64_t t20 = 1320385LL;

	t20 = (((x89-x90)^x91)^x92);

	if (t20 != -883850903083917LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = 6;
	int64_t x94 = -77342285155110767LL;
	static int64_t t21 = 77177770249808LL;

	t21 = (((x93-x94)^x95)^x96);

	if (t21 != 77342285155110773LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x101 = 54629U;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MAX;
	uint32_t t22 = 50U;

	t22 = (((x101-x102)^x103)^x104);

	if (t22 != 2147527449U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x106 = INT16_MAX;
	int8_t x107 = 25;
	uint64_t t23 = 147590200261920479LLU;

	t23 = (((x105-x106)^x107)^x108);

	if (t23 != 17406077261781068983LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x110 = UINT16_MAX;
	static int32_t x111 = 56;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t24 = 5824407LLU;

	t24 = (((x109-x110)^x111)^x112);

	if (t24 != 18446744073064813160LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = 356631;
	static int16_t x116 = INT16_MIN;
	static volatile uint64_t t25 = 4031205206755155366LLU;

	t25 = (((x113-x114)^x115)^x116);

	if (t25 != 18446744073709220119LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	int64_t t26 = 13140878279068LL;

	t26 = (((x117-x118)^x119)^x120);

	if (t26 != 9223372036854774021LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	volatile uint8_t x122 = 12U;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = 90500573LLU;
	volatile uint64_t t27 = 211504464LLU;

	t27 = (((x121-x122)^x123)^x124);

	if (t27 != 9223372036764275246LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 1883046U;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = -50;

	t28 = (((x125-x126)^x127)^x128);

	if (t28 != 4022840545LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x130 = 1;
	int8_t x131 = 58;
	int64_t x132 = -52313204LL;
	int64_t t29 = 0LL;

	t29 = (((x129-x130)^x131)^x132);

	if (t29 != 52313160LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = -104308850;
	volatile int16_t x135 = INT16_MAX;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t30 = 43431U;

	t30 = (((x133-x134)^x135)^x136);

	if (t30 != 4190642289U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x139 = INT8_MIN;
	volatile uint8_t x140 = 82U;
	static volatile int32_t t31 = -12;

	t31 = (((x137-x138)^x139)^x140);

	if (t31 != 32625) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	int32_t x144 = -1;

	t32 = (((x141-x142)^x143)^x144);

	if (t32 != 33075U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	int64_t x146 = -1LL;
	static int8_t x147 = INT8_MIN;
	static uint64_t t33 = 143370LLU;

	t33 = (((x145-x146)^x147)^x148);

	if (t33 != 32640LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 1U;
	int64_t x150 = 37958924010LL;
	static int8_t x152 = -1;
	volatile int64_t t34 = -13306199132099765LL;

	t34 = (((x149-x150)^x151)^x152);

	if (t34 != -698153596476LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = UINT16_MAX;
	uint64_t x154 = 2LLU;
	volatile int16_t x155 = -1;
	static int16_t x156 = INT16_MAX;
	volatile uint64_t t35 = 255LLU;

	t35 = (((x153-x154)^x155)^x156);

	if (t35 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	int8_t x160 = 19;
	volatile uint64_t t36 = 88903634778640605LLU;

	t36 = (((x157-x158)^x159)^x160);

	if (t36 != 18LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x161 = INT64_MIN;
	int8_t x162 = 0;
	int16_t x163 = -1;
	int32_t x164 = INT32_MAX;
	volatile int64_t t37 = -5129277LL;

	t37 = (((x161-x162)^x163)^x164);

	if (t37 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MAX;
	uint8_t x166 = 87U;
	static int16_t x167 = -218;
	volatile int8_t x168 = -29;
	volatile int32_t t38 = -89968540;

	t38 = (((x165-x166)^x167)^x168);

	if (t38 != 237) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	int8_t x171 = 0;
	uint64_t t39 = 8544LLU;

	t39 = (((x169-x170)^x171)^x172);

	if (t39 != 9223353042586436183LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MIN;
	static volatile int64_t t40 = -483LL;

	t40 = (((x173-x174)^x175)^x176);

	if (t40 != 47400788157LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = INT16_MAX;
	volatile int16_t x179 = 113;
	int64_t x180 = -1LL;

	t41 = (((x177-x178)^x179)^x180);

	if (t41 != -32882LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	int16_t x182 = INT16_MAX;
	volatile uint64_t x183 = 287686226829LLU;
	int16_t x184 = INT16_MIN;
	uint64_t t42 = 1005842LLU;

	t42 = (((x181-x182)^x183)^x184);

	if (t42 != 287686226829LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = -182;
	uint64_t x186 = 0LLU;
	uint16_t x187 = UINT16_MAX;
	uint64_t t43 = 63994418705272203LLU;

	t43 = (((x185-x186)^x187)^x188);

	if (t43 != 65355LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MIN;
	int64_t t44 = -330074567LL;

	t44 = (((x189-x190)^x191)^x192);

	if (t44 != 9223372034707325004LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -13134;
	static volatile int16_t x194 = -1;
	static int8_t x195 = -28;
	uint8_t x196 = 83U;
	volatile int32_t t45 = 5192228;

	t45 = (((x193-x194)^x195)^x196);

	if (t45 != 13060) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x198 = 0LL;
	volatile int16_t x199 = 0;
	int32_t x200 = -1;
	static int64_t t46 = -11909572108LL;

	t46 = (((x197-x198)^x199)^x200);

	if (t46 != 204894430LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -1LL;
	static volatile int32_t x206 = INT32_MIN;
	static volatile uint64_t x207 = 27279LLU;
	static uint64_t t47 = 2273388355262696LLU;

	t47 = (((x205-x206)^x207)^x208);

	if (t47 != 18446744071562095247LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = -3508657413294091LL;
	volatile int32_t x211 = -1;
	int8_t x212 = 17;

	t48 = (((x209-x210)^x211)^x212);

	if (t48 != 3508657413293979LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -1;
	int32_t x218 = INT32_MAX;
	static volatile int64_t x219 = -1LL;
	volatile uint16_t x220 = 32U;

	t49 = (((x217-x218)^x219)^x220);

	if (t49 != 2147483615LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 50U;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	uint16_t x224 = UINT16_MAX;
	static int32_t t50 = -2368271;

	t50 = (((x221-x222)^x223)^x224);

	if (t50 != -65358) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x225 = 3578U;
	int8_t x226 = 41;
	int64_t x227 = -34225095728LL;
	int16_t x228 = -12;
	int64_t t51 = -23644LL;

	t51 = (((x225-x226)^x227)^x228);

	if (t51 != 34225097205LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -1;
	volatile int8_t x230 = INT8_MIN;
	static uint32_t x231 = 255306214U;
	volatile uint64_t t52 = 951466255281588LLU;

	t52 = (((x229-x230)^x231)^x232);

	if (t52 != 18446744073454245478LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = 0U;
	volatile uint64_t x238 = 1399472LLU;
	int16_t x239 = -24;
	int8_t x240 = 1;
	static volatile uint64_t t53 = 95390LLU;

	t53 = (((x237-x238)^x239)^x240);

	if (t53 != 1399481LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = 0;
	uint64_t x242 = 69152397737071328LLU;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -1LL;
	uint64_t t54 = 0LLU;

	t54 = (((x241-x242)^x243)^x244);

	if (t54 != 9292524434591847135LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = INT64_MIN;
	volatile int32_t x246 = INT32_MIN;
	uint64_t x248 = 2514736757870LLU;
	volatile uint64_t t55 = 254LLU;

	t55 = (((x245-x246)^x247)^x248);

	if (t55 != 9223374549444050031LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MAX;
	uint16_t x258 = UINT16_MAX;
	volatile int32_t x259 = 5964;
	int8_t x260 = INT8_MAX;
	int64_t t56 = -6661320749420LL;

	t56 = (((x257-x258)^x259)^x260);

	if (t56 != 9223372036854716211LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x262 = 1077967342087LLU;
	int8_t x263 = INT8_MIN;
	static int32_t x264 = INT32_MIN;
	uint64_t t57 = 203LLU;

	t57 = (((x261-x262)^x263)^x264);

	if (t57 != 18446743021403020508LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x269 = 2U;
	int16_t x270 = INT16_MAX;
	volatile int16_t x271 = -1;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t58 = -88197611;

	t58 = (((x269-x270)^x271)^x272);

	if (t58 != -32644) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x273 = 6LL;
	int16_t x274 = 8;
	int32_t x275 = -11553;
	uint32_t x276 = 242U;
	int64_t t59 = -3607486852147203674LL;

	t59 = (((x273-x274)^x275)^x276);

	if (t59 != 11731LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = -1;
	static uint8_t x278 = 47U;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MIN;
	int64_t t60 = -197300LL;

	t60 = (((x277-x278)^x279)^x280);

	if (t60 != -9223372036854743088LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	volatile int8_t x283 = 3;

	t61 = (((x281-x282)^x283)^x284);

	if (t61 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = INT8_MIN;
	static volatile int16_t x286 = INT16_MIN;
	static uint32_t x287 = UINT32_MAX;
	static int16_t x288 = -5382;
	uint32_t t62 = 130239U;

	t62 = (((x285-x286)^x287)^x288);

	if (t62 != 27269U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x289 = 3177U;
	int32_t x291 = 116954;
	uint16_t x292 = 4U;
	volatile uint32_t t63 = 440U;

	t63 = (((x289-x290)^x291)^x292);

	if (t63 != 83127U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MAX;
	int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;
	int64_t t64 = -1099725626691692677LL;

	t64 = (((x293-x294)^x295)^x296);

	if (t64 != 255LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x297 = 3335961416LLU;
	static volatile int64_t x298 = -1LL;
	uint16_t x299 = 17034U;
	int64_t x300 = -236875702170410715LL;

	t65 = (((x297-x298)^x299)^x300);

	if (t65 != 18209868368295549158LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x301 = 2663U;
	static uint16_t x302 = 184U;
	uint32_t x304 = UINT32_MAX;
	uint32_t t66 = 499319U;

	t66 = (((x301-x302)^x303)^x304);

	if (t66 != 2147486127U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x308 = INT64_MIN;
	uint64_t t67 = 83286357LLU;

	t67 = (((x305-x306)^x307)^x308);

	if (t67 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x310 = INT16_MAX;
	static volatile int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t68 = -989133;

	t68 = (((x309-x310)^x311)^x312);

	if (t68 != -2147451136) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 327265115U;
	int32_t x315 = 93;
	int32_t x316 = -1;
	static uint64_t t69 = 610473715497287400LLU;

	t69 = (((x313-x314)^x315)^x316);

	if (t69 != 327265030LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x317 = -1;
	int32_t x318 = -5717;
	static int8_t x319 = -19;
	int8_t x320 = INT8_MAX;
	volatile int32_t t70 = 248347886;

	t70 = (((x317-x318)^x319)^x320);

	if (t70 != -5690) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = 7930;
	int32_t x322 = -455601843;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t71 = 2935543;

	t71 = (((x321-x322)^x323)^x324);

	if (t71 != 455609773) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x325 = 9U;
	int8_t x326 = -13;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile uint32_t t72 = 10784933U;

	t72 = (((x325-x326)^x327)^x328);

	if (t72 != 22U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = -1;
	static uint16_t x330 = 97U;
	int8_t x331 = -1;
	uint8_t x332 = 20U;

	t73 = (((x329-x330)^x331)^x332);

	if (t73 != 117) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x334 = 1039U;
	volatile int32_t x335 = 1383;
	volatile int32_t t74 = -266033;

	t74 = (((x333-x334)^x335)^x336);

	if (t74 != -1770) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x338 = -1;
	int32_t x339 = 561551001;
	volatile int64_t x340 = INT64_MIN;
	volatile int64_t t75 = -53391467LL;

	t75 = (((x337-x338)^x339)^x340);

	if (t75 != -9223372036293224551LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x341 = INT32_MIN;
	static uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MAX;
	int8_t x344 = -1;
	uint64_t t76 = 133049370453LLU;

	t76 = (((x341-x342)^x343)^x344);

	if (t76 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = 1020U;
	volatile int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	int32_t t77 = -32762;

	t77 = (((x345-x346)^x347)^x348);

	if (t77 != -2147482750) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = -6769;
	int16_t x351 = 373;
	int32_t x352 = 4887;
	volatile int32_t t78 = 137;

	t78 = (((x349-x350)^x351)^x352);

	if (t78 != 67602) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = 25791LLU;
	volatile uint64_t t79 = 854919335625876311LLU;

	t79 = (((x353-x354)^x355)^x356);

	if (t79 != 18446744071562042174LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x359 = 2690U;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t80 = -15284878;

	t80 = (((x357-x358)^x359)^x360);

	if (t80 != 2147480957) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x361 = INT16_MIN;
	volatile uint64_t x362 = 1133300549LLU;
	uint32_t x363 = 36535759U;
	int64_t x364 = INT64_MIN;
	volatile uint64_t t81 = 6395739559249927476LLU;

	t81 = (((x361-x362)^x363)^x364);

	if (t81 != 9223372035753757044LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x369 = 2097531176U;
	static uint8_t x370 = 2U;
	int64_t x371 = -1LL;
	int16_t x372 = -11;
	int64_t t82 = -625963393697LL;

	t82 = (((x369-x370)^x371)^x372);

	if (t82 != 2097531180LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	int32_t x375 = 1;
	int16_t x376 = INT16_MAX;
	int64_t t83 = 283830911401086727LL;

	t83 = (((x373-x374)^x375)^x376);

	if (t83 != 32641LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = 1U;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	int8_t x380 = 23;
	static volatile int64_t t84 = -2712619LL;

	t84 = (((x377-x378)^x379)^x380);

	if (t84 != -9223372036854743018LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x381 = 19U;
	int32_t x382 = 696;
	int32_t x383 = INT32_MAX;
	int16_t x384 = 34;

	t85 = (((x381-x382)^x383)^x384);

	if (t85 != -2147483002) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = -1;
	int64_t x386 = INT64_MAX;
	static int8_t x387 = -1;
	int16_t x388 = INT16_MAX;
	static volatile int64_t t86 = -390559LL;

	t86 = (((x385-x386)^x387)^x388);

	if (t86 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 245U;
	volatile uint64_t t87 = 1124980448549693505LLU;

	t87 = (((x389-x390)^x391)^x392);

	if (t87 != 2147483508LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 15U;
	uint16_t x395 = 13U;
	static volatile uint8_t x396 = 12U;
	int32_t t88 = 5671425;

	t88 = (((x393-x394)^x395)^x396);

	if (t88 != 65521) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x397 = INT64_MAX;
	static uint8_t x398 = 21U;
	volatile int8_t x399 = INT8_MIN;
	int64_t x400 = -3718129818256LL;

	t89 = (((x397-x398)^x399)^x400);

	if (t89 != 9223368318724957466LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 0;
	int32_t x402 = 68;
	int64_t x404 = INT64_MAX;
	volatile int64_t t90 = 2553876164443475LL;

	t90 = (((x401-x402)^x403)^x404);

	if (t90 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x406 = -1;
	volatile int32_t x407 = -1;
	int32_t x408 = -36;
	volatile uint64_t t91 = 105304564LLU;

	t91 = (((x405-x406)^x407)^x408);

	if (t91 != 35LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x410 = 795712630LL;
	volatile int64_t t92 = 563730228957LL;

	t92 = (((x409-x410)^x411)^x412);

	if (t92 != 1351771125LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = -32373;
	static int16_t x414 = -15985;
	static volatile uint8_t x415 = 123U;
	static int8_t x416 = INT8_MAX;
	static volatile int32_t t93 = -49245188;

	t93 = (((x413-x414)^x415)^x416);

	if (t93 != -16392) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x417 = -1LL;
	int16_t x418 = -6130;
	uint64_t x419 = 830095284449403LLU;
	volatile uint64_t t94 = 2450LLU;

	t94 = (((x417-x418)^x419)^x420);

	if (t94 != 830095284445888LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x421 = INT32_MIN;
	int8_t x422 = -1;
	int8_t x423 = INT8_MAX;
	static uint32_t x424 = UINT32_MAX;
	uint32_t t95 = 115173U;

	t95 = (((x421-x422)^x423)^x424);

	if (t95 != 2147483521U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x425 = -1;
	static int16_t x426 = INT16_MIN;
	uint16_t x427 = 17774U;
	static volatile int64_t x428 = 13702010LL;
	volatile int64_t t96 = -730LL;

	t96 = (((x425-x426)^x427)^x428);

	if (t96 != 13707755LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 3LLU;
	uint16_t x430 = UINT16_MAX;
	volatile uint64_t t97 = 852710939447957LLU;

	t97 = (((x429-x430)^x431)^x432);

	if (t97 != 4294901765LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x434 = INT16_MAX;
	uint64_t t98 = 5636341LLU;

	t98 = (((x433-x434)^x435)^x436);

	if (t98 != 9223372036722155553LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x437 = UINT32_MAX;
	uint8_t x438 = 7U;
	volatile uint8_t x439 = 1U;
	uint64_t x440 = UINT64_MAX;
	uint64_t t99 = 1LLU;

	t99 = (((x437-x438)^x439)^x440);

	if (t99 != 18446744069414584326LLU) { NG(); } else { ; }
	
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

