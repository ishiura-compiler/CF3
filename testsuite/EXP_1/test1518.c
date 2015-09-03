#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
uint16_t x5 = UINT16_MAX;
int32_t x6 = -1;
volatile int16_t x7 = -1;
static volatile uint64_t x9 = 492204656718LLU;
uint16_t x18 = 18U;
static uint8_t x19 = 0U;
static uint64_t x20 = 84242536LLU;
int32_t x25 = -1;
volatile int32_t t6 = 6;
int16_t x34 = INT16_MAX;
int16_t x35 = INT16_MIN;
static int32_t t9 = 466577958;
volatile int64_t x42 = INT64_MIN;
static int32_t x43 = -1;
static int32_t x52 = -16107;
static volatile int32_t t12 = -1752;
int32_t t13 = 0;
int8_t x58 = 0;
int16_t x69 = 0;
volatile int32_t x76 = INT32_MAX;
static int32_t x77 = 1538084;
uint16_t x82 = 52U;
int32_t x84 = INT32_MAX;
int64_t x90 = INT64_MIN;
uint8_t x102 = UINT8_MAX;
uint8_t x115 = 33U;
int32_t t28 = -16;
int32_t t30 = -867004;
static volatile int32_t t31 = 113;
uint16_t x131 = 812U;
volatile int32_t t33 = -7;
int32_t t34 = -23;
int32_t x142 = INT32_MIN;
uint8_t x151 = 43U;
volatile int32_t t37 = -6000555;
int32_t x153 = 2772760;
volatile int8_t x156 = INT8_MIN;
uint64_t x157 = UINT64_MAX;
int32_t t43 = 0;
uint64_t x177 = 196463972LLU;
static int64_t x182 = INT64_MIN;
uint8_t x194 = 7U;
static uint16_t x202 = 39U;
int64_t x214 = -2838735881LL;
uint32_t x222 = UINT32_MAX;
int8_t x228 = -1;
volatile int32_t t56 = 55;
int16_t x236 = INT16_MIN;
volatile int32_t t58 = 1803976;
int8_t x244 = -1;
static int8_t x253 = -13;
static uint32_t x255 = UINT32_MAX;
int16_t x262 = -2;
static int64_t x263 = 52621810059785735LL;
uint16_t x276 = 237U;
int64_t x278 = 3LL;
volatile int64_t x279 = -1LL;
int32_t t69 = 10466340;
int32_t t73 = 2744702;
static int64_t x298 = INT64_MIN;
volatile int16_t x299 = INT16_MAX;
static volatile uint8_t x307 = UINT8_MAX;
static uint8_t x310 = UINT8_MAX;
int32_t x322 = INT32_MAX;
int32_t x325 = -1;
int8_t x340 = -1;
volatile uint32_t x348 = 1411711167U;
int32_t t87 = -1;
static uint16_t x354 = UINT16_MAX;
int64_t x362 = 3427082LL;
volatile int64_t x363 = INT64_MAX;
int8_t x364 = -1;
int32_t t91 = 19772;
int16_t x369 = INT16_MAX;
volatile int32_t t92 = -145;
int32_t t94 = -1174217;
int32_t x381 = 545067;
uint32_t x384 = UINT32_MAX;
uint32_t x387 = UINT32_MAX;
int32_t t96 = 1300;
int32_t x391 = -127;
int32_t x398 = 445;
int64_t x400 = -1LL;


