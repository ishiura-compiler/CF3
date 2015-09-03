#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 1;
int32_t x6 = -1;
int32_t t1 = 1127;
int32_t t4 = -51121796;
volatile int32_t t6 = 1040292372;
static int8_t x35 = -14;
volatile int32_t t8 = -358398942;
int32_t t9 = -1497053;
volatile int32_t t10 = -781132987;
static volatile int32_t t12 = 504684056;
int32_t x60 = -1;
int8_t x64 = INT8_MIN;
volatile uint8_t x66 = UINT8_MAX;
int16_t x71 = INT16_MIN;
uint16_t x73 = UINT16_MAX;
static uint64_t x75 = 2096844LLU;
int8_t x78 = INT8_MIN;
int32_t t18 = 12;
uint32_t x81 = 802474072U;
static int32_t x84 = 10;
int32_t t19 = 50006628;
uint64_t x85 = 19003335LLU;
int64_t x96 = 621516LL;
int32_t t22 = -152206682;
uint16_t x98 = UINT16_MAX;
int32_t x100 = INT32_MAX;
int8_t x108 = 1;
int64_t x109 = INT64_MAX;
volatile int32_t t25 = -118059108;
uint64_t x113 = 3041363665LLU;
uint16_t x114 = UINT16_MAX;
int32_t x117 = -14;
int32_t x122 = 28520152;
uint16_t x124 = 0U;
int64_t x129 = -1LL;
int8_t x134 = -1;
int32_t x138 = -1;
int32_t x144 = 1;
uint64_t x146 = 11260454643778LLU;
int32_t x148 = INT32_MIN;
int32_t t36 = 534001;
int64_t x158 = -1LL;
static int8_t x161 = INT8_MIN;
volatile int16_t x166 = INT16_MIN;
int8_t x176 = 7;
int64_t x188 = INT64_MIN;
int8_t x189 = -1;
int16_t x193 = INT16_MIN;
volatile int8_t x197 = INT8_MIN;
int8_t x219 = -4;
int16_t x229 = INT16_MIN;
volatile int32_t t55 = 5;
volatile uint16_t x243 = UINT16_MAX;
uint8_t x250 = 3U;
volatile int8_t x253 = -1;
static uint64_t x257 = 367728760625653LLU;
int32_t x261 = INT32_MIN;
int32_t t62 = 563;
int8_t x273 = INT8_MIN;
int32_t x278 = INT32_MIN;
static volatile int32_t x286 = INT32_MIN;
static uint32_t x291 = 1U;
volatile uint64_t x294 = 12488LLU;
int8_t x303 = -1;
volatile int32_t t72 = -37818580;
int32_t x309 = 781;
int32_t x312 = INT32_MAX;
int16_t x313 = 1571;
int64_t x315 = INT64_MAX;
uint32_t x318 = UINT32_MAX;
volatile int32_t x321 = INT32_MAX;
uint16_t x324 = UINT16_MAX;
static uint16_t x327 = UINT16_MAX;
volatile int32_t t79 = 3234;
static int64_t x334 = -1LL;
volatile int32_t x339 = INT32_MIN;
static int16_t x343 = INT16_MAX;
int16_t x344 = -1;
volatile int8_t x345 = INT8_MAX;
int8_t x349 = INT8_MAX;
static int64_t x354 = 9538LL;
int16_t x355 = -1;
int32_t t86 = 81;
uint16_t x362 = 114U;
volatile int32_t t87 = -121748;
static int16_t x365 = 0;
static volatile int64_t x371 = INT64_MIN;
volatile uint64_t x375 = UINT64_MAX;
int64_t x381 = 2138495496826308LL;
int32_t t95 = 36724553;
int16_t x405 = INT16_MIN;
static int32_t t98 = -24;
int8_t x409 = INT8_MIN;


