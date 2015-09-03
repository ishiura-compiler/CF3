#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 147LLU;
int8_t x8 = 3;
int32_t x10 = -130471083;
int16_t x12 = INT16_MAX;
static int32_t x19 = INT32_MAX;
static int64_t x20 = INT64_MIN;
volatile uint32_t x23 = UINT32_MAX;
int64_t x27 = -2036384132896969684LL;
static uint32_t x41 = 326193580U;
volatile int64_t x42 = INT64_MIN;
static int32_t x46 = INT32_MIN;
int16_t x49 = -239;
volatile int32_t t14 = -2432796;
volatile uint64_t x66 = 787744399156681LLU;
int8_t x73 = 52;
uint16_t x75 = 501U;
uint8_t x78 = 6U;
int64_t x81 = INT64_MAX;
int32_t x83 = INT32_MIN;
static uint64_t t20 = 217LLU;
int32_t x92 = 1;
int32_t t21 = 3;
static volatile int8_t x95 = INT8_MAX;
static uint16_t x102 = UINT16_MAX;
int32_t t24 = 407650;
uint64_t x106 = 1897230861LLU;
static uint32_t x108 = 90612450U;
static volatile uint32_t t25 = 3080006U;
int16_t x115 = INT16_MIN;
int32_t t27 = -1551;
volatile int32_t t28 = 630;
volatile int16_t x130 = 1;
volatile int32_t t31 = -1116667;
static uint32_t x135 = UINT32_MAX;
volatile int32_t t32 = -62;
static int64_t x137 = INT64_MIN;
int32_t x139 = INT32_MIN;
int32_t x146 = INT32_MIN;
volatile int64_t x155 = INT64_MIN;
static uint16_t x158 = UINT16_MAX;
int64_t x160 = 331866140919628LL;
uint8_t x161 = UINT8_MAX;
volatile int8_t x162 = 1;
volatile int64_t x164 = INT64_MIN;
uint8_t x165 = 1U;
int32_t x168 = 155128182;
int32_t t40 = 49632;
int64_t x172 = -40157LL;
volatile int64_t t41 = -3358445507351347374LL;
static int32_t t43 = -231608635;
int8_t x190 = INT8_MIN;
static volatile uint32_t t47 = 31444U;
uint64_t t48 = 16287LLU;
volatile int8_t x202 = 28;
volatile int64_t x209 = -1LL;
static int32_t x214 = -68698;
static uint16_t x215 = 240U;
static volatile int32_t t52 = 191096;
int64_t x219 = INT64_MIN;
volatile uint64_t x221 = 54374329763971474LLU;
int8_t x227 = -1;
uint32_t x231 = 212212U;
uint16_t x235 = UINT16_MAX;
volatile int32_t t59 = -4957;
int16_t x250 = INT16_MIN;
uint32_t x251 = UINT32_MAX;
volatile int32_t t62 = 2494749;
static int8_t x269 = -1;
volatile uint32_t x271 = 918084087U;
static int64_t x277 = INT64_MIN;
uint64_t x279 = 6556906LLU;
static int16_t x283 = INT16_MIN;
uint64_t x284 = 148348966995527LLU;
static volatile uint16_t x285 = UINT16_MAX;
int64_t x293 = -427LL;
static int8_t x294 = -30;
volatile uint32_t x299 = UINT32_MAX;
static volatile int32_t t73 = -2870864;
uint32_t x309 = 9U;
static volatile int32_t t77 = -9;
int64_t x327 = 21662151197718LL;
static int8_t x328 = INT8_MIN;
int32_t t78 = 430166;
volatile int32_t t79 = 10673;
volatile int64_t x333 = 3860473652715266LL;
int16_t x334 = INT16_MAX;
int64_t x339 = -748735LL;
volatile int32_t t81 = -2152484;
int16_t x342 = INT16_MAX;
static int32_t x343 = INT32_MIN;
int16_t x344 = -357;
static volatile int32_t t82 = -3;
static volatile uint8_t x353 = UINT8_MAX;
int16_t x365 = 7;
int32_t x381 = -1;
uint8_t x387 = 127U;
int16_t x389 = INT16_MIN;
static uint8_t x393 = 34U;
static volatile int32_t t95 = 0;
int32_t x400 = INT32_MIN;
uint8_t x403 = 1U;
int64_t x404 = INT64_MIN;
uint16_t x406 = 2021U;
volatile uint16_t x410 = UINT16_MAX;


