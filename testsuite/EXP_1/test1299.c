#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = 24724417312362LLU;
volatile uint64_t t0 = UINT64_MAX;
volatile int32_t t1 = 2;
volatile int8_t x15 = -1;
int32_t t3 = 52581956;
int16_t x24 = INT16_MIN;
int16_t x26 = -7;
volatile uint16_t x27 = 7U;
int8_t x30 = INT8_MIN;
uint8_t x35 = 39U;
volatile uint8_t x37 = 2U;
int16_t x39 = -1;
volatile int64_t x42 = INT64_MAX;
int8_t x47 = INT8_MIN;
static volatile int64_t t11 = -488456285219204LL;
uint32_t x52 = 882258177U;
static volatile int32_t t13 = -93;
int64_t x68 = INT64_MAX;
int16_t x81 = INT16_MIN;
int8_t x86 = INT8_MAX;
uint32_t x92 = 1060909649U;
uint8_t x98 = 35U;
int16_t x100 = -1;
int32_t t26 = -295042094;
int64_t x112 = INT64_MIN;
int8_t x113 = 1;
volatile int32_t x114 = 291271;
volatile int32_t t28 = -36835590;
static volatile int64_t t29 = INT64_MIN;
int8_t x122 = -1;
uint8_t x124 = 41U;
int32_t x128 = 14518;
int32_t x133 = INT32_MAX;
int8_t x134 = -1;
int32_t x139 = 3943396;
uint64_t x142 = 1LLU;
volatile uint16_t x148 = 81U;
int64_t x155 = INT64_MAX;
volatile int64_t x167 = 64375LL;
int64_t x170 = -1673767465203020LL;
int64_t x173 = 247077388LL;
static int16_t x174 = INT16_MIN;
static uint16_t x177 = 21215U;
uint8_t x186 = 53U;
int32_t x187 = -1;
static uint16_t x190 = 6U;
uint16_t x192 = 856U;
uint8_t x193 = UINT8_MAX;
uint8_t x197 = 14U;
int8_t x203 = -1;
volatile uint32_t x211 = UINT32_MAX;
uint16_t x212 = UINT16_MAX;
volatile int32_t t53 = -174858244;
static int8_t x220 = -1;
uint32_t x225 = 29255U;
static uint32_t x230 = UINT32_MAX;
int64_t t58 = 2044LL;
uint32_t x238 = 733U;
uint64_t x242 = 4279668123981021LLU;
int16_t x244 = -76;
static int32_t x250 = -2073066;
uint16_t x254 = 2310U;
uint32_t t64 = 5U;
volatile int64_t x264 = -673127587066LL;
volatile int64_t x272 = INT64_MIN;
volatile uint8_t x276 = 7U;
static volatile int16_t x284 = -62;
int8_t x285 = INT8_MIN;
int16_t x287 = INT16_MIN;
int8_t x288 = INT8_MIN;
int16_t x289 = -2;
int32_t x293 = INT32_MIN;
int64_t x296 = INT64_MIN;
uint64_t x302 = 67580946670563228LLU;
int8_t x306 = -1;
volatile int64_t t76 = INT64_MIN;
int8_t x314 = INT8_MIN;
int32_t t79 = -5948065;
int8_t x334 = 4;
volatile int32_t x337 = INT32_MIN;
int64_t x345 = 221605216486035287LL;
uint64_t x346 = UINT64_MAX;
int32_t x348 = -1;
volatile uint64_t x349 = 3924LLU;
int16_t x354 = 2;
int8_t x365 = INT8_MAX;
volatile int32_t t91 = INT32_MAX;
volatile int8_t x373 = INT8_MIN;
static int16_t x374 = INT16_MAX;
uint16_t x381 = 148U;
int8_t x388 = -1;
int64_t x392 = -3988413400679055955LL;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int64_t x2 = -1LL;
	uint64_t x4 = UINT64_MAX;

	t0 = (((x1==x2)<x3)|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint64_t x6 = 30470290259LLU;
	int8_t x7 = INT8_MIN;
	static uint8_t x8 = UINT8_MAX;

	t1 = (((x5==x6)<x7)|x8);

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = -132;
	int32_t x11 = INT32_MIN;
	int32_t x12 = 11700;
	volatile int32_t t2 = 20112;

	t2 = (((x9==x10)<x11)|x12);

	if (t2 != 11700) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 107LLU;
	int32_t x14 = -1;
	uint16_t x16 = UINT16_MAX;

	t3 = (((x13==x14)<x15)|x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 107419675LL;
	int16_t x18 = 61;
	volatile uint16_t x19 = 2U;
	static int16_t x20 = -1;
	static int32_t t4 = 1;

	t4 = (((x17==x18)<x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	uint32_t x22 = 36559023U;
	uint32_t x23 = 34878648U;
	volatile int32_t t5 = -348;

	t5 = (((x21==x22)<x23)|x24);

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 143050LL;
	uint8_t x28 = 0U;
	static volatile int32_t t6 = -267;

	t6 = (((x25==x26)<x27)|x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	int8_t x31 = -2;
	int32_t x32 = -119261;
	volatile int32_t t7 = 35;

	t7 = (((x29==x30)<x31)|x32);

	if (t7 != -119261) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MIN;
	int16_t x36 = 22;
	volatile int32_t t8 = 156;

	t8 = (((x33==x34)<x35)|x36);

	if (t8 != 23) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -26883LL;
	static int16_t x40 = -1;
	int32_t t9 = -2504727;

	t9 = (((x37==x38)<x39)|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -45703299;
	int8_t x43 = -1;
	static int8_t x44 = -1;
	static int32_t t10 = 654;

	t10 = (((x41==x42)<x43)|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = -125LL;
	int64_t x48 = -70111223953LL;

	t11 = (((x45==x46)<x47)|x48);

	if (t11 != -70111223953LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -28538139;
	int16_t x50 = INT16_MAX;
	uint8_t x51 = 0U;
	uint32_t t12 = 1U;

	t12 = (((x49==x50)<x51)|x52);

	if (t12 != 882258177U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MIN;
	int32_t x56 = -1;

	t13 = (((x53==x54)<x55)|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static uint64_t x58 = UINT64_MAX;
	volatile int64_t x59 = 60547437211129LL;
	volatile uint64_t x60 = 301LLU;
	volatile uint64_t t14 = 868479LLU;

	t14 = (((x57==x58)<x59)|x60);

	if (t14 != 301LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int64_t x62 = 2598LL;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MAX;
	int64_t t15 = INT64_MAX;

	t15 = (((x61==x62)<x63)|x64);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 0U;
	static int64_t x66 = INT64_MAX;
	uint16_t x67 = 4452U;
	int64_t t16 = INT64_MAX;

	t16 = (((x65==x66)<x67)|x68);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	volatile int16_t x70 = INT16_MAX;
	uint8_t x71 = 1U;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 4645;

	t17 = (((x69==x70)<x71)|x72);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 3U;
	uint16_t x74 = 381U;
	uint8_t x75 = UINT8_MAX;
	static int32_t x76 = 1130875;
	static volatile int32_t t18 = -248230904;

	t18 = (((x73==x74)<x75)|x76);

	if (t18 != 1130875) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int16_t x78 = 202;
	static volatile uint16_t x79 = 1U;
	int16_t x80 = -1;
	volatile int32_t t19 = -65895180;

	t19 = (((x77==x78)<x79)|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -135355LL;
	int16_t x83 = -1;
	int64_t x84 = -1LL;
	int64_t t20 = 698LL;

	t20 = (((x81==x82)<x83)|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = INT64_MIN;
	volatile int64_t t21 = -15057LL;

	t21 = (((x85==x86)<x87)|x88);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 92382732196428141LLU;
	static int16_t x90 = -5754;
	uint32_t x91 = 63U;
	volatile uint32_t t22 = 6029U;

	t22 = (((x89==x90)<x91)|x92);

	if (t22 != 1060909649U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	int64_t x94 = INT64_MAX;
	uint16_t x95 = 30U;
	volatile int16_t x96 = INT16_MIN;
	int32_t t23 = -464346599;

	t23 = (((x93==x94)<x95)|x96);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	volatile uint64_t x99 = 2904917448697246LLU;
	static volatile int32_t t24 = 231;

	t24 = (((x97==x98)<x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 620380698733434LLU;
	int32_t x102 = INT32_MIN;
	int8_t x103 = -1;
	static volatile int32_t x104 = INT32_MAX;
	int32_t t25 = INT32_MAX;

	t25 = (((x101==x102)<x103)|x104);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = 242;
	uint64_t x107 = 566572482800479274LLU;
	volatile int8_t x108 = -1;

	t26 = (((x105==x106)<x107)|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint8_t x110 = 103U;
	uint8_t x111 = UINT8_MAX;
	int64_t t27 = 72002174LL;

	t27 = (((x109==x110)<x111)|x112);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;

	t28 = (((x113==x114)<x115)|x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 466777LLU;
	static int32_t x118 = -1371;
	volatile int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MIN;

	t29 = (((x117==x118)<x119)|x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x123 = -3;
	volatile int32_t t30 = 0;

	t30 = (((x121==x122)<x123)|x124);

	if (t30 != 41) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = -1;
	volatile int16_t x127 = 53;
	volatile int32_t t31 = 18918;

	t31 = (((x125==x126)<x127)|x128);

	if (t31 != 14519) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = 0;
	int8_t x131 = -1;
	int64_t x132 = 1LL;
	int64_t t32 = 95169972362357LL;

	t32 = (((x129==x130)<x131)|x132);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x135 = INT16_MIN;
	uint64_t x136 = 13099LLU;
	volatile uint64_t t33 = 16721600838347LLU;

	t33 = (((x133==x134)<x135)|x136);

	if (t33 != 13099LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -180351555718052350LL;
	int8_t x138 = INT8_MIN;
	static uint8_t x140 = UINT8_MAX;
	int32_t t34 = -45721737;

	t34 = (((x137==x138)<x139)|x140);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 24390U;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = 4U;
	static int32_t t35 = -60;

	t35 = (((x141==x142)<x143)|x144);

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 368712657U;
	static int64_t x146 = INT64_MAX;
	uint8_t x147 = UINT8_MAX;
	int32_t t36 = -186610;

	t36 = (((x145==x146)<x147)|x148);

	if (t36 != 81) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -2;
	uint32_t x150 = UINT32_MAX;
	static volatile int32_t x151 = INT32_MAX;
	int64_t x152 = -1LL;
	volatile int64_t t37 = -100LL;

	t37 = (((x149==x150)<x151)|x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	volatile uint64_t x154 = UINT64_MAX;
	int64_t x156 = -1LL;
	volatile int64_t t38 = -1LL;

	t38 = (((x153==x154)<x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	uint16_t x158 = 14U;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = -1;
	volatile int32_t t39 = -1142;

	t39 = (((x157==x158)<x159)|x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 3U;
	volatile uint64_t x162 = UINT64_MAX;
	int32_t x163 = -3048110;
	int16_t x164 = -1;
	int32_t t40 = 3290;

	t40 = (((x161==x162)<x163)|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	static uint16_t x166 = 11634U;
	uint32_t x168 = 1U;
	uint32_t t41 = 41155U;

	t41 = (((x165==x166)<x167)|x168);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	static int64_t x171 = INT64_MAX;
	int32_t x172 = 7249510;
	volatile int32_t t42 = 29;

	t42 = (((x169==x170)<x171)|x172);

	if (t42 != 7249511) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x175 = 50783227LLU;
	static volatile int64_t x176 = INT64_MIN;
	volatile int64_t t43 = -779431LL;

	t43 = (((x173==x174)<x175)|x176);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -1;
	volatile int32_t x179 = INT32_MAX;
	int8_t x180 = -1;
	int32_t t44 = -500594;

	t44 = (((x177==x178)<x179)|x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1993285;
	int16_t x182 = 572;
	int16_t x183 = INT16_MIN;
	int32_t x184 = 160289071;
	static int32_t t45 = 54;

	t45 = (((x181==x182)<x183)|x184);

	if (t45 != 160289071) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint32_t x188 = 64253U;
	uint32_t t46 = 71U;

	t46 = (((x185==x186)<x187)|x188);

	if (t46 != 64253U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 0;
	static volatile int32_t x191 = -1;
	int32_t t47 = 127442;

	t47 = (((x189==x190)<x191)|x192);

	if (t47 != 856) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MAX;
	uint32_t x195 = 1835597U;
	static volatile uint8_t x196 = 0U;
	int32_t t48 = 3;

	t48 = (((x193==x194)<x195)|x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	uint32_t x199 = UINT32_MAX;
	static volatile uint32_t x200 = 3063U;
	uint32_t t49 = 220U;

	t49 = (((x197==x198)<x199)|x200);

	if (t49 != 3063U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	volatile uint16_t x202 = 4U;
	int16_t x204 = INT16_MAX;
	int32_t t50 = 22563;

	t50 = (((x201==x202)<x203)|x204);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 93;
	static int64_t x206 = -1LL;
	int64_t x207 = -393157845239LL;
	int16_t x208 = -1;
	int32_t t51 = -421825;

	t51 = (((x205==x206)<x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	static int32_t x210 = 175;
	volatile int32_t t52 = -2081;

	t52 = (((x209==x210)<x211)|x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 3U;
	int8_t x214 = -1;
	int16_t x215 = 12459;
	int8_t x216 = INT8_MIN;

	t53 = (((x213==x214)<x215)|x216);

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -2;
	uint32_t x218 = 88075U;
	int16_t x219 = -1;
	int32_t t54 = 58300036;

	t54 = (((x217==x218)<x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 20U;
	int8_t x222 = -57;
	int32_t x223 = -1;
	int64_t x224 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = (((x221==x222)<x223)|x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	static volatile int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MAX;
	int32_t t56 = 3;

	t56 = (((x225==x226)<x227)|x228);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x231 = UINT32_MAX;
	static uint16_t x232 = 316U;
	volatile int32_t t57 = -536119;

	t57 = (((x229==x230)<x231)|x232);

	if (t57 != 317) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -1LL;
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -7756141LL;

	t58 = (((x233==x234)<x235)|x236);

	if (t58 != -7756141LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static volatile int32_t x239 = -1;
	static uint64_t x240 = 6432434058541482573LLU;
	uint64_t t59 = 1120215754888LLU;

	t59 = (((x237==x238)<x239)|x240);

	if (t59 != 6432434058541482573LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	static int32_t x243 = -15217;
	int32_t t60 = 24642;

	t60 = (((x241==x242)<x243)|x244);

	if (t60 != -76) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MIN;
	int64_t x247 = 7144167050570LL;
	volatile int32_t x248 = -59;
	static volatile int32_t t61 = 44913;

	t61 = (((x245==x246)<x247)|x248);

	if (t61 != -59) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	static int8_t x251 = -1;
	int16_t x252 = 1;
	int32_t t62 = 3564795;

	t62 = (((x249==x250)<x251)|x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = 202;

	t63 = (((x253==x254)<x255)|x256);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	volatile uint64_t x258 = UINT64_MAX;
	static uint16_t x259 = 214U;
	static uint32_t x260 = 1333U;

	t64 = (((x257==x258)<x259)|x260);

	if (t64 != 1333U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 0;
	static uint64_t x262 = UINT64_MAX;
	static int64_t x263 = -1LL;
	volatile int64_t t65 = 522914LL;

	t65 = (((x261==x262)<x263)|x264);

	if (t65 != -673127587066LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = -2;
	int64_t x268 = INT64_MIN;
	int64_t t66 = INT64_MIN;

	t66 = (((x265==x266)<x267)|x268);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MAX;
	static int32_t x270 = -1;
	int64_t x271 = INT64_MAX;
	volatile int64_t t67 = -1737155250451274121LL;

	t67 = (((x269==x270)<x271)|x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 44482106U;
	volatile int64_t x274 = 77551109484LL;
	uint32_t x275 = 11573892U;
	int32_t t68 = -28236653;

	t68 = (((x273==x274)<x275)|x276);

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 7324;
	int32_t x278 = -777841394;
	uint32_t x279 = 430229U;
	uint8_t x280 = 1U;
	volatile int32_t t69 = 182074136;

	t69 = (((x277==x278)<x279)|x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 2996U;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	volatile int32_t t70 = -39918045;

	t70 = (((x281==x282)<x283)|x284);

	if (t70 != -62) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = 327516229162949LLU;
	int32_t t71 = 3986;

	t71 = (((x285==x286)<x287)|x288);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -398;
	uint8_t x291 = 7U;
	volatile int8_t x292 = 10;
	int32_t t72 = 179909782;

	t72 = (((x289==x290)<x291)|x292);

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x294 = 1U;
	uint16_t x295 = 175U;
	volatile int64_t t73 = -1636997645LL;

	t73 = (((x293==x294)<x295)|x296);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 40430LLU;
	static uint16_t x298 = 9247U;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = (((x297==x298)<x299)|x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	int32_t x303 = 54632;
	static int32_t x304 = -1;
	volatile int32_t t75 = -103;

	t75 = (((x301==x302)<x303)|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 27655U;
	int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;

	t76 = (((x305==x306)<x307)|x308);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x309 = -1;
	int8_t x310 = 1;
	int8_t x311 = 1;
	uint16_t x312 = 114U;
	volatile int32_t t77 = -27;

	t77 = (((x309==x310)<x311)|x312);

	if (t77 != 115) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 6424;
	volatile int8_t x315 = -1;
	int32_t x316 = 1624677;
	int32_t t78 = -14276;

	t78 = (((x313==x314)<x315)|x316);

	if (t78 != 1624677) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 28748284LLU;
	int8_t x318 = -9;
	uint64_t x319 = 1099908065797092995LLU;
	int8_t x320 = INT8_MIN;

	t79 = (((x317==x318)<x319)|x320);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -1;
	volatile int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	volatile uint8_t x324 = 47U;
	volatile int32_t t80 = -2;

	t80 = (((x321==x322)<x323)|x324);

	if (t80 != 47) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -1LL;
	uint8_t x326 = 0U;
	int8_t x327 = 46;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = 3749345;

	t81 = (((x325==x326)<x327)|x328);

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 11U;
	uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 837221603319505544LLU;
	int32_t x332 = 18227130;
	int32_t t82 = 127954791;

	t82 = (((x329==x330)<x331)|x332);

	if (t82 != 18227131) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x335 = -12437;
	volatile int16_t x336 = INT16_MIN;
	int32_t t83 = 101;

	t83 = (((x333==x334)<x335)|x336);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x338 = 3386;
	volatile int32_t x339 = INT32_MIN;
	int16_t x340 = -1;
	volatile int32_t t84 = -64173;

	t84 = (((x337==x338)<x339)|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	int64_t x343 = -1LL;
	volatile uint64_t x344 = 836801727193934LLU;
	static volatile uint64_t t85 = 1120LLU;

	t85 = (((x341==x342)<x343)|x344);

	if (t85 != 836801727193934LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x347 = INT32_MIN;
	volatile int32_t t86 = -42845;

	t86 = (((x345==x346)<x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	static int8_t x352 = INT8_MIN;
	static int32_t t87 = 14808;

	t87 = (((x349==x350)<x351)|x352);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int16_t x355 = 110;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t88 = -16328;

	t88 = (((x353==x354)<x355)|x356);

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = 2613;
	uint32_t x359 = 35U;
	int64_t x360 = INT64_MIN;
	int64_t t89 = -9582147287625LL;

	t89 = (((x357==x358)<x359)|x360);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 1U;
	static volatile int32_t x362 = 38;
	uint8_t x363 = 12U;
	static uint16_t x364 = 1U;
	static volatile int32_t t90 = -54706747;

	t90 = (((x361==x362)<x363)|x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	volatile int32_t x368 = INT32_MAX;

	t91 = (((x365==x366)<x367)|x368);

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = 1U;
	int16_t x371 = -1;
	int64_t x372 = INT64_MIN;
	int64_t t92 = INT64_MIN;

	t92 = (((x369==x370)<x371)|x372);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x375 = 32269650888250LLU;
	int32_t x376 = -1057387639;
	int32_t t93 = 487;

	t93 = (((x373==x374)<x375)|x376);

	if (t93 != -1057387639) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	static uint32_t x378 = 463571715U;
	int8_t x379 = -1;
	int8_t x380 = 1;
	static int32_t t94 = -1067094;

	t94 = (((x377==x378)<x379)|x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = 854;
	int8_t x383 = -1;
	int8_t x384 = 28;
	int32_t t95 = 345667999;

	t95 = (((x381==x382)<x383)|x384);

	if (t95 != 28) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static uint64_t x386 = 210LLU;
	uint32_t x387 = 18U;
	static int32_t t96 = -2656;

	t96 = (((x385==x386)<x387)|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 46U;
	int64_t x390 = 1820687LL;
	volatile int8_t x391 = INT8_MIN;
	static volatile int64_t t97 = 1LL;

	t97 = (((x389==x390)<x391)|x392);

	if (t97 != -3988413400679055955LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 23622751815LLU;
	volatile int64_t x394 = INT64_MAX;
	int16_t x395 = -16;
	int8_t x396 = INT8_MAX;
	volatile int32_t t98 = 62703842;

	t98 = (((x393==x394)<x395)|x396);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 3;
	int64_t x398 = INT64_MIN;
	volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = -1;
	int32_t t99 = -65347793;

	t99 = (((x397==x398)<x399)|x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

