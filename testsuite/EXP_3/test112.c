#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = INT16_MAX;
volatile int32_t t3 = 49;
volatile int32_t t4 = -541;
static int8_t x29 = 1;
int64_t x31 = 3445254089124716LL;
static int32_t t6 = 31904;
static uint8_t x33 = 4U;
uint64_t x36 = 117577LLU;
int16_t x40 = INT16_MAX;
int16_t x45 = 4926;
int8_t x55 = 7;
static volatile uint32_t x71 = 1461519841U;
uint8_t x72 = 1U;
int64_t x74 = 123632204562LL;
volatile int32_t x82 = 445676;
int64_t x84 = INT64_MAX;
static int64_t x86 = -8001679427544LL;
int8_t x88 = -1;
static uint32_t x90 = UINT32_MAX;
static int32_t t19 = 442674581;
int64_t x99 = INT64_MIN;
uint8_t x108 = UINT8_MAX;
static volatile uint16_t x118 = 14U;
int32_t x127 = 982942491;
uint16_t x128 = 862U;
int8_t x132 = INT8_MAX;
volatile int32_t t28 = -4;
volatile int8_t x142 = INT8_MIN;
uint32_t x143 = 0U;
volatile int32_t t35 = 435;
static int8_t x170 = 6;
int64_t x179 = 3LL;
static uint32_t x181 = 35434U;
static uint8_t x182 = 30U;
int32_t t40 = 448;
volatile uint64_t x185 = 67330838459LLU;
int32_t t41 = -1;
int8_t x189 = -1;
int64_t x192 = -1LL;
uint64_t x198 = UINT64_MAX;
static uint8_t x199 = 1U;
volatile int32_t t43 = 0;
static volatile int8_t x202 = INT8_MIN;
volatile int32_t t46 = 2;
static int32_t x213 = 412876781;
int64_t x225 = INT64_MIN;
int64_t x236 = INT64_MIN;
int64_t x237 = INT64_MAX;
int16_t x239 = -1;
static uint32_t x241 = UINT32_MAX;
int64_t x242 = -42490566LL;
int32_t t54 = 147;
static volatile int32_t x257 = INT32_MIN;
int64_t x258 = -1480100LL;
int16_t x264 = INT16_MAX;
int32_t t56 = 43683;
int16_t x274 = -7342;
static volatile uint64_t x275 = 2217612897699LLU;
int16_t x276 = INT16_MAX;
uint16_t x286 = UINT16_MAX;
static int8_t x291 = INT8_MIN;
uint16_t x293 = UINT16_MAX;
static int16_t x295 = 1129;
static int32_t x305 = -1;
int16_t x307 = -3;
uint32_t x309 = 1624U;
static volatile int32_t t65 = 1860;
uint8_t x316 = 1U;
uint16_t x319 = 465U;
int8_t x330 = -1;
volatile int32_t t69 = 12684278;
int32_t x334 = 247789;
uint8_t x336 = 20U;
volatile int32_t t70 = -6;
static int64_t x349 = 8121391200LL;
static int16_t x354 = -1;
volatile int32_t t75 = -771;
int32_t t77 = 999921;
uint64_t x373 = 200716937LLU;
int32_t t79 = -192865;
static uint32_t x377 = UINT32_MAX;
volatile int32_t t80 = 6;
int32_t t81 = 83790;
int32_t x385 = -113470;
uint16_t x387 = 528U;
static int32_t t82 = -1;
uint64_t x398 = 115798623LLU;
int64_t x403 = 16305550933LL;
volatile int32_t t87 = 55514933;
static volatile int16_t x417 = INT16_MAX;
volatile int16_t x426 = -3208;
int32_t x430 = -152405606;
volatile int16_t x431 = INT16_MIN;
static uint16_t x433 = UINT16_MAX;
static int8_t x442 = INT8_MIN;
static uint64_t x455 = 356LLU;
volatile int32_t t98 = 50492680;


