#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = 26;
uint8_t x18 = 0U;
static uint64_t x19 = UINT64_MAX;
volatile uint64_t x21 = 49557756411LLU;
static volatile int32_t x22 = INT32_MAX;
int64_t x24 = INT64_MAX;
int8_t x28 = -1;
static int16_t x30 = -8;
uint16_t x31 = 252U;
static volatile int32_t t9 = 1028;
uint64_t x42 = UINT64_MAX;
int64_t x44 = 77184030270291LL;
uint32_t t10 = 41572846U;
static int16_t x46 = 1;
uint32_t x51 = 11U;
int32_t t12 = -86;
int32_t x63 = INT32_MAX;
volatile uint32_t x69 = 52855U;
uint16_t x70 = 388U;
int16_t x78 = -3308;
uint8_t x80 = UINT8_MAX;
static int64_t x85 = INT64_MIN;
static uint64_t x98 = 3506970154080LLU;
int16_t x101 = INT16_MIN;
volatile uint8_t x106 = 3U;
int32_t t26 = 38;
volatile uint16_t x113 = UINT16_MAX;
int32_t x116 = INT32_MIN;
int32_t x121 = INT32_MIN;
int32_t t30 = 7589632;
int16_t x129 = -1;
static volatile int8_t x134 = -1;
static volatile int64_t x140 = INT64_MIN;
uint8_t x143 = UINT8_MAX;
int64_t x144 = -7965149212251360LL;
uint8_t x149 = 7U;
static int64_t x151 = 7272735864LL;
int64_t x154 = INT64_MIN;
uint64_t x155 = 5882184572892740LLU;
int8_t x164 = -1;
uint16_t x178 = 138U;
static volatile uint16_t x181 = UINT16_MAX;
volatile int32_t x182 = INT32_MIN;
int32_t t44 = -3571578;
int32_t x186 = 7839;
volatile uint64_t x190 = 69LLU;
int64_t x192 = INT64_MAX;
uint32_t x199 = 42323U;
int8_t x200 = INT8_MIN;
uint64_t x201 = 382799484873353394LLU;
uint64_t x202 = UINT64_MAX;
int8_t x205 = 20;
int32_t x206 = INT32_MIN;
volatile int64_t x211 = INT64_MAX;
static uint16_t x216 = 104U;
int16_t x217 = INT16_MIN;
int8_t x221 = INT8_MAX;
volatile int16_t x224 = INT16_MAX;
int32_t t55 = 279003371;
int8_t x232 = -1;
static uint8_t x235 = 34U;
uint32_t x238 = UINT32_MAX;
volatile int32_t t58 = 29781634;
static int64_t x243 = -2116684530463148LL;
static uint8_t x247 = 0U;
int32_t x249 = INT32_MIN;
int8_t x252 = 1;
int32_t x256 = INT32_MIN;
volatile uint32_t t62 = 70296297U;
volatile int8_t x259 = INT8_MAX;
int16_t x289 = -3998;
static uint32_t x291 = 12644735U;
volatile int8_t x292 = INT8_MIN;
volatile int32_t t72 = 0;
int64_t x303 = INT64_MAX;
volatile uint64_t t75 = 33031857690LLU;
static uint8_t x314 = 49U;
uint16_t x329 = UINT16_MAX;
static uint16_t x335 = 235U;
int32_t t82 = 839552;
int16_t x341 = -14875;
uint32_t x342 = UINT32_MAX;
uint64_t x344 = 199541961311071060LLU;
volatile int64_t t85 = 0LL;
static int32_t x354 = -1;
uint8_t x359 = 39U;
int32_t x360 = INT32_MIN;
volatile int32_t t88 = 24;
int8_t x364 = INT8_MAX;
int8_t x365 = -1;
uint16_t x375 = 225U;
volatile uint32_t t94 = 65082664U;
uint64_t x399 = 1465LLU;
int32_t x400 = INT32_MAX;


