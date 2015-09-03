#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 1;
int64_t x5 = INT64_MIN;
uint8_t x11 = 14U;
static volatile int32_t x18 = -513291490;
volatile int16_t x20 = INT16_MAX;
int32_t x22 = -1;
uint32_t x26 = UINT32_MAX;
static uint64_t t7 = 126389381989LLU;
uint8_t x34 = 6U;
uint64_t x38 = UINT64_MAX;
volatile int16_t x44 = -1;
int64_t t10 = INT64_MAX;
int64_t x55 = -2945219LL;
int64_t x56 = INT64_MAX;
int64_t x58 = -1LL;
int64_t x63 = INT64_MIN;
int32_t t15 = -423493;
int8_t x70 = 11;
int16_t x75 = 0;
static int32_t x79 = -5428016;
static int64_t x90 = INT64_MAX;
volatile uint16_t x96 = UINT16_MAX;
int16_t x98 = INT16_MIN;
static int32_t t23 = 18828;
int64_t x104 = INT64_MIN;
static volatile uint64_t t24 = 8056LLU;
volatile int32_t x111 = -8451;
uint32_t x119 = 319813478U;
int8_t x122 = INT8_MIN;
int16_t x124 = 28;
static int64_t t30 = -95871038345371LL;
static int8_t x136 = INT8_MIN;
volatile uint16_t x144 = 14U;
int32_t t34 = 138;
static uint32_t x146 = UINT32_MAX;
uint64_t x149 = 26590012566768LLU;
int16_t x156 = INT16_MIN;
uint32_t x161 = 193092U;
uint8_t x162 = 122U;
int64_t x164 = INT64_MIN;
int16_t x174 = INT16_MIN;
int64_t x179 = INT64_MAX;
uint64_t t44 = 0LLU;
volatile int16_t x185 = 6;
int32_t x191 = INT32_MIN;
uint64_t x192 = UINT64_MAX;
static int16_t x195 = -1;
int32_t t53 = -94807809;
uint16_t x223 = 6U;
static uint8_t x232 = UINT8_MAX;
static int16_t x233 = -1;
int8_t x239 = -1;
volatile int64_t t62 = -300606261LL;
uint32_t x272 = 1361306U;
static uint8_t x274 = UINT8_MAX;
uint32_t x275 = 59U;
static uint64_t x277 = 39796518LLU;
volatile int64_t t69 = 425980LL;
static uint32_t x288 = 6U;
int64_t x289 = -1LL;
int8_t x293 = INT8_MIN;
int16_t x294 = INT16_MAX;
uint16_t x297 = 1197U;
uint8_t x299 = UINT8_MAX;
int32_t x305 = INT32_MIN;
volatile uint64_t x306 = 2010923811LLU;
int8_t x308 = INT8_MIN;
static uint64_t x313 = 1423787406866318152LLU;
volatile int32_t x320 = INT32_MIN;
int16_t x332 = INT16_MAX;
volatile int64_t x336 = INT64_MAX;
int64_t t82 = 322052388LL;
static uint16_t x344 = UINT16_MAX;
uint32_t x349 = 31263U;
int8_t x351 = 30;
int32_t x352 = INT32_MIN;
volatile uint32_t t85 = 253263752U;
volatile int8_t x372 = INT8_MAX;
volatile uint64_t t91 = 36LLU;
int32_t t92 = 826906;
int16_t x388 = INT16_MIN;
static int16_t x389 = -1;
int64_t x390 = -1LL;
int8_t x401 = INT8_MAX;
int64_t x404 = INT64_MIN;
volatile int16_t x408 = 8071;


