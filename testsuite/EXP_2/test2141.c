#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x10 = INT8_MAX;
volatile int32_t t2 = 5029;
static uint8_t x23 = UINT8_MAX;
static int32_t x29 = INT32_MIN;
volatile int32_t t7 = -4818;
int8_t x33 = INT8_MIN;
int8_t x34 = -6;
volatile int32_t x37 = 9699;
volatile int16_t x56 = -65;
uint64_t x61 = UINT64_MAX;
int64_t x68 = INT64_MIN;
uint16_t x75 = 15307U;
static uint8_t x76 = UINT8_MAX;
volatile int32_t t19 = 505028;
volatile int32_t t20 = 66;
volatile int32_t x89 = INT32_MAX;
int32_t x92 = INT32_MIN;
static int8_t x94 = INT8_MIN;
int16_t x95 = INT16_MIN;
int64_t x99 = INT64_MIN;
uint16_t x109 = 7224U;
static int32_t x115 = 6454847;
static uint32_t x128 = 1013139282U;
uint16_t x131 = 3533U;
int8_t x132 = INT8_MIN;
uint16_t x133 = 25000U;
int8_t x134 = -1;
int8_t x135 = 0;
volatile int32_t t34 = -1;
volatile int32_t t35 = -360;
int8_t x148 = INT8_MIN;
int8_t x150 = INT8_MIN;
static int8_t x152 = 1;
int32_t t41 = -98877619;
int16_t x188 = INT16_MIN;
static int32_t t46 = 47397;
uint64_t x190 = 1670737115240577020LLU;
int8_t x191 = 0;
volatile int32_t t47 = -128134288;
static uint16_t x193 = UINT16_MAX;
int32_t x195 = -1;
volatile int32_t x200 = -47026119;
uint8_t x203 = 3U;
int16_t x206 = INT16_MIN;
volatile int8_t x208 = -1;
uint8_t x218 = 38U;
int16_t x220 = -1;
int8_t x223 = INT8_MIN;
uint16_t x230 = 198U;
volatile int8_t x232 = INT8_MIN;
volatile uint8_t x234 = 25U;
static int8_t x238 = INT8_MIN;
volatile uint64_t x246 = 12442074696000030LLU;
volatile int32_t t61 = -7;
int8_t x255 = INT8_MIN;
int32_t x262 = -1;
static volatile int16_t x263 = -1;
uint64_t x269 = 362808956LLU;
static volatile int32_t x270 = INT32_MIN;
int32_t x271 = -1;
int8_t x279 = INT8_MAX;
int32_t x288 = INT32_MAX;
int32_t x305 = INT32_MAX;
int8_t x306 = -1;
int32_t t78 = 134995000;
uint8_t x317 = UINT8_MAX;
volatile uint16_t x328 = 1U;
int32_t x333 = INT32_MAX;
volatile int32_t t83 = -106763357;
uint16_t x337 = 11823U;
uint32_t x342 = 212U;
static uint8_t x343 = UINT8_MAX;
int64_t x351 = INT64_MAX;
volatile int64_t x352 = -1LL;
int32_t t87 = 16507764;
int32_t x355 = INT32_MAX;
static volatile int32_t t89 = 25183280;
int16_t x372 = INT16_MIN;
int64_t x385 = INT64_MIN;
uint8_t x389 = 3U;
int8_t x390 = INT8_MAX;
int16_t x391 = 445;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = 3U;
	static int32_t x3 = -50522007;
	uint16_t x4 = 228U;
	volatile int32_t t0 = 727365570;

	t0 = ((x1<(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = UINT32_MAX;
	int16_t x7 = 8;
	int8_t x8 = -20;
	volatile int32_t t1 = -211;

	t1 = ((x5<(x6^x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static uint64_t x11 = 4634667096LLU;
	int8_t x12 = -1;

	t2 = ((x9<(x10^x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 58U;
	uint16_t x14 = 7U;
	uint16_t x15 = 326U;
	int64_t x16 = -437941026223834LL;
	int32_t t3 = 868582002;

	t3 = ((x13<(x14^x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 2561230749LLU;
	volatile int64_t x18 = 21068778252LL;
	uint32_t x19 = UINT32_MAX;
	static uint8_t x20 = 0U;
	volatile int32_t t4 = 224861263;

	t4 = ((x17<(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int16_t x22 = 0;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 0;

	t5 = ((x21<(x22^x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1904LLU;
	uint8_t x26 = 0U;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 159U;
	volatile int32_t t6 = -10218;

	t6 = ((x25<(x26^x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	uint32_t x31 = 0U;
	int32_t x32 = INT32_MIN;

	t7 = ((x29<(x30^x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MAX;
	volatile uint16_t x36 = UINT16_MAX;
	static int32_t t8 = 23456;

	t8 = ((x33<(x34^x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x38 = 22821U;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = 15;
	int32_t t9 = -447;

	t9 = ((x37<(x38^x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x42 = 930333901793817236LL;
	uint16_t x43 = 0U;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -116656146;

	t10 = ((x41<(x42^x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = -1;
	int32_t x47 = -27853;
	uint8_t x48 = 5U;
	volatile int32_t t11 = 228163403;

	t11 = ((x45<(x46^x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 1U;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -1;
	int32_t t12 = 50;

	t12 = ((x49<(x50^x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 35;
	static volatile int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MAX;
	static int32_t t13 = 7;

	t13 = ((x53<(x54^x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	volatile int64_t x59 = INT64_MIN;
	int64_t x60 = 2725529095568069LL;
	static int32_t t14 = 346214634;

	t14 = ((x57<(x58^x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	static uint32_t x63 = 387561U;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 24263568;

	t15 = ((x61<(x62^x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -5199305864203576LL;
	uint16_t x66 = UINT16_MAX;
	int8_t x67 = -1;
	int32_t t16 = 1358;

	t16 = ((x65<(x66^x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = INT16_MAX;
	int32_t x71 = -1;
	volatile int32_t x72 = -23138732;
	int32_t t17 = -13379308;

	t17 = ((x69<(x70^x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 174743620LLU;
	int32_t x74 = 218;
	volatile int32_t t18 = 6660;

	t18 = ((x73<(x74^x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 38382299LLU;
	volatile int8_t x78 = -58;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MAX;

	t19 = ((x77<(x78^x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	static volatile int32_t x82 = 279277;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MIN;

	t20 = ((x81<(x82^x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -7;
	int8_t x86 = INT8_MIN;
	int32_t x87 = -31448;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -17369;

	t21 = ((x85<(x86^x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x90 = 1178295LLU;
	static volatile int32_t x91 = 192599;
	int32_t t22 = 488;

	t22 = ((x89<(x90^x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 287U;
	static int64_t x96 = 229929730LL;
	static volatile int32_t t23 = -57905;

	t23 = ((x93<(x94^x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 6313U;
	int32_t x98 = INT32_MAX;
	int32_t x100 = -21995;
	int32_t t24 = 3;

	t24 = ((x97<(x98^x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = INT16_MAX;
	int64_t x103 = INT64_MIN;
	uint32_t x104 = 654U;
	int32_t t25 = 6920;

	t25 = ((x101<(x102^x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 1606745269917LLU;
	int32_t x106 = INT32_MAX;
	int16_t x107 = INT16_MAX;
	volatile uint16_t x108 = 32648U;
	int32_t t26 = 14076576;

	t26 = ((x105<(x106^x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 278726;

	t27 = ((x109<(x110^x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	uint64_t x114 = 34470767091376596LLU;
	int64_t x116 = -1LL;
	int32_t t28 = -380479;

	t28 = ((x113<(x114^x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static int8_t x118 = 0;
	static int64_t x119 = 978724082LL;
	static int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = -615145538;

	t29 = ((x117<(x118^x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	static int8_t x122 = INT8_MIN;
	uint64_t x123 = 53LLU;
	int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 20;

	t30 = ((x121<(x122^x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = 0;
	int32_t x126 = -37769;
	int64_t x127 = INT64_MIN;
	volatile int32_t t31 = 9696762;

	t31 = ((x125<(x126^x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	volatile int32_t x130 = INT32_MIN;
	int32_t t32 = 0;

	t32 = ((x129<(x130^x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x136 = 1;
	int32_t t33 = 4;

	t33 = ((x133<(x134^x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -74622817;
	uint16_t x138 = 17660U;
	volatile int32_t x139 = 929;
	uint16_t x140 = UINT16_MAX;

	t34 = ((x137<(x138^x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = INT16_MAX;
	uint16_t x143 = 7U;
	int64_t x144 = -210541978295LL;

	t35 = ((x141<(x142^x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = -1LL;
	int64_t x147 = INT64_MIN;
	static int32_t t36 = -87835;

	t36 = ((x145<(x146^x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -28;
	int64_t x151 = -1LL;
	volatile int32_t t37 = 65;

	t37 = ((x149<(x150^x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 3768LL;
	int8_t x154 = INT8_MIN;
	volatile int32_t x155 = INT32_MIN;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = -409;

	t38 = ((x153<(x154^x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	volatile int32_t x158 = INT32_MAX;
	uint16_t x159 = 327U;
	uint8_t x160 = 8U;
	int32_t t39 = 1413675;

	t39 = ((x157<(x158^x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 27987190LL;
	uint64_t x162 = 6034475LLU;
	uint16_t x163 = 109U;
	int16_t x164 = -1;
	volatile int32_t t40 = 19282799;

	t40 = ((x161<(x162^x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 0;
	int16_t x166 = -112;
	static volatile int8_t x167 = INT8_MAX;
	uint32_t x168 = 64005260U;

	t41 = ((x165<(x166^x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = 102U;
	uint32_t x172 = UINT32_MAX;
	int32_t t42 = 426634;

	t42 = ((x169<(x170^x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 726140816777817300LL;
	int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	static int64_t x176 = 115261067411LL;
	int32_t t43 = 4070529;

	t43 = ((x173<(x174^x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	uint32_t x178 = 972835324U;
	static int8_t x179 = -1;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t44 = 3512;

	t44 = ((x177<(x178^x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 51U;
	int32_t x183 = 8;
	volatile uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = 1;

	t45 = ((x181<(x182^x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile int32_t x186 = -63500801;
	uint32_t x187 = UINT32_MAX;

	t46 = ((x185<(x186^x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int8_t x192 = INT8_MAX;

	t47 = ((x189<(x190^x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t48 = -13341;

	t48 = ((x193<(x194^x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 3005U;
	static uint8_t x198 = 37U;
	volatile int8_t x199 = -1;
	volatile int32_t t49 = 511183548;

	t49 = ((x197<(x198^x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int32_t x202 = INT32_MIN;
	int64_t x204 = -1LL;
	int32_t t50 = 268858489;

	t50 = ((x201<(x202^x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 3496LLU;
	int16_t x207 = INT16_MAX;
	int32_t t51 = -96787;

	t51 = ((x205<(x206^x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = 1LL;
	uint64_t x210 = 3976938362654LLU;
	uint8_t x211 = 24U;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = 241550;

	t52 = ((x209<(x210^x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 1420U;
	int64_t x214 = INT64_MIN;
	volatile int16_t x215 = -1;
	int32_t x216 = -1;
	volatile int32_t t53 = -265165;

	t53 = ((x213<(x214^x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint8_t x219 = 37U;
	static int32_t t54 = -1011;

	t54 = ((x217<(x218^x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1;
	int16_t x222 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = 4155375;

	t55 = ((x221<(x222^x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = 0;
	static int32_t x226 = INT32_MIN;
	uint32_t x227 = 6U;
	volatile uint16_t x228 = 18U;
	volatile int32_t t56 = 149;

	t56 = ((x225<(x226^x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int32_t t57 = 464003831;

	t57 = ((x229<(x230^x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -5;
	static int16_t x235 = 0;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -1;

	t58 = ((x233<(x234^x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 46607639U;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -2449LL;
	volatile int32_t t59 = 393193170;

	t59 = ((x237<(x238^x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 8U;
	int32_t x242 = -1052;
	uint16_t x243 = 4U;
	int8_t x244 = 53;
	int32_t t60 = 1463;

	t60 = ((x241<(x242^x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 5569U;
	static volatile uint8_t x247 = 1U;
	int16_t x248 = 1;

	t61 = ((x245<(x246^x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MIN;
	static int16_t x250 = 15;
	int16_t x251 = INT16_MIN;
	static int8_t x252 = -1;
	int32_t t62 = -32;

	t62 = ((x249<(x250^x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 31U;
	static uint16_t x254 = 8U;
	static int16_t x256 = -1;
	int32_t t63 = -21951;

	t63 = ((x253<(x254^x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 7290890396928LLU;
	uint64_t x258 = 10742981896829810LLU;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = 103;

	t64 = ((x257<(x258^x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x264 = 19;
	int32_t t65 = -421;

	t65 = ((x261<(x262^x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	volatile int64_t x266 = INT64_MAX;
	static int16_t x267 = -15899;
	int16_t x268 = -39;
	int32_t t66 = 401708;

	t66 = ((x265<(x266^x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x272 = INT32_MIN;
	int32_t t67 = -56987;

	t67 = ((x269<(x270^x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -97605LL;
	volatile int64_t x274 = INT64_MIN;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -1691369;

	t68 = ((x273<(x274^x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	volatile uint64_t x278 = 26862022LLU;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = -323033;

	t69 = ((x277<(x278^x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	static uint64_t x282 = 847169777146257479LLU;
	static volatile int32_t x283 = INT32_MAX;
	uint32_t x284 = 142982444U;
	volatile int32_t t70 = 5755;

	t70 = ((x281<(x282^x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile uint8_t x286 = 85U;
	int64_t x287 = -203115146LL;
	volatile int32_t t71 = 74391960;

	t71 = ((x285<(x286^x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = 295;
	int64_t x292 = -2818792968721LL;
	static volatile int32_t t72 = 13;

	t72 = ((x289<(x290^x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MAX;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = -3;

	t73 = ((x293<(x294^x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 5U;
	static int8_t x298 = INT8_MAX;
	int64_t x299 = -126938922049LL;
	int32_t x300 = INT32_MAX;
	static int32_t t74 = 349036826;

	t74 = ((x297<(x298^x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 0;
	static int16_t x302 = -192;
	static uint64_t x303 = 1421LLU;
	int32_t x304 = -1;
	int32_t t75 = -1;

	t75 = ((x301<(x302^x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x307 = -143107748339LL;
	static int8_t x308 = INT8_MAX;
	volatile int32_t t76 = -21162377;

	t76 = ((x305<(x306^x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -1LL;
	uint64_t x310 = 18644LLU;
	volatile int8_t x311 = 24;
	volatile uint64_t x312 = 76LLU;
	volatile int32_t t77 = 7852957;

	t77 = ((x309<(x310^x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 490470377U;
	volatile int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;

	t78 = ((x313<(x314^x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x318 = -848;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -24;
	static int32_t t79 = 4929058;

	t79 = ((x317<(x318^x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MIN;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = -26322001794952LL;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = -5277;

	t80 = ((x321<(x322^x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 741068780U;
	int16_t x326 = 6463;
	volatile int32_t x327 = -1;
	static int32_t t81 = 2061;

	t81 = ((x325<(x326^x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	static volatile int64_t x330 = INT64_MAX;
	int8_t x331 = 2;
	int32_t x332 = 138;
	static int32_t t82 = 0;

	t82 = ((x329<(x330^x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x334 = INT8_MAX;
	static volatile int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;

	t83 = ((x333<(x334^x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x338 = INT16_MIN;
	uint8_t x339 = 69U;
	int32_t x340 = -6866531;
	static int32_t t84 = 186753;

	t84 = ((x337<(x338^x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = INT16_MAX;
	int16_t x344 = 357;
	volatile int32_t t85 = 3597401;

	t85 = ((x341<(x342^x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = 32741541LL;
	volatile int8_t x347 = INT8_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -2;

	t86 = ((x345<(x346^x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	static int8_t x350 = INT8_MIN;

	t87 = ((x349<(x350^x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	volatile int64_t x354 = INT64_MIN;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -3;

	t88 = ((x353<(x354^x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	volatile uint8_t x358 = UINT8_MAX;
	uint8_t x359 = 15U;
	uint32_t x360 = 1912085U;

	t89 = ((x357<(x358^x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -13827;
	int32_t x362 = -7818;
	int32_t x363 = 0;
	volatile int64_t x364 = -205094979338897LL;
	int32_t t90 = -27660966;

	t90 = ((x361<(x362^x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	uint8_t x366 = 1U;
	volatile int8_t x367 = -1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 26232;

	t91 = ((x365<(x366^x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 20;
	int8_t x370 = -1;
	int8_t x371 = 0;
	volatile int32_t t92 = -759;

	t92 = ((x369<(x370^x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MIN;
	int64_t x374 = -906LL;
	static int16_t x375 = -10214;
	uint32_t x376 = 27U;
	int32_t t93 = 2783;

	t93 = ((x373<(x374^x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	int64_t x380 = INT64_MAX;
	volatile int32_t t94 = -15804020;

	t94 = ((x377<(x378^x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 25LLU;
	uint8_t x382 = UINT8_MAX;
	uint8_t x383 = 74U;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t95 = 304;

	t95 = ((x381<(x382^x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = 2357U;
	int8_t x387 = 22;
	static int32_t x388 = 239526;
	static volatile int32_t t96 = 2185941;

	t96 = ((x385<(x386^x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x392 = -122;
	int32_t t97 = -222738;

	t97 = ((x389<(x390^x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -21;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = INT8_MAX;
	int32_t x396 = -1;
	volatile int32_t t98 = -4;

	t98 = ((x393<(x394^x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t99 = 109865297;

	t99 = ((x397<(x398^x399))<x400);

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

