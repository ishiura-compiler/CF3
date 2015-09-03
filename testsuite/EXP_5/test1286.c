#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
int64_t x10 = -1LL;
uint64_t t2 = 44146LLU;
volatile int8_t x13 = INT8_MAX;
int16_t x17 = INT16_MIN;
int16_t x19 = 5;
uint32_t x21 = UINT32_MAX;
int32_t x22 = INT32_MAX;
volatile int32_t t8 = 1;
uint32_t x39 = 23259251U;
static int16_t x42 = -436;
static int16_t x43 = -1;
static volatile int32_t t13 = INT32_MIN;
uint64_t x65 = 123377LLU;
int32_t x69 = -1;
static uint32_t x73 = UINT32_MAX;
int16_t x77 = 93;
int64_t x79 = INT64_MAX;
volatile int64_t x84 = -308719931LL;
int64_t x88 = 2045877458LL;
int32_t t21 = 1;
uint64_t x90 = 6746936631500444LLU;
uint16_t x95 = UINT16_MAX;
static uint64_t x96 = 1057LLU;
uint16_t x98 = UINT16_MAX;
volatile int16_t x102 = INT16_MAX;
uint64_t x104 = UINT64_MAX;
int16_t x107 = INT16_MIN;
volatile int32_t t26 = -21918904;
volatile int64_t x109 = INT64_MIN;
int64_t x110 = 15LL;
int64_t t27 = INT64_MIN;
int32_t x124 = INT32_MAX;
uint64_t x125 = UINT64_MAX;
static volatile int8_t x138 = 1;
volatile int16_t x147 = -1;
volatile int32_t x157 = INT32_MAX;
static volatile int32_t t40 = -4;
int32_t x166 = INT32_MIN;
int64_t x177 = INT64_MIN;
int64_t x178 = 35930789036045LL;
int64_t x182 = INT64_MIN;
static int64_t t45 = -840148939207548054LL;
int64_t x187 = -1LL;
volatile uint64_t t47 = 26556388LLU;
volatile int8_t x195 = -1;
int64_t x200 = -433607LL;
volatile uint32_t x201 = 17025U;
static int8_t x203 = INT8_MIN;
uint8_t x206 = 14U;
int8_t x207 = -1;
uint32_t x210 = 41209781U;
static int16_t x219 = INT16_MAX;
int8_t x221 = -1;
volatile int64_t x226 = INT64_MIN;
int32_t x228 = -314;
volatile int32_t x233 = 32;
volatile int32_t t58 = -8207510;
int32_t x237 = INT32_MIN;
int32_t x239 = INT32_MIN;
int16_t x242 = -1;
static int16_t x243 = -186;
int32_t x249 = 111;
volatile uint32_t x250 = 947157661U;
static uint16_t x254 = 0U;
int16_t x256 = 124;
volatile uint64_t x261 = UINT64_MAX;
static volatile uint64_t t65 = UINT64_MAX;
int16_t x265 = INT16_MIN;
uint16_t x272 = 1728U;
int64_t t68 = INT64_MAX;
static uint32_t x293 = 38U;
static int32_t x295 = INT32_MAX;
uint32_t t73 = 29408496U;
int32_t x299 = INT32_MIN;
int8_t x303 = 2;
static uint32_t x304 = 61226U;
static int32_t x306 = INT32_MIN;
volatile uint8_t x308 = UINT8_MAX;
int32_t x313 = -1;
int8_t x315 = 0;
int8_t x316 = INT8_MIN;
volatile int32_t t81 = 3;
volatile int32_t x329 = -4142;
int64_t x334 = -1LL;
static int16_t x340 = INT16_MIN;
uint64_t x343 = UINT64_MAX;
int32_t t85 = 243;
int32_t x346 = INT32_MIN;
volatile uint8_t x348 = 6U;
int64_t x350 = 2734LL;
volatile uint8_t x364 = 122U;
volatile int8_t x366 = INT8_MIN;
int32_t x371 = 37167;
static int64_t t94 = -1LL;
volatile int16_t x381 = -1;
static volatile int16_t x385 = 92;
int64_t x388 = INT64_MIN;
volatile int32_t t96 = -111;
static int8_t x390 = INT8_MAX;
int8_t x393 = INT8_MAX;
int32_t t99 = INT32_MIN;


