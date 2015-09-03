#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
static int32_t x4 = -270432;
volatile int32_t x8 = INT32_MIN;
static int32_t x12 = -83831;
static int32_t x27 = -1;
static uint64_t x38 = UINT64_MAX;
uint32_t x43 = 12542549U;
volatile int8_t x49 = INT8_MIN;
uint16_t x54 = 1007U;
int32_t x55 = INT32_MIN;
int32_t x72 = INT32_MAX;
volatile int16_t x74 = INT16_MAX;
volatile int32_t t22 = 535440899;
static int8_t x93 = INT8_MIN;
int32_t x97 = -1;
static int32_t x101 = INT32_MAX;
uint16_t x114 = 111U;
volatile uint16_t x122 = 6484U;
volatile int32_t t32 = -10297627;
uint8_t x135 = 89U;
static uint16_t x147 = 1U;
static volatile uint8_t x148 = UINT8_MAX;
uint64_t x156 = 2145334364915LLU;
static int32_t x160 = -1;
uint16_t x163 = 133U;
uint64_t x171 = 495857332LLU;
int64_t x178 = INT64_MIN;
int8_t x179 = INT8_MIN;
uint32_t x180 = 27431U;
uint16_t x188 = 564U;
uint16_t x192 = 15U;
static int64_t x198 = INT64_MIN;
volatile int8_t x206 = INT8_MAX;
uint64_t x217 = 421879081731137730LLU;
volatile int32_t t52 = -195253;
static volatile int8_t x221 = INT8_MIN;
int32_t t54 = 877;
volatile uint16_t x235 = 341U;
volatile int8_t x239 = -1;
uint16_t x241 = 3388U;
int16_t x242 = INT16_MIN;
int32_t t58 = 33199;
volatile int32_t t60 = 42796;
uint32_t x253 = 801U;
int64_t x255 = INT64_MAX;
static int32_t t61 = -248;
volatile uint16_t x258 = 2U;
int16_t x261 = INT16_MIN;
volatile int32_t t63 = 7;
uint16_t x271 = 450U;
int8_t x274 = INT8_MAX;
int64_t x277 = INT64_MIN;
volatile int64_t x289 = INT64_MAX;
uint8_t x292 = 30U;
int16_t x313 = INT16_MIN;
int32_t t76 = 45;
uint64_t x321 = UINT64_MAX;
uint64_t x324 = 95633140LLU;
volatile int32_t t78 = -4129259;
static int8_t x331 = 8;
int8_t x335 = INT8_MAX;
int32_t t82 = -60376497;
uint16_t x342 = 1U;
int16_t x343 = INT16_MAX;
static volatile int64_t x352 = INT64_MIN;
uint32_t x359 = 61739295U;
static int8_t x362 = -1;
static int32_t x373 = INT32_MIN;
int32_t t91 = 20;
int64_t x377 = -1LL;
volatile int32_t t92 = 31545;
volatile int32_t t93 = 682952;
static int8_t x386 = INT8_MIN;
static int64_t x391 = -170997359474LL;
uint32_t x395 = UINT32_MAX;
static int16_t x404 = 1;
int16_t x406 = -1;


