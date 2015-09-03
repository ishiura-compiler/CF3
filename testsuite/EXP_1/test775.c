#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -42;
static volatile int32_t t0 = 1;
int64_t x5 = -1LL;
int32_t t1 = 1;
int32_t x12 = INT32_MIN;
int64_t x16 = 282138036125858634LL;
volatile int32_t t3 = 26001328;
static volatile int32_t t4 = -92;
int64_t x23 = INT64_MAX;
int32_t x24 = -55904574;
static int32_t x25 = INT32_MIN;
volatile int8_t x30 = -1;
static int32_t t7 = 681;
static int8_t x35 = INT8_MAX;
int32_t t8 = 165055622;
static int16_t x44 = -14674;
int16_t x45 = 181;
static int8_t x46 = INT8_MIN;
int64_t x53 = INT64_MIN;
uint64_t x54 = 348322898540684801LLU;
volatile int8_t x58 = INT8_MIN;
volatile int32_t t14 = -4812;
int32_t x63 = INT32_MIN;
uint16_t x67 = 1U;
volatile int16_t x68 = INT16_MIN;
int32_t t16 = -10619;
int8_t x73 = -2;
int8_t x76 = INT8_MIN;
int32_t t18 = -5;
int8_t x78 = INT8_MIN;
uint16_t x81 = 269U;
static volatile int32_t x88 = -1;
int64_t x93 = INT64_MIN;
static int8_t x100 = -10;
int16_t x101 = INT16_MIN;
uint64_t x102 = 30LLU;
static int8_t x103 = INT8_MIN;
int64_t x104 = 3LL;
uint16_t x106 = UINT16_MAX;
uint16_t x107 = 11U;
volatile int64_t x109 = INT64_MAX;
static volatile uint32_t x112 = 1U;
volatile int32_t t27 = 1686405;
uint64_t x118 = UINT64_MAX;
int16_t x122 = -1;
volatile int8_t x124 = INT8_MAX;
int16_t x128 = 532;
int64_t x129 = INT64_MIN;
uint64_t x136 = 1LLU;
int32_t x137 = -82;
int32_t x138 = INT32_MIN;
uint64_t x144 = 166571965433656879LLU;
int8_t x145 = 5;
int64_t x147 = -46LL;
int16_t x148 = 5656;
int64_t x157 = 1855LL;
int32_t x160 = INT32_MIN;
volatile int16_t x162 = -1;
uint64_t x167 = 1096759LLU;
uint64_t x168 = 11224650193544816LLU;
int32_t t41 = 21;
uint32_t x170 = 436U;
int16_t x172 = 1;
uint32_t x179 = 734U;
static volatile int32_t t44 = -2;
volatile int32_t t46 = 939638;
static volatile uint16_t x196 = UINT16_MAX;
volatile int8_t x197 = -1;
uint32_t x198 = UINT32_MAX;
volatile int32_t t49 = 6857607;
volatile int16_t x201 = INT16_MIN;
int64_t x202 = -1578045195LL;
static int16_t x205 = -1;
uint16_t x208 = 127U;
volatile int32_t t51 = -7518496;
uint16_t x212 = UINT16_MAX;
int32_t t53 = -592;
int16_t x223 = INT16_MAX;
int32_t x232 = INT32_MAX;
volatile int64_t x235 = INT64_MIN;
static int32_t x238 = INT32_MIN;
static int32_t x239 = INT32_MAX;
volatile uint32_t x241 = 541U;
int32_t x245 = -757;
int32_t x247 = INT32_MIN;
volatile int32_t x248 = 291601;
volatile int32_t t61 = -3;
int16_t x268 = -1;
int8_t x269 = -39;
volatile int32_t x280 = -1;
uint32_t x285 = UINT32_MAX;
int32_t t71 = 111;
uint32_t x289 = 3U;
uint16_t x291 = 2502U;
int8_t x295 = 2;
int64_t x310 = INT64_MIN;
uint16_t x314 = 29U;
volatile uint32_t x315 = UINT32_MAX;
uint32_t x319 = 7313U;
uint32_t x321 = 1U;
uint64_t x325 = UINT64_MAX;
static int32_t x326 = INT32_MAX;
int16_t x329 = INT16_MIN;
static volatile int32_t t83 = 221866399;
static uint8_t x337 = UINT8_MAX;
int32_t x344 = INT32_MAX;
volatile int32_t x345 = 0;
int8_t x351 = -1;
volatile int16_t x358 = INT16_MIN;
uint8_t x362 = 3U;
uint64_t x368 = UINT64_MAX;
uint32_t x376 = 10U;
volatile int32_t t93 = 7447;
volatile int32_t t94 = -89331524;
int32_t x389 = -1;
static int32_t x398 = 74;
volatile int32_t t99 = -7361;


