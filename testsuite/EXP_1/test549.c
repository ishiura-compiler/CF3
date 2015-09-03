#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -663743;
int32_t x10 = -8070425;
int64_t x11 = -19371875614LL;
volatile int32_t t3 = 4315314;
int32_t x29 = 1583979;
int8_t x36 = -24;
volatile int32_t x38 = -1;
uint64_t t9 = 214641552023LLU;
int64_t t10 = 26543883LL;
int8_t x51 = INT8_MIN;
volatile int64_t t12 = 8562879411752480LL;
uint64_t x53 = UINT64_MAX;
static int32_t x54 = 11806536;
int8_t x55 = INT8_MIN;
int64_t x56 = -1LL;
int16_t x59 = 1;
uint64_t t14 = 79LLU;
volatile int64_t t17 = -62568169LL;
uint16_t x79 = UINT16_MAX;
int16_t x80 = -16;
int32_t x82 = -1;
volatile int8_t x83 = INT8_MAX;
volatile uint64_t t19 = 145LLU;
static volatile int32_t x85 = -1;
int32_t t20 = 765007;
uint32_t x90 = 125681077U;
int32_t x91 = INT32_MIN;
int16_t x95 = -1;
int16_t x99 = INT16_MIN;
int8_t x103 = INT8_MIN;
int16_t x105 = INT16_MIN;
int32_t x108 = -43087515;
static int64_t x112 = INT64_MIN;
static volatile int16_t x115 = 11;
int16_t x127 = -1;
volatile int16_t x140 = INT16_MAX;
static volatile uint32_t x144 = 230299U;
static int64_t x146 = INT64_MIN;
volatile int8_t x148 = INT8_MAX;
int64_t t34 = -162285394LL;
int8_t x157 = INT8_MAX;
uint16_t x163 = 2943U;
uint16_t x167 = 548U;
volatile int8_t x173 = 1;
int32_t x175 = -8337;
int8_t x177 = 16;
int8_t x178 = INT8_MIN;
int32_t x180 = 1783345;
volatile int8_t x193 = INT8_MAX;
static int8_t x204 = -22;
static uint8_t x206 = 14U;
static volatile uint64_t t48 = 4516556047809LLU;
int32_t x211 = -1;
int16_t x217 = 0;
static uint64_t x223 = 14409922818936LLU;
static int8_t x224 = -6;
int16_t x228 = INT16_MIN;
int8_t x235 = -18;
int16_t x241 = INT16_MIN;
static uint8_t x243 = 3U;
int64_t x244 = INT64_MAX;
int64_t x249 = -3056656LL;
int64_t t59 = -1190704745561LL;
uint8_t x253 = UINT8_MAX;
static int16_t x254 = -1;
static uint32_t x260 = UINT32_MAX;
volatile int64_t t61 = 73502208LL;
volatile uint16_t x271 = UINT16_MAX;
int8_t x275 = -1;
int64_t x276 = -1LL;
volatile int64_t t64 = -135420360159668598LL;
uint16_t x278 = UINT16_MAX;
int64_t x284 = 94082619348948009LL;
uint32_t x290 = UINT32_MAX;
uint64_t x293 = 8801716585249403LLU;
static uint16_t x294 = 14610U;
uint8_t x297 = 123U;
int8_t x298 = INT8_MIN;
int32_t t70 = -158;
static uint32_t x315 = 267566412U;
volatile uint64_t x319 = 3612605LLU;
uint16_t x337 = UINT16_MAX;
uint8_t x339 = 4U;
int64_t x340 = -1LL;
int8_t x342 = INT8_MIN;
static uint8_t x344 = 3U;
int64_t t80 = 228LL;
int8_t x349 = 11;
int64_t x350 = -1LL;
int32_t x351 = 121460597;
int64_t x359 = -1LL;
uint16_t x361 = UINT16_MAX;
static uint32_t x365 = UINT32_MAX;
volatile int32_t x367 = INT32_MIN;
int16_t x374 = 13;
uint8_t x375 = UINT8_MAX;
int8_t x377 = -58;
int16_t x379 = -11692;
int8_t x383 = -1;
uint64_t x387 = 164117328713568816LLU;
volatile uint16_t x389 = 5U;
uint32_t t91 = 206U;
int64_t x397 = -5511606851979557LL;
uint32_t x403 = 929U;
int32_t x404 = -1;
uint32_t t93 = 120U;
static int8_t x410 = INT8_MIN;
uint64_t x417 = 151788LLU;
uint64_t x418 = UINT64_MAX;
int32_t x428 = -70825926;
int64_t x436 = INT64_MIN;
volatile int64_t t99 = 89622686278798283LL;


