#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x13 = 238;
static int8_t x24 = 0;
uint64_t x28 = 167701LLU;
int16_t x31 = INT16_MIN;
int32_t x38 = INT32_MIN;
volatile uint16_t x42 = 7U;
int64_t x47 = INT64_MIN;
volatile int32_t x50 = INT32_MIN;
volatile int32_t t12 = 6;
static int16_t x55 = -1;
volatile int32_t t13 = 215333880;
volatile int32_t x58 = INT32_MAX;
volatile int32_t t14 = INT32_MIN;
volatile int32_t t15 = 22;
static int8_t x68 = 29;
int16_t x69 = -11;
volatile int8_t x73 = INT8_MAX;
int64_t x77 = -5LL;
int32_t t19 = -20293;
static int8_t x83 = -14;
volatile int64_t x86 = -9LL;
int32_t x95 = -1;
volatile int16_t x97 = INT16_MIN;
int64_t x99 = 1402426LL;
uint64_t x103 = UINT64_MAX;
int64_t x114 = INT64_MIN;
int32_t x115 = INT32_MIN;
int32_t x116 = -10760;
int16_t x123 = -16079;
int64_t x125 = 770295389900LL;
int16_t x129 = -1;
uint32_t x131 = UINT32_MAX;
static int16_t x134 = INT16_MAX;
int16_t x137 = 0;
int8_t x139 = -1;
int32_t t34 = -1752697;
int8_t x144 = 14;
volatile int32_t t38 = -927239;
int32_t x157 = 9677970;
static int16_t x158 = INT16_MIN;
uint32_t t39 = 12327U;
int32_t t40 = -5;
int16_t x172 = INT16_MIN;
static volatile uint16_t x175 = 21851U;
volatile uint32_t t43 = 94008U;
int32_t x184 = INT32_MAX;
int32_t t44 = INT32_MAX;
int16_t x186 = INT16_MIN;
int8_t x195 = -6;
uint8_t x199 = UINT8_MAX;
volatile int32_t t48 = -477880250;
int32_t x206 = INT32_MAX;
int8_t x216 = INT8_MIN;
volatile int32_t t52 = 2135669;
uint16_t x230 = UINT16_MAX;
int32_t x233 = INT32_MIN;
int16_t x234 = INT16_MAX;
int8_t x238 = INT8_MIN;
int16_t x240 = -1;
int16_t x241 = -14;
int32_t t58 = 147376;
static uint32_t x246 = UINT32_MAX;
static volatile int32_t t59 = 215772;
volatile uint64_t x251 = 257761092905055217LLU;
int8_t x255 = INT8_MAX;
uint32_t x265 = UINT32_MAX;
int32_t x270 = -1;
volatile int32_t x276 = -1;
int16_t x277 = 0;
int64_t x279 = 41810098534LL;
int32_t x283 = INT32_MIN;
int8_t x287 = INT8_MAX;
volatile int16_t x289 = -1;
int16_t x293 = INT16_MIN;
int16_t x299 = -474;
volatile uint64_t x300 = UINT64_MAX;
uint64_t x302 = UINT64_MAX;
uint64_t x308 = 90LLU;
int16_t x309 = INT16_MAX;
static int32_t t75 = -2427;
volatile int64_t x316 = INT64_MAX;
static int64_t t76 = INT64_MAX;
uint8_t x317 = 50U;
int32_t x320 = INT32_MIN;
volatile int32_t t77 = INT32_MIN;
static int16_t x321 = -1;
int32_t t78 = 96359803;
int64_t x327 = INT64_MAX;
static int32_t x329 = -1;
volatile int8_t x332 = INT8_MIN;
int16_t x341 = INT16_MIN;
int32_t x346 = 7914262;
volatile int64_t x350 = -1LL;
int16_t x359 = INT16_MAX;
int16_t x364 = INT16_MIN;
int8_t x366 = INT8_MIN;
volatile int32_t t90 = -1195357;
int16_t x384 = INT16_MAX;
int32_t t94 = INT32_MIN;
int8_t x391 = INT8_MIN;
int64_t t95 = INT64_MIN;
volatile int16_t x394 = INT16_MAX;
int16_t x395 = INT16_MAX;
static volatile int16_t x396 = -32;
uint8_t x398 = 1U;
int64_t x401 = INT64_MAX;
volatile int32_t x403 = INT32_MAX;


