#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 6910704;
volatile int16_t x21 = 590;
volatile uint16_t x24 = 0U;
volatile int16_t x26 = -1;
uint64_t x33 = 1216851LLU;
uint8_t x34 = 3U;
int64_t x39 = INT64_MIN;
volatile int32_t x42 = 3246492;
volatile int32_t t8 = -49916154;
uint32_t x57 = UINT32_MAX;
volatile int8_t x67 = -1;
int8_t x79 = -1;
int8_t x83 = 11;
uint16_t x87 = 14U;
volatile uint64_t t16 = 1684795737831LLU;
volatile uint64_t t17 = 3LLU;
uint32_t x98 = 24U;
volatile uint32_t t18 = 851391U;
uint8_t x105 = 7U;
volatile uint8_t x107 = UINT8_MAX;
int64_t x108 = INT64_MAX;
uint16_t x113 = 840U;
int16_t x143 = INT16_MIN;
uint8_t x152 = 125U;
static volatile uint64_t x155 = 1229489945570620LLU;
int32_t x158 = -1;
volatile int32_t x166 = INT32_MIN;
volatile int32_t x171 = 12201;
volatile int64_t t30 = -6053312708LL;
uint64_t x180 = UINT64_MAX;
uint64_t x182 = UINT64_MAX;
int16_t x183 = -1;
int8_t x188 = -1;
int32_t x192 = -1;
uint64_t x202 = 3LLU;
static uint16_t x209 = 50U;
uint64_t x215 = 1235613770975LLU;
volatile uint64_t t37 = 1LLU;
int32_t x220 = INT32_MIN;
volatile int32_t t38 = -11271739;
static int32_t x228 = -4168716;
static int64_t x233 = INT64_MAX;
static int32_t x239 = INT32_MAX;
uint32_t x241 = 64U;
int64_t t45 = 35034347989359841LL;
static uint64_t t46 = 23598512329868908LLU;
uint32_t x265 = 12U;
uint64_t x268 = 100064937LLU;
uint16_t x307 = 6U;
int32_t t53 = 5627493;
uint16_t x318 = 125U;
int32_t x330 = INT32_MIN;
uint32_t x333 = 323U;
int32_t x334 = -1;
static int32_t x335 = 1613131;
int8_t x337 = -3;
uint32_t x340 = 75888596U;
uint8_t x352 = 6U;
static int32_t t59 = 8;
volatile uint64_t t60 = 8614429469471450LLU;
uint32_t x367 = 147U;
int8_t x376 = 0;
volatile int32_t x377 = 56982;
volatile int8_t x386 = INT8_MIN;
static uint8_t x398 = 31U;
uint32_t x399 = 4819U;
static int32_t x406 = INT32_MIN;
volatile uint32_t t67 = 1U;
int64_t x417 = 7016LL;
int32_t x429 = INT32_MIN;
int32_t t70 = -3965;
uint16_t x455 = 3894U;
uint32_t x460 = 1U;
volatile int64_t t72 = -1281253179LL;
int16_t x465 = -1;
static int64_t x467 = -1LL;
int64_t x478 = -1LL;
int32_t x487 = 2;
uint32_t x490 = 1654174673U;
uint8_t x491 = 0U;
volatile int64_t x493 = -1LL;
int8_t x495 = -1;
uint64_t t78 = 6650116379051973559LLU;
int64_t x518 = INT64_MAX;
int64_t t79 = 71695LL;
int64_t x549 = INT64_MIN;
volatile uint64_t t81 = 4513LLU;
int16_t x555 = INT16_MIN;
static int8_t x558 = INT8_MAX;
int8_t x559 = INT8_MIN;
uint32_t x564 = 0U;
uint32_t x577 = 84033U;
int32_t x581 = -1;
int64_t x584 = -1LL;
int64_t t87 = -1118835466744156LL;
int64_t x589 = -1LL;
int32_t x604 = -1;
int32_t t91 = 337685;
int64_t x611 = -486536636LL;
uint64_t x618 = 222464618725LLU;
int8_t x628 = 0;
static int8_t x634 = 4;
int32_t x644 = INT32_MIN;
int16_t x646 = INT16_MIN;
uint16_t x647 = UINT16_MAX;
volatile int64_t t99 = -1850LL;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = 6668;
	int16_t x3 = 0;
	int8_t x4 = INT8_MAX;

	t0 = (x1*((x2+x3)+x4));

	if (t0 != -6795) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MIN;
	static volatile uint8_t x14 = 0U;
	uint8_t x15 = 0U;
	int8_t x16 = 1;
	int64_t t1 = INT64_MIN;

	t1 = (x13*((x14+x15)+x16));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = 161;
	static volatile uint64_t x23 = 4LLU;
	volatile uint64_t t2 = 15595538LLU;

	t2 = (x21*((x22+x23)+x24));

	if (t2 != 97350LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x25 = 9U;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t3 = -1516;

	t3 = (x25*((x26+x27)+x28));

	if (t3 != 884709) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = INT16_MIN;
	int16_t x30 = 62;
	static int8_t x31 = -1;
	int16_t x32 = -3251;
	volatile int32_t t4 = 410;

	t4 = (x29*((x30+x31)+x32));

	if (t4 != 104529920) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x35 = 39;
	int32_t x36 = INT32_MIN;
	uint64_t t5 = 68964565316LLU;

	t5 = (x33*((x34+x35)+x36));

	if (t5 != 18444130906136106910LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = 152U;
	uint64_t x38 = 891583676662702549LLU;
	int64_t x40 = 32107102LL;
	static uint64_t t6 = 187459044000303082LLU;

	t6 = (x37*((x38+x39)+x40));

	if (t6 != 6393510341644205640LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = 50LLU;
	static int16_t x43 = INT16_MIN;
	static int64_t x44 = -1LL;
	volatile uint64_t t7 = 26067602108LLU;

	t7 = (x41*((x42+x43)+x44));

	if (t7 != 160686150LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x49 = 15U;
	int32_t x50 = -1;
	static int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MIN;

	t8 = (x49*((x50+x51)+x52));

	if (t8 != -983055) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 4227U;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = 5169;
	int64_t x56 = INT64_MIN;
	static uint64_t t9 = 2999776673253LLU;

	t9 = (x53*((x54+x55)+x56));

	if (t9 != 9223372036876620944LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x58 = -3;
	static int16_t x59 = INT16_MIN;
	uint64_t x60 = 21476786779LLU;
	volatile uint64_t t10 = 19LLU;

	t10 = (x57*((x58+x59)+x60));

	if (t10 != 8235698572410280LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 1U;
	int64_t x66 = INT64_MAX;
	uint64_t x68 = 0LLU;
	uint64_t t11 = 74LLU;

	t11 = (x65*((x66+x67)+x68));

	if (t11 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = 1;
	uint64_t x70 = 620LLU;
	static int32_t x71 = -1;
	static int64_t x72 = -1LL;
	static volatile uint64_t t12 = 5198049806163149LLU;

	t12 = (x69*((x70+x71)+x72));

	if (t12 != 618LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = 2965358LLU;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t13 = 4629361523LLU;

	t13 = (x77*((x78+x79)+x80));

	if (t13 != 18446744073329986048LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = UINT8_MAX;
	static uint8_t x82 = 1U;
	static int16_t x84 = -2;
	static int32_t t14 = 1;

	t14 = (x81*((x82+x83)+x84));

	if (t14 != 2550) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 15U;
	int16_t x86 = INT16_MIN;
	volatile int8_t x88 = 1;
	static volatile int32_t t15 = 142682;

	t15 = (x85*((x86+x87)+x88));

	if (t15 != -491295) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = 3;
	volatile uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 2682472099300166909LLU;

	t16 = (x89*((x90+x91)+x92));

	if (t16 != 8047416297900696948LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x93 = 2626791673821032LLU;
	int64_t x94 = 208281524LL;
	int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MAX;

	t17 = (x93*((x94+x95)+x96));

	if (t17 != 14909925994616427960LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = -1;
	volatile int16_t x99 = 1;
	int16_t x100 = -1;

	t18 = (x97*((x98+x99)+x100));

	if (t18 != 4294967272U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x106 = 2398036333110523LLU;
	uint64_t t19 = 47185910003701579LLU;

	t19 = (x105*((x106+x107)+x108));

	if (t19 != 9240158291186551247LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x114 = -1;
	int64_t x115 = -1LL;
	int8_t x116 = INT8_MIN;
	int64_t t20 = 23386LL;

	t20 = (x113*((x114+x115)+x116));

	if (t20 != -109200LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = -1010LL;
	static int64_t x126 = -17167LL;
	int32_t x127 = -142;
	static volatile int16_t x128 = INT16_MIN;
	volatile int64_t t21 = -1512516LL;

	t21 = (x125*((x126+x127)+x128));

	if (t21 != 50577770LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = -29;
	int16_t x130 = -12;
	uint8_t x131 = 13U;
	uint8_t x132 = UINT8_MAX;
	int32_t t22 = 21702114;

	t22 = (x129*((x130+x131)+x132));

	if (t22 != -7424) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = INT16_MIN;
	uint16_t x134 = 502U;
	volatile uint8_t x135 = UINT8_MAX;
	int16_t x136 = -1;
	static volatile int32_t t23 = 123306278;

	t23 = (x133*((x134+x135)+x136));

	if (t23 != -24772608) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = -1;
	volatile uint64_t x138 = 129612090LLU;
	static uint64_t x139 = UINT64_MAX;
	uint32_t x140 = 40U;
	static volatile uint64_t t24 = 12642102612071892LLU;

	t24 = (x137*((x138+x139)+x140));

	if (t24 != 18446744073579939487LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 3U;
	int8_t x142 = 23;
	uint8_t x144 = 1U;
	volatile int32_t t25 = -737;

	t25 = (x141*((x142+x143)+x144));

	if (t25 != -98232) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	static volatile uint64_t t26 = 13431299LLU;

	t26 = (x149*((x150+x151)+x152));

	if (t26 != 15621LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x153 = 30880663LL;
	volatile int64_t x154 = -9LL;
	int32_t x156 = INT32_MIN;
	static volatile uint64_t t27 = 540091915305572917LLU;

	t27 = (x153*((x154+x155)+x156));

	if (t27 != 3999051641291870741LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x157 = 404U;
	int8_t x159 = INT8_MAX;
	int32_t x160 = -44;
	uint32_t t28 = 7U;

	t28 = (x157*((x158+x159)+x160));

	if (t28 != 33128U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = UINT64_MAX;
	static uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	static volatile uint64_t t29 = 3879LLU;

	t29 = (x165*((x166+x167)+x168));

	if (t29 != 2147516417LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = 55327854756LL;
	int64_t x170 = 130323439LL;
	uint8_t x172 = 12U;

	t30 = (x169*((x170+x171)+x172));

	if (t30 != 7211192023384560912LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x177 = -1;
	int32_t x178 = 210;
	int8_t x179 = 21;
	uint64_t t31 = 36717749LLU;

	t31 = (x177*((x178+x179)+x180));

	if (t31 != 18446744073709551386LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = 0U;
	volatile uint16_t x184 = UINT16_MAX;
	uint64_t t32 = 50119704699129312LLU;

	t32 = (x181*((x182+x183)+x184));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	int64_t t33 = -3845522653014782469LL;

	t33 = (x185*((x186+x187)+x188));

	if (t33 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x189 = INT32_MAX;
	volatile uint64_t x190 = 188636136LLU;
	uint32_t x191 = UINT32_MAX;
	uint64_t t34 = 20259131153153LLU;

	t34 = (x189*((x190+x191)+x192));

	if (t34 != 9628465045558109210LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x201 = 2U;
	int64_t x203 = -1LL;
	uint8_t x204 = 12U;
	uint64_t t35 = 38626122LLU;

	t35 = (x201*((x202+x203)+x204));

	if (t35 != 28LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MAX;
	static int16_t x212 = INT16_MAX;
	uint64_t t36 = 4246721172LLU;

	t36 = (x209*((x210+x211)+x212));

	if (t36 != 107375820650LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x213 = 15U;
	uint8_t x214 = 0U;
	uint16_t x216 = 4U;

	t37 = (x213*((x214+x215)+x216));

	if (t37 != 18534206564685LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x217 = -1;
	uint16_t x218 = 223U;
	int8_t x219 = -12;

	t38 = (x217*((x218+x219)+x220));

	if (t38 != 2147483437) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x221 = -85201LL;
	volatile int16_t x222 = INT16_MAX;
	int64_t x223 = -1LL;
	static int64_t x224 = -1LL;
	volatile int64_t t39 = 716670LL;

	t39 = (x221*((x222+x223)+x224));

	if (t39 != -2791610765LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x225 = 15U;
	static uint16_t x226 = UINT16_MAX;
	int16_t x227 = INT16_MIN;
	volatile int32_t t40 = -161;

	t40 = (x225*((x226+x227)+x228));

	if (t40 != -62039235) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x234 = 6U;
	uint8_t x235 = 1U;
	uint64_t x236 = 15321288LLU;
	volatile uint64_t t41 = 1603015361463275LLU;

	t41 = (x233*((x234+x235)+x236));

	if (t41 != 9223372036839454513LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x237 = -1;
	int64_t x238 = INT64_MIN;
	volatile int16_t x240 = -1;
	int64_t t42 = 2873245953640894516LL;

	t42 = (x237*((x238+x239)+x240));

	if (t42 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x242 = -14;
	int64_t x243 = -1404090763531LL;
	int8_t x244 = -1;
	int64_t t43 = -42120850LL;

	t43 = (x241*((x242+x243)+x244));

	if (t43 != -89861808866944LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x249 = INT32_MIN;
	static uint8_t x250 = 70U;
	uint64_t x251 = 658950LLU;
	volatile int32_t x252 = INT32_MIN;
	uint64_t t44 = 230LLU;

	t44 = (x249*((x250+x251)+x252));

	if (t44 != 4610270783753682944LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = 300U;
	int64_t x258 = -1LL;
	int16_t x259 = 1;
	volatile int16_t x260 = 0;

	t45 = (x257*((x258+x259)+x260));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x261 = 978LLU;
	uint64_t x262 = UINT64_MAX;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = -18;

	t46 = (x261*((x262+x263)+x264));

	if (t46 != 230808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x266 = -1LL;
	uint64_t x267 = UINT64_MAX;
	uint64_t t47 = 200121104607LLU;

	t47 = (x265*((x266+x267)+x268));

	if (t47 != 1200779220LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x269 = 1U;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -10;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t48 = 10093540;

	t48 = (x269*((x270+x271)+x272));

	if (t48 != -32651) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x285 = 59;
	uint16_t x286 = 44U;
	static volatile int16_t x287 = INT16_MAX;
	uint16_t x288 = 1U;
	volatile int32_t t49 = -196;

	t49 = (x285*((x286+x287)+x288));

	if (t49 != 1935908) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x289 = 3U;
	volatile uint8_t x290 = 28U;
	int64_t x291 = INT64_MIN;
	static volatile int64_t x292 = INT64_MAX;
	int64_t t50 = -2746910213553LL;

	t50 = (x289*((x290+x291)+x292));

	if (t50 != 81LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x293 = 30LLU;
	int16_t x294 = -1;
	volatile uint8_t x295 = 1U;
	int16_t x296 = -1;
	uint64_t t51 = 2879727LLU;

	t51 = (x293*((x294+x295)+x296));

	if (t51 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x305 = 3U;
	int64_t x306 = 7711807311176378LL;
	uint64_t x308 = 651302376836878LLU;
	volatile uint64_t t52 = 474LLU;

	t52 = (x305*((x306+x307)+x308));

	if (t52 != 25089329064039786LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x313 = 1;
	volatile int32_t x314 = -1;
	int8_t x315 = 3;
	static volatile int32_t x316 = 6;

	t53 = (x313*((x314+x315)+x316));

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x317 = INT32_MIN;
	static volatile uint32_t x319 = 4911U;
	static volatile int16_t x320 = INT16_MAX;
	uint32_t t54 = 6U;

	t54 = (x317*((x318+x319)+x320));

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x329 = INT8_MIN;
	uint64_t x331 = 920734679LLU;
	volatile uint16_t x332 = 31972U;
	volatile uint64_t t55 = 3651986137079999LLU;

	t55 = (x329*((x330+x331)+x332));

	if (t55 != 157019775616LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x336 = -6;
	uint32_t t56 = 1835975U;

	t56 = (x333*((x334+x335)+x336));

	if (t56 != 521039052U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x338 = 52U;
	static int16_t x339 = -1;
	uint32_t t57 = 934U;

	t57 = (x337*((x338+x339)+x340));

	if (t57 != 4067301355U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x345 = -6;
	static uint8_t x346 = 1U;
	int16_t x347 = -2;
	uint16_t x348 = 2219U;
	static volatile int32_t t58 = -12;

	t58 = (x345*((x346+x347)+x348));

	if (t58 != -13308) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x349 = -1;
	int16_t x350 = -1;
	int16_t x351 = INT16_MIN;

	t59 = (x349*((x350+x351)+x352));

	if (t59 != 32763) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x357 = 1;
	int32_t x358 = -1;
	static volatile uint16_t x359 = 33U;
	uint64_t x360 = UINT64_MAX;

	t60 = (x357*((x358+x359)+x360));

	if (t60 != 31LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x361 = 13U;
	static uint64_t x362 = UINT64_MAX;
	static volatile int32_t x363 = 1;
	int8_t x364 = INT8_MAX;
	uint64_t t61 = 3354690545LLU;

	t61 = (x361*((x362+x363)+x364));

	if (t61 != 1651LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x365 = INT16_MIN;
	static uint16_t x366 = UINT16_MAX;
	int16_t x368 = -1;
	uint32_t t62 = 756578U;

	t62 = (x365*((x366+x367)+x368));

	if (t62 != 2142732288U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x373 = -1;
	int16_t x374 = INT16_MIN;
	volatile int64_t x375 = 111826793LL;
	int64_t t63 = 379205253978864LL;

	t63 = (x373*((x374+x375)+x376));

	if (t63 != -111794025LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x378 = -1LL;
	static uint16_t x379 = 30U;
	int64_t x380 = -1LL;
	volatile int64_t t64 = 1451168LL;

	t64 = (x377*((x378+x379)+x380));

	if (t64 != 1595496LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x385 = -387;
	static volatile uint32_t x387 = 32957310U;
	int32_t x388 = INT32_MIN;
	uint32_t t65 = 2U;

	t65 = (x385*((x386+x387)+x388));

	if (t65 != 2277956102U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x397 = INT32_MAX;
	static uint8_t x400 = 38U;
	volatile uint32_t t66 = 29014514U;

	t66 = (x397*((x398+x399)+x400));

	if (t66 != 4294962408U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static uint32_t x407 = 1768U;
	int32_t x408 = -1;

	t67 = (x405*((x406+x407)+x408));

	if (t67 != 2147481881U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x418 = 2612278U;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = 11U;
	int64_t t68 = 476292792LL;

	t68 = (x417*((x418+x419)+x420));

	if (t68 != 18097919336LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x430 = 15713466LLU;
	int8_t x431 = INT8_MIN;
	int8_t x432 = 24;
	uint64_t t69 = 136489995786LLU;

	t69 = (x429*((x430+x431)+x432));

	if (t69 != 18412999885759447040LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x441 = UINT8_MAX;
	int8_t x442 = INT8_MIN;
	int32_t x443 = 7703;
	uint8_t x444 = 8U;

	t70 = (x441*((x442+x443)+x444));

	if (t70 != 1933665) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x453 = UINT64_MAX;
	int32_t x454 = INT32_MIN;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t71 = 1621472882LLU;

	t71 = (x453*((x454+x455)+x456));

	if (t71 != 2147479882LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x457 = -64;
	int16_t x458 = -33;
	int64_t x459 = -1LL;

	t72 = (x457*((x458+x459)+x460));

	if (t72 != 2112LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x466 = -1LL;
	int64_t x468 = -1LL;
	volatile int64_t t73 = 103LL;

	t73 = (x465*((x466+x467)+x468));

	if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x477 = INT8_MIN;
	static int16_t x479 = -1;
	int16_t x480 = -1;
	static int64_t t74 = 26977323228LL;

	t74 = (x477*((x478+x479)+x480));

	if (t74 != 384LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x481 = UINT8_MAX;
	int64_t x482 = -2660021237429152LL;
	static int32_t x483 = -1051623;
	volatile int16_t x484 = INT16_MIN;
	int64_t t75 = -6191062086821LL;

	t75 = (x481*((x482+x483)+x484));

	if (t75 != -678305415820953465LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x485 = 39408527864320592LL;
	int16_t x486 = INT16_MIN;
	static uint64_t x488 = 121LLU;
	uint64_t t76 = 418533014439LLU;

	t76 = (x485*((x486+x487)+x488));

	if (t76 != 4780693028922887280LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x489 = 1;
	int8_t x492 = -1;
	volatile uint32_t t77 = 2339330U;

	t77 = (x489*((x490+x491)+x492));

	if (t77 != 1654174672U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x494 = UINT64_MAX;
	uint32_t x496 = 5010976U;

	t78 = (x493*((x494+x495)+x496));

	if (t78 != 18446744073704540642LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x517 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	static int8_t x520 = -1;

	t79 = (x517*((x518+x519)+x520));

	if (t79 != 65536LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x541 = INT16_MAX;
	int32_t x542 = INT32_MIN;
	static uint32_t x543 = UINT32_MAX;
	int64_t x544 = -1LL;
	volatile int64_t t80 = 23689179376895LL;

	t80 = (x541*((x542+x543)+x544));

	if (t80 != 70366596628482LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x550 = 38052608468771LLU;
	static volatile int64_t x551 = -1LL;
	int16_t x552 = 2038;

	t81 = (x549*((x550+x551)+x552));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x553 = 59;
	int16_t x554 = -1;
	int16_t x556 = -1;
	int32_t t82 = 521088724;

	t82 = (x553*((x554+x555)+x556));

	if (t82 != -1933430) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x557 = -10;
	uint32_t x560 = 27U;
	uint32_t t83 = 3U;

	t83 = (x557*((x558+x559)+x560));

	if (t83 != 4294967036U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x561 = INT8_MIN;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = INT32_MAX;
	volatile uint32_t t84 = 1871019U;

	t84 = (x561*((x562+x563)+x564));

	if (t84 != 256U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x573 = -7841;
	uint64_t x574 = 6279576LLU;
	int16_t x575 = -1;
	int64_t x576 = INT64_MIN;
	uint64_t t85 = 6049427509LLU;

	t85 = (x573*((x574+x575)+x576));

	if (t85 != 9223371987616628233LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x578 = 54396U;
	uint16_t x579 = 3U;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t86 = 506167112789247458LLU;

	t86 = (x577*((x578+x579)+x580));

	if (t86 != 4571227134LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x582 = -1;
	int16_t x583 = INT16_MIN;

	t87 = (x581*((x582+x583)+x584));

	if (t87 != 32770LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x585 = 407949356811390LLU;
	static uint8_t x586 = 3U;
	volatile int16_t x587 = INT16_MIN;
	int16_t x588 = INT16_MIN;
	volatile uint64_t t88 = 3641171570013291LLU;

	t88 = (x585*((x586+x587)+x588));

	if (t88 != 10159342947498282362LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x590 = 27417402097443LLU;
	uint8_t x591 = UINT8_MAX;
	uint32_t x592 = 126198747U;
	static uint64_t t89 = 378767625935314916LLU;

	t89 = (x589*((x590+x591)+x592));

	if (t89 != 18446716656181255171LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x593 = 0;
	int8_t x594 = -1;
	int8_t x595 = INT8_MIN;
	static int8_t x596 = 0;
	int32_t t90 = -923;

	t90 = (x593*((x594+x595)+x596));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x601 = INT16_MIN;
	static int8_t x602 = -15;
	uint8_t x603 = UINT8_MAX;

	t91 = (x601*((x602+x603)+x604));

	if (t91 != -7831552) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x609 = INT32_MAX;
	int16_t x610 = -1;
	int32_t x612 = INT32_MIN;
	static volatile int64_t t92 = -109927359180042388LL;

	t92 = (x609*((x610+x611)+x612));

	if (t92 != -5656515487903779395LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x617 = INT32_MIN;
	uint16_t x619 = 1U;
	uint64_t x620 = 57LLU;
	volatile uint64_t t93 = 108171982LLU;

	t93 = (x617*((x618+x619)+x620));

	if (t93 != 1876214821402181632LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x625 = INT64_MIN;
	uint64_t x626 = UINT64_MAX;
	int64_t x627 = INT64_MAX;
	volatile uint64_t t94 = 93317007332LLU;

	t94 = (x625*((x626+x627)+x628));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x629 = -13;
	volatile uint8_t x630 = 3U;
	int16_t x631 = -2600;
	int64_t x632 = -2704LL;
	static int64_t t95 = -4510361600903214780LL;

	t95 = (x629*((x630+x631)+x632));

	if (t95 != 68913LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x633 = -3;
	int32_t x635 = INT32_MIN;
	static uint32_t x636 = UINT32_MAX;
	uint32_t t96 = 0U;

	t96 = (x633*((x634+x635)+x636));

	if (t96 != 2147483639U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x641 = 59U;
	uint16_t x642 = 7514U;
	uint32_t x643 = UINT32_MAX;
	uint32_t t97 = 2165U;

	t97 = (x641*((x642+x643)+x644));

	if (t97 != 2147926915U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x645 = 4232966258LLU;
	int64_t x648 = 320280LL;
	uint64_t t98 = 358577869LLU;

	t98 = (x645*((x646+x647)+x648));

	if (t98 != 1494436038488126LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x649 = -49586526632LL;
	int8_t x650 = INT8_MAX;
	uint8_t x651 = 3U;
	uint32_t x652 = UINT32_MAX;

	t99 = (x649*((x650+x651)+x652));

	if (t99 != -6396661935528LL) { NG(); } else { ; }
	
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

