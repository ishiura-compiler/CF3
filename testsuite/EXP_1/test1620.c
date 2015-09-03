#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = 2U;
int16_t x7 = 5175;
uint8_t x8 = 3U;
uint64_t x12 = UINT64_MAX;
uint16_t x19 = 170U;
uint32_t x21 = UINT32_MAX;
volatile uint16_t x26 = UINT16_MAX;
static volatile int8_t x27 = INT8_MAX;
volatile int32_t t6 = 1510048;
volatile int8_t x29 = 0;
uint8_t x31 = 3U;
int16_t x42 = INT16_MIN;
int16_t x43 = 18;
int32_t t11 = 444058;
uint64_t x52 = 214LLU;
int16_t x55 = -1;
int64_t x56 = INT64_MIN;
volatile int32_t t14 = 84450022;
int8_t x61 = INT8_MIN;
volatile uint32_t x65 = UINT32_MAX;
volatile uint16_t x69 = UINT16_MAX;
int16_t x73 = INT16_MAX;
int64_t x78 = 1723675538332107LL;
uint32_t x79 = 761157U;
int8_t x81 = -1;
static int32_t x83 = INT32_MIN;
static int32_t x86 = -1;
volatile int32_t t21 = -199;
static volatile int64_t x89 = INT64_MAX;
volatile int32_t t22 = 1942307;
uint8_t x106 = 1U;
uint16_t x115 = UINT16_MAX;
volatile int16_t x116 = INT16_MIN;
int32_t x117 = INT32_MAX;
volatile int8_t x122 = -1;
uint32_t x124 = UINT32_MAX;
int32_t x133 = -354094953;
int16_t x139 = 85;
int32_t x140 = 760252160;
static int32_t t35 = 108295;
int8_t x152 = 0;
int32_t x153 = INT32_MIN;
int8_t x160 = INT8_MAX;
volatile int32_t t39 = -3;
static int32_t x161 = -1;
int32_t x165 = INT32_MIN;
static volatile int16_t x169 = 1554;
int8_t x170 = -1;
static uint8_t x171 = 59U;
static int32_t t42 = -1;
int64_t x178 = -1LL;
uint16_t x183 = UINT16_MAX;
volatile int32_t t45 = 63633224;
uint64_t x189 = UINT64_MAX;
int32_t x190 = -913;
static volatile int32_t t47 = 1;
int16_t x202 = -1;
int64_t x204 = INT64_MIN;
int32_t t50 = -5;
int8_t x211 = INT8_MAX;
volatile int32_t t54 = -150049375;
volatile int16_t x223 = -1;
static volatile int32_t t55 = 1;
static volatile int32_t t56 = 29;
int32_t x229 = INT32_MIN;
static int64_t x233 = 10490LL;
volatile int32_t x234 = 22169204;
uint8_t x235 = UINT8_MAX;
uint32_t x238 = UINT32_MAX;
int32_t x246 = -167181811;
uint32_t x257 = UINT32_MAX;
uint32_t x260 = 1U;
int16_t x268 = INT16_MAX;
static int64_t x279 = 2LL;
int32_t x280 = INT32_MAX;
volatile int32_t t69 = -3737226;
int8_t x284 = -1;
int32_t t70 = -18652245;
int64_t x286 = -1LL;
int32_t x287 = INT32_MIN;
int16_t x290 = 1;
uint32_t x291 = UINT32_MAX;
volatile int16_t x300 = INT16_MIN;
static int8_t x307 = INT8_MIN;
int8_t x313 = -1;
volatile int32_t t80 = 4072;
volatile int32_t t82 = 185736296;
int32_t x344 = -1283718;
int16_t x348 = INT16_MAX;
volatile int32_t t87 = -6553440;
int64_t x353 = 24523038275130498LL;
volatile int64_t x354 = -1227559LL;
volatile int16_t x355 = -115;
volatile int32_t t88 = 15280;
int32_t x358 = -979778;
int32_t x364 = 61644;
int8_t x366 = INT8_MAX;
int8_t x367 = -1;
volatile int32_t t92 = -322;
int32_t x376 = INT32_MAX;
int16_t x377 = INT16_MAX;
int16_t x380 = INT16_MIN;
volatile int8_t x381 = INT8_MAX;
volatile int32_t t96 = 189180214;
volatile uint64_t x391 = 237861085108362330LLU;
int8_t x392 = INT8_MIN;
uint32_t x395 = 1709419448U;
int16_t x399 = -1;
volatile int32_t t99 = -50131;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	static int16_t x2 = 0;
	int16_t x3 = -378;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = 449;

	t0 = (((x1<=x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 1;
	volatile int32_t t1 = -957855767;

	t1 = (((x5<=x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 441467750LLU;
	int32_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	volatile int32_t t2 = 56685;

	t2 = (((x9<=x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	static volatile int8_t x14 = 4;
	volatile int16_t x15 = -1;
	int8_t x16 = 1;
	volatile int32_t t3 = 39;

	t3 = (((x13<=x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static int8_t x18 = 21;
	static uint16_t x20 = 35U;
	int32_t t4 = 0;

	t4 = (((x17<=x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x22 = -411LL;
	uint8_t x23 = 0U;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -3715;

	t5 = (((x21<=x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int8_t x28 = -3;

	t6 = (((x25<=x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	volatile uint16_t x32 = 7357U;
	volatile int32_t t7 = -34120972;

	t7 = (((x29<=x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 16LLU;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int32_t x35 = -1;
	uint16_t x36 = 14U;
	static int32_t t8 = 12779;

	t8 = (((x33<=x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int16_t x38 = -1;
	uint64_t x39 = UINT64_MAX;
	volatile uint8_t x40 = 12U;
	int32_t t9 = 116;

	t9 = (((x37<=x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int32_t x44 = INT32_MAX;
	static int32_t t10 = 15;

	t10 = (((x41<=x42)==x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 8;
	uint64_t x46 = 42052261574996LLU;
	uint16_t x47 = 901U;
	uint64_t x48 = UINT64_MAX;

	t11 = (((x45<=x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -256620894LL;
	int8_t x50 = -31;
	volatile int32_t x51 = INT32_MAX;
	volatile int32_t t12 = 3504;

	t12 = (((x49<=x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 11;
	int8_t x54 = -1;
	int32_t t13 = 587;

	t13 = (((x53<=x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1296362221002312LLU;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	volatile int32_t x60 = INT32_MIN;

	t14 = (((x57<=x58)==x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x62 = 9U;
	static volatile uint32_t x63 = UINT32_MAX;
	static int64_t x64 = 1464LL;
	static int32_t t15 = -13336852;

	t15 = (((x61<=x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 0U;
	int16_t x67 = -1;
	uint32_t x68 = 25800962U;
	int32_t t16 = 28;

	t16 = (((x65<=x66)==x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = INT64_MIN;
	int16_t x71 = -103;
	volatile uint32_t x72 = UINT32_MAX;
	static int32_t t17 = 5986;

	t17 = (((x69<=x70)==x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x74 = INT64_MIN;
	static int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 1011036112;

	t18 = (((x73<=x74)==x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 351;

	t19 = (((x77<=x78)==x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	int32_t x84 = 31399417;
	int32_t t20 = 220188;

	t20 = (((x81<=x82)==x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	uint16_t x87 = 0U;
	static int8_t x88 = 0;

	t21 = (((x85<=x86)==x87)==x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = 0;
	int64_t x91 = INT64_MIN;
	volatile int32_t x92 = INT32_MAX;

	t22 = (((x89<=x90)==x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static volatile int32_t x94 = INT32_MIN;
	int64_t x95 = 6393441LL;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 13024565;

	t23 = (((x93<=x94)==x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 132526U;
	uint16_t x98 = 27806U;
	int16_t x99 = 4;
	int64_t x100 = INT64_MIN;
	static int32_t t24 = 11882;

	t24 = (((x97<=x98)==x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int32_t x102 = -1;
	int32_t x103 = -1;
	uint8_t x104 = 0U;
	int32_t t25 = -131839872;

	t25 = (((x101<=x102)==x103)==x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	uint64_t x107 = 5LLU;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 70872154;

	t26 = (((x105<=x106)==x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MIN;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = 0;
	static int32_t t27 = 14470;

	t27 = (((x109<=x110)==x111)==x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x114 = 244U;
	volatile int32_t t28 = 0;

	t28 = (((x113<=x114)==x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 8U;
	static uint64_t x120 = 2353718931330578355LLU;
	volatile int32_t t29 = -3602059;

	t29 = (((x117<=x118)==x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 0;
	int8_t x123 = 22;
	volatile int32_t t30 = 1624497;

	t30 = (((x121<=x122)==x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -17344462;
	uint16_t x126 = 2U;
	static int64_t x127 = 2126292483824LL;
	uint8_t x128 = 13U;
	int32_t t31 = 9554283;

	t31 = (((x125<=x126)==x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = -512481;
	uint32_t x131 = 3523U;
	static volatile uint64_t x132 = 4153LLU;
	volatile int32_t t32 = -391071680;

	t32 = (((x129<=x130)==x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = 68684536086168630LL;
	int64_t x135 = 16940737387224LL;
	uint32_t x136 = UINT32_MAX;
	static int32_t t33 = 5;

	t33 = (((x133<=x134)==x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 0U;
	int16_t x138 = INT16_MIN;
	int32_t t34 = 4;

	t34 = (((x137<=x138)==x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	static volatile int64_t x142 = INT64_MIN;
	uint8_t x143 = 2U;
	int64_t x144 = INT64_MIN;

	t35 = (((x141<=x142)==x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = INT64_MIN;
	int8_t x148 = -2;
	int32_t t36 = 1160;

	t36 = (((x145<=x146)==x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	volatile uint32_t x150 = 1U;
	uint16_t x151 = 5659U;
	volatile int32_t t37 = 15664;

	t37 = (((x149<=x150)==x151)==x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = UINT32_MAX;
	uint8_t x155 = 0U;
	uint8_t x156 = 127U;
	int32_t t38 = -152450;

	t38 = (((x153<=x154)==x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	static int64_t x158 = INT64_MIN;
	int8_t x159 = 20;

	t39 = (((x157<=x158)==x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = -1;
	int8_t x164 = -48;
	int32_t t40 = 4346;

	t40 = (((x161<=x162)==x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x166 = 0U;
	static int64_t x167 = -652LL;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -201545067;

	t41 = (((x165<=x166)==x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x172 = -197;

	t42 = (((x169<=x170)==x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	volatile int8_t x174 = 13;
	uint32_t x175 = 7U;
	int8_t x176 = -5;
	int32_t t43 = -176;

	t43 = (((x173<=x174)==x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x179 = INT64_MAX;
	volatile uint64_t x180 = 9805147870935LLU;
	volatile int32_t t44 = 0;

	t44 = (((x177<=x178)==x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 17965344134LLU;
	uint8_t x182 = UINT8_MAX;
	uint64_t x184 = UINT64_MAX;

	t45 = (((x181<=x182)==x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 245U;
	int64_t x186 = 7047LL;
	volatile int8_t x187 = 60;
	uint64_t x188 = 101LLU;
	volatile int32_t t46 = 34501;

	t46 = (((x185<=x186)==x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x191 = 30465U;
	int16_t x192 = INT16_MAX;

	t47 = (((x189<=x190)==x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 13236;

	t48 = (((x193<=x194)==x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int16_t x198 = -1;
	int16_t x199 = -1;
	int64_t x200 = INT64_MAX;
	int32_t t49 = 40795650;

	t49 = (((x197<=x198)==x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x203 = INT16_MIN;

	t50 = (((x201<=x202)==x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x206 = 44341473U;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = 56;
	volatile int32_t t51 = 1180;

	t51 = (((x205<=x206)==x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	static volatile uint16_t x210 = UINT16_MAX;
	static int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -473;

	t52 = (((x209<=x210)==x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	static uint32_t x214 = 2U;
	static uint32_t x215 = 27289U;
	static uint64_t x216 = 21281099LLU;
	volatile int32_t t53 = -4;

	t53 = (((x213<=x214)==x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int32_t x218 = 718669526;
	static uint8_t x219 = 36U;
	uint32_t x220 = 378197U;

	t54 = (((x217<=x218)==x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 3U;
	static int8_t x222 = INT8_MIN;
	int8_t x224 = -1;

	t55 = (((x221<=x222)==x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = INT64_MAX;
	int64_t x226 = INT64_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t x228 = 2987285654456533161LLU;

	t56 = (((x225<=x226)==x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	volatile int16_t x232 = 35;
	int32_t t57 = 225343;

	t57 = (((x229<=x230)==x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x236 = INT8_MAX;
	static volatile int32_t t58 = 3;

	t58 = (((x233<=x234)==x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	uint16_t x239 = 797U;
	volatile int8_t x240 = 28;
	int32_t t59 = 18;

	t59 = (((x237<=x238)==x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 1U;
	volatile int32_t x243 = INT32_MIN;
	int32_t x244 = -35141;
	int32_t t60 = -79522;

	t60 = (((x241<=x242)==x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 3U;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = -2824572LL;
	volatile int32_t t61 = 215370;

	t61 = (((x245<=x246)==x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 3U;
	int8_t x250 = 31;
	int64_t x251 = 0LL;
	int8_t x252 = -1;
	volatile int32_t t62 = 94;

	t62 = (((x249<=x250)==x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -15;
	uint32_t x254 = 22881U;
	volatile int8_t x255 = INT8_MIN;
	volatile uint64_t x256 = UINT64_MAX;
	int32_t t63 = -1718;

	t63 = (((x253<=x254)==x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 397428U;
	uint64_t x259 = 1490638261531LLU;
	int32_t t64 = 309;

	t64 = (((x257<=x258)==x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 41U;
	volatile int64_t x262 = INT64_MIN;
	static volatile uint16_t x263 = UINT16_MAX;
	static int16_t x264 = -1;
	static volatile int32_t t65 = 1134540;

	t65 = (((x261<=x262)==x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = -1;
	volatile uint32_t x267 = 28977U;
	volatile int32_t t66 = 18;

	t66 = (((x265<=x266)==x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = -1;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t67 = 78107853;

	t67 = (((x269<=x270)==x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 43370149034060588LLU;
	int8_t x274 = INT8_MIN;
	volatile uint64_t x275 = UINT64_MAX;
	volatile uint32_t x276 = UINT32_MAX;
	int32_t t68 = 1;

	t68 = (((x273<=x274)==x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 0U;
	uint64_t x278 = 902LLU;

	t69 = (((x277<=x278)==x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 1115;
	int32_t x282 = -1;
	uint16_t x283 = 13629U;

	t70 = (((x281<=x282)==x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x288 = 1;
	volatile int32_t t71 = 392209;

	t71 = (((x285<=x286)==x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 5599876831LLU;
	int64_t x292 = 113190LL;
	volatile int32_t t72 = -25;

	t72 = (((x289<=x290)==x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	static int64_t x294 = -1LL;
	static uint64_t x295 = 234LLU;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 83401;

	t73 = (((x293<=x294)==x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 24191U;
	int8_t x298 = -1;
	volatile uint64_t x299 = 7184769698901488LLU;
	int32_t t74 = 10362;

	t74 = (((x297<=x298)==x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 45;
	int32_t x302 = INT32_MAX;
	int8_t x303 = -54;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -123744;

	t75 = (((x301<=x302)==x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MAX;
	int64_t x306 = INT64_MIN;
	uint16_t x308 = 13577U;
	static volatile int32_t t76 = 9200974;

	t76 = (((x305<=x306)==x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = INT64_MAX;
	int16_t x310 = -10;
	static volatile uint8_t x311 = 1U;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t77 = -340943276;

	t77 = (((x309<=x310)==x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x314 = -215;
	int32_t x315 = INT32_MIN;
	int32_t x316 = 1056;
	volatile int32_t t78 = 1;

	t78 = (((x313<=x314)==x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 2U;
	int16_t x318 = 7;
	uint64_t x319 = 599053720441125LLU;
	static uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = -49918;

	t79 = (((x317<=x318)==x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -5724;
	uint8_t x322 = 13U;
	int32_t x323 = 33804958;
	volatile uint32_t x324 = 343U;

	t80 = (((x321<=x322)==x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	uint32_t x326 = 25591U;
	static int64_t x327 = INT64_MIN;
	static uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = 146;

	t81 = (((x325<=x326)==x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 28U;
	volatile int64_t x330 = INT64_MAX;
	uint16_t x331 = 18U;
	uint8_t x332 = 1U;

	t82 = (((x329<=x330)==x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x333 = UINT64_MAX;
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	int8_t x336 = -1;
	int32_t t83 = 350;

	t83 = (((x333<=x334)==x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	static int64_t x338 = INT64_MIN;
	uint8_t x339 = 1U;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 3;

	t84 = (((x337<=x338)==x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 6677309LL;
	uint16_t x342 = 9755U;
	uint64_t x343 = 169LLU;
	volatile int32_t t85 = 1;

	t85 = (((x341<=x342)==x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	static int32_t x346 = 437745;
	volatile int8_t x347 = 1;
	volatile int32_t t86 = -5011408;

	t86 = (((x345<=x346)==x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MAX;

	t87 = (((x349<=x350)==x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x356 = INT8_MAX;

	t88 = (((x353<=x354)==x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -255;
	uint16_t x359 = 126U;
	int32_t x360 = -785080;
	volatile int32_t t89 = 117381696;

	t89 = (((x357<=x358)==x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	static volatile uint32_t x362 = UINT32_MAX;
	int64_t x363 = INT64_MAX;
	static int32_t t90 = 519;

	t90 = (((x361<=x362)==x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int64_t x368 = -1LL;
	int32_t t91 = -39124;

	t91 = (((x365<=x366)==x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = -1;
	int8_t x371 = INT8_MAX;
	volatile uint64_t x372 = 537776484632556LLU;

	t92 = (((x369<=x370)==x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	volatile uint16_t x374 = 17716U;
	volatile int8_t x375 = -1;
	int32_t t93 = 14737587;

	t93 = (((x373<=x374)==x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	int32_t t94 = -43;

	t94 = (((x377<=x378)==x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	volatile int8_t x384 = -6;
	volatile int32_t t95 = 25;

	t95 = (((x381<=x382)==x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 13U;
	int32_t x386 = -75;
	uint8_t x387 = 1U;
	uint16_t x388 = 15992U;

	t96 = (((x385<=x386)==x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	volatile int32_t t97 = -2;

	t97 = (((x389<=x390)==x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 47U;
	int8_t x394 = INT8_MIN;
	uint16_t x396 = 2U;
	volatile int32_t t98 = 89101;

	t98 = (((x393<=x394)==x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -10901;
	volatile int64_t x398 = INT64_MIN;
	int16_t x400 = INT16_MIN;

	t99 = (((x397<=x398)==x399)==x400);

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