void f0(void) {
	uint32_t x1 = 2061U;
	int16_t x2 = 58;
	int8_t x3 = INT8_MIN;
	volatile int8_t x4 = INT8_MAX;
	volatile uint32_t t0 = 57U;

	t0 = (((x1/x2)/x3)*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 15568U;
	uint8_t x6 = 6U;
	int16_t x7 = 7;
	int16_t x8 = 0;

	t1 = (((x5/x6)/x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 227346888315LLU;

	t2 = (((x9/x10)/x11)*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x15 = 7035;
	int16_t x16 = INT16_MAX;

	t3 = (((x13/x14)/x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	int64_t x20 = -1LL;
	static volatile int64_t t4 = 14305636435382LL;

	t4 = (((x17/x18)/x19)*x20);

	if (t4 != 132104LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 506482;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	int8_t x24 = 53;
	int32_t t5 = -306;

	t5 = (((x21/x22)/x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	static volatile int16_t x26 = -6335;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 2U;
	uint32_t t6 = 65067548U;

	t6 = (((x25/x26)/x27)*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	int32_t x31 = 47068638;
	uint32_t x32 = 11107U;
	volatile uint32_t t7 = 76522U;

	t7 = (((x29/x30)/x31)*x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 1398U;
	static int16_t x35 = INT16_MIN;
	int32_t t8 = -3;

	t8 = (((x33/x34)/x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 35068176508LLU;
	int64_t x39 = 6825031001LL;
	static volatile int64_t x40 = INT64_MAX;

	t9 = (((x37/x38)/x39)*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = INT16_MAX;
	int16_t x43 = 2;
	uint16_t x44 = 314U;

	t10 = (((x41/x42)/x43)*x44);

	if (t10 != 44192920004461800LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = -15905676;
	int32_t x47 = 2008749;
	int32_t x48 = -1;
	int64_t t11 = 752830LL;

	t11 = (((x45/x46)/x47)*x48);

	if (t11 != -288676LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 126U;
	int64_t x50 = INT64_MIN;
	int8_t x52 = 0;

	t12 = (((x49/x50)/x51)*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t t13 = 10100159LLU;

	t13 = (((x53/x54)/x55)*x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int8_t x58 = -11;
	static int16_t x60 = 7;

	t14 = (((x57/x58)/x59)*x60);

	if (t14 != 7LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 9U;
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 189;

	t15 = (((x61/x62)/x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = 3979LLU;
	static volatile uint32_t x68 = 3U;
	static uint64_t t16 = 3427469874427063LLU;

	t16 = (((x65/x66)/x67)*x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x70 = INT32_MIN;
	int8_t x71 = 1;
	int64_t x72 = INT64_MIN;

	t17 = (((x69/x70)/x71)*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = -1;
	int16_t x78 = INT16_MIN;
	int32_t t18 = 77;

	t18 = (((x77/x78)/x79)*x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MAX;
	uint64_t x84 = UINT64_MAX;

	t19 = (((x81/x82)/x83)*x84);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MAX;
	int32_t x87 = 76645;
	int8_t x88 = INT8_MAX;

	t20 = (((x85/x86)/x87)*x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 203LL;
	int16_t x92 = -3;
	volatile int64_t t21 = -4401984148LL;

	t21 = (((x89/x90)/x91)*x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MIN;
	int32_t x94 = -442871492;
	volatile uint32_t x96 = UINT32_MAX;
	volatile uint32_t t22 = 9884187U;

	t22 = (((x93/x94)/x95)*x96);

	if (t22 != 4U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x98 = UINT8_MAX;
	static volatile uint8_t x100 = 45U;
	static volatile int32_t t23 = 12851;

	t23 = (((x97/x98)/x99)*x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = 6U;
	static volatile int16_t x104 = INT16_MAX;
	volatile int32_t t24 = 0;

	t24 = (((x101/x102)/x103)*x104);

	if (t24 != -1376214) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MIN;
	int64_t x107 = -1LL;
	volatile int64_t t25 = 2089684LL;

	t25 = (((x105/x106)/x107)*x108);

	if (t25 != 43087515LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;
	volatile int64_t t26 = 2LL;

	t26 = (((x109/x110)/x111)*x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 3710LLU;
	int8_t x114 = INT8_MIN;
	int8_t x116 = INT8_MAX;
	volatile uint64_t t27 = 43729LLU;

	t27 = (((x113/x114)/x115)*x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x125 = 15130085336LLU;
	int32_t x126 = INT32_MIN;
	int64_t x128 = 310091847136319LL;
	volatile uint64_t t28 = 518741LLU;

	t28 = (((x125/x126)/x127)*x128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 307LL;
	int16_t x130 = 2;
	static int8_t x131 = INT8_MIN;
	static volatile uint8_t x132 = 0U;
	static int64_t t29 = 1697187808086LL;

	t29 = (((x129/x130)/x131)*x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = -7LL;
	int16_t x135 = INT16_MAX;
	int64_t x136 = -1LL;
	static volatile int64_t t30 = 32125735130LL;

	t30 = (((x133/x134)/x135)*x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -8;
	static int32_t x138 = INT32_MIN;
	static int32_t x139 = 2446514;
	int32_t t31 = 1;

	t31 = (((x137/x138)/x139)*x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 5U;
	int64_t x142 = 63255LL;
	int64_t x143 = INT64_MIN;
	int64_t t32 = -4598333204LL;

	t32 = (((x141/x142)/x143)*x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	static uint8_t x147 = 35U;
	int64_t t33 = 151809561LL;

	t33 = (((x145/x146)/x147)*x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	int64_t x151 = INT64_MIN;
	static volatile uint8_t x152 = UINT8_MAX;

	t34 = (((x149/x150)/x151)*x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -82;
	int16_t x154 = -1;
	static int64_t x155 = -1LL;
	static volatile int16_t x156 = INT16_MAX;
	int64_t t35 = -83LL;

	t35 = (((x153/x154)/x155)*x156);

	if (t35 != -2686894LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x158 = INT16_MIN;
	uint16_t x159 = 17578U;
	int32_t x160 = -9;
	volatile int32_t t36 = -423;

	t36 = (((x157/x158)/x159)*x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x162 = INT64_MIN;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t37 = 6297022217847LL;

	t37 = (((x161/x162)/x163)*x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	uint32_t x166 = UINT32_MAX;
	int32_t x168 = INT32_MAX;
	volatile uint32_t t38 = 1581415738U;

	t38 = (((x165/x166)/x167)*x168);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x169 = INT64_MIN;
	uint16_t x170 = UINT16_MAX;
	volatile int8_t x171 = 54;
	int16_t x172 = -1;
	volatile int64_t t39 = 1033859LL;

	t39 = (((x169/x170)/x171)*x172);

	if (t39 != 2606289553180LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x174 = 27;
	int8_t x176 = INT8_MIN;
	int32_t t40 = 1;

	t40 = (((x173/x174)/x175)*x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x179 = 22;
	int32_t t41 = 43;

	t41 = (((x177/x178)/x179)*x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x181 = INT8_MAX;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -1LL;
	uint64_t x184 = 196839824208501LLU;
	volatile uint64_t t42 = 4590693441812459496LLU;

	t42 = (((x181/x182)/x183)*x184);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = -1;
	uint8_t x186 = UINT8_MAX;
	int64_t x187 = -7LL;
	static int16_t x188 = -22;
	int64_t t43 = 2368LL;

	t43 = (((x185/x186)/x187)*x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = 81;
	volatile uint32_t x190 = UINT32_MAX;
	int32_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	static volatile uint32_t t44 = 706914U;

	t44 = (((x189/x190)/x191)*x192);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = 66974U;
	volatile int32_t x196 = INT32_MAX;
	uint32_t t45 = 6940U;

	t45 = (((x193/x194)/x195)*x196);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	static uint8_t x198 = 1U;
	int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (((x197/x198)/x199)*x200);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -860;
	static int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	volatile int32_t t47 = 16598450;

	t47 = (((x201/x202)/x203)*x204);

	if (t47 != 132) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = -157;
	int16_t x207 = INT16_MAX;
	volatile uint64_t x208 = 607320440543LLU;

	t48 = (((x205/x206)/x207)*x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MIN;
	static int32_t x210 = -63798446;
	static uint8_t x212 = 3U;
	int32_t t49 = -1;

	t49 = (((x209/x210)/x211)*x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 13643564835391119LLU;
	int8_t x214 = INT8_MIN;
	static uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	uint64_t t50 = 120106571397013592LLU;

	t50 = (((x213/x214)/x215)*x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x218 = -62;
	uint32_t x219 = 1743067062U;
	int8_t x220 = 1;
	uint32_t t51 = 224334852U;

	t51 = (((x217/x218)/x219)*x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	volatile uint64_t t52 = 2LLU;

	t52 = (((x221/x222)/x223)*x224);

	if (t52 != 18446744073701870770LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 107;
	volatile int16_t x226 = -1529;
	static uint32_t x227 = 979755U;
	static uint32_t t53 = 697U;

	t53 = (((x225/x226)/x227)*x228);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MAX;
	static int32_t x231 = -1;
	int8_t x232 = INT8_MIN;
	uint64_t t54 = 10261784929566913LLU;

	t54 = (((x229/x230)/x231)*x232);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x233 = INT64_MIN;
	static int16_t x234 = INT16_MAX;
	static uint8_t x236 = UINT8_MAX;
	volatile int64_t t55 = 2765488557220LL;

	t55 = (((x233/x234)/x235)*x236);

	if (t55 != 3987683864521500LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 176U;
	uint64_t x238 = UINT64_MAX;
	static int64_t x239 = -1LL;
	int64_t x240 = -1LL;
	static volatile uint64_t t56 = 1323130713LLU;

	t56 = (((x237/x238)/x239)*x240);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x242 = INT16_MIN;
	volatile int64_t t57 = 53LL;

	t57 = (((x241/x242)/x243)*x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = 0;
	uint8_t x246 = 92U;
	int16_t x247 = INT16_MAX;
	int32_t x248 = 59366;
	int32_t t58 = 20390544;

	t58 = (((x245/x246)/x247)*x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 60U;
	int8_t x251 = INT8_MIN;
	static volatile uint16_t x252 = UINT16_MAX;

	t59 = (((x249/x250)/x251)*x252);

	if (t59 != 26082930LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;
	static int32_t t60 = 10387021;

	t60 = (((x253/x254)/x255)*x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 0;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MAX;

	t61 = (((x257/x258)/x259)*x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	static int16_t x263 = INT16_MAX;
	uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t62 = 40983388670665LLU;

	t62 = (((x261/x262)/x263)*x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = -1;
	int64_t x272 = -1LL;
	volatile int64_t t63 = 372168LL;

	t63 = (((x269/x270)/x271)*x272);

	if (t63 != 140739635871744LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = 117U;

	t64 = (((x273/x274)/x275)*x276);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = INT32_MIN;
	uint16_t x279 = 2664U;
	int16_t x280 = INT16_MIN;
	static int32_t t65 = -129871;

	t65 = (((x277/x278)/x279)*x280);

	if (t65 != 393216) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 947U;
	volatile uint64_t x282 = 678674097142100LLU;
	static uint64_t x283 = 269375LLU;
	static volatile uint64_t t66 = 423115LLU;

	t66 = (((x281/x282)/x283)*x284);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	uint16_t x287 = 4823U;
	uint16_t x288 = 148U;
	int32_t t67 = 831;

	t67 = (((x285/x286)/x287)*x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MIN;
	volatile uint32_t x291 = 1U;
	int64_t x292 = -315108553LL;
	static volatile int64_t t68 = -914LL;

	t68 = (((x289/x290)/x291)*x292);

	if (t68 != 676690464912441344LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x295 = 4U;
	int16_t x296 = INT16_MIN;
	volatile uint64_t t69 = 52687078LLU;

	t69 = (((x293/x294)/x295)*x296);

	if (t69 != 18441808846997291008LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;

	t70 = (((x297/x298)/x299)*x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 30U;
	int8_t x302 = INT8_MAX;
	int32_t x303 = 450;
	uint8_t x304 = 0U;
	volatile int32_t t71 = -945;

	t71 = (((x301/x302)/x303)*x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -1;
	uint64_t x308 = 156LLU;
	volatile uint64_t t72 = 57634297285215832LLU;

	t72 = (((x305/x306)/x307)*x308);

	if (t72 != 18446744073709551460LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 11U;
	static int16_t x310 = 46;
	static int16_t x311 = 272;
	int64_t x312 = -2592019LL;
	int64_t t73 = 529250369624LL;

	t73 = (((x309/x310)/x311)*x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = UINT8_MAX;
	uint64_t x314 = UINT64_MAX;
	uint8_t x316 = 76U;
	volatile uint64_t t74 = 7640403860LLU;

	t74 = (((x313/x314)/x315)*x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 1564275LLU;
	int8_t x318 = INT8_MIN;
	int64_t x320 = INT64_MAX;
	static uint64_t t75 = 68024LLU;

	t75 = (((x317/x318)/x319)*x320);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = 0;
	uint16_t x330 = 16384U;
	int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	int32_t t76 = 396112;

	t76 = (((x329/x330)/x331)*x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = -7LL;
	static volatile uint64_t x335 = 68LLU;
	volatile uint32_t x336 = 0U;
	volatile uint64_t t77 = 9777LLU;

	t77 = (((x333/x334)/x335)*x336);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x338 = UINT64_MAX;
	volatile uint64_t t78 = 52750964376293LLU;

	t78 = (((x337/x338)/x339)*x340);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x341 = -1;
	volatile int32_t x343 = 26874;
	volatile int32_t t79 = 1;

	t79 = (((x341/x342)/x343)*x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x345 = 18U;
	static int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;

	t80 = (((x345/x346)/x347)*x348);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x352 = 2544373U;
	int64_t t81 = -5550LL;

	t81 = (((x349/x350)/x351)*x352);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = INT8_MAX;
	int32_t x358 = INT32_MIN;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t82 = 7237LLU;

	t82 = (((x357/x358)/x359)*x360);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x362 = INT32_MIN;
	static volatile int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t83 = -44;

	t83 = (((x361/x362)/x363)*x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x366 = INT16_MAX;
	volatile uint64_t x368 = 2405LLU;
	volatile uint64_t t84 = 2LLU;

	t84 = (((x365/x366)/x367)*x368);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = 142854670U;
	int32_t x370 = -12;
	static int8_t x371 = -15;
	int8_t x372 = INT8_MAX;
	volatile uint32_t t85 = 11388834U;

	t85 = (((x369/x370)/x371)*x372);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = -897;
	int64_t x376 = INT64_MAX;
	volatile int64_t t86 = 11377695680LL;

	t86 = (((x373/x374)/x375)*x376);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x378 = -1;
	int16_t x380 = INT16_MIN;
	volatile int32_t t87 = -4541252;

	t87 = (((x377/x378)/x379)*x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x381 = 3U;
	int64_t x382 = INT64_MIN;
	volatile int32_t x384 = INT32_MIN;
	volatile int64_t t88 = 0LL;

	t88 = (((x381/x382)/x383)*x384);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x385 = INT16_MIN;
	uint32_t x386 = 209U;
	uint8_t x388 = 0U;
	uint64_t t89 = 187732067859552LLU;

	t89 = (((x385/x386)/x387)*x388);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x390 = INT32_MAX;
	int8_t x391 = -20;
	volatile int32_t x392 = INT32_MAX;
	int32_t t90 = 117;

	t90 = (((x389/x390)/x391)*x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x394 = 1682421U;
	int16_t x395 = -1;
	uint16_t x396 = UINT16_MAX;

	t91 = (((x393/x394)/x395)*x396);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x398 = INT64_MAX;
	volatile uint64_t x399 = 11LLU;
	static volatile int8_t x400 = INT8_MIN;
	uint64_t t92 = 2524382547269388710LLU;

	t92 = (((x397/x398)/x399)*x400);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = -1;
	volatile int8_t x402 = 1;

	t93 = (((x401/x402)/x403)*x404);

	if (t93 != 4290344081U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 32482U;
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = -1LL;
	static volatile int8_t x408 = INT8_MIN;
	uint64_t t94 = 41873661761957837LLU;

	t94 = (((x405/x406)/x407)*x408);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x409 = 349U;
	static int16_t x411 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t95 = 812;

	t95 = (((x409/x410)/x411)*x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int64_t x414 = -8213211282224230LL;
	uint64_t x415 = 10LLU;
	static int64_t x416 = 3105136LL;
	volatile uint64_t t96 = 24899037152LLU;

	t96 = (((x413/x414)/x415)*x416);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x419 = 871065179302801LLU;
	static volatile int32_t x420 = INT32_MIN;
	static uint64_t t97 = 2369388336639LLU;

	t97 = (((x417/x418)/x419)*x420);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = 15U;
	int8_t x426 = -1;
	static uint8_t x427 = UINT8_MAX;
	static volatile uint32_t t98 = 7782U;

	t98 = (((x425/x426)/x427)*x428);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x433 = 1037U;
	static int16_t x434 = 3157;
	int8_t x435 = -1;

	t99 = (((x433/x434)/x435)*x436);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

