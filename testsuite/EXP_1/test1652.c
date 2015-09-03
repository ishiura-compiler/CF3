#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 47U;
uint32_t x2 = 252686179U;
int32_t t1 = 1;
static int64_t t2 = 34539740841193157LL;
int32_t x21 = 866;
static uint16_t x22 = UINT16_MAX;
volatile int8_t x27 = -1;
int64_t x29 = INT64_MIN;
static int64_t x32 = INT64_MIN;
int32_t x38 = -2245129;
int8_t x60 = INT8_MIN;
int32_t x61 = INT32_MIN;
volatile int16_t x66 = -1;
int64_t x69 = 79LL;
volatile int64_t t16 = -2257LL;
uint64_t x73 = UINT64_MAX;
int8_t x76 = INT8_MIN;
uint8_t x78 = 0U;
uint32_t x79 = 2021U;
volatile uint64_t t19 = 515667233979804826LLU;
uint64_t x85 = 39408725980LLU;
static volatile int32_t t21 = 11934;
static volatile int64_t t23 = INT64_MIN;
int16_t x103 = INT16_MIN;
uint32_t x105 = UINT32_MAX;
uint64_t t25 = 130101662705100021LLU;
int32_t x110 = 110380408;
static volatile uint64_t x113 = UINT64_MAX;
int8_t x117 = INT8_MIN;
static int16_t x118 = INT16_MAX;
uint32_t x133 = 715U;
int16_t x139 = -1;
static volatile int32_t t33 = 0;
uint32_t x142 = 2011U;
int64_t x144 = -1LL;
int16_t x146 = -1;
int64_t x148 = INT64_MIN;
int16_t x150 = INT16_MAX;
volatile int64_t t36 = 1LL;
int8_t x164 = 20;
static volatile int64_t t40 = -846303707610417LL;
int8_t x170 = INT8_MIN;
uint32_t x187 = 26030U;
volatile int16_t x193 = INT16_MIN;
int8_t x194 = INT8_MIN;
volatile uint16_t x195 = 0U;
volatile int64_t x198 = INT64_MIN;
static uint64_t x204 = UINT64_MAX;
volatile int32_t x205 = -1;
uint64_t x206 = 1993578815LLU;
static volatile uint32_t x211 = 85626U;
int64_t x212 = -2092155LL;
volatile uint32_t x214 = UINT32_MAX;
int32_t x215 = -1;
int8_t x217 = INT8_MIN;
int64_t x220 = INT64_MAX;
int8_t x223 = INT8_MIN;
int64_t x229 = -1LL;
int8_t x239 = -43;
int16_t x249 = -2;
static int32_t x250 = INT32_MIN;
int8_t x262 = -10;
int32_t t64 = -4;
uint64_t x265 = UINT64_MAX;
int32_t x269 = INT32_MAX;
uint16_t x270 = 15U;
int8_t x272 = -2;
uint16_t x274 = 11U;
static uint32_t t67 = 5393U;
static volatile int32_t x278 = INT32_MIN;
int64_t t68 = -2614744290956655845LL;
static volatile int32_t x284 = 8;
uint64_t x291 = 11087LLU;
uint64_t t71 = 65427LLU;
uint8_t x305 = 8U;
int16_t x308 = 0;
volatile int8_t x310 = INT8_MIN;
uint64_t x315 = 75745316736LLU;
int16_t x323 = INT16_MIN;
static uint32_t t79 = 827148411U;
static volatile uint16_t x325 = 22378U;
int32_t x327 = INT32_MIN;
int8_t x341 = -1;
int32_t x349 = 0;
int32_t x356 = INT32_MAX;
uint16_t x364 = 519U;
volatile int8_t x366 = 0;
uint64_t x368 = 16519122974035573LLU;
int16_t x370 = 0;
int64_t x378 = 4264577284031LL;
int64_t x380 = INT64_MIN;
static uint16_t x383 = UINT16_MAX;
int64_t x384 = INT64_MAX;
static volatile uint8_t x388 = 5U;
int64_t t97 = -145343780167LL;
volatile int32_t x398 = -9824;


