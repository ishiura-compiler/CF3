#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
volatile uint64_t x2 = 4123330LLU;
volatile int32_t t1 = 7226562;
static int16_t x10 = -1;
uint64_t x12 = 1065806100675658LLU;
static volatile uint16_t x14 = 9U;
int16_t x23 = -1;
static volatile int16_t x26 = INT16_MIN;
int8_t x29 = INT8_MIN;
int8_t x33 = -1;
volatile uint16_t x41 = UINT16_MAX;
int32_t x42 = INT32_MAX;
static int64_t x56 = INT64_MIN;
int32_t t13 = -87781088;
static int32_t x64 = INT32_MIN;
static int32_t t15 = 3215645;
int8_t x67 = -1;
volatile int32_t t16 = -345859;
uint32_t x70 = 9U;
volatile uint32_t x73 = 791264149U;
int32_t t18 = -10725;
int8_t x85 = INT8_MAX;
static int64_t x86 = INT64_MIN;
static int8_t x88 = -1;
uint8_t x91 = 95U;
static int8_t x93 = INT8_MIN;
int32_t x95 = INT32_MAX;
uint32_t x104 = UINT32_MAX;
volatile int16_t x108 = -1;
static int64_t x109 = INT64_MAX;
volatile int32_t t27 = 1389;
uint64_t x113 = 399124382935LLU;
int8_t x119 = -1;
int64_t x120 = INT64_MIN;
int64_t x127 = 4182909584LL;
uint8_t x128 = 0U;
volatile uint8_t x143 = 29U;
uint8_t x147 = 1U;
uint8_t x148 = 4U;
int32_t t36 = -8251728;
int64_t x150 = INT64_MAX;
int32_t t37 = 76646;
int16_t x156 = -1;
int64_t x176 = INT64_MAX;
int16_t x178 = -1710;
int32_t x179 = 122246;
static uint32_t x180 = 51523U;
int32_t x184 = 1;
uint8_t x187 = 1U;
static volatile uint32_t x189 = 10117U;
volatile int32_t t47 = -20355124;
uint8_t x194 = UINT8_MAX;
static int16_t x197 = -331;
int64_t x200 = INT64_MAX;
uint64_t x206 = 444404270LLU;
static int16_t x207 = -1;
volatile uint64_t x226 = 4779542990988330LLU;
int8_t x227 = INT8_MIN;
uint16_t x228 = UINT16_MAX;
static volatile uint32_t x238 = UINT32_MAX;
static int32_t t59 = -83492016;
static volatile int32_t t60 = -169767;
int8_t x255 = -55;
int8_t x257 = INT8_MIN;
int64_t x264 = -1LL;
static int32_t t68 = -1;
static int8_t x278 = -1;
volatile uint8_t x280 = 16U;
static int32_t x282 = INT32_MIN;
static int8_t x285 = INT8_MAX;
volatile uint32_t x288 = 83U;
uint32_t x293 = 85183904U;
int8_t x307 = INT8_MIN;
volatile int32_t t76 = -2;
int32_t t77 = -98676;
volatile int8_t x318 = -1;
static int64_t x319 = -1LL;
int64_t x325 = 8125999270235LL;
int32_t t81 = 15147;
uint8_t x341 = 1U;
int32_t x346 = INT32_MAX;
int64_t x348 = INT64_MAX;
int32_t x353 = INT32_MAX;
int16_t x354 = INT16_MIN;
int64_t x361 = INT64_MAX;
static volatile int32_t t90 = -175031010;
volatile int64_t x365 = 2983622392646062LL;
static int8_t x366 = -1;
volatile int16_t x368 = 21;
int32_t t91 = 2934763;
uint64_t x370 = 1359611628LLU;
uint16_t x371 = UINT16_MAX;
int8_t x383 = -1;
static int16_t x398 = INT16_MIN;
int32_t t99 = -599636;


