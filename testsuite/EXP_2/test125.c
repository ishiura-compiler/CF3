#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
static uint32_t x3 = 25217431U;
uint16_t x8 = 77U;
uint16_t x9 = UINT16_MAX;
volatile int32_t x15 = INT32_MAX;
static int64_t x19 = INT64_MIN;
int32_t x21 = -48;
int32_t x22 = -1;
int32_t x24 = 1316;
volatile int32_t t5 = -525277;
volatile int16_t x35 = INT16_MIN;
int8_t x42 = INT8_MIN;
volatile int32_t t9 = -1858;
int8_t x45 = -1;
int16_t x46 = 1040;
int64_t x49 = INT64_MIN;
int8_t x50 = INT8_MIN;
uint64_t x53 = 151960719098LLU;
volatile int32_t t12 = 54;
int32_t x68 = 2698162;
uint8_t x74 = 5U;
volatile int32_t t15 = 147;
int16_t x86 = -1;
int8_t x89 = INT8_MIN;
static int16_t x94 = INT16_MIN;
volatile int16_t x111 = INT16_MAX;
volatile int64_t x114 = 18949905911LL;
static volatile uint64_t x119 = 339105651061286LLU;
int64_t x122 = -1LL;
volatile int32_t t26 = 328143;
int32_t t27 = 709;
uint16_t x131 = 7U;
int32_t t32 = 2092659;
int64_t x170 = -254089104674940LL;
int16_t x171 = INT16_MAX;
int64_t x177 = INT64_MIN;
int32_t t40 = -422;
uint64_t x186 = UINT64_MAX;
uint8_t x187 = 2U;
uint8_t x188 = 103U;
volatile int16_t x189 = -1;
int8_t x190 = INT8_MIN;
int32_t t42 = 904;
uint8_t x193 = 9U;
uint32_t x196 = UINT32_MAX;
int32_t t43 = 160;
static volatile int32_t t44 = -4876555;
int32_t x206 = INT32_MIN;
int32_t t46 = -651;
static int32_t x215 = INT32_MIN;
int8_t x219 = -1;
int32_t x220 = INT32_MAX;
volatile int32_t t48 = 181;
int32_t t49 = 0;
static uint64_t x227 = 15355715LLU;
int32_t t52 = 1;
int32_t t54 = -1;
static int16_t x251 = 981;
int8_t x257 = -2;
volatile uint64_t x259 = UINT64_MAX;
uint32_t x260 = 700969U;
uint16_t x261 = UINT16_MAX;
volatile int16_t x267 = INT16_MIN;
uint8_t x271 = 12U;
volatile int8_t x274 = INT8_MIN;
int32_t t64 = -17948;
uint8_t x303 = 22U;
int16_t x311 = INT16_MAX;
int32_t t70 = 158740;
volatile int64_t x322 = -1LL;
int8_t x335 = INT8_MIN;
int16_t x344 = -28;
volatile int32_t t77 = -123;
volatile int32_t t78 = 502079;
int64_t x354 = -1LL;
volatile int32_t x356 = INT32_MIN;
int32_t t80 = 1703;
volatile uint16_t x358 = UINT16_MAX;
volatile int32_t t82 = -2;
static int16_t x368 = 4617;
volatile int32_t t84 = -6;
static int16_t x374 = -1;
int64_t x375 = -1LL;
int32_t x378 = INT32_MAX;
volatile int32_t t87 = 44964;
int16_t x405 = INT16_MIN;
int64_t x407 = -475790870685708LL;
int64_t x417 = INT64_MAX;
uint32_t x423 = 254U;
int16_t x426 = INT16_MIN;
volatile int32_t t96 = 602;
static int32_t x434 = INT32_MAX;
static int16_t x435 = INT16_MIN;
volatile int8_t x443 = 0;