void f0(void) {
	volatile uint8_t x1 = 4U;
	int16_t x2 = INT16_MAX;
	volatile uint32_t x3 = 207U;
	int32_t t0 = -351;

	t0 = ((x1/x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x7 = INT8_MIN;
	volatile uint16_t x8 = 21U;

	t1 = ((x5/x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 846458463;
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	static int64_t x12 = INT64_MIN;
	static int32_t t2 = 203258;

	t2 = ((x9/x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	static volatile int32_t x14 = INT32_MIN;
	uint32_t x15 = 64U;
	static int64_t x16 = INT64_MAX;
	int32_t t3 = -45095262;

	t3 = ((x13/x14)<(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static volatile int8_t x18 = 1;
	int8_t x19 = -1;
	uint32_t x20 = 42U;

	t4 = ((x17/x18)<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	int8_t x26 = 18;
	static int8_t x27 = 12;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t5 = -37380990;

	t5 = ((x25/x26)<(x27<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MAX;
	uint64_t x31 = 15124442480591064LLU;
	uint8_t x32 = 5U;

	t6 = ((x29/x30)<(x31<=x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 2U;
	volatile int16_t x34 = -1;
	static volatile int16_t x36 = -1;
	volatile int32_t t7 = 3464059;

	t7 = ((x33/x34)<(x35<=x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 13754U;
	static uint64_t x38 = UINT64_MAX;
	int32_t x39 = 150;
	uint32_t x40 = 753490407U;

	t8 = ((x37/x38)<(x39<=x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MIN;
	static int8_t x43 = -1;
	int8_t x44 = 0;

	t9 = ((x41/x42)<(x43<=x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	volatile uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MIN;
	uint64_t x48 = 2601690718841751915LLU;

	t10 = ((x45/x46)<(x47<=x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 105U;
	uint32_t x50 = 585353977U;
	uint8_t x51 = 39U;
	int32_t x52 = INT32_MIN;
	int32_t t11 = -793;

	t11 = ((x49/x50)<(x51<=x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = UINT16_MAX;
	int64_t x54 = -1LL;
	uint32_t x55 = 3994U;
	static int32_t x56 = -1;

	t12 = ((x53/x54)<(x55<=x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	uint32_t x58 = 507U;
	int16_t x59 = INT16_MIN;
	volatile int32_t t13 = -34100712;

	t13 = ((x57/x58)<(x59<=x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 58958177LLU;
	static int32_t x62 = -1;
	int64_t x63 = 51789075930809LL;
	volatile int32_t t14 = 3898;

	t14 = ((x61/x62)<(x63<=x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x65 = 84459914102LL;
	int16_t x67 = INT16_MIN;
	volatile uint16_t x68 = 1U;
	int32_t t15 = 580928;

	t15 = ((x65/x66)<(x67<=x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = 12U;
	uint64_t x70 = 40258094LLU;
	int16_t x72 = -1;
	int32_t t16 = 416495;

	t16 = ((x69/x70)<(x71<=x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x74 = 603;
	uint32_t x76 = UINT32_MAX;
	static int32_t t17 = -85487897;

	t17 = ((x73/x74)<(x75<=x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x77 = INT32_MIN;
	static int8_t x79 = -1;
	volatile int8_t x80 = INT8_MIN;

	t18 = ((x77/x78)<(x79<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x82 = INT32_MAX;
	static uint8_t x83 = UINT8_MAX;

	t19 = ((x81/x82)<(x83<=x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	volatile int8_t x87 = -1;
	volatile uint64_t x88 = 249553LLU;
	volatile int32_t t20 = -761;

	t20 = ((x85/x86)<(x87<=x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 5U;
	uint16_t x90 = 1U;
	int8_t x91 = 31;
	volatile int32_t x92 = 914365440;
	volatile int32_t t21 = 261231729;

	t21 = ((x89/x90)<(x91<=x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	static int8_t x94 = -24;
	uint16_t x95 = UINT16_MAX;

	t22 = ((x93/x94)<(x95<=x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x99 = 1LL;
	volatile int32_t t23 = -650;

	t23 = ((x97/x98)<(x99<=x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x105 = 13U;
	int8_t x106 = INT8_MIN;
	static int8_t x107 = -1;
	volatile int32_t t24 = 77274999;

	t24 = ((x105/x106)<(x107<=x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;

	t25 = ((x109/x110)<(x111<=x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x115 = 12866002U;
	volatile uint64_t x116 = UINT64_MAX;
	volatile int32_t t26 = -17;

	t26 = ((x113/x114)<(x115<=x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x118 = UINT32_MAX;
	int64_t x119 = 3689893493334877477LL;
	static uint8_t x120 = UINT8_MAX;
	static volatile int32_t t27 = -60080333;

	t27 = ((x117/x118)<(x119<=x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	volatile int32_t t28 = -25;

	t28 = ((x121/x122)<(x123<=x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = -15451232047113LL;
	static int64_t x126 = -248878LL;
	static int64_t x127 = -1LL;
	int16_t x128 = INT16_MIN;
	int32_t t29 = 2;

	t29 = ((x125/x126)<(x127<=x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = INT64_MIN;
	uint64_t x131 = 15070990975941LLU;
	uint16_t x132 = 1880U;
	int32_t t30 = 171846;

	t30 = ((x129/x130)<(x131<=x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = INT16_MAX;
	int8_t x135 = -1;
	int16_t x136 = INT16_MAX;
	volatile int32_t t31 = -253448;

	t31 = ((x133/x134)<(x135<=x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	static int64_t x140 = INT64_MIN;
	int32_t t32 = -1;

	t32 = ((x137/x138)<(x139<=x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	volatile int16_t x142 = -123;
	int16_t x143 = INT16_MAX;
	volatile int32_t t33 = -2751830;

	t33 = ((x141/x142)<(x143<=x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	int16_t x147 = INT16_MAX;
	int32_t t34 = 19439168;

	t34 = ((x145/x146)<(x147<=x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x150 = 25U;
	int32_t x151 = 140248;
	int32_t x152 = INT32_MAX;
	int32_t t35 = -14938;

	t35 = ((x149/x150)<(x151<=x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = INT8_MAX;
	static int8_t x154 = -54;
	int32_t x155 = 2;
	volatile uint8_t x156 = 7U;

	t36 = ((x153/x154)<(x155<=x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 23377556465097LLU;
	static volatile int64_t x159 = INT64_MIN;
	static int8_t x160 = 1;
	static int32_t t37 = -1;

	t37 = ((x157/x158)<(x159<=x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = 19009499U;
	int16_t x163 = 0;
	static int16_t x164 = -360;
	static volatile int32_t t38 = -325;

	t38 = ((x161/x162)<(x163<=x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x167 = -9;
	int16_t x168 = INT16_MIN;
	volatile int32_t t39 = -121611;

	t39 = ((x165/x166)<(x167<=x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = 2;
	int8_t x170 = INT8_MAX;
	volatile uint64_t x171 = 18470611623460LLU;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t40 = 283619170;

	t40 = ((x169/x170)<(x171<=x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	int16_t x174 = -1;
	volatile int64_t x175 = -1LL;
	int32_t t41 = -47;

	t41 = ((x173/x174)<(x175<=x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 84U;
	int8_t x178 = -13;
	uint16_t x179 = 163U;
	volatile int16_t x180 = 1;
	volatile int32_t t42 = -47;

	t42 = ((x177/x178)<(x179<=x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int16_t x183 = 12201;
	uint64_t x184 = 821384948097LLU;
	static int32_t t43 = -193;

	t43 = ((x181/x182)<(x183<=x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 9046606U;
	int16_t x186 = -1;
	uint64_t x187 = 227LLU;
	int32_t t44 = -52;

	t44 = ((x185/x186)<(x187<=x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = -1;
	volatile uint8_t x191 = 11U;
	volatile int32_t x192 = INT32_MAX;
	int32_t t45 = 45;

	t45 = ((x189/x190)<(x191<=x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	static int32_t x196 = -1;
	volatile int32_t t46 = 15;

	t46 = ((x193/x194)<(x195<=x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x198 = 283704658U;
	uint32_t x199 = 5U;
	uint16_t x200 = 4055U;
	int32_t t47 = 0;

	t47 = ((x197/x198)<(x199<=x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	static int16_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int32_t t48 = -1;

	t48 = ((x201/x202)<(x203<=x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = UINT32_MAX;
	uint8_t x206 = UINT8_MAX;
	int64_t x207 = -1LL;
	int64_t x208 = -86536727991762LL;
	volatile int32_t t49 = -2839940;

	t49 = ((x205/x206)<(x207<=x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = -1;
	static volatile int16_t x211 = -11786;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t50 = 44;

	t50 = ((x209/x210)<(x211<=x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MAX;
	int32_t x214 = -1;
	static volatile int32_t x215 = INT32_MIN;
	volatile int64_t x216 = 374389LL;
	static volatile int32_t t51 = 849614;

	t51 = ((x213/x214)<(x215<=x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 202171324473525642LLU;
	uint8_t x220 = 0U;
	static int32_t t52 = -2;

	t52 = ((x217/x218)<(x219<=x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 7;
	int16_t x222 = INT16_MAX;
	volatile int8_t x223 = -1;
	volatile int16_t x224 = INT16_MIN;
	int32_t t53 = 0;

	t53 = ((x221/x222)<(x223<=x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x230 = -1;
	int64_t x231 = 89089872299LL;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t54 = -5;

	t54 = ((x229/x230)<(x231<=x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MIN;
	static volatile int16_t x236 = INT16_MAX;

	t55 = ((x233/x234)<(x235<=x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	static uint32_t x239 = 65363U;
	static uint16_t x240 = 232U;
	int32_t t56 = -63;

	t56 = ((x237/x238)<(x239<=x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x241 = 298786200242LLU;
	int16_t x242 = -1;
	volatile int32_t x244 = INT32_MIN;
	int32_t t57 = -48592984;

	t57 = ((x241/x242)<(x243<=x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	volatile uint8_t x246 = UINT8_MAX;
	int8_t x247 = -6;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t58 = 0;

	t58 = ((x245/x246)<(x247<=x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x249 = -1298859;
	int64_t x251 = -1LL;
	volatile int8_t x252 = INT8_MIN;
	int32_t t59 = -242;

	t59 = ((x249/x250)<(x251<=x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = INT16_MIN;
	static int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t60 = 11800;

	t60 = ((x253/x254)<(x255<=x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x258 = 2;
	volatile int32_t x259 = INT32_MIN;
	int8_t x260 = -1;
	int32_t t61 = 55;

	t61 = ((x257/x258)<(x259<=x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x262 = INT16_MAX;
	volatile int8_t x263 = INT8_MAX;
	static int8_t x264 = INT8_MIN;

	t62 = ((x261/x262)<(x263<=x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = 6;
	int32_t x266 = -27536319;
	uint64_t x267 = 318252279LLU;
	uint16_t x268 = 158U;
	volatile int32_t t63 = 0;

	t63 = ((x265/x266)<(x267<=x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	static int32_t t64 = -35558022;

	t64 = ((x269/x270)<(x271<=x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x274 = 2U;
	uint64_t x275 = 4439LLU;
	int8_t x276 = 1;
	volatile int32_t t65 = 2627470;

	t65 = ((x273/x274)<(x275<=x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x277 = -1LL;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t66 = 410146181;

	t66 = ((x277/x278)<(x279<=x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MAX;
	static int8_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	volatile int32_t x284 = -661425808;
	static volatile int32_t t67 = 2;

	t67 = ((x281/x282)<(x283<=x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 1U;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = -2245;
	volatile int32_t t68 = -287;

	t68 = ((x285/x286)<(x287<=x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = 13;
	volatile uint32_t x290 = 3742941U;
	static uint64_t x292 = 1741330948LLU;
	int32_t t69 = 1;

	t69 = ((x289/x290)<(x291<=x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x293 = INT16_MIN;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t70 = -3966;

	t70 = ((x293/x294)<(x295<=x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = 33187LL;
	static uint8_t x298 = 10U;
	static volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = -1;
	int32_t t71 = 3478;

	t71 = ((x297/x298)<(x299<=x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x301 = 4326U;
	int64_t x302 = INT64_MIN;
	static uint8_t x304 = 46U;

	t72 = ((x301/x302)<(x303<=x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x306 = -3763LL;
	int64_t x307 = 28LL;
	int32_t x308 = INT32_MAX;
	volatile int32_t t73 = 26310810;

	t73 = ((x305/x306)<(x307<=x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x310 = 13429U;
	static uint16_t x311 = UINT16_MAX;
	int32_t t74 = 2952;

	t74 = ((x309/x310)<(x311<=x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = 2409;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t75 = 28;

	t75 = ((x313/x314)<(x315<=x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = 2029106792139342LLU;
	static int16_t x319 = INT16_MIN;
	static uint8_t x320 = 0U;
	static volatile int32_t t76 = 66872;

	t76 = ((x317/x318)<(x319<=x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x322 = INT64_MIN;
	uint16_t x323 = UINT16_MAX;
	int32_t t77 = -605326024;

	t77 = ((x321/x322)<(x323<=x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MIN;
	int8_t x328 = -1;
	int32_t t78 = 479;

	t78 = ((x325/x326)<(x327<=x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	volatile int8_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	volatile uint16_t x332 = 2U;

	t79 = ((x329/x330)<(x331<=x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x333 = INT32_MAX;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t80 = 0;

	t80 = ((x333/x334)<(x335<=x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	volatile int32_t x338 = 452654;
	int32_t x340 = -8350158;
	static volatile int32_t t81 = -17073;

	t81 = ((x337/x338)<(x339<=x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = 1990713LLU;
	int32_t t82 = 91933952;

	t82 = ((x341/x342)<(x343<=x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x346 = UINT16_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	int16_t x348 = 0;
	volatile int32_t t83 = 6267456;

	t83 = ((x345/x346)<(x347<=x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = INT16_MIN;
	static int64_t x351 = INT64_MIN;
	static uint16_t x352 = 455U;
	volatile int32_t t84 = 12254;

	t84 = ((x349/x350)<(x351<=x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x353 = 7U;
	int64_t x356 = INT64_MAX;
	int32_t t85 = 863361183;

	t85 = ((x353/x354)<(x355<=x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static int32_t x358 = 1;
	uint64_t x359 = 133250812LLU;
	int64_t x360 = INT64_MIN;

	t86 = ((x357/x358)<(x359<=x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = -1138191;
	int16_t x363 = INT16_MIN;
	int32_t x364 = 816;

	t87 = ((x361/x362)<(x363<=x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = INT8_MAX;
	int64_t x368 = INT64_MAX;
	int32_t t88 = 35340265;

	t88 = ((x365/x366)<(x367<=x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x369 = 5U;
	volatile uint16_t x370 = 88U;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t89 = 31617796;

	t89 = ((x369/x370)<(x371<=x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = 142758;
	volatile int32_t x376 = -10935058;
	int32_t t90 = 2982;

	t90 = ((x373/x374)<(x375<=x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x377 = -1;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = -1LL;
	volatile int32_t t91 = 180456371;

	t91 = ((x377/x378)<(x379<=x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = INT32_MIN;
	int8_t x383 = 39;
	int8_t x384 = 6;
	static volatile int32_t t92 = 15778501;

	t92 = ((x381/x382)<(x383<=x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MAX;
	volatile int64_t x387 = -154753946LL;
	volatile int8_t x388 = 0;
	int32_t t93 = 30;

	t93 = ((x385/x386)<(x387<=x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x389 = UINT32_MAX;
	int8_t x390 = -13;
	int16_t x391 = -1;
	int8_t x392 = -1;
	volatile int32_t t94 = 15307;

	t94 = ((x389/x390)<(x391<=x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MIN;
	static int16_t x394 = INT16_MIN;
	uint8_t x395 = 49U;
	static int8_t x396 = -1;

	t95 = ((x393/x394)<(x395<=x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x397 = -1;
	static int8_t x398 = INT8_MIN;
	volatile int64_t x399 = 3711972784901674LL;
	uint8_t x400 = 12U;
	int32_t t96 = 489457;

	t96 = ((x397/x398)<(x399<=x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x401 = 63115329185018LL;
	uint16_t x402 = 693U;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -40145673;
	int32_t t97 = -8184;

	t97 = ((x401/x402)<(x403<=x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = -1872;
	static uint16_t x408 = UINT16_MAX;

	t98 = ((x405/x406)<(x407<=x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x410 = -1;
	int64_t x411 = -9787LL;
	volatile int32_t x412 = -1;
	static int32_t t99 = -79325587;

	t99 = ((x409/x410)<(x411<=x412));

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

