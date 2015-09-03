#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 2000;
uint16_t x14 = 1U;
uint8_t x15 = 6U;
int64_t x19 = INT64_MAX;
int16_t x21 = INT16_MAX;
volatile uint16_t x36 = UINT16_MAX;
static int32_t x37 = INT32_MIN;
static volatile int32_t t9 = -61009037;
int64_t x41 = INT64_MIN;
volatile uint32_t x51 = UINT32_MAX;
uint64_t x55 = UINT64_MAX;
uint64_t x56 = 982194313LLU;
volatile int32_t t14 = -803718965;
static int32_t x64 = 431;
uint16_t x65 = 29492U;
int64_t x71 = 3597191768222423767LL;
int64_t x75 = INT64_MIN;
volatile uint32_t x78 = UINT32_MAX;
int64_t x80 = -17LL;
uint64_t x82 = 77053462995LLU;
int64_t x84 = 507LL;
volatile int32_t t23 = -411;
static uint64_t x110 = 7645738257LLU;
int16_t x117 = -1;
volatile int64_t x121 = -1LL;
int16_t x124 = 713;
int32_t x135 = INT32_MIN;
int8_t x142 = INT8_MAX;
int16_t x154 = INT16_MAX;
int64_t x155 = 563694071427324682LL;
int32_t t38 = 452631435;
int32_t x160 = -1;
volatile int8_t x162 = -1;
volatile int8_t x165 = INT8_MAX;
int32_t x172 = INT32_MIN;
int32_t x178 = INT32_MIN;
static uint32_t x186 = 1536490U;
int16_t x188 = -1;
int64_t x200 = -12264298LL;
volatile int32_t t49 = 32361259;
int8_t x204 = INT8_MIN;
int16_t x208 = -1;
int32_t x209 = -1;
uint8_t x218 = UINT8_MAX;
static int32_t t55 = -6316436;
static int64_t x230 = INT64_MIN;
volatile uint64_t x233 = UINT64_MAX;
int32_t x238 = -1;
static uint64_t x243 = 10189154LLU;
uint8_t x247 = 0U;
volatile int32_t t61 = 11;
uint64_t x250 = 11184596899210403LLU;
int64_t x252 = INT64_MIN;
int32_t x256 = -356652408;
uint16_t x258 = 19U;
volatile int32_t t68 = -135215405;
int8_t x281 = -1;
int16_t x285 = INT16_MAX;
volatile int32_t t74 = 929;
volatile int16_t x301 = INT16_MIN;
int32_t x302 = -864;
int32_t x303 = INT32_MAX;
static int8_t x305 = INT8_MIN;
static int64_t x307 = INT64_MIN;
int32_t t76 = 52;
static int64_t x312 = INT64_MIN;
volatile int32_t t77 = -1525;
volatile int32_t t78 = 872150393;
static volatile int8_t x319 = INT8_MIN;
int8_t x320 = INT8_MIN;
int32_t t79 = -4700;
static int32_t x321 = 12;
int32_t x324 = INT32_MIN;
uint64_t x329 = UINT64_MAX;
int8_t x330 = INT8_MIN;
int8_t x336 = 6;
volatile int32_t t83 = 27354457;
static int8_t x337 = -1;
static uint16_t x345 = UINT16_MAX;
int8_t x350 = -1;
int16_t x352 = INT16_MAX;
int32_t t88 = 119;
uint16_t x357 = 613U;
uint16_t x358 = 1493U;
int32_t t90 = 3982;
int8_t x365 = -1;
volatile int8_t x374 = -1;
volatile int8_t x385 = -2;
uint8_t x387 = UINT8_MAX;
int64_t x397 = 254239384LL;
static int16_t x400 = 26;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int32_t x2 = -1;
	uint64_t x3 = 90446LLU;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1<x2)<=(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int64_t x6 = -2LL;
	static int64_t x7 = INT64_MAX;
	static int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 7;

	t1 = ((x5<x6)<=(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 113737;

	t2 = ((x9<x10)<=(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	int32_t t3 = 1;

	t3 = ((x13<x14)<=(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 5U;
	int16_t x18 = INT16_MIN;
	static int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 2364280;

	t4 = ((x17<x18)<=(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	volatile int8_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	static volatile int32_t t5 = 797680882;

	t5 = ((x21<x22)<=(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 194640679589119LLU;
	uint16_t x26 = 0U;
	int16_t x27 = INT16_MIN;
	int16_t x28 = -10;
	volatile int32_t t6 = -13;

	t6 = ((x25<x26)<=(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MAX;
	int64_t x31 = 34409412LL;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -1827;

	t7 = ((x29<x30)<=(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static int8_t x34 = INT8_MAX;
	int32_t x35 = INT32_MIN;
	int32_t t8 = 7;

	t8 = ((x33<x34)<=(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -29LL;
	volatile int32_t x39 = -1;
	uint64_t x40 = 188295700364LLU;

	t9 = ((x37<x38)<=(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -19;
	int16_t x43 = 0;
	int8_t x44 = -1;
	int32_t t10 = 1;

	t10 = ((x41<x42)<=(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	int8_t x46 = -62;
	uint32_t x47 = 452584558U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -4;

	t11 = ((x45<x46)<=(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int16_t x50 = 347;
	static int32_t x52 = -37;
	int32_t t12 = -2913302;

	t12 = ((x49<x50)<=(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 0U;
	uint8_t x54 = UINT8_MAX;
	static int32_t t13 = 483804;

	t13 = ((x53<x54)<=(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -2015670825583206601LL;
	uint8_t x58 = 57U;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 130550;

	t14 = ((x57<x58)<=(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int16_t x62 = INT16_MIN;
	int64_t x63 = -1LL;
	int32_t t15 = 1035419;

	t15 = ((x61<x62)<=(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	volatile int16_t x67 = -1;
	int32_t x68 = -341;
	static int32_t t16 = 0;

	t16 = ((x65<x66)<=(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x70 = -20903377LL;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 16577;

	t17 = ((x69<x70)<=(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	volatile int16_t x74 = 45;
	int64_t x76 = INT64_MIN;
	static int32_t t18 = -18;

	t18 = ((x73<x74)<=(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = 0;
	int64_t x79 = INT64_MAX;
	volatile int32_t t19 = -37405;

	t19 = ((x77<x78)<=(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x83 = -11190;
	int32_t t20 = 570043571;

	t20 = ((x81<x82)<=(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = -1;
	volatile int32_t x88 = INT32_MAX;
	int32_t t21 = -69490;

	t21 = ((x85<x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -1;
	int64_t x90 = 1254636720LL;
	static int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	static volatile int32_t t22 = -4;

	t22 = ((x89<x90)<=(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -27;
	int16_t x94 = INT16_MIN;
	int8_t x95 = 3;
	int64_t x96 = -1LL;

	t23 = ((x93<x94)<=(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 417950617333LLU;
	int64_t x98 = 17421LL;
	uint8_t x99 = UINT8_MAX;
	static volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -3913703;

	t24 = ((x97<x98)<=(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int8_t x102 = INT8_MIN;
	int32_t x103 = 1;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -32;

	t25 = ((x101<x102)<=(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int64_t x106 = 851061773281834LL;
	static uint16_t x107 = 26925U;
	int8_t x108 = -30;
	volatile int32_t t26 = -74929049;

	t26 = ((x105<x106)<=(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 47U;
	uint64_t x111 = 1238767974LLU;
	int8_t x112 = -1;
	int32_t t27 = 36;

	t27 = ((x109<x110)<=(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 9498U;
	uint16_t x114 = 346U;
	int64_t x115 = -25182911387849540LL;
	int16_t x116 = -3;
	volatile int32_t t28 = 0;

	t28 = ((x113<x114)<=(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 773U;
	int16_t x119 = INT16_MIN;
	static uint32_t x120 = UINT32_MAX;
	int32_t t29 = -2051206;

	t29 = ((x117<x118)<=(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	static int32_t t30 = 22781;

	t30 = ((x121<x122)<=(x123&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = 9662718LL;
	int64_t x126 = -1LL;
	uint32_t x127 = UINT32_MAX;
	uint16_t x128 = 0U;
	volatile int32_t t31 = 5370;

	t31 = ((x125<x126)<=(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MAX;
	int16_t x131 = -18;
	static volatile int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x129<x130)<=(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 21U;
	static int16_t x134 = 1;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 839;

	t33 = ((x133<x134)<=(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static uint16_t x138 = 3606U;
	int64_t x139 = INT64_MIN;
	int8_t x140 = -1;
	static volatile int32_t t34 = 31106;

	t34 = ((x137<x138)<=(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x143 = -1;
	int16_t x144 = -12486;
	volatile int32_t t35 = 4802173;

	t35 = ((x141<x142)<=(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int32_t x146 = INT32_MAX;
	int8_t x147 = INT8_MIN;
	int8_t x148 = 21;
	int32_t t36 = -2;

	t36 = ((x145<x146)<=(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = 136981266122LL;
	int32_t x152 = 13;
	volatile int32_t t37 = 68;

	t37 = ((x149<x150)<=(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 239U;
	uint16_t x156 = 1U;

	t38 = ((x153<x154)<=(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 1559120U;
	int32_t t39 = 232;

	t39 = ((x157<x158)<=(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x163 = 62U;
	int16_t x164 = -1;
	static int32_t t40 = 34;

	t40 = ((x161<x162)<=(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 0U;
	volatile uint32_t x167 = 124631697U;
	int8_t x168 = -1;
	int32_t t41 = 1;

	t41 = ((x165<x166)<=(x167&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -56;
	int8_t x171 = INT8_MIN;
	static int32_t t42 = -9745342;

	t42 = ((x169<x170)<=(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 0U;
	int16_t x174 = -1;
	volatile uint32_t x175 = 49418968U;
	static int32_t x176 = INT32_MIN;
	int32_t t43 = -2;

	t43 = ((x173<x174)<=(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 779498732U;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 27;

	t44 = ((x177<x178)<=(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MAX;
	static int64_t x182 = INT64_MAX;
	static uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 33U;
	static int32_t t45 = 19;

	t45 = ((x181<x182)<=(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 1;
	uint16_t x187 = UINT16_MAX;
	int32_t t46 = 218;

	t46 = ((x185<x186)<=(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 127763525;

	t47 = ((x189<x190)<=(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -260332;
	static uint16_t x194 = UINT16_MAX;
	static int32_t x195 = INT32_MIN;
	volatile uint8_t x196 = 60U;
	volatile int32_t t48 = -362475807;

	t48 = ((x193<x194)<=(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	static int64_t x198 = 135052377806LL;
	uint8_t x199 = 113U;

	t49 = ((x197<x198)<=(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 408016316144LLU;
	int16_t x202 = 473;
	int32_t x203 = -1;
	volatile int32_t t50 = 26;

	t50 = ((x201<x202)<=(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = INT16_MIN;
	int32_t x206 = -28;
	volatile uint64_t x207 = UINT64_MAX;
	int32_t t51 = 80161;

	t51 = ((x205<x206)<=(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	uint64_t x211 = 3120106978382240048LLU;
	uint16_t x212 = 1542U;
	volatile int32_t t52 = 14974;

	t52 = ((x209<x210)<=(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MAX;
	static int64_t x214 = -23713095LL;
	int8_t x215 = 0;
	uint32_t x216 = 162432U;
	volatile int32_t t53 = -136806332;

	t53 = ((x213<x214)<=(x215&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 208026763;
	volatile int32_t x219 = 53;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -6;

	t54 = ((x217<x218)<=(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	uint16_t x222 = 7772U;
	int8_t x223 = 3;
	static int16_t x224 = -9;

	t55 = ((x221<x222)<=(x223&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	uint16_t x226 = 2U;
	int64_t x227 = INT64_MAX;
	static uint32_t x228 = UINT32_MAX;
	volatile int32_t t56 = 99695618;

	t56 = ((x225<x226)<=(x227&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x231 = 3675491882119482215LLU;
	uint8_t x232 = 2U;
	volatile int32_t t57 = 1;

	t57 = ((x229<x230)<=(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 7827U;
	static int64_t x235 = 82LL;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 13;

	t58 = ((x233<x234)<=(x235&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 67102U;
	volatile int8_t x239 = INT8_MIN;
	volatile uint64_t x240 = UINT64_MAX;
	int32_t t59 = 1243;

	t59 = ((x237<x238)<=(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -1;
	int64_t x244 = INT64_MIN;
	static int32_t t60 = -216343416;

	t60 = ((x241<x242)<=(x243&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 14099;
	int8_t x246 = INT8_MIN;
	int16_t x248 = -1;

	t61 = ((x245<x246)<=(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MIN;
	uint16_t x251 = 1420U;
	static int32_t t62 = 677206729;

	t62 = ((x249<x250)<=(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MAX;
	int32_t x255 = INT32_MIN;
	volatile int32_t t63 = 1782;

	t63 = ((x253<x254)<=(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = -10;
	int16_t x259 = -10783;
	int16_t x260 = -1;
	int32_t t64 = 11245;

	t64 = ((x257<x258)<=(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile uint64_t x262 = 415296678LLU;
	int64_t x263 = -1LL;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = -17;

	t65 = ((x261<x262)<=(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = 1552057032191827400LL;
	int8_t x266 = INT8_MIN;
	uint8_t x267 = 26U;
	uint32_t x268 = 517701899U;
	int32_t t66 = 1;

	t66 = ((x265<x266)<=(x267&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 1525375LLU;
	uint8_t x270 = 1U;
	int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = 60747091082760LLU;
	volatile int32_t t67 = 3;

	t67 = ((x269<x270)<=(x271&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 26629988U;
	volatile int32_t x274 = -325;
	int16_t x275 = INT16_MAX;
	static int64_t x276 = INT64_MIN;

	t68 = ((x273<x274)<=(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x277 = -2;
	uint32_t x278 = 10623U;
	uint32_t x279 = 1546870U;
	int32_t x280 = 1;
	volatile int32_t t69 = -2;

	t69 = ((x277<x278)<=(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 23U;
	static uint16_t x283 = UINT16_MAX;
	static int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 1;

	t70 = ((x281<x282)<=(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -48LL;
	int8_t x287 = 1;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = 2406;

	t71 = ((x285<x286)<=(x287&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 24;
	volatile int16_t x290 = INT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = -42210530;

	t72 = ((x289<x290)<=(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 37U;
	uint8_t x294 = 1U;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -132957564;

	t73 = ((x293<x294)<=(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = -5;
	volatile int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;

	t74 = ((x297<x298)<=(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 0;

	t75 = ((x301<x302)<=(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = 3053;
	int64_t x308 = -30974119228214LL;

	t76 = ((x305<x306)<=(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	volatile uint32_t x310 = UINT32_MAX;
	static int32_t x311 = INT32_MIN;

	t77 = ((x309<x310)<=(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	volatile uint64_t x316 = 722LLU;

	t78 = ((x313<x314)<=(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = -1;

	t79 = ((x317<x318)<=(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = -1LL;
	int32_t x323 = INT32_MIN;
	int32_t t80 = 13648;

	t80 = ((x321<x322)<=(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = 9;
	volatile uint32_t x327 = 2173U;
	volatile int64_t x328 = -700LL;
	volatile int32_t t81 = 1;

	t81 = ((x325<x326)<=(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x331 = 1LL;
	static int16_t x332 = -1;
	volatile int32_t t82 = 1433;

	t82 = ((x329<x330)<=(x331&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MAX;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = -3962811426LL;

	t83 = ((x333<x334)<=(x335&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	static int64_t x339 = INT64_MIN;
	int8_t x340 = 1;
	int32_t t84 = -130;

	t84 = ((x337<x338)<=(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	static int16_t x342 = INT16_MAX;
	int16_t x343 = -11;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 5909;

	t85 = ((x341<x342)<=(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x346 = INT64_MIN;
	volatile uint16_t x347 = 12U;
	int8_t x348 = INT8_MAX;
	int32_t t86 = 990893691;

	t86 = ((x345<x346)<=(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int64_t x351 = 32624475458196153LL;
	volatile int32_t t87 = 422426;

	t87 = ((x349<x350)<=(x351&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 0;
	uint64_t x354 = 354256309287LLU;
	int16_t x355 = INT16_MIN;
	volatile uint64_t x356 = 969672187685840LLU;

	t88 = ((x353<x354)<=(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x359 = 926267U;
	int32_t x360 = -1;
	static int32_t t89 = -409548;

	t89 = ((x357<x358)<=(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 48U;
	static uint64_t x362 = 47178802936364245LLU;
	volatile uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MIN;

	t90 = ((x361<x362)<=(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MIN;
	static uint64_t x367 = 20581694LLU;
	uint16_t x368 = 730U;
	volatile int32_t t91 = -650775;

	t91 = ((x365<x366)<=(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = UINT32_MAX;
	static int8_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	int32_t t92 = -6851;

	t92 = ((x369<x370)<=(x371&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x375 = -1;
	int32_t x376 = -1;
	static int32_t t93 = 204;

	t93 = ((x373<x374)<=(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = UINT32_MAX;
	volatile uint8_t x378 = 12U;
	int32_t x379 = 182223377;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -12673891;

	t94 = ((x377<x378)<=(x379&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = -4085;
	int8_t x383 = -1;
	static volatile int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -56287341;

	t95 = ((x381<x382)<=(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MIN;
	int32_t x388 = -1;
	int32_t t96 = -49277;

	t96 = ((x385<x386)<=(x387&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int32_t x390 = INT32_MAX;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = INT8_MAX;
	int32_t t97 = 8099;

	t97 = ((x389<x390)<=(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x393 = INT32_MAX;
	int16_t x394 = -566;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MIN;
	static int32_t t98 = 690154;

	t98 = ((x393<x394)<=(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MAX;
	volatile uint64_t x399 = 21520708LLU;
	static int32_t t99 = -27372798;

	t99 = ((x397<x398)<=(x399&x400));

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