void f0(void) {
	static uint16_t x1 = 282U;
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MAX;
	int32_t t0 = 0;

	t0 = (x1|((x2==x3)==x4));

	if (t0 != 282) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 957203284976650LL;
	static int8_t x6 = -1;
	uint8_t x7 = 100U;
	static int32_t x8 = -410613;
	volatile int64_t t1 = -66535028481031886LL;

	t1 = (x5|((x6==x7)==x8));

	if (t1 != 957203284976650LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 313LLU;
	int64_t x11 = -54LL;
	uint32_t x12 = 27U;

	t2 = (x9|((x10==x11)==x12));

	if (t2 != 313LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -9615;
	int32_t x15 = -180741544;
	int8_t x16 = -31;
	volatile int32_t t3 = 483;

	t3 = (x13|((x14==x15)==x16));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	volatile int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 756935;

	t4 = (x17|((x18==x19)==x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = INT8_MIN;
	static uint64_t x24 = 7128LLU;
	uint32_t t5 = UINT32_MAX;

	t5 = (x21|((x22==x23)==x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = UINT32_MAX;
	int32_t t6 = INT32_MIN;

	t6 = (x25|((x26==x27)==x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 198;
	static volatile uint8_t x30 = 14U;
	int8_t x31 = -46;
	int64_t x32 = -1LL;
	volatile int32_t t7 = 5;

	t7 = (x29|((x30==x31)==x32));

	if (t7 != 198) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 33U;
	int32_t x34 = 462121202;
	static int64_t x35 = 26690623LL;
	int32_t x36 = INT32_MIN;

	t8 = (x33|((x34==x35)==x36));

	if (t8 != 33) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 14306U;
	int16_t x38 = -1;
	volatile int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -4721306;

	t9 = (x37|((x38==x39)==x40));

	if (t9 != 14306) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 225U;
	uint16_t x44 = UINT16_MAX;
	uint32_t t10 = 5U;

	t10 = (x41|((x42==x43)==x44));

	if (t10 != 225U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 23U;
	int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MIN;
	int16_t x48 = -1;
	volatile int32_t t11 = 3;

	t11 = (x45|((x46==x47)==x48));

	if (t11 != 23) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	static int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = 0;

	t12 = (x49|((x50==x51)==x52));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MIN;

	t13 = (x53|((x54==x55)==x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 388263812963LLU;
	uint32_t x58 = UINT32_MAX;
	uint16_t x59 = 23430U;
	int64_t x60 = INT64_MAX;
	volatile uint64_t t14 = 842132LLU;

	t14 = (x57|((x58==x59)==x60));

	if (t14 != 388263812963LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	volatile int32_t x62 = INT32_MAX;
	int8_t x63 = 62;
	volatile int8_t x64 = INT8_MAX;
	static volatile int64_t t15 = INT64_MAX;

	t15 = (x61|((x62==x63)==x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = 2U;
	volatile uint8_t x67 = UINT8_MAX;
	uint8_t x68 = 1U;
	uint64_t t16 = 5042674LLU;

	t16 = (x65|((x66==x67)==x68));

	if (t16 != 123377LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = 4078671120292LLU;
	int32_t x71 = 515988;
	volatile int16_t x72 = INT16_MIN;
	static int32_t t17 = 626;

	t17 = (x69|((x70==x71)==x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int32_t x75 = 6;
	static int8_t x76 = INT8_MIN;
	static uint32_t t18 = UINT32_MAX;

	t18 = (x73|((x74==x75)==x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x78 = INT32_MAX;
	uint16_t x80 = 7U;
	int32_t t19 = -4025;

	t19 = (x77|((x78==x79)==x80));

	if (t19 != 93) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	volatile int64_t x83 = -217646282123683243LL;
	int32_t t20 = -56769573;

	t20 = (x81|((x82==x83)==x84));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 19;
	int64_t x86 = 2211593833931090326LL;
	volatile int8_t x87 = INT8_MIN;

	t21 = (x85|((x86==x87)==x88));

	if (t21 != 19) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x91 = 10;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = INT32_MIN;

	t22 = (x89|((x90==x91)==x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 291283U;
	static uint16_t x94 = UINT16_MAX;
	static volatile uint32_t t23 = 12U;

	t23 = (x93|((x94==x95)==x96));

	if (t23 != 291283U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 5019U;
	uint16_t x99 = 986U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 111;

	t24 = (x97|((x98==x99)==x100));

	if (t24 != 5019) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = 7795;
	int64_t x103 = -1LL;
	volatile int32_t t25 = -107167;

	t25 = (x101|((x102==x103)==x104));

	if (t25 != 7795) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = 3;
	static int64_t x106 = INT64_MAX;
	static int16_t x108 = -1;

	t26 = (x105|((x106==x107)==x108));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x111 = INT8_MAX;
	int8_t x112 = -1;

	t27 = (x109|((x110==x111)==x112));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = -1793764LL;
	volatile uint64_t x115 = 509412LLU;
	uint16_t x116 = 1511U;
	int32_t t28 = -12975465;

	t28 = (x113|((x114==x115)==x116));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	uint8_t x118 = 3U;
	static volatile uint64_t x119 = UINT64_MAX;
	static int64_t x120 = INT64_MAX;
	static volatile int32_t t29 = 525929266;

	t29 = (x117|((x118==x119)==x120));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 1226;
	volatile uint64_t x122 = 319959835682364401LLU;
	volatile int16_t x123 = INT16_MIN;
	int32_t t30 = 5;

	t30 = (x121|((x122==x123)==x124));

	if (t30 != 1226) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -1LL;
	int64_t x127 = 6667688222LL;
	int64_t x128 = -7267039230LL;
	uint64_t t31 = UINT64_MAX;

	t31 = (x125|((x126==x127)==x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MAX;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	volatile int64_t x132 = INT64_MIN;
	int32_t t32 = INT32_MAX;

	t32 = (x129|((x130==x131)==x132));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 2425U;
	int16_t x134 = INT16_MIN;
	volatile int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MAX;
	static volatile uint32_t t33 = 62U;

	t33 = (x133|((x134==x135)==x136));

	if (t33 != 2425U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	static uint64_t x139 = 1LLU;
	int32_t x140 = INT32_MAX;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x137|((x138==x139)==x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -63;
	int64_t x142 = 0LL;
	volatile int16_t x143 = 2;
	int16_t x144 = 6;
	volatile int32_t t35 = -3840598;

	t35 = (x141|((x142==x143)==x144));

	if (t35 != -63) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int64_t x146 = 1023219918205LL;
	static volatile uint32_t x148 = 0U;
	int32_t t36 = -765947;

	t36 = (x145|((x146==x147)==x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = -356;
	volatile int16_t x151 = -3;
	int64_t x152 = INT64_MAX;
	volatile int32_t t37 = 1;

	t37 = (x149|((x150==x151)==x152));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	volatile int32_t x154 = -2018714;
	volatile int32_t x155 = INT32_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = 54878325;

	t38 = (x153|((x154==x155)==x156));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 230U;
	static uint32_t x159 = UINT32_MAX;
	uint64_t x160 = 0LLU;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x157|((x158==x159)==x160));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -41;
	uint8_t x162 = 0U;
	int8_t x163 = 1;
	uint32_t x164 = UINT32_MAX;

	t40 = (x161|((x162==x163)==x164));

	if (t40 != -41) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = 11;

	t41 = (x165|((x166==x167)==x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 125U;
	uint16_t x170 = 13619U;
	int64_t x171 = 455694329LL;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = -175;

	t42 = (x169|((x170==x171)==x172));

	if (t42 != 125) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x173 = INT64_MAX;
	static uint16_t x174 = UINT16_MAX;
	int32_t x175 = -1;
	int16_t x176 = 4642;
	int64_t t43 = INT64_MAX;

	t43 = (x173|((x174==x175)==x176));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x179 = 6385U;
	volatile uint8_t x180 = 14U;
	int64_t t44 = INT64_MIN;

	t44 = (x177|((x178==x179)==x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -389455070367LL;
	int16_t x183 = -1;
	uint16_t x184 = UINT16_MAX;

	t45 = (x181|((x182==x183)==x184));

	if (t45 != -389455070367LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MIN;
	uint8_t x188 = 2U;
	int32_t t46 = INT32_MAX;

	t46 = (x185|((x186==x187)==x188));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x189 = 17968952938LLU;
	int32_t x190 = INT32_MIN;
	static int8_t x191 = -3;
	int8_t x192 = INT8_MIN;

	t47 = (x189|((x190==x191)==x192));

	if (t47 != 17968952938LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 7U;
	int16_t x194 = INT16_MIN;
	int16_t x196 = -447;
	volatile int32_t t48 = -2746702;

	t48 = (x193|((x194==x195)==x196));

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int16_t x198 = 1;
	volatile int8_t x199 = INT8_MAX;
	int32_t t49 = -36024;

	t49 = (x197|((x198==x199)==x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	static volatile uint16_t x204 = UINT16_MAX;
	static uint32_t t50 = 263119626U;

	t50 = (x201|((x202==x203)==x204));

	if (t50 != 17025U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 1U;
	int32_t x208 = -1;
	volatile int32_t t51 = -109224;

	t51 = (x205|((x206==x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	uint8_t x211 = 3U;
	int8_t x212 = -1;
	volatile int32_t t52 = 62;

	t52 = (x209|((x210==x211)==x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -20;
	int16_t x214 = 4094;
	int8_t x215 = INT8_MAX;
	volatile int8_t x216 = 0;
	int32_t t53 = -750671;

	t53 = (x213|((x214==x215)==x216));

	if (t53 != -19) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = 56805611U;
	static uint64_t x220 = 23309965035167LLU;
	static int32_t t54 = -980751088;

	t54 = (x217|((x218==x219)==x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 588318531LLU;
	int16_t x223 = -1;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 1;

	t55 = (x221|((x222==x223)==x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 188533LL;
	volatile int16_t x227 = -5255;
	int64_t t56 = 51222883028LL;

	t56 = (x225|((x226==x227)==x228));

	if (t56 != 188533LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = 55U;
	volatile int16_t x231 = INT16_MAX;
	int32_t x232 = -1615260;
	int64_t t57 = -365691330837671645LL;

	t57 = (x229|((x230==x231)==x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MAX;
	int16_t x235 = INT16_MAX;
	volatile int32_t x236 = INT32_MIN;

	t58 = (x233|((x234==x235)==x236));

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x238 = 11;
	uint64_t x240 = 3493031LLU;
	int32_t t59 = INT32_MIN;

	t59 = (x237|((x238==x239)==x240));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x244 = -1;
	volatile int32_t t60 = 33418543;

	t60 = (x241|((x242==x243)==x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 109;
	int16_t x246 = INT16_MAX;
	int64_t x247 = INT64_MAX;
	uint8_t x248 = 8U;
	static int32_t t61 = 1015366447;

	t61 = (x245|((x246==x247)==x248));

	if (t61 != 109) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 248331301;

	t62 = (x249|((x250==x251)==x252));

	if (t62 != 111) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static uint16_t x255 = UINT16_MAX;
	int32_t t63 = INT32_MIN;

	t63 = (x253|((x254==x255)==x256));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int8_t x258 = -5;
	int8_t x259 = 23;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = 496769;

	t64 = (x257|((x258==x259)==x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x262 = INT16_MIN;
	static volatile int64_t x263 = INT64_MIN;
	int64_t x264 = 3689237913362LL;

	t65 = (x261|((x262==x263)==x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MAX;
	int16_t x267 = 10658;
	static uint16_t x268 = UINT16_MAX;
	static int32_t t66 = 23192720;

	t66 = (x265|((x266==x267)==x268));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 227722;
	volatile uint8_t x270 = 44U;
	uint32_t x271 = 7U;
	static volatile int32_t t67 = 27122;

	t67 = (x269|((x270==x271)==x272));

	if (t67 != 227722) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = INT64_MAX;
	int32_t x274 = 201;
	static uint64_t x275 = 177708LLU;
	int8_t x276 = 14;

	t68 = (x273|((x274==x275)==x276));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int32_t x278 = -1;
	int64_t x279 = 970890LL;
	int16_t x280 = INT16_MAX;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x277|((x278==x279)==x280));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x281 = INT16_MAX;
	uint16_t x282 = UINT16_MAX;
	uint32_t x283 = UINT32_MAX;
	static int16_t x284 = 0;
	int32_t t70 = 2;

	t70 = (x281|((x282==x283)==x284));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = 527;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = -1;

	t71 = (x285|((x286==x287)==x288));

	if (t71 != 527) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 123U;
	uint64_t x290 = 3165606LLU;
	static uint8_t x291 = 6U;
	int16_t x292 = -1;
	int32_t t72 = -2;

	t72 = (x289|((x290==x291)==x292));

	if (t72 != 123) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 1LLU;
	static int16_t x296 = -127;

	t73 = (x293|((x294==x295)==x296));

	if (t73 != 38U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = 1929447U;
	volatile int16_t x298 = INT16_MAX;
	volatile int64_t x300 = INT64_MIN;
	uint32_t t74 = 2978412U;

	t74 = (x297|((x298==x299)==x300));

	if (t74 != 1929447U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = (x301|((x302==x303)==x304));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -28114545LL;
	volatile uint64_t x307 = 1570LLU;
	static volatile int64_t t76 = -1008251757270LL;

	t76 = (x305|((x306==x307)==x308));

	if (t76 != -28114545LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	static int64_t x310 = INT64_MIN;
	static int16_t x311 = 396;
	volatile int8_t x312 = 5;
	int32_t t77 = -2007;

	t77 = (x309|((x310==x311)==x312));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -296899961;
	static int32_t t78 = -20;

	t78 = (x313|((x314==x315)==x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	static int32_t x318 = INT32_MIN;
	int32_t x319 = -1;
	static uint16_t x320 = 12U;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x317|((x318==x319)==x320));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	uint64_t x322 = UINT64_MAX;
	static uint64_t x323 = 767922039524LLU;
	int32_t x324 = INT32_MIN;
	static int32_t t80 = -34270038;

	t80 = (x321|((x322==x323)==x324));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1;
	uint64_t x326 = 19392937LLU;
	int32_t x327 = INT32_MIN;
	uint16_t x328 = 8713U;

	t81 = (x325|((x326==x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	uint16_t x331 = 546U;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -513918553;

	t82 = (x329|((x330==x331)==x332));

	if (t82 != -4142) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = 6;
	volatile uint8_t x335 = 2U;
	static int16_t x336 = -1;
	volatile int32_t t83 = 13295;

	t83 = (x333|((x334==x335)==x336));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 5209LL;
	static int8_t x338 = -58;
	int32_t x339 = INT32_MIN;
	int64_t t84 = -6684115542958LL;

	t84 = (x337|((x338==x339)==x340));

	if (t84 != 5209LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = 66;
	int32_t x342 = INT32_MIN;
	volatile int16_t x344 = -172;

	t85 = (x341|((x342==x343)==x344));

	if (t85 != 66) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile uint16_t x347 = 4U;
	int32_t t86 = -13636729;

	t86 = (x345|((x346==x347)==x348));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	static uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -93394;

	t87 = (x349|((x350==x351)==x352));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 440U;
	uint16_t x354 = 87U;
	static uint8_t x355 = UINT8_MAX;
	static int16_t x356 = -124;
	static volatile int32_t t88 = 689;

	t88 = (x353|((x354==x355)==x356));

	if (t88 != 440) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = 134;
	uint64_t x359 = 7363555233LLU;
	static uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = -14401;

	t89 = (x357|((x358==x359)==x360));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = UINT8_MAX;
	static int32_t x363 = INT32_MIN;
	int32_t t90 = 2315921;

	t90 = (x361|((x362==x363)==x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	static volatile uint8_t x367 = UINT8_MAX;
	int8_t x368 = -3;
	int32_t t91 = 848266;

	t91 = (x365|((x366==x367)==x368));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -8;
	uint16_t x370 = 2U;
	int32_t x372 = 1208584;
	volatile int32_t t92 = -495;

	t92 = (x369|((x370==x371)==x372));

	if (t92 != -8) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1851LL;
	uint8_t x374 = 1U;
	int32_t x375 = -5006664;
	int8_t x376 = 18;
	int64_t t93 = 15972LL;

	t93 = (x373|((x374==x375)==x376));

	if (t93 != -1851LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -1LL;
	int64_t x378 = 59LL;
	static int16_t x379 = -413;
	int64_t x380 = 1LL;

	t94 = (x377|((x378==x379)==x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x382 = 14286645488951LL;
	uint8_t x383 = 110U;
	uint16_t x384 = 5U;
	int32_t t95 = 47157;

	t95 = (x381|((x382==x383)==x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x386 = INT16_MIN;
	static int64_t x387 = -1LL;

	t96 = (x385|((x386==x387)==x388));

	if (t96 != 92) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 18;
	int16_t x391 = INT16_MIN;
	static uint64_t x392 = 54531199051682LLU;
	volatile int32_t t97 = 235;

	t97 = (x389|((x390==x391)==x392));

	if (t97 != 18) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = UINT8_MAX;
	int64_t x395 = -42055035637LL;
	volatile int32_t x396 = INT32_MIN;
	static volatile int32_t t98 = 1;

	t98 = (x393|((x394==x395)==x396));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MIN;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MAX;

	t99 = (x397|((x398==x399)==x400));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

