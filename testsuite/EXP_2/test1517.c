#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -5;
static volatile int32_t t0 = -574;
int32_t x7 = INT32_MIN;
int8_t x11 = -1;
int64_t x19 = INT64_MIN;
int16_t x20 = -13;
static volatile int64_t x26 = INT64_MIN;
static volatile uint16_t x28 = 46U;
volatile uint8_t x30 = 6U;
static int32_t t8 = -1251;
int8_t x60 = -12;
static int32_t t14 = 943901;
uint16_t x65 = 0U;
int64_t x72 = 34LL;
int32_t x82 = 22161127;
int32_t x84 = INT32_MAX;
int16_t x86 = INT16_MIN;
int8_t x89 = -1;
static int16_t x91 = -1;
volatile int32_t t22 = 48;
uint8_t x94 = UINT8_MAX;
int64_t x98 = INT64_MIN;
int16_t x102 = 792;
volatile int16_t x103 = -25;
static int16_t x107 = INT16_MAX;
uint16_t x110 = 633U;
int64_t x115 = INT64_MIN;
uint16_t x116 = 7537U;
int32_t t28 = 944435;
int32_t t29 = 49;
int16_t x124 = -1;
int16_t x126 = 589;
volatile int8_t x134 = INT8_MIN;
int8_t x136 = -1;
static int64_t x141 = -1248018148238383LL;
uint8_t x142 = 20U;
int16_t x143 = INT16_MAX;
volatile uint8_t x144 = 16U;
static int32_t t35 = 551;
static int8_t x150 = INT8_MIN;
int32_t x151 = INT32_MIN;
volatile uint64_t x154 = 104922311124996LLU;
static uint32_t x155 = UINT32_MAX;
int32_t x159 = -1;
volatile int32_t t39 = 318;
int8_t x161 = -1;
int64_t x166 = 621138LL;
volatile int16_t x167 = -1;
volatile int32_t t41 = -19;
static volatile int16_t x172 = -1;
static volatile uint64_t x173 = 136961047020915LLU;
volatile int32_t x176 = INT32_MIN;
volatile int32_t t44 = 27366070;
volatile int8_t x182 = INT8_MIN;
volatile int32_t t45 = 235964;
uint8_t x193 = 0U;
static volatile int8_t x204 = INT8_MIN;
static int16_t x210 = -1;
int32_t x216 = 283965334;
static int32_t t53 = 11932657;
int64_t x219 = INT64_MIN;
volatile uint64_t x226 = UINT64_MAX;
volatile int64_t x230 = 11682020785487118LL;
uint64_t x231 = UINT64_MAX;
int8_t x236 = -1;
int64_t x238 = INT64_MIN;
int32_t x251 = -199413;
int32_t x254 = INT32_MIN;
static uint32_t x263 = 501U;
uint64_t x264 = 1915969897452LLU;
int16_t x268 = INT16_MIN;
volatile uint16_t x269 = 15U;
uint32_t x270 = 3U;
volatile int32_t t67 = -834978331;
uint8_t x279 = 1U;
volatile int32_t t69 = -614;
static int32_t x284 = -90821;
static int8_t x286 = -12;
static uint32_t x296 = 104852974U;
volatile int32_t t75 = -452;
int16_t x317 = 0;
volatile int32_t x318 = INT32_MAX;
static int16_t x319 = INT16_MIN;
int8_t x320 = INT8_MIN;
int16_t x322 = INT16_MAX;
int32_t x323 = -1;
int32_t t80 = 425047;
int64_t x325 = INT64_MAX;
uint64_t x330 = 5456329888308560305LLU;
uint8_t x334 = 24U;
int8_t x336 = INT8_MIN;
static int32_t t83 = -795132;
int32_t t84 = 163;
static int8_t x343 = INT8_MIN;
uint16_t x351 = UINT16_MAX;
uint16_t x361 = UINT16_MAX;
uint16_t x364 = 14263U;
int32_t t90 = -670;
static volatile int8_t x368 = 0;
static uint16_t x369 = 3U;
int16_t x374 = INT16_MIN;
uint8_t x375 = 1U;
int32_t x376 = -41708632;
static volatile int32_t t93 = 6546;
int64_t x380 = INT64_MAX;
uint16_t x381 = 247U;
volatile int32_t x383 = 102;
uint32_t x384 = 879U;
volatile int32_t t96 = 1330180;
uint8_t x396 = UINT8_MAX;
uint16_t x397 = UINT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MIN;

	t0 = ((x1^(x2<x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MIN;
	static uint64_t x8 = 4080034LLU;
	volatile int32_t t1 = 741262;

	t1 = ((x5^(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1593;
	int64_t x10 = -55304061LL;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -95207;

	t2 = ((x9^(x10<x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 38U;
	int16_t x14 = INT16_MIN;
	volatile uint16_t x15 = 30U;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -4869679;

	t3 = ((x13^(x14<x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MAX;
	volatile int32_t t4 = 16643579;

	t4 = ((x17^(x18<x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	static int64_t x23 = INT64_MIN;
	uint16_t x24 = 315U;
	volatile int32_t t5 = 177858902;

	t5 = ((x21^(x22<x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 167741720U;
	volatile int8_t x27 = 54;
	int32_t t6 = -21;

	t6 = ((x25^(x26<x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -38;
	uint8_t x31 = UINT8_MAX;
	static int64_t x32 = -1LL;
	volatile int32_t t7 = -151;

	t7 = ((x29^(x30<x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 50677568769LLU;
	static volatile int16_t x34 = -1;
	uint8_t x35 = 22U;
	int64_t x36 = INT64_MIN;

	t8 = ((x33^(x34<x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	volatile int8_t x38 = 52;
	int16_t x39 = -1;
	int64_t x40 = INT64_MIN;
	static volatile int32_t t9 = -225368033;

	t9 = ((x37^(x38<x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -38033;
	volatile int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MIN;
	static int32_t x44 = -569543543;
	static int32_t t10 = -14001695;

	t10 = ((x41^(x42<x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static uint64_t x46 = 933562027280106LLU;
	volatile int32_t x47 = INT32_MIN;
	static int16_t x48 = -3;
	volatile int32_t t11 = -91776;

	t11 = ((x45^(x46<x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 12U;
	volatile int32_t x51 = INT32_MIN;
	volatile uint8_t x52 = 10U;
	volatile int32_t t12 = -11920833;

	t12 = ((x49^(x50<x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = -1;
	volatile int16_t x55 = INT16_MIN;
	uint8_t x56 = 0U;
	static int32_t t13 = 1336;

	t13 = ((x53^(x54<x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = 230;
	int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MAX;

	t14 = ((x57^(x58<x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int8_t x62 = 1;
	volatile uint64_t x63 = 388138646LLU;
	uint16_t x64 = 48U;
	volatile int32_t t15 = -92;

	t15 = ((x61^(x62<x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -2135564118627957LL;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -6;

	t16 = ((x65^(x66<x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -1LL;
	volatile uint16_t x70 = UINT16_MAX;
	volatile int16_t x71 = INT16_MIN;
	volatile int32_t t17 = 1;

	t17 = ((x69^(x70<x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 82LLU;
	static volatile int64_t x74 = -1LL;
	volatile int64_t x75 = -1LL;
	int8_t x76 = -1;
	int32_t t18 = 83;

	t18 = ((x73^(x74<x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 2U;
	uint32_t x78 = 447U;
	int32_t x79 = -2;
	int8_t x80 = -1;
	volatile int32_t t19 = 29;

	t19 = ((x77^(x78<x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	static uint8_t x83 = 56U;
	static volatile int32_t t20 = 204;

	t20 = ((x81^(x82<x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	static uint64_t x88 = UINT64_MAX;
	static int32_t t21 = 861;

	t21 = ((x85^(x86<x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	uint64_t x92 = 1164086LLU;

	t22 = ((x89^(x90<x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = 15U;
	int64_t x95 = 25LL;
	int8_t x96 = INT8_MAX;
	int32_t t23 = -589;

	t23 = ((x93^(x94<x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -1;
	int16_t x99 = -5;
	uint16_t x100 = 7598U;
	int32_t t24 = -14101065;

	t24 = ((x97^(x98<x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int64_t x104 = -20844452180LL;
	int32_t t25 = -467379;

	t25 = ((x101^(x102<x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	static int16_t x106 = 8191;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 203098;

	t26 = ((x105^(x106<x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int16_t x111 = INT16_MAX;
	volatile int16_t x112 = 7500;
	static int32_t t27 = 7548808;

	t27 = ((x109^(x110<x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint8_t x114 = 14U;

	t28 = ((x113^(x114<x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int32_t x118 = INT32_MIN;
	volatile int16_t x119 = INT16_MIN;
	int16_t x120 = -1;

	t29 = ((x117^(x118<x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint8_t x122 = 4U;
	int16_t x123 = 0;
	volatile int32_t t30 = 606654;

	t30 = ((x121^(x122<x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = UINT8_MAX;
	int16_t x127 = -3;
	int64_t x128 = 176117514LL;
	volatile int32_t t31 = -72;

	t31 = ((x125^(x126<x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	uint16_t x130 = 8U;
	volatile int16_t x131 = -56;
	static volatile uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = -5602981;

	t32 = ((x129^(x130<x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	volatile int8_t x135 = INT8_MAX;
	volatile int32_t t33 = -27;

	t33 = ((x133^(x134<x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 55140493405141061LLU;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 1213U;
	volatile uint32_t x140 = 51616U;
	int32_t t34 = -763772;

	t34 = ((x137^(x138<x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {


	t35 = ((x141^(x142<x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -4;
	static uint8_t x146 = 18U;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = 158U;
	int32_t t36 = 51078;

	t36 = ((x145^(x146<x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 0U;
	static uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = -1025619;

	t37 = ((x149^(x150<x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 3U;
	static int32_t x156 = -1470025;
	int32_t t38 = 1185;

	t38 = ((x153^(x154<x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 13U;
	int64_t x158 = INT64_MAX;
	volatile int16_t x160 = -1;

	t39 = ((x157^(x158<x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = UINT16_MAX;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -83;

	t40 = ((x161^(x162<x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x168 = UINT64_MAX;

	t41 = ((x165^(x166<x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = 31;
	volatile int32_t t42 = 3763;

	t42 = ((x169^(x170<x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	volatile int32_t t43 = -509674;

	t43 = ((x173^(x174<x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = -1030;
	int8_t x179 = -5;
	volatile uint16_t x180 = 32U;

	t44 = ((x177^(x178<x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int8_t x183 = -1;
	static int64_t x184 = INT64_MIN;

	t45 = ((x181^(x182<x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static volatile int16_t x186 = 114;
	uint16_t x187 = UINT16_MAX;
	uint8_t x188 = 6U;
	volatile int32_t t46 = -39341049;

	t46 = ((x185^(x186<x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MAX;
	int64_t x190 = -4267808621LL;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 12035629825LLU;
	volatile int32_t t47 = 34202;

	t47 = ((x189^(x190<x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = -1;
	static uint8_t x195 = 127U;
	uint16_t x196 = 5762U;
	volatile int32_t t48 = 0;

	t48 = ((x193^(x194<x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int16_t x198 = 0;
	int8_t x199 = INT8_MAX;
	volatile uint32_t x200 = 8413U;
	volatile int32_t t49 = -110;

	t49 = ((x197^(x198<x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MAX;
	static volatile uint16_t x202 = UINT16_MAX;
	volatile int64_t x203 = INT64_MAX;
	int32_t t50 = 175;

	t50 = ((x201^(x202<x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 0U;
	int16_t x206 = -9;
	int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t51 = 0;

	t51 = ((x205^(x206<x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	static volatile int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	int32_t t52 = -32917438;

	t52 = ((x209^(x210<x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int32_t x214 = -13;
	int64_t x215 = INT64_MIN;

	t53 = ((x213^(x214<x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -41;
	int16_t x218 = INT16_MIN;
	static uint32_t x220 = 1367567U;
	int32_t t54 = 235674;

	t54 = ((x217^(x218<x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	int32_t x223 = 1;
	int64_t x224 = INT64_MIN;
	int32_t t55 = -65260;

	t55 = ((x221^(x222<x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 82;
	uint8_t x227 = 3U;
	volatile int8_t x228 = INT8_MIN;
	static int32_t t56 = -56542;

	t56 = ((x225^(x226<x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x232 = -1;
	static int32_t t57 = -82799;

	t57 = ((x229^(x230<x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MAX;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	static volatile int32_t t58 = 8730529;

	t58 = ((x233^(x234<x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MAX;
	uint64_t x239 = 17785495278430LLU;
	static uint16_t x240 = UINT16_MAX;
	static volatile int32_t t59 = -352;

	t59 = ((x237^(x238<x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 21U;
	uint64_t x242 = 24LLU;
	uint16_t x243 = 911U;
	static uint8_t x244 = 16U;
	int32_t t60 = -31775058;

	t60 = ((x241^(x242<x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	static uint8_t x246 = UINT8_MAX;
	volatile int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 932861386;

	t61 = ((x245^(x246<x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MAX;
	uint8_t x252 = 23U;
	volatile int32_t t62 = 413;

	t62 = ((x249^(x250<x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = -60707;

	t63 = ((x253^(x254<x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 2;
	uint16_t x258 = UINT16_MAX;
	static uint8_t x259 = 1U;
	static int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -10;

	t64 = ((x257^(x258<x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int8_t x262 = -1;
	static int32_t t65 = 3318853;

	t65 = ((x261^(x262<x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1895834316LL;
	uint8_t x266 = 1U;
	int64_t x267 = -3042931035LL;
	volatile int32_t t66 = 1;

	t66 = ((x265^(x266<x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x271 = UINT64_MAX;
	uint64_t x272 = UINT64_MAX;

	t67 = ((x269^(x270<x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 66U;
	uint16_t x274 = 22685U;
	volatile int32_t x275 = INT32_MAX;
	volatile uint16_t x276 = 11U;
	volatile int32_t t68 = -2;

	t68 = ((x273^(x274<x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x280 = INT16_MIN;

	t69 = ((x277^(x278<x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 2U;
	int32_t x282 = INT32_MIN;
	int32_t x283 = -22;
	int32_t t70 = 208266;

	t70 = ((x281^(x282<x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x287 = 0U;
	static int16_t x288 = 99;
	static volatile int32_t t71 = 14671895;

	t71 = ((x285^(x286<x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	static int8_t x290 = INT8_MAX;
	int64_t x291 = INT64_MAX;
	static volatile int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 60;

	t72 = ((x289^(x290<x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	static int8_t x294 = -1;
	int64_t x295 = -1LL;
	int32_t t73 = -12059;

	t73 = ((x293^(x294<x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MIN;
	static int16_t x300 = 2;
	volatile int32_t t74 = -19626143;

	t74 = ((x297^(x298<x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 947;
	int32_t x302 = -1059608205;
	uint16_t x303 = 0U;
	int16_t x304 = -1;

	t75 = ((x301^(x302<x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 1;
	uint64_t x306 = 1497LLU;
	volatile uint8_t x307 = UINT8_MAX;
	volatile int16_t x308 = -1;
	int32_t t76 = 62;

	t76 = ((x305^(x306<x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = -1;
	static volatile int32_t x312 = -1;
	int32_t t77 = -170168;

	t77 = ((x309^(x310<x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x313 = 6U;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	int32_t t78 = -188669502;

	t78 = ((x313^(x314<x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t t79 = 1;

	t79 = ((x317^(x318<x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -1;
	int8_t x324 = 2;

	t80 = ((x321^(x322<x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	volatile int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	int32_t t81 = 1497673;

	t81 = ((x325^(x326<x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 89041038LLU;
	int32_t x331 = INT32_MAX;
	int32_t x332 = -1;
	static int32_t t82 = -78059;

	t82 = ((x329^(x330<x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 12;
	int32_t x335 = INT32_MAX;

	t83 = ((x333^(x334<x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint8_t x338 = 23U;
	uint32_t x339 = UINT32_MAX;
	uint64_t x340 = 1267LLU;

	t84 = ((x337^(x338<x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = 292U;
	uint32_t x342 = UINT32_MAX;
	static int16_t x344 = -1;
	volatile int32_t t85 = -13;

	t85 = ((x341^(x342<x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -14525;
	uint32_t x346 = 1U;
	int8_t x347 = 13;
	int32_t x348 = 3;
	volatile int32_t t86 = 8332600;

	t86 = ((x345^(x346<x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = UINT8_MAX;
	int64_t x350 = 544644884LL;
	int32_t x352 = -1;
	static int32_t t87 = -371962652;

	t87 = ((x349^(x350<x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x354 = 3077U;
	int8_t x355 = INT8_MAX;
	uint8_t x356 = 1U;
	volatile int32_t t88 = -9;

	t88 = ((x353^(x354<x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 31U;
	int8_t x358 = 1;
	int32_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = 340;

	t89 = ((x357^(x358<x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 11326U;
	int32_t x363 = INT32_MAX;

	t90 = ((x361^(x362<x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 4013487768320049LLU;
	int8_t x366 = -9;
	int8_t x367 = 8;
	static int32_t t91 = 198;

	t91 = ((x365^(x366<x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 21U;
	static int32_t x372 = 1067804;
	volatile int32_t t92 = 361;

	t92 = ((x369^(x370<x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 2U;

	t93 = ((x373^(x374<x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	uint8_t x378 = 36U;
	int8_t x379 = INT8_MAX;
	volatile int32_t t94 = 56;

	t94 = ((x377^(x378<x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	static int32_t t95 = 9;

	t95 = ((x381^(x382<x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -3;
	static uint8_t x386 = 3U;
	uint32_t x387 = 2331679U;
	uint16_t x388 = 1692U;

	t96 = ((x385^(x386<x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 830U;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 540U;
	volatile uint8_t x392 = 15U;
	volatile int32_t t97 = 779628;

	t97 = ((x389^(x390<x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -12447;
	volatile int64_t x394 = INT64_MIN;
	volatile int8_t x395 = 61;
	volatile int32_t t98 = -644;

	t98 = ((x393^(x394<x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x398 = 14U;
	int8_t x399 = -17;
	int8_t x400 = -1;
	static int32_t t99 = 91578589;

	t99 = ((x397^(x398<x399))<x400);

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