void f0(void) {
	static volatile uint16_t x1 = UINT16_MAX;
	uint32_t x2 = 58753U;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = -1;
	static volatile int32_t t0 = -933;

	t0 = (((x1%x2)==x3)^x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int64_t x6 = INT64_MAX;
	uint64_t x7 = 4924930925718326115LLU;
	int16_t x8 = -1;
	int32_t t1 = 3834;

	t1 = (((x5%x6)==x7)^x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static volatile int16_t x10 = -1;
	int8_t x11 = INT8_MAX;
	uint32_t x12 = 63195U;
	static volatile uint32_t t2 = 154U;

	t2 = (((x9%x10)==x11)^x12);

	if (t2 != 63195U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 105007LLU;
	uint64_t t3 = 391752839226766120LLU;

	t3 = (((x13%x14)==x15)^x16);

	if (t3 != 105007LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	static volatile int64_t x20 = -104372050856553LL;
	int64_t t4 = 2151319LL;

	t4 = (((x17%x18)==x19)^x20);

	if (t4 != -104372050856553LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	int8_t x22 = INT8_MAX;
	volatile int64_t x23 = INT64_MAX;
	int32_t t5 = 3372;

	t5 = (((x21%x22)==x23)^x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 59U;
	static volatile int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	volatile uint64_t t6 = 33972LLU;

	t6 = (((x25%x26)==x27)^x28);

	if (t6 != 167701LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int32_t x30 = -11048;
	uint16_t x32 = 194U;
	static volatile int32_t t7 = 372737;

	t7 = (((x29%x30)==x31)^x32);

	if (t7 != 194) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -21;
	static int64_t x34 = -1LL;
	int16_t x35 = -13;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (((x33%x34)==x35)^x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static uint16_t x39 = 237U;
	uint8_t x40 = 32U;
	volatile int32_t t9 = 12694112;

	t9 = (((x37%x38)==x39)^x40);

	if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 174U;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MIN;
	static int32_t t10 = -9315527;

	t10 = (((x41%x42)==x43)^x44);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MAX;
	volatile uint8_t x48 = 3U;
	int32_t t11 = -2285151;

	t11 = (((x45%x46)==x47)^x48);

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;

	t12 = (((x49%x50)==x51)^x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 14094558641LLU;
	int8_t x54 = -60;
	volatile int16_t x56 = INT16_MAX;

	t13 = (((x53%x54)==x55)^x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int8_t x59 = -1;
	int32_t x60 = INT32_MIN;

	t14 = (((x57%x58)==x59)^x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static uint32_t x62 = UINT32_MAX;
	int16_t x63 = -1;
	int32_t x64 = -167592;

	t15 = (((x61%x62)==x63)^x64);

	if (t15 != -167592) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 81U;
	int8_t x67 = INT8_MIN;
	static volatile int32_t t16 = 1;

	t16 = (((x65%x66)==x67)^x68);

	if (t16 != 29) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	static int16_t x71 = INT16_MIN;
	static uint64_t x72 = UINT64_MAX;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (((x69%x70)==x71)^x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MAX;
	volatile int32_t x75 = -7737;
	volatile int16_t x76 = INT16_MIN;
	int32_t t18 = -7;

	t18 = (((x73%x74)==x75)^x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	static int32_t x80 = -1;

	t19 = (((x77%x78)==x79)^x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static int8_t x82 = 5;
	int8_t x84 = -1;
	volatile int32_t t20 = 779347791;

	t20 = (((x81%x82)==x83)^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static uint8_t x87 = UINT8_MAX;
	static uint8_t x88 = UINT8_MAX;
	int32_t t21 = 207101444;

	t21 = (((x85%x86)==x87)^x88);

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 394;
	int16_t x90 = -1;
	uint64_t x91 = 5164869LLU;
	int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = (((x89%x90)==x91)^x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 49U;
	static uint8_t x94 = 71U;
	static int16_t x96 = -1;
	static int32_t t23 = 127315878;

	t23 = (((x93%x94)==x95)^x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	int16_t x100 = INT16_MAX;
	static int32_t t24 = 392363705;

	t24 = (((x97%x98)==x99)^x100);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1U;
	int64_t x102 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x101%x102)==x103)^x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	volatile int16_t x106 = -11475;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = 3140539265967LLU;
	static volatile uint64_t t26 = 19LLU;

	t26 = (((x105%x106)==x107)^x108);

	if (t26 != 3140539265967LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int8_t x110 = INT8_MAX;
	int32_t x111 = 179;
	int16_t x112 = -1;
	volatile int32_t t27 = 99894904;

	t27 = (((x109%x110)==x111)^x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t t28 = -225;

	t28 = (((x113%x114)==x115)^x116);

	if (t28 != -10760) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int32_t x118 = INT32_MIN;
	static uint32_t x119 = 50U;
	static volatile int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = -1701;

	t29 = (((x117%x118)==x119)^x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 0;
	int32_t x122 = INT32_MAX;
	int64_t x124 = -1LL;
	static volatile int64_t t30 = 0LL;

	t30 = (((x121%x122)==x123)^x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x126 = -1LL;
	int64_t x127 = -33LL;
	int8_t x128 = -1;
	volatile int32_t t31 = 46906990;

	t31 = (((x125%x126)==x127)^x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 22U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -110839;

	t32 = (((x129%x130)==x131)^x132);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 1961874781044625LLU;
	int8_t x135 = -56;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = -72086;

	t33 = (((x133%x134)==x135)^x136);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MAX;
	int16_t x140 = 1021;

	t34 = (((x137%x138)==x139)^x140);

	if (t34 != 1021) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = -1;
	volatile int32_t x142 = -1;
	int8_t x143 = -1;
	volatile int32_t t35 = 123449594;

	t35 = (((x141%x142)==x143)^x144);

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x146 = 167303841308020010LL;
	volatile uint32_t x147 = UINT32_MAX;
	int16_t x148 = -1;
	volatile int32_t t36 = 696179;

	t36 = (((x145%x146)==x147)^x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -15905;
	uint32_t x150 = UINT32_MAX;
	static uint8_t x151 = 53U;
	static int32_t x152 = -1;
	volatile int32_t t37 = 15474;

	t37 = (((x149%x150)==x151)^x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 1034041;
	static volatile uint8_t x154 = 58U;
	uint32_t x155 = 7U;
	int32_t x156 = 5748671;

	t38 = (((x153%x154)==x155)^x156);

	if (t38 != 5748671) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = INT32_MAX;
	uint32_t x160 = 324736U;

	t39 = (((x157%x158)==x159)^x160);

	if (t39 != 324736U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x161 = UINT16_MAX;
	volatile uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;

	t40 = (((x161%x162)==x163)^x164);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -6786885706905682LL;
	int8_t x170 = INT8_MIN;
	int32_t x171 = 15897;
	volatile int32_t t41 = -5;

	t41 = (((x169%x170)==x171)^x172);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -37;
	static volatile int32_t x176 = -3466;
	int32_t t42 = 28349568;

	t42 = (((x173%x174)==x175)^x176);

	if (t42 != -3466) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MAX;
	uint32_t x179 = UINT32_MAX;
	uint32_t x180 = 0U;

	t43 = (((x177%x178)==x179)^x180);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 37;
	uint32_t x182 = 1172702U;
	uint64_t x183 = UINT64_MAX;

	t44 = (((x181%x182)==x183)^x184);

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = -71187112088589521LL;
	uint8_t x187 = UINT8_MAX;
	static int64_t x188 = INT64_MIN;
	static volatile int64_t t45 = INT64_MIN;

	t45 = (((x185%x186)==x187)^x188);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = 6;
	int32_t x192 = -4;
	volatile int32_t t46 = 3;

	t46 = (((x189%x190)==x191)^x192);

	if (t46 != -4) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x194 = -410;
	int8_t x196 = 0;
	int32_t t47 = 3990523;

	t47 = (((x193%x194)==x195)^x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	int16_t x198 = -1;
	uint8_t x200 = 0U;

	t48 = (((x197%x198)==x199)^x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = INT16_MIN;
	static uint64_t x202 = 11LLU;
	static int32_t x203 = -100421;
	int64_t x204 = INT64_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (((x201%x202)==x203)^x204);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 19U;
	uint16_t x207 = 28U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = 7051653;

	t50 = (((x205%x206)==x207)^x208);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MIN;
	uint32_t x210 = 3095257U;
	int64_t x211 = INT64_MIN;
	static int16_t x212 = INT16_MAX;
	int32_t t51 = -296490562;

	t51 = (((x209%x210)==x211)^x212);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 15;
	volatile int64_t x214 = 342LL;
	volatile int32_t x215 = 248705;

	t52 = (((x213%x214)==x215)^x216);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = -222363517LL;
	int32_t x219 = INT32_MIN;
	static uint8_t x220 = 14U;
	static int32_t t53 = 0;

	t53 = (((x217%x218)==x219)^x220);

	if (t53 != 14) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	uint16_t x226 = 171U;
	volatile uint64_t x227 = UINT64_MAX;
	volatile uint16_t x228 = 2U;
	int32_t t54 = -19177;

	t54 = (((x225%x226)==x227)^x228);

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int64_t x231 = INT64_MIN;
	int32_t x232 = -1;
	static volatile int32_t t55 = 204319;

	t55 = (((x229%x230)==x231)^x232);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x235 = -15;
	int32_t x236 = INT32_MAX;
	volatile int32_t t56 = INT32_MAX;

	t56 = (((x233%x234)==x235)^x236);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	uint64_t x239 = 28344LLU;
	volatile int32_t t57 = -52838109;

	t57 = (((x237%x238)==x239)^x240);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x242 = INT64_MAX;
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MIN;

	t58 = (((x241%x242)==x243)^x244);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;

	t59 = (((x245%x246)==x247)^x248);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = -14;
	uint8_t x250 = UINT8_MAX;
	static int8_t x252 = -12;
	static int32_t t60 = 89062812;

	t60 = (((x249%x250)==x251)^x252);

	if (t60 != -12) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MAX;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t61 = 7;

	t61 = (((x253%x254)==x255)^x256);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	volatile uint32_t x258 = UINT32_MAX;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = 4U;
	volatile int32_t t62 = -2;

	t62 = (((x257%x258)==x259)^x260);

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 2612U;
	int8_t x262 = -46;
	volatile int32_t x263 = -56737;
	uint32_t x264 = 7496648U;
	uint32_t t63 = 3029456U;

	t63 = (((x261%x262)==x263)^x264);

	if (t63 != 7496648U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x266 = -1;
	int64_t x267 = INT64_MAX;
	uint8_t x268 = 1U;
	volatile int32_t t64 = 920265;

	t64 = (((x265%x266)==x267)^x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 0U;
	static int32_t x271 = INT32_MIN;
	volatile int16_t x272 = -1;
	static volatile int32_t t65 = 1596;

	t65 = (((x269%x270)==x271)^x272);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x273 = INT16_MIN;
	static int32_t x274 = INT32_MAX;
	int16_t x275 = -1;
	int32_t t66 = 92;

	t66 = (((x273%x274)==x275)^x276);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x278 = INT16_MIN;
	static uint64_t x280 = 108324885LLU;
	static uint64_t t67 = 4LLU;

	t67 = (((x277%x278)==x279)^x280);

	if (t67 != 108324885LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -368121926098240810LL;
	static int64_t x282 = INT64_MIN;
	uint8_t x284 = 16U;
	volatile int32_t t68 = 0;

	t68 = (((x281%x282)==x283)^x284);

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -14;
	volatile int16_t x286 = INT16_MIN;
	int16_t x288 = -1;
	int32_t t69 = -3676;

	t69 = (((x285%x286)==x287)^x288);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MAX;
	static int16_t x291 = INT16_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = (((x289%x290)==x291)^x292);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = 679;
	int64_t x296 = -1LL;
	int64_t t71 = -1LL;

	t71 = (((x293%x294)==x295)^x296);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x297 = INT8_MAX;
	int64_t x298 = 42219335LL;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x297%x298)==x299)^x300);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = UINT64_MAX;
	uint8_t x303 = 1U;
	static int16_t x304 = INT16_MAX;
	int32_t t73 = 0;

	t73 = (((x301%x302)==x303)^x304);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x305 = INT32_MAX;
	int32_t x306 = -1;
	int32_t x307 = INT32_MAX;
	static uint64_t t74 = 376LLU;

	t74 = (((x305%x306)==x307)^x308);

	if (t74 != 90LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x310 = INT8_MAX;
	static int8_t x311 = -1;
	int8_t x312 = INT8_MAX;

	t75 = (((x309%x310)==x311)^x312);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = -58;
	int64_t x314 = INT64_MAX;
	uint16_t x315 = UINT16_MAX;

	t76 = (((x313%x314)==x315)^x316);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x318 = INT16_MAX;
	volatile uint8_t x319 = 1U;

	t77 = (((x317%x318)==x319)^x320);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	uint8_t x324 = 1U;

	t78 = (((x321%x322)==x323)^x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = -1;
	static uint16_t x328 = 0U;
	static volatile int32_t t79 = -827454;

	t79 = (((x325%x326)==x327)^x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = INT16_MIN;
	static int32_t x331 = -1;
	volatile int32_t t80 = 146153;

	t80 = (((x329%x330)==x331)^x332);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = -23467801203488774LL;
	static int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t81 = -10805;

	t81 = (((x333%x334)==x335)^x336);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	int8_t x339 = 0;
	int32_t x340 = -305;
	int32_t t82 = 3052731;

	t82 = (((x337%x338)==x339)^x340);

	if (t82 != -306) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	int32_t t83 = -38888269;

	t83 = (((x341%x342)==x343)^x344);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 80186018051031LLU;
	int32_t x347 = INT32_MIN;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t84 = 60117;

	t84 = (((x345%x346)==x347)^x348);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -2447785725285089LL;
	int32_t x351 = INT32_MAX;
	int64_t x352 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (((x349%x350)==x351)^x352);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 88077020U;
	static int64_t x354 = 360822LL;
	static uint32_t x355 = 446808U;
	int16_t x356 = INT16_MIN;
	int32_t t86 = 0;

	t86 = (((x353%x354)==x355)^x356);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = -4700;
	int32_t x360 = INT32_MIN;
	int32_t t87 = INT32_MIN;

	t87 = (((x357%x358)==x359)^x360);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	uint8_t x363 = 1U;
	int32_t t88 = 51;

	t88 = (((x361%x362)==x363)^x364);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = -1;
	int64_t x367 = INT64_MAX;
	int64_t x368 = 1467882449LL;
	int64_t t89 = 245842010316LL;

	t89 = (((x365%x366)==x367)^x368);

	if (t89 != 1467882449LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x369 = INT32_MAX;
	int32_t x370 = INT32_MAX;
	uint16_t x371 = 1U;
	volatile int8_t x372 = INT8_MIN;

	t90 = (((x369%x370)==x371)^x372);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 5907900195732967LLU;
	volatile uint64_t x374 = 381305017939233LLU;
	volatile int16_t x375 = INT16_MIN;
	volatile uint64_t x376 = UINT64_MAX;
	static uint64_t t91 = UINT64_MAX;

	t91 = (((x373%x374)==x375)^x376);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 95876862LLU;
	int64_t x378 = INT64_MIN;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = 96;
	int32_t t92 = -483314;

	t92 = (((x377%x378)==x379)^x380);

	if (t92 != 96) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x381 = 0LLU;
	static int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MAX;
	static int32_t t93 = -1;

	t93 = (((x381%x382)==x383)^x384);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = 11252U;
	uint16_t x386 = 34U;
	static int8_t x387 = -1;
	int32_t x388 = INT32_MIN;

	t94 = (((x385%x386)==x387)^x388);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = 2197534428397LL;
	uint32_t x390 = 10508U;
	int64_t x392 = INT64_MIN;

	t95 = (((x389%x390)==x391)^x392);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	volatile int32_t t96 = -374665331;

	t96 = (((x393%x394)==x395)^x396);

	if (t96 != -32) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MAX;
	int8_t x399 = 14;
	int8_t x400 = -1;
	static int32_t t97 = -110615122;

	t97 = (((x397%x398)==x399)^x400);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x402 = UINT16_MAX;
	uint64_t x404 = 4219831995567LLU;
	uint64_t t98 = 2458106832663725656LLU;

	t98 = (((x401%x402)==x403)^x404);

	if (t98 != 4219831995567LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = 582458;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	volatile int64_t x408 = -1LL;
	int64_t t99 = -99079679702624LL;

	t99 = (((x405%x406)==x407)^x408);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

