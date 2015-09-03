#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int16_t x2 = INT16_MAX;
uint8_t x5 = 3U;
static int16_t x14 = INT16_MIN;
volatile uint32_t x23 = 304307U;
static volatile int32_t x37 = 2213;
int64_t x38 = 2081640LL;
int16_t x43 = INT16_MAX;
uint32_t x47 = UINT32_MAX;
int32_t x56 = -1;
volatile int32_t t12 = -151322;
uint32_t x57 = 285U;
int64_t x59 = -1LL;
static int64_t x62 = -1LL;
uint64_t x69 = 2647959501LLU;
uint8_t x70 = UINT8_MAX;
static int64_t x71 = INT64_MIN;
uint8_t x72 = 11U;
uint64_t t16 = 32202LLU;
int8_t x93 = INT8_MIN;
volatile int16_t x96 = -15688;
uint32_t t22 = 119125150U;
int8_t x115 = INT8_MIN;
int8_t x116 = INT8_MIN;
volatile uint64_t t25 = 12904919544LLU;
int16_t x119 = -1;
static int64_t t26 = -2720LL;
static uint64_t x130 = 5913843968223241954LLU;
volatile int64_t x141 = INT64_MIN;
volatile int32_t x143 = -1;
int64_t t31 = 2267012LL;
volatile uint64_t x146 = 228392406506963LLU;
int32_t x148 = INT32_MIN;
volatile int8_t x151 = INT8_MAX;
uint64_t x157 = 104857515284434153LLU;
volatile uint64_t t35 = 725396459877732817LLU;
static volatile int64_t x169 = 72140576617603LL;
volatile int8_t x170 = INT8_MIN;
int64_t t38 = 27172098LL;
uint64_t x184 = UINT64_MAX;
uint8_t x197 = UINT8_MAX;
int64_t x205 = INT64_MIN;
uint64_t t45 = 2614237LLU;
static uint32_t x217 = 95U;
volatile int64_t x218 = INT64_MIN;
volatile int64_t t46 = -921714953725985LL;
volatile uint64_t t51 = 75LLU;
int64_t x243 = -90252586LL;
static volatile int64_t t53 = -1892688511503261LL;
uint64_t x249 = UINT64_MAX;
int32_t x255 = 767919909;
int16_t x270 = -1;
static int8_t x271 = INT8_MIN;
int64_t x277 = INT64_MIN;
volatile int64_t t60 = 2603419346359563713LL;
static int64_t x281 = INT64_MIN;
static int64_t t61 = INT64_MIN;
static volatile uint32_t x286 = 1U;
volatile uint32_t x292 = 5U;
uint64_t x295 = 1568930373LLU;
uint64_t t65 = 48LLU;
uint16_t x301 = UINT16_MAX;
uint8_t x311 = 5U;
int32_t x312 = INT32_MIN;
uint32_t t68 = 31564041U;
int64_t x315 = INT64_MIN;
int8_t x316 = INT8_MAX;
volatile uint64_t t69 = 3535239851277580LLU;
uint8_t x321 = 24U;
int32_t x327 = 298967278;
uint32_t t72 = 394098U;
int32_t x337 = -248907;
static uint32_t x339 = 19365302U;
volatile int16_t x346 = INT16_MAX;
volatile int8_t x352 = INT8_MIN;
int16_t x353 = INT16_MIN;
int32_t x356 = -209;
int64_t x370 = INT64_MAX;
int16_t x376 = INT16_MIN;
volatile uint16_t x379 = UINT16_MAX;
uint64_t x386 = 113840350058483565LLU;
static uint8_t x393 = 2U;
static uint8_t x394 = UINT8_MAX;
uint32_t x395 = 1U;
static volatile uint64_t t86 = 3LLU;
int32_t x399 = -267044149;
volatile int32_t x412 = -1;
uint8_t x416 = 73U;
int64_t t89 = 21373272845LL;
int64_t t90 = -1LL;
int16_t x421 = 2;
static uint8_t x430 = UINT8_MAX;
volatile int64_t t92 = -808399937677652LL;
static int16_t x441 = INT16_MIN;
int16_t x444 = -9024;
int32_t t94 = 207703;
int8_t x449 = INT8_MAX;
uint8_t x451 = UINT8_MAX;
uint32_t x458 = UINT32_MAX;
int16_t x463 = INT16_MIN;
int64_t t99 = -1688033859875245LL;


