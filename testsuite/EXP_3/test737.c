#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 2U;
int16_t x5 = 122;
int8_t x8 = 26;
static int64_t x11 = -544506813029574LL;
static int32_t t2 = -361058471;
static int8_t x14 = INT8_MIN;
volatile int32_t t3 = 397631;
int8_t x18 = 23;
volatile int32_t t5 = 9991;
int16_t x27 = -1;
static int8_t x30 = INT8_MIN;
int16_t x34 = INT16_MIN;
int32_t x40 = 1;
static volatile int32_t t9 = 989089144;
int64_t x42 = INT64_MIN;
static uint64_t x52 = 163697878160LLU;
uint32_t x53 = UINT32_MAX;
int32_t t13 = 1499148;
uint32_t x64 = UINT32_MAX;
static int32_t x66 = INT32_MAX;
int64_t x70 = INT64_MAX;
int8_t x76 = INT8_MIN;
int16_t x78 = INT16_MAX;
volatile int32_t t19 = -14129;
int32_t x84 = 792129890;
uint32_t x86 = 204U;
volatile int64_t x88 = 1LL;
int64_t x89 = 3634956LL;
int64_t x92 = 1677363564207377LL;
static int32_t t22 = 5;
int16_t x96 = INT16_MAX;
int32_t t24 = -553900600;
volatile int16_t x101 = -216;
volatile uint64_t x105 = 67277440526LLU;
static int64_t x106 = -8845980943312765LL;
uint8_t x109 = UINT8_MAX;
static volatile uint64_t x110 = 6191037811LLU;
volatile int32_t t28 = 917374;
int32_t x118 = INT32_MIN;
volatile int16_t x119 = -152;
int32_t t34 = -244589970;
volatile uint16_t x142 = UINT16_MAX;
int32_t x144 = INT32_MAX;
static volatile int8_t x150 = INT8_MIN;
int16_t x152 = INT16_MIN;
int64_t x153 = INT64_MAX;
volatile int32_t x169 = 244351996;
int64_t x174 = -1LL;
uint32_t x178 = 389492U;
int16_t x180 = INT16_MIN;
volatile int32_t t46 = 1019;
uint8_t x190 = 12U;
int32_t t47 = 2406636;
uint16_t x193 = 1990U;
volatile int32_t t48 = -3735;
int16_t x198 = INT16_MIN;
int8_t x200 = INT8_MAX;
int16_t x203 = INT16_MIN;
static int16_t x204 = INT16_MIN;
volatile int32_t t50 = 796063926;
int16_t x206 = -4267;
static uint32_t x215 = 118629U;
volatile int16_t x219 = -1;
volatile int32_t t55 = 907203;
uint64_t x226 = 134355876LLU;
volatile int64_t x227 = -621LL;
int32_t x236 = INT32_MIN;
volatile int32_t t59 = -8584160;
int32_t x241 = -1;
uint8_t x246 = 31U;
volatile int32_t t61 = -224790;
volatile int8_t x251 = INT8_MIN;
uint16_t x252 = 1U;
static volatile int32_t t62 = -14161001;
uint8_t x258 = 43U;
int64_t x260 = -1LL;
volatile uint64_t x267 = 1345216LLU;
static int64_t x268 = -1LL;
int64_t x270 = INT64_MAX;
static uint16_t x274 = 69U;
static uint32_t x279 = 1683U;
int32_t t69 = -454294;
uint16_t x288 = 108U;
int32_t x292 = INT32_MAX;
volatile int32_t t73 = -245;
uint16_t x299 = 1U;
static int8_t x310 = INT8_MAX;
int16_t x311 = INT16_MAX;
int64_t x326 = -1LL;
uint32_t x328 = UINT32_MAX;
volatile int8_t x345 = 1;
volatile int32_t x346 = -1;
uint16_t x348 = 1U;
int16_t x349 = -1;
uint64_t x351 = 8209799LLU;
volatile int64_t x352 = INT64_MIN;
volatile int16_t x353 = INT16_MIN;
volatile uint16_t x355 = UINT16_MAX;
int16_t x364 = -426;
static int16_t x369 = INT16_MAX;
int32_t t91 = 403;
int8_t x374 = INT8_MIN;
int64_t x378 = -7314828LL;
uint64_t x380 = UINT64_MAX;
volatile int8_t x384 = -1;
volatile int16_t x392 = INT16_MIN;
static volatile int32_t t96 = -2453;
static uint32_t x402 = 35162566U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MAX;
	uint16_t x3 = 140U;
	int32_t t0 = 10;

	t0 = ((x1%x2)<(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 141;
	int32_t x7 = -29;
	volatile int32_t t1 = -2;

	t1 = ((x5%x6)<(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 2837U;
	int16_t x10 = INT16_MIN;
	int32_t x12 = -63495;

	t2 = ((x9%x10)<(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static volatile int64_t x15 = -229827616436LL;
	uint32_t x16 = 1041U;

	t3 = ((x13%x14)<(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 2765471056844878357LL;
	static volatile int16_t x19 = 5476;
	volatile int64_t x20 = -1LL;
	int32_t t4 = 1;

	t4 = ((x17%x18)<(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 69LLU;
	static int32_t x23 = -91083;
	int8_t x24 = INT8_MIN;

	t5 = ((x21%x22)<(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 28U;
	static int16_t x26 = -3;
	static int64_t x28 = -1LL;
	volatile int32_t t6 = -476;

	t6 = ((x25%x26)<(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x31 = -1;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 1;

	t7 = ((x29%x30)<(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int32_t x35 = INT32_MAX;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -9225;

	t8 = ((x33%x34)<(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -554311195976135LL;
	volatile uint64_t x38 = 1708832464469930563LLU;
	static uint8_t x39 = UINT8_MAX;

	t9 = ((x37%x38)<(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	volatile uint16_t x43 = 1U;
	volatile int64_t x44 = 43748925697689LL;
	int32_t t10 = 271118277;

	t10 = ((x41%x42)<(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int8_t x46 = 1;
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = 6686;

	t11 = ((x45%x46)<(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int32_t x50 = -1;
	volatile int16_t x51 = 72;
	int32_t t12 = -381;

	t12 = ((x49%x50)<(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = -1;
	volatile int32_t x56 = -1;

	t13 = ((x53%x54)<(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = 823433404045020380LL;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 82;

	t14 = ((x57%x58)<(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	static volatile int16_t x62 = INT16_MAX;
	volatile uint64_t x63 = 37856553254622LLU;
	static int32_t t15 = 4;

	t15 = ((x61%x62)<(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	volatile int16_t x67 = -1;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -182665;

	t16 = ((x65%x66)<(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 9;
	uint32_t x71 = 0U;
	static int32_t x72 = -10075;
	volatile int32_t t17 = -336557176;

	t17 = ((x69%x70)<(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;
	volatile int32_t x75 = -1;
	int32_t t18 = 62;

	t18 = ((x73%x74)<(x75%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	static uint16_t x79 = 349U;
	volatile int16_t x80 = INT16_MIN;

	t19 = ((x77%x78)<(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	int32_t x83 = -1;
	int32_t t20 = 219;

	t20 = ((x81%x82)<(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 406U;
	int8_t x87 = -1;
	int32_t t21 = -166462368;

	t21 = ((x85%x86)<(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;

	t22 = ((x89%x90)<(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = 9U;
	volatile int32_t t23 = -747284833;

	t23 = ((x93%x94)<(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 32580439635239336LLU;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;

	t24 = ((x97%x98)<(x99%x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MAX;
	static uint64_t x103 = 683599572080442108LLU;
	uint64_t x104 = 25LLU;
	int32_t t25 = -6113117;

	t25 = ((x101%x102)<(x103%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = 67777362849771664LL;
	int16_t x108 = INT16_MIN;
	int32_t t26 = -13357;

	t26 = ((x105%x106)<(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x111 = -1;
	static volatile int64_t x112 = 2LL;
	int32_t t27 = -9494;

	t27 = ((x109%x110)<(x111%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static uint8_t x114 = UINT8_MAX;
	volatile uint64_t x115 = 223481086516969LLU;
	int8_t x116 = INT8_MIN;

	t28 = ((x113%x114)<(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint64_t x120 = 429168635395LLU;
	static volatile int32_t t29 = -11896179;

	t29 = ((x117%x118)<(x119%x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	static int64_t x123 = -1LL;
	static int64_t x124 = -1LL;
	volatile int32_t t30 = -1811468;

	t30 = ((x121%x122)<(x123%x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	volatile int8_t x126 = INT8_MAX;
	uint64_t x127 = 45068457225575814LLU;
	int32_t x128 = -1;
	int32_t t31 = -133467613;

	t31 = ((x125%x126)<(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	int8_t x130 = -1;
	volatile uint32_t x131 = UINT32_MAX;
	int64_t x132 = -1579585068190508LL;
	static int32_t t32 = -3;

	t32 = ((x129%x130)<(x131%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -3;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	volatile uint64_t x136 = UINT64_MAX;
	static int32_t t33 = -32857;

	t33 = ((x133%x134)<(x135%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 738202162657094LL;
	uint16_t x138 = 59U;
	int8_t x139 = INT8_MIN;
	uint8_t x140 = UINT8_MAX;

	t34 = ((x137%x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -7;
	uint16_t x143 = UINT16_MAX;
	int32_t t35 = -80;

	t35 = ((x141%x142)<(x143%x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	static volatile int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	volatile int16_t x148 = -399;
	volatile int32_t t36 = 49;

	t36 = ((x145%x146)<(x147%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 0;
	int64_t x151 = 1LL;
	volatile int32_t t37 = -127538399;

	t37 = ((x149%x150)<(x151%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 14U;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = 16389U;
	volatile int32_t t38 = -60227;

	t38 = ((x153%x154)<(x155%x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	int32_t x158 = -1;
	int32_t x159 = -2425;
	static int64_t x160 = INT64_MIN;
	int32_t t39 = -868014;

	t39 = ((x157%x158)<(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -45;
	int8_t x162 = -1;
	int64_t x163 = INT64_MAX;
	int64_t x164 = -1LL;
	int32_t t40 = -130659567;

	t40 = ((x161%x162)<(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 14490U;
	volatile int16_t x166 = INT16_MIN;
	static uint8_t x167 = 16U;
	static uint16_t x168 = 10U;
	int32_t t41 = -941788;

	t41 = ((x165%x166)<(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = 22;
	static volatile uint32_t x171 = 19889324U;
	int16_t x172 = -40;
	volatile int32_t t42 = -145141;

	t42 = ((x169%x170)<(x171%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 2;
	static int8_t x175 = -1;
	int64_t x176 = -230LL;
	static int32_t t43 = 3;

	t43 = ((x173%x174)<(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x179 = 1;
	volatile int32_t t44 = -1928294;

	t44 = ((x177%x178)<(x179%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -1;
	uint32_t x182 = 11200053U;
	uint32_t x183 = UINT32_MAX;
	uint8_t x184 = 18U;
	volatile int32_t t45 = 654379;

	t45 = ((x181%x182)<(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int32_t x186 = INT32_MAX;
	uint16_t x187 = 5836U;
	volatile int64_t x188 = -1647142412132LL;

	t46 = ((x185%x186)<(x187%x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 7820994U;
	int8_t x191 = INT8_MIN;
	static uint8_t x192 = 117U;

	t47 = ((x189%x190)<(x191%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = 1LLU;
	int16_t x195 = -1;
	uint8_t x196 = 1U;

	t48 = ((x193%x194)<(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 73777LLU;
	int32_t x199 = -3020522;
	int32_t t49 = -1;

	t49 = ((x197%x198)<(x199%x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 542U;
	int8_t x202 = INT8_MIN;

	t50 = ((x201%x202)<(x203%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 90742LLU;
	volatile uint16_t x207 = UINT16_MAX;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t51 = -427286306;

	t51 = ((x205%x206)<(x207%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static volatile uint32_t x210 = 1728428U;
	volatile int32_t x211 = -111;
	uint32_t x212 = 41U;
	int32_t t52 = 377;

	t52 = ((x209%x210)<(x211%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MAX;
	volatile int16_t x216 = -1;
	volatile int32_t t53 = -17966614;

	t53 = ((x213%x214)<(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1660487507919223LL;
	int32_t x218 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -170;

	t54 = ((x217%x218)<(x219%x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = 2877U;
	int32_t x223 = INT32_MAX;
	int16_t x224 = INT16_MIN;

	t55 = ((x221%x222)<(x223%x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	volatile int64_t x228 = INT64_MAX;
	int32_t t56 = 187;

	t56 = ((x225%x226)<(x227%x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = 23U;
	volatile int32_t x232 = 4;
	static volatile int32_t t57 = -77160;

	t57 = ((x229%x230)<(x231%x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	static volatile uint16_t x234 = UINT16_MAX;
	static int8_t x235 = -3;
	volatile int32_t t58 = 3212;

	t58 = ((x233%x234)<(x235%x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MAX;
	int64_t x239 = 258064121748885LL;
	volatile uint16_t x240 = 1U;

	t59 = ((x237%x238)<(x239%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	volatile int64_t x244 = -136202005LL;
	volatile int32_t t60 = 109;

	t60 = ((x241%x242)<(x243%x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = -1;
	static volatile uint8_t x247 = 1U;
	int32_t x248 = -1;

	t61 = ((x245%x246)<(x247%x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = 421990619LL;
	int16_t x250 = INT16_MAX;

	t62 = ((x249%x250)<(x251%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MAX;
	volatile int16_t x256 = -43;
	volatile int32_t t63 = -239188008;

	t63 = ((x253%x254)<(x255%x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 12U;
	int8_t x259 = 4;
	int32_t t64 = 1;

	t64 = ((x257%x258)<(x259%x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 26U;
	uint64_t x262 = 389156220LLU;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = -255;
	volatile int32_t t65 = 8;

	t65 = ((x261%x262)<(x263%x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 6U;
	static uint64_t x266 = UINT64_MAX;
	int32_t t66 = 8243562;

	t66 = ((x265%x266)<(x267%x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x271 = 210123LLU;
	volatile uint16_t x272 = 54U;
	int32_t t67 = 1998;

	t67 = ((x269%x270)<(x271%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = -1;
	int32_t x275 = INT32_MIN;
	static volatile int8_t x276 = -1;
	static volatile int32_t t68 = -14;

	t68 = ((x273%x274)<(x275%x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 15908891597LLU;
	int8_t x278 = INT8_MIN;
	int64_t x280 = INT64_MIN;

	t69 = ((x277%x278)<(x279%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile uint32_t x283 = 11372U;
	volatile uint64_t x284 = 497451LLU;
	volatile int32_t t70 = -181938124;

	t70 = ((x281%x282)<(x283%x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 48360353U;
	static volatile int16_t x286 = -1;
	int8_t x287 = INT8_MAX;
	static volatile int32_t t71 = 23802;

	t71 = ((x285%x286)<(x287%x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x290 = 13LLU;
	int8_t x291 = INT8_MAX;
	volatile int32_t t72 = -7695333;

	t72 = ((x289%x290)<(x291%x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 1348U;
	static uint8_t x294 = 19U;
	int64_t x295 = -1LL;
	int8_t x296 = -1;

	t73 = ((x293%x294)<(x295%x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 2LLU;
	int16_t x298 = -1;
	uint32_t x300 = 32032U;
	volatile int32_t t74 = 58991;

	t74 = ((x297%x298)<(x299%x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = -3013LL;
	volatile uint8_t x303 = 0U;
	static int16_t x304 = 2;
	int32_t t75 = 31801;

	t75 = ((x301%x302)<(x303%x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	uint64_t x306 = UINT64_MAX;
	static int8_t x307 = INT8_MAX;
	static int16_t x308 = 5785;
	int32_t t76 = 1;

	t76 = ((x305%x306)<(x307%x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -9;

	t77 = ((x309%x310)<(x311%x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = -1;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = -1;
	int32_t t78 = -3311538;

	t78 = ((x313%x314)<(x315%x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	static int32_t x318 = INT32_MIN;
	static uint32_t x319 = 1378920U;
	int8_t x320 = -1;
	static int32_t t79 = -2002235;

	t79 = ((x317%x318)<(x319%x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	uint32_t x323 = 31995265U;
	static int16_t x324 = -1;
	int32_t t80 = -98209;

	t80 = ((x321%x322)<(x323%x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 92U;
	volatile int16_t x327 = -1;
	volatile int32_t t81 = -1;

	t81 = ((x325%x326)<(x327%x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -721842866;

	t82 = ((x329%x330)<(x331%x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	volatile int8_t x334 = INT8_MAX;
	int32_t x335 = 56378;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 2005730;

	t83 = ((x333%x334)<(x335%x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int32_t x338 = 2660516;
	uint32_t x339 = 6971654U;
	static int64_t x340 = INT64_MAX;
	int32_t t84 = 3;

	t84 = ((x337%x338)<(x339%x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x347 = INT16_MAX;
	volatile int32_t t85 = 155;

	t85 = ((x345%x346)<(x347%x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x350 = -1;
	int32_t t86 = 56324365;

	t86 = ((x349%x350)<(x351%x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x354 = INT8_MIN;
	uint32_t x356 = 5U;
	volatile int32_t t87 = -23584;

	t87 = ((x353%x354)<(x355%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x357 = INT32_MIN;
	volatile int64_t x358 = INT64_MIN;
	int16_t x359 = -10559;
	int8_t x360 = -58;
	int32_t t88 = -31292627;

	t88 = ((x357%x358)<(x359%x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -1LL;
	static int8_t x362 = INT8_MIN;
	volatile int16_t x363 = 6;
	int32_t t89 = -14440;

	t89 = ((x361%x362)<(x363%x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x365 = 121U;
	int64_t x366 = INT64_MIN;
	uint32_t x367 = 832U;
	static int8_t x368 = -1;
	volatile int32_t t90 = -7;

	t90 = ((x365%x366)<(x367%x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 202U;
	int32_t x372 = INT32_MAX;

	t91 = ((x369%x370)<(x371%x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = -201;
	int64_t x375 = 488LL;
	int32_t x376 = INT32_MIN;
	volatile int32_t t92 = -48082084;

	t92 = ((x373%x374)<(x375%x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -1;
	volatile int32_t x379 = -32650;
	static volatile int32_t t93 = 1077212;

	t93 = ((x377%x378)<(x379%x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = -1;
	uint8_t x382 = 4U;
	int32_t x383 = -1;
	int32_t t94 = -2436;

	t94 = ((x381%x382)<(x383%x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 40729359404480950LLU;
	uint32_t x386 = 5563819U;
	volatile int64_t x387 = INT64_MIN;
	uint32_t x388 = 48U;
	int32_t t95 = 7417;

	t95 = ((x385%x386)<(x387%x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = 8299571780859282LLU;
	int16_t x391 = -1;

	t96 = ((x389%x390)<(x391%x392));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x393 = UINT16_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = 1271U;
	volatile int32_t t97 = -7096526;

	t97 = ((x393%x394)<(x395%x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 379U;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MAX;
	static volatile int32_t x400 = -1;
	int32_t t98 = -4;

	t98 = ((x397%x398)<(x399%x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -9;
	int64_t x403 = INT64_MIN;
	static int32_t x404 = INT32_MIN;
	int32_t t99 = 122;

	t99 = ((x401%x402)<(x403%x404));

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

