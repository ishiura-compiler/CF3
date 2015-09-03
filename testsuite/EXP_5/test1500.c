#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 60U;
int16_t x8 = 14;
static int32_t t2 = 2;
volatile uint32_t x15 = 73699273U;
volatile uint32_t t3 = 237485647U;
static int64_t x20 = INT64_MIN;
static volatile int64_t t4 = 15688162950LL;
uint64_t x21 = UINT64_MAX;
int16_t x22 = INT16_MAX;
static uint64_t t5 = 2LLU;
uint64_t x27 = 582LLU;
int8_t x28 = -1;
volatile int64_t x31 = 4868572450LL;
uint8_t x34 = 19U;
static uint64_t x36 = 2455073796437616LLU;
static uint16_t x46 = 2448U;
int8_t x47 = 1;
int8_t x52 = INT8_MAX;
volatile int32_t x62 = INT32_MIN;
volatile int32_t x64 = INT32_MIN;
uint64_t x71 = UINT64_MAX;
int16_t x74 = -52;
volatile int64_t t20 = -854289798911LL;
int64_t t22 = INT64_MAX;
int32_t x93 = INT32_MIN;
volatile uint16_t x98 = 2418U;
uint32_t t24 = 150621243U;
volatile uint32_t t26 = 28733226U;
int64_t x109 = -78738732748423LL;
static uint16_t x114 = UINT16_MAX;
volatile int32_t x115 = 286021;
uint8_t x118 = UINT8_MAX;
static int16_t x125 = INT16_MIN;
static uint32_t t33 = 4137126U;
volatile int8_t x141 = 4;
uint16_t x143 = 1190U;
volatile int32_t t37 = 1981626;
int8_t x160 = INT8_MIN;
int32_t t39 = -955;
uint16_t x163 = 6U;
static volatile int32_t t45 = 9280;
volatile int32_t x185 = INT32_MIN;
int32_t x186 = INT32_MIN;
int32_t t46 = -1731639;
int32_t t48 = 20179594;
int16_t x202 = INT16_MIN;
uint32_t x205 = 279536U;
volatile int8_t x206 = INT8_MIN;
int32_t x207 = INT32_MIN;
uint32_t x208 = UINT32_MAX;
volatile uint32_t t51 = 41136344U;
int16_t x212 = -215;
int64_t x220 = INT64_MIN;
int32_t x222 = INT32_MIN;
int32_t t55 = -15347624;
static int32_t x225 = INT32_MAX;
volatile int16_t x229 = INT16_MIN;
static volatile int64_t x235 = INT64_MIN;
int64_t x236 = 231104LL;
uint8_t x239 = 1U;
static uint8_t x240 = UINT8_MAX;
int64_t t59 = 0LL;
static uint8_t x242 = 64U;
volatile int32_t t62 = -117;
int16_t x259 = 1450;
uint64_t t64 = 12570702060343378LLU;
int8_t x268 = -51;
static volatile uint64_t t67 = 21131586635960084LLU;
static int32_t x273 = INT32_MAX;
int8_t x275 = 0;
int8_t x279 = -1;
static volatile int64_t x281 = INT64_MIN;
static uint16_t x286 = 1577U;
int8_t x287 = 3;
volatile uint64_t t71 = 56LLU;
volatile int8_t x289 = INT8_MIN;
int16_t x292 = INT16_MAX;
uint32_t x297 = UINT32_MAX;
static uint8_t x299 = 3U;
static volatile int32_t x309 = INT32_MIN;
uint32_t t78 = 7076U;
volatile uint32_t t79 = 2924U;
int16_t x326 = INT16_MAX;
volatile uint32_t x331 = 9U;
int8_t x333 = -1;
static int32_t x335 = INT32_MAX;
int8_t x336 = -1;
uint64_t x337 = 51586573868935LLU;
uint8_t x339 = UINT8_MAX;
uint32_t x343 = 1U;
static uint16_t x344 = 19U;
int32_t x349 = -61;
int64_t x352 = INT64_MIN;
volatile uint8_t x354 = 0U;
int64_t t87 = 430123870350656LL;
volatile int16_t x357 = INT16_MIN;
static volatile int32_t x363 = -6345;
int64_t x364 = INT64_MIN;
volatile int64_t t89 = 375535LL;
static int8_t x370 = INT8_MAX;
int16_t x373 = INT16_MIN;
uint32_t x375 = 238U;
static volatile int32_t x376 = INT32_MIN;
int64_t x382 = 447635037488636LL;
static int8_t x384 = INT8_MIN;
volatile uint32_t t94 = 291690934U;
volatile int16_t x387 = INT16_MIN;
volatile uint16_t x391 = UINT16_MAX;
static int32_t x392 = 461133373;
uint64_t x394 = 8LLU;
volatile int64_t t97 = -64823168180LL;


