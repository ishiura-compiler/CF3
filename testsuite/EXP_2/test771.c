#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x6 = UINT64_MAX;
int16_t x12 = INT16_MIN;
volatile int32_t t2 = 27850291;
static int8_t x15 = INT8_MIN;
int64_t t3 = -1578941065124753771LL;
uint32_t x17 = 45U;
int16_t x26 = 257;
volatile int32_t t6 = -3331965;
volatile int8_t x33 = 1;
volatile int16_t x41 = INT16_MIN;
uint16_t x52 = UINT16_MAX;
volatile int32_t t14 = 1;
uint8_t x63 = 1U;
int32_t x64 = -42473716;
uint32_t t16 = 243U;
int8_t x71 = -1;
uint16_t x72 = 691U;
uint32_t t18 = 110692495U;
int16_t x78 = INT16_MIN;
static int8_t x80 = 59;
static int32_t t19 = 4;
static uint16_t x82 = 2796U;
int64_t x83 = 995557833209647LL;
uint16_t x87 = UINT16_MAX;
static volatile int32_t x88 = INT32_MIN;
volatile int8_t x91 = -3;
uint32_t x98 = UINT32_MAX;
int16_t x104 = INT16_MIN;
volatile int16_t x118 = 992;
uint64_t x124 = 127514640LLU;
int16_t x127 = INT16_MIN;
int8_t x128 = INT8_MIN;
int32_t t34 = 6811679;
static int32_t x141 = 342649027;
uint64_t x144 = UINT64_MAX;
static volatile uint16_t x146 = 4931U;
static int16_t x148 = 1;
volatile int32_t t36 = -2147034;
int16_t x153 = -1;
volatile int32_t x160 = 239886;
int32_t x162 = INT32_MAX;
static int16_t x163 = INT16_MAX;
uint8_t x171 = UINT8_MAX;
volatile int16_t x173 = INT16_MAX;
int8_t x183 = INT8_MAX;
int32_t x191 = INT32_MAX;
int8_t x196 = -1;
volatile uint32_t x198 = UINT32_MAX;
static uint32_t x203 = UINT32_MAX;
volatile uint16_t x204 = UINT16_MAX;
volatile int32_t x211 = -24;
static int32_t t52 = 161693520;
volatile uint64_t t53 = 21297386LLU;
static uint16_t x219 = 6U;
uint16_t x229 = 57U;
int64_t t56 = 115632516LL;
int64_t t57 = 0LL;
int32_t x240 = INT32_MIN;
static int64_t x241 = INT64_MAX;
int64_t x253 = INT64_MAX;
uint64_t x254 = UINT64_MAX;
uint16_t x255 = UINT16_MAX;
int32_t t62 = 6;
volatile int32_t t63 = -304210847;
int64_t x266 = 5LL;
int32_t t66 = 9928;
int64_t x279 = -2499931383847719LL;
volatile int64_t x283 = INT64_MIN;
static int64_t x289 = INT64_MAX;
int8_t x292 = -5;
static volatile int64_t x294 = INT64_MAX;
int32_t x296 = 194;
uint8_t x301 = 1U;
static volatile int32_t t73 = 474097;
volatile int32_t t74 = -8949586;
volatile int32_t t75 = 538;
uint32_t x316 = 2U;
int64_t x318 = INT64_MIN;
int64_t x320 = 165504732487188304LL;
static int64_t t77 = 18392LL;
int8_t x326 = -1;
static uint64_t x335 = UINT64_MAX;
int32_t t81 = -175032149;
volatile int8_t x349 = -52;
int32_t x359 = -1;
static int32_t t87 = 4810392;
int32_t t91 = -571324;
uint32_t x377 = 68791U;
volatile int32_t t92 = -33;
volatile uint64_t t94 = 179866036LLU;
int32_t x392 = -1;
int32_t x396 = INT32_MIN;
volatile int16_t x404 = INT16_MIN;
volatile int32_t t98 = -1133065;


