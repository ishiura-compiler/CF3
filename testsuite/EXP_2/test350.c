#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int64_t x21 = INT64_MIN;
int8_t x33 = -7;
int64_t x37 = 0LL;
int64_t x40 = INT64_MAX;
uint8_t x43 = 0U;
int64_t t8 = -1015352LL;
volatile uint64_t t9 = 155371552LLU;
int64_t t10 = 357796592532671074LL;
volatile int32_t t12 = 70048;
uint32_t x83 = 1236U;
volatile int32_t t14 = -53;
int8_t x96 = 14;
int8_t x98 = INT8_MIN;
int16_t x100 = INT16_MIN;
static volatile uint32_t t17 = 114124U;
volatile int8_t x104 = -1;
volatile uint64_t x110 = 18LLU;
int32_t x111 = INT32_MIN;
int8_t x112 = INT8_MAX;
int32_t x129 = -1;
uint16_t x145 = UINT16_MAX;
int16_t x153 = INT16_MIN;
int32_t x155 = -1;
volatile int64_t x170 = -823792404LL;
int64_t t32 = -2917155104447LL;
int64_t x204 = 698015LL;
uint8_t x214 = UINT8_MAX;
volatile int64_t t38 = -836034272421007625LL;
int64_t x219 = -1LL;
static uint64_t x220 = 107674696351LLU;
uint64_t t40 = 571725799085837989LLU;
int16_t x225 = INT16_MAX;
int64_t x228 = -1LL;
int8_t x230 = 1;
volatile int64_t t42 = INT64_MAX;
uint32_t t43 = UINT32_MAX;
int64_t t45 = -7441972351122739LL;
uint32_t x251 = UINT32_MAX;
static int16_t x253 = -1;
int16_t x254 = -1;
static volatile int32_t t47 = 63;
volatile int16_t x261 = -1322;
uint32_t x270 = 7304U;
uint64_t t50 = 707236056638858221LLU;
uint16_t x292 = 1796U;
int32_t x297 = -2;
int64_t t56 = -1LL;
int16_t x301 = -2;
int32_t x302 = -1;
volatile int16_t x303 = INT16_MIN;
volatile int32_t t57 = -4724;
int32_t x307 = -1;
int16_t x324 = INT16_MAX;
uint64_t x352 = UINT64_MAX;
int8_t x355 = INT8_MAX;
volatile int32_t x359 = -16095;
int64_t t68 = INT64_MAX;
int8_t x367 = INT8_MAX;
uint32_t t70 = 557U;
static uint16_t x373 = UINT16_MAX;
static uint8_t x391 = 3U;
volatile int64_t t74 = -1952LL;
int64_t t75 = 61830381428LL;
uint32_t x416 = 30U;
int64_t t78 = 0LL;
int8_t x427 = INT8_MAX;
int64_t x429 = INT64_MIN;
static volatile uint64_t t80 = 833116386015LLU;
int64_t x434 = -1LL;
static volatile int64_t x449 = INT64_MAX;
volatile int8_t x452 = 3;
static volatile int64_t t83 = -22215LL;
int16_t x462 = INT16_MAX;
volatile int64_t t86 = -405834LL;
int32_t x493 = INT32_MIN;
static int16_t x494 = INT16_MIN;
int32_t x497 = INT32_MIN;
volatile int64_t t91 = -35953077521591183LL;
int16_t x510 = -1;
int64_t x512 = INT64_MIN;
volatile uint8_t x520 = 121U;
static volatile int32_t t94 = -242284;
volatile uint8_t x530 = 2U;
uint16_t x533 = 0U;
int16_t x534 = -15;
int32_t x535 = 9345;
int8_t x538 = -1;
int16_t x540 = 401;
int8_t x543 = 0;


