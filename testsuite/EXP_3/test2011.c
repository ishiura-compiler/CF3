#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 8U;
static uint64_t x5 = 47257780267204521LLU;
int64_t x6 = -53LL;
static int32_t x15 = -25;
int8_t x18 = 0;
int8_t x20 = 0;
int64_t x24 = -79055297869LL;
static uint16_t x26 = 153U;
int32_t t6 = -1224;
static int64_t x31 = -1LL;
volatile int32_t t7 = -1148131;
static int32_t x33 = 42412416;
int8_t x34 = 24;
volatile int64_t x38 = 25946466517LL;
volatile int32_t t12 = -849;
int16_t x53 = INT16_MIN;
uint64_t x54 = 1684LLU;
volatile int16_t x55 = INT16_MIN;
int64_t x62 = INT64_MAX;
int16_t x63 = INT16_MIN;
volatile int32_t t15 = -1208;
int16_t x72 = INT16_MIN;
uint32_t x80 = UINT32_MAX;
static volatile int32_t t20 = 11;
int8_t x90 = 32;
int32_t t22 = 617;
int32_t x94 = INT32_MIN;
static int16_t x95 = INT16_MAX;
int64_t x101 = INT64_MIN;
static volatile uint64_t x102 = 12143LLU;
uint16_t x107 = 1046U;
int8_t x109 = INT8_MIN;
volatile uint16_t x110 = 136U;
int64_t x112 = INT64_MIN;
int8_t x117 = 0;
int64_t x122 = INT64_MIN;
volatile uint8_t x127 = UINT8_MAX;
int32_t x131 = -237406;
uint32_t x139 = 1384125U;
volatile int32_t t34 = 2508;
volatile int32_t t35 = 14;
static uint64_t x149 = 6099204LLU;
volatile uint32_t x150 = UINT32_MAX;
uint16_t x153 = 7941U;
int32_t t38 = 3;
int8_t x159 = INT8_MAX;
static int8_t x165 = -1;
static int16_t x171 = INT16_MIN;
uint64_t x173 = UINT64_MAX;
int32_t t43 = -6168851;
static int32_t t46 = 22;
int16_t x195 = -1;
int32_t t49 = 71454168;
int64_t x202 = -9345406LL;
int32_t t51 = -1812658;
uint8_t x221 = 11U;
int16_t x225 = INT16_MIN;
int64_t x226 = INT64_MIN;
static uint32_t x229 = 6086094U;
int32_t x232 = INT32_MIN;
static uint16_t x234 = UINT16_MAX;
uint8_t x241 = 1U;
static int32_t x246 = INT32_MAX;
uint32_t x247 = 1131671U;
static uint32_t x248 = 41336U;
int16_t x256 = -79;
int16_t x259 = -14;
int32_t t64 = 1259;
int8_t x262 = -1;
uint16_t x267 = 8681U;
int32_t x273 = 240;
static int16_t x282 = 7;
static volatile uint8_t x283 = 52U;
int32_t t70 = -23269559;
static int32_t x296 = -24665830;
static int16_t x298 = INT16_MAX;
int32_t x302 = INT32_MIN;
uint32_t x304 = 1706375U;
volatile int32_t x314 = INT32_MIN;
volatile int32_t t78 = 1;
int64_t x318 = INT64_MAX;
int16_t x320 = INT16_MIN;
int16_t x321 = INT16_MIN;
volatile int64_t x322 = INT64_MAX;
int32_t t81 = -1223;
volatile int32_t t83 = 1;
int64_t x352 = 1824119LL;
uint32_t x356 = UINT32_MAX;
uint8_t x368 = UINT8_MAX;
static volatile int64_t x369 = -1LL;
static int16_t x374 = -17;
uint32_t x378 = UINT32_MAX;
int16_t x379 = INT16_MIN;
uint16_t x388 = 910U;
int8_t x393 = -1;
int32_t x399 = 11324;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	static volatile uint8_t x3 = 70U;
	int32_t t0 = -3466097;

	t0 = ((x1|x2)<(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = -5;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 1;

	t1 = ((x5|x6)<(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static volatile int64_t x10 = INT64_MAX;
	volatile int64_t x11 = INT64_MAX;
	int32_t x12 = 10833055;
	volatile int32_t t2 = 3469;

	t2 = ((x9|x10)<(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 10541;
	int32_t x14 = 178589100;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -60734518;

	t3 = ((x13|x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 104;
	volatile int8_t x19 = -14;
	int32_t t4 = 1;

	t4 = ((x17|x18)<(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 10403726388LLU;
	int64_t x22 = 1165848LL;
	static uint64_t x23 = 304972868900LLU;
	int32_t t5 = -20568;

	t5 = ((x21|x22)<(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = 306945056153616LL;
	int32_t x27 = INT32_MIN;
	volatile uint64_t x28 = 693383326534308755LLU;

	t6 = ((x25|x26)<(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	uint32_t x30 = 2310815U;
	static uint8_t x32 = 35U;

	t7 = ((x29|x30)<(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x35 = 1;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -94384593;

	t8 = ((x33|x34)<(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -535962533;
	static uint8_t x39 = 118U;
	uint64_t x40 = UINT64_MAX;
	int32_t t9 = 1256;

	t9 = ((x37|x38)<(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int8_t x42 = -1;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 3998U;
	volatile int32_t t10 = -113412;

	t10 = ((x41|x42)<(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = -1;
	volatile int8_t x46 = -1;
	int64_t x47 = INT64_MIN;
	static uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -16;

	t11 = ((x45|x46)<(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint64_t x50 = 11755346LLU;
	static int64_t x51 = INT64_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49|x50)<(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x56 = 8628;
	static int32_t t13 = -313;

	t13 = ((x53|x54)<(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 11769985U;
	uint32_t x58 = 6683628U;
	static int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -116217;

	t14 = ((x57|x58)<(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 24U;
	int8_t x64 = -7;

	t15 = ((x61|x62)<(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MAX;
	int64_t x67 = 200724LL;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -118319;

	t16 = ((x65|x66)<(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x70 = UINT16_MAX;
	uint64_t x71 = 20977426742902LLU;
	int32_t t17 = -6501382;

	t17 = ((x69|x70)<(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	volatile int8_t x75 = INT8_MAX;
	uint16_t x76 = 6965U;
	static int32_t t18 = 27596;

	t18 = ((x73|x74)<(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MIN;
	int32_t t19 = 61221830;

	t19 = ((x77|x78)<(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = -2483;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = -14;

	t20 = ((x81|x82)<(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	static int64_t x86 = INT64_MAX;
	volatile int32_t x87 = -1;
	volatile uint8_t x88 = UINT8_MAX;
	static int32_t t21 = -1;

	t21 = ((x85|x86)<(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	int8_t x91 = 5;
	static volatile int64_t x92 = -1LL;

	t22 = ((x89|x90)<(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int16_t x96 = -41;
	volatile int32_t t23 = -127975;

	t23 = ((x93|x94)<(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 47;
	static int64_t x98 = -1LL;
	volatile uint8_t x99 = 69U;
	int32_t x100 = 0;
	int32_t t24 = -1;

	t24 = ((x97|x98)<(x99|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x103 = 0U;
	uint16_t x104 = UINT16_MAX;
	static int32_t t25 = -978102;

	t25 = ((x101|x102)<(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int16_t x106 = INT16_MAX;
	static int64_t x108 = 148LL;
	volatile int32_t t26 = 495550158;

	t26 = ((x105|x106)<(x107|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x111 = UINT32_MAX;
	int32_t t27 = 6909;

	t27 = ((x109|x110)<(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = 238728349U;
	volatile uint16_t x115 = 3492U;
	int16_t x116 = 1;
	static int32_t t28 = -1039;

	t28 = ((x113|x114)<(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = 0;
	int8_t x119 = INT8_MIN;
	static int8_t x120 = INT8_MAX;
	static int32_t t29 = -200;

	t29 = ((x117|x118)<(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = INT8_MIN;
	volatile int64_t x123 = -1LL;
	int64_t x124 = INT64_MIN;
	int32_t t30 = -19628603;

	t30 = ((x121|x122)<(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = INT64_MIN;
	volatile int8_t x128 = -3;
	static volatile int32_t t31 = 29;

	t31 = ((x125|x126)<(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 12U;
	static int32_t x130 = 53311;
	int8_t x132 = -1;
	static volatile int32_t t32 = -55086251;

	t32 = ((x129|x130)<(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static int32_t x134 = 451874;
	uint64_t x135 = 17444220810LLU;
	uint64_t x136 = 3347373426351833677LLU;
	int32_t t33 = -1;

	t33 = ((x133|x134)<(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = -142097452LL;
	static int64_t x140 = INT64_MAX;

	t34 = ((x137|x138)<(x139|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	int8_t x143 = INT8_MIN;
	int64_t x144 = 2LL;

	t35 = ((x141|x142)<(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int64_t x146 = INT64_MIN;
	static volatile int16_t x147 = -1;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = 1;

	t36 = ((x145|x146)<(x147|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x151 = UINT32_MAX;
	volatile int64_t x152 = -1LL;
	int32_t t37 = -3;

	t37 = ((x149|x150)<(x151|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = -1;
	static uint32_t x155 = 133352U;
	uint32_t x156 = UINT32_MAX;

	t38 = ((x153|x154)<(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = -1;
	int64_t x160 = -1LL;
	int32_t t39 = -410;

	t39 = ((x157|x158)<(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	static volatile int8_t x163 = INT8_MAX;
	uint64_t x164 = 26438584645011LLU;
	int32_t t40 = 435576000;

	t40 = ((x161|x162)<(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = INT8_MIN;
	int32_t x167 = -1;
	static uint16_t x168 = 496U;
	static volatile int32_t t41 = -55;

	t41 = ((x165|x166)<(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = 0;
	static volatile int64_t x172 = -1LL;
	volatile int32_t t42 = 141;

	t42 = ((x169|x170)<(x171|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = INT8_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	static uint8_t x176 = UINT8_MAX;

	t43 = ((x173|x174)<(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = 1;
	int16_t x178 = INT16_MIN;
	static int32_t x179 = INT32_MAX;
	static int64_t x180 = 0LL;
	volatile int32_t t44 = -781846368;

	t44 = ((x177|x178)<(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = -1;
	volatile int64_t x183 = -1LL;
	int16_t x184 = 1827;
	static volatile int32_t t45 = 184532;

	t45 = ((x181|x182)<(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	volatile int32_t x186 = 3477;
	int32_t x187 = 1;
	uint64_t x188 = UINT64_MAX;

	t46 = ((x185|x186)<(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	uint64_t x191 = 1521614LLU;
	int16_t x192 = -7160;
	int32_t t47 = 1;

	t47 = ((x189|x190)<(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = 1U;
	uint32_t x196 = UINT32_MAX;
	static int32_t t48 = -69;

	t48 = ((x193|x194)<(x195|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	static int32_t x198 = INT32_MIN;
	int64_t x199 = -6734LL;
	int64_t x200 = INT64_MIN;

	t49 = ((x197|x198)<(x199|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	volatile int16_t x203 = INT16_MIN;
	volatile int64_t x204 = -1LL;
	volatile int32_t t50 = 633;

	t50 = ((x201|x202)<(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MIN;
	static int8_t x207 = -1;
	int16_t x208 = -1;

	t51 = ((x205|x206)<(x207|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = -1;
	int64_t x210 = 2641430LL;
	static volatile uint32_t x211 = 1U;
	uint8_t x212 = 1U;
	int32_t t52 = -91;

	t52 = ((x209|x210)<(x211|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint64_t x214 = 637058LLU;
	int16_t x215 = INT16_MAX;
	int16_t x216 = -1;
	int32_t t53 = 1784532;

	t53 = ((x213|x214)<(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = 2039047;
	int32_t x218 = -1;
	int16_t x219 = INT16_MIN;
	static int8_t x220 = INT8_MAX;
	volatile int32_t t54 = 12819648;

	t54 = ((x217|x218)<(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 2U;
	int64_t x223 = INT64_MIN;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -1;

	t55 = ((x221|x222)<(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x227 = 5021961U;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t56 = -26097745;

	t56 = ((x225|x226)<(x227|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x230 = INT16_MAX;
	static int16_t x231 = INT16_MAX;
	int32_t t57 = -144891428;

	t57 = ((x229|x230)<(x231|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 14U;
	volatile uint64_t x235 = 2312229558392202490LLU;
	static volatile int32_t x236 = 8523868;
	int32_t t58 = 14848;

	t58 = ((x233|x234)<(x235|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 28U;
	int64_t x238 = INT64_MIN;
	static uint32_t x239 = 56490U;
	int32_t x240 = 32;
	static int32_t t59 = 45163;

	t59 = ((x237|x238)<(x239|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x242 = -1;
	uint64_t x243 = 1995LLU;
	int64_t x244 = -2886958801808LL;
	volatile int32_t t60 = -8;

	t60 = ((x241|x242)<(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile int32_t t61 = -2892;

	t61 = ((x245|x246)<(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 12533U;
	int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MIN;
	uint16_t x252 = 1U;
	volatile int32_t t62 = -2;

	t62 = ((x249|x250)<(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	static uint16_t x255 = 607U;
	static volatile int32_t t63 = -12703;

	t63 = ((x253|x254)<(x255|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 44642U;
	int8_t x258 = INT8_MAX;
	static int64_t x260 = INT64_MAX;

	t64 = ((x257|x258)<(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static int32_t x263 = 345;
	int8_t x264 = 1;
	int32_t t65 = -3378188;

	t65 = ((x261|x262)<(x263|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	int64_t x266 = -7559359306658LL;
	int64_t x268 = -1LL;
	int32_t t66 = 342117262;

	t66 = ((x265|x266)<(x267|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	static int8_t x271 = INT8_MAX;
	volatile uint32_t x272 = 188421U;
	volatile int32_t t67 = -23446;

	t67 = ((x269|x270)<(x271|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = 1;
	volatile int32_t x275 = -541016;
	uint16_t x276 = 1422U;
	volatile int32_t t68 = -1540;

	t68 = ((x273|x274)<(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = INT32_MIN;
	int16_t x278 = -1;
	int32_t x279 = -1;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -278074;

	t69 = ((x277|x278)<(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 2U;
	static int8_t x284 = 1;

	t70 = ((x281|x282)<(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x285 = UINT32_MAX;
	int32_t x286 = 587778783;
	static int16_t x287 = -115;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = 66986;

	t71 = ((x285|x286)<(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = 475;
	int8_t x290 = INT8_MIN;
	static int32_t x291 = -273;
	int64_t x292 = -1LL;
	int32_t t72 = -2873;

	t72 = ((x289|x290)<(x291|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -781;
	int32_t x294 = INT32_MAX;
	int8_t x295 = INT8_MAX;
	volatile int32_t t73 = 5;

	t73 = ((x293|x294)<(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	volatile int32_t x299 = INT32_MAX;
	int32_t x300 = 24;
	int32_t t74 = -23935748;

	t74 = ((x297|x298)<(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 82U;
	int16_t x303 = INT16_MIN;
	volatile int32_t t75 = 24583095;

	t75 = ((x301|x302)<(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 30974090345527LLU;
	int64_t x307 = -1LL;
	volatile uint64_t x308 = 14724818584LLU;
	int32_t t76 = -289;

	t76 = ((x305|x306)<(x307|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 462U;
	int8_t x310 = INT8_MAX;
	static int16_t x311 = -3463;
	static volatile int16_t x312 = INT16_MIN;
	int32_t t77 = -25005377;

	t77 = ((x309|x310)<(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	volatile int8_t x315 = INT8_MIN;
	static int8_t x316 = INT8_MIN;

	t78 = ((x313|x314)<(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x319 = INT32_MIN;
	int32_t t79 = -218;

	t79 = ((x317|x318)<(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x323 = 40;
	static int64_t x324 = INT64_MAX;
	int32_t t80 = -350;

	t80 = ((x321|x322)<(x323|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 0U;
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	int64_t x328 = INT64_MIN;

	t81 = ((x325|x326)<(x327|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MAX;
	uint8_t x332 = 3U;
	int32_t t82 = -60710;

	t82 = ((x329|x330)<(x331|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -249;
	static volatile int8_t x334 = INT8_MAX;
	volatile int16_t x335 = 98;
	int32_t x336 = INT32_MAX;

	t83 = ((x333|x334)<(x335|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int64_t x338 = 25498563LL;
	int64_t x339 = -315484LL;
	int16_t x340 = INT16_MIN;
	int32_t t84 = -1820;

	t84 = ((x337|x338)<(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 42U;
	volatile int64_t x342 = -1LL;
	volatile int32_t x343 = INT32_MIN;
	static int32_t x344 = INT32_MAX;
	int32_t t85 = -25040;

	t85 = ((x341|x342)<(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 26U;
	uint32_t x346 = 10089992U;
	uint8_t x347 = 1U;
	volatile uint32_t x348 = 82U;
	int32_t t86 = -2417;

	t86 = ((x345|x346)<(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = 9;
	int64_t x351 = INT64_MIN;
	static int32_t t87 = -72807;

	t87 = ((x349|x350)<(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 526414828125329LLU;
	int32_t x354 = INT32_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	volatile int32_t t88 = 30032;

	t88 = ((x353|x354)<(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -14;
	static uint32_t x358 = 16819655U;
	uint32_t x359 = 1U;
	static int32_t x360 = INT32_MAX;
	volatile int32_t t89 = -2701534;

	t89 = ((x357|x358)<(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	volatile uint32_t x362 = 89902442U;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 372;

	t90 = ((x361|x362)<(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 52U;
	volatile int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MIN;
	int32_t t91 = -34815337;

	t91 = ((x365|x366)<(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -2235;

	t92 = ((x369|x370)<(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -314;
	uint64_t x375 = 1925792301LLU;
	static volatile int32_t x376 = -75;
	volatile int32_t t93 = 3264445;

	t93 = ((x373|x374)<(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = 441646718;

	t94 = ((x377|x378)<(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 98U;
	int32_t x382 = INT32_MIN;
	static uint8_t x383 = UINT8_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -232040045;

	t95 = ((x381|x382)<(x383|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = -26236LL;
	volatile int32_t t96 = 500185593;

	t96 = ((x385|x386)<(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	int16_t x392 = -816;
	volatile int32_t t97 = 159;

	t97 = ((x389|x390)<(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -1;
	int16_t x395 = -1;
	int64_t x396 = 308523527542466LL;
	int32_t t98 = -2082716;

	t98 = ((x393|x394)<(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1812503526LL;
	int32_t x398 = INT32_MIN;
	uint32_t x400 = 1U;
	int32_t t99 = 58486856;

	t99 = ((x397|x398)<(x399|x400));

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

