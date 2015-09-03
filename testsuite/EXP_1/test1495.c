#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = 46U;
static uint64_t x15 = UINT64_MAX;
uint16_t x28 = 2U;
static int16_t x30 = -59;
static volatile uint32_t t7 = 3241U;
volatile uint8_t x43 = 81U;
int64_t x45 = INT64_MIN;
static volatile int32_t t11 = 20911;
volatile int32_t t12 = -11337;
volatile uint32_t x56 = 32142U;
volatile int32_t t14 = 0;
static int32_t x64 = INT32_MIN;
volatile int32_t x66 = 21470;
uint8_t x71 = 0U;
int32_t t17 = -19510076;
volatile int64_t t18 = -352048481LL;
int32_t x77 = -1;
int16_t x79 = INT16_MIN;
int8_t x85 = INT8_MIN;
int8_t x86 = 1;
volatile int8_t x87 = INT8_MIN;
volatile uint32_t x91 = 5U;
static int64_t x104 = INT64_MIN;
static volatile int8_t x112 = INT8_MIN;
static int32_t t27 = -853;
int32_t x113 = 66840;
int16_t x115 = INT16_MIN;
uint16_t x117 = 3U;
int32_t x120 = INT32_MAX;
volatile int64_t t29 = 1299LL;
int8_t x121 = -2;
int32_t x126 = INT32_MIN;
volatile int32_t t31 = 2445714;
uint32_t x133 = 1U;
int16_t x136 = 0;
static int64_t x138 = 784562144801797LL;
uint32_t x142 = 1197282426U;
int8_t x152 = INT8_MAX;
volatile uint64_t t38 = 20902LLU;
int32_t x164 = -229;
static volatile int32_t t40 = -52;
int16_t x170 = INT16_MIN;
volatile int32_t t43 = INT32_MIN;
int16_t x177 = 1;
int32_t t45 = -1;
int8_t x189 = INT8_MIN;
volatile int64_t x192 = INT64_MAX;
volatile int64_t t47 = 1092990587495LL;
uint16_t x194 = UINT16_MAX;
static int16_t x196 = INT16_MIN;
volatile int32_t t48 = 832163239;
volatile int64_t x200 = -13473156LL;
int32_t x201 = 4008602;
volatile int16_t x208 = -2714;
uint8_t x209 = 42U;
uint32_t x217 = UINT32_MAX;
static uint32_t x224 = UINT32_MAX;
volatile uint64_t t57 = 854241LLU;
int32_t x247 = INT32_MAX;
volatile int8_t x253 = 9;
static uint64_t t65 = 110422115356594LLU;
volatile int32_t x279 = INT32_MIN;
int16_t x281 = -40;
static int32_t x282 = -1;
int32_t x291 = 951355078;
volatile int32_t t72 = 270;
volatile uint8_t x296 = 6U;
static volatile int16_t x299 = INT16_MIN;
uint32_t x300 = UINT32_MAX;
static volatile int32_t t77 = -206;
static uint64_t x323 = 1LLU;
volatile uint64_t t80 = 2805901LLU;
int64_t x328 = 10512147939LL;
int32_t x332 = -38;
int64_t x340 = 128687LL;
uint32_t x341 = UINT32_MAX;
uint32_t x343 = 1U;
int16_t x344 = INT16_MIN;
volatile int64_t t86 = INT64_MAX;
static int16_t x349 = INT16_MIN;
volatile uint64_t t87 = 824804285650546666LLU;
int64_t x353 = 368262300LL;
int16_t x359 = INT16_MAX;
uint16_t x360 = 654U;
static int32_t t89 = -9329302;
int32_t x361 = INT32_MIN;
int16_t x369 = 1;
static int32_t x377 = INT32_MIN;
static int32_t t94 = -6;
uint16_t x385 = 6353U;
int32_t x388 = 69009893;
int32_t x389 = 2478;
int32_t x396 = 2462558;
volatile int32_t t98 = 25;
volatile uint16_t x400 = 444U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	static uint64_t x3 = 6806896414242LLU;
	static volatile int64_t x4 = -26094020294639LL;
	uint64_t t0 = 1942LLU;

	t0 = (((x1<x2)&x3)^x4);

	if (t0 != 18446717979689256977LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	uint16_t x6 = 86U;
	int16_t x7 = -20;
	volatile int8_t x8 = -1;
	volatile int32_t t1 = 215928;

	t1 = (((x5<x6)&x7)^x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 9;
	int16_t x11 = -1;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -20;

	t2 = (((x9<x10)&x11)^x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	uint64_t x14 = 476LLU;
	int8_t x16 = -31;
	static volatile uint64_t t3 = 3611806884096LLU;

	t3 = (((x13<x14)&x15)^x16);

	if (t3 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint64_t x18 = 201LLU;
	volatile uint8_t x19 = 22U;
	uint64_t x20 = 1517677004293352617LLU;
	static volatile uint64_t t4 = 28268134524LLU;

	t4 = (((x17<x18)&x19)^x20);

	if (t4 != 1517677004293352617LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 890716558461011057LLU;
	static int64_t x23 = -1LL;
	uint8_t x24 = UINT8_MAX;
	int64_t t5 = 680825499LL;

	t5 = (((x21<x22)&x23)^x24);

	if (t5 != 255LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 16U;
	int32_t x26 = INT32_MIN;
	static uint32_t x27 = UINT32_MAX;
	static volatile uint32_t t6 = 31U;

	t6 = (((x25<x26)&x27)^x28);

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 6U;
	static int32_t x31 = 3;
	uint32_t x32 = 550791U;

	t7 = (((x29<x30)&x31)^x32);

	if (t7 != 550791U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 68U;
	volatile int8_t x34 = 1;
	int64_t x35 = INT64_MIN;
	int64_t x36 = -1LL;
	int64_t t8 = 9319LL;

	t8 = (((x33<x34)&x35)^x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 384LLU;
	static uint8_t x40 = UINT8_MAX;
	uint64_t t9 = 4403LLU;

	t9 = (((x37<x38)&x39)^x40);

	if (t9 != 255LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	static int64_t x42 = INT64_MIN;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 346696512;

	t10 = (((x41<x42)&x43)^x44);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x46 = 44U;
	int8_t x47 = 34;
	static int16_t x48 = -1;

	t11 = (((x45<x46)&x47)^x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -145012968757LL;
	uint32_t x50 = 12584U;
	static int16_t x51 = -1;
	int8_t x52 = INT8_MAX;

	t12 = (((x49<x50)&x51)^x52);

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 12U;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	uint32_t t13 = 12301U;

	t13 = (((x53<x54)&x55)^x56);

	if (t13 != 32142U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	volatile int16_t x59 = INT16_MIN;
	uint16_t x60 = 18U;

	t14 = (((x57<x58)&x59)^x60);

	if (t14 != 18) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = 874944711U;
	int64_t x62 = -1LL;
	uint64_t x63 = 629LLU;
	static volatile uint64_t t15 = 140027LLU;

	t15 = (((x61<x62)&x63)^x64);

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -1619;

	t16 = (((x65<x66)&x67)^x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -12;
	volatile int64_t x70 = INT64_MIN;
	static int8_t x72 = INT8_MIN;

	t17 = (((x69<x70)&x71)^x72);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	uint32_t x74 = 6666U;
	volatile int64_t x75 = 32700741LL;
	volatile int8_t x76 = INT8_MAX;

	t18 = (((x73<x74)&x75)^x76);

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 20;
	int8_t x80 = INT8_MAX;
	int32_t t19 = -1;

	t19 = (((x77<x78)&x79)^x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = 52;
	int16_t x83 = -1;
	uint64_t x84 = 112574LLU;
	static volatile uint64_t t20 = 160LLU;

	t20 = (((x81<x82)&x83)^x84);

	if (t20 != 112574LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x88 = 56987829LL;
	static int64_t t21 = -76236LL;

	t21 = (((x85<x86)&x87)^x88);

	if (t21 != 56987829LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MAX;
	int32_t x92 = 1;
	uint32_t t22 = 3523059U;

	t22 = (((x89<x90)&x91)^x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 1563;
	int32_t x94 = INT32_MIN;
	volatile int32_t x95 = 7728;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = (((x93<x94)&x95)^x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int64_t x98 = -22019036LL;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = -1;
	int32_t t24 = -9601;

	t24 = (((x97<x98)&x99)^x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 7635LLU;
	int8_t x103 = -1;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x101<x102)&x103)^x104);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	uint64_t x106 = 14087826873258116LLU;
	volatile int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 564184;

	t26 = (((x105<x106)&x107)^x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -47;
	int32_t x110 = INT32_MIN;
	static int8_t x111 = INT8_MIN;

	t27 = (((x109<x110)&x111)^x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x114 = 1917444U;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = 47675366;

	t28 = (((x113<x114)&x115)^x116);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -901;
	volatile int64_t x119 = 33833959539013LL;

	t29 = (((x117<x118)&x119)^x120);

	if (t29 != 2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = 58754410273LL;
	volatile uint64_t x123 = 162747615LLU;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t30 = 50LLU;

	t30 = (((x121<x122)&x123)^x124);

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 7U;
	int8_t x127 = -1;
	volatile int16_t x128 = -1;

	t31 = (((x125<x126)&x127)^x128);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	uint32_t x130 = 202796U;
	uint8_t x131 = 3U;
	int32_t x132 = -1;
	static int32_t t32 = -3;

	t32 = (((x129<x130)&x131)^x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = 31;
	static uint8_t x135 = 110U;
	volatile int32_t t33 = 0;

	t33 = (((x133<x134)&x135)^x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 0U;
	int32_t t34 = -15;

	t34 = (((x137<x138)&x139)^x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint64_t x143 = 8281LLU;
	static volatile int16_t x144 = -1;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (((x141<x142)&x143)^x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 3917410243159387308LL;
	static int8_t x146 = INT8_MIN;
	static uint64_t x147 = UINT64_MAX;
	int64_t x148 = -130026299258665LL;
	volatile uint64_t t36 = 4514468856540092LLU;

	t36 = (((x145<x146)&x147)^x148);

	if (t36 != 18446614047410292951LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	volatile int8_t x150 = INT8_MIN;
	int16_t x151 = -1;
	volatile int32_t t37 = -21301554;

	t37 = (((x149<x150)&x151)^x152);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	volatile int32_t x154 = INT32_MAX;
	uint64_t x155 = 71898040076299LLU;
	int16_t x156 = 3;

	t38 = (((x153<x154)&x155)^x156);

	if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -467LL;
	int8_t x158 = INT8_MAX;
	uint8_t x159 = 0U;
	uint64_t x160 = 51013LLU;
	uint64_t t39 = 37163046020704LLU;

	t39 = (((x157<x158)&x159)^x160);

	if (t39 != 51013LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 120U;
	uint32_t x162 = 2432627U;
	int32_t x163 = -1;

	t40 = (((x161<x162)&x163)^x164);

	if (t40 != -230) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = UINT8_MAX;
	uint8_t x166 = 0U;
	volatile int32_t x167 = INT32_MIN;
	uint32_t x168 = 967597U;
	volatile uint32_t t41 = 203127000U;

	t41 = (((x165<x166)&x167)^x168);

	if (t41 != 967597U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 13U;
	int64_t x171 = -10LL;
	int32_t x172 = INT32_MAX;
	int64_t t42 = -5894034942232LL;

	t42 = (((x169<x170)&x171)^x172);

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	volatile int32_t x176 = INT32_MIN;

	t43 = (((x173<x174)&x175)^x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 2757460026LLU;
	static volatile uint64_t t44 = 14604318154011LLU;

	t44 = (((x177<x178)&x179)^x180);

	if (t44 != 2757460026LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 3091U;
	int64_t x182 = INT64_MIN;
	int16_t x183 = 3351;
	int32_t x184 = -850662;

	t45 = (((x181<x182)&x183)^x184);

	if (t45 != -850662) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 58697;
	int32_t x186 = INT32_MIN;
	int8_t x187 = INT8_MAX;
	int8_t x188 = 1;
	int32_t t46 = -88975;

	t46 = (((x185<x186)&x187)^x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = UINT16_MAX;
	static int32_t x191 = -1;

	t47 = (((x189<x190)&x191)^x192);

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 0U;
	int32_t x195 = -1;

	t48 = (((x193<x194)&x195)^x196);

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 57U;
	int64_t x198 = INT64_MIN;
	static volatile int8_t x199 = INT8_MIN;
	int64_t t49 = 13122LL;

	t49 = (((x197<x198)&x199)^x200);

	if (t49 != -13473156LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = UINT8_MAX;
	static int16_t x203 = -1;
	volatile int64_t x204 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = (((x201<x202)&x203)^x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -705;
	uint16_t x206 = UINT16_MAX;
	static volatile int32_t x207 = INT32_MAX;
	int32_t t51 = -33820922;

	t51 = (((x205<x206)&x207)^x208);

	if (t51 != -2713) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	volatile uint8_t x211 = 30U;
	uint16_t x212 = UINT16_MAX;
	int32_t t52 = -1458;

	t52 = (((x209<x210)&x211)^x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	static int16_t x214 = INT16_MAX;
	uint64_t x215 = 60272421897LLU;
	static volatile int16_t x216 = INT16_MIN;
	volatile uint64_t t53 = 98094188LLU;

	t53 = (((x213<x214)&x215)^x216);

	if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 48U;
	volatile int32_t x219 = INT32_MAX;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t54 = INT64_MIN;

	t54 = (((x217<x218)&x219)^x220);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	uint16_t x222 = 856U;
	volatile uint32_t x223 = 17343U;
	uint32_t t55 = 471439947U;

	t55 = (((x221<x222)&x223)^x224);

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 1680066591U;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = INT8_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (((x225<x226)&x227)^x228);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	static uint32_t x230 = UINT32_MAX;
	uint32_t x231 = 481190127U;
	uint64_t x232 = 9096044600413LLU;

	t57 = (((x229<x230)&x231)^x232);

	if (t57 != 9096044600413LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	static int64_t x236 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (((x233<x234)&x235)^x236);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = UINT16_MAX;
	volatile int64_t x238 = -1LL;
	static uint64_t x239 = UINT64_MAX;
	static volatile int32_t x240 = -1;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x237<x238)&x239)^x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	int32_t x242 = INT32_MIN;
	uint16_t x243 = 16055U;
	int16_t x244 = 0;
	int32_t t60 = -193913761;

	t60 = (((x241<x242)&x243)^x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 5U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -827;

	t61 = (((x245<x246)&x247)^x248);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	volatile int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MIN;
	static int32_t x252 = 106161800;
	volatile int32_t t62 = 78863;

	t62 = (((x249<x250)&x251)^x252);

	if (t62 != 106161800) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t63 = INT32_MIN;

	t63 = (((x253<x254)&x255)^x256);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	volatile int8_t x258 = 9;
	static volatile int16_t x259 = INT16_MIN;
	int32_t x260 = 1;
	volatile int32_t t64 = 15;

	t64 = (((x257<x258)&x259)^x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = -1LL;
	int64_t x262 = -2LL;
	static int8_t x263 = INT8_MIN;
	uint64_t x264 = 352176LLU;

	t65 = (((x261<x262)&x263)^x264);

	if (t65 != 352176LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = 0;
	static int8_t x266 = 0;
	volatile int32_t x267 = -10221;
	static int64_t x268 = 2LL;
	volatile int64_t t66 = -23841671LL;

	t66 = (((x265<x266)&x267)^x268);

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int8_t x270 = -3;
	uint64_t x271 = UINT64_MAX;
	volatile int16_t x272 = INT16_MIN;
	volatile uint64_t t67 = 165887006LLU;

	t67 = (((x269<x270)&x271)^x272);

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 122662671014870036LL;
	volatile int16_t x274 = -1;
	static uint8_t x275 = 27U;
	uint64_t x276 = 4LLU;
	static uint64_t t68 = 17015672709416LLU;

	t68 = (((x273<x274)&x275)^x276);

	if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -847771870;
	uint64_t x278 = UINT64_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -1667;

	t69 = (((x277<x278)&x279)^x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x283 = -1;
	uint64_t x284 = 131472017LLU;
	uint64_t t70 = 1LLU;

	t70 = (((x281<x282)&x283)^x284);

	if (t70 != 131472016LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 2U;
	uint32_t x286 = 1U;
	int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	volatile int64_t t71 = -6713767LL;

	t71 = (((x285<x286)&x287)^x288);

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 24U;
	uint16_t x290 = 72U;
	static volatile uint8_t x292 = 3U;

	t72 = (((x289<x290)&x291)^x292);

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 91681007U;
	uint64_t x294 = UINT64_MAX;
	volatile int16_t x295 = -1;
	int32_t t73 = 1239;

	t73 = (((x293<x294)&x295)^x296);

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	uint8_t x298 = UINT8_MAX;
	uint32_t t74 = UINT32_MAX;

	t74 = (((x297<x298)&x299)^x300);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 38U;
	static int8_t x302 = INT8_MAX;
	volatile uint16_t x303 = 120U;
	static int32_t x304 = 1725;
	static int32_t t75 = 3;

	t75 = (((x301<x302)&x303)^x304);

	if (t75 != 1725) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = 63449397;
	uint32_t x307 = 197253U;
	static int32_t x308 = -6139191;
	static volatile uint32_t t76 = 104U;

	t76 = (((x305<x306)&x307)^x308);

	if (t76 != 4288828104U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 3U;
	int16_t x310 = INT16_MIN;
	volatile int8_t x311 = INT8_MIN;
	int32_t x312 = 828151730;

	t77 = (((x309<x310)&x311)^x312);

	if (t77 != 828151730) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 2U;
	static int8_t x316 = -1;
	int32_t t78 = 79;

	t78 = (((x313<x314)&x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = 8;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	volatile int64_t t79 = 1152187795LL;

	t79 = (((x317<x318)&x319)^x320);

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = 651U;
	volatile uint16_t x322 = 0U;
	int16_t x324 = INT16_MIN;

	t80 = (((x321<x322)&x323)^x324);

	if (t80 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 71947095891914346LL;
	static volatile int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	static int64_t t81 = 17898944LL;

	t81 = (((x325<x326)&x327)^x328);

	if (t81 != 10512147939LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = -1;
	int16_t x330 = INT16_MAX;
	uint16_t x331 = UINT16_MAX;
	volatile int32_t t82 = -2;

	t82 = (((x329<x330)&x331)^x332);

	if (t82 != -37) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 168194U;
	static int32_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = -2;
	int32_t t83 = -338337;

	t83 = (((x333<x334)&x335)^x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	static volatile int64_t x338 = -8296LL;
	int16_t x339 = INT16_MIN;
	int64_t t84 = -20692347323690372LL;

	t84 = (((x337<x338)&x339)^x340);

	if (t84 != 128687LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x342 = INT8_MIN;
	uint32_t t85 = 200385U;

	t85 = (((x341<x342)&x343)^x344);

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2896088LLU;
	int16_t x346 = INT16_MIN;
	int32_t x347 = 8;
	int64_t x348 = INT64_MAX;

	t86 = (((x345<x346)&x347)^x348);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x350 = -26;
	uint64_t x351 = 1695962LLU;
	int8_t x352 = INT8_MAX;

	t87 = (((x349<x350)&x351)^x352);

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MIN;
	volatile uint64_t x355 = UINT64_MAX;
	volatile int32_t x356 = -386951965;
	static uint64_t t88 = 265843443757782179LLU;

	t88 = (((x353<x354)&x355)^x356);

	if (t88 != 18446744073322599651LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int32_t x358 = -1;

	t89 = (((x357<x358)&x359)^x360);

	if (t89 != 654) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	static volatile int16_t x363 = 3;
	int16_t x364 = 1310;
	static int32_t t90 = 6192540;

	t90 = (((x361<x362)&x363)^x364);

	if (t90 != 1310) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 29867;
	volatile uint16_t x366 = 222U;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -1;
	volatile int64_t t91 = -806866192335LL;

	t91 = (((x365<x366)&x367)^x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MAX;
	int32_t x371 = 205965238;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = 51;

	t92 = (((x369<x370)&x371)^x372);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	static int8_t x374 = INT8_MAX;
	static uint32_t x375 = 357655528U;
	int32_t x376 = INT32_MIN;
	uint32_t t93 = 892409261U;

	t93 = (((x373<x374)&x375)^x376);

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = 7556;
	uint8_t x379 = 4U;
	int8_t x380 = -1;

	t94 = (((x377<x378)&x379)^x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 7498879188LLU;
	static int16_t x382 = INT16_MIN;
	volatile uint64_t x383 = 27086674LLU;
	int16_t x384 = INT16_MAX;
	volatile uint64_t t95 = 22259682674LLU;

	t95 = (((x381<x382)&x383)^x384);

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x386 = -24595;
	uint32_t x387 = 14759039U;
	volatile uint32_t t96 = 811096U;

	t96 = (((x385<x386)&x387)^x388);

	if (t96 != 69009893U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 1;
	volatile int8_t x391 = INT8_MAX;
	uint32_t x392 = UINT32_MAX;
	static volatile uint32_t t97 = UINT32_MAX;

	t97 = (((x389<x390)&x391)^x392);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	static int64_t x394 = 822390692084762916LL;
	volatile uint16_t x395 = 39U;

	t98 = (((x393<x394)&x395)^x396);

	if (t98 != 2462559) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 1;
	static int64_t x398 = 8667911110465LL;
	static int64_t x399 = -144851238442LL;
	int64_t t99 = -3413261LL;

	t99 = (((x397<x398)&x399)^x400);

	if (t99 != 444LL) { NG(); } else { ; }
	
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

