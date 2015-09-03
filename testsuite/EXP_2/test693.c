#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -18;
volatile int64_t x13 = -4283345645579LL;
int32_t x18 = INT32_MAX;
int32_t x21 = INT32_MAX;
int16_t x23 = INT16_MIN;
uint64_t x25 = UINT64_MAX;
volatile uint64_t x26 = 910LLU;
int8_t x30 = INT8_MIN;
uint32_t x34 = 30696870U;
int64_t t8 = 591LL;
static int64_t x38 = INT64_MAX;
static volatile int32_t x40 = 4071;
static volatile int64_t t10 = 550572557341100LL;
uint16_t x49 = UINT16_MAX;
uint8_t x50 = 89U;
int32_t x58 = INT32_MAX;
int64_t x60 = -1LL;
int64_t t13 = -6040LL;
int64_t x65 = -1LL;
static int16_t x68 = INT16_MIN;
int64_t x72 = INT64_MAX;
volatile int64_t t16 = -387093809023150780LL;
uint16_t x73 = 166U;
volatile int32_t x76 = INT32_MIN;
int64_t t20 = -7205231937965LL;
static int16_t x104 = INT16_MIN;
uint64_t t23 = 27636267075LLU;
static int16_t x110 = INT16_MIN;
int32_t x115 = INT32_MIN;
uint64_t x121 = 22548904LLU;
int64_t x124 = 3LL;
int64_t x132 = -1LL;
int64_t x139 = -1LL;
static uint32_t x140 = 149318732U;
int16_t x141 = INT16_MAX;
uint8_t x145 = 0U;
uint16_t x149 = UINT16_MAX;
volatile int64_t t34 = 10LL;
int16_t x153 = INT16_MIN;
int8_t x154 = -53;
volatile int32_t x156 = INT32_MIN;
int64_t x159 = INT64_MIN;
static volatile int16_t x160 = INT16_MAX;
uint16_t x170 = 3259U;
int8_t x171 = INT8_MAX;
int32_t x178 = INT32_MIN;
uint16_t x186 = 305U;
volatile int16_t x188 = -1;
static uint32_t t43 = 3U;
int8_t x199 = -2;
volatile int32_t x200 = -3;
static volatile uint32_t t44 = 78245U;
volatile int32_t t45 = -20;
uint32_t x205 = 272222U;
int64_t x209 = -11646912827776LL;
volatile int64_t t47 = 3427211297592072641LL;
uint8_t x213 = UINT8_MAX;
int64_t x215 = -32360151980LL;
static uint32_t x219 = UINT32_MAX;
static volatile int64_t t53 = -183782LL;
uint64_t x237 = UINT64_MAX;
int64_t x239 = INT64_MAX;
uint32_t x245 = 4386U;
int64_t t55 = -13683882LL;
int32_t x257 = 1;
uint16_t x263 = UINT16_MAX;
static volatile uint8_t x264 = UINT8_MAX;
static int64_t x266 = INT64_MAX;
int64_t x268 = INT64_MAX;
int8_t x274 = INT8_MIN;
int16_t x297 = 11461;
int64_t x299 = -17018428752453472LL;
int64_t t67 = 5624126564803LL;
uint64_t x302 = 204432941613542421LLU;
int16_t x306 = INT16_MAX;
volatile int32_t t69 = -8184673;
int16_t x312 = INT16_MIN;
int8_t x315 = INT8_MIN;
static uint8_t x318 = 81U;
static volatile int32_t t72 = -179570062;
int16_t x321 = 0;
volatile int16_t x323 = INT16_MIN;
int64_t t76 = 15017074368857890LL;
int16_t x337 = -1;
static uint32_t x342 = 58439U;
volatile uint16_t x343 = 5242U;
uint16_t x344 = 2197U;
static int64_t x352 = 539135LL;
int16_t x353 = INT16_MAX;
uint8_t x373 = UINT8_MAX;
int16_t x375 = -1;
int32_t t85 = -9923979;
int8_t x377 = INT8_MIN;
int16_t x387 = INT16_MAX;
static int16_t x390 = -14;
static int32_t x394 = INT32_MIN;
uint8_t x396 = 34U;
volatile uint8_t x407 = 78U;
static volatile int64_t x408 = -1LL;
uint8_t x417 = 29U;
uint64_t x427 = 2885LLU;
int8_t x429 = INT8_MAX;


