#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int64_t t0 = INT64_MIN;
uint8_t x16 = UINT8_MAX;
int64_t x21 = -1LL;
uint64_t x27 = 2333839262540879205LLU;
uint8_t x29 = 0U;
volatile int16_t x32 = -1;
uint32_t x40 = 1299101455U;
volatile int64_t t10 = -27807554222979LL;
int64_t x50 = -14LL;
uint8_t x53 = 3U;
volatile uint64_t t13 = 11820459416425LLU;
volatile uint16_t x61 = 5U;
int8_t x63 = 63;
int32_t x74 = INT32_MIN;
uint64_t x83 = UINT64_MAX;
volatile uint64_t x89 = 43481LLU;
int32_t x97 = INT32_MIN;
static int16_t x106 = -1;
uint16_t x107 = 1U;
uint8_t x121 = UINT8_MAX;
volatile uint16_t x123 = UINT16_MAX;
int8_t x130 = -1;
int16_t x139 = 388;
uint16_t x140 = UINT16_MAX;
uint64_t t32 = UINT64_MAX;
volatile uint16_t x154 = UINT16_MAX;
int64_t x155 = INT64_MAX;
static volatile int16_t x161 = INT16_MIN;
volatile int64_t t39 = 4857091822LL;
volatile int32_t t40 = -1;
int64_t x176 = -1LL;
static volatile int64_t t41 = -3746841330201142407LL;
static int8_t x177 = -1;
static uint16_t x179 = UINT16_MAX;
uint32_t x184 = UINT32_MAX;
uint32_t t43 = 15627801U;
volatile int64_t t44 = -70328024169LL;
int16_t x189 = INT16_MIN;
int8_t x195 = -1;
volatile int8_t x197 = INT8_MAX;
int64_t t47 = 111308071887693575LL;
uint64_t t48 = 943972676LLU;
int8_t x205 = INT8_MAX;
uint8_t x212 = 115U;
static volatile uint64_t t54 = 466512752190LLU;
volatile uint64_t t55 = 23184752170567LLU;
volatile uint16_t x241 = UINT16_MAX;
int32_t x243 = INT32_MAX;
uint64_t x248 = 5LLU;
int32_t x250 = INT32_MIN;
static int32_t x251 = INT32_MIN;
static volatile uint32_t x253 = 1826161768U;
volatile uint64_t x255 = 1615292620343LLU;
int16_t x265 = -1;
int32_t x284 = -16;
int32_t x286 = 226822;
int64_t t66 = 17LL;
int64_t x294 = INT64_MIN;
static int64_t x312 = INT64_MAX;
static int64_t x315 = -246856528312LL;
uint8_t x320 = UINT8_MAX;
int16_t x322 = INT16_MIN;
int32_t t74 = 2;
int64_t x328 = INT64_MIN;
uint64_t t75 = 7537573048802156198LLU;
int32_t x334 = -1;
volatile int32_t t77 = INT32_MIN;
uint32_t x343 = 214U;
uint8_t x350 = 11U;
static int8_t x352 = -1;
int64_t x353 = 4179LL;
static uint32_t x357 = UINT32_MAX;
int64_t x360 = INT64_MIN;
uint32_t x366 = 23410U;
uint8_t x374 = 90U;
static uint8_t x376 = 1U;
volatile int16_t x386 = -1;
volatile int32_t t90 = 740717;
uint64_t x399 = 261508188267522LLU;
int16_t x415 = INT16_MIN;
static uint32_t t96 = UINT32_MAX;
volatile int32_t t97 = -5762894;
int32_t t98 = -2944619;


