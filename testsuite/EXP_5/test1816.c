#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static uint8_t x4 = 1U;
volatile int32_t t0 = -72456;
static int64_t x8 = INT64_MIN;
int32_t t1 = 215;
static int16_t x9 = INT16_MIN;
uint16_t x10 = 2U;
volatile int8_t x17 = INT8_MIN;
int32_t x34 = -565;
uint32_t x37 = UINT32_MAX;
uint32_t x43 = 1025U;
uint16_t x56 = 0U;
volatile uint8_t x57 = 6U;
int32_t x59 = INT32_MAX;
uint64_t x69 = UINT64_MAX;
static int32_t x72 = -1486;
int32_t x79 = -1;
uint8_t x81 = UINT8_MAX;
int8_t x89 = INT8_MAX;
uint16_t x91 = 1U;
int32_t t22 = -21827;
int32_t x101 = INT32_MIN;
uint64_t x105 = UINT64_MAX;
int64_t x107 = INT64_MIN;
int64_t x108 = -975033496631750LL;
int64_t x109 = INT64_MAX;
volatile int32_t t27 = 0;
static volatile uint8_t x113 = 8U;
volatile int32_t t29 = -4539805;
int32_t t30 = -2;
int32_t t31 = -2926757;
int16_t x134 = INT16_MIN;
static int8_t x143 = INT8_MIN;
int8_t x146 = INT8_MAX;
volatile int16_t x149 = -1;
volatile int32_t t37 = 0;
int16_t x154 = INT16_MAX;
int8_t x155 = INT8_MAX;
int16_t x157 = INT16_MIN;
int32_t x159 = -125774428;
static uint8_t x160 = UINT8_MAX;
int8_t x163 = INT8_MIN;
static uint64_t x165 = UINT64_MAX;
uint16_t x169 = 2U;
int64_t x184 = INT64_MAX;
int32_t x186 = INT32_MIN;
static int16_t x190 = -46;
volatile int16_t x191 = INT16_MAX;
int32_t t47 = 13843309;
uint8_t x197 = UINT8_MAX;
static volatile int32_t x198 = -129064236;
static volatile int32_t t49 = -5777697;
int16_t x205 = INT16_MAX;
volatile int32_t t52 = -127263312;
int32_t t53 = 236032986;
int32_t x220 = INT32_MIN;
int16_t x221 = -1;
int64_t x235 = 129292828396610403LL;
static int32_t t58 = -208105144;
volatile int32_t t59 = 24385876;
int8_t x242 = 2;
volatile int32_t t60 = -1;
uint32_t x249 = UINT32_MAX;
int32_t t63 = 474;
volatile uint16_t x269 = 32U;
static volatile uint32_t x270 = UINT32_MAX;
static int8_t x271 = INT8_MIN;
int16_t x276 = 418;
int16_t x284 = -1;
volatile int16_t x286 = 155;
volatile uint32_t x293 = 722710740U;
static volatile uint16_t x298 = 1529U;
static int32_t t74 = -459959;
int8_t x306 = INT8_MIN;
int32_t x310 = INT32_MIN;
volatile int32_t x312 = -1;
int64_t x316 = INT64_MAX;
volatile int32_t x323 = -1;
static int32_t x325 = INT32_MAX;
int16_t x327 = INT16_MIN;
static uint32_t x331 = 750U;
static volatile int8_t x332 = INT8_MAX;
uint32_t x334 = 11737U;
int8_t x336 = -1;
uint8_t x346 = 8U;
volatile int32_t t88 = -1214;
int32_t t92 = -256953;
int32_t x377 = INT32_MIN;
volatile int32_t t94 = -1375162;
volatile int32_t t96 = 7;