void f0(void) {
	int64_t x1 = -516080446352LL;
	static int8_t x2 = -1;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 24;

	t0 = (((x1<x2)^x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x8 = INT32_MIN;
	int32_t t1 = -13;

	t1 = (((x5<x6)^x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 3U;
	volatile int16_t x11 = INT16_MIN;
	volatile int64_t x12 = 4520823LL;
	volatile int32_t t2 = 3085844;

	t2 = (((x9<x10)^x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint8_t x14 = UINT8_MAX;
	volatile int16_t x15 = -1;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -61405;

	t3 = (((x13<x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 33LL;
	volatile int32_t t4 = -5298;

	t4 = (((x17<x18)^x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int16_t x22 = -13;
	uint8_t x23 = 1U;
	volatile int32_t x24 = -130;
	int32_t t5 = -331227;

	t5 = (((x21<x22)^x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -3032;
	static uint16_t x27 = 202U;
	volatile int16_t x28 = INT16_MIN;

	t6 = (((x25<x26)^x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	volatile int16_t x30 = -2810;
	uint16_t x31 = 4U;
	int32_t x32 = -1;
	static volatile int32_t t7 = 7;

	t7 = (((x29<x30)^x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int16_t x36 = -1;
	volatile int32_t t8 = 1;

	t8 = (((x33<x34)^x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 23U;
	int32_t x40 = INT32_MIN;

	t9 = (((x37<x38)^x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -676294;

	t10 = (((x41<x42)^x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 87992625715109107LLU;
	volatile int32_t x46 = INT32_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 11867623U;
	volatile int32_t t11 = -2973;

	t11 = (((x45<x46)^x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -867;
	static int64_t x50 = -1LL;
	static uint32_t x51 = UINT32_MAX;

	t12 = (((x49<x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 266408534U;
	int32_t x54 = -507;
	static int64_t x55 = -471087LL;
	uint8_t x56 = 91U;

	t13 = (((x53<x54)^x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	static int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MIN;
	int32_t t14 = 840;

	t14 = (((x57<x58)^x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -18528236;
	int32_t x62 = INT32_MIN;
	int8_t x63 = 1;
	static int8_t x64 = 40;
	static int32_t t15 = 1;

	t15 = (((x61<x62)^x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static uint64_t x66 = 1136314485777351021LLU;
	int8_t x67 = 0;
	int32_t x68 = 603436;
	volatile int32_t t16 = 51736;

	t16 = (((x65<x66)^x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 3U;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -13;
	volatile int32_t t17 = -56;

	t17 = (((x69<x70)^x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = INT32_MIN;
	int16_t x75 = 510;
	int32_t t18 = -444458545;

	t18 = (((x73<x74)^x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = 188;
	static volatile int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 243;

	t19 = (((x77<x78)^x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 12034LLU;
	static int16_t x83 = -2;
	int32_t t20 = 1303287;

	t20 = (((x81<x82)^x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = 0;
	int64_t x87 = 366148906LL;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 671835618;

	t21 = (((x85<x86)^x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	int16_t x91 = -13;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = 33;

	t22 = (((x89<x90)^x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 1147802781U;
	static int64_t x94 = INT64_MAX;
	uint16_t x95 = UINT16_MAX;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = -16431554;

	t23 = (((x93<x94)^x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = 9476861U;
	volatile int32_t x99 = 413;
	int8_t x100 = -10;
	int32_t t24 = 0;

	t24 = (((x97<x98)^x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	volatile int8_t x103 = 0;
	static uint16_t x104 = UINT16_MAX;
	static int32_t t25 = -27;

	t25 = (((x101<x102)^x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 4U;
	uint16_t x106 = 1538U;
	uint16_t x107 = 1011U;
	static int64_t x108 = 14438397706947LL;
	int32_t t26 = 11081176;

	t26 = (((x105<x106)^x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 233275717;
	volatile uint32_t x110 = 12U;
	static volatile int32_t x111 = 42197998;
	uint32_t x112 = 6602U;
	int32_t t27 = 30;

	t27 = (((x109<x110)^x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	int32_t x116 = INT32_MIN;

	t28 = (((x113<x114)^x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = 6520U;
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 13U;
	static uint16_t x120 = 5U;
	volatile int32_t t29 = -7940279;

	t29 = (((x117<x118)^x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1187243511749659LLU;
	uint64_t x122 = 58032404626731866LLU;
	int16_t x123 = INT16_MAX;
	static int16_t x124 = INT16_MAX;

	t30 = (((x121<x122)^x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 125292LLU;
	int16_t x126 = -1;
	int16_t x127 = INT16_MAX;
	uint16_t x128 = 937U;

	t31 = (((x125<x126)^x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -68834536904407338LL;
	int16_t x130 = 780;
	uint32_t x132 = 227125U;
	static int32_t t32 = -7435;

	t32 = (((x129<x130)^x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = UINT64_MAX;
	int8_t x134 = -1;
	volatile int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MIN;

	t33 = (((x133<x134)^x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 7789178;
	int8_t x138 = -1;
	volatile int8_t x139 = INT8_MAX;
	int8_t x140 = INT8_MIN;

	t34 = (((x137<x138)^x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int64_t x143 = -9042663061132LL;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -2533676;

	t35 = (((x141<x142)^x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint64_t x146 = 20692LLU;
	uint32_t x147 = UINT32_MAX;
	uint32_t x148 = UINT32_MAX;
	int32_t t36 = 49;

	t36 = (((x145<x146)^x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MAX;
	uint64_t x150 = UINT64_MAX;
	static volatile int32_t x152 = INT32_MAX;

	t37 = (((x149<x150)^x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	int8_t x155 = INT8_MAX;
	int32_t t38 = -4;

	t38 = (((x153<x154)^x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x158 = -1;
	static int64_t x159 = INT64_MAX;
	int64_t x160 = INT64_MAX;
	int32_t t39 = -9;

	t39 = (((x157<x158)^x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = 88;
	volatile uint64_t x162 = 61LLU;
	int32_t x163 = -1;
	uint32_t x164 = 1098365U;
	volatile int32_t t40 = -4554008;

	t40 = (((x161<x162)^x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -655507;
	static int8_t x166 = INT8_MIN;
	uint32_t x167 = 63007U;
	uint8_t x168 = 6U;
	int32_t t41 = 18773;

	t41 = (((x165<x166)^x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	int64_t x170 = 62867500474239LL;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -1525;

	t42 = (((x169<x170)^x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 1U;
	static int64_t x176 = -53200LL;

	t43 = (((x173<x174)^x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = INT32_MAX;
	volatile int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	static int32_t t44 = 499351;

	t44 = (((x177<x178)^x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	volatile int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;
	int32_t t45 = -224460667;

	t45 = (((x181<x182)^x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 931010845;
	uint16_t x186 = 124U;
	int8_t x187 = 53;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -691;

	t46 = (((x185<x186)^x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	static uint64_t x190 = 9321554785LLU;
	uint32_t x191 = 3483U;
	int8_t x192 = -6;
	int32_t t47 = 226915;

	t47 = (((x189<x190)^x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 3707597381939586633LLU;
	int32_t x195 = 50;
	int32_t x196 = INT32_MIN;
	static volatile int32_t t48 = 0;

	t48 = (((x193<x194)^x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 8LLU;
	int32_t x198 = INT32_MIN;
	int16_t x199 = -1;
	int8_t x200 = 0;
	volatile int32_t t49 = -8132;

	t49 = (((x197<x198)^x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 1110731902063990LLU;
	uint32_t x203 = 36272U;
	int16_t x204 = 218;
	volatile int32_t t50 = -1;

	t50 = (((x201<x202)^x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -3;

	t51 = (((x205<x206)^x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int32_t x210 = 23894;
	uint16_t x211 = 1U;
	uint64_t x212 = 65932838894138LLU;
	static volatile int32_t t52 = -798510151;

	t52 = (((x209<x210)^x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	int32_t x215 = 6724445;
	static uint64_t x216 = UINT64_MAX;
	int32_t t53 = 23953;

	t53 = (((x213<x214)^x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static int8_t x218 = -11;
	int8_t x219 = -1;
	int8_t x220 = -1;
	volatile int32_t t54 = 900596;

	t54 = (((x217<x218)^x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	uint64_t x223 = 174LLU;
	volatile uint64_t x224 = 106640454LLU;
	volatile int32_t t55 = 96313;

	t55 = (((x221<x222)^x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 232;
	volatile int16_t x226 = -1;
	int64_t x227 = -1LL;

	t56 = (((x225<x226)^x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -23;
	int32_t x230 = INT32_MIN;
	static int16_t x231 = -1552;
	uint16_t x232 = UINT16_MAX;
	int32_t t57 = 16881;

	t57 = (((x229<x230)^x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 6208281212091746137LLU;
	int32_t x234 = INT32_MAX;
	int16_t x235 = INT16_MAX;

	t58 = (((x233<x234)^x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x238 = INT16_MIN;
	int32_t x239 = -3955;
	int8_t x240 = -9;
	static int32_t t59 = -99;

	t59 = (((x237<x238)^x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 200101;
	uint32_t x242 = 6U;
	static volatile int32_t x243 = INT32_MIN;
	int32_t t60 = 29;

	t60 = (((x241<x242)^x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	volatile uint16_t x246 = 9662U;
	volatile int64_t x247 = -20111973LL;
	int8_t x248 = INT8_MIN;
	int32_t t61 = -11;

	t61 = (((x245<x246)^x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	int16_t x250 = -1;
	int16_t x251 = -1;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = 444094;

	t62 = (((x249<x250)^x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MIN;
	int8_t x256 = -1;
	static volatile int32_t t63 = 1794;

	t63 = (((x253<x254)^x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = UINT32_MAX;
	int8_t x258 = -15;
	uint8_t x259 = UINT8_MAX;
	volatile int16_t x260 = 1;
	int32_t t64 = 50559874;

	t64 = (((x257<x258)^x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	volatile int64_t x264 = 0LL;
	int32_t t65 = -3;

	t65 = (((x261<x262)^x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 348LLU;
	uint64_t x266 = 71747578896LLU;
	static uint16_t x267 = 115U;
	int64_t x268 = INT64_MAX;
	int32_t t66 = -1892942;

	t66 = (((x265<x266)^x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	static uint16_t x270 = UINT16_MAX;
	static int8_t x271 = INT8_MAX;
	uint16_t x272 = 18U;
	int32_t t67 = 31;

	t67 = (((x269<x270)^x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	uint32_t x274 = 28U;
	volatile int8_t x275 = INT8_MIN;
	static int32_t t68 = -366064697;

	t68 = (((x273<x274)^x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int16_t x280 = 12;

	t69 = (((x277<x278)^x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -5;
	static int32_t x282 = 1;
	int8_t x283 = INT8_MIN;
	static volatile uint16_t x284 = 70U;
	static int32_t t70 = -9;

	t70 = (((x281<x282)^x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 20U;
	volatile int16_t x286 = INT16_MIN;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = -1LL;
	int32_t t71 = 773;

	t71 = (((x285<x286)^x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 52U;
	int8_t x290 = -46;
	uint32_t x291 = 213U;
	static uint16_t x292 = UINT16_MAX;
	int32_t t72 = 425;

	t72 = (((x289<x290)^x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 1U;
	int64_t x296 = -1LL;

	t73 = (((x293<x294)^x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	int32_t x300 = -118468230;
	volatile int32_t t74 = -1688895;

	t74 = (((x297<x298)^x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 1U;
	static uint16_t x302 = 0U;
	volatile int32_t x303 = -1;
	volatile int8_t x304 = -52;
	int32_t t75 = -66;

	t75 = (((x301<x302)^x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	volatile int8_t x306 = INT8_MIN;
	uint8_t x308 = 32U;
	volatile int32_t t76 = 923;

	t76 = (((x305<x306)^x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	volatile uint32_t x312 = UINT32_MAX;
	static int32_t t77 = -1775492;

	t77 = (((x309<x310)^x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 8214629LLU;
	int16_t x315 = 379;
	uint8_t x316 = UINT8_MAX;
	int32_t t78 = -334819150;

	t78 = (((x313<x314)^x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = -63715881;

	t79 = (((x317<x318)^x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MIN;
	int8_t x323 = INT8_MAX;
	int16_t x324 = 4128;
	int32_t t80 = 3320543;

	t80 = (((x321<x322)^x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = 95862LL;
	uint8_t x327 = UINT8_MAX;
	static int32_t x328 = INT32_MIN;
	static volatile int32_t t81 = 2;

	t81 = (((x325<x326)^x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	volatile uint16_t x331 = 7380U;
	int32_t x332 = -86980221;
	volatile int32_t t82 = -1;

	t82 = (((x329<x330)^x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -1;
	volatile int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	uint16_t x336 = 50U;
	int32_t t83 = -229;

	t83 = (((x333<x334)^x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -17;
	volatile int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	static int32_t t84 = 21090900;

	t84 = (((x337<x338)^x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MAX;
	static int64_t x343 = 27LL;
	int32_t x344 = -267694;
	int32_t t85 = -474961599;

	t85 = (((x341<x342)^x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	volatile int16_t x347 = INT16_MIN;
	int32_t t86 = 120856313;

	t86 = (((x345<x346)^x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	int64_t x352 = INT64_MIN;

	t87 = (((x349<x350)^x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	uint32_t x355 = 155U;
	uint64_t x356 = 1318798LLU;
	volatile int32_t t88 = -11523;

	t88 = (((x353<x354)^x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 1065;
	int32_t x358 = -1;
	int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 66154;

	t89 = (((x357<x358)^x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int32_t t90 = 872991;

	t90 = (((x361<x362)^x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 3502;
	int32_t x366 = -8008627;
	int16_t x367 = -19;
	uint64_t x368 = 410LLU;

	t91 = (((x365<x366)^x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x370 = 59U;
	int32_t x371 = INT32_MAX;
	volatile uint64_t x372 = 38685811620LLU;

	t92 = (((x369<x370)^x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	uint32_t x374 = 258U;
	static uint32_t x375 = UINT32_MAX;
	uint8_t x376 = UINT8_MAX;
	int32_t t93 = 1;

	t93 = (((x373<x374)^x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = UINT64_MAX;

	t94 = (((x377<x378)^x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x382 = UINT64_MAX;
	volatile int64_t x383 = INT64_MIN;
	int32_t t95 = -5275341;

	t95 = (((x381<x382)^x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = UINT32_MAX;
	uint64_t x388 = UINT64_MAX;

	t96 = (((x385<x386)^x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 1U;
	int8_t x390 = INT8_MAX;
	static int8_t x392 = 1;
	int32_t t97 = 1;

	t97 = (((x389<x390)^x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = 3512U;
	int32_t x395 = 49214;
	int32_t x396 = -1;
	volatile int32_t t98 = -14152870;

	t98 = (((x393<x394)^x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 0;
	int32_t x399 = 27;
	static volatile int32_t t99 = 1;

	t99 = (((x397<x398)^x399)<=x400);

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

