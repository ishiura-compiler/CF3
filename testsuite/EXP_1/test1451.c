#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = INT64_MIN;
uint64_t x11 = 15942591363343LLU;
int8_t x12 = INT8_MIN;
volatile int32_t x14 = INT32_MIN;
uint16_t x18 = 1823U;
uint32_t x21 = 15221987U;
uint64_t x23 = UINT64_MAX;
int32_t t5 = 301244125;
int8_t x25 = INT8_MAX;
int32_t x32 = INT32_MAX;
volatile int32_t t7 = -41461;
volatile int64_t x45 = INT64_MIN;
int16_t x48 = INT16_MIN;
int64_t x49 = INT64_MIN;
uint32_t x61 = 835436741U;
static int32_t x67 = INT32_MAX;
static volatile int32_t x68 = -1;
int16_t x70 = INT16_MAX;
static uint64_t x76 = 63809151790LLU;
int32_t t18 = -40829695;
uint16_t x81 = 1005U;
int16_t x86 = INT16_MAX;
uint64_t x87 = UINT64_MAX;
uint16_t x92 = 7558U;
int8_t x93 = -1;
int32_t t24 = 98699;
uint32_t x101 = 1655146667U;
uint8_t x104 = 0U;
static int32_t x109 = -4052329;
volatile int64_t x113 = INT64_MAX;
static int8_t x120 = 2;
int8_t x123 = -31;
int32_t t33 = 11;
volatile uint16_t x142 = UINT16_MAX;
int32_t x152 = INT32_MAX;
int32_t x155 = INT32_MAX;
volatile int8_t x158 = INT8_MIN;
int32_t x163 = INT32_MAX;
volatile int32_t x164 = 519208;
static int32_t x174 = INT32_MIN;
int8_t x178 = INT8_MIN;
int16_t x179 = 1;
int8_t x184 = 2;
static uint8_t x187 = 3U;
int16_t x189 = -1;
int64_t x196 = INT64_MIN;
volatile uint8_t x198 = UINT8_MAX;
int8_t x200 = INT8_MIN;
int8_t x208 = 8;
volatile int16_t x219 = 1;
uint32_t x220 = 1099367928U;
int8_t x221 = -1;
static uint16_t x222 = UINT16_MAX;
volatile int32_t x224 = -1;
volatile int32_t x225 = INT32_MAX;
static volatile int64_t x232 = -1LL;
int8_t x242 = INT8_MIN;
uint16_t x252 = 832U;
int16_t x258 = -248;
uint64_t x262 = 3304100723LLU;
static int64_t x269 = -1LL;
int8_t x284 = 49;
uint32_t x291 = UINT32_MAX;
static int32_t t72 = -1;
uint16_t x295 = 27U;
uint8_t x296 = UINT8_MAX;
int16_t x298 = INT16_MIN;
int64_t x299 = INT64_MIN;
int8_t x300 = 27;
volatile int32_t t74 = -186;
int32_t x303 = INT32_MIN;
uint16_t x313 = UINT16_MAX;
int64_t x316 = 130189LL;
int32_t x319 = -97;
int32_t x324 = -1;
volatile int64_t x326 = 6518651LL;
static uint32_t x339 = UINT32_MAX;
volatile int8_t x342 = -2;
volatile int32_t x348 = INT32_MIN;
uint32_t x350 = 344985U;
volatile int32_t t87 = 261740987;
static int32_t x354 = INT32_MIN;
uint8_t x358 = UINT8_MAX;
int32_t t89 = -165958;
int32_t x364 = -180957;
int32_t t91 = 1006;
volatile uint64_t x369 = 860510LLU;
int32_t t92 = -23892226;
volatile int16_t x374 = INT16_MIN;
uint32_t x383 = 3055233U;
volatile int32_t t95 = 0;
static uint16_t x389 = 99U;
volatile uint8_t x398 = UINT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int64_t x2 = -28346278436463192LL;
	uint16_t x3 = 0U;
	int64_t x4 = -1LL;
	int32_t t0 = -3263250;

	t0 = (((x1<x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -630327LL;
	volatile int64_t x6 = -8961672696LL;
	int8_t x7 = 0;
	volatile uint32_t x8 = UINT32_MAX;
	int32_t t1 = -183;

	t1 = (((x5<x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = 19499971LL;
	int32_t t2 = 50517419;

	t2 = (((x9<x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 14102LLU;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 32U;
	int32_t t3 = 106;

	t3 = (((x13<x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 2U;
	int16_t x19 = -484;
	uint16_t x20 = 1U;
	static volatile int32_t t4 = -248;

	t4 = (((x17<x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 111817U;
	int64_t x24 = 57480537LL;

	t5 = (((x21<x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MAX;
	volatile int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	static int32_t t6 = 16599;

	t6 = (((x25<x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile uint32_t x30 = 28833270U;
	static int32_t x31 = INT32_MAX;

	t7 = (((x29<x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int8_t x34 = INT8_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	static int32_t x36 = -1;
	volatile int32_t t8 = 299264858;

	t8 = (((x33<x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -6;
	uint16_t x38 = 3152U;
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;
	int32_t t9 = -459801;

	t9 = (((x37<x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 191U;
	int32_t x43 = -428171;
	static uint64_t x44 = 1369034268986154960LLU;
	int32_t t10 = -407251721;

	t10 = (((x41<x42)==x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 1389;
	int16_t x47 = INT16_MIN;
	int32_t t11 = -10694;

	t11 = (((x45<x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = -1LL;
	static int8_t x51 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = -86;

	t12 = (((x49<x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 15U;
	int16_t x54 = INT16_MAX;
	volatile int8_t x55 = INT8_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -84380;

	t13 = (((x53<x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	volatile uint16_t x58 = 400U;
	static int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 228968222;

	t14 = (((x57<x58)==x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = 18071804LLU;
	static int32_t t15 = -1;

	t15 = (((x61<x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int64_t x66 = -9650873LL;
	int32_t t16 = -7599;

	t16 = (((x65<x66)==x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	static uint8_t x71 = 6U;
	int32_t x72 = -1;
	static volatile int32_t t17 = -484890683;

	t17 = (((x69<x70)==x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 3U;
	static int32_t x74 = 890;
	uint16_t x75 = UINT16_MAX;

	t18 = (((x73<x74)==x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile uint64_t x78 = 973LLU;
	volatile uint64_t x79 = UINT64_MAX;
	volatile uint64_t x80 = UINT64_MAX;
	volatile int32_t t19 = -38292661;

	t19 = (((x77<x78)==x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	int64_t x83 = INT64_MIN;
	static uint16_t x84 = 1992U;
	static int32_t t20 = -1070357591;

	t20 = (((x81<x82)==x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 15U;
	int8_t x88 = 1;
	int32_t t21 = 5688;

	t21 = (((x85<x86)==x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = 0;
	int64_t x91 = 328962LL;
	volatile int32_t t22 = -825730222;

	t22 = (((x89<x90)==x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	uint16_t x95 = 2U;
	uint16_t x96 = 26704U;
	int32_t t23 = -237;

	t23 = (((x93<x94)==x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 23700454LLU;
	static int64_t x98 = INT64_MAX;
	static int16_t x99 = 175;
	uint8_t x100 = 56U;

	t24 = (((x97<x98)==x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = INT32_MAX;
	int64_t x103 = INT64_MIN;
	int32_t t25 = 21;

	t25 = (((x101<x102)==x103)==x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -14586;
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 3U;
	volatile int8_t x108 = -60;
	volatile int32_t t26 = -121583504;

	t26 = (((x105<x106)==x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = 1873U;
	int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MAX;
	int32_t t27 = 15230;

	t27 = (((x109<x110)==x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -1LL;
	uint16_t x115 = 1383U;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = 960059;

	t28 = (((x113<x114)==x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 0U;
	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 1U;
	int32_t t29 = 49800;

	t29 = (((x117<x118)==x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MAX;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = -407754824;

	t30 = (((x121<x122)==x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 0;
	static volatile int8_t x126 = INT8_MIN;
	int8_t x127 = 8;
	volatile int64_t x128 = INT64_MIN;
	int32_t t31 = 8302982;

	t31 = (((x125<x126)==x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = UINT8_MAX;
	int8_t x131 = -6;
	uint32_t x132 = 115737U;
	volatile int32_t t32 = 32804;

	t32 = (((x129<x130)==x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 566392030;
	volatile int32_t x134 = -1;
	int64_t x135 = 219045691794581312LL;
	uint16_t x136 = UINT16_MAX;

	t33 = (((x133<x134)==x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static uint8_t x138 = 1U;
	volatile uint64_t x139 = 63LLU;
	static uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 982331;

	t34 = (((x137<x138)==x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static uint64_t x143 = 75LLU;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t35 = 934;

	t35 = (((x141<x142)==x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x145 = 2U;
	int16_t x146 = -690;
	int32_t x147 = 992;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -4870;

	t36 = (((x145<x146)==x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -260176;
	int16_t x150 = -1;
	int64_t x151 = -1LL;
	static volatile int32_t t37 = -3;

	t37 = (((x149<x150)==x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MAX;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -145;

	t38 = (((x153<x154)==x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int16_t x159 = -3;
	int16_t x160 = -7432;
	static int32_t t39 = -1627174;

	t39 = (((x157<x158)==x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = 1153697;
	int64_t x162 = -1LL;
	int32_t t40 = -254;

	t40 = (((x161<x162)==x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	static int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MIN;
	int64_t x168 = -1LL;
	volatile int32_t t41 = 2166;

	t41 = (((x165<x166)==x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = 17U;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t42 = -2;

	t42 = (((x169<x170)==x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = 2840;
	int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = 1;

	t43 = (((x173<x174)==x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 7811;

	t44 = (((x177<x178)==x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 5590;
	volatile uint16_t x182 = UINT16_MAX;
	int32_t x183 = INT32_MAX;
	volatile int32_t t45 = 31704;

	t45 = (((x181<x182)==x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 2948LLU;
	uint16_t x186 = UINT16_MAX;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 24;

	t46 = (((x185<x186)==x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	uint16_t x191 = 494U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 208;

	t47 = (((x189<x190)==x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 59106340U;
	static uint8_t x194 = 0U;
	int16_t x195 = INT16_MAX;
	int32_t t48 = 4906;

	t48 = (((x193<x194)==x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 288665;
	uint16_t x199 = 371U;
	volatile int32_t t49 = -42387742;

	t49 = (((x197<x198)==x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile int32_t x203 = INT32_MIN;
	int64_t x204 = -5744LL;
	static volatile int32_t t50 = 1158566;

	t50 = (((x201<x202)==x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -34679438409LL;
	int8_t x206 = -1;
	int8_t x207 = 0;
	static int32_t t51 = -14362335;

	t51 = (((x205<x206)==x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = 15U;
	int32_t x211 = INT32_MAX;
	uint64_t x212 = 1279708654852132071LLU;
	volatile int32_t t52 = 814;

	t52 = (((x209<x210)==x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 6;
	int16_t x214 = INT16_MIN;
	volatile uint16_t x215 = 22659U;
	volatile int16_t x216 = INT16_MAX;
	int32_t t53 = 468;

	t53 = (((x213<x214)==x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int64_t x218 = -14LL;
	volatile int32_t t54 = -1;

	t54 = (((x217<x218)==x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = INT64_MAX;
	int32_t t55 = -22;

	t55 = (((x221<x222)==x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = 1;
	static int16_t x227 = INT16_MIN;
	volatile int32_t x228 = -5508;
	int32_t t56 = -2945;

	t56 = (((x225<x226)==x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 74012643988318LL;
	volatile int16_t x230 = INT16_MIN;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t57 = 0;

	t57 = (((x229<x230)==x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -10484;
	volatile uint8_t x234 = 8U;
	int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 1;

	t58 = (((x233<x234)==x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	int16_t x238 = -1;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = 7332292127713LL;
	volatile int32_t t59 = 5311103;

	t59 = (((x237<x238)==x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 676U;
	static volatile int8_t x243 = -1;
	int32_t x244 = 44073133;
	int32_t t60 = -39;

	t60 = (((x241<x242)==x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MIN;
	volatile uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MAX;
	volatile int32_t t61 = -45508;

	t61 = (((x245<x246)==x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = 0;
	uint32_t x251 = 1055699U;
	volatile int32_t t62 = -27;

	t62 = (((x249<x250)==x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 415168U;
	static uint64_t x254 = 2933930LLU;
	int8_t x255 = -1;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t63 = 821748;

	t63 = (((x253<x254)==x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int32_t x259 = -103;
	static int32_t x260 = -5082;
	volatile int32_t t64 = -190;

	t64 = (((x257<x258)==x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x263 = 466U;
	int64_t x264 = -1LL;
	int32_t t65 = 79808;

	t65 = (((x261<x262)==x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	uint8_t x268 = 10U;
	int32_t t66 = 177;

	t66 = (((x265<x266)==x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	int32_t x271 = -1;
	uint64_t x272 = 11041LLU;
	static int32_t t67 = -274635;

	t67 = (((x269<x270)==x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	static int16_t x274 = -148;
	int64_t x275 = INT64_MIN;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -9;

	t68 = (((x273<x274)==x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = 298LL;
	uint8_t x278 = 55U;
	volatile int64_t x279 = INT64_MIN;
	uint32_t x280 = UINT32_MAX;
	int32_t t69 = -128695;

	t69 = (((x277<x278)==x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 31U;
	int8_t x282 = INT8_MIN;
	int16_t x283 = 85;
	int32_t t70 = 7348702;

	t70 = (((x281<x282)==x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = 0U;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = 231LLU;
	static int32_t t71 = 850461;

	t71 = (((x285<x286)==x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = 2;
	int32_t x290 = INT32_MIN;
	int16_t x292 = -1;

	t72 = (((x289<x290)==x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -58;
	int8_t x294 = INT8_MIN;
	volatile int32_t t73 = 14932440;

	t73 = (((x293<x294)==x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;

	t74 = (((x297<x298)==x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 7016300663916LLU;
	volatile int16_t x302 = INT16_MIN;
	int16_t x304 = -108;
	volatile int32_t t75 = -5327;

	t75 = (((x301<x302)==x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = INT64_MIN;
	static volatile int32_t t76 = 0;

	t76 = (((x305<x306)==x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = 282U;
	static volatile uint16_t x311 = 8725U;
	static int8_t x312 = 1;
	static volatile int32_t t77 = 530802499;

	t77 = (((x309<x310)==x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x314 = 461391706U;
	static volatile int8_t x315 = INT8_MIN;
	int32_t t78 = 63699;

	t78 = (((x313<x314)==x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	static int32_t x318 = -30127;
	volatile uint32_t x320 = 245636U;
	int32_t t79 = -422638336;

	t79 = (((x317<x318)==x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	int8_t x322 = 0;
	int32_t x323 = INT32_MIN;
	int32_t t80 = -5166477;

	t80 = (((x321<x322)==x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int16_t x327 = 18;
	uint8_t x328 = 9U;
	volatile int32_t t81 = -41;

	t81 = (((x325<x326)==x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = -1;
	int32_t x330 = -1;
	int64_t x331 = INT64_MAX;
	static int32_t x332 = -1;
	volatile int32_t t82 = -15;

	t82 = (((x329<x330)==x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = 1686770403LLU;
	int64_t x336 = -2635LL;
	volatile int32_t t83 = 18;

	t83 = (((x333<x334)==x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 266429995;

	t84 = (((x337<x338)==x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	static uint32_t x343 = 2694077U;
	volatile int16_t x344 = -1;
	volatile int32_t t85 = 1;

	t85 = (((x341<x342)==x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	static int16_t x346 = -1;
	static uint16_t x347 = UINT16_MAX;
	volatile int32_t t86 = -10847575;

	t86 = (((x345<x346)==x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	static uint64_t x352 = 17076243363LLU;

	t87 = (((x349<x350)==x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int64_t x355 = INT64_MIN;
	volatile int8_t x356 = INT8_MIN;
	int32_t t88 = 55690529;

	t88 = (((x353<x354)==x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	int32_t x360 = -1;

	t89 = (((x357<x358)==x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 55339459213410LLU;
	int8_t x362 = -1;
	int32_t x363 = -8015;
	volatile int32_t t90 = 422801780;

	t90 = (((x361<x362)==x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 12071U;
	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = INT8_MIN;
	uint32_t x368 = UINT32_MAX;

	t91 = (((x365<x366)==x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x370 = 3U;
	static volatile uint8_t x371 = 0U;
	int32_t x372 = INT32_MIN;

	t92 = (((x369<x370)==x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MAX;
	uint32_t x375 = 26U;
	int64_t x376 = INT64_MIN;
	static int32_t t93 = -194787;

	t93 = (((x373<x374)==x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1116;
	uint8_t x380 = 109U;
	int32_t t94 = 47330;

	t94 = (((x377<x378)==x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 7U;
	static uint32_t x382 = 11202U;
	volatile uint32_t x384 = UINT32_MAX;

	t95 = (((x381<x382)==x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 23U;
	volatile int64_t x386 = INT64_MAX;
	int16_t x387 = 1494;
	volatile int32_t x388 = INT32_MAX;
	int32_t t96 = -23251;

	t96 = (((x385<x386)==x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = 63;
	uint32_t x391 = 4512U;
	volatile int32_t x392 = -312001239;
	int32_t t97 = -42768;

	t97 = (((x389<x390)==x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	int32_t x394 = 28098;
	int8_t x395 = INT8_MIN;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -1;

	t98 = (((x393<x394)==x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;
	int32_t t99 = -103;

	t99 = (((x397<x398)==x399)==x400);

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

