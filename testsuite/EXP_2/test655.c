#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
int32_t x5 = 232051861;
volatile int32_t x7 = INT32_MAX;
int8_t x10 = 37;
volatile int16_t x11 = INT16_MAX;
int64_t t2 = -40907411547595497LL;
int64_t x14 = -1LL;
int64_t t3 = -8268599065374042LL;
static uint64_t x24 = UINT64_MAX;
int64_t x25 = 119317534698LL;
uint32_t x26 = 2986479U;
uint64_t x27 = UINT64_MAX;
uint64_t t6 = 403733LLU;
volatile int32_t x32 = 186;
static uint16_t x35 = 6U;
static int32_t x38 = -1;
int8_t x46 = -1;
static int32_t x47 = INT32_MIN;
uint64_t t16 = 2569701229671LLU;
static uint64_t x88 = 5647054LLU;
static uint64_t t18 = 1LLU;
uint32_t x92 = 250219U;
int64_t t19 = 12966360893845728LL;
static uint32_t x114 = 1U;
int64_t x116 = -1904884508912165226LL;
uint8_t x129 = UINT8_MAX;
int32_t x131 = INT32_MIN;
int32_t x140 = 238;
int64_t x147 = INT64_MAX;
static uint64_t x148 = 4587963893LLU;
uint32_t x153 = 112509U;
volatile uint32_t t34 = 1U;
int32_t t35 = -526;
int32_t x162 = INT32_MAX;
static int8_t x172 = INT8_MAX;
int32_t x173 = INT32_MAX;
int64_t x180 = INT64_MAX;
int16_t x183 = INT16_MAX;
static int64_t x190 = INT64_MIN;
static volatile int32_t x194 = 67;
volatile int64_t x196 = INT64_MIN;
static int32_t x200 = INT32_MAX;
int8_t x212 = INT8_MIN;
int64_t t49 = 158144274234399851LL;
uint32_t x223 = 2039274270U;
uint32_t t51 = 6U;
int16_t x225 = INT16_MIN;
int8_t x226 = -6;
uint32_t x229 = UINT32_MAX;
int8_t x231 = INT8_MAX;
int8_t x234 = -1;
volatile int32_t x245 = -27540;
int32_t x250 = 8397;
int8_t x253 = INT8_MIN;
int32_t x258 = INT32_MAX;
static int16_t x268 = -624;
int32_t x270 = INT32_MIN;
volatile uint32_t t62 = 2582U;
int32_t x284 = INT32_MIN;
int8_t x288 = INT8_MIN;
volatile int64_t t65 = 1274206951202725LL;
volatile int16_t x300 = INT16_MIN;
uint64_t x303 = 5579LLU;
int64_t x318 = INT64_MIN;
int8_t x326 = INT8_MIN;
static int8_t x333 = 0;
uint64_t t78 = 50031LLU;
uint16_t x350 = 18U;
uint64_t t80 = 845945280LLU;
static volatile uint16_t x353 = UINT16_MAX;
static int16_t x368 = -43;
int8_t x371 = 12;
int64_t t84 = 134366LL;
uint32_t x373 = UINT32_MAX;
volatile int64_t t86 = -13793201933761LL;
int8_t x381 = -1;
int64_t t87 = -130275459LL;
static int32_t t88 = 122;
int16_t x394 = -197;
static int32_t t90 = -227861828;
int64_t t91 = 44725LL;
volatile uint64_t x404 = UINT64_MAX;
int8_t x421 = -1;
int16_t x424 = INT16_MIN;
int64_t t97 = -33973LL;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	static int32_t x3 = 60633;
	static uint16_t x4 = 11U;
	static uint32_t t0 = 34U;

	t0 = ((x1|(x2/x3))%x4);

	if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 99LLU;
	static uint8_t x8 = 65U;
	volatile uint64_t t1 = 67083687559278LLU;

	t1 = ((x5|(x6/x7))%x8);

	if (t1 != 41LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 31231051535LL;
	uint32_t x12 = 5881807U;

	t2 = ((x9|(x10/x11))%x12);

	if (t2 != 4538172LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 101176U;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;

	t3 = ((x13|(x14/x15))%x16);

	if (t3 != 101176LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	volatile int64_t x18 = -283867795926LL;
	int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MAX;
	int64_t t4 = -4LL;

	t4 = ((x17|(x18/x19))%x20);

	if (t4 != -132LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint64_t x22 = 366324053909621LLU;
	uint32_t x23 = 10890U;
	static uint64_t t5 = 196727171575LLU;

	t5 = ((x21|(x22/x23))%x24);

	if (t5 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x28 = 908LLU;

	t6 = ((x25|(x26/x27))%x28);

	if (t6 != 490LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	static int32_t x30 = INT32_MAX;
	volatile int8_t x31 = -60;
	volatile int32_t t7 = 0;

	t7 = ((x29|(x30/x31))%x32);

	if (t7 != -163) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 10;
	int8_t x34 = -1;
	int32_t x36 = INT32_MIN;
	int32_t t8 = 3568781;

	t8 = ((x33|(x34/x35))%x36);

	if (t8 != 10) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -6;
	static int8_t x39 = INT8_MIN;
	volatile uint64_t x40 = 21LLU;
	uint64_t t9 = 879LLU;

	t9 = ((x37|(x38/x39))%x40);

	if (t9 != 10LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 79U;
	volatile int16_t x42 = -10094;
	int32_t x43 = 131341926;
	int32_t x44 = INT32_MIN;
	uint32_t t10 = 172U;

	t10 = ((x41|(x42/x43))%x44);

	if (t10 != 79U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 1906381121106509LLU;
	uint8_t x48 = UINT8_MAX;
	static uint64_t t11 = 2960035707630119LLU;

	t11 = ((x45|(x46/x47))%x48);

	if (t11 != 29LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -426;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = 6;
	static int16_t x56 = INT16_MIN;
	int32_t t12 = 737;

	t12 = ((x53|(x54/x55))%x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 432062242U;
	uint32_t x58 = 301U;
	uint32_t x59 = 60219153U;
	int16_t x60 = 6;
	static volatile uint32_t t13 = 735631U;

	t13 = ((x57|(x58/x59))%x60);

	if (t13 != 4U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1604983;
	int8_t x66 = INT8_MAX;
	int32_t x67 = 355;
	static int64_t x68 = -1LL;
	volatile int64_t t14 = 4201273503254642461LL;

	t14 = ((x65|(x66/x67))%x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	uint32_t x72 = 1242U;
	volatile uint32_t t15 = 56U;

	t15 = ((x69|(x70/x71))%x72);

	if (t15 != 759U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = INT16_MIN;
	volatile uint64_t x78 = UINT64_MAX;
	static uint8_t x79 = UINT8_MAX;
	static int16_t x80 = -31;

	t16 = ((x77|(x78/x79))%x80);

	if (t16 != 18446744073709519105LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 37U;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -170618051;
	volatile uint32_t t17 = 6291U;

	t17 = ((x81|(x82/x83))%x84);

	if (t17 != 37U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MAX;
	volatile int64_t x87 = -2082865910LL;

	t18 = ((x85|(x86/x87))%x88);

	if (t18 != 3206255LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x89 = -4LL;
	static int16_t x90 = -1;
	uint16_t x91 = UINT16_MAX;

	t19 = ((x89|(x90/x91))%x92);

	if (t19 != -4LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 3053080633LLU;
	int64_t x94 = INT64_MAX;
	uint32_t x95 = 133794361U;
	int16_t x96 = INT16_MIN;
	uint64_t t20 = 60060106897781098LLU;

	t20 = ((x93|(x94/x95))%x96);

	if (t20 != 71907038589LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x97 = INT16_MAX;
	uint16_t x98 = 207U;
	int8_t x99 = INT8_MAX;
	int8_t x100 = -1;
	volatile int32_t t21 = 60309;

	t21 = ((x97|(x98/x99))%x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 1;
	int16_t x102 = 15;
	int32_t x103 = 3419;
	static volatile int64_t x104 = INT64_MIN;
	volatile int64_t t22 = 635119691LL;

	t22 = ((x101|(x102/x103))%x104);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	int32_t x107 = -425362;
	int16_t x108 = INT16_MIN;
	int32_t t23 = -678421;

	t23 = ((x105|(x106/x107))%x108);

	if (t23 != -27720) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	volatile int64_t x110 = -1LL;
	volatile uint16_t x111 = 2U;
	uint32_t x112 = 1904702U;
	static int64_t t24 = 846959663569LL;

	t24 = ((x109|(x110/x111))%x112);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	static int8_t x115 = INT8_MIN;
	int64_t t25 = 49951884961002263LL;

	t25 = ((x113|(x114/x115))%x116);

	if (t25 != 4294967168LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MAX;
	uint16_t x123 = 3U;
	volatile int32_t x124 = -1;
	volatile int32_t t26 = -6;

	t26 = ((x121|(x122/x123))%x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x126 = INT64_MIN;
	static uint64_t x127 = 332649394613LLU;
	volatile uint8_t x128 = 1U;
	uint64_t t27 = 241700480901609LLU;

	t27 = ((x125|(x126/x127))%x128);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = -1;
	int16_t x132 = -1;
	int32_t t28 = 11551098;

	t28 = ((x129|(x130/x131))%x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = 14U;
	uint16_t x135 = UINT16_MAX;
	uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t29 = 883U;

	t29 = ((x133|(x134/x135))%x136);

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -1;
	uint32_t x138 = 5U;
	int8_t x139 = -10;
	volatile uint32_t t30 = 709459U;

	t30 = ((x137|(x138/x139))%x140);

	if (t30 != 17U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 261LLU;
	int32_t x142 = -4877577;
	int64_t x143 = -5923576878LL;
	int64_t x144 = -3706655548854LL;
	volatile uint64_t t31 = 6680LLU;

	t31 = ((x141|(x142/x143))%x144);

	if (t31 != 261LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = 2U;
	static volatile uint64_t t32 = 3629872566777LLU;

	t32 = ((x145|(x146/x147))%x148);

	if (t32 != 1538165483LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MAX;
	int32_t x152 = -1;
	volatile int32_t t33 = -814890168;

	t33 = ((x149|(x150/x151))%x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = -1866;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -67924;

	t34 = ((x153|(x154/x155))%x156);

	if (t34 != 112509U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = -34682;
	int8_t x158 = INT8_MAX;
	static int8_t x159 = INT8_MIN;
	volatile uint8_t x160 = 7U;

	t35 = ((x157|(x158/x159))%x160);

	if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -3;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = 31363727579LLU;
	uint64_t t36 = 392328324LLU;

	t36 = ((x161|(x162/x163))%x164);

	if (t36 != 27633064281LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MIN;
	int64_t x166 = -7569716LL;
	uint8_t x167 = 60U;
	uint64_t x168 = 58712918908LLU;
	volatile uint64_t t37 = 316979906LLU;

	t37 = ((x165|(x166/x167))%x168);

	if (t37 != 47766801567LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x169 = INT64_MAX;
	uint32_t x170 = UINT32_MAX;
	static int8_t x171 = INT8_MIN;
	int64_t t38 = 422866368699892LL;

	t38 = ((x169|(x170/x171))%x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x174 = UINT32_MAX;
	static volatile int64_t x175 = INT64_MIN;
	uint16_t x176 = 4U;
	int64_t t39 = -247098491LL;

	t39 = ((x173|(x174/x175))%x176);

	if (t39 != 3LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x177 = INT16_MAX;
	int16_t x178 = -7;
	int64_t x179 = INT64_MAX;
	int64_t t40 = -152162106109261523LL;

	t40 = ((x177|(x178/x179))%x180);

	if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x181 = 12U;
	int8_t x182 = INT8_MIN;
	static int32_t x184 = -1;
	static uint32_t t41 = 405645U;

	t41 = ((x181|(x182/x183))%x184);

	if (t41 != 12U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -1;
	static uint32_t x186 = UINT32_MAX;
	int64_t x187 = -1LL;
	int32_t x188 = INT32_MAX;
	volatile int64_t t42 = 3279538128885LL;

	t42 = ((x185|(x186/x187))%x188);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t x191 = 258325057515311LLU;
	int64_t x192 = INT64_MAX;
	uint64_t t43 = 873575974138565121LLU;

	t43 = ((x189|(x190/x191))%x192);

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x193 = 4;
	static int16_t x195 = 24;
	int64_t t44 = -1125068270724599LL;

	t44 = ((x193|(x194/x195))%x196);

	if (t44 != 6LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	int32_t x198 = INT32_MAX;
	int16_t x199 = 5151;
	volatile int32_t t45 = -89228;

	t45 = ((x197|(x198/x199))%x200);

	if (t45 != 425983) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 317258075U;
	int32_t x202 = -1;
	static uint64_t x203 = UINT64_MAX;
	volatile int64_t x204 = -1LL;
	uint64_t t46 = 908564697292LLU;

	t46 = ((x201|(x202/x203))%x204);

	if (t46 != 317258075LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 3739U;
	volatile int64_t x206 = -13134209912900090LL;
	int16_t x207 = INT16_MIN;
	uint8_t x208 = 7U;
	int64_t t47 = -4218132LL;

	t47 = ((x205|(x206/x207))%x208);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = 10316445259200076LL;
	uint64_t x210 = 39638887983LLU;
	volatile uint64_t x211 = UINT64_MAX;
	volatile uint64_t t48 = 92959010470LLU;

	t48 = ((x209|(x210/x211))%x212);

	if (t48 != 10316445259200076LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	uint32_t x214 = 147U;
	int64_t x215 = 41686246LL;
	int32_t x216 = -1051873929;

	t49 = ((x213|(x214/x215))%x216);

	if (t49 != -522797354LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = 26;
	int32_t x219 = INT32_MAX;
	volatile int16_t x220 = INT16_MIN;
	volatile uint32_t t50 = 45899U;

	t50 = ((x217|(x218/x219))%x220);

	if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = 0;
	int16_t x224 = INT16_MIN;

	t51 = ((x221|(x222/x223))%x224);

	if (t51 != 32640U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x227 = 255415LL;
	static int8_t x228 = INT8_MIN;
	int64_t t52 = 11331925LL;

	t52 = ((x225|(x226/x227))%x228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x230 = UINT32_MAX;
	static uint64_t x232 = 21209543LLU;
	volatile uint64_t t53 = 155LLU;

	t53 = ((x229|(x230/x231))%x232);

	if (t53 != 10639609LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	int32_t x235 = -1;
	volatile uint16_t x236 = 2U;
	volatile int64_t t54 = 11222LL;

	t54 = ((x233|(x234/x235))%x236);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -249237923431783043LL;
	int64_t x238 = 130772079229168456LL;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = -1;
	int64_t t55 = 96395LL;

	t55 = ((x237|(x238/x239))%x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x246 = UINT8_MAX;
	static int8_t x247 = -1;
	int64_t x248 = 410LL;
	int64_t t56 = 194502LL;

	t56 = ((x245|(x246/x247))%x248);

	if (t56 != -147LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	static volatile int8_t x251 = INT8_MIN;
	int8_t x252 = -1;
	uint64_t t57 = 372121812929LLU;

	t57 = ((x249|(x250/x251))%x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x254 = -6170487325623851LL;
	int32_t x255 = -7550455;
	uint32_t x256 = 804U;
	volatile int64_t t58 = -51634LL;

	t58 = ((x253|(x254/x255))%x256);

	if (t58 != -82LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x259 = -1;
	int32_t x260 = INT32_MIN;
	int32_t t59 = -5;

	t59 = ((x257|(x258/x259))%x260);

	if (t59 != -2147483393) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = UINT64_MAX;
	static int8_t x266 = 7;
	static volatile int16_t x267 = INT16_MAX;
	volatile uint64_t t60 = 2660420181LLU;

	t60 = ((x265|(x266/x267))%x268);

	if (t60 != 623LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 63658U;
	volatile uint8_t x271 = 31U;
	int32_t x272 = -97668;
	uint32_t t61 = 197159U;

	t61 = ((x269|(x270/x271))%x272);

	if (t61 != 4225695678U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x273 = INT32_MAX;
	uint32_t x274 = 3U;
	uint32_t x275 = 71898U;
	int16_t x276 = 112;

	t62 = ((x273|(x274/x275))%x276);

	if (t62 != 15U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -405640370;
	int64_t x282 = -1LL;
	int8_t x283 = 10;
	volatile int64_t t63 = -14457505071LL;

	t63 = ((x281|(x282/x283))%x284);

	if (t63 != -405640370LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 14U;
	int8_t x287 = INT8_MAX;
	static int32_t t64 = 971346798;

	t64 = ((x285|(x286/x287))%x288);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = UINT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;

	t65 = ((x289|(x290/x291))%x292);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 27U;
	int32_t x294 = -1;
	static int32_t x295 = -1;
	int32_t x296 = INT32_MAX;
	volatile int32_t t66 = 0;

	t66 = ((x293|(x294/x295))%x296);

	if (t66 != 27) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = UINT32_MAX;
	static uint8_t x298 = UINT8_MAX;
	int16_t x299 = 2951;
	uint32_t t67 = 469615U;

	t67 = ((x297|(x298/x299))%x300);

	if (t67 != 32767U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -735718678;
	int32_t x302 = -1;
	uint32_t x304 = 19U;
	uint64_t t68 = 1264548033450531540LLU;

	t68 = ((x301|(x302/x303))%x304);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x305 = 0U;
	volatile int8_t x306 = -1;
	uint16_t x307 = 34U;
	int64_t x308 = INT64_MIN;
	static int64_t t69 = -3LL;

	t69 = ((x305|(x306/x307))%x308);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x309 = UINT8_MAX;
	static uint16_t x310 = UINT16_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	uint32_t t70 = 30333980U;

	t70 = ((x309|(x310/x311))%x312);

	if (t70 != 255U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x314 = -1;
	int64_t x315 = INT64_MAX;
	int16_t x316 = -1;
	int64_t t71 = 6492544147LL;

	t71 = ((x313|(x314/x315))%x316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	int16_t x320 = 477;
	int64_t t72 = -21647882962LL;

	t72 = ((x317|(x318/x319))%x320);

	if (t72 != -331LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MAX;
	static int32_t x322 = INT32_MIN;
	uint32_t x323 = 14809726U;
	uint16_t x324 = 84U;
	static volatile int64_t t73 = 1LL;

	t73 = ((x321|(x322/x323))%x324);

	if (t73 != 7LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int16_t x327 = -261;
	int64_t x328 = -229421916997LL;
	volatile int64_t t74 = -136451LL;

	t74 = ((x325|(x326/x327))%x328);

	if (t74 != 65535LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = 81620785092LL;
	int16_t x330 = -1521;
	uint32_t x331 = 837U;
	uint32_t x332 = 6584U;
	int64_t t75 = -3493328424556162058LL;

	t75 = ((x329|(x330/x331))%x332);

	if (t75 != 4580LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	int8_t x336 = -1;
	volatile int32_t t76 = 942;

	t76 = ((x333|(x334/x335))%x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -1;
	static volatile int16_t x338 = INT16_MAX;
	uint8_t x339 = 10U;
	uint16_t x340 = 2201U;
	int32_t t77 = 265498047;

	t77 = ((x337|(x338/x339))%x340);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x342 = -1;
	volatile int32_t x343 = INT32_MIN;
	static uint64_t x344 = UINT64_MAX;

	t78 = ((x341|(x342/x343))%x344);

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	int32_t x347 = -1;
	volatile uint8_t x348 = UINT8_MAX;
	static int32_t t79 = 1;

	t79 = ((x345|(x346/x347))%x348);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = INT32_MAX;
	uint64_t x351 = 238LLU;
	volatile int16_t x352 = 3;

	t80 = ((x349|(x350/x351))%x352);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x354 = 5U;
	volatile int64_t x355 = INT64_MIN;
	static volatile int32_t x356 = -18926521;
	int64_t t81 = -71049280516569083LL;

	t81 = ((x353|(x354/x355))%x356);

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = INT64_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	static uint8_t x364 = UINT8_MAX;
	volatile uint64_t t82 = 90093435334LLU;

	t82 = ((x361|(x362/x363))%x364);

	if (t82 != 129LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 413600050LLU;
	int32_t x366 = -8;
	uint16_t x367 = 3U;
	uint64_t t83 = 1LLU;

	t83 = ((x365|(x366/x367))%x368);

	if (t83 != 41LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = -15748;
	static int64_t x372 = INT64_MAX;

	t84 = ((x369|(x370/x371))%x372);

	if (t84 != -1312LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x374 = UINT64_MAX;
	volatile int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	uint64_t t85 = 23523256707185LLU;

	t85 = ((x373|(x374/x375))%x376);

	if (t85 != 4294967295LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = 0;
	int64_t x378 = INT64_MIN;
	int64_t x379 = 8LL;
	static int16_t x380 = 501;

	t86 = ((x377|(x378/x379))%x380);

	if (t86 != -97LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x382 = 1094834257LL;
	volatile int32_t x383 = INT32_MIN;
	volatile int32_t x384 = -5;

	t87 = ((x381|(x382/x383))%x384);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MAX;
	int16_t x387 = 443;
	uint8_t x388 = UINT8_MAX;

	t88 = ((x385|(x386/x387))%x388);

	if (t88 != -55) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x389 = 7881852397LLU;
	static uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	static int16_t x392 = 80;
	volatile uint64_t t89 = 11LLU;

	t89 = ((x389|(x390/x391))%x392);

	if (t89 != 77LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x393 = 3078U;
	static volatile int32_t x395 = INT32_MAX;
	uint16_t x396 = 492U;

	t90 = ((x393|(x394/x395))%x396);

	if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = 0;
	int8_t x399 = INT8_MAX;
	int64_t x400 = -1LL;

	t91 = ((x397|(x398/x399))%x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x402 = INT8_MIN;
	int32_t x403 = -317380778;
	volatile uint64_t t92 = 1269LLU;

	t92 = ((x401|(x402/x403))%x404);

	if (t92 != 255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = INT8_MIN;
	uint8_t x406 = 1U;
	int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	int32_t t93 = -15;

	t93 = ((x405|(x406/x407))%x408);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = -1LL;
	volatile uint8_t x410 = 0U;
	static uint64_t x411 = 15234LLU;
	uint64_t x412 = 8748629365006945998LLU;
	uint64_t t94 = 4792162759LLU;

	t94 = ((x409|(x410/x411))%x412);

	if (t94 != 949485343695659619LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -1;
	volatile int64_t x414 = -1LL;
	volatile int64_t x415 = -1LL;
	int64_t x416 = -25053689850324LL;
	int64_t t95 = -1872433640208640LL;

	t95 = ((x413|(x414/x415))%x416);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x422 = INT8_MAX;
	int16_t x423 = INT16_MIN;
	static volatile int32_t t96 = -2348;

	t96 = ((x421|(x422/x423))%x424);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x425 = INT8_MAX;
	static int64_t x426 = -1LL;
	int16_t x427 = -1;
	uint32_t x428 = 2257U;

	t97 = ((x425|(x426/x427))%x428);

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = INT32_MAX;
	int64_t x430 = -1LL;
	int8_t x431 = -1;
	int32_t x432 = INT32_MIN;
	int64_t t98 = 320262819408LL;

	t98 = ((x429|(x430/x431))%x432);

	if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x437 = UINT64_MAX;
	int32_t x438 = -1;
	uint16_t x439 = 18U;
	int16_t x440 = INT16_MAX;
	static volatile uint64_t t99 = 55LLU;

	t99 = ((x437|(x438/x439))%x440);

	if (t99 != 15LLU) { NG(); } else { ; }
	
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

