#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint64_t x13 = 178LLU;
uint32_t x18 = 44536U;
int8_t x22 = 5;
static int64_t x24 = INT64_MAX;
uint16_t x27 = UINT16_MAX;
static uint16_t x30 = UINT16_MAX;
static volatile int32_t x40 = 1133937;
volatile int32_t x44 = INT32_MIN;
int16_t x48 = -1;
volatile uint16_t x49 = 93U;
volatile uint8_t x50 = 12U;
static int64_t x52 = -1LL;
volatile int32_t t14 = 336597;
volatile int32_t x64 = -1;
int8_t x65 = INT8_MIN;
volatile uint8_t x66 = 79U;
int8_t x77 = INT8_MIN;
int16_t x80 = INT16_MAX;
int32_t x81 = 2754872;
volatile int32_t t21 = 3;
int8_t x90 = INT8_MIN;
static volatile int32_t t22 = 3;
static int8_t x93 = -1;
int8_t x94 = 3;
volatile int32_t t26 = -29;
volatile int64_t x112 = -5235674250529LL;
volatile int32_t t27 = -409353;
uint64_t x114 = UINT64_MAX;
static int8_t x120 = -1;
uint16_t x121 = 121U;
int8_t x124 = INT8_MIN;
int32_t x133 = INT32_MAX;
uint16_t x136 = 28U;
int16_t x143 = -4751;
static uint32_t x150 = 133U;
uint64_t x152 = UINT64_MAX;
volatile int32_t t39 = 4328;
int8_t x169 = -1;
volatile int32_t t42 = 10932542;
int64_t x175 = INT64_MIN;
int64_t x176 = INT64_MIN;
static int8_t x178 = -1;
uint16_t x179 = UINT16_MAX;
volatile int32_t x180 = INT32_MIN;
int8_t x182 = 6;
int64_t x190 = -1LL;
static int32_t t47 = -38;
uint64_t x195 = 13960411230870574LLU;
int64_t x203 = -28630196LL;
volatile int16_t x205 = INT16_MIN;
int8_t x206 = INT8_MIN;
static int16_t x209 = -1;
volatile int16_t x215 = 7;
int32_t t55 = 14869992;
int64_t x232 = INT64_MIN;
volatile int8_t x237 = -1;
static uint16_t x242 = 36U;
int8_t x252 = -19;
static int64_t x255 = -1LL;
static int32_t t64 = -331440896;
volatile int32_t t65 = 953465308;
volatile int64_t x265 = -1LL;
int32_t t66 = -71809;
int8_t x269 = -1;
int8_t x272 = 0;
int64_t x274 = 98LL;
volatile int32_t x281 = INT32_MAX;
int64_t x282 = INT64_MIN;
uint32_t x286 = UINT32_MAX;
int16_t x288 = INT16_MAX;
int64_t x291 = INT64_MIN;
uint32_t x295 = 3737U;
int64_t x296 = INT64_MIN;
static int32_t t73 = -599750654;
volatile int8_t x301 = INT8_MIN;
volatile int8_t x304 = 1;
static int32_t t75 = -413;
uint16_t x306 = 7U;
int8_t x311 = INT8_MAX;
volatile int32_t t77 = -7913845;
int16_t x322 = -1;
static int32_t x325 = INT32_MIN;
int32_t x331 = INT32_MIN;
volatile int8_t x334 = INT8_MIN;
int32_t x335 = 34719380;
volatile int64_t x352 = -23762603430LL;
int64_t x354 = 123463LL;
volatile int32_t t88 = 1383699;
int16_t x357 = INT16_MIN;
int8_t x363 = INT8_MIN;
uint32_t x364 = UINT32_MAX;
static int16_t x365 = INT16_MIN;
int16_t x366 = INT16_MIN;
uint32_t x372 = 344666U;
int64_t x378 = INT64_MIN;
static uint8_t x382 = UINT8_MAX;
volatile int32_t t95 = -1;
int32_t t96 = -5495974;
static int64_t x390 = INT64_MIN;
int32_t t99 = 12;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MAX;
	static uint16_t x4 = 1883U;
	int32_t t0 = 927398642;

	t0 = (x1<=((x2&x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint8_t x6 = 58U;
	int8_t x7 = INT8_MIN;
	volatile uint32_t x8 = 3690U;
	int32_t t1 = 182473;

	t1 = (x5<=((x6&x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint16_t x10 = 13U;
	volatile int16_t x11 = -1;
	static volatile int8_t x12 = INT8_MAX;
	static int32_t t2 = -156829;

	t2 = (x9<=((x10&x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	static uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 95;

	t3 = (x13<=((x14&x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 762558595723382LL;
	int32_t x19 = -1;
	int64_t x20 = -1LL;
	volatile int32_t t4 = -27;

	t4 = (x17<=((x18&x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 30;
	uint16_t x23 = 3799U;
	volatile int32_t t5 = 19187;

	t5 = (x21<=((x22&x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	static uint16_t x26 = UINT16_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 1491;

	t6 = (x25<=((x26&x27)==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1;
	static int16_t x31 = INT16_MIN;
	static int16_t x32 = INT16_MAX;
	static volatile int32_t t7 = 22;

	t7 = (x29<=((x30&x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	uint32_t x35 = 125U;
	int8_t x36 = -24;
	static int32_t t8 = 7008645;

	t8 = (x33<=((x34&x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = 446029471060765457LLU;
	int32_t t9 = 738;

	t9 = (x37<=((x38&x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int64_t x42 = -203LL;
	static volatile uint64_t x43 = 2523404661LLU;
	volatile int32_t t10 = 35;

	t10 = (x41<=((x42&x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 62073U;
	int16_t x46 = -1;
	volatile int16_t x47 = INT16_MIN;
	static int32_t t11 = -258354872;

	t11 = (x45<=((x46&x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x51 = UINT32_MAX;
	int32_t t12 = 7819812;

	t12 = (x49<=((x50&x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = -1LL;
	int16_t x56 = 14082;
	volatile int32_t t13 = 981;

	t13 = (x53<=((x54&x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 0U;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = 902189241U;
	volatile int32_t x60 = -2;

	t14 = (x57<=((x58&x59)==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 1730925734039LL;
	uint64_t x62 = 67LLU;
	int8_t x63 = INT8_MIN;
	int32_t t15 = 965;

	t15 = (x61<=((x62&x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x67 = -11186409;
	int32_t x68 = -5;
	volatile int32_t t16 = -503764155;

	t16 = (x65<=((x66&x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	int8_t x71 = -1;
	int16_t x72 = 0;
	int32_t t17 = 0;

	t17 = (x69<=((x70&x71)==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int64_t x74 = INT64_MAX;
	int32_t x75 = -23819;
	static int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -419827;

	t18 = (x73<=((x74&x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x78 = -4004LL;
	int8_t x79 = -1;
	static int32_t t19 = -12;

	t19 = (x77<=((x78&x79)==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 368LLU;
	uint16_t x83 = UINT16_MAX;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = -31;

	t20 = (x81<=((x82&x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 153648797LL;
	volatile int32_t x86 = INT32_MAX;
	int16_t x87 = INT16_MAX;
	uint8_t x88 = UINT8_MAX;

	t21 = (x85<=((x86&x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int16_t x91 = -1;
	int16_t x92 = INT16_MIN;

	t22 = (x89<=((x90&x91)==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x95 = 663U;
	int8_t x96 = -1;
	volatile int32_t t23 = 3;

	t23 = (x93<=((x94&x95)==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -47;
	static int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -941;

	t24 = (x97<=((x98&x99)==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 5968919U;
	volatile int8_t x103 = -1;
	static int32_t x104 = -1;
	int32_t t25 = 20696;

	t25 = (x101<=((x102&x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -10410;
	static uint16_t x106 = 12442U;
	int16_t x107 = -1;
	int64_t x108 = -1LL;

	t26 = (x105<=((x106&x107)==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	static int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;

	t27 = (x109<=((x110&x111)==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 25124U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;
	int32_t t28 = -617455916;

	t28 = (x113<=((x114&x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	static int32_t x118 = -1;
	uint16_t x119 = UINT16_MAX;
	static int32_t t29 = 94319846;

	t29 = (x117<=((x118&x119)==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	static int16_t x123 = INT16_MIN;
	int32_t t30 = -38486356;

	t30 = (x121<=((x122&x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 1595LLU;
	uint64_t x126 = UINT64_MAX;
	uint8_t x127 = UINT8_MAX;
	volatile uint64_t x128 = 154443LLU;
	int32_t t31 = 61;

	t31 = (x125<=((x126&x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int8_t x130 = 0;
	uint64_t x131 = 2246LLU;
	static int16_t x132 = 75;
	int32_t t32 = 15512980;

	t32 = (x129<=((x130&x131)==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x134 = -510443LL;
	int32_t x135 = -1;
	volatile int32_t t33 = -3946;

	t33 = (x133<=((x134&x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 243103;

	t34 = (x137<=((x138&x139)==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = -1;
	static uint16_t x144 = 1995U;
	volatile int32_t t35 = -17;

	t35 = (x141<=((x142&x143)==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 154693152U;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -60;
	volatile int8_t x148 = INT8_MAX;
	int32_t t36 = 14313763;

	t36 = (x145<=((x146&x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile int16_t x151 = INT16_MAX;
	int32_t t37 = 14115660;

	t37 = (x149<=((x150&x151)==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = -5;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 12;

	t38 = (x153<=((x154&x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	static uint16_t x158 = 5U;
	uint8_t x159 = 15U;
	int64_t x160 = INT64_MIN;

	t39 = (x157<=((x158&x159)==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 1U;
	int16_t x162 = -1;
	int64_t x163 = 89808LL;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 2597825;

	t40 = (x161<=((x162&x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static int64_t x166 = -688307040LL;
	static int64_t x167 = -1LL;
	uint64_t x168 = 39934193217LLU;
	volatile int32_t t41 = -24;

	t41 = (x165<=((x166&x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x170 = INT16_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	static volatile int16_t x172 = INT16_MIN;

	t42 = (x169<=((x170&x171)==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = -790742922;
	static int32_t t43 = 188134487;

	t43 = (x173<=((x174&x175)==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -5;
	int32_t t44 = -752410;

	t44 = (x177<=((x178&x179)==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 5795128457LLU;
	int32_t x183 = -145114821;
	static uint64_t x184 = 31LLU;
	static volatile int32_t t45 = 2;

	t45 = (x181<=((x182&x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	volatile uint64_t x186 = 457294040943LLU;
	int8_t x187 = INT8_MAX;
	int64_t x188 = -1LL;
	static int32_t t46 = 64162;

	t46 = (x185<=((x186&x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -2762815LL;
	static uint8_t x191 = 0U;
	uint16_t x192 = 0U;

	t47 = (x189<=((x190&x191)==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 1LL;
	uint64_t x194 = 8661LLU;
	static volatile uint32_t x196 = 2484684U;
	volatile int32_t t48 = 143534368;

	t48 = (x193<=((x194&x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 660U;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 147LLU;
	uint32_t x200 = 180480214U;
	int32_t t49 = 26;

	t49 = (x197<=((x198&x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 33U;
	static int32_t x202 = INT32_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = -12;

	t50 = (x201<=((x202&x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x207 = -1;
	static volatile int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -298;

	t51 = (x205<=((x206&x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	int32_t x211 = -1;
	volatile uint16_t x212 = 1375U;
	int32_t t52 = 18224246;

	t52 = (x209<=((x210&x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	static uint16_t x214 = 5070U;
	uint32_t x216 = 127U;
	static int32_t t53 = -3371;

	t53 = (x213<=((x214&x215)==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 187LL;
	static int32_t x218 = INT32_MIN;
	uint16_t x219 = 274U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 618994913;

	t54 = (x217<=((x218&x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	volatile int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MAX;
	uint8_t x224 = UINT8_MAX;

	t55 = (x221<=((x222&x223)==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	static int32_t x228 = INT32_MAX;
	int32_t t56 = -44897647;

	t56 = (x225<=((x226&x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	static int64_t x230 = -3769072633261494LL;
	int32_t x231 = INT32_MAX;
	volatile int32_t t57 = -26;

	t57 = (x229<=((x230&x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	int32_t x234 = 31;
	static uint32_t x235 = UINT32_MAX;
	int32_t x236 = -1;
	int32_t t58 = -357926;

	t58 = (x233<=((x234&x235)==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	static int8_t x239 = 1;
	uint16_t x240 = 23U;
	int32_t t59 = 164396669;

	t59 = (x237<=((x238&x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint32_t x243 = 0U;
	uint64_t x244 = UINT64_MAX;
	static int32_t t60 = -401864452;

	t60 = (x241<=((x242&x243)==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 9489U;
	uint8_t x246 = 99U;
	volatile int64_t x247 = INT64_MIN;
	int64_t x248 = 420279LL;
	volatile int32_t t61 = 250;

	t61 = (x245<=((x246&x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = 0;
	volatile int32_t t62 = 2;

	t62 = (x249<=((x250&x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = -18;
	uint8_t x256 = UINT8_MAX;
	int32_t t63 = 23674400;

	t63 = (x253<=((x254&x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;
	int16_t x259 = -1;
	int64_t x260 = INT64_MIN;

	t64 = (x257<=((x258&x259)==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	volatile uint32_t x262 = 1U;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -1;

	t65 = (x261<=((x262&x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MIN;
	volatile uint16_t x267 = UINT16_MAX;
	volatile int32_t x268 = -1;

	t66 = (x265<=((x266&x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 18028LLU;
	int8_t x271 = 0;
	int32_t t67 = -210906;

	t67 = (x269<=((x270&x271)==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -1LL;
	int32_t t68 = 1;

	t68 = (x273<=((x274&x275)==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	volatile int16_t x280 = -7;
	volatile int32_t t69 = 80086057;

	t69 = (x277<=((x278&x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x283 = INT32_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 0;

	t70 = (x281<=((x282&x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int8_t x287 = INT8_MIN;
	int32_t t71 = -15;

	t71 = (x285<=((x286&x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = -329;
	int8_t x290 = INT8_MAX;
	static uint32_t x292 = 26742053U;
	static int32_t t72 = -842237;

	t72 = (x289<=((x290&x291)==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 9745055703LLU;
	volatile int16_t x294 = 2;

	t73 = (x293<=((x294&x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 189522758;
	uint32_t x298 = 1411499794U;
	uint16_t x299 = UINT16_MAX;
	static uint8_t x300 = 5U;
	int32_t t74 = 106471367;

	t74 = (x297<=((x298&x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x302 = 11519177001434LLU;
	int16_t x303 = INT16_MIN;

	t75 = (x301<=((x302&x303)==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int64_t x307 = -23266942LL;
	uint16_t x308 = 0U;
	int32_t t76 = 821492;

	t76 = (x305<=((x306&x307)==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static volatile int32_t x310 = 448844303;
	volatile uint32_t x312 = 48U;

	t77 = (x309<=((x310&x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 0U;
	volatile uint16_t x314 = 42U;
	int32_t x315 = INT32_MIN;
	static uint64_t x316 = 12LLU;
	int32_t t78 = 101;

	t78 = (x313<=((x314&x315)==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 81427994341LLU;
	int32_t x319 = -1;
	int8_t x320 = 4;
	volatile int32_t t79 = 0;

	t79 = (x317<=((x318&x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int8_t x323 = -1;
	volatile int16_t x324 = INT16_MIN;
	static int32_t t80 = 162549774;

	t80 = (x321<=((x322&x323)==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x326 = UINT32_MAX;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -1;

	t81 = (x325<=((x326&x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MIN;
	static int32_t x330 = INT32_MIN;
	int16_t x332 = -1;
	int32_t t82 = 29938524;

	t82 = (x329<=((x330&x331)==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x336 = 6068U;
	volatile int32_t t83 = 106;

	t83 = (x333<=((x334&x335)==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int8_t x338 = -1;
	static int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 897400;

	t84 = (x337<=((x338&x339)==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x341 = -30851LL;
	int16_t x342 = INT16_MAX;
	int64_t x343 = -1LL;
	int64_t x344 = 3052236290LL;
	volatile int32_t t85 = -33246116;

	t85 = (x341<=((x342&x343)==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = 11;
	static int16_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -55;

	t86 = (x345<=((x346&x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	volatile uint8_t x351 = 2U;
	volatile int32_t t87 = 245;

	t87 = (x349<=((x350&x351)==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static int32_t x355 = INT32_MIN;
	static volatile int16_t x356 = -1;

	t88 = (x353<=((x354&x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MAX;
	int32_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 7496543;

	t89 = (x357<=((x358&x359)==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 1U;
	int16_t x362 = -1;
	int32_t t90 = 1911;

	t90 = (x361<=((x362&x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = -1;
	volatile int64_t x368 = -1LL;
	int32_t t91 = 436;

	t91 = (x365<=((x366&x367)==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static int8_t x370 = INT8_MAX;
	uint8_t x371 = 37U;
	int32_t t92 = -354211764;

	t92 = (x369<=((x370&x371)==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1041696732386LL;
	uint64_t x374 = 2293720209050277LLU;
	static uint32_t x375 = 556U;
	int8_t x376 = INT8_MIN;
	static int32_t t93 = -40440;

	t93 = (x373<=((x374&x375)==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 31U;
	uint64_t x379 = 3871676142LLU;
	volatile int32_t x380 = INT32_MAX;
	volatile int32_t t94 = 12222028;

	t94 = (x377<=((x378&x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 5U;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = 0U;

	t95 = (x381<=((x382&x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = -192;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = -1;

	t96 = (x385<=((x386&x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	static int64_t x391 = INT64_MIN;
	volatile int64_t x392 = -1LL;
	volatile int32_t t97 = -20884;

	t97 = (x389<=((x390&x391)==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 3U;
	int16_t x394 = INT16_MIN;
	uint64_t x395 = 7369317LLU;
	volatile int32_t x396 = INT32_MIN;
	int32_t t98 = 29;

	t98 = (x393<=((x394&x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 96075621252LLU;
	uint16_t x398 = 1U;
	uint16_t x399 = UINT16_MAX;
	volatile int16_t x400 = -806;

	t99 = (x397<=((x398&x399)==x400));

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

