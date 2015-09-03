#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
int32_t x2 = INT32_MAX;
int32_t x5 = INT32_MAX;
static int16_t x6 = INT16_MIN;
static volatile int32_t t1 = -31;
int32_t t2 = 613;
int32_t t3 = 8235445;
static int32_t x27 = INT32_MIN;
volatile int32_t t4 = -2015;
int32_t x38 = INT32_MIN;
int32_t x43 = INT32_MIN;
int64_t x46 = -1384365014505757LL;
volatile int32_t x47 = INT32_MIN;
int8_t x48 = INT8_MIN;
int32_t t9 = -8542;
int8_t x52 = INT8_MIN;
int64_t x57 = INT64_MAX;
uint32_t x68 = 893856751U;
static int32_t x71 = -1;
int8_t x79 = -1;
volatile int8_t x82 = 1;
volatile int16_t x83 = -1;
int8_t x84 = INT8_MAX;
volatile int32_t t17 = -118090888;
static int64_t x89 = INT64_MIN;
static int16_t x98 = 457;
int64_t x100 = -1LL;
static int32_t t21 = 38;
int32_t t23 = 8;
uint64_t x123 = 294LLU;
volatile int32_t t25 = 26;
uint32_t x125 = 44U;
int32_t x129 = -1;
int16_t x139 = INT16_MIN;
static int32_t t30 = 732969989;
static uint8_t x151 = 36U;
int32_t x154 = -231466526;
int64_t x163 = INT64_MIN;
static int32_t x164 = -15;
int8_t x167 = -5;
int32_t x168 = -1;
int64_t x173 = -1LL;
uint64_t x174 = 2521LLU;
uint16_t x184 = 1U;
int32_t t43 = 1351290;
static int16_t x199 = -1;
int32_t x200 = -214698712;
static int16_t x201 = -1;
uint64_t x213 = 81690554LLU;
int16_t x216 = -1;
int64_t x221 = -1LL;
volatile uint32_t x230 = 276525392U;
volatile int32_t t54 = -6684;
volatile int16_t x256 = INT16_MIN;
static uint8_t x257 = 10U;
uint16_t x259 = 27699U;
int8_t x260 = -1;
volatile int32_t t58 = -308539166;
int32_t t59 = -1;
volatile int32_t t62 = 715814;
int8_t x307 = INT8_MIN;
int32_t x311 = INT32_MIN;
int32_t t69 = -1783;
int64_t x331 = -329204437LL;
int32_t t72 = 470;
uint32_t x338 = UINT32_MAX;
volatile int64_t x344 = -3862472096368332LL;
int32_t x346 = 13;
static volatile int32_t t76 = -325;
uint64_t x358 = 1712LLU;
volatile int8_t x359 = -1;
int32_t t79 = 163970;
volatile int32_t x367 = 17129006;
int32_t t80 = 58;
int16_t x372 = -1;
int64_t x375 = -513759465LL;
uint16_t x379 = UINT16_MAX;
int16_t x389 = INT16_MIN;
int8_t x394 = INT8_MIN;
static uint64_t x399 = 269211284298170692LLU;
volatile int32_t t88 = -61;
static uint8_t x403 = 1U;
int32_t x404 = INT32_MAX;
volatile uint32_t x405 = UINT32_MAX;
int32_t x425 = 45441;
int32_t x429 = -1;
static uint32_t x431 = 246888U;
int32_t x435 = -1;
int64_t x442 = 53585877815383LL;
int16_t x444 = -14;
volatile int32_t t98 = 4548;
int32_t x445 = -1;
int64_t x448 = INT64_MIN;


