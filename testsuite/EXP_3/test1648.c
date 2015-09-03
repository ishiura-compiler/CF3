#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = -1LL;
uint32_t x4 = 1103129U;
volatile int64_t x8 = -1LL;
uint16_t x13 = 0U;
volatile int32_t t3 = 50305962;
int8_t x18 = -6;
uint16_t x28 = 68U;
uint32_t x31 = 6068U;
int32_t t7 = -999139375;
uint16_t x34 = UINT16_MAX;
volatile int32_t t8 = 36653;
volatile int64_t x38 = -112002586LL;
static int8_t x44 = INT8_MIN;
uint64_t x47 = 54711029441976452LLU;
volatile int32_t t12 = 1;
static int16_t x55 = -1;
static uint16_t x61 = UINT16_MAX;
volatile uint16_t x65 = 14172U;
int16_t x67 = INT16_MIN;
int32_t t19 = 8122689;
volatile int8_t x81 = INT8_MIN;
volatile uint64_t x85 = UINT64_MAX;
int8_t x89 = -3;
int32_t x94 = -291033;
static uint64_t x95 = 16675822438947LLU;
volatile int32_t t23 = 342880;
int16_t x99 = 69;
uint32_t x105 = UINT32_MAX;
int16_t x106 = -1;
int16_t x115 = INT16_MAX;
static int8_t x120 = -1;
int8_t x121 = -2;
int8_t x123 = INT8_MAX;
uint64_t x126 = UINT64_MAX;
int8_t x128 = -2;
int32_t t32 = -52;
static volatile int32_t t34 = 799668794;
uint64_t x142 = 36439689168747569LLU;
uint64_t x143 = 1541135800385936LLU;
int64_t x146 = INT64_MIN;
int64_t x147 = INT64_MIN;
volatile int32_t x152 = INT32_MAX;
static uint64_t x155 = UINT64_MAX;
int64_t x159 = -182853LL;
int16_t x163 = INT16_MAX;
static int8_t x166 = INT8_MIN;
uint8_t x168 = 0U;
int16_t x169 = INT16_MIN;
int32_t t42 = 0;
int16_t x175 = 1;
uint32_t x176 = 1U;
int32_t t43 = -311150939;
volatile int64_t x186 = INT64_MIN;
volatile int8_t x188 = -1;
uint16_t x193 = 18296U;
static int32_t t48 = 183752608;
static int8_t x198 = -1;
int32_t x199 = 1;
int8_t x200 = INT8_MIN;
volatile int32_t t51 = 111255;
int32_t x216 = -1;
static uint16_t x217 = UINT16_MAX;
volatile int32_t t54 = -358;
volatile uint8_t x224 = 54U;
volatile uint32_t x225 = UINT32_MAX;
static int8_t x227 = 5;
int32_t x230 = -1;
int16_t x234 = INT16_MAX;
int16_t x240 = INT16_MIN;
int16_t x252 = -1;
static int32_t x267 = -36520850;
int32_t t66 = -65993855;
uint8_t x271 = 1U;
static int8_t x273 = -1;
int64_t x277 = INT64_MIN;
int64_t x288 = INT64_MAX;
int32_t x290 = 640536;
static int32_t x292 = INT32_MIN;
int16_t x296 = INT16_MAX;
int32_t x297 = -15;
static int64_t x306 = 1368673083307LL;
int16_t x307 = -967;
static uint32_t x308 = 1U;
uint16_t x313 = 37U;
int32_t x324 = 0;
uint16_t x327 = UINT16_MAX;
volatile uint16_t x329 = 491U;
int16_t x331 = 200;
volatile int32_t t82 = 151567;
uint16_t x334 = UINT16_MAX;
static uint16_t x337 = 30U;
static uint8_t x343 = 35U;
uint32_t x344 = 39U;
int64_t x347 = 2002844626LL;
uint32_t x348 = 433814968U;
int32_t x349 = INT32_MIN;
static uint8_t x353 = 0U;
int32_t x354 = INT32_MAX;
volatile int32_t t88 = -51;
int32_t x358 = INT32_MIN;
int16_t x363 = -2569;
int32_t t90 = -519667;
volatile int32_t t91 = 234713;
int8_t x369 = -1;
uint16_t x375 = 16U;
int16_t x378 = INT16_MAX;
static volatile int32_t t94 = 33362806;
uint16_t x381 = UINT16_MAX;
volatile int32_t t97 = -355388210;
int64_t x398 = 578785LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint32_t x2 = 5U;
	int32_t t0 = -96165541;

	t0 = ((x1<=x2)<=(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -5400;
	int16_t x6 = 10;
	int32_t x7 = INT32_MIN;
	static volatile int32_t t1 = 398;

	t1 = ((x5<=x6)<=(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -163;
	int32_t x10 = -1;
	int32_t x11 = INT32_MAX;
	volatile int16_t x12 = 89;
	int32_t t2 = -8847724;

	t2 = ((x9<=x10)<=(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MAX;
	volatile int64_t x16 = -29908445LL;

	t3 = ((x13<=x14)<=(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static int16_t x19 = -1;
	volatile uint64_t x20 = 642326860LLU;
	static int32_t t4 = 452811366;

	t4 = ((x17<=x18)<=(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int8_t x22 = -1;
	int32_t x23 = INT32_MIN;
	int16_t x24 = 2007;
	int32_t t5 = -474801467;

	t5 = ((x21<=x22)<=(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	uint16_t x26 = 23994U;
	static int64_t x27 = -177LL;
	int32_t t6 = -13665146;

	t6 = ((x25<=x26)<=(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 67U;
	int16_t x30 = 0;
	int64_t x32 = INT64_MAX;

	t7 = ((x29<=x30)<=(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x35 = 2;
	volatile uint32_t x36 = 25U;

	t8 = ((x33<=x34)<=(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -6;
	volatile int8_t x39 = -44;
	int16_t x40 = 989;
	volatile int32_t t9 = 1057;

	t9 = ((x37<=x38)<=(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint32_t x42 = 60699086U;
	uint64_t x43 = 2929808LLU;
	volatile int32_t t10 = -868044;

	t10 = ((x41<=x42)<=(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 576292266LLU;
	int32_t x46 = -1;
	static uint64_t x48 = UINT64_MAX;
	int32_t t11 = 132355233;

	t11 = ((x45<=x46)<=(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static int8_t x50 = 11;
	uint32_t x51 = 726009U;
	int16_t x52 = -1;

	t12 = ((x49<=x50)<=(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int64_t x54 = -1LL;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -284;

	t13 = ((x53<=x54)<=(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	volatile int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 16488700;

	t14 = ((x57<=x58)<=(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = INT64_MIN;
	int64_t x63 = -1LL;
	static volatile int16_t x64 = INT16_MIN;
	int32_t t15 = -49615482;

	t15 = ((x61<=x62)<=(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = INT64_MAX;
	int64_t x68 = -1LL;
	volatile int32_t t16 = 7;

	t16 = ((x65<=x66)<=(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int16_t x70 = INT16_MAX;
	uint16_t x71 = UINT16_MAX;
	uint8_t x72 = 32U;
	static int32_t t17 = 4937176;

	t17 = ((x69<=x70)<=(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 43388620492LL;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 0;

	t18 = ((x73<=x74)<=(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 15456LLU;
	static uint16_t x80 = UINT16_MAX;

	t19 = ((x77<=x78)<=(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 6175464U;
	static volatile uint64_t x83 = UINT64_MAX;
	uint8_t x84 = 68U;
	static int32_t t20 = 677964661;

	t20 = ((x81<=x82)<=(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = INT32_MAX;
	int8_t x87 = -1;
	volatile uint64_t x88 = 3792485827580781LLU;
	static int32_t t21 = 85086126;

	t21 = ((x85<=x86)<=(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = 1;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 1U;
	volatile int32_t t22 = 0;

	t22 = ((x89<=x90)<=(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 3887U;
	uint32_t x96 = 30566U;

	t23 = ((x93<=x94)<=(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -5;
	static uint16_t x98 = 109U;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 3;

	t24 = ((x97<=x98)<=(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 6041U;
	int64_t x102 = -1LL;
	int64_t x103 = -1LL;
	volatile int16_t x104 = 2;
	volatile int32_t t25 = 53436501;

	t25 = ((x101<=x102)<=(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -157;

	t26 = ((x105<=x106)<=(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 61U;
	uint16_t x111 = UINT16_MAX;
	static volatile int64_t x112 = INT64_MAX;
	static int32_t t27 = 16264;

	t27 = ((x109<=x110)<=(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	static int16_t x114 = INT16_MIN;
	uint16_t x116 = 367U;
	volatile int32_t t28 = -116004456;

	t28 = ((x113<=x114)<=(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -135LL;
	uint32_t x118 = 9U;
	int32_t x119 = -87707153;
	static int32_t t29 = 227;

	t29 = ((x117<=x118)<=(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = UINT16_MAX;
	int32_t x124 = -277940;
	volatile int32_t t30 = -12540673;

	t30 = ((x121<=x122)<=(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	static volatile int8_t x127 = INT8_MAX;
	int32_t t31 = -443845461;

	t31 = ((x125<=x126)<=(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t x130 = 87192LL;
	int16_t x131 = -1;
	int64_t x132 = INT64_MAX;

	t32 = ((x129<=x130)<=(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	volatile uint16_t x134 = UINT16_MAX;
	uint16_t x135 = 15U;
	static int64_t x136 = -1LL;
	int32_t t33 = -38476445;

	t33 = ((x133<=x134)<=(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = 246095LL;
	static int64_t x139 = -1LL;
	uint16_t x140 = 14U;

	t34 = ((x137<=x138)<=(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile int32_t x144 = 217926;
	volatile int32_t t35 = 198974451;

	t35 = ((x141<=x142)<=(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	int32_t t36 = 2655;

	t36 = ((x145<=x146)<=(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = -1;
	int8_t x151 = 0;
	int32_t t37 = -1;

	t37 = ((x149<=x150)<=(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 439U;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 1;

	t38 = ((x153<=x154)<=(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 484U;
	static int16_t x158 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = 0;

	t39 = ((x157<=x158)<=(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	volatile uint64_t x162 = 1239509647470338LLU;
	int32_t x164 = -1;
	volatile int32_t t40 = -152873304;

	t40 = ((x161<=x162)<=(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 4;
	uint32_t x167 = 80U;
	int32_t t41 = -106362;

	t41 = ((x165<=x166)<=(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x170 = 0U;
	uint8_t x171 = 35U;
	int16_t x172 = INT16_MIN;

	t42 = ((x169<=x170)<=(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 5524U;
	uint16_t x174 = 30U;

	t43 = ((x173<=x174)<=(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	int8_t x179 = -1;
	uint8_t x180 = 37U;
	int32_t t44 = 2293542;

	t44 = ((x177<=x178)<=(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = -461;
	int64_t x183 = -1LL;
	int8_t x184 = -1;
	static int32_t t45 = -4796303;

	t45 = ((x181<=x182)<=(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 31835899LLU;
	int64_t x187 = INT64_MIN;
	int32_t t46 = 54632521;

	t46 = ((x185<=x186)<=(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = -18933911;
	static int32_t x191 = INT32_MIN;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 3;

	t47 = ((x189<=x190)<=(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MAX;
	int16_t x195 = 1;
	uint8_t x196 = 63U;

	t48 = ((x193<=x194)<=(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -1LL;
	int32_t t49 = -1;

	t49 = ((x197<=x198)<=(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int64_t x202 = 0LL;
	int64_t x203 = 15755033LL;
	int32_t x204 = -1;
	int32_t t50 = -121;

	t50 = ((x201<=x202)<=(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = -1093;
	static volatile uint8_t x207 = 1U;
	uint64_t x208 = 6682LLU;

	t51 = ((x205<=x206)<=(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 14174U;
	int64_t x210 = -221606LL;
	int64_t x211 = -1LL;
	uint16_t x212 = UINT16_MAX;
	int32_t t52 = -3;

	t52 = ((x209<=x210)<=(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = INT16_MIN;
	int32_t t53 = -1259;

	t53 = ((x213<=x214)<=(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = INT8_MAX;
	int32_t x220 = 235;

	t54 = ((x217<=x218)<=(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	volatile int64_t x222 = -1LL;
	volatile uint32_t x223 = 5687789U;
	volatile int32_t t55 = 0;

	t55 = ((x221<=x222)<=(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = UINT32_MAX;
	volatile int64_t x228 = -1LL;
	int32_t t56 = 93323849;

	t56 = ((x225<=x226)<=(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile int8_t x231 = INT8_MIN;
	int32_t x232 = 48455;
	volatile int32_t t57 = 890443;

	t57 = ((x229<=x230)<=(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 238243;
	static int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -434916149;

	t58 = ((x233<=x234)<=(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile int16_t x238 = INT16_MAX;
	uint8_t x239 = 1U;
	volatile int32_t t59 = 759934;

	t59 = ((x237<=x238)<=(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	static int16_t x244 = -1;
	int32_t t60 = -914350;

	t60 = ((x241<=x242)<=(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 4U;
	int16_t x246 = INT16_MIN;
	static uint64_t x247 = 154789927LLU;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 63;

	t61 = ((x245<=x246)<=(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	volatile int16_t x250 = INT16_MAX;
	int8_t x251 = -2;
	volatile int32_t t62 = -474;

	t62 = ((x249<=x250)<=(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 3085595500823001448LL;
	static int16_t x254 = -1;
	uint16_t x255 = 1019U;
	static int16_t x256 = 2;
	static int32_t t63 = 392184;

	t63 = ((x253<=x254)<=(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = 7;
	uint16_t x258 = 286U;
	int64_t x259 = -1046226382826LL;
	volatile int32_t x260 = INT32_MAX;
	static int32_t t64 = -3894433;

	t64 = ((x257<=x258)<=(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -291721LL;
	int32_t x262 = INT32_MAX;
	uint8_t x263 = 1U;
	uint64_t x264 = 236170677517419036LLU;
	int32_t t65 = -236;

	t65 = ((x261<=x262)<=(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x265 = -8;
	static uint16_t x266 = 4846U;
	uint16_t x268 = 1U;

	t66 = ((x265<=x266)<=(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int16_t x270 = -1;
	int64_t x272 = INT64_MIN;
	int32_t t67 = -3800;

	t67 = ((x269<=x270)<=(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	int32_t x275 = 877942553;
	static int16_t x276 = INT16_MIN;
	int32_t t68 = -467457;

	t68 = ((x273<=x274)<=(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x278 = 0U;
	uint64_t x279 = 583970603LLU;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -13603630;

	t69 = ((x277<=x278)<=(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -49;
	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = UINT16_MAX;
	uint32_t x284 = 1673U;
	volatile int32_t t70 = 56;

	t70 = ((x281<=x282)<=(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 10U;
	int16_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int32_t t71 = -24146;

	t71 = ((x285<=x286)<=(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -1;
	int8_t x291 = -1;
	static int32_t t72 = 92277;

	t72 = ((x289<=x290)<=(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = 341;
	int8_t x295 = -6;
	int32_t t73 = 7479;

	t73 = ((x293<=x294)<=(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = INT16_MIN;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = 132LL;
	volatile int32_t t74 = -806;

	t74 = ((x297<=x298)<=(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	static int32_t x302 = -1;
	int8_t x303 = -1;
	int64_t x304 = -1LL;
	int32_t t75 = -3852428;

	t75 = ((x301<=x302)<=(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	volatile int32_t t76 = -1;

	t76 = ((x305<=x306)<=(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 369;
	uint8_t x310 = 1U;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = 453LLU;
	static int32_t t77 = -24;

	t77 = ((x309<=x310)<=(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x314 = -11;
	int64_t x315 = INT64_MIN;
	static int32_t x316 = 3485;
	volatile int32_t t78 = -884188476;

	t78 = ((x313<=x314)<=(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -727;
	static uint8_t x318 = 2U;
	static uint16_t x319 = UINT16_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -120225263;

	t79 = ((x317<=x318)<=(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -6373145859871LL;
	uint16_t x322 = 148U;
	volatile uint8_t x323 = UINT8_MAX;
	volatile int32_t t80 = -4;

	t80 = ((x321<=x322)<=(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 0U;
	volatile uint32_t x326 = 1U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 502940811;

	t81 = ((x325<=x326)<=(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = INT64_MIN;
	volatile uint64_t x332 = UINT64_MAX;

	t82 = ((x329<=x330)<=(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 17188U;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 2245448U;
	static volatile int32_t t83 = -15277004;

	t83 = ((x333<=x334)<=(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	int8_t x340 = 1;
	static volatile int32_t t84 = 11110;

	t84 = ((x337<=x338)<=(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 323U;
	volatile int16_t x342 = INT16_MIN;
	int32_t t85 = 641324679;

	t85 = ((x341<=x342)<=(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -3;
	int32_t x346 = -158050571;
	int32_t t86 = 622699190;

	t86 = ((x345<=x346)<=(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x350 = 267;
	static int16_t x351 = 0;
	static int8_t x352 = -7;
	volatile int32_t t87 = 0;

	t87 = ((x349<=x350)<=(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x355 = INT8_MAX;
	uint16_t x356 = 6252U;

	t88 = ((x353<=x354)<=(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 9875;
	int8_t x359 = 1;
	int64_t x360 = INT64_MAX;
	static int32_t t89 = -123562;

	t89 = ((x357<=x358)<=(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 697U;
	int8_t x362 = 0;
	static int64_t x364 = INT64_MAX;

	t90 = ((x361<=x362)<=(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	static int32_t x366 = 40;
	volatile uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = INT64_MIN;

	t91 = ((x365<=x366)<=(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x370 = 391088992323LLU;
	volatile int32_t x371 = -1;
	static uint64_t x372 = 4573042213LLU;
	static int32_t t92 = 29345140;

	t92 = ((x369<=x370)<=(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x373 = INT32_MAX;
	uint64_t x374 = UINT64_MAX;
	uint64_t x376 = UINT64_MAX;
	int32_t t93 = -3;

	t93 = ((x373<=x374)<=(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 25;
	uint32_t x379 = 58U;
	volatile uint8_t x380 = 91U;

	t94 = ((x377<=x378)<=(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x382 = 24;
	uint8_t x383 = 1U;
	int8_t x384 = -1;
	volatile int32_t t95 = -1;

	t95 = ((x381<=x382)<=(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 1U;
	uint16_t x386 = 121U;
	int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 1692;

	t96 = ((x385<=x386)<=(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 996U;
	int64_t x390 = -6LL;
	int32_t x391 = 50608;
	static int16_t x392 = -12638;

	t97 = ((x389<=x390)<=(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 0U;
	static volatile int64_t x394 = -1LL;
	static int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MAX;
	int32_t t98 = 1797588;

	t98 = ((x393<=x394)<=(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t x400 = -452061449;
	volatile int32_t t99 = 7314;

	t99 = ((x397<=x398)<=(x399<=x400));

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

