#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
uint32_t x3 = UINT32_MAX;
uint8_t x7 = UINT8_MAX;
volatile int32_t x14 = -1026;
int32_t x15 = INT32_MIN;
static volatile int32_t x20 = -1;
volatile int8_t x21 = INT8_MIN;
int8_t x24 = -1;
int8_t x32 = INT8_MIN;
uint32_t x37 = 10443257U;
int32_t t9 = 8415;
int8_t x42 = -1;
uint64_t x44 = 157085770592772463LLU;
static volatile uint32_t x46 = 0U;
volatile uint64_t x47 = 46LLU;
volatile int32_t t11 = -1491804;
uint8_t x58 = UINT8_MAX;
static volatile int32_t t14 = 391519806;
int8_t x66 = INT8_MIN;
uint16_t x70 = 1U;
int32_t t17 = -508592348;
volatile uint32_t x73 = 463U;
int32_t x74 = INT32_MIN;
uint32_t x76 = 1U;
int8_t x78 = INT8_MAX;
static int16_t x82 = INT16_MIN;
int16_t x83 = INT16_MAX;
volatile int32_t t22 = -323;
static int8_t x100 = INT8_MIN;
int16_t x105 = -224;
static uint8_t x111 = 11U;
volatile int32_t t28 = 8;
int16_t x117 = INT16_MIN;
volatile int8_t x122 = -1;
int32_t t32 = -528784;
int16_t x141 = INT16_MIN;
int64_t x148 = INT64_MIN;
volatile int32_t t36 = -18797779;
int64_t x154 = -1901695889890685LL;
uint8_t x155 = UINT8_MAX;
int32_t x164 = -447;
volatile int32_t t40 = -22;
volatile int8_t x166 = INT8_MIN;
int8_t x167 = INT8_MAX;
int8_t x169 = 1;
volatile int32_t t42 = 11432676;
volatile int32_t x173 = INT32_MIN;
static volatile int64_t x174 = 1717007LL;
uint32_t x176 = UINT32_MAX;
int16_t x179 = -1;
static int64_t x183 = -1LL;
static int16_t x186 = -7;
int16_t x187 = INT16_MAX;
int32_t x193 = INT32_MIN;
int16_t x199 = -20;
static int16_t x203 = INT16_MIN;
uint32_t x206 = 544018U;
int8_t x212 = INT8_MIN;
uint32_t x222 = UINT32_MAX;
int8_t x236 = INT8_MAX;
int8_t x246 = -1;
int32_t t63 = 0;
uint8_t x271 = UINT8_MAX;
int8_t x272 = INT8_MIN;
uint64_t x277 = 402674533633978LLU;
uint16_t x278 = UINT16_MAX;
volatile uint32_t x282 = 384995U;
volatile uint16_t x285 = 32U;
static int8_t x288 = 1;
volatile uint16_t x290 = 57U;
int64_t x294 = INT64_MAX;
int8_t x301 = 1;
int8_t x305 = -1;
int8_t x309 = -49;
uint8_t x312 = 3U;
uint32_t x318 = UINT32_MAX;
int8_t x319 = INT8_MIN;
volatile int32_t t80 = -26222275;
int32_t t81 = -15501439;
volatile int32_t t82 = -5000;
static int64_t x333 = 5024139754491004LL;
volatile int32_t t83 = -809;
uint32_t x337 = UINT32_MAX;
int8_t x338 = INT8_MAX;
int32_t x339 = INT32_MIN;
int16_t x341 = INT16_MAX;
uint32_t x342 = 43212553U;
int64_t x344 = -1LL;
volatile int32_t t85 = 32125;
int8_t x354 = INT8_MIN;
int16_t x361 = 1210;
int32_t t90 = -1;
static int64_t x379 = -1LL;
volatile int16_t x380 = 36;
static uint32_t x388 = 778482409U;
int32_t x390 = -1;
volatile int32_t x393 = -1;
static uint16_t x395 = 413U;
volatile int32_t t98 = 0;
uint16_t x397 = 6U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -400753;

	t0 = (((x1<=x2)==x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int64_t x6 = 467348LL;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 125238;

	t1 = (((x5<=x6)==x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 11405539LLU;
	uint64_t x10 = 71286421651337924LLU;
	static volatile uint16_t x11 = 29U;
	uint32_t x12 = 424U;
	volatile int32_t t2 = -2047;

	t2 = (((x9<=x10)==x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 433643272U;
	static int64_t x16 = INT64_MIN;
	int32_t t3 = -109094;

	t3 = (((x13<=x14)==x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	static int16_t x18 = INT16_MIN;
	uint8_t x19 = 0U;
	volatile int32_t t4 = 1;

	t4 = (((x17<=x18)==x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int16_t x23 = INT16_MAX;
	int32_t t5 = -2;

	t5 = (((x21<=x22)==x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 15808117163210LLU;
	volatile int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	static int16_t x28 = -1;
	int32_t t6 = -28;

	t6 = (((x25<=x26)==x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int64_t x30 = 6788264979630824LL;
	static int64_t x31 = -6468631472LL;
	static volatile int32_t t7 = -2495;

	t7 = (((x29<=x30)==x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile uint16_t x34 = 122U;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 8;

	t8 = (((x33<=x34)==x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 7932038299LLU;
	uint8_t x39 = 0U;
	int64_t x40 = INT64_MIN;

	t9 = (((x37<=x38)==x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 26320U;
	static volatile int16_t x43 = INT16_MAX;
	volatile int32_t t10 = 60;

	t10 = (((x41<=x42)==x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = UINT64_MAX;
	int8_t x48 = INT8_MIN;

	t11 = (((x45<=x46)==x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	static uint16_t x50 = UINT16_MAX;
	uint8_t x51 = 39U;
	int32_t x52 = -158303;
	int32_t t12 = -1;

	t12 = (((x49<=x50)==x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int64_t x54 = -1LL;
	uint16_t x55 = 1U;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 7095323;

	t13 = (((x53<=x54)==x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int64_t x59 = -156739213612763821LL;
	static int64_t x60 = -27682845874422257LL;

	t14 = (((x57<=x58)==x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint32_t x62 = 5599U;
	int32_t x63 = INT32_MIN;
	static int64_t x64 = -3303760221965166496LL;
	int32_t t15 = -2061;

	t15 = (((x61<=x62)==x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile uint8_t x67 = 2U;
	int32_t x68 = -1;
	int32_t t16 = 2420803;

	t16 = (((x65<=x66)==x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = -60619831106809276LL;

	t17 = (((x69<=x70)==x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x75 = INT32_MIN;
	static volatile int32_t t18 = -85574445;

	t18 = (((x73<=x74)==x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int32_t x79 = -1;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = -134;

	t19 = (((x77<=x78)==x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -605453184;
	volatile int64_t x84 = 2053186558356220235LL;
	volatile int32_t t20 = -3;

	t20 = (((x81<=x82)==x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = -18;
	volatile int16_t x87 = INT16_MAX;
	int32_t x88 = -1;
	int32_t t21 = 12;

	t21 = (((x85<=x86)==x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = 0;
	static int8_t x90 = INT8_MIN;
	static int8_t x91 = -1;
	uint32_t x92 = UINT32_MAX;

	t22 = (((x89<=x90)==x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MAX;
	static uint16_t x94 = 7037U;
	int32_t x95 = -2;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -271;

	t23 = (((x93<=x94)==x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static uint16_t x98 = UINT16_MAX;
	int8_t x99 = 26;
	int32_t t24 = -941225;

	t24 = (((x97<=x98)==x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 7U;
	uint16_t x102 = 79U;
	static int64_t x103 = 5570222985947LL;
	static uint64_t x104 = UINT64_MAX;
	int32_t t25 = -78115;

	t25 = (((x101<=x102)==x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MAX;
	static int32_t x107 = INT32_MAX;
	uint16_t x108 = UINT16_MAX;
	static int32_t t26 = 1;

	t26 = (((x105<=x106)==x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 6;
	static int64_t x110 = INT64_MIN;
	int32_t x112 = INT32_MAX;
	int32_t t27 = -4;

	t27 = (((x109<=x110)==x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = 107431LL;
	int64_t x114 = INT64_MIN;
	volatile int8_t x115 = INT8_MAX;
	uint32_t x116 = UINT32_MAX;

	t28 = (((x113<=x114)==x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x118 = 329U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -986;

	t29 = (((x117<=x118)==x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int16_t x123 = -232;
	int8_t x124 = -1;
	volatile int32_t t30 = 0;

	t30 = (((x121<=x122)==x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	uint16_t x127 = UINT16_MAX;
	static int64_t x128 = INT64_MIN;
	int32_t t31 = -693;

	t31 = (((x125<=x126)==x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -3127753336491115LL;
	static int64_t x130 = -1LL;
	volatile int32_t x131 = INT32_MAX;
	int32_t x132 = -97186;

	t32 = (((x129<=x130)==x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	volatile uint64_t x134 = UINT64_MAX;
	static uint64_t x135 = 7LLU;
	volatile int16_t x136 = INT16_MAX;
	volatile int32_t t33 = -3587;

	t33 = (((x133<=x134)==x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	volatile int8_t x138 = INT8_MAX;
	static int16_t x139 = -1;
	uint8_t x140 = 109U;
	int32_t t34 = -671477275;

	t34 = (((x137<=x138)==x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	volatile int32_t x143 = 39439;
	static int32_t x144 = 20;
	int32_t t35 = 20784478;

	t35 = (((x141<=x142)==x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MAX;
	uint64_t x146 = 6555983LLU;
	volatile uint64_t x147 = 412358LLU;

	t36 = (((x145<=x146)==x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 407U;
	volatile uint32_t x150 = 16919U;
	int32_t x151 = -1;
	volatile int16_t x152 = INT16_MAX;
	volatile int32_t t37 = 15682;

	t37 = (((x149<=x150)==x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 32370U;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = 334570367;

	t38 = (((x153<=x154)==x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	static int8_t x159 = -1;
	static int16_t x160 = -566;
	volatile int32_t t39 = -3;

	t39 = (((x157<=x158)==x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 1612702;
	int16_t x162 = INT16_MAX;
	int64_t x163 = INT64_MAX;

	t40 = (((x161<=x162)==x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -13;
	int32_t x168 = INT32_MIN;
	int32_t t41 = -8675652;

	t41 = (((x165<=x166)==x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 107092552U;
	uint8_t x171 = 122U;
	int8_t x172 = 2;

	t42 = (((x169<=x170)==x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x175 = INT16_MAX;
	volatile int32_t t43 = 20195933;

	t43 = (((x173<=x174)==x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	volatile int64_t x178 = INT64_MAX;
	uint32_t x180 = UINT32_MAX;
	int32_t t44 = 559;

	t44 = (((x177<=x178)==x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MIN;
	uint16_t x184 = 5763U;
	int32_t t45 = 14715284;

	t45 = (((x181<=x182)==x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int16_t x188 = 1157;
	static volatile int32_t t46 = 3514364;

	t46 = (((x185<=x186)==x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int32_t x190 = 36882;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MAX;
	int32_t t47 = -140;

	t47 = (((x189<=x190)==x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = 66U;
	static int64_t x195 = -2LL;
	int32_t x196 = -170578;
	int32_t t48 = 49760;

	t48 = (((x193<=x194)==x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 122483U;
	int16_t x198 = INT16_MIN;
	volatile int64_t x200 = INT64_MIN;
	int32_t t49 = 196418796;

	t49 = (((x197<=x198)==x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -1;

	t50 = (((x201<=x202)==x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 111U;
	int64_t x207 = -1LL;
	static int32_t x208 = -474;
	volatile int32_t t51 = 103;

	t51 = (((x205<=x206)==x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 1;
	static volatile int8_t x210 = -1;
	static volatile int32_t x211 = INT32_MAX;
	int32_t t52 = -65634;

	t52 = (((x209<=x210)==x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = -67;
	static int32_t x214 = INT32_MAX;
	int16_t x215 = INT16_MAX;
	int32_t x216 = -158;
	int32_t t53 = -8;

	t53 = (((x213<=x214)==x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x218 = INT16_MAX;
	int32_t x219 = -92707;
	int8_t x220 = INT8_MAX;
	static volatile int32_t t54 = -2316;

	t54 = (((x217<=x218)==x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	int64_t x223 = -1LL;
	int8_t x224 = 3;
	int32_t t55 = 0;

	t55 = (((x221<=x222)==x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 3425U;
	int32_t x226 = 5470;
	static volatile uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 417119866LLU;
	int32_t t56 = 8570016;

	t56 = (((x225<=x226)==x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = -1;
	int32_t x232 = -34;
	volatile int32_t t57 = 439437;

	t57 = (((x229<=x230)==x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MIN;
	static uint8_t x235 = UINT8_MAX;
	int32_t t58 = -18;

	t58 = (((x233<=x234)==x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	volatile uint16_t x238 = 12034U;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = UINT64_MAX;
	int32_t t59 = 73748658;

	t59 = (((x237<=x238)==x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x241 = -6319LL;
	static int8_t x242 = INT8_MAX;
	static volatile int32_t x243 = INT32_MIN;
	int32_t x244 = -1;
	volatile int32_t t60 = 3635712;

	t60 = (((x241<=x242)==x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int16_t x247 = INT16_MAX;
	int32_t x248 = -1;
	static int32_t t61 = -2;

	t61 = (((x245<=x246)==x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x249 = INT64_MIN;
	int32_t x250 = 1;
	static volatile int8_t x251 = INT8_MAX;
	volatile int32_t x252 = 5421;
	static volatile int32_t t62 = -1418;

	t62 = (((x249<=x250)==x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -3;
	uint32_t x254 = UINT32_MAX;
	volatile uint8_t x255 = UINT8_MAX;
	int64_t x256 = -31102158728028322LL;

	t63 = (((x253<=x254)==x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MAX;
	volatile int8_t x259 = INT8_MAX;
	static int64_t x260 = -1LL;
	static volatile int32_t t64 = 3;

	t64 = (((x257<=x258)==x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static int64_t x262 = -9688027256664LL;
	int64_t x263 = -1LL;
	uint16_t x264 = 27U;
	static int32_t t65 = 1;

	t65 = (((x261<=x262)==x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 1;

	t66 = (((x265<=x266)==x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = -1;
	volatile int32_t t67 = -3517094;

	t67 = (((x269<=x270)==x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 3326U;
	volatile uint8_t x274 = UINT8_MAX;
	volatile int64_t x275 = -1LL;
	uint16_t x276 = 8673U;
	int32_t t68 = 58;

	t68 = (((x273<=x274)==x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x279 = -1;
	uint32_t x280 = 27U;
	volatile int32_t t69 = 80116;

	t69 = (((x277<=x278)==x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MAX;
	uint32_t x283 = 75277940U;
	volatile int16_t x284 = -3900;
	int32_t t70 = -244595;

	t70 = (((x281<=x282)==x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 98U;
	int16_t x287 = -2856;
	volatile int32_t t71 = -123586;

	t71 = (((x285<=x286)==x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -1;
	int16_t x291 = -2296;
	int8_t x292 = -24;
	static volatile int32_t t72 = -88540123;

	t72 = (((x289<=x290)==x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x295 = 15U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 135070363;

	t73 = (((x293<=x294)==x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 26U;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 88U;
	uint64_t x300 = 24029LLU;
	int32_t t74 = -3;

	t74 = (((x297<=x298)==x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	static int32_t x304 = INT32_MAX;
	int32_t t75 = -5;

	t75 = (((x301<=x302)==x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 2275LLU;
	int16_t x307 = INT16_MAX;
	volatile int64_t x308 = INT64_MIN;
	int32_t t76 = 8116321;

	t76 = (((x305<=x306)==x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = 6U;
	static uint16_t x311 = 7933U;
	static volatile int32_t t77 = -160210;

	t77 = (((x309<=x310)==x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 92701U;
	static volatile int64_t x314 = -13781624729326750LL;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = UINT64_MAX;
	int32_t t78 = 0;

	t78 = (((x313<=x314)==x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x320 = -1;
	int32_t t79 = 0;

	t79 = (((x317<=x318)==x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 23U;
	static int64_t x322 = INT64_MIN;
	int16_t x323 = -1;
	int64_t x324 = 73085LL;

	t80 = (((x321<=x322)==x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	volatile int64_t x326 = 6277185220049564LL;
	int8_t x327 = 0;
	uint16_t x328 = 7252U;

	t81 = (((x325<=x326)==x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 0;
	int16_t x330 = -1;
	static uint64_t x331 = 2191702926729LLU;
	static uint64_t x332 = 3917681204232504LLU;

	t82 = (((x329<=x330)==x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 34U;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = 1U;

	t83 = (((x333<=x334)==x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x340 = INT32_MIN;
	static int32_t t84 = 156101;

	t84 = (((x337<=x338)==x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x343 = -2154300513640803254LL;

	t85 = (((x341<=x342)==x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = -262733874799LL;
	uint8_t x346 = UINT8_MAX;
	volatile int64_t x347 = INT64_MAX;
	uint64_t x348 = 2649452182946144124LLU;
	volatile int32_t t86 = 25732805;

	t86 = (((x345<=x346)==x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = 3U;
	volatile int16_t x350 = -1;
	uint16_t x351 = 3818U;
	static int64_t x352 = INT64_MIN;
	int32_t t87 = 2879;

	t87 = (((x349<=x350)==x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x353 = 1654228U;
	static uint64_t x355 = 2042753690LLU;
	volatile int8_t x356 = -1;
	volatile int32_t t88 = 28058306;

	t88 = (((x353<=x354)==x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	static volatile int16_t x358 = INT16_MAX;
	uint8_t x359 = UINT8_MAX;
	volatile int64_t x360 = -2LL;
	volatile int32_t t89 = 386857301;

	t89 = (((x357<=x358)==x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	static uint8_t x363 = 3U;
	int32_t x364 = -278288482;

	t90 = (((x361<=x362)==x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 9U;
	int16_t x366 = INT16_MAX;
	uint32_t x367 = UINT32_MAX;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = 1;

	t91 = (((x365<=x366)==x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MAX;
	static int32_t t92 = -17;

	t92 = (((x369<=x370)==x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -7591;
	int16_t x374 = INT16_MIN;
	int8_t x375 = 1;
	int16_t x376 = 3;
	int32_t t93 = -1;

	t93 = (((x373<=x374)==x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x377 = 24;
	int64_t x378 = -2073129909LL;
	int32_t t94 = -2116339;

	t94 = (((x377<=x378)==x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -1;
	int32_t x382 = INT32_MIN;
	static int64_t x383 = 316366LL;
	int8_t x384 = 61;
	int32_t t95 = 7769;

	t95 = (((x381<=x382)==x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x385 = 283275717382LLU;
	uint64_t x386 = UINT64_MAX;
	static uint8_t x387 = UINT8_MAX;
	volatile int32_t t96 = 443231786;

	t96 = (((x385<=x386)==x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x391 = 30U;
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -1;

	t97 = (((x389<=x390)==x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x394 = INT8_MAX;
	uint16_t x396 = UINT16_MAX;

	t98 = (((x393<=x394)==x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = 149288281203LL;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 11;

	t99 = (((x397<=x398)==x399)<x400);

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

