#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = -1;
static volatile int32_t t0 = -720462727;
int32_t x14 = -406466;
volatile int32_t t1 = -19;
uint8_t x19 = 1U;
volatile int32_t t3 = 12624;
static volatile int32_t t4 = -1511;
uint8_t x32 = UINT8_MAX;
int8_t x37 = INT8_MIN;
uint8_t x38 = 87U;
volatile int32_t t10 = -96855;
volatile int32_t x58 = 65788960;
int32_t t12 = 19960;
int16_t x62 = -1;
static int32_t t13 = 57321593;
uint16_t x70 = UINT16_MAX;
volatile uint8_t x75 = 105U;
volatile int32_t t16 = 15806;
int32_t x81 = INT32_MIN;
uint64_t x86 = 38728584120LLU;
int64_t x91 = -1LL;
int8_t x94 = -4;
int8_t x96 = INT8_MAX;
static uint64_t x99 = UINT64_MAX;
uint32_t x105 = 706327793U;
uint8_t x107 = UINT8_MAX;
int64_t x109 = INT64_MAX;
volatile int32_t t25 = -198949;
volatile int32_t t27 = 56697815;
static int16_t x126 = INT16_MAX;
volatile int32_t t30 = 438;
int64_t x134 = -1LL;
int64_t x137 = -1LL;
uint32_t x139 = UINT32_MAX;
volatile int32_t t34 = 781;
volatile int32_t t35 = 887;
uint64_t x153 = 23599LLU;
uint32_t x168 = 9984466U;
int64_t x169 = INT64_MIN;
volatile int16_t x175 = INT16_MIN;
int64_t x182 = -109276672983684LL;
int32_t x183 = 9;
volatile int8_t x186 = -1;
int32_t x191 = -1;
uint64_t x193 = 1063090659LLU;
int16_t x196 = INT16_MAX;
static int16_t x197 = INT16_MIN;
int64_t x208 = INT64_MAX;
static int32_t t48 = 741101697;
uint16_t x211 = 6U;
int16_t x214 = 1;
uint32_t x228 = 27829U;
uint64_t x230 = 778041051651589LLU;
static volatile int32_t t53 = 30753895;
static uint16_t x233 = 1586U;
int16_t x235 = -4628;
int64_t x239 = 568025LL;
volatile int32_t t56 = 287;
volatile uint8_t x247 = UINT8_MAX;
volatile int32_t t57 = -2808;
int32_t x251 = INT32_MIN;
int32_t x253 = INT32_MIN;
uint64_t x254 = UINT64_MAX;
static volatile int16_t x257 = INT16_MIN;
int64_t x258 = 223164628977LL;
volatile int32_t t60 = 97934571;
volatile int32_t x266 = INT32_MIN;
volatile int32_t t62 = 679060801;
int32_t t64 = 4826;
int8_t x277 = INT8_MIN;
int8_t x281 = -1;
int8_t x288 = -1;
int8_t x290 = 7;
volatile int16_t x293 = 62;
volatile int32_t t70 = -12850326;
int64_t x321 = -1LL;
uint8_t x326 = 21U;
static int16_t x327 = INT16_MIN;
int64_t x333 = INT64_MIN;
int8_t x335 = INT8_MIN;
uint32_t x338 = 127U;
uint32_t x339 = UINT32_MAX;
uint8_t x344 = 52U;
volatile int32_t t79 = -820425;
int64_t x348 = INT64_MIN;
int8_t x362 = -1;
int32_t x367 = -514625;
static int32_t x369 = INT32_MIN;
static int8_t x378 = INT8_MIN;
uint32_t x385 = UINT32_MAX;
int32_t x399 = 1;
int8_t x402 = -1;
volatile uint8_t x411 = 17U;
int64_t x418 = 3674039LL;


