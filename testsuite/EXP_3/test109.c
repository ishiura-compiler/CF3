#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t1 = 220LL;
uint8_t x13 = UINT8_MAX;
int32_t t2 = 0;
uint64_t x17 = 57908415209641458LLU;
int32_t t3 = 99338;
uint8_t x26 = 3U;
uint32_t x28 = UINT32_MAX;
int32_t x42 = -1;
volatile int32_t t7 = 22;
int64_t x46 = INT64_MAX;
static int8_t x54 = INT8_MIN;
int64_t x56 = 33077506640368LL;
int64_t t10 = -496LL;
static int64_t x66 = INT64_MIN;
int64_t x95 = -11137767LL;
int64_t x101 = INT64_MIN;
int64_t x102 = INT64_MIN;
uint64_t x104 = 1LLU;
int64_t x113 = -1LL;
int8_t x121 = -3;
uint8_t x122 = 6U;
volatile int16_t x126 = 15203;
volatile uint8_t x134 = UINT8_MAX;
uint8_t x143 = 3U;
int8_t x149 = 11;
volatile int64_t x150 = -1LL;
volatile int32_t t32 = 228141537;
int64_t x162 = INT64_MAX;
int32_t x163 = -308;
uint16_t x164 = 35U;
static volatile int32_t x170 = 105724068;
volatile int64_t x171 = -190027111LL;
int32_t x173 = INT32_MIN;
static int64_t x176 = 0LL;
int64_t t36 = -36098552590864LL;
uint64_t x178 = 24255124LLU;
int64_t x181 = INT64_MAX;
static int8_t x183 = INT8_MAX;
volatile int32_t t38 = 113228;
volatile int32_t t40 = 0;
static volatile int32_t t42 = 1;
static volatile int32_t x201 = 1;
volatile int32_t x205 = 209;
int64_t x206 = 624LL;
volatile uint64_t x226 = 0LLU;
int8_t x227 = -24;
int16_t x230 = -1;
static uint32_t x231 = UINT32_MAX;
static volatile int64_t x232 = INT64_MIN;
int32_t x233 = INT32_MAX;
volatile int8_t x234 = INT8_MAX;
volatile uint64_t x236 = UINT64_MAX;
static int64_t x237 = INT64_MIN;
static volatile uint16_t x244 = 0U;
volatile int64_t x247 = 0LL;
static volatile uint16_t x248 = UINT16_MAX;
int8_t x255 = INT8_MAX;
int16_t x256 = -1;
uint32_t x260 = 31U;
int8_t x263 = INT8_MIN;
int64_t x270 = -407275957256313LL;
static volatile int64_t t59 = 920024223102518949LL;
int64_t t60 = 0LL;
volatile uint64_t t61 = 1006623LLU;
static uint16_t x291 = UINT16_MAX;
volatile int32_t x295 = -1;
static int64_t x296 = -1LL;
volatile int64_t t63 = -1115909LL;
int64_t x298 = INT64_MIN;
uint32_t x301 = UINT32_MAX;
int8_t x309 = 1;
volatile int32_t x327 = 4427384;
static volatile int32_t x330 = -1;
static uint8_t x331 = 7U;
static int16_t x335 = 3;
int64_t t70 = 18187336LL;
int16_t x343 = -1;
static int64_t x347 = -11041552LL;
volatile int16_t x354 = -1;
static uint64_t x355 = 8137830473947863LLU;
int8_t x356 = 9;
uint64_t t76 = 8930550786942463LLU;
static uint32_t x366 = UINT32_MAX;
int8_t x368 = -1;
volatile int32_t t78 = -29753814;
static int16_t x372 = -4457;
volatile int32_t t79 = -3210;
static volatile int32_t x373 = INT32_MIN;
int8_t x374 = INT8_MIN;
uint64_t t80 = 20264736LLU;
int8_t x383 = INT8_MAX;
volatile uint16_t x388 = 116U;
int16_t x389 = INT16_MAX;
int16_t x390 = 15;
int8_t x391 = INT8_MIN;
static int32_t x404 = INT32_MIN;
uint8_t x411 = UINT8_MAX;
uint64_t x415 = 83236LLU;
int32_t t89 = 0;
volatile int64_t x421 = INT64_MAX;
uint64_t x426 = UINT64_MAX;
uint32_t x435 = 5U;
uint32_t t92 = 104U;
static int16_t x439 = -1;
int64_t t94 = -1LL;
uint16_t x446 = 0U;
static int16_t x448 = -1;
int32_t x453 = 0;
uint16_t x459 = 0U;
volatile int32_t t97 = 32555;