void f0(void) {
	volatile uint32_t x1 = 8174U;
	volatile int16_t x2 = 1;
	volatile int32_t x3 = -1;
	static volatile uint64_t x4 = UINT64_MAX;

	t0 = (((x1<x2)<=x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1678087189880556LL;
	uint8_t x6 = UINT8_MAX;
	static int32_t x7 = INT32_MIN;
	int32_t t1 = -12892;

	t1 = (((x5<x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static int64_t x11 = INT64_MIN;
	volatile int32_t t2 = 7681450;

	t2 = (((x9<x10)<=x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 5U;
	static volatile uint8_t x14 = UINT8_MAX;
	int8_t x15 = 0;
	static uint32_t x16 = 150561U;
	uint32_t t3 = 2394U;

	t3 = (((x13<x14)<=x15)/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MAX;
	static int64_t t4 = 643606LL;

	t4 = (((x17<x18)<=x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int16_t x22 = -7941;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = 191383856LL;

	t5 = (((x21<x22)<=x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static int64_t x26 = -17LL;
	static volatile uint8_t x28 = UINT8_MAX;
	int32_t t6 = -243747138;

	t6 = (((x25<x26)<=x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x30 = -1;
	uint8_t x31 = UINT8_MAX;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = 1477205;

	t7 = (((x29<x30)<=x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -40;

	t8 = (((x33<x34)<=x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x43 = 1565248858562251665LLU;
	uint64_t x44 = 3034302LLU;
	volatile uint64_t t9 = 412294344217LLU;

	t9 = (((x41<x42)<=x43)/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	uint64_t x47 = UINT64_MAX;
	static int16_t x48 = -1;
	volatile int32_t t10 = 6;

	t10 = (((x45<x46)<=x47)/x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	volatile int64_t x52 = -370747727265LL;
	int64_t t11 = -138312468091504760LL;

	t11 = (((x49<x50)<=x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	int16_t x54 = INT16_MAX;
	static uint8_t x55 = 3U;
	static int16_t x56 = -1;
	static int32_t t12 = 508;

	t12 = (((x53<x54)<=x55)/x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MIN;
	uint8_t x59 = 0U;
	int16_t x60 = -1;
	static int32_t t13 = 3871;

	t13 = (((x57<x58)<=x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = -1;
	int64_t x63 = -1LL;
	uint8_t x64 = UINT8_MAX;

	t14 = (((x61<x62)<=x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 123141LL;
	uint32_t x67 = UINT32_MAX;
	int64_t x68 = -1LL;
	static volatile int64_t t15 = 3077251LL;

	t15 = (((x65<x66)<=x67)/x68);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 12U;
	int64_t x70 = 174448005853LL;
	volatile int64_t x71 = -1LL;
	static volatile int8_t x72 = 2;
	volatile int32_t t16 = 1;

	t16 = (((x69<x70)<=x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x74 = 820U;
	static volatile int64_t x76 = 375LL;
	static int64_t t17 = -2254618763709891LL;

	t17 = (((x73<x74)<=x75)/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 3U;
	int8_t x79 = -1;
	int32_t x80 = INT32_MIN;
	int32_t t18 = -367;

	t18 = (((x77<x78)<=x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x82 = UINT8_MAX;
	static int16_t x84 = 165;
	int32_t t19 = -170284978;

	t19 = (((x81<x82)<=x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 97U;
	static uint32_t x86 = UINT32_MAX;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 7203647LLU;

	t20 = (((x85<x86)<=x87)/x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 242;
	int8_t x90 = INT8_MAX;
	uint8_t x91 = UINT8_MAX;

	t21 = (((x89<x90)<=x91)/x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MAX;
	uint16_t x94 = 6162U;
	static int16_t x96 = INT16_MAX;
	static int32_t t22 = 1;

	t22 = (((x93<x94)<=x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	int8_t x98 = INT8_MAX;
	uint64_t x99 = 1299LLU;
	int64_t x100 = -1LL;
	int64_t t23 = 10936902862179LL;

	t23 = (((x97<x98)<=x99)/x100);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x101 = 208378U;
	int32_t x103 = -1;
	static int8_t x104 = -1;

	t24 = (((x101<x102)<=x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	static int64_t x107 = -1LL;

	t25 = (((x105<x106)<=x107)/x108);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 44688625154824LL;
	int16_t x110 = INT16_MAX;
	static int32_t x111 = INT32_MAX;
	volatile int32_t x112 = -1;
	static int32_t t26 = 6119271;

	t26 = (((x109<x110)<=x111)/x112);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	int16_t x114 = -404;
	static int32_t x116 = -1;

	t27 = (((x113<x114)<=x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 7U;
	static uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;

	t28 = (((x117<x118)<=x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x121 = UINT8_MAX;
	int16_t x122 = INT16_MIN;
	static uint8_t x123 = 4U;
	int16_t x124 = 3;
	int32_t t29 = 37;

	t29 = (((x121<x122)<=x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	static volatile int16_t x126 = -1;
	int16_t x127 = INT16_MAX;
	int16_t x128 = 50;
	volatile int32_t t30 = 417351312;

	t30 = (((x125<x126)<=x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	uint8_t x131 = UINT8_MAX;
	volatile uint16_t x132 = 98U;

	t31 = (((x129<x130)<=x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	static int16_t x136 = INT16_MIN;

	t32 = (((x133<x134)<=x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MAX;
	static uint64_t x140 = 275654384458LLU;
	uint64_t t33 = 181LLU;

	t33 = (((x137<x138)<=x139)/x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	volatile int32_t t34 = 190832;

	t34 = (((x141<x142)<=x143)/x144);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static int8_t x147 = -1;
	volatile int64_t x148 = -2937LL;
	int64_t t35 = -3415872400LL;

	t35 = (((x145<x146)<=x147)/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	static uint32_t x150 = UINT32_MAX;
	int16_t x151 = INT16_MAX;
	static int8_t x152 = -56;
	int32_t t36 = 42;

	t36 = (((x149<x150)<=x151)/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MAX;
	static uint8_t x156 = UINT8_MAX;
	int32_t t37 = 6368522;

	t37 = (((x153<x154)<=x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	int64_t x159 = INT64_MAX;
	int64_t t38 = -196LL;

	t38 = (((x157<x158)<=x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x163 = 10LLU;
	static int64_t t39 = -14907295LL;

	t39 = (((x161<x162)<=x163)/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MAX;

	t40 = (((x165<x166)<=x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MAX;
	volatile int16_t x171 = -1007;

	t41 = (((x169<x170)<=x171)/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	uint64_t x174 = 3714LLU;
	volatile int64_t x175 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t42 = 16431819U;

	t42 = (((x173<x174)<=x175)/x176);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MAX;
	static int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MIN;
	static int16_t x180 = INT16_MIN;

	t43 = (((x177<x178)<=x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MAX;
	uint8_t x182 = 0U;
	static int16_t x183 = -240;
	int32_t x184 = 126;
	int32_t t44 = 2566509;

	t44 = (((x181<x182)<=x183)/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = 1;
	static uint8_t x186 = 10U;
	uint64_t x187 = 16LLU;
	int64_t x188 = INT64_MIN;
	volatile int64_t t45 = -16913979691LL;

	t45 = (((x185<x186)<=x187)/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t x191 = -1;
	int32_t x192 = INT32_MAX;
	volatile int32_t t46 = 23;

	t46 = (((x189<x190)<=x191)/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = 14833228LL;
	uint16_t x194 = 657U;
	int16_t x195 = -5;
	volatile uint32_t x196 = 300712276U;

	t47 = (((x193<x194)<=x195)/x196);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MAX;
	volatile int8_t x199 = INT8_MIN;
	uint64_t x200 = 6LLU;

	t48 = (((x197<x198)<=x199)/x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	int64_t x203 = -1LL;
	uint32_t x204 = 439032408U;
	static uint32_t t49 = 0U;

	t49 = (((x201<x202)<=x203)/x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -10554;
	int64_t x206 = INT64_MIN;
	uint8_t x207 = 10U;
	int64_t x208 = INT64_MIN;
	int64_t t50 = 14058179971LL;

	t50 = (((x205<x206)<=x207)/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	static volatile int32_t t51 = 5;

	t51 = (((x209<x210)<=x211)/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x213 = 3389LLU;
	uint8_t x216 = 7U;

	t52 = (((x213<x214)<=x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	volatile int32_t x220 = 4726;
	volatile int32_t t53 = 786844;

	t53 = (((x217<x218)<=x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x222 = UINT16_MAX;
	int16_t x223 = INT16_MAX;
	static volatile uint8_t x224 = 28U;
	volatile int32_t t54 = -19850;

	t54 = (((x221<x222)<=x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x225 = 2U;
	int8_t x226 = 0;
	uint16_t x228 = UINT16_MAX;
	int32_t t55 = 452273;

	t55 = (((x225<x226)<=x227)/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -2735536;
	static uint64_t x230 = UINT64_MAX;
	static int32_t x232 = -1;
	volatile int32_t t56 = 46268;

	t56 = (((x229<x230)<=x231)/x232);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = INT32_MIN;
	int16_t x234 = 27;
	int16_t x236 = -1;
	int32_t t57 = -1134455;

	t57 = (((x233<x234)<=x235)/x236);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 972U;
	static int8_t x238 = INT8_MIN;
	volatile int64_t x239 = 6LL;
	int16_t x240 = INT16_MIN;
	int32_t t58 = -6412;

	t58 = (((x237<x238)<=x239)/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -1;
	int32_t x242 = 31293;
	int16_t x243 = 13657;
	int16_t x244 = -1;

	t59 = (((x241<x242)<=x243)/x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -1;
	int32_t x248 = INT32_MIN;
	int32_t t60 = -1047;

	t60 = (((x245<x246)<=x247)/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	static int32_t x252 = -1;
	int32_t t61 = 90485;

	t61 = (((x249<x250)<=x251)/x252);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x257 = 7U;
	uint8_t x258 = UINT8_MAX;
	static uint32_t x259 = 202108U;
	int8_t x260 = -3;

	t62 = (((x257<x258)<=x259)/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = -1;
	static int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MAX;
	int8_t x264 = -14;
	volatile int32_t t63 = 8326198;

	t63 = (((x261<x262)<=x263)/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MAX;
	uint32_t x268 = 30U;
	uint32_t t64 = 423982U;

	t64 = (((x265<x266)<=x267)/x268);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x270 = INT16_MAX;
	volatile int32_t x272 = INT32_MIN;
	int32_t t65 = -3441;

	t65 = (((x269<x270)<=x271)/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = -40;
	int32_t x275 = -1;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t66 = -128020685;

	t66 = (((x273<x274)<=x275)/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = 1;
	uint32_t x280 = 1243848U;
	volatile uint32_t t67 = 196U;

	t67 = (((x277<x278)<=x279)/x280);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MAX;
	volatile uint64_t t68 = 100401648920094998LLU;

	t68 = (((x281<x282)<=x283)/x284);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = 3U;
	volatile int32_t t69 = 1328;

	t69 = (((x285<x286)<=x287)/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x289 = 62U;
	int8_t x290 = -1;
	int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t70 = -1598;

	t70 = (((x289<x290)<=x291)/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x295 = INT32_MIN;
	int8_t x296 = -10;
	int32_t t71 = 12653;

	t71 = (((x293<x294)<=x295)/x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MAX;
	volatile int8_t x300 = INT8_MIN;
	static int32_t t72 = -442;

	t72 = (((x297<x298)<=x299)/x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MAX;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = INT8_MAX;

	t73 = (((x301<x302)<=x303)/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = UINT32_MAX;
	static uint32_t x306 = 51U;
	uint32_t x307 = 1U;
	int32_t x308 = -1;
	volatile int32_t t74 = -6;

	t74 = (((x305<x306)<=x307)/x308);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t75 = 12410;

	t75 = (((x309<x310)<=x311)/x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = 1384689567412LL;
	static uint32_t x318 = UINT32_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t76 = 4624794;

	t76 = (((x317<x318)<=x319)/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 622960271LLU;
	uint16_t x322 = 32625U;
	int8_t x323 = 1;
	int8_t x324 = -1;

	t77 = (((x321<x322)<=x323)/x324);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x325 = 0U;
	uint8_t x326 = 2U;

	t78 = (((x325<x326)<=x327)/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x329 = 6871091002709LL;
	uint32_t x330 = 49U;
	int8_t x331 = -4;
	int16_t x332 = INT16_MIN;

	t79 = (((x329<x330)<=x331)/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t80 = 9390375600378436LL;

	t80 = (((x333<x334)<=x335)/x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = INT32_MIN;
	uint64_t x338 = 388LLU;
	static volatile int8_t x340 = 5;

	t81 = (((x337<x338)<=x339)/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 1;

	t82 = (((x341<x342)<=x343)/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 15U;
	uint8_t x346 = 53U;
	static volatile int32_t x347 = INT32_MAX;
	volatile int64_t x348 = INT64_MAX;
	volatile int64_t t83 = -23855LL;

	t83 = (((x345<x346)<=x347)/x348);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x349 = UINT16_MAX;
	int8_t x350 = 10;
	int64_t x351 = -3LL;
	int8_t x352 = -1;
	volatile int32_t t84 = -9007760;

	t84 = (((x349<x350)<=x351)/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x354 = INT16_MAX;
	uint64_t x355 = 53376862830295LLU;
	static uint16_t x356 = 4989U;
	volatile int32_t t85 = -94;

	t85 = (((x353<x354)<=x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	static int16_t x358 = -253;
	int32_t x359 = INT32_MIN;
	int64_t x360 = 4518030396246LL;
	int64_t t86 = 6704925758LL;

	t86 = (((x357<x358)<=x359)/x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x361 = -14;
	int16_t x362 = INT16_MAX;
	uint64_t x363 = 482966979319LLU;
	uint32_t x364 = UINT32_MAX;
	uint32_t t87 = 5297726U;

	t87 = (((x361<x362)<=x363)/x364);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x366 = -51493;
	uint64_t x367 = 3LLU;
	int32_t x368 = -1;
	int32_t t88 = -45869;

	t88 = (((x365<x366)<=x367)/x368);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -1;
	int16_t x370 = 3;
	int16_t x371 = INT16_MIN;
	static volatile int8_t x372 = -1;
	volatile int32_t t89 = -5053270;

	t89 = (((x369<x370)<=x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = -2232776060362419LL;
	uint8_t x374 = 7U;
	int8_t x375 = -35;
	uint32_t x376 = UINT32_MAX;
	static uint32_t t90 = 6269259U;

	t90 = (((x373<x374)<=x375)/x376);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = 0;
	static volatile int64_t x378 = -29104019LL;
	static int64_t x379 = -148531352031156963LL;
	int64_t x380 = 676973932476971009LL;
	int64_t t91 = 300841LL;

	t91 = (((x377<x378)<=x379)/x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x382 = -1LL;
	int64_t x383 = INT64_MIN;
	volatile int8_t x384 = -1;
	static int32_t t92 = 252453004;

	t92 = (((x381<x382)<=x383)/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	static uint64_t x386 = 5LLU;
	static int8_t x388 = INT8_MAX;
	int32_t t93 = -948209;

	t93 = (((x385<x386)<=x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x390 = INT8_MIN;
	static int64_t x391 = -1LL;
	uint16_t x392 = 3U;
	int32_t t94 = 0;

	t94 = (((x389<x390)<=x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x394 = -181167744237LL;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = 8;

	t95 = (((x393<x394)<=x395)/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -3947;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = INT16_MIN;
	int32_t t96 = -24737;

	t96 = (((x397<x398)<=x399)/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = 13;
	uint8_t x402 = 0U;
	int64_t t97 = -73303411LL;

	t97 = (((x401<x402)<=x403)/x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MAX;
	int16_t x407 = INT16_MAX;
	int8_t x408 = INT8_MIN;
	volatile int32_t t98 = 223511225;

	t98 = (((x405<x406)<=x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x409 = UINT64_MAX;
	static int32_t x411 = -726647036;
	uint16_t x412 = 372U;
	static int32_t t99 = -536852;

	t99 = (((x409<x410)<=x411)/x412);

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

