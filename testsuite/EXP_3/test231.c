#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
static volatile int32_t t0 = -15012897;
static int16_t x8 = -1;
int32_t x10 = 161738545;
int16_t x18 = -2;
uint32_t x19 = UINT32_MAX;
int8_t x24 = INT8_MAX;
int32_t t6 = 15649901;
uint64_t x29 = 56LLU;
volatile int16_t x30 = INT16_MIN;
uint16_t x31 = 11U;
volatile int8_t x34 = INT8_MAX;
int32_t t9 = 3462;
int32_t x56 = INT32_MAX;
int32_t t13 = -1;
volatile int16_t x63 = -1;
static volatile uint32_t x67 = 18097979U;
int32_t x68 = INT32_MAX;
uint64_t x71 = 279154LLU;
uint64_t x77 = 379576756LLU;
static int16_t x88 = -307;
static volatile int16_t x92 = -1735;
int8_t x100 = INT8_MAX;
uint32_t x106 = UINT32_MAX;
volatile int32_t t24 = 235;
int8_t x123 = -1;
volatile uint64_t x127 = 24631306382896LLU;
volatile uint64_t x128 = 4LLU;
volatile int32_t t29 = 3;
int32_t t30 = 481806401;
volatile int32_t x141 = INT32_MAX;
int8_t x143 = -20;
volatile int32_t x145 = INT32_MIN;
uint8_t x152 = 1U;
int32_t x163 = -1;
int32_t t36 = 108;
uint64_t x165 = 1868358LLU;
volatile int32_t t40 = 0;
volatile int8_t x183 = INT8_MAX;
int16_t x185 = INT16_MIN;
static volatile uint16_t x190 = 30004U;
int16_t x202 = INT16_MIN;
static volatile int32_t t46 = 59906;
uint64_t x205 = 473744290912LLU;
uint64_t x206 = UINT64_MAX;
int64_t x217 = INT64_MAX;
volatile int32_t t50 = 5971;
static volatile uint16_t x223 = 3U;
static int64_t x229 = -1LL;
int64_t x234 = INT64_MIN;
int8_t x235 = -25;
int16_t x236 = -1;
volatile int32_t t54 = 0;
int64_t x261 = -9224574LL;
static volatile int32_t t59 = -42360;
int8_t x265 = INT8_MIN;
uint64_t x266 = UINT64_MAX;
volatile int32_t t60 = 76393699;
int64_t x270 = INT64_MAX;
static int32_t t62 = -550804518;
int32_t x281 = INT32_MIN;
static int16_t x282 = -16214;
uint8_t x288 = UINT8_MAX;
volatile int32_t t64 = 7;
volatile uint32_t x289 = UINT32_MAX;
volatile int32_t t65 = -59878;
volatile int16_t x296 = -1;
int16_t x299 = -1;
volatile int32_t t69 = -11812;
uint32_t x313 = UINT32_MAX;
int32_t x318 = INT32_MIN;
int64_t x335 = -272500526752987LL;
int32_t x338 = 399245298;
int32_t x344 = -93306725;
uint16_t x345 = 1U;
volatile int8_t x348 = INT8_MIN;
volatile int32_t t80 = 22699;
volatile int32_t x354 = INT32_MIN;
int32_t t81 = 23421927;
uint8_t x359 = 0U;
int64_t x361 = INT64_MAX;
int64_t x362 = -107220LL;
int8_t x364 = 2;
int32_t t83 = -3337474;
uint64_t x365 = UINT64_MAX;
int32_t x366 = -94;
int32_t t84 = -470508994;
uint8_t x370 = 42U;
int64_t x381 = -4258306933189278LL;
int8_t x395 = INT8_MIN;
volatile int64_t x398 = -1LL;
uint32_t x399 = 51904U;
int16_t x402 = INT16_MAX;
static int8_t x404 = INT8_MIN;
int8_t x406 = -1;
int8_t x407 = INT8_MAX;
int32_t t94 = 37;
int16_t x414 = INT16_MIN;
int8_t x416 = INT8_MAX;
static volatile int32_t t96 = -57557398;
int16_t x420 = -7;
volatile int32_t t97 = -8257;
int8_t x421 = INT8_MAX;
int64_t x422 = -693292933LL;
int32_t x428 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint16_t x2 = 1161U;
	int32_t x4 = INT32_MAX;

	t0 = ((x1%x2)<=(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = 2;
	int8_t x7 = INT8_MAX;
	static int32_t t1 = 284;

	t1 = ((x5%x6)<=(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x11 = -1;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -1068754533;

	t2 = ((x9%x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = 1059872997U;
	static int64_t x15 = -1LL;
	int16_t x16 = -22;
	int32_t t3 = -121496;

	t3 = ((x13%x14)<=(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1037421LLU;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 29293027;

	t4 = ((x17%x18)<=(x19-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = 17;
	static int32_t t5 = -22094585;

	t5 = ((x21%x22)<=(x23-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int32_t x26 = -210;
	int32_t x27 = -1;
	static int32_t x28 = 267837;

	t6 = ((x25%x26)<=(x27-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x32 = INT16_MAX;
	static int32_t t7 = 3;

	t7 = ((x29%x30)<=(x31-x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 5589;
	int32_t x35 = -1;
	static int32_t x36 = -867251115;
	volatile int32_t t8 = 0;

	t8 = ((x33%x34)<=(x35-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;

	t9 = ((x37%x38)<=(x39-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 0U;
	int16_t x44 = 12;
	volatile int32_t t10 = -1932320;

	t10 = ((x41%x42)<=(x43-x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = 0LL;
	volatile int64_t x46 = 94LL;
	int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -1;

	t11 = ((x45%x46)<=(x47-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MAX;
	int32_t x52 = -14;
	int32_t t12 = 180209371;

	t12 = ((x49%x50)<=(x51-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 3;
	int64_t x54 = INT64_MAX;
	uint32_t x55 = 45637U;

	t13 = ((x53%x54)<=(x55-x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	volatile int32_t t14 = 4063;

	t14 = ((x61%x62)<=(x63-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 107U;
	volatile uint64_t x66 = 4LLU;
	volatile int32_t t15 = 27;

	t15 = ((x65%x66)<=(x67-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x69 = 1054U;
	int16_t x70 = INT16_MIN;
	int8_t x72 = -1;
	int32_t t16 = -480387;

	t16 = ((x69%x70)<=(x71-x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x78 = 1U;
	int64_t x79 = 18682234LL;
	static uint32_t x80 = 357U;
	volatile int32_t t17 = 1;

	t17 = ((x77%x78)<=(x79-x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x81 = UINT64_MAX;
	volatile uint8_t x82 = UINT8_MAX;
	int16_t x83 = -1;
	volatile uint16_t x84 = 51U;
	volatile int32_t t18 = -53977;

	t18 = ((x81%x82)<=(x83-x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = 3;
	volatile uint8_t x86 = UINT8_MAX;
	static int16_t x87 = INT16_MIN;
	static int32_t t19 = -80;

	t19 = ((x85%x86)<=(x87-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 3664U;
	int64_t x90 = -1LL;
	int16_t x91 = INT16_MIN;
	int32_t t20 = 256758;

	t20 = ((x89%x90)<=(x91-x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = INT64_MIN;
	static int64_t x94 = INT64_MIN;
	int16_t x95 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t21 = 161416558;

	t21 = ((x93%x94)<=(x95-x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile uint64_t x99 = 22LLU;
	volatile int32_t t22 = -133;

	t22 = ((x97%x98)<=(x99-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = INT16_MIN;
	uint16_t x102 = 50U;
	static int8_t x103 = -1;
	static uint64_t x104 = 694815031502336322LLU;
	int32_t t23 = 0;

	t23 = ((x101%x102)<=(x103-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -5;
	static int64_t x107 = -1LL;
	int16_t x108 = 184;

	t24 = ((x105%x106)<=(x107-x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 28751U;
	int64_t x110 = -3929948321236LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -31;
	volatile int32_t t25 = -10773427;

	t25 = ((x109%x110)<=(x111-x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = -1;
	int16_t x114 = INT16_MIN;
	static uint32_t x115 = UINT32_MAX;
	int32_t x116 = 1473;
	static int32_t t26 = 1014124046;

	t26 = ((x113%x114)<=(x115-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	static volatile int8_t x124 = 38;
	volatile int32_t t27 = -210761;

	t27 = ((x121%x122)<=(x123-x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 1679U;
	int8_t x126 = 1;
	int32_t t28 = -249657;

	t28 = ((x125%x126)<=(x127-x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	volatile int8_t x131 = INT8_MIN;
	int32_t x132 = 389490;

	t29 = ((x129%x130)<=(x131-x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -3LL;
	uint64_t x138 = 495780820LLU;
	int16_t x139 = -175;
	uint64_t x140 = UINT64_MAX;

	t30 = ((x137%x138)<=(x139-x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x142 = UINT32_MAX;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t31 = 4;

	t31 = ((x141%x142)<=(x143-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = INT32_MAX;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 332341LLU;
	int32_t t32 = 689256861;

	t32 = ((x145%x146)<=(x147-x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 284312800LLU;
	volatile int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MIN;
	int32_t t33 = -262231350;

	t33 = ((x149%x150)<=(x151-x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x153 = INT32_MAX;
	int8_t x154 = 6;
	static int16_t x155 = INT16_MAX;
	static int64_t x156 = -1LL;
	static volatile int32_t t34 = 79;

	t34 = ((x153%x154)<=(x155-x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x157 = 866977004119246LLU;
	int8_t x158 = 18;
	volatile int16_t x159 = 123;
	static uint32_t x160 = 27918373U;
	int32_t t35 = -8;

	t35 = ((x157%x158)<=(x159-x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -1419495;
	static uint32_t x162 = 460U;
	uint64_t x164 = UINT64_MAX;

	t36 = ((x161%x162)<=(x163-x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -4956;
	volatile int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t37 = -2082009;

	t37 = ((x165%x166)<=(x167-x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = 1;
	volatile uint16_t x170 = 200U;
	int8_t x171 = 6;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t38 = -913427;

	t38 = ((x169%x170)<=(x171-x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x174 = -1LL;
	static int16_t x175 = INT16_MIN;
	static int16_t x176 = -9;
	int32_t t39 = 12;

	t39 = ((x173%x174)<=(x175-x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x177 = -1;
	volatile int16_t x178 = INT16_MAX;
	uint32_t x179 = 545429217U;
	uint32_t x180 = 244549U;

	t40 = ((x177%x178)<=(x179-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = 9;
	int64_t x182 = -92344527824LL;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t41 = 233;

	t41 = ((x181%x182)<=(x183-x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x186 = 1;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = -1;
	volatile int32_t t42 = -15;

	t42 = ((x185%x186)<=(x187-x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x189 = 10U;
	static int32_t x191 = -1;
	int16_t x192 = INT16_MAX;
	static volatile int32_t t43 = -238412675;

	t43 = ((x189%x190)<=(x191-x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MIN;
	uint32_t x194 = 3416664U;
	uint64_t x195 = UINT64_MAX;
	static int64_t x196 = INT64_MIN;
	volatile int32_t t44 = 12;

	t44 = ((x193%x194)<=(x195-x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = 257;
	int8_t x199 = -4;
	int8_t x200 = INT8_MIN;
	volatile int32_t t45 = 72;

	t45 = ((x197%x198)<=(x199-x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MAX;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;

	t46 = ((x201%x202)<=(x203-x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x207 = -98789LL;
	int32_t x208 = -44;
	volatile int32_t t47 = 35;

	t47 = ((x205%x206)<=(x207-x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MAX;
	int16_t x210 = INT16_MIN;
	volatile int8_t x211 = INT8_MAX;
	volatile uint16_t x212 = 27U;
	volatile int32_t t48 = -912;

	t48 = ((x209%x210)<=(x211-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 115U;
	uint32_t x214 = 499726776U;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t49 = 273;

	t49 = ((x213%x214)<=(x215-x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = UINT32_MAX;
	static volatile uint64_t x220 = 92LLU;

	t50 = ((x217%x218)<=(x219-x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = -6649815;
	uint16_t x222 = 7U;
	static int16_t x224 = INT16_MIN;
	int32_t t51 = 0;

	t51 = ((x221%x222)<=(x223-x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 348U;
	uint8_t x227 = UINT8_MAX;
	static int16_t x228 = 12;
	static int32_t t52 = 1986;

	t52 = ((x225%x226)<=(x227-x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = INT16_MIN;
	uint32_t x231 = 1U;
	volatile int32_t x232 = INT32_MAX;
	int32_t t53 = 163800340;

	t53 = ((x229%x230)<=(x231-x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = -14;

	t54 = ((x233%x234)<=(x235-x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = 90009964190668858LL;
	static volatile int8_t x238 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	static volatile int32_t t55 = -27439;

	t55 = ((x237%x238)<=(x239-x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = INT64_MIN;
	volatile int32_t x242 = -101067;
	int16_t x243 = -1;
	static volatile int8_t x244 = INT8_MIN;
	volatile int32_t t56 = 15;

	t56 = ((x241%x242)<=(x243-x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile int32_t x246 = 395104;
	volatile int32_t x247 = -93209;
	static volatile uint16_t x248 = 2936U;
	int32_t t57 = 30221;

	t57 = ((x245%x246)<=(x247-x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x249 = UINT32_MAX;
	static int32_t x250 = INT32_MIN;
	static volatile int32_t x251 = INT32_MIN;
	uint32_t x252 = 60882U;
	volatile int32_t t58 = 30443180;

	t58 = ((x249%x250)<=(x251-x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x262 = 36U;
	uint8_t x263 = 35U;
	static volatile int8_t x264 = INT8_MIN;

	t59 = ((x261%x262)<=(x263-x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x267 = UINT64_MAX;
	int16_t x268 = 985;

	t60 = ((x265%x266)<=(x267-x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x269 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	int32_t x272 = 2180;
	volatile int32_t t61 = -445990;

	t61 = ((x269%x270)<=(x271-x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MAX;
	int8_t x279 = 48;
	uint64_t x280 = 6034174774627689045LLU;

	t62 = ((x277%x278)<=(x279-x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x283 = 1061;
	static int16_t x284 = -342;
	volatile int32_t t63 = -79667;

	t63 = ((x281%x282)<=(x283-x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 30U;
	uint8_t x287 = UINT8_MAX;

	t64 = ((x285%x286)<=(x287-x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x290 = INT64_MIN;
	uint64_t x291 = UINT64_MAX;
	static volatile uint32_t x292 = UINT32_MAX;

	t65 = ((x289%x290)<=(x291-x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x293 = INT64_MAX;
	uint32_t x294 = UINT32_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile int32_t t66 = 1339412;

	t66 = ((x293%x294)<=(x295-x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = UINT32_MAX;
	int16_t x298 = INT16_MAX;
	uint8_t x300 = 1U;
	static volatile int32_t t67 = -1532637;

	t67 = ((x297%x298)<=(x299-x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = -1LL;
	static volatile uint16_t x303 = UINT16_MAX;
	static int16_t x304 = INT16_MIN;
	static volatile int32_t t68 = -214;

	t68 = ((x301%x302)<=(x303-x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MIN;
	volatile uint8_t x306 = UINT8_MAX;
	int16_t x307 = -1279;
	int16_t x308 = -1;

	t69 = ((x305%x306)<=(x307-x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x309 = INT16_MIN;
	int64_t x310 = 512950922316119LL;
	int32_t x311 = 378;
	volatile int16_t x312 = -1;
	static volatile int32_t t70 = 42938016;

	t70 = ((x309%x310)<=(x311-x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x314 = 26034463291148213LLU;
	uint16_t x315 = 34U;
	int16_t x316 = 59;
	static volatile int32_t t71 = -428;

	t71 = ((x313%x314)<=(x315-x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = 0;
	int64_t x319 = -1942430LL;
	int32_t x320 = 37072403;
	int32_t t72 = -1844;

	t72 = ((x317%x318)<=(x319-x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = -1116490815858631LL;
	uint8_t x322 = UINT8_MAX;
	int8_t x323 = -1;
	int16_t x324 = 6;
	static volatile int32_t t73 = -2274;

	t73 = ((x321%x322)<=(x323-x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x325 = INT16_MAX;
	volatile uint8_t x326 = 4U;
	uint8_t x327 = 1U;
	volatile int16_t x328 = -1;
	volatile int32_t t74 = -1;

	t74 = ((x325%x326)<=(x327-x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = INT64_MAX;
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	static uint32_t x332 = 501402466U;
	int32_t t75 = 510;

	t75 = ((x329%x330)<=(x331-x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = -951979582543830701LL;
	int16_t x334 = -1;
	volatile int16_t x336 = 4001;
	volatile int32_t t76 = -4834263;

	t76 = ((x333%x334)<=(x335-x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -1;
	int32_t x339 = INT32_MAX;
	volatile int16_t x340 = 6550;
	int32_t t77 = 1550375;

	t77 = ((x337%x338)<=(x339-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x341 = INT64_MAX;
	int32_t x342 = -1;
	static volatile int8_t x343 = INT8_MAX;
	int32_t t78 = 14393;

	t78 = ((x341%x342)<=(x343-x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x346 = 40983179840LLU;
	int64_t x347 = -1LL;
	int32_t t79 = -125393606;

	t79 = ((x345%x346)<=(x347-x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MAX;
	uint64_t x350 = UINT64_MAX;
	static int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;

	t80 = ((x349%x350)<=(x351-x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x353 = INT64_MIN;
	uint32_t x355 = 512601397U;
	static int16_t x356 = INT16_MAX;

	t81 = ((x353%x354)<=(x355-x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x357 = INT8_MIN;
	uint32_t x358 = UINT32_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t82 = -2057063;

	t82 = ((x357%x358)<=(x359-x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x363 = 11;

	t83 = ((x361%x362)<=(x363-x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x367 = 50U;
	int64_t x368 = INT64_MAX;

	t84 = ((x365%x366)<=(x367-x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x369 = UINT8_MAX;
	static uint32_t x371 = 16U;
	uint64_t x372 = 4681347LLU;
	volatile int32_t t85 = -1;

	t85 = ((x369%x370)<=(x371-x372));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = -1003515;
	volatile int8_t x374 = INT8_MIN;
	static uint32_t x375 = 22464389U;
	uint8_t x376 = 22U;
	int32_t t86 = -225845113;

	t86 = ((x373%x374)<=(x375-x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = -1LL;
	static uint32_t x379 = 0U;
	int8_t x380 = 0;
	volatile int32_t t87 = -64843343;

	t87 = ((x377%x378)<=(x379-x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x382 = -465115;
	uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MIN;
	int32_t t88 = -20;

	t88 = ((x381%x382)<=(x383-x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = UINT32_MAX;
	volatile int16_t x387 = 1;
	static int16_t x388 = INT16_MAX;
	int32_t t89 = -65123726;

	t89 = ((x385%x386)<=(x387-x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -15;
	int16_t x390 = INT16_MIN;
	volatile int32_t x391 = -1;
	int8_t x392 = INT8_MAX;
	volatile int32_t t90 = -207;

	t90 = ((x389%x390)<=(x391-x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = -571736728719LL;
	static volatile int32_t x394 = INT32_MIN;
	static int8_t x396 = -1;
	int32_t t91 = -59098365;

	t91 = ((x393%x394)<=(x395-x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = -1LL;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t92 = -33897908;

	t92 = ((x397%x398)<=(x399-x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x401 = 8;
	uint64_t x403 = 275LLU;
	int32_t t93 = 241;

	t93 = ((x401%x402)<=(x403-x404));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -9;
	int8_t x408 = INT8_MIN;

	t94 = ((x405%x406)<=(x407-x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x409 = INT32_MAX;
	uint64_t x410 = UINT64_MAX;
	static int64_t x411 = INT64_MIN;
	int16_t x412 = -1;
	static volatile int32_t t95 = -20483;

	t95 = ((x409%x410)<=(x411-x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x413 = 686604245U;
	uint32_t x415 = UINT32_MAX;

	t96 = ((x413%x414)<=(x415-x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x417 = -42;
	uint32_t x418 = 28329847U;
	static uint32_t x419 = 1008U;

	t97 = ((x417%x418)<=(x419-x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x423 = INT8_MIN;
	volatile int8_t x424 = INT8_MIN;
	int32_t t98 = -203543;

	t98 = ((x421%x422)<=(x423-x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x425 = INT32_MIN;
	static uint16_t x426 = 7151U;
	volatile uint32_t x427 = UINT32_MAX;
	int32_t t99 = -13345439;

	t99 = ((x425%x426)<=(x427-x428));

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