void f0(void) {
	volatile uint32_t x3 = 28U;
	static int32_t x4 = -9063791;
	volatile int32_t t0 = 24725177;

	t0 = (((x1<x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 33U;
	static int8_t x6 = INT8_MIN;
	int32_t x7 = 62524073;
	static uint8_t x8 = UINT8_MAX;

	t1 = (((x5<x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x11 = 1U;
	int32_t t2 = -15;

	t2 = (((x9<x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MAX;
	static int32_t t3 = 2345295;

	t3 = (((x13<x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 15;
	int8_t x18 = INT8_MAX;
	volatile int64_t x19 = -17083074667948323LL;
	uint64_t x20 = 338508923245774350LLU;
	volatile int32_t t4 = -686;

	t4 = (((x17<x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint16_t x22 = UINT16_MAX;
	int64_t x24 = INT64_MAX;
	int32_t t5 = -259;

	t5 = (((x21<x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static volatile int32_t x27 = 7571;
	int8_t x28 = 1;
	int32_t t6 = 3;

	t6 = (((x25<x26)<=x27)==x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -117865517LL;
	static volatile uint8_t x31 = 1U;
	volatile uint32_t x32 = 104U;
	volatile int32_t t7 = 65552259;

	t7 = (((x29<x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	static int64_t x36 = -12517702LL;
	int32_t t8 = -4202308;

	t8 = (((x33<x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 2LL;
	int64_t x38 = INT64_MAX;
	int32_t x39 = INT32_MIN;
	static int16_t x40 = INT16_MAX;
	static int32_t t9 = -622;

	t9 = (((x37<x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = -1LL;
	int8_t x44 = -1;
	volatile int32_t t10 = -7363;

	t10 = (((x41<x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 12;
	volatile uint64_t x46 = UINT64_MAX;
	static int32_t x47 = INT32_MIN;
	uint8_t x48 = 7U;
	int32_t t11 = -6426;

	t11 = (((x45<x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	volatile int64_t x50 = INT64_MAX;
	static volatile int8_t x51 = INT8_MAX;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -1;

	t12 = (((x49<x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int64_t x54 = 3411642LL;
	int16_t x55 = INT16_MIN;

	t13 = (((x53<x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int8_t x58 = 15;
	uint8_t x59 = 56U;
	int16_t x60 = -1;
	volatile int32_t t14 = 14908353;

	t14 = (((x57<x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = 5U;
	static volatile uint16_t x63 = 0U;

	t15 = (((x61<x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MAX;
	volatile int16_t x68 = -350;

	t16 = (((x65<x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MAX;
	static int16_t x71 = INT16_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = 296750;

	t17 = (((x69<x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 120U;
	int64_t x75 = 2566968263LL;
	int16_t x76 = -1;

	t18 = (((x73<x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = 8;
	int32_t x80 = 248;
	volatile int32_t t19 = 8074;

	t19 = (((x77<x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 493U;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -10295;

	t20 = (((x81<x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x87 = 213LLU;
	static volatile int32_t t21 = 1;

	t21 = (((x85<x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	static int32_t x90 = 4887901;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = 30;

	t22 = (((x89<x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	int8_t x96 = 33;
	int32_t t23 = 880;

	t23 = (((x93<x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 2493U;
	static int64_t x98 = INT64_MIN;
	int32_t x99 = -25775;
	volatile int16_t x100 = 1;
	static int32_t t24 = -4972;

	t24 = (((x97<x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -3621;
	uint16_t x102 = 18U;
	volatile int8_t x103 = INT8_MIN;
	static volatile int32_t t25 = 101097;

	t25 = (((x101<x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	static volatile int32_t x107 = 6;
	volatile int32_t t26 = 106145;

	t26 = (((x105<x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = UINT32_MAX;
	static int64_t x111 = -1LL;
	static volatile int16_t x112 = 6468;

	t27 = (((x109<x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;
	volatile int64_t x116 = -1LL;
	static int32_t t28 = -1;

	t28 = (((x113<x114)<=x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MAX;
	volatile int16_t x118 = -1;
	volatile int32_t t29 = -13;

	t29 = (((x117<x118)<=x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x121 = 1;
	static uint8_t x122 = 1U;
	uint16_t x123 = 2400U;
	uint8_t x124 = UINT8_MAX;
	static volatile int32_t t30 = -1;

	t30 = (((x121<x122)<=x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	int64_t x126 = -1LL;
	volatile int32_t t31 = -186321409;

	t31 = (((x125<x126)<=x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MIN;
	volatile int8_t x130 = -3;
	uint64_t x131 = 82578262347953LLU;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 257609;

	t32 = (((x129<x130)<=x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static uint16_t x134 = 7U;
	int8_t x135 = -1;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t33 = 0;

	t33 = (((x133<x134)<=x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int8_t x139 = 15;
	volatile int32_t x140 = INT32_MIN;
	int32_t t34 = -25631;

	t34 = (((x137<x138)<=x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 53562U;
	int32_t x142 = INT32_MAX;
	int32_t x144 = -1;
	int32_t t35 = -231;

	t35 = (((x141<x142)<=x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 41U;
	int32_t x146 = INT32_MIN;

	t36 = (((x145<x146)<=x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 455365LLU;
	static int16_t x151 = -1;
	static volatile int64_t x152 = -130891LL;

	t37 = (((x149<x150)<=x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	int16_t x154 = -134;
	static int16_t x155 = INT16_MAX;
	volatile int32_t t38 = 879152;

	t38 = (((x153<x154)<=x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -12128639;
	int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MAX;
	int32_t t39 = -1088;

	t39 = (((x157<x158)<=x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 5U;
	int8_t x162 = 1;
	static int16_t x163 = INT16_MIN;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = 1895;

	t40 = (((x161<x162)<=x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = 913228;
	volatile int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	static uint32_t x168 = UINT32_MAX;
	int32_t t41 = -218;

	t41 = (((x165<x166)<=x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t42 = -14142;

	t42 = (((x169<x170)<=x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = -1;
	int8_t x175 = 1;
	static int32_t t43 = 2509;

	t43 = (((x173<x174)<=x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 921609496;
	volatile int32_t t44 = 1;

	t44 = (((x177<x178)<=x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -2452074;
	int64_t x182 = -1LL;
	int32_t x183 = INT32_MIN;
	volatile int32_t t45 = 1;

	t45 = (((x181<x182)<=x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 5U;
	uint16_t x186 = UINT16_MAX;
	static uint32_t x188 = 255998260U;
	int32_t t46 = 485027;

	t46 = (((x185<x186)<=x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 1U;
	int16_t x191 = INT16_MIN;
	static volatile uint16_t x192 = UINT16_MAX;

	t47 = (((x189<x190)<=x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -1LL;
	int16_t x195 = INT16_MIN;
	static int64_t x196 = -1563166422610267042LL;
	static volatile int32_t t48 = 2857;

	t48 = (((x193<x194)<=x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x198 = 314LLU;
	int8_t x199 = INT8_MIN;
	volatile int32_t t49 = 6;

	t49 = (((x197<x198)<=x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	static int32_t x202 = -1;
	int16_t x203 = -22;
	uint8_t x204 = 123U;
	volatile int32_t t50 = 334858;

	t50 = (((x201<x202)<=x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x208 = -3101420;
	volatile int32_t t51 = -217;

	t51 = (((x205<x206)<=x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 9U;
	static int16_t x210 = 731;
	uint64_t x211 = 997LLU;
	volatile int64_t x212 = INT64_MIN;
	static volatile int32_t t52 = -9085;

	t52 = (((x209<x210)<=x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static int64_t x214 = INT64_MAX;
	volatile int32_t x215 = INT32_MIN;
	static volatile uint64_t x216 = UINT64_MAX;
	volatile int32_t t53 = 866706669;

	t53 = (((x213<x214)<=x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = 24LL;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = -1;
	volatile int32_t t54 = -295981292;

	t54 = (((x217<x218)<=x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	static volatile uint32_t x222 = 245826710U;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = -1LL;
	volatile int32_t t55 = 366279797;

	t55 = (((x221<x222)<=x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	volatile int32_t t56 = -246328606;

	t56 = (((x225<x226)<=x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 3;
	int64_t x230 = 10061418086LL;
	uint8_t x231 = 16U;
	int16_t x232 = -1390;
	volatile int32_t t57 = -152986;

	t57 = (((x229<x230)<=x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	static volatile uint8_t x234 = 11U;
	int32_t x235 = 13;
	int8_t x236 = -4;
	volatile int32_t t58 = 1904215;

	t58 = (((x233<x234)<=x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 4U;
	static int8_t x239 = -4;
	uint8_t x240 = UINT8_MAX;

	t59 = (((x237<x238)<=x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x241 = UINT32_MAX;
	static volatile int16_t x242 = -68;
	volatile uint32_t x243 = 137113575U;
	int64_t x244 = INT64_MAX;

	t60 = (((x241<x242)<=x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	static uint8_t x247 = UINT8_MAX;
	int8_t x248 = 4;
	static volatile int32_t t61 = 5459006;

	t61 = (((x245<x246)<=x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	static int64_t x251 = INT64_MAX;
	int64_t x252 = 94530996LL;
	static int32_t t62 = 230;

	t62 = (((x249<x250)<=x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	static int64_t x254 = 904242825LL;
	static uint64_t x256 = UINT64_MAX;
	volatile int32_t t63 = -20;

	t63 = (((x253<x254)<=x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x258 = 1U;
	int16_t x259 = 245;
	int16_t x260 = -1;
	int32_t t64 = 0;

	t64 = (((x257<x258)<=x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -31;
	int64_t x262 = INT64_MIN;
	volatile int64_t x263 = -1137421181790199657LL;
	volatile int32_t t65 = -110;

	t65 = (((x261<x262)<=x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 66U;
	int16_t x266 = 857;
	int8_t x267 = -62;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = -3;

	t66 = (((x265<x266)<=x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	volatile int64_t x272 = -1942713944LL;
	int32_t t67 = 57019;

	t67 = (((x269<x270)<=x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	uint8_t x274 = 1U;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = INT32_MIN;

	t68 = (((x273<x274)<=x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = 14016563278LL;
	int64_t x279 = -1LL;
	int32_t t69 = 14325740;

	t69 = (((x277<x278)<=x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	int32_t x283 = -2257010;
	uint64_t x284 = 1557401130873LLU;
	volatile int32_t t70 = -10135;

	t70 = (((x281<x282)<=x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MAX;
	int32_t t71 = -847;

	t71 = (((x285<x286)<=x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = -2;
	uint16_t x291 = UINT16_MAX;
	int8_t x292 = -1;
	static int32_t t72 = 22;

	t72 = (((x289<x290)<=x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -534;
	int64_t x295 = 884410235986LL;
	int8_t x296 = -1;
	int32_t t73 = -20045856;

	t73 = (((x293<x294)<=x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = -12525;
	static uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MAX;
	uint8_t x300 = 1U;
	volatile int32_t t74 = 1058670814;

	t74 = (((x297<x298)<=x299)==x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	static uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = -1LL;
	volatile int32_t t75 = -575;

	t75 = (((x301<x302)<=x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int64_t x306 = 4855LL;
	int64_t x308 = 3004774108LL;

	t76 = (((x305<x306)<=x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static int64_t x310 = 1571999324LL;
	uint8_t x311 = 2U;
	uint64_t x312 = 101364LLU;

	t77 = (((x309<x310)<=x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile uint8_t x314 = 1U;
	uint16_t x315 = 4U;
	int64_t x316 = 368LL;
	int32_t t78 = -206001;

	t78 = (((x313<x314)<=x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 188970783U;
	static int32_t x320 = INT32_MAX;
	int32_t t79 = -21248240;

	t79 = (((x317<x318)<=x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	volatile uint64_t x322 = 402496LLU;
	static int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t80 = 687845234;

	t80 = (((x321<x322)<=x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x326 = UINT64_MAX;
	uint8_t x327 = 7U;
	int32_t x328 = -1;

	t81 = (((x325<x326)<=x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int16_t x330 = INT16_MAX;
	int8_t x331 = 4;
	static int64_t x332 = -1LL;
	int32_t t82 = 3826;

	t82 = (((x329<x330)<=x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	volatile int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = 10U;
	int8_t x336 = -3;
	volatile int32_t t83 = -352434;

	t83 = (((x333<x334)<=x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int64_t x339 = -37352206235LL;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = 9138;

	t84 = (((x337<x338)<=x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	static int8_t x344 = -21;
	volatile int32_t t85 = -829390;

	t85 = (((x341<x342)<=x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -32;
	uint8_t x347 = 10U;
	int32_t t86 = 19937;

	t86 = (((x345<x346)<=x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = UINT64_MAX;
	static int8_t x350 = -1;
	int64_t x351 = -1411179239553719913LL;
	volatile int16_t x352 = 36;
	volatile int32_t t87 = -61;

	t87 = (((x349<x350)<=x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x355 = 1;
	static uint8_t x356 = 3U;
	volatile int32_t t88 = 25;

	t88 = (((x353<x354)<=x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	uint16_t x360 = 2419U;
	volatile int32_t t89 = -170292;

	t89 = (((x357<x358)<=x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	static volatile int16_t x364 = -3;

	t90 = (((x361<x362)<=x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = -1;

	t91 = (((x365<x366)<=x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -25407565;

	t92 = (((x369<x370)<=x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	volatile uint64_t x374 = 6466378994LLU;
	static int16_t x375 = -2;
	int32_t x376 = 12990;
	int32_t t93 = -4240494;

	t93 = (((x373<x374)<=x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 184497U;
	static uint16_t x378 = 27U;
	int64_t x379 = 25806560305LL;
	volatile int8_t x380 = INT8_MAX;
	int32_t t94 = 38;

	t94 = (((x377<x378)<=x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 1U;
	volatile int32_t x382 = -1;
	int8_t x384 = -5;
	volatile int32_t t95 = -97;

	t95 = (((x381<x382)<=x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	static uint32_t x387 = UINT32_MAX;
	volatile int16_t x388 = INT16_MAX;
	static volatile int32_t t96 = 51;

	t96 = (((x385<x386)<=x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	static int16_t x390 = -1;
	int32_t x391 = INT32_MAX;
	int64_t x392 = -9999LL;
	static int32_t t97 = 27737;

	t97 = (((x389<x390)<=x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = 26U;
	int32_t t98 = 868;

	t98 = (((x393<x394)<=x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -1;
	static int64_t x399 = 803260LL;
	static volatile int8_t x400 = INT8_MAX;

	t99 = (((x397<x398)<=x399)==x400);

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

