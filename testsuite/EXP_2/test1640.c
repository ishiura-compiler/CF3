#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
static uint32_t t2 = 3241U;
uint64_t x17 = 91LLU;
int8_t x18 = 3;
static int16_t x21 = -1;
int8_t x25 = INT8_MIN;
volatile uint32_t x29 = 25402967U;
volatile int32_t t8 = 194160706;
int64_t x38 = -1LL;
static volatile int32_t t9 = 4118;
static int32_t x42 = 1;
int8_t x51 = INT8_MIN;
int8_t x52 = 0;
int32_t t12 = 9477460;
uint32_t x56 = 213U;
static volatile int64_t x59 = INT64_MAX;
uint32_t t15 = 30169U;
volatile int64_t x67 = -35462LL;
int16_t x71 = 2;
volatile uint8_t x77 = 0U;
uint64_t x89 = 1407041203LLU;
int64_t x90 = INT64_MIN;
int64_t x97 = -1LL;
volatile int32_t x102 = 74;
uint32_t x106 = UINT32_MAX;
int32_t x111 = 2098166;
int32_t t26 = 0;
uint16_t x123 = 410U;
volatile int32_t t27 = 971;
uint32_t x128 = 108451U;
volatile uint8_t x145 = 3U;
uint32_t x149 = 2020U;
int16_t x150 = INT16_MAX;
uint8_t x156 = 104U;
volatile int64_t x161 = -335080884LL;
volatile uint8_t x163 = 6U;
static int16_t x164 = -1;
static int16_t x175 = INT16_MIN;
static volatile uint32_t t36 = 184913580U;
uint64_t x179 = UINT64_MAX;
int64_t x191 = INT64_MIN;
uint8_t x201 = UINT8_MAX;
static uint32_t x210 = 625U;
int64_t x225 = -1LL;
int8_t x227 = 1;
volatile uint64_t x232 = 63688834893260204LLU;
static int8_t x237 = INT8_MAX;
int16_t x238 = -13082;
uint8_t x245 = 7U;
static volatile int32_t t52 = -12;
uint16_t x250 = UINT16_MAX;
static int32_t t53 = -20271;
volatile int32_t t55 = 967089783;
uint64_t x267 = 2116509897580LLU;
int32_t t57 = 107543;
uint16_t x269 = UINT16_MAX;
uint32_t x276 = 285U;
uint64_t t61 = 1144604437779195466LLU;
volatile int64_t x287 = INT64_MIN;
volatile int32_t x298 = -1;
static int32_t t66 = -887342;
static uint64_t x306 = 2865420658695312LLU;
int16_t x336 = INT16_MIN;
uint8_t x338 = 14U;
uint64_t t74 = 519LLU;
int8_t x351 = INT8_MIN;
static int64_t x356 = INT64_MAX;
static volatile int8_t x363 = INT8_MAX;
static volatile int32_t t79 = 384;
volatile int64_t x367 = -1LL;
int32_t t80 = -720;
volatile int64_t x378 = INT64_MAX;
static int16_t x383 = INT16_MIN;
static int32_t t83 = 2;
uint16_t x387 = 3042U;
int16_t x412 = INT16_MIN;
volatile int32_t x420 = -51200243;
int32_t t90 = -45812431;
int32_t x427 = INT32_MIN;
int8_t x428 = -1;
uint64_t x429 = 147543LLU;
static uint16_t x455 = 68U;
uint8_t x456 = 11U;
volatile int16_t x471 = INT16_MIN;
uint64_t x472 = 167LLU;
uint64_t t98 = 1925130106629982512LLU;
uint64_t x475 = 15LLU;
int32_t t99 = -701;


