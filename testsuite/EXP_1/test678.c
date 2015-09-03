#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = -1;
int8_t x8 = INT8_MAX;
int64_t x22 = INT64_MAX;
int8_t x25 = 1;
volatile uint64_t x26 = 851187430977081914LLU;
static volatile int32_t x35 = INT32_MAX;
static int8_t x44 = 1;
volatile uint64_t t11 = 36214LLU;
int32_t x59 = 1031016;
int8_t x60 = -7;
volatile int64_t x69 = -16LL;
uint16_t x74 = 1U;
int32_t x76 = -41234208;
uint8_t x77 = UINT8_MAX;
static volatile uint8_t x79 = 80U;
static uint16_t x80 = UINT16_MAX;
int32_t x83 = -31295571;
static int64_t x86 = INT64_MIN;
uint32_t x89 = 40065410U;
int32_t x94 = INT32_MIN;
int16_t x95 = INT16_MIN;
uint64_t x113 = UINT64_MAX;
uint64_t x116 = 683272443267334595LLU;
int32_t x117 = INT32_MIN;
int64_t x118 = INT64_MIN;
int8_t x120 = INT8_MIN;
volatile int64_t t24 = 10313246589LL;
int32_t x131 = -6;
volatile int32_t t26 = 10;
volatile uint16_t x133 = UINT16_MAX;
int32_t x137 = INT32_MIN;
static uint32_t x141 = UINT32_MAX;
int32_t x142 = -1;
int32_t x143 = INT32_MAX;
volatile int32_t x160 = -1;
int16_t x161 = INT16_MIN;
volatile uint64_t t33 = 4538883502792LLU;
int64_t x166 = -1LL;
int32_t x170 = INT32_MIN;
int8_t x172 = INT8_MAX;
volatile int64_t t36 = 0LL;
int32_t x180 = -36;
uint64_t t38 = 12LLU;
uint64_t x185 = 26LLU;
int16_t x186 = INT16_MIN;
static int32_t x188 = 220031;
volatile uint64_t t39 = 602835216699LLU;
static int16_t x192 = INT16_MIN;
volatile int32_t t40 = -1;
int64_t x195 = INT64_MIN;
uint64_t x210 = UINT64_MAX;
uint16_t x218 = 4746U;
volatile int64_t x220 = 21765148856930LL;
int16_t x227 = 1032;
int16_t x228 = 2;
volatile int32_t t47 = -44705981;
int8_t x231 = INT8_MIN;
volatile uint64_t t48 = 6485844LLU;
static uint8_t x243 = 1U;
uint64_t t53 = 33245666187797LLU;
int8_t x283 = INT8_MAX;
int8_t x284 = -2;
uint8_t x289 = UINT8_MAX;
int64_t x293 = 26LL;
uint8_t x296 = 18U;
int8_t x299 = INT8_MIN;
int8_t x301 = INT8_MAX;
volatile int64_t x302 = -1LL;
static int8_t x306 = INT8_MIN;
int16_t x312 = INT16_MAX;
static volatile uint64_t t66 = 2358LLU;
int16_t x315 = INT16_MIN;
volatile uint64_t x317 = 6993638LLU;
int64_t x324 = -1LL;
int8_t x329 = INT8_MIN;
volatile int64_t t72 = -255722213010LL;
uint32_t t73 = 5046105U;
int8_t x345 = -1;
int16_t x346 = -1;
volatile int32_t t74 = INT32_MAX;
int8_t x352 = INT8_MIN;
uint8_t x354 = 3U;
int64_t x358 = -3559875791202157384LL;
uint64_t x361 = 1278707214359LLU;
uint16_t x372 = 9979U;
uint32_t x373 = UINT32_MAX;
volatile uint8_t x381 = 40U;
int64_t x383 = INT64_MIN;
int16_t x384 = INT16_MIN;
int64_t x385 = INT64_MIN;
int64_t x389 = INT64_MAX;
uint8_t x399 = 6U;
int64_t x402 = 136782818829934LL;
volatile int64_t t91 = -190454462248655514LL;
int64_t t93 = 3206627216105LL;
int8_t x430 = 18;
static int32_t x431 = INT32_MAX;
uint8_t x435 = 42U;
uint32_t x436 = UINT32_MAX;
static int32_t x444 = -3030;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static volatile int32_t x2 = -1;
	static volatile int32_t x4 = 883070560;
	static volatile int32_t t0 = 13;

	t0 = (((x1%x2)+x3)-x4);

	if (t0 != -883070561) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	static volatile int16_t x6 = -14;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = -575;

	t1 = (((x5%x6)+x7)-x8);

	if (t1 != -254) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 1318703;
	int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	int8_t x12 = -3;
	int32_t t2 = 1751407;

	t2 = (((x9%x10)+x11)-x12);

	if (t2 != 7985) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MAX;
	uint8_t x15 = 49U;
	volatile int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 280780LL;

	t3 = (((x13%x14)+x15)-x16);

	if (t3 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 25;
	static uint32_t x18 = 273084U;
	int8_t x19 = -5;
	uint64_t x20 = 196LLU;
	volatile uint64_t t4 = 3198293123738LLU;

	t4 = (((x17%x18)+x19)-x20);

	if (t4 != 18446744073709551440LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1087U;
	int64_t x23 = 5568192LL;
	static int8_t x24 = INT8_MAX;
	volatile int64_t t5 = 2040LL;

	t5 = (((x21%x22)+x23)-x24);

	if (t5 != 5569152LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MAX;
	static volatile uint32_t x28 = UINT32_MAX;
	uint64_t t6 = 921167678838992687LLU;

	t6 = (((x25%x26)+x27)-x28);

	if (t6 != 18446744069414617089LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -6436LL;
	static int64_t x30 = -1LL;
	int64_t x31 = -1LL;
	static volatile int32_t x32 = -1;
	static volatile int64_t t7 = -417358127294126LL;

	t7 = (((x29%x30)+x31)-x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	volatile int64_t x36 = 5960657787LL;
	static volatile int64_t t8 = 97250LL;

	t8 = (((x33%x34)+x35)-x36);

	if (t8 != -3813206908LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 636U;
	int8_t x38 = INT8_MIN;
	uint16_t x39 = 126U;
	int16_t x40 = INT16_MAX;
	volatile uint32_t t9 = 5957U;

	t9 = (((x37%x38)+x39)-x40);

	if (t9 != 4294935291U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x42 = 2391U;
	int64_t x43 = INT64_MIN;
	volatile int64_t t10 = 541303900717LL;

	t10 = (((x41%x42)+x43)-x44);

	if (t10 != -9223372036854773593LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -2097;
	static int64_t x50 = INT64_MIN;
	static int16_t x51 = INT16_MIN;
	uint64_t x52 = 6782384649801257LLU;

	t11 = (((x49%x50)+x51)-x52);

	if (t11 != 18439961689059715494LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 18073U;
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 10;

	t12 = (((x53%x54)+x55)-x56);

	if (t12 != -2147432807) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	uint32_t x58 = 3U;
	uint32_t t13 = 1003705U;

	t13 = (((x57%x58)+x59)-x60);

	if (t13 != 1031025U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MAX;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;
	static volatile int64_t t14 = INT64_MIN;

	t14 = (((x65%x66)+x67)-x68);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x70 = INT32_MIN;
	int16_t x71 = 73;
	int16_t x72 = -2;
	int64_t t15 = -666972142490553926LL;

	t15 = (((x69%x70)+x71)-x72);

	if (t15 != 59LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = 1615LLU;
	static volatile int16_t x75 = INT16_MIN;
	volatile uint64_t t16 = 82665394LLU;

	t16 = (((x73%x74)+x75)-x76);

	if (t16 != 41201440LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = 1948;
	int32_t t17 = 855;

	t17 = (((x77%x78)+x79)-x80);

	if (t17 != -65200) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	uint64_t x82 = 1249193525LLU;
	static int32_t x84 = INT32_MIN;
	static uint64_t t18 = 1LLU;

	t18 = (((x81%x82)+x83)-x84);

	if (t18 != 2215025375LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	static int64_t x88 = INT64_MAX;
	static volatile int64_t t19 = -81032850LL;

	t19 = (((x85%x86)+x87)-x88);

	if (t19 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	volatile uint64_t x91 = UINT64_MAX;
	int32_t x92 = 12;
	volatile uint64_t t20 = 135029309LLU;

	t20 = (((x89%x90)+x91)-x92);

	if (t20 != 40065397LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 13661U;
	uint64_t x96 = 13835981432LLU;
	static volatile uint64_t t21 = 18190301425664151LLU;

	t21 = (((x93%x94)+x95)-x96);

	if (t21 != 18446744059873551077LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = 7;
	static volatile int32_t x106 = INT32_MIN;
	int64_t x107 = -1LL;
	int16_t x108 = -1;
	volatile int64_t t22 = 11434403890443683LL;

	t22 = (((x105%x106)+x107)-x108);

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = -1329;
	static volatile int16_t x115 = 508;
	uint64_t t23 = 109LLU;

	t23 = (((x113%x114)+x115)-x116);

	if (t23 != 17763471630442218857LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x119 = INT32_MIN;

	t24 = (((x117%x118)+x119)-x120);

	if (t24 != -4294967168LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -437379;
	static uint16_t x122 = UINT16_MAX;
	int64_t x123 = 37522683LL;
	static uint64_t x124 = UINT64_MAX;
	static volatile uint64_t t25 = 22948228LLU;

	t25 = (((x121%x122)+x123)-x124);

	if (t25 != 37478515LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = 6;
	int16_t x130 = INT16_MIN;
	static volatile uint8_t x132 = 1U;

	t26 = (((x129%x130)+x131)-x132);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x134 = INT16_MAX;
	volatile int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t27 = 596581LL;

	t27 = (((x133%x134)+x135)-x136);

	if (t27 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x138 = -1;
	uint32_t x139 = 0U;
	int8_t x140 = INT8_MIN;
	volatile uint32_t t28 = 7463661U;

	t28 = (((x137%x138)+x139)-x140);

	if (t28 != 128U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x144 = 0U;
	uint32_t t29 = 1U;

	t29 = (((x141%x142)+x143)-x144);

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x145 = 1;
	int32_t x146 = INT32_MIN;
	static int8_t x147 = -1;
	uint32_t x148 = 21U;
	volatile uint32_t t30 = 13U;

	t30 = (((x145%x146)+x147)-x148);

	if (t30 != 4294967275U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MIN;
	static int16_t x151 = INT16_MAX;
	uint32_t x152 = 52568U;
	static volatile uint32_t t31 = 958U;

	t31 = (((x149%x150)+x151)-x152);

	if (t31 != 4294947622U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = -2;
	volatile int64_t x158 = -1LL;
	static uint16_t x159 = 15U;
	int64_t t32 = 269892863686LL;

	t32 = (((x157%x158)+x159)-x160);

	if (t32 != 16LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x162 = UINT64_MAX;
	uint64_t x163 = 28832306807446LLU;
	int16_t x164 = -1;

	t33 = (((x161%x162)+x163)-x164);

	if (t33 != 28832306774679LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x167 = -1;
	static int32_t x168 = INT32_MIN;
	static volatile int64_t t34 = 3743181284017418LL;

	t34 = (((x165%x166)+x167)-x168);

	if (t34 != 2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	static volatile int32_t t35 = -10653;

	t35 = (((x169%x170)+x171)-x172);

	if (t35 != -33023) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x173 = 1804;
	static int32_t x174 = INT32_MAX;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = -1LL;

	t36 = (((x173%x174)+x175)-x176);

	if (t36 != 1677LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 56U;
	int64_t x178 = -57659497721489LL;
	int8_t x179 = -1;
	volatile int64_t t37 = 0LL;

	t37 = (((x177%x178)+x179)-x180);

	if (t37 != 91LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x181 = -353224875;
	int16_t x182 = 2;
	uint32_t x183 = UINT32_MAX;
	static uint64_t x184 = 24740268021317725LLU;

	t38 = (((x181%x182)+x183)-x184);

	if (t38 != 18422003809983201185LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x187 = INT64_MIN;

	t39 = (((x185%x186)+x187)-x188);

	if (t39 != 9223372036854555803LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = UINT8_MAX;
	static int16_t x190 = 12050;
	volatile int16_t x191 = INT16_MIN;

	t40 = (((x189%x190)+x191)-x192);

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = 1034934775LLU;
	int32_t x194 = INT32_MIN;
	int8_t x196 = INT8_MAX;
	uint64_t t41 = 18741046800329LLU;

	t41 = (((x193%x194)+x195)-x196);

	if (t41 != 9223372037889710456LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MAX;
	static int8_t x199 = INT8_MAX;
	static uint32_t x200 = 1521U;
	uint32_t t42 = 3769U;

	t42 = (((x197%x198)+x199)-x200);

	if (t42 != 4294965901U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = 7LL;
	int8_t x202 = -21;
	static volatile uint16_t x203 = 40U;
	int32_t x204 = INT32_MAX;
	static volatile int64_t t43 = 1155LL;

	t43 = (((x201%x202)+x203)-x204);

	if (t43 != -2147483600LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x209 = 32U;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 1U;
	uint64_t t44 = 15LLU;

	t44 = (((x209%x210)+x211)-x212);

	if (t44 != 65566LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x217 = -1197;
	static uint8_t x219 = UINT8_MAX;
	volatile int64_t t45 = 41242942900913LL;

	t45 = (((x217%x218)+x219)-x220);

	if (t45 != -21765148857872LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = 15;
	volatile int8_t x222 = -8;
	int64_t x223 = -1LL;
	uint64_t x224 = UINT64_MAX;
	uint64_t t46 = 976LLU;

	t46 = (((x221%x222)+x223)-x224);

	if (t46 != 7LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = 203769;
	static int32_t x226 = INT32_MAX;

	t47 = (((x225%x226)+x227)-x228);

	if (t47 != 204799) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;

	t48 = (((x229%x230)+x231)-x232);

	if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x233 = 0;
	volatile uint64_t x234 = 45LLU;
	static int16_t x235 = INT16_MIN;
	int64_t x236 = -560373073627269LL;
	uint64_t t49 = 70958683434607724LLU;

	t49 = (((x233%x234)+x235)-x236);

	if (t49 != 560373073594501LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 47U;
	uint32_t x238 = 121U;
	volatile uint64_t x239 = 81723LLU;
	int64_t x240 = INT64_MIN;
	volatile uint64_t t50 = 57328125682LLU;

	t50 = (((x237%x238)+x239)-x240);

	if (t50 != 9223372036854857578LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = 46;
	int8_t x242 = INT8_MIN;
	volatile int8_t x244 = 1;
	static volatile int32_t t51 = -23;

	t51 = (((x241%x242)+x243)-x244);

	if (t51 != 46) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x249 = 18948U;
	static int8_t x250 = 2;
	static uint8_t x251 = 62U;
	static volatile uint8_t x252 = 0U;
	volatile uint32_t t52 = 1377031U;

	t52 = (((x249%x250)+x251)-x252);

	if (t52 != 62U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x253 = 1021U;
	uint64_t x254 = 7244394LLU;
	int32_t x255 = -7714880;
	uint64_t x256 = UINT64_MAX;

	t53 = (((x253%x254)+x255)-x256);

	if (t53 != 18446744073701837758LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = -59964695;
	int32_t x258 = -4267003;
	int8_t x259 = -1;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t54 = -4611289;

	t54 = (((x257%x258)+x259)-x260);

	if (t54 != -226526) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x261 = UINT16_MAX;
	volatile int8_t x262 = INT8_MIN;
	static uint32_t x263 = 0U;
	uint8_t x264 = 56U;
	volatile uint32_t t55 = 59452U;

	t55 = (((x261%x262)+x263)-x264);

	if (t55 != 71U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	uint16_t x266 = 29288U;
	volatile int64_t x267 = INT64_MAX;
	static volatile uint64_t x268 = 1751934901LLU;
	volatile uint64_t t56 = 106344589359LLU;

	t56 = (((x265%x266)+x267)-x268);

	if (t56 != 9223372035102849937LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = 0;
	int64_t x270 = -1LL;
	int16_t x271 = -1;
	int16_t x272 = -1;
	volatile int64_t t57 = 666265075948013LL;

	t57 = (((x269%x270)+x271)-x272);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	static int64_t x278 = -1LL;
	static uint8_t x279 = UINT8_MAX;
	int16_t x280 = 4;
	volatile int64_t t58 = 14611352769848388LL;

	t58 = (((x277%x278)+x279)-x280);

	if (t58 != 251LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x281 = 993652884LL;
	int8_t x282 = 8;
	int64_t t59 = 115385094LL;

	t59 = (((x281%x282)+x283)-x284);

	if (t59 != 133LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = INT64_MAX;
	static volatile int8_t x287 = INT8_MIN;
	static int8_t x288 = INT8_MAX;
	static int64_t t60 = -3228265996777LL;

	t60 = (((x285%x286)+x287)-x288);

	if (t60 != -383LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x290 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MAX;
	static volatile int64_t t61 = -1301187658609LL;

	t61 = (((x289%x290)+x291)-x292);

	if (t61 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x294 = 7866LL;
	int16_t x295 = -1;
	int64_t t62 = 1186621196LL;

	t62 = (((x293%x294)+x295)-x296);

	if (t62 != 7LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	uint64_t x300 = 7LLU;
	volatile uint64_t t63 = 5515LLU;

	t63 = (((x297%x298)+x299)-x300);

	if (t63 != 18446744073709551353LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x303 = UINT32_MAX;
	volatile uint64_t x304 = 22044578261346LLU;
	uint64_t t64 = 1791752404LLU;

	t64 = (((x301%x302)+x303)-x304);

	if (t64 != 18446722033426257565LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x305 = 0;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t65 = -55635408322363LL;

	t65 = (((x305%x306)+x307)-x308);

	if (t65 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x309 = 113579384132LLU;
	static uint8_t x310 = 1U;
	int64_t x311 = -280620808019LL;

	t66 = (((x309%x310)+x311)-x312);

	if (t66 != 18446743793088710830LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = INT64_MIN;
	volatile uint16_t x316 = 965U;
	volatile int64_t t67 = 9221200LL;

	t67 = (((x313%x314)+x315)-x316);

	if (t67 != -33733LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x318 = 3425U;
	int64_t x319 = -3257LL;
	int32_t x320 = INT32_MIN;
	static uint64_t t68 = 13816LLU;

	t68 = (((x317%x318)+x319)-x320);

	if (t68 != 2147483604LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x321 = 346831816U;
	int16_t x322 = INT16_MAX;
	static int32_t x323 = -1;
	int64_t t69 = -136597503890695264LL;

	t69 = (((x321%x322)+x323)-x324);

	if (t69 != 25888LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x325 = 15757LLU;
	int16_t x326 = INT16_MAX;
	int8_t x327 = 12;
	uint32_t x328 = 23U;
	uint64_t t70 = 756951LLU;

	t70 = (((x325%x326)+x327)-x328);

	if (t70 != 15746LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x330 = INT64_MIN;
	static volatile uint64_t x331 = 764596LLU;
	int32_t x332 = -238;
	volatile uint64_t t71 = 14425756090730117LLU;

	t71 = (((x329%x330)+x331)-x332);

	if (t71 != 764706LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = 27LL;
	volatile int64_t x334 = INT64_MIN;
	static uint16_t x335 = 283U;
	int8_t x336 = INT8_MAX;

	t72 = (((x333%x334)+x335)-x336);

	if (t72 != 183LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x337 = -1;
	uint32_t x338 = UINT32_MAX;
	volatile int8_t x339 = -1;
	int16_t x340 = INT16_MIN;

	t73 = (((x337%x338)+x339)-x340);

	if (t73 != 32767U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x347 = -1;
	int32_t x348 = INT32_MIN;

	t74 = (((x345%x346)+x347)-x348);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = -15910;
	int8_t x351 = INT8_MAX;
	volatile int32_t t75 = -5300185;

	t75 = (((x349%x350)+x351)-x352);

	if (t75 != -15233) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MIN;
	static uint16_t x355 = UINT16_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t76 = 699464134598LLU;

	t76 = (((x353%x354)+x355)-x356);

	if (t76 != 65534LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = 7786;
	uint32_t x359 = 53326355U;
	static uint16_t x360 = UINT16_MAX;
	volatile int64_t t77 = -18590799242LL;

	t77 = (((x357%x358)+x359)-x360);

	if (t77 != 53268606LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x362 = INT16_MIN;
	int8_t x363 = -38;
	uint32_t x364 = 66902U;
	volatile uint64_t t78 = 3854755467091LLU;

	t78 = (((x361%x362)+x363)-x364);

	if (t78 != 1278707147419LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = INT64_MIN;
	volatile int8_t x366 = INT8_MIN;
	static volatile int8_t x367 = 0;
	int32_t x368 = -1;
	int64_t t79 = 2104085432612LL;

	t79 = (((x365%x366)+x367)-x368);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	volatile int32_t x371 = 308326930;
	volatile uint64_t t80 = 19785454609LLU;

	t80 = (((x369%x370)+x371)-x372);

	if (t80 != 308316951LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x374 = -1;
	int8_t x375 = 0;
	int8_t x376 = -1;
	volatile uint32_t t81 = 447U;

	t81 = (((x373%x374)+x375)-x376);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = INT64_MAX;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t x380 = INT32_MAX;
	int64_t t82 = -16039483470LL;

	t82 = (((x377%x378)+x379)-x380);

	if (t82 != -2147516160LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x382 = UINT64_MAX;
	volatile uint64_t t83 = 290621615LLU;

	t83 = (((x381%x382)+x383)-x384);

	if (t83 != 9223372036854808616LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x386 = -1;
	int8_t x387 = 50;
	uint16_t x388 = 24919U;
	volatile int64_t t84 = -20991513LL;

	t84 = (((x385%x386)+x387)-x388);

	if (t84 != -24869LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x390 = 55;
	volatile uint64_t x391 = 140LLU;
	int16_t x392 = -245;
	volatile uint64_t t85 = 63LLU;

	t85 = (((x389%x390)+x391)-x392);

	if (t85 != 392LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = 40962U;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	int64_t x396 = -1LL;
	int64_t t86 = -13691438LL;

	t86 = (((x393%x394)+x395)-x396);

	if (t86 != 40835LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = 1;
	int8_t x400 = -1;
	int32_t t87 = -5264039;

	t87 = (((x397%x398)+x399)-x400);

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 1U;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = 0U;
	static volatile int64_t t88 = 1LL;

	t88 = (((x401%x402)+x403)-x404);

	if (t88 != -2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = 20232510;
	uint64_t x410 = 430190170040624LLU;
	static uint16_t x411 = 1159U;
	static volatile uint32_t x412 = 3U;
	static volatile uint64_t t89 = 2283756995401934LLU;

	t89 = (((x409%x410)+x411)-x412);

	if (t89 != 20233666LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x413 = UINT64_MAX;
	int8_t x414 = -1;
	static int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t90 = 21056LLU;

	t90 = (((x413%x414)+x415)-x416);

	if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	int8_t x419 = 0;
	uint16_t x420 = 158U;

	t91 = (((x417%x418)+x419)-x420);

	if (t91 != -2147483806LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -719525978;
	int32_t x424 = 216187;
	int64_t t92 = -118908672762765LL;

	t92 = (((x421%x422)+x423)-x424);

	if (t92 != -719742165LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = -42216710312LL;
	int32_t x426 = -6692539;
	static int64_t x427 = -994LL;
	volatile int32_t x428 = INT32_MIN;

	t93 = (((x425%x426)+x427)-x428);

	if (t93 != 2147308354LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	static int8_t x432 = -1;
	volatile int32_t t94 = 115117933;

	t94 = (((x429%x430)+x431)-x432);

	if (t94 != 2147483640) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = -1LL;
	int32_t x434 = -1837;
	volatile int64_t t95 = -604218969LL;

	t95 = (((x433%x434)+x435)-x436);

	if (t95 != -4294967254LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x437 = 38;
	uint32_t x438 = UINT32_MAX;
	uint16_t x439 = 10U;
	static int32_t x440 = INT32_MIN;
	uint32_t t96 = 95045U;

	t96 = (((x437%x438)+x439)-x440);

	if (t96 != 2147483696U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x441 = 1U;
	volatile int32_t x442 = INT32_MAX;
	int8_t x443 = 1;
	int32_t t97 = -1;

	t97 = (((x441%x442)+x443)-x444);

	if (t97 != 3032) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = INT64_MIN;
	int8_t x446 = 4;
	uint32_t x447 = 134192U;
	int8_t x448 = -1;
	volatile int64_t t98 = -174379681786834LL;

	t98 = (((x445%x446)+x447)-x448);

	if (t98 != 134193LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = INT32_MIN;
	volatile uint64_t x450 = 251LLU;
	uint64_t x451 = 15591LLU;
	int8_t x452 = -37;
	volatile uint64_t t99 = 5615202LLU;

	t99 = (((x449%x450)+x451)-x452);

	if (t99 != 15761LLU) { NG(); } else { ; }
	
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