void f0(void) {
	int16_t x1 = -1;
	int64_t x2 = INT64_MIN;
	static volatile int8_t x3 = INT8_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 0;

	t0 = ((x1<x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 33440LLU;
	static int64_t x7 = INT64_MIN;
	uint16_t x8 = 131U;
	volatile int32_t t1 = 638;

	t1 = ((x5<x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	uint64_t x16 = 194770663800814701LLU;
	volatile int32_t t2 = 2014;

	t2 = ((x13<x14)==(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MIN;

	t3 = ((x17<x18)==(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 8U;
	int32_t x22 = -131657283;
	static uint64_t x23 = 264267699614LLU;
	int8_t x24 = INT8_MIN;

	t4 = ((x21<x22)==(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	static volatile int32_t x26 = INT32_MIN;
	uint16_t x27 = 1U;
	int8_t x28 = 6;
	volatile int32_t t5 = 197059;

	t5 = ((x25<x26)==(x27+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = -372649;
	static int16_t x32 = -1;

	t6 = ((x29<x30)==(x31+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x34 = 4U;
	int32_t x35 = 1344209;
	int32_t t7 = -6027617;

	t7 = ((x33<x34)==(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 23691LL;
	uint8_t x38 = 2U;
	uint8_t x39 = UINT8_MAX;
	volatile int32_t t8 = -22;

	t8 = ((x37<x38)==(x39+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t9 = 33644651;

	t9 = ((x45<x46)==(x47+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = 135223U;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = 267258;
	uint32_t x52 = 117606U;
	int32_t t10 = 14;

	t10 = ((x49<x50)==(x51+x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	int8_t x56 = -1;
	int32_t t11 = 1;

	t11 = ((x53<x54)==(x55+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	static volatile int64_t x58 = INT64_MAX;
	static int8_t x59 = 29;
	volatile int64_t x60 = -1LL;
	int32_t t12 = -147206;

	t12 = ((x57<x58)==(x59+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 10U;
	uint16_t x62 = UINT16_MAX;
	volatile int16_t x63 = -1;
	static int16_t x64 = 6;
	volatile int32_t t13 = 118132;

	t13 = ((x61<x62)==(x63+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = 5;
	int32_t x70 = INT32_MIN;
	int32_t t14 = -45276893;

	t14 = ((x69<x70)==(x71+x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	int16_t x76 = 46;
	volatile int32_t t15 = -227;

	t15 = ((x73<x74)==(x75+x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MIN;
	static int8_t x83 = -1;
	int32_t t16 = 3;

	t16 = ((x81<x82)==(x83+x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x85 = 94LLU;
	uint64_t x87 = UINT64_MAX;
	int32_t t17 = -20415602;

	t17 = ((x85<x86)==(x87+x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = 2079U;
	volatile int32_t t18 = 6;

	t18 = ((x89<x90)==(x91+x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x94 = -537242588;
	uint8_t x95 = 4U;
	uint16_t x96 = 0U;

	t19 = ((x93<x94)==(x95+x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	static int8_t x98 = INT8_MIN;
	static volatile int16_t x100 = 0;
	int32_t t20 = -1;

	t20 = ((x97<x98)==(x99+x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 0U;
	static uint32_t x102 = 5815742U;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = -630;
	int32_t t21 = 0;

	t21 = ((x101<x102)==(x103+x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -41;
	int64_t x106 = INT64_MIN;
	int8_t x107 = 3;
	volatile int32_t t22 = 111717817;

	t22 = ((x105<x106)==(x107+x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 64U;
	volatile int16_t x111 = -1;
	int32_t x112 = INT32_MAX;
	volatile int32_t t23 = -1005;

	t23 = ((x109<x110)==(x111+x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = 0LL;
	uint32_t x114 = 95228223U;
	volatile int8_t x115 = -1;
	int8_t x116 = INT8_MAX;
	int32_t t24 = -56297457;

	t24 = ((x113<x114)==(x115+x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 30130U;
	static int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t25 = -42250;

	t25 = ((x117<x118)==(x119+x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = 292;
	int8_t x122 = -15;
	uint8_t x123 = UINT8_MAX;
	static uint8_t x124 = UINT8_MAX;
	static int32_t t26 = 20798;

	t26 = ((x121<x122)==(x123+x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x125 = 7U;
	static int8_t x126 = 0;
	volatile int32_t t27 = -20847;

	t27 = ((x125<x126)==(x127+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x129 = -64191LL;
	static uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = -1LL;

	t28 = ((x129<x130)==(x131+x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MAX;
	volatile int64_t x136 = INT64_MIN;
	int32_t t29 = 1217108;

	t29 = ((x133<x134)==(x135+x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = 35;
	int8_t x139 = 10;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t30 = 81335956;

	t30 = ((x137<x138)==(x139+x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MAX;
	int64_t x144 = INT64_MAX;
	volatile int32_t t31 = -1;

	t31 = ((x141<x142)==(x143+x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MAX;
	int64_t x147 = 13119697099865327LL;
	int32_t x148 = 41859;
	static int32_t t32 = -61;

	t32 = ((x145<x146)==(x147+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = -220;
	static int16_t x151 = INT16_MIN;
	uint8_t x152 = UINT8_MAX;
	int32_t t33 = -110;

	t33 = ((x149<x150)==(x151+x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x153 = INT32_MIN;
	uint32_t x154 = 637771426U;
	uint16_t x155 = 1U;
	int32_t x156 = -464572;
	volatile int32_t t34 = -159508;

	t34 = ((x153<x154)==(x155+x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = 11;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MAX;
	volatile int64_t x164 = 16938LL;

	t35 = ((x161<x162)==(x163+x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x165 = INT8_MIN;
	volatile uint64_t x166 = 3114LLU;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = -1;
	int32_t t36 = 1016022151;

	t36 = ((x165<x166)==(x167+x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x169 = -1357;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = -1;
	volatile int32_t t37 = 6095;

	t37 = ((x169<x170)==(x171+x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MAX;
	static uint32_t x175 = UINT32_MAX;
	int32_t x176 = 418559;
	volatile int32_t t38 = 39903776;

	t38 = ((x173<x174)==(x175+x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = 29050681LLU;
	static volatile int32_t x180 = -1;
	int32_t t39 = -976577125;

	t39 = ((x177<x178)==(x179+x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x183 = -1LL;
	uint8_t x184 = 5U;

	t40 = ((x181<x182)==(x183+x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile uint16_t x188 = 17U;

	t41 = ((x185<x186)==(x187+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int32_t t42 = 14576146;

	t42 = ((x189<x190)==(x191+x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 0U;
	int32_t x200 = INT32_MIN;

	t43 = ((x197<x198)==(x199+x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = -1;
	uint32_t x203 = 18U;
	int64_t x204 = -32405625099463LL;
	int32_t t44 = 88;

	t44 = ((x201<x202)==(x203+x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = 0;
	int32_t x207 = -11;
	volatile uint16_t x208 = 1365U;
	volatile int32_t t45 = 632415;

	t45 = ((x205<x206)==(x207+x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x209 = INT16_MIN;
	int16_t x210 = 2260;
	int64_t x211 = -1LL;
	int8_t x212 = INT8_MAX;

	t46 = ((x209<x210)==(x211+x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x214 = INT32_MIN;
	static int16_t x215 = -13985;
	static uint16_t x216 = UINT16_MAX;
	static int32_t t47 = -563;

	t47 = ((x213<x214)==(x215+x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x217 = 0U;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	uint64_t x220 = UINT64_MAX;
	int32_t t48 = 98;

	t48 = ((x217<x218)==(x219+x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -8944173306829LL;
	static volatile uint64_t x223 = UINT64_MAX;
	volatile int32_t x224 = 291271;
	int32_t t49 = 11;

	t49 = ((x221<x222)==(x223+x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = 0;
	int8_t x228 = INT8_MIN;
	volatile int32_t t50 = -4035608;

	t50 = ((x225<x226)==(x227+x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x233 = 7;
	static uint16_t x234 = 2U;
	static uint32_t x235 = 1202714130U;
	int32_t t51 = -14691340;

	t51 = ((x233<x234)==(x235+x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x238 = 15U;
	int8_t x240 = 15;
	int32_t t52 = -96;

	t52 = ((x237<x238)==(x239+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x243 = INT64_MAX;
	int8_t x244 = -28;
	int32_t t53 = 1921;

	t53 = ((x241<x242)==(x243+x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 704U;
	static int32_t x254 = INT32_MIN;
	int8_t x255 = -6;
	uint64_t x256 = UINT64_MAX;

	t54 = ((x253<x254)==(x255+x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x259 = INT32_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t55 = 28;

	t55 = ((x257<x258)==(x259+x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	static int64_t x262 = INT64_MAX;
	uint64_t x263 = UINT64_MAX;

	t56 = ((x261<x262)==(x263+x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int32_t t57 = -2465378;

	t57 = ((x273<x274)==(x275+x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x277 = UINT16_MAX;
	int64_t x278 = 1431958651279860575LL;
	static volatile uint32_t x279 = 7701780U;
	int64_t x280 = INT64_MIN;
	int32_t t58 = -2113995;

	t58 = ((x277<x278)==(x279+x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x281 = 66877LLU;
	uint8_t x282 = 44U;
	int8_t x283 = INT8_MIN;
	int16_t x284 = -1;
	int32_t t59 = -20;

	t59 = ((x281<x282)==(x283+x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x285 = 1U;
	int8_t x287 = INT8_MIN;
	int64_t x288 = -60356541069LL;
	volatile int32_t t60 = -170243;

	t60 = ((x285<x286)==(x287+x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x289 = -1;
	volatile int8_t x290 = 15;
	int8_t x292 = INT8_MIN;
	int32_t t61 = -410;

	t61 = ((x289<x290)==(x291+x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x294 = UINT16_MAX;
	volatile uint32_t x296 = 171U;
	volatile int32_t t62 = -110069150;

	t62 = ((x293<x294)==(x295+x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x297 = 1457783418LLU;
	int64_t x298 = INT64_MAX;
	int64_t x299 = -546451008038251LL;
	static uint16_t x300 = 728U;
	static volatile int32_t t63 = -8301;

	t63 = ((x297<x298)==(x299+x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x306 = -1;
	int32_t x308 = 263;
	int32_t t64 = 410;

	t64 = ((x305<x306)==(x307+x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x310 = 0U;
	uint8_t x311 = 0U;
	int64_t x312 = INT64_MIN;

	t65 = ((x309<x310)==(x311+x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MIN;
	static int32_t t66 = -424044;

	t66 = ((x313<x314)==(x315+x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x317 = 14545U;
	uint64_t x318 = UINT64_MAX;
	volatile uint32_t x320 = 12688485U;
	int32_t t67 = -1015374;

	t67 = ((x317<x318)==(x319+x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x325 = UINT16_MAX;
	volatile uint16_t x326 = 6334U;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t68 = -5643;

	t68 = ((x325<x326)==(x327+x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = INT8_MIN;
	volatile uint32_t x331 = 117810941U;
	int16_t x332 = INT16_MIN;

	t69 = ((x329<x330)==(x331+x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x333 = -1LL;
	uint16_t x335 = 56U;

	t70 = ((x333<x334)==(x335+x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = 6711617937293LLU;
	int8_t x338 = -1;
	int32_t x339 = INT32_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t71 = 22107;

	t71 = ((x337<x338)==(x339+x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = 994745;
	uint32_t x347 = 1272670U;
	volatile uint64_t x348 = UINT64_MAX;
	static int32_t t72 = 196772;

	t72 = ((x345<x346)==(x347+x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x350 = 36;
	int64_t x351 = INT64_MIN;
	static int64_t x352 = 24LL;
	int32_t t73 = -22190171;

	t73 = ((x349<x350)==(x351+x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = INT8_MAX;
	uint64_t x355 = 406LLU;
	uint8_t x356 = 0U;
	volatile int32_t t74 = 888272;

	t74 = ((x353<x354)==(x355+x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = 9089U;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 2500298706735826LLU;
	static int64_t x360 = INT64_MIN;

	t75 = ((x357<x358)==(x359+x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	static int32_t x363 = INT32_MAX;
	volatile uint64_t x364 = 72760827514922800LLU;
	static int32_t t76 = -13;

	t76 = ((x361<x362)==(x363+x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MIN;
	static volatile uint16_t x367 = 2567U;
	int8_t x368 = 0;

	t77 = ((x365<x366)==(x367+x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	volatile int8_t x371 = -1;
	uint32_t x372 = 57564128U;
	volatile int32_t t78 = -265741530;

	t78 = ((x369<x370)==(x371+x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x374 = -972;
	uint64_t x375 = 0LLU;
	uint32_t x376 = 2U;

	t79 = ((x373<x374)==(x375+x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x378 = UINT32_MAX;
	int32_t x379 = -1;
	static uint8_t x380 = UINT8_MAX;

	t80 = ((x377<x378)==(x379+x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = 128;
	static uint32_t x382 = 229657601U;
	static int32_t x383 = -1;
	volatile int64_t x384 = INT64_MAX;

	t81 = ((x381<x382)==(x383+x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x386 = INT64_MIN;
	static uint8_t x388 = UINT8_MAX;

	t82 = ((x385<x386)==(x387+x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = INT8_MAX;
	int64_t x392 = 3LL;
	static int32_t t83 = -1934;

	t83 = ((x389<x390)==(x391+x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x393 = 62U;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = 3;
	int32_t t84 = -1;

	t84 = ((x393<x394)==(x395+x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x397 = -8;
	uint32_t x399 = 261504895U;
	int16_t x400 = INT16_MAX;
	volatile int32_t t85 = 499;

	t85 = ((x397<x398)==(x399+x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x401 = INT64_MAX;
	volatile uint32_t x402 = 710U;
	int16_t x404 = -1;
	int32_t t86 = 394576331;

	t86 = ((x401<x402)==(x403+x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x406 = 261480494U;
	uint32_t x407 = UINT32_MAX;
	static uint64_t x408 = 5775955051LLU;

	t87 = ((x405<x406)==(x407+x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = 704U;
	uint32_t x410 = 806049U;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t88 = -20024226;

	t88 = ((x409<x410)==(x411+x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	int8_t x420 = 1;
	volatile int32_t t89 = 0;

	t89 = ((x417<x418)==(x419+x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	volatile uint64_t x422 = 143116525976269223LLU;
	int16_t x423 = -869;
	static volatile int8_t x424 = -11;
	static int32_t t90 = 28;

	t90 = ((x421<x422)==(x423+x424));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x425 = -4900607;
	int16_t x427 = -6605;
	int32_t x428 = 7;
	volatile int32_t t91 = -5431460;

	t91 = ((x425<x426)==(x427+x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = 622782152U;
	uint8_t x432 = 95U;
	volatile int32_t t92 = 1;

	t92 = ((x429<x430)==(x431+x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x434 = UINT32_MAX;
	int32_t x435 = -1;
	static volatile int16_t x436 = -1706;
	volatile int32_t t93 = 204777271;

	t93 = ((x433<x434)==(x435+x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x437 = 11U;
	int32_t x438 = INT32_MIN;
	volatile uint64_t x439 = 360896LLU;
	volatile uint64_t x440 = 113975LLU;
	int32_t t94 = 10375;

	t94 = ((x437<x438)==(x439+x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x441 = 111U;
	static uint32_t x443 = 35851815U;
	uint64_t x444 = UINT64_MAX;
	static volatile int32_t t95 = -616;

	t95 = ((x441<x442)==(x443+x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MAX;
	int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MIN;
	static uint8_t x448 = UINT8_MAX;
	static int32_t t96 = 30599;

	t96 = ((x445<x446)==(x447+x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x449 = 56555LL;
	volatile int8_t x450 = -27;
	int64_t x451 = -41409LL;
	int16_t x452 = -6;
	volatile int32_t t97 = 4935967;

	t97 = ((x449<x450)==(x451+x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = INT16_MAX;
	uint8_t x454 = 0U;
	uint8_t x456 = 124U;

	t98 = ((x453<x454)==(x455+x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = INT64_MIN;
	int8_t x458 = 26;
	static volatile int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t99 = -40;

	t99 = ((x457<x458)==(x459+x460));

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

