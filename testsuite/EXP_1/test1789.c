#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
uint32_t x11 = 79770380U;
static volatile uint32_t x12 = 57247U;
static uint64_t x15 = 617740246LLU;
volatile uint64_t x19 = 618795174851784549LLU;
volatile int32_t t4 = 9;
int64_t x22 = -22092452754354911LL;
int8_t x23 = 39;
static int64_t x24 = INT64_MIN;
volatile int16_t x30 = INT16_MIN;
int16_t x34 = INT16_MIN;
uint8_t x40 = UINT8_MAX;
int64_t x43 = 35LL;
static volatile int32_t t13 = -19578130;
uint32_t x70 = 459429805U;
static uint16_t x77 = UINT16_MAX;
static volatile uint8_t x81 = 7U;
uint8_t x84 = UINT8_MAX;
uint16_t x86 = UINT16_MAX;
int8_t x92 = INT8_MAX;
uint32_t x94 = 15931U;
static int64_t x95 = -1LL;
static uint8_t x100 = 1U;
int32_t t24 = 14627;
static volatile uint64_t x101 = 931011790784LLU;
int16_t x104 = INT16_MIN;
static int8_t x107 = 1;
volatile uint16_t x112 = 3U;
uint64_t x124 = 4351380361667105LLU;
uint8_t x128 = 0U;
int16_t x130 = INT16_MAX;
static int8_t x134 = INT8_MIN;
int32_t x138 = INT32_MIN;
volatile int32_t t34 = 1141442;
volatile int8_t x144 = 2;
int8_t x148 = INT8_MAX;
int64_t x152 = -1LL;
volatile int32_t t37 = 5494773;
volatile uint32_t x158 = 45U;
static uint32_t x164 = 909U;
volatile int64_t x172 = INT64_MIN;
int8_t x173 = -1;
static int32_t x174 = INT32_MIN;
static volatile uint8_t x176 = 15U;
volatile int8_t x177 = 20;
int32_t x180 = INT32_MIN;
int64_t x182 = INT64_MIN;
volatile int32_t t45 = 256;
volatile uint64_t x186 = 16398733906968703LLU;
volatile int8_t x187 = 1;
volatile int32_t t47 = -131980937;
int16_t x194 = INT16_MIN;
volatile int32_t t48 = 307265;
int64_t x199 = -1081873237950LL;
static int16_t x200 = 2638;
int16_t x202 = INT16_MIN;
int64_t x203 = INT64_MIN;
uint32_t x204 = UINT32_MAX;
static volatile uint8_t x207 = 58U;
uint8_t x210 = UINT8_MAX;
uint64_t x211 = 137LLU;
volatile int32_t t55 = -690641;
uint64_t x233 = 4LLU;
int32_t x237 = 128;
volatile uint32_t x245 = 221324U;
int64_t x251 = INT64_MIN;
int64_t x256 = INT64_MAX;
volatile int32_t t63 = -56270971;
int16_t x257 = -1;
static int8_t x258 = INT8_MIN;
volatile int16_t x259 = -6435;
int32_t x262 = -1;
volatile uint16_t x263 = 31U;
uint16_t x269 = 222U;
volatile int16_t x270 = INT16_MIN;
int32_t t67 = -469;
volatile int16_t x278 = 20;
int16_t x280 = -6;
static uint16_t x281 = 292U;
uint32_t x283 = 17254U;
volatile int32_t t70 = -6898239;
static int32_t x286 = INT32_MIN;
static volatile int64_t x288 = INT64_MAX;
static int16_t x292 = -1;
volatile int32_t t72 = -91076;
volatile int32_t t73 = 1832;
int32_t x300 = INT32_MIN;
int16_t x310 = INT16_MAX;
int16_t x314 = INT16_MIN;
volatile int8_t x316 = -1;
volatile int32_t t79 = 1102;
static int8_t x323 = INT8_MAX;
volatile uint32_t x332 = UINT32_MAX;
static int32_t t82 = -1069761;
int16_t x333 = -1;
uint32_t x335 = UINT32_MAX;
int64_t x339 = INT64_MAX;
int8_t x342 = INT8_MIN;
volatile int32_t t88 = 10199898;
int16_t x361 = 450;
volatile int16_t x368 = -1;
volatile int32_t t91 = -1001910694;
uint16_t x371 = UINT16_MAX;
int16_t x373 = 3885;
int64_t x380 = INT64_MIN;
int8_t x392 = -1;
static int8_t x394 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint32_t x2 = 238726U;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 2U;
	volatile int32_t t0 = -5928;

	t0 = (((x1&x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 582;
	uint64_t x7 = UINT64_MAX;
	static int8_t x8 = -1;
	int32_t t1 = -2688;

	t1 = (((x5&x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	uint32_t x10 = 3290487U;
	volatile int32_t t2 = 73118144;

	t2 = (((x9&x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 12U;
	int16_t x14 = -217;
	uint8_t x16 = 31U;
	volatile int32_t t3 = -214558930;

	t3 = (((x13&x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int32_t x18 = INT32_MAX;
	int16_t x20 = INT16_MIN;

	t4 = (((x17&x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -856798361;
	int32_t t5 = -957;

	t5 = (((x21&x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x26 = -1;
	int64_t x27 = INT64_MAX;
	int32_t x28 = 259131951;
	volatile int32_t t6 = 2;

	t6 = (((x25&x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MAX;
	static int32_t t7 = 2034;

	t7 = (((x29&x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int64_t x35 = 2002560604464LL;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = -2299113;

	t8 = (((x33&x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	volatile int32_t t9 = -97461;

	t9 = (((x37&x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 11970U;
	int64_t x42 = INT64_MAX;
	int8_t x44 = 0;
	volatile int32_t t10 = 1;

	t10 = (((x41&x42)==x43)==x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x46 = -1;
	int32_t x47 = -85766646;
	static int16_t x48 = INT16_MAX;
	int32_t t11 = -207368;

	t11 = (((x45&x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 9U;
	volatile int16_t x50 = INT16_MAX;
	volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -96;

	t12 = (((x49&x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static volatile int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 13U;

	t13 = (((x53&x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	uint64_t x58 = 282170569153LLU;
	volatile int64_t x59 = -1LL;
	int32_t x60 = 0;
	int32_t t14 = 1;

	t14 = (((x57&x58)==x59)==x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -107978726443LL;
	int32_t x62 = -1;
	static uint8_t x63 = UINT8_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = -3370;

	t15 = (((x61&x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 706335582U;
	static int64_t x66 = -50481268615341385LL;
	int8_t x67 = INT8_MAX;
	static uint32_t x68 = 109875002U;
	int32_t t16 = -17622;

	t16 = (((x65&x66)==x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x71 = UINT16_MAX;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -30;

	t17 = (((x69&x70)==x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	uint8_t x74 = 1U;
	int8_t x75 = -25;
	volatile uint64_t x76 = 0LLU;
	int32_t t18 = 950805315;

	t18 = (((x73&x74)==x75)==x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 5;
	int32_t x79 = INT32_MIN;
	volatile uint64_t x80 = UINT64_MAX;
	int32_t t19 = 74173212;

	t19 = (((x77&x78)==x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x82 = 10545924U;
	volatile int32_t x83 = INT32_MIN;
	volatile int32_t t20 = -424;

	t20 = (((x81&x82)==x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 0;
	static int32_t x87 = -57079590;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = 96;

	t21 = (((x85&x86)==x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 18;
	volatile uint16_t x90 = UINT16_MAX;
	uint16_t x91 = UINT16_MAX;
	volatile int32_t t22 = -29046;

	t22 = (((x89&x90)==x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	static int32_t x96 = -2039190;
	volatile int32_t t23 = -157646;

	t23 = (((x93&x94)==x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 0U;
	uint16_t x98 = UINT16_MAX;
	uint32_t x99 = UINT32_MAX;

	t24 = (((x97&x98)==x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 20U;
	static uint32_t x103 = UINT32_MAX;
	volatile int32_t t25 = -7;

	t25 = (((x101&x102)==x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 8322250LLU;
	static volatile int16_t x106 = INT16_MAX;
	volatile int32_t x108 = -1;
	volatile int32_t t26 = 27746689;

	t26 = (((x105&x106)==x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	static uint32_t x110 = UINT32_MAX;
	static int16_t x111 = INT16_MAX;
	static int32_t t27 = -32901867;

	t27 = (((x109&x110)==x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -8339038;

	t28 = (((x113&x114)==x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	static volatile uint8_t x120 = 19U;
	int32_t t29 = 3483981;

	t29 = (((x117&x118)==x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -4025660LL;
	int64_t x122 = -1LL;
	uint16_t x123 = UINT16_MAX;
	volatile int32_t t30 = 0;

	t30 = (((x121&x122)==x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = 0;
	int32_t x127 = INT32_MAX;
	static volatile int32_t t31 = 0;

	t31 = (((x125&x126)==x127)==x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = -1;
	static uint8_t x131 = UINT8_MAX;
	int8_t x132 = -1;
	static volatile int32_t t32 = 554345434;

	t32 = (((x129&x130)==x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile uint32_t x135 = 122U;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 3;

	t33 = (((x133&x134)==x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;

	t34 = (((x137&x138)==x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile uint64_t x142 = 168570LLU;
	uint32_t x143 = 59U;
	volatile int32_t t35 = -28165560;

	t35 = (((x141&x142)==x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 6258798U;
	uint32_t x147 = 1U;
	int32_t t36 = 1048579;

	t36 = (((x145&x146)==x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -1LL;
	int16_t x150 = -1;
	int8_t x151 = INT8_MIN;

	t37 = (((x149&x150)==x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 7374345282064LLU;
	uint32_t x154 = 3885296U;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 5;

	t38 = (((x153&x154)==x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x157 = 6U;
	int64_t x159 = INT64_MIN;
	static uint16_t x160 = 332U;
	static volatile int32_t t39 = -596;

	t39 = (((x157&x158)==x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x162 = 1U;
	volatile uint64_t x163 = UINT64_MAX;
	volatile int32_t t40 = 1;

	t40 = (((x161&x162)==x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 25U;
	uint8_t x166 = 62U;
	static volatile int32_t x167 = INT32_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -1033122662;

	t41 = (((x165&x166)==x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	uint16_t x171 = 28257U;
	int32_t t42 = 3;

	t42 = (((x169&x170)==x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x175 = 1U;
	static volatile int32_t t43 = -1130;

	t43 = (((x173&x174)==x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 1U;
	volatile int32_t x179 = -1;
	int32_t t44 = 35;

	t44 = (((x177&x178)==x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	int16_t x183 = -74;
	uint32_t x184 = 466406973U;

	t45 = (((x181&x182)==x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 4267;
	int64_t x188 = 288916LL;
	volatile int32_t t46 = -3339642;

	t46 = (((x185&x186)==x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	static volatile int8_t x190 = 34;
	volatile int16_t x191 = 223;
	int64_t x192 = INT64_MIN;

	t47 = (((x189&x190)==x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile int64_t x195 = INT64_MAX;
	volatile int32_t x196 = INT32_MIN;

	t48 = (((x193&x194)==x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 110;
	uint8_t x198 = 3U;
	static volatile int32_t t49 = 15701;

	t49 = (((x197&x198)==x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static volatile int32_t t50 = -25204;

	t50 = (((x201&x202)==x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = -1;
	uint64_t x208 = 23074LLU;
	int32_t t51 = 58;

	t51 = (((x205&x206)==x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = -1;
	int32_t x212 = INT32_MAX;
	static volatile int32_t t52 = 1563728;

	t52 = (((x209&x210)==x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 6179726778982725LLU;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = 179LLU;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t53 = 16;

	t53 = (((x213&x214)==x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = -35;
	int32_t t54 = 39;

	t54 = (((x217&x218)==x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -35;
	uint64_t x222 = 5824590479841194519LLU;
	int16_t x223 = -1;
	int16_t x224 = INT16_MAX;

	t55 = (((x221&x222)==x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	uint8_t x226 = 34U;
	int16_t x227 = 1;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -8359550;

	t56 = (((x225&x226)==x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	volatile int64_t x230 = 1796LL;
	volatile uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MAX;
	volatile int32_t t57 = -437333;

	t57 = (((x229&x230)==x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MAX;
	static int16_t x235 = INT16_MAX;
	uint16_t x236 = 163U;
	int32_t t58 = -42142;

	t58 = (((x233&x234)==x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	uint64_t x239 = 3051477137255LLU;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 1403562;

	t59 = (((x237&x238)==x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	volatile uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = -1225;

	t60 = (((x241&x242)==x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 901U;
	uint8_t x247 = 15U;
	int8_t x248 = -28;
	volatile int32_t t61 = 269146009;

	t61 = (((x245&x246)==x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 283930195290084783LL;
	uint32_t x250 = 13U;
	static volatile int16_t x252 = 7;
	static int32_t t62 = 158731302;

	t62 = (((x249&x250)==x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	uint32_t x255 = 141U;

	t63 = (((x253&x254)==x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -1215;

	t64 = (((x257&x258)==x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 18U;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 1896;

	t65 = (((x261&x262)==x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = INT8_MIN;
	static int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MIN;
	volatile int64_t x268 = INT64_MAX;
	int32_t t66 = -1;

	t66 = (((x265&x266)==x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = INT8_MAX;
	static volatile int32_t x272 = INT32_MIN;

	t67 = (((x269&x270)==x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	volatile int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 2;

	t68 = (((x273&x274)==x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = UINT8_MAX;
	int32_t x279 = -1;
	volatile int32_t t69 = -494600040;

	t69 = (((x277&x278)==x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x282 = 10372930061141555LLU;
	int32_t x284 = -1;

	t70 = (((x281&x282)==x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 48U;
	static uint16_t x287 = UINT16_MAX;
	int32_t t71 = -615;

	t71 = (((x285&x286)==x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = INT64_MIN;
	static uint16_t x291 = UINT16_MAX;

	t72 = (((x289&x290)==x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int8_t x294 = -1;
	int32_t x295 = -1;
	int64_t x296 = INT64_MIN;

	t73 = (((x293&x294)==x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = 0U;
	volatile int64_t x298 = -322LL;
	volatile int32_t x299 = INT32_MIN;
	static int32_t t74 = -87;

	t74 = (((x297&x298)==x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1035065349LL;
	static int32_t x302 = INT32_MAX;
	int64_t x303 = -1LL;
	int16_t x304 = -4798;
	volatile int32_t t75 = 60939907;

	t75 = (((x301&x302)==x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 908U;
	volatile int8_t x306 = 7;
	int32_t x307 = -35;
	volatile int32_t x308 = -6386753;
	int32_t t76 = 107;

	t76 = (((x305&x306)==x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static volatile int16_t x311 = INT16_MAX;
	volatile int32_t x312 = 375783446;
	volatile int32_t t77 = 412412348;

	t77 = (((x309&x310)==x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static volatile int8_t x315 = INT8_MAX;
	int32_t t78 = -9;

	t78 = (((x313&x314)==x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = -10;
	int64_t x319 = -374LL;
	uint8_t x320 = 1U;

	t79 = (((x317&x318)==x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 57005921031LLU;
	int16_t x322 = -1;
	static int32_t x324 = -1;
	int32_t t80 = -615;

	t80 = (((x321&x322)==x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 12629200LLU;
	volatile int32_t x327 = INT32_MAX;
	int16_t x328 = 12494;
	static volatile int32_t t81 = 7252398;

	t81 = (((x325&x326)==x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int64_t x330 = -1LL;
	int16_t x331 = -1301;

	t82 = (((x329&x330)==x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 1U;
	volatile int64_t x336 = INT64_MAX;
	volatile int32_t t83 = 7171;

	t83 = (((x333&x334)==x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	static int8_t x338 = -30;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -5290;

	t84 = (((x337&x338)==x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static int32_t x343 = 5596103;
	uint8_t x344 = UINT8_MAX;
	static int32_t t85 = 1;

	t85 = (((x341&x342)==x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	uint8_t x346 = 3U;
	int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 11105497;

	t86 = (((x345&x346)==x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 51386655182LLU;
	uint64_t x351 = 277859LLU;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = 9755;

	t87 = (((x349&x350)==x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x354 = UINT32_MAX;
	static int32_t x355 = INT32_MAX;
	uint8_t x356 = 4U;

	t88 = (((x353&x354)==x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 65U;
	int32_t x358 = INT32_MIN;
	volatile uint64_t x359 = 829862360389755LLU;
	static volatile int16_t x360 = -1;
	int32_t t89 = 1782007;

	t89 = (((x357&x358)==x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x362 = 9777U;
	static int32_t x363 = 41443;
	static int8_t x364 = 1;
	static int32_t t90 = -207680;

	t90 = (((x361&x362)==x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = -7;
	volatile uint16_t x367 = UINT16_MAX;

	t91 = (((x365&x366)==x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 696656366LLU;
	static volatile uint8_t x370 = 7U;
	static volatile int16_t x372 = INT16_MIN;
	int32_t t92 = -29023893;

	t92 = (((x369&x370)==x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	volatile uint32_t x376 = 264856U;
	volatile int32_t t93 = -2754544;

	t93 = (((x373&x374)==x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = INT8_MIN;
	volatile int32_t t94 = -1;

	t94 = (((x377&x378)==x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = -1LL;
	int32_t x382 = -78;
	int8_t x383 = -14;
	uint64_t x384 = 3579LLU;
	static volatile int32_t t95 = -109464163;

	t95 = (((x381&x382)==x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 0U;
	volatile int8_t x386 = 0;
	volatile int8_t x387 = 26;
	uint64_t x388 = UINT64_MAX;
	int32_t t96 = -1;

	t96 = (((x385&x386)==x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MAX;
	int64_t x391 = 2LL;
	int32_t t97 = -68;

	t97 = (((x389&x390)==x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 80997022U;
	int32_t t98 = 11495;

	t98 = (((x393&x394)==x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 0;
	static uint16_t x398 = 7449U;
	static int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MAX;
	int32_t t99 = -7214;

	t99 = (((x397&x398)==x399)==x400);

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