void f0(void) {
	static volatile int64_t x9 = -3LL;
	int16_t x10 = INT16_MIN;
	volatile int64_t x12 = -6LL;

	t0 = (x9<=(x10+(x11&x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x13 = 1144U;
	static int32_t x15 = 25471294;
	int64_t x16 = INT64_MIN;

	t1 = (x13<=(x14+(x15&x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = INT64_MAX;
	static int64_t x18 = -1LL;
	int32_t x20 = -1;
	volatile int32_t t2 = 27867;

	t2 = (x17<=(x18+(x19&x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 11U;
	static int64_t x23 = INT64_MIN;
	static int8_t x24 = INT8_MAX;

	t3 = (x21<=(x22+(x23&x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 0U;
	volatile uint64_t x26 = 4104040651966LLU;
	int64_t x27 = INT64_MAX;
	int8_t x28 = 1;

	t4 = (x25<=(x26+(x27&x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x29 = 5U;
	int32_t x30 = INT32_MAX;
	static int64_t x31 = -4293374805401352704LL;
	int32_t t5 = -1;

	t5 = (x29<=(x30+(x31&x32)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MIN;
	static uint64_t x34 = 925399596678920697LLU;
	int64_t x35 = 57709441443713513LL;
	int64_t x36 = INT64_MIN;
	volatile int32_t t6 = -2690;

	t6 = (x33<=(x34+(x35&x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x39 = INT32_MIN;
	static int8_t x40 = 1;
	static volatile int32_t t7 = 1152;

	t7 = (x37<=(x38+(x39&x40)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MAX;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = -187562;
	volatile int32_t t8 = -38337;

	t8 = (x41<=(x42+(x43&x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	static int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	int32_t x48 = 8;
	volatile int32_t t9 = -253;

	t9 = (x45<=(x46+(x47&x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = -1;
	uint32_t x50 = 38U;
	uint32_t x51 = 1781245U;
	int8_t x52 = INT8_MAX;

	t10 = (x49<=(x50+(x51&x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MAX;
	volatile uint8_t x54 = 0U;
	static volatile int32_t x55 = -4281463;
	static int8_t x56 = -1;
	int32_t t11 = 46412;

	t11 = (x53<=(x54+(x55&x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	uint16_t x59 = 1902U;
	static int32_t x60 = INT32_MIN;

	t12 = (x57<=(x58+(x59&x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x61 = 12U;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = -1;

	t13 = (x61<=(x62+(x63&x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	volatile int16_t x66 = 1;
	volatile int64_t x67 = INT64_MAX;
	static int8_t x68 = INT8_MIN;
	int32_t t14 = -6373;

	t14 = (x65<=(x66+(x67&x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	int64_t x71 = 1941181LL;
	static volatile int8_t x72 = INT8_MIN;
	static int32_t t15 = -2;

	t15 = (x69<=(x70+(x71&x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MAX;
	uint8_t x74 = 2U;
	int8_t x76 = -2;

	t16 = (x73<=(x74+(x75&x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -5;
	static uint16_t x78 = 30137U;
	int64_t x79 = 6223611853LL;
	uint32_t x80 = 1U;
	volatile int32_t t17 = 42;

	t17 = (x77<=(x78+(x79&x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x82 = 19979U;
	uint32_t x83 = 6116U;
	static int32_t x84 = -220364;
	volatile int32_t t18 = 178;

	t18 = (x81<=(x82+(x83&x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x85 = 23997U;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = UINT32_MAX;
	int32_t t19 = 105627688;

	t19 = (x85<=(x86+(x87&x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = UINT32_MAX;
	int8_t x92 = -1;
	int32_t t20 = 312633256;

	t20 = (x89<=(x90+(x91&x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = -1LL;
	uint32_t x95 = 17353U;
	volatile int32_t t21 = -21836845;

	t21 = (x93<=(x94+(x95&x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	static uint32_t x98 = 0U;
	int8_t x100 = -1;
	volatile int32_t t22 = -53430;

	t22 = (x97<=(x98+(x99&x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = -15;
	static int32_t x102 = -1;
	int8_t x103 = INT8_MAX;
	volatile uint8_t x104 = UINT8_MAX;
	int32_t t23 = -891;

	t23 = (x101<=(x102+(x103&x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = INT32_MAX;
	static volatile int64_t x108 = INT64_MIN;
	int32_t t24 = -195;

	t24 = (x105<=(x106+(x107&x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x110 = 1U;
	volatile uint64_t x111 = 56285190963LLU;
	int64_t x112 = INT64_MAX;

	t25 = (x109<=(x110+(x111&x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x113 = -1LL;
	int8_t x114 = -1;
	int8_t x115 = -1;
	static uint16_t x116 = 0U;
	int32_t t26 = 144196309;

	t26 = (x113<=(x114+(x115&x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	uint64_t x118 = 104185277604LLU;
	uint64_t x119 = 1856325626951698LLU;
	volatile int32_t x120 = -1;

	t27 = (x117<=(x118+(x119&x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -8;
	int64_t x122 = INT64_MAX;
	int8_t x123 = INT8_MIN;
	int16_t x124 = -203;
	volatile int32_t t28 = 0;

	t28 = (x121<=(x122+(x123&x124)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = -1;
	int16_t x127 = 416;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t29 = 71196196;

	t29 = (x125<=(x126+(x127&x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -68601882600930LL;
	static int32_t x130 = 2258488;
	int64_t x131 = -1LL;
	int64_t x132 = -1LL;

	t30 = (x129<=(x130+(x131&x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 451U;
	int8_t x135 = -1;
	int8_t x136 = 9;
	volatile int32_t t31 = -300551;

	t31 = (x133<=(x134+(x135&x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x138 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t32 = 7;

	t32 = (x137<=(x138+(x139&x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x141 = INT16_MIN;
	static uint8_t x142 = 70U;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = 61U;
	int32_t t33 = -61672;

	t33 = (x141<=(x142+(x143&x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = -6;
	int64_t x146 = -1LL;
	int8_t x147 = 0;
	int64_t x148 = INT64_MIN;

	t34 = (x145<=(x146+(x147&x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 6138U;
	uint8_t x150 = UINT8_MAX;
	static int64_t x151 = INT64_MIN;
	volatile uint64_t x152 = 1459749941813414413LLU;

	t35 = (x149<=(x150+(x151&x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x154 = 973267399U;
	uint32_t x155 = 29U;
	int16_t x156 = -3259;
	int32_t t36 = -170;

	t36 = (x153<=(x154+(x155&x156)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MIN;
	volatile int32_t x158 = 6;
	uint32_t x159 = 285U;
	volatile int8_t x160 = INT8_MAX;
	volatile int32_t t37 = -10254458;

	t37 = (x157<=(x158+(x159&x160)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = -1LL;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = 812976836167716745LLU;
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t38 = 1181;

	t38 = (x161<=(x162+(x163&x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = -1;
	volatile int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	volatile int32_t t39 = 147;

	t39 = (x165<=(x166+(x167&x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x170 = UINT8_MAX;
	uint64_t x171 = 82751456208570LLU;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t40 = 0;

	t40 = (x169<=(x170+(x171&x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	volatile int8_t x174 = INT8_MAX;
	int16_t x176 = INT16_MIN;
	static int32_t t41 = 0;

	t41 = (x173<=(x174+(x175&x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = 102;
	int16_t x184 = INT16_MIN;
	int32_t t42 = 0;

	t42 = (x181<=(x182+(x183&x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	int32_t x187 = 6258750;
	static volatile uint16_t x188 = 0U;
	int32_t t43 = -846215434;

	t43 = (x185<=(x186+(x187&x188)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 1209316854939660058LLU;
	uint8_t x190 = 2U;
	uint32_t x192 = 1232952414U;
	volatile int32_t t44 = -940320341;

	t44 = (x189<=(x190+(x191&x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x194 = -1;
	int64_t x195 = INT64_MIN;
	volatile int32_t t45 = 125;

	t45 = (x193<=(x194+(x195&x196)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = -96364LL;
	uint16_t x199 = 120U;
	static int8_t x200 = INT8_MAX;
	volatile int32_t t46 = 218980;

	t46 = (x197<=(x198+(x199&x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 10180;
	volatile int8_t x202 = 0;
	static uint32_t x203 = UINT32_MAX;
	int64_t x204 = -379032487405752830LL;
	volatile int32_t t47 = -302903;

	t47 = (x201<=(x202+(x203&x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x205 = 121963301729LLU;
	volatile int64_t x206 = -1524LL;
	static int16_t x207 = INT16_MAX;

	t48 = (x205<=(x206+(x207&x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	static int16_t x210 = INT16_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t49 = 376;

	t49 = (x209<=(x210+(x211&x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = 18814LL;
	uint32_t x215 = 170970U;
	static int64_t x216 = -889582LL;
	static volatile int32_t t50 = -2113;

	t50 = (x213<=(x214+(x215&x216)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 183;
	int16_t x218 = -1;
	static volatile int16_t x219 = 1;
	static int64_t x220 = 2689LL;
	int32_t t51 = -8;

	t51 = (x217<=(x218+(x219&x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	uint32_t x227 = 1967U;
	int32_t t52 = 393;

	t52 = (x225<=(x226+(x227&x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -1LL;
	int64_t x231 = INT64_MIN;
	volatile int64_t x232 = INT64_MIN;

	t53 = (x229<=(x230+(x231&x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = INT8_MIN;
	int8_t x236 = -22;
	int32_t t54 = 3790687;

	t54 = (x233<=(x234+(x235&x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	int64_t x240 = -203LL;
	int32_t t55 = -5944373;

	t55 = (x237<=(x238+(x239&x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 0U;
	int32_t x242 = INT32_MAX;
	int64_t x243 = 125122998LL;
	volatile int8_t x244 = -1;

	t56 = (x241<=(x242+(x243&x244)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MAX;
	int8_t x246 = INT8_MAX;
	int64_t x248 = -1LL;

	t57 = (x245<=(x246+(x247&x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = UINT64_MAX;
	uint32_t x250 = 4139955U;
	int64_t x252 = INT64_MIN;
	static int32_t t58 = 4222253;

	t58 = (x249<=(x250+(x251&x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x255 = -1;
	int64_t x256 = -1LL;
	static volatile int32_t t59 = -6229711;

	t59 = (x253<=(x254+(x255&x256)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x259 = INT64_MAX;
	int32_t x260 = 183663480;

	t60 = (x257<=(x258+(x259&x260)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -95097LL;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MAX;
	uint16_t x264 = UINT16_MAX;
	int32_t t61 = -244110;

	t61 = (x261<=(x262+(x263&x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = -1;

	t62 = (x265<=(x266+(x267&x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -1;
	volatile uint32_t x270 = 93345536U;
	volatile int32_t x271 = INT32_MAX;
	uint16_t x272 = 47U;
	volatile int32_t t63 = -3707506;

	t63 = (x269<=(x270+(x271&x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	uint32_t x276 = UINT32_MAX;

	t64 = (x273<=(x274+(x275&x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x278 = 428U;
	static volatile uint64_t x279 = UINT64_MAX;
	int8_t x280 = -2;
	int32_t t65 = -14309593;

	t65 = (x277<=(x278+(x279&x280)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x282 = 2;
	int32_t x283 = -1;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t66 = 57;

	t66 = (x281<=(x282+(x283&x284)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x285 = -32;
	int32_t x286 = -246;
	static int8_t x287 = INT8_MIN;
	int32_t t67 = 457074491;

	t67 = (x285<=(x286+(x287&x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MAX;
	volatile int16_t x291 = 2266;
	int32_t x292 = INT32_MAX;
	static int32_t t68 = -395;

	t68 = (x289<=(x290+(x291&x292)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x294 = -1;
	uint16_t x295 = 2943U;
	uint32_t x296 = 0U;
	static volatile int32_t t69 = -112582;

	t69 = (x293<=(x294+(x295&x296)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x298 = -5472;
	volatile int32_t x299 = -1;
	volatile int32_t x300 = -138636029;

	t70 = (x297<=(x298+(x299&x300)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = INT16_MIN;
	static uint64_t x303 = UINT64_MAX;
	uint8_t x304 = 1U;
	volatile int32_t t71 = 27050;

	t71 = (x301<=(x302+(x303&x304)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -1;
	static uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t72 = -9;

	t72 = (x305<=(x306+(x307&x308)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	int32_t x315 = 13;
	volatile int8_t x316 = INT8_MIN;
	static int32_t t73 = -314466982;

	t73 = (x313<=(x314+(x315&x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 11U;
	int64_t x318 = INT64_MAX;
	int64_t x319 = -1LL;
	uint64_t x320 = 13277527429094455LLU;
	static volatile int32_t t74 = -901;

	t74 = (x317<=(x318+(x319&x320)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x322 = -1LL;
	uint8_t x323 = 13U;
	int64_t x324 = 16047309421LL;
	volatile int32_t t75 = -108822604;

	t75 = (x321<=(x322+(x323&x324)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t76 = 469;

	t76 = (x325<=(x326+(x327&x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x334 = -1LL;
	uint16_t x336 = 4U;
	int32_t t77 = 124;

	t77 = (x333<=(x334+(x335&x336)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x337 = -1;
	int16_t x340 = 366;
	volatile int32_t t78 = 5662;

	t78 = (x337<=(x338+(x339&x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = 56;
	int8_t x342 = 50;
	static int64_t x343 = INT64_MAX;

	t79 = (x341<=(x342+(x343&x344)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = -1;
	static int32_t x346 = INT32_MAX;
	uint64_t x347 = UINT64_MAX;
	static int32_t t80 = -5;

	t80 = (x345<=(x346+(x347&x348)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = -4452;
	volatile int64_t x350 = INT64_MIN;
	static volatile int64_t x351 = INT64_MAX;
	int32_t x352 = -262041;
	static volatile int32_t t81 = 168472251;

	t81 = (x349<=(x350+(x351&x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = 428U;
	uint16_t x356 = 102U;
	static volatile int32_t t82 = 59969002;

	t82 = (x353<=(x354+(x355&x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x357 = INT64_MAX;
	int32_t x358 = 9946;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -28385424LL;
	volatile int32_t t83 = 1673995;

	t83 = (x357<=(x358+(x359&x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x363 = 1U;
	volatile uint16_t x364 = 6473U;
	int32_t t84 = -455225;

	t84 = (x361<=(x362+(x363&x364)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MAX;
	int16_t x368 = -1;
	int32_t t85 = 188539445;

	t85 = (x365<=(x366+(x367&x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MAX;
	static volatile int32_t x372 = INT32_MIN;
	volatile int32_t t86 = 316;

	t86 = (x369<=(x370+(x371&x372)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int64_t x374 = INT64_MIN;
	int64_t x375 = 258190660LL;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t87 = 883;

	t87 = (x373<=(x374+(x375&x376)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x377 = -127848LL;
	int64_t x379 = -1LL;
	static volatile int32_t x380 = INT32_MIN;
	static int32_t t88 = 70419;

	t88 = (x377<=(x378+(x379&x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = 11U;
	int32_t x382 = -74;
	uint32_t x383 = UINT32_MAX;
	uint16_t x384 = 21734U;
	volatile int32_t t89 = 30792;

	t89 = (x381<=(x382+(x383&x384)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x386 = 12U;
	int16_t x387 = INT16_MIN;
	uint8_t x388 = 28U;
	static int32_t t90 = -6418802;

	t90 = (x385<=(x386+(x387&x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x389 = 1;
	volatile int16_t x390 = INT16_MIN;
	uint16_t x391 = 721U;
	int64_t x392 = -2569987594LL;
	static volatile int32_t t91 = 4;

	t91 = (x389<=(x390+(x391&x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = 374244LLU;
	volatile uint8_t x394 = UINT8_MAX;
	static int8_t x395 = INT8_MAX;
	volatile int8_t x396 = INT8_MAX;
	int32_t t92 = -225;

	t92 = (x393<=(x394+(x395&x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = 2791;
	static uint64_t x398 = 2548117LLU;
	int32_t x400 = INT32_MIN;
	static int32_t t93 = -32752821;

	t93 = (x397<=(x398+(x399&x400)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x401 = -53;
	static uint64_t x403 = UINT64_MAX;
	int64_t x404 = INT64_MAX;
	static volatile int32_t t94 = -15385;

	t94 = (x401<=(x402+(x403&x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x405 = INT64_MAX;
	int64_t x406 = -1LL;
	int64_t x407 = 1442616146099749136LL;
	int64_t x408 = 1LL;
	int32_t t95 = 7194966;

	t95 = (x405<=(x406+(x407&x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int16_t x410 = -1;
	static volatile int16_t x412 = -3019;
	volatile int32_t t96 = -126;

	t96 = (x409<=(x410+(x411&x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x413 = 49U;
	static volatile int16_t x414 = -366;
	static int8_t x415 = 18;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t97 = -966032349;

	t97 = (x413<=(x414+(x415&x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = 46420008;
	volatile uint64_t x419 = UINT64_MAX;
	static uint64_t x420 = 198LLU;
	static int32_t t98 = -29677;

	t98 = (x417<=(x418+(x419&x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x421 = -1;
	volatile int32_t x422 = INT32_MIN;
	uint16_t x423 = UINT16_MAX;
	static int8_t x424 = -1;
	static int32_t t99 = 114579011;

	t99 = (x421<=(x422+(x423&x424)));

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

