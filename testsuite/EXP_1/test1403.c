#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int64_t t0 = 235LL;
volatile int64_t t1 = 6550342462309LL;
static int8_t x13 = INT8_MAX;
uint64_t x15 = 32104425LLU;
int16_t x21 = -1;
uint64_t x22 = UINT64_MAX;
volatile uint32_t t6 = 423U;
int64_t t7 = 3298636LL;
int32_t x35 = 15149310;
volatile int8_t x37 = -1;
int32_t x38 = -103995;
int32_t x43 = -1;
int64_t t10 = 2695443571LL;
volatile uint16_t x47 = 1U;
volatile int32_t t12 = 34570;
volatile int64_t t14 = -888271LL;
static uint32_t x65 = 132242U;
int8_t x74 = INT8_MIN;
int32_t t20 = -32770;
volatile uint32_t x93 = UINT32_MAX;
int32_t x95 = -1;
int64_t x96 = -93200LL;
static uint64_t x97 = 1916919415979LLU;
int8_t x101 = 0;
volatile int32_t x108 = 2130229;
static int8_t x112 = 4;
volatile int32_t x114 = INT32_MIN;
int8_t x115 = INT8_MAX;
int32_t t27 = 72706;
int16_t x118 = INT16_MAX;
uint64_t x120 = 106886266182017LLU;
uint16_t x124 = UINT16_MAX;
int32_t x129 = 52612504;
volatile int16_t x132 = 14;
int32_t x140 = INT32_MAX;
volatile int64_t t33 = -89LL;
uint16_t x146 = 370U;
static int16_t x148 = INT16_MIN;
static int32_t t37 = -116817609;
int32_t x157 = INT32_MIN;
static int8_t x158 = -1;
volatile int32_t x171 = -1;
int8_t x181 = INT8_MIN;
int32_t t44 = 16247;
int16_t x187 = INT16_MIN;
int8_t x193 = -1;
int16_t x194 = 0;
static int64_t t47 = 27880062014LL;
static volatile int8_t x208 = INT8_MAX;
static uint64_t x214 = 3LLU;
int16_t x216 = INT16_MAX;
int16_t x225 = INT16_MIN;
int64_t x227 = INT64_MIN;
int32_t x228 = -1;
int32_t x233 = INT32_MIN;
static int64_t x236 = -1LL;
volatile int64_t t56 = -43101LL;
static int16_t x247 = INT16_MIN;
int64_t x256 = -1LL;
static uint64_t x258 = UINT64_MAX;
volatile int64_t x260 = INT64_MAX;
int8_t x269 = -1;
volatile int32_t x270 = 118681;
static uint32_t t64 = UINT32_MAX;
int16_t x273 = INT16_MAX;
volatile uint64_t x274 = UINT64_MAX;
int16_t x275 = -308;
static uint8_t x276 = 2U;
static int64_t x278 = INT64_MIN;
uint8_t x289 = 7U;
uint64_t x290 = UINT64_MAX;
static int8_t x297 = INT8_MIN;
uint8_t x299 = 3U;
volatile int32_t t70 = INT32_MIN;
volatile int8_t x302 = INT8_MIN;
volatile int16_t x313 = INT16_MIN;
static int16_t x319 = 10;
volatile int32_t x321 = INT32_MAX;
uint16_t x327 = 234U;
volatile uint64_t x328 = 1948209587626976LLU;
volatile int32_t x335 = 4;
volatile uint8_t x337 = 20U;
int64_t x340 = INT64_MIN;
static int64_t t79 = INT64_MIN;
uint8_t x342 = 6U;
int32_t t80 = -19208;
int8_t x353 = INT8_MAX;
volatile int64_t x355 = -1LL;
uint16_t x357 = 20U;
volatile uint16_t x358 = 58U;
static int32_t x375 = INT32_MIN;
static uint16_t x379 = 3626U;
int32_t x382 = 34;
volatile int64_t t88 = 5499LL;
uint8_t x388 = UINT8_MAX;
volatile int64_t t89 = 23646530227LL;
uint32_t x392 = 15458601U;
static int16_t x393 = -662;
volatile uint32_t x396 = UINT32_MAX;
int64_t x400 = 7494606LL;
volatile uint16_t x404 = UINT16_MAX;
static int16_t x412 = 1;
int16_t x414 = INT16_MIN;
static int64_t x418 = INT64_MAX;
uint8_t x422 = 78U;
static uint8_t x425 = 6U;
volatile int32_t x427 = INT32_MIN;
uint16_t x428 = 1U;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x3 = INT32_MIN;
	static int64_t x4 = 61473LL;

	t0 = (((x1<x2)/x3)|x4);

	if (t0 != 61473LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -30;
	int64_t x6 = -7LL;
	int16_t x7 = INT16_MIN;
	int64_t x8 = -821626249345845LL;

	t1 = (((x5<x6)/x7)|x8);

	if (t1 != -821626249345845LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static volatile uint64_t x10 = 34199LLU;
	static int64_t x11 = -16LL;
	int8_t x12 = -1;
	int64_t t2 = 275037LL;

	t2 = (((x9<x10)/x11)|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 7115483U;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 474LLU;

	t3 = (((x13<x14)/x15)|x16);

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 624;
	volatile int16_t x18 = INT16_MIN;
	volatile uint16_t x19 = UINT16_MAX;
	int16_t x20 = -1;
	volatile int32_t t4 = -1097722;

	t4 = (((x17<x18)/x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = UINT64_MAX;
	uint8_t x24 = 56U;
	uint64_t t5 = 318166703173317LLU;

	t5 = (((x21<x22)/x23)|x24);

	if (t5 != 56LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = 39105U;
	static int32_t x28 = INT32_MIN;

	t6 = (((x25<x26)/x27)|x28);

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	volatile uint8_t x30 = 1U;
	int32_t x31 = 11;
	int64_t x32 = -1LL;

	t7 = (((x29<x30)/x31)|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -55;
	static volatile int16_t x34 = 4495;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (((x33<x34)/x35)|x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x39 = 28407U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

	t9 = (((x37<x38)/x39)|x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int64_t x42 = INT64_MAX;
	int64_t x44 = 8LL;

	t10 = (((x41<x42)/x43)|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	int16_t x46 = -1;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = (((x45<x46)/x47)|x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	volatile int64_t x50 = INT64_MIN;
	int32_t x51 = 2;
	volatile int32_t x52 = 17419310;

	t12 = (((x49<x50)/x51)|x52);

	if (t12 != 17419310) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MAX;
	int8_t x55 = -6;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -169850247427289197LL;

	t13 = (((x53<x54)/x55)|x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -1LL;
	uint64_t x58 = 27257799467515933LLU;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;

	t14 = (((x57<x58)/x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 3;
	volatile int8_t x62 = -1;
	static int64_t x63 = INT64_MIN;
	uint8_t x64 = 17U;
	volatile int64_t t15 = -111084169526110025LL;

	t15 = (((x61<x62)/x63)|x64);

	if (t15 != 17LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = INT16_MIN;
	uint32_t x67 = 1822887U;
	int64_t x68 = -373LL;
	static volatile int64_t t16 = -106740042525227LL;

	t16 = (((x65<x66)/x67)|x68);

	if (t16 != -373LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 11964;
	uint8_t x70 = 0U;
	uint32_t x71 = 297U;
	int16_t x72 = -152;
	volatile uint32_t t17 = 129742U;

	t17 = (((x69<x70)/x71)|x72);

	if (t17 != 4294967144U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x75 = 1U;
	static int32_t x76 = INT32_MAX;
	static int32_t t18 = INT32_MAX;

	t18 = (((x73<x74)/x75)|x76);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 10153027;
	static int64_t x78 = 1452LL;
	uint16_t x79 = UINT16_MAX;
	static int32_t x80 = INT32_MIN;
	static int32_t t19 = INT32_MIN;

	t19 = (((x77<x78)/x79)|x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int16_t x82 = -1;
	int32_t x83 = 2682833;
	static uint8_t x84 = 5U;

	t20 = (((x81<x82)/x83)|x84);

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 9U;
	static volatile int32_t x90 = 27023;
	uint64_t x91 = 14465583690968LLU;
	static int8_t x92 = -1;
	uint64_t t21 = UINT64_MAX;

	t21 = (((x89<x90)/x91)|x92);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MAX;
	int64_t t22 = -208604LL;

	t22 = (((x93<x94)/x95)|x96);

	if (t22 != -93200LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = INT32_MIN;
	static int8_t x99 = -1;
	volatile int64_t x100 = -1LL;
	static volatile int64_t t23 = -444543LL;

	t23 = (((x97<x98)/x99)|x100);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x102 = -37;
	uint16_t x103 = 55U;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (((x101<x102)/x103)|x104);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1LL;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t t25 = 101296574541LLU;

	t25 = (((x105<x106)/x107)|x108);

	if (t25 != 2130229LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = -1;
	volatile uint32_t x110 = UINT32_MAX;
	uint64_t x111 = 5397906811054966748LLU;
	uint64_t t26 = 2LLU;

	t26 = (((x109<x110)/x111)|x112);

	if (t26 != 4LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static int16_t x116 = -574;

	t27 = (((x113<x114)/x115)|x116);

	if (t27 != -574) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -24;
	int64_t x119 = 129968168LL;
	uint64_t t28 = 2095343678968LLU;

	t28 = (((x117<x118)/x119)|x120);

	if (t28 != 106886266182017LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = -62153;
	uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 14U;
	volatile int32_t t29 = 15;

	t29 = (((x121<x122)/x123)|x124);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 14U;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t30 = -8314128;

	t30 = (((x125<x126)/x127)|x128);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	volatile int32_t t31 = 6262129;

	t31 = (((x129<x130)/x131)|x132);

	if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 2012U;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t32 = INT32_MAX;

	t32 = (((x133<x134)/x135)|x136);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x137 = 32069432LLU;
	int8_t x138 = 14;
	int64_t x139 = INT64_MAX;

	t33 = (((x137<x138)/x139)|x140);

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MIN;
	uint32_t x142 = 395903U;
	uint32_t x143 = 590U;
	static volatile uint32_t x144 = 108005U;
	uint32_t t34 = 7625962U;

	t34 = (((x141<x142)/x143)|x144);

	if (t34 != 108005U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x145 = 100U;
	volatile int16_t x147 = INT16_MAX;
	volatile int32_t t35 = 18620762;

	t35 = (((x145<x146)/x147)|x148);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 195623LLU;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = 2521259U;
	static uint32_t x152 = 21809U;
	volatile uint32_t t36 = 29U;

	t36 = (((x149<x150)/x151)|x152);

	if (t36 != 21809U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	volatile uint16_t x154 = UINT16_MAX;
	uint8_t x155 = 1U;
	int16_t x156 = 87;

	t37 = (((x153<x154)/x155)|x156);

	if (t37 != 87) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x159 = INT32_MAX;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = (((x157<x158)/x159)|x160);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x161 = UINT8_MAX;
	static uint64_t x162 = 283727524LLU;
	int32_t x163 = INT32_MIN;
	volatile int64_t x164 = 643111LL;
	volatile int64_t t39 = -9LL;

	t39 = (((x161<x162)/x163)|x164);

	if (t39 != 643111LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = INT32_MIN;
	uint32_t x166 = 1047U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (((x165<x166)/x167)|x168);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 495563U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t41 = -28247;

	t41 = (((x169<x170)/x171)|x172);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = -1;
	int16_t x174 = -1;
	static int64_t x175 = INT64_MIN;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = (((x173<x174)/x175)|x176);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 26U;
	int64_t x178 = INT64_MIN;
	int64_t x179 = 1LL;
	uint32_t x180 = 122275683U;
	int64_t t43 = -236978986416LL;

	t43 = (((x177<x178)/x179)|x180);

	if (t43 != 122275683LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x182 = 22890U;
	int8_t x183 = 1;
	uint8_t x184 = 0U;

	t44 = (((x181<x182)/x183)|x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = 15378895;
	uint32_t x186 = UINT32_MAX;
	static int8_t x188 = INT8_MIN;
	int32_t t45 = -521;

	t45 = (((x185<x186)/x187)|x188);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t46 = -4101363;

	t46 = (((x193<x194)/x195)|x196);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = -20978;
	int32_t x198 = INT32_MIN;
	int64_t x199 = INT64_MAX;
	int8_t x200 = INT8_MAX;

	t47 = (((x197<x198)/x199)|x200);

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 2847U;
	int64_t x202 = -7918595288LL;
	uint64_t x203 = 155848280328LLU;
	uint16_t x204 = 1U;
	volatile uint64_t t48 = 1901380705618359199LLU;

	t48 = (((x201<x202)/x203)|x204);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = 69;
	int8_t x206 = 0;
	int16_t x207 = -1;
	int32_t t49 = -473776556;

	t49 = (((x205<x206)/x207)|x208);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = -2078948LL;
	uint32_t x210 = 920U;
	int16_t x211 = INT16_MAX;
	volatile uint64_t x212 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (((x209<x210)/x211)|x212);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t51 = -771124218;

	t51 = (((x213<x214)/x215)|x216);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = INT8_MAX;
	int64_t t52 = -46266371619412005LL;

	t52 = (((x217<x218)/x219)|x220);

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int8_t x222 = -12;
	int16_t x223 = INT16_MIN;
	int8_t x224 = -1;
	volatile int32_t t53 = 155;

	t53 = (((x221<x222)/x223)|x224);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x226 = UINT32_MAX;
	static volatile int64_t t54 = 362972032LL;

	t54 = (((x225<x226)/x227)|x228);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 28630928U;
	static int8_t x231 = INT8_MIN;
	uint16_t x232 = 102U;
	volatile int32_t t55 = -660;

	t55 = (((x229<x230)/x231)|x232);

	if (t55 != 102) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x234 = INT32_MIN;
	static int64_t x235 = -1LL;

	t56 = (((x233<x234)/x235)|x236);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -58;
	static int32_t x238 = 7;
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	uint32_t t57 = UINT32_MAX;

	t57 = (((x237<x238)/x239)|x240);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -1108532233698814LL;
	static int32_t x246 = INT32_MIN;
	volatile uint8_t x248 = 3U;
	int32_t t58 = -20199441;

	t58 = (((x245<x246)/x247)|x248);

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = -1472;
	static uint32_t x251 = 7668U;
	volatile uint32_t x252 = 81111U;
	static uint32_t t59 = 217U;

	t59 = (((x249<x250)/x251)|x252);

	if (t59 != 81111U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = UINT8_MAX;
	int8_t x254 = INT8_MIN;
	static uint16_t x255 = 24U;
	volatile int64_t t60 = 1294LL;

	t60 = (((x253<x254)/x255)|x256);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x257 = INT16_MIN;
	int8_t x259 = 21;
	volatile int64_t t61 = INT64_MAX;

	t61 = (((x257<x258)/x259)|x260);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x261 = INT64_MIN;
	int16_t x262 = 16;
	volatile int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MAX;
	int64_t t62 = 15LL;

	t62 = (((x261<x262)/x263)|x264);

	if (t62 != 127LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x265 = -1;
	volatile int32_t x266 = 1;
	int64_t x267 = -8LL;
	volatile uint32_t x268 = 1327655U;
	volatile int64_t t63 = -1LL;

	t63 = (((x265<x266)/x267)|x268);

	if (t63 != 1327655LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x271 = -1;
	volatile uint32_t x272 = 12U;

	t64 = (((x269<x270)/x271)|x272);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t t65 = 0;

	t65 = (((x273<x274)/x275)|x276);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x277 = 7832LLU;
	volatile uint64_t x279 = 5LLU;
	volatile int16_t x280 = 0;
	uint64_t t66 = 1077993427809LLU;

	t66 = (((x277<x278)/x279)|x280);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MAX;
	int16_t x283 = -13407;
	static volatile int32_t x284 = INT32_MIN;
	int32_t t67 = INT32_MIN;

	t67 = (((x281<x282)/x283)|x284);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x285 = 27;
	int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t68 = 121835467;

	t68 = (((x285<x286)/x287)|x288);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x291 = INT8_MAX;
	static int64_t x292 = INT64_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = (((x289<x290)/x291)|x292);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x298 = -1;
	volatile int32_t x300 = INT32_MIN;

	t70 = (((x297<x298)/x299)|x300);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	static volatile int16_t x303 = INT16_MAX;
	uint16_t x304 = 2279U;
	int32_t t71 = -880481;

	t71 = (((x301<x302)/x303)|x304);

	if (t71 != 2279) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = 1LL;
	volatile int32_t x311 = -961;
	static volatile uint16_t x312 = 75U;
	int32_t t72 = 629756376;

	t72 = (((x309<x310)/x311)|x312);

	if (t72 != 75) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = 14;
	int32_t x316 = INT32_MIN;
	int32_t t73 = INT32_MIN;

	t73 = (((x313<x314)/x315)|x316);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	volatile int16_t x318 = 3;
	volatile int8_t x320 = INT8_MIN;
	int32_t t74 = 14;

	t74 = (((x317<x318)/x319)|x320);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x322 = INT8_MAX;
	static int32_t x323 = INT32_MIN;
	static volatile int64_t x324 = -1LL;
	int64_t t75 = -46582994202LL;

	t75 = (((x321<x322)/x323)|x324);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 354988200959587920LLU;
	int8_t x326 = INT8_MIN;
	static uint64_t t76 = 327LLU;

	t76 = (((x325<x326)/x327)|x328);

	if (t76 != 1948209587626976LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 1783U;
	volatile int8_t x332 = 0;
	uint32_t t77 = 233476899U;

	t77 = (((x329<x330)/x331)|x332);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = -1;
	int64_t x334 = INT64_MIN;
	uint32_t x336 = 80U;
	uint32_t t78 = 232444659U;

	t78 = (((x333<x334)/x335)|x336);

	if (t78 != 80U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = INT16_MIN;
	volatile int16_t x339 = 16;

	t79 = (((x337<x338)/x339)|x340);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x341 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;

	t80 = (((x341<x342)/x343)|x344);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x349 = 7158117646LLU;
	int16_t x350 = 0;
	int32_t x351 = -6161031;
	int32_t x352 = INT32_MIN;
	static int32_t t81 = INT32_MIN;

	t81 = (((x349<x350)/x351)|x352);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x354 = -178358667;
	int64_t x356 = 32215203546281580LL;
	volatile int64_t t82 = -4704978883LL;

	t82 = (((x353<x354)/x355)|x356);

	if (t82 != 32215203546281580LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x359 = 618346507469271769LL;
	int16_t x360 = 17;
	int64_t t83 = 10709106350LL;

	t83 = (((x357<x358)/x359)|x360);

	if (t83 != 17LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = UINT32_MAX;
	uint64_t x367 = 213355050LLU;
	uint64_t x368 = 83196939LLU;
	uint64_t t84 = 80666380349363083LLU;

	t84 = (((x365<x366)/x367)|x368);

	if (t84 != 83196939LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = INT16_MAX;
	uint32_t x370 = 8446U;
	int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = (((x369<x370)/x371)|x372);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = 47048598690LL;
	volatile int32_t x374 = 965539770;
	volatile int16_t x376 = 25;
	volatile int32_t t86 = 15928;

	t86 = (((x373<x374)/x375)|x376);

	if (t86 != 25) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x377 = -190005;
	int8_t x378 = -1;
	static int16_t x380 = 203;
	static int32_t t87 = -1135459;

	t87 = (((x377<x378)/x379)|x380);

	if (t87 != 203) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = 417211316635360LLU;
	volatile int64_t x383 = 172409315503LL;
	volatile uint32_t x384 = UINT32_MAX;

	t88 = (((x381<x382)/x383)|x384);

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x385 = INT64_MIN;
	uint32_t x386 = 22U;
	volatile int64_t x387 = 6127866294094LL;

	t89 = (((x385<x386)/x387)|x388);

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = -1LL;
	static int64_t x390 = -1LL;
	uint32_t x391 = 13899318U;
	volatile uint32_t t90 = 3080U;

	t90 = (((x389<x390)/x391)|x392);

	if (t90 != 15458601U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MIN;
	int64_t t91 = -932833043450766335LL;

	t91 = (((x393<x394)/x395)|x396);

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MAX;
	volatile int64_t x399 = -1LL;
	static volatile int64_t t92 = -966LL;

	t92 = (((x397<x398)/x399)|x400);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x401 = INT64_MIN;
	uint32_t x402 = 14554U;
	int32_t x403 = INT32_MAX;
	static int32_t t93 = -405;

	t93 = (((x401<x402)/x403)|x404);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	uint64_t x408 = 0LLU;
	static uint64_t t94 = 72218814LLU;

	t94 = (((x405<x406)/x407)|x408);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = -4;
	int8_t x410 = INT8_MIN;
	int8_t x411 = 2;
	volatile int32_t t95 = 1;

	t95 = (((x409<x410)/x411)|x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = INT64_MIN;
	int8_t x415 = 13;
	static uint16_t x416 = UINT16_MAX;
	static int32_t t96 = -17;

	t96 = (((x413<x414)/x415)|x416);

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x417 = INT64_MAX;
	static uint64_t x419 = 14LLU;
	volatile uint32_t x420 = 43017U;
	uint64_t t97 = 48517231491LLU;

	t97 = (((x417<x418)/x419)|x420);

	if (t97 != 43017LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x421 = UINT64_MAX;
	int64_t x423 = 22LL;
	volatile int8_t x424 = INT8_MAX;
	static volatile int64_t t98 = 5622LL;

	t98 = (((x421<x422)/x423)|x424);

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x426 = INT8_MIN;
	volatile int32_t t99 = 5602748;

	t99 = (((x425<x426)/x427)|x428);

	if (t99 != 1) { NG(); } else { ; }
	
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

