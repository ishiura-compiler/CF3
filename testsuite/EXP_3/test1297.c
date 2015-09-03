#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 57U;
static uint16_t x3 = 8U;
volatile int16_t x5 = -23;
volatile int64_t x21 = INT64_MIN;
int16_t x26 = -1736;
volatile int32_t t6 = 8;
int32_t x38 = INT32_MAX;
uint16_t x41 = 70U;
static volatile int32_t x44 = INT32_MAX;
int32_t t11 = -131;
volatile int8_t x52 = INT8_MIN;
static volatile int32_t t14 = 979685;
int32_t x61 = INT32_MIN;
int32_t t16 = 11577;
volatile uint64_t x74 = UINT64_MAX;
int16_t x76 = 8;
volatile int32_t t19 = -3647;
uint16_t x81 = 13U;
uint64_t x84 = 15015524LLU;
int64_t x95 = -4LL;
int8_t x109 = 7;
int8_t x113 = INT8_MAX;
volatile int64_t x118 = -878LL;
static uint64_t x119 = UINT64_MAX;
volatile int32_t t29 = 233729;
volatile int32_t x121 = INT32_MAX;
int32_t x124 = INT32_MIN;
volatile int32_t t32 = 4156;
volatile int32_t x134 = -23301;
static volatile int16_t x136 = -12247;
volatile int32_t t33 = 2285;
int8_t x137 = INT8_MIN;
int32_t t35 = 6;
int32_t t36 = 40853;
volatile int32_t t39 = -364542547;
volatile int16_t x162 = -1;
uint32_t x164 = 78263U;
int32_t t40 = -3;
static volatile uint16_t x168 = 28U;
int64_t x172 = INT64_MIN;
int16_t x173 = INT16_MAX;
int16_t x174 = -1491;
uint32_t x181 = UINT32_MAX;
uint64_t x185 = UINT64_MAX;
volatile int32_t t46 = 505;
int32_t t47 = 1962632;
static int32_t x193 = -41432465;
int64_t x197 = -33LL;
int16_t x202 = 10324;
static volatile int32_t t52 = 20;
uint16_t x213 = UINT16_MAX;
int32_t t55 = -12;
uint16_t x228 = 2012U;
int8_t x238 = INT8_MIN;
volatile int64_t x239 = INT64_MAX;
int32_t t59 = 199858612;
volatile int32_t t60 = -2;
int8_t x249 = INT8_MAX;
int8_t x251 = INT8_MIN;
int32_t x254 = 329;
int32_t x258 = INT32_MIN;
static int32_t x262 = INT32_MIN;
uint16_t x263 = UINT16_MAX;
int8_t x264 = 0;
static uint64_t x271 = 3LLU;
int8_t x272 = INT8_MIN;
int64_t x273 = INT64_MIN;
uint8_t x275 = 12U;
int32_t t68 = 26159174;
int32_t t71 = 8781;
uint32_t x296 = 126078171U;
volatile int32_t t74 = 11530559;
int64_t x306 = INT64_MIN;
int64_t x308 = INT64_MIN;
uint64_t x313 = 1LLU;
int64_t x317 = INT64_MIN;
static int64_t x318 = -1184765866860LL;
int16_t x323 = INT16_MAX;
int64_t x330 = INT64_MIN;
volatile int32_t x334 = INT32_MIN;
volatile int8_t x336 = INT8_MAX;
uint8_t x337 = 36U;
int32_t t85 = -118321750;
static volatile int32_t t86 = -28711;
static int16_t x349 = 3;
uint16_t x353 = 668U;
static int32_t x355 = -1;
int32_t t90 = 23575;
int8_t x378 = -1;
int64_t x380 = -101664849465251212LL;
uint16_t x388 = 13U;
int32_t x391 = 38364;
int32_t x392 = 2;
uint32_t x396 = 30U;


