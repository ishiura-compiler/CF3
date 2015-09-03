#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
int32_t t0 = -6;
int64_t x6 = INT64_MAX;
int32_t t1 = 46183520;
int32_t x15 = INT32_MIN;
int32_t x17 = 0;
volatile int8_t x22 = INT8_MAX;
int32_t x23 = INT32_MIN;
uint8_t x25 = 2U;
int16_t x26 = 89;
static int8_t x29 = INT8_MIN;
uint64_t x30 = 2232772361206125676LLU;
int8_t x35 = 1;
static volatile int32_t t8 = 24;
int8_t x41 = INT8_MIN;
int64_t x44 = -1LL;
static int32_t t9 = -1;
uint8_t x53 = 43U;
int8_t x54 = INT8_MIN;
volatile int16_t x62 = INT16_MIN;
uint32_t x79 = 5U;
int32_t x80 = INT32_MIN;
volatile int32_t t19 = -383416667;
uint8_t x86 = 1U;
int16_t x87 = -1;
int32_t t21 = 839282;
volatile int16_t x98 = INT16_MIN;
int32_t t23 = 118662;
static int16_t x104 = 1144;
volatile int32_t t24 = -31258;
uint64_t x105 = UINT64_MAX;
volatile uint64_t x107 = 1986901LLU;
static volatile uint8_t x112 = UINT8_MAX;
int8_t x116 = -4;
int16_t x121 = INT16_MIN;
int32_t x123 = INT32_MIN;
volatile int32_t t28 = -1415711;
uint32_t x131 = 125639U;
uint8_t x133 = 20U;
static int32_t t30 = -504;
int16_t x143 = -1;
uint64_t x144 = UINT64_MAX;
volatile int16_t x146 = INT16_MIN;
int32_t t32 = 3;
int32_t x151 = INT32_MIN;
uint8_t x153 = UINT8_MAX;
int64_t x160 = -1LL;
int32_t x165 = -555;
static uint8_t x169 = 62U;
volatile int64_t x176 = -565248877176LL;
int32_t x179 = INT32_MIN;
volatile int64_t x180 = INT64_MIN;
int32_t t40 = 2;
int32_t x184 = INT32_MIN;
int32_t t42 = 60187109;
int64_t x195 = INT64_MIN;
volatile int32_t t44 = 1306;
int16_t x198 = -1;
volatile int64_t x199 = 1969064435608LL;
volatile int32_t x200 = INT32_MAX;
int32_t x203 = INT32_MAX;
static volatile int32_t t48 = -94695486;
static int32_t t50 = 218641;
uint16_t x229 = UINT16_MAX;
volatile uint32_t x230 = 114866U;
uint8_t x235 = 12U;
int32_t t57 = -452165744;
int8_t x262 = INT8_MAX;
int64_t x267 = INT64_MIN;
int8_t x284 = -1;
int16_t x285 = 746;
uint8_t x286 = UINT8_MAX;
int32_t t63 = -10961;
volatile uint64_t x294 = UINT64_MAX;
volatile int32_t t65 = -31617149;
uint16_t x299 = 32322U;
volatile uint32_t x304 = 48308885U;
static int32_t t67 = 8330492;
int16_t x306 = 904;
int16_t x310 = INT16_MIN;
uint32_t x311 = UINT32_MAX;
static volatile int32_t t70 = -22911235;
volatile int32_t x322 = 693082;
volatile int32_t t72 = -3404513;
volatile int32_t x325 = INT32_MIN;
int16_t x331 = -1;
int64_t x333 = -1LL;
volatile int32_t t77 = -183369209;
int8_t x345 = 31;
static uint32_t x359 = 32U;
uint32_t x360 = 2U;
int8_t x373 = -2;
int16_t x374 = INT16_MIN;
int64_t x378 = INT64_MIN;
static volatile int32_t t86 = 4614;
int32_t x382 = INT32_MAX;
static int64_t x384 = INT64_MIN;
int16_t x389 = 198;
volatile uint8_t x395 = 10U;
int16_t x400 = 24;
int32_t x403 = -1;
int32_t x404 = INT32_MAX;
int32_t x408 = 7;
static int32_t t95 = -11;
int32_t x427 = INT32_MAX;
volatile int32_t x432 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint8_t x2 = 1U;
	int64_t x4 = INT64_MAX;

	t0 = ((x1+x2)<=(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MAX;

	t1 = ((x5+x6)<=(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = UINT32_MAX;
	int16_t x16 = -1;
	int32_t t2 = -425;

	t2 = ((x13+x14)<=(x15|x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t3 = 5896334;

	t3 = ((x17+x18)<=(x19|x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint32_t x24 = 503U;
	int32_t t4 = 6;

	t4 = ((x21+x22)<=(x23|x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = INT64_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t5 = 1550;

	t5 = ((x25+x26)<=(x27|x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x31 = INT16_MAX;
	uint64_t x32 = UINT64_MAX;
	int32_t t6 = -19;

	t6 = ((x29+x30)<=(x31|x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	volatile int16_t x34 = -1;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t7 = 29;

	t7 = ((x33+x34)<=(x35|x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	volatile int8_t x39 = INT8_MIN;
	uint16_t x40 = UINT16_MAX;

	t8 = ((x37+x38)<=(x39|x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x42 = -24462;
	uint8_t x43 = 24U;

	t9 = ((x41+x42)<=(x43|x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -400LL;
	int8_t x46 = INT8_MIN;
	uint32_t x47 = 370226U;
	static int8_t x48 = 47;
	volatile int32_t t10 = 102391;

	t10 = ((x45+x46)<=(x47|x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = INT64_MIN;
	int32_t t11 = -68445199;

	t11 = ((x49+x50)<=(x51|x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x55 = INT16_MIN;
	static uint8_t x56 = 11U;
	static int32_t t12 = -13376807;

	t12 = ((x53+x54)<=(x55|x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = UINT32_MAX;
	volatile int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t13 = -197518;

	t13 = ((x57+x58)<=(x59|x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 5;
	static int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t14 = -1197;

	t14 = ((x61+x62)<=(x63|x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = 488531LL;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 4328749266LLU;
	volatile int32_t t15 = 85302094;

	t15 = ((x65+x66)<=(x67|x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -207507136;
	static uint32_t x70 = 22589708U;
	uint64_t x71 = 8452551372153580LLU;
	int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -31770679;

	t16 = ((x69+x70)<=(x71|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 387U;
	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MIN;
	int64_t x76 = 2350019120183607167LL;
	volatile int32_t t17 = -15328710;

	t17 = ((x73+x74)<=(x75|x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = 884;
	int32_t t18 = 964533621;

	t18 = ((x77+x78)<=(x79|x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MIN;
	uint32_t x83 = 16222U;
	uint16_t x84 = 5U;

	t19 = ((x81+x82)<=(x83|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int64_t x88 = -1LL;
	int32_t t20 = 1;

	t20 = ((x85+x86)<=(x87|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = 3903U;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MIN;
	static volatile int64_t x92 = INT64_MIN;

	t21 = ((x89+x90)<=(x91|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 2;
	int16_t x94 = 5800;
	uint32_t x95 = UINT32_MAX;
	uint32_t x96 = 1270975982U;
	int32_t t22 = 0;

	t22 = ((x93+x94)<=(x95|x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 4U;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -247609271LL;

	t23 = ((x97+x98)<=(x99|x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -1LL;
	volatile int16_t x102 = -1;
	static int32_t x103 = INT32_MAX;

	t24 = ((x101+x102)<=(x103|x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x106 = INT32_MIN;
	uint8_t x108 = 18U;
	volatile int32_t t25 = 29729;

	t25 = ((x105+x106)<=(x107|x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 1393LLU;
	int8_t x110 = INT8_MIN;
	static int16_t x111 = 3662;
	volatile int32_t t26 = 640;

	t26 = ((x109+x110)<=(x111|x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = 17638331706767600LLU;
	int64_t x115 = INT64_MIN;
	volatile int32_t t27 = 115550;

	t27 = ((x113+x114)<=(x115|x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x122 = INT32_MAX;
	int16_t x124 = INT16_MIN;

	t28 = ((x121+x122)<=(x123|x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 34206984078224LLU;
	uint16_t x132 = UINT16_MAX;
	int32_t t29 = 2;

	t29 = ((x129+x130)<=(x131|x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x134 = -1;
	int8_t x135 = 4;
	volatile int32_t x136 = INT32_MIN;

	t30 = ((x133+x134)<=(x135|x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = -1LL;
	volatile int32_t t31 = -184655927;

	t31 = ((x141+x142)<=(x143|x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 500376;
	static uint32_t x147 = 1118914U;
	static volatile int32_t x148 = INT32_MAX;

	t32 = ((x145+x146)<=(x147|x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = -629896351980861530LL;
	int16_t x150 = INT16_MAX;
	uint16_t x152 = 16685U;
	volatile int32_t t33 = -485640;

	t33 = ((x149+x150)<=(x151|x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x154 = UINT32_MAX;
	volatile uint8_t x155 = 3U;
	static int16_t x156 = INT16_MAX;
	static volatile int32_t t34 = -13;

	t34 = ((x153+x154)<=(x155|x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = 44LL;
	int8_t x159 = INT8_MIN;
	int32_t t35 = 1;

	t35 = ((x157+x158)<=(x159|x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1301246477903470523LL;
	volatile int8_t x162 = INT8_MIN;
	uint64_t x163 = 17544736426941LLU;
	int8_t x164 = -1;
	volatile int32_t t36 = 637237366;

	t36 = ((x161+x162)<=(x163|x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = UINT64_MAX;
	uint8_t x168 = 0U;
	volatile int32_t t37 = -3;

	t37 = ((x165+x166)<=(x167|x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x170 = 6613375095LL;
	static uint64_t x171 = 2LLU;
	int16_t x172 = INT16_MAX;
	static volatile int32_t t38 = -68;

	t38 = ((x169+x170)<=(x171|x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x174 = -169897904633LL;
	static uint8_t x175 = UINT8_MAX;
	volatile int32_t t39 = 32;

	t39 = ((x173+x174)<=(x175|x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x177 = 27LLU;
	static volatile int16_t x178 = INT16_MAX;

	t40 = ((x177+x178)<=(x179|x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 13755U;
	uint32_t x182 = 449124571U;
	uint64_t x183 = 49452520560747023LLU;
	static int32_t t41 = 5;

	t41 = ((x181+x182)<=(x183|x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = -1;
	int64_t x188 = -1LL;

	t42 = ((x185+x186)<=(x187|x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -553;
	int16_t x190 = INT16_MAX;
	int8_t x191 = -14;
	int8_t x192 = -7;
	int32_t t43 = -312285;

	t43 = ((x189+x190)<=(x191|x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int8_t x194 = -1;
	volatile int64_t x196 = -1LL;

	t44 = ((x193+x194)<=(x195|x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = -1;
	volatile int32_t t45 = 52588;

	t45 = ((x197+x198)<=(x199|x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int8_t x202 = INT8_MIN;
	static int16_t x204 = -1;
	volatile int32_t t46 = -1449159;

	t46 = ((x201+x202)<=(x203|x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = -1;
	static int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t47 = -9070741;

	t47 = ((x209+x210)<=(x211|x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MAX;
	static uint64_t x214 = UINT64_MAX;
	static int32_t x215 = -1;
	volatile int16_t x216 = 1;

	t48 = ((x213+x214)<=(x215|x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = UINT32_MAX;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	static volatile uint32_t x224 = UINT32_MAX;
	int32_t t49 = -419615;

	t49 = ((x221+x222)<=(x223|x224));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = 0LL;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -2;

	t50 = ((x225+x226)<=(x227|x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x231 = -1;
	int8_t x232 = INT8_MAX;
	static int32_t t51 = -382603;

	t51 = ((x229+x230)<=(x231|x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 10U;
	static int32_t x234 = INT32_MIN;
	static int8_t x236 = INT8_MIN;
	int32_t t52 = 57;

	t52 = ((x233+x234)<=(x235|x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x237 = 159U;
	int32_t x238 = 112630737;
	uint32_t x239 = 6162U;
	int64_t x240 = INT64_MIN;
	int32_t t53 = 167795;

	t53 = ((x237+x238)<=(x239|x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MAX;
	static volatile uint8_t x242 = 88U;
	int16_t x243 = -3;
	int64_t x244 = INT64_MIN;
	volatile int32_t t54 = -9084429;

	t54 = ((x241+x242)<=(x243|x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x245 = 4U;
	int32_t x246 = -1;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	int32_t t55 = 1;

	t55 = ((x245+x246)<=(x247|x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = -1LL;
	static int8_t x250 = INT8_MIN;
	volatile int8_t x251 = 19;
	static volatile int16_t x252 = 7484;
	volatile int32_t t56 = 100206264;

	t56 = ((x249+x250)<=(x251|x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -1LL;
	static volatile uint64_t x256 = 775283889LLU;

	t57 = ((x253+x254)<=(x255|x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x257 = INT8_MAX;
	int64_t x258 = INT64_MIN;
	static int64_t x259 = 12322141679LL;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t58 = 4208729;

	t58 = ((x257+x258)<=(x259|x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = INT32_MIN;
	uint8_t x263 = 1U;
	static int64_t x264 = -1LL;
	volatile int32_t t59 = -113286;

	t59 = ((x261+x262)<=(x263|x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = 2LL;
	int16_t x268 = INT16_MAX;
	volatile int32_t t60 = -5152;

	t60 = ((x265+x266)<=(x267|x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x269 = 18262U;
	volatile uint32_t x270 = 2U;
	volatile int64_t x271 = -1194374LL;
	static int64_t x272 = 497274065LL;
	int32_t t61 = -22206;

	t61 = ((x269+x270)<=(x271|x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = 235250629290692LL;
	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t t62 = 2593;

	t62 = ((x281+x282)<=(x283|x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 38U;

	t63 = ((x285+x286)<=(x287|x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 113797728046576397LLU;
	int16_t x290 = INT16_MIN;
	volatile int32_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	int32_t t64 = -3735;

	t64 = ((x289+x290)<=(x291|x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x295 = 9065717LLU;
	int8_t x296 = -1;

	t65 = ((x293+x294)<=(x295|x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x297 = INT8_MIN;
	uint8_t x298 = UINT8_MAX;
	uint32_t x300 = 1983138002U;
	static int32_t t66 = 1317;

	t66 = ((x297+x298)<=(x299|x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = 56134999;
	uint64_t x302 = 5494517970669674968LLU;
	int8_t x303 = -1;

	t67 = ((x301+x302)<=(x303|x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 7969U;
	volatile int16_t x307 = -1;
	static uint32_t x308 = UINT32_MAX;
	int32_t t68 = 4;

	t68 = ((x305+x306)<=(x307|x308));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x309 = 3740255159867804LLU;
	uint32_t x312 = 339U;
	volatile int32_t t69 = 146;

	t69 = ((x309+x310)<=(x311|x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MAX;
	static int8_t x314 = INT8_MIN;
	static uint16_t x315 = 2190U;
	volatile int8_t x316 = INT8_MIN;

	t70 = ((x313+x314)<=(x315|x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int64_t x318 = INT64_MIN;
	int16_t x319 = -1;
	static volatile int16_t x320 = INT16_MAX;
	int32_t t71 = 49667;

	t71 = ((x317+x318)<=(x319|x320));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x323 = 52U;
	int16_t x324 = INT16_MAX;

	t72 = ((x321+x322)<=(x323|x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x326 = 374636LLU;
	static int64_t x327 = 2LL;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t73 = 1443271;

	t73 = ((x325+x326)<=(x327|x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x329 = UINT8_MAX;
	static uint64_t x330 = UINT64_MAX;
	int8_t x332 = INT8_MAX;
	int32_t t74 = -1099553;

	t74 = ((x329+x330)<=(x331|x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x334 = INT8_MAX;
	uint8_t x335 = UINT8_MAX;
	static uint16_t x336 = 1370U;
	int32_t t75 = 10661;

	t75 = ((x333+x334)<=(x335|x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = UINT64_MAX;
	static int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	int32_t t76 = -566937;

	t76 = ((x337+x338)<=(x339|x340));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = UINT32_MAX;
	uint32_t x342 = 5214U;
	int64_t x343 = INT64_MIN;
	volatile uint32_t x344 = 41U;

	t77 = ((x341+x342)<=(x343|x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x346 = -3;
	uint16_t x347 = 29U;
	static int8_t x348 = -1;
	volatile int32_t t78 = -2;

	t78 = ((x345+x346)<=(x347|x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x349 = INT32_MAX;
	uint32_t x350 = 13438739U;
	uint32_t x351 = 1045063070U;
	static int8_t x352 = -6;
	static int32_t t79 = 36932498;

	t79 = ((x349+x350)<=(x351|x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x353 = -1;
	int16_t x354 = -4282;
	int64_t x355 = -2117382574LL;
	volatile uint8_t x356 = UINT8_MAX;
	static int32_t t80 = 0;

	t80 = ((x353+x354)<=(x355|x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x358 = 3088544LL;
	volatile int32_t t81 = 152;

	t81 = ((x357+x358)<=(x359|x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x361 = UINT32_MAX;
	static uint32_t x362 = 138647714U;
	uint32_t x363 = 2611568U;
	int8_t x364 = -12;
	int32_t t82 = 7334098;

	t82 = ((x361+x362)<=(x363|x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 7U;
	uint32_t x366 = UINT32_MAX;
	static int32_t x367 = -1;
	uint8_t x368 = 2U;
	static int32_t t83 = 31;

	t83 = ((x365+x366)<=(x367|x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = -25276;
	volatile uint16_t x370 = 466U;
	static int8_t x371 = -1;
	int16_t x372 = 160;
	volatile int32_t t84 = -241441;

	t84 = ((x369+x370)<=(x371|x372));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x375 = 4039U;
	int32_t x376 = INT32_MAX;
	int32_t t85 = 357;

	t85 = ((x373+x374)<=(x375|x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = 1;
	volatile int8_t x379 = 5;
	int16_t x380 = INT16_MIN;

	t86 = ((x377+x378)<=(x379|x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	volatile int8_t x383 = -6;
	int32_t t87 = -13994;

	t87 = ((x381+x382)<=(x383|x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = INT32_MIN;
	static volatile uint32_t x386 = 4665137U;
	static volatile int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t88 = 220404;

	t88 = ((x385+x386)<=(x387|x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x390 = -197LL;
	volatile uint32_t x391 = 1108U;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t89 = -108476911;

	t89 = ((x389+x390)<=(x391|x392));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = 638882687824480LLU;
	uint64_t x394 = 84154838522119LLU;
	int64_t x396 = INT64_MAX;
	volatile int32_t t90 = 6207622;

	t90 = ((x393+x394)<=(x395|x396));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = INT8_MAX;
	volatile uint8_t x398 = 61U;
	uint64_t x399 = 0LLU;
	int32_t t91 = -7229;

	t91 = ((x397+x398)<=(x399|x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x401 = -1;
	volatile int16_t x402 = 5;
	static volatile int32_t t92 = 243594862;

	t92 = ((x401+x402)<=(x403|x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x405 = 336U;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MIN;
	static int32_t t93 = -44910;

	t93 = ((x405+x406)<=(x407|x408));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MAX;
	uint64_t x410 = UINT64_MAX;
	volatile int16_t x411 = INT16_MIN;
	uint32_t x412 = 74938624U;
	volatile int32_t t94 = 2554;

	t94 = ((x409+x410)<=(x411|x412));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -1;
	int32_t x414 = -1;
	volatile uint16_t x415 = 36U;
	uint16_t x416 = 28826U;

	t95 = ((x413+x414)<=(x415|x416));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = -1;
	static int8_t x419 = -52;
	volatile int32_t x420 = -9809950;
	static volatile int32_t t96 = 199;

	t96 = ((x417+x418)<=(x419|x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = 0;
	static uint64_t x422 = UINT64_MAX;
	int64_t x423 = 930961619690LL;
	static uint16_t x424 = 2U;
	volatile int32_t t97 = -812522780;

	t97 = ((x421+x422)<=(x423|x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x425 = INT8_MIN;
	uint64_t x426 = 157LLU;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t98 = 103941;

	t98 = ((x425+x426)<=(x427|x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = 0U;
	static uint32_t x430 = 6691U;
	volatile int32_t x431 = -1;
	volatile int32_t t99 = 238;

	t99 = ((x429+x430)<=(x431|x432));

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