void f0(void) {
	volatile int64_t x2 = INT64_MIN;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = -1537726LL;

	t0 = (x1+((x2%x3)/x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static uint16_t x6 = 42U;
	uint8_t x7 = 5U;
	volatile uint64_t x8 = UINT64_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = (x5+((x6%x7)/x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -75976521;
	int16_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = -1LL;
	int64_t t2 = -4725512355830LL;

	t2 = (x9+((x10%x11)/x12));

	if (t2 != -75976520LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -2269439063509LL;
	int32_t x14 = 4245720;
	static uint8_t x15 = UINT8_MAX;
	volatile int64_t t3 = 67785528029LL;

	t3 = (x13+((x14%x15)/x16));

	if (t3 != -2269439063509LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 0LLU;
	static uint64_t x19 = 404366641LLU;
	uint32_t x20 = 64439U;
	static volatile uint64_t t4 = 94712300452973LLU;

	t4 = (x17+((x18%x19)/x20));

	if (t4 != 4294967295LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = -1;
	static volatile int64_t x23 = INT64_MAX;
	int32_t x24 = -1;
	static volatile int64_t t5 = 20LL;

	t5 = (x21+((x22%x23)/x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static int8_t x26 = -1;
	uint8_t x28 = UINT8_MAX;
	volatile uint64_t t6 = 4537175040LLU;

	t6 = (x25+((x26%x27)/x28));

	if (t6 != 9231646033858396973LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = 2U;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = 49001334;

	t7 = (x29+((x30%x31)/x32));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	volatile int8_t x38 = INT8_MIN;
	uint8_t x39 = 3U;
	volatile uint32_t t8 = 11957U;

	t8 = (x37+((x38%x39)/x40));

	if (t8 != 65538U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static int32_t x42 = -3698893;
	volatile uint64_t x43 = 135954LLU;
	volatile int64_t x44 = 1866LL;
	volatile uint64_t t9 = 99281287700519072LLU;

	t9 = (x41+((x42%x43)/x44));

	if (t9 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 17U;
	int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MAX;
	uint8_t x48 = 3U;

	t10 = (x45+((x46%x47)/x48));

	if (t10 != 17LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = -1;
	int32_t x51 = -1;
	volatile int8_t x52 = INT8_MAX;
	static int64_t t11 = 103065912567206LL;

	t11 = (x49+((x50%x51)/x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = -1LL;
	static uint32_t x55 = 430936384U;
	uint8_t x56 = UINT8_MAX;
	int64_t t12 = 1003864497366720LL;

	t12 = (x53+((x54%x55)/x56));

	if (t12 != 3LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 6382935762641978LLU;
	static uint16_t x58 = 6U;
	volatile int8_t x59 = 26;
	volatile int32_t x60 = INT32_MIN;

	t13 = (x57+((x58%x59)/x60));

	if (t13 != 6382935762641978LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -10;
	int64_t x64 = INT64_MIN;
	int64_t t14 = 1LL;

	t14 = (x61+((x62%x63)/x64));

	if (t14 != 5LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = 11;
	int16_t x66 = -97;
	int32_t x67 = INT32_MAX;
	int16_t x68 = -40;
	volatile int32_t t15 = 660763842;

	t15 = (x65+((x66%x67)/x68));

	if (t15 != 13) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 305U;
	volatile int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = 2837;
	volatile int32_t t16 = -84286;

	t16 = (x69+((x70%x71)/x72));

	if (t16 != 305) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	static int64_t x75 = -1LL;
	volatile int32_t x76 = INT32_MAX;
	int64_t t17 = -18644081471589LL;

	t17 = (x73+((x74%x75)/x76));

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = INT32_MIN;
	uint16_t x78 = 68U;
	uint8_t x79 = 2U;
	static volatile uint64_t x80 = 1142314116867242LLU;
	uint64_t t18 = 94913LLU;

	t18 = (x77+((x78%x79)/x80));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	uint64_t x82 = 27685390335381LLU;
	int32_t x84 = 82093446;
	volatile uint64_t t19 = 57202300LLU;

	t19 = (x81+((x82%x83)/x84));

	if (t19 != 337241LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x90 = INT16_MAX;
	static volatile int64_t x91 = INT64_MIN;
	uint16_t x92 = 145U;
	volatile uint64_t t20 = 4743LLU;

	t20 = (x89+((x90%x91)/x92));

	if (t20 != 43706LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -380;
	static volatile int32_t x94 = -18917923;
	volatile uint16_t x95 = 1U;
	static uint8_t x96 = 1U;
	volatile int32_t t21 = 440327;

	t21 = (x93+((x94%x95)/x96));

	if (t21 != -380) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = -2365211772LL;
	int32_t x99 = INT32_MAX;
	volatile int16_t x100 = -1;
	volatile int64_t t22 = -15210334LL;

	t22 = (x97+((x98%x99)/x100));

	if (t22 != -1929755523LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 7296258U;
	volatile uint64_t t23 = 712429939226086221LLU;

	t23 = (x101+((x102%x103)/x104));

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MIN;
	uint8_t x108 = 3U;
	volatile int32_t t24 = 127;

	t24 = (x105+((x106%x107)/x108));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 1U;
	int32_t x110 = -587778739;
	static uint16_t x111 = 2371U;
	uint16_t x112 = 4535U;
	volatile int32_t t25 = -736;

	t25 = (x109+((x110%x111)/x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MIN;
	uint32_t x114 = UINT32_MAX;
	static uint16_t x115 = UINT16_MAX;
	uint32_t x116 = 493771419U;
	int64_t t26 = INT64_MIN;

	t26 = (x113+((x114%x115)/x116));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 937665713543LLU;
	int32_t x118 = INT32_MIN;
	static int16_t x119 = INT16_MIN;
	uint32_t x120 = 159138562U;
	volatile uint64_t t27 = 3196021187476640LLU;

	t27 = (x117+((x118%x119)/x120));

	if (t27 != 937665713543LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = -1;
	uint64_t x124 = 83274470779543LLU;
	static volatile uint64_t t28 = 143874773102469LLU;

	t28 = (x121+((x122%x123)/x124));

	if (t28 != 221772LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	uint16_t x126 = 3447U;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = 2574;
	volatile int32_t t29 = -6;

	t29 = (x125+((x126%x127)/x128));

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = -1;
	static uint32_t x131 = 263161U;
	uint16_t x132 = UINT16_MAX;
	uint32_t t30 = 9473U;

	t30 = (x129+((x130%x131)/x132));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 655265221180816LLU;
	int32_t x134 = 107062;
	static volatile int16_t x135 = 2;
	volatile int32_t x136 = INT32_MIN;
	uint64_t t31 = 196550435963788144LLU;

	t31 = (x133+((x134%x135)/x136));

	if (t31 != 655265221180816LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static int32_t x138 = -1;

	t32 = (x137+((x138%x139)/x140));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -6;
	static volatile int64_t x142 = 3950964462329874565LL;
	static volatile int64_t x143 = -8LL;
	uint8_t x144 = 67U;
	int64_t t33 = -14LL;

	t33 = (x141+((x142%x143)/x144));

	if (t33 != -6LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 25003U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	volatile int64_t t34 = 0LL;

	t34 = (x145+((x146%x147)/x148));

	if (t34 != 25259LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 1063U;
	int8_t x150 = -1;
	int16_t x151 = 255;
	int16_t x152 = 259;
	volatile int32_t t35 = -393;

	t35 = (x149+((x150%x151)/x152));

	if (t35 != 1063) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	int64_t x156 = -1LL;
	static int64_t t36 = 29543736LL;

	t36 = (x153+((x154%x155)/x156));

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = UINT8_MAX;
	int32_t x158 = 231095;
	volatile uint32_t x159 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	uint32_t t37 = 381U;

	t37 = (x157+((x158%x159)/x160));

	if (t37 != 1161U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = INT8_MIN;
	static int8_t x163 = -1;
	static int32_t x164 = 2576;
	static volatile int32_t t38 = -2447942;

	t38 = (x161+((x162%x163)/x164));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 130069U;
	static volatile int8_t x166 = INT8_MAX;
	volatile int32_t x167 = INT32_MAX;
	int64_t x168 = -1LL;

	t39 = (x165+((x166%x167)/x168));

	if (t39 != 129942LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = 0;
	uint8_t x171 = 55U;
	int8_t x172 = INT8_MAX;

	t40 = (x169+((x170%x171)/x172));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = INT64_MAX;
	volatile uint8_t x174 = 2U;
	static uint8_t x175 = 11U;

	t41 = (x173+((x174%x175)/x176));

	if (t41 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x178 = 1;
	int64_t x180 = 18858173LL;
	volatile int64_t t42 = -54575102109484LL;

	t42 = (x177+((x178%x179)/x180));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MAX;
	uint16_t x182 = UINT16_MAX;
	static uint16_t x183 = 5U;

	t43 = (x181+((x182%x183)/x184));

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = INT8_MAX;
	int64_t x186 = -1LL;
	int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;

	t44 = (x185+((x186%x187)/x188));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MAX;
	uint8_t x191 = 7U;
	static uint32_t x192 = 2646367U;
	uint32_t t45 = 2U;

	t45 = (x189+((x190%x191)/x192));

	if (t45 != 4294934528U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = -56;
	uint64_t x194 = UINT64_MAX;
	volatile uint32_t x196 = 388791U;
	uint64_t t46 = 31473391504819LLU;

	t46 = (x193+((x194%x195)/x196));

	if (t46 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x198 = INT64_MIN;
	volatile uint16_t x199 = 39U;
	int64_t x200 = INT64_MAX;

	t47 = (x197+((x198%x199)/x200));

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 31122113552LLU;
	int16_t x202 = INT16_MIN;
	static volatile int32_t x203 = INT32_MIN;
	uint8_t x204 = 124U;

	t48 = (x201+((x202%x203)/x204));

	if (t48 != 31122113288LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = 22486244550244845LLU;
	volatile uint32_t x208 = UINT32_MAX;
	volatile uint64_t t49 = 300073866234681727LLU;

	t49 = (x205+((x206%x207)/x208));

	if (t49 != 1868253LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x210 = 3296LLU;
	int8_t x211 = -1;
	volatile uint64_t t50 = 15933524537306657LLU;

	t50 = (x209+((x210%x211)/x212));

	if (t50 != 9223372036854775836LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 2LLU;
	volatile int16_t x214 = INT16_MIN;
	int64_t x215 = 60LL;
	int8_t x216 = INT8_MIN;
	uint64_t t51 = 591090193741633LLU;

	t51 = (x213+((x214%x215)/x216));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = 0U;
	uint8_t x219 = UINT8_MAX;
	static volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t52 = -1;

	t52 = (x217+((x218%x219)/x220));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = -30;
	int8_t x228 = -1;
	int32_t t53 = -145049;

	t53 = (x225+((x226%x227)/x228));

	if (t53 != -16) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = INT16_MAX;
	volatile int64_t x230 = 3656LL;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = 4344005713194982474LLU;

	t54 = (x229+((x230%x231)/x232));

	if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x233 = 1U;
	uint8_t x234 = 0U;
	uint64_t x235 = UINT64_MAX;
	volatile int16_t x236 = INT16_MIN;

	t55 = (x233+((x234%x235)/x236));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x242 = -1;
	static volatile int16_t x244 = INT16_MIN;
	volatile int32_t t56 = -26117;

	t56 = (x241+((x242%x243)/x244));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x245 = INT16_MIN;
	volatile int64_t x246 = INT64_MAX;
	int64_t x247 = -6517809LL;
	volatile uint64_t t57 = 3LLU;

	t57 = (x245+((x246%x247)/x248));

	if (t57 != 898116LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -1;
	static int8_t x252 = 1;
	int32_t t58 = -13;

	t58 = (x249+((x250%x251)/x252));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x254 = 2458006U;
	int32_t x256 = -1;
	volatile uint64_t t59 = 11116964761LLU;

	t59 = (x253+((x254%x255)/x256));

	if (t59 != 1826161768LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = INT64_MIN;
	static volatile uint64_t x258 = UINT64_MAX;
	static uint16_t x259 = 26059U;
	int32_t x260 = INT32_MAX;
	volatile uint64_t t60 = 223526693785161LLU;

	t60 = (x257+((x258%x259)/x260));

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = -1;
	volatile uint16_t x262 = 3U;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t61 = 92;

	t61 = (x261+((x262%x263)/x264));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x266 = INT32_MIN;
	int8_t x267 = 50;
	uint32_t x268 = 34967236U;
	uint32_t t62 = 1U;

	t62 = (x265+((x266%x267)/x268));

	if (t62 != 121U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x269 = 3599409LLU;
	int32_t x270 = 60993;
	static uint16_t x271 = 779U;
	uint32_t x272 = 4250055U;
	uint64_t t63 = 117LLU;

	t63 = (x269+((x270%x271)/x272));

	if (t63 != 3599409LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x277 = INT8_MAX;
	static uint8_t x278 = UINT8_MAX;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = -1LL;
	uint64_t t64 = 17LLU;

	t64 = (x277+((x278%x279)/x280));

	if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 29686979LLU;
	int64_t x282 = 27671333003LL;
	uint8_t x283 = 6U;
	uint64_t t65 = 8444907122673429LLU;

	t65 = (x281+((x282%x283)/x284));

	if (t65 != 29686979LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = -28731156575515LL;
	volatile int8_t x287 = -1;
	uint16_t x288 = 9U;

	t66 = (x285+((x286%x287)/x288));

	if (t66 != -28731156575515LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x293 = -1646587;
	uint64_t x295 = 422429040LLU;
	static volatile int64_t x296 = 4471232197LL;
	volatile uint64_t t67 = 13549141043078LLU;

	t67 = (x293+((x294%x295)/x296));

	if (t67 != 18446744073707905029LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	volatile uint32_t x298 = 6944U;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = UINT32_MAX;
	int64_t t68 = INT64_MIN;

	t68 = (x297+((x298%x299)/x300));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = 2U;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	static volatile int64_t t69 = -14755517LL;

	t69 = (x301+((x302%x303)/x304));

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MAX;
	static uint64_t x307 = 143833644065406332LLU;
	volatile int64_t x308 = -1LL;
	volatile uint64_t t70 = 126110833860090LLU;

	t70 = (x305+((x306%x307)/x308));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MAX;
	int32_t x311 = 49;
	volatile int64_t t71 = -18976046LL;

	t71 = (x309+((x310%x311)/x312));

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x313 = -341923367317612351LL;
	int64_t x314 = INT64_MIN;
	static int8_t x316 = INT8_MIN;
	int64_t t72 = 5808241673872LL;

	t72 = (x313+((x314%x315)/x316));

	if (t72 != -341923365536387057LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MAX;
	uint32_t x318 = 7570U;
	int32_t x319 = 1;
	volatile uint32_t t73 = 2095306921U;

	t73 = (x317+((x318%x319)/x320));

	if (t73 != 32767U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -1;
	static int32_t x323 = -3;
	uint16_t x324 = UINT16_MAX;

	t74 = (x321+((x322%x323)/x324));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = 13109424588883774LLU;
	int8_t x326 = 12;
	int16_t x327 = -986;

	t75 = (x325+((x326%x327)/x328));

	if (t75 != 13109424588883774LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x329 = -7266937847LL;
	static int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = UINT32_MAX;
	volatile int64_t t76 = 15231148964668LL;

	t76 = (x329+((x330%x331)/x332));

	if (t76 != -7266937846LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x335 = 126U;
	uint16_t x336 = UINT16_MAX;

	t77 = (x333+((x334%x335)/x336));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -330;
	static uint64_t x338 = 4167665705LLU;
	static volatile uint64_t x339 = 7105LLU;
	int32_t x340 = -15;
	volatile uint64_t t78 = 7946079252325125LLU;

	t78 = (x337+((x338%x339)/x340));

	if (t78 != 18446744073709551286LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = INT32_MIN;
	int16_t x342 = -1;
	static int32_t x344 = -3138;
	volatile uint32_t t79 = 461596U;

	t79 = (x341+((x342%x343)/x344));

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x345 = 30U;
	static uint32_t x346 = 36466U;
	int8_t x347 = -1;
	volatile int16_t x348 = -1;
	uint32_t t80 = 1865321U;

	t80 = (x345+((x346%x347)/x348));

	if (t80 != 30U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	static volatile int8_t x351 = -2;
	volatile int32_t t81 = -250767802;

	t81 = (x349+((x350%x351)/x352));

	if (t81 != -32769) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x354 = -281;
	int16_t x355 = 86;
	static uint16_t x356 = 4U;
	int64_t t82 = -527295LL;

	t82 = (x353+((x354%x355)/x356));

	if (t82 != 4174LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x358 = INT32_MIN;
	uint16_t x359 = 1644U;
	static int64_t t83 = 2368672289838159LL;

	t83 = (x357+((x358%x359)/x360));

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = -1;
	volatile uint64_t x362 = 1471797LLU;
	int32_t x363 = INT32_MAX;
	uint8_t x364 = 1U;
	volatile uint64_t t84 = 51815LLU;

	t84 = (x361+((x362%x363)/x364));

	if (t84 != 1471796LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x365 = 7655;
	int32_t x367 = -32386;
	int64_t x368 = INT64_MIN;
	int64_t t85 = 113898214618180LL;

	t85 = (x365+((x366%x367)/x368));

	if (t85 != 7655LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = INT8_MAX;
	int16_t x375 = INT16_MIN;
	int32_t t86 = 14437;

	t86 = (x373+((x374%x375)/x376));

	if (t86 != 217) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = 37;
	uint8_t x378 = 2U;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = UINT64_MAX;
	uint64_t t87 = 13836913336306LLU;

	t87 = (x377+((x378%x379)/x380));

	if (t87 != 37LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x381 = 17;
	int8_t x382 = -1;
	volatile int8_t x383 = -49;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t88 = 284626587;

	t88 = (x381+((x382%x383)/x384));

	if (t88 != 17) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = -1LL;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = -1;
	int64_t t89 = 88057514318466475LL;

	t89 = (x385+((x386%x387)/x388));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x389 = UINT8_MAX;
	static int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	int8_t x392 = 44;

	t90 = (x389+((x390%x391)/x392));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = -64300;
	static int16_t x394 = -1;
	volatile int8_t x395 = INT8_MIN;
	static int64_t x396 = 6991852361LL;
	volatile int64_t t91 = -225345279317790205LL;

	t91 = (x393+((x394%x395)/x396));

	if (t91 != -64300LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = -1;
	int16_t x400 = INT16_MIN;
	uint64_t t92 = 171336LLU;

	t92 = (x397+((x398%x399)/x400));

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MAX;
	int8_t x402 = 0;
	int16_t x403 = 14361;
	uint16_t x404 = 2U;
	int32_t t93 = INT32_MAX;

	t93 = (x401+((x402%x403)/x404));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = -1LL;
	volatile int16_t x407 = 12;
	volatile int64_t x408 = -8056038LL;
	int64_t t94 = -7964500274155LL;

	t94 = (x405+((x406%x407)/x408));

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = -1;
	static int16_t x411 = INT16_MIN;
	uint64_t x412 = 559171LLU;
	static volatile uint64_t t95 = 2782836LLU;

	t95 = (x409+((x410%x411)/x412));

	if (t95 != 32989450553384LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = UINT32_MAX;
	int32_t x416 = 111959;

	t96 = (x413+((x414%x415)/x416));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x417 = 25U;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MAX;
	static int8_t x420 = INT8_MAX;

	t97 = (x417+((x418%x419)/x420));

	if (t97 != 25) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = -1;
	int16_t x423 = -15;
	volatile int16_t x424 = -1;

	t98 = (x421+((x422%x423)/x424));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x425 = -32;
	int16_t x426 = -1;
	int16_t x427 = -12579;
	int64_t x428 = INT64_MIN;
	int64_t t99 = -707827218687LL;

	t99 = (x425+((x426%x427)/x428));

	if (t99 != -32LL) { NG(); } else { ; }
	
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

