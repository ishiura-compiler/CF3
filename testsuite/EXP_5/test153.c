#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -323028;
uint64_t x5 = UINT64_MAX;
uint32_t x10 = 93U;
int16_t x20 = INT16_MAX;
volatile int32_t t4 = 220;
volatile int16_t x21 = -5223;
volatile int32_t x24 = -1;
static volatile int8_t x38 = INT8_MAX;
int32_t x39 = INT32_MIN;
static int32_t x40 = INT32_MIN;
static int32_t x41 = INT32_MIN;
int8_t x42 = INT8_MIN;
static volatile int32_t t8 = 371;
int8_t x45 = -1;
uint16_t x50 = UINT16_MAX;
int16_t x52 = -1;
volatile int16_t x56 = 1;
int8_t x57 = 0;
int32_t t14 = 360397;
int8_t x72 = INT8_MAX;
static int32_t x74 = INT32_MIN;
uint8_t x78 = UINT8_MAX;
int16_t x80 = INT16_MIN;
int16_t x84 = -158;
static uint64_t x88 = UINT64_MAX;
int8_t x89 = INT8_MAX;
uint64_t x106 = 5LLU;
volatile int64_t x112 = INT64_MIN;
int32_t x115 = -1;
volatile int32_t t25 = 227;
int16_t x121 = -1;
volatile int32_t t27 = -11;
uint64_t x127 = 82608LLU;
int32_t x129 = INT32_MIN;
int32_t t29 = 163144;
int8_t x135 = INT8_MIN;
uint64_t x137 = 105986733545275880LLU;
uint8_t x140 = 3U;
volatile int32_t t33 = -57204083;
static uint16_t x149 = 4U;
uint8_t x178 = 0U;
uint32_t x182 = 199555494U;
int32_t t41 = 1749;
volatile int8_t x188 = -21;
int16_t x195 = 0;
volatile int32_t x203 = -116863;
static int32_t x204 = INT32_MIN;
volatile int32_t t48 = -457807;
volatile uint64_t x214 = 695102LLU;
int16_t x221 = -2436;
int64_t x225 = INT64_MIN;
volatile uint64_t x232 = 1705705441LLU;
uint32_t x235 = 0U;
volatile uint64_t x236 = 244LLU;
int16_t x242 = INT16_MIN;
volatile int32_t t55 = -2054329;
int8_t x247 = 1;
volatile int32_t x262 = 117;
uint64_t x267 = UINT64_MAX;
static uint64_t x268 = 5174951808607LLU;
volatile int32_t t60 = 821637;
uint32_t x269 = 50334788U;
int64_t x273 = INT64_MAX;
static int32_t x275 = 42348;
static uint8_t x276 = UINT8_MAX;
int64_t x279 = INT64_MAX;
volatile int32_t x280 = -17952835;
int8_t x285 = INT8_MIN;
volatile int64_t x292 = -59544630694451814LL;
uint8_t x301 = 1U;
uint8_t x302 = UINT8_MAX;
int8_t x307 = INT8_MIN;
int32_t t70 = 603087;
static int32_t t71 = 9847;
int16_t x319 = INT16_MIN;
volatile int32_t x329 = -12802;
int32_t x331 = INT32_MIN;
volatile int32_t t73 = -79;
uint8_t x337 = UINT8_MAX;
volatile int64_t x340 = -136684LL;
int8_t x343 = 1;
uint8_t x346 = 3U;
int32_t t78 = -14788;
static volatile uint8_t x357 = 0U;
uint64_t x367 = 3493006LLU;
volatile int32_t t82 = -15;
int32_t x374 = -12037;
int8_t x386 = -1;
int8_t x388 = INT8_MIN;
volatile int32_t x394 = 1719;
volatile int32_t x401 = INT32_MIN;
uint16_t x403 = 1U;
int8_t x404 = INT8_MIN;
volatile int32_t t91 = -7988037;
volatile uint32_t x416 = 6807701U;
int32_t x419 = 272;
volatile int32_t t96 = 444003042;
volatile uint16_t x440 = 369U;
volatile int8_t x442 = -2;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int32_t x2 = 1;
	int32_t x3 = -135280891;
	uint64_t x4 = 52778667450970777LLU;

	t0 = (x1<=((x2+x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MIN;
	int8_t x7 = 2;
	uint8_t x8 = 2U;
	int32_t t1 = -55250789;

	t1 = (x5<=((x6+x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 8;
	static int64_t x11 = -1LL;
	uint32_t x12 = 346U;
	volatile int32_t t2 = 274337;

	t2 = (x9<=((x10+x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -506;
	int64_t x14 = -135697601086363717LL;
	static int64_t x15 = -1322925847315LL;
	uint16_t x16 = 22247U;
	int32_t t3 = 3;

	t3 = (x13<=((x14+x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 3U;
	static uint16_t x18 = UINT16_MAX;
	volatile int16_t x19 = 998;

	t4 = (x17<=((x18+x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x22 = 1U;
	int8_t x23 = INT8_MIN;
	int32_t t5 = 99;

	t5 = (x21<=((x22+x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = 994;
	volatile int64_t x34 = 15763966781029LL;
	volatile int32_t x35 = INT32_MIN;
	static uint32_t x36 = 1U;
	static volatile int32_t t6 = -4589965;

	t6 = (x33<=((x34+x35)|x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	volatile int32_t t7 = -2856;

	t7 = (x37<=((x38+x39)|x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x43 = 1LLU;
	int8_t x44 = INT8_MAX;

	t8 = (x41<=((x42+x43)|x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x46 = INT8_MAX;
	volatile int32_t x47 = -503800100;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t9 = 54318;

	t9 = (x45<=((x46+x47)|x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 43;
	int16_t x51 = INT16_MIN;
	static int32_t t10 = 8622;

	t10 = (x49<=((x50+x51)|x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = UINT16_MAX;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 37U;
	int32_t t11 = -31;

	t11 = (x53<=((x54+x55)|x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = INT64_MAX;
	static uint64_t x59 = 1587LLU;
	uint64_t x60 = 3660360LLU;
	int32_t t12 = -5;

	t12 = (x57<=((x58+x59)|x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 2U;
	uint64_t x62 = 1530108LLU;
	int16_t x63 = -1;
	volatile int64_t x64 = INT64_MAX;
	volatile int32_t t13 = -172;

	t13 = (x61<=((x62+x63)|x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = 1;
	static int16_t x67 = INT16_MAX;
	uint8_t x68 = 1U;

	t14 = (x65<=((x66+x67)|x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 46U;
	int16_t x70 = 10;
	volatile int8_t x71 = -1;
	int32_t t15 = 5424;

	t15 = (x69<=((x70+x71)|x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 60678;
	uint8_t x75 = UINT8_MAX;
	volatile uint8_t x76 = 79U;
	volatile int32_t t16 = 931651383;

	t16 = (x73<=((x74+x75)|x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 308140182258LL;
	uint64_t x79 = 1640849509767861LLU;
	int32_t t17 = -5156434;

	t17 = (x77<=((x78+x79)|x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 3U;
	static int8_t x82 = -1;
	static uint32_t x83 = UINT32_MAX;
	volatile int32_t t18 = 0;

	t18 = (x81<=((x82+x83)|x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 9U;
	int64_t x86 = INT64_MAX;
	int32_t x87 = -1;
	static volatile int32_t t19 = -41358768;

	t19 = (x85<=((x86+x87)|x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x90 = 12729LLU;
	int16_t x91 = INT16_MIN;
	static int32_t x92 = 200420;
	int32_t t20 = 1906959;

	t20 = (x89<=((x90+x91)|x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -33;
	int16_t x98 = -290;
	int64_t x99 = INT64_MAX;
	static uint32_t x100 = 1082U;
	volatile int32_t t21 = -91;

	t21 = (x97<=((x98+x99)|x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = 51U;
	static int8_t x102 = 0;
	static int8_t x103 = INT8_MIN;
	volatile int16_t x104 = INT16_MIN;
	int32_t t22 = 54;

	t22 = (x101<=((x102+x103)|x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = 330192;

	t23 = (x105<=((x106+x107)|x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x109 = INT8_MIN;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = 39;
	volatile int32_t t24 = -9113;

	t24 = (x109<=((x110+x111)|x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 0U;
	uint64_t x114 = 433500132960451LLU;
	static uint32_t x116 = UINT32_MAX;

	t25 = (x113<=((x114+x115)|x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x117 = INT16_MAX;
	uint16_t x118 = UINT16_MAX;
	uint64_t x119 = 2231875129098925755LLU;
	int64_t x120 = 35609978071950LL;
	int32_t t26 = -98715891;

	t26 = (x117<=((x118+x119)|x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x122 = INT16_MIN;
	int32_t x123 = 0;
	int32_t x124 = 3;

	t27 = (x121<=((x122+x123)|x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x126 = 9499U;
	int64_t x128 = INT64_MIN;
	int32_t t28 = 0;

	t28 = (x125<=((x126+x127)|x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x130 = -32699;
	volatile int16_t x131 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;

	t29 = (x129<=((x130+x131)|x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = 3;
	int8_t x134 = INT8_MIN;
	volatile int16_t x136 = -1;
	volatile int32_t t30 = 230264771;

	t30 = (x133<=((x134+x135)|x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = -1LL;
	int32_t x139 = -1;
	static int32_t t31 = 1;

	t31 = (x137<=((x138+x139)|x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 12;
	int16_t x142 = -1;
	int16_t x143 = 9756;
	volatile int32_t x144 = -9971;
	volatile int32_t t32 = -2704;

	t32 = (x141<=((x142+x143)|x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = -1;
	int16_t x147 = 1;
	static volatile int8_t x148 = -1;

	t33 = (x145<=((x146+x147)|x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x150 = INT32_MIN;
	uint64_t x151 = 92854926001569500LLU;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t34 = 669216623;

	t34 = (x149<=((x150+x151)|x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 10744U;
	uint32_t x155 = 61412U;
	volatile int64_t x156 = -1LL;
	int32_t t35 = 317945;

	t35 = (x153<=((x154+x155)|x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -1;
	int16_t x158 = -1;
	static int32_t x159 = -1;
	static int64_t x160 = 289LL;
	int32_t t36 = -5195311;

	t36 = (x157<=((x158+x159)|x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	volatile uint16_t x162 = 0U;
	volatile int32_t x163 = -1;
	int32_t x164 = -1;
	int32_t t37 = -5554248;

	t37 = (x161<=((x162+x163)|x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 1U;
	uint64_t x170 = 8747632105187790LLU;
	uint16_t x171 = 24332U;
	static uint64_t x172 = 173212LLU;
	volatile int32_t t38 = -187;

	t38 = (x169<=((x170+x171)|x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	uint64_t x174 = 0LLU;
	volatile int32_t x175 = INT32_MAX;
	volatile int16_t x176 = INT16_MAX;
	int32_t t39 = -1;

	t39 = (x173<=((x174+x175)|x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = 2;
	static volatile uint32_t x179 = 7U;
	int16_t x180 = INT16_MAX;
	int32_t t40 = -3903;

	t40 = (x177<=((x178+x179)|x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -19;
	int16_t x183 = -223;
	int64_t x184 = INT64_MIN;

	t41 = (x181<=((x182+x183)|x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -5611355;
	int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MIN;
	volatile int32_t t42 = -18033;

	t42 = (x185<=((x186+x187)|x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = 1251261954095413LLU;
	uint64_t x190 = 165775193LLU;
	uint32_t x191 = 4207U;
	volatile uint16_t x192 = 7895U;
	static int32_t t43 = -4;

	t43 = (x189<=((x190+x191)|x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x193 = INT32_MIN;
	uint64_t x194 = 3558LLU;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t44 = 48;

	t44 = (x193<=((x194+x195)|x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int16_t x198 = -3;
	uint16_t x199 = 1U;
	static uint32_t x200 = 458701U;
	volatile int32_t t45 = -218720;

	t45 = (x197<=((x198+x199)|x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -1;
	volatile int8_t x202 = 32;
	volatile int32_t t46 = -45540;

	t46 = (x201<=((x202+x203)|x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = 568607;
	int64_t x206 = INT64_MAX;
	int64_t x207 = INT64_MIN;
	static int8_t x208 = INT8_MIN;
	int32_t t47 = -146922;

	t47 = (x205<=((x206+x207)|x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	volatile int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	int64_t x212 = -1LL;

	t48 = (x209<=((x210+x211)|x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	static volatile uint16_t x215 = UINT16_MAX;
	int64_t x216 = -1LL;
	int32_t t49 = -16619566;

	t49 = (x213<=((x214+x215)|x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 1U;
	int32_t x224 = INT32_MIN;
	static int32_t t50 = -772893;

	t50 = (x221<=((x222+x223)|x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x226 = 107;
	int64_t x227 = 6965515242467693LL;
	uint8_t x228 = 2U;
	volatile int32_t t51 = 43614480;

	t51 = (x225<=((x226+x227)|x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = 40;
	uint16_t x231 = UINT16_MAX;
	int32_t t52 = -4494999;

	t52 = (x229<=((x230+x231)|x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -2835LL;
	static int64_t x234 = INT64_MIN;
	int32_t t53 = -2871;

	t53 = (x233<=((x234+x235)|x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = 6474U;
	int64_t x238 = INT64_MIN;
	static volatile uint64_t x239 = 77910761077704LLU;
	int8_t x240 = -12;
	volatile int32_t t54 = -10845;

	t54 = (x237<=((x238+x239)|x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = UINT16_MAX;
	static int64_t x243 = -454801887LL;
	int8_t x244 = INT8_MIN;

	t55 = (x241<=((x242+x243)|x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x245 = INT16_MIN;
	uint8_t x246 = 8U;
	volatile int16_t x248 = -2;
	int32_t t56 = 139591;

	t56 = (x245<=((x246+x247)|x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 373032U;
	static volatile int8_t x250 = INT8_MAX;
	static uint64_t x251 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t57 = -50016;

	t57 = (x249<=((x250+x251)|x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = -1LL;
	static uint32_t x254 = 321067688U;
	static int8_t x255 = INT8_MAX;
	static int64_t x256 = -1LL;
	int32_t t58 = -39952;

	t58 = (x253<=((x254+x255)|x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = 25U;
	uint8_t x263 = 0U;
	static int32_t x264 = INT32_MIN;
	int32_t t59 = -24347;

	t59 = (x261<=((x262+x263)|x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x265 = 204LLU;
	volatile uint32_t x266 = 95703711U;

	t60 = (x265<=((x266+x267)|x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x270 = 7840596718LLU;
	int32_t x271 = -305;
	static int16_t x272 = -1;
	volatile int32_t t61 = -60157;

	t61 = (x269<=((x270+x271)|x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x274 = INT64_MIN;
	volatile int32_t t62 = -128816;

	t62 = (x273<=((x274+x275)|x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = 3;
	static volatile int32_t x278 = INT32_MIN;
	static int32_t t63 = -100121;

	t63 = (x277<=((x278+x279)|x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	int8_t x282 = INT8_MIN;
	static int8_t x283 = -1;
	uint32_t x284 = 35U;
	int32_t t64 = 1585153;

	t64 = (x281<=((x282+x283)|x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x286 = INT8_MAX;
	int64_t x287 = -54605244340LL;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t65 = 245736165;

	t65 = (x285<=((x286+x287)|x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = -1;
	volatile uint64_t x291 = UINT64_MAX;
	int32_t t66 = 704747;

	t66 = (x289<=((x290+x291)|x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	volatile uint8_t x295 = 0U;
	static uint16_t x296 = 14U;
	volatile int32_t t67 = -9;

	t67 = (x293<=((x294+x295)|x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x303 = 2U;
	volatile uint32_t x304 = UINT32_MAX;
	static int32_t t68 = 0;

	t68 = (x301<=((x302+x303)|x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MAX;
	int64_t x306 = -1LL;
	int64_t x308 = INT64_MIN;
	int32_t t69 = 12;

	t69 = (x305<=((x306+x307)|x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = 34;
	int16_t x310 = INT16_MAX;
	volatile int8_t x311 = INT8_MIN;
	volatile int16_t x312 = INT16_MIN;

	t70 = (x309<=((x310+x311)|x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x313 = -44395;
	int64_t x314 = 98948LL;
	int16_t x315 = INT16_MAX;
	static int16_t x316 = INT16_MIN;

	t71 = (x313<=((x314+x315)|x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = INT64_MAX;
	static int8_t x318 = -49;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t72 = 710;

	t72 = (x317<=((x318+x319)|x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x330 = 3U;
	static int16_t x332 = INT16_MIN;

	t73 = (x329<=((x330+x331)|x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = -1LL;
	volatile uint32_t x335 = 75221U;
	int8_t x336 = 1;
	static int32_t t74 = 451083527;

	t74 = (x333<=((x334+x335)|x336));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	int32_t t75 = 451153670;

	t75 = (x337<=((x338+x339)|x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x341 = 242681917LLU;
	volatile int32_t x342 = INT32_MIN;
	static uint64_t x344 = 39LLU;
	volatile int32_t t76 = 3467;

	t76 = (x341<=((x342+x343)|x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x345 = -1;
	int16_t x347 = INT16_MIN;
	int8_t x348 = -1;
	int32_t t77 = 26914;

	t77 = (x345<=((x346+x347)|x348));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x349 = 0LL;
	uint8_t x350 = 0U;
	static uint16_t x351 = 65U;
	int32_t x352 = -1;

	t78 = (x349<=((x350+x351)|x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = 113319132;
	static uint16_t x354 = UINT16_MAX;
	static volatile int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = 26930941934659LLU;
	volatile int32_t t79 = 113742;

	t79 = (x353<=((x354+x355)|x356));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x358 = 62U;
	static int8_t x359 = INT8_MIN;
	uint32_t x360 = 9U;
	static int32_t t80 = -268251555;

	t80 = (x357<=((x358+x359)|x360));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x365 = UINT64_MAX;
	int16_t x366 = -1;
	int16_t x368 = 0;
	volatile int32_t t81 = 104230;

	t81 = (x365<=((x366+x367)|x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = UINT64_MAX;
	static int64_t x370 = -1LL;
	int8_t x371 = -13;
	int32_t x372 = -7867;

	t82 = (x369<=((x370+x371)|x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	int8_t x375 = -37;
	volatile uint8_t x376 = 1U;
	volatile int32_t t83 = -163265;

	t83 = (x373<=((x374+x375)|x376));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x377 = INT32_MIN;
	int16_t x378 = -1;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	volatile int32_t t84 = 44391386;

	t84 = (x377<=((x378+x379)|x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = -6429890;
	static int16_t x382 = 1;
	int16_t x383 = 1;
	static int16_t x384 = 8170;
	int32_t t85 = 1;

	t85 = (x381<=((x382+x383)|x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = UINT32_MAX;
	static uint16_t x387 = UINT16_MAX;
	volatile int32_t t86 = -5;

	t86 = (x385<=((x386+x387)|x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = -36;
	static uint16_t x391 = 1357U;
	static int32_t x392 = INT32_MAX;
	int32_t t87 = -102648;

	t87 = (x389<=((x390+x391)|x392));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = UINT8_MAX;
	int64_t x395 = 5938829LL;
	uint64_t x396 = 2939174714724LLU;
	int32_t t88 = -1026359;

	t88 = (x393<=((x394+x395)|x396));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x397 = -1;
	static volatile int32_t x398 = INT32_MAX;
	volatile int32_t x399 = INT32_MIN;
	static uint16_t x400 = 0U;
	volatile int32_t t89 = -460;

	t89 = (x397<=((x398+x399)|x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x402 = INT8_MIN;
	volatile int32_t t90 = 50888847;

	t90 = (x401<=((x402+x403)|x404));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = UINT16_MAX;
	static volatile int8_t x407 = INT8_MIN;
	volatile int8_t x408 = -2;

	t91 = (x405<=((x406+x407)|x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	uint16_t x410 = 1U;
	int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MAX;
	static int32_t t92 = 1315560;

	t92 = (x409<=((x410+x411)|x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MAX;
	uint64_t x415 = UINT64_MAX;
	int32_t t93 = 4648491;

	t93 = (x413<=((x414+x415)|x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MIN;
	volatile int32_t x418 = -915830476;
	int32_t x420 = INT32_MIN;
	volatile int32_t t94 = -146129;

	t94 = (x417<=((x418+x419)|x420));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x421 = INT16_MAX;
	int32_t x422 = -1;
	int16_t x423 = 1;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t95 = 702942;

	t95 = (x421<=((x422+x423)|x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = 161U;
	uint8_t x426 = 0U;
	static int32_t x427 = 2560;
	int16_t x428 = INT16_MIN;

	t96 = (x425<=((x426+x427)|x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x433 = 717LL;
	uint16_t x434 = 189U;
	uint16_t x435 = 27U;
	uint32_t x436 = 9574971U;
	int32_t t97 = 12328733;

	t97 = (x433<=((x434+x435)|x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x437 = INT32_MIN;
	static int32_t x438 = 11;
	uint8_t x439 = 54U;
	volatile int32_t t98 = 293;

	t98 = (x437<=((x438+x439)|x440));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x441 = UINT8_MAX;
	uint16_t x443 = UINT16_MAX;
	static volatile int16_t x444 = -7;
	volatile int32_t t99 = -352;

	t99 = (x441<=((x442+x443)|x444));

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