void f0(void) {
	static int32_t x1 = 0;
	volatile int8_t x3 = -1;
	int32_t t0 = 1738;

	t0 = ((x1|x2)<(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = -3730;
	static int8_t x7 = INT8_MIN;
	static int32_t t1 = 1;

	t1 = ((x5|x6)<(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int8_t x10 = -12;
	static int8_t x11 = INT8_MIN;
	int32_t t2 = -56;

	t2 = ((x9|x10)<(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint64_t x14 = 14814828745LLU;
	int16_t x15 = -1;
	int64_t x16 = -2319951097676LL;
	volatile int32_t t3 = -1;

	t3 = ((x13|x14)<(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -1;
	uint64_t x18 = 594290993LLU;
	uint16_t x19 = UINT16_MAX;
	uint64_t x20 = 14960684424LLU;
	volatile int32_t t4 = -820962482;

	t4 = ((x17|x18)<(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -356257517;

	t5 = ((x21|x22)<(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	uint8_t x26 = UINT8_MAX;
	volatile int32_t x28 = 96975239;
	volatile int32_t t6 = 11993;

	t6 = ((x25|x26)<(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	static int32_t x30 = 1158;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -1;

	t7 = ((x29|x30)<(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint16_t x34 = 2U;
	int16_t x35 = INT16_MIN;
	volatile uint32_t x36 = 741U;
	int32_t t8 = -1481229;

	t8 = ((x33|x34)<(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -16197;

	t9 = ((x37|x38)<(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = 959381436559224188LLU;
	int16_t x44 = -1;
	int32_t t10 = 8098;

	t10 = ((x41|x42)<(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int8_t x46 = -1;
	volatile uint16_t x47 = UINT16_MAX;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 14157;

	t11 = ((x45|x46)<(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x50 = UINT8_MAX;
	volatile uint8_t x51 = 15U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 11;

	t12 = ((x49|x50)<(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	static int32_t x56 = -1987;
	static volatile int32_t t13 = 1066;

	t13 = ((x53|x54)<(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 5977198LL;
	volatile int32_t x58 = INT32_MAX;
	int16_t x59 = -1;
	volatile int64_t x60 = -1LL;
	static int32_t t14 = 204;

	t14 = ((x57|x58)<(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -11943;
	int64_t x62 = -1LL;
	static uint64_t x63 = 6056947LLU;
	uint64_t x64 = 1962059221570305854LLU;
	volatile int32_t t15 = -44911;

	t15 = ((x61|x62)<(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 248743514LLU;
	volatile int32_t x66 = -10699;
	int8_t x67 = INT8_MAX;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -180592782;

	t16 = ((x65|x66)<(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MAX;
	uint64_t x70 = 65436770LLU;
	int8_t x71 = INT8_MIN;
	static int32_t t17 = 2141478;

	t17 = ((x69|x70)<(x71%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = INT32_MIN;
	int16_t x75 = 1;
	uint64_t x76 = 832LLU;
	volatile int32_t t18 = -90003;

	t18 = ((x73|x74)<(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static int8_t x78 = 6;
	int32_t x79 = INT32_MIN;
	static uint16_t x80 = 4U;
	int32_t t19 = 0;

	t19 = ((x77|x78)<(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 0U;
	int32_t x82 = 78;
	static int32_t x83 = 43;
	uint8_t x84 = 23U;
	int32_t t20 = -12;

	t20 = ((x81|x82)<(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MAX;
	static int8_t x86 = 36;
	static int64_t x87 = INT64_MAX;
	volatile int16_t x88 = -1;
	volatile int32_t t21 = 216;

	t21 = ((x85|x86)<(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = UINT16_MAX;
	uint8_t x90 = UINT8_MAX;
	static volatile int16_t x91 = -1;
	volatile int16_t x92 = -202;

	t22 = ((x89|x90)<(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = 5532954;

	t23 = ((x93|x94)<(x95%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 10;
	int64_t x99 = INT64_MIN;
	static uint64_t x100 = UINT64_MAX;
	int32_t t24 = 239680;

	t24 = ((x97|x98)<(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 14U;
	int64_t x103 = -1LL;
	int16_t x104 = 10122;
	volatile int32_t t25 = 51;

	t25 = ((x101|x102)<(x103%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int64_t x106 = INT64_MAX;
	int32_t x107 = INT32_MIN;
	static uint64_t x108 = UINT64_MAX;
	int32_t t26 = -188535;

	t26 = ((x105|x106)<(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	volatile int64_t x110 = -12952563956858588LL;
	uint8_t x111 = 13U;
	static uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = 274393;

	t27 = ((x109|x110)<(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x115 = INT32_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -1;

	t28 = ((x113|x114)<(x115%x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile uint8_t x118 = 1U;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 0;

	t29 = ((x117|x118)<(x119%x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 103;
	static volatile int8_t x123 = INT8_MIN;
	int32_t x124 = -1;
	static int32_t t30 = -27;

	t30 = ((x121|x122)<(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 119U;
	int32_t x126 = INT32_MIN;
	int32_t x127 = 2705883;
	volatile int32_t x128 = 862809144;
	volatile int32_t t31 = -10507;

	t31 = ((x125|x126)<(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -48;
	static int64_t x130 = INT64_MIN;
	volatile int8_t x131 = -1;
	int32_t x132 = INT32_MAX;

	t32 = ((x129|x130)<(x131%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	int64_t x136 = INT64_MAX;
	int32_t t33 = -46736;

	t33 = ((x133|x134)<(x135%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	static uint32_t x138 = 29934U;
	int8_t x139 = 1;
	uint64_t x140 = 99182916276827LLU;
	int32_t t34 = 9373;

	t34 = ((x137|x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = -1;
	int64_t x143 = INT64_MAX;
	int32_t x144 = INT32_MAX;
	int32_t t35 = -2718;

	t35 = ((x141|x142)<(x143%x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -246;
	int8_t x146 = -1;
	volatile int32_t t36 = 6694;

	t36 = ((x145|x146)<(x147%x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 40;
	volatile int8_t x150 = INT8_MIN;
	static volatile int16_t x151 = -1;
	int8_t x152 = -3;
	volatile int32_t t37 = 118;

	t37 = ((x149|x150)<(x151%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	volatile int8_t x155 = INT8_MIN;
	int32_t t38 = -15;

	t38 = ((x153|x154)<(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 62U;
	int32_t x158 = INT32_MIN;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t39 = -7;

	t39 = ((x157|x158)<(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	volatile int32_t x162 = -19;
	int32_t x164 = INT32_MAX;
	int32_t t40 = -513350970;

	t40 = ((x161|x162)<(x163%x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 4389036LLU;
	static uint8_t x170 = 1U;
	uint16_t x172 = UINT16_MAX;
	int32_t t41 = 4201153;

	t41 = ((x169|x170)<(x171%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	volatile int64_t x174 = -1LL;
	int64_t x175 = INT64_MIN;
	int16_t x176 = INT16_MAX;
	volatile int32_t t42 = 427724;

	t42 = ((x173|x174)<(x175%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int32_t t43 = 0;

	t43 = ((x177|x178)<(x179%x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x181 = INT16_MIN;
	static int8_t x182 = 1;
	int32_t x183 = INT32_MAX;
	int64_t x184 = -1060160189LL;
	int32_t t44 = 61803;

	t44 = ((x181|x182)<(x183%x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x185 = 935028055590392100LLU;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	int32_t t45 = 49977783;

	t45 = ((x185|x186)<(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = INT16_MIN;
	static volatile uint8_t x190 = 4U;
	static int8_t x191 = 1;
	int32_t t46 = -888840;

	t46 = ((x189|x190)<(x191%x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile uint16_t x194 = 417U;
	int8_t x195 = INT8_MIN;
	volatile int32_t x196 = INT32_MIN;
	static int32_t t47 = -84819501;

	t47 = ((x193|x194)<(x195%x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t48 = 21;

	t48 = ((x197|x198)<(x199%x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x205 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	static int8_t x208 = -19;
	volatile int32_t t49 = -285;

	t49 = ((x205|x206)<(x207%x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 40U;
	int32_t x210 = INT32_MIN;
	volatile int64_t x211 = INT64_MIN;
	uint32_t x212 = 14856758U;
	volatile int32_t t50 = 0;

	t50 = ((x209|x210)<(x211%x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MIN;
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MAX;
	int32_t t51 = -125715999;

	t51 = ((x213|x214)<(x215%x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = -1;
	int16_t x219 = INT16_MAX;
	uint8_t x220 = 6U;

	t52 = ((x217|x218)<(x219%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = INT8_MAX;
	volatile uint64_t x223 = 3199086412LLU;
	uint32_t x224 = 28168U;
	volatile int32_t t53 = 85575;

	t53 = ((x221|x222)<(x223%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -1LL;
	static int16_t x226 = 4;
	static uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;

	t54 = ((x225|x226)<(x227%x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = INT8_MAX;
	volatile int64_t x230 = INT64_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t55 = 430;

	t55 = ((x229|x230)<(x231%x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -1;
	int8_t x234 = -1;
	int16_t x236 = INT16_MIN;
	int32_t t56 = -6248958;

	t56 = ((x233|x234)<(x235%x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = 1LL;
	int64_t x240 = -207924907265057LL;
	int32_t t57 = -1;

	t57 = ((x237|x238)<(x239%x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x243 = INT8_MAX;
	int64_t x244 = 118LL;

	t58 = ((x241|x242)<(x243%x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	volatile int32_t x246 = INT32_MIN;
	uint32_t x247 = 5795U;
	volatile int64_t x248 = -1LL;
	volatile int32_t t59 = 317546149;

	t59 = ((x245|x246)<(x247%x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x249 = 21U;
	uint8_t x250 = 63U;
	int16_t x251 = -1;
	int8_t x252 = INT8_MIN;

	t60 = ((x249|x250)<(x251%x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x254 = INT16_MIN;
	static int32_t x256 = -75884;

	t61 = ((x253|x254)<(x255%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -1;
	volatile uint64_t x259 = 155LLU;
	int64_t x260 = INT64_MIN;
	int32_t t62 = 30242426;

	t62 = ((x257|x258)<(x259%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x262 = 1324558251307140972LLU;
	static int64_t x263 = 223301318407005852LL;
	static int16_t x264 = -872;

	t63 = ((x261|x262)<(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	static int64_t x266 = INT64_MIN;
	int8_t x267 = 1;
	static uint32_t x268 = UINT32_MAX;
	volatile int32_t t64 = 3820;

	t64 = ((x265|x266)<(x267%x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = INT8_MAX;
	int32_t x270 = -4;
	static int16_t x272 = INT16_MIN;
	int32_t t65 = 5739193;

	t65 = ((x269|x270)<(x271%x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = -1;
	static int32_t t66 = 4005496;

	t66 = ((x273|x274)<(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x278 = 0U;
	static int64_t x279 = 1646264928815986LL;
	volatile int64_t x280 = 11317LL;
	volatile int32_t t67 = -812754683;

	t67 = ((x277|x278)<(x279%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = -1;
	int16_t x282 = INT16_MAX;
	static volatile int64_t x283 = INT64_MIN;
	int32_t x284 = -1;
	int32_t t68 = 0;

	t68 = ((x281|x282)<(x283%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = INT32_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	int8_t x287 = 22;
	static int16_t x288 = INT16_MAX;
	int32_t t69 = -37069;

	t69 = ((x285|x286)<(x287%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = UINT16_MAX;
	int32_t t70 = 1004;

	t70 = ((x289|x290)<(x291%x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = -1;
	int64_t x294 = -301LL;
	int32_t x295 = -139633634;
	static int8_t x296 = 41;
	volatile int32_t t71 = 2314369;

	t71 = ((x293|x294)<(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 3;
	int8_t x298 = -7;
	uint32_t x299 = 34U;
	int32_t x300 = 147;
	static volatile int32_t t72 = 949804;

	t72 = ((x297|x298)<(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = INT32_MAX;
	static int32_t x303 = INT32_MIN;
	uint8_t x304 = 31U;
	volatile int32_t t73 = -698;

	t73 = ((x301|x302)<(x303%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = -1;
	static int32_t t74 = -32;

	t74 = ((x305|x306)<(x307%x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x309 = 3;
	volatile uint8_t x310 = 40U;
	volatile uint16_t x311 = 103U;
	volatile int32_t x312 = 71698;
	int32_t t75 = -1141;

	t75 = ((x309|x310)<(x311%x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x314 = 110U;
	static int64_t x315 = -65081LL;
	uint16_t x316 = 991U;

	t76 = ((x313|x314)<(x315%x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x317 = 1293558736847LLU;
	volatile uint32_t x318 = 806865U;
	static volatile int8_t x319 = INT8_MIN;
	static volatile int32_t x320 = -122220181;
	volatile int32_t t77 = -135;

	t77 = ((x317|x318)<(x319%x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = -1;
	uint8_t x323 = 97U;

	t78 = ((x321|x322)<(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x325 = INT8_MAX;
	static volatile int16_t x326 = INT16_MAX;
	volatile uint32_t x327 = 8U;
	uint8_t x328 = 5U;
	volatile int32_t t79 = 478;

	t79 = ((x325|x326)<(x327%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x329 = 69512593U;
	uint32_t x330 = 96U;
	volatile int8_t x332 = -1;
	int32_t t80 = -1396680;

	t80 = ((x329|x330)<(x331%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = INT32_MIN;
	volatile int8_t x334 = INT8_MIN;
	int32_t x336 = 995072100;
	int32_t t81 = -112;

	t81 = ((x333|x334)<(x335%x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x337 = -162909863447259353LL;
	int64_t x338 = INT64_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile uint16_t x340 = UINT16_MAX;

	t82 = ((x337|x338)<(x339%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = INT8_MIN;
	uint64_t x344 = 132257019LLU;
	static int32_t t83 = 96261666;

	t83 = ((x341|x342)<(x343%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x345 = INT64_MIN;
	uint8_t x346 = 5U;
	volatile int64_t x347 = -34652229LL;
	int32_t x348 = INT32_MIN;
	int32_t t84 = -391972738;

	t84 = ((x345|x346)<(x347%x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = UINT64_MAX;
	volatile uint64_t x350 = 1893LLU;
	int32_t x351 = -28587244;
	static volatile int32_t t85 = 1008467;

	t85 = ((x349|x350)<(x351%x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 4223244752LLU;
	static int8_t x355 = INT8_MAX;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t86 = -2076541;

	t86 = ((x353|x354)<(x355%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int16_t x360 = 78;
	int32_t t87 = -9127;

	t87 = ((x357|x358)<(x359%x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = INT16_MIN;
	int8_t x363 = -1;
	int8_t x364 = INT8_MIN;
	volatile int32_t t88 = -10524;

	t88 = ((x361|x362)<(x363%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	uint16_t x366 = 3U;
	static volatile int8_t x367 = INT8_MIN;
	volatile uint32_t x368 = 85866638U;
	volatile int32_t t89 = -411;

	t89 = ((x365|x366)<(x367%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MAX;
	int8_t x370 = 0;
	int32_t x371 = -1;
	volatile uint64_t x372 = 2538LLU;
	volatile int32_t t90 = -37;

	t90 = ((x369|x370)<(x371%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = INT64_MIN;
	uint16_t x375 = 53U;
	uint8_t x376 = 12U;

	t91 = ((x373|x374)<(x375%x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x379 = -1LL;
	static volatile uint16_t x380 = 50U;

	t92 = ((x377|x378)<(x379%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x381 = INT32_MIN;
	volatile int8_t x382 = INT8_MIN;
	int8_t x383 = 0;
	static int8_t x384 = INT8_MIN;

	t93 = ((x381|x382)<(x383%x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MAX;
	volatile int32_t x387 = INT32_MAX;
	uint8_t x388 = 2U;
	volatile int32_t t94 = 13252;

	t94 = ((x385|x386)<(x387%x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	int32_t x390 = INT32_MIN;
	int8_t x392 = -1;
	int32_t t95 = -3631;

	t95 = ((x389|x390)<(x391%x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = INT32_MAX;
	static int16_t x396 = -1;
	int32_t t96 = 126290223;

	t96 = ((x393|x394)<(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = 27879LLU;
	int8_t x398 = INT8_MIN;
	volatile int32_t x399 = 171410217;
	int8_t x400 = 1;
	volatile int32_t t97 = 2;

	t97 = ((x397|x398)<(x399%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x401 = INT64_MIN;
	static uint32_t x402 = 5U;
	int64_t x403 = INT64_MAX;
	int32_t t98 = 6;

	t98 = ((x401|x402)<(x403%x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x405 = -549724395751446446LL;
	static uint8_t x407 = 3U;
	int32_t x408 = 6059769;
	volatile int32_t t99 = -3;

	t99 = ((x405|x406)<(x407%x408));

	if (t99 != 1) { NG(); } else { ; }
	
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