void f0(void) {
	int64_t x3 = -1LL;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -203043601461444864LL;

	t0 = (((x1%x2)+x3)+x4);

	if (t0 != -130LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 809479886LL;
	uint64_t x7 = 54231441773519LLU;
	uint64_t x8 = 9LLU;
	uint64_t t1 = 1444876247LLU;

	t1 = (((x5%x6)+x7)+x8);

	if (t1 != 54231441773531LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 310346895;
	int16_t x15 = -1;
	uint64_t x16 = 148066LLU;
	uint64_t t2 = 947997246104559539LLU;

	t2 = (((x13%x14)+x15)+x16);

	if (t2 != 149232LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -2188922LL;
	int32_t x18 = 1;
	static int32_t x19 = -767;
	int64_t x20 = -761055121795292423LL;
	static volatile int64_t t3 = 2299250608LL;

	t3 = (((x17%x18)+x19)+x20);

	if (t3 != -761055121795293190LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	uint16_t x24 = 215U;
	static uint32_t t4 = 340666U;

	t4 = (((x21%x22)+x23)+x24);

	if (t4 != 304522U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 7675U;
	volatile int64_t t5 = 6240LL;

	t5 = (((x25%x26)+x27)+x28);

	if (t5 != -9223372036854735366LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 34273558988916LLU;
	int64_t x30 = -1LL;
	uint16_t x31 = 70U;
	static int32_t x32 = -1;
	volatile uint64_t t6 = 105620869397821298LLU;

	t6 = (((x29%x30)+x31)+x32);

	if (t6 != 34273558988985LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 153U;
	uint32_t x34 = UINT32_MAX;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;
	volatile uint32_t t7 = 3449935U;

	t7 = (((x33%x34)+x35)+x36);

	if (t7 != 2147483799U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 2U;
	volatile int64_t t8 = -6446799181553189LL;

	t8 = (((x37%x38)+x39)+x40);

	if (t8 != -30553LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MAX;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t9 = -1324510;

	t9 = (((x41%x42)+x43)+x44);

	if (t9 != 32893) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	static int8_t x48 = 0;
	int64_t t10 = -1263521326421LL;

	t10 = (((x45%x46)+x47)+x48);

	if (t10 != 4294967167LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = UINT8_MAX;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = -12;
	static int64_t x52 = -1LL;
	volatile int64_t t11 = -370524541LL;

	t11 = (((x49%x50)+x51)+x52);

	if (t11 != 242LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	uint8_t x54 = 1U;
	static int16_t x55 = -973;

	t12 = (((x53%x54)+x55)+x56);

	if (t12 != -974) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MIN;
	uint8_t x60 = 67U;
	volatile int64_t t13 = -31220972127LL;

	t13 = (((x57%x58)+x59)+x60);

	if (t13 != 351LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	volatile int64_t t14 = 503564583295400599LL;

	t14 = (((x61%x62)+x63)+x64);

	if (t14 != -32769LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x66 = 62U;
	volatile int32_t x67 = -1;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t15 = 396;

	t15 = (((x65%x66)+x67)+x68);

	if (t15 != 2147483642) { NG(); } else { ; }
	
}

void f16(void) {


	t16 = (((x69%x70)+x71)+x72);

	if (t16 != 9223372036854776050LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	static int64_t x74 = -10062905255212905LL;
	volatile int32_t x75 = -1;
	int8_t x76 = -54;
	volatile int64_t t17 = 4335519LL;

	t17 = (((x73%x74)+x75)+x76);

	if (t17 != -32823LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 4U;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = 6;
	int16_t x80 = 15255;
	volatile uint32_t t18 = 1793977143U;

	t18 = (((x77%x78)+x79)+x80);

	if (t18 != 15265U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	static uint8_t x82 = UINT8_MAX;
	int8_t x83 = -5;
	volatile int8_t x84 = INT8_MIN;
	static int32_t t19 = 56;

	t19 = (((x81%x82)+x83)+x84);

	if (t19 != -6) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 1U;
	uint16_t x90 = 13419U;
	volatile int32_t x91 = INT32_MIN;
	uint8_t x92 = 42U;
	volatile int32_t t20 = -1;

	t20 = (((x89%x90)+x91)+x92);

	if (t20 != -2147483605) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x94 = 114220LLU;
	int16_t x95 = INT16_MAX;
	uint64_t t21 = 23772LLU;

	t21 = (((x93%x94)+x95)+x96);

	if (t21 != 84647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 219664518U;
	int8_t x102 = -1;
	int16_t x103 = INT16_MAX;
	static uint32_t x104 = UINT32_MAX;

	t22 = (((x101%x102)+x103)+x104);

	if (t22 != 219697284U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	static volatile uint32_t x106 = 22U;
	uint64_t x107 = 1014LLU;
	int32_t x108 = -3;
	static volatile uint64_t t23 = 19098087052LLU;

	t23 = (((x105%x106)+x107)+x108);

	if (t23 != 1003LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x109 = INT64_MAX;
	uint32_t x110 = 945899623U;
	int16_t x111 = INT16_MIN;
	volatile uint64_t x112 = 4884392989938302959LLU;
	volatile uint64_t t24 = 1113909585535809LLU;

	t24 = (((x109%x110)+x111)+x112);

	if (t24 != 4884392990690907734LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 566LLU;
	int32_t x114 = INT32_MAX;

	t25 = (((x113%x114)+x115)+x116);

	if (t25 != 310LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 541879LL;
	volatile uint32_t x118 = UINT32_MAX;
	volatile int16_t x120 = -1;

	t26 = (((x117%x118)+x119)+x120);

	if (t26 != 541877LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = -1LL;
	int16_t x123 = 2658;
	volatile uint32_t x124 = UINT32_MAX;
	int64_t t27 = 3057950615571152LL;

	t27 = (((x121%x122)+x123)+x124);

	if (t27 != 4294969953LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 895;
	static int16_t x126 = -1;
	int8_t x127 = -33;
	static uint32_t x128 = 21U;
	volatile uint32_t t28 = 15780926U;

	t28 = (((x125%x126)+x127)+x128);

	if (t28 != 4294967284U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = 9;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = 29LLU;
	static volatile uint64_t t29 = 0LLU;

	t29 = (((x129%x130)+x131)+x132);

	if (t29 != 4294967333LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 174U;
	static volatile int32_t x134 = 168597;
	volatile int8_t x135 = -7;
	static volatile uint32_t x136 = 1661372U;
	volatile uint32_t t30 = 903U;

	t30 = (((x133%x134)+x135)+x136);

	if (t30 != 1661539U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x142 = INT8_MIN;
	int8_t x144 = INT8_MIN;

	t31 = (((x141%x142)+x143)+x144);

	if (t31 != -129LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x145 = 39U;
	int64_t x147 = -2370952LL;
	uint64_t t32 = 322730LLU;

	t32 = (((x145%x146)+x147)+x148);

	if (t32 != 18446744071559697055LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint8_t x150 = 1U;
	uint16_t x152 = 2U;
	static int32_t t33 = -185;

	t33 = (((x149%x150)+x151)+x152);

	if (t33 != 129) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -1;
	int64_t x154 = INT64_MIN;
	volatile int16_t x155 = INT16_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int64_t t34 = 51194754148125LL;

	t34 = (((x153%x154)+x155)+x156);

	if (t34 != 98301LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = -1;
	int16_t x159 = 7;
	static int32_t x160 = -765039558;

	t35 = (((x157%x158)+x159)+x160);

	if (t35 != 104857514519394602LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = INT32_MAX;
	int32_t x162 = 56829;
	static int16_t x163 = -60;
	int8_t x164 = INT8_MAX;
	int32_t t36 = -15252;

	t36 = (((x161%x162)+x163)+x164);

	if (t36 != 29462) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MAX;
	volatile uint64_t t37 = 78595050602801LLU;

	t37 = (((x169%x170)+x171)+x172);

	if (t37 != 129LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MAX;
	int32_t x174 = INT32_MIN;
	static int32_t x175 = INT32_MAX;
	int64_t x176 = 540151629LL;

	t38 = (((x173%x174)+x175)+x176);

	if (t38 != 4835118923LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int8_t x182 = -8;
	int16_t x183 = -7260;
	uint64_t t39 = 2LLU;

	t39 = (((x181%x182)+x183)+x184);

	if (t39 != 18446744073709544362LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = INT16_MAX;
	uint16_t x187 = UINT16_MAX;
	uint16_t x188 = UINT16_MAX;
	static volatile int32_t t40 = -2;

	t40 = (((x185%x186)+x187)+x188);

	if (t40 != 131068) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x193 = 30;
	static uint16_t x194 = UINT16_MAX;
	static uint8_t x195 = 30U;
	int64_t x196 = INT64_MIN;
	int64_t t41 = 70588LL;

	t41 = (((x193%x194)+x195)+x196);

	if (t41 != -9223372036854775748LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x198 = INT64_MAX;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = -1;
	static int64_t t42 = -1748601364520314252LL;

	t42 = (((x197%x198)+x199)+x200);

	if (t42 != 126LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	volatile uint16_t x203 = 1U;
	uint64_t x204 = 369484310LLU;
	volatile uint64_t t43 = 8064841411122LLU;

	t43 = (((x201%x202)+x203)+x204);

	if (t43 != 369484311LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x206 = 1;
	int32_t x207 = INT32_MIN;
	static int64_t x208 = 38LL;
	int64_t t44 = 65389613921LL;

	t44 = (((x205%x206)+x207)+x208);

	if (t44 != -2147483610LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x213 = 1LLU;
	static volatile int8_t x214 = -1;
	static uint64_t x215 = 210429809072409LLU;
	static uint8_t x216 = 1U;

	t45 = (((x213%x214)+x215)+x216);

	if (t45 != 210429809072411LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 3655U;

	t46 = (((x217%x218)+x219)+x220);

	if (t46 != 3622LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	int16_t x224 = 749;
	volatile int64_t t47 = 12099811233LL;

	t47 = (((x221%x222)+x223)+x224);

	if (t47 != 621LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x225 = UINT32_MAX;
	uint32_t x226 = 1539075717U;
	static volatile int32_t x227 = -1;
	int16_t x228 = INT16_MIN;
	uint32_t t48 = 996U;

	t48 = (((x225%x226)+x227)+x228);

	if (t48 != 1216783092U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = 9;
	int32_t x230 = -1;
	static int64_t x231 = INT64_MIN;
	volatile int16_t x232 = 10;
	int64_t t49 = 384009379LL;

	t49 = (((x229%x230)+x231)+x232);

	if (t49 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MAX;
	static int64_t x234 = -1LL;
	static uint16_t x235 = 0U;
	int16_t x236 = 11;
	static int64_t t50 = -4547653007128560604LL;

	t50 = (((x233%x234)+x235)+x236);

	if (t50 != 11LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 1U;
	volatile uint64_t x238 = UINT64_MAX;
	int32_t x239 = 214722;
	volatile int16_t x240 = 1;

	t51 = (((x237%x238)+x239)+x240);

	if (t51 != 214724LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = 12;
	static uint64_t x244 = 319670137824755736LLU;
	static uint64_t t52 = 44589652675019468LLU;

	t52 = (((x241%x242)+x243)+x244);

	if (t52 != 319670137734503142LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	static uint8_t x248 = UINT8_MAX;

	t53 = (((x245%x246)+x247)+x248);

	if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	static volatile int16_t x252 = -1;
	volatile uint64_t t54 = 102080LLU;

	t54 = (((x249%x250)+x251)+x252);

	if (t54 != 254LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 258;
	static uint8_t x256 = 0U;
	volatile int32_t t55 = -560036238;

	t55 = (((x253%x254)+x255)+x256);

	if (t55 != 767919907) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = -12079;
	static int8_t x258 = INT8_MAX;
	uint16_t x259 = 199U;
	static volatile uint16_t x260 = 101U;
	static volatile int32_t t56 = 5003239;

	t56 = (((x257%x258)+x259)+x260);

	if (t56 != 286) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = -1;
	volatile uint16_t x262 = UINT16_MAX;
	int64_t x263 = -1LL;
	static int8_t x264 = INT8_MAX;
	int64_t t57 = -10LL;

	t57 = (((x261%x262)+x263)+x264);

	if (t57 != 125LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = -1;
	static uint8_t x272 = 10U;
	int32_t t58 = 310618019;

	t58 = (((x269%x270)+x271)+x272);

	if (t58 != -118) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = 1;
	int32_t x274 = -82;
	int8_t x275 = 2;
	static int64_t x276 = -12059268587LL;
	int64_t t59 = -4421031410LL;

	t59 = (((x273%x274)+x275)+x276);

	if (t59 != -12059268584LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x278 = 1243U;
	volatile int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MAX;

	t60 = (((x277%x278)+x279)+x280);

	if (t60 != 9223372036854775099LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x282 = -1;
	uint16_t x283 = 0U;
	static int64_t x284 = INT64_MIN;

	t61 = (((x281%x282)+x283)+x284);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -587251LL;
	uint64_t x287 = 24014175LLU;
	int64_t x288 = INT64_MIN;
	static uint64_t t62 = 54212799829006LLU;

	t62 = (((x285%x286)+x287)+x288);

	if (t62 != 9223372036878789983LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = 1216855923787LL;
	int32_t x290 = INT32_MAX;
	static uint64_t x291 = 98452081069431LLU;
	static uint64_t t63 = 1756LLU;

	t63 = (((x289%x290)+x291)+x292);

	if (t63 != 98453461249021LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x293 = INT16_MAX;
	uint32_t x294 = 290983868U;
	volatile uint16_t x296 = 1U;
	volatile uint64_t t64 = 1540714268408815557LLU;

	t64 = (((x293%x294)+x295)+x296);

	if (t64 != 1568963141LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 1216697061LLU;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MAX;
	int64_t x300 = -596883348081LL;

	t65 = (((x297%x298)+x299)+x300);

	if (t65 != 18446743478042900723LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x302 = INT64_MIN;
	uint16_t x303 = 5U;
	int8_t x304 = INT8_MAX;
	volatile int64_t t66 = -61021416LL;

	t66 = (((x301%x302)+x303)+x304);

	if (t66 != 65667LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x305 = 0;
	volatile uint64_t x306 = 115421134971795LLU;
	int16_t x307 = INT16_MAX;
	static int64_t x308 = INT64_MIN;
	uint64_t t67 = 276032115536009643LLU;

	t67 = (((x305%x306)+x307)+x308);

	if (t67 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = 111U;
	int16_t x310 = -52;

	t68 = (((x309%x310)+x311)+x312);

	if (t68 != 2147483764U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x313 = 14474147839120483LLU;
	volatile int8_t x314 = INT8_MIN;

	t69 = (((x313%x314)+x315)+x316);

	if (t69 != 9237846184693896418LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile uint64_t x318 = 419804030LLU;
	static volatile int64_t x319 = 52305630048631067LL;
	uint32_t x320 = 1542799364U;
	static volatile uint64_t t70 = 405LLU;

	t70 = (((x317%x318)+x319)+x320);

	if (t70 != 52305631899984899LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x322 = INT8_MAX;
	int16_t x323 = -6;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t71 = -207;

	t71 = (((x321%x322)+x323)+x324);

	if (t71 != 145) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x325 = 31642U;
	int32_t x326 = -1827;
	uint16_t x328 = 28U;

	t72 = (((x325%x326)+x327)+x328);

	if (t72 != 298998948U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = 1;
	static uint64_t x334 = 1252LLU;
	uint8_t x335 = UINT8_MAX;
	int8_t x336 = -1;
	volatile uint64_t t73 = 981778699387701LLU;

	t73 = (((x333%x334)+x335)+x336);

	if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x338 = 2694614849174855LLU;
	int32_t x340 = -209583;
	uint64_t t74 = 339185329728850143LLU;

	t74 = (((x337%x338)+x339)+x340);

	if (t74 != 2105431126575953LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x345 = UINT32_MAX;
	static int32_t x347 = -1;
	uint16_t x348 = UINT16_MAX;
	volatile uint32_t t75 = 19106724U;

	t75 = (((x345%x346)+x347)+x348);

	if (t75 != 65537U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = 2U;
	uint16_t x350 = 10U;
	int16_t x351 = -1;
	uint32_t t76 = 7219173U;

	t76 = (((x349%x350)+x351)+x352);

	if (t76 != 4294967169U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	int32_t t77 = 1044210130;

	t77 = (((x353%x354)+x355)+x356);

	if (t77 != 2147483438) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = -1;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = -1;
	int8_t x360 = -1;
	static uint64_t t78 = 4403LLU;

	t78 = (((x357%x358)+x359)+x360);

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x361 = 0U;
	static int16_t x362 = INT16_MIN;
	uint8_t x363 = 43U;
	volatile uint32_t x364 = 101780U;
	uint32_t t79 = 1503264694U;

	t79 = (((x361%x362)+x363)+x364);

	if (t79 != 101823U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x365 = -1LL;
	int64_t x366 = -1LL;
	static int64_t x367 = 2982070424733061805LL;
	int16_t x368 = INT16_MIN;
	volatile int64_t t80 = 282067235198614256LL;

	t80 = (((x365%x366)+x367)+x368);

	if (t80 != 2982070424733029037LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x369 = INT32_MAX;
	int64_t x371 = -708621607135600LL;
	int32_t x372 = -1;
	int64_t t81 = -12755LL;

	t81 = (((x369%x370)+x371)+x372);

	if (t81 != -708619459651954LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x373 = UINT32_MAX;
	volatile uint64_t x374 = UINT64_MAX;
	volatile int16_t x375 = -1;
	uint64_t t82 = 32LLU;

	t82 = (((x373%x374)+x375)+x376);

	if (t82 != 4294934526LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	static uint16_t x380 = 1851U;
	static int32_t t83 = -1;

	t83 = (((x377%x378)+x379)+x380);

	if (t83 != 67386) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = -1;
	uint16_t x382 = 55U;
	int64_t x383 = -7004092069060LL;
	int32_t x384 = -22242716;
	int64_t t84 = -226328191LL;

	t84 = (((x381%x382)+x383)+x384);

	if (t84 != -7004114311777LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = 20U;
	volatile uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t85 = 7LLU;

	t85 = (((x385%x386)+x387)+x388);

	if (t85 != 32787LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x396 = 2473LLU;

	t86 = (((x393%x394)+x395)+x396);

	if (t86 != 2476LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x397 = -2;
	int64_t x398 = 13136757558956481LL;
	int32_t x400 = 917513;
	volatile int64_t t87 = -86055857232336990LL;

	t87 = (((x397%x398)+x399)+x400);

	if (t87 != -266126638LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = -1;
	volatile int64_t x410 = INT64_MAX;
	uint16_t x411 = UINT16_MAX;
	volatile int64_t t88 = -839500512487150524LL;

	t88 = (((x409%x410)+x411)+x412);

	if (t88 != 65533LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x413 = INT32_MIN;
	int64_t x414 = INT64_MAX;
	uint16_t x415 = 0U;

	t89 = (((x413%x414)+x415)+x416);

	if (t89 != -2147483575LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = -1;
	volatile uint16_t x418 = 3U;
	int32_t x419 = -1;
	static int64_t x420 = -1LL;

	t90 = (((x417%x418)+x419)+x420);

	if (t90 != -3LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x422 = 1;
	volatile uint8_t x423 = 30U;
	int16_t x424 = INT16_MAX;
	int32_t t91 = -22475;

	t91 = (((x421%x422)+x423)+x424);

	if (t91 != 32797) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x429 = -1LL;
	int16_t x431 = -1;
	int64_t x432 = -772295169785895LL;

	t92 = (((x429%x430)+x431)+x432);

	if (t92 != -772295169785897LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = 850;
	int64_t x438 = 908287382LL;
	static uint64_t x439 = 515649218926LLU;
	uint16_t x440 = 435U;
	static uint64_t t93 = 1027711594246LLU;

	t93 = (((x437%x438)+x439)+x440);

	if (t93 != 515649220211LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x442 = INT8_MIN;
	uint16_t x443 = 29U;

	t94 = (((x441%x442)+x443)+x444);

	if (t94 != -8995) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x445 = UINT16_MAX;
	static int8_t x446 = INT8_MIN;
	volatile uint16_t x447 = UINT16_MAX;
	static uint8_t x448 = UINT8_MAX;
	volatile int32_t t95 = 73;

	t95 = (((x445%x446)+x447)+x448);

	if (t95 != 65917) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x450 = -1;
	static uint32_t x452 = 9238000U;
	uint32_t t96 = 54451187U;

	t96 = (((x449%x450)+x451)+x452);

	if (t96 != 9238255U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x457 = UINT64_MAX;
	int8_t x459 = -1;
	int16_t x460 = -1;
	uint64_t t97 = 5897548322841373LLU;

	t97 = (((x457%x458)+x459)+x460);

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x461 = 15;
	uint32_t x462 = UINT32_MAX;
	volatile uint32_t x464 = 109698U;
	static volatile uint32_t t98 = 27U;

	t98 = (((x461%x462)+x463)+x464);

	if (t98 != 76945U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x465 = 6U;
	volatile int16_t x466 = INT16_MAX;
	int16_t x467 = INT16_MAX;
	volatile int64_t x468 = INT64_MIN;

	t99 = (((x465%x466)+x467)+x468);

	if (t99 != -9223372036854743035LL) { NG(); } else { ; }
	
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

