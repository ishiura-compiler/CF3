#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
static uint8_t x4 = 3U;
int32_t t0 = -1538;
int8_t x5 = -1;
uint64_t x7 = 263LLU;
volatile uint32_t x8 = UINT32_MAX;
uint64_t x11 = 13LLU;
int16_t x18 = 5939;
int64_t x20 = -1LL;
uint16_t x22 = UINT16_MAX;
int32_t x23 = INT32_MAX;
int8_t x25 = -1;
static volatile uint16_t x31 = 43U;
int16_t x32 = INT16_MAX;
int32_t t10 = -12139;
uint8_t x45 = 3U;
int64_t x52 = -53LL;
volatile uint32_t x57 = 254252U;
int32_t t17 = -1;
int32_t x77 = INT32_MIN;
uint8_t x82 = 28U;
int32_t t21 = 6033099;
uint16_t x93 = UINT16_MAX;
int16_t x98 = INT16_MIN;
uint64_t x100 = 56597724554613LLU;
static int16_t x102 = INT16_MAX;
int32_t t26 = 65644243;
volatile int64_t x109 = INT64_MIN;
int16_t x112 = INT16_MAX;
volatile int32_t t27 = 1;
uint32_t x116 = 5U;
int32_t x119 = -1;
int8_t x129 = -3;
volatile int32_t x139 = INT32_MIN;
volatile int32_t t34 = -275;
int32_t x144 = 7549;
int32_t x145 = -1;
int8_t x147 = INT8_MIN;
int16_t x150 = 0;
static uint16_t x152 = 12759U;
int32_t t37 = -5;
uint64_t x154 = UINT64_MAX;
uint64_t x158 = 290489971470LLU;
int32_t x168 = INT32_MAX;
int32_t t41 = 21655;
volatile int32_t x169 = INT32_MIN;
volatile int32_t x175 = 30852;
volatile uint64_t x179 = 12200623578129764LLU;
static int16_t x182 = -7531;
int8_t x185 = INT8_MIN;
volatile int16_t x188 = INT16_MIN;
int8_t x189 = -1;
static int8_t x211 = INT8_MIN;
volatile int8_t x218 = INT8_MIN;
int8_t x221 = INT8_MAX;
uint8_t x222 = 5U;
volatile int32_t t55 = -159;
static uint32_t x229 = 1U;
int32_t x231 = INT32_MIN;
volatile int32_t t57 = -3;
int16_t x237 = INT16_MAX;
static int32_t x241 = 1;
uint64_t x243 = 76613LLU;
static volatile int32_t t59 = -4796988;
int64_t x249 = -4LL;
volatile uint8_t x255 = 76U;
static volatile int8_t x258 = INT8_MIN;
static int32_t x260 = -4345;
volatile int32_t t63 = -7;
uint8_t x267 = UINT8_MAX;
int8_t x270 = -1;
static int8_t x272 = -1;
volatile int32_t t66 = 259434;
volatile int64_t x275 = INT64_MIN;
volatile uint16_t x279 = UINT16_MAX;
volatile int32_t t69 = 41556;
int8_t x287 = -4;
uint16_t x288 = 0U;
static int32_t x293 = 1446788;
int64_t x295 = INT64_MIN;
volatile int32_t t73 = 1158396;
int32_t x304 = INT32_MIN;
static uint64_t x308 = UINT64_MAX;
volatile uint8_t x316 = 1U;
volatile int32_t t78 = -9;
int32_t t79 = 119;
static int16_t x328 = INT16_MIN;
int32_t x334 = -202490;
static uint32_t x339 = UINT32_MAX;
int32_t t83 = -747831;
static int8_t x345 = INT8_MAX;
volatile int32_t t85 = 3989;
int64_t x351 = INT64_MIN;
volatile int32_t t86 = 1857490;
static uint8_t x361 = 112U;
volatile int32_t t89 = -1;
int32_t t90 = -6818337;
volatile int32_t t91 = 28589143;
int32_t x376 = INT32_MIN;
int8_t x377 = 1;
volatile uint8_t x378 = 17U;
volatile int8_t x379 = INT8_MIN;
volatile int32_t t93 = 937378;
int64_t x385 = -66709881LL;
int8_t x386 = INT8_MAX;
uint16_t x387 = 18U;
static int64_t x391 = -265806672641398893LL;
int32_t x393 = -1;
int8_t x395 = 16;
int32_t x399 = INT32_MIN;
volatile int64_t x400 = -52861194LL;
int32_t t98 = -1601;
volatile int32_t t99 = -161;


