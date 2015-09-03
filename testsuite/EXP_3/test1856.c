#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = -1LL;
uint8_t x7 = UINT8_MAX;
uint32_t x11 = UINT32_MAX;
volatile uint16_t x23 = 3054U;
int32_t x35 = INT32_MAX;
int16_t x39 = -1;
volatile int32_t t9 = -1;
static int8_t x46 = -1;
int32_t x47 = -1;
static int32_t x58 = INT32_MIN;
uint32_t x62 = UINT32_MAX;
static int32_t t15 = 2467;
int32_t t16 = -2607910;
int8_t x74 = -1;
volatile int8_t x80 = -1;
volatile int16_t x85 = INT16_MIN;
int8_t x87 = 5;
int32_t t22 = 129787762;
uint8_t x95 = 2U;
volatile int32_t t24 = -205;
static volatile int32_t x110 = INT32_MAX;
int8_t x111 = -1;
int32_t t29 = 439355;
int8_t x126 = INT8_MIN;
static int32_t t31 = 477;
volatile uint64_t x130 = 144701LLU;
int8_t x132 = INT8_MIN;
static int8_t x136 = INT8_MIN;
int32_t x145 = INT32_MIN;
uint8_t x155 = 0U;
volatile int32_t t39 = -10488;
int32_t x161 = -1;
uint16_t x165 = 46U;
static uint8_t x167 = 1U;
int16_t x168 = -3355;
int8_t x170 = 2;
volatile int32_t t42 = 710;
volatile int16_t x175 = -1976;
int32_t t45 = -14053;
int32_t t46 = -81;
uint16_t x197 = 31981U;
int8_t x199 = INT8_MIN;
static volatile int16_t x206 = INT16_MIN;
int8_t x207 = INT8_MIN;
int32_t x218 = -5161021;
int8_t x228 = INT8_MAX;
int64_t x232 = 1LL;
int8_t x233 = 1;
int64_t x239 = -89LL;
volatile int16_t x241 = INT16_MAX;
int64_t x244 = 3051461155744296LL;
int64_t x248 = INT64_MAX;
static int32_t x255 = INT32_MIN;
int8_t x256 = 11;
static uint32_t x264 = UINT32_MAX;
int32_t t65 = 151;
int32_t x265 = INT32_MIN;
int8_t x269 = INT8_MIN;
volatile int64_t x288 = -1LL;
int64_t x294 = INT64_MAX;
volatile uint16_t x299 = 1U;
volatile int8_t x314 = -49;
uint32_t x315 = 470111818U;
int8_t x326 = -1;
volatile int32_t t81 = -111486161;
volatile int32_t t82 = 9;
int8_t x343 = -1;
int32_t x348 = INT32_MIN;
int32_t x360 = 1;
uint16_t x363 = 4U;
static uint64_t x366 = 344525424084324322LLU;
int64_t x371 = INT64_MIN;
int64_t x374 = INT64_MIN;
uint32_t x377 = 699U;
uint16_t x383 = 207U;
volatile int64_t x389 = INT64_MIN;
uint64_t x392 = 172461LLU;
volatile uint16_t x399 = 73U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = -187124578LL;
	uint16_t x4 = 53U;
	volatile int32_t t0 = 3;

	t0 = ((x1^x2)<=(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = 77;
	static int8_t x6 = 20;
	int8_t x8 = -1;
	volatile int32_t t1 = 258332011;

	t1 = ((x5^x6)<=(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = -1;
	static int64_t x12 = INT64_MIN;
	int32_t t2 = -182078;

	t2 = ((x9^x10)<=(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	static uint16_t x14 = 8131U;
	int64_t x15 = -201525281949784766LL;
	static uint16_t x16 = 5U;
	volatile int32_t t3 = 1;

	t3 = ((x13^x14)<=(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	uint32_t x18 = 905U;
	volatile uint64_t x19 = 12167LLU;
	uint16_t x20 = 0U;
	static volatile int32_t t4 = 1962;

	t4 = ((x17^x18)<=(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile uint64_t x22 = 369625924LLU;
	static volatile uint32_t x24 = 102U;
	volatile int32_t t5 = 151494;

	t5 = ((x21^x22)<=(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 814735U;
	int32_t x26 = INT32_MAX;
	int64_t x27 = -89736LL;
	int16_t x28 = 0;
	int32_t t6 = 1;

	t6 = ((x25^x26)<=(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1U;
	volatile int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	uint64_t x32 = 0LLU;
	int32_t t7 = 5;

	t7 = ((x29^x30)<=(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	int16_t x34 = -1;
	static volatile int16_t x36 = 3;
	static int32_t t8 = 156;

	t8 = ((x33^x34)<=(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x40 = 377914761LLU;

	t9 = ((x37^x38)<=(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -19;
	uint64_t x42 = 38LLU;
	volatile int16_t x43 = -1;
	static volatile uint64_t x44 = 76121832119811LLU;
	int32_t t10 = 846;

	t10 = ((x41^x42)<=(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	static uint32_t x48 = 52159918U;
	int32_t t11 = 315589688;

	t11 = ((x45^x46)<=(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 12125093U;
	uint64_t x50 = 1140920LLU;
	volatile int16_t x51 = -1;
	static int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 12384368;

	t12 = ((x49^x50)<=(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 16U;
	static int64_t x54 = -1LL;
	volatile int8_t x55 = INT8_MIN;
	uint64_t x56 = 14LLU;
	int32_t t13 = 1611;

	t13 = ((x53^x54)<=(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -7120386427LL;
	uint16_t x59 = UINT16_MAX;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = -132483710;

	t14 = ((x57^x58)<=(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 7U;
	int8_t x63 = INT8_MAX;
	static int64_t x64 = INT64_MIN;

	t15 = ((x61^x62)<=(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	static int32_t x66 = 4837684;
	uint64_t x67 = 6358312767095LLU;
	uint8_t x68 = 0U;

	t16 = ((x65^x66)<=(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MIN;
	static uint64_t x71 = 293682948LLU;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -207;

	t17 = ((x69^x70)<=(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	static volatile int8_t x76 = INT8_MAX;
	int32_t t18 = -92763;

	t18 = ((x73^x74)<=(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	int8_t x79 = -29;
	static volatile int32_t t19 = -46934158;

	t19 = ((x77^x78)<=(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	static volatile int16_t x84 = -1;
	int32_t t20 = -344;

	t20 = ((x81^x82)<=(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -4873858;

	t21 = ((x85^x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -730LL;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	volatile uint16_t x92 = 25U;

	t22 = ((x89^x90)<=(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	static int32_t x94 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t23 = 512466;

	t23 = ((x93^x94)<=(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	volatile int16_t x99 = -1;
	static uint64_t x100 = 37683652338240LLU;

	t24 = ((x97^x98)<=(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t x104 = INT32_MIN;
	int32_t t25 = 1;

	t25 = ((x101^x102)<=(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int32_t x106 = INT32_MAX;
	int16_t x107 = -1;
	static uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = -14103300;

	t26 = ((x105^x106)<=(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -16023;
	uint64_t x112 = 3528968125LLU;
	volatile int32_t t27 = -474393;

	t27 = ((x109^x110)<=(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = UINT16_MAX;
	int32_t x114 = 33864372;
	static int32_t x115 = -379379;
	int32_t x116 = INT32_MIN;
	int32_t t28 = -22678792;

	t28 = ((x113^x114)<=(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 1668612577036597751LLU;
	volatile int8_t x118 = 0;
	volatile uint16_t x119 = UINT16_MAX;
	uint16_t x120 = UINT16_MAX;

	t29 = ((x117^x118)<=(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -97195LL;
	volatile int64_t x122 = INT64_MAX;
	int8_t x123 = -1;
	int16_t x124 = -1;
	volatile int32_t t30 = 65;

	t30 = ((x121^x122)<=(x123&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 111U;
	int8_t x127 = -2;
	uint64_t x128 = 1767679LLU;

	t31 = ((x125^x126)<=(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	static uint32_t x131 = UINT32_MAX;
	int32_t t32 = -249724889;

	t32 = ((x129^x130)<=(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int32_t x134 = -1698724;
	int32_t x135 = -1;
	int32_t t33 = -48623;

	t33 = ((x133^x134)<=(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	volatile int32_t x139 = -1;
	volatile int64_t x140 = 7280LL;
	int32_t t34 = 1104;

	t34 = ((x137^x138)<=(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = -1;
	int64_t x144 = 2564207702096655916LL;
	int32_t t35 = -22774317;

	t35 = ((x141^x142)<=(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -76;
	volatile int16_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -12886;

	t36 = ((x145^x146)<=(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	static int64_t x150 = 212711400213448033LL;
	int64_t x151 = -1029949164969655LL;
	uint8_t x152 = UINT8_MAX;
	int32_t t37 = 924186;

	t37 = ((x149^x150)<=(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 8U;
	int16_t x154 = INT16_MIN;
	int32_t x156 = -1;
	int32_t t38 = -187;

	t38 = ((x153^x154)<=(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	volatile uint32_t x159 = UINT32_MAX;
	int32_t x160 = 23;

	t39 = ((x157^x158)<=(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 2859U;
	int8_t x163 = INT8_MIN;
	int16_t x164 = 14317;
	static volatile int32_t t40 = -1707;

	t40 = ((x161^x162)<=(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = 533456546;
	volatile int32_t t41 = 576435;

	t41 = ((x165^x166)<=(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = 30114LLU;
	static uint16_t x171 = 13U;
	uint16_t x172 = 499U;

	t42 = ((x169^x170)<=(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x174 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t43 = -179267561;

	t43 = ((x173^x174)<=(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 16935LL;
	int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 812635;

	t44 = ((x177^x178)<=(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -1;
	static volatile uint16_t x182 = 0U;
	volatile int64_t x183 = -8259548128LL;
	static int16_t x184 = INT16_MAX;

	t45 = ((x181^x182)<=(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int64_t x186 = INT64_MIN;
	volatile int64_t x187 = INT64_MAX;
	volatile uint32_t x188 = UINT32_MAX;

	t46 = ((x185^x186)<=(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 5312U;
	uint32_t x190 = 398573348U;
	volatile int8_t x191 = -1;
	int8_t x192 = INT8_MAX;
	int32_t t47 = 6598682;

	t47 = ((x189^x190)<=(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	static int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	int32_t x196 = -1;
	int32_t t48 = 62;

	t48 = ((x193^x194)<=(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	volatile int32_t x200 = INT32_MIN;
	static volatile int32_t t49 = -390988;

	t49 = ((x197^x198)<=(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 1641;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = -177;
	static int32_t t50 = -393;

	t50 = ((x201^x202)<=(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	uint32_t x208 = UINT32_MAX;
	static int32_t t51 = 4441;

	t51 = ((x205^x206)<=(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 5;
	int16_t x210 = -1;
	uint16_t x211 = 1U;
	int16_t x212 = 0;
	int32_t t52 = 390187694;

	t52 = ((x209^x210)<=(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = UINT16_MAX;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 65U;
	static uint64_t x216 = UINT64_MAX;
	volatile int32_t t53 = -58;

	t53 = ((x213^x214)<=(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 3;
	int16_t x219 = -1190;
	volatile int64_t x220 = -1LL;
	int32_t t54 = -273;

	t54 = ((x217^x218)<=(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = UINT16_MAX;
	volatile int32_t x223 = -1;
	int64_t x224 = INT64_MIN;
	int32_t t55 = -503;

	t55 = ((x221^x222)<=(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static int32_t x226 = -4;
	volatile int8_t x227 = INT8_MIN;
	volatile int32_t t56 = 2229;

	t56 = ((x225^x226)<=(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 13450061U;
	static uint16_t x230 = 3493U;
	int32_t x231 = INT32_MIN;
	int32_t t57 = -3179;

	t57 = ((x229^x230)<=(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	static int8_t x235 = INT8_MIN;
	int8_t x236 = -2;
	static int32_t t58 = -752041;

	t58 = ((x233^x234)<=(x235&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 6966;
	int32_t x238 = INT32_MIN;
	int8_t x240 = -1;
	int32_t t59 = 3;

	t59 = ((x237^x238)<=(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;
	static int64_t x243 = -1LL;
	int32_t t60 = -3573987;

	t60 = ((x241^x242)<=(x243&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 125U;
	volatile int8_t x246 = 2;
	volatile int64_t x247 = -307204934LL;
	static volatile int32_t t61 = 0;

	t61 = ((x245^x246)<=(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 15U;
	volatile int16_t x250 = INT16_MIN;
	int16_t x251 = 1;
	int8_t x252 = -54;
	volatile int32_t t62 = 1;

	t62 = ((x249^x250)<=(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MAX;
	uint32_t x254 = 11802262U;
	volatile int32_t t63 = 1;

	t63 = ((x253^x254)<=(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	int64_t x258 = 238223736538LL;
	volatile uint8_t x259 = 60U;
	uint16_t x260 = 53U;
	int32_t t64 = -104333;

	t64 = ((x257^x258)<=(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -669080425;
	volatile int16_t x262 = INT16_MIN;
	uint8_t x263 = 95U;

	t65 = ((x261^x262)<=(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 1U;
	uint8_t x267 = 1U;
	uint32_t x268 = 2175015U;
	int32_t t66 = -1983746;

	t66 = ((x265^x266)<=(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 2029U;
	int8_t x271 = -1;
	int32_t x272 = -42307;
	volatile int32_t t67 = 248735614;

	t67 = ((x269^x270)<=(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 0U;
	int64_t x274 = INT64_MAX;
	static int64_t x275 = INT64_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -79370273;

	t68 = ((x273^x274)<=(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	uint8_t x278 = 43U;
	static int32_t x279 = 952687543;
	uint16_t x280 = 4084U;
	volatile int32_t t69 = 933333538;

	t69 = ((x277^x278)<=(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile uint64_t x282 = 12068954LLU;
	static uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	static volatile int32_t t70 = -14;

	t70 = ((x281^x282)<=(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -424541330LL;
	uint64_t x286 = 11690028LLU;
	volatile int8_t x287 = INT8_MAX;
	int32_t t71 = -25285483;

	t71 = ((x285^x286)<=(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	volatile int32_t x290 = -1;
	int8_t x291 = -1;
	int64_t x292 = -1LL;
	int32_t t72 = -162;

	t72 = ((x289^x290)<=(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 18075577974943LLU;
	volatile int32_t x295 = -1;
	int32_t x296 = -8644293;
	volatile int32_t t73 = -1707758;

	t73 = ((x293^x294)<=(x295&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = -24;

	t74 = ((x297^x298)<=(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = INT16_MIN;
	int8_t x303 = 1;
	int64_t x304 = -8596344LL;
	static volatile int32_t t75 = 78327932;

	t75 = ((x301^x302)<=(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x305 = 0;
	int32_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;
	static int32_t x308 = INT32_MAX;
	int32_t t76 = 0;

	t76 = ((x305^x306)<=(x307&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	uint64_t x310 = 5144201359991LLU;
	int8_t x311 = -1;
	volatile uint16_t x312 = 13769U;
	volatile int32_t t77 = 9305;

	t77 = ((x309^x310)<=(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 5046U;
	int32_t x316 = 1795996;
	volatile int32_t t78 = 100956346;

	t78 = ((x313^x314)<=(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 14829065LLU;
	volatile int16_t x318 = 351;
	static volatile int8_t x319 = INT8_MAX;
	static volatile int64_t x320 = INT64_MIN;
	volatile int32_t t79 = 2475;

	t79 = ((x317^x318)<=(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	uint8_t x322 = UINT8_MAX;
	static int16_t x323 = -47;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 306;

	t80 = ((x321^x322)<=(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	int8_t x328 = -1;

	t81 = ((x325^x326)<=(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = 28127U;
	int16_t x330 = INT16_MAX;
	static int64_t x331 = -1LL;
	static int8_t x332 = -1;

	t82 = ((x329^x330)<=(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	volatile int16_t x334 = -1;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 1U;
	volatile int32_t t83 = 0;

	t83 = ((x333^x334)<=(x335&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -71;
	static int8_t x338 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	static int64_t x340 = -1LL;
	volatile int32_t t84 = -3;

	t84 = ((x337^x338)<=(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = INT8_MAX;
	static int8_t x342 = INT8_MIN;
	uint32_t x344 = 1932967U;
	int32_t t85 = 442;

	t85 = ((x341^x342)<=(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 404799;
	int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	volatile int32_t t86 = 4629501;

	t86 = ((x345^x346)<=(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = UINT16_MAX;
	uint64_t x350 = 56989309940708LLU;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MAX;
	int32_t t87 = 59;

	t87 = ((x349^x350)<=(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 1160806034LL;
	volatile int64_t x354 = -375671626281764LL;
	volatile int16_t x355 = -175;
	int32_t x356 = INT32_MIN;
	static int32_t t88 = -439384;

	t88 = ((x353^x354)<=(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 8U;
	int64_t x358 = -31438928509LL;
	uint64_t x359 = UINT64_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x357^x358)<=(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x364 = -1;
	volatile int32_t t90 = -323;

	t90 = ((x361^x362)<=(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 4113120195122617LLU;
	int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = 47912;

	t91 = ((x365^x366)<=(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 4LLU;
	volatile int16_t x370 = -49;
	static int64_t x372 = 4119522796660LL;
	volatile int32_t t92 = -468227;

	t92 = ((x369^x370)<=(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = 18;
	int32_t x375 = -12848832;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -174;

	t93 = ((x373^x374)<=(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x378 = UINT8_MAX;
	int32_t x379 = -3002424;
	int32_t x380 = -1;
	int32_t t94 = -145075796;

	t94 = ((x377^x378)<=(x379&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 905;
	int32_t x382 = -182938;
	uint64_t x384 = 789148469967369LLU;
	int32_t t95 = -244;

	t95 = ((x381^x382)<=(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 202352236U;
	uint16_t x386 = 1U;
	static volatile int8_t x387 = INT8_MAX;
	volatile int64_t x388 = 126LL;
	int32_t t96 = -248126795;

	t96 = ((x385^x386)<=(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x390 = 14559918LLU;
	int64_t x391 = -27415LL;
	volatile int32_t t97 = -1704;

	t97 = ((x389^x390)<=(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = -1;
	volatile int16_t x396 = INT16_MIN;
	static int32_t t98 = -1304181;

	t98 = ((x393^x394)<=(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -305674;
	volatile uint64_t x398 = 280595362LLU;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t99 = -109161;

	t99 = ((x397^x398)<=(x399&x400));

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

