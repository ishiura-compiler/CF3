#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = INT16_MAX;
static int16_t x12 = INT16_MIN;
int16_t x13 = INT16_MIN;
static int8_t x15 = 0;
uint16_t x18 = 17U;
int32_t x20 = INT32_MIN;
static int32_t x31 = -1;
int64_t x37 = INT64_MIN;
volatile int32_t t6 = -1084658;
int8_t x43 = INT8_MIN;
int16_t x44 = -1;
int16_t x58 = -29;
static int32_t t9 = 153138462;
static volatile int16_t x61 = -48;
int32_t t11 = 925857057;
int32_t x77 = INT32_MIN;
uint64_t x83 = UINT64_MAX;
static int32_t t15 = -891844342;
static uint8_t x89 = UINT8_MAX;
volatile int32_t t21 = -492581;
uint64_t x118 = 12207855LLU;
int64_t x141 = -908160267002682898LL;
uint8_t x142 = 55U;
int64_t x172 = 1LL;
volatile int32_t t33 = 211992670;
uint32_t x178 = UINT32_MAX;
static int8_t x179 = -1;
uint32_t x180 = 8073U;
static int32_t x188 = INT32_MIN;
int32_t t36 = 1662;
int8_t x204 = 1;
int8_t x208 = INT8_MIN;
int32_t x218 = 0;
int32_t t40 = -1;
static uint16_t x225 = 1U;
volatile int32_t t41 = -29418;
volatile int32_t t42 = 2145;
int32_t t44 = 1331;
int16_t x260 = 0;
static int16_t x261 = 4;
int32_t x262 = INT32_MIN;
int64_t x267 = 21908388449690LL;
int32_t x269 = INT32_MIN;
volatile int32_t x296 = 215719491;
int32_t t51 = 579098;
uint32_t x301 = 11801U;
int16_t x306 = -1;
uint16_t x316 = UINT16_MAX;
uint32_t x318 = 396059U;
static int32_t t56 = -1;
int8_t x324 = INT8_MIN;
uint8_t x333 = UINT8_MAX;
int32_t t59 = -33;
int16_t x342 = -1;
volatile int32_t t60 = 1;
static int8_t x352 = -1;
int32_t t62 = -430540189;
volatile int32_t t66 = 9;
int8_t x379 = -26;
volatile int32_t t67 = -805560;
uint16_t x387 = 0U;
static volatile uint32_t x388 = 3160149U;
int64_t x400 = 23615805LL;
uint32_t x401 = UINT32_MAX;
volatile int64_t x404 = 52606804945412LL;
uint8_t x408 = 0U;
uint16_t x418 = UINT16_MAX;
uint8_t x423 = 0U;
volatile int32_t t76 = -4420;
uint64_t x431 = UINT64_MAX;
int32_t t78 = 126;
uint16_t x433 = 832U;
volatile uint16_t x436 = 117U;
int32_t t79 = 385815325;
static int32_t x439 = 12;
static uint32_t x446 = 31U;
int64_t x447 = -1LL;
uint16_t x448 = 2U;
int8_t x450 = -1;
int8_t x463 = 0;
volatile int32_t t84 = -782650743;
uint32_t x467 = 2082441916U;
int16_t x472 = 1136;
volatile uint16_t x477 = 25U;
static volatile int8_t x479 = 1;
uint16_t x489 = 4553U;
uint64_t x492 = 18114682416345LLU;
uint64_t x493 = 1802691LLU;
uint64_t x497 = UINT64_MAX;
uint32_t x500 = 6743U;
int32_t t93 = 5982;
volatile int32_t t94 = 713;
volatile uint16_t x514 = 63U;
static volatile int64_t x516 = -1LL;
int8_t x523 = INT8_MIN;
int16_t x525 = INT16_MAX;
volatile int32_t x526 = 13659468;