void f0(void) {
	int32_t x2 = -1;
	int8_t x3 = -41;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -8;

	t0 = ((x1|(x2<x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x6 = 250U;
	int64_t x7 = 32790699044087313LL;
	int32_t x8 = 26;
	int64_t t1 = 978665738598LL;

	t1 = ((x5|(x6<x7))/x8);

	if (t1 != -354745078340568300LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 922667LL;
	int16_t x10 = -278;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 12575096LLU;

	t2 = ((x9|(x10<x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 634;
	int8_t x14 = INT8_MIN;
	static uint32_t x15 = UINT32_MAX;
	uint16_t x16 = 5234U;
	volatile int32_t t3 = -1762009;

	t3 = ((x13|(x14<x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	volatile int32_t t4 = -126;

	t4 = ((x17|(x18<x19))/x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -212912;
	uint8_t x23 = 6U;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = 1;

	t5 = ((x21|(x22<x23))/x24);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -420;
	int64_t x27 = INT64_MAX;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -18951197958343LL;

	t6 = ((x25|(x26<x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 6664069265LLU;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = -1;

	t7 = ((x29|(x30<x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x35 = -1;
	int16_t x36 = INT16_MAX;
	static volatile int32_t t8 = -32906490;

	t8 = ((x33|(x34<x35))/x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -34;

	t9 = ((x37|(x38<x39))/x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	uint32_t x42 = 12289638U;
	volatile int8_t x43 = -23;

	t10 = ((x41|(x42<x43))/x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = -1;
	int64_t x50 = INT64_MIN;
	int32_t x51 = -24512;
	int8_t x52 = -19;
	int32_t t11 = 71476834;

	t11 = ((x49|(x50<x51))/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static int8_t x54 = -30;
	volatile int64_t t12 = -10237278LL;

	t12 = ((x53|(x54<x55))/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 6526U;
	static int8_t x59 = INT8_MIN;
	static int16_t x60 = -1;
	static volatile uint32_t t13 = 667527788U;

	t13 = ((x57|(x58<x59))/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	static volatile uint64_t x62 = 116606LLU;
	int64_t x64 = INT64_MIN;
	int64_t t14 = -327LL;

	t14 = ((x61|(x62<x63))/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MAX;
	int32_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int16_t x68 = -1;

	t15 = ((x65|(x66<x67))/x68);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x71 = UINT8_MAX;
	static uint8_t x72 = 2U;
	int32_t t16 = -208080;

	t16 = ((x69|(x70<x71))/x72);

	if (t16 != 1073741823) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = 949;

	t17 = ((x73|(x74<x75))/x76);

	if (t17 != -8421504) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	static int32_t x78 = INT32_MAX;
	static int32_t x80 = -1;
	volatile int32_t t18 = -899;

	t18 = ((x77|(x78<x79))/x80);

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	volatile int64_t x82 = INT64_MAX;
	int64_t x83 = -1LL;
	int32_t x84 = -1;
	int32_t t19 = 108;

	t19 = ((x81|(x82<x83))/x84);

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = 1;
	uint8_t x86 = 0U;
	static uint16_t x87 = UINT16_MAX;
	volatile uint64_t x88 = 91580431376682LLU;
	volatile uint64_t t20 = 876051LLU;

	t20 = ((x85|(x86<x87))/x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	volatile int16_t x91 = INT16_MAX;
	int64_t x92 = -274036LL;
	volatile int64_t t21 = 30956126401LL;

	t21 = ((x89|(x90<x91))/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	uint32_t x94 = 1768362U;
	int16_t x95 = INT16_MIN;
	int32_t t22 = 15654;

	t22 = ((x93|(x94<x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	int16_t x99 = INT16_MAX;
	int8_t x100 = INT8_MAX;

	t23 = ((x97|(x98<x99))/x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 511858253546LLU;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;

	t24 = ((x101|(x102<x103))/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	volatile uint16_t x106 = 4U;
	uint64_t x107 = 1104810086582720LLU;
	int8_t x108 = -1;
	volatile int32_t t25 = 1;

	t25 = ((x105|(x106<x107))/x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = INT64_MIN;
	static volatile int32_t x110 = 1;
	int16_t x112 = INT16_MAX;
	volatile int64_t t26 = -217131290583181544LL;

	t26 = ((x109|(x110<x111))/x112);

	if (t26 != -281483566907400LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 1;
	static int16_t x114 = 1;
	int8_t x115 = 20;
	volatile int32_t x116 = 3002;
	volatile int32_t t27 = 23447607;

	t27 = ((x113|(x114<x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t28 = 110U;

	t28 = ((x117|(x118<x119))/x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	static uint16_t x123 = UINT16_MAX;
	volatile int32_t t29 = 2;

	t29 = ((x121|(x122<x123))/x124);

	if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 3;
	uint32_t x126 = 0U;
	int8_t x127 = INT8_MIN;
	static int64_t x128 = INT64_MAX;

	t30 = ((x125|(x126<x127))/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 5;
	uint32_t x130 = 478963945U;
	uint64_t x131 = UINT64_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t31 = -1940907;

	t31 = ((x129|(x130<x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	static int64_t x134 = -696808166LL;
	volatile int32_t x135 = 22;
	volatile int64_t t32 = -124986327181LL;

	t32 = ((x133|(x134<x135))/x136);

	if (t32 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = 19979285968LLU;
	int16_t x139 = INT16_MAX;
	int16_t x140 = -2;
	static volatile int32_t t33 = -35;

	t33 = ((x137|(x138<x139))/x140);

	if (t33 != 1073741824) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1038;
	uint8_t x142 = 28U;
	int64_t x143 = INT64_MIN;

	t34 = ((x141|(x142<x143))/x144);

	if (t34 != -74) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x145 = 138449977435320LLU;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = 870;
	volatile uint64_t t35 = 41915568416273LLU;

	t35 = ((x145|(x146<x147))/x148);

	if (t35 != 159137905098LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t36 = 2550463725LLU;

	t36 = ((x149|(x150<x151))/x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	uint32_t x154 = UINT32_MAX;
	static int16_t x155 = INT16_MAX;
	volatile int64_t t37 = -661353084140911LL;

	t37 = ((x153|(x154<x155))/x156);

	if (t37 != -281474976710655LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = -1LL;
	int32_t x158 = 2139764;
	static int16_t x159 = INT16_MIN;
	volatile int16_t x160 = 6608;
	static volatile int64_t t38 = -98436LL;

	t38 = ((x157|(x158<x159))/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x163 = 3880U;
	volatile int64_t t39 = -842153LL;

	t39 = ((x161|(x162<x163))/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = -1;
	int64_t x167 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t40 = 33019959586421134LL;

	t40 = ((x165|(x166<x167))/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 1U;
	static uint64_t x170 = 23213657LLU;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = 69096104193LLU;
	volatile uint64_t t41 = 12718087LLU;

	t41 = ((x169|(x170<x171))/x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -3220239;
	uint64_t x175 = 9848741LLU;
	static int64_t x176 = -8046363906882463LL;
	volatile int64_t t42 = 413434293LL;

	t42 = ((x173|(x174<x175))/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	int64_t t43 = 1LL;

	t43 = ((x177|(x178<x179))/x180);

	if (t43 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = 6723913448066942LLU;
	int8_t x182 = 0;
	int64_t x183 = -14082180580LL;
	static int32_t x184 = INT32_MAX;

	t44 = ((x181|(x182<x183))/x184);

	if (t44 != 3131066LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x186 = 23385498;
	volatile int64_t x187 = INT64_MIN;
	int8_t x188 = -1;
	static volatile int32_t t45 = 179039779;

	t45 = ((x185|(x186<x187))/x188);

	if (t45 != -6) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	volatile uint64_t t46 = 236913668LLU;

	t46 = ((x189|(x190<x191))/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = -1;
	int32_t x194 = INT32_MAX;
	volatile uint32_t x196 = 482835247U;
	uint32_t t47 = 53U;

	t47 = ((x193|(x194<x195))/x196);

	if (t47 != 8U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = INT16_MIN;
	static int16_t x198 = 3;
	volatile uint8_t x199 = 0U;
	volatile int32_t x200 = INT32_MAX;
	int32_t t48 = 1;

	t48 = ((x197|(x198<x199))/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MAX;
	int64_t x202 = -1LL;
	uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int64_t t49 = -94388212339631745LL;

	t49 = ((x201|(x202<x203))/x204);

	if (t49 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = INT16_MAX;
	int16_t x206 = -1;
	uint64_t x207 = 258654881460478LLU;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = 83368699;

	t50 = ((x205|(x206<x207))/x208);

	if (t50 != -255) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -297;
	static int32_t x210 = -211511;
	int8_t x211 = -5;
	static volatile int8_t x212 = INT8_MAX;
	volatile int32_t t51 = -1377;

	t51 = ((x209|(x210<x211))/x212);

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MAX;
	int64_t x214 = -40106720LL;
	volatile int32_t x215 = -337074;
	int32_t x216 = INT32_MIN;
	int64_t t52 = 47087443484230LL;

	t52 = ((x213|(x214<x215))/x216);

	if (t52 != -4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int16_t x220 = 2;

	t53 = ((x217|(x218<x219))/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	static volatile int64_t x222 = INT64_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	uint32_t t54 = 787460U;

	t54 = ((x221|(x222<x223))/x224);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MAX;
	static uint16_t x227 = 138U;
	uint32_t x228 = 39872U;
	volatile uint32_t t55 = 1065619308U;

	t55 = ((x225|(x226<x227))/x228);

	if (t55 != 107718U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	static int32_t x230 = -1;
	uint32_t x231 = 4382U;
	volatile int64_t t56 = 3252992LL;

	t56 = ((x229|(x230<x231))/x232);

	if (t56 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x234 = -1;
	int16_t x235 = 86;
	static int64_t x236 = INT64_MAX;
	int64_t t57 = 1202898733466369LL;

	t57 = ((x233|(x234<x235))/x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x237 = UINT16_MAX;
	int32_t x238 = -1;
	volatile int8_t x240 = INT8_MAX;
	volatile int32_t t58 = -120;

	t58 = ((x237|(x238<x239))/x240);

	if (t58 != 516) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = INT16_MAX;
	int32_t x242 = -1;
	uint8_t x243 = 71U;
	int64_t x244 = -1LL;
	volatile int64_t t59 = 0LL;

	t59 = ((x241|(x242<x243))/x244);

	if (t59 != -32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 13LLU;
	static uint32_t x246 = 3293U;
	int32_t x247 = INT32_MIN;
	static uint32_t x248 = 241157999U;
	uint64_t t60 = 5408768107858680LLU;

	t60 = ((x245|(x246<x247))/x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -1;
	int64_t x250 = -1LL;
	uint32_t x251 = UINT32_MAX;
	static uint8_t x252 = 25U;
	int32_t t61 = -191;

	t61 = ((x249|(x250<x251))/x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	static uint16_t x255 = 6330U;
	int64_t x256 = INT64_MIN;

	t62 = ((x253|(x254<x255))/x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = 38;
	int32_t x258 = -1;
	uint32_t x259 = 1646699812U;
	static uint32_t x260 = 45455U;
	volatile uint32_t t63 = 3498201U;

	t63 = ((x257|(x258<x259))/x260);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 15640207692103118LLU;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -1255;
	int64_t t64 = -3745312005LL;

	t64 = ((x261|(x262<x263))/x264);

	if (t64 != 7349300427772729LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = -26;
	int8_t x268 = 1;
	volatile int32_t t65 = INT32_MAX;

	t65 = ((x265|(x266<x267))/x268);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = 0;
	int32_t x270 = 346;
	int16_t x271 = -1;
	volatile uint32_t t66 = 32701U;

	t66 = ((x269|(x270<x271))/x272);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -175;
	uint64_t x276 = UINT64_MAX;
	static uint64_t t67 = 5LLU;

	t67 = ((x273|(x274<x275))/x276);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x278 = -386755938725LL;
	uint16_t x279 = 2U;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t68 = 1415983271756LLU;

	t68 = ((x277|(x278<x279))/x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x281 = 0U;
	int32_t x282 = 356;
	volatile uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MAX;

	t69 = ((x281|(x282<x283))/x284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = INT8_MAX;
	static int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	uint32_t t70 = 688535U;

	t70 = ((x285|(x286<x287))/x288);

	if (t70 != 21U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x290 = INT8_MAX;
	int32_t x291 = INT32_MIN;
	int32_t x292 = -2817;
	volatile int64_t t71 = 1011132039652989125LL;

	t71 = ((x289|(x290<x291))/x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x295 = 15U;
	volatile uint32_t x296 = 135U;
	uint32_t t72 = 1120594069U;

	t72 = ((x293|(x294<x295))/x296);

	if (t72 != 31814571U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x298 = -60;
	int32_t x300 = INT32_MIN;
	volatile int32_t t73 = 60874780;

	t73 = ((x297|(x298<x299))/x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = 3054893;
	volatile uint32_t x302 = UINT32_MAX;
	static uint64_t x303 = 15023LLU;
	int32_t x304 = 810435;
	volatile int32_t t74 = -127411238;

	t74 = ((x301|(x302<x303))/x304);

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x307 = -325;
	int32_t t75 = -1;

	t75 = ((x305|(x306<x307))/x308);

	if (t75 != 16777215) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = 6107;
	uint16_t x310 = UINT16_MAX;
	static int8_t x311 = -25;
	uint8_t x312 = 5U;
	int32_t t76 = 34839;

	t76 = ((x309|(x310<x311))/x312);

	if (t76 != 1221) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	static int16_t x316 = INT16_MIN;
	uint64_t t77 = 1989LLU;

	t77 = ((x313|(x314<x315))/x316);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 0;
	int64_t x318 = -15906130096047939LL;
	int16_t x319 = INT16_MIN;
	volatile int32_t t78 = 32;

	t78 = ((x317|(x318<x319))/x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MAX;
	volatile int32_t t79 = 2;

	t79 = ((x321|(x322<x323))/x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x325 = 187947116U;
	static int16_t x326 = -1;
	int8_t x327 = INT8_MAX;
	uint8_t x328 = 1U;
	volatile uint32_t t80 = 2U;

	t80 = ((x325|(x326<x327))/x328);

	if (t80 != 187947117U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x329 = INT64_MAX;
	static volatile int64_t x330 = -15LL;
	volatile int32_t x331 = INT32_MIN;
	volatile int64_t t81 = -1LL;

	t81 = ((x329|(x330<x331))/x332);

	if (t81 != 281483566907400LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 3298LL;
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;

	t82 = ((x333|(x334<x335))/x336);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x341 = INT64_MIN;
	uint64_t x342 = 1863878157214630977LLU;
	int64_t x343 = INT64_MIN;
	volatile int64_t t83 = 64520565299172LL;

	t83 = ((x341|(x342<x343))/x344);

	if (t83 != -140739635871744LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -1LL;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -74;
	int32_t x348 = 1586229;
	int64_t t84 = 33975877921388207LL;

	t84 = ((x345|(x346<x347))/x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;

	t85 = ((x349|(x350<x351))/x352);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 3U;
	volatile uint32_t x354 = 491U;
	uint16_t x355 = UINT16_MAX;
	uint16_t x356 = 176U;
	uint32_t t86 = 19680U;

	t86 = ((x353|(x354<x355))/x356);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = 490;
	uint16_t x358 = 13U;
	uint64_t x359 = 288335LLU;
	uint32_t x360 = 173854704U;
	uint32_t t87 = 39983633U;

	t87 = ((x357|(x358<x359))/x360);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x361 = 9U;
	static int8_t x362 = 22;
	uint64_t x363 = UINT64_MAX;
	volatile int64_t x364 = 1722779406LL;
	volatile int64_t t88 = -2012298648LL;

	t88 = ((x361|(x362<x363))/x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t89 = 17089813419010508LLU;

	t89 = ((x365|(x366<x367))/x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MAX;
	volatile uint32_t x370 = 4847U;
	uint8_t x371 = 1U;
	static volatile int32_t t90 = -49980;

	t90 = ((x369|(x370<x371))/x372);

	if (t90 != 16909320) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x373 = 18101327U;
	int32_t x374 = -261;
	uint16_t x375 = 20103U;
	uint64_t x376 = 29776660485LLU;

	t91 = ((x373|(x374<x375))/x376);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x377 = 59814911;
	int16_t x378 = INT16_MAX;
	uint32_t x379 = UINT32_MAX;
	uint8_t x380 = UINT8_MAX;

	t92 = ((x377|(x378<x379))/x380);

	if (t92 != 234568) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = 29748818LL;
	int32_t x382 = INT32_MIN;
	volatile int64_t x383 = -1LL;
	int16_t x384 = INT16_MIN;
	volatile int64_t t93 = -888LL;

	t93 = ((x381|(x382<x383))/x384);

	if (t93 != -907LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MIN;
	int32_t x387 = -60;
	static volatile int32_t t94 = 48557;

	t94 = ((x385|(x386<x387))/x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x391 = 27U;
	int32_t x392 = INT32_MIN;
	int32_t t95 = 32590;

	t95 = ((x389|(x390<x391))/x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x393 = 756821544U;
	int32_t x394 = INT32_MAX;
	static uint64_t x395 = 14438322LLU;
	int8_t x396 = INT8_MIN;
	uint32_t t96 = 255U;

	t96 = ((x393|(x394<x395))/x396);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 117U;
	static uint16_t x399 = 7U;
	uint16_t x400 = 13350U;
	volatile int32_t t97 = -99656870;

	t97 = ((x397|(x398<x399))/x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x402 = 493761659;
	int16_t x403 = 7946;
	volatile int64_t t98 = 25071LL;

	t98 = ((x401|(x402<x403))/x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MIN;
	uint64_t x407 = 61669LLU;
	volatile int32_t t99 = 418;

	t99 = ((x405|(x406<x407))/x408);

	if (t99 != 4) { NG(); } else { ; }
	
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