void f0(void) {
	volatile int16_t x2 = 8;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -39028;

	t0 = ((x1<=(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int32_t x6 = -1;
	volatile uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = -15;

	t1 = ((x5<=(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MIN;
	uint8_t x11 = 11U;
	int16_t x12 = 0;
	int32_t t2 = 105154533;

	t2 = ((x9<=(x10+x11))==x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6U;
	volatile int32_t x14 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -611933;

	t3 = ((x13<=(x14+x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = 65421715U;
	static uint64_t x20 = 13LLU;
	int32_t t4 = 645023;

	t4 = ((x17<=(x18+x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = 88921436094701590LLU;

	t5 = ((x21<=(x22+x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	int16_t x27 = -1;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = -52048;

	t6 = ((x25<=(x26+x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = UINT16_MAX;
	uint64_t x34 = UINT64_MAX;
	static uint64_t x36 = 1347LLU;
	static volatile int32_t t7 = -1;

	t7 = ((x33<=(x34+x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = -1;
	volatile int32_t x39 = -1;
	static uint16_t x40 = 1781U;
	volatile int32_t t8 = 633319326;

	t8 = ((x37<=(x38+x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = 13U;
	int32_t x43 = 6;
	int32_t x44 = -187;

	t9 = ((x41<=(x42+x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	static int32_t t10 = 402;

	t10 = ((x45<=(x46+x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x51 = -1;
	static uint64_t x52 = 800337386510LLU;
	volatile int32_t t11 = 3180936;

	t11 = ((x49<=(x50+x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x54 = 27778U;
	volatile int64_t x55 = -6LL;
	uint64_t x56 = 1LLU;

	t12 = ((x53<=(x54+x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	uint32_t x67 = UINT32_MAX;
	static int32_t t13 = 23;

	t13 = ((x65<=(x66+x67))==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = 70969182020311371LLU;
	static int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MIN;
	static volatile int32_t t14 = -4;

	t14 = ((x69<=(x70+x71))==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x75 = 117U;
	int32_t x76 = -29529844;

	t15 = ((x73<=(x74+x75))==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MAX;
	volatile int32_t x83 = -436;
	volatile uint32_t x84 = 1U;
	int32_t t16 = 3;

	t16 = ((x81<=(x82+x83))==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = 0;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	int32_t t17 = -518387;

	t17 = ((x85<=(x86+x87))==x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x90 = INT32_MIN;
	int16_t x91 = 9138;
	uint8_t x92 = 106U;
	int32_t t18 = 3850;

	t18 = ((x89<=(x90+x91))==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t19 = -15492160;

	t19 = ((x93<=(x94+x95))==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	volatile int64_t x98 = 17912339558723LL;
	uint64_t x99 = UINT64_MAX;
	static int64_t x100 = INT64_MIN;
	int32_t t20 = -432;

	t20 = ((x97<=(x98+x99))==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x101 = INT8_MIN;
	volatile int64_t x102 = INT64_MIN;
	int64_t x103 = 84280997776587LL;
	uint8_t x104 = 0U;
	int32_t t21 = -274461;

	t21 = ((x101<=(x102+x103))==x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	int64_t x106 = -252614773762376LL;
	volatile int32_t x107 = INT32_MIN;
	volatile int16_t x108 = INT16_MAX;
	volatile int32_t t22 = 928;

	t22 = ((x105<=(x106+x107))==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MAX;
	int64_t x110 = 0LL;
	volatile int32_t x112 = -1;
	int32_t t23 = 0;

	t23 = ((x109<=(x110+x111))==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = 1;
	static int16_t x115 = INT16_MIN;
	uint8_t x116 = 0U;
	int32_t t24 = 11150;

	t24 = ((x113<=(x114+x115))==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = INT32_MAX;
	uint32_t x118 = UINT32_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t25 = 104;

	t25 = ((x117<=(x118+x119))==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = UINT32_MAX;
	uint16_t x123 = 220U;
	static int16_t x124 = INT16_MAX;

	t26 = ((x121<=(x122+x123))==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MAX;
	volatile int32_t x126 = INT32_MAX;
	int8_t x127 = -1;
	volatile int16_t x128 = INT16_MIN;

	t27 = ((x125<=(x126+x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = UINT8_MAX;
	volatile uint64_t x132 = 7LLU;
	int32_t t28 = -10;

	t28 = ((x129<=(x130+x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = 7;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = 8559U;
	volatile int32_t t29 = -13;

	t29 = ((x133<=(x134+x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x137 = 88752LLU;
	uint16_t x138 = 3U;
	static int64_t x139 = 259282388LL;
	uint64_t x140 = 107691303578LLU;
	volatile int32_t t30 = -4463761;

	t30 = ((x137<=(x138+x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MIN;
	static int16_t x142 = -1;
	uint32_t x143 = 6516U;
	int64_t x144 = -1000148459160024488LL;
	volatile int32_t t31 = -402;

	t31 = ((x141<=(x142+x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = 1U;
	int16_t x148 = INT16_MAX;

	t32 = ((x145<=(x146+x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = 37;
	int64_t x151 = -1LL;
	uint32_t x152 = 86103141U;
	static int32_t t33 = 16832060;

	t33 = ((x149<=(x150+x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	volatile int32_t x154 = -5404;
	int32_t x155 = INT32_MAX;
	static int8_t x156 = -1;
	int32_t t34 = 1;

	t34 = ((x153<=(x154+x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = 0;
	static uint16_t x159 = UINT16_MAX;
	volatile int64_t x160 = 1373183488LL;
	volatile int32_t t35 = 12446757;

	t35 = ((x157<=(x158+x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MIN;
	static uint16_t x162 = 2U;
	uint64_t x163 = 29825069520LLU;
	int8_t x164 = INT8_MAX;
	volatile int32_t t36 = 92231;

	t36 = ((x161<=(x162+x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -1LL;
	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 29U;
	volatile uint32_t x168 = 0U;
	static int32_t t37 = -247828607;

	t37 = ((x165<=(x166+x167))==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x169 = -1480;
	int16_t x172 = -173;
	volatile int32_t t38 = 303;

	t38 = ((x169<=(x170+x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x178 = UINT32_MAX;
	volatile uint32_t x179 = 11033U;
	static int16_t x180 = -1;
	volatile int32_t t39 = 2896003;

	t39 = ((x177<=(x178+x179))==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = -980;
	int64_t x184 = INT64_MIN;

	t40 = ((x181<=(x182+x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 9466LLU;
	int32_t t41 = -9727019;

	t41 = ((x185<=(x186+x187))==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x191 = INT8_MIN;
	uint64_t x192 = 11121LLU;

	t42 = ((x189<=(x190+x191))==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = -2678;
	static uint32_t x195 = UINT32_MAX;

	t43 = ((x193<=(x194+x195))==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x197 = 1;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 123852532963403720LLU;
	uint32_t x200 = 535U;

	t44 = ((x197<=(x198+x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x205 = 3817267U;
	volatile int16_t x207 = 8861;
	volatile uint8_t x208 = 15U;
	static int32_t t45 = 455015723;

	t45 = ((x205<=(x206+x207))==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = 322U;
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;

	t46 = ((x209<=(x210+x211))==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = 3U;
	static int64_t x214 = -6210347916606LL;
	int8_t x216 = INT8_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x213<=(x214+x215))==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x217 = -1LL;
	uint32_t x218 = 146647784U;

	t48 = ((x217<=(x218+x219))==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = 3;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = 2;

	t49 = ((x221<=(x222+x223))==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = -1;
	static uint8_t x226 = 53U;
	volatile uint64_t x228 = UINT64_MAX;
	volatile int32_t t50 = -1;

	t50 = ((x225<=(x226+x227))==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x229 = -1;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = 21U;
	static int64_t x232 = INT64_MIN;
	int32_t t51 = -1;

	t51 = ((x229<=(x230+x231))==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 56652LLU;
	static int8_t x234 = -1;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = 30LLU;

	t52 = ((x233<=(x234+x235))==x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = -723;
	uint8_t x238 = 4U;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = -6;
	int32_t t53 = 1818582;

	t53 = ((x237<=(x238+x239))==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x241 = 267080653LLU;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = 62LLU;
	static volatile int64_t x244 = INT64_MAX;

	t54 = ((x241<=(x242+x243))==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MAX;
	volatile int16_t x246 = INT16_MAX;
	int32_t x247 = 211;
	int16_t x248 = INT16_MIN;
	int32_t t55 = -11686877;

	t55 = ((x245<=(x246+x247))==x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	int32_t t56 = -637010248;

	t56 = ((x249<=(x250+x251))==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = -3;
	int16_t x254 = -3180;
	volatile int16_t x255 = -1;
	static volatile int64_t x256 = INT64_MIN;
	int32_t t57 = -1701;

	t57 = ((x253<=(x254+x255))==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x258 = -1;
	int32_t t58 = 45634882;

	t58 = ((x257<=(x258+x259))==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 5LLU;
	int8_t x264 = INT8_MIN;
	static int32_t t59 = -167200394;

	t59 = ((x261<=(x262+x263))==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = 35;
	int16_t x266 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t60 = 332993;

	t60 = ((x265<=(x266+x267))==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static volatile int32_t x270 = -31;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t61 = 118245189;

	t61 = ((x269<=(x270+x271))==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = -1;
	uint32_t x275 = 1112U;
	uint16_t x276 = 17496U;
	int32_t t62 = 174160189;

	t62 = ((x273<=(x274+x275))==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = -50;
	uint8_t x278 = 11U;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = UINT32_MAX;
	int32_t t63 = 775003382;

	t63 = ((x277<=(x278+x279))==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x281 = UINT32_MAX;
	uint32_t x282 = 5147U;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = 958054867;

	t64 = ((x281<=(x282+x283))==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x285 = 97374292328612877LLU;
	int32_t x286 = INT32_MIN;
	volatile uint64_t x287 = 87869054410935LLU;
	static int64_t x288 = 110037375694466460LL;
	volatile int32_t t65 = 214808089;

	t65 = ((x285<=(x286+x287))==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = INT16_MAX;
	static int64_t x294 = INT64_MIN;
	int8_t x295 = 4;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t66 = -99730567;

	t66 = ((x293<=(x294+x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = 40;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = 66131086;
	volatile int32_t t67 = 344662;

	t67 = ((x297<=(x298+x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MIN;
	static volatile int8_t x302 = -6;
	int64_t x304 = -1LL;
	volatile int32_t t68 = -145;

	t68 = ((x301<=(x302+x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = -1;
	int64_t x306 = 7448724185580LL;
	uint32_t x307 = 606445142U;
	static int8_t x308 = 25;
	int32_t t69 = -1942;

	t69 = ((x305<=(x306+x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	volatile int64_t x312 = INT64_MAX;

	t70 = ((x309<=(x310+x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = 1;
	int64_t x314 = -580988938625691518LL;
	uint16_t x315 = UINT16_MAX;
	static int16_t x316 = -1;
	int32_t t71 = -1;

	t71 = ((x313<=(x314+x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	volatile int32_t x320 = INT32_MAX;
	int32_t t72 = 898;

	t72 = ((x317<=(x318+x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = 0;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t73 = -148354;

	t73 = ((x321<=(x322+x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x325 = 6327376U;
	static int64_t x326 = 1694751LL;
	static uint64_t x327 = 10317000860LLU;
	uint8_t x328 = 1U;
	int32_t t74 = -409;

	t74 = ((x325<=(x326+x327))==x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x329 = 3U;
	uint16_t x330 = 6146U;
	static uint64_t x331 = UINT64_MAX;
	int8_t x332 = -10;
	volatile int32_t t75 = -14;

	t75 = ((x329<=(x330+x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = INT32_MIN;
	uint64_t x334 = 198434956599286LLU;
	int32_t x336 = INT32_MIN;
	int32_t t76 = 181237287;

	t76 = ((x333<=(x334+x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x341 = -1LL;
	volatile int8_t x342 = -1;
	volatile uint8_t x343 = 42U;

	t77 = ((x341<=(x342+x343))==x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = 980;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;

	t78 = ((x345<=(x346+x347))==x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x349 = -6;
	uint32_t x350 = UINT32_MAX;
	volatile uint64_t x351 = UINT64_MAX;
	uint16_t x352 = 2U;
	int32_t t79 = -14459;

	t79 = ((x349<=(x350+x351))==x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -1;
	int8_t x355 = INT8_MIN;

	t80 = ((x353<=(x354+x355))==x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x357 = -28431127LL;
	int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = 404U;
	int32_t t81 = 1;

	t81 = ((x357<=(x358+x359))==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x361 = UINT16_MAX;
	static int64_t x362 = INT64_MIN;
	int16_t x363 = 14;
	int8_t x364 = INT8_MIN;

	t82 = ((x361<=(x362+x363))==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MAX;
	static volatile int64_t x366 = INT64_MIN;
	static int8_t x367 = INT8_MAX;
	int32_t t83 = 87525;

	t83 = ((x365<=(x366+x367))==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MIN;
	volatile int8_t x371 = -43;
	static uint64_t x372 = 2036282150LLU;

	t84 = ((x369<=(x370+x371))==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	int8_t x376 = 15;
	static volatile int32_t t85 = -13608336;

	t85 = ((x373<=(x374+x375))==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x377 = 0;
	volatile uint32_t x379 = 471U;
	int16_t x380 = INT16_MIN;
	int32_t t86 = -99;

	t86 = ((x377<=(x378+x379))==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 396082LLU;
	uint8_t x382 = UINT8_MAX;
	static volatile int32_t x383 = INT32_MIN;
	static int16_t x384 = INT16_MIN;

	t87 = ((x381<=(x382+x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = -1;
	volatile uint8_t x386 = 0U;
	static int16_t x387 = 60;
	volatile int32_t x388 = 22326;
	int32_t t88 = 189;

	t88 = ((x385<=(x386+x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = 0;
	int64_t x394 = 1LL;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = 8012LL;
	int32_t t89 = 323257815;

	t89 = ((x393<=(x394+x395))==x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = 430U;
	volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = 0;
	int32_t t90 = 233587;

	t90 = ((x397<=(x398+x399))==x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -1;
	uint64_t x402 = 105440778213LLU;
	int64_t x403 = INT64_MIN;
	int64_t x404 = INT64_MAX;
	static int32_t t91 = 8007739;

	t91 = ((x401<=(x402+x403))==x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x406 = UINT16_MAX;
	int8_t x408 = -1;
	static volatile int32_t t92 = 62;

	t92 = ((x405<=(x406+x407))==x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x409 = 513LL;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 250920762147548386LLU;
	volatile int32_t x412 = 3;
	volatile int32_t t93 = -1;

	t93 = ((x409<=(x410+x411))==x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x418 = -1;
	static int8_t x419 = INT8_MAX;
	volatile uint16_t x420 = 13U;
	int32_t t94 = 31058;

	t94 = ((x417<=(x418+x419))==x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = INT32_MAX;
	int64_t x422 = INT64_MIN;
	int8_t x424 = -1;
	int32_t t95 = 308;

	t95 = ((x421<=(x422+x423))==x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x425 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = UINT32_MAX;

	t96 = ((x425<=(x426+x427))==x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x433 = 1135U;
	int32_t x436 = 195161491;
	int32_t t97 = 0;

	t97 = ((x433<=(x434+x435))==x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x437 = 1LLU;
	uint16_t x438 = 189U;
	int32_t x439 = INT32_MIN;
	uint32_t x440 = 3227329U;
	volatile int32_t t98 = -737;

	t98 = ((x437<=(x438+x439))==x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x441 = 1658549LL;
	static int16_t x442 = -1;
	uint64_t x444 = 12460533LLU;
	volatile int32_t t99 = 1074524;

	t99 = ((x441<=(x442+x443))==x444);

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
