#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
static uint32_t x7 = UINT32_MAX;
int8_t x11 = -1;
volatile int64_t x16 = 335716LL;
static volatile int32_t t3 = 133440;
uint64_t x23 = 6750LLU;
static int32_t t5 = 274;
int64_t x25 = -862744LL;
uint16_t x27 = 0U;
int64_t x29 = -7833789287LL;
volatile int32_t x33 = 1;
int64_t x41 = INT64_MAX;
int16_t x46 = INT16_MIN;
uint8_t x58 = 5U;
volatile int32_t t13 = 108;
int64_t x67 = INT64_MAX;
int16_t x69 = INT16_MAX;
static int8_t x77 = 10;
uint32_t x78 = UINT32_MAX;
int64_t x82 = -105LL;
static volatile int32_t t17 = -1776140;
int32_t t19 = 25219;
uint8_t x96 = UINT8_MAX;
int32_t x98 = INT32_MAX;
int64_t x103 = -1LL;
int8_t x104 = 1;
int64_t x105 = -872737006571123LL;
uint32_t x106 = UINT32_MAX;
int32_t x108 = INT32_MAX;
static int32_t x112 = INT32_MAX;
int64_t x116 = INT64_MIN;
uint8_t x124 = UINT8_MAX;
uint64_t x135 = UINT64_MAX;
int16_t x136 = INT16_MAX;
int16_t x138 = 1;
int64_t x139 = -595576985135600LL;
volatile int16_t x145 = -117;
static int32_t t31 = 176314428;
volatile int16_t x151 = 6894;
int32_t x152 = -330454089;
static volatile int32_t t34 = 0;
int32_t x167 = -11;
static int64_t x172 = 1515LL;
int8_t x174 = INT8_MIN;
uint32_t x176 = 227845837U;
uint16_t x178 = UINT16_MAX;
int16_t x179 = -148;
static int32_t t40 = 1438013;
static volatile int64_t x188 = INT64_MIN;
volatile uint32_t x195 = 1U;
static volatile int32_t t43 = 0;
int16_t x201 = 492;
uint64_t x202 = UINT64_MAX;
static uint8_t x206 = UINT8_MAX;
static uint8_t x211 = 20U;
uint32_t x214 = 1U;
volatile int32_t t47 = -479;
int16_t x217 = INT16_MIN;
int8_t x218 = INT8_MAX;
int64_t x221 = INT64_MAX;
int16_t x223 = 22;
int8_t x224 = 11;
int64_t x225 = -1LL;
volatile int32_t t50 = 2474;
static uint32_t x229 = 20361750U;
static int8_t x235 = INT8_MIN;
int16_t x247 = -1;
static int8_t x252 = 4;
int16_t x253 = INT16_MAX;
int32_t x256 = INT32_MIN;
int32_t x259 = -183502;
int8_t x262 = INT8_MIN;
volatile int16_t x264 = 120;
volatile int32_t t61 = 7;
volatile uint16_t x281 = 1U;
volatile int32_t t63 = -2773334;
volatile int64_t x285 = INT64_MIN;
int8_t x293 = INT8_MIN;
uint8_t x299 = 3U;
int32_t t69 = 0;
volatile uint8_t x309 = 95U;
static volatile int16_t x313 = INT16_MAX;
int16_t x318 = INT16_MAX;
int8_t x326 = INT8_MIN;
uint16_t x328 = 112U;
uint8_t x329 = 3U;
volatile int16_t x333 = 3366;
int8_t x335 = INT8_MIN;
uint64_t x338 = UINT64_MAX;
static uint8_t x340 = 1U;
volatile int32_t t76 = 170841969;
int16_t x341 = -1;
int8_t x347 = -1;
int32_t t78 = -611;
static int32_t x358 = INT32_MIN;
static int32_t x359 = INT32_MIN;
int32_t t81 = -178640;
volatile int32_t t83 = -115255;
int16_t x376 = 0;
int16_t x383 = -1;
uint64_t x384 = 3089701836448409920LLU;
volatile uint64_t x386 = 9979036920LLU;
volatile int32_t t87 = 0;
volatile int32_t t88 = -26875681;
volatile int32_t t89 = -4012434;
int64_t x406 = INT64_MAX;
int16_t x410 = 15861;
int64_t x413 = -1LL;
int16_t x414 = -1;
uint32_t x416 = UINT32_MAX;
static int32_t x419 = INT32_MIN;
int32_t t93 = 1;
int32_t x426 = INT32_MIN;
int16_t x438 = -1714;
static uint16_t x444 = 8U;