void f0(void) {
	volatile uint8_t x2 = 5U;
	volatile int16_t x4 = 479;
	int32_t t0 = 172;

	t0 = ((x1<x2)<=(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MAX;
	int32_t x7 = 5514;
	uint8_t x8 = 5U;
	int32_t t1 = -1722;

	t1 = ((x5<x6)<=(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	static int32_t x10 = INT32_MAX;
	int64_t x11 = 9849LL;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 22124;

	t2 = ((x9<x10)<=(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static uint16_t x14 = 0U;
	uint8_t x15 = 6U;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 2;

	t3 = ((x13<x14)<=(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	volatile int8_t x18 = -15;
	volatile uint32_t x19 = 6109U;
	int32_t x20 = INT32_MIN;
	static int32_t t4 = -100;

	t4 = ((x17<x18)<=(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 24420260U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -15042198;

	t5 = ((x21<x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	volatile uint8_t x27 = 40U;
	static int16_t x28 = -13;

	t6 = ((x25<x26)<=(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	int64_t x30 = 20484529794267509LL;
	int16_t x31 = -16;
	static volatile uint16_t x32 = 1915U;
	int32_t t7 = 378607;

	t7 = ((x29<x30)<=(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -120902417LL;
	uint16_t x34 = 2450U;
	uint8_t x35 = 64U;
	int16_t x36 = -1;
	volatile int32_t t8 = -1;

	t8 = ((x33<x34)<=(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 88U;
	volatile int32_t t9 = -1863;

	t9 = ((x37<x38)<=(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = INT8_MAX;
	static int16_t x43 = 0;
	int32_t t10 = -1;

	t10 = ((x41<x42)<=(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 2;
	volatile int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MAX;
	uint64_t x48 = 125497991902616LLU;

	t11 = ((x45<x46)<=(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 5U;
	int8_t x50 = 5;
	int16_t x51 = -14;
	int32_t t12 = -64012;

	t12 = ((x49<x50)<=(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = -5889;
	static int8_t x54 = -1;
	static int64_t x55 = INT64_MIN;
	uint64_t x56 = 21812LLU;
	static int32_t t13 = -116815464;

	t13 = ((x53<x54)<=(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	int8_t x60 = -1;

	t14 = ((x57<x58)<=(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = 9U;
	int16_t x63 = INT16_MIN;
	static int64_t x64 = INT64_MIN;
	static volatile int32_t t15 = -1669;

	t15 = ((x61<x62)<=(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = INT32_MIN;
	volatile int64_t x66 = -1LL;
	int64_t x67 = -17LL;
	int8_t x68 = -1;

	t16 = ((x65<x66)<=(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int16_t x70 = 3502;
	uint16_t x71 = 26U;
	volatile int8_t x72 = -1;
	int32_t t17 = 4456;

	t17 = ((x69<x70)<=(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint8_t x75 = UINT8_MAX;
	int32_t t18 = -1;

	t18 = ((x73<x74)<=(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static uint64_t x78 = 3588749241827972LLU;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;

	t19 = ((x77<x78)<=(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MAX;
	int32_t t20 = 47049996;

	t20 = ((x81<x82)<=(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 1;
	static int32_t x86 = INT32_MIN;
	uint16_t x87 = 21U;
	static int16_t x88 = 0;
	volatile int32_t t21 = -3;

	t21 = ((x85<x86)<=(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint8_t x90 = 0U;
	volatile uint16_t x91 = 11137U;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 198;

	t22 = ((x89<x90)<=(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	static int32_t x94 = -278;
	static volatile int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = 13863638;

	t23 = ((x93<x94)<=(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	uint32_t x98 = 209866U;
	static uint32_t x99 = UINT32_MAX;
	static volatile int32_t x100 = INT32_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x97<x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 48846575732500075LLU;
	volatile int64_t x102 = 1024761158321853141LL;
	int32_t x103 = -35005;
	volatile int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 3;

	t25 = ((x101<x102)<=(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int64_t x106 = INT64_MIN;
	int64_t x107 = -1LL;
	volatile int8_t x108 = INT8_MAX;
	static volatile int32_t t26 = 0;

	t26 = ((x105<x106)<=(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = INT64_MAX;
	int64_t x111 = -1LL;
	volatile int16_t x112 = 0;
	volatile int32_t t27 = -3473214;

	t27 = ((x109<x110)<=(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	uint16_t x115 = UINT16_MAX;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -25;

	t28 = ((x113<x114)<=(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -1;
	uint32_t x120 = 616702942U;

	t29 = ((x117<x118)<=(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = 13;
	uint64_t x123 = 8328668856LLU;
	volatile int32_t t30 = -440;

	t30 = ((x121<x122)<=(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x126 = -1LL;
	volatile uint16_t x127 = UINT16_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = 634392730;

	t31 = ((x125<x126)<=(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	static int64_t x132 = 380875348481651LL;

	t32 = ((x129<x130)<=(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -7638;
	int64_t x135 = INT64_MAX;

	t33 = ((x133<x134)<=(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1LL;
	volatile int8_t x139 = 15;
	uint8_t x140 = 1U;
	int32_t t34 = 2726;

	t34 = ((x137<x138)<=(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = 44;
	uint32_t x142 = 92884U;
	int64_t x143 = INT64_MIN;
	volatile int64_t x144 = INT64_MAX;

	t35 = ((x141<x142)<=(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 8U;
	int32_t x146 = -1;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = 20944437LL;

	t36 = ((x145<x146)<=(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1508U;
	int64_t x150 = -81211LL;
	static int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -44;

	t37 = ((x149<x150)<=(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	uint32_t x154 = 8028689U;
	int16_t x155 = INT16_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -1702413;

	t38 = ((x153<x154)<=(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 875484LLU;
	static volatile int16_t x160 = 1;

	t39 = ((x157<x158)<=(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	int32_t x163 = INT32_MAX;

	t40 = ((x161<x162)<=(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	static volatile int32_t t41 = 0;

	t41 = ((x165<x166)<=(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int32_t x170 = INT32_MAX;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t t42 = -1386;

	t42 = ((x169<x170)<=(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x175 = UINT64_MAX;
	static int32_t x176 = 121;
	int32_t t43 = -257159;

	t43 = ((x173<x174)<=(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = 185494255258353700LL;
	volatile int64_t x178 = INT64_MIN;
	int32_t x179 = 1261;
	uint32_t x180 = 577U;
	int32_t t44 = -77939;

	t44 = ((x177<x178)<=(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 0U;
	int16_t x183 = -1;
	static int8_t x184 = 19;
	int32_t t45 = -6272834;

	t45 = ((x181<x182)<=(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = -1;
	int32_t x187 = -1880994;
	uint8_t x188 = UINT8_MAX;

	t46 = ((x185<x186)<=(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MAX;

	t47 = ((x189<x190)<=(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = 3373U;
	int32_t x195 = 7;
	int8_t x196 = 1;
	static int32_t t48 = 1311490;

	t48 = ((x193<x194)<=(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MAX;
	uint16_t x199 = 2U;
	uint64_t x200 = 5466879498848LLU;
	static int32_t t49 = 33;

	t49 = ((x197<x198)<=(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 2LLU;
	int16_t x203 = 128;
	int32_t x204 = 7690;
	static volatile int32_t t50 = 0;

	t50 = ((x201<x202)<=(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 1;
	uint32_t x206 = 121775U;
	volatile uint8_t x207 = 0U;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t51 = 7389;

	t51 = ((x205<x206)<=(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 635U;
	int32_t x210 = -3;
	int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MIN;

	t52 = ((x209<x210)<=(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 2837851480588LLU;
	int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -681541788;

	t53 = ((x213<x214)<=(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	volatile uint8_t x218 = 114U;
	volatile uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;
	volatile int32_t t54 = -318910;

	t54 = ((x217<x218)<=(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 3165LL;
	volatile int64_t x222 = INT64_MIN;
	int16_t x223 = -1;
	int16_t x224 = INT16_MAX;

	t55 = ((x221<x222)<=(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	volatile int16_t x226 = 10194;
	static int8_t x227 = INT8_MAX;
	volatile int32_t t56 = 826470;

	t56 = ((x225<x226)<=(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 13;
	static uint32_t x230 = UINT32_MAX;
	uint32_t x231 = 140795271U;
	int16_t x232 = -1;
	int32_t t57 = 19677;

	t57 = ((x229<x230)<=(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = 0;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	static int32_t t58 = 3869;

	t58 = ((x233<x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x240 = INT64_MAX;

	t59 = ((x237<x238)<=(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int64_t x242 = -1846634778190LL;
	volatile int8_t x243 = INT8_MIN;
	int16_t x244 = -1;

	t60 = ((x241<x242)<=(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MAX;
	uint16_t x246 = 8U;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = 2U;
	volatile int32_t t61 = 212581;

	t61 = ((x245<x246)<=(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x250 = INT32_MIN;
	static int64_t x252 = 9274904108844LL;
	volatile int32_t t62 = -514;

	t62 = ((x249<x250)<=(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = 639725850U;
	int32_t x255 = -27927967;
	static volatile int8_t x256 = 1;
	volatile int32_t t63 = -12539218;

	t63 = ((x253<x254)<=(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	static int32_t x259 = INT32_MAX;
	int32_t x260 = 4077920;
	int32_t t64 = -47668107;

	t64 = ((x257<x258)<=(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	volatile int32_t t65 = -5346;

	t65 = ((x261<x262)<=(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	int8_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = -792713920;

	t66 = ((x265<x266)<=(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MIN;
	volatile uint16_t x270 = 27U;
	int32_t t67 = 365979;

	t67 = ((x269<x270)<=(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -1;
	uint16_t x276 = UINT16_MAX;

	t68 = ((x273<x274)<=(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 7154U;
	int8_t x278 = -1;
	int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -60671;

	t69 = ((x277<x278)<=(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	static volatile uint32_t x282 = UINT32_MAX;
	static uint16_t x283 = UINT16_MAX;
	int16_t x284 = -1;
	static volatile int32_t t70 = 490132481;

	t70 = ((x281<x282)<=(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -48;
	int16_t x286 = INT16_MIN;
	volatile int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MIN;

	t71 = ((x285<x286)<=(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 0;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MAX;
	static volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = -5;

	t72 = ((x289<x290)<=(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 122075881347772LLU;
	uint16_t x294 = 12085U;
	static int64_t x295 = INT64_MIN;
	int32_t t73 = 29;

	t73 = ((x293<x294)<=(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 3113U;
	volatile uint16_t x298 = UINT16_MAX;
	int32_t x299 = -1;
	volatile uint32_t x300 = UINT32_MAX;

	t74 = ((x297<x298)<=(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	volatile int32_t x302 = INT32_MIN;
	static int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t75 = -5426782;

	t75 = ((x301<x302)<=(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	uint32_t x307 = 777131993U;
	static volatile int32_t t76 = 211;

	t76 = ((x305<x306)<=(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -3901927LL;
	uint16_t x310 = UINT16_MAX;
	static int16_t x311 = INT16_MIN;
	volatile int32_t x312 = 60;
	volatile int32_t t77 = 119;

	t77 = ((x309<x310)<=(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = INT64_MIN;
	uint16_t x315 = 3881U;
	int64_t x316 = -1LL;
	static volatile int32_t t78 = -801295071;

	t78 = ((x313<x314)<=(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = INT32_MIN;
	uint32_t x320 = 212U;
	int32_t t79 = -21746697;

	t79 = ((x317<x318)<=(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = 180794LL;
	uint64_t x322 = 471156154616LLU;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = -2;

	t80 = ((x321<x322)<=(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = 1;
	uint32_t x327 = 1619U;
	int8_t x328 = 0;
	int32_t t81 = 124;

	t81 = ((x325<x326)<=(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = 235;
	static int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	int32_t t82 = 468561;

	t82 = ((x329<x330)<=(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 2U;
	int8_t x335 = INT8_MIN;
	int32_t t83 = 495230473;

	t83 = ((x333<x334)<=(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -73;

	t84 = ((x337<x338)<=(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MIN;
	uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = INT16_MAX;

	t85 = ((x341<x342)<=(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MAX;
	static int16_t x346 = -22;
	static int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;

	t86 = ((x345<x346)<=(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x350 = 20;
	static int16_t x351 = -1;
	static int32_t x352 = INT32_MIN;
	static volatile int32_t t87 = 55057612;

	t87 = ((x349<x350)<=(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MIN;
	int64_t x356 = 314833922409140362LL;
	volatile int32_t t88 = -25;

	t88 = ((x353<x354)<=(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 10993172;

	t89 = ((x357<x358)<=(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 223U;
	int8_t x362 = INT8_MAX;
	int16_t x363 = -6954;
	int8_t x364 = 10;

	t90 = ((x361<x362)<=(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = -1;
	static uint64_t x367 = UINT64_MAX;
	volatile uint8_t x368 = 0U;
	static volatile int32_t t91 = -1462365;

	t91 = ((x365<x366)<=(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	uint32_t x370 = 1U;
	volatile uint8_t x371 = 5U;
	uint16_t x372 = 5U;
	int32_t t92 = 236;

	t92 = ((x369<x370)<=(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	static uint8_t x374 = 2U;
	static volatile int8_t x375 = INT8_MIN;
	uint64_t x376 = 6076051LLU;
	int32_t t93 = 0;

	t93 = ((x373<x374)<=(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	int32_t x379 = INT32_MAX;
	static volatile int32_t t94 = -193266852;

	t94 = ((x377<x378)<=(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	static uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MIN;
	static int32_t t95 = 259522657;

	t95 = ((x381<x382)<=(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = UINT8_MAX;
	volatile int8_t x386 = -3;
	uint32_t x387 = 110U;
	int32_t t96 = -13674;

	t96 = ((x385<x386)<=(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -2013182514LL;
	volatile int16_t x390 = INT16_MAX;
	int32_t t97 = -16675;

	t97 = ((x389<x390)<=(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x393 = 1U;
	uint64_t x394 = UINT64_MAX;
	static int64_t x395 = 7389169025647LL;
	int32_t t98 = 0;

	t98 = ((x393<x394)<=(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	static int8_t x398 = 53;
	int8_t x399 = -1;
	static int8_t x400 = -1;
	volatile int32_t t99 = -12144;

	t99 = ((x397<x398)<=(x399==x400));

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