void f0(void) {
	int32_t x5 = INT32_MAX;
	int64_t x6 = 1LL;
	int64_t x7 = INT64_MIN;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t0 = -1187535;

	t0 = ((x5|(x6*x7))<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	int8_t x10 = -3;
	int32_t t1 = 118649;

	t1 = ((x9|(x10*x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x14 = 23U;
	int16_t x16 = -1;
	int32_t t2 = -46221;

	t2 = ((x13|(x14*x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 7703229923463680LLU;
	int16_t x19 = 5;
	volatile int32_t t3 = 0;

	t3 = ((x17|(x18*x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = INT8_MIN;
	static uint8_t x26 = 35U;
	int64_t x27 = 95LL;
	uint8_t x28 = 2U;
	static int32_t t4 = -61810;

	t4 = ((x25|(x26*x27))<=x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = 1;
	volatile int8_t x32 = INT8_MIN;
	int32_t t5 = 31242;

	t5 = ((x29|(x30*x31))<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x38 = -1LL;
	static uint32_t x39 = 39819U;
	int64_t x40 = INT64_MIN;

	t6 = ((x37|(x38*x39))<=x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = -136;
	static int32_t t7 = 597036;

	t7 = ((x41|(x42*x43))<=x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x45 = -7;
	static volatile int16_t x46 = INT16_MAX;
	static int16_t x47 = -1;
	static uint16_t x48 = 1U;
	static volatile int32_t t8 = -112;

	t8 = ((x45|(x46*x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	volatile uint32_t x59 = 836U;
	uint32_t x60 = UINT32_MAX;

	t9 = ((x57|(x58*x59))<=x60);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = 10;
	uint8_t x64 = UINT8_MAX;
	static int32_t t10 = -262353206;

	t10 = ((x61|(x62*x63))<=x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x65 = INT16_MIN;
	volatile uint64_t x66 = 477183636903197LLU;
	volatile int8_t x67 = 0;
	volatile uint32_t x68 = 3468U;

	t11 = ((x65|(x66*x67))<=x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	volatile int32_t x70 = 14125452;
	volatile int64_t x71 = 10929LL;
	int8_t x72 = 0;
	static int32_t t12 = 506682;

	t12 = ((x69|(x70*x71))<=x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 138539394280006385LLU;
	volatile uint16_t x74 = 41U;
	uint32_t x75 = 855790311U;
	volatile int8_t x76 = 7;
	volatile int32_t t13 = -7420212;

	t13 = ((x73|(x74*x75))<=x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 16375320U;
	uint64_t x80 = 40991147621LLU;
	volatile int32_t t14 = 4;

	t14 = ((x77|(x78*x79))<=x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = 1008;
	static volatile int16_t x82 = 4253;
	volatile uint64_t x84 = UINT64_MAX;

	t15 = ((x81|(x82*x83))<=x84);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 38U;
	uint16_t x86 = 22U;
	int32_t x87 = -3847946;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t16 = 419541;

	t16 = ((x85|(x86*x87))<=x88);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x90 = 7770616LL;
	int16_t x91 = INT16_MIN;
	volatile uint16_t x92 = 4947U;
	static volatile int32_t t17 = -2738697;

	t17 = ((x89|(x90*x91))<=x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	int8_t x94 = -3;
	uint32_t x95 = 22U;
	static int16_t x96 = -1;
	static int32_t t18 = -493371;

	t18 = ((x93|(x94*x95))<=x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = 28;
	volatile int32_t t19 = -2;

	t19 = ((x101|(x102*x103))<=x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 1928320248351LLU;
	uint64_t x106 = 13LLU;
	int64_t x107 = INT64_MAX;
	int64_t x108 = 29LL;
	int32_t t20 = -2163;

	t20 = ((x105|(x106*x107))<=x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x109 = 276U;
	volatile int16_t x110 = -1;
	int32_t x111 = 69621336;
	uint8_t x112 = 3U;

	t21 = ((x109|(x110*x111))<=x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = 10;
	int32_t x114 = INT32_MIN;
	static volatile uint32_t x115 = 740333761U;
	volatile int8_t x116 = 3;
	int32_t t22 = -58;

	t22 = ((x113|(x114*x115))<=x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 7U;
	uint8_t x119 = UINT8_MAX;
	int32_t x120 = 4565358;
	volatile int32_t t23 = -1;

	t23 = ((x117|(x118*x119))<=x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = 7U;
	static int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	volatile int32_t x124 = 753;
	int32_t t24 = 41;

	t24 = ((x121|(x122*x123))<=x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x125 = -227236042LL;
	int32_t x126 = INT32_MIN;
	uint32_t x127 = 1U;
	volatile int16_t x128 = -300;
	static int32_t t25 = 10202449;

	t25 = ((x125|(x126*x127))<=x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MAX;
	static uint64_t x130 = 709028790072739692LLU;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = 57960;
	int32_t t26 = -9616310;

	t26 = ((x129|(x130*x131))<=x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = 30627;
	uint64_t x138 = 247591925220264934LLU;
	static int8_t x139 = INT8_MIN;
	uint16_t x140 = 224U;
	volatile int32_t t27 = 1368;

	t27 = ((x137|(x138*x139))<=x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t28 = 2014;

	t28 = ((x141|(x142*x143))<=x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	static int16_t x152 = -51;
	volatile int32_t t29 = -265536;

	t29 = ((x149|(x150*x151))<=x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile uint16_t x159 = 2591U;
	int8_t x160 = INT8_MAX;
	volatile int32_t t30 = 521200706;

	t30 = ((x157|(x158*x159))<=x160);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = -1LL;
	uint16_t x163 = 2557U;
	int16_t x164 = -337;
	static int32_t t31 = -394;

	t31 = ((x161|(x162*x163))<=x164);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -1;
	int32_t x170 = INT32_MIN;
	int64_t x171 = -1LL;
	static int32_t t32 = -1278;

	t32 = ((x169|(x170*x171))<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = -318;
	uint16_t x174 = 249U;
	volatile int32_t x175 = -1;
	int32_t x176 = INT32_MIN;

	t33 = ((x173|(x174*x175))<=x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x177 = INT8_MIN;
	int32_t t34 = 24916543;

	t34 = ((x177|(x178*x179))<=x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = -2;
	int8_t x187 = 1;
	int32_t t35 = -255;

	t35 = ((x185|(x186*x187))<=x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = 1;
	volatile uint64_t x199 = UINT64_MAX;
	static int8_t x200 = INT8_MAX;

	t36 = ((x197|(x198*x199))<=x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = 48;
	volatile uint16_t x203 = 18141U;
	volatile int32_t t37 = -96737170;

	t37 = ((x201|(x202*x203))<=x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = 0;
	static int8_t x206 = -1;
	uint8_t x207 = 41U;
	int32_t t38 = 113;

	t38 = ((x205|(x206*x207))<=x208);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x213 = 1;
	int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t39 = 27;

	t39 = ((x213|(x214*x215))<=x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x217 = INT8_MIN;
	int32_t x219 = 478289;
	int32_t x220 = 0;

	t40 = ((x217|(x218*x219))<=x220);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x226 = -1LL;
	volatile uint32_t x227 = 163U;
	uint64_t x228 = 366155LLU;

	t41 = ((x225|(x226*x227))<=x228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = -1;
	volatile uint32_t x238 = 10028U;
	static int16_t x239 = 2;
	static volatile int8_t x240 = INT8_MAX;

	t42 = ((x237|(x238*x239))<=x240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x241 = UINT32_MAX;
	static int32_t x242 = INT32_MAX;
	volatile uint64_t x243 = 1618172LLU;
	static uint16_t x244 = 0U;
	volatile int32_t t43 = -476771;

	t43 = ((x241|(x242*x243))<=x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x253 = -1;
	static int32_t x254 = 0;
	volatile uint8_t x255 = 6U;
	int32_t x256 = 48;

	t44 = ((x253|(x254*x255))<=x256);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x257 = -1;
	static volatile int8_t x258 = -1;
	uint16_t x259 = 615U;
	volatile int32_t t45 = 10506;

	t45 = ((x257|(x258*x259))<=x260);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x263 = -1LL;
	uint64_t x264 = 356019LLU;
	volatile int32_t t46 = -2678;

	t46 = ((x261|(x262*x263))<=x264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x265 = -134;
	int16_t x266 = INT16_MIN;
	volatile int32_t x268 = -17724677;
	int32_t t47 = -494395151;

	t47 = ((x265|(x266*x267))<=x268);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x270 = 3110617;
	int64_t x271 = -40848975LL;
	int16_t x272 = -2;
	volatile int32_t t48 = 2221342;

	t48 = ((x269|(x270*x271))<=x272);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = 0;
	static uint16_t x274 = 121U;
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;
	volatile int32_t t49 = -3667981;

	t49 = ((x273|(x274*x275))<=x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x277 = 257622422LLU;
	volatile int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MAX;
	int32_t t50 = -4249311;

	t50 = ((x277|(x278*x279))<=x280);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x293 = 15519U;
	int16_t x294 = INT16_MIN;
	static uint32_t x295 = 318193U;

	t51 = ((x293|(x294*x295))<=x296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x302 = 71LL;
	uint16_t x303 = 16U;
	static volatile uint64_t x304 = 60248LLU;
	static int32_t t52 = -1882;

	t52 = ((x301|(x302*x303))<=x304);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x305 = 92627U;
	static int8_t x307 = INT8_MAX;
	int32_t x308 = INT32_MAX;
	volatile int32_t t53 = 72;

	t53 = ((x305|(x306*x307))<=x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	static int32_t t54 = 60;

	t54 = ((x309|(x310*x311))<=x312);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = -20;
	int64_t x314 = INT64_MIN;
	static uint8_t x315 = 0U;
	int32_t t55 = 46435439;

	t55 = ((x313|(x314*x315))<=x316);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x317 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;

	t56 = ((x317|(x318*x319))<=x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 0U;
	volatile int32_t t57 = 99514;

	t57 = ((x321|(x322*x323))<=x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = 204949788943719005LL;
	uint32_t x326 = UINT32_MAX;
	static uint8_t x327 = 4U;
	volatile uint16_t x328 = 15U;
	volatile int32_t t58 = -136;

	t58 = ((x325|(x326*x327))<=x328);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x334 = -1LL;
	uint8_t x335 = 7U;
	static uint64_t x336 = 71779263LLU;

	t59 = ((x333|(x334*x335))<=x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x341 = -23605676818LL;
	int16_t x343 = 0;
	static uint64_t x344 = 1082583981156040LLU;

	t60 = ((x341|(x342*x343))<=x344);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x349 = INT32_MAX;
	int32_t x350 = 724;
	int16_t x351 = INT16_MIN;
	volatile int32_t t61 = -6382180;

	t61 = ((x349|(x350*x351))<=x352);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x353 = 30362;
	uint16_t x354 = 19992U;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;

	t62 = ((x353|(x354*x355))<=x356);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x357 = UINT32_MAX;
	volatile uint16_t x358 = UINT16_MAX;
	volatile uint64_t x359 = 61808494139611LLU;
	static int64_t x360 = INT64_MAX;
	int32_t t63 = 1090;

	t63 = ((x357|(x358*x359))<=x360);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x361 = 1532U;
	uint64_t x362 = 808399294867129LLU;
	volatile int64_t x363 = INT64_MIN;
	volatile int64_t x364 = -2LL;
	static volatile int32_t t64 = -20110453;

	t64 = ((x361|(x362*x363))<=x364);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = -2189542906442LL;
	int16_t x367 = 2073;
	static volatile int16_t x368 = INT16_MAX;
	int32_t t65 = 1237;

	t65 = ((x365|(x366*x367))<=x368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x369 = INT16_MIN;
	volatile int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	int64_t x372 = INT64_MIN;

	t66 = ((x369|(x370*x371))<=x372);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x377 = 13852U;
	int32_t x378 = -1;
	volatile uint8_t x380 = 9U;

	t67 = ((x377|(x378*x379))<=x380);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x381 = INT32_MIN;
	static int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	static volatile uint64_t x384 = 1012766623325206LLU;
	volatile int32_t t68 = 1801;

	t68 = ((x381|(x382*x383))<=x384);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int32_t t69 = -803118;

	t69 = ((x385|(x386*x387))<=x388);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x393 = 27U;
	int8_t x394 = -1;
	static int32_t x395 = -1;
	volatile int32_t x396 = INT32_MAX;
	static int32_t t70 = -989;

	t70 = ((x393|(x394*x395))<=x396);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x397 = 16945669953933LLU;
	uint32_t x398 = 1474U;
	uint64_t x399 = 679331291531LLU;
	int32_t t71 = 56102473;

	t71 = ((x397|(x398*x399))<=x400);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x402 = -5071415913852LL;
	uint32_t x403 = 1439817U;
	volatile int32_t t72 = -26303;

	t72 = ((x401|(x402*x403))<=x404);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x405 = 3732U;
	static uint32_t x406 = 872104U;
	volatile uint32_t x407 = 66244713U;
	static volatile int32_t t73 = -269556;

	t73 = ((x405|(x406*x407))<=x408);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x409 = INT8_MAX;
	static uint8_t x410 = 1U;
	static int64_t x411 = -1LL;
	volatile uint32_t x412 = 101888U;
	volatile int32_t t74 = -360654;

	t74 = ((x409|(x410*x411))<=x412);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x417 = UINT16_MAX;
	int16_t x419 = 0;
	int32_t x420 = -1;
	volatile int32_t t75 = -1055245738;

	t75 = ((x417|(x418*x419))<=x420);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x421 = INT32_MIN;
	uint16_t x422 = 15298U;
	volatile int32_t x424 = 55178;

	t76 = ((x421|(x422*x423))<=x424);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = -1;
	volatile int16_t x426 = INT16_MIN;
	int8_t x427 = -16;
	uint8_t x428 = 3U;
	volatile int32_t t77 = 1212123;

	t77 = ((x425|(x426*x427))<=x428);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x429 = INT16_MAX;
	int64_t x430 = INT64_MIN;
	volatile uint16_t x432 = 0U;

	t78 = ((x429|(x430*x431))<=x432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x434 = 59U;
	int64_t x435 = -5699822984LL;

	t79 = ((x433|(x434*x435))<=x436);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = INT32_MIN;
	uint32_t x438 = 43U;
	static int8_t x440 = -15;
	static int32_t t80 = 10245;

	t80 = ((x437|(x438*x439))<=x440);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = INT8_MIN;
	int32_t t81 = -64;

	t81 = ((x445|(x446*x447))<=x448);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x449 = INT64_MIN;
	uint16_t x451 = UINT16_MAX;
	int16_t x452 = 3;
	volatile int32_t t82 = 2;

	t82 = ((x449|(x450*x451))<=x452);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x457 = INT8_MIN;
	static int8_t x458 = INT8_MIN;
	volatile uint64_t x459 = 22351LLU;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t83 = 48413232;

	t83 = ((x457|(x458*x459))<=x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x461 = 2U;
	int64_t x462 = -19762327087986LL;
	int32_t x464 = 0;

	t84 = ((x461|(x462*x463))<=x464);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x465 = UINT32_MAX;
	static int16_t x466 = -15238;
	static int32_t x468 = INT32_MAX;
	volatile int32_t t85 = 977438922;

	t85 = ((x465|(x466*x467))<=x468);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x469 = INT64_MIN;
	volatile int64_t x470 = -1LL;
	uint16_t x471 = 0U;
	int32_t t86 = -11;

	t86 = ((x469|(x470*x471))<=x472);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x473 = UINT32_MAX;
	int16_t x474 = 172;
	volatile uint64_t x475 = 30370255LLU;
	static int8_t x476 = INT8_MIN;
	static volatile int32_t t87 = 1125;

	t87 = ((x473|(x474*x475))<=x476);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x478 = INT32_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t88 = 405185;

	t88 = ((x477|(x478*x479))<=x480);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x481 = 52U;
	volatile int16_t x482 = INT16_MAX;
	static volatile uint32_t x483 = 12568U;
	uint8_t x484 = 61U;
	int32_t t89 = -3306;

	t89 = ((x481|(x482*x483))<=x484);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x485 = -225;
	int32_t x486 = 3956430;
	uint64_t x487 = 164280527585834LLU;
	int32_t x488 = -1;
	static int32_t t90 = 344131574;

	t90 = ((x485|(x486*x487))<=x488);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x490 = 16U;
	int16_t x491 = INT16_MIN;
	volatile int32_t t91 = 2115;

	t91 = ((x489|(x490*x491))<=x492);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x494 = -1288793;
	uint32_t x495 = 30110U;
	int8_t x496 = -3;
	static volatile int32_t t92 = -15;

	t92 = ((x493|(x494*x495))<=x496);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x498 = -1;
	volatile int64_t x499 = INT64_MAX;

	t93 = ((x497|(x498*x499))<=x500);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x505 = INT64_MIN;
	uint32_t x506 = 23264U;
	int32_t x507 = INT32_MIN;
	int32_t x508 = INT32_MIN;

	t94 = ((x505|(x506*x507))<=x508);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x509 = INT32_MIN;
	uint64_t x510 = 42550768LLU;
	int8_t x511 = INT8_MIN;
	int8_t x512 = -1;
	int32_t t95 = -9543256;

	t95 = ((x509|(x510*x511))<=x512);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x513 = UINT32_MAX;
	int16_t x515 = INT16_MIN;
	int32_t t96 = -42;

	t96 = ((x513|(x514*x515))<=x516);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x517 = 64;
	int32_t x518 = INT32_MIN;
	static int8_t x519 = 1;
	uint16_t x520 = 606U;
	volatile int32_t t97 = 126303892;

	t97 = ((x517|(x518*x519))<=x520);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x521 = 10228061677015LL;
	int16_t x522 = INT16_MAX;
	int8_t x524 = 18;
	int32_t t98 = -800;

	t98 = ((x521|(x522*x523))<=x524);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x527 = 186U;
	uint64_t x528 = 0LLU;
	static int32_t t99 = 64289788;

	t99 = ((x525|(x526*x527))<=x528);

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