void f0(void) {
	int32_t x1 = -1;
	int32_t x3 = INT32_MIN;
	volatile int64_t x4 = 1337447243LL;
	volatile int32_t t0 = -9914094;

	t0 = (((x1/x2)+x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 167;
	static int8_t x6 = -7;
	int16_t x8 = 8;
	volatile int32_t t1 = -108993801;

	t1 = (((x5/x6)+x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 205393;

	t2 = (((x9/x10)+x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -13;
	int32_t x14 = -1;
	static int32_t x15 = 0;

	t3 = (((x13/x14)+x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = 990716;
	static int64_t x19 = INT64_MIN;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = -4;

	t4 = (((x17/x18)+x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static volatile int64_t x22 = 8175790969450565LL;
	uint16_t x24 = 2531U;

	t5 = (((x21/x22)+x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int16_t x28 = -1;
	static int32_t t6 = -1;

	t6 = (((x25/x26)+x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MAX;
	int8_t x32 = -17;
	volatile int32_t t7 = -9494;

	t7 = (((x29/x30)+x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 70U;
	int16_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = 1779365;

	t8 = (((x33/x34)+x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = 218626LLU;
	volatile int32_t x43 = -23436;
	volatile int64_t x44 = 52735137305LL;
	volatile int32_t t9 = -3;

	t9 = (((x41/x42)+x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	static uint32_t x47 = 48923527U;
	volatile int8_t x48 = -7;
	int32_t t10 = 3824209;

	t10 = (((x45/x46)+x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	static volatile uint32_t x54 = UINT32_MAX;
	int8_t x55 = -29;
	int8_t x56 = INT8_MIN;
	int32_t t11 = 1;

	t11 = (((x53/x54)+x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = 93225504019LL;
	static int64_t x59 = 1LL;
	volatile int64_t x60 = INT64_MIN;
	int32_t t12 = -31340487;

	t12 = (((x57/x58)+x59)<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = 4;
	int32_t x63 = -1;
	int8_t x64 = -1;

	t13 = (((x61/x62)+x63)<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = -1;
	volatile uint8_t x68 = UINT8_MAX;
	static int32_t t14 = 23632376;

	t14 = (((x65/x66)+x67)<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -1LL;
	volatile int16_t x71 = -1;
	int16_t x72 = 45;
	int32_t t15 = -1474;

	t15 = (((x69/x70)+x71)<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x79 = 11546175319656LLU;
	uint32_t x80 = 1207953735U;
	static volatile int32_t t16 = -51650;

	t16 = (((x77/x78)+x79)<=x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 273518557U;
	int64_t x83 = INT64_MAX;
	static int32_t x84 = INT32_MAX;

	t17 = (((x81/x82)+x83)<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x85 = -195669513321395LL;
	static int64_t x86 = -1LL;
	int32_t x87 = INT32_MIN;
	int8_t x88 = 0;
	int32_t t18 = 62004;

	t18 = (((x85/x86)+x87)<=x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;

	t19 = (((x89/x90)+x91)<=x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x93 = INT64_MIN;
	volatile int32_t x94 = INT32_MAX;
	int64_t x95 = -1LL;
	int32_t t20 = -895673;

	t20 = (((x93/x94)+x95)<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	int16_t x99 = INT16_MIN;
	int64_t x100 = 903010LL;
	static int32_t t21 = 2616;

	t21 = (((x97/x98)+x99)<=x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MAX;
	volatile int32_t t22 = -71;

	t22 = (((x101/x102)+x103)<=x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x107 = -1;
	static volatile int32_t t23 = -1969;

	t23 = (((x105/x106)+x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 1748U;
	volatile uint16_t x110 = UINT16_MAX;
	volatile int64_t x111 = INT64_MIN;
	volatile int32_t t24 = -1;

	t24 = (((x109/x110)+x111)<=x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 31U;
	static int16_t x114 = INT16_MAX;
	int8_t x115 = -1;
	int32_t t25 = -486719042;

	t25 = (((x113/x114)+x115)<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -13310;
	volatile int64_t x122 = 9275520402939772LL;
	uint8_t x123 = 25U;
	volatile int32_t t26 = 418280456;

	t26 = (((x121/x122)+x123)<=x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = 468188LL;
	int32_t t27 = -151705;

	t27 = (((x125/x126)+x127)<=x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MIN;
	uint64_t x134 = 13450467566LLU;
	static volatile int32_t t28 = 12706;

	t28 = (((x133/x134)+x135)<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = INT64_MAX;
	int32_t x140 = INT32_MIN;
	volatile int32_t t29 = -45700688;

	t29 = (((x137/x138)+x139)<=x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x141 = -14;
	static volatile int64_t x142 = -1LL;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MAX;
	volatile int32_t t30 = -192611;

	t30 = (((x141/x142)+x143)<=x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x146 = 13488U;
	int8_t x147 = -1;
	static int16_t x148 = INT16_MAX;

	t31 = (((x145/x146)+x147)<=x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x149 = -1;
	int32_t x150 = -1;
	volatile int32_t t32 = -498276;

	t32 = (((x149/x150)+x151)<=x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MAX;
	uint64_t x154 = UINT64_MAX;
	static int32_t x155 = INT32_MIN;
	uint32_t x156 = UINT32_MAX;
	int32_t t33 = 112399758;

	t33 = (((x153/x154)+x155)<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = UINT8_MAX;
	static int16_t x160 = 0;

	t34 = (((x157/x158)+x159)<=x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = 212262956;
	int64_t x162 = -51239LL;
	uint32_t x163 = 4231U;
	int16_t x164 = -1;
	volatile int32_t t35 = -104416;

	t35 = (((x161/x162)+x163)<=x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MIN;
	uint32_t x168 = 356528711U;
	int32_t t36 = -646843;

	t36 = (((x165/x166)+x167)<=x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 18U;
	volatile int64_t x170 = INT64_MAX;
	volatile int16_t x171 = INT16_MIN;
	int32_t t37 = 6890318;

	t37 = (((x169/x170)+x171)<=x172);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MIN;
	volatile int8_t x175 = -2;
	volatile int32_t t38 = 533847;

	t38 = (((x173/x174)+x175)<=x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 1U;
	uint64_t x180 = 210219156070637LLU;
	int32_t t39 = 42779014;

	t39 = (((x177/x178)+x179)<=x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 237748283LLU;
	volatile int64_t x182 = INT64_MAX;
	volatile int8_t x183 = INT8_MAX;
	int64_t x184 = -490054LL;

	t40 = (((x181/x182)+x183)<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x185 = INT32_MIN;
	int64_t x186 = -35LL;
	volatile int32_t x187 = INT32_MIN;
	static volatile int32_t t41 = -7779221;

	t41 = (((x185/x186)+x187)<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	static int32_t x192 = 9;
	static int32_t t42 = -487407;

	t42 = (((x189/x190)+x191)<=x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = -1;
	static volatile int64_t x194 = INT64_MAX;
	uint16_t x196 = 166U;

	t43 = (((x193/x194)+x195)<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x203 = 17U;
	volatile uint32_t x204 = 127946437U;
	volatile int32_t t44 = 7899902;

	t44 = (((x201/x202)+x203)<=x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x205 = INT32_MAX;
	int32_t x207 = -1512726;
	int8_t x208 = INT8_MIN;
	volatile int32_t t45 = 14;

	t45 = (((x205/x206)+x207)<=x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 311423356579667160LLU;
	int8_t x210 = INT8_MAX;
	volatile uint16_t x212 = 25U;
	volatile int32_t t46 = 604;

	t46 = (((x209/x210)+x211)<=x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x213 = INT8_MIN;
	static uint64_t x215 = 54082LLU;
	uint64_t x216 = 8LLU;

	t47 = (((x213/x214)+x215)<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x219 = 47685214U;
	volatile int16_t x220 = 39;
	volatile int32_t t48 = 32633;

	t48 = (((x217/x218)+x219)<=x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = INT32_MIN;
	volatile int32_t t49 = -548;

	t49 = (((x221/x222)+x223)<=x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x226 = 1;
	int8_t x227 = -1;
	static int64_t x228 = INT64_MIN;

	t50 = (((x225/x226)+x227)<=x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x230 = INT16_MAX;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t51 = -497132261;

	t51 = (((x229/x230)+x231)<=x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 871987LLU;
	volatile int64_t x236 = -15495597LL;
	volatile int32_t t52 = 7192435;

	t52 = (((x233/x234)+x235)<=x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = 350774;
	uint32_t x238 = 2624947U;
	uint32_t x239 = 282U;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t53 = -26115;

	t53 = (((x237/x238)+x239)<=x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 14U;
	static int16_t x242 = 363;
	volatile int64_t x243 = -1LL;
	int8_t x244 = INT8_MIN;
	int32_t t54 = -20889733;

	t54 = (((x241/x242)+x243)<=x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t55 = -425668972;

	t55 = (((x245/x246)+x247)<=x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -8;
	int8_t x250 = 14;
	uint32_t x251 = UINT32_MAX;
	int32_t t56 = -415473877;

	t56 = (((x249/x250)+x251)<=x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = INT32_MIN;
	static uint16_t x255 = 73U;
	volatile int32_t t57 = -2;

	t57 = (((x253/x254)+x255)<=x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 4U;
	int16_t x258 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	int32_t t58 = -60041;

	t58 = (((x257/x258)+x259)<=x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x261 = 7U;
	static volatile int8_t x263 = INT8_MIN;
	volatile int32_t t59 = 44047993;

	t59 = (((x261/x262)+x263)<=x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 0U;
	int32_t x272 = INT32_MIN;
	volatile int32_t t60 = 329921239;

	t60 = (((x269/x270)+x271)<=x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	volatile uint8_t x274 = UINT8_MAX;
	volatile int16_t x275 = INT16_MIN;
	int64_t x276 = -1323261LL;

	t61 = (((x273/x274)+x275)<=x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x277 = INT32_MIN;
	static int64_t x278 = -1LL;
	uint16_t x279 = 156U;
	uint32_t x280 = 304006981U;
	int32_t t62 = 20;

	t62 = (((x277/x278)+x279)<=x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x282 = 70U;
	uint8_t x283 = 0U;
	int32_t x284 = INT32_MIN;

	t63 = (((x281/x282)+x283)<=x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x286 = UINT64_MAX;
	volatile int8_t x287 = 1;
	int64_t x288 = -86533215351384903LL;
	static int32_t t64 = 0;

	t64 = (((x285/x286)+x287)<=x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x289 = -1;
	static volatile uint8_t x290 = 1U;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = -1;
	static int32_t t65 = -214;

	t65 = (((x289/x290)+x291)<=x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MAX;
	static uint64_t x296 = 27LLU;
	volatile int32_t t66 = -2021612;

	t66 = (((x293/x294)+x295)<=x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MIN;
	static int32_t x298 = INT32_MIN;
	volatile uint16_t x300 = 8507U;
	volatile int32_t t67 = -4388949;

	t67 = (((x297/x298)+x299)<=x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x301 = 29714900024169970LL;
	static int32_t x302 = INT32_MIN;
	uint64_t x303 = 126101130415413207LLU;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t68 = -867310668;

	t68 = (((x301/x302)+x303)<=x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = 2;
	uint16_t x307 = 409U;
	int8_t x308 = INT8_MIN;

	t69 = (((x305/x306)+x307)<=x308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = 10LLU;
	int32_t t70 = -1575415;

	t70 = (((x309/x310)+x311)<=x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x314 = 72185785752LLU;
	uint32_t x315 = 754292475U;
	static int64_t x316 = 1980825505LL;
	static int32_t t71 = 1055;

	t71 = (((x313/x314)+x315)<=x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x317 = 1U;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 2U;
	int32_t t72 = -291738575;

	t72 = (((x317/x318)+x319)<=x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x325 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int32_t t73 = 4084467;

	t73 = (((x325/x326)+x327)<=x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x330 = -1;
	uint64_t x331 = 3027545LLU;
	uint64_t x332 = UINT64_MAX;
	int32_t t74 = -43550966;

	t74 = (((x329/x330)+x331)<=x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x334 = -1;
	int16_t x336 = INT16_MIN;
	int32_t t75 = 1019380538;

	t75 = (((x333/x334)+x335)<=x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = INT8_MIN;
	int64_t x339 = -797335307140LL;

	t76 = (((x337/x338)+x339)<=x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x342 = INT32_MAX;
	int32_t x343 = -194993700;
	static int64_t x344 = INT64_MAX;
	int32_t t77 = 488725;

	t77 = (((x341/x342)+x343)<=x344);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x345 = 3U;
	uint16_t x346 = 1672U;
	volatile uint8_t x348 = 0U;

	t78 = (((x345/x346)+x347)<=x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = 20U;
	volatile int32_t x350 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MAX;
	int32_t t79 = 778687;

	t79 = (((x349/x350)+x351)<=x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = 8;
	int16_t x354 = -58;
	volatile int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;
	static int32_t t80 = -792235;

	t80 = (((x353/x354)+x355)<=x356);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x357 = 103112220432262LLU;
	int16_t x360 = -1;

	t81 = (((x357/x358)+x359)<=x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x361 = 95;
	int8_t x362 = -1;
	static int8_t x363 = INT8_MIN;
	uint64_t x364 = 4116LLU;
	volatile int32_t t82 = 401808;

	t82 = (((x361/x362)+x363)<=x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = 525141915U;
	int32_t x367 = INT32_MIN;
	static int8_t x368 = 13;

	t83 = (((x365/x366)+x367)<=x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = 2470065142918799LL;
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	volatile uint32_t x372 = 8788U;
	int32_t t84 = 29923;

	t84 = (((x369/x370)+x371)<=x372);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = 1U;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	int32_t t85 = -8312;

	t85 = (((x373/x374)+x375)<=x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	volatile int32_t t86 = -14584;

	t86 = (((x381/x382)+x383)<=x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	int16_t x388 = 0;

	t87 = (((x385/x386)+x387)<=x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = -1;
	static uint32_t x390 = 51608810U;
	static uint32_t x391 = 242U;
	int16_t x392 = INT16_MAX;

	t88 = (((x389/x390)+x391)<=x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = 40;
	int8_t x398 = INT8_MAX;
	int16_t x399 = 225;
	int8_t x400 = INT8_MIN;

	t89 = (((x397/x398)+x399)<=x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = INT8_MAX;
	static volatile int64_t x407 = -1LL;
	volatile int16_t x408 = 3;
	int32_t t90 = 380;

	t90 = (((x405/x406)+x407)<=x408);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x409 = -1;
	int64_t x411 = 5LL;
	int16_t x412 = INT16_MIN;
	int32_t t91 = 18577716;

	t91 = (((x409/x410)+x411)<=x412);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x415 = INT8_MIN;
	volatile int32_t t92 = 1;

	t92 = (((x413/x414)+x415)<=x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x417 = -2138LL;
	volatile int64_t x418 = -1LL;
	volatile uint16_t x420 = 71U;

	t93 = (((x417/x418)+x419)<=x420);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x421 = INT8_MIN;
	static uint16_t x422 = UINT16_MAX;
	uint32_t x423 = 297528501U;
	int64_t x424 = -1LL;
	static int32_t t94 = 30080;

	t94 = (((x421/x422)+x423)<=x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x425 = 79319LLU;
	int64_t x427 = INT64_MIN;
	volatile uint32_t x428 = 445400149U;
	static int32_t t95 = -82684;

	t95 = (((x425/x426)+x427)<=x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x429 = 26U;
	uint32_t x430 = 11705701U;
	uint64_t x431 = 1925291051784LLU;
	uint64_t x432 = 68LLU;
	volatile int32_t t96 = -52805079;

	t96 = (((x429/x430)+x431)<=x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = -5;
	static int16_t x434 = 5;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = -1;
	int32_t t97 = -3;

	t97 = (((x433/x434)+x435)<=x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x437 = INT8_MIN;
	volatile uint16_t x439 = 7457U;
	int64_t x440 = -1LL;
	volatile int32_t t98 = -1326814;

	t98 = (((x437/x438)+x439)<=x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x441 = INT64_MAX;
	static uint8_t x442 = 10U;
	uint32_t x443 = UINT32_MAX;
	int32_t t99 = 38536650;

	t99 = (((x441/x442)+x443)<=x444);

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
