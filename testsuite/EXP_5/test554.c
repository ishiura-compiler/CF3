#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = 332;
volatile int8_t x8 = INT8_MAX;
int8_t x11 = INT8_MIN;
static volatile int16_t x12 = INT16_MAX;
static int8_t x20 = INT8_MAX;
volatile int32_t t4 = -8;
volatile int16_t x33 = -1;
static int16_t x35 = -1;
int16_t x41 = -2565;
int32_t t9 = -36348;
uint16_t x52 = 1U;
volatile uint8_t x54 = 54U;
volatile int32_t x55 = -18;
static int64_t x63 = INT64_MIN;
uint8_t x65 = 2U;
static uint8_t x67 = UINT8_MAX;
int32_t x72 = -385;
int64_t x81 = INT64_MAX;
uint64_t x82 = 8156LLU;
int64_t x85 = -32222698918406LL;
static volatile int32_t t20 = 3664;
int32_t x92 = INT32_MIN;
volatile int32_t t22 = 5465981;
volatile int8_t x97 = -1;
int32_t x99 = -14;
static int16_t x102 = INT16_MAX;
volatile int32_t x103 = -1;
int32_t t25 = -25211;
int32_t x110 = INT32_MIN;
int64_t x113 = -2710128LL;
int8_t x120 = 1;
int16_t x121 = 7;
volatile int64_t x123 = 13980519442902LL;
volatile uint32_t x129 = 30769U;
volatile int32_t x141 = -9182646;
uint8_t x146 = 83U;
static int32_t x159 = INT32_MAX;
int32_t x160 = -20;
volatile uint8_t x164 = 1U;
static uint64_t x165 = UINT64_MAX;
int8_t x167 = INT8_MIN;
static int32_t t43 = -413627;
static int32_t x181 = INT32_MIN;
volatile int16_t x188 = INT16_MAX;
volatile int32_t t45 = -357;
uint8_t x192 = 26U;
uint8_t x204 = UINT8_MAX;
int64_t x206 = -64088LL;
volatile int32_t x209 = INT32_MIN;
int32_t t52 = 4987896;
int32_t x220 = 51505470;
int32_t x226 = -1;
int16_t x230 = INT16_MAX;
volatile int32_t t56 = 2;
int8_t x249 = INT8_MIN;
int8_t x250 = -1;
uint16_t x251 = 1U;
uint16_t x253 = UINT16_MAX;
int64_t x258 = INT64_MIN;
static uint16_t x267 = UINT16_MAX;
uint32_t x268 = 1941642U;
static int32_t t64 = 109898;
uint64_t x272 = 3509027402692849693LLU;
static volatile int8_t x276 = INT8_MIN;
static volatile int32_t x299 = 117;
uint16_t x300 = 1U;
int64_t x302 = INT64_MIN;
volatile int16_t x303 = INT16_MAX;
uint8_t x304 = 57U;
static int16_t x313 = INT16_MAX;
static volatile int64_t x315 = -1LL;
int32_t x320 = INT32_MIN;
volatile int32_t t75 = -10967;
static int8_t x335 = -19;
int32_t x339 = 461919;
uint64_t x340 = UINT64_MAX;
uint16_t x344 = UINT16_MAX;
volatile int64_t x346 = 194342169117022LL;
static int8_t x349 = INT8_MIN;
int32_t t82 = -18769;
int32_t x353 = INT32_MAX;
int8_t x358 = -2;
int16_t x360 = INT16_MAX;
static int64_t x362 = -1967LL;
int64_t x366 = -5494648LL;
int8_t x386 = -1;
static int16_t x390 = INT16_MAX;
uint64_t x393 = UINT64_MAX;
volatile int32_t x394 = -6;
static volatile int32_t t94 = -5134;
int32_t x401 = -1;
volatile int32_t t96 = 13933;
uint32_t x411 = UINT32_MAX;
volatile int64_t x412 = INT64_MAX;
volatile int64_t x414 = 864371543798LL;
uint32_t x415 = 6U;
volatile int32_t x419 = 14159951;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MAX;
	static int64_t x4 = -1LL;
	volatile int32_t t0 = 0;

	t0 = (x1==((x2/x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 400U;
	static int64_t x7 = 211276869LL;
	int32_t t1 = -13364;

	t1 = (x5==((x6/x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 26438190LL;
	int8_t x10 = INT8_MIN;
	static volatile int32_t t2 = -6380826;

	t2 = (x9==((x10/x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	int8_t x14 = 7;
	int64_t x15 = INT64_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -250868984;

	t3 = (x13==((x14/x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -233;
	static int32_t x18 = 584;
	static int16_t x19 = INT16_MIN;

	t4 = (x17==((x18/x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 0U;
	static uint8_t x27 = UINT8_MAX;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t5 = 1687606;

	t5 = (x25==((x26/x27)/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 250U;
	int32_t x30 = INT32_MAX;
	uint16_t x31 = 20458U;
	int16_t x32 = INT16_MAX;
	int32_t t6 = -10569805;

	t6 = (x29==((x30/x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = 7;
	static int16_t x36 = INT16_MIN;
	int32_t t7 = 52428;

	t7 = (x33==((x34/x35)/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = -2;
	int16_t x39 = -237;
	int64_t x40 = -371896057464294435LL;
	volatile int32_t t8 = 1;

	t8 = (x37==((x38/x39)/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 0U;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = UINT16_MAX;

	t9 = (x41==((x42/x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	int8_t x46 = INT8_MIN;
	uint32_t x47 = UINT32_MAX;
	static uint64_t x48 = 874244LLU;
	static volatile int32_t t10 = 89;

	t10 = (x45==((x46/x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MAX;
	volatile int16_t x50 = INT16_MIN;
	volatile uint8_t x51 = 40U;
	volatile int32_t t11 = 813493;

	t11 = (x49==((x50/x51)/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 12097U;
	int32_t x56 = INT32_MIN;
	static int32_t t12 = 12420;

	t12 = (x53==((x54/x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	uint16_t x59 = 9U;
	volatile int16_t x60 = 81;
	volatile int32_t t13 = -3310725;

	t13 = (x57==((x58/x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	int16_t x62 = -425;
	static volatile uint32_t x64 = UINT32_MAX;
	volatile int32_t t14 = 4372;

	t14 = (x61==((x62/x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 157863U;
	volatile int32_t x68 = 14476;
	volatile int32_t t15 = 12124;

	t15 = (x65==((x66/x67)/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -4;
	uint32_t x70 = 5U;
	int16_t x71 = 9942;
	volatile int32_t t16 = 0;

	t16 = (x69==((x70/x71)/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = INT16_MAX;
	volatile int32_t t17 = 18942;

	t17 = (x73==((x74/x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x78 = 126U;
	int64_t x79 = INT64_MAX;
	volatile uint8_t x80 = 15U;
	int32_t t18 = -60839588;

	t18 = (x77==((x78/x79)/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x83 = -504433973270LL;
	static int64_t x84 = INT64_MAX;
	int32_t t19 = 1;

	t19 = (x81==((x82/x83)/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x86 = INT16_MIN;
	static int64_t x87 = -1LL;
	static int8_t x88 = INT8_MAX;

	t20 = (x85==((x86/x87)/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x89 = -1;
	int32_t x90 = -1;
	static volatile int32_t x91 = -201734085;
	int32_t t21 = 5;

	t21 = (x89==((x90/x91)/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -935;
	volatile uint32_t x94 = 1U;
	int16_t x95 = -1;
	static uint64_t x96 = 12LLU;

	t22 = (x93==((x94/x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = 0;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t23 = 258815708;

	t23 = (x97==((x98/x99)/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MIN;
	static uint16_t x104 = 160U;
	volatile int32_t t24 = -614;

	t24 = (x101==((x102/x103)/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	uint64_t x106 = 913949872LLU;
	volatile int16_t x107 = INT16_MIN;
	uint64_t x108 = 2278162335874723LLU;

	t25 = (x105==((x106/x107)/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = 1608214138038349095LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	static int32_t t26 = -20205172;

	t26 = (x109==((x110/x111)/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x114 = -14;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t27 = -3791512;

	t27 = (x113==((x114/x115)/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	volatile int64_t x119 = INT64_MAX;
	volatile int32_t t28 = -72;

	t28 = (x117==((x118/x119)/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x122 = INT32_MIN;
	static uint16_t x124 = 18U;
	static int32_t t29 = 27;

	t29 = (x121==((x122/x123)/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = 359;
	int64_t x127 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t30 = 137;

	t30 = (x125==((x126/x127)/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = -1;
	static int8_t x131 = -5;
	int16_t x132 = 7;
	volatile int32_t t31 = -66772;

	t31 = (x129==((x130/x131)/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x133 = 132934376U;
	int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MIN;
	static uint32_t x136 = UINT32_MAX;
	int32_t t32 = -227715899;

	t32 = (x133==((x134/x135)/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = -142;
	int64_t x138 = -1LL;
	int64_t x139 = -1LL;
	int64_t x140 = -55349067LL;
	static volatile int32_t t33 = -468;

	t33 = (x137==((x138/x139)/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = INT8_MIN;
	int16_t x143 = -11;
	uint16_t x144 = 1U;
	int32_t t34 = 116757246;

	t34 = (x141==((x142/x143)/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x145 = -1;
	uint16_t x147 = 2U;
	uint32_t x148 = 3U;
	static int32_t t35 = 13;

	t35 = (x145==((x146/x147)/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = -3260970458107739347LL;
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MIN;
	int32_t x152 = 1530;
	volatile int32_t t36 = -26;

	t36 = (x149==((x150/x151)/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 428LLU;
	static volatile int64_t x154 = 10036434877836067LL;
	static uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MIN;
	int32_t t37 = 22641336;

	t37 = (x153==((x154/x155)/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x157 = 17U;
	int16_t x158 = INT16_MIN;
	volatile int32_t t38 = 634317;

	t38 = (x157==((x158/x159)/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MAX;
	static uint8_t x162 = 122U;
	int32_t x163 = 213782865;
	int32_t t39 = 11;

	t39 = (x161==((x162/x163)/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = INT16_MIN;
	static uint64_t x168 = 11730636169416122LLU;
	int32_t t40 = -2746;

	t40 = (x165==((x166/x167)/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -38;
	volatile uint16_t x170 = 12346U;
	int8_t x171 = INT8_MAX;
	static int64_t x172 = -2155309852074LL;
	static volatile int32_t t41 = 932599;

	t41 = (x169==((x170/x171)/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = -1;
	static uint16_t x174 = 6U;
	int64_t x175 = -1LL;
	volatile uint16_t x176 = UINT16_MAX;
	volatile int32_t t42 = 12881388;

	t42 = (x173==((x174/x175)/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = -1;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;

	t43 = (x177==((x178/x179)/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = -1;
	static uint16_t x184 = 31U;
	int32_t t44 = 79225;

	t44 = (x181==((x182/x183)/x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = -1273558161LL;
	static volatile int64_t x187 = INT64_MIN;

	t45 = (x185==((x186/x187)/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x190 = 3U;
	int64_t x191 = INT64_MIN;
	int32_t t46 = -860421872;

	t46 = (x189==((x190/x191)/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 24467U;
	int16_t x195 = INT16_MIN;
	int32_t x196 = 64213228;
	int32_t t47 = 200;

	t47 = (x193==((x194/x195)/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = -894;
	volatile int16_t x198 = 3626;
	static uint16_t x199 = UINT16_MAX;
	volatile int32_t x200 = -2;
	static volatile int32_t t48 = 250;

	t48 = (x197==((x198/x199)/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = UINT8_MAX;
	volatile uint16_t x202 = UINT16_MAX;
	volatile int8_t x203 = INT8_MIN;
	static volatile int32_t t49 = -788156488;

	t49 = (x201==((x202/x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = 344324590LL;
	static int8_t x207 = INT8_MIN;
	volatile int32_t x208 = -928;
	static int32_t t50 = 907282;

	t50 = (x205==((x206/x207)/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x210 = 341792LLU;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = 8847;
	static int32_t t51 = -24;

	t51 = (x209==((x210/x211)/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 3241LLU;
	volatile uint32_t x214 = 24157U;
	int16_t x215 = INT16_MAX;
	int32_t x216 = INT32_MIN;

	t52 = (x213==((x214/x215)/x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 171390LLU;
	int8_t x218 = INT8_MIN;
	static int16_t x219 = -1;
	int32_t t53 = 464;

	t53 = (x217==((x218/x219)/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x222 = 0U;
	int8_t x223 = 8;
	int16_t x224 = INT16_MIN;
	int32_t t54 = 40218544;

	t54 = (x221==((x222/x223)/x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = -1;
	volatile uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 91U;
	volatile int32_t t55 = 501384;

	t55 = (x225==((x226/x227)/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	volatile uint8_t x231 = UINT8_MAX;
	static int64_t x232 = INT64_MAX;

	t56 = (x229==((x230/x231)/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	static uint64_t x234 = UINT64_MAX;
	int8_t x235 = -1;
	int64_t x236 = INT64_MIN;
	volatile int32_t t57 = 11;

	t57 = (x233==((x234/x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	volatile uint16_t x238 = 630U;
	int8_t x239 = INT8_MIN;
	static int64_t x240 = 3405186881LL;
	int32_t t58 = -30924710;

	t58 = (x237==((x238/x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -10;
	uint8_t x242 = 2U;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t59 = -699;

	t59 = (x241==((x242/x243)/x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x252 = INT8_MAX;
	int32_t t60 = -12;

	t60 = (x249==((x250/x251)/x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x254 = 1U;
	static int32_t x255 = 53022;
	uint64_t x256 = UINT64_MAX;
	int32_t t61 = -9422;

	t61 = (x253==((x254/x255)/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MAX;
	volatile int64_t x259 = -46070LL;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t62 = -38;

	t62 = (x257==((x258/x259)/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = 0;
	int64_t x262 = INT64_MIN;
	volatile int32_t x263 = INT32_MAX;
	static volatile int8_t x264 = -1;
	int32_t t63 = 3503;

	t63 = (x261==((x262/x263)/x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MAX;
	static int64_t x266 = INT64_MAX;

	t64 = (x265==((x266/x267)/x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 0U;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	volatile int32_t t65 = -39;

	t65 = (x269==((x270/x271)/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 2U;
	int32_t t66 = -253903;

	t66 = (x273==((x274/x275)/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = 106;
	int16_t x282 = INT16_MIN;
	int64_t x283 = 8477965479754LL;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t67 = -32756001;

	t67 = (x281==((x282/x283)/x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x285 = INT16_MIN;
	uint8_t x286 = 15U;
	static int8_t x287 = 9;
	int16_t x288 = -1;
	int32_t t68 = 1722;

	t68 = (x285==((x286/x287)/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 32LLU;
	int8_t x291 = 2;
	int32_t x292 = -13;
	volatile int32_t t69 = 34816983;

	t69 = (x289==((x290/x291)/x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 8991;
	volatile int16_t x298 = 9934;
	volatile int32_t t70 = 324530;

	t70 = (x297==((x298/x299)/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t t71 = 8523047;

	t71 = (x301==((x302/x303)/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 13U;
	static int8_t x310 = 1;
	int16_t x311 = -15217;
	int8_t x312 = INT8_MAX;
	volatile int32_t t72 = -14502;

	t72 = (x309==((x310/x311)/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x314 = INT16_MIN;
	int64_t x316 = 2687939LL;
	volatile int32_t t73 = 6;

	t73 = (x313==((x314/x315)/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x317 = 19;
	uint64_t x318 = 22596747LLU;
	static int8_t x319 = -1;
	volatile int32_t t74 = -613188;

	t74 = (x317==((x318/x319)/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x321 = 963551366U;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 463269909LLU;
	static int32_t x324 = INT32_MIN;

	t75 = (x321==((x322/x323)/x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	uint64_t x327 = 3230LLU;
	int32_t x328 = INT32_MAX;
	int32_t t76 = -554686;

	t76 = (x325==((x326/x327)/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -26;
	uint32_t x330 = 2U;
	static volatile uint16_t x331 = UINT16_MAX;
	uint64_t x332 = UINT64_MAX;
	int32_t t77 = 22;

	t77 = (x329==((x330/x331)/x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = 91U;
	volatile uint16_t x334 = UINT16_MAX;
	static int16_t x336 = -66;
	int32_t t78 = 246;

	t78 = (x333==((x334/x335)/x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MAX;
	static volatile uint32_t x338 = 0U;
	static volatile int32_t t79 = 64;

	t79 = (x337==((x338/x339)/x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	volatile int16_t x342 = INT16_MAX;
	int16_t x343 = -244;
	int32_t t80 = 1;

	t80 = (x341==((x342/x343)/x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x347 = 1;
	int32_t x348 = -944;
	static volatile int32_t t81 = -14180;

	t81 = (x345==((x346/x347)/x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x350 = INT16_MAX;
	int16_t x351 = -1;
	static int16_t x352 = -1;

	t82 = (x349==((x350/x351)/x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x354 = -3;
	static uint16_t x355 = 61U;
	int32_t x356 = -1;
	int32_t t83 = 4;

	t83 = (x353==((x354/x355)/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x357 = INT32_MAX;
	uint8_t x359 = 11U;
	static volatile int32_t t84 = 12603770;

	t84 = (x357==((x358/x359)/x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x361 = UINT16_MAX;
	static int16_t x363 = -3452;
	uint8_t x364 = UINT8_MAX;
	int32_t t85 = 313;

	t85 = (x361==((x362/x363)/x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	int16_t x367 = INT16_MAX;
	volatile uint16_t x368 = 21389U;
	int32_t t86 = -56919378;

	t86 = (x365==((x366/x367)/x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 398U;
	volatile int8_t x370 = INT8_MAX;
	uint16_t x371 = UINT16_MAX;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t87 = -369;

	t87 = (x369==((x370/x371)/x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 24575005395LLU;
	uint64_t x374 = 46968183LLU;
	volatile int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MAX;
	int32_t t88 = -19;

	t88 = (x373==((x374/x375)/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MAX;
	static volatile uint16_t x378 = UINT16_MAX;
	int32_t x379 = INT32_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t89 = -84856676;

	t89 = (x377==((x378/x379)/x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint16_t x382 = 13U;
	static uint32_t x383 = 34486747U;
	int64_t x384 = 440620379003290LL;
	volatile int32_t t90 = 21149;

	t90 = (x381==((x382/x383)/x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x385 = 704U;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = INT8_MAX;
	static int32_t t91 = -28473;

	t91 = (x385==((x386/x387)/x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MAX;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = INT16_MAX;
	int32_t t92 = 23182213;

	t92 = (x389==((x390/x391)/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x395 = 11679635LLU;
	uint16_t x396 = 25U;
	volatile int32_t t93 = -27701639;

	t93 = (x393==((x394/x395)/x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = -2977166212221102205LL;
	volatile uint16_t x399 = UINT16_MAX;
	static uint8_t x400 = UINT8_MAX;

	t94 = (x397==((x398/x399)/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x402 = 462U;
	uint32_t x403 = UINT32_MAX;
	static int8_t x404 = INT8_MIN;
	int32_t t95 = -5638360;

	t95 = (x401==((x402/x403)/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	uint64_t x406 = 1610021221581LLU;
	uint8_t x407 = 6U;
	static uint32_t x408 = 15354U;

	t96 = (x405==((x406/x407)/x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 2U;
	int16_t x410 = -41;
	volatile int32_t t97 = -78;

	t97 = (x409==((x410/x411)/x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x413 = 72LLU;
	static volatile int32_t x416 = INT32_MAX;
	volatile int32_t t98 = 123798067;

	t98 = (x413==((x414/x415)/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = UINT16_MAX;
	static int64_t x418 = -1LL;
	int16_t x420 = -1;
	volatile int32_t t99 = 23529;

	t99 = (x417==((x418/x419)/x420));

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