void f0(void) {
	int8_t x1 = -1;
	static volatile int64_t x2 = INT64_MIN;
	static volatile uint8_t x3 = UINT8_MAX;
	volatile uint8_t x4 = 32U;
	volatile int32_t t0 = -22151;

	t0 = ((x1==(x2%x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 171336132U;
	int32_t x7 = INT32_MAX;
	static int64_t x8 = -146835052LL;
	volatile int64_t t1 = 1909100760430703LL;

	t1 = ((x5==(x6%x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 431379138U;
	int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MIN;

	t2 = ((x9==(x10%x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 14837U;
	uint8_t x14 = UINT8_MAX;
	int64_t x16 = INT64_MAX;

	t3 = ((x13==(x14%x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 1760U;
	static uint32_t x19 = 893316U;
	int32_t x20 = -1;
	int32_t t4 = 0;

	t4 = ((x17==(x18%x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 3U;
	static uint8_t x22 = 1U;
	volatile uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 95416;

	t5 = ((x21==(x22%x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 2LLU;
	static int8_t x27 = INT8_MAX;
	static int16_t x28 = -1;

	t6 = ((x25==(x26%x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	volatile uint8_t x30 = UINT8_MAX;
	uint64_t x31 = 5959LLU;
	static int8_t x32 = -4;
	int32_t t7 = 4071;

	t7 = ((x29==(x30%x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	volatile uint64_t x35 = 10262519349522LLU;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 857037;

	t8 = ((x33==(x34%x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 36891190717393137LL;
	int8_t x38 = INT8_MAX;
	int16_t x39 = 8;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x37==(x38%x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	int32_t x43 = -1;
	uint8_t x44 = 13U;
	int32_t t10 = 243325038;

	t10 = ((x41==(x42%x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	volatile int16_t x46 = INT16_MIN;
	static volatile int32_t x47 = INT32_MIN;
	static uint16_t x48 = 4377U;
	volatile int32_t t11 = -162482;

	t11 = ((x45==(x46%x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	volatile int32_t t12 = 29694;

	t12 = ((x49==(x50%x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 2;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = -1;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -196938255;

	t13 = ((x53==(x54%x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 7U;

	t14 = ((x57==(x58%x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 439252115;
	volatile int64_t x62 = INT64_MAX;
	int32_t t15 = -817714127;

	t15 = ((x61==(x62%x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 2U;
	volatile int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	volatile uint32_t x68 = UINT32_MAX;

	t16 = ((x65==(x66%x67))/x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 3;
	static uint16_t x70 = 5937U;
	static int32_t t17 = -20677;

	t17 = ((x69==(x70%x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static int32_t x74 = 8440;
	volatile uint64_t x75 = 11LLU;
	uint32_t x76 = 10U;

	t18 = ((x73==(x74%x75))/x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 285U;
	uint16_t x79 = 108U;

	t19 = ((x77==(x78%x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -2403;
	int64_t x84 = 4426LL;
	volatile int64_t t20 = -63870010LL;

	t20 = ((x81==(x82%x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint64_t x86 = UINT64_MAX;
	static volatile int32_t t21 = 14313178;

	t21 = ((x85==(x86%x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MAX;
	volatile int64_t x92 = INT64_MAX;
	volatile int64_t t22 = -11356539545795LL;

	t22 = ((x89==(x90%x91))/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MAX;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 1;

	t23 = ((x93==(x94%x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 33;
	int8_t x99 = -11;
	static int64_t x100 = INT64_MAX;
	int64_t t24 = 3461688711167895LL;

	t24 = ((x97==(x98%x99))/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -2;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = INT64_MAX;
	int32_t t25 = 116733;

	t25 = ((x101==(x102%x103))/x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	static uint8_t x107 = 4U;
	int8_t x108 = INT8_MAX;
	int32_t t26 = -290130794;

	t26 = ((x105==(x106%x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	static int8_t x110 = 4;
	int64_t x111 = INT64_MIN;
	uint16_t x112 = 58U;
	static volatile int32_t t27 = 265247678;

	t27 = ((x109==(x110%x111))/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 7996U;
	int16_t x114 = -66;
	int8_t x115 = INT8_MAX;
	volatile int8_t x116 = -18;
	volatile int32_t t28 = 18;

	t28 = ((x113==(x114%x115))/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int32_t x119 = -1;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 1;

	t29 = ((x117==(x118%x119))/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int32_t x122 = -1;
	int64_t x123 = 5714591096LL;
	volatile uint64_t t30 = 5779455322LLU;

	t30 = ((x121==(x122%x123))/x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 30987U;
	uint64_t x126 = 18LLU;
	volatile int32_t t31 = -258989730;

	t31 = ((x125==(x126%x127))/x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint64_t x130 = 463315539LLU;
	uint8_t x131 = 12U;
	uint16_t x132 = 1U;
	static int32_t t32 = -2;

	t32 = ((x129==(x130%x131))/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	volatile uint8_t x134 = 28U;
	volatile int64_t x135 = -1LL;
	volatile int16_t x136 = INT16_MIN;
	int32_t t33 = 70957165;

	t33 = ((x133==(x134%x135))/x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 5522;
	static int8_t x138 = INT8_MIN;
	volatile int64_t x139 = 23LL;
	int16_t x140 = -1;

	t34 = ((x137==(x138%x139))/x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x142 = -1;
	int16_t x143 = INT16_MIN;
	volatile uint64_t t35 = 11354607568584124LLU;

	t35 = ((x141==(x142%x143))/x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 204795843LLU;
	int64_t x147 = INT64_MAX;

	t36 = ((x145==(x146%x147))/x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	volatile uint32_t x152 = 21U;
	volatile uint32_t t37 = 42291747U;

	t37 = ((x149==(x150%x151))/x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = 1295853817U;
	volatile uint32_t t38 = 6U;

	t38 = ((x153==(x154%x155))/x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 97U;
	static uint8_t x158 = 7U;
	int8_t x159 = INT8_MIN;
	volatile int32_t t39 = -19335573;

	t39 = ((x157==(x158%x159))/x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 1U;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 486161510;

	t40 = ((x161==(x162%x163))/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 1729767;
	static int16_t x166 = INT16_MIN;
	int64_t x167 = -1LL;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 11;

	t41 = ((x165==(x166%x167))/x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = 4925890;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -23878;

	t42 = ((x169==(x170%x171))/x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -1;
	static uint32_t x175 = 53724449U;
	int16_t x176 = -1;
	volatile int32_t t43 = -4;

	t43 = ((x173==(x174%x175))/x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MIN;
	static int64_t x179 = 7996741LL;
	static int64_t x180 = INT64_MIN;
	int64_t t44 = 2814195110319LL;

	t44 = ((x177==(x178%x179))/x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -9221;
	int8_t x182 = 1;
	uint16_t x184 = 1U;
	static volatile int32_t t45 = -28;

	t45 = ((x181==(x182%x183))/x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 10;
	int8_t x186 = INT8_MAX;
	int16_t x187 = 11426;
	int16_t x188 = 11114;
	int32_t t46 = -7753666;

	t46 = ((x185==(x186%x187))/x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -1;
	uint16_t x190 = 87U;
	uint16_t x192 = UINT16_MAX;
	int32_t t47 = 595;

	t47 = ((x189==(x190%x191))/x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1600670LL;
	uint32_t x194 = UINT32_MAX;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t t48 = 19;

	t48 = ((x193==(x194%x195))/x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = UINT64_MAX;
	uint64_t t49 = 13LLU;

	t49 = ((x197==(x198%x199))/x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = UINT16_MAX;
	int32_t t50 = -2177620;

	t50 = ((x201==(x202%x203))/x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;
	int8_t x207 = -15;
	int8_t x208 = -3;
	volatile int32_t t51 = -7;

	t51 = ((x205==(x206%x207))/x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int8_t x210 = 1;
	uint16_t x212 = 6085U;

	t52 = ((x209==(x210%x211))/x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static volatile int64_t x214 = -1LL;
	int8_t x215 = INT8_MAX;
	volatile uint64_t x216 = 56353LLU;

	t53 = ((x213==(x214%x215))/x216);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 25U;
	int8_t x218 = -1;
	uint32_t x220 = 4671U;
	static volatile uint32_t t54 = 13U;

	t54 = ((x217==(x218%x219))/x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	static volatile uint32_t x226 = 0U;
	static uint8_t x227 = UINT8_MAX;
	static uint64_t x228 = 7642625LLU;
	volatile uint64_t t55 = 13848LLU;

	t55 = ((x225==(x226%x227))/x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x230 = 0U;
	int64_t x231 = INT64_MIN;
	int64_t x232 = INT64_MIN;

	t56 = ((x229==(x230%x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = -1;
	volatile int16_t x234 = -54;
	volatile uint16_t x235 = UINT16_MAX;
	int64_t x236 = 2718837177593LL;

	t57 = ((x233==(x234%x235))/x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 433720594257793721LLU;
	uint64_t x238 = 1296820LLU;
	int8_t x239 = 1;
	volatile int32_t t58 = 165484804;

	t58 = ((x237==(x238%x239))/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x242 = -1LL;
	uint16_t x243 = 422U;
	uint64_t x244 = 65496269187097849LLU;
	volatile uint64_t t59 = 70014LLU;

	t59 = ((x241==(x242%x243))/x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = UINT16_MAX;
	uint32_t x246 = UINT32_MAX;
	volatile int32_t x247 = 1060757;
	int64_t x248 = INT64_MIN;
	static volatile int64_t t60 = -22LL;

	t60 = ((x245==(x246%x247))/x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MAX;
	uint64_t x250 = 27804878827484LLU;
	uint64_t x251 = 6021608LLU;
	int16_t x252 = -1;
	int32_t t61 = -27343275;

	t61 = ((x249==(x250%x251))/x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x256 = INT16_MIN;

	t62 = ((x253==(x254%x255))/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 23128436490LL;
	int8_t x258 = -1;
	int64_t x259 = -1276LL;
	volatile uint8_t x260 = 23U;

	t63 = ((x257==(x258%x259))/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = -325013951LL;
	static int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	volatile uint32_t x264 = 3U;
	uint32_t t64 = 3U;

	t64 = ((x261==(x262%x263))/x264);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 0U;
	volatile int16_t x267 = INT16_MAX;
	int8_t x268 = -1;
	volatile int32_t t65 = -15;

	t65 = ((x265==(x266%x267))/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	volatile uint8_t x274 = 2U;
	volatile uint32_t x275 = 236U;
	static int8_t x276 = INT8_MIN;

	t66 = ((x273==(x274%x275))/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x278 = 8329U;
	uint8_t x280 = 124U;
	int32_t t67 = 910257702;

	t67 = ((x277==(x278%x279))/x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 987829938808803213LLU;
	int64_t x282 = INT64_MIN;
	int64_t x284 = INT64_MAX;
	int64_t t68 = 25423480052LL;

	t68 = ((x281==(x282%x283))/x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	int8_t x287 = 5;
	static int8_t x288 = -1;
	volatile int32_t t69 = -142443553;

	t69 = ((x285==(x286%x287))/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x290 = UINT32_MAX;
	static uint8_t x291 = 33U;
	volatile int32_t t70 = 288189;

	t70 = ((x289==(x290%x291))/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = 25394459LL;
	static volatile int32_t x295 = -1;
	int32_t t71 = 62607481;

	t71 = ((x293==(x294%x295))/x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -2;
	static uint32_t x298 = 120235752U;
	volatile int8_t x299 = INT8_MIN;
	static uint32_t x300 = 2722U;
	static volatile uint32_t t72 = 3U;

	t72 = ((x297==(x298%x299))/x300);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x302 = INT8_MIN;
	int32_t x303 = -1;
	static uint8_t x304 = UINT8_MAX;

	t73 = ((x301==(x302%x303))/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 132U;
	volatile int32_t x306 = -7192;
	static int8_t x307 = 2;
	int8_t x308 = -25;

	t74 = ((x305==(x306%x307))/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x309 = 6;
	volatile uint32_t x310 = 1U;
	static uint32_t x311 = 3732U;
	int8_t x312 = -1;

	t75 = ((x309==(x310%x311))/x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x313 = UINT16_MAX;
	uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = -1059235;
	volatile uint32_t t76 = 212U;

	t76 = ((x313==(x314%x315))/x316);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x317 = INT8_MIN;
	static int64_t x319 = INT64_MAX;

	t77 = ((x317==(x318%x319))/x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = -710817105LL;
	volatile int32_t x323 = -1612;
	volatile int8_t x324 = INT8_MAX;
	volatile int32_t t78 = -62020714;

	t78 = ((x321==(x322%x323))/x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = -1767264539529660LL;
	int64_t x327 = INT64_MAX;
	static int16_t x328 = INT16_MIN;
	int32_t t79 = -1945916;

	t79 = ((x325==(x326%x327))/x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 358U;
	uint8_t x330 = 21U;
	static volatile int16_t x331 = 213;
	int64_t x332 = INT64_MIN;
	static volatile int64_t t80 = -577464159LL;

	t80 = ((x329==(x330%x331))/x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x333 = -1855331574042633556LL;
	uint64_t x334 = 28645602135LLU;
	int32_t x336 = INT32_MAX;

	t81 = ((x333==(x334%x335))/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -1662;
	int16_t x338 = INT16_MIN;
	int64_t x339 = -540366033450LL;
	uint64_t x340 = 9972LLU;
	static uint64_t t82 = 1LLU;

	t82 = ((x337==(x338%x339))/x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x341 = 1468921393U;
	uint16_t x342 = 398U;
	int16_t x343 = -1;
	static uint8_t x344 = 1U;
	volatile int32_t t83 = -7688;

	t83 = ((x341==(x342%x343))/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 30639495285547569LLU;
	volatile uint64_t x346 = UINT64_MAX;
	uint32_t x347 = 3U;
	static uint16_t x348 = 20191U;
	volatile int32_t t84 = 427231;

	t84 = ((x345==(x346%x347))/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x350 = 220LLU;
	static uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MAX;
	int64_t t85 = -2899LL;

	t85 = ((x349==(x350%x351))/x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -76;
	static int16_t x354 = INT16_MAX;
	int8_t x355 = -29;
	int32_t x356 = INT32_MAX;
	int32_t t86 = 230;

	t86 = ((x353==(x354%x355))/x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MAX;
	static int32_t x360 = -1;

	t87 = ((x357==(x358%x359))/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = INT8_MIN;
	uint8_t x362 = 0U;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -32644116627695LL;
	volatile int64_t t88 = 233122204822LL;

	t88 = ((x361==(x362%x363))/x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = 216;
	uint64_t x366 = 12715710369LLU;
	int32_t x367 = INT32_MIN;
	uint64_t x368 = 1LLU;
	volatile uint64_t t89 = 84180LLU;

	t89 = ((x365==(x366%x367))/x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = 0;
	int16_t x370 = -7199;
	uint32_t x371 = UINT32_MAX;
	static volatile uint8_t x372 = 30U;
	int32_t t90 = 737;

	t90 = ((x369==(x370%x371))/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x373 = 26942U;
	volatile int64_t x374 = -7399LL;
	int16_t x375 = 21;
	int16_t x376 = -1;

	t91 = ((x373==(x374%x375))/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = -1;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MIN;

	t92 = ((x377==(x378%x379))/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MIN;
	volatile int16_t x383 = -1;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t93 = 17975;

	t93 = ((x381==(x382%x383))/x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile uint8_t x386 = 5U;
	uint64_t x387 = UINT64_MAX;
	uint64_t x388 = UINT64_MAX;

	t94 = ((x385==(x386%x387))/x388);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x389 = -262923037;
	static volatile int32_t x390 = -610696;
	int32_t x391 = -1;
	static volatile int32_t t95 = 2;

	t95 = ((x389==(x390%x391))/x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = 4422077248855319367LL;
	static int16_t x394 = INT16_MAX;
	int32_t x395 = INT32_MAX;
	static int32_t t96 = 2;

	t96 = ((x393==(x394%x395))/x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 6U;
	int8_t x399 = -13;
	static int64_t x400 = -1080853LL;
	static volatile int64_t t97 = -8702LL;

	t97 = ((x397==(x398%x399))/x400);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MAX;
	static volatile int8_t x402 = INT8_MIN;
	static int8_t x403 = INT8_MIN;

	t98 = ((x401==(x402%x403))/x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 81655948184LLU;
	int64_t x408 = INT64_MAX;
	volatile int64_t t99 = -431970293996LL;

	t99 = ((x405==(x406%x407))/x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

