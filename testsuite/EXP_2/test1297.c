#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -2;
int32_t t0 = -874051;
int64_t x7 = INT64_MIN;
int32_t t1 = -15830;
uint16_t x11 = 3486U;
int64_t x15 = 894558LL;
volatile int32_t t10 = 180;
int8_t x47 = 15;
int8_t x52 = INT8_MIN;
int32_t t12 = -1;
int8_t x53 = INT8_MIN;
volatile int32_t t15 = 2220;
int16_t x65 = -36;
int32_t t16 = -1;
int16_t x71 = -1;
uint32_t x81 = 3109453U;
int64_t x87 = -501LL;
int16_t x88 = INT16_MIN;
int32_t x100 = INT32_MIN;
static uint16_t x102 = 17U;
int16_t x108 = INT16_MIN;
static uint8_t x111 = UINT8_MAX;
uint64_t x122 = 33687777044271559LLU;
uint8_t x123 = UINT8_MAX;
int32_t x129 = INT32_MIN;
int32_t x142 = 45483276;
volatile uint32_t x145 = 22U;
volatile uint32_t x160 = 999934528U;
volatile uint64_t x163 = 1LLU;
volatile int32_t t40 = -7;
int32_t x165 = -23088326;
static int32_t x166 = INT32_MIN;
int32_t x175 = 200474;
static volatile int32_t t43 = -23470;
static int32_t t44 = -126271;
uint64_t x181 = 7330723072960222757LLU;
uint64_t x183 = 2098571LLU;
int32_t t45 = 14;
static volatile int32_t t46 = 1774;
volatile uint32_t x192 = 331U;
int8_t x193 = 38;
volatile int32_t t48 = -882074;
int32_t x197 = INT32_MIN;
int64_t x201 = INT64_MIN;
static int32_t x205 = -1;
int32_t x221 = 1906;
static int16_t x232 = INT16_MAX;
int32_t x247 = -3665073;
int16_t x253 = -1;
int16_t x256 = INT16_MIN;
volatile int32_t t63 = -2;
static volatile uint16_t x263 = UINT16_MAX;
volatile int32_t t65 = -1;
uint64_t x265 = UINT64_MAX;
int64_t x267 = INT64_MAX;
static int64_t x272 = INT64_MAX;
static volatile uint64_t x281 = 216LLU;
int32_t x287 = 64580882;
volatile uint16_t x288 = UINT16_MAX;
int32_t x296 = -1;
int8_t x298 = INT8_MAX;
static volatile int8_t x299 = -1;
static int16_t x304 = INT16_MIN;
static volatile int32_t t77 = 4166048;
int64_t x314 = 3757538947304LL;
int64_t x317 = -69075024309423LL;
volatile int32_t t80 = -7777038;
volatile int8_t x343 = -1;
uint64_t x345 = 51640245488221LLU;
int16_t x347 = INT16_MIN;
int16_t x351 = INT16_MIN;
int8_t x356 = -1;
uint16_t x358 = 2286U;
int32_t t89 = 1;
static int64_t x361 = 3864663571814LL;
int16_t x362 = 3;
int32_t t90 = 237522267;
int64_t x365 = -3163723527050245192LL;
uint64_t x367 = UINT64_MAX;
uint64_t x372 = 5LLU;
int32_t t93 = 396568;
int16_t x377 = INT16_MIN;
int32_t t94 = -130888477;
volatile int8_t x384 = INT8_MIN;
static int8_t x385 = 32;
int32_t x393 = -1;
uint64_t x394 = UINT64_MAX;
int64_t x397 = INT64_MIN;
volatile int8_t x398 = INT8_MIN;
int8_t x399 = INT8_MAX;