void f0(void) {
	int16_t x1 = 1;
	uint8_t x2 = 41U;
	static int32_t x3 = -11918;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 30189U;

	t0 = ((x1<x2)%(x3+x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = 6182431;
	int64_t x8 = -1LL;

	t1 = ((x5<x6)%(x7+x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x14 = -4043;
	int16_t x15 = -1;
	static int8_t x16 = -58;

	t2 = ((x13<x14)%(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 30U;
	static volatile uint16_t x19 = 18554U;
	uint16_t x20 = UINT16_MAX;

	t3 = ((x17<x18)%(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	int8_t x27 = 0;
	static uint32_t t4 = 1U;

	t4 = ((x25<x26)%(x27+x28));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 2046453LLU;
	uint32_t x30 = 173U;
	uint8_t x31 = UINT8_MAX;
	volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t5 = 91371105;

	t5 = ((x29<x30)%(x31+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x37 = 0LL;
	uint16_t x38 = 11035U;
	volatile int64_t x39 = -4057234523773LL;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 713057557089776583LLU;

	t6 = ((x37<x38)%(x39+x40));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = 2;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MAX;

	t7 = ((x41<x42)%(x43+x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	int16_t x47 = -1;
	int32_t x48 = -1;
	volatile int32_t t8 = -62838957;

	t8 = ((x45<x46)%(x47+x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 16368761LLU;
	int32_t x50 = -1;
	static int64_t x51 = INT64_MIN;
	static int32_t x52 = 29;
	static int64_t t9 = -25420830LL;

	t9 = ((x49<x50)%(x51+x52));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x55 = -5010814;

	t10 = ((x53<x54)%(x55+x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = -27;
	uint32_t x58 = 47759391U;
	int32_t x59 = INT32_MAX;
	static volatile int32_t x60 = INT32_MIN;
	int32_t t11 = 10976532;

	t11 = ((x57<x58)%(x59+x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MAX;
	int32_t x62 = -1;
	uint16_t x63 = 34U;
	static int64_t x64 = INT64_MIN;
	static volatile int64_t t12 = 1361275097263591LL;

	t12 = ((x61<x62)%(x63+x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MAX;
	uint32_t x67 = 238421U;
	int64_t x68 = -1LL;
	int64_t t13 = -19532615763349639LL;

	t13 = ((x65<x66)%(x67+x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MIN;
	uint16_t x71 = 16979U;
	int32_t x72 = INT32_MIN;
	int32_t t14 = 949;

	t14 = ((x69<x70)%(x71+x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = 430;
	uint64_t x78 = 5249LLU;
	volatile uint16_t x79 = 27990U;
	int16_t x80 = -1;
	volatile int32_t t15 = -113298;

	t15 = ((x77<x78)%(x79+x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x85 = INT16_MAX;
	int16_t x86 = -1500;
	uint32_t x87 = 9608U;
	int8_t x88 = INT8_MAX;
	static volatile uint32_t t16 = 113621U;

	t16 = ((x85<x86)%(x87+x88));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -485490349;
	static int64_t x90 = 3458652LL;
	static int16_t x91 = -1;
	int16_t x92 = INT16_MAX;
	int32_t t17 = -3790440;

	t17 = ((x89<x90)%(x91+x92));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = 507;
	int32_t x96 = -1;
	static volatile int64_t t18 = 22659415951LL;

	t18 = ((x93<x94)%(x95+x96));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 242LLU;
	int8_t x98 = -55;
	int16_t x99 = -1;
	volatile int64_t x100 = INT64_MAX;
	static int64_t t19 = -647127259282623LL;

	t19 = ((x97<x98)%(x99+x100));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x103 = 843911U;
	uint64_t t20 = 195196420729LLU;

	t20 = ((x101<x102)%(x103+x104));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x105 = -1;
	int16_t x106 = 500;
	int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t21 = -119972;

	t21 = ((x105<x106)%(x107+x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x114 = 3380608955011881LL;
	static int64_t x115 = INT64_MAX;
	static int16_t x116 = INT16_MIN;
	static volatile int64_t t22 = -312811849LL;

	t22 = ((x113<x114)%(x115+x116));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -1;
	uint8_t x118 = 2U;
	uint32_t x119 = UINT32_MAX;
	uint32_t x120 = 8U;
	uint32_t t23 = 479928786U;

	t23 = ((x117<x118)%(x119+x120));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x123 = INT16_MIN;
	uint32_t x124 = UINT32_MAX;
	uint32_t t24 = 7540070U;

	t24 = ((x121<x122)%(x123+x124));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = -3;
	int8_t x127 = INT8_MIN;
	int32_t x128 = -1;
	int32_t t25 = 4;

	t25 = ((x125<x126)%(x127+x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MAX;
	uint32_t x130 = 14395896U;
	int32_t x131 = INT32_MAX;
	int32_t x132 = -1945;
	volatile int32_t t26 = -3;

	t26 = ((x129<x130)%(x131+x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -1;
	int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t27 = 12104;

	t27 = ((x133<x134)%(x135+x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x137 = INT32_MAX;
	uint32_t x138 = 84U;
	int32_t x139 = -1;
	static uint16_t x140 = 1905U;
	int32_t t28 = -2;

	t28 = ((x137<x138)%(x139+x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x141 = INT64_MIN;
	static uint8_t x142 = 12U;
	int64_t x144 = -1LL;
	int64_t t29 = 1LL;

	t29 = ((x141<x142)%(x143+x144));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x145 = 1213743602LLU;
	volatile uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MIN;
	volatile uint16_t x148 = 113U;
	int32_t t30 = 2707222;

	t30 = ((x145<x146)%(x147+x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x151 = INT64_MAX;
	static int32_t x152 = INT32_MIN;
	volatile int64_t t31 = 64830LL;

	t31 = ((x149<x150)%(x151+x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -1;
	static int16_t x154 = INT16_MAX;
	static int16_t x155 = INT16_MAX;
	int32_t x156 = -40;

	t32 = ((x153<x154)%(x155+x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x161 = -1LL;
	static int32_t t33 = -6;

	t33 = ((x161<x162)%(x163+x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x165 = 19793931U;
	int32_t x166 = -72640;
	static volatile uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	uint64_t t34 = 44337715867LLU;

	t34 = ((x165<x166)%(x167+x168));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = -1;
	uint8_t x172 = 0U;
	volatile int64_t t35 = 7363234LL;

	t35 = ((x169<x170)%(x171+x172));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MAX;

	t36 = ((x173<x174)%(x175+x176));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x177 = INT64_MIN;
	static int8_t x179 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;
	int32_t t37 = 0;

	t37 = ((x177<x178)%(x179+x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x182 = -1LL;
	uint16_t x184 = UINT16_MAX;

	t38 = ((x181<x182)%(x183+x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = INT64_MIN;
	uint32_t x186 = 7868U;
	volatile uint16_t x187 = UINT16_MAX;
	volatile int64_t x188 = 163208870374018LL;
	int64_t t39 = -1LL;

	t39 = ((x185<x186)%(x187+x188));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = 8;
	int16_t x191 = -3;
	static int8_t x192 = 28;

	t40 = ((x189<x190)%(x191+x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = 3874U;
	static int8_t x195 = 6;
	int8_t x196 = INT8_MAX;
	volatile int32_t t41 = 1;

	t41 = ((x193<x194)%(x195+x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = -1LL;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MAX;

	t42 = ((x197<x198)%(x199+x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x202 = 2U;
	uint16_t x203 = UINT16_MAX;
	static int64_t x204 = 31975636005LL;
	volatile int64_t t43 = -57468402LL;

	t43 = ((x201<x202)%(x203+x204));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = 4404561891533543597LLU;
	uint64_t t44 = 26LLU;

	t44 = ((x205<x206)%(x207+x208));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x209 = -3;
	uint64_t x210 = 416606LLU;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 22732U;
	uint64_t t45 = 41317727LLU;

	t45 = ((x209<x210)%(x211+x212));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -1;
	volatile int64_t x214 = -1LL;
	int32_t x215 = -1;
	volatile int32_t x216 = -1;
	int32_t t46 = -488037350;

	t46 = ((x213<x214)%(x215+x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 30U;
	volatile int32_t x218 = -1;
	static int16_t x219 = INT16_MIN;
	volatile uint32_t x220 = 29871U;
	volatile uint32_t t47 = 16259610U;

	t47 = ((x217<x218)%(x219+x220));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x225 = INT8_MIN;
	volatile uint16_t x228 = 0U;
	static volatile int32_t t48 = 54124;

	t48 = ((x225<x226)%(x227+x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MIN;
	int64_t t49 = -19534533LL;

	t49 = ((x229<x230)%(x231+x232));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x235 = UINT16_MAX;
	uint64_t t50 = 12600723274041160LLU;

	t50 = ((x233<x234)%(x235+x236));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x238 = -1LL;
	volatile int8_t x239 = INT8_MAX;
	int16_t x240 = -1;
	int32_t t51 = 230917;

	t51 = ((x237<x238)%(x239+x240));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MIN;
	static int32_t x243 = INT32_MIN;
	int32_t t52 = 933;

	t52 = ((x241<x242)%(x243+x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MAX;
	volatile int64_t x246 = INT64_MIN;
	static int64_t t53 = -499893227869890LL;

	t53 = ((x245<x246)%(x247+x248));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = -1LL;
	static int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	static volatile uint32_t x252 = UINT32_MAX;
	volatile int64_t t54 = 1823891LL;

	t54 = ((x249<x250)%(x251+x252));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = 13643611;
	volatile int32_t t55 = 90;

	t55 = ((x253<x254)%(x255+x256));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = 0;
	static int8_t x258 = -2;
	volatile int32_t x259 = INT32_MIN;
	uint32_t t56 = 138621662U;

	t56 = ((x257<x258)%(x259+x260));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	int8_t x264 = 1;
	volatile int32_t t57 = -4197;

	t57 = ((x261<x262)%(x263+x264));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x269 = 590U;
	int8_t x271 = INT8_MAX;
	int32_t x272 = -60252783;
	volatile int32_t t58 = -8627526;

	t58 = ((x269<x270)%(x271+x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MIN;
	static int32_t x274 = 4345;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;

	t59 = ((x273<x274)%(x275+x276));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x281 = INT64_MAX;
	static volatile int8_t x282 = 14;
	int64_t x283 = -1LL;
	int32_t x284 = -1;

	t60 = ((x281<x282)%(x283+x284));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x285 = 58LLU;
	volatile uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 48865895LLU;
	static uint64_t x288 = 7996863244853671876LLU;

	t61 = ((x285<x286)%(x287+x288));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x289 = -3018LL;
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = -1LL;
	int64_t t62 = -55LL;

	t62 = ((x289<x290)%(x291+x292));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x293 = INT32_MAX;
	int64_t x294 = INT64_MAX;

	t63 = ((x293<x294)%(x295+x296));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = INT64_MAX;
	uint8_t x299 = 56U;
	volatile int32_t x300 = INT32_MIN;
	int32_t t64 = -84080287;

	t64 = ((x297<x298)%(x299+x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t65 = 120;

	t65 = ((x301<x302)%(x303+x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = 2358757510498LLU;
	int64_t x307 = -4625817226639LL;
	uint64_t x308 = 938LLU;
	volatile uint64_t t66 = 471924789824255LLU;

	t66 = ((x305<x306)%(x307+x308));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x310 = -1;
	static int32_t x311 = -3157;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t67 = 867;

	t67 = ((x309<x310)%(x311+x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = 5208;
	uint64_t x326 = 1947189484278580LLU;
	uint32_t x328 = 686805U;
	volatile uint32_t t68 = 11459009U;

	t68 = ((x325<x326)%(x327+x328));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = INT8_MIN;
	static int64_t x332 = INT64_MIN;
	volatile int64_t t69 = -370075364012370297LL;

	t69 = ((x329<x330)%(x331+x332));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = 330215;
	int64_t x334 = 236596183382211055LL;
	int64_t x336 = 87048049992416LL;

	t70 = ((x333<x334)%(x335+x336));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x337 = 43U;
	static int64_t x338 = -1LL;
	int8_t x339 = INT8_MAX;
	static uint8_t x340 = 1U;
	volatile int32_t t71 = 26;

	t71 = ((x337<x338)%(x339+x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = -1;
	int8_t x342 = 1;
	int64_t x344 = -18LL;
	volatile int64_t t72 = 788343280412427LL;

	t72 = ((x341<x342)%(x343+x344));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = 7;
	int16_t x346 = INT16_MIN;
	volatile uint8_t x348 = 26U;
	volatile int64_t t73 = 4806067354002LL;

	t73 = ((x345<x346)%(x347+x348));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x349 = INT16_MIN;
	uint8_t x350 = 1U;
	static int16_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	int32_t t74 = 439729399;

	t74 = ((x349<x350)%(x351+x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = INT8_MAX;
	uint64_t t75 = 1545069394185688LLU;

	t75 = ((x353<x354)%(x355+x356));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = 22U;
	int16_t x358 = INT16_MIN;
	volatile int8_t x359 = 1;
	uint64_t x360 = 15476259587540822LLU;

	t76 = ((x357<x358)%(x359+x360));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = -1LL;
	static volatile int16_t x362 = 1;
	static volatile int8_t x363 = INT8_MIN;
	int16_t x364 = -443;
	volatile int32_t t77 = -1;

	t77 = ((x361<x362)%(x363+x364));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x365 = 158766002371260LLU;
	volatile int8_t x367 = INT8_MIN;

	t78 = ((x365<x366)%(x367+x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = 1651;
	int16_t x370 = 5647;
	uint16_t x371 = 411U;

	t79 = ((x369<x370)%(x371+x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x375 = INT8_MAX;
	volatile uint64_t x376 = UINT64_MAX;

	t80 = ((x373<x374)%(x375+x376));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	uint32_t x384 = 3375822U;
	static uint32_t t81 = 11U;

	t81 = ((x381<x382)%(x383+x384));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x385 = -1;
	int16_t x386 = INT16_MAX;
	int64_t x387 = INT64_MIN;
	static volatile int64_t t82 = 0LL;

	t82 = ((x385<x386)%(x387+x388));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x392 = -1;
	volatile int32_t t83 = 1543;

	t83 = ((x389<x390)%(x391+x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	static volatile int8_t x395 = INT8_MIN;
	int64_t x396 = 2223893105097129LL;
	int64_t t84 = 21540925LL;

	t84 = ((x393<x394)%(x395+x396));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = -1;
	int8_t x402 = INT8_MIN;
	int8_t x403 = 11;
	volatile int32_t t85 = 107952958;

	t85 = ((x401<x402)%(x403+x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x405 = 1U;
	uint8_t x406 = 33U;
	int16_t x407 = -1;
	uint16_t x408 = 37U;
	int32_t t86 = -81;

	t86 = ((x405<x406)%(x407+x408));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x409 = 9U;
	int64_t x410 = -11LL;
	uint64_t x412 = 2861388LLU;
	volatile uint64_t t87 = 36603465LLU;

	t87 = ((x409<x410)%(x411+x412));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x413 = -1;
	static volatile uint16_t x414 = 259U;
	int16_t x416 = INT16_MAX;
	volatile uint64_t t88 = 75688722029983509LLU;

	t88 = ((x413<x414)%(x415+x416));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MIN;
	static int16_t x419 = INT16_MIN;
	int16_t x420 = -135;

	t89 = ((x417<x418)%(x419+x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x422 = 233LLU;
	int64_t x423 = INT64_MIN;
	static uint64_t x424 = 1464785LLU;
	volatile uint64_t t90 = 433969837LLU;

	t90 = ((x421<x422)%(x423+x424));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x425 = UINT64_MAX;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 378603821171658992LLU;
	static volatile uint64_t t91 = 1744308414248734LLU;

	t91 = ((x425<x426)%(x427+x428));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x433 = INT16_MIN;
	int64_t x434 = INT64_MIN;
	uint16_t x436 = UINT16_MAX;

	t92 = ((x433<x434)%(x435+x436));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x437 = 12536LLU;
	int64_t x438 = -3341864064953LL;
	uint64_t x440 = UINT64_MAX;
	uint64_t t93 = 958675970LLU;

	t93 = ((x437<x438)%(x439+x440));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = INT8_MIN;
	static volatile int16_t x442 = INT16_MAX;
	uint32_t x443 = 0U;
	static int64_t x444 = INT64_MIN;

	t94 = ((x441<x442)%(x443+x444));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int32_t x447 = 838;
	int32_t t95 = 643;

	t95 = ((x445<x446)%(x447+x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x454 = -501758803412637431LL;
	static uint8_t x455 = UINT8_MAX;
	static int16_t x456 = INT16_MAX;
	volatile int32_t t96 = -1555893;

	t96 = ((x453<x454)%(x455+x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = -1;
	uint8_t x458 = 17U;
	int16_t x460 = 13;

	t97 = ((x457<x458)%(x459+x460));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x461 = 31021U;
	int16_t x462 = -1663;
	uint32_t x463 = UINT32_MAX;
	uint64_t x464 = 1003914LLU;
	static volatile uint64_t t98 = 4762305LLU;

	t98 = ((x461<x462)%(x463+x464));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	volatile uint64_t x466 = 493949574776LLU;
	int8_t x467 = 5;
	static int64_t x468 = -6426046744797545LL;
	volatile int64_t t99 = 75232181368LL;

	t99 = ((x465<x466)%(x467+x468));

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

