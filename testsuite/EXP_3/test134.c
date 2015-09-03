#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
int64_t t0 = -61055028041LL;
static volatile uint32_t t2 = 2041U;
int32_t x20 = INT32_MIN;
int32_t t4 = 28379;
int8_t x26 = INT8_MIN;
int8_t x27 = INT8_MIN;
uint64_t x28 = 4820614639LLU;
uint64_t x32 = UINT64_MAX;
static int64_t x33 = INT64_MIN;
int8_t x37 = INT8_MIN;
volatile int64_t x42 = INT64_MIN;
int8_t x54 = -1;
static uint8_t x55 = UINT8_MAX;
int16_t x58 = INT16_MAX;
uint32_t t13 = 29120770U;
static int32_t x62 = 8525861;
int64_t t16 = 765819370326650LL;
volatile int32_t x80 = 1775;
static volatile int64_t x84 = -1LL;
int32_t x94 = -24584767;
int64_t x98 = INT64_MAX;
int64_t t20 = -13LL;
int64_t x102 = INT64_MIN;
volatile uint32_t x104 = 2U;
int16_t x107 = -1;
volatile int32_t x108 = -1;
int8_t x109 = 0;
volatile int64_t x111 = INT64_MIN;
uint64_t x117 = 785595241221575LLU;
uint8_t x119 = UINT8_MAX;
static int16_t x122 = 3033;
int32_t x124 = INT32_MIN;
uint32_t x125 = 3119673U;
int16_t x132 = 1601;
int16_t x135 = -1;
volatile int32_t x136 = -16224;
int16_t x138 = -1;
int64_t x144 = INT64_MIN;
int64_t t32 = 1409021LL;
int16_t x152 = INT16_MAX;
static uint8_t x156 = 2U;
volatile uint8_t x159 = 19U;
static uint32_t x165 = 55U;
volatile int8_t x169 = INT8_MAX;
uint64_t x170 = 1026LLU;
static int64_t x178 = INT64_MIN;
static int16_t x179 = INT16_MAX;
uint8_t x180 = UINT8_MAX;
int16_t x191 = INT16_MIN;
uint16_t x197 = 13758U;
uint64_t x200 = 27360539325671LLU;
uint16_t x202 = 51U;
uint8_t x209 = 10U;
uint32_t x210 = UINT32_MAX;
static uint16_t x220 = 11U;
static int8_t x223 = 0;
uint32_t x232 = UINT32_MAX;
int16_t x238 = -43;
int32_t t52 = 25;
int32_t x244 = 25723358;
static uint32_t x245 = 193823212U;
int8_t x254 = 53;
int8_t x261 = INT8_MIN;
static volatile int64_t x263 = 5202139358593297LL;
int64_t x278 = 10LL;
uint32_t x279 = 86U;
static uint32_t x286 = 247597U;
int64_t x295 = -696LL;
int64_t x299 = INT64_MIN;
int64_t x300 = 446LL;
int32_t x301 = -439099716;
int16_t x302 = -6336;
static volatile int32_t x303 = -59009783;
int8_t x314 = INT8_MAX;
int32_t x315 = 30865524;
static volatile int16_t x326 = -6;
static uint8_t x332 = 3U;
uint32_t x333 = UINT32_MAX;
uint16_t x335 = UINT16_MAX;
int16_t x351 = INT16_MIN;
int64_t t78 = 2118261488LL;
uint32_t x370 = 69860674U;
int32_t x372 = -172394;
static uint64_t t80 = 11674315LLU;
static int16_t x379 = INT16_MAX;
uint16_t x382 = 520U;
uint32_t t82 = 23269291U;
static int64_t x396 = -30067049271781246LL;
int64_t t84 = 7114642704369147LL;
int64_t x404 = INT64_MAX;
uint16_t x406 = 26258U;
uint32_t x415 = 114801U;
static int64_t x416 = INT64_MIN;
volatile int64_t t88 = -150681736LL;
volatile int8_t x421 = INT8_MIN;
int8_t x422 = -1;
volatile uint64_t t90 = 9614889LLU;
int8_t x431 = -44;
int16_t x442 = 365;
static volatile int64_t x443 = -24944503182192LL;
int8_t x452 = INT8_MAX;
static int16_t x453 = -1;
volatile int8_t x454 = -33;
int64_t x459 = -6277LL;


