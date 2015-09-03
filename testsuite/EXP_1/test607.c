#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = INT32_MIN;
volatile int64_t x11 = 66316470085453LL;
int16_t x14 = -249;
volatile int64_t x29 = INT64_MIN;
uint32_t x37 = 32021887U;
uint16_t x41 = 1U;
volatile int32_t t10 = 1;
uint8_t x45 = 1U;
static int8_t x47 = INT8_MIN;
int32_t t11 = -9265;
int32_t x50 = -1;
static int8_t x57 = INT8_MAX;
volatile int8_t x58 = -1;
volatile int64_t x64 = INT64_MAX;
volatile uint32_t x66 = UINT32_MAX;
uint64_t x69 = 53518178771509LLU;
int64_t x70 = -1LL;
int64_t x71 = INT64_MAX;
static volatile uint16_t x73 = UINT16_MAX;
volatile int16_t x84 = -5;
static int16_t x91 = -1;
int32_t x95 = -221;
uint64_t x98 = 628944LLU;
int8_t x99 = INT8_MAX;
int64_t x103 = INT64_MIN;
volatile uint32_t x105 = UINT32_MAX;
int64_t x108 = INT64_MIN;
volatile int8_t x114 = 16;
int32_t x116 = 4;
int32_t x117 = 985425034;
int16_t x121 = INT16_MIN;
int32_t x124 = -1;
volatile int16_t x126 = INT16_MIN;
volatile int32_t t31 = 380680504;
uint64_t x131 = 10LLU;
uint16_t x133 = UINT16_MAX;
uint64_t x136 = 85387440LLU;
uint64_t x139 = 8367317LLU;
int64_t x145 = -1LL;
int32_t x146 = INT32_MAX;
static volatile int32_t t36 = -2813;
volatile int16_t x150 = INT16_MIN;
int32_t x151 = 614246603;
int32_t t40 = -453984;
static uint32_t x167 = 129052622U;
int64_t x168 = 0LL;
int8_t x169 = -1;
uint8_t x171 = 1U;
int64_t x172 = -14301419098781LL;
int32_t t43 = -1;
static uint8_t x177 = 35U;
int8_t x181 = INT8_MAX;
int64_t x192 = -1799478LL;
int64_t x196 = INT64_MIN;
int8_t x198 = INT8_MIN;
int32_t x199 = 8486;
int32_t t48 = -477905021;
int16_t x203 = INT16_MAX;
static volatile int32_t t51 = -485001;
static volatile uint32_t x221 = UINT32_MAX;
uint16_t x224 = 302U;
int16_t x225 = -13472;
static volatile uint8_t x228 = 14U;
volatile int32_t t56 = -89562628;
static uint64_t x237 = 3171500408LLU;
volatile int16_t x247 = INT16_MIN;
static uint64_t x255 = 91311086388LLU;
volatile int64_t x258 = INT64_MIN;
volatile uint32_t x259 = UINT32_MAX;
static int32_t x260 = 224724530;
uint32_t x279 = 11416U;
static volatile int32_t t67 = -179;
int8_t x289 = -5;
int64_t x290 = -199030281537LL;
uint32_t x292 = 189369170U;
static uint64_t x298 = UINT64_MAX;
static int32_t t73 = -293;
volatile int16_t x305 = -45;
int32_t x308 = INT32_MIN;
int8_t x312 = 58;
volatile int16_t x315 = 0;
int8_t x317 = -43;
static int8_t x320 = INT8_MAX;
int32_t t77 = -6340836;
volatile int32_t x327 = INT32_MIN;
int16_t x328 = INT16_MIN;
int32_t t79 = 1048707618;
static uint32_t x344 = UINT32_MAX;
volatile uint64_t x345 = 1158LLU;
int8_t x350 = 1;
int16_t x352 = INT16_MIN;
uint32_t x362 = 1U;
uint16_t x367 = UINT16_MAX;
volatile int32_t t88 = -193;
volatile int16_t x372 = INT16_MIN;
int32_t t89 = -25;
volatile uint8_t x377 = 1U;
int8_t x378 = INT8_MAX;
int32_t x391 = -1;
static int16_t x393 = 0;
uint16_t x397 = 557U;
uint16_t x399 = UINT16_MAX;
volatile int64_t x401 = INT64_MAX;
uint16_t x411 = 29U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 40840116LLU;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 107604513;

	t0 = (((x1/x2)==x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 3;
	int64_t x6 = 29573341081169807LL;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 2;

	t1 = (((x5/x6)==x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int8_t x10 = INT8_MAX;
	int32_t x12 = -21;
	static int32_t t2 = -2963636;

	t2 = (((x9/x10)==x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	volatile int32_t x15 = INT32_MIN;
	int32_t x16 = -1;
	int32_t t3 = 104581779;

	t3 = (((x13/x14)==x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	static int64_t x19 = -166066558126142473LL;
	static uint32_t x20 = 965U;
	volatile int32_t t4 = 1518307;

	t4 = (((x17/x18)==x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 1325153755U;
	int32_t x22 = 159;
	static int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -7;

	t5 = (((x21/x22)==x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -50;
	volatile uint16_t x26 = 829U;
	int64_t x27 = INT64_MIN;
	static uint32_t x28 = UINT32_MAX;
	static int32_t t6 = -2047608;

	t6 = (((x25/x26)==x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = 2014;
	volatile int8_t x32 = 1;
	int32_t t7 = -118627729;

	t7 = (((x29/x30)==x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	int64_t x35 = INT64_MAX;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -21840337;

	t8 = (((x33/x34)==x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = 148U;
	static uint16_t x39 = UINT16_MAX;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 1;

	t9 = (((x37/x38)==x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 4789524734590721425LLU;
	int8_t x43 = INT8_MAX;
	static int8_t x44 = INT8_MIN;

	t10 = (((x41/x42)==x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	static volatile uint16_t x48 = UINT16_MAX;

	t11 = (((x45/x46)==x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int64_t x51 = -1LL;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -139;

	t12 = (((x49/x50)==x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MAX;
	uint16_t x55 = 702U;
	int8_t x56 = -1;
	static int32_t t13 = -219;

	t13 = (((x53/x54)==x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x59 = INT64_MAX;
	int8_t x60 = INT8_MIN;
	static int32_t t14 = 951;

	t14 = (((x57/x58)==x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	volatile int64_t x63 = -382LL;
	volatile int32_t t15 = 1621807;

	t15 = (((x61/x62)==x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	int64_t x67 = 463970LL;
	int16_t x68 = -60;
	int32_t t16 = 24804085;

	t16 = (((x65/x66)==x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x72 = -312160LL;
	int32_t t17 = 1;

	t17 = (((x69/x70)==x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x74 = 214994569700LLU;
	int16_t x75 = -36;
	static int32_t x76 = INT32_MIN;
	static int32_t t18 = -4;

	t18 = (((x73/x74)==x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 0U;
	uint16_t x78 = 42U;
	volatile int8_t x79 = 1;
	volatile int64_t x80 = INT64_MIN;
	int32_t t19 = 1377;

	t19 = (((x77/x78)==x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = -1;
	static int8_t x83 = -1;
	int32_t t20 = 112073100;

	t20 = (((x81/x82)==x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MAX;
	uint16_t x87 = 162U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 297472999;

	t21 = (((x85/x86)==x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 2U;
	int32_t x90 = -1;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = -21447219;

	t22 = (((x89/x90)==x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 43U;
	volatile int8_t x94 = -1;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 2976298;

	t23 = (((x93/x94)==x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	volatile int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -1518;

	t24 = (((x97/x98)==x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 28957001;

	t25 = (((x101/x102)==x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -2236295;
	uint16_t x107 = UINT16_MAX;
	int32_t t26 = -260539;

	t26 = (((x105/x106)==x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	volatile int32_t x110 = 45809;
	int8_t x111 = INT8_MAX;
	int32_t x112 = -1;
	int32_t t27 = -109581;

	t27 = (((x109/x110)==x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int32_t x115 = INT32_MIN;
	int32_t t28 = 384;

	t28 = (((x113/x114)==x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -111679;
	static int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -53645;

	t29 = (((x117/x118)==x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	int32_t t30 = 1;

	t30 = (((x121/x122)==x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x127 = -12467616553432LL;
	volatile int32_t x128 = 5594378;

	t31 = (((x125/x126)==x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x130 = -4558236684LL;
	static uint16_t x132 = UINT16_MAX;
	int32_t t32 = -5831025;

	t32 = (((x129/x130)==x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 21;
	int32_t x135 = INT32_MIN;
	static int32_t t33 = 2257158;

	t33 = (((x133/x134)==x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	static int64_t x140 = INT64_MAX;
	int32_t t34 = -13;

	t34 = (((x137/x138)==x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	uint64_t x142 = 1LLU;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = INT16_MIN;
	static int32_t t35 = -12829;

	t35 = (((x141/x142)==x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = INT16_MAX;
	static int64_t x148 = -1LL;

	t36 = (((x145/x146)==x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 69017;

	t37 = (((x149/x150)==x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	volatile int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	static int64_t x156 = INT64_MAX;
	int32_t t38 = -4666;

	t38 = (((x153/x154)==x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	static int8_t x158 = 15;
	uint64_t x159 = 23385796383589105LLU;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t39 = -1208;

	t39 = (((x157/x158)==x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = -923429;
	int16_t x162 = INT16_MAX;
	uint8_t x163 = 62U;
	int8_t x164 = -1;

	t40 = (((x161/x162)==x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 13U;
	volatile uint8_t x166 = UINT8_MAX;
	volatile int32_t t41 = 1907;

	t41 = (((x165/x166)==x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = 47836989967558520LLU;
	static int32_t t42 = 16486;

	t42 = (((x169/x170)==x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 45;
	static volatile int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = -42;

	t43 = (((x173/x174)==x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x178 = 3U;
	int64_t x179 = -1LL;
	static uint64_t x180 = UINT64_MAX;
	int32_t t44 = -111620;

	t44 = (((x177/x178)==x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -53;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t45 = -3;

	t45 = (((x181/x182)==x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = -1;
	int32_t x191 = -1;
	int32_t t46 = 350;

	t46 = (((x189/x190)==x191)<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 1;
	int32_t x194 = 876058863;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t t47 = -231006;

	t47 = (((x193/x194)==x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x197 = 564U;
	uint32_t x200 = UINT32_MAX;

	t48 = (((x197/x198)==x199)<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	uint64_t x202 = 34483998819LLU;
	int32_t x204 = -1;
	int32_t t49 = -1;

	t49 = (((x201/x202)==x203)<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -133392336;
	int8_t x206 = -1;
	int64_t x207 = INT64_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t50 = 12736235;

	t50 = (((x205/x206)==x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = 1;
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MIN;
	static int8_t x212 = INT8_MIN;

	t51 = (((x209/x210)==x211)<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = -1LL;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t52 = 4793;

	t52 = (((x213/x214)==x215)<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	volatile int16_t x219 = -1;
	int16_t x220 = INT16_MIN;
	static int32_t t53 = -248882;

	t53 = (((x217/x218)==x219)<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	int32_t t54 = 263452781;

	t54 = (((x221/x222)==x223)<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x226 = -1;
	int64_t x227 = -1LL;
	volatile int32_t t55 = -290001798;

	t55 = (((x225/x226)==x227)<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static volatile int64_t x230 = INT64_MAX;
	uint8_t x231 = 0U;
	uint8_t x232 = 8U;

	t56 = (((x229/x230)==x231)<x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	static int64_t x234 = INT64_MAX;
	int8_t x235 = -1;
	uint64_t x236 = 8571208LLU;
	static int32_t t57 = -319;

	t57 = (((x233/x234)==x235)<x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	static uint64_t x240 = UINT64_MAX;
	volatile int32_t t58 = 856;

	t58 = (((x237/x238)==x239)<x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MAX;
	static int8_t x242 = -1;
	int64_t x243 = INT64_MIN;
	volatile uint16_t x244 = 60U;
	volatile int32_t t59 = -132;

	t59 = (((x241/x242)==x243)<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MIN;
	uint32_t x248 = 11628821U;
	int32_t t60 = 15703326;

	t60 = (((x245/x246)==x247)<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = 96898;
	static uint32_t x250 = UINT32_MAX;
	static int32_t x251 = INT32_MIN;
	volatile int8_t x252 = -4;
	volatile int32_t t61 = 2;

	t61 = (((x249/x250)==x251)<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 15U;
	int64_t x254 = INT64_MAX;
	static uint16_t x256 = 454U;
	volatile int32_t t62 = -76255;

	t62 = (((x253/x254)==x255)<x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = -15;
	int32_t t63 = -5568812;

	t63 = (((x257/x258)==x259)<x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = INT32_MIN;
	static int64_t x262 = INT64_MAX;
	static int64_t x263 = INT64_MAX;
	static int8_t x264 = INT8_MAX;
	int32_t t64 = -12;

	t64 = (((x261/x262)==x263)<x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = 1916U;
	int16_t x266 = -1;
	int32_t x267 = INT32_MIN;
	int64_t x268 = -3839LL;
	volatile int32_t t65 = -2;

	t65 = (((x265/x266)==x267)<x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x269 = -246552908;
	static int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	int8_t x272 = INT8_MIN;
	int32_t t66 = -14797;

	t66 = (((x269/x270)==x271)<x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = 44;
	uint8_t x278 = UINT8_MAX;
	int8_t x280 = INT8_MAX;

	t67 = (((x277/x278)==x279)<x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x281 = -1;
	int8_t x282 = INT8_MIN;
	int64_t x283 = 32799445887729LL;
	int64_t x284 = INT64_MIN;
	int32_t t68 = 58;

	t68 = (((x281/x282)==x283)<x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = 8;
	static int32_t x287 = INT32_MIN;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t69 = 1578;

	t69 = (((x285/x286)==x287)<x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x291 = INT64_MAX;
	int32_t t70 = -7437;

	t70 = (((x289/x290)==x291)<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x293 = 1;
	int32_t x294 = 6;
	static int32_t x295 = INT32_MIN;
	static uint32_t x296 = 23094U;
	int32_t t71 = -946;

	t71 = (((x293/x294)==x295)<x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x297 = INT64_MAX;
	int64_t x299 = INT64_MAX;
	int64_t x300 = -152877484520568680LL;
	volatile int32_t t72 = -504436;

	t72 = (((x297/x298)==x299)<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x302 = -13LL;
	int64_t x303 = -4LL;
	static int64_t x304 = -248103842710LL;

	t73 = (((x301/x302)==x303)<x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x306 = INT32_MAX;
	int64_t x307 = -1LL;
	volatile int32_t t74 = -1973469;

	t74 = (((x305/x306)==x307)<x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = 6;
	int32_t x310 = -118946524;
	static int16_t x311 = INT16_MAX;
	int32_t t75 = 63;

	t75 = (((x309/x310)==x311)<x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = -7LL;
	int64_t x314 = -1LL;
	static int8_t x316 = -1;
	volatile int32_t t76 = 3;

	t76 = (((x313/x314)==x315)<x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = INT8_MIN;
	volatile uint16_t x319 = UINT16_MAX;

	t77 = (((x317/x318)==x319)<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 327U;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = INT32_MAX;
	int16_t x324 = -1;
	volatile int32_t t78 = -6;

	t78 = (((x321/x322)==x323)<x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x325 = 5U;
	int64_t x326 = -1LL;

	t79 = (((x325/x326)==x327)<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -15;
	int8_t x330 = INT8_MIN;
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = 114008679LLU;
	volatile int32_t t80 = -4400;

	t80 = (((x329/x330)==x331)<x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	static int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t81 = 5;

	t81 = (((x333/x334)==x335)<x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	uint32_t x339 = 1835592817U;
	uint64_t x340 = 1905536207LLU;
	volatile int32_t t82 = 3011;

	t82 = (((x337/x338)==x339)<x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 472U;
	volatile int64_t x342 = -1LL;
	volatile int32_t x343 = -1;
	int32_t t83 = 6;

	t83 = (((x341/x342)==x343)<x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = 996815076211944LLU;
	volatile int32_t t84 = 939596986;

	t84 = (((x345/x346)==x347)<x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MAX;
	int16_t x351 = -15;
	volatile int32_t t85 = -448373942;

	t85 = (((x349/x350)==x351)<x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	uint64_t x354 = UINT64_MAX;
	static int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t86 = 145;

	t86 = (((x353/x354)==x355)<x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = -49099229824LL;
	volatile int32_t x363 = 4;
	static int32_t x364 = -52595559;
	int32_t t87 = -5;

	t87 = (((x361/x362)==x363)<x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -1;
	int32_t x366 = 11579;
	int64_t x368 = -1LL;

	t88 = (((x365/x366)==x367)<x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -2258226299LL;
	int16_t x370 = -1;
	int16_t x371 = -8155;

	t89 = (((x369/x370)==x371)<x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = 6096;
	int32_t x375 = 7554124;
	volatile int16_t x376 = 0;
	volatile int32_t t90 = 95654201;

	t90 = (((x373/x374)==x375)<x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x379 = -1LL;
	int32_t x380 = INT32_MIN;
	int32_t t91 = 6618;

	t91 = (((x377/x378)==x379)<x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = -511;
	static volatile int8_t x383 = -11;
	volatile int64_t x384 = -6743LL;
	static volatile int32_t t92 = 0;

	t92 = (((x381/x382)==x383)<x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MIN;
	volatile int8_t x386 = INT8_MAX;
	int64_t x387 = 417520360675644LL;
	int8_t x388 = 1;
	volatile int32_t t93 = 76;

	t93 = (((x385/x386)==x387)<x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x389 = INT64_MIN;
	uint32_t x390 = 2300U;
	int64_t x392 = 2546400512554826LL;
	int32_t t94 = 240;

	t94 = (((x389/x390)==x391)<x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x394 = -31;
	int32_t x395 = -1;
	int32_t x396 = INT32_MIN;
	volatile int32_t t95 = 43;

	t95 = (((x393/x394)==x395)<x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x398 = 448U;
	volatile uint64_t x400 = 1023LLU;
	int32_t t96 = 31;

	t96 = (((x397/x398)==x399)<x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x402 = 3U;
	volatile uint64_t x403 = UINT64_MAX;
	volatile int16_t x404 = -2;
	volatile int32_t t97 = -1735;

	t97 = (((x401/x402)==x403)<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = 109277858591097LL;
	int32_t x410 = -7495599;
	static uint16_t x412 = 1948U;
	int32_t t98 = 205;

	t98 = (((x409/x410)==x411)<x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x413 = 204855U;
	static int32_t x414 = INT32_MAX;
	uint64_t x415 = UINT64_MAX;
	volatile uint8_t x416 = 65U;
	volatile int32_t t99 = 23147;

	t99 = (((x413/x414)==x415)<x416);

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