void f0(void) {
	int16_t x1 = -511;
	static uint16_t x2 = UINT16_MAX;
	volatile uint8_t x3 = 47U;

	t0 = (((x1%x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = INT8_MAX;
	volatile uint16_t x7 = 22U;
	uint8_t x8 = 1U;

	t1 = (((x5%x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 74585835LLU;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = UINT8_MAX;
	static int32_t t2 = 25897;

	t2 = (((x9%x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = INT8_MIN;
	static int8_t x15 = INT8_MIN;

	t3 = (((x13%x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 8U;
	int64_t x18 = INT64_MIN;
	int64_t x19 = -48874684380LL;
	int16_t x20 = -14082;

	t4 = (((x17%x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	int32_t t5 = -3;

	t5 = (((x21%x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = 8471773161LL;
	uint8_t x27 = UINT8_MAX;
	static uint8_t x28 = 38U;
	volatile int32_t t6 = 3692;

	t6 = (((x25%x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 123724032055735069LL;
	static int32_t x31 = 92975212;
	static uint32_t x32 = 42U;

	t7 = (((x29%x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -8;
	volatile int64_t x34 = -191916147978LL;
	int8_t x36 = INT8_MAX;

	t8 = (((x33%x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = -16592455LL;
	int32_t x39 = -1;
	int16_t x40 = -1;
	static volatile int32_t t9 = 1;

	t9 = (((x37%x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	volatile int32_t x43 = INT32_MAX;
	static volatile int32_t t10 = -442573475;

	t10 = (((x41%x42)==x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = -68664489;
	int64_t x48 = 79502LL;
	int32_t t11 = 42646284;

	t11 = (((x45%x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	volatile int64_t x50 = -1LL;
	static int32_t x51 = INT32_MIN;
	int64_t x52 = -1LL;
	int32_t t12 = -199;

	t12 = (((x49%x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = -1;
	volatile int32_t x56 = -1068768967;
	static volatile int32_t t13 = 2019991;

	t13 = (((x53%x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	volatile int8_t x59 = 0;
	uint32_t x60 = 395852145U;

	t14 = (((x57%x58)==x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	static int32_t x62 = -62;
	static volatile int16_t x64 = INT16_MAX;
	volatile int32_t t15 = 4297;

	t15 = (((x61%x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = -244549792LL;

	t16 = (((x65%x66)==x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 5;
	int64_t x70 = -408456869763362195LL;
	uint16_t x71 = 10681U;
	volatile int16_t x72 = INT16_MAX;
	static int32_t t17 = 12;

	t17 = (((x69%x70)==x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;

	t18 = (((x73%x74)==x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	int32_t x80 = 7;
	int32_t t19 = -3;

	t19 = (((x77%x78)==x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x82 = 15U;
	int8_t x83 = INT8_MIN;
	int32_t x84 = -1;
	volatile int32_t t20 = -66;

	t20 = (((x81%x82)==x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	static uint32_t x87 = 1U;
	int32_t t21 = -3;

	t21 = (((x85%x86)==x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -1;
	uint8_t x90 = 7U;
	uint64_t x91 = UINT64_MAX;
	uint8_t x92 = 0U;
	int32_t t22 = 971742;

	t22 = (((x89%x90)==x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	volatile int32_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 1163824;

	t23 = (((x93%x94)==x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	int32_t x99 = INT32_MIN;
	volatile int32_t t24 = 9999655;

	t24 = (((x97%x98)==x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t t25 = 85;

	t25 = (((x101%x102)==x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MAX;
	static int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -424804909;

	t26 = (((x105%x106)==x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = UINT16_MAX;
	uint8_t x111 = 120U;

	t27 = (((x109%x110)==x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 213795;
	volatile uint64_t x114 = 522702640736897464LLU;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -17814;

	t28 = (((x113%x114)==x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -62424500;
	int32_t x119 = INT32_MIN;
	uint8_t x120 = 0U;
	volatile int32_t t29 = -48522;

	t29 = (((x117%x118)==x119)==x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 93U;
	int64_t x123 = -318LL;
	int32_t t30 = -169338758;

	t30 = (((x121%x122)==x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 3323186521390727LL;
	int32_t x126 = INT32_MIN;
	static uint8_t x127 = UINT8_MAX;
	volatile int32_t t31 = 439832;

	t31 = (((x125%x126)==x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 117U;
	int8_t x131 = INT8_MAX;
	int64_t x132 = 16132983280354428LL;
	int32_t t32 = -493366322;

	t32 = (((x129%x130)==x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 393034;
	int16_t x134 = INT16_MIN;
	static int16_t x135 = 195;
	volatile int32_t t33 = 12501;

	t33 = (((x133%x134)==x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x139 = 1826U;
	volatile int16_t x140 = INT16_MAX;
	volatile int32_t t34 = 0;

	t34 = (((x137%x138)==x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	static uint16_t x142 = UINT16_MAX;
	static uint16_t x143 = 1U;
	int32_t t35 = -371292;

	t35 = (((x141%x142)==x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MIN;
	static int32_t t36 = 702059986;

	t36 = (((x145%x146)==x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 242101438U;
	volatile int8_t x150 = -2;
	uint16_t x151 = 1583U;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -98220;

	t37 = (((x149%x150)==x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = -1LL;
	static volatile int32_t t38 = 1099799;

	t38 = (((x153%x154)==x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MAX;
	uint32_t x159 = UINT32_MAX;
	static int32_t t39 = -1016;

	t39 = (((x157%x158)==x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 351LLU;
	int64_t x163 = -3878245808464381580LL;
	uint16_t x164 = 4046U;
	volatile int32_t t40 = 28795;

	t40 = (((x161%x162)==x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	int64_t x166 = -1LL;

	t41 = (((x165%x166)==x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	static int64_t x171 = -1LL;
	int32_t t42 = -731747;

	t42 = (((x169%x170)==x171)==x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -2;
	static volatile int8_t x174 = INT8_MIN;
	uint32_t x175 = UINT32_MAX;
	uint32_t x176 = 56U;
	static volatile int32_t t43 = 520354;

	t43 = (((x173%x174)==x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 1U;
	volatile int16_t x178 = INT16_MIN;
	static volatile int64_t x180 = 244713558741731LL;

	t44 = (((x177%x178)==x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	volatile int32_t x182 = -41572027;
	static int32_t x183 = 0;
	int16_t x184 = INT16_MAX;
	int32_t t45 = -1;

	t45 = (((x181%x182)==x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 0U;
	int64_t x186 = INT64_MAX;
	static int32_t x187 = INT32_MIN;
	uint16_t x188 = 6U;

	t46 = (((x185%x186)==x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -51106;
	uint32_t x190 = 115330U;
	int16_t x191 = -32;
	uint8_t x192 = 112U;
	static volatile int32_t t47 = 88;

	t47 = (((x189%x190)==x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MAX;
	static int32_t x194 = INT32_MIN;
	static int16_t x195 = 60;
	int32_t t48 = 312453533;

	t48 = (((x193%x194)==x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x199 = UINT8_MAX;
	static volatile int8_t x200 = INT8_MAX;

	t49 = (((x197%x198)==x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x203 = 555963263;
	uint64_t x204 = UINT64_MAX;
	static int32_t t50 = -1;

	t50 = (((x201%x202)==x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x206 = INT64_MIN;
	static int32_t x207 = -1;

	t51 = (((x205%x206)==x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = INT8_MIN;
	static int64_t x210 = -1LL;
	volatile int64_t x211 = INT64_MIN;
	volatile int32_t t52 = 0;

	t52 = (((x209%x210)==x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	uint8_t x214 = 117U;
	uint64_t x215 = 315344765512LLU;
	int32_t x216 = INT32_MAX;

	t53 = (((x213%x214)==x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static volatile int16_t x218 = INT16_MIN;
	int32_t x219 = 14936;
	int64_t x220 = 177785455668796508LL;
	int32_t t54 = 12215710;

	t54 = (((x217%x218)==x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = UINT16_MAX;
	int8_t x222 = INT8_MIN;
	int64_t x224 = -1LL;
	volatile int32_t t55 = 1;

	t55 = (((x221%x222)==x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MAX;
	uint64_t x228 = 100295956493433LLU;
	int32_t t56 = 51036288;

	t56 = (((x225%x226)==x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = -6LL;
	static volatile int8_t x231 = 2;
	volatile int32_t t57 = 1;

	t57 = (((x229%x230)==x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 6398752LLU;
	int64_t x234 = INT64_MIN;
	volatile uint64_t x236 = 70932325785LLU;
	volatile int32_t t58 = 732391;

	t58 = (((x233%x234)==x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 99595684;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 63095291;

	t59 = (((x237%x238)==x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x242 = 1867U;
	static volatile int8_t x243 = INT8_MAX;
	uint32_t x244 = UINT32_MAX;
	int32_t t60 = -1454810;

	t60 = (((x241%x242)==x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;

	t61 = (((x245%x246)==x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -127;
	uint64_t x250 = 15989LLU;
	volatile uint8_t x251 = 8U;
	uint32_t x252 = 0U;
	int32_t t62 = -24209;

	t62 = (((x249%x250)==x251)==x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -1;
	volatile int32_t x255 = INT32_MAX;
	volatile int8_t x256 = INT8_MAX;
	static volatile int32_t t63 = 0;

	t63 = (((x253%x254)==x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = 1;
	volatile int32_t x258 = -1;
	int64_t x259 = 1925777LL;
	int8_t x260 = -5;
	volatile int32_t t64 = 419;

	t64 = (((x257%x258)==x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MAX;
	uint8_t x262 = 20U;
	int8_t x263 = -1;
	volatile int8_t x264 = INT8_MIN;
	int32_t t65 = 0;

	t65 = (((x261%x262)==x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = UINT16_MAX;
	uint16_t x266 = 3414U;
	int32_t x267 = INT32_MAX;
	volatile int32_t t66 = 2;

	t66 = (((x265%x266)==x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = INT32_MAX;
	int16_t x271 = -498;
	int64_t x272 = INT64_MIN;
	static volatile int32_t t67 = 8064340;

	t67 = (((x269%x270)==x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	volatile int64_t x274 = INT64_MIN;
	int8_t x275 = -1;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = -34189;

	t68 = (((x273%x274)==x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	static uint16_t x278 = UINT16_MAX;
	uint8_t x279 = 1U;
	int32_t t69 = 89103683;

	t69 = (((x277%x278)==x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -1;
	volatile uint32_t x284 = 0U;
	int32_t t70 = -7556662;

	t70 = (((x281%x282)==x283)==x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x286 = 118LL;
	uint8_t x287 = UINT8_MAX;
	volatile uint64_t x288 = 1084LLU;

	t71 = (((x285%x286)==x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MAX;
	static uint32_t x292 = 101U;
	int32_t t72 = 82;

	t72 = (((x289%x290)==x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile int64_t x294 = -164444877487LL;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 1;

	t73 = (((x293%x294)==x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int8_t x298 = INT8_MAX;
	static volatile int8_t x299 = INT8_MIN;
	volatile int16_t x300 = -732;
	int32_t t74 = -3016;

	t74 = (((x297%x298)==x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 4U;
	int8_t x302 = INT8_MIN;
	static volatile uint32_t x303 = 1U;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = 13847;

	t75 = (((x301%x302)==x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	static int32_t x306 = 96347249;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -1;

	t76 = (((x305%x306)==x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	volatile int32_t x311 = INT32_MAX;
	volatile int32_t x312 = 6328;
	static volatile int32_t t77 = -4311;

	t77 = (((x309%x310)==x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x316 = 21U;
	volatile int32_t t78 = 62;

	t78 = (((x313%x314)==x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 240354869732464198LL;
	int16_t x318 = -4772;
	volatile uint16_t x320 = 14764U;
	static volatile int32_t t79 = 27;

	t79 = (((x317%x318)==x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x322 = 21685079U;
	int16_t x323 = INT16_MIN;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t80 = 21329329;

	t80 = (((x321%x322)==x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = 456;

	t81 = (((x325%x326)==x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = -47237933;
	int16_t x331 = 242;
	volatile int8_t x332 = -1;
	int32_t t82 = -133601756;

	t82 = (((x329%x330)==x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 160789LLU;
	uint64_t x334 = 253277187028LLU;
	static uint64_t x335 = 7838727437LLU;
	static int32_t x336 = -468;

	t83 = (((x333%x334)==x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -207;
	volatile int16_t x339 = 4;
	int64_t x340 = INT64_MAX;
	int32_t t84 = -110218473;

	t84 = (((x337%x338)==x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	volatile int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int32_t t85 = -2995;

	t85 = (((x341%x342)==x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	static uint32_t x347 = UINT32_MAX;
	int8_t x348 = -1;
	volatile int32_t t86 = 54;

	t86 = (((x345%x346)==x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 4170U;
	int8_t x350 = -1;
	static uint16_t x352 = 5226U;
	volatile int32_t t87 = -452773;

	t87 = (((x349%x350)==x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int64_t x354 = INT64_MIN;
	uint32_t x355 = 50869U;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t88 = -519;

	t88 = (((x353%x354)==x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -19;

	t89 = (((x357%x358)==x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int8_t x363 = INT8_MIN;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 1;

	t90 = (((x361%x362)==x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 76;
	int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = 7943U;
	int32_t t91 = 61130743;

	t91 = (((x365%x366)==x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = -1;
	int16_t x371 = -5;
	uint8_t x372 = 6U;
	volatile int32_t t92 = 3920452;

	t92 = (((x369%x370)==x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 28U;
	static int16_t x374 = -7112;
	volatile uint32_t x375 = UINT32_MAX;

	t93 = (((x373%x374)==x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	volatile int8_t x378 = INT8_MIN;
	uint16_t x379 = 1U;
	volatile int16_t x380 = -7;

	t94 = (((x377%x378)==x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 2525537282207111LLU;
	static uint8_t x382 = 5U;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MAX;
	int32_t t95 = -1;

	t95 = (((x381%x382)==x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	volatile int32_t t96 = -60764;

	t96 = (((x385%x386)==x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 81U;
	static int64_t x391 = INT64_MIN;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -434544;

	t97 = (((x389%x390)==x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MAX;
	volatile int8_t x399 = INT8_MAX;
	int8_t x400 = -1;
	volatile int32_t t98 = -669744;

	t98 = (((x397%x398)==x399)==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = UINT64_MAX;
	int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MAX;
	int32_t x404 = INT32_MIN;

	t99 = (((x401%x402)==x403)==x404);

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