void f0(void) {
	int64_t x1 = -1LL;
	uint32_t x3 = 8884U;
	int8_t x4 = INT8_MAX;

	t0 = ((x1&x2)/(x3+x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1459637087U;
	volatile int16_t x6 = -1;
	int8_t x7 = -1;
	int8_t x8 = -1;
	volatile uint32_t t1 = 16561331U;

	t1 = ((x5&x6)/(x7+x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -31;
	int16_t x10 = 2323;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 14U;

	t2 = ((x9&x10)/(x11+x12));

	if (t2 != 177U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int8_t x14 = 6;
	static int64_t x15 = INT64_MAX;
	int16_t x16 = -75;
	int64_t t3 = -1581LL;

	t3 = ((x13&x14)/(x15+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int16_t x18 = INT16_MAX;
	uint8_t x19 = 0U;

	t4 = ((x17&x18)/(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 3LLU;
	int64_t x22 = 86727996LL;
	uint64_t x23 = 63341810LLU;
	int32_t x24 = -1;
	uint64_t t5 = 2319399215698298LLU;

	t5 = ((x21&x22)/(x23+x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile uint64_t t6 = 19LLU;

	t6 = ((x25&x26)/(x27+x28));

	if (t6 != 1913318730LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 13;
	static int64_t x30 = INT64_MIN;
	uint32_t x31 = 23235U;
	uint64_t t7 = 25566400505671LLU;

	t7 = ((x29&x30)/(x31+x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x34 = 2386U;
	static int8_t x35 = INT8_MIN;
	int64_t x36 = -1LL;
	volatile int64_t t8 = -2570322442343525523LL;

	t8 = ((x33&x34)/(x35+x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1053677;
	volatile int8_t x39 = -55;
	int32_t x40 = -1;
	int32_t t9 = 15;

	t9 = ((x37&x38)/(x39+x40));

	if (t9 != 18816) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -22;
	uint16_t x43 = 736U;
	volatile int32_t x44 = INT32_MIN;
	volatile int64_t t10 = 3870602754223LL;

	t10 = ((x41&x42)/(x43+x44));

	if (t10 != 4294968768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 11507;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 3U;
	volatile int32_t t11 = -124811870;

	t11 = ((x45&x46)/(x47+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -5354443;
	int8_t x56 = -2;
	int32_t t12 = -250126908;

	t12 = ((x53&x54)/(x55+x56));

	if (t12 != -21163) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -2;
	uint32_t x59 = UINT32_MAX;
	uint8_t x60 = 8U;

	t13 = ((x57&x58)/(x59+x60));

	if (t13 != 4680U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	volatile int32_t x63 = -1;
	uint16_t x64 = 3366U;
	uint32_t t14 = 230946110U;

	t14 = ((x61&x62)/(x63+x64));

	if (t14 != 2533U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 52107290U;
	uint64_t x66 = 565LLU;
	uint16_t x67 = 32U;
	static int16_t x68 = INT16_MIN;
	uint64_t t15 = 0LLU;

	t15 = ((x65&x66)/(x67+x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 8810U;
	int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	int64_t x72 = 1LL;

	t16 = ((x69&x70)/(x71+x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	static volatile int32_t x78 = INT32_MIN;
	int64_t x79 = -33048874297692LL;
	static volatile int64_t t17 = -130113739024659598LL;

	t17 = ((x77&x78)/(x79+x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 6;
	volatile int16_t x82 = INT16_MIN;
	static int16_t x83 = -1;
	volatile int64_t t18 = 13526278995694LL;

	t18 = ((x81&x82)/(x83+x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x93 = 82U;
	int16_t x95 = -4651;
	volatile int64_t x96 = 711LL;
	int64_t t19 = 15017507780006301LL;

	t19 = ((x93&x94)/(x95+x96));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = UINT8_MAX;
	static volatile int16_t x99 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;

	t20 = ((x97&x98)/(x99+x100));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MAX;
	static int64_t x103 = -63009870LL;
	int64_t t21 = -64105931010142984LL;

	t21 = ((x101&x102)/(x103+x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	static int16_t x106 = INT16_MIN;
	volatile int32_t t22 = -6683;

	t22 = ((x105&x106)/(x107+x108));

	if (t22 != 16384) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x110 = 13634;
	uint16_t x112 = 3U;
	static int64_t t23 = -105334744987186348LL;

	t23 = ((x109&x110)/(x111+x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = INT64_MAX;
	static int16_t x114 = INT16_MIN;
	static int8_t x115 = 0;
	static int64_t x116 = -1LL;
	volatile int64_t t24 = 252732LL;

	t24 = ((x113&x114)/(x115+x116));

	if (t24 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = INT32_MAX;
	uint64_t x120 = 58480572923LLU;
	uint64_t t25 = 13120744790261LLU;

	t25 = ((x117&x118)/(x119+x120));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x121 = UINT8_MAX;
	static uint64_t x123 = 31684LLU;
	uint64_t t26 = 2643342224945707296LLU;

	t26 = ((x121&x122)/(x123+x124));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x126 = 248U;
	volatile int16_t x127 = 1906;
	uint32_t x128 = 24890U;
	uint32_t t27 = 7U;

	t27 = ((x125&x126)/(x127+x128));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x130 = 3793850201LLU;
	int32_t x131 = 3640;
	volatile uint64_t t28 = 356791854LLU;

	t28 = ((x129&x130)/(x131+x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = -1;
	static volatile int16_t x134 = -1;
	int32_t t29 = 6;

	t29 = ((x133&x134)/(x135+x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x137 = INT32_MIN;
	int8_t x139 = -1;
	int8_t x140 = -1;
	int32_t t30 = 977885;

	t30 = ((x137&x138)/(x139+x140));

	if (t30 != 1073741824) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 549622LLU;
	static int8_t x142 = INT8_MIN;
	volatile uint32_t x143 = 86673U;
	volatile uint64_t t31 = 443812400702695LLU;

	t31 = ((x141&x142)/(x143+x144));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = 5797953013346494LL;
	volatile int8_t x146 = -9;
	static int16_t x147 = INT16_MIN;
	int64_t x148 = -30005421285376LL;

	t32 = ((x145&x146)/(x147+x148));

	if (t32 != -193LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 418;
	uint64_t x151 = UINT64_MAX;
	uint64_t t33 = 26LLU;

	t33 = ((x149&x150)/(x151+x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = UINT16_MAX;
	int8_t x154 = -28;
	int16_t x155 = -1;
	volatile int32_t t34 = 3401408;

	t34 = ((x153&x154)/(x155+x156));

	if (t34 != 65508) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MAX;
	uint64_t x160 = 110912174383889LLU;
	volatile uint64_t t35 = 1793745390632321029LLU;

	t35 = ((x157&x158)/(x159+x160));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MIN;
	static int16_t x167 = 8;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t36 = 88134992492951LLU;

	t36 = ((x165&x166)/(x167+x168));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x171 = 10197;
	int16_t x172 = 7703;
	uint64_t t37 = 533906510510113LLU;

	t37 = ((x169&x170)/(x171+x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x173 = -1;
	static int16_t x174 = 1023;
	uint32_t x175 = UINT32_MAX;
	static uint32_t x176 = 1953814U;
	volatile uint32_t t38 = 511334U;

	t38 = ((x173&x174)/(x175+x176));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = 0;
	volatile int64_t t39 = 30878LL;

	t39 = ((x177&x178)/(x179+x180));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	static int32_t x183 = 308672606;
	uint32_t x184 = 234697149U;
	int64_t t40 = 2LL;

	t40 = ((x181&x182)/(x183+x184));

	if (t40 != -16974393499LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x189 = INT64_MAX;
	static uint32_t x190 = UINT32_MAX;
	int32_t x192 = INT32_MAX;
	int64_t t41 = -592962902LL;

	t41 = ((x189&x190)/(x191+x192));

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = 0;
	uint16_t x194 = UINT16_MAX;
	int32_t x195 = INT32_MAX;
	uint8_t x196 = 0U;
	int32_t t42 = 19;

	t42 = ((x193&x194)/(x195+x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	volatile uint64_t t43 = 134866170134995LLU;

	t43 = ((x197&x198)/(x199+x200));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	uint64_t x203 = UINT64_MAX;
	volatile int64_t x204 = 425349084744204847LL;
	uint64_t t44 = 29810978410998812LLU;

	t44 = ((x201&x202)/(x203+x204));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x205 = 32851222;
	static uint8_t x206 = 2U;
	int8_t x207 = INT8_MAX;
	static volatile int16_t x208 = INT16_MAX;
	int32_t t45 = -1895355;

	t45 = ((x205&x206)/(x207+x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x211 = 9U;
	static volatile int32_t x212 = INT32_MIN;
	volatile uint32_t t46 = 28784U;

	t46 = ((x209&x210)/(x211+x212));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int64_t x215 = -4623002838427627LL;
	int32_t x216 = INT32_MIN;
	int64_t t47 = -386552LL;

	t47 = ((x213&x214)/(x215+x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -1;
	static int32_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	static volatile int32_t t48 = 1;

	t48 = ((x217&x218)/(x219+x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	volatile uint8_t x224 = UINT8_MAX;
	static volatile int32_t t49 = 1662;

	t49 = ((x221&x222)/(x223+x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = 263046966247LL;
	volatile int8_t x230 = INT8_MIN;
	int8_t x231 = -1;
	static int64_t t50 = -66694380LL;

	t50 = ((x229&x230)/(x231+x232));

	if (t50 != 61LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x233 = -1;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = 1303;
	uint16_t x236 = 25099U;
	volatile int32_t t51 = -43152;

	t51 = ((x233&x234)/(x235+x236));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x237 = -483631;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;

	t52 = ((x237&x238)/(x239+x240));

	if (t52 != 14) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 278104U;
	uint64_t x242 = UINT64_MAX;
	volatile uint8_t x243 = 0U;
	static uint64_t t53 = 4LLU;

	t53 = ((x241&x242)/(x243+x244));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x246 = INT64_MIN;
	int8_t x247 = 0;
	volatile int64_t x248 = INT64_MIN;
	int64_t t54 = 36848964929698LL;

	t54 = ((x245&x246)/(x247+x248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = -1;
	static uint64_t x255 = 88031879767185LLU;
	volatile int32_t x256 = -12;
	volatile uint64_t t55 = 19887971327032LLU;

	t55 = ((x253&x254)/(x255+x256));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MAX;
	static volatile int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MAX;
	volatile int32_t x260 = INT32_MIN;
	int32_t t56 = -27337;

	t56 = ((x257&x258)/(x259+x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x262 = 135U;
	volatile int32_t x264 = INT32_MIN;
	volatile int64_t t57 = -1052549248642897LL;

	t57 = ((x261&x262)/(x263+x264));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MIN;
	int64_t x280 = INT64_MIN;
	volatile int64_t t58 = -866166LL;

	t58 = ((x277&x278)/(x279+x280));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = -1;
	int16_t x284 = -1;
	volatile int32_t t59 = 20882;

	t59 = ((x281&x282)/(x283+x284));

	if (t59 != 1073741824) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = -599701948613LL;
	volatile int16_t x287 = 127;
	uint16_t x288 = UINT16_MAX;
	int64_t t60 = -6918930LL;

	t60 = ((x285&x286)/(x287+x288));

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = INT8_MAX;
	static uint8_t x290 = 4U;
	static int64_t x291 = 0LL;
	int16_t x292 = INT16_MAX;
	int64_t t61 = 18685907394914LL;

	t61 = ((x289&x290)/(x291+x292));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = INT64_MAX;
	uint32_t x294 = 14U;
	int32_t x296 = INT32_MIN;
	int64_t t62 = 2853713764320LL;

	t62 = ((x293&x294)/(x295+x296));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = 29638587LLU;
	int8_t x298 = INT8_MIN;
	volatile uint64_t t63 = 0LLU;

	t63 = ((x297&x298)/(x299+x300));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x304 = -4952607809LL;
	volatile int64_t t64 = 31331318852LL;

	t64 = ((x301&x302)/(x303+x304));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = INT32_MIN;
	static uint64_t x307 = UINT64_MAX;
	uint64_t x308 = 5680806LLU;
	volatile uint64_t t65 = 1094LLU;

	t65 = ((x305&x306)/(x307+x308));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = 6608U;
	volatile int8_t x310 = 30;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = UINT64_MAX;
	static uint64_t t66 = 2045249975454LLU;

	t66 = ((x309&x310)/(x311+x312));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x313 = -21947028;
	volatile int8_t x316 = 1;
	volatile int32_t t67 = -171958459;

	t67 = ((x313&x314)/(x315+x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = -31;
	uint64_t x318 = 1381821459896LLU;
	int64_t x319 = INT64_MIN;
	volatile int16_t x320 = 506;
	uint64_t t68 = 35563LLU;

	t68 = ((x317&x318)/(x319+x320));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int64_t x322 = INT64_MIN;
	volatile int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	int64_t t69 = 39070179014915LL;

	t69 = ((x321&x322)/(x323+x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x327 = 6435150;
	int8_t x328 = INT8_MIN;
	int32_t t70 = 0;

	t70 = ((x325&x326)/(x327+x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	static int32_t t71 = -1;

	t71 = ((x329&x330)/(x331+x332));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x334 = 84U;
	int64_t x336 = 2754LL;
	volatile int64_t t72 = 38328005221510LL;

	t72 = ((x333&x334)/(x335+x336));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x345 = INT16_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile uint64_t x347 = 13772971926LLU;
	int16_t x348 = INT16_MIN;
	static uint64_t t73 = 6515698491835398LLU;

	t73 = ((x345&x346)/(x347+x348));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = INT8_MAX;
	uint16_t x350 = 1732U;
	uint32_t x352 = 18416184U;
	volatile uint32_t t74 = 288127032U;

	t74 = ((x349&x350)/(x351+x352));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = -1;
	static volatile uint64_t x356 = UINT64_MAX;
	uint64_t t75 = 14897049651LLU;

	t75 = ((x353&x354)/(x355+x356));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = INT16_MAX;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t76 = 931LL;

	t76 = ((x357&x358)/(x359+x360));

	if (t76 != -254LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MAX;
	int8_t x364 = INT8_MIN;
	volatile int64_t t77 = -3034LL;

	t77 = ((x361&x362)/(x363+x364));

	if (t77 != -4294967554LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = INT64_MAX;
	volatile int64_t x366 = 36LL;
	int32_t x367 = INT32_MAX;
	static int16_t x368 = INT16_MIN;

	t78 = ((x365&x366)/(x367+x368));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	volatile int64_t t79 = -1848359537LL;

	t79 = ((x369&x370)/(x371+x372));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x373 = -1564941022915035LL;
	int64_t x374 = INT64_MAX;
	int16_t x375 = INT16_MIN;
	uint64_t x376 = 1676717842LLU;

	t80 = ((x373&x374)/(x375+x376));

	if (t80 != 5500023372LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = -27;
	static uint8_t x378 = 3U;
	uint8_t x380 = 7U;
	static int32_t t81 = 996262289;

	t81 = ((x377&x378)/(x379+x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = -133439;
	volatile uint32_t x383 = UINT32_MAX;
	volatile uint32_t x384 = 1132U;

	t82 = ((x381&x382)/(x383+x384));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x393 = 6U;
	int32_t x394 = -1;
	static int64_t x395 = 1LL;
	int64_t t83 = 268809266LL;

	t83 = ((x393&x394)/(x395+x396));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = 919621LL;
	volatile int64_t x398 = 24191742615677LL;
	int16_t x399 = 471;
	int32_t x400 = INT32_MIN;

	t84 = ((x397&x398)/(x399+x400));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x401 = UINT32_MAX;
	volatile uint32_t x402 = 721U;
	int32_t x403 = INT32_MIN;
	int64_t t85 = -7937814LL;

	t85 = ((x401&x402)/(x403+x404));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x405 = UINT64_MAX;
	static uint64_t x407 = 4073816LLU;
	uint64_t x408 = 75293LLU;
	static uint64_t t86 = 4109159666766764964LLU;

	t86 = ((x405&x406)/(x407+x408));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = 3242;
	volatile int32_t x410 = -1;
	static uint16_t x411 = 14501U;
	static uint16_t x412 = UINT16_MAX;
	static volatile int32_t t87 = -164288;

	t87 = ((x409&x410)/(x411+x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x413 = UINT16_MAX;
	uint8_t x414 = 24U;

	t88 = ((x413&x414)/(x415+x416));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = -21;
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	static volatile uint16_t x420 = 34U;
	volatile int32_t t89 = -36656006;

	t89 = ((x417&x418)/(x419+x420));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x423 = -28;
	uint64_t x424 = 5618812945LLU;

	t90 = ((x421&x422)/(x423+x424));

	if (t90 != 3283032260LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x425 = 15213U;
	static volatile int32_t x426 = -36234558;
	int64_t x427 = 28046227LL;
	static int8_t x428 = INT8_MIN;
	int64_t t91 = 26LL;

	t91 = ((x425&x426)/(x427+x428));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x429 = -76295;
	int32_t x430 = INT32_MIN;
	int64_t x432 = INT64_MAX;
	volatile int64_t t92 = -3935757LL;

	t92 = ((x429&x430)/(x431+x432));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = -1LL;
	static int8_t x436 = INT8_MIN;
	volatile int64_t t93 = 107LL;

	t93 = ((x433&x434)/(x435+x436));

	if (t93 != 254LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x437 = 170U;
	static int64_t x438 = -1LL;
	static uint64_t x439 = 34092116LLU;
	int16_t x440 = INT16_MAX;
	volatile uint64_t t94 = 24803651782LLU;

	t94 = ((x437&x438)/(x439+x440));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x441 = UINT16_MAX;
	int32_t x444 = INT32_MIN;
	int64_t t95 = 557407693979744674LL;

	t95 = ((x441&x442)/(x443+x444));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MIN;
	static volatile uint16_t x447 = 269U;
	static uint8_t x448 = 2U;
	volatile int64_t t96 = 1641061192272LL;

	t96 = ((x445&x446)/(x447+x448));

	if (t96 != -34034583161825740LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = 109U;
	int16_t x450 = -1;
	uint32_t x451 = 6900U;
	volatile uint32_t t97 = 4129847U;

	t97 = ((x449&x450)/(x451+x452));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x455 = -1;
	uint32_t x456 = 2076490U;
	volatile uint32_t t98 = 459635U;

	t98 = ((x453&x454)/(x455+x456));

	if (t98 != 2068U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x457 = 4U;
	volatile int32_t x458 = 57217562;
	static uint32_t x460 = 44210286U;
	int64_t t99 = 386445605760415LL;

	t99 = ((x457&x458)/(x459+x460));

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