void f0(void) {
	volatile int64_t x3 = INT64_MAX;
	volatile int16_t x4 = 196;
	int32_t t0 = 45300941;

	t0 = ((x1%x2)<(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = 1LL;
	int8_t x8 = -29;

	t1 = ((x5%x6)<(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 119678U;
	static uint32_t x10 = 55153U;
	int64_t x11 = -25169LL;
	int8_t x12 = -1;

	t2 = ((x9%x10)<(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MAX;
	int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;

	t3 = ((x21%x22)<(x23-x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = UINT64_MAX;
	volatile int64_t x28 = -1659608887307LL;

	t4 = ((x25%x26)<(x27-x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 1763618U;
	uint16_t x30 = 28681U;
	volatile int64_t x31 = -1LL;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t5 = 13787172;

	t5 = ((x29%x30)<(x31-x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	volatile uint8_t x34 = 1U;
	volatile int16_t x35 = 14;
	uint32_t x36 = 8U;
	volatile int32_t t6 = 219;

	t6 = ((x33%x34)<(x35-x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = UINT32_MAX;
	uint64_t x39 = 774469642008698LLU;
	static int32_t x40 = INT32_MIN;
	int32_t t7 = 46;

	t7 = ((x37%x38)<(x39-x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int32_t x44 = -12920097;
	volatile int32_t t8 = -1550;

	t8 = ((x41%x42)<(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 1979591425LL;

	t9 = ((x45%x46)<(x47-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x49 = 1U;
	uint32_t x50 = 1052U;
	uint64_t x51 = UINT64_MAX;
	volatile int32_t t10 = 1211808;

	t10 = ((x49%x50)<(x51-x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x58 = 13U;
	volatile int64_t x59 = INT64_MIN;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t11 = -4217915;

	t11 = ((x57%x58)<(x59-x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;
	int32_t t12 = 41558873;

	t12 = ((x61%x62)<(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = -5;
	int16_t x67 = 0;
	int32_t t13 = 203424955;

	t13 = ((x65%x66)<(x67-x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 0U;
	static uint16_t x70 = 6603U;
	uint8_t x72 = UINT8_MAX;
	static int32_t t14 = 503;

	t14 = ((x69%x70)<(x71-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	uint64_t x74 = UINT64_MAX;
	static int32_t x75 = -1250686;
	int32_t x76 = -11311;
	int32_t t15 = -107973910;

	t15 = ((x73%x74)<(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = UINT64_MAX;
	static int8_t x78 = INT8_MIN;
	static int8_t x80 = -1;
	volatile int32_t t16 = -102566;

	t16 = ((x77%x78)<(x79-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;

	t17 = ((x81%x82)<(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = 2442U;
	int8_t x86 = INT8_MIN;
	uint16_t x87 = 6U;
	int8_t x88 = -1;
	volatile int32_t t18 = 75029;

	t18 = ((x85%x86)<(x87-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	uint8_t x92 = 83U;
	static int32_t t19 = -9183;

	t19 = ((x89%x90)<(x91-x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -4153;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = UINT64_MAX;
	static int32_t x96 = INT32_MIN;
	static int32_t t20 = -967788;

	t20 = ((x93%x94)<(x95-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = 641662304206273157LL;
	uint64_t x99 = UINT64_MAX;

	t21 = ((x97%x98)<(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 31U;
	volatile int8_t x102 = INT8_MAX;
	volatile uint16_t x103 = 2U;
	static uint32_t x104 = 1020002824U;
	volatile int32_t t22 = -4626455;

	t22 = ((x101%x102)<(x103-x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x105 = 27017U;
	int32_t x106 = -157998;
	int64_t x107 = -1LL;
	int8_t x108 = 1;

	t23 = ((x105%x106)<(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = -1;
	static int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	static int8_t x112 = -2;
	volatile int32_t t24 = 16;

	t24 = ((x109%x110)<(x111-x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	int32_t x122 = 5390;
	uint32_t x124 = UINT32_MAX;

	t25 = ((x121%x122)<(x123-x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x126 = -1;
	int16_t x127 = -1;
	static uint64_t x128 = 34LLU;
	int32_t t26 = 58;

	t26 = ((x125%x126)<(x127-x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x130 = 1U;
	static int32_t x131 = INT32_MIN;
	int64_t x132 = -1LL;
	volatile int32_t t27 = 93687;

	t27 = ((x129%x130)<(x131-x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x133 = 1;
	static int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	int16_t x136 = -1;
	static int32_t t28 = 211;

	t28 = ((x133%x134)<(x135-x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 14U;
	int64_t x138 = -50104608046325530LL;
	int64_t x140 = -13343960506383590LL;
	static int32_t t29 = 300640158;

	t29 = ((x137%x138)<(x139-x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	int16_t x142 = -3;
	int8_t x143 = -1;
	volatile int32_t x144 = INT32_MAX;

	t30 = ((x141%x142)<(x143-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	int32_t t31 = -1;

	t31 = ((x145%x146)<(x147-x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x149 = 1U;
	int16_t x150 = INT16_MIN;
	volatile int32_t x152 = 207538;
	volatile int32_t t32 = 162;

	t32 = ((x149%x150)<(x151-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	int16_t x155 = -12996;
	int8_t x156 = INT8_MAX;
	volatile int32_t t33 = -784;

	t33 = ((x153%x154)<(x155-x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = 3950488U;
	int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t34 = -124;

	t34 = ((x157%x158)<(x159-x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -1;
	volatile int8_t x162 = -1;
	int32_t t35 = -72493807;

	t35 = ((x161%x162)<(x163-x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	static uint16_t x166 = UINT16_MAX;
	int32_t t36 = 6527;

	t36 = ((x165%x166)<(x167-x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x169 = -1;
	int64_t x170 = INT64_MIN;
	volatile uint16_t x171 = UINT16_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t37 = -139;

	t37 = ((x169%x170)<(x171-x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = -1LL;
	int32_t t38 = -26315538;

	t38 = ((x173%x174)<(x175-x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = -2054997;
	uint8_t x179 = UINT8_MAX;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t39 = -5374;

	t39 = ((x177%x178)<(x179-x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	volatile int8_t x183 = 0;
	int32_t t40 = -5504;

	t40 = ((x181%x182)<(x183-x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x185 = INT16_MAX;
	uint32_t x186 = 21215U;
	volatile int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t41 = -159;

	t41 = ((x185%x186)<(x187-x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -1LL;
	volatile int16_t x190 = INT16_MAX;
	uint8_t x191 = 28U;
	int8_t x192 = INT8_MIN;
	int32_t t42 = -94;

	t42 = ((x189%x190)<(x191-x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x193 = 19U;
	int8_t x194 = -1;
	uint64_t x195 = 1022169LLU;
	uint8_t x196 = 7U;

	t43 = ((x193%x194)<(x195-x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = INT16_MIN;
	volatile int8_t x198 = -1;
	int32_t t44 = -10;

	t44 = ((x197%x198)<(x199-x200));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x202 = INT16_MIN;
	volatile uint64_t x203 = 3923741LLU;
	int16_t x204 = -20;
	int32_t t45 = 1;

	t45 = ((x201%x202)<(x203-x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 64036129;
	volatile int32_t x207 = -80907;
	volatile int8_t x208 = -1;
	static int32_t t46 = 6755769;

	t46 = ((x205%x206)<(x207-x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -118855870118LL;
	int32_t x212 = -1;
	volatile int32_t t47 = 6;

	t47 = ((x209%x210)<(x211-x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x214 = INT32_MAX;
	static int16_t x215 = -1;
	volatile int32_t t48 = 209372;

	t48 = ((x213%x214)<(x215-x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 5747U;
	int64_t x218 = INT64_MIN;
	int8_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	int32_t t49 = -3419;

	t49 = ((x217%x218)<(x219-x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x222 = -1;
	volatile int32_t x223 = -1535;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t50 = 404447984;

	t50 = ((x221%x222)<(x223-x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	volatile int16_t x226 = INT16_MIN;
	static int64_t x227 = 1853608711539LL;
	int8_t x228 = INT8_MIN;
	int32_t t51 = -768;

	t51 = ((x225%x226)<(x227-x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -1;
	volatile uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 96U;
	static int32_t t52 = -168137970;

	t52 = ((x229%x230)<(x231-x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = INT64_MAX;
	volatile int16_t x238 = INT16_MIN;
	static uint64_t x239 = 956571LLU;
	volatile int32_t x240 = -1;
	static int32_t t53 = 5;

	t53 = ((x237%x238)<(x239-x240));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x241 = -339111;
	volatile int32_t x242 = 1053870737;
	static volatile int16_t x243 = -1;
	int16_t x244 = -1;

	t54 = ((x241%x242)<(x243-x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = UINT16_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	uint64_t x247 = 5037484677LLU;
	int32_t x248 = INT32_MAX;
	int32_t t55 = -203634;

	t55 = ((x245%x246)<(x247-x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x249 = 16U;
	uint64_t x250 = 76086055421LLU;
	volatile int8_t x251 = INT8_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t56 = -60169;

	t56 = ((x249%x250)<(x251-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MIN;
	volatile int32_t t57 = 2998;

	t57 = ((x253%x254)<(x255-x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x258 = INT64_MAX;

	t58 = ((x257%x258)<(x259-x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 7282U;
	volatile int32_t x262 = INT32_MIN;
	static volatile int64_t x263 = -1LL;
	int8_t x264 = -1;

	t59 = ((x261%x262)<(x263-x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MAX;
	uint64_t x267 = UINT64_MAX;
	static int32_t x268 = 5487771;
	volatile int32_t t60 = 13624235;

	t60 = ((x265%x266)<(x267-x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	volatile int16_t x271 = INT16_MIN;
	int32_t x272 = 41;
	volatile int32_t t61 = 1888;

	t61 = ((x269%x270)<(x271-x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x273 = 130U;
	int64_t x274 = -1LL;
	uint64_t x275 = 163168189LLU;
	uint16_t x276 = 5U;

	t62 = ((x273%x274)<(x275-x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = 1571;
	int64_t x278 = INT64_MIN;
	int32_t x279 = -20922;
	int64_t x280 = -25209026893117455LL;
	volatile int32_t t63 = 60;

	t63 = ((x277%x278)<(x279-x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 63535127U;
	int32_t x291 = INT32_MAX;
	volatile int32_t x292 = 1;
	volatile int32_t t64 = 18;

	t64 = ((x289%x290)<(x291-x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x293 = 1277U;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = 8763U;
	int16_t x296 = -1;
	volatile int32_t t65 = 15466;

	t65 = ((x293%x294)<(x295-x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = INT16_MAX;
	static volatile uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 5088416LLU;
	int16_t x304 = 240;
	static int32_t t66 = -1321;

	t66 = ((x301%x302)<(x303-x304));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = -13;
	uint64_t x306 = 3495171935LLU;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t67 = -180607;

	t67 = ((x305%x306)<(x307-x308));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = 80676689239139237LL;
	uint32_t x310 = 60U;
	static int64_t x312 = -1LL;
	volatile int32_t t68 = 966184241;

	t68 = ((x309%x310)<(x311-x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x313 = 6164800U;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;

	t69 = ((x313%x314)<(x315-x316));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x317 = INT16_MIN;
	uint32_t x318 = 47U;
	static int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t70 = 12296;

	t70 = ((x317%x318)<(x319-x320));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 5U;
	int8_t x326 = -21;
	uint32_t x327 = 14081U;
	uint32_t x328 = 114937U;
	volatile int32_t t71 = -354;

	t71 = ((x325%x326)<(x327-x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = -1;
	static int64_t x330 = -23406067LL;
	static volatile uint8_t x332 = 95U;

	t72 = ((x329%x330)<(x331-x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x333 = 40051142U;
	static volatile int32_t x334 = -1;
	int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = UINT64_MAX;
	volatile int32_t t73 = 7334;

	t73 = ((x333%x334)<(x335-x336));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = 14680;
	volatile uint8_t x339 = 14U;
	int16_t x340 = -785;
	volatile int32_t t74 = 393150;

	t74 = ((x337%x338)<(x339-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MAX;
	volatile int32_t t75 = -17118;

	t75 = ((x341%x342)<(x343-x344));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = 625001335LL;
	uint64_t x347 = 8333014939LLU;
	int8_t x348 = INT8_MIN;

	t76 = ((x345%x346)<(x347-x348));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MAX;
	int16_t x350 = 8;
	int64_t x351 = -1LL;
	volatile int64_t x352 = INT64_MIN;
	static int32_t t77 = 52823;

	t77 = ((x349%x350)<(x351-x352));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = INT32_MAX;
	static uint64_t x354 = 4245663189LLU;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = -1;
	volatile int32_t t78 = -29226208;

	t78 = ((x353%x354)<(x355-x356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = UINT64_MAX;
	uint8_t x360 = UINT8_MAX;

	t79 = ((x357%x358)<(x359-x360));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = 0U;
	int32_t x366 = 2;
	uint32_t x368 = 21854U;

	t80 = ((x365%x366)<(x367-x368));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x369 = 3U;
	int32_t x370 = 88368;
	int8_t x371 = -38;
	int32_t t81 = 1;

	t81 = ((x369%x370)<(x371-x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x373 = INT16_MIN;
	static int16_t x374 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t82 = -450744928;

	t82 = ((x373%x374)<(x375-x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	volatile int8_t x380 = INT8_MIN;
	volatile int32_t t83 = 120528;

	t83 = ((x377%x378)<(x379-x380));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 283U;
	int8_t x382 = 1;
	static int16_t x383 = -1;
	static volatile uint8_t x384 = UINT8_MAX;
	volatile int32_t t84 = -20996466;

	t84 = ((x381%x382)<(x383-x384));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = -3973446846562834LL;
	volatile int32_t x387 = 1072;
	volatile uint16_t x388 = 1631U;
	volatile int32_t t85 = 1185;

	t85 = ((x385%x386)<(x387-x388));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x390 = 90U;
	uint32_t x391 = 1513564U;
	uint16_t x392 = 449U;
	int32_t t86 = 514;

	t86 = ((x389%x390)<(x391-x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = 811385LLU;
	int32_t t87 = 803;

	t87 = ((x393%x394)<(x395-x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = -983;
	uint32_t x398 = UINT32_MAX;
	uint8_t x400 = 15U;

	t88 = ((x397%x398)<(x399-x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x401 = -2229985027137890067LL;
	int16_t x402 = -1;
	int32_t t89 = 76615;

	t89 = ((x401%x402)<(x403-x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x406 = -1;
	volatile uint16_t x407 = 1943U;
	int64_t x408 = INT64_MAX;
	volatile int32_t t90 = 29321;

	t90 = ((x405%x406)<(x407-x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x413 = UINT8_MAX;
	static uint16_t x414 = UINT16_MAX;
	static int16_t x415 = 63;
	static uint16_t x416 = 446U;
	int32_t t91 = 90242097;

	t91 = ((x413%x414)<(x415-x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MIN;
	volatile int64_t x418 = -1LL;
	uint16_t x419 = 1874U;
	static uint32_t x420 = 6487U;
	volatile int32_t t92 = 33860;

	t92 = ((x417%x418)<(x419-x420));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = INT8_MAX;
	uint16_t x422 = UINT16_MAX;
	volatile int8_t x423 = 0;
	int32_t x424 = 210512258;
	volatile int32_t t93 = -194400900;

	t93 = ((x421%x422)<(x423-x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x426 = INT32_MIN;
	int16_t x427 = 0;
	int16_t x428 = INT16_MAX;
	static volatile int32_t t94 = -30080;

	t94 = ((x425%x426)<(x427-x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x430 = INT16_MAX;
	uint16_t x432 = 7U;
	static volatile int32_t t95 = 52;

	t95 = ((x429%x430)<(x431-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = -3;
	int8_t x436 = INT8_MAX;
	int32_t t96 = -6615;

	t96 = ((x433%x434)<(x435-x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 14668U;
	static uint32_t x439 = 228557U;
	int64_t x440 = 330857441LL;
	int32_t t97 = 0;

	t97 = ((x437%x438)<(x439-x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = INT16_MIN;
	volatile uint16_t x443 = 627U;

	t98 = ((x441%x442)<(x443-x444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x446 = INT8_MIN;
	static int32_t x447 = -1;
	volatile int32_t t99 = -3554791;

	t99 = ((x445%x446)<(x447-x448));

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

