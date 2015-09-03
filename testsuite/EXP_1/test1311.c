#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
volatile int16_t x12 = -1;
int64_t x13 = INT64_MIN;
int64_t x14 = INT64_MIN;
uint64_t x16 = UINT64_MAX;
static uint64_t x23 = 373964603LLU;
uint16_t x24 = 2493U;
int64_t x29 = INT64_MIN;
int64_t x38 = INT64_MAX;
static volatile int64_t t10 = 2LL;
uint32_t x49 = 2174943U;
volatile int16_t x56 = INT16_MIN;
volatile int32_t t14 = 15941;
static int8_t x67 = -43;
static volatile uint32_t x71 = UINT32_MAX;
int32_t x75 = 11;
volatile int64_t x76 = INT64_MIN;
static volatile int64_t t20 = -3908277994313346630LL;
static uint64_t x89 = 738822474LLU;
uint32_t x104 = UINT32_MAX;
volatile uint32_t t25 = 7551U;
int8_t x109 = INT8_MIN;
static uint16_t x111 = UINT16_MAX;
uint8_t x113 = UINT8_MAX;
uint16_t x114 = UINT16_MAX;
volatile int8_t x120 = INT8_MIN;
int16_t x126 = INT16_MIN;
static int32_t x127 = -1;
static volatile uint32_t x128 = 51U;
int16_t x134 = -1;
int64_t x135 = 757LL;
uint16_t x136 = UINT16_MAX;
int32_t t34 = -210234289;
uint32_t x141 = UINT32_MAX;
volatile uint8_t x142 = UINT8_MAX;
static uint8_t x147 = UINT8_MAX;
volatile int32_t t36 = -970707;
uint8_t x150 = UINT8_MAX;
volatile int32_t x152 = -249;
uint64_t x154 = UINT64_MAX;
static int64_t x155 = 2121544089932000LL;
int32_t x156 = INT32_MIN;
uint16_t x158 = 6537U;
uint16_t x167 = 23U;
static uint32_t x175 = 3U;
volatile uint32_t x176 = 16U;
volatile int32_t t44 = -575358359;
int64_t x183 = -1LL;
volatile int16_t x184 = INT16_MIN;
int32_t t46 = 83066516;
volatile int32_t x190 = INT32_MIN;
int64_t x200 = -9313656084LL;
uint8_t x209 = 1U;
static int32_t t52 = 626;
uint32_t x215 = 2338954U;
volatile int32_t t54 = -182862347;
int8_t x221 = -1;
uint16_t x223 = 12U;
static volatile uint32_t x225 = UINT32_MAX;
int16_t x227 = INT16_MAX;
volatile uint16_t x232 = 944U;
volatile int32_t t57 = -34;
volatile int64_t t58 = -315925679LL;
int64_t x237 = -28113510LL;
uint8_t x238 = UINT8_MAX;
int32_t t60 = -532;
int16_t x247 = -1;
int16_t x248 = -7375;
static int64_t x251 = INT64_MAX;
static int64_t t62 = -24194LL;
volatile int32_t x255 = INT32_MIN;
static int32_t x256 = -1;
int8_t x261 = INT8_MIN;
static uint8_t x264 = 6U;
int8_t x275 = 9;
uint64_t x277 = UINT64_MAX;
static int32_t x283 = INT32_MIN;
int8_t x284 = 22;
int32_t t70 = 291813;
static uint64_t x288 = 1350930784591095126LLU;
volatile int32_t t73 = -30;
uint64_t x300 = UINT64_MAX;
uint32_t t75 = 8U;
int64_t x307 = -1092826LL;
volatile int64_t x311 = INT64_MIN;
int32_t x314 = 28;
static int8_t x315 = -1;
int16_t x318 = -563;
static int64_t x321 = -1LL;
int64_t x324 = INT64_MIN;
volatile int16_t x335 = INT16_MIN;
int64_t x336 = -3LL;
int32_t x338 = 93;
static volatile uint64_t x348 = 6LLU;
int32_t x353 = INT32_MIN;
volatile int16_t x355 = -1;
volatile int64_t x358 = INT64_MIN;
volatile int16_t x361 = INT16_MIN;
int16_t x365 = INT16_MIN;
int64_t x372 = -1LL;
volatile int8_t x378 = INT8_MIN;
uint32_t x379 = UINT32_MAX;
int64_t x389 = 3021349803580092LL;
uint32_t x391 = 1U;
uint8_t x395 = 49U;
int32_t t98 = 214;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	volatile int32_t x2 = INT32_MIN;
	uint16_t x3 = 18317U;
	int32_t t0 = -66914056;

	t0 = (((x1==x2)<=x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	volatile int32_t x6 = -1;
	int16_t x7 = INT16_MIN;
	static int32_t x8 = INT32_MAX;
	int32_t t1 = -169;

	t1 = (((x5==x6)<=x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 0;
	int32_t x10 = -115557918;
	static volatile int16_t x11 = INT16_MIN;
	int32_t t2 = -4592;

	t2 = (((x9==x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = -12919;
	volatile uint64_t t3 = 6259528562943LLU;

	t3 = (((x13==x14)<=x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -1;
	volatile int32_t t4 = 412555811;

	t4 = (((x17==x18)<=x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = UINT64_MAX;
	static volatile int32_t t5 = -240451;

	t5 = (((x21==x22)<=x23)&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	static uint16_t x26 = UINT16_MAX;
	volatile uint32_t x27 = 901669U;
	uint64_t x28 = 128451108194LLU;
	volatile uint64_t t6 = 11164750120LLU;

	t6 = (((x25==x26)<=x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint32_t x31 = 34935U;
	static uint8_t x32 = 3U;
	int32_t t7 = -934430373;

	t7 = (((x29==x30)<=x31)&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int32_t x34 = INT32_MIN;
	int64_t x35 = -1LL;
	int64_t x36 = 11LL;
	static int64_t t8 = 562746710958LL;

	t8 = (((x33==x34)<=x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -2;
	int16_t x39 = INT16_MAX;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = 1U;

	t9 = (((x37==x38)<=x39)&x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = 1;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;

	t10 = (((x41==x42)<=x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -91197065;
	uint16_t x46 = 45U;
	volatile int8_t x47 = 2;
	uint8_t x48 = 0U;
	volatile int32_t t11 = 69;

	t11 = (((x45==x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 7LLU;
	volatile uint64_t x51 = 244850293042LLU;
	int64_t x52 = 983214951436LL;
	volatile int64_t t12 = -6749210LL;

	t12 = (((x49==x50)<=x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MIN;
	static uint16_t x54 = UINT16_MAX;
	volatile int16_t x55 = -1;
	static volatile int32_t t13 = 28072;

	t13 = (((x53==x54)<=x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -59428093;

	t14 = (((x57==x58)<=x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = -1;
	int8_t x63 = INT8_MAX;
	static uint16_t x64 = UINT16_MAX;
	static volatile int32_t t15 = 355518210;

	t15 = (((x61==x62)<=x63)&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int32_t x66 = -2272;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = -92131954;

	t16 = (((x65==x66)<=x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 283886161020745088LLU;
	int8_t x70 = -1;
	uint64_t x72 = UINT64_MAX;
	static uint64_t t17 = 68LLU;

	t17 = (((x69==x70)<=x71)&x72);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	volatile int64_t t18 = 423061572LL;

	t18 = (((x73==x74)<=x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = -145256570;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 14896828LLU;

	t19 = (((x77==x78)<=x79)&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	int8_t x82 = -1;
	volatile int8_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;

	t20 = (((x81==x82)<=x83)&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = -33030009070LL;
	int8_t x87 = -1;
	static uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 8863742029925712LLU;

	t21 = (((x85==x86)<=x87)&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x90 = 29U;
	uint8_t x91 = 2U;
	int64_t x92 = -1LL;
	static volatile int64_t t22 = 194877847946048356LL;

	t22 = (((x89==x90)<=x91)&x92);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	static int64_t x94 = INT64_MAX;
	static uint32_t x95 = UINT32_MAX;
	int64_t x96 = -234516231568556LL;
	volatile int64_t t23 = 23128LL;

	t23 = (((x93==x94)<=x95)&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = 1717;
	int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MAX;
	int32_t t24 = -230355;

	t24 = (((x97==x98)<=x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = INT32_MIN;
	volatile int64_t x102 = INT64_MIN;
	int16_t x103 = -23;

	t25 = (((x101==x102)<=x103)&x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	uint8_t x106 = 14U;
	static int32_t x107 = INT32_MIN;
	uint64_t x108 = 266921603117282249LLU;
	volatile uint64_t t26 = 189LLU;

	t26 = (((x105==x106)<=x107)&x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = 1;
	int64_t x112 = 42229099178LL;
	int64_t t27 = 2026301LL;

	t27 = (((x109==x110)<=x111)&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x115 = INT32_MAX;
	static int16_t x116 = -29;
	int32_t t28 = -25;

	t28 = (((x113==x114)<=x115)&x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	volatile uint8_t x118 = UINT8_MAX;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t29 = -698;

	t29 = (((x117==x118)<=x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 11U;
	int32_t x122 = 235758;
	int32_t x123 = INT32_MIN;
	int64_t x124 = -1LL;
	static volatile int64_t t30 = 10913372932LL;

	t30 = (((x121==x122)<=x123)&x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static volatile uint32_t t31 = 304724864U;

	t31 = (((x125==x126)<=x127)&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = 5143;
	static int8_t x131 = 24;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = -993;

	t32 = (((x129==x130)<=x131)&x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 92773LLU;
	static volatile int32_t t33 = -106;

	t33 = (((x133==x134)<=x135)&x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	static int8_t x138 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	volatile int16_t x140 = INT16_MIN;

	t34 = (((x137==x138)<=x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = -1;
	int32_t t35 = -2356759;

	t35 = (((x141==x142)<=x143)&x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = 19;
	static uint64_t x146 = 463611697762312656LLU;
	int16_t x148 = 3;

	t36 = (((x145==x146)<=x147)&x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x151 = -1LL;
	volatile int32_t t37 = -658413067;

	t37 = (((x149==x150)<=x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 108869U;
	volatile int32_t t38 = 10187;

	t38 = (((x153==x154)<=x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	int16_t x159 = -1;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -2060323;

	t39 = (((x157==x158)<=x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint64_t x162 = 2562136919833681LLU;
	volatile int8_t x163 = 4;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 4488;

	t40 = (((x161==x162)<=x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 3130U;
	volatile uint8_t x168 = 1U;
	static int32_t t41 = 1;

	t41 = (((x165==x166)<=x167)&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 6014U;
	int64_t x170 = -16210929305914357LL;
	int32_t x171 = -1;
	int32_t x172 = -1;
	int32_t t42 = -2;

	t42 = (((x169==x170)<=x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 171281;
	uint64_t x174 = 433719699943LLU;
	static uint32_t t43 = 12199196U;

	t43 = (((x173==x174)<=x175)&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 194U;
	static volatile int32_t x178 = INT32_MAX;
	uint64_t x179 = UINT64_MAX;
	uint16_t x180 = 990U;

	t44 = (((x177==x178)<=x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 157628613LLU;
	int64_t x182 = INT64_MIN;
	volatile int32_t t45 = 79;

	t45 = (((x181==x182)<=x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 236LLU;
	int16_t x186 = 1;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;

	t46 = (((x185==x186)<=x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 1861307691LLU;
	static int16_t x191 = -1;
	uint64_t x192 = UINT64_MAX;
	uint64_t t47 = 189433077LLU;

	t47 = (((x189==x190)<=x191)&x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = -1;
	volatile int64_t x194 = -1LL;
	uint64_t x195 = 999LLU;
	uint32_t x196 = 10U;
	uint32_t t48 = 2069599U;

	t48 = (((x193==x194)<=x195)&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	uint16_t x198 = 330U;
	volatile int32_t x199 = INT32_MIN;
	volatile int64_t t49 = -15724371484511LL;

	t49 = (((x197==x198)<=x199)&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	static int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	static volatile int64_t x204 = INT64_MIN;
	int64_t t50 = -4743677535763LL;

	t50 = (((x201==x202)<=x203)&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -101103923596LL;
	static volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MAX;
	int8_t x208 = 1;
	int32_t t51 = -16;

	t51 = (((x205==x206)<=x207)&x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 442237LLU;
	static uint32_t x211 = 262713U;
	uint8_t x212 = UINT8_MAX;

	t52 = (((x209==x210)<=x211)&x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 17U;
	static uint16_t x214 = UINT16_MAX;
	volatile int16_t x216 = 5;
	int32_t t53 = -53;

	t53 = (((x213==x214)<=x215)&x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 3690U;
	uint8_t x218 = 25U;
	int8_t x219 = INT8_MIN;
	static int16_t x220 = -1;

	t54 = (((x217==x218)<=x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = 35U;
	int8_t x224 = 1;
	volatile int32_t t55 = 8179983;

	t55 = (((x221==x222)<=x223)&x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 4591U;
	uint64_t x228 = 5784767050425409209LLU;
	uint64_t t56 = 554025LLU;

	t56 = (((x225==x226)<=x227)&x228);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = 418;
	volatile int8_t x230 = INT8_MIN;
	volatile int32_t x231 = INT32_MIN;

	t57 = (((x229==x230)<=x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 1U;
	static uint32_t x234 = 693U;
	uint16_t x235 = 18374U;
	int64_t x236 = -1LL;

	t58 = (((x233==x234)<=x235)&x236);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x239 = INT32_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = 0;

	t59 = (((x237==x238)<=x239)&x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	int16_t x242 = -953;
	volatile uint32_t x243 = UINT32_MAX;
	int32_t x244 = -1;

	t60 = (((x241==x242)<=x243)&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int32_t x246 = 27;
	int32_t t61 = -7535;

	t61 = (((x245==x246)<=x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 3531234975055LLU;
	static int16_t x250 = -2368;
	static int64_t x252 = INT64_MIN;

	t62 = (((x249==x250)<=x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	static volatile uint16_t x254 = 3U;
	int32_t t63 = -158618783;

	t63 = (((x253==x254)<=x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = 55;
	int8_t x259 = INT8_MAX;
	volatile int32_t x260 = INT32_MIN;
	static int32_t t64 = 1;

	t64 = (((x257==x258)<=x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MAX;
	static uint32_t x263 = 971U;
	int32_t t65 = 306158;

	t65 = (((x261==x262)<=x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = -1;
	static uint8_t x267 = UINT8_MAX;
	uint32_t x268 = 14U;
	volatile uint32_t t66 = 369U;

	t66 = (((x265==x266)<=x267)&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	uint64_t x270 = 5815LLU;
	uint32_t x271 = UINT32_MAX;
	volatile int32_t x272 = 12;
	volatile int32_t t67 = -1297;

	t67 = (((x269==x270)<=x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 209U;
	static uint8_t x274 = 66U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 125;

	t68 = (((x273==x274)<=x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 3515U;
	uint64_t x279 = 1890502483LLU;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -60426103;

	t69 = (((x277==x278)<=x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x282 = INT64_MAX;

	t70 = (((x281==x282)<=x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int32_t x286 = INT32_MAX;
	uint64_t x287 = 1685999214LLU;
	volatile uint64_t t71 = 133569LLU;

	t71 = (((x285==x286)<=x287)&x288);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = 11;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = 1944;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = 241719762;

	t72 = (((x289==x290)<=x291)&x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	uint64_t x294 = 448156699503LLU;
	uint8_t x295 = 44U;
	int16_t x296 = INT16_MAX;

	t73 = (((x293==x294)<=x295)&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x298 = 3478LLU;
	static int16_t x299 = 2;
	volatile uint64_t t74 = 22LLU;

	t74 = (((x297==x298)<=x299)&x300);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1;
	uint16_t x302 = 0U;
	uint64_t x303 = UINT64_MAX;
	static uint32_t x304 = 212803404U;

	t75 = (((x301==x302)<=x303)&x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	static int32_t x306 = INT32_MIN;
	uint8_t x308 = 7U;
	volatile int32_t t76 = 1157831;

	t76 = (((x305==x306)<=x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x310 = 219;
	int8_t x312 = -4;
	volatile int32_t t77 = -4682140;

	t77 = (((x309==x310)<=x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	volatile int64_t x316 = 3LL;
	static volatile int64_t t78 = 706861065LL;

	t78 = (((x313==x314)<=x315)&x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x317 = INT16_MIN;
	int16_t x319 = -1;
	volatile uint8_t x320 = UINT8_MAX;
	static int32_t t79 = -7579635;

	t79 = (((x317==x318)<=x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = 4;
	static volatile int64_t x323 = INT64_MIN;
	int64_t t80 = -7201062066575LL;

	t80 = (((x321==x322)<=x323)&x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 582440207LL;
	int32_t x326 = 1570;
	volatile int8_t x327 = INT8_MIN;
	int32_t x328 = 363378912;
	int32_t t81 = -84;

	t81 = (((x325==x326)<=x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MAX;
	int16_t x331 = -1;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -16;

	t82 = (((x329==x330)<=x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 84U;
	int64_t x334 = -1LL;
	int64_t t83 = -26LL;

	t83 = (((x333==x334)<=x335)&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	volatile int8_t x339 = -1;
	uint32_t x340 = 141U;
	volatile uint32_t t84 = 14085877U;

	t84 = (((x337==x338)<=x339)&x340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = 1;
	static int8_t x342 = 10;
	int32_t x343 = INT32_MAX;
	static int64_t x344 = -2190213106LL;
	volatile int64_t t85 = -945011918LL;

	t85 = (((x341==x342)<=x343)&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	static int16_t x346 = -101;
	static volatile int8_t x347 = INT8_MAX;
	static volatile uint64_t t86 = 207230792LLU;

	t86 = (((x345==x346)<=x347)&x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	volatile int32_t x352 = INT32_MAX;
	static int32_t t87 = -32;

	t87 = (((x349==x350)<=x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x354 = -355020LL;
	static uint8_t x356 = 35U;
	volatile int32_t t88 = 958;

	t88 = (((x353==x354)<=x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 36998LLU;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 818737678176345435LLU;
	volatile uint64_t t89 = 61773067996845LLU;

	t89 = (((x357==x358)<=x359)&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = INT64_MAX;
	volatile uint8_t x364 = 14U;
	static int32_t t90 = 907265;

	t90 = (((x361==x362)<=x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	volatile uint64_t x367 = 91791LLU;
	volatile int32_t x368 = -1766;
	volatile int32_t t91 = 748;

	t91 = (((x365==x366)<=x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x369 = INT64_MAX;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = -9801444;
	static volatile int64_t t92 = 63LL;

	t92 = (((x369==x370)<=x371)&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = 623440645LLU;
	volatile uint64_t x375 = 31837667LLU;
	int64_t x376 = INT64_MIN;
	volatile int64_t t93 = 121697569635233144LL;

	t93 = (((x373==x374)<=x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	static volatile int32_t x380 = INT32_MIN;
	int32_t t94 = 0;

	t94 = (((x377==x378)<=x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -4;
	static int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = UINT64_MAX;
	int64_t x384 = -80843LL;
	int64_t t95 = 7135LL;

	t95 = (((x381==x382)<=x383)&x384);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	static uint32_t x386 = 12317U;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t96 = -21;

	t96 = (((x385==x386)<=x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x390 = UINT8_MAX;
	static int64_t x392 = -1LL;
	volatile int64_t t97 = -2091858722719LL;

	t97 = (((x389==x390)<=x391)&x392);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	int8_t x396 = INT8_MIN;

	t98 = (((x393==x394)<=x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	volatile int16_t x398 = INT16_MAX;
	uint64_t x399 = 7888LLU;
	volatile int8_t x400 = -2;
	volatile int32_t t99 = 34244862;

	t99 = (((x397==x398)<=x399)&x400);

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

