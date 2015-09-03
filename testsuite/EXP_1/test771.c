#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 3U;
uint32_t x15 = 526U;
int64_t t3 = 3778LL;
uint32_t x18 = 3416544U;
uint32_t x19 = UINT32_MAX;
static int32_t x20 = 10453;
volatile int16_t x24 = 146;
volatile int8_t x32 = -1;
static volatile int8_t x40 = -1;
static uint64_t x43 = 1299LLU;
int32_t x45 = INT32_MAX;
uint32_t x46 = UINT32_MAX;
int8_t x48 = -1;
volatile int32_t t12 = 51389468;
static int8_t x57 = -1;
volatile int64_t t14 = -15369431370810709LL;
int32_t t15 = 9;
uint8_t x80 = UINT8_MAX;
int32_t t20 = 636;
int8_t x90 = INT8_MIN;
volatile int16_t x94 = 1586;
int32_t t22 = 439653;
volatile int64_t x97 = INT64_MAX;
uint8_t x99 = 90U;
int16_t x101 = -1;
int32_t x102 = INT32_MAX;
int32_t t24 = 27133883;
int64_t x111 = INT64_MIN;
volatile int32_t t26 = -7249;
uint32_t x115 = 449011U;
static volatile int64_t x129 = 3733250331912LL;
int32_t x131 = INT32_MIN;
uint8_t x135 = 3U;
int16_t x136 = INT16_MIN;
int64_t t34 = 2902689293280LL;
uint32_t x152 = UINT32_MAX;
int8_t x156 = INT8_MAX;
int16_t x158 = -1;
static int16_t x161 = INT16_MIN;
volatile int8_t x172 = INT8_MIN;
uint8_t x189 = 2U;
int32_t x194 = INT32_MIN;
uint16_t x195 = UINT16_MAX;
uint64_t t45 = 124436593193LLU;
uint8_t x209 = 23U;
uint32_t x214 = 2067606859U;
int32_t x216 = -23;
int16_t x217 = INT16_MIN;
static int8_t x219 = -25;
uint8_t x228 = 12U;
uint8_t x234 = UINT8_MAX;
volatile int32_t t54 = 1;
uint32_t x238 = 172012874U;
volatile int64_t t55 = 4226466712216591LL;
static int32_t x243 = INT32_MIN;
int64_t x245 = 28LL;
static volatile int16_t x248 = -3429;
static int32_t t59 = 3;
volatile int64_t x260 = -1687116485166249LL;
static uint16_t x262 = UINT16_MAX;
static int8_t x265 = -5;
int8_t x267 = -2;
volatile int32_t x271 = 429157090;
uint16_t x272 = 214U;
int16_t x280 = INT16_MAX;
int32_t t65 = 1;
static int8_t x287 = INT8_MIN;
volatile int32_t t67 = 99372;
int64_t x291 = INT64_MIN;
int8_t x292 = -1;
static volatile int32_t t69 = 106175;
static int16_t x300 = -1;
volatile int32_t t71 = 55321060;
int64_t x307 = INT64_MIN;
int32_t x310 = INT32_MIN;
int64_t x312 = INT64_MIN;
uint64_t x315 = 2911094808052579971LLU;
uint16_t x317 = UINT16_MAX;
int64_t x319 = -1LL;
int16_t x321 = -1;
volatile int64_t t77 = -613346937095593LL;
volatile int16_t x332 = -1;
volatile int32_t t78 = 93885473;
uint16_t x337 = UINT16_MAX;
uint16_t x342 = 49U;
static volatile int64_t x344 = INT64_MAX;
int64_t x347 = INT64_MAX;
int32_t x352 = INT32_MAX;
volatile int64_t x366 = -21487819896528LL;
int8_t x367 = -13;
uint32_t x369 = 880167U;
static volatile uint32_t t86 = 29186U;
static volatile int32_t t87 = 50029940;
int8_t x377 = 13;
int64_t x378 = 952910LL;
uint32_t x380 = 7U;
static volatile int64_t x381 = 112234097111LL;
int32_t t89 = -1;
int64_t x385 = -953641351LL;
volatile int8_t x386 = INT8_MIN;
int32_t x390 = INT32_MIN;
uint16_t x402 = UINT16_MAX;
static int8_t x404 = INT8_MIN;
static volatile int32_t t94 = 1026841;
int64_t x406 = INT64_MAX;
uint8_t x412 = UINT8_MAX;
int32_t t98 = 466;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint8_t x3 = 122U;
	int8_t x4 = -1;
	int32_t t0 = 108;

	t0 = (((x1%x2)==x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 25961296687LL;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MIN;
	int16_t x8 = 18;
	int32_t t1 = -327550700;

	t1 = (((x5%x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 33;
	static volatile int64_t x10 = -471840307888LL;
	int64_t x11 = -12186150LL;
	volatile int64_t x12 = -26087945738169041LL;
	int64_t t2 = -4408500115754193LL;

	t2 = (((x9%x10)==x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static uint64_t x14 = 549903LLU;
	int64_t x16 = INT64_MAX;

	t3 = (((x13%x14)==x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 2;
	volatile int32_t t4 = 1;

	t4 = (((x17%x18)==x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint64_t x22 = 41619922400296971LLU;
	static uint64_t x23 = UINT64_MAX;
	int32_t t5 = 40961;

	t5 = (((x21%x22)==x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = -1;
	volatile int32_t x28 = -1;
	int32_t t6 = -1752;

	t6 = (((x25%x26)==x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 248820102275644LL;
	static int64_t x30 = INT64_MIN;
	int64_t x31 = -1LL;
	int32_t t7 = 1376356;

	t7 = (((x29%x30)==x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = UINT16_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	volatile int64_t x39 = INT64_MAX;
	volatile int32_t t8 = 7838;

	t8 = (((x37%x38)==x39)/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = 25280337;

	t9 = (((x41%x42)==x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x47 = 437U;
	int32_t t10 = 16736;

	t10 = (((x45%x46)==x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 2428593;
	uint32_t x50 = UINT32_MAX;
	volatile int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	volatile int64_t t11 = -7LL;

	t11 = (((x49%x50)==x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	volatile uint32_t x55 = 1025181922U;
	static int16_t x56 = INT16_MIN;

	t12 = (((x53%x54)==x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 156965337;
	int32_t t13 = -3;

	t13 = (((x57%x58)==x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	uint8_t x62 = UINT8_MAX;
	int64_t x63 = -528249442559086988LL;
	int64_t x64 = INT64_MAX;

	t14 = (((x61%x62)==x63)/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = INT64_MIN;
	volatile int32_t x66 = INT32_MAX;
	int16_t x67 = 174;
	int32_t x68 = INT32_MIN;

	t15 = (((x65%x66)==x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = 9221;
	int32_t x70 = -1938246;
	volatile int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MAX;
	volatile int64_t t16 = 412LL;

	t16 = (((x69%x70)==x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 0U;
	uint32_t x74 = 1073037U;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -1;
	volatile int32_t t17 = 1470;

	t17 = (((x73%x74)==x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = 99;
	volatile int32_t x78 = INT32_MAX;
	static volatile uint16_t x79 = UINT16_MAX;
	volatile int32_t t18 = 720;

	t18 = (((x77%x78)==x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = UINT32_MAX;
	static int8_t x82 = INT8_MAX;
	static int16_t x83 = 0;
	int8_t x84 = INT8_MIN;
	volatile int32_t t19 = 13282287;

	t19 = (((x81%x82)==x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 15U;
	volatile uint64_t x86 = 142893238LLU;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MAX;

	t20 = (((x85%x86)==x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 32262281LLU;
	uint16_t x91 = UINT16_MAX;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t21 = 25883;

	t21 = (((x89%x90)==x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x93 = 23U;
	volatile int32_t x95 = INT32_MIN;
	int8_t x96 = -1;

	t22 = (((x93%x94)==x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = INT8_MIN;
	int16_t x100 = INT16_MAX;
	volatile int32_t t23 = 1040335;

	t23 = (((x97%x98)==x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x103 = 1532U;
	static int8_t x104 = -5;

	t24 = (((x101%x102)==x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = -1;
	int16_t x107 = -1;
	static volatile int8_t x108 = INT8_MAX;
	int32_t t25 = -1491652;

	t25 = (((x105%x106)==x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -12991029;
	uint64_t x110 = 6886343163130622788LLU;
	int16_t x112 = -1;

	t26 = (((x109%x110)==x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 31U;
	int16_t x114 = INT16_MIN;
	int8_t x116 = -1;
	static volatile int32_t t27 = 19128221;

	t27 = (((x113%x114)==x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 40355U;
	int32_t x118 = -1;
	static uint64_t x119 = 5678LLU;
	uint16_t x120 = UINT16_MAX;
	int32_t t28 = -3145;

	t28 = (((x117%x118)==x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 15743U;
	volatile int16_t x126 = INT16_MIN;
	uint8_t x127 = 31U;
	int16_t x128 = -7277;
	int32_t t29 = -101;

	t29 = (((x125%x126)==x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 5U;
	uint8_t x132 = UINT8_MAX;
	int32_t t30 = -319;

	t30 = (((x129%x130)==x131)/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = 96223767;
	static int32_t x134 = INT32_MIN;
	volatile int32_t t31 = -5291256;

	t31 = (((x133%x134)==x135)/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 32012383U;
	static uint64_t x138 = 2637960060641231890LLU;
	uint8_t x139 = 78U;
	static volatile uint32_t x140 = 43036U;
	volatile uint32_t t32 = 14644U;

	t32 = (((x137%x138)==x139)/x140);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = 1LL;
	int8_t x142 = -1;
	int32_t x143 = -685;
	static int8_t x144 = -13;
	int32_t t33 = 11820;

	t33 = (((x141%x142)==x143)/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	static uint32_t x146 = 3970U;
	volatile int16_t x147 = INT16_MIN;
	static int64_t x148 = -221050676744LL;

	t34 = (((x145%x146)==x147)/x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = -1;
	static int32_t x150 = INT32_MIN;
	static uint8_t x151 = 7U;
	uint32_t t35 = 3U;

	t35 = (((x149%x150)==x151)/x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 3;
	int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MIN;
	volatile int32_t t36 = -6;

	t36 = (((x153%x154)==x155)/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x157 = 14832427U;
	static uint8_t x159 = 3U;
	static int32_t x160 = -1;
	int32_t t37 = 1284;

	t37 = (((x157%x158)==x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t38 = -6824;

	t38 = (((x161%x162)==x163)/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -1;
	static int16_t x170 = -1;
	int64_t x171 = -1LL;
	volatile int32_t t39 = 7473;

	t39 = (((x169%x170)==x171)/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = -11635782692567172LL;
	uint64_t x174 = 608976LLU;
	static int64_t x175 = -3089LL;
	int32_t x176 = -1;
	volatile int32_t t40 = -164;

	t40 = (((x173%x174)==x175)/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x177 = 1428692589783780629LLU;
	int64_t x178 = INT64_MIN;
	uint32_t x179 = 974U;
	int8_t x180 = -1;
	static volatile int32_t t41 = -3398744;

	t41 = (((x177%x178)==x179)/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = INT16_MAX;
	uint64_t x182 = 2673545LLU;
	int64_t x183 = -1LL;
	uint32_t x184 = UINT32_MAX;
	uint32_t t42 = 1885707373U;

	t42 = (((x181%x182)==x183)/x184);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x190 = UINT16_MAX;
	int64_t x191 = INT64_MIN;
	static int64_t x192 = -24LL;
	int64_t t43 = -3189014973388046001LL;

	t43 = (((x189%x190)==x191)/x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x193 = 149LLU;
	uint64_t x196 = 810333607907268LLU;
	volatile uint64_t t44 = 19358701LLU;

	t44 = (((x193%x194)==x195)/x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x197 = 52LL;
	int32_t x198 = INT32_MIN;
	volatile uint16_t x199 = 26U;
	volatile uint64_t x200 = UINT64_MAX;

	t45 = (((x197%x198)==x199)/x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -1;
	static int64_t x202 = -150LL;
	volatile int8_t x203 = INT8_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t46 = 0;

	t46 = (((x201%x202)==x203)/x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	static uint16_t x206 = 15658U;
	static int32_t x207 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t47 = -1;

	t47 = (((x205%x206)==x207)/x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = 261660;
	int8_t x211 = -32;
	uint64_t x212 = UINT64_MAX;
	uint64_t t48 = 12227523367LLU;

	t48 = (((x209%x210)==x211)/x212);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MAX;
	int8_t x215 = INT8_MIN;
	volatile int32_t t49 = 19320411;

	t49 = (((x213%x214)==x215)/x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = -1;
	uint8_t x220 = 4U;
	int32_t t50 = 38;

	t50 = (((x217%x218)==x219)/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	static volatile int64_t x222 = -1LL;
	uint32_t x223 = 66U;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t51 = 4390;

	t51 = (((x221%x222)==x223)/x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x225 = 9U;
	int16_t x226 = 20;
	int16_t x227 = -1;
	static int32_t t52 = -7072;

	t52 = (((x225%x226)==x227)/x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MIN;
	volatile int64_t x231 = INT64_MIN;
	static int16_t x232 = 184;
	volatile int32_t t53 = 53410;

	t53 = (((x229%x230)==x231)/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = 1;
	static int64_t x235 = 77206192043449851LL;
	int16_t x236 = INT16_MIN;

	t54 = (((x233%x234)==x235)/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x237 = -1;
	volatile int32_t x239 = -1;
	volatile int64_t x240 = INT64_MIN;

	t55 = (((x237%x238)==x239)/x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	uint64_t x242 = 18035045377233713LLU;
	static int16_t x244 = INT16_MAX;
	volatile int32_t t56 = 7623315;

	t56 = (((x241%x242)==x243)/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	volatile int32_t t57 = -7695052;

	t57 = (((x245%x246)==x247)/x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	volatile int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t58 = 44LLU;

	t58 = (((x249%x250)==x251)/x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x253 = INT8_MIN;
	int16_t x254 = -1;
	int16_t x255 = -1;
	int16_t x256 = INT16_MIN;

	t59 = (((x253%x254)==x255)/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	volatile int32_t x258 = INT32_MAX;
	uint32_t x259 = UINT32_MAX;
	static volatile int64_t t60 = 90855096LL;

	t60 = (((x257%x258)==x259)/x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 2867U;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MAX;
	static int64_t t61 = 6LL;

	t61 = (((x261%x262)==x263)/x264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = -1LL;
	int64_t x268 = INT64_MAX;
	int64_t t62 = 955996705675416179LL;

	t62 = (((x265%x266)==x267)/x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -11893700;
	int16_t x270 = INT16_MIN;
	int32_t t63 = 4891;

	t63 = (((x269%x270)==x271)/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = -1;
	int8_t x274 = -1;
	volatile uint32_t x275 = 5U;
	uint32_t x276 = 37U;
	uint32_t t64 = 22229348U;

	t64 = (((x273%x274)==x275)/x276);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	static volatile int64_t x278 = INT64_MIN;
	int16_t x279 = 12976;

	t65 = (((x277%x278)==x279)/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x281 = -1;
	volatile int16_t x282 = INT16_MAX;
	uint32_t x283 = 249653U;
	int32_t x284 = -1831;
	int32_t t66 = -5013797;

	t66 = (((x281%x282)==x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 1U;
	int32_t x286 = -38;
	int16_t x288 = 1;

	t67 = (((x285%x286)==x287)/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = INT32_MIN;
	uint8_t x290 = 1U;
	volatile int32_t t68 = -1926;

	t68 = (((x289%x290)==x291)/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x293 = 1852196739471431539LLU;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MAX;
	uint16_t x296 = 17684U;

	t69 = (((x293%x294)==x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = 4U;
	uint32_t x298 = UINT32_MAX;
	static volatile uint8_t x299 = 0U;
	volatile int32_t t70 = 65150;

	t70 = (((x297%x298)==x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 15U;
	int16_t x302 = 12;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = -1;

	t71 = (((x301%x302)==x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x305 = 56;
	int64_t x306 = INT64_MIN;
	uint8_t x308 = 7U;
	volatile int32_t t72 = -1;

	t72 = (((x305%x306)==x307)/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x309 = 2;
	int8_t x311 = INT8_MIN;
	volatile int64_t t73 = 1LL;

	t73 = (((x309%x310)==x311)/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	static int16_t x314 = -8174;
	uint64_t x316 = 86077609427386685LLU;
	volatile uint64_t t74 = 31310546896797LLU;

	t74 = (((x313%x314)==x315)/x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x318 = UINT64_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t75 = -76310816;

	t75 = (((x317%x318)==x319)/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MAX;
	uint16_t x323 = 1U;
	int32_t x324 = INT32_MIN;
	volatile int32_t t76 = 186563;

	t76 = (((x321%x322)==x323)/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x325 = 5208U;
	int8_t x326 = -5;
	uint8_t x327 = UINT8_MAX;
	int64_t x328 = 17235685075158LL;

	t77 = (((x325%x326)==x327)/x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = 5;
	static int8_t x331 = INT8_MIN;

	t78 = (((x329%x330)==x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x333 = 5522977175305LLU;
	volatile uint16_t x334 = 99U;
	int32_t x335 = INT32_MAX;
	static int32_t x336 = 1;
	volatile int32_t t79 = 23878;

	t79 = (((x333%x334)==x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x338 = INT32_MAX;
	volatile uint64_t x339 = UINT64_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t80 = 0;

	t80 = (((x337%x338)==x339)/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = -2036955961940547LL;
	int16_t x343 = -3;
	volatile int64_t t81 = 80LL;

	t81 = (((x341%x342)==x343)/x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 488U;
	int64_t x346 = 365688193616737LL;
	int64_t x348 = INT64_MIN;
	int64_t t82 = -59LL;

	t82 = (((x345%x346)==x347)/x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = -1;
	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = -26;
	int32_t t83 = 1;

	t83 = (((x349%x350)==x351)/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MIN;
	volatile int32_t x354 = -1;
	int8_t x355 = 0;
	volatile uint32_t x356 = UINT32_MAX;
	volatile uint32_t t84 = 206108U;

	t84 = (((x353%x354)==x355)/x356);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = 1275571;
	int32_t x368 = INT32_MAX;
	int32_t t85 = 18133006;

	t85 = (((x365%x366)==x367)/x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x370 = 408705;
	int64_t x371 = INT64_MIN;
	volatile uint32_t x372 = 181U;

	t86 = (((x369%x370)==x371)/x372);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = INT16_MIN;
	volatile uint16_t x374 = 1U;
	volatile uint64_t x375 = 119723213134903LLU;
	volatile int32_t x376 = 38;

	t87 = (((x373%x374)==x375)/x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x379 = -1;
	static volatile uint32_t t88 = 31U;

	t88 = (((x377%x378)==x379)/x380);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x382 = 111;
	int32_t x383 = INT32_MAX;
	static int8_t x384 = INT8_MIN;

	t89 = (((x381%x382)==x383)/x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x387 = 44191207453539163LLU;
	uint32_t x388 = 4U;
	uint32_t t90 = 71047U;

	t90 = (((x385%x386)==x387)/x388);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 1693778815032234LLU;
	uint64_t x391 = 3814182886153LLU;
	static int64_t x392 = -1LL;
	int64_t t91 = -213013080369LL;

	t91 = (((x389%x390)==x391)/x392);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = -1;
	static uint16_t x394 = UINT16_MAX;
	int16_t x395 = -41;
	int64_t x396 = -1LL;
	volatile int64_t t92 = 3LL;

	t92 = (((x393%x394)==x395)/x396);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = 7U;
	int8_t x398 = -1;
	volatile int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MAX;
	volatile int32_t t93 = 5590613;

	t93 = (((x397%x398)==x399)/x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = -1LL;
	volatile int64_t x403 = INT64_MIN;

	t94 = (((x401%x402)==x403)/x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = UINT8_MAX;
	volatile int16_t x407 = INT16_MIN;
	int8_t x408 = -10;
	static int32_t t95 = -4;

	t95 = (((x405%x406)==x407)/x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x409 = INT8_MIN;
	uint8_t x410 = 23U;
	int16_t x411 = -1;
	static int32_t t96 = 80473493;

	t96 = (((x409%x410)==x411)/x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MAX;
	volatile int16_t x418 = 5045;
	int16_t x419 = -1;
	uint64_t x420 = UINT64_MAX;
	uint64_t t97 = 17535LLU;

	t97 = (((x417%x418)==x419)/x420);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x421 = INT8_MIN;
	volatile uint8_t x422 = 4U;
	volatile uint8_t x423 = UINT8_MAX;
	uint16_t x424 = 989U;

	t98 = (((x421%x422)==x423)/x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 7581U;
	int8_t x426 = 22;
	int8_t x427 = -24;
	volatile int16_t x428 = INT16_MIN;
	int32_t t99 = -3035703;

	t99 = (((x425%x426)==x427)/x428);

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