void f0(void) {
	static uint64_t x2 = 10939973317496LLU;
	static int64_t x3 = 9LL;

	t0 = (x1<((x2&x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = 223854194LLU;
	uint16_t x7 = UINT16_MAX;

	t1 = (x5<((x6&x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x11 = INT16_MIN;
	volatile int64_t x12 = 6934LL;
	static int32_t t2 = 741007;

	t2 = (x9<((x10&x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	uint8_t x14 = 1U;
	volatile int16_t x15 = INT16_MIN;
	uint64_t x16 = 16898745156647LLU;
	volatile int32_t t3 = 13;

	t3 = (x13<((x14&x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -8497;
	uint8_t x19 = 5U;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -12176902;

	t4 = (x17<((x18&x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	static int32_t x23 = -1;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 0;

	t5 = (x21<((x22&x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 7654024666526LL;
	int16_t x26 = INT16_MIN;
	static int8_t x27 = -4;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 12;

	t6 = (x25<((x26&x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -9;
	static int32_t x30 = -640;
	volatile uint32_t x31 = UINT32_MAX;
	volatile int16_t x32 = 15;
	static volatile int32_t t7 = -97368;

	t7 = (x29<((x30&x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 55092373312247550LL;
	static uint64_t x35 = 5938LLU;
	int8_t x36 = -3;
	volatile int32_t t8 = 87812;

	t8 = (x33<((x34&x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = 60U;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 1465537954LLU;
	static int32_t t9 = 311367618;

	t9 = (x37<((x38&x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	uint8_t x42 = UINT8_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = -109084;

	t10 = (x41<((x42&x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 921U;
	uint32_t x47 = 55013U;
	int64_t x48 = 92LL;
	int32_t t11 = 436000;

	t11 = (x45<((x46&x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static int8_t x50 = 19;
	static uint16_t x51 = UINT16_MAX;
	int64_t x52 = -8276622880LL;
	int32_t t12 = 191999170;

	t12 = (x49<((x50&x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -59;
	volatile int8_t x54 = INT8_MAX;
	uint16_t x55 = 3797U;
	int32_t t13 = 3;

	t13 = (x53<((x54&x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = -60451288;
	static volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -574391781;

	t14 = (x57<((x58&x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	volatile int16_t x62 = 245;
	static int32_t x63 = INT32_MIN;
	static int32_t x64 = -1;
	int32_t t15 = 83;

	t15 = (x61<((x62&x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	static volatile int32_t x66 = INT32_MIN;
	int32_t x67 = -1;
	static uint32_t x68 = 52630U;
	static int32_t t16 = -1648;

	t16 = (x65<((x66&x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = INT16_MIN;
	int32_t t17 = 107900901;

	t17 = (x69<((x70&x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MAX;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 9U;
	volatile int32_t t18 = 6628;

	t18 = (x73<((x74&x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = UINT64_MAX;
	static uint64_t x78 = 227548677LLU;
	int64_t x80 = 521499110068549279LL;
	int32_t t19 = 74940;

	t19 = (x77<((x78&x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	uint16_t x83 = 130U;
	static int16_t x84 = INT16_MIN;
	int32_t t20 = -503478;

	t20 = (x81<((x82&x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 115U;
	int16_t x86 = INT16_MIN;
	static uint32_t x87 = 5720336U;
	static int16_t x88 = -1;
	int32_t t21 = 18307;

	t21 = (x85<((x86&x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = INT64_MIN;
	static volatile int8_t x92 = INT8_MAX;

	t22 = (x89<((x90&x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -730080676LL;
	int16_t x94 = 72;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = -455272197;

	t23 = (x93<((x94&x95)<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 6632278U;
	uint64_t x98 = 30056LLU;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 60U;
	volatile int32_t t24 = 249314110;

	t24 = (x97<((x98&x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x102 = 4714U;
	uint32_t x103 = 197040U;
	int32_t x104 = -1;
	volatile int32_t t25 = -922;

	t25 = (x101<((x102&x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = 90644274271LL;
	volatile int32_t t26 = 0;

	t26 = (x105<((x106&x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MAX;
	static int8_t x111 = -1;
	static int16_t x112 = -126;

	t27 = (x109<((x110&x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 14389U;
	int64_t x116 = INT64_MAX;
	volatile int32_t t28 = -26353;

	t28 = (x113<((x114&x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 28U;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	static int16_t x120 = 0;

	t29 = (x117<((x118&x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = -1;
	volatile int32_t x122 = -1;
	volatile int16_t x123 = 16;
	volatile uint8_t x124 = UINT8_MAX;

	t30 = (x121<((x122&x123)<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MAX;
	int16_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 7U;

	t31 = (x125<((x126&x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	static int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	int64_t x132 = INT64_MAX;
	int32_t t32 = 261824767;

	t32 = (x129<((x130&x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int32_t x135 = -540037748;
	uint16_t x136 = 117U;
	volatile int32_t t33 = 20;

	t33 = (x133<((x134&x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	static uint8_t x139 = 4U;
	volatile uint32_t x140 = 153985828U;
	volatile int32_t t34 = 39916119;

	t34 = (x137<((x138&x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 21U;
	static uint64_t x142 = 6LLU;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 247;

	t35 = (x141<((x142&x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 34686010738363LLU;
	volatile int32_t t36 = 7;

	t36 = (x145<((x146&x147)<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	static volatile int32_t x151 = INT32_MIN;
	volatile int64_t x152 = INT64_MIN;

	t37 = (x149<((x150&x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int64_t x156 = -1LL;
	int32_t t38 = -3625046;

	t38 = (x153<((x154&x155)<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 19899841;
	static int32_t t39 = 0;

	t39 = (x157<((x158&x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 2559U;
	static uint64_t x162 = UINT64_MAX;
	int8_t x164 = 63;
	static volatile int32_t t40 = -50558;

	t40 = (x161<((x162&x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = 478;
	volatile int32_t x167 = INT32_MAX;
	int32_t x168 = 2860;
	volatile int32_t t41 = 240;

	t41 = (x165<((x166&x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = UINT8_MAX;
	volatile int64_t x171 = INT64_MIN;
	uint8_t x172 = 32U;
	int32_t t42 = 43;

	t42 = (x169<((x170&x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MAX;
	volatile int16_t x175 = INT16_MIN;
	static volatile int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 6611;

	t43 = (x173<((x174&x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int32_t x178 = 20388856;
	uint8_t x179 = 1U;
	uint8_t x180 = UINT8_MAX;
	static volatile int32_t t44 = -35833347;

	t44 = (x177<((x178&x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -3LL;
	int16_t x182 = INT16_MIN;
	volatile int8_t x183 = -14;
	static int32_t t45 = -40393973;

	t45 = (x181<((x182&x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 6U;
	uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 3191665932LLU;
	int32_t t46 = -30558976;

	t46 = (x185<((x186&x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int8_t x192 = INT8_MIN;

	t47 = (x189<((x190&x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	static uint16_t x195 = 6U;
	uint16_t x196 = 12827U;
	volatile int32_t t48 = 1498;

	t48 = (x193<((x194&x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x199 = 7520U;
	int8_t x200 = 6;

	t49 = (x197<((x198&x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = 1U;
	int8_t x203 = -1;
	int64_t x204 = INT64_MIN;
	static int32_t t50 = 1;

	t50 = (x201<((x202&x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 106453LLU;
	int16_t x207 = -1;
	int8_t x208 = -1;
	volatile int32_t t51 = 952101578;

	t51 = (x205<((x206&x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 81U;
	int16_t x210 = INT16_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	int8_t x212 = 0;

	t52 = (x209<((x210&x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 2492U;
	uint32_t x214 = UINT32_MAX;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MAX;

	t53 = (x213<((x214&x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	static uint64_t x218 = 695210LLU;
	uint16_t x219 = 117U;
	volatile int32_t t54 = 1684;

	t54 = (x217<((x218&x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 16321731U;
	uint64_t x223 = 1092207369393LLU;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -6904;

	t55 = (x221<((x222&x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile int32_t x226 = INT32_MIN;
	uint64_t x227 = 97397607250664414LLU;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 90;

	t56 = (x225<((x226&x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = -1;
	int8_t x232 = -1;
	volatile int32_t t57 = -246;

	t57 = (x229<((x230&x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 26U;
	int8_t x234 = INT8_MIN;
	uint32_t x236 = UINT32_MAX;

	t58 = (x233<((x234&x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint16_t x238 = 0U;
	int64_t x239 = -614796238105LL;
	int16_t x240 = 1;

	t59 = (x237<((x238&x239)<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 2LLU;
	uint32_t x243 = 58141172U;
	int64_t x244 = 5984067009271LL;

	t60 = (x241<((x242&x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int64_t x246 = -1024422690017791075LL;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -1;
	volatile int32_t t61 = -16375;

	t61 = (x245<((x246&x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = 1289;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 0;

	t62 = (x249<((x250&x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	volatile uint64_t x254 = 5052082694940760315LLU;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;

	t63 = (x253<((x254&x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 709299U;
	volatile uint32_t x258 = UINT32_MAX;
	static int64_t x259 = -402565495059632756LL;
	int64_t x260 = INT64_MAX;
	int32_t t64 = -14;

	t64 = (x257<((x258&x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = 1U;
	static int32_t x264 = INT32_MIN;
	static volatile int32_t t65 = 114014;

	t65 = (x261<((x262&x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	volatile uint8_t x266 = 37U;
	uint8_t x267 = 12U;
	uint8_t x268 = 1U;
	static volatile int32_t t66 = 28305;

	t66 = (x265<((x266&x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -6686;

	t67 = (x269<((x270&x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = 2;
	int32_t t68 = 624225;

	t68 = (x273<((x274&x275)<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 11U;
	int8_t x278 = 1;
	int64_t x279 = -1LL;
	static uint8_t x280 = 21U;
	int32_t t69 = 23449;

	t69 = (x277<((x278&x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -6501;
	volatile int64_t x282 = INT64_MAX;
	static int32_t x283 = INT32_MIN;
	static volatile int32_t t70 = -706533212;

	t70 = (x281<((x282&x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 2U;
	uint8_t x287 = 0U;
	int64_t x288 = 255280LL;
	int32_t t71 = 1;

	t71 = (x285<((x286&x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 34U;
	int16_t x290 = 1;
	int32_t x291 = -8202;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 4060;

	t72 = (x289<((x290&x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 244613280U;
	volatile uint64_t x296 = 3966491731LLU;
	int32_t t73 = 12;

	t73 = (x293<((x294&x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 27406240U;
	int16_t x299 = -78;
	int64_t x300 = INT64_MIN;

	t74 = (x297<((x298&x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static int16_t x302 = -1;
	int64_t x303 = -1LL;
	static int16_t x304 = 422;
	volatile int32_t t75 = -12;

	t75 = (x301<((x302&x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -1852;
	int8_t x307 = -1;
	static uint8_t x308 = 15U;
	volatile int32_t t76 = 745781;

	t76 = (x305<((x306&x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static int8_t x311 = 1;
	int32_t t77 = 7618763;

	t77 = (x309<((x310&x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -122;
	uint64_t x314 = 1171LLU;
	uint64_t x315 = 1LLU;
	volatile int32_t t78 = 3;

	t78 = (x313<((x314&x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -575096382;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = 1;
	static int8_t x320 = INT8_MIN;
	int32_t t79 = 31779464;

	t79 = (x317<((x318&x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1;
	int64_t x322 = 1011823645LL;
	int64_t x324 = 113691359531125356LL;
	int32_t t80 = 784;

	t80 = (x321<((x322&x323)<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -89;
	volatile int64_t x328 = INT64_MIN;
	volatile int32_t t81 = -23790;

	t81 = (x325<((x326&x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	static int64_t x330 = INT64_MIN;
	int32_t t82 = 11;

	t82 = (x329<((x330&x331)<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x333 = 7511140;
	uint8_t x335 = 111U;
	int32_t t83 = 41996516;

	t83 = (x333<((x334&x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = 43208U;
	int32_t x339 = INT32_MIN;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t84 = 1;

	t84 = (x337<((x338&x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x341 = 7U;
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MIN;
	static uint8_t x344 = 26U;
	int32_t t85 = 0;

	t85 = (x341<((x342&x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	volatile uint8_t x347 = UINT8_MAX;
	static int32_t x348 = 48;
	int32_t t86 = 12;

	t86 = (x345<((x346&x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MAX;
	int32_t x350 = 581094458;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t87 = 316693;

	t87 = (x349<((x350&x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -39632493;
	uint32_t x354 = 137U;
	int16_t x355 = INT16_MAX;
	volatile int64_t x356 = INT64_MAX;

	t88 = (x353<((x354&x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = -26;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -101109;

	t89 = (x357<((x358&x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	static uint32_t x362 = UINT32_MAX;
	volatile uint32_t x363 = 40104U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 0;

	t90 = (x361<((x362&x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 98U;
	volatile uint16_t x366 = 74U;
	uint16_t x367 = UINT16_MAX;
	int8_t x368 = -1;
	volatile int32_t t91 = 28;

	t91 = (x365<((x366&x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 17U;
	int32_t x370 = -1;
	static int64_t x371 = -5LL;
	int32_t x372 = INT32_MAX;

	t92 = (x369<((x370&x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 1;
	int8_t x374 = INT8_MIN;
	volatile int8_t x375 = -1;
	volatile int64_t x376 = 4495365475347LL;
	volatile int32_t t93 = -1;

	t93 = (x373<((x374&x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x378 = INT8_MAX;
	int32_t x379 = INT32_MIN;
	static int64_t x380 = INT64_MIN;

	t94 = (x377<((x378&x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int64_t x382 = INT64_MIN;
	static uint8_t x383 = 0U;
	static int64_t x384 = INT64_MIN;
	int32_t t95 = -393;

	t95 = (x381<((x382&x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = UINT32_MAX;
	uint16_t x386 = 30U;
	int16_t x387 = 6113;
	int64_t x388 = -1LL;

	t96 = (x385<((x386&x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -1;
	int32_t x392 = -1;
	int32_t t97 = 1;

	t97 = (x389<((x390&x391)<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	int32_t x395 = 0;
	volatile int8_t x396 = INT8_MIN;
	int32_t t98 = 5663933;

	t98 = (x393<((x394&x395)<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 13;
	int64_t x398 = -1LL;
	volatile uint64_t x399 = 55116138LLU;
	uint8_t x400 = 85U;
	int32_t t99 = 198454194;

	t99 = (x397<((x398&x399)<=x400));

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