void f0(void) {
	int32_t x1 = -7573;
	volatile int8_t x3 = 4;

	t0 = (((x1^x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 23U;
	int32_t t1 = -418;

	t1 = (((x5^x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	int16_t x10 = INT16_MIN;
	volatile int32_t x12 = -1;
	int32_t t2 = 770018771;

	t2 = (((x9^x10)/x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint16_t x14 = 24U;
	int8_t x15 = INT8_MAX;
	static uint64_t x16 = 738156LLU;
	volatile int32_t t3 = 0;

	t3 = (((x13^x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 12U;
	int32_t x19 = -29;
	int32_t t4 = 1;

	t4 = (((x17^x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 10;
	int64_t x24 = 33456806685LL;
	static volatile int32_t t5 = 34;

	t5 = (((x21^x22)/x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int8_t x27 = -1;
	static volatile int8_t x28 = -1;
	int32_t t6 = 9830357;

	t6 = (((x25^x26)/x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 11293U;
	int16_t x30 = INT16_MIN;
	int32_t t7 = -19410;

	t7 = (((x29^x30)/x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = 1U;
	int16_t x35 = 2565;
	int8_t x36 = -1;
	static volatile int32_t t8 = 6718168;

	t8 = (((x33^x34)/x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	uint32_t x38 = UINT32_MAX;
	volatile uint64_t x39 = 48515LLU;
	uint32_t x40 = 112064790U;
	static volatile int32_t t9 = -7;

	t9 = (((x37^x38)/x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	static uint64_t x42 = 8132831717LLU;
	static volatile int16_t x43 = -283;
	int32_t x44 = -1;

	t10 = (((x41^x42)/x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = 110;
	volatile int8_t x47 = INT8_MAX;
	static int64_t x48 = INT64_MIN;
	int32_t t11 = 2832;

	t11 = (((x45^x46)/x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MAX;
	int64_t x51 = INT64_MAX;
	int32_t t12 = -121272;

	t12 = (((x49^x50)/x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 2930;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -4;

	t13 = (((x53^x54)/x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -38;
	int32_t t14 = -14825;

	t14 = (((x57^x58)/x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = -1;
	static uint64_t x63 = UINT64_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = -783;

	t15 = (((x61^x62)/x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 102101127LLU;
	int8_t x66 = INT8_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = 5;

	t16 = (((x65^x66)/x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static int32_t x70 = INT32_MIN;
	int32_t x71 = -1;
	int64_t x72 = -1LL;

	t17 = (((x69^x70)/x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1734U;
	static int64_t x74 = -440437120LL;
	volatile int16_t x75 = INT16_MIN;
	volatile int8_t x76 = 1;
	volatile int32_t t18 = -151;

	t18 = (((x73^x74)/x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -3;
	uint64_t x79 = 21287192078LLU;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 4070897;

	t19 = (((x77^x78)/x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	int32_t x83 = -247996;
	static int64_t x84 = 187LL;
	int32_t t20 = 79492;

	t20 = (((x81^x82)/x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	volatile int16_t x86 = INT16_MIN;
	static volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MAX;

	t21 = (((x85^x86)/x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1644U;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = -1;
	uint32_t x92 = 252041U;
	volatile int32_t t22 = -1827768;

	t22 = (((x89^x90)/x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 61;
	volatile int32_t x95 = INT32_MAX;
	uint16_t x96 = 652U;
	int32_t t23 = 0;

	t23 = (((x93^x94)/x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 205258390U;
	int32_t x99 = INT32_MIN;
	volatile int32_t t24 = -2803;

	t24 = (((x97^x98)/x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x103 = 2223123799LL;
	volatile int32_t x104 = INT32_MIN;
	static int32_t t25 = -1;

	t25 = (((x101^x102)/x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	uint8_t x106 = UINT8_MAX;
	static int32_t x107 = -1;
	int16_t x108 = INT16_MIN;

	t26 = (((x105^x106)/x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -1042417;
	int32_t x111 = -96;

	t27 = (((x109^x110)/x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MAX;
	int16_t x114 = 67;
	int16_t x115 = INT16_MAX;
	static int32_t t28 = 1010272;

	t28 = (((x113^x114)/x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -2949851LL;
	volatile uint64_t x118 = UINT64_MAX;
	uint16_t x120 = 220U;
	volatile int32_t t29 = 87;

	t29 = (((x117^x118)/x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	uint64_t x122 = 24LLU;
	static uint8_t x123 = UINT8_MAX;
	int16_t x124 = -610;
	static volatile int32_t t30 = -891;

	t30 = (((x121^x122)/x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 9831LLU;
	int16_t x126 = 346;
	int64_t x127 = INT64_MIN;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = 5;

	t31 = (((x125^x126)/x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 241533258U;
	volatile uint8_t x132 = 1U;
	int32_t t32 = -713379862;

	t32 = (((x129^x130)/x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 53;
	uint64_t x134 = 22093107351LLU;
	uint32_t x135 = UINT32_MAX;
	static int8_t x136 = 33;
	volatile int32_t t33 = 0;

	t33 = (((x133^x134)/x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile uint64_t x138 = 590065198LLU;
	volatile uint64_t x140 = 192LLU;

	t34 = (((x137^x138)/x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -1;
	uint16_t x142 = 32473U;
	int8_t x143 = INT8_MIN;
	int32_t t35 = -237948;

	t35 = (((x141^x142)/x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x146 = UINT64_MAX;
	uint64_t x148 = UINT64_MAX;
	int32_t t36 = -15627;

	t36 = (((x145^x146)/x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 0LL;
	int8_t x151 = -26;

	t37 = (((x149^x150)/x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x155 = 2;
	volatile int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = -54905;

	t38 = (((x153^x154)/x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -3733LL;
	int64_t x159 = INT64_MAX;
	volatile int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -53858;

	t39 = (((x157^x158)/x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1U;
	int32_t x162 = -46;
	int16_t x163 = INT16_MAX;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t40 = 155185491;

	t40 = (((x161^x162)/x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 112U;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;

	t41 = (((x165^x166)/x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 11;
	volatile uint8_t x171 = UINT8_MAX;
	static uint32_t x172 = UINT32_MAX;
	volatile int32_t t42 = 9815244;

	t42 = (((x169^x170)/x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 2U;
	volatile int64_t x174 = -639246598710LL;
	uint32_t x176 = 3956U;
	int32_t t43 = 123;

	t43 = (((x173^x174)/x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -43034281346LL;
	int8_t x178 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -40;

	t44 = (((x177^x178)/x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -386156201475189235LL;
	int16_t x183 = INT16_MIN;
	volatile int32_t x184 = 934106258;
	static int32_t t45 = -99033;

	t45 = (((x181^x182)/x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x186 = 254897243600631LLU;
	int32_t x187 = -1;
	volatile int32_t t46 = -2;

	t46 = (((x185^x186)/x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = 10257452257LL;
	static int32_t x191 = INT32_MIN;
	uint16_t x192 = 6243U;
	int32_t t47 = 3533647;

	t47 = (((x189^x190)/x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 551LLU;
	int32_t t48 = -51025695;

	t48 = (((x193^x194)/x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 1;
	int32_t x198 = 52;
	uint8_t x199 = 3U;
	int32_t x200 = INT32_MAX;
	int32_t t49 = 66;

	t49 = (((x197^x198)/x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 2170512969680LL;
	int64_t x202 = -16445835858768555LL;
	int64_t x203 = INT64_MIN;
	int32_t x204 = -1;
	static volatile int32_t t50 = -17;

	t50 = (((x201^x202)/x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = INT32_MIN;
	static uint64_t x210 = 153665643634LLU;
	int32_t x212 = -1;
	volatile int32_t t51 = 360320613;

	t51 = (((x209^x210)/x211)==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = UINT16_MAX;
	int32_t x214 = 9;
	int16_t x215 = 1671;
	static uint8_t x216 = 0U;
	volatile int32_t t52 = -3663992;

	t52 = (((x213^x214)/x215)==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = UINT64_MAX;
	volatile int64_t x219 = INT64_MIN;
	uint16_t x220 = 4614U;
	static volatile int32_t t53 = -207613911;

	t53 = (((x217^x218)/x219)==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x223 = 2U;
	int32_t x224 = 81077;
	volatile int32_t t54 = 203055;

	t54 = (((x221^x222)/x223)==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 69846872994368LL;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 1561U;

	t55 = (((x225^x226)/x227)==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x230 = INT64_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t56 = 1293466;

	t56 = (((x229^x230)/x231)==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x233 = UINT32_MAX;
	volatile int8_t x234 = INT8_MIN;
	static uint8_t x235 = 36U;
	int64_t x236 = -1LL;

	t57 = (((x233^x234)/x235)==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x238 = 12579880836184LL;
	static int8_t x239 = 15;
	int16_t x240 = 21;
	volatile int32_t t58 = 237;

	t58 = (((x237^x238)/x239)==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x242 = INT16_MAX;
	uint8_t x244 = UINT8_MAX;

	t59 = (((x241^x242)/x243)==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x245 = -1;
	volatile int64_t x246 = 36940626241LL;
	uint16_t x247 = 1U;
	volatile uint16_t x248 = 67U;
	volatile int32_t t60 = -12;

	t60 = (((x245^x246)/x247)==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x250 = -493;
	static volatile uint32_t x251 = 129274U;
	static volatile int64_t x252 = INT64_MIN;
	int32_t t61 = 180775635;

	t61 = (((x249^x250)/x251)==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MIN;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t62 = -13;

	t62 = (((x253^x254)/x255)==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 1;
	volatile int16_t x259 = INT16_MAX;

	t63 = (((x257^x258)/x259)==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = -1;
	uint32_t x262 = 114U;
	uint8_t x263 = 31U;
	uint8_t x264 = 66U;
	volatile int32_t t64 = -74118;

	t64 = (((x261^x262)/x263)==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MAX;
	static volatile uint8_t x266 = UINT8_MAX;
	volatile uint8_t x268 = 91U;
	volatile int32_t t65 = 4;

	t65 = (((x265^x266)/x267)==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	uint8_t x271 = UINT8_MAX;

	t66 = (((x269^x270)/x271)==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x273 = INT64_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	uint64_t x276 = 0LLU;
	int32_t t67 = -1372;

	t67 = (((x273^x274)/x275)==x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = -3;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t68 = -83820;

	t68 = (((x277^x278)/x279)==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MAX;
	uint8_t x283 = 3U;
	int64_t x284 = 1291706321593829LL;

	t69 = (((x281^x282)/x283)==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -20;
	static int8_t x286 = -1;
	int32_t t70 = -3105;

	t70 = (((x285^x286)/x287)==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int64_t x291 = -11395370487431713LL;
	volatile int64_t x292 = -1LL;
	static int32_t t71 = -698069;

	t71 = (((x289^x290)/x291)==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = 15;
	uint16_t x296 = 3U;
	volatile int32_t t72 = 19681390;

	t72 = (((x293^x294)/x295)==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x297 = INT32_MIN;
	uint8_t x298 = 1U;
	uint32_t x299 = 1668978768U;
	volatile int64_t x300 = INT64_MIN;

	t73 = (((x297^x298)/x299)==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 20U;
	int64_t x302 = -1LL;
	static int64_t x303 = INT64_MAX;
	static volatile int32_t t74 = -2553143;

	t74 = (((x301^x302)/x303)==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x305 = UINT32_MAX;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t75 = 62317270;

	t75 = (((x305^x306)/x307)==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x309 = 1U;
	int8_t x310 = 1;
	static int16_t x311 = INT16_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t76 = 29;

	t76 = (((x309^x310)/x311)==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = 0U;
	static volatile int16_t x315 = -31;
	volatile int32_t t77 = -218387992;

	t77 = (((x313^x314)/x315)==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 3490LLU;
	uint16_t x318 = 622U;
	int16_t x319 = -1;
	static volatile int64_t x320 = -15212032704523881LL;

	t78 = (((x317^x318)/x319)==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 2176069447626858194LL;
	static uint16_t x322 = 1U;
	int64_t x323 = 5816805193760LL;
	uint64_t x324 = UINT64_MAX;

	t79 = (((x321^x322)/x323)==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MAX;
	int16_t x326 = 238;
	static volatile uint64_t x327 = 3928792419199926207LLU;
	volatile int32_t t80 = -56935918;

	t80 = (((x325^x326)/x327)==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = -427431;
	static uint16_t x330 = UINT16_MAX;
	int64_t x331 = -31179195289055LL;
	volatile int16_t x332 = 577;
	volatile int32_t t81 = -4;

	t81 = (((x329^x330)/x331)==x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x333 = INT32_MIN;
	volatile uint16_t x335 = 59U;
	int32_t x336 = -333;
	int32_t t82 = 0;

	t82 = (((x333^x334)/x335)==x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 84996U;
	int32_t x338 = INT32_MIN;
	static int64_t x340 = INT64_MIN;

	t83 = (((x337^x338)/x339)==x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = 3965;
	int8_t x343 = INT8_MAX;
	volatile int8_t x344 = INT8_MIN;
	int32_t t84 = -7;

	t84 = (((x341^x342)/x343)==x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MAX;
	int8_t x348 = 1;

	t85 = (((x345^x346)/x347)==x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	uint32_t x352 = 1731293U;

	t86 = (((x349^x350)/x351)==x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	static int8_t x355 = 13;
	int32_t x356 = INT32_MIN;
	int32_t t87 = 1669583;

	t87 = (((x353^x354)/x355)==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = 103845255;
	int64_t x358 = 15572045LL;
	uint64_t x359 = 156492546812412LLU;
	static uint32_t x360 = UINT32_MAX;
	int32_t t88 = -1;

	t88 = (((x357^x358)/x359)==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MAX;
	int64_t x364 = 1615627213422840LL;

	t89 = (((x361^x362)/x363)==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = 464765941LL;
	int8_t x366 = INT8_MAX;
	int32_t x367 = -1;
	uint16_t x368 = 8083U;

	t90 = (((x365^x366)/x367)==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 0U;
	volatile int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;

	t91 = (((x369^x370)/x371)==x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x373 = INT64_MIN;
	uint8_t x374 = UINT8_MAX;
	uint32_t x375 = 19631935U;
	volatile int32_t t92 = 693919;

	t92 = (((x373^x374)/x375)==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x380 = INT16_MIN;

	t93 = (((x377^x378)/x379)==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t94 = 177;

	t94 = (((x381^x382)/x383)==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x388 = INT64_MAX;
	static volatile int32_t t95 = -474914058;

	t95 = (((x385^x386)/x387)==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 18U;
	int16_t x392 = 1;
	static volatile int32_t t96 = 5381;

	t96 = (((x389^x390)/x391)==x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x394 = 1U;
	static int16_t x396 = -1;
	volatile int32_t t97 = 890601731;

	t97 = (((x393^x394)/x395)==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x397 = INT8_MAX;
	static uint64_t x398 = 27684941842180234LLU;

	t98 = (((x397^x398)/x399)==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = INT16_MIN;
	uint64_t x402 = UINT64_MAX;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1449292154091767LL;

	t99 = (((x401^x402)/x403)==x404);

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