void f0(void) {
	static volatile int32_t x3 = INT32_MAX;
	volatile int16_t x4 = 93;
	int32_t t0 = -40836;

	t0 = (((x1<=x2)&x3)+x4);

	if (t0 != 94) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	uint32_t x6 = UINT32_MAX;
	uint16_t x7 = 18U;
	int32_t x8 = 376;

	t1 = (((x5<=x6)&x7)+x8);

	if (t1 != 376) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static uint16_t x10 = UINT16_MAX;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 309U;

	t2 = (((x9<=x10)&x11)+x12);

	if (t2 != 309LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2116U;
	volatile int64_t x14 = -1LL;
	static int16_t x15 = -44;
	static int32_t x16 = INT32_MAX;
	volatile int32_t t3 = INT32_MAX;

	t3 = (((x13<=x14)&x15)+x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 276;
	uint32_t x18 = UINT32_MAX;
	int32_t x19 = -1;
	static int64_t x20 = -2127948761LL;
	int64_t t4 = 31LL;

	t4 = (((x17<=x18)&x19)+x20);

	if (t4 != -2127948760LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = -1;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -1;

	t5 = (((x21<=x22)&x23)+x24);

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 83U;
	int64_t x26 = -1LL;
	uint16_t x28 = 34U;
	volatile int32_t t6 = -190768456;

	t6 = (((x25<=x26)&x27)+x28);

	if (t6 != 34) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	volatile int64_t t7 = INT64_MIN;

	t7 = (((x29<=x30)&x31)+x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	volatile uint64_t x36 = 726979LLU;
	uint64_t t8 = 1673908725719LLU;

	t8 = (((x33<=x34)&x35)+x36);

	if (t8 != 726979LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x39 = -1LL;
	int16_t x40 = 1;
	int64_t t9 = -10673126LL;

	t9 = (((x37<=x38)&x39)+x40);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	static int32_t x46 = -1;
	int16_t x47 = INT16_MIN;
	static int8_t x48 = -1;
	int32_t t10 = -22;

	t10 = (((x45<=x46)&x47)+x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = INT16_MIN;
	static volatile uint32_t t11 = 430U;

	t11 = (((x49<=x50)&x51)+x52);

	if (t11 != 4294934529U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 19LL;
	int16_t x54 = INT16_MAX;
	volatile uint8_t x55 = 9U;
	int32_t x56 = -24;
	int32_t t12 = 18810468;

	t12 = (((x53<=x54)&x55)+x56);

	if (t12 != -23) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = UINT8_MAX;
	volatile int16_t x59 = INT16_MIN;
	volatile int32_t t13 = 347286649;

	t13 = (((x57<=x58)&x59)+x60);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -1;
	int8_t x63 = INT8_MIN;
	static int64_t x64 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (((x61<=x62)&x63)+x64);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 20U;
	int16_t x67 = -2246;
	uint32_t x68 = 28500U;
	volatile uint32_t t15 = 31U;

	t15 = (((x65<=x66)&x67)+x68);

	if (t15 != 28500U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x70 = 7811LLU;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;

	t16 = (((x69<=x70)&x71)+x72);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 21U;
	static uint8_t x75 = 0U;
	volatile int32_t t17 = -759539780;

	t17 = (((x73<=x74)&x75)+x76);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 278985933244LLU;
	uint16_t x80 = 453U;
	static volatile uint32_t t18 = 445U;

	t18 = (((x77<=x78)&x79)+x80);

	if (t18 != 453U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -6;
	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	int32_t x84 = -13888111;

	t19 = (((x81<=x82)&x83)+x84);

	if (t19 != 18446744073695663505LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	volatile int8_t x88 = INT8_MIN;
	int32_t t20 = 250;

	t20 = (((x85<=x86)&x87)+x88);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = UINT16_MAX;
	uint16_t x90 = 1U;
	uint8_t x91 = 14U;
	volatile int32_t x92 = -689;

	t21 = (((x89<=x90)&x91)+x92);

	if (t21 != -689) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = 46;
	volatile int64_t t22 = 10646533864612LL;

	t22 = (((x93<=x94)&x95)+x96);

	if (t22 != 46LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	int8_t x98 = INT8_MIN;
	static uint32_t x99 = 21658084U;
	volatile int64_t x100 = INT64_MIN;

	t23 = (((x97<=x98)&x99)+x100);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	static uint32_t x104 = 14801U;
	uint32_t t24 = 696U;

	t24 = (((x101<=x102)&x103)+x104);

	if (t24 != 14801U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x106 = INT32_MIN;
	uint64_t x107 = 213698465892740287LLU;
	uint32_t x108 = UINT32_MAX;

	t25 = (((x105<=x106)&x107)+x108);

	if (t25 != 4294967295LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = 15878325073LLU;
	int16_t x111 = -3914;
	int64_t x112 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (((x109<=x110)&x111)+x112);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = 93U;
	static uint8_t x115 = 15U;
	int8_t x116 = 1;
	volatile int32_t t27 = 10576;

	t27 = (((x113<=x114)&x115)+x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x119 = 7U;
	int16_t x120 = INT16_MIN;
	int32_t t28 = 66979761;

	t28 = (((x117<=x118)&x119)+x120);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 172919911376251LLU;
	uint16_t x123 = 57U;
	volatile int16_t x124 = INT16_MIN;
	int32_t t29 = 16;

	t29 = (((x121<=x122)&x123)+x124);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x125 = UINT16_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MAX;
	uint8_t x128 = 2U;
	int32_t t30 = -50669;

	t30 = (((x125<=x126)&x127)+x128);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x130 = UINT16_MAX;
	static uint8_t x131 = UINT8_MAX;
	static volatile int16_t x132 = 143;
	static int32_t t31 = -3090766;

	t31 = (((x129<=x130)&x131)+x132);

	if (t31 != 144) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = -155571872;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t32 = 5;

	t32 = (((x133<=x134)&x135)+x136);

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	int32_t x140 = -1;

	t33 = (((x137<=x138)&x139)+x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int64_t x143 = -1LL;
	static int64_t t34 = -2712469414LL;

	t34 = (((x141<=x142)&x143)+x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	int8_t x147 = -46;
	int64_t t35 = INT64_MIN;

	t35 = (((x145<=x146)&x147)+x148);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x151 = INT64_MIN;
	int64_t x152 = -790734804LL;

	t36 = (((x149<=x150)&x151)+x152);

	if (t36 != -790734804LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -79;
	int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MAX;
	volatile int64_t x156 = INT64_MIN;
	volatile int64_t t37 = -12719300LL;

	t37 = (((x153<=x154)&x155)+x156);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 31733U;
	volatile int8_t x159 = -1;
	static uint16_t x160 = 12532U;
	int32_t t38 = -61994;

	t38 = (((x157<=x158)&x159)+x160);

	if (t38 != 12532) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	volatile int64_t x162 = -2085054878015LL;
	uint64_t x163 = 7494558379983023LLU;
	volatile uint64_t t39 = 1318554LLU;

	t39 = (((x161<=x162)&x163)+x164);

	if (t39 != 20LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = 589U;
	int64_t x166 = INT64_MIN;
	int64_t x167 = -469LL;
	int32_t x168 = INT32_MAX;

	t40 = (((x165<=x166)&x167)+x168);

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x169 = 462204048373327239LLU;
	static volatile uint8_t x171 = UINT8_MAX;
	int64_t x172 = 7992478395667431LL;
	int64_t t41 = 2LL;

	t41 = (((x169<=x170)&x171)+x172);

	if (t41 != 7992478395667432LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int64_t x175 = -1LL;
	volatile int32_t x176 = INT32_MAX;
	volatile int64_t t42 = 304439138812375LL;

	t42 = (((x173<=x174)&x175)+x176);

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = INT32_MIN;
	int8_t x178 = -1;
	uint8_t x179 = 3U;
	static int64_t x180 = INT64_MIN;
	int64_t t43 = -1LL;

	t43 = (((x177<=x178)&x179)+x180);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -14;
	int16_t x182 = 4;
	static int8_t x183 = INT8_MAX;
	uint8_t x184 = 72U;
	volatile int32_t t44 = 61;

	t44 = (((x181<=x182)&x183)+x184);

	if (t44 != 73) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 1;
	int64_t x186 = INT64_MIN;
	uint64_t x188 = 507383487LLU;
	volatile uint64_t t45 = 93LLU;

	t45 = (((x185<=x186)&x187)+x188);

	if (t45 != 507383487LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 18U;
	uint64_t x190 = 151081974490263216LLU;
	int64_t x191 = -3LL;
	uint8_t x192 = 65U;
	volatile int64_t t46 = -415516958LL;

	t46 = (((x189<=x190)&x191)+x192);

	if (t46 != 66LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = -12203016;

	t47 = (((x193<=x194)&x195)+x196);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = -1LL;
	volatile int16_t x199 = -1;
	static int8_t x200 = 5;
	int32_t t48 = 26;

	t48 = (((x197<=x198)&x199)+x200);

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MAX;
	uint32_t x202 = 31602U;
	volatile int16_t x203 = 208;
	static volatile uint64_t t49 = UINT64_MAX;

	t49 = (((x201<=x202)&x203)+x204);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x207 = -1;
	uint16_t x208 = 284U;
	int32_t t50 = 162;

	t50 = (((x205<=x206)&x207)+x208);

	if (t50 != 284) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = -4;
	int64_t t51 = -404333LL;

	t51 = (((x209<=x210)&x211)+x212);

	if (t51 != -2092155LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = INT64_MAX;
	uint16_t x216 = 14U;
	int32_t t52 = -7659;

	t52 = (((x213<=x214)&x215)+x216);

	if (t52 != 14) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x218 = 335926913626496LL;
	uint64_t x219 = UINT64_MAX;
	uint64_t t53 = 6LLU;

	t53 = (((x217<=x218)&x219)+x220);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	uint16_t x222 = UINT16_MAX;
	static int32_t x224 = INT32_MAX;
	int32_t t54 = INT32_MAX;

	t54 = (((x221<=x222)&x223)+x224);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x225 = 87U;
	int32_t x226 = 1847;
	volatile uint8_t x227 = 115U;
	volatile uint8_t x228 = 19U;
	int32_t t55 = 81471769;

	t55 = (((x225<=x226)&x227)+x228);

	if (t55 != 20) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	uint32_t x232 = 568U;
	static volatile int64_t t56 = -3442711834556566031LL;

	t56 = (((x229<=x230)&x231)+x232);

	if (t56 != 569LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 615799U;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = -1;
	volatile int32_t t57 = 3159685;

	t57 = (((x233<=x234)&x235)+x236);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x237 = -1;
	volatile uint16_t x238 = 494U;
	int16_t x240 = INT16_MIN;
	volatile int32_t t58 = 0;

	t58 = (((x237<=x238)&x239)+x240);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = -1;
	int8_t x243 = INT8_MIN;
	static int32_t x244 = -104350;
	int32_t t59 = 176581894;

	t59 = (((x241<=x242)&x243)+x244);

	if (t59 != -104350) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	int32_t x246 = INT32_MAX;
	static volatile int8_t x247 = INT8_MIN;
	static uint8_t x248 = 0U;
	static volatile int32_t t60 = -1426169;

	t60 = (((x245<=x246)&x247)+x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x251 = INT16_MIN;
	uint32_t x252 = 3U;
	uint32_t t61 = 118U;

	t61 = (((x249<=x250)&x251)+x252);

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -1;
	int16_t x254 = -15711;
	int64_t x255 = -72806852012LL;
	int8_t x256 = INT8_MIN;
	int64_t t62 = -85260247LL;

	t62 = (((x253<=x254)&x255)+x256);

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = -1;
	static int8_t x258 = INT8_MAX;
	uint16_t x259 = 5827U;
	int8_t x260 = -2;
	volatile int32_t t63 = -183806737;

	t63 = (((x257<=x258)&x259)+x260);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = 853711;
	volatile int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MAX;

	t64 = (((x261<=x262)&x263)+x264);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = INT8_MAX;
	static uint64_t x267 = 642LLU;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t65 = 25790445897903581LLU;

	t65 = (((x265<=x266)&x267)+x268);

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x271 = INT32_MAX;
	static volatile int32_t t66 = -53;

	t66 = (((x269<=x270)&x271)+x272);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x273 = 1U;
	volatile uint32_t x275 = UINT32_MAX;
	int16_t x276 = 0;

	t67 = (((x273<=x274)&x275)+x276);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = 1077437894LLU;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MAX;

	t68 = (((x277<=x278)&x279)+x280);

	if (t68 != 32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 51716488U;
	int64_t x282 = -16098585611874750LL;
	int16_t x283 = 1617;
	int32_t t69 = -418;

	t69 = (((x281<=x282)&x283)+x284);

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 26304569LLU;
	uint32_t x286 = 0U;
	static uint8_t x287 = UINT8_MAX;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t70 = UINT64_MAX;

	t70 = (((x285<=x286)&x287)+x288);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = 1U;
	uint32_t x290 = UINT32_MAX;
	uint64_t x292 = 5375924251LLU;

	t71 = (((x289<=x290)&x291)+x292);

	if (t71 != 5375924252LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 343U;
	static int64_t x294 = -11LL;
	int64_t x295 = -1LL;
	volatile int64_t x296 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = (((x293<=x294)&x295)+x296);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t73 = 908563525152122LLU;

	t73 = (((x297<=x298)&x299)+x300);

	if (t73 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = 13912;
	volatile int64_t x302 = 11366504798421307LL;
	uint8_t x303 = 2U;
	int16_t x304 = INT16_MAX;
	static volatile int32_t t74 = -578718;

	t74 = (((x301<=x302)&x303)+x304);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x306 = UINT8_MAX;
	uint32_t x307 = 57U;
	static volatile uint32_t t75 = 30219U;

	t75 = (((x305<=x306)&x307)+x308);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = 44U;
	uint32_t t76 = 214U;

	t76 = (((x309<=x310)&x311)+x312);

	if (t76 != 45U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = INT64_MIN;
	int8_t x314 = -2;
	int8_t x316 = -1;
	uint64_t t77 = UINT64_MAX;

	t77 = (((x313<=x314)&x315)+x316);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = 23994U;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	int32_t t78 = -7;

	t78 = (((x317<=x318)&x319)+x320);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	static volatile uint32_t x324 = 2536674U;

	t79 = (((x321<=x322)&x323)+x324);

	if (t79 != 2536674U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = -121;
	uint8_t x328 = 0U;
	int32_t t80 = 4266;

	t80 = (((x325<=x326)&x327)+x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 0U;
	int64_t x330 = 2287475LL;
	int64_t x331 = -1LL;
	uint64_t x332 = 3LLU;
	static uint64_t t81 = 337676720662LLU;

	t81 = (((x329<=x330)&x331)+x332);

	if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = -1LL;
	uint32_t x334 = 943018186U;
	static int16_t x335 = INT16_MIN;
	int8_t x336 = 8;
	volatile int32_t t82 = -33861;

	t82 = (((x333<=x334)&x335)+x336);

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = -1;
	int16_t x338 = -1902;
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (((x337<=x338)&x339)+x340);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x342 = -15;
	uint16_t x343 = 501U;
	int8_t x344 = -1;
	static volatile int32_t t84 = -338;

	t84 = (((x341<=x342)&x343)+x344);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = 35754958U;
	int32_t x346 = INT32_MAX;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = 815;
	int32_t t85 = -992;

	t85 = (((x345<=x346)&x347)+x348);

	if (t85 != 816) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x350 = INT64_MIN;
	int64_t x351 = -1LL;
	uint8_t x352 = 48U;
	static volatile int64_t t86 = -84908LL;

	t86 = (((x349<=x350)&x351)+x352);

	if (t86 != 48LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x353 = INT8_MIN;
	static int16_t x354 = -11281;
	int16_t x355 = -1;
	int32_t t87 = INT32_MAX;

	t87 = (((x353<=x354)&x355)+x356);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x357 = -13750;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = 2534;
	static volatile uint16_t x360 = 27747U;
	static int32_t t88 = 3;

	t88 = (((x357<=x358)&x359)+x360);

	if (t88 != 27747) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 3U;
	int16_t x363 = INT16_MIN;
	int32_t t89 = -1;

	t89 = (((x361<=x362)&x363)+x364);

	if (t89 != 519) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = -1LL;
	uint32_t x367 = 131997U;
	volatile uint64_t t90 = 374745955390344014LLU;

	t90 = (((x365<=x366)&x367)+x368);

	if (t90 != 16519122974035574LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -1;
	static int16_t x371 = -1;
	static volatile int64_t x372 = INT64_MIN;
	static volatile int64_t t91 = 1109445238181LL;

	t91 = (((x369<=x370)&x371)+x372);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MIN;
	static int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	int16_t x376 = 2;
	int32_t t92 = 5237;

	t92 = (((x373<=x374)&x375)+x376);

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x379 = 5752814209LLU;
	uint64_t t93 = 29647LLU;

	t93 = (((x377<=x378)&x379)+x380);

	if (t93 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = -1;
	int64_t t94 = INT64_MAX;

	t94 = (((x381<=x382)&x383)+x384);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = -1;
	uint8_t x386 = 1U;
	static int32_t x387 = 449;
	volatile int32_t t95 = 84;

	t95 = (((x385<=x386)&x387)+x388);

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = INT64_MAX;
	volatile int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	static int8_t x392 = -1;
	volatile int32_t t96 = -3923;

	t96 = (((x389<=x390)&x391)+x392);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = -1;
	volatile int16_t x394 = -1;
	int16_t x395 = 358;
	int64_t x396 = -1LL;

	t97 = (((x393<=x394)&x395)+x396);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = INT32_MAX;
	uint8_t x399 = 54U;
	volatile int8_t x400 = 57;
	static volatile int32_t t98 = -283640;

	t98 = (((x397<=x398)&x399)+x400);

	if (t98 != 57) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	int8_t x403 = -1;
	int8_t x404 = -1;
	int32_t t99 = -2107286;

	t99 = (((x401<=x402)&x403)+x404);

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

