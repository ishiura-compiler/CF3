#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -546482503;
volatile int64_t x9 = -108LL;
static int64_t x10 = INT64_MIN;
uint32_t x16 = UINT32_MAX;
int32_t t2 = 81;
volatile int32_t t3 = -44;
uint64_t x24 = 1946875670522017438LLU;
int32_t t5 = 242582;
uint64_t x33 = 3921601457855LLU;
uint16_t x34 = 848U;
static int32_t x51 = -1;
int64_t x65 = INT64_MAX;
uint64_t x68 = UINT64_MAX;
int32_t t15 = 2087985;
static int32_t x72 = INT32_MAX;
int64_t x93 = INT64_MAX;
int8_t x94 = INT8_MAX;
uint32_t x98 = 0U;
int32_t t23 = -38498479;
uint16_t x111 = 1U;
static int16_t x117 = -1;
static int8_t x120 = INT8_MIN;
int64_t x130 = -536659691260097LL;
static volatile int32_t t32 = -435;
volatile int32_t t33 = -5523;
uint16_t x141 = UINT16_MAX;
int64_t x148 = 181LL;
int32_t x159 = -1;
static volatile int32_t t38 = -1770;
int32_t t39 = 2786542;
int8_t x167 = 1;
int32_t x168 = -1967;
static int32_t t40 = -36;
static uint64_t x172 = UINT64_MAX;
int64_t x174 = INT64_MAX;
static int16_t x176 = INT16_MIN;
int32_t x189 = INT32_MAX;
uint64_t x198 = UINT64_MAX;
int32_t x208 = 10;
static int32_t t51 = 192707029;
int32_t t52 = 2323;
static int64_t x225 = 820390786LL;
static int32_t t55 = 1122;
uint64_t x230 = 1526153233LLU;
int64_t x232 = INT64_MAX;
int32_t t56 = 1892;
int32_t x235 = INT32_MIN;
volatile int32_t t57 = 121652;
static volatile int64_t x238 = INT64_MIN;
static int8_t x240 = -2;
int32_t t58 = 211;
uint8_t x251 = UINT8_MAX;
int16_t x253 = INT16_MIN;
int8_t x260 = INT8_MAX;
volatile int32_t t63 = -1395077;
static int64_t x274 = INT64_MAX;
int32_t t67 = -5772;
static uint8_t x277 = 37U;
int16_t x283 = INT16_MIN;
static uint8_t x287 = 0U;
static int8_t x290 = INT8_MAX;
static int32_t x291 = INT32_MIN;
static int8_t x292 = INT8_MAX;
volatile int32_t t71 = 902045;
uint8_t x293 = 11U;
int32_t x294 = INT32_MIN;
int16_t x298 = -440;
uint16_t x299 = UINT16_MAX;
int32_t x304 = INT32_MAX;
volatile int32_t t75 = 3919;
int8_t x311 = -1;
int32_t x316 = -47;
int8_t x317 = -2;
volatile int32_t t78 = 31534415;
int64_t x324 = 15351781LL;
int32_t x327 = INT32_MAX;
static int8_t x328 = -1;
int8_t x344 = INT8_MAX;
uint8_t x348 = UINT8_MAX;
volatile int16_t x350 = -1;
int32_t t83 = 897009;
int32_t t84 = 285695;
int32_t x358 = INT32_MIN;
int32_t x360 = INT32_MIN;
static int32_t x365 = INT32_MIN;
int16_t x370 = INT16_MAX;
static int32_t t88 = 85;
int16_t x380 = INT16_MIN;
static uint64_t x381 = 10630910692063LLU;
int32_t x382 = INT32_MIN;
uint16_t x385 = 989U;
static int32_t x386 = INT32_MAX;
uint8_t x394 = 2U;
static uint32_t x396 = 2U;
int32_t t94 = -277268557;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = 5186U;
	int16_t x3 = -14;
	int16_t x4 = INT16_MAX;

	t0 = (((x1<=x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x11 = 3677U;
	int8_t x12 = -14;
	static int32_t t1 = -40530;

	t1 = (((x9<=x10)+x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	static volatile uint32_t x14 = 740405851U;
	uint8_t x15 = 0U;

	t2 = (((x13<=x14)+x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static int8_t x18 = INT8_MAX;
	int64_t x19 = -1LL;
	static int8_t x20 = INT8_MIN;

	t3 = (((x17<=x18)+x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	volatile int64_t x23 = INT64_MIN;
	volatile int32_t t4 = -219749283;

	t4 = (((x21<=x22)+x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int32_t x26 = INT32_MIN;
	static uint64_t x27 = UINT64_MAX;
	int64_t x28 = -1LL;

	t5 = (((x25<=x26)+x27)==x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = 934220LLU;
	int64_t x31 = 57323LL;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = 54174186;

	t6 = (((x29<=x30)+x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x35 = 3;
	volatile int32_t x36 = 10005;
	static int32_t t7 = -1;

	t7 = (((x33<=x34)+x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 4;
	static uint8_t x38 = 23U;
	int32_t x39 = -1;
	volatile int8_t x40 = 2;
	static int32_t t8 = -5;

	t8 = (((x37<=x38)+x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 108U;
	int32_t x42 = -3;
	static uint64_t x43 = 1602262218LLU;
	uint64_t x44 = 531173832LLU;
	int32_t t9 = -256763;

	t9 = (((x41<=x42)+x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 13U;
	uint64_t x46 = 570226973294519409LLU;
	int16_t x47 = 15727;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -1;

	t10 = (((x45<=x46)+x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	static volatile int64_t x50 = INT64_MAX;
	static int64_t x52 = INT64_MIN;
	volatile int32_t t11 = 0;

	t11 = (((x49<=x50)+x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 2907U;
	static int16_t x54 = 6974;
	volatile int32_t x55 = -1;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t12 = -1686614;

	t12 = (((x53<=x54)+x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -1;
	static volatile int32_t x58 = -15270;
	int16_t x59 = -20;
	int32_t x60 = -1;
	volatile int32_t t13 = 16;

	t13 = (((x57<=x58)+x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t14 = 147;

	t14 = (((x61<=x62)+x63)==x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x66 = 9603577590226LL;
	int8_t x67 = INT8_MIN;

	t15 = (((x65<=x66)+x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 21769U;
	volatile int64_t x70 = INT64_MIN;
	static volatile int16_t x71 = 13;
	volatile int32_t t16 = 289630632;

	t16 = (((x69<=x70)+x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = UINT8_MAX;
	volatile int16_t x74 = 15;
	static volatile int64_t x75 = 19509660076337557LL;
	static int32_t x76 = INT32_MIN;
	int32_t t17 = -1681571;

	t17 = (((x73<=x74)+x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 2U;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = -1;
	int64_t x80 = -22481LL;
	int32_t t18 = 1;

	t18 = (((x77<=x78)+x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 5425U;
	uint64_t x82 = 2LLU;
	int64_t x83 = -1LL;
	int32_t x84 = -1;
	volatile int32_t t19 = 1411;

	t19 = (((x81<=x82)+x83)==x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -504;
	static volatile int8_t x86 = 56;
	static int16_t x87 = 886;
	uint16_t x88 = 5U;
	int32_t t20 = 1;

	t20 = (((x85<=x86)+x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	volatile int16_t x90 = INT16_MIN;
	static int64_t x91 = -1788090482LL;
	int8_t x92 = -1;
	int32_t t21 = -1;

	t21 = (((x89<=x90)+x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x95 = 4030722699811LL;
	int8_t x96 = -1;
	volatile int32_t t22 = -1817624;

	t22 = (((x93<=x94)+x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = 163U;
	int16_t x99 = -1589;
	int8_t x100 = INT8_MAX;

	t23 = (((x97<=x98)+x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t24 = 366164;

	t24 = (((x101<=x102)+x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = INT64_MIN;
	volatile int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	volatile int32_t t25 = -1062883771;

	t25 = (((x105<=x106)+x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = -45;
	int16_t x112 = 37;
	volatile int32_t t26 = 133638592;

	t26 = (((x109<=x110)+x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 26846900782LLU;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MAX;
	int16_t x116 = -1;
	static volatile int32_t t27 = 28;

	t27 = (((x113<=x114)+x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = INT8_MAX;
	static int64_t x119 = -3LL;
	static int32_t t28 = -649;

	t28 = (((x117<=x118)+x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 3655519033911759LL;
	static int32_t x122 = -1;
	uint8_t x123 = 7U;
	int16_t x124 = -1;
	int32_t t29 = -58;

	t29 = (((x121<=x122)+x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 413786753;
	int32_t x126 = INT32_MAX;
	static uint32_t x127 = 8845U;
	uint16_t x128 = 125U;
	volatile int32_t t30 = 0;

	t30 = (((x125<=x126)+x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = -69983541811937249LL;
	int16_t x131 = INT16_MIN;
	volatile int16_t x132 = INT16_MAX;
	volatile int32_t t31 = -7119;

	t31 = (((x129<=x130)+x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	static int8_t x134 = INT8_MIN;
	uint32_t x135 = 1U;
	static volatile int64_t x136 = -1LL;

	t32 = (((x133<=x134)+x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 111U;
	uint16_t x138 = UINT16_MAX;
	static int16_t x139 = 7;
	volatile int32_t x140 = -1;

	t33 = (((x137<=x138)+x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = 1LLU;
	int32_t x144 = INT32_MIN;
	static volatile int32_t t34 = -94811598;

	t34 = (((x141<=x142)+x143)==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	volatile uint8_t x147 = UINT8_MAX;
	static int32_t t35 = 0;

	t35 = (((x145<=x146)+x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	static volatile int32_t t36 = 3;

	t36 = (((x149<=x150)+x151)==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = INT8_MAX;
	int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 3302569LLU;
	int32_t t37 = 632075508;

	t37 = (((x153<=x154)+x155)==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 2U;
	int8_t x158 = INT8_MIN;
	volatile int8_t x160 = INT8_MAX;

	t38 = (((x157<=x158)+x159)==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -13;
	int32_t x162 = INT32_MAX;
	static int16_t x163 = -31;
	int64_t x164 = INT64_MIN;

	t39 = (((x161<=x162)+x163)==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = -63;
	static int16_t x166 = -1;

	t40 = (((x165<=x166)+x167)==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x170 = 38;
	static volatile int32_t x171 = -1;
	int32_t t41 = 1372268;

	t41 = (((x169<=x170)+x171)==x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = 1758401343U;
	volatile int32_t x175 = -1;
	volatile int32_t t42 = 40520398;

	t42 = (((x173<=x174)+x175)==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = 9U;
	static uint8_t x179 = UINT8_MAX;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t43 = -484248;

	t43 = (((x177<=x178)+x179)==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	uint64_t x182 = 4253579LLU;
	int32_t x183 = 2950;
	volatile int64_t x184 = -5LL;
	int32_t t44 = 771515;

	t44 = (((x181<=x182)+x183)==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	static uint32_t x186 = 829U;
	int32_t x187 = -6576;
	int32_t x188 = -1;
	int32_t t45 = -1527;

	t45 = (((x185<=x186)+x187)==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x190 = UINT8_MAX;
	int64_t x191 = 22955LL;
	volatile int32_t x192 = INT32_MIN;
	static volatile int32_t t46 = -2069353;

	t46 = (((x189<=x190)+x191)==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x193 = 420755643705LLU;
	volatile uint64_t x194 = UINT64_MAX;
	static volatile uint16_t x195 = 2750U;
	int32_t x196 = 361136286;
	int32_t t47 = 10;

	t47 = (((x193<=x194)+x195)==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = -190789221;
	static volatile int16_t x199 = INT16_MIN;
	static int64_t x200 = -944830687095LL;
	int32_t t48 = -832383495;

	t48 = (((x197<=x198)+x199)==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 124U;
	static int32_t x202 = -457114899;
	int8_t x203 = -1;
	static volatile int32_t x204 = -1;
	volatile int32_t t49 = -35679;

	t49 = (((x201<=x202)+x203)==x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 2999596505LLU;
	uint8_t x206 = 31U;
	int16_t x207 = -1;
	int32_t t50 = 1066703526;

	t50 = (((x205<=x206)+x207)==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x209 = 1U;
	int64_t x210 = -6LL;
	static int64_t x211 = -1LL;
	int8_t x212 = INT8_MIN;

	t51 = (((x209<=x210)+x211)==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -141095;
	volatile uint16_t x214 = 6002U;
	int32_t x215 = -1;
	int64_t x216 = -130349445340LL;

	t52 = (((x213<=x214)+x215)==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 0LLU;
	static volatile uint16_t x218 = 0U;
	int8_t x219 = INT8_MAX;
	static volatile int32_t x220 = 13590000;
	static int32_t t53 = 0;

	t53 = (((x217<=x218)+x219)==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 24;
	int32_t x222 = INT32_MAX;
	volatile uint64_t x223 = 19840LLU;
	uint8_t x224 = 31U;
	volatile int32_t t54 = 20308;

	t54 = (((x221<=x222)+x223)==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x226 = INT8_MIN;
	volatile int16_t x227 = 44;
	int8_t x228 = -48;

	t55 = (((x225<=x226)+x227)==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int32_t x231 = -1;

	t56 = (((x229<=x230)+x231)==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = INT8_MIN;
	static uint8_t x234 = 18U;
	int64_t x236 = INT64_MAX;

	t57 = (((x233<=x234)+x235)==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x237 = 116LL;
	uint16_t x239 = 562U;

	t58 = (((x237<=x238)+x239)==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = 4U;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = -1;
	int32_t x244 = INT32_MAX;
	int32_t t59 = 26439;

	t59 = (((x241<=x242)+x243)==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	uint64_t x247 = 7363953037998187213LLU;
	uint8_t x248 = UINT8_MAX;
	int32_t t60 = 5418288;

	t60 = (((x245<=x246)+x247)==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MAX;
	uint16_t x250 = UINT16_MAX;
	int16_t x252 = INT16_MAX;
	volatile int32_t t61 = 2199909;

	t61 = (((x249<=x250)+x251)==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x254 = 1279338950575736424LLU;
	int64_t x255 = -15406096696LL;
	static int64_t x256 = 385LL;
	int32_t t62 = 1;

	t62 = (((x253<=x254)+x255)==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = 1;
	static int16_t x259 = 13740;

	t63 = (((x257<=x258)+x259)==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	volatile int64_t x262 = INT64_MIN;
	int16_t x263 = 15604;
	int64_t x264 = INT64_MIN;
	int32_t t64 = 4248;

	t64 = (((x261<=x262)+x263)==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 1U;
	int32_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MIN;
	static int32_t t65 = -30;

	t65 = (((x265<=x266)+x267)==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	static volatile int16_t x270 = INT16_MAX;
	uint32_t x271 = 7102856U;
	static uint8_t x272 = 0U;
	volatile int32_t t66 = 70065990;

	t66 = (((x269<=x270)+x271)==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	int64_t x275 = -22298178507LL;
	uint64_t x276 = 26425238433LLU;

	t67 = (((x273<=x274)+x275)==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x278 = -1;
	volatile int16_t x279 = 42;
	uint16_t x280 = 3437U;
	int32_t t68 = -54788301;

	t68 = (((x277<=x278)+x279)==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 0U;
	uint8_t x282 = UINT8_MAX;
	uint32_t x284 = UINT32_MAX;
	int32_t t69 = 124;

	t69 = (((x281<=x282)+x283)==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x285 = -3;
	int32_t x286 = INT32_MAX;
	uint64_t x288 = 1289528LLU;
	int32_t t70 = 70519611;

	t70 = (((x285<=x286)+x287)==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = INT64_MAX;

	t71 = (((x289<=x290)+x291)==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x295 = 15838782LLU;
	static int64_t x296 = INT64_MIN;
	static volatile int32_t t72 = 170480829;

	t72 = (((x293<=x294)+x295)==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x297 = INT32_MAX;
	static int32_t x300 = INT32_MAX;
	volatile int32_t t73 = 683;

	t73 = (((x297<=x298)+x299)==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 2045U;
	int64_t x302 = INT64_MAX;
	uint8_t x303 = 11U;
	volatile int32_t t74 = 193115106;

	t74 = (((x301<=x302)+x303)==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = 0;
	uint8_t x306 = 4U;
	int8_t x307 = INT8_MAX;
	uint32_t x308 = UINT32_MAX;

	t75 = (((x305<=x306)+x307)==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = 1641U;
	int16_t x312 = INT16_MAX;
	int32_t t76 = 921881520;

	t76 = (((x309<=x310)+x311)==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = 2;
	int16_t x315 = -1;
	volatile int32_t t77 = -3008;

	t77 = (((x313<=x314)+x315)==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x318 = 8U;
	uint16_t x319 = 23U;
	int16_t x320 = -244;

	t78 = (((x317<=x318)+x319)==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = -14958917;
	int32_t t79 = -344255127;

	t79 = (((x321<=x322)+x323)==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 894U;
	uint8_t x326 = 2U;
	static volatile int32_t t80 = -2;

	t80 = (((x325<=x326)+x327)==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x341 = INT32_MIN;
	volatile int16_t x342 = 3;
	static uint16_t x343 = UINT16_MAX;
	volatile int32_t t81 = -83523463;

	t81 = (((x341<=x342)+x343)==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 18U;
	static volatile uint16_t x346 = 2343U;
	static volatile int8_t x347 = INT8_MIN;
	static int32_t t82 = -1;

	t82 = (((x345<=x346)+x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x351 = 33U;
	volatile uint64_t x352 = UINT64_MAX;

	t83 = (((x349<=x350)+x351)==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x353 = 298U;
	volatile int32_t x354 = -2459610;
	static uint32_t x355 = 213598U;
	static uint32_t x356 = 38959007U;

	t84 = (((x353<=x354)+x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x357 = 804533859LLU;
	static uint8_t x359 = 17U;
	int32_t t85 = -3;

	t85 = (((x357<=x358)+x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = UINT32_MAX;
	int64_t x362 = 402301LL;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;
	static int32_t t86 = -1;

	t86 = (((x361<=x362)+x363)==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = -188896524628994LL;
	int32_t x367 = INT32_MAX;
	static uint64_t x368 = 7LLU;
	int32_t t87 = -4266;

	t87 = (((x365<=x366)+x367)==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MAX;
	static int32_t x371 = 145;
	uint8_t x372 = 5U;

	t88 = (((x369<=x370)+x371)==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -27;
	uint32_t x374 = 4U;
	static int64_t x375 = INT64_MIN;
	volatile int64_t x376 = -1LL;
	volatile int32_t t89 = 167875979;

	t89 = (((x373<=x374)+x375)==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 153U;
	int16_t x378 = INT16_MAX;
	uint32_t x379 = 16705631U;
	volatile int32_t t90 = 516885712;

	t90 = (((x377<=x378)+x379)==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x383 = 97U;
	int64_t x384 = -1LL;
	volatile int32_t t91 = -38963;

	t91 = (((x381<=x382)+x383)==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x387 = -1LL;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t92 = -62922;

	t92 = (((x385<=x386)+x387)==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = 2U;
	static int32_t x390 = 46117166;
	int8_t x391 = INT8_MIN;
	static uint32_t x392 = 398U;
	volatile int32_t t93 = 7183;

	t93 = (((x389<=x390)+x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x393 = 60U;
	int8_t x395 = -1;

	t94 = (((x393<=x394)+x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x397 = 0;
	uint64_t x398 = 1820631183LLU;
	volatile int16_t x399 = INT16_MIN;
	static int32_t x400 = INT32_MIN;
	int32_t t95 = -42732;

	t95 = (((x397<=x398)+x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x401 = INT16_MIN;
	uint64_t x402 = 19LLU;
	static uint16_t x403 = 2U;
	uint32_t x404 = 7U;
	int32_t t96 = 22;

	t96 = (((x401<=x402)+x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 405U;
	static volatile int64_t x406 = INT64_MIN;
	static uint8_t x407 = UINT8_MAX;
	uint8_t x408 = UINT8_MAX;
	int32_t t97 = -8832774;

	t97 = (((x405<=x406)+x407)==x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 382U;
	int16_t x410 = -1;
	int8_t x411 = 8;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t98 = 1792204;

	t98 = (((x409<=x410)+x411)==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = -1LL;
	volatile uint8_t x414 = 10U;
	uint16_t x415 = 24938U;
	volatile int32_t x416 = -800;
	volatile int32_t t99 = -10442686;

	t99 = (((x413<=x414)+x415)==x416);

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

