#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
static int32_t t0 = -300960997;
volatile uint64_t x6 = 1147634665284545335LLU;
uint16_t x9 = 1U;
uint32_t x10 = UINT32_MAX;
uint64_t x14 = 2508583640768008599LLU;
uint8_t x18 = 2U;
int8_t x20 = -4;
volatile int32_t t4 = -7255050;
int8_t x21 = -1;
static int64_t x39 = -15LL;
static int32_t x40 = 5;
volatile int32_t x44 = -1;
volatile int32_t t7 = -733;
volatile int16_t x50 = -1;
static int32_t x55 = INT32_MIN;
int32_t t10 = 16315544;
volatile int32_t x62 = INT32_MAX;
volatile int32_t t12 = -5388;
static int32_t t13 = -191;
static int16_t x73 = 0;
int16_t x75 = 4;
int16_t x78 = INT16_MIN;
int64_t x82 = -42499LL;
uint16_t x85 = UINT16_MAX;
volatile int8_t x91 = 21;
int32_t t19 = 13160;
volatile int32_t t21 = -57209;
static int16_t x118 = INT16_MIN;
volatile int8_t x135 = INT8_MIN;
static int16_t x141 = 0;
volatile int32_t t32 = -1031016990;
static int32_t x149 = -1;
volatile int8_t x153 = 1;
int32_t x156 = 1;
uint8_t x160 = 27U;
volatile int64_t x165 = -1LL;
volatile int32_t t36 = 338110410;
uint8_t x169 = 50U;
volatile int64_t x172 = -239880511746LL;
static volatile int8_t x175 = INT8_MAX;
static uint64_t x178 = 822155LLU;
volatile int8_t x181 = -14;
static int64_t x183 = -1LL;
int32_t t40 = -291663705;
int64_t x185 = 2795LL;
int32_t t42 = 25393;
uint64_t x193 = 7430118848LLU;
int64_t x196 = INT64_MIN;
int32_t x202 = INT32_MIN;
int16_t x204 = -246;
volatile int32_t x210 = -1;
int64_t x216 = 7293LL;
volatile uint32_t x226 = 15065U;
int64_t x228 = -116395447860232LL;
volatile int32_t t51 = 153;
volatile int64_t x238 = INT64_MIN;
int32_t t52 = 2;
static volatile int8_t x246 = -1;
static volatile int32_t t53 = -4;
int64_t x250 = -1644335555395LL;
uint64_t x253 = 577963969869244577LLU;
volatile int32_t t55 = 1;
uint32_t x257 = UINT32_MAX;
int8_t x258 = -47;
int8_t x264 = INT8_MIN;
uint32_t x265 = 99669816U;
static uint16_t x270 = 397U;
int32_t x273 = -1;
static int32_t x277 = INT32_MIN;
int64_t x278 = 45366392263333843LL;
uint16_t x283 = 6958U;
int8_t x284 = INT8_MAX;
int32_t t62 = 5783;
static uint16_t x294 = 3800U;
int32_t t65 = 27;
int16_t x297 = 66;
uint64_t x299 = UINT64_MAX;
static int8_t x300 = 3;
volatile uint16_t x307 = 1954U;
int16_t x308 = 1515;
volatile int64_t x309 = -50125587LL;
volatile int64_t x310 = INT64_MIN;
volatile int16_t x314 = INT16_MIN;
uint16_t x317 = 0U;
int64_t x324 = INT64_MAX;
uint8_t x329 = UINT8_MAX;
uint8_t x336 = 2U;
int32_t t75 = -107;
int8_t x339 = INT8_MIN;
int32_t t76 = -947766;
uint8_t x341 = UINT8_MAX;
volatile int64_t x344 = INT64_MIN;
volatile int32_t t77 = -775;
volatile int64_t x348 = INT64_MIN;
int32_t t78 = 1413914;
uint16_t x351 = 6202U;
uint64_t x356 = 2030560519LLU;
volatile int32_t x359 = -1;
static uint16_t x362 = UINT16_MAX;
int8_t x363 = INT8_MAX;
int8_t x372 = 39;
static volatile int32_t t84 = 0;
int8_t x377 = INT8_MIN;
uint64_t x380 = 7319685LLU;
static int32_t t85 = -27862974;
static uint16_t x386 = 15010U;
uint16_t x400 = UINT16_MAX;
int64_t x406 = 35163LL;
int32_t x415 = INT32_MIN;
int32_t x416 = 15706;
int32_t x420 = 25;
volatile uint16_t x424 = 2653U;
int16_t x427 = INT16_MIN;
int32_t t96 = -2336501;
uint32_t x438 = 10486U;
static int32_t x448 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint8_t x2 = 126U;
	static int64_t x3 = INT64_MIN;

	t0 = ((x1<=(x2+x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint16_t x7 = 0U;
	uint64_t x8 = 230290523LLU;
	int32_t t1 = 666;

	t1 = ((x5<=(x6+x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x11 = INT8_MAX;
	int64_t x12 = 34223LL;
	volatile int32_t t2 = -40;

	t2 = ((x9<=(x10+x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 5489439;

	t3 = ((x13<=(x14+x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	static uint16_t x19 = 37U;

	t4 = ((x17<=(x18+x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	static uint64_t x23 = 771LLU;
	volatile uint8_t x24 = 1U;
	volatile int32_t t5 = 1430977;

	t5 = ((x21<=(x22+x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = -233991233;
	static uint32_t x38 = 502547745U;
	volatile int32_t t6 = 1404833;

	t6 = ((x37<=(x38+x39))<=x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = 17;
	volatile int8_t x42 = 0;
	int32_t x43 = INT32_MIN;

	t7 = ((x41<=(x42+x43))<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -4;
	int32_t x46 = -1;
	uint64_t x47 = 2LLU;
	volatile int64_t x48 = -15615564483223117LL;
	int32_t t8 = -1;

	t8 = ((x45<=(x46+x47))<=x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = 11;
	int64_t x51 = -1LL;
	int64_t x52 = INT64_MIN;
	volatile int32_t t9 = 123;

	t9 = ((x49<=(x50+x51))<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = 128704LL;
	uint32_t x56 = 1907U;

	t10 = ((x53<=(x54+x55))<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = INT16_MAX;
	static int64_t x58 = INT64_MIN;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MAX;
	static int32_t t11 = 399;

	t11 = ((x57<=(x58+x59))<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 82U;
	static int8_t x63 = -1;
	volatile uint8_t x64 = 37U;

	t12 = ((x61<=(x62+x63))<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 299351608U;
	int16_t x66 = INT16_MIN;
	volatile uint16_t x67 = UINT16_MAX;
	volatile int8_t x68 = INT8_MIN;

	t13 = ((x65<=(x66+x67))<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 1U;
	int16_t x70 = -1;
	int32_t x71 = -41562895;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t14 = -2768;

	t14 = ((x69<=(x70+x71))<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x74 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	static volatile int32_t t15 = 840;

	t15 = ((x73<=(x74+x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = 103810045LL;
	int16_t x79 = INT16_MAX;
	static uint64_t x80 = 3089423988LLU;
	volatile int32_t t16 = -507782653;

	t16 = ((x77<=(x78+x79))<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	static int16_t x83 = INT16_MIN;
	static int16_t x84 = -1;
	volatile int32_t t17 = -370355969;

	t17 = ((x81<=(x82+x83))<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x86 = 0U;
	int16_t x87 = INT16_MAX;
	static uint16_t x88 = UINT16_MAX;
	volatile int32_t t18 = 16;

	t18 = ((x85<=(x86+x87))<=x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = -466882469082LL;
	int8_t x92 = INT8_MAX;

	t19 = ((x89<=(x90+x91))<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x93 = 1177U;
	volatile int8_t x94 = INT8_MAX;
	static int64_t x95 = -77830891LL;
	uint8_t x96 = 1U;
	volatile int32_t t20 = -4;

	t20 = ((x93<=(x94+x95))<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 10U;
	uint32_t x98 = 7622269U;
	int32_t x99 = -24;
	volatile int64_t x100 = -1LL;

	t21 = ((x97<=(x98+x99))<=x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x105 = UINT8_MAX;
	static uint32_t x106 = UINT32_MAX;
	int32_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t22 = 104;

	t22 = ((x105<=(x106+x107))<=x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MAX;
	int8_t x111 = -1;
	int32_t x112 = -774887;
	volatile int32_t t23 = -1;

	t23 = ((x109<=(x110+x111))<=x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = -1;
	int8_t x115 = INT8_MAX;
	volatile int64_t x116 = -1LL;
	static int32_t t24 = -77824;

	t24 = ((x113<=(x114+x115))<=x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 5U;
	volatile int64_t x119 = 22013866153695LL;
	volatile int32_t x120 = -16;
	int32_t t25 = -96065283;

	t25 = ((x117<=(x118+x119))<=x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x121 = -1LL;
	int64_t x122 = -1LL;
	int32_t x123 = 1;
	volatile int8_t x124 = 5;
	int32_t t26 = 896;

	t26 = ((x121<=(x122+x123))<=x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 411753328;
	uint64_t x126 = UINT64_MAX;
	volatile int32_t x127 = -16265947;
	volatile int32_t x128 = 8103073;
	volatile int32_t t27 = -104454;

	t27 = ((x125<=(x126+x127))<=x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t x130 = INT64_MIN;
	volatile uint16_t x131 = 264U;
	uint8_t x132 = 3U;
	volatile int32_t t28 = -510377;

	t28 = ((x129<=(x130+x131))<=x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = UINT64_MAX;
	uint16_t x134 = 25U;
	volatile int32_t x136 = INT32_MIN;
	static volatile int32_t t29 = -1;

	t29 = ((x133<=(x134+x135))<=x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 3411153U;
	uint64_t x138 = 98239702LLU;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -138583928767424476LL;
	static int32_t t30 = -8;

	t30 = ((x137<=(x138+x139))<=x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x142 = 313478U;
	static int32_t x143 = INT32_MIN;
	int32_t x144 = -1;
	volatile int32_t t31 = 59748;

	t31 = ((x141<=(x142+x143))<=x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 1491U;
	int32_t x146 = INT32_MIN;
	volatile uint16_t x147 = 1988U;
	int32_t x148 = -1;

	t32 = ((x145<=(x146+x147))<=x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x150 = 45;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = 31;
	volatile int32_t t33 = -113196;

	t33 = ((x149<=(x150+x151))<=x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	volatile int32_t t34 = -205;

	t34 = ((x153<=(x154+x155))<=x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MAX;
	volatile int32_t t35 = 61;

	t35 = ((x157<=(x158+x159))<=x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x166 = 4171427559636LLU;
	int64_t x167 = INT64_MAX;
	uint64_t x168 = 8547635469079465LLU;

	t36 = ((x165<=(x166+x167))<=x168);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x170 = INT8_MIN;
	static int8_t x171 = INT8_MIN;
	static int32_t t37 = 13640;

	t37 = ((x169<=(x170+x171))<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x173 = -1;
	uint8_t x174 = 2U;
	volatile int8_t x176 = INT8_MAX;
	int32_t t38 = 324016;

	t38 = ((x173<=(x174+x175))<=x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -1;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = -1;
	int32_t t39 = 11;

	t39 = ((x177<=(x178+x179))<=x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x182 = 389U;
	int16_t x184 = INT16_MIN;

	t40 = ((x181<=(x182+x183))<=x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x186 = INT16_MIN;
	int8_t x187 = -1;
	static int16_t x188 = INT16_MIN;
	static volatile int32_t t41 = 221946;

	t41 = ((x185<=(x186+x187))<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x189 = 42U;
	uint16_t x190 = UINT16_MAX;
	int64_t x191 = 5344466041499LL;
	uint16_t x192 = UINT16_MAX;

	t42 = ((x189<=(x190+x191))<=x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = -79;
	uint32_t x195 = 27108U;
	volatile int32_t t43 = -656330;

	t43 = ((x193<=(x194+x195))<=x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MAX;
	uint32_t x203 = 4U;
	volatile int32_t t44 = 1;

	t44 = ((x201<=(x202+x203))<=x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = 0LL;
	uint16_t x206 = 6074U;
	volatile int32_t x207 = -1;
	int16_t x208 = -29;
	int32_t t45 = -1019469;

	t45 = ((x205<=(x206+x207))<=x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 176U;
	volatile int64_t x211 = 217547652LL;
	volatile int8_t x212 = -9;
	volatile int32_t t46 = 433630600;

	t46 = ((x209<=(x210+x211))<=x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = INT64_MIN;
	volatile uint64_t x214 = UINT64_MAX;
	volatile int32_t x215 = INT32_MAX;
	static volatile int32_t t47 = -328;

	t47 = ((x213<=(x214+x215))<=x216);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = INT32_MIN;
	static int64_t x219 = -1LL;
	static int64_t x220 = INT64_MIN;
	int32_t t48 = 0;

	t48 = ((x217<=(x218+x219))<=x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = UINT8_MAX;
	uint8_t x227 = UINT8_MAX;
	int32_t t49 = -4018;

	t49 = ((x225<=(x226+x227))<=x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x229 = INT32_MIN;
	int8_t x230 = 2;
	uint16_t x231 = 1U;
	volatile int8_t x232 = 2;
	volatile int32_t t50 = 610;

	t50 = ((x229<=(x230+x231))<=x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x233 = -1LL;
	volatile int16_t x234 = 111;
	static int32_t x235 = 30;
	static int64_t x236 = -1LL;

	t51 = ((x233<=(x234+x235))<=x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -1;
	int16_t x239 = 1577;
	int16_t x240 = INT16_MIN;

	t52 = ((x237<=(x238+x239))<=x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = 1U;
	static int8_t x247 = -49;
	static int32_t x248 = -1;

	t53 = ((x245<=(x246+x247))<=x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = -1LL;
	int32_t x251 = 177218112;
	int32_t x252 = -1;
	volatile int32_t t54 = 13;

	t54 = ((x249<=(x250+x251))<=x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x254 = UINT32_MAX;
	static volatile uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MIN;

	t55 = ((x253<=(x254+x255))<=x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x259 = 7598143;
	int64_t x260 = 19559523LL;
	volatile int32_t t56 = -19550474;

	t56 = ((x257<=(x258+x259))<=x260);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x261 = 6U;
	int64_t x262 = INT64_MIN;
	static uint16_t x263 = 151U;
	volatile int32_t t57 = 91;

	t57 = ((x261<=(x262+x263))<=x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x266 = -1;
	uint32_t x267 = 1637640U;
	volatile int8_t x268 = -1;
	volatile int32_t t58 = 781096554;

	t58 = ((x265<=(x266+x267))<=x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = INT32_MIN;
	static int8_t x271 = INT8_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	int32_t t59 = 1831;

	t59 = ((x269<=(x270+x271))<=x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x274 = -1;
	int32_t x275 = -12897331;
	volatile uint32_t x276 = 247716U;
	static int32_t t60 = -6006454;

	t60 = ((x273<=(x274+x275))<=x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = UINT32_MAX;
	int32_t t61 = 116513370;

	t61 = ((x277<=(x278+x279))<=x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = -1;
	int16_t x282 = 369;

	t62 = ((x281<=(x282+x283))<=x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x285 = -1LL;
	int8_t x286 = -1;
	int16_t x287 = -1;
	static int32_t x288 = -742;
	static int32_t t63 = 1033881;

	t63 = ((x285<=(x286+x287))<=x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x289 = 179076580634882838LL;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = INT32_MAX;
	int64_t x292 = INT64_MIN;
	volatile int32_t t64 = -326422552;

	t64 = ((x289<=(x290+x291))<=x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x293 = -1;
	uint8_t x295 = 3U;
	uint8_t x296 = 15U;

	t65 = ((x293<=(x294+x295))<=x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x298 = UINT64_MAX;
	int32_t t66 = 868416043;

	t66 = ((x297<=(x298+x299))<=x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x301 = 47931U;
	uint32_t x302 = 1320722U;
	uint16_t x303 = UINT16_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t67 = 9236542;

	t67 = ((x301<=(x302+x303))<=x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = 1517;
	static volatile int32_t t68 = 8;

	t68 = ((x305<=(x306+x307))<=x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x311 = 1937U;
	static volatile int64_t x312 = INT64_MIN;
	int32_t t69 = -225;

	t69 = ((x309<=(x310+x311))<=x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -12;
	int16_t x315 = INT16_MAX;
	uint64_t x316 = 57427LLU;
	int32_t t70 = 100084080;

	t70 = ((x313<=(x314+x315))<=x316);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x318 = UINT32_MAX;
	static volatile int32_t x319 = INT32_MAX;
	uint8_t x320 = UINT8_MAX;
	int32_t t71 = 286356;

	t71 = ((x317<=(x318+x319))<=x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint8_t x322 = 13U;
	int64_t x323 = 3508568903528LL;
	volatile int32_t t72 = -74;

	t72 = ((x321<=(x322+x323))<=x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = UINT16_MAX;
	static volatile uint64_t x326 = 4507997464373183406LLU;
	volatile int64_t x327 = -1LL;
	uint32_t x328 = UINT32_MAX;
	int32_t t73 = 197978579;

	t73 = ((x325<=(x326+x327))<=x328);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x330 = UINT32_MAX;
	int16_t x331 = -1;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t74 = 116985;

	t74 = ((x329<=(x330+x331))<=x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = INT64_MAX;
	int16_t x334 = INT16_MIN;
	volatile uint64_t x335 = UINT64_MAX;

	t75 = ((x333<=(x334+x335))<=x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = -31;
	int8_t x338 = INT8_MAX;
	int64_t x340 = INT64_MAX;

	t76 = ((x337<=(x338+x339))<=x340);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x342 = INT8_MIN;
	int16_t x343 = -1926;

	t77 = ((x341<=(x342+x343))<=x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x345 = UINT16_MAX;
	volatile uint16_t x346 = 1U;
	int64_t x347 = -4149420600LL;

	t78 = ((x345<=(x346+x347))<=x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = 48;
	int64_t x350 = -1LL;
	static int64_t x352 = INT64_MIN;
	static volatile int32_t t79 = 4;

	t79 = ((x349<=(x350+x351))<=x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = 7813U;
	int16_t x354 = -1;
	int32_t x355 = -1;
	int32_t t80 = -104970;

	t80 = ((x353<=(x354+x355))<=x356);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = 0U;
	uint32_t x360 = 11300U;
	volatile int32_t t81 = -53491371;

	t81 = ((x357<=(x358+x359))<=x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = 91;
	static int64_t x364 = INT64_MIN;
	volatile int32_t t82 = -417;

	t82 = ((x361<=(x362+x363))<=x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x369 = 10LLU;
	uint8_t x370 = 0U;
	int32_t x371 = -6739931;
	int32_t t83 = -217;

	t83 = ((x369<=(x370+x371))<=x372);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x373 = 55U;
	int32_t x374 = INT32_MIN;
	int64_t x375 = 130807552779214278LL;
	uint16_t x376 = 111U;

	t84 = ((x373<=(x374+x375))<=x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x378 = 461;
	volatile int16_t x379 = INT16_MAX;

	t85 = ((x377<=(x378+x379))<=x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = -2795404;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;
	static int32_t t86 = 1;

	t86 = ((x381<=(x382+x383))<=x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = INT16_MAX;
	volatile int64_t x387 = INT64_MIN;
	int64_t x388 = 823499LL;
	int32_t t87 = -2;

	t87 = ((x385<=(x386+x387))<=x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x389 = 361;
	uint32_t x390 = UINT32_MAX;
	int8_t x391 = -1;
	int16_t x392 = INT16_MIN;
	int32_t t88 = -33362;

	t88 = ((x389<=(x390+x391))<=x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = -15;
	uint16_t x394 = UINT16_MAX;
	volatile int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	int32_t t89 = -67981922;

	t89 = ((x393<=(x394+x395))<=x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x397 = 0U;
	int64_t x398 = INT64_MIN;
	static int8_t x399 = INT8_MAX;
	volatile int32_t t90 = -7623327;

	t90 = ((x397<=(x398+x399))<=x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	volatile uint8_t x402 = 10U;
	int8_t x403 = 3;
	static int32_t x404 = INT32_MIN;
	volatile int32_t t91 = 50;

	t91 = ((x401<=(x402+x403))<=x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t92 = 2752122;

	t92 = ((x405<=(x406+x407))<=x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x413 = 3LL;
	uint8_t x414 = 8U;
	int32_t t93 = -490128794;

	t93 = ((x413<=(x414+x415))<=x416);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x417 = UINT8_MAX;
	volatile int8_t x418 = 1;
	int16_t x419 = 83;
	int32_t t94 = 16738655;

	t94 = ((x417<=(x418+x419))<=x420);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = -1;
	static uint64_t x422 = 28LLU;
	uint8_t x423 = 9U;
	int32_t t95 = 0;

	t95 = ((x421<=(x422+x423))<=x424);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x426 = 95531LLU;
	uint64_t x428 = UINT64_MAX;

	t96 = ((x425<=(x426+x427))<=x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = INT64_MIN;
	volatile int32_t x430 = -1;
	int32_t x431 = -1;
	uint8_t x432 = 38U;
	volatile int32_t t97 = 1;

	t97 = ((x429<=(x430+x431))<=x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 231997543U;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t98 = 0;

	t98 = ((x437<=(x438+x439))<=x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x445 = UINT64_MAX;
	int8_t x446 = 3;
	uint64_t x447 = 133854087890LLU;
	volatile int32_t t99 = 2465;

	t99 = ((x445<=(x446+x447))<=x448);

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