void f0(void) {
	volatile int16_t x2 = 1;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x1+(x2*x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile int64_t x8 = INT64_MIN;
	int64_t t1 = 819LL;

	t1 = ((x5+(x6*x7))|x8);

	if (t1 != -9223372036850581249LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -545LL;
	static uint32_t x15 = 268796U;
	static volatile int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 36181891254LL;

	t2 = ((x13+(x14*x15))|x16);

	if (t2 != -124LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = 1698529U;
	volatile int16_t x18 = 382;
	int64_t x19 = -1384316129LL;
	int64_t x20 = INT64_MAX;
	volatile int64_t t3 = 21351LL;

	t3 = ((x17+(x18*x19))|x20);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 7841250188087LLU;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MAX;
	static uint64_t t4 = 588627LLU;

	t4 = ((x21+(x22*x23))|x24);

	if (t4 != 9223364195604594687LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 445LL;
	static uint32_t x30 = UINT32_MAX;
	volatile uint32_t x31 = 15U;
	int8_t x32 = INT8_MIN;
	volatile int64_t t5 = -208LL;

	t5 = ((x29+(x30*x31))|x32);

	if (t5 != -82LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x34 = 260518735140017LL;
	volatile int8_t x35 = 11;
	int16_t x36 = 6;
	volatile int64_t t6 = -12827631824137LL;

	t6 = ((x33+(x34*x35))|x36);

	if (t6 != 2865706086540182LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x38 = 12LLU;
	int64_t x39 = INT64_MIN;
	static uint64_t t7 = 10645281985LLU;

	t7 = ((x37+(x38*x39))|x40);

	if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	static int64_t x42 = INT64_MAX;
	int8_t x44 = INT8_MIN;

	t8 = ((x41+(x42*x43))|x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 1U;
	int16_t x46 = -1;
	int64_t x47 = INT64_MAX;
	static uint64_t x48 = 177767369550358LLU;

	t9 = ((x45+(x46*x47))|x48);

	if (t9 != 9223549804224326166LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = INT64_MIN;
	static int32_t x54 = -4;
	static int16_t x55 = INT16_MIN;
	static volatile int8_t x56 = -51;

	t10 = ((x53+(x54*x55))|x56);

	if (t10 != -51LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 11378299U;
	int64_t x58 = 449657663LL;
	static int32_t x59 = INT32_MIN;
	static uint8_t x60 = UINT8_MAX;
	static volatile int64_t t11 = -900LL;

	t11 = ((x57+(x58*x59))|x60);

	if (t11 != -965632478479016193LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 59211;
	int32_t x62 = -1;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = 1985;

	t12 = ((x61+(x62*x63))|x64);

	if (t12 != 59339) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = -1;
	volatile int64_t x82 = 38717LL;
	int8_t x84 = INT8_MAX;
	volatile int64_t t13 = 14457029707254187LL;

	t13 = ((x81+(x82*x83))|x84);

	if (t13 != 47854335LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x85 = -1;
	static uint16_t x86 = 2U;
	int32_t x87 = -1;
	static volatile uint16_t x88 = 1244U;

	t14 = ((x85+(x86*x87))|x88);

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	volatile int16_t x92 = INT16_MIN;
	volatile int64_t t15 = 2062343400LL;

	t15 = ((x89+(x90*x91))|x92);

	if (t15 != -32641LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 0U;
	int64_t x95 = 100415904992773LL;
	int64_t t16 = 4524LL;

	t16 = ((x93+(x94*x95))|x96);

	if (t16 != -114LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x97 = UINT32_MAX;
	static int16_t x99 = -1;

	t17 = ((x97+(x98*x99))|x100);

	if (t17 != 4294934655U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = 372791LLU;
	static volatile uint64_t x103 = 163291316527LLU;
	uint64_t t18 = UINT64_MAX;

	t18 = ((x101+(x102*x103))|x104);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = INT64_MIN;
	uint64_t t19 = 11791100475LLU;

	t19 = ((x109+(x110*x111))|x112);

	if (t19 != 9223371998200070271LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x113 = 63U;
	int32_t x114 = -1;
	static int32_t x115 = -1;
	int8_t x116 = INT8_MAX;
	volatile int32_t t20 = -710928150;

	t20 = ((x113+(x114*x115))|x116);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = 2;
	int8_t x122 = INT8_MAX;
	static int8_t x123 = -1;
	uint8_t x124 = 45U;
	static volatile int32_t t21 = -35;

	t21 = ((x121+(x122*x123))|x124);

	if (t21 != -81) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	uint32_t x126 = 573919U;
	int8_t x127 = -45;
	static int8_t x128 = INT8_MIN;
	volatile uint32_t t22 = 3164166U;

	t22 = ((x125+(x126*x127))|x128);

	if (t22 != 4294967245U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x130 = -1;
	uint32_t x131 = 2760406U;
	uint64_t x132 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = ((x129+(x130*x131))|x132);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = -320620559;
	static int64_t x135 = 4019802590LL;
	int64_t x136 = 8324373491LL;
	volatile int64_t t24 = -98LL;

	t24 = ((x133+(x134*x135))|x136);

	if (t24 != -1288831355353834497LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x141 = UINT16_MAX;
	volatile int16_t x142 = INT16_MIN;
	int64_t x143 = -832733171821LL;
	int8_t x144 = INT8_MIN;
	int64_t t25 = -8385237240529LL;

	t25 = ((x141+(x142*x143))|x144);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x146 = 17;
	int64_t x147 = 37597LL;
	static int64_t x148 = INT64_MIN;
	static int64_t t26 = 23LL;

	t26 = ((x145+(x146*x147))|x148);

	if (t26 != -9223372036854071124LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x154 = INT16_MAX;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t27 = 1;

	t27 = ((x153+(x154*x155))|x156);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = 5U;
	int16_t x158 = 3445;
	int8_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	static int32_t t28 = 1;

	t28 = ((x157+(x158*x159))|x160);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x161 = 3200752;
	int32_t x162 = -23244;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MAX;
	static volatile uint32_t t29 = 10U;

	t29 = ((x161+(x162*x163))|x164);

	if (t29 != 3224063U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = INT64_MIN;
	static int64_t x166 = -1LL;
	static int16_t x167 = INT16_MIN;
	static int16_t x168 = INT16_MIN;
	int64_t t30 = -50738897952871715LL;

	t30 = ((x165+(x166*x167))|x168);

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = 8431;
	volatile int32_t x171 = INT32_MIN;
	volatile uint16_t x172 = UINT16_MAX;
	int64_t t31 = -8264066626LL;

	t31 = ((x169+(x170*x171))|x172);

	if (t31 != 1769080716936675327LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x173 = 14U;
	int32_t x174 = 6728;
	static uint8_t x175 = UINT8_MAX;
	static int64_t x176 = -12170847LL;

	t32 = ((x173+(x174*x175))|x176);

	if (t32 != -10588697LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 9;
	int16_t x178 = -256;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t33 = 14786758LLU;

	t33 = ((x177+(x178*x179))|x180);

	if (t33 != 9223372036854776073LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = 0;
	int8_t x186 = -14;
	int8_t x187 = INT8_MAX;
	static volatile uint32_t x188 = 128289077U;
	uint32_t t34 = 13729U;

	t34 = ((x185+(x186*x187))|x188);

	if (t34 != 4294965567U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x193 = 355LLU;
	volatile int8_t x194 = -10;
	static int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	volatile uint64_t t35 = 120266918LLU;

	t35 = ((x193+(x194*x195))|x196);

	if (t35 != 18446744073709519203LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = -2;
	int8_t x203 = INT8_MAX;
	int64_t t36 = -799718272608976LL;

	t36 = ((x201+(x202*x203))|x204);

	if (t36 != -97LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = INT8_MAX;
	uint16_t x210 = 2009U;
	uint32_t x211 = 586373957U;
	volatile int16_t x212 = -1;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = ((x209+(x210*x211))|x212);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x213 = INT64_MAX;
	int8_t x215 = INT8_MIN;
	static uint32_t x216 = 27683367U;

	t38 = ((x213+(x214*x215))|x216);

	if (t38 != 9223372036854770303LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x217 = 919LLU;
	uint8_t x218 = 60U;
	volatile uint64_t t39 = 120350823LLU;

	t39 = ((x217+(x218*x219))|x220);

	if (t39 != 107674696671LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x221 = 477LLU;
	int32_t x222 = -54625732;
	static int64_t x223 = 2963415155LL;
	static int64_t x224 = INT64_MIN;

	t40 = ((x221+(x222*x223))|x224);

	if (t40 != 18284865351647783633LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x226 = INT16_MAX;
	static int32_t x227 = -1;
	volatile int64_t t41 = -378443909520558178LL;

	t41 = ((x225+(x226*x227))|x228);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = -1;
	volatile int64_t x231 = INT64_MAX;
	volatile uint8_t x232 = 3U;

	t42 = ((x229+(x230*x231))|x232);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x233 = 206U;
	int32_t x234 = -1;
	volatile int16_t x235 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;

	t43 = ((x233+(x234*x235))|x236);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x237 = 890LLU;
	uint16_t x238 = UINT16_MAX;
	volatile int16_t x239 = 241;
	volatile int16_t x240 = INT16_MIN;
	static uint64_t t44 = 2200279033882320353LLU;

	t44 = ((x237+(x238*x239))|x240);

	if (t44 != 18446744073709519497LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x245 = -1LL;
	static uint8_t x246 = 13U;
	int8_t x247 = -60;
	int64_t x248 = -1LL;

	t45 = ((x245+(x246*x247))|x248);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x249 = INT64_MIN;
	static int32_t x250 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	int64_t t46 = -597911293LL;

	t46 = ((x249+(x250*x251))|x252);

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x255 = 9630;
	static int32_t x256 = INT32_MIN;

	t47 = ((x253+(x254*x255))|x256);

	if (t47 != -9631) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MAX;
	uint8_t x260 = 1U;
	volatile int32_t t48 = 442604;

	t48 = ((x257+(x258*x259))|x260);

	if (t48 != 32385) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x262 = 1276264U;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = 43;
	uint64_t t49 = 20170401LLU;

	t49 = ((x261+(x262*x263))|x264);

	if (t49 != 18446744073708274031LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x269 = 3773LLU;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = INT16_MAX;

	t50 = ((x269+(x270*x271))|x272);

	if (t50 != 4294049791LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x273 = -1;
	static uint16_t x274 = UINT16_MAX;
	volatile uint64_t x275 = UINT64_MAX;
	static int64_t x276 = INT64_MIN;
	volatile uint64_t t51 = 4482175479044670914LLU;

	t51 = ((x273+(x274*x275))|x276);

	if (t51 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MIN;
	volatile uint32_t x282 = 125U;
	int16_t x283 = 1;
	int8_t x284 = INT8_MIN;
	volatile uint32_t t52 = 2U;

	t52 = ((x281+(x282*x283))|x284);

	if (t52 != 4294967293U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = INT8_MIN;
	static volatile int16_t x286 = INT16_MIN;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = -20;
	volatile uint32_t t53 = 7641U;

	t53 = ((x285+(x286*x287))|x288);

	if (t53 != 4294967276U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x289 = 423U;
	uint64_t x290 = 293883507838081532LLU;
	uint32_t x291 = UINT32_MAX;
	volatile uint64_t t54 = 8129118011LLU;

	t54 = ((x289+(x290*x291))|x292);

	if (t54 != 5040869927137257391LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = INT64_MAX;
	static uint64_t x294 = 6304429LLU;
	int16_t x295 = -180;
	uint8_t x296 = 7U;
	uint64_t t55 = 68594LLU;

	t55 = ((x293+(x294*x295))|x296);

	if (t55 != 9223372035719978591LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	static int64_t x300 = -1LL;

	t56 = ((x297+(x298*x299))|x300);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x304 = 12927U;

	t57 = ((x301+(x302*x303))|x304);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = 1;
	uint8_t x308 = 7U;
	int32_t t58 = -836648173;

	t58 = ((x305+(x306*x307))|x308);

	if (t58 != -129) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x309 = 0U;
	uint64_t x310 = UINT64_MAX;
	volatile uint64_t x311 = 13800094779562668LLU;
	volatile int64_t x312 = 7LL;
	volatile uint64_t t59 = 7218388985270810757LLU;

	t59 = ((x309+(x310*x311))|x312);

	if (t59 != 18432943978929988951LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x317 = 48U;
	volatile int16_t x318 = INT16_MIN;
	uint16_t x319 = 77U;
	static int32_t x320 = -1;
	static volatile int32_t t60 = 7080;

	t60 = ((x317+(x318*x319))|x320);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x322 = 0;
	int64_t x323 = 48174LL;
	static int64_t t61 = 0LL;

	t61 = ((x321+(x322*x323))|x324);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	int16_t x331 = -1;
	static int32_t x332 = 1;
	int32_t t62 = 119545592;

	t62 = ((x329+(x330*x331))|x332);

	if (t62 != 32641) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = INT8_MIN;
	volatile uint64_t x334 = 13182974990040957LLU;
	uint64_t x335 = 940093098012112700LLU;
	volatile int32_t x336 = INT32_MIN;
	volatile uint64_t t63 = 1534591221876LLU;

	t63 = ((x333+(x334*x335))|x336);

	if (t63 != 18446744073217932236LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = 4320;
	uint64_t x343 = 1605999958555156LLU;
	volatile uint8_t x344 = 62U;
	uint64_t t64 = 34LLU;

	t64 = ((x341+(x342*x343))|x344);

	if (t64 != 6937919820958241214LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = -1;
	volatile uint8_t x346 = 15U;
	int32_t x347 = -1480158;
	int32_t x348 = -5592;
	static int32_t t65 = -216;

	t65 = ((x345+(x346*x347))|x348);

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x349 = 373995109LLU;
	uint64_t x350 = 5680284614853585554LLU;
	static volatile int16_t x351 = INT16_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x349+(x350*x351))|x352);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x353 = 30970U;
	uint8_t x354 = UINT8_MAX;
	uint8_t x356 = 7U;
	volatile int32_t t67 = 0;

	t67 = ((x353+(x354*x355))|x356);

	if (t67 != 63359) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	int64_t x360 = INT64_MAX;

	t68 = ((x357+(x358*x359))|x360);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x365 = -1;
	static volatile int16_t x366 = -12654;
	static int8_t x368 = 0;
	int32_t t69 = 1;

	t69 = ((x365+(x366*x367))|x368);

	if (t69 != -1607059) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 32602U;
	static int16_t x371 = -114;
	uint8_t x372 = 85U;

	t70 = ((x369+(x370*x371))|x372);

	if (t70 != 4291250687U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x374 = -1LL;
	int32_t x375 = INT32_MAX;
	static int64_t x376 = -1LL;
	int64_t t71 = 73903626271158804LL;

	t71 = ((x373+(x374*x375))|x376);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x381 = 225181485U;
	int64_t x382 = 5931917596LL;
	int64_t x383 = -1LL;
	int16_t x384 = -1;
	int64_t t72 = -1292LL;

	t72 = ((x381+(x382*x383))|x384);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x389 = INT32_MIN;
	volatile uint32_t x390 = 1014U;
	static int16_t x392 = INT16_MAX;
	volatile uint32_t t73 = 263194326U;

	t73 = ((x389+(x390*x391))|x392);

	if (t73 != 2147516415U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = 3;
	int16_t x395 = -1;
	volatile int64_t x396 = INT64_MAX;

	t74 = ((x393+(x394*x395))|x396);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x405 = INT32_MIN;
	int64_t x406 = 21633112LL;
	int8_t x407 = -1;
	int16_t x408 = INT16_MAX;

	t75 = ((x405+(x406*x407))|x408);

	if (t75 != -2169110529LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x409 = 67654U;
	volatile uint8_t x410 = UINT8_MAX;
	volatile int8_t x411 = -7;
	int8_t x412 = -1;
	uint32_t t76 = UINT32_MAX;

	t76 = ((x409+(x410*x411))|x412);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x413 = UINT64_MAX;
	volatile uint32_t x414 = 21U;
	volatile uint16_t x415 = 38U;
	uint64_t t77 = 737LLU;

	t77 = ((x413+(x414*x415))|x416);

	if (t77 != 799LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x421 = UINT16_MAX;
	int8_t x422 = -1;
	static volatile int32_t x423 = -123445;
	volatile int64_t x424 = -32790979943158620LL;

	t78 = ((x421+(x422*x423))|x424);

	if (t78 != -32790979943141708LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = 102;
	volatile uint16_t x428 = 1U;
	volatile int32_t t79 = -1;

	t79 = ((x425+(x426*x427))|x428);

	if (t79 != 12827) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x430 = 0U;
	uint64_t x431 = 508132LLU;
	uint8_t x432 = 54U;

	t80 = ((x429+(x430*x431))|x432);

	if (t80 != 9223372036854775862LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x433 = INT16_MIN;
	volatile int64_t x435 = -26908992354098160LL;
	static int8_t x436 = INT8_MIN;
	int64_t t81 = 1LL;

	t81 = ((x433+(x434*x435))|x436);

	if (t81 != -16LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x450 = -1LL;
	uint16_t x451 = 6U;
	static int64_t t82 = 299090639LL;

	t82 = ((x449+(x450*x451))|x452);

	if (t82 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x453 = -1;
	static volatile int16_t x454 = -3673;
	volatile int8_t x455 = INT8_MAX;
	int64_t x456 = INT64_MAX;

	t83 = ((x453+(x454*x455))|x456);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x457 = INT64_MAX;
	int32_t x458 = INT32_MIN;
	int8_t x459 = 0;
	volatile int64_t x460 = 0LL;
	volatile int64_t t84 = INT64_MAX;

	t84 = ((x457+(x458*x459))|x460);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x461 = -142;
	int16_t x463 = -1;
	volatile int16_t x464 = INT16_MIN;
	int32_t t85 = 224;

	t85 = ((x461+(x462*x463))|x464);

	if (t85 != -141) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x477 = -1;
	int8_t x478 = 31;
	volatile int64_t x479 = 1822364LL;
	int8_t x480 = INT8_MIN;

	t86 = ((x477+(x478*x479))|x480);

	if (t86 != -29LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = 0;
	uint16_t x482 = 52U;
	uint32_t x483 = 58005U;
	static uint16_t x484 = UINT16_MAX;
	volatile uint32_t t87 = 65012337U;

	t87 = ((x481+(x482*x483))|x484);

	if (t87 != 3080191U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x489 = 570703U;
	static volatile uint64_t x490 = 2051410556322732LLU;
	int16_t x491 = INT16_MIN;
	uint64_t x492 = 56429267LLU;
	uint64_t t88 = 641LLU;

	t88 = ((x489+(x490*x491))|x492);

	if (t88 != 6566355185277321183LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x495 = -1;
	static int32_t x496 = 127173;
	int32_t t89 = 1015524881;

	t89 = ((x493+(x494*x495))|x496);

	if (t89 != -2147356475) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x498 = 15LLU;
	int64_t x499 = -1LL;
	uint8_t x500 = 22U;
	uint64_t t90 = 130770150434701390LLU;

	t90 = ((x497+(x498*x499))|x500);

	if (t90 != 18446744071562067959LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x501 = 62U;
	volatile int8_t x502 = INT8_MIN;
	int64_t x503 = -5060810019807LL;
	int64_t x504 = 0LL;

	t91 = ((x501+(x502*x503))|x504);

	if (t91 != 647783682535358LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x505 = 51U;
	static volatile int8_t x506 = -13;
	static int8_t x507 = INT8_MIN;
	int8_t x508 = -1;
	int32_t t92 = 10;

	t92 = ((x505+(x506*x507))|x508);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x509 = -1;
	uint8_t x511 = 93U;
	static int64_t t93 = -56621535318970752LL;

	t93 = ((x509+(x510*x511))|x512);

	if (t93 != -94LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x517 = -1;
	uint8_t x518 = 4U;
	int16_t x519 = INT16_MAX;

	t94 = ((x517+(x518*x519))|x520);

	if (t94 != 131067) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x525 = -350738639;
	int8_t x526 = INT8_MIN;
	int64_t x527 = -1LL;
	static uint32_t x528 = UINT32_MAX;
	int64_t t95 = 58854553LL;

	t95 = ((x525+(x526*x527))|x528);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x529 = INT8_MAX;
	int8_t x531 = -1;
	uint8_t x532 = 14U;
	int32_t t96 = -99;

	t96 = ((x529+(x530*x531))|x532);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x536 = -1;
	int32_t t97 = -2783415;

	t97 = ((x533+(x534*x535))|x536);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x537 = INT32_MAX;
	volatile int64_t x539 = 3824LL;
	int64_t t98 = 31415LL;

	t98 = ((x537+(x538*x539))|x540);

	if (t98 != 2147479967LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x541 = -1;
	volatile int8_t x542 = -2;
	uint64_t x544 = 1984LLU;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x541+(x542*x543))|x544);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