void f0(void) {
	uint16_t x1 = 0U;
	volatile uint8_t x2 = 72U;
	volatile int16_t x3 = INT16_MIN;
	int16_t x4 = 1;

	t0 = ((x1-(x2%x3))/x4);

	if (t0 != -72) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MIN;
	int16_t x7 = -6;
	int16_t x8 = -300;
	volatile int64_t t1 = -1589481494422LL;

	t1 = ((x5-(x6%x7))/x8);

	if (t1 != 30744573456182586LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	volatile int64_t x10 = -27680049194487LL;
	int32_t x11 = INT32_MIN;
	volatile uint16_t x12 = 285U;
	volatile int64_t t2 = 103856LL;

	t2 = ((x9-(x10%x11))/x12);

	if (t2 != 3973412LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = -2639LL;
	static int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = -883LL;

	t3 = ((x13-(x14%x15))/x16);

	if (t3 != 130717335LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	volatile int64_t x19 = 125523236612962580LL;
	int8_t x20 = INT8_MIN;
	static volatile int64_t t4 = 1433697028944LL;

	t4 = ((x17-(x18%x19))/x20);

	if (t4 != 16777215LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int32_t x24 = -1;
	volatile int32_t t5 = -2814623;

	t5 = ((x21-(x22%x23))/x24);

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = INT32_MIN;
	int8_t x28 = -16;
	static uint64_t t6 = 126LLU;

	t6 = ((x25-(x26%x27))/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 23871509113LLU;
	static int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	uint64_t t7 = 3466192872752608LLU;

	t7 = ((x29-(x30%x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -276;
	int64_t x35 = INT64_MIN;
	static uint16_t x36 = 27U;

	t8 = ((x33-(x34%x35))/x36);

	if (t8 != -1136931LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	int64_t t9 = 26417631LL;

	t9 = ((x37-(x38%x39))/x40);

	if (t9 != -527507LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -1;
	int16_t x43 = -1;
	uint8_t x44 = 8U;

	t10 = ((x41-(x42%x43))/x44);

	if (t10 != -1152921504606846976LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1307432;
	static int64_t x46 = -378611364832416832LL;
	uint16_t x47 = 1083U;
	uint32_t x48 = 653796631U;
	int64_t t11 = -42918458529LL;

	t11 = ((x45-(x46%x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -126;

	t12 = ((x49-(x50%x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	int16_t x59 = INT16_MAX;

	t13 = ((x57-(x58%x59))/x60);

	if (t13 != -32766LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 9531U;
	int8_t x62 = 8;
	int8_t x63 = INT8_MIN;
	static volatile uint32_t x64 = 1018912U;
	uint32_t t14 = 13U;

	t14 = ((x61-(x62%x63))/x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MAX;
	volatile int8_t x67 = INT8_MAX;
	volatile int64_t t15 = 68771LL;

	t15 = ((x65-(x66%x67))/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int64_t x71 = 23993426LL;

	t16 = ((x69-(x70%x71))/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x74 = 1569530027U;
	uint64_t x75 = 3333210544535975LLU;
	volatile uint64_t t17 = 135361641842552LLU;

	t17 = ((x73-(x74%x75))/x76);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	static int8_t x79 = INT8_MIN;
	static int8_t x80 = -1;
	int64_t t18 = -21LL;

	t18 = ((x77-(x78%x79))/x80);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 9U;
	int16_t x86 = 87;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	int32_t t19 = 21273851;

	t19 = ((x85-(x86%x87))/x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MAX;
	static int64_t x90 = INT64_MIN;
	int32_t x91 = -1;
	volatile uint32_t x92 = 3013713U;

	t20 = ((x89-(x90%x91))/x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x93 = 7U;
	volatile uint16_t x94 = UINT16_MAX;
	int8_t x95 = -15;
	int32_t x96 = 3200;
	uint32_t t21 = 88794672U;

	t21 = ((x93-(x94%x95))/x96);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 1;
	uint64_t x102 = 63544LLU;
	volatile uint16_t x103 = 1U;
	static volatile uint64_t t22 = 481352991LLU;

	t22 = ((x101-(x102%x103))/x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	int32_t x106 = 42;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 208U;

	t23 = ((x105-(x106%x107))/x108);

	if (t23 != 88686269585142074LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x109 = 55U;
	uint64_t x111 = 13032692220LLU;
	int16_t x112 = -1;
	volatile uint64_t t24 = 11039876LLU;

	t24 = ((x109-(x110%x111))/x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x113 = 5U;
	int32_t x114 = INT32_MIN;
	volatile int16_t x116 = 1;
	volatile int32_t t25 = 960;

	t25 = ((x113-(x114%x115))/x116);

	if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x117 = UINT16_MAX;
	static int32_t x118 = -560953;
	volatile uint8_t x119 = 88U;
	volatile int64_t x120 = 185025157600LL;
	volatile int64_t t26 = -334729642308983743LL;

	t26 = ((x117-(x118%x119))/x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x122 = 1941628LLU;
	static uint8_t x123 = UINT8_MAX;
	volatile uint64_t t27 = 21104LLU;

	t27 = ((x121-(x122%x123))/x124);

	if (t27 != 7516282LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 37U;
	uint64_t x126 = 77679773724LLU;
	int16_t x127 = INT16_MAX;
	uint32_t x128 = UINT32_MAX;
	uint64_t t28 = 43533894520002LLU;

	t28 = ((x125-(x126%x127))/x128);

	if (t28 != 4294967296LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 2U;
	static int16_t x130 = -1;
	uint8_t x131 = 28U;
	int64_t t29 = -207571629023599310LL;

	t29 = ((x129-(x130%x131))/x132);

	if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -1LL;
	volatile int8_t x134 = INT8_MIN;
	uint16_t x135 = 226U;
	static volatile int32_t x136 = 58917;
	int64_t t30 = -2741405288827LL;

	t30 = ((x133-(x134%x135))/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 0U;
	int16_t x138 = 181;
	volatile int64_t t31 = -357598142793LL;

	t31 = ((x137-(x138%x139))/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x142 = -24052481851LL;
	int16_t x143 = INT16_MAX;
	int8_t x144 = -1;
	static int64_t t32 = 190672881629LL;

	t32 = ((x141-(x142%x143))/x144);

	if (t32 != -62103LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x146 = INT32_MAX;
	volatile int16_t x147 = -2;
	static int8_t x148 = -2;
	volatile int32_t t33 = 14;

	t33 = ((x145-(x146%x147))/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x150 = 220639555701630242LL;
	int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MIN;

	t34 = ((x149-(x150%x151))/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x155 = INT64_MAX;
	int64_t t35 = -2628646607LL;

	t35 = ((x153-(x154%x155))/x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = -10133197;
	static uint64_t x158 = 52LLU;
	static uint64_t t36 = 2511767400106LLU;

	t36 = ((x157-(x158%x159))/x160);

	if (t36 != 562967133814490LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MIN;
	static volatile int64_t x162 = -1LL;
	static int64_t x163 = -6257512505LL;
	volatile int32_t x164 = INT32_MAX;
	int64_t t37 = 1LL;

	t37 = ((x161-(x162%x163))/x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = 97407983LL;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = 1;
	static volatile int32_t x168 = -1;
	volatile int64_t t38 = -26714188LL;

	t38 = ((x165-(x166%x167))/x168);

	if (t38 != -97407983LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 11226U;
	static volatile uint8_t x172 = 1U;
	uint32_t t39 = 5789U;

	t39 = ((x169-(x170%x171))/x172);

	if (t39 != 11142U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = -1LL;
	int8_t x174 = 11;
	int64_t x175 = -39469981041263881LL;
	int8_t x176 = INT8_MAX;
	volatile int64_t t40 = 7229930LL;

	t40 = ((x173-(x174%x175))/x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	volatile uint64_t x179 = 3677294LLU;
	int64_t x180 = 242469247LL;
	uint64_t t41 = 24644909190652LLU;

	t41 = ((x177-(x178%x179))/x180);

	if (t41 != 38039347880LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -1;
	uint64_t x187 = 10459486LLU;
	uint64_t t42 = 501981553084LLU;

	t42 = ((x185-(x186%x187))/x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = INT8_MIN;
	uint32_t x194 = 195559058U;
	static int8_t x195 = 3;
	volatile uint16_t x196 = 16556U;

	t43 = ((x193-(x194%x195))/x196);

	if (t43 != 259420U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = UINT32_MAX;
	static volatile int16_t x198 = -1;

	t44 = ((x197-(x198%x199))/x200);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x201 = 4080U;
	int16_t x202 = -3;
	static int16_t x203 = INT16_MAX;
	int32_t x204 = -1469023;

	t45 = ((x201-(x202%x203))/x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x206 = INT16_MIN;
	static int8_t x207 = 25;
	uint64_t x208 = 1LLU;
	uint64_t t46 = 22092225871LLU;

	t46 = ((x205-(x206%x207))/x208);

	if (t46 != 272240LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x210 = INT64_MIN;
	static volatile int32_t x211 = -4816516;
	uint32_t x212 = UINT32_MAX;

	t47 = ((x209-(x210%x211))/x212);

	if (t47 != -2711LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = INT16_MIN;
	volatile uint16_t x216 = UINT16_MAX;
	int64_t t48 = -760LL;

	t48 = ((x213-(x214%x215))/x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = 720340300U;
	int8_t x218 = -1;
	uint8_t x220 = UINT8_MAX;
	volatile uint32_t t49 = 13U;

	t49 = ((x217-(x218%x219))/x220);

	if (t49 != 2824863U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MAX;
	volatile int64_t x222 = INT64_MIN;
	static uint32_t x223 = UINT32_MAX;
	int16_t x224 = 15;
	static int64_t t50 = -114330541770490664LL;

	t50 = ((x221-(x222%x223))/x224);

	if (t50 != 143165585LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x225 = 511589;
	volatile int64_t x226 = -1LL;
	uint8_t x227 = 2U;
	uint8_t x228 = 46U;
	volatile int64_t t51 = 21971LL;

	t51 = ((x225-(x226%x227))/x228);

	if (t51 != 11121LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -62417969892414LL;
	int16_t x230 = -554;
	int16_t x231 = 26;
	static int16_t x232 = -13234;
	int64_t t52 = 48202163120LL;

	t52 = ((x229-(x230%x231))/x232);

	if (t52 != 4716485559LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = 3910710792LL;
	int8_t x234 = -1;
	volatile int64_t x235 = 2107587177395417LL;
	volatile int8_t x236 = -1;

	t53 = ((x233-(x234%x235))/x236);

	if (t53 != -3910710793LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x238 = INT16_MAX;
	uint32_t x240 = UINT32_MAX;
	uint64_t t54 = 391491199LLU;

	t54 = ((x237-(x238%x239))/x240);

	if (t54 != 4294967296LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x246 = 9539LL;
	volatile int64_t x247 = 15LL;
	volatile uint32_t x248 = UINT32_MAX;

	t55 = ((x245-(x246%x247))/x248);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x249 = 77U;
	int64_t x250 = INT64_MIN;
	volatile int16_t x251 = -385;
	uint16_t x252 = 8U;
	volatile int64_t t56 = 234127758176437557LL;

	t56 = ((x249-(x250%x251))/x252);

	if (t56 != 10LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = 2;
	uint8_t x254 = 90U;
	volatile uint32_t x255 = 13205U;
	int8_t x256 = INT8_MIN;
	uint32_t t57 = 1049847613U;

	t57 = ((x253-(x254%x255))/x256);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MAX;
	int32_t x260 = -1;
	int32_t t58 = -47;

	t58 = ((x257-(x258%x259))/x260);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = 10;
	volatile uint8_t x262 = 26U;
	static volatile int32_t t59 = 1991429;

	t59 = ((x261-(x262%x263))/x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x265 = UINT16_MAX;
	static volatile int16_t x267 = INT16_MIN;
	int64_t t60 = 2300LL;

	t60 = ((x265-(x266%x267))/x268);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x269 = 86541309U;
	static volatile int8_t x270 = -1;
	uint8_t x271 = 87U;
	uint16_t x272 = UINT16_MAX;
	static uint32_t t61 = 9233U;

	t61 = ((x269-(x270%x271))/x272);

	if (t61 != 1320U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = UINT32_MAX;
	uint16_t x275 = UINT16_MAX;
	static uint16_t x276 = UINT16_MAX;
	uint32_t t62 = 130U;

	t62 = ((x273-(x274%x275))/x276);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x277 = UINT8_MAX;
	volatile uint32_t x278 = 12085U;
	static int64_t x279 = INT64_MIN;
	volatile uint8_t x280 = 3U;
	int64_t t63 = -1022385666682368LL;

	t63 = ((x277-(x278%x279))/x280);

	if (t63 != -3943LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = -1LL;
	int8_t x282 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	volatile uint32_t x284 = UINT32_MAX;
	int64_t t64 = -450LL;

	t64 = ((x281-(x282%x283))/x284);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = 52648420;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t x288 = -1;
	volatile int32_t t65 = 336;

	t65 = ((x285-(x286%x287))/x288);

	if (t65 != -52648548) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = 202U;
	uint8_t x290 = 120U;
	int32_t x291 = -302;
	uint8_t x292 = 2U;
	volatile uint32_t t66 = 47740U;

	t66 = ((x289-(x290%x291))/x292);

	if (t66 != 41U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x298 = INT64_MAX;
	volatile uint16_t x300 = UINT16_MAX;

	t67 = ((x297-(x298%x299))/x300);

	if (t67 != -250279724993LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = 66565547776983453LL;
	uint32_t x303 = UINT32_MAX;
	uint64_t x304 = 15829079589274LLU;
	static volatile uint64_t t68 = 529799LLU;

	t68 = ((x301-(x302%x303))/x304);

	if (t68 != 4205LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x305 = INT16_MIN;
	static volatile int32_t x307 = INT32_MIN;
	volatile int8_t x308 = INT8_MIN;

	t69 = ((x305-(x306%x307))/x308);

	if (t69 != 511) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = 1;
	int32_t x311 = 790;
	int32_t t70 = -40;

	t70 = ((x309-(x310%x311))/x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 1728U;
	uint32_t x314 = UINT32_MAX;
	static volatile int16_t x316 = 764;
	static uint32_t t71 = 113U;

	t71 = ((x313-(x314%x315))/x316);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x317 = 1U;
	int8_t x319 = -2;
	int32_t x320 = INT32_MIN;

	t72 = ((x317-(x318%x319))/x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x322 = INT8_MIN;
	int64_t x324 = -1LL;
	static int64_t t73 = 1085809728964LL;

	t73 = ((x321-(x322%x323))/x324);

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 12268273LLU;
	static uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 3U;
	int16_t x328 = 62;
	uint64_t t74 = 25653LLU;

	t74 = ((x325-(x326%x327))/x328);

	if (t74 != 197875LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -1;
	uint32_t x330 = 440185135U;
	static uint32_t x331 = 244U;
	uint64_t x332 = 223568031538985386LLU;
	static uint64_t t75 = 1880057317671319LLU;

	t75 = ((x329-(x330%x331))/x332);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;

	t76 = ((x333-(x334%x335))/x336);

	if (t76 != 65536LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x338 = 1444819968U;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	int64_t t77 = -166495688130LL;

	t77 = ((x337-(x338%x339))/x340);

	if (t77 != 44092LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 1U;
	volatile uint32_t t78 = 370939512U;

	t78 = ((x341-(x342%x343))/x344);

	if (t78 != 1954923U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = 2761U;
	static int64_t x348 = -56451LL;
	static int64_t t79 = -8324427542LL;

	t79 = ((x345-(x346%x347))/x348);

	if (t79 != 38041LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	volatile int32_t x351 = INT32_MIN;
	int64_t t80 = 2996243LL;

	t80 = ((x349-(x350%x351))/x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x354 = -1LL;
	static int32_t x355 = -1;
	int64_t x356 = INT64_MAX;
	int64_t t81 = -115LL;

	t81 = ((x353-(x354%x355))/x356);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x361 = 153U;
	uint32_t x362 = 18U;
	uint64_t x363 = 66240019971043LLU;
	uint8_t x364 = UINT8_MAX;
	static volatile uint64_t t82 = 1979LLU;

	t82 = ((x361-(x362%x363))/x364);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x365 = 4901676146591475842LLU;
	static int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	volatile int64_t x368 = 575611672LL;
	uint64_t t83 = 52165695009LLU;

	t83 = ((x365-(x366%x367))/x368);

	if (t83 != 8515595470LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x369 = 4;
	volatile uint32_t x370 = UINT32_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int16_t x372 = -1754;
	uint32_t t84 = 13077933U;

	t84 = ((x369-(x370%x371))/x372);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x374 = -56866223;
	volatile int8_t x376 = -1;

	t85 = ((x373-(x374%x375))/x376);

	if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x378 = 3U;
	volatile uint16_t x379 = UINT16_MAX;
	static int8_t x380 = INT8_MAX;
	volatile int32_t t86 = -5743943;

	t86 = ((x377-(x378%x379))/x380);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = 16U;
	static int64_t x382 = -2879425604794533LL;
	volatile int8_t x383 = -1;
	static uint64_t x384 = UINT64_MAX;
	volatile uint64_t t87 = 188734399054470753LLU;

	t87 = ((x381-(x382%x383))/x384);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x388 = 2;
	int64_t t88 = 4051557969489023480LL;

	t88 = ((x385-(x386%x387))/x388);

	if (t88 != -4611686018427387840LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MAX;
	static uint32_t x391 = 580U;
	int64_t x392 = -1667658652LL;
	int64_t t89 = -1LL;

	t89 = ((x389-(x390%x391))/x392);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x393 = 14;
	volatile uint16_t x395 = 121U;
	volatile int32_t t90 = -19653249;

	t90 = ((x393-(x394%x395))/x396);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -6LL;
	uint64_t x398 = 16563377LLU;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t x400 = INT32_MAX;
	volatile uint64_t t91 = 14887634792024249LLU;

	t91 = ((x397-(x398%x399))/x400);

	if (t91 != 8589934595LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x401 = -1;
	volatile int16_t x402 = -1;
	int64_t x403 = 15033589540171LL;
	int64_t x404 = -1LL;
	volatile int64_t t92 = 743LL;

	t92 = ((x401-(x402%x403))/x404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	uint32_t x406 = 3U;
	static volatile int64_t t93 = 3069428950733LL;

	t93 = ((x405-(x406%x407))/x408);

	if (t93 != -4294967292LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x409 = INT16_MIN;
	volatile int16_t x410 = -1;
	volatile uint64_t x411 = 1602358941LLU;
	uint32_t x412 = 31318U;
	volatile uint64_t t94 = 0LLU;

	t94 = ((x409-(x410%x411))/x412);

	if (t94 != 589014115611164LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = -95;
	int8_t x414 = INT8_MIN;
	int32_t x415 = -1;
	int8_t x416 = -6;
	volatile int32_t t95 = 779945497;

	t95 = ((x413-(x414%x415))/x416);

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x418 = -1;
	int32_t x419 = -1;
	static uint64_t x420 = 8549800076333128LLU;
	volatile uint64_t t96 = 847855458027670446LLU;

	t96 = ((x417-(x418%x419))/x420);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x421 = -117;
	int8_t x422 = INT8_MIN;
	static uint8_t x423 = 101U;
	static int32_t x424 = INT32_MAX;
	int32_t t97 = -1177;

	t97 = ((x421-(x422%x423))/x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = -1;
	uint16_t x426 = UINT16_MAX;
	static int16_t x428 = -132;
	uint64_t t98 = 16288076LLU;

	t98 = ((x425-(x426%x427))/x428);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x430 = -2LL;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 4U;
	static volatile int64_t t99 = -57753621872101177LL;

	t99 = ((x429-(x430%x431))/x432);

	if (t99 != 32LL) { NG(); } else { ; }
	
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

