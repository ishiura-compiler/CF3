#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 52376411023426LLU;
static volatile int32_t t0 = 1;
int16_t x7 = 1876;
int16_t x10 = INT16_MAX;
volatile uint16_t x12 = 19984U;
volatile int64_t x13 = INT64_MIN;
uint16_t x17 = UINT16_MAX;
int8_t x20 = -1;
volatile int32_t t5 = -19;
volatile int32_t t8 = 20;
int8_t x37 = -1;
volatile uint64_t x54 = UINT64_MAX;
int32_t x56 = -1;
volatile int32_t x58 = INT32_MIN;
int64_t x63 = INT64_MIN;
volatile int32_t t15 = 64618;
volatile int8_t x68 = -11;
volatile uint16_t x71 = UINT16_MAX;
int32_t t20 = 4453;
volatile int8_t x90 = 1;
volatile int8_t x95 = -30;
int32_t t23 = -15;
volatile int8_t x97 = 6;
int64_t x103 = -117568LL;
int32_t t27 = -3;
volatile uint64_t x114 = 517272303245272LLU;
int32_t t28 = 0;
static volatile uint64_t x127 = 6774444LLU;
static int32_t t33 = 33;
int64_t x137 = INT64_MAX;
uint32_t x140 = 3207U;
static volatile int64_t x143 = -1312397240094644345LL;
int32_t t35 = -99412513;
volatile int32_t t36 = -99;
int8_t x150 = INT8_MAX;
int16_t x154 = INT16_MIN;
int16_t x158 = 1471;
int16_t x160 = INT16_MIN;
volatile uint16_t x162 = 27U;
uint8_t x166 = 9U;
int8_t x167 = 12;
uint16_t x179 = 1U;
int8_t x180 = 0;
int8_t x186 = 1;
int16_t x187 = INT16_MIN;
uint8_t x188 = 0U;
volatile uint32_t x191 = 1530970U;
int32_t t45 = 798217176;
int32_t x197 = -4;
int8_t x199 = 4;
static int16_t x200 = INT16_MAX;
static int8_t x206 = INT8_MIN;
volatile int32_t t50 = 1;
int32_t x215 = INT32_MIN;
uint32_t x216 = UINT32_MAX;
volatile int32_t t51 = 1;
volatile int32_t t53 = 155277587;
static int32_t t54 = -51091088;
int64_t x237 = INT64_MAX;
static int32_t x238 = INT32_MAX;
volatile uint64_t x240 = 9848LLU;
uint64_t x242 = 55972853LLU;
int16_t x243 = INT16_MIN;
uint32_t x244 = 653405U;
volatile int32_t t60 = 20155989;
static int32_t x253 = -1;
static uint8_t x259 = UINT8_MAX;
int64_t x262 = INT64_MAX;
uint16_t x264 = 2811U;
volatile int32_t x272 = INT32_MIN;
volatile int64_t x282 = INT64_MIN;
static int32_t x284 = -1;
uint64_t x287 = 26805LLU;
static int64_t x289 = -31868019LL;
int32_t x299 = -2183;
int16_t x301 = INT16_MAX;
uint16_t x309 = 6250U;
static int32_t x318 = 1;
int32_t t76 = 3;
int8_t x321 = -1;
static int32_t x323 = -1;
uint64_t x325 = 17952249869023LLU;
int32_t t78 = 134;
int64_t x333 = INT64_MIN;
uint32_t x334 = UINT32_MAX;
int32_t t80 = 153;
static int64_t x344 = INT64_MIN;
int32_t t83 = 797002407;
static int64_t x349 = INT64_MIN;
static int32_t x350 = 378934042;
int32_t x366 = INT32_MAX;
uint32_t x372 = 680730U;
int32_t t89 = 425032;
int8_t x395 = INT8_MIN;
static int8_t x396 = INT8_MIN;
int64_t x398 = 1443LL;
volatile int32_t t96 = 0;
static volatile int16_t x402 = INT16_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	static int32_t x3 = -1;
	static volatile uint64_t x4 = 3334997338051657185LLU;

	t0 = ((x1%x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int64_t x6 = 19187263266316289LL;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 2;

	t1 = ((x5%x6)<(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int16_t x11 = INT16_MIN;
	int32_t t2 = -50;

	t2 = ((x9%x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 1;

	t3 = ((x13%x14)<(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -23831474LL;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 3;

	t4 = ((x17%x18)<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int16_t x22 = INT16_MAX;
	volatile int8_t x23 = -1;
	int8_t x24 = INT8_MIN;

	t5 = ((x21%x22)<(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	uint16_t x26 = 261U;
	int32_t x27 = 3;
	volatile uint32_t x28 = 13U;
	int32_t t6 = -22307;

	t6 = ((x25%x26)<(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = INT8_MIN;
	volatile int16_t x31 = 13;
	int16_t x32 = -1;
	static volatile int32_t t7 = 1;

	t7 = ((x29%x30)<(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 1535887229252144LLU;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MIN;

	t8 = ((x33%x34)<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 19098U;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -3;

	t9 = ((x37%x38)<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	uint8_t x43 = 0U;
	uint32_t x44 = 37U;
	volatile int32_t t10 = 15;

	t10 = ((x41%x42)<(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static uint8_t x46 = 8U;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 2;

	t11 = ((x45%x46)<(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	volatile uint8_t x50 = UINT8_MAX;
	static volatile uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = -5;

	t12 = ((x49%x50)<(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint64_t x55 = 6823945505627952423LLU;
	volatile int32_t t13 = -1;

	t13 = ((x53%x54)<(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int32_t x59 = INT32_MAX;
	volatile int64_t x60 = INT64_MIN;
	static int32_t t14 = -2206;

	t14 = ((x57%x58)<(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -312915887554623332LL;
	static uint16_t x62 = 194U;
	volatile int16_t x64 = INT16_MIN;

	t15 = ((x61%x62)<(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 416616LLU;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = 227248LLU;
	volatile int32_t t16 = -3347;

	t16 = ((x65%x66)<(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int32_t x70 = -1;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 288;

	t17 = ((x69%x70)<(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 1;
	static uint32_t x74 = UINT32_MAX;
	static uint8_t x75 = 7U;
	uint8_t x76 = 6U;
	int32_t t18 = -14828;

	t18 = ((x73%x74)<(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	int32_t x79 = 49697481;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = -852479;

	t19 = ((x77%x78)<(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 274280U;
	static int32_t x82 = -29433595;
	int8_t x83 = INT8_MAX;
	int32_t x84 = -1;

	t20 = ((x81%x82)<(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	uint8_t x86 = 12U;
	int32_t x87 = INT32_MIN;
	int32_t x88 = -1;
	int32_t t21 = -125436;

	t21 = ((x85%x86)<(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static int32_t x91 = -1;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 3;

	t22 = ((x89%x90)<(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int32_t x94 = -1;
	int64_t x96 = INT64_MIN;

	t23 = ((x93%x94)<(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x98 = UINT16_MAX;
	int32_t x99 = INT32_MIN;
	static volatile int32_t x100 = 4;
	volatile int32_t t24 = -379;

	t24 = ((x97%x98)<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x102 = -7622240LL;
	static volatile int16_t x104 = -15;
	volatile int32_t t25 = -168926286;

	t25 = ((x101%x102)<(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int32_t x106 = 2068293;
	int16_t x107 = INT16_MIN;
	static int64_t x108 = INT64_MIN;
	int32_t t26 = -1753794;

	t26 = ((x105%x106)<(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 2796872U;
	static uint16_t x110 = UINT16_MAX;
	uint64_t x111 = UINT64_MAX;
	static int32_t x112 = INT32_MIN;

	t27 = ((x109%x110)<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 949746767903LLU;
	static int8_t x115 = -1;
	int8_t x116 = -12;

	t28 = ((x113%x114)<(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = INT64_MIN;
	uint64_t x119 = 529718LLU;
	static int8_t x120 = -1;
	volatile int32_t t29 = -6746;

	t29 = ((x117%x118)<(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	static uint32_t x124 = UINT32_MAX;
	static int32_t t30 = -1783;

	t30 = ((x121%x122)<(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	static volatile int32_t x126 = INT32_MIN;
	int64_t x128 = -78932LL;
	int32_t t31 = 2167355;

	t31 = ((x125%x126)<(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 230;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -2060;
	int32_t x132 = -1;
	volatile int32_t t32 = -249173;

	t32 = ((x129%x130)<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 1482U;
	volatile uint32_t x134 = 6884U;
	uint32_t x135 = 16297U;
	static int16_t x136 = -14;

	t33 = ((x133%x134)<(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	int32_t t34 = 30;

	t34 = ((x137%x138)<(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int8_t x142 = 1;
	volatile int16_t x144 = -24;

	t35 = ((x141%x142)<(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	int8_t x146 = 1;
	uint16_t x147 = 50U;
	int64_t x148 = 2594910942368045LL;

	t36 = ((x145%x146)<(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	int16_t x152 = 9205;
	volatile int32_t t37 = 238;

	t37 = ((x149%x150)<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -1;
	volatile int32_t t38 = 0;

	t38 = ((x153%x154)<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	static uint32_t x159 = UINT32_MAX;
	int32_t t39 = -1431693;

	t39 = ((x157%x158)<(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	int16_t x164 = -1;
	int32_t t40 = 93729831;

	t40 = ((x161%x162)<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int16_t x168 = -1;
	int32_t t41 = -122680;

	t41 = ((x165%x166)<(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = -1;

	t42 = ((x169%x170)<(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	volatile int32_t t43 = -5;

	t43 = ((x177%x178)<(x179<=x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x185 = 120215273091LLU;
	volatile int32_t t44 = -105341391;

	t44 = ((x185%x186)<(x187<=x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	uint32_t x190 = 4912106U;
	int8_t x192 = 1;

	t45 = ((x189%x190)<(x191<=x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 2;
	int64_t x194 = -1LL;
	static int16_t x195 = INT16_MIN;
	uint64_t x196 = 2670613204LLU;
	int32_t t46 = -1;

	t46 = ((x193%x194)<(x195<=x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x198 = UINT8_MAX;
	int32_t t47 = 320030;

	t47 = ((x197%x198)<(x199<=x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -1LL;
	uint8_t x203 = 9U;
	int8_t x204 = -28;
	volatile int32_t t48 = -142;

	t48 = ((x201%x202)<(x203<=x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t49 = 7814690;

	t49 = ((x205%x206)<(x207<=x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = -239096737;
	static int32_t x211 = -1;
	static int16_t x212 = 386;

	t50 = ((x209%x210)<(x211<=x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = 41;
	uint16_t x214 = UINT16_MAX;

	t51 = ((x213%x214)<(x215<=x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MAX;
	static uint16_t x220 = 245U;
	int32_t t52 = 816061;

	t52 = ((x217%x218)<(x219<=x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x221 = 126U;
	int64_t x222 = INT64_MIN;
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 69U;

	t53 = ((x221%x222)<(x223<=x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = INT64_MIN;
	int32_t x226 = -6455;
	volatile int16_t x227 = -6;
	uint64_t x228 = UINT64_MAX;

	t54 = ((x225%x226)<(x227<=x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	volatile uint8_t x230 = 52U;
	int8_t x231 = -1;
	uint16_t x232 = UINT16_MAX;
	int32_t t55 = 53;

	t55 = ((x229%x230)<(x231<=x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	volatile uint16_t x235 = 8985U;
	uint32_t x236 = 981U;
	int32_t t56 = -21147706;

	t56 = ((x233%x234)<(x235<=x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x239 = INT8_MAX;
	static int32_t t57 = -6365359;

	t57 = ((x237%x238)<(x239<=x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = -1LL;
	int32_t t58 = -3;

	t58 = ((x241%x242)<(x243<=x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MAX;
	int64_t x247 = -1LL;
	uint16_t x248 = 8708U;
	volatile int32_t t59 = -28;

	t59 = ((x245%x246)<(x247<=x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int64_t x250 = 122434286528LL;
	static uint8_t x251 = UINT8_MAX;
	int64_t x252 = 56442LL;

	t60 = ((x249%x250)<(x251<=x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MIN;
	static uint8_t x255 = 15U;
	int16_t x256 = 0;
	int32_t t61 = 17630;

	t61 = ((x253%x254)<(x255<=x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 567U;
	static int8_t x258 = 1;
	int8_t x260 = 0;
	int32_t t62 = -20070;

	t62 = ((x257%x258)<(x259<=x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	volatile uint8_t x263 = 0U;
	volatile int32_t t63 = -6;

	t63 = ((x261%x262)<(x263<=x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = -1LL;
	int8_t x266 = -46;
	uint8_t x267 = 3U;
	static int16_t x268 = 1;
	int32_t t64 = 1663;

	t64 = ((x265%x266)<(x267<=x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = INT8_MAX;
	uint32_t x270 = 159519U;
	uint64_t x271 = 63337940177148LLU;
	int32_t t65 = 175559032;

	t65 = ((x269%x270)<(x271<=x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 1U;
	int8_t x278 = -29;
	volatile uint8_t x279 = UINT8_MAX;
	static volatile uint16_t x280 = UINT16_MAX;
	volatile int32_t t66 = -149109;

	t66 = ((x277%x278)<(x279<=x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -19;
	int64_t x283 = INT64_MIN;
	int32_t t67 = -220950;

	t67 = ((x281%x282)<(x283<=x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = -54LL;
	uint16_t x286 = UINT16_MAX;
	uint16_t x288 = 1563U;
	int32_t t68 = -495591;

	t68 = ((x285%x286)<(x287<=x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x290 = INT16_MIN;
	volatile int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t69 = -3;

	t69 = ((x289%x290)<(x291<=x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = INT64_MIN;
	uint16_t x294 = 131U;
	int16_t x295 = INT16_MIN;
	int8_t x296 = -1;
	static volatile int32_t t70 = -4;

	t70 = ((x293%x294)<(x295<=x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 0LLU;
	int32_t x298 = -1;
	static int16_t x300 = 634;
	int32_t t71 = -434967925;

	t71 = ((x297%x298)<(x299<=x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x302 = 98U;
	uint8_t x303 = 0U;
	uint8_t x304 = 25U;
	volatile int32_t t72 = 46853909;

	t72 = ((x301%x302)<(x303<=x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = 1;
	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t73 = 901;

	t73 = ((x305%x306)<(x307<=x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x310 = 14992142U;
	uint16_t x311 = UINT16_MAX;
	static int64_t x312 = 1143355115334047017LL;
	static int32_t t74 = 470;

	t74 = ((x309%x310)<(x311<=x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	static volatile int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	static uint32_t x316 = 30743U;
	static volatile int32_t t75 = 9;

	t75 = ((x313%x314)<(x315<=x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	static int8_t x320 = -1;

	t76 = ((x317%x318)<(x319<=x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x322 = -1LL;
	int16_t x324 = -1;
	static volatile int32_t t77 = 3268505;

	t77 = ((x321%x322)<(x323<=x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = -1;
	int32_t x328 = INT32_MIN;

	t78 = ((x325%x326)<(x327<=x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x329 = -76;
	static int64_t x330 = 2722764052680124LL;
	int16_t x331 = INT16_MIN;
	static int32_t x332 = 0;
	volatile int32_t t79 = -82710;

	t79 = ((x329%x330)<(x331<=x332));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MAX;

	t80 = ((x333%x334)<(x335<=x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x337 = INT8_MIN;
	static uint64_t x338 = UINT64_MAX;
	int64_t x339 = -1LL;
	int16_t x340 = INT16_MAX;
	volatile int32_t t81 = 3997176;

	t81 = ((x337%x338)<(x339<=x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	static int8_t x342 = INT8_MIN;
	uint32_t x343 = 1U;
	int32_t t82 = -17974;

	t82 = ((x341%x342)<(x343<=x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -140295LL;
	volatile uint8_t x346 = 1U;
	static uint64_t x347 = UINT64_MAX;
	volatile int64_t x348 = 625475LL;

	t83 = ((x345%x346)<(x347<=x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x351 = -1;
	volatile int32_t x352 = INT32_MIN;
	int32_t t84 = 1;

	t84 = ((x349%x350)<(x351<=x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = INT32_MIN;
	volatile uint64_t x356 = 7741985LLU;
	volatile int32_t t85 = 186438;

	t85 = ((x353%x354)<(x355<=x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 61794;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 4381877217995513LLU;
	uint64_t x360 = 2674LLU;
	volatile int32_t t86 = -477811732;

	t86 = ((x357%x358)<(x359<=x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = 0U;
	uint16_t x362 = 52U;
	static int16_t x363 = -1;
	uint64_t x364 = 3920LLU;
	int32_t t87 = -241677;

	t87 = ((x361%x362)<(x363<=x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -1LL;
	uint16_t x367 = 100U;
	int8_t x368 = 0;
	int32_t t88 = -13901308;

	t88 = ((x365%x366)<(x367<=x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = INT8_MAX;
	int8_t x370 = 1;
	int32_t x371 = INT32_MIN;

	t89 = ((x369%x370)<(x371<=x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = -1;
	int8_t x374 = INT8_MIN;
	static int64_t x375 = 2245037120824541LL;
	int32_t x376 = INT32_MIN;
	volatile int32_t t90 = -23483235;

	t90 = ((x373%x374)<(x375<=x376));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 652U;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = -1;
	uint8_t x380 = 3U;
	int32_t t91 = 0;

	t91 = ((x377%x378)<(x379<=x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int32_t x382 = 294500;
	volatile uint32_t x383 = 529701U;
	volatile uint16_t x384 = 955U;
	int32_t t92 = 2288;

	t92 = ((x381%x382)<(x383<=x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MIN;
	volatile int32_t x386 = -6570285;
	int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t93 = 65065661;

	t93 = ((x385%x386)<(x387<=x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = -1LL;
	int16_t x392 = 39;
	int32_t t94 = 61242;

	t94 = ((x389%x390)<(x391<=x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = 5752200LLU;
	int16_t x394 = 1770;
	int32_t t95 = 3521265;

	t95 = ((x393%x394)<(x395<=x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = 9354;
	static int64_t x399 = -3898617621LL;
	static uint8_t x400 = 6U;

	t96 = ((x397%x398)<(x399<=x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x401 = UINT8_MAX;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = 10;
	volatile int32_t t97 = -290354343;

	t97 = ((x401%x402)<(x403<=x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x405 = 658470139LLU;
	int32_t x406 = INT32_MIN;
	volatile uint32_t x407 = 444159403U;
	static int64_t x408 = INT64_MAX;
	static int32_t t98 = 63;

	t98 = ((x405%x406)<(x407<=x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	volatile int16_t x410 = -1;
	static uint8_t x411 = UINT8_MAX;
	volatile uint8_t x412 = UINT8_MAX;
	int32_t t99 = 0;

	t99 = ((x409%x410)<(x411<=x412));

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
