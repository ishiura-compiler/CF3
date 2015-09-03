#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
volatile int32_t t1 = 8437;
static volatile int16_t x11 = -1;
static int64_t x18 = -58625691781LL;
int64_t x22 = 1167066946123176LL;
int16_t x44 = 7;
volatile int16_t x46 = INT16_MIN;
int16_t x47 = INT16_MAX;
uint32_t t11 = 11U;
volatile int16_t x51 = INT16_MIN;
volatile int8_t x52 = -17;
int8_t x53 = 1;
int16_t x62 = -8352;
volatile uint64_t t15 = 1544198037LLU;
uint64_t x76 = 3221859306630977LLU;
int64_t x77 = INT64_MIN;
static uint16_t x81 = UINT16_MAX;
volatile int16_t x98 = 13;
volatile int8_t x110 = INT8_MAX;
int32_t t27 = 906382;
int8_t x119 = -1;
static int16_t x123 = INT16_MIN;
static uint64_t x126 = 440977958181LLU;
volatile int64_t x128 = INT64_MAX;
int64_t x137 = -1LL;
static int32_t t34 = 906703;
int16_t x145 = INT16_MIN;
static int32_t t36 = 80312751;
int16_t x150 = -141;
int32_t t38 = 123;
static int8_t x157 = INT8_MIN;
uint16_t x159 = 1U;
uint64_t x165 = 8470686686285LLU;
volatile uint16_t x168 = 5U;
int64_t x175 = 17280114477012014LL;
int32_t t43 = -1;
int8_t x179 = INT8_MIN;
volatile int16_t x189 = INT16_MAX;
uint32_t x196 = 559U;
static int8_t x213 = INT8_MIN;
volatile int64_t t53 = -32238LL;
int64_t x218 = INT64_MAX;
int32_t x220 = -23;
int32_t t56 = -62018285;
int16_t x233 = INT16_MIN;
uint32_t x237 = 17U;
int64_t x241 = INT64_MIN;
int64_t x244 = -42830LL;
uint32_t x247 = 620133616U;
int16_t x260 = INT16_MIN;
volatile int8_t x261 = -1;
int64_t x263 = INT64_MIN;
int32_t x265 = INT32_MIN;
volatile int32_t t67 = 207690506;
uint16_t x290 = UINT16_MAX;
static uint32_t x295 = UINT32_MAX;
int8_t x301 = INT8_MAX;
int64_t x306 = INT64_MIN;
uint16_t x307 = 72U;
volatile int8_t x312 = INT8_MIN;
int32_t t77 = 6733;
static int8_t x313 = INT8_MIN;
static int16_t x315 = INT16_MIN;
int32_t t79 = 109722751;
static uint64_t x323 = UINT64_MAX;
uint16_t x325 = 0U;
int16_t x344 = INT16_MIN;
static uint32_t x347 = 190950394U;
uint8_t x353 = 60U;
int32_t x359 = 56;
volatile int32_t t89 = -961;
int16_t x361 = -1;
int32_t x362 = INT32_MIN;
uint16_t x363 = 0U;
uint16_t x371 = 90U;
static int64_t x373 = INT64_MIN;
int64_t x378 = -29LL;
int8_t x380 = INT8_MIN;
uint8_t x383 = UINT8_MAX;
volatile int32_t t95 = -1259;
volatile uint64_t x385 = UINT64_MAX;
static int8_t x400 = INT8_MIN;
int32_t t99 = 485649027;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 85338479492LL;

	t0 = (((x1<=x2)==x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static uint64_t x6 = 11275233978LLU;
	uint16_t x7 = UINT16_MAX;

	t1 = (((x5<=x6)==x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 3855722U;
	volatile int16_t x10 = INT16_MAX;
	volatile int64_t x12 = 79LL;
	volatile int64_t t2 = -614518459LL;

	t2 = (((x9<=x10)==x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 4LLU;
	static int64_t x14 = -1LL;
	int32_t x15 = -9321;
	uint16_t x16 = 7U;
	int32_t t3 = -759;

	t3 = (((x13<=x14)==x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 26;
	uint8_t x19 = 31U;
	int16_t x20 = -625;
	int32_t t4 = -383785;

	t4 = (((x17<=x18)==x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint64_t x23 = 2471593238570314LLU;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = 284621758847530058LL;

	t5 = (((x21<=x22)==x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint32_t x26 = 150107U;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = 111657;
	static int32_t t6 = 6867;

	t6 = (((x25<=x26)==x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MIN;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = 0;
	static volatile int32_t t7 = -87995;

	t7 = (((x29<=x30)==x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int64_t x34 = -5LL;
	int8_t x35 = -1;
	volatile uint8_t x36 = UINT8_MAX;
	int32_t t8 = 8293;

	t8 = (((x33<=x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = -1LL;
	int64_t x39 = INT64_MIN;
	volatile int32_t x40 = 16;
	volatile int32_t t9 = 596189996;

	t9 = (((x37<=x38)==x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	int32_t x42 = -1;
	int64_t x43 = -1LL;
	int32_t t10 = -207;

	t10 = (((x41<=x42)==x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -729149;
	uint32_t x48 = UINT32_MAX;

	t11 = (((x45<=x46)==x47)*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2023398789802LL;
	int64_t x50 = -1LL;
	int32_t t12 = 2;

	t12 = (((x49<=x50)==x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	static uint16_t x55 = 70U;
	int64_t x56 = -1LL;
	int64_t t13 = -11924361071LL;

	t13 = (((x53<=x54)==x55)*x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 113;
	uint8_t x58 = 10U;
	uint16_t x59 = 257U;
	int16_t x60 = -1;
	volatile int32_t t14 = -404529;

	t14 = (((x57<=x58)==x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 78636976;
	uint32_t x63 = 790729703U;
	uint64_t x64 = UINT64_MAX;

	t15 = (((x61<=x62)==x63)*x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 32621096U;
	static volatile uint8_t x66 = 24U;
	uint64_t x67 = 0LLU;
	static uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (((x65<=x66)==x67)*x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -14;
	int32_t x70 = -1;
	static volatile int8_t x71 = -4;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -4537915;

	t17 = (((x69<=x70)==x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = UINT64_MAX;
	int16_t x75 = -1;
	volatile uint64_t t18 = 2533591867LLU;

	t18 = (((x73<=x74)==x75)*x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -1;
	uint32_t x79 = 2U;
	uint16_t x80 = 19U;
	int32_t t19 = -3934;

	t19 = (((x77<=x78)==x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = INT32_MAX;
	static int8_t x83 = 0;
	uint8_t x84 = 44U;
	volatile int32_t t20 = 25402369;

	t20 = (((x81<=x82)==x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -321;
	int32_t x86 = -1;
	volatile int8_t x87 = 15;
	uint64_t x88 = 40073364599537983LLU;
	volatile uint64_t t21 = 0LLU;

	t21 = (((x85<=x86)==x87)*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	static uint64_t x91 = 18434LLU;
	uint64_t x92 = 1LLU;
	static volatile uint64_t t22 = 2005335105LLU;

	t22 = (((x89<=x90)==x91)*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -9;
	int8_t x94 = 0;
	static uint8_t x95 = 15U;
	volatile uint64_t x96 = 6042LLU;
	volatile uint64_t t23 = 801680970292653748LLU;

	t23 = (((x93<=x94)==x95)*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 87LLU;
	uint16_t x99 = 55U;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 15;

	t24 = (((x97<=x98)==x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	static int32_t x102 = 228;
	static int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 25LL;

	t25 = (((x101<=x102)==x103)*x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MIN;
	int64_t x107 = -3297096956428LL;
	uint32_t x108 = 236826219U;
	static uint32_t t26 = 13U;

	t26 = (((x105<=x106)==x107)*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	volatile uint8_t x111 = UINT8_MAX;
	int8_t x112 = 0;

	t27 = (((x109<=x110)==x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static uint32_t x114 = 0U;
	static int8_t x115 = 3;
	int64_t x116 = -1LL;
	int64_t t28 = -32459183LL;

	t28 = (((x113<=x114)==x115)*x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 125228380LLU;
	static int64_t x118 = 1160536453LL;
	static volatile uint32_t x120 = 4515926U;
	static uint32_t t29 = 2U;

	t29 = (((x117<=x118)==x119)*x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -3;
	int64_t x122 = 2LL;
	uint64_t x124 = 1581366578LLU;
	volatile uint64_t t30 = 17340934901108LLU;

	t30 = (((x121<=x122)==x123)*x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 148LL;
	int8_t x127 = INT8_MIN;
	static int64_t t31 = 5354LL;

	t31 = (((x125<=x126)==x127)*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	volatile uint64_t x130 = 1LLU;
	int8_t x131 = -1;
	int32_t x132 = INT32_MIN;
	static int32_t t32 = 97587;

	t32 = (((x129<=x130)==x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	uint8_t x134 = 7U;
	int16_t x135 = INT16_MIN;
	int64_t x136 = 57512789LL;
	int64_t t33 = -2144063649LL;

	t33 = (((x133<=x134)==x135)*x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = 90403U;
	int16_t x139 = INT16_MAX;
	int16_t x140 = -7711;

	t34 = (((x137<=x138)==x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 5405;
	int8_t x142 = 0;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MAX;
	static volatile int32_t t35 = -98;

	t35 = (((x141<=x142)==x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MAX;
	volatile int16_t x147 = -1;
	static int32_t x148 = INT32_MAX;

	t36 = (((x145<=x146)==x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile int16_t x152 = INT16_MAX;
	volatile int32_t t37 = -90247350;

	t37 = (((x149<=x150)==x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 913783LLU;
	volatile int16_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MIN;

	t38 = (((x153<=x154)==x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x158 = INT16_MIN;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -47;

	t39 = (((x157<=x158)==x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 39U;
	volatile uint32_t x162 = 1710495U;
	uint8_t x163 = UINT8_MAX;
	int16_t x164 = -24;
	int32_t t40 = -78466580;

	t40 = (((x161<=x162)==x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int32_t t41 = 10;

	t41 = (((x165<=x166)==x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint8_t x170 = UINT8_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 23535U;
	static int32_t t42 = -140674376;

	t42 = (((x169<=x170)==x171)*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int16_t x174 = 7702;
	static volatile int32_t x176 = -1;

	t43 = (((x173<=x174)==x175)*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	int64_t x178 = INT64_MIN;
	static int32_t x180 = -141;
	int32_t t44 = 487881604;

	t44 = (((x177<=x178)==x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 27528189714411414LLU;
	int64_t x182 = -11518534026804525LL;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -1;
	static volatile int32_t t45 = 1767;

	t45 = (((x181<=x182)==x183)*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MAX;
	uint8_t x186 = 0U;
	int64_t x187 = 349LL;
	static int32_t x188 = 0;
	int32_t t46 = 901914264;

	t46 = (((x185<=x186)==x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	static int32_t x191 = INT32_MAX;
	uint32_t x192 = 3U;
	uint32_t t47 = 8637U;

	t47 = (((x189<=x190)==x191)*x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 596695920U;
	int64_t x194 = -1LL;
	int64_t x195 = 1166048382663LL;
	volatile uint32_t t48 = 12U;

	t48 = (((x193<=x194)==x195)*x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	volatile int16_t x198 = 7320;
	uint16_t x199 = 4U;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = 8478;

	t49 = (((x197<=x198)==x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static volatile int8_t x202 = -4;
	int16_t x203 = -1;
	volatile uint8_t x204 = 93U;
	static volatile int32_t t50 = -54071339;

	t50 = (((x201<=x202)==x203)*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 5U;
	uint16_t x206 = UINT16_MAX;
	volatile uint64_t x207 = 986813LLU;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t51 = -325343LL;

	t51 = (((x205<=x206)==x207)*x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int32_t x210 = INT32_MAX;
	volatile uint32_t x211 = 375648U;
	static int16_t x212 = -7671;
	int32_t t52 = 179;

	t52 = (((x209<=x210)==x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = -1;
	static int32_t x215 = INT32_MAX;
	volatile int64_t x216 = 140722161LL;

	t53 = (((x213<=x214)==x215)*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 2162U;
	uint64_t x219 = UINT64_MAX;
	int32_t t54 = -686260067;

	t54 = (((x217<=x218)==x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 21773U;
	int16_t x222 = INT16_MAX;
	int8_t x223 = INT8_MAX;
	int64_t x224 = -1LL;
	int64_t t55 = 47802688153829LL;

	t55 = (((x221<=x222)==x223)*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	static int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	static int16_t x228 = 22;

	t56 = (((x225<=x226)==x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = 54009;
	int32_t x230 = 927813;
	volatile uint8_t x231 = 6U;
	uint32_t x232 = 1U;
	uint32_t t57 = 5U;

	t57 = (((x229<=x230)==x231)*x232);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 337U;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MAX;
	static int32_t t58 = -990289334;

	t58 = (((x233<=x234)==x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -1788508LL;
	static uint32_t x239 = 29U;
	volatile uint16_t x240 = 831U;
	volatile int32_t t59 = 92;

	t59 = (((x237<=x238)==x239)*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int64_t t60 = 2354883429LL;

	t60 = (((x241<=x242)==x243)*x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 75LLU;
	uint64_t x246 = 4182986342701584LLU;
	static int8_t x248 = -1;
	int32_t t61 = -339619;

	t61 = (((x245<=x246)==x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MAX;
	uint64_t x250 = 489174450LLU;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	int32_t t62 = 29657048;

	t62 = (((x249<=x250)==x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	volatile int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int64_t x256 = -1LL;
	static volatile int64_t t63 = -153163183LL;

	t63 = (((x253<=x254)==x255)*x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	static volatile int16_t x258 = INT16_MIN;
	uint8_t x259 = 32U;
	volatile int32_t t64 = 116;

	t64 = (((x257<=x258)==x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = INT32_MIN;
	int32_t x264 = -1;
	int32_t t65 = 371;

	t65 = (((x261<=x262)==x263)*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -1;
	int64_t x267 = -3627291730301357LL;
	volatile int64_t x268 = INT64_MIN;
	static volatile int64_t t66 = 892LL;

	t66 = (((x265<=x266)==x267)*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 0LL;
	static uint16_t x270 = UINT16_MAX;
	uint8_t x271 = 0U;
	int16_t x272 = 1;

	t67 = (((x269<=x270)==x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	int64_t x274 = 227208065246LL;
	int16_t x275 = -1;
	static int64_t x276 = -17637LL;
	volatile int64_t t68 = -28295863LL;

	t68 = (((x273<=x274)==x275)*x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	volatile int16_t x278 = INT16_MIN;
	volatile int8_t x279 = -1;
	int64_t x280 = INT64_MIN;
	int64_t t69 = 4806600765040798LL;

	t69 = (((x277<=x278)==x279)*x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int8_t x283 = -54;
	int64_t x284 = -5262LL;
	int64_t t70 = -39937076224LL;

	t70 = (((x281<=x282)==x283)*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -3441197;
	uint32_t x286 = 11U;
	int16_t x287 = 593;
	static volatile uint64_t x288 = 4003881307590907040LLU;
	static uint64_t t71 = 186LLU;

	t71 = (((x285<=x286)==x287)*x288);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = -584505838329518000LL;
	uint8_t x291 = 94U;
	int8_t x292 = -3;
	volatile int32_t t72 = 152;

	t72 = (((x289<=x290)==x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x294 = UINT64_MAX;
	uint32_t x296 = 2090595U;
	uint32_t t73 = 3U;

	t73 = (((x293<=x294)==x295)*x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	volatile uint64_t x298 = 44LLU;
	static uint32_t x299 = 114057U;
	uint32_t x300 = 390U;
	uint32_t t74 = 6494U;

	t74 = (((x297<=x298)==x299)*x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 3388845U;
	static int64_t x303 = -1LL;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 7;

	t75 = (((x301<=x302)==x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x305 = INT32_MAX;
	static uint32_t x308 = 5380U;
	uint32_t t76 = 26U;

	t76 = (((x305<=x306)==x307)*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	int16_t x310 = -109;
	static uint16_t x311 = 11U;

	t77 = (((x309<=x310)==x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	int8_t x316 = 0;
	volatile int32_t t78 = -434786183;

	t78 = (((x313<=x314)==x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 14U;
	uint16_t x318 = 1498U;
	volatile uint32_t x319 = UINT32_MAX;
	int32_t x320 = INT32_MIN;

	t79 = (((x317<=x318)==x319)*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x324 = INT64_MAX;
	int64_t t80 = 24366494696218LL;

	t80 = (((x321<=x322)==x323)*x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 6U;
	uint64_t x327 = 95518975733LLU;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 53;

	t81 = (((x325<=x326)==x327)*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -1LL;
	volatile uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 353022LLU;
	int64_t x332 = INT64_MIN;
	static volatile int64_t t82 = -25583776770LL;

	t82 = (((x329<=x330)==x331)*x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x333 = -1LL;
	uint8_t x334 = 6U;
	int8_t x335 = 2;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t83 = -6370025333223LL;

	t83 = (((x333<=x334)==x335)*x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	volatile uint32_t x338 = UINT32_MAX;
	volatile uint8_t x339 = 8U;
	int32_t x340 = -1;
	int32_t t84 = -67206;

	t84 = (((x337<=x338)==x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = 1;
	uint64_t x342 = 251445LLU;
	static int64_t x343 = INT64_MAX;
	volatile int32_t t85 = -814534378;

	t85 = (((x341<=x342)==x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -49;
	int8_t x346 = INT8_MIN;
	static uint32_t x348 = 14U;
	volatile uint32_t t86 = 25300433U;

	t86 = (((x345<=x346)==x347)*x348);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -22;
	int8_t x350 = -1;
	static uint64_t x351 = UINT64_MAX;
	uint64_t x352 = UINT64_MAX;
	uint64_t t87 = 814095LLU;

	t87 = (((x349<=x350)==x351)*x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x354 = 4U;
	static volatile int8_t x355 = -1;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t88 = -15377251613571407LL;

	t88 = (((x353<=x354)==x355)*x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = -1;
	volatile int8_t x360 = 23;

	t89 = (((x357<=x358)==x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x364 = 6321;
	volatile int32_t t90 = 3333;

	t90 = (((x361<=x362)==x363)*x364);

	if (t90 != 6321) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	static int64_t x368 = INT64_MIN;
	int64_t t91 = 9263980LL;

	t91 = (((x365<=x366)==x367)*x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile uint8_t x370 = 101U;
	int64_t x372 = INT64_MAX;
	static int64_t t92 = -249829433454456LL;

	t92 = (((x369<=x370)==x371)*x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = INT16_MAX;
	int32_t x375 = 901136;
	volatile int64_t x376 = 45086733667LL;
	volatile int64_t t93 = -941LL;

	t93 = (((x373<=x374)==x375)*x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int16_t x379 = -1;
	volatile int32_t t94 = 1;

	t94 = (((x377<=x378)==x379)*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int16_t x382 = -15;
	volatile int16_t x384 = INT16_MAX;

	t95 = (((x381<=x382)==x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x386 = INT16_MIN;
	static int8_t x387 = -3;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 2777;

	t96 = (((x385<=x386)==x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -44861672;
	uint8_t x390 = 3U;
	static int64_t x391 = 0LL;
	int64_t x392 = INT64_MAX;
	int64_t t97 = 35565144LL;

	t97 = (((x389<=x390)==x391)*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int8_t x394 = INT8_MAX;
	int32_t x395 = 72665963;
	int8_t x396 = 51;
	volatile int32_t t98 = -61098997;

	t98 = (((x393<=x394)==x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	static int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;

	t99 = (((x397<=x398)==x399)*x400);

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

