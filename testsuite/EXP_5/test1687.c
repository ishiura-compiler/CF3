#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
volatile uint8_t x4 = 29U;
int16_t x6 = INT16_MIN;
static int16_t x11 = 150;
volatile int32_t t2 = 131446964;
int64_t x14 = -1LL;
static volatile int32_t t4 = -227314;
int32_t x24 = INT32_MIN;
volatile int32_t t6 = 92049;
volatile int32_t x29 = -1;
volatile int32_t t7 = 7294242;
uint16_t x33 = 22733U;
volatile int64_t x38 = INT64_MIN;
volatile int32_t t9 = 13013680;
volatile int8_t x49 = INT8_MIN;
volatile int32_t x50 = INT32_MIN;
int64_t x54 = INT64_MAX;
int32_t x56 = -435295123;
volatile int32_t t14 = -41208;
volatile int32_t t15 = 3;
int8_t x66 = 4;
int16_t x72 = -9511;
int32_t t17 = -3541737;
static int32_t t18 = 374202;
int16_t x80 = -10;
volatile uint64_t x85 = 81595205874684575LLU;
int32_t x86 = INT32_MAX;
int8_t x88 = 21;
int32_t x90 = -2820;
int32_t x91 = INT32_MIN;
int16_t x92 = -1;
int16_t x97 = INT16_MIN;
volatile int32_t t25 = 237068;
int8_t x107 = 0;
uint8_t x110 = 6U;
uint8_t x112 = UINT8_MAX;
volatile int32_t t27 = 57;
uint16_t x113 = 112U;
int16_t x115 = -4792;
int32_t t29 = 465;
uint64_t x124 = UINT64_MAX;
static uint32_t x125 = 1828421337U;
volatile uint64_t x128 = 36802908154LLU;
int32_t t31 = 554804;
int64_t x129 = INT64_MIN;
int16_t x132 = INT16_MAX;
int32_t t32 = -2;
volatile int32_t t34 = 9981;
uint8_t x141 = 7U;
int16_t x142 = -1;
static int8_t x144 = -25;
volatile uint64_t x145 = 119395551LLU;
int32_t x146 = INT32_MIN;
volatile int64_t x149 = 4LL;
int32_t t37 = 1;
static int64_t x161 = 44275907970213836LL;
volatile int64_t x166 = INT64_MIN;
int8_t x167 = -1;
volatile int32_t x186 = INT32_MIN;
int64_t x192 = -1LL;
uint64_t x197 = UINT64_MAX;
uint16_t x201 = 55U;
static int32_t x208 = INT32_MIN;
int32_t t54 = -14196;
int8_t x222 = INT8_MIN;
volatile int32_t t55 = -5512564;
int64_t x228 = 5678193275541LL;
static int8_t x229 = -1;
int16_t x233 = 226;
volatile int32_t t58 = -48595;
static volatile int64_t x238 = INT64_MIN;
volatile int32_t t59 = 204;
static volatile uint64_t x246 = UINT64_MAX;
int32_t t61 = 1798594;
static uint8_t x252 = 32U;
int64_t x256 = INT64_MIN;
uint16_t x258 = 62U;
uint8_t x263 = 0U;
uint16_t x265 = 763U;
int32_t t67 = 26;
static uint8_t x273 = 0U;
int32_t x277 = INT32_MIN;
int32_t x288 = -887;
int32_t t72 = -5;
int32_t x297 = -1;
static int16_t x302 = INT16_MAX;
int8_t x305 = -14;
static volatile uint32_t x307 = 128905953U;
static int32_t x313 = 1;
static int64_t x320 = INT64_MIN;
volatile uint64_t x321 = 15511925325LLU;
int32_t x336 = INT32_MIN;
int32_t t84 = 50992;
int64_t x341 = INT64_MIN;
int32_t x349 = INT32_MIN;
int16_t x352 = -10246;
uint64_t x363 = 155975512LLU;
static int16_t x364 = 3;
static int8_t x365 = INT8_MIN;
uint32_t x368 = 51441530U;
int8_t x370 = -1;
int32_t t93 = -810;
int16_t x387 = INT16_MIN;
static int32_t x389 = INT32_MIN;
volatile int32_t t97 = 664;
int64_t x394 = -16748488LL;
static volatile uint32_t x396 = 25234963U;
int32_t t98 = 2555687;
volatile int16_t x399 = INT16_MIN;
volatile int32_t t99 = -9620;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x3 = INT64_MAX;
	int32_t t0 = -149001493;

	t0 = (x1<=((x2<=x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 10U;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 3U;
	static int32_t t1 = 0;

	t1 = (x5<=((x6<=x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 211U;
	uint64_t x10 = UINT64_MAX;
	int16_t x12 = -1;

	t2 = (x9<=((x10<=x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	uint16_t x15 = 7U;
	static volatile uint8_t x16 = 7U;
	static int32_t t3 = 0;

	t3 = (x13<=((x14<=x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 1063870844LL;
	uint64_t x18 = UINT64_MAX;
	volatile uint32_t x19 = UINT32_MAX;
	static uint32_t x20 = 0U;

	t4 = (x17<=((x18<=x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 0U;
	uint64_t x22 = UINT64_MAX;
	uint8_t x23 = 7U;
	int32_t t5 = 0;

	t5 = (x21<=((x22<=x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	static int8_t x26 = INT8_MAX;
	static int16_t x27 = INT16_MIN;
	volatile int32_t x28 = -1;

	t6 = (x25<=((x26<=x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = -18754016;
	static uint8_t x31 = UINT8_MAX;
	volatile int64_t x32 = INT64_MAX;

	t7 = (x29<=((x30<=x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 0U;
	uint8_t x35 = 47U;
	static volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 2342;

	t8 = (x33<=((x34<=x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -228;
	int32_t x39 = -1;
	uint32_t x40 = 53U;

	t9 = (x37<=((x38<=x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 20064543741821LL;
	int8_t x42 = INT8_MAX;
	uint16_t x43 = 32U;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 1;

	t10 = (x41<=((x42<=x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = -1;
	uint8_t x47 = UINT8_MAX;
	static int16_t x48 = -1;
	volatile int32_t t11 = 27;

	t11 = (x45<=((x46<=x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = 7;
	int8_t x52 = -1;
	volatile int32_t t12 = -14;

	t12 = (x49<=((x50<=x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 2774U;
	uint8_t x55 = UINT8_MAX;
	static int32_t t13 = 7212141;

	t13 = (x53<=((x54<=x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -12;
	uint16_t x58 = UINT16_MAX;
	volatile int8_t x59 = INT8_MIN;
	uint64_t x60 = UINT64_MAX;

	t14 = (x57<=((x58<=x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint8_t x62 = 0U;
	int16_t x63 = 0;
	static uint32_t x64 = 26819885U;

	t15 = (x61<=((x62<=x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 845U;
	static int64_t x67 = INT64_MIN;
	static volatile int8_t x68 = -9;
	int32_t t16 = -5328542;

	t16 = (x65<=((x66<=x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MAX;

	t17 = (x69<=((x70<=x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 806U;
	int8_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = 11817519244LL;

	t18 = (x73<=((x74<=x75)^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int8_t x78 = 54;
	volatile uint16_t x79 = UINT16_MAX;
	int32_t t19 = -30;

	t19 = (x77<=((x78<=x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 265758862770LLU;
	volatile int8_t x82 = 4;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = INT32_MIN;
	static int32_t t20 = -1;

	t20 = (x81<=((x82<=x83)^x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x87 = 15;
	volatile int32_t t21 = 1035;

	t21 = (x85<=((x86<=x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	int32_t t22 = -94509263;

	t22 = (x89<=((x90<=x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1712;
	int32_t x94 = INT32_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -36399;

	t23 = (x93<=((x94<=x95)^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MAX;
	uint32_t x100 = 63769U;
	int32_t t24 = 4998;

	t24 = (x97<=((x98<=x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	int8_t x102 = -1;
	volatile uint8_t x103 = 39U;
	static int16_t x104 = INT16_MIN;

	t25 = (x101<=((x102<=x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int64_t x106 = INT64_MIN;
	int8_t x108 = -1;
	static int32_t t26 = 122507992;

	t26 = (x105<=((x106<=x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	static int16_t x111 = INT16_MIN;

	t27 = (x109<=((x110<=x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -309629777;
	static uint16_t x116 = 28950U;
	static volatile int32_t t28 = 29674;

	t28 = (x113<=((x114<=x115)^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	uint64_t x118 = 1037409LLU;
	int64_t x119 = INT64_MAX;
	int64_t x120 = 12842470700088070LL;

	t29 = (x117<=((x118<=x119)^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MAX;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = 17316LLU;
	int32_t t30 = 85880;

	t30 = (x121<=((x122<=x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;

	t31 = (x125<=((x126<=x127)^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 115LLU;

	t32 = (x129<=((x130<=x131)^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 299366073086LLU;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 235993U;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 3312;

	t33 = (x133<=((x134<=x135)^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int8_t x138 = INT8_MAX;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = INT8_MIN;

	t34 = (x137<=((x138<=x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x143 = INT32_MIN;
	volatile int32_t t35 = 174622130;

	t35 = (x141<=((x142<=x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x147 = 17792U;
	int8_t x148 = 12;
	volatile int32_t t36 = 4;

	t36 = (x145<=((x146<=x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = -1;
	int16_t x151 = -14311;
	uint32_t x152 = 0U;

	t37 = (x149<=((x150<=x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 234837800;

	t38 = (x153<=((x154<=x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	uint16_t x158 = 374U;
	int8_t x159 = 1;
	int8_t x160 = -1;
	volatile int32_t t39 = -76212019;

	t39 = (x157<=((x158<=x159)^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x162 = -351341559479386775LL;
	uint64_t x163 = 6438693950808610421LLU;
	static volatile int8_t x164 = INT8_MAX;
	volatile int32_t t40 = 4171;

	t40 = (x161<=((x162<=x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 2030101077U;
	int32_t x168 = 110086706;
	static int32_t t41 = -35574514;

	t41 = (x165<=((x166<=x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 3739;
	int64_t x170 = INT64_MIN;
	int8_t x171 = 0;
	static int64_t x172 = INT64_MAX;
	int32_t t42 = 57302385;

	t42 = (x169<=((x170<=x171)^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	uint16_t x174 = UINT16_MAX;
	static int16_t x175 = -1;
	uint16_t x176 = 1570U;
	static volatile int32_t t43 = 1;

	t43 = (x173<=((x174<=x175)^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	int8_t x178 = -7;
	static uint64_t x179 = UINT64_MAX;
	uint64_t x180 = 11935274470LLU;
	volatile int32_t t44 = 999056854;

	t44 = (x177<=((x178<=x179)^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = 16296089LL;
	static uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = 23;

	t45 = (x181<=((x182<=x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int32_t x187 = 4460381;
	volatile int32_t x188 = 13249;
	int32_t t46 = -34;

	t46 = (x185<=((x186<=x187)^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = 13;
	int8_t x191 = 24;
	volatile int32_t t47 = -82907039;

	t47 = (x189<=((x190<=x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	static volatile int32_t t48 = 23189;

	t48 = (x193<=((x194<=x195)^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = 1948;
	int16_t x199 = INT16_MIN;
	static int64_t x200 = -16964LL;
	int32_t t49 = -251870;

	t49 = (x197<=((x198<=x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -60;
	int8_t x203 = -7;
	volatile int8_t x204 = -4;
	int32_t t50 = -20;

	t50 = (x201<=((x202<=x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int32_t x206 = -1;
	int8_t x207 = INT8_MIN;
	volatile int32_t t51 = -516;

	t51 = (x205<=((x206<=x207)^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int64_t x210 = 247799095895LL;
	uint32_t x211 = 902737082U;
	uint32_t x212 = UINT32_MAX;
	static int32_t t52 = -450;

	t52 = (x209<=((x210<=x211)^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	volatile int8_t x214 = -1;
	static int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -1;

	t53 = (x213<=((x214<=x215)^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 16258U;
	static uint16_t x218 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = -785;

	t54 = (x217<=((x218<=x219)^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static uint16_t x223 = 19U;
	int32_t x224 = 2416351;

	t55 = (x221<=((x222<=x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	int32_t x226 = -1;
	int32_t x227 = INT32_MAX;
	volatile int32_t t56 = 317821;

	t56 = (x225<=((x226<=x227)^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = 2742015LL;
	uint8_t x231 = 0U;
	int16_t x232 = -1;
	volatile int32_t t57 = -109;

	t57 = (x229<=((x230<=x231)^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 6U;
	static int8_t x235 = 3;
	volatile int16_t x236 = 1;

	t58 = (x233<=((x234<=x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	volatile int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MIN;

	t59 = (x237<=((x238<=x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = -1;
	uint32_t x243 = 2011750U;
	uint64_t x244 = UINT64_MAX;
	static int32_t t60 = -27490;

	t60 = (x241<=((x242<=x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	static int32_t x247 = INT32_MIN;
	int16_t x248 = -1;

	t61 = (x245<=((x246<=x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = -763;
	int8_t x251 = INT8_MIN;
	int32_t t62 = 412023;

	t62 = (x249<=((x250<=x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -3;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	int32_t t63 = 7485;

	t63 = (x253<=((x254<=x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -1LL;
	static int16_t x259 = 188;
	uint16_t x260 = 1U;
	volatile int32_t t64 = -364112178;

	t64 = (x257<=((x258<=x259)^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = 8125;

	t65 = (x261<=((x262<=x263)^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	int32_t x267 = -102;
	uint8_t x268 = 99U;
	int32_t t66 = 14;

	t66 = (x265<=((x266<=x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	static int64_t x270 = -1LL;
	int16_t x271 = -1;
	int8_t x272 = 1;

	t67 = (x269<=((x270<=x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = -1LL;
	int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t68 = -22062;

	t68 = (x273<=((x274<=x275)^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = 4U;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -2041669;

	t69 = (x277<=((x278<=x279)^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MAX;
	uint16_t x283 = 13793U;
	uint16_t x284 = UINT16_MAX;
	static volatile int32_t t70 = 7;

	t70 = (x281<=((x282<=x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	int64_t x287 = -1619LL;
	volatile int32_t t71 = 3238;

	t71 = (x285<=((x286<=x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 56U;
	int16_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MAX;

	t72 = (x289<=((x290<=x291)^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = 1;
	volatile uint32_t x296 = 692459385U;
	static volatile int32_t t73 = -2;

	t73 = (x293<=((x294<=x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -79117444;

	t74 = (x297<=((x298<=x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -1;
	static int64_t x303 = INT64_MIN;
	uint32_t x304 = 297U;
	volatile int32_t t75 = 301213981;

	t75 = (x301<=((x302<=x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x306 = 772U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 268065;

	t76 = (x305<=((x306<=x307)^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x309 = UINT8_MAX;
	int64_t x310 = 7218856056560265LL;
	int64_t x311 = INT64_MIN;
	int8_t x312 = -1;
	int32_t t77 = 705099033;

	t77 = (x309<=((x310<=x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -1;
	int32_t x315 = -1;
	static uint64_t x316 = 156102168456LLU;
	volatile int32_t t78 = 264864559;

	t78 = (x313<=((x314<=x315)^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -11143;
	static volatile int8_t x318 = INT8_MIN;
	int64_t x319 = 31747043237644239LL;
	int32_t t79 = -3096;

	t79 = (x317<=((x318<=x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MAX;
	volatile uint16_t x323 = 0U;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t80 = -86609;

	t80 = (x321<=((x322<=x323)^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	volatile uint64_t x326 = UINT64_MAX;
	static int64_t x327 = -1LL;
	uint64_t x328 = UINT64_MAX;
	int32_t t81 = 2203551;

	t81 = (x325<=((x326<=x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -86;
	static int64_t x330 = -1LL;
	static int8_t x331 = -1;
	int8_t x332 = -1;
	int32_t t82 = 768484308;

	t82 = (x329<=((x330<=x331)^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MAX;
	int64_t x334 = 171596494560115LL;
	volatile int64_t x335 = INT64_MIN;
	volatile int32_t t83 = -714186585;

	t83 = (x333<=((x334<=x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	static int64_t x340 = INT64_MIN;

	t84 = (x337<=((x338<=x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x342 = UINT8_MAX;
	uint64_t x343 = 45006LLU;
	int16_t x344 = -9588;
	int32_t t85 = 1;

	t85 = (x341<=((x342<=x343)^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 21U;
	int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = 261;

	t86 = (x345<=((x346<=x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MAX;
	int16_t x351 = 3893;
	volatile int32_t t87 = -33;

	t87 = (x349<=((x350<=x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MAX;
	static int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 435558LLU;
	int32_t t88 = 7574;

	t88 = (x353<=((x354<=x355)^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 48;
	static int32_t x358 = 173461;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 1913887U;
	static int32_t t89 = -1;

	t89 = (x357<=((x358<=x359)^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -50060907711162446LL;
	volatile int32_t x362 = INT32_MAX;
	static volatile int32_t t90 = 373349108;

	t90 = (x361<=((x362<=x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x366 = 7U;
	int64_t x367 = 24238438904LL;
	static int32_t t91 = 5;

	t91 = (x365<=((x366<=x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -1;
	uint64_t x371 = 34582060248203LLU;
	int64_t x372 = -74728177929167407LL;
	int32_t t92 = 1;

	t92 = (x369<=((x370<=x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -21;
	uint16_t x374 = UINT16_MAX;
	static volatile int64_t x375 = INT64_MIN;
	uint32_t x376 = 6U;

	t93 = (x373<=((x374<=x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int16_t x378 = -2;
	uint32_t x379 = 42302U;
	int16_t x380 = 86;
	volatile int32_t t94 = -265486;

	t94 = (x377<=((x378<=x379)^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 45283454633046017LLU;
	int32_t x382 = INT32_MAX;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 4U;
	int32_t t95 = 1070185901;

	t95 = (x381<=((x382<=x383)^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int16_t x386 = INT16_MIN;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 160;

	t96 = (x385<=((x386<=x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x390 = 12;
	int16_t x391 = INT16_MIN;
	int32_t x392 = -4;

	t97 = (x389<=((x390<=x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 172528355U;
	volatile int8_t x395 = -1;

	t98 = (x393<=((x394<=x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = 730;
	static uint32_t x400 = 868U;

	t99 = (x397<=((x398<=x399)^x400));

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