void f0(void) {
	uint32_t x2 = 1270101U;
	static uint8_t x3 = UINT8_MAX;
	uint32_t x4 = 1095U;
	volatile int32_t t0 = 2960246;

	t0 = (x1+(x2<(x3<=x4)));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 182508435U;
	static int16_t x6 = -3483;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;
	uint32_t t1 = 74092U;

	t1 = (x5+(x6<(x7<=x8)));

	if (t1 != 182508436U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile int16_t x10 = 17;
	volatile int16_t x11 = INT16_MAX;
	static int16_t x12 = -1;
	volatile int32_t t2 = 431867;

	t2 = (x9+(x10<(x11<=x12)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	volatile int32_t x14 = INT32_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = -363648;

	t3 = (x13+(x14<(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -599839587103520189LL;
	uint64_t x20 = UINT64_MAX;
	volatile int64_t t4 = -6676293028LL;

	t4 = (x17+(x18<(x19<=x20)));

	if (t4 != -599839587103520188LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = INT64_MAX;
	volatile uint64_t t5 = 7252841479343348LLU;

	t5 = (x21+(x22<(x23<=x24)));

	if (t5 != 49557756411LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 3796;
	uint64_t x26 = 393022577049LLU;
	uint16_t x27 = UINT16_MAX;
	int32_t t6 = -1011678;

	t6 = (x25+(x26<(x27<=x28)));

	if (t6 != 3796) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -30;
	int64_t x32 = 0LL;
	volatile int32_t t7 = -1545;

	t7 = (x29+(x30<(x31<=x32)));

	if (t7 != -29) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 105950810U;
	uint8_t x34 = 1U;
	int8_t x35 = 8;
	int16_t x36 = -1;
	static uint32_t t8 = 490979U;

	t8 = (x33+(x34<(x35<=x36)));

	if (t8 != 105950810U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 1672U;
	int64_t x39 = INT64_MIN;
	uint64_t x40 = 2199928LLU;

	t9 = (x37+(x38<(x39<=x40)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 631U;
	static uint32_t x43 = 1U;

	t10 = (x41+(x42<(x43<=x44)));

	if (t10 != 631U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int32_t x47 = INT32_MIN;
	int64_t x48 = INT64_MAX;
	int32_t t11 = 780;

	t11 = (x45+(x46<(x47<=x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 451U;
	int8_t x50 = 52;
	int64_t x52 = 476LL;

	t12 = (x49+(x50<(x51<=x52)));

	if (t12 != 451) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint32_t x54 = 106U;
	int32_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x53+(x54<(x55<=x56)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = -1;
	uint16_t x58 = 31U;
	int32_t x59 = -39514874;
	int8_t x60 = 29;
	int32_t t14 = -920030;

	t14 = (x57+(x58<(x59<=x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 3280541;
	int8_t x62 = INT8_MAX;
	int32_t x64 = 503;
	static volatile int32_t t15 = -1047369112;

	t15 = (x61+(x62<(x63<=x64)));

	if (t15 != 3280541) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 84U;
	volatile int32_t x66 = -1;
	volatile uint16_t x67 = 0U;
	int8_t x68 = -1;
	int32_t t16 = 7819;

	t16 = (x65+(x66<(x67<=x68)));

	if (t16 != 85) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = INT64_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint32_t t17 = 6839212U;

	t17 = (x69+(x70<(x71<=x72)));

	if (t17 != 52855U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 1;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = UINT32_MAX;
	uint64_t x76 = 13747302LLU;
	volatile int32_t t18 = 4081235;

	t18 = (x73+(x74<(x75<=x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 4778031107592492LLU;
	int64_t x79 = 2348482681544641444LL;
	uint64_t t19 = 599997952170LLU;

	t19 = (x77+(x78<(x79<=x80)));

	if (t19 != 4778031107592493LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = 0;
	static int8_t x87 = INT8_MIN;
	volatile int16_t x88 = 0;
	int64_t t20 = 1275LL;

	t20 = (x85+(x86<(x87<=x88)));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	static int32_t x91 = -148;
	int32_t x92 = -1;
	int64_t t21 = 1317571258705302LL;

	t21 = (x89+(x90<(x91<=x92)));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -1;
	volatile int64_t x94 = INT64_MAX;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t22 = -7;

	t22 = (x93+(x94<(x95<=x96)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 3U;
	int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MAX;
	volatile int32_t t23 = 1032040924;

	t23 = (x97+(x98<(x99<=x100)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = -1;
	int64_t x103 = -81LL;
	int16_t x104 = -1;
	int32_t t24 = 42996;

	t24 = (x101+(x102<(x103<=x104)));

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	uint32_t x107 = 2U;
	volatile int32_t x108 = -2;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x105+(x106<(x107<=x108)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = 627070921;
	int16_t x110 = INT16_MAX;
	static int16_t x111 = 1;
	uint32_t x112 = UINT32_MAX;

	t26 = (x109+(x110<(x111<=x112)));

	if (t26 != 627070921) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x114 = 1U;
	int64_t x115 = -363054346553610LL;
	volatile int32_t t27 = 669705769;

	t27 = (x113+(x114<(x115<=x116)));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = 21U;
	static int16_t x118 = INT16_MIN;
	volatile int32_t x119 = INT32_MAX;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t28 = 642589239;

	t28 = (x117+(x118<(x119<=x120)));

	if (t28 != 22) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x122 = 98U;
	static volatile uint64_t x123 = 28933542LLU;
	int64_t x124 = INT64_MAX;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x121+(x122<(x123<=x124)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -2904;
	uint64_t x126 = 378189632953189112LLU;
	static volatile uint32_t x127 = 865187U;
	int64_t x128 = INT64_MIN;

	t30 = (x125+(x126<(x127<=x128)));

	if (t30 != -2904) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x130 = 208016276U;
	int32_t x131 = 12;
	int64_t x132 = INT64_MIN;
	int32_t t31 = -1073;

	t31 = (x129+(x130<(x131<=x132)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 1U;
	static int8_t x135 = -1;
	int16_t x136 = INT16_MIN;
	int32_t t32 = -594871980;

	t32 = (x133+(x134<(x135<=x136)));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -1;
	uint16_t x138 = 344U;
	int16_t x139 = -1;
	volatile int32_t t33 = 79613;

	t33 = (x137+(x138<(x139<=x140)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = 186649516555057200LL;
	uint16_t x142 = UINT16_MAX;
	static volatile int64_t t34 = 33777433830085LL;

	t34 = (x141+(x142<(x143<=x144)));

	if (t34 != 186649516555057200LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	int8_t x146 = 2;
	static int8_t x147 = 0;
	int16_t x148 = -1;
	int64_t t35 = INT64_MIN;

	t35 = (x145+(x146<(x147<=x148)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x150 = INT32_MIN;
	int8_t x152 = 0;
	int32_t t36 = -124308005;

	t36 = (x149+(x150<(x151<=x152)));

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = 172;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t37 = 0;

	t37 = (x153+(x154<(x155<=x156)));

	if (t37 != 173) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	volatile uint64_t x158 = 8543749681LLU;
	int16_t x159 = 14830;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t38 = -88641;

	t38 = (x157+(x158<(x159<=x160)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -2824;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = -1;
	volatile int32_t t39 = 62;

	t39 = (x161+(x162<(x163<=x164)));

	if (t39 != -2823) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MIN;
	volatile int16_t x167 = -1;
	int64_t x168 = -1LL;
	int32_t t40 = 0;

	t40 = (x165+(x166<(x167<=x168)));

	if (t40 != 256) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 1U;
	uint8_t x170 = 0U;
	uint8_t x171 = UINT8_MAX;
	volatile uint8_t x172 = 3U;
	volatile int32_t t41 = 10979035;

	t41 = (x169+(x170<(x171<=x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = -1;
	static volatile int16_t x175 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = -21;

	t42 = (x173+(x174<(x175<=x176)));

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 5266;
	int16_t x179 = 1;
	static volatile int8_t x180 = INT8_MIN;
	int32_t t43 = 1584;

	t43 = (x177+(x178<(x179<=x180)));

	if (t43 != 5266) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x183 = 7U;
	int32_t x184 = -1;

	t44 = (x181+(x182<(x183<=x184)));

	if (t44 != 65536) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = 101717911662231114LL;
	uint64_t x187 = 1783648557314LLU;
	static uint32_t x188 = UINT32_MAX;
	volatile int64_t t45 = -932631LL;

	t45 = (x185+(x186<(x187<=x188)));

	if (t45 != 101717911662231114LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int64_t x191 = 1759261183016445713LL;
	volatile int32_t t46 = -148413;

	t46 = (x189+(x190<(x191<=x192)));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static uint32_t x196 = 291242136U;
	static volatile int32_t t47 = 8129;

	t47 = (x193+(x194<(x195<=x196)));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = INT16_MAX;
	int64_t x198 = -1LL;
	int32_t t48 = -142158;

	t48 = (x197+(x198<(x199<=x200)));

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x203 = 13191;
	uint32_t x204 = 191186953U;
	volatile uint64_t t49 = 101LLU;

	t49 = (x201+(x202<(x203<=x204)));

	if (t49 != 382799484873353394LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x207 = -449295370LL;
	uint16_t x208 = UINT16_MAX;
	static int32_t t50 = 821126100;

	t50 = (x205+(x206<(x207<=x208)));

	if (t50 != 21) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 1;
	int16_t x210 = INT16_MAX;
	static volatile int64_t x212 = -35283773LL;
	static int32_t t51 = 11381;

	t51 = (x209+(x210<(x211<=x212)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MAX;
	uint8_t x215 = 16U;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x213+(x214<(x215<=x216)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x218 = -1;
	static volatile int8_t x219 = 1;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t53 = 496;

	t53 = (x217+(x218<(x219<=x220)));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = 3881U;
	volatile int16_t x223 = -980;
	volatile int32_t t54 = -232086;

	t54 = (x221+(x222<(x223<=x224)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -222;
	uint8_t x226 = UINT8_MAX;
	static volatile uint64_t x227 = 36LLU;
	uint8_t x228 = UINT8_MAX;

	t55 = (x225+(x226<(x227<=x228)));

	if (t55 != -222) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x229 = INT8_MIN;
	uint64_t x230 = 2008800407304568LLU;
	int64_t x231 = INT64_MIN;
	volatile int32_t t56 = -7242445;

	t56 = (x229+(x230<(x231<=x232)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = INT32_MAX;
	static uint32_t x234 = UINT32_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t57 = INT32_MAX;

	t57 = (x233+(x234<(x235<=x236)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MAX;
	uint16_t x239 = 60U;
	volatile int64_t x240 = INT64_MIN;

	t58 = (x237+(x238<(x239<=x240)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MIN;
	int16_t x242 = -58;
	volatile int8_t x244 = 11;
	volatile int32_t t59 = 0;

	t59 = (x241+(x242<(x243<=x244)));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 105385U;
	int8_t x246 = 46;
	static int16_t x248 = INT16_MAX;
	static volatile uint32_t t60 = 127681861U;

	t60 = (x245+(x246<(x247<=x248)));

	if (t60 != 105385U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x250 = INT16_MIN;
	static volatile uint8_t x251 = UINT8_MAX;
	int32_t t61 = 49503515;

	t61 = (x249+(x250<(x251<=x252)));

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = 533U;
	static uint16_t x254 = 156U;
	volatile int16_t x255 = INT16_MIN;

	t62 = (x253+(x254<(x255<=x256)));

	if (t62 != 533U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	int32_t t63 = -81;

	t63 = (x257+(x258<(x259<=x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 125U;
	uint8_t x262 = 2U;
	volatile int16_t x263 = -1;
	volatile uint8_t x264 = 67U;
	static volatile int32_t t64 = -102463848;

	t64 = (x261+(x262<(x263<=x264)));

	if (t64 != 125) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x265 = 1926777574U;
	volatile int64_t x266 = INT64_MAX;
	static uint8_t x267 = UINT8_MAX;
	int64_t x268 = 637198165650LL;
	volatile uint32_t t65 = 693353649U;

	t65 = (x265+(x266<(x267<=x268)));

	if (t65 != 1926777574U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	int8_t x271 = -2;
	volatile int32_t x272 = -2095062;
	static int32_t t66 = 65149412;

	t66 = (x269+(x270<(x271<=x272)));

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	volatile int32_t x274 = -510509;
	static int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	volatile int64_t t67 = -9036880889133948LL;

	t67 = (x273+(x274<(x275<=x276)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MAX;
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = -1401;
	int8_t x280 = INT8_MIN;
	int32_t t68 = 3435;

	t68 = (x277+(x278<(x279<=x280)));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = -1873308476898639345LL;
	static volatile int32_t x283 = -61865;
	uint8_t x284 = 1U;
	static int32_t t69 = 477374;

	t69 = (x281+(x282<(x283<=x284)));

	if (t69 != 256) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 202001835187LLU;
	volatile uint8_t x286 = UINT8_MAX;
	uint64_t x287 = 7769647181LLU;
	int8_t x288 = 0;
	uint64_t t70 = 1361345LLU;

	t70 = (x285+(x286<(x287<=x288)));

	if (t70 != 202001835187LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x290 = INT16_MAX;
	int32_t t71 = -14557312;

	t71 = (x289+(x290<(x291<=x292)));

	if (t71 != -3998) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 597U;
	static int16_t x294 = -1;
	volatile uint16_t x295 = 67U;
	uint32_t x296 = UINT32_MAX;

	t72 = (x293+(x294<(x295<=x296)));

	if (t72 != 598) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = -1LL;
	uint16_t x298 = 23U;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = -85293343;
	int64_t t73 = 12LL;

	t73 = (x297+(x298<(x299<=x300)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = UINT32_MAX;
	int16_t x304 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x301+(x302<(x303<=x304)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = 6LLU;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	volatile int64_t x308 = -1LL;

	t75 = (x305+(x306<(x307<=x308)));

	if (t75 != 6LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x309 = 3U;
	static int32_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = -1;
	volatile uint32_t t76 = 1U;

	t76 = (x309+(x310<(x311<=x312)));

	if (t76 != 4U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = 1;
	volatile uint32_t x315 = 13159U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t77 = -3;

	t77 = (x313+(x314<(x315<=x316)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = -1;
	uint16_t x318 = 322U;
	int16_t x319 = -1;
	int64_t x320 = -1LL;
	volatile int32_t t78 = 440;

	t78 = (x317+(x318<(x319<=x320)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = 0;
	int8_t x323 = 6;
	uint8_t x324 = 23U;
	volatile int32_t t79 = 0;

	t79 = (x321+(x322<(x323<=x324)));

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = 138;
	static int32_t x327 = -1271419;
	int16_t x328 = -393;
	static int32_t t80 = 14;

	t80 = (x325+(x326<(x327<=x328)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x330 = INT16_MIN;
	static volatile int32_t x331 = 5695;
	int16_t x332 = -1;
	int32_t t81 = 14;

	t81 = (x329+(x330<(x331<=x332)));

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	static volatile int64_t x334 = -1LL;
	int16_t x336 = INT16_MAX;

	t82 = (x333+(x334<(x335<=x336)));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = 80LL;
	static int16_t x338 = 24;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;
	int64_t t83 = -138319476865432LL;

	t83 = (x337+(x338<(x339<=x340)));

	if (t83 != 80LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x343 = 3;
	volatile int32_t t84 = -237;

	t84 = (x341+(x342<(x343<=x344)));

	if (t84 != -14875) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = 1935926925830LL;
	volatile uint16_t x346 = 31849U;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = INT16_MIN;

	t85 = (x345+(x346<(x347<=x348)));

	if (t85 != 1935926925830LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x349 = INT16_MIN;
	int16_t x350 = -12063;
	uint16_t x351 = UINT16_MAX;
	volatile int8_t x352 = INT8_MAX;
	int32_t t86 = 4;

	t86 = (x349+(x350<(x351<=x352)));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = 54279LLU;
	int64_t x355 = 1804829363155LL;
	int32_t x356 = INT32_MAX;
	uint64_t t87 = 9255003123LLU;

	t87 = (x353+(x354<(x355<=x356)));

	if (t87 != 54280LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MAX;
	uint8_t x358 = UINT8_MAX;

	t88 = (x357+(x358<(x359<=x360)));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 1420172222323240645LLU;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	uint64_t t89 = 1438191295636LLU;

	t89 = (x361+(x362<(x363<=x364)));

	if (t89 != 1420172222323240646LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x366 = INT32_MAX;
	int64_t x367 = INT64_MIN;
	static int8_t x368 = -1;
	int32_t t90 = 954194228;

	t90 = (x365+(x366<(x367<=x368)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x369 = INT32_MIN;
	static uint32_t x370 = UINT32_MAX;
	uint32_t x371 = UINT32_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x369+(x370<(x371<=x372)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x373 = -561;
	int16_t x374 = INT16_MAX;
	uint8_t x376 = 126U;
	volatile int32_t t92 = -232;

	t92 = (x373+(x374<(x375<=x376)));

	if (t92 != -561) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x377 = -1;
	static uint32_t x378 = UINT32_MAX;
	static int32_t x379 = -1;
	int16_t x380 = 834;
	volatile int32_t t93 = -232;

	t93 = (x377+(x378<(x379<=x380)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;
	static uint64_t x383 = 1276326802667669LLU;
	uint8_t x384 = 9U;

	t94 = (x381+(x382<(x383<=x384)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MAX;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = 92683466;
	volatile int16_t x388 = INT16_MIN;
	int64_t t95 = INT64_MAX;

	t95 = (x385+(x386<(x387<=x388)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x389 = -1;
	int64_t x390 = -11700816914LL;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t96 = 2218;

	t96 = (x389+(x390<(x391<=x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x393 = INT16_MIN;
	uint32_t x394 = 3U;
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t97 = 0;

	t97 = (x393+(x394<(x395<=x396)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MAX;
	static volatile int8_t x398 = -7;
	int32_t t98 = 8888;

	t98 = (x397+(x398<(x399<=x400)));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x401 = 2018116U;
	uint8_t x402 = 1U;
	int32_t x403 = -1;
	uint32_t x404 = 0U;
	static volatile uint32_t t99 = 57U;

	t99 = (x401+(x402<(x403<=x404)));

	if (t99 != 2018116U) { NG(); } else { ; }
	
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