void f0(void) {
	uint8_t x1 = 122U;
	uint8_t x2 = 3U;
	int64_t x4 = 211391155LL;

	t0 = ((x1<(x2==x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 552U;
	volatile int32_t x6 = 22086328;
	int32_t x8 = -1;

	t1 = ((x5<(x6==x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint16_t x10 = 10861U;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = -2023;

	t2 = ((x9<(x10==x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	static int32_t x14 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -1;

	t3 = ((x13<(x14==x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 13U;
	int64_t x18 = 137236578LL;
	uint8_t x19 = UINT8_MAX;
	uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = -28249707;

	t4 = ((x17<(x18==x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MAX;
	int16_t x22 = 4078;
	volatile int16_t x23 = 40;
	uint64_t x24 = 202349542247006LLU;
	volatile int32_t t5 = -45603955;

	t5 = ((x21<(x22==x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x26 = -1354;
	int32_t x27 = -502968;
	int16_t x28 = 9;
	static volatile int32_t t6 = 58759538;

	t6 = ((x25<(x26==x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	uint64_t x31 = 256982473LLU;
	int32_t x32 = -22284;
	int32_t t7 = 941;

	t7 = ((x29<(x30==x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = -6832390;
	uint64_t x35 = 2388281036174091LLU;
	int64_t x36 = INT64_MIN;
	int32_t t8 = -6;

	t8 = ((x33<(x34==x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 103393U;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = INT64_MAX;
	int32_t t9 = 0;

	t9 = ((x37<(x38==x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 116U;
	uint8_t x42 = 7U;
	volatile int8_t x43 = -1;
	uint32_t x44 = 64585U;

	t10 = ((x41<(x42==x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	uint32_t x46 = 10872U;
	static int32_t x48 = -1;
	int32_t t11 = 1793;

	t11 = ((x45<(x46==x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 1U;
	int64_t x50 = INT64_MIN;
	volatile int64_t x51 = INT64_MIN;

	t12 = ((x49<(x50==x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	static volatile int8_t x55 = -1;
	static volatile uint8_t x56 = 124U;
	int32_t t13 = 38044;

	t13 = ((x53<(x54==x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint16_t x58 = 944U;
	static int64_t x59 = 65231089LL;
	static volatile int32_t x60 = INT32_MAX;
	int32_t t14 = 142512;

	t14 = ((x57<(x58==x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 0;
	static volatile int32_t x62 = INT32_MIN;
	static int32_t x63 = INT32_MAX;
	static uint32_t x64 = 5U;

	t15 = ((x61<(x62==x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 56481268U;
	volatile uint16_t x67 = 3U;
	volatile uint8_t x68 = 65U;

	t16 = ((x65<(x66==x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	volatile int8_t x70 = INT8_MAX;
	static int8_t x72 = INT8_MIN;
	int32_t t17 = -503343838;

	t17 = ((x69<(x70==x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 0U;
	static int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	uint8_t x76 = UINT8_MAX;
	static volatile int32_t t18 = -11019361;

	t18 = ((x73<(x74==x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -954725730LL;
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 63684194494LLU;
	static int64_t x80 = INT64_MAX;
	volatile int32_t t19 = -44341;

	t19 = ((x77<(x78==x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = -1LL;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t20 = 32371;

	t20 = ((x81<(x82==x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = -9875;
	volatile int32_t t21 = -75139067;

	t21 = ((x85<(x86==x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MAX;
	static uint32_t x90 = 1439941667U;
	int8_t x91 = 2;
	static int8_t x92 = -11;
	volatile int32_t t22 = -52044297;

	t22 = ((x89<(x90==x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 5771U;
	uint64_t x94 = UINT64_MAX;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 52841;

	t23 = ((x93<(x94==x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 65U;
	volatile int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int32_t t24 = 5697;

	t24 = ((x97<(x98==x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 25127904;

	t25 = ((x101<(x102==x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	uint32_t x106 = 32680341U;
	int64_t x107 = INT64_MIN;
	volatile int32_t t26 = 917;

	t26 = ((x105<(x106==x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -52404;
	static volatile int64_t x110 = -111LL;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 161;

	t27 = ((x109<(x110==x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = 20358LL;
	static uint32_t x114 = 898998U;
	volatile uint8_t x115 = 17U;
	int32_t x116 = INT32_MAX;
	static volatile int32_t t28 = -2307325;

	t28 = ((x113<(x114==x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	int64_t x118 = INT64_MAX;
	static volatile uint16_t x119 = 535U;
	static volatile int32_t x120 = -344282;
	volatile int32_t t29 = 2;

	t29 = ((x117<(x118==x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = 571;
	int16_t x124 = 82;
	int32_t t30 = -9363;

	t30 = ((x121<(x122==x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 20612LLU;
	int32_t x126 = -1;
	uint64_t x127 = 151136906283LLU;
	int32_t x128 = INT32_MIN;
	static int32_t t31 = -3;

	t31 = ((x125<(x126==x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x130 = INT32_MIN;
	volatile int8_t x131 = INT8_MIN;
	uint8_t x132 = 1U;
	volatile int32_t t32 = -25588253;

	t32 = ((x129<(x130==x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 2U;
	int8_t x134 = INT8_MAX;
	static int8_t x135 = INT8_MAX;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t33 = 1;

	t33 = ((x133<(x134==x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	static int8_t x138 = -34;
	static int64_t x139 = -1LL;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = -1;

	t34 = ((x137<(x138==x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	volatile int64_t x143 = INT64_MAX;
	volatile int16_t x144 = -1;
	int32_t t35 = 102845;

	t35 = ((x141<(x142==x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	static int16_t x147 = INT16_MAX;
	static uint8_t x148 = 13U;
	volatile int32_t t36 = 254;

	t36 = ((x145<(x146==x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 13U;
	volatile int16_t x150 = INT16_MIN;
	volatile int8_t x151 = INT8_MAX;
	uint16_t x152 = 1927U;
	volatile int32_t t37 = 4725;

	t37 = ((x149<(x150==x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 399;
	uint16_t x154 = UINT16_MAX;
	static volatile uint32_t x155 = 6159U;
	volatile int64_t x156 = 175805LL;
	static volatile int32_t t38 = 1810;

	t38 = ((x153<(x154==x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 960457U;
	uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = -1;
	int32_t t39 = -1;

	t39 = ((x157<(x158==x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = 40502LL;
	uint32_t x164 = 477726755U;

	t40 = ((x161<(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x167 = UINT8_MAX;
	volatile int8_t x168 = -37;
	volatile int32_t t41 = 1803377;

	t41 = ((x165<(x166==x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 344U;
	volatile uint32_t x170 = 7524831U;
	int8_t x171 = -3;
	int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -30474253;

	t42 = ((x169<(x170==x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = UINT32_MAX;
	static uint64_t x174 = 2LLU;
	static int8_t x176 = INT8_MIN;

	t43 = ((x173<(x174==x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MAX;
	static uint64_t x179 = 2249626678332674LLU;
	int64_t x180 = INT64_MAX;

	t44 = ((x177<(x178==x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x182 = INT64_MIN;
	int16_t x184 = INT16_MIN;

	t45 = ((x181<(x182==x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MAX;
	uint16_t x186 = 17U;
	volatile int8_t x187 = 0;
	int8_t x188 = 3;

	t46 = ((x185<(x186==x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 1054753145495283LL;
	int16_t x190 = 1;
	int32_t x191 = -893659;
	volatile int32_t t47 = -1055;

	t47 = ((x189<(x190==x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 1694761321500542LL;
	static volatile uint64_t x195 = 3105903004LLU;
	static int16_t x196 = -1;

	t48 = ((x193<(x194==x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = 48;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 9U;
	int32_t t49 = 5;

	t49 = ((x197<(x198==x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x202 = 22;
	uint64_t x203 = 6510131651970550493LLU;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 1;

	t50 = ((x201<(x202==x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x206 = 2U;
	static uint8_t x207 = 0U;
	int16_t x208 = -1;
	static int32_t t51 = -104025;

	t51 = ((x205<(x206==x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	static int32_t x210 = -1;
	int16_t x211 = 63;
	static volatile int32_t x212 = INT32_MAX;
	static int32_t t52 = -6606441;

	t52 = ((x209<(x210==x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	int8_t x214 = -1;
	volatile int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = -397099992;

	t53 = ((x213<(x214==x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 986LLU;
	volatile uint16_t x218 = 2U;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = -743;
	volatile int32_t t54 = -4033;

	t54 = ((x217<(x218==x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -14;
	static uint16_t x223 = 2061U;
	volatile int32_t x224 = 596;
	volatile int32_t t55 = 212221687;

	t55 = ((x221<(x222==x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	static volatile uint16_t x226 = 2U;
	int64_t x227 = -2046574447020735125LL;
	int16_t x228 = -1;
	int32_t t56 = -610282813;

	t56 = ((x225<(x226==x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 45U;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 7;
	volatile int32_t t57 = 430064585;

	t57 = ((x229<(x230==x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile int32_t x234 = INT32_MIN;
	static int16_t x235 = -41;
	int16_t x236 = 0;
	int32_t t58 = 4714989;

	t58 = ((x233<(x234==x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = 177305U;
	int16_t x238 = INT16_MAX;
	int64_t x239 = -1LL;
	volatile uint8_t x240 = 1U;
	static int32_t t59 = 1720334;

	t59 = ((x237<(x238==x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	static int64_t x242 = 24345771LL;
	uint64_t x243 = 44164LLU;
	uint16_t x244 = 211U;
	volatile int32_t t60 = 697958;

	t60 = ((x241<(x242==x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	volatile int8_t x246 = -7;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -20;

	t61 = ((x245<(x246==x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	static uint32_t x250 = 35U;
	int16_t x251 = -1;
	volatile int8_t x252 = -1;
	int32_t t62 = 410;

	t62 = ((x249<(x250==x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = UINT64_MAX;
	volatile int16_t x255 = INT16_MIN;

	t63 = ((x253<(x254==x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 57997111U;
	int8_t x258 = -1;
	static int16_t x259 = INT16_MIN;
	volatile uint32_t x260 = 7307252U;
	volatile int32_t t64 = 1;

	t64 = ((x257<(x258==x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 28U;
	uint32_t x262 = UINT32_MAX;
	int16_t x264 = INT16_MIN;

	t65 = ((x261<(x262==x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -3;

	t66 = ((x265<(x266==x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -1;
	int32_t x270 = 5450020;
	static uint64_t x271 = 13LLU;
	int32_t t67 = 6286;

	t67 = ((x269<(x270==x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	static int32_t x274 = -44;
	static int32_t x275 = INT32_MIN;
	static uint16_t x276 = 309U;
	volatile int32_t t68 = -51874;

	t68 = ((x273<(x274==x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -10;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -40;

	t69 = ((x277<(x278==x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -1LL;
	volatile uint64_t x283 = 31LLU;
	static int32_t x284 = INT32_MIN;
	static int32_t t70 = 1;

	t70 = ((x281<(x282==x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	static int16_t x286 = -1;
	static int32_t t71 = -289;

	t71 = ((x285<(x286==x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	uint8_t x290 = 33U;
	static int16_t x291 = 182;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = -1158;

	t72 = ((x289<(x290==x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = 22U;
	volatile int8_t x294 = INT8_MIN;
	volatile int32_t x295 = -137194;
	static int32_t t73 = 0;

	t73 = ((x293<(x294==x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 535106574U;
	int16_t x300 = 1;
	volatile int32_t t74 = 446;

	t74 = ((x297<(x298==x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	static uint16_t x302 = 4010U;
	int16_t x303 = INT16_MIN;
	int32_t t75 = 3819768;

	t75 = ((x301<(x302==x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -64691350;
	uint8_t x306 = 14U;
	int64_t x307 = 10LL;
	uint32_t x308 = 159U;
	volatile int32_t t76 = -1;

	t76 = ((x305<(x306==x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	int32_t x310 = -7377;
	volatile int64_t x311 = 1LL;
	uint64_t x312 = 52137LLU;

	t77 = ((x309<(x310==x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	uint16_t x315 = 15644U;
	uint16_t x316 = 13080U;
	volatile int32_t t78 = 7451;

	t78 = ((x313<(x314==x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x318 = -1;
	static int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -1;

	t79 = ((x317<(x318==x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 88LLU;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = UINT8_MAX;
	static uint64_t x324 = 1895LLU;

	t80 = ((x321<(x322==x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	static volatile uint16_t x326 = 1478U;
	int16_t x327 = 102;
	int32_t x328 = 728;
	volatile int32_t t81 = -189177629;

	t81 = ((x325<(x326==x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -1LL;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	uint8_t x332 = 63U;
	int32_t t82 = -2803;

	t82 = ((x329<(x330==x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = -219;
	static int16_t x334 = INT16_MIN;
	int32_t x335 = -1;
	volatile int64_t x336 = -832106359472569505LL;
	volatile int32_t t83 = -771956;

	t83 = ((x333<(x334==x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -1;
	int64_t x339 = -1LL;
	uint16_t x340 = UINT16_MAX;
	static int32_t t84 = 0;

	t84 = ((x337<(x338==x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 1501;
	volatile int16_t x342 = INT16_MAX;
	volatile int16_t x344 = INT16_MAX;
	int32_t t85 = -290204;

	t85 = ((x341<(x342==x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x346 = 155U;
	int64_t x348 = -8841952400003129LL;
	volatile int32_t t86 = 2452642;

	t86 = ((x345<(x346==x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 78286293U;
	volatile uint64_t x350 = 785866LLU;
	int32_t x352 = -31;
	int32_t t87 = -312;

	t87 = ((x349<(x350==x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t88 = 3;

	t88 = ((x353<(x354==x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x359 = 200428292688LLU;
	static int16_t x360 = 1626;

	t89 = ((x357<(x358==x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x363 = INT8_MAX;
	volatile int32_t x364 = INT32_MAX;

	t90 = ((x361<(x362==x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = 6840U;
	static int32_t x368 = INT32_MAX;
	static volatile int32_t t91 = 2;

	t91 = ((x365<(x366==x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = 105178060051795230LL;
	uint32_t x371 = 1913890992U;
	int32_t t92 = 0;

	t92 = ((x369<(x370==x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 108741896LL;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = -6;

	t93 = ((x373<(x374==x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 1197876824231LLU;
	static uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;

	t94 = ((x377<(x378==x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	static volatile int32_t t95 = 0;

	t95 = ((x381<(x382==x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;
	volatile int8_t x388 = 1;
	int32_t t96 = 21;

	t96 = ((x385<(x386==x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MAX;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MAX;
	int32_t t97 = 6;

	t97 = ((x389<(x390==x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x395 = 1U;
	uint8_t x396 = 100U;
	volatile int32_t t98 = 390113;

	t98 = ((x393<(x394==x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x400 = INT16_MIN;
	int32_t t99 = -1;

	t99 = ((x397<(x398==x399))<=x400);

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