void f0(void) {
	static volatile int64_t x2 = -1651035684LL;
	volatile int8_t x3 = 1;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -339;

	t0 = (x1%((x2<x3)|x4));

	if (t0 != 60) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 29U;
	uint32_t x6 = 122U;
	static int32_t x7 = 38985012;
	uint32_t t1 = 117654U;

	t1 = (x5%((x6<x7)|x8));

	if (t1 != 14U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 11142412;
	uint32_t x10 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -1;

	t2 = (x9%((x10<x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2034581U;
	static uint8_t x14 = UINT8_MAX;
	int16_t x16 = 4813;

	t3 = (x13%((x14<x15)|x16));

	if (t3 != 3495U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	int8_t x19 = 54;

	t4 = (x17%((x18<x19)|x20));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x23 = 690112862LL;
	uint8_t x24 = 123U;

	t5 = (x21%((x22<x23)|x24));

	if (t5 != 15LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint32_t x26 = UINT32_MAX;
	volatile uint32_t t6 = 969803270U;

	t6 = (x25%((x26<x27)|x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 14U;
	volatile uint8_t x30 = 20U;
	uint8_t x32 = 1U;
	int32_t t7 = -30;

	t7 = (x29%((x30<x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x35 = 8758139183652LLU;
	uint64_t t8 = 447380LLU;

	t8 = (x33%((x34<x35)|x36));

	if (t8 != 2114857435086356LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int32_t x38 = -1;
	int64_t x39 = INT64_MAX;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -82954918087617LL;

	t9 = (x37%((x38<x39)|x40));

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	int8_t x42 = -11;
	uint64_t x43 = 829802004639089306LLU;
	uint32_t x44 = UINT32_MAX;
	volatile uint32_t t10 = 14965U;

	t10 = (x41%((x42<x43)|x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static volatile int32_t x48 = INT32_MIN;
	int32_t t11 = 482;

	t11 = (x45%((x46<x47)|x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 2999U;
	int64_t x50 = -1LL;
	uint32_t x51 = 248U;
	volatile int32_t t12 = 0;

	t12 = (x49%((x50<x51)|x52));

	if (t12 != 78) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 33U;
	static int32_t x54 = -1;
	static int64_t x55 = -1LL;
	static uint16_t x56 = 9U;
	volatile int32_t t13 = -5806189;

	t13 = (x53%((x54<x55)|x56));

	if (t13 != 6) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static volatile uint32_t x58 = 172889982U;
	static volatile int64_t x59 = -1LL;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 794648377107LLU;

	t14 = (x57%((x58<x59)|x60));

	if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	volatile uint64_t x63 = 597932LLU;
	volatile int32_t t15 = INT32_MAX;

	t15 = (x61%((x62<x63)|x64));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -4567;
	int16_t x66 = 5;
	static volatile int32_t x67 = 0;
	int64_t x68 = -345775372315080LL;
	int64_t t16 = -449546501LL;

	t16 = (x65%((x66<x67)|x68));

	if (t16 != -4567LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = UINT32_MAX;
	uint64_t x70 = 24068632LLU;
	uint16_t x72 = 4971U;
	static uint32_t t17 = 25943799U;

	t17 = (x69%((x70<x71)|x72));

	if (t17 != 3411U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x75 = INT64_MIN;
	static int8_t x76 = -1;
	uint64_t t18 = 20LLU;

	t18 = (x73%((x74<x75)|x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	volatile int16_t x78 = INT16_MIN;
	int32_t x79 = -1;
	int16_t x80 = -1;
	int32_t t19 = -27;

	t19 = (x77%((x78<x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -418974LL;
	int16_t x82 = -382;
	int16_t x83 = 51;
	static int8_t x84 = INT8_MIN;

	t20 = (x81%((x82<x83)|x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -18;
	volatile int64_t x86 = INT64_MIN;
	static volatile int32_t x87 = -13;
	uint8_t x88 = 4U;
	static int32_t t21 = -340508;

	t21 = (x85%((x86<x87)|x88));

	if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	uint8_t x90 = 4U;
	int32_t x91 = -21994;
	int64_t x92 = INT64_MIN;

	t22 = (x89%((x90<x91)|x92));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 6;
	volatile uint32_t x95 = UINT32_MAX;
	static uint16_t x96 = 344U;
	int32_t t23 = 670749;

	t23 = (x93%((x94<x95)|x96));

	if (t23 != -98) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int16_t x99 = INT16_MAX;
	uint32_t x100 = UINT32_MAX;

	t24 = (x97%((x98<x99)|x100));

	if (t24 != 4294967168U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -402439281;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	static int32_t x104 = -1;
	int32_t t25 = 808469707;

	t25 = (x101%((x102<x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile uint32_t x106 = 5511141U;
	int64_t x107 = INT64_MAX;
	uint32_t x108 = UINT32_MAX;

	t26 = (x105%((x106<x107)|x108));

	if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = -1;
	int64_t x111 = -1LL;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t27 = -10328LL;

	t27 = (x109%((x110<x111)|x112));

	if (t27 != -3392296483LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	uint32_t x116 = 207830055U;
	volatile int64_t t28 = 8LL;

	t28 = (x113%((x114<x115)|x116));

	if (t28 != 59328517LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	uint64_t x119 = 11LLU;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 11LL;

	t29 = (x117%((x118<x119)|x120));

	if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MIN;
	volatile uint16_t x123 = UINT16_MAX;
	uint64_t x124 = 268164092408784LLU;
	volatile uint64_t t30 = 6968382499410295LLU;

	t30 = (x121%((x122<x123)|x124));

	if (t30 != 4321001640123LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = 28173834549226012LL;
	int32_t x127 = 21068452;
	int64_t x128 = -1LL;
	volatile int64_t t31 = -1047186906980713LL;

	t31 = (x125%((x126<x127)|x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -629616748045167LL;
	volatile int8_t x130 = -3;
	int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MAX;
	int64_t t32 = -6538623095LL;

	t32 = (x129%((x130<x131)|x132));

	if (t32 != -629616748045167LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = 7261LL;
	static int32_t x135 = -687;
	uint32_t x136 = 1780U;

	t33 = (x133%((x134<x135)|x136));

	if (t33 != 868U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -1LL;
	int8_t x138 = INT8_MIN;
	static int8_t x139 = INT8_MIN;
	volatile int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = -302290452LL;

	t34 = (x137%((x138<x139)|x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int64_t t35 = -52029085641865782LL;

	t35 = (x141%((x142<x143)|x144));

	if (t35 != 4LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x145 = 226U;
	int8_t x146 = -1;
	uint32_t x147 = 386048508U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -8515;

	t36 = (x145%((x146<x147)|x148));

	if (t36 != 98) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	static int16_t x150 = INT16_MAX;
	static uint32_t x151 = 240U;
	volatile uint16_t x152 = 19U;

	t37 = (x149%((x150<x151)|x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 1;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 700U;
	uint8_t x156 = 39U;
	int32_t t38 = 110;

	t38 = (x153%((x154<x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = 1;
	static volatile int16_t x159 = 0;

	t39 = (x157%((x158<x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 538004195822415219LLU;
	int8_t x162 = -1;
	uint64_t x164 = 1183500537983513LLU;
	uint64_t t40 = 8132781331332214LLU;

	t40 = (x161%((x162<x163)|x164));

	if (t40 != 694951577900317LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -608497795LL;
	uint64_t x166 = UINT64_MAX;
	uint64_t x167 = 5LLU;
	int32_t x168 = -10931;
	volatile int64_t t41 = 250998LL;

	t41 = (x165%((x166<x167)|x168));

	if (t41 != -1818LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 7U;
	int64_t x170 = -1LL;
	int32_t x171 = INT32_MIN;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t42 = 481997710266170LLU;

	t42 = (x169%((x170<x171)|x172));

	if (t42 != 7LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -16721141LL;
	int32_t x174 = -392;
	volatile int64_t x175 = -242621023927960489LL;
	int16_t x176 = INT16_MIN;
	int64_t t43 = -2LL;

	t43 = (x173%((x174<x175)|x176));

	if (t43 != -9461LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = 5;
	volatile int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MAX;
	int16_t x180 = 1264;
	volatile int32_t t44 = -3348182;

	t44 = (x177%((x178<x179)|x180));

	if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	static int16_t x182 = -1;
	static uint32_t x183 = UINT32_MAX;
	volatile int32_t x184 = INT32_MAX;

	t45 = (x181%((x182<x183)|x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x187 = 182U;
	int8_t x188 = -21;

	t46 = (x185%((x186<x187)|x188));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MIN;
	static volatile int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MIN;
	static int32_t t47 = -356510762;

	t47 = (x189%((x190<x191)|x192));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 4114U;
	int64_t x194 = 1032088127672654LL;
	int32_t x195 = INT32_MIN;
	volatile int16_t x196 = INT16_MAX;

	t48 = (x193%((x194<x195)|x196));

	if (t48 != 4114) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = -12;
	static uint64_t x199 = 124264LLU;
	uint8_t x200 = 13U;
	int32_t t49 = -264117;

	t49 = (x197%((x198<x199)|x200));

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = INT8_MAX;
	uint8_t x203 = 2U;
	volatile uint32_t x204 = UINT32_MAX;
	uint32_t t50 = 0U;

	t50 = (x201%((x202<x203)|x204));

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {


	t51 = (x205%((x206<x207)|x208));

	if (t51 != 279536U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 2U;
	int16_t x210 = -4621;
	int8_t x211 = -1;
	int32_t t52 = -28059;

	t52 = (x209%((x210<x211)|x212));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x214 = 419;
	volatile int8_t x215 = INT8_MAX;
	int16_t x216 = -1;
	volatile int32_t t53 = 64846;

	t53 = (x213%((x214<x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int8_t x218 = 26;
	volatile int16_t x219 = 0;
	static int64_t t54 = 88277503LL;

	t54 = (x217%((x218<x219)|x220));

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 8U;
	static int8_t x223 = INT8_MIN;
	static uint16_t x224 = 60U;

	t55 = (x221%((x222<x223)|x224));

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	volatile int64_t x227 = INT64_MIN;
	int16_t x228 = -2;
	static int32_t t56 = 28;

	t56 = (x225%((x226<x227)|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MAX;
	int32_t x231 = INT32_MIN;
	static int32_t x232 = 72621;
	volatile int32_t t57 = 19993;

	t57 = (x229%((x230<x231)|x232));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 894352700U;
	static int8_t x234 = INT8_MIN;
	volatile int64_t t58 = 134235997722197LL;

	t58 = (x233%((x234<x235)|x236));

	if (t58 != 211324LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile int64_t x238 = INT64_MIN;

	t59 = (x237%((x238<x239)|x240));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x243 = UINT8_MAX;
	int64_t x244 = INT64_MIN;
	uint64_t t60 = 14866796LLU;

	t60 = (x241%((x242<x243)|x244));

	if (t60 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	static int64_t x246 = 3780716535371257LL;
	int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t61 = 2054250;

	t61 = (x245%((x246<x247)|x248));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = 55;
	uint8_t x250 = UINT8_MAX;
	static uint64_t x251 = UINT64_MAX;
	static int16_t x252 = -1;

	t62 = (x249%((x250<x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 3998;
	static volatile int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	uint32_t x256 = 519463U;
	uint32_t t63 = 19U;

	t63 = (x253%((x254<x255)|x256));

	if (t63 != 3998U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 1057338833187519LLU;
	uint64_t x258 = 40101LLU;
	uint64_t x260 = 1837089332823963LLU;

	t64 = (x257%((x258<x259)|x260));

	if (t64 != 1057338833187519LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	static volatile uint64_t x262 = UINT64_MAX;
	volatile uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 4344591U;
	static int64_t t65 = -6563325759LL;

	t65 = (x261%((x262<x263)|x264));

	if (t65 != -432149LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = -5510094;
	volatile uint64_t t66 = 525829356426044LLU;

	t66 = (x265%((x266<x267)|x268));

	if (t66 != 50LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x269 = 1065LLU;
	volatile int16_t x270 = INT16_MIN;
	volatile int64_t x271 = -7314032032412279LL;
	uint64_t x272 = 597097918487LLU;

	t67 = (x269%((x270<x271)|x272));

	if (t67 != 1065LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	static uint16_t x276 = 382U;
	int32_t t68 = -15247492;

	t68 = (x273%((x274<x275)|x276));

	if (t68 != 349) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 2257U;
	uint32_t x278 = 57153388U;
	int32_t x280 = -48913;
	int32_t t69 = 52867426;

	t69 = (x277%((x278<x279)|x280));

	if (t69 != 2257) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 122U;
	static int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MAX;
	int64_t t70 = -524985LL;

	t70 = (x281%((x282<x283)|x284));

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = UINT64_MAX;
	static volatile int8_t x288 = -1;

	t71 = (x285%((x286<x287)|x288));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x290 = INT64_MIN;
	uint16_t x291 = 1U;
	volatile int32_t t72 = 720299;

	t72 = (x289%((x290<x291)|x292));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	volatile int8_t x295 = -27;
	uint8_t x296 = 0U;
	volatile int64_t t73 = -93576207LL;

	t73 = (x293%((x294<x295)|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x298 = 406359U;
	int8_t x300 = -13;
	static volatile uint32_t t74 = 8942U;

	t74 = (x297%((x298<x299)|x300));

	if (t74 != 12U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 46646U;
	volatile uint32_t x302 = 6748927U;
	volatile int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	volatile uint32_t t75 = 4107180U;

	t75 = (x301%((x302<x303)|x304));

	if (t75 != 46646U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 125U;
	int8_t x306 = INT8_MIN;
	volatile int16_t x307 = INT16_MIN;
	uint16_t x308 = 655U;
	int32_t t76 = -56;

	t76 = (x305%((x306<x307)|x308));

	if (t76 != 125) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x310 = 1188519U;
	uint32_t x311 = 7U;
	volatile int64_t x312 = -8LL;
	int64_t t77 = 58751662LL;

	t77 = (x309%((x310<x311)|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 5819U;
	static int8_t x314 = -1;
	uint64_t x315 = 1528125454288510844LLU;
	uint32_t x316 = UINT32_MAX;

	t78 = (x313%((x314<x315)|x316));

	if (t78 != 5819U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 159300U;
	uint8_t x322 = 67U;
	uint64_t x323 = 302540921722LLU;
	uint8_t x324 = 1U;

	t79 = (x321%((x322<x323)|x324));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	uint8_t x328 = 19U;
	volatile int32_t t80 = 335318362;

	t80 = (x325%((x326<x327)|x328));

	if (t80 != -12) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = 1;
	volatile int32_t x330 = -1;
	volatile int64_t x332 = -1LL;
	volatile int64_t t81 = -369876049764722058LL;

	t81 = (x329%((x330<x331)|x332));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x334 = -1;
	int32_t t82 = 0;

	t82 = (x333%((x334<x335)|x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x338 = INT32_MIN;
	int64_t x340 = INT64_MAX;
	volatile uint64_t t83 = 4997781LLU;

	t83 = (x337%((x338<x339)|x340));

	if (t83 != 51586573868935LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = 44LLU;
	int8_t x342 = -1;
	volatile uint64_t t84 = 22226582238LLU;

	t84 = (x341%((x342<x343)|x344));

	if (t84 != 6LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = -1;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;
	volatile int32_t t85 = 30133852;

	t85 = (x345%((x346<x347)|x348));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = INT32_MAX;
	volatile int64_t t86 = 1LL;

	t86 = (x349%((x350<x351)|x352));

	if (t86 != -61LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x355 = 23U;
	int8_t x356 = -1;

	t87 = (x353%((x354<x355)|x356));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x358 = 174671036LLU;
	uint32_t x359 = UINT32_MAX;
	volatile uint64_t x360 = 507884590411135LLU;
	uint64_t t88 = 2411304446611476LLU;

	t88 = (x357%((x358<x359)|x360));

	if (t88 != 375749977095648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -846743231LL;
	volatile int8_t x362 = INT8_MIN;

	t89 = (x361%((x362<x363)|x364));

	if (t89 != -846743231LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int64_t x366 = -1LL;
	int16_t x367 = -2005;
	static int16_t x368 = INT16_MAX;
	static volatile int32_t t90 = -4;

	t90 = (x365%((x366<x367)|x368));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x371 = 15U;
	static uint16_t x372 = 482U;
	volatile uint32_t t91 = 108U;

	t91 = (x369%((x370<x371)|x372));

	if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x374 = 482174LLU;
	int32_t t92 = 1684983;

	t92 = (x373%((x374<x375)|x376));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = -202842465436183LL;
	int8_t x378 = INT8_MAX;
	int32_t x379 = INT32_MIN;
	static uint8_t x380 = UINT8_MAX;
	volatile int64_t t93 = -46099814108548860LL;

	t93 = (x377%((x378<x379)|x380));

	if (t93 != -88LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x383 = INT64_MIN;

	t94 = (x381%((x382<x383)|x384));

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -1;
	static uint16_t x386 = UINT16_MAX;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t95 = 607;

	t95 = (x385%((x386<x387)|x388));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = 51;
	static uint16_t x390 = UINT16_MAX;
	int32_t t96 = 1;

	t96 = (x389%((x390<x391)|x392));

	if (t96 != 51) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = 17275537980LL;
	int32_t x395 = INT32_MIN;
	volatile uint8_t x396 = 3U;

	t97 = (x393%((x394<x395)|x396));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x397 = 205799494U;
	uint16_t x398 = 1U;
	uint16_t x399 = 51U;
	uint8_t x400 = 16U;
	volatile uint32_t t98 = 99288768U;

	t98 = (x397%((x398<x399)|x400));

	if (t98 != 10U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x401 = 13U;
	uint16_t x402 = 8763U;
	int16_t x403 = -1;
	static int32_t x404 = INT32_MAX;
	int32_t t99 = 3285;

	t99 = (x401%((x402<x403)|x404));

	if (t99 != 13) { NG(); } else { ; }
	
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