void f0(void) {
	volatile int64_t x1 = 27649799569LL;
	int8_t x2 = INT8_MIN;
	volatile int16_t x3 = INT16_MIN;
	int64_t x4 = 0LL;
	static volatile int64_t t0 = -2740801327137LL;

	t0 = ((x1<=(x2<=x3))-x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = -1LL;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t1 = -55074721;

	t1 = ((x5<=(x6<=x7))-x8);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x10 = 201427549496LLU;
	uint16_t x11 = 5737U;

	t2 = ((x9<=(x10<=x11))-x12);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	static int32_t x14 = -1;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = 6;
	int32_t t3 = -1;

	t3 = ((x13<=(x14<=x15))-x16);

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -5375965;

	t4 = ((x17<=(x18<=x19))-x20);

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = 114U;
	uint8_t x23 = 13U;
	uint16_t x24 = 13U;
	static volatile int32_t t5 = -500;

	t5 = ((x21<=(x22<=x23))-x24);

	if (t5 != -12) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static int32_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 1010U;

	t6 = ((x25<=(x26<=x27))-x28);

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	static volatile int8_t x32 = 2;
	volatile int32_t t7 = -81726943;

	t7 = ((x29<=(x30<=x31))-x32);

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	volatile int16_t x34 = INT16_MIN;
	int32_t x35 = 3783438;
	uint16_t x36 = 0U;

	t8 = ((x33<=(x34<=x35))-x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 1U;
	uint16_t x39 = 5674U;
	static uint8_t x40 = UINT8_MAX;

	t9 = ((x37<=(x38<=x39))-x40);

	if (t9 != -254) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 86612951U;
	static int32_t x43 = -84590;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 1008282755370741LL;

	t10 = ((x41<=(x42<=x43))-x44);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 26;
	uint64_t x46 = 4020229099248141169LLU;
	volatile int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 4750;

	t11 = ((x45<=(x46<=x47))-x48);

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;

	t12 = ((x49<=(x50<=x51))-x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	int32_t x55 = -53;
	volatile uint32_t t13 = 27102U;

	t13 = ((x53<=(x54<=x55))-x56);

	if (t13 != 4294967084U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -16094534LL;
	int32_t x58 = INT32_MIN;
	uint32_t x60 = 5672934U;
	volatile uint32_t t14 = 159375429U;

	t14 = ((x57<=(x58<=x59))-x60);

	if (t14 != 4289294363U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = 470233449U;
	int64_t x62 = -489517046597LL;
	uint16_t x63 = 6406U;
	uint32_t x64 = 919745039U;

	t15 = ((x61<=(x62<=x63))-x64);

	if (t15 != 3375222257U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	uint64_t x68 = 815633570026519LLU;
	volatile uint64_t t16 = 7648350078299875LLU;

	t16 = ((x65<=(x66<=x67))-x68);

	if (t16 != 18445928440139525098LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 805U;
	uint8_t x70 = 85U;
	int16_t x72 = 72;
	volatile int32_t t17 = -735684;

	t17 = ((x69<=(x70<=x71))-x72);

	if (t17 != -72) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x78 = 29U;
	volatile uint32_t x79 = 5U;
	int16_t x80 = -1;
	int32_t t18 = -796523;

	t18 = ((x77<=(x78<=x79))-x80);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x81 = -1;
	uint16_t x82 = 2241U;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t19 = -105184;

	t19 = ((x81<=(x82<=x83))-x84);

	if (t19 != -126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x91 = INT32_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	volatile int32_t t20 = -93514873;

	t20 = ((x89<=(x90<=x91))-x92);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x98 = INT32_MIN;
	volatile uint8_t x99 = 3U;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t21 = -458054415;

	t21 = ((x97<=(x98<=x99))-x100);

	if (t21 != -65534) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 230U;
	int8_t x103 = INT8_MIN;
	static uint32_t x104 = 242481U;
	uint32_t t22 = 327U;

	t22 = ((x101<=(x102<=x103))-x104);

	if (t22 != 4294724815U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x105 = -1;
	static uint32_t x107 = 8273375U;
	volatile uint32_t x108 = UINT32_MAX;
	uint32_t t23 = 241893848U;

	t23 = ((x105<=(x106<=x107))-x108);

	if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = -150744113853798739LL;
	volatile uint64_t x112 = 13LLU;
	uint64_t t24 = 1LLU;

	t24 = ((x109<=(x110<=x111))-x112);

	if (t24 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile uint16_t x114 = 0U;
	uint32_t x115 = 17U;
	volatile int8_t x116 = INT8_MIN;
	int32_t t25 = -2023;

	t25 = ((x113<=(x114<=x115))-x116);

	if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x117 = -1LL;
	volatile uint64_t x118 = 721542LLU;
	static int16_t x119 = INT16_MIN;
	int16_t x120 = -1;

	t26 = ((x117<=(x118<=x119))-x120);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 708U;
	uint16_t x122 = UINT16_MAX;
	int8_t x124 = -1;

	t27 = ((x121<=(x122<=x123))-x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MAX;
	static volatile int64_t x127 = -11061082887LL;
	volatile uint32_t t28 = 229305454U;

	t28 = ((x125<=(x126<=x127))-x128);

	if (t28 != 4294858846U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	static volatile uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	static volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t29 = 470488;

	t29 = ((x133<=(x134<=x135))-x136);

	if (t29 != -254) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x146 = 12U;
	uint32_t x147 = UINT32_MAX;
	static int64_t x148 = 21317655LL;
	int64_t t30 = -1670181LL;

	t30 = ((x145<=(x146<=x147))-x148);

	if (t30 != -21317655LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x151 = 15U;
	volatile int64_t x152 = -1LL;
	int64_t t31 = -16943LL;

	t31 = ((x149<=(x150<=x151))-x152);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = -1;
	uint64_t x155 = 2LLU;
	volatile int32_t t32 = -204466;

	t32 = ((x153<=(x154<=x155))-x156);

	if (t32 != -104) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = 49;
	static volatile int32_t x158 = -702483804;
	int32_t x159 = -115564;
	int32_t x160 = 2188;
	static int32_t t33 = -525;

	t33 = ((x157<=(x158<=x159))-x160);

	if (t33 != -2188) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x162 = INT64_MIN;
	volatile int32_t t34 = 99842227;

	t34 = ((x161<=(x162<=x163))-x164);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x165 = 7184021U;
	static uint32_t x166 = 302583U;
	int16_t x167 = INT16_MIN;
	int16_t x168 = -56;
	volatile int32_t t35 = 402301;

	t35 = ((x165<=(x166<=x167))-x168);

	if (t35 != 56) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 27U;
	static int32_t x174 = 65331;
	static uint32_t x176 = 1037809523U;

	t36 = ((x173<=(x174<=x175))-x176);

	if (t36 != 3257157773U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MIN;
	static int16_t x180 = -10869;
	volatile int32_t t37 = -10;

	t37 = ((x177<=(x178<=x179))-x180);

	if (t37 != 10869) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = 6266;
	int32_t x183 = INT32_MAX;
	int8_t x184 = 2;
	volatile int32_t t38 = 1898;

	t38 = ((x181<=(x182<=x183))-x184);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = 1;
	int16_t x192 = INT16_MAX;
	static int32_t t39 = -223;

	t39 = ((x189<=(x190<=x191))-x192);

	if (t39 != -32766) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x193 = 563296477LLU;
	uint64_t x194 = 1220298LLU;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 11637904781LLU;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x193<=(x194<=x195))-x196);

	if (t40 != 18446744062071646835LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x197 = UINT8_MAX;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MIN;
	static int16_t x200 = -2;
	volatile int32_t t41 = 50069;

	t41 = ((x197<=(x198<=x199))-x200);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x202 = 13U;
	int8_t x203 = INT8_MIN;
	volatile int16_t x204 = 1;
	static volatile int32_t t42 = 787307;

	t42 = ((x201<=(x202<=x203))-x204);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x209 = 13U;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t43 = 1552192U;

	t43 = ((x209<=(x210<=x211))-x212);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MAX;
	static int16_t x214 = -52;
	static int64_t x215 = INT64_MIN;
	uint32_t x216 = 3656238U;
	static uint32_t t44 = 3474494U;

	t44 = ((x213<=(x214<=x215))-x216);

	if (t44 != 4291311058U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MAX;
	static uint16_t x220 = UINT16_MAX;
	static int32_t t45 = -402387717;

	t45 = ((x217<=(x218<=x219))-x220);

	if (t45 != -65534) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x221 = 0U;
	int64_t x222 = -1LL;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t46 = 119168;

	t46 = ((x221<=(x222<=x223))-x224);

	if (t46 != 129) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x226 = -126LL;
	static uint8_t x228 = UINT8_MAX;
	int32_t t47 = -149295;

	t47 = ((x225<=(x226<=x227))-x228);

	if (t47 != -254) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x229 = 10664U;
	int64_t x230 = -9605LL;
	volatile uint8_t x231 = 7U;
	uint64_t t48 = 13420LLU;

	t48 = ((x229<=(x230<=x231))-x232);

	if (t48 != 18383055238816291412LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x233 = INT16_MIN;
	volatile int8_t x234 = -1;
	volatile int16_t x235 = -3967;
	volatile int32_t x236 = 92080;
	int32_t t49 = -13734242;

	t49 = ((x233<=(x234<=x235))-x236);

	if (t49 != -92079) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x239 = -1LL;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t50 = -1612;

	t50 = ((x237<=(x238<=x239))-x240);

	if (t50 != -65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x241 = 733768285469773LLU;
	int64_t x242 = -7LL;
	int64_t x243 = -1LL;
	int8_t x244 = -10;
	int32_t t51 = 29380481;

	t51 = ((x241<=(x242<=x243))-x244);

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x246 = INT8_MAX;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = 1;

	t52 = ((x245<=(x246<=x247))-x248);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x249 = 59594634636429LLU;
	volatile uint64_t x251 = 123LLU;
	int32_t x252 = -11464968;

	t53 = ((x249<=(x250<=x251))-x252);

	if (t53 != 11464968) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 364187264U;
	int64_t x254 = -843704LL;
	volatile int16_t x255 = -1;
	static int16_t x256 = -1;
	int32_t t54 = 7627;

	t54 = ((x253<=(x254<=x255))-x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x257 = 784385U;
	uint8_t x258 = 14U;
	uint8_t x259 = UINT8_MAX;
	uint8_t x260 = UINT8_MAX;

	t55 = ((x257<=(x258<=x259))-x260);

	if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x261 = INT16_MAX;
	volatile int32_t x262 = INT32_MIN;
	uint32_t x263 = 973322U;
	volatile uint16_t x264 = 57U;
	int32_t t56 = 1;

	t56 = ((x261<=(x262<=x263))-x264);

	if (t56 != -57) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x265 = -2576;
	int16_t x266 = 4208;
	int16_t x268 = -4979;

	t57 = ((x265<=(x266<=x267))-x268);

	if (t57 != 4980) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = -1;
	static uint8_t x272 = 118U;
	int32_t t58 = -17211;

	t58 = ((x269<=(x270<=x271))-x272);

	if (t58 != -118) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -178428;
	int8_t x274 = INT8_MIN;
	static int8_t x275 = -22;
	static volatile uint32_t t59 = 1U;

	t59 = ((x273<=(x274<=x275))-x276);

	if (t59 != 4294967012U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x277 = 140930LLU;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = 29808393947583843LL;
	int64_t x280 = INT64_MAX;
	int64_t t60 = 118760425LL;

	t60 = ((x277<=(x278<=x279))-x280);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MIN;
	volatile int16_t x282 = INT16_MIN;
	uint16_t x283 = UINT16_MAX;
	static volatile uint64_t x284 = 1486148LLU;

	t61 = ((x281<=(x282<=x283))-x284);

	if (t61 != 18446744073708065469LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MAX;
	uint8_t x288 = 56U;
	int32_t t62 = -65432086;

	t62 = ((x285<=(x286<=x287))-x288);

	if (t62 != -56) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = -66545442;
	uint32_t x290 = 41507412U;
	static uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MAX;
	volatile int32_t t63 = -388761;

	t63 = ((x289<=(x290<=x291))-x292);

	if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = 1LL;
	int64_t x294 = 50018142621334LL;
	int32_t x295 = 41897;
	int32_t x296 = 55;
	volatile int32_t t64 = 5577;

	t64 = ((x293<=(x294<=x295))-x296);

	if (t64 != -55) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = 822U;
	uint16_t x299 = 16U;
	uint32_t x300 = 490545291U;
	volatile uint32_t t65 = 3179U;

	t65 = ((x297<=(x298<=x299))-x300);

	if (t65 != 3804422005U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	volatile uint16_t x304 = UINT16_MAX;

	t66 = ((x301<=(x302<=x303))-x304);

	if (t66 != -65534) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x305 = 27625376U;
	static int16_t x307 = INT16_MIN;
	uint16_t x308 = 2U;
	volatile int32_t t67 = -4779992;

	t67 = ((x305<=(x306<=x307))-x308);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MAX;
	int32_t t68 = 99546;

	t68 = ((x313<=(x314<=x315))-x316);

	if (t68 != -126) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = 4030399050503LLU;
	static uint8_t x318 = UINT8_MAX;
	static int8_t x319 = INT8_MIN;
	static uint32_t x320 = 54223U;
	uint32_t t69 = 586113738U;

	t69 = ((x317<=(x318<=x319))-x320);

	if (t69 != 4294913073U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x321 = INT8_MIN;
	uint8_t x322 = UINT8_MAX;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 951U;
	volatile uint32_t t70 = 15U;

	t70 = ((x321<=(x322<=x323))-x324);

	if (t70 != 4294966346U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MAX;
	static volatile uint16_t x332 = 14U;
	volatile int32_t t71 = -71045;

	t71 = ((x329<=(x330<=x331))-x332);

	if (t71 != -14) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x334 = 81U;
	uint8_t x335 = 11U;
	static volatile int32_t t72 = -13;

	t72 = ((x333<=(x334<=x335))-x336);

	if (t72 != 32769) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 63U;
	uint16_t x339 = 14U;
	int8_t x340 = -3;
	static int32_t t73 = 1893828;

	t73 = ((x337<=(x338<=x339))-x340);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x341 = -1;
	int64_t x342 = -1LL;
	uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 29587LLU;

	t74 = ((x341<=(x342<=x343))-x344);

	if (t74 != 18446744073709522030LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 24998550U;
	int16_t x346 = INT16_MIN;
	static volatile uint8_t x347 = 102U;
	volatile uint16_t x348 = 0U;
	volatile int32_t t75 = 822753159;

	t75 = ((x345<=(x346<=x347))-x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = INT8_MAX;
	static int16_t x350 = 3728;
	uint8_t x352 = 23U;
	int32_t t76 = 2467;

	t76 = ((x349<=(x350<=x351))-x352);

	if (t76 != -23) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -1;
	static volatile int64_t x354 = -495612LL;
	uint8_t x355 = UINT8_MAX;
	static int64_t t77 = 13610233LL;

	t77 = ((x353<=(x354<=x355))-x356);

	if (t77 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = 514241327172663115LLU;
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static int8_t x360 = -1;
	static int32_t t78 = 65011504;

	t78 = ((x357<=(x358<=x359))-x360);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	uint16_t x364 = UINT16_MAX;

	t79 = ((x361<=(x362<=x363))-x364);

	if (t79 != -65534) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x365 = UINT32_MAX;
	int64_t x366 = -1LL;
	uint16_t x368 = 7U;

	t80 = ((x365<=(x366<=x367))-x368);

	if (t80 != -7) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x373 = 102U;
	int8_t x374 = INT8_MAX;
	int16_t x375 = 125;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t81 = 0;

	t81 = ((x373<=(x374<=x375))-x376);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MIN;
	volatile int64_t x379 = INT64_MIN;
	int64_t x380 = -1LL;
	volatile int64_t t82 = -1987712159822LL;

	t82 = ((x377<=(x378<=x379))-x380);

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x381 = 13U;
	int8_t x382 = 7;
	int16_t x384 = -1;

	t83 = ((x381<=(x382<=x383))-x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MIN;
	volatile int32_t x386 = INT32_MIN;
	int8_t x388 = -3;
	int32_t t84 = 77;

	t84 = ((x385<=(x386<=x387))-x388);

	if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = 132888906;
	static uint64_t x394 = 550243585678156LLU;
	int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MAX;
	static int64_t t85 = 41586LL;

	t85 = ((x393<=(x394<=x395))-x396);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x401 = INT16_MIN;
	int8_t x402 = 23;
	int16_t x403 = 68;
	int32_t x404 = -11;
	int32_t t86 = -105;

	t86 = ((x401<=(x402<=x403))-x404);

	if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x405 = -1LL;
	static uint8_t x406 = UINT8_MAX;
	uint64_t x407 = UINT64_MAX;
	static uint64_t x408 = 244LLU;
	volatile uint64_t t87 = 623423284157LLU;

	t87 = ((x405<=(x406<=x407))-x408);

	if (t87 != 18446744073709551373LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x409 = -91LL;
	volatile int8_t x410 = -1;
	int16_t x411 = 1;
	static volatile int32_t t88 = 1;

	t88 = ((x409<=(x410<=x411))-x412);

	if (t88 != 32769) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x413 = UINT32_MAX;
	static int32_t x414 = INT32_MIN;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = -10;
	volatile int32_t t89 = -1;

	t89 = ((x413<=(x414<=x415))-x416);

	if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = -1LL;
	volatile int16_t x418 = 1408;
	static int64_t x419 = -1LL;

	t90 = ((x417<=(x418<=x419))-x420);

	if (t90 != 51200244) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -1LL;
	volatile int8_t x422 = INT8_MAX;
	static int8_t x423 = 0;
	volatile int64_t x424 = -1LL;
	static volatile int64_t t91 = 42641LL;

	t91 = ((x421<=(x422<=x423))-x424);

	if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x425 = 27U;
	int64_t x426 = -1LL;
	int32_t t92 = -165;

	t92 = ((x425<=(x426<=x427))-x428);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x430 = UINT32_MAX;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t93 = -7;

	t93 = ((x429<=(x430<=x431))-x432);

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x437 = 696736788U;
	int64_t x438 = -1LL;
	int8_t x439 = -17;
	int8_t x440 = -45;
	static int32_t t94 = -56264271;

	t94 = ((x437<=(x438<=x439))-x440);

	if (t94 != 45) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x441 = INT16_MIN;
	static uint32_t x442 = 480228U;
	int8_t x443 = 1;
	int32_t x444 = -1;
	int32_t t95 = -221;

	t95 = ((x441<=(x442<=x443))-x444);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -46683519;
	static volatile uint8_t x454 = 5U;
	static volatile int32_t t96 = -151253948;

	t96 = ((x453<=(x454<=x455))-x456);

	if (t96 != -10) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x461 = 1;
	int16_t x462 = INT16_MAX;
	volatile int8_t x463 = INT8_MAX;
	uint16_t x464 = UINT16_MAX;
	static volatile int32_t t97 = 214535752;

	t97 = ((x461<=(x462<=x463))-x464);

	if (t97 != -65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x469 = INT8_MIN;
	static int16_t x470 = INT16_MIN;

	t98 = ((x469<=(x470<=x471))-x472);

	if (t98 != 18446744073709551450LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x473 = -59;
	int8_t x474 = INT8_MIN;
	volatile int8_t x476 = -3;

	t99 = ((x473<=(x474<=x475))-x476);

	if (t99 != 4) { NG(); } else { ; }
	
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

