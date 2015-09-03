#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int32_t t0 = 52511;
static uint16_t x13 = UINT16_MAX;
int32_t x16 = -1;
static int64_t x24 = INT64_MAX;
volatile int16_t x39 = INT16_MIN;
uint32_t x42 = UINT32_MAX;
int8_t x45 = INT8_MIN;
int64_t x54 = -1LL;
int64_t t10 = -466122226945117052LL;
volatile int32_t x67 = -568147;
uint32_t t12 = 878502745U;
int32_t x72 = -1;
int8_t x85 = -1;
static int16_t x86 = INT16_MIN;
volatile int32_t x89 = -51663525;
uint64_t x90 = UINT64_MAX;
int64_t x91 = INT64_MIN;
volatile int8_t x101 = -2;
uint16_t x113 = 224U;
volatile int8_t x116 = 2;
int64_t x117 = -100051LL;
int16_t x119 = INT16_MIN;
volatile uint32_t t22 = 122670607U;
int8_t x144 = INT8_MIN;
uint64_t x157 = UINT64_MAX;
static int16_t x170 = -1;
static uint16_t x172 = 0U;
uint16_t x178 = UINT16_MAX;
volatile uint64_t x183 = 6419779499LLU;
static volatile int64_t t33 = -1646817330391LL;
static uint8_t x201 = 0U;
int64_t x202 = -1LL;
static volatile int64_t t35 = 11916780LL;
volatile int64_t x207 = 3980901LL;
int64_t x218 = -1LL;
int16_t x221 = 1;
uint64_t t39 = 28287029656167170LLU;
int16_t x233 = -31;
int8_t x235 = -1;
int8_t x253 = -1;
volatile int32_t t43 = 2758;
static int32_t x267 = 1256;
uint16_t x268 = 5033U;
volatile uint16_t x269 = UINT16_MAX;
int16_t x270 = 706;
uint32_t x283 = UINT32_MAX;
int16_t x299 = -1;
static volatile int8_t x300 = INT8_MIN;
int16_t x303 = INT16_MIN;
int64_t x306 = -658460266565360LL;
volatile int64_t x308 = INT64_MAX;
static int8_t x314 = 1;
uint32_t x322 = 146946U;
volatile uint32_t t57 = 504736U;
uint32_t x344 = 250740294U;
volatile int64_t t58 = 2LL;
int64_t x346 = -9171142340LL;
int64_t x347 = INT64_MIN;
static uint8_t x349 = 39U;
volatile int32_t t60 = -140;
uint8_t x356 = 0U;
static uint64_t t61 = 1LLU;
int16_t x361 = 57;
static int32_t x368 = INT32_MIN;
volatile uint32_t x375 = 2U;
int32_t x386 = INT32_MIN;
int64_t x396 = INT64_MIN;
uint64_t t72 = 2400984LLU;
uint16_t x418 = 19956U;
int8_t x419 = INT8_MAX;
int16_t x433 = INT16_MAX;
int32_t x436 = -1;
static volatile int32_t t76 = 29687554;
volatile int32_t x438 = INT32_MIN;
int64_t t77 = -620689693418482LL;
static int8_t x445 = -1;
volatile uint64_t x454 = UINT64_MAX;
volatile uint32_t x464 = 6826363U;
static volatile uint64_t x485 = 647039281593126772LLU;
int64_t x500 = -1LL;
int32_t x512 = 28385403;
static volatile int32_t x519 = INT32_MIN;
uint32_t t92 = 77934904U;
static volatile uint8_t x532 = UINT8_MAX;
uint32_t x533 = 1U;
static int8_t x540 = INT8_MAX;
static volatile int32_t x542 = INT32_MAX;
volatile int32_t x544 = INT32_MAX;
int64_t x552 = -1LL;


void f0(void) {
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	static volatile int16_t x4 = 10;

	t0 = ((x1*x2)+(x3<x4));

	if (t0 != 4161410) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 4159688132LL;
	uint32_t x10 = 11U;
	static uint8_t x11 = UINT8_MAX;
	int64_t x12 = -1LL;
	static int64_t t1 = -298709343355193LL;

	t1 = ((x9*x10)+(x11<x12));

	if (t1 != 45756569452LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	int64_t x15 = INT64_MAX;
	static uint64_t t2 = 3793497LLU;

	t2 = ((x13*x14)+(x15<x16));

	if (t2 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile int16_t x18 = -1;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t3 = 1701;

	t3 = ((x17*x18)+(x19<x20));

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = -21;
	volatile int16_t x22 = -122;
	uint64_t x23 = 24494LLU;
	volatile int32_t t4 = 277;

	t4 = ((x21*x22)+(x23<x24));

	if (t4 != 2563) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 634218270088153638LLU;
	int8_t x30 = INT8_MAX;
	int8_t x31 = 3;
	static uint64_t x32 = 1166852324495247764LLU;
	uint64_t t5 = 586LLU;

	t5 = ((x29*x30)+(x31<x32));

	if (t5 != 6758744006357305563LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	static int16_t x34 = -1;
	volatile int32_t x35 = INT32_MIN;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t6 = 4550526;

	t6 = ((x33*x34)+(x35<x36));

	if (t6 != -32766) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	static int16_t x38 = 9;
	uint8_t x40 = 75U;
	volatile int32_t t7 = -8;

	t7 = ((x37*x38)+(x39<x40));

	if (t7 != 589816) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	volatile uint16_t x43 = 0U;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t8 = 0U;

	t8 = ((x41*x42)+(x43<x44));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x46 = -1;
	uint32_t x47 = 932U;
	int8_t x48 = INT8_MIN;
	int32_t t9 = 6680;

	t9 = ((x45*x46)+(x47<x48));

	if (t9 != 129) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 45U;
	uint8_t x55 = UINT8_MAX;
	static int32_t x56 = INT32_MIN;

	t10 = ((x53*x54)+(x55<x56));

	if (t10 != -45LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = INT16_MIN;
	volatile int64_t x58 = 20321635LL;
	int8_t x59 = 54;
	uint8_t x60 = 17U;
	static volatile int64_t t11 = 201467556LL;

	t11 = ((x57*x58)+(x59<x60));

	if (t11 != -665899335680LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	static uint32_t x66 = 138985458U;
	int8_t x68 = -1;

	t12 = ((x65*x66)+(x67<x68));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = 369136023292LL;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = -1;
	volatile uint64_t t13 = 71151904125496209LLU;

	t13 = ((x69*x70)+(x71<x72));

	if (t13 != 18446743704573528324LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -1;
	uint16_t x74 = 4U;
	uint16_t x75 = 0U;
	int64_t x76 = INT64_MIN;
	int32_t t14 = -1570;

	t14 = ((x73*x74)+(x75<x76));

	if (t14 != -4) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x87 = 1;
	int32_t x88 = -1;
	int32_t t15 = 1711505;

	t15 = ((x85*x86)+(x87<x88));

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x92 = INT32_MIN;
	volatile uint64_t t16 = 434LLU;

	t16 = ((x89*x90)+(x91<x92));

	if (t16 != 51663526LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = 464U;
	uint16_t x94 = 56U;
	uint32_t x95 = 29U;
	static int16_t x96 = 92;
	uint32_t t17 = 4163248U;

	t17 = ((x93*x94)+(x95<x96));

	if (t17 != 25985U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x102 = 2U;
	int16_t x103 = INT16_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t18 = 121;

	t18 = ((x101*x102)+(x103<x104));

	if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	static int8_t x111 = -1;
	volatile int64_t x112 = 2084387976680601955LL;
	uint32_t t19 = 22U;

	t19 = ((x109*x110)+(x111<x112));

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x114 = 34645U;
	int16_t x115 = -1;
	uint32_t t20 = 23939U;

	t20 = ((x113*x114)+(x115<x116));

	if (t20 != 7760481U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x118 = INT16_MAX;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t21 = 4996LL;

	t21 = ((x117*x118)+(x119<x120));

	if (t21 != -3278371117LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = -1;
	volatile uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 25297U;
	volatile int64_t x128 = INT64_MAX;

	t22 = ((x125*x126)+(x127<x128));

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = -1;
	int32_t x135 = -1;
	int8_t x136 = -1;
	int32_t t23 = 5;

	t23 = ((x133*x134)+(x135<x136));

	if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x141 = 7U;
	volatile int32_t x142 = -25256468;
	uint64_t x143 = 131426888122LLU;
	static volatile int32_t t24 = 37966;

	t24 = ((x141*x142)+(x143<x144));

	if (t24 != -176795275) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x145 = UINT8_MAX;
	uint16_t x146 = 2595U;
	int16_t x147 = -29;
	uint16_t x148 = 1U;
	int32_t t25 = 13148099;

	t25 = ((x145*x146)+(x147<x148));

	if (t25 != 661726) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x154 = 18;
	int8_t x155 = INT8_MIN;
	static int32_t x156 = -1;
	uint32_t t26 = 0U;

	t26 = ((x153*x154)+(x155<x156));

	if (t26 != 4294967279U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x158 = INT8_MIN;
	static volatile int64_t x159 = 6261612LL;
	uint16_t x160 = UINT16_MAX;
	volatile uint64_t t27 = 1098158827208LLU;

	t27 = ((x157*x158)+(x159<x160));

	if (t27 != 128LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x161 = 15U;
	static uint8_t x162 = UINT8_MAX;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 6714602U;
	volatile int32_t t28 = -12419;

	t28 = ((x161*x162)+(x163<x164));

	if (t28 != 3826) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = INT16_MAX;
	int8_t x171 = 4;
	static volatile int32_t t29 = 2;

	t29 = ((x169*x170)+(x171<x172));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x173 = 6U;
	int16_t x174 = -1;
	static int16_t x175 = -1;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t30 = -10;

	t30 = ((x173*x174)+(x175<x176));

	if (t30 != -6) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x177 = 57220250446626LLU;
	static uint8_t x179 = 3U;
	static int8_t x180 = INT8_MIN;
	volatile uint64_t t31 = 464114LLU;

	t31 = ((x177*x178)+(x179<x180));

	if (t31 != 3749929113019634910LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = 38LLU;
	volatile int8_t x182 = INT8_MAX;
	int16_t x184 = -3066;
	volatile uint64_t t32 = 7429986177336645LLU;

	t32 = ((x181*x182)+(x183<x184));

	if (t32 != 4827LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = 57945496860710128LL;
	int64_t x186 = -1LL;
	volatile uint32_t x187 = 6609769U;
	int32_t x188 = INT32_MIN;

	t33 = ((x185*x186)+(x187<x188));

	if (t33 != -57945496860710127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x197 = 0;
	static int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t34 = -2117733;

	t34 = ((x197*x198)+(x199<x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x203 = INT8_MIN;
	volatile int64_t x204 = INT64_MIN;

	t35 = ((x201*x202)+(x203<x204));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x205 = -1;
	uint32_t x206 = 1U;
	int64_t x208 = INT64_MAX;
	uint32_t t36 = 5572U;

	t36 = ((x205*x206)+(x207<x208));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x217 = 11U;
	static uint8_t x219 = 0U;
	static int16_t x220 = 12;
	int64_t t37 = 381522086344840LL;

	t37 = ((x217*x218)+(x219<x220));

	if (t37 != -10LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x222 = 7U;
	int32_t x223 = -1;
	uint64_t x224 = 8754170118848LLU;
	volatile int32_t t38 = 6028;

	t38 = ((x221*x222)+(x223<x224));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x225 = 104890232972562LLU;
	volatile int32_t x226 = INT32_MIN;
	int16_t x227 = 3;
	int16_t x228 = -12;

	t39 = ((x225*x226)+(x227<x228));

	if (t39 != 3131740580007116800LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x234 = 482874123186LLU;
	int16_t x236 = INT16_MAX;
	volatile uint64_t t40 = 24220375LLU;

	t40 = ((x233*x234)+(x235<x236));

	if (t40 != 18446729104611732851LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x237 = UINT64_MAX;
	static int32_t x238 = -7;
	static volatile int32_t x239 = INT32_MIN;
	static uint64_t x240 = UINT64_MAX;
	uint64_t t41 = 59715342280LLU;

	t41 = ((x237*x238)+(x239<x240));

	if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x241 = 4621U;
	int16_t x242 = 3;
	static uint64_t x243 = UINT64_MAX;
	static int64_t x244 = -14618538LL;
	volatile int32_t t42 = -1;

	t42 = ((x241*x242)+(x243<x244));

	if (t42 != 13863) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x254 = UINT8_MAX;
	uint32_t x255 = UINT32_MAX;
	volatile int64_t x256 = INT64_MIN;

	t43 = ((x253*x254)+(x255<x256));

	if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x257 = UINT32_MAX;
	static uint16_t x258 = 996U;
	uint8_t x259 = 18U;
	static uint64_t x260 = 575673LLU;
	uint32_t t44 = 24684U;

	t44 = ((x257*x258)+(x259<x260));

	if (t44 != 4294966301U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x265 = -1;
	volatile int16_t x266 = INT16_MAX;
	volatile int32_t t45 = 7474829;

	t45 = ((x265*x266)+(x267<x268));

	if (t45 != -32766) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -11;
	volatile int32_t t46 = -7204;

	t46 = ((x269*x270)+(x271<x272));

	if (t46 != 46267710) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x273 = 6;
	int8_t x274 = INT8_MIN;
	static volatile uint64_t x275 = 906244036145659LLU;
	int32_t x276 = -736778517;
	int32_t t47 = -357055;

	t47 = ((x273*x274)+(x275<x276));

	if (t47 != -767) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x281 = UINT16_MAX;
	volatile uint64_t x282 = 3274728953512508473LLU;
	static uint32_t x284 = 1307484206U;
	volatile uint64_t t48 = 11980512064389LLU;

	t48 = ((x281*x282)+(x283<x284));

	if (t48 != 18388158979028829127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x285 = 23134U;
	volatile int8_t x286 = -3;
	uint8_t x287 = 2U;
	int8_t x288 = -1;
	static volatile uint32_t t49 = 2048977U;

	t49 = ((x285*x286)+(x287<x288));

	if (t49 != 4294897894U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x293 = -6;
	static int8_t x294 = INT8_MIN;
	volatile int64_t x295 = 12LL;
	int32_t x296 = INT32_MIN;
	volatile int32_t t50 = -703;

	t50 = ((x293*x294)+(x295<x296));

	if (t50 != 768) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x297 = 27U;
	static volatile uint64_t x298 = UINT64_MAX;
	volatile uint64_t t51 = 17501362609819633LLU;

	t51 = ((x297*x298)+(x299<x300));

	if (t51 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x301 = 22U;
	int32_t x302 = 6472195;
	static uint16_t x304 = 74U;
	int32_t t52 = -861764623;

	t52 = ((x301*x302)+(x303<x304));

	if (t52 != 142388291) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x305 = -1;
	volatile int16_t x307 = 648;
	static int64_t t53 = 2189156LL;

	t53 = ((x305*x306)+(x307<x308));

	if (t53 != 658460266565361LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x313 = 58820256U;
	int64_t x315 = -1LL;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t54 = 48857U;

	t54 = ((x313*x314)+(x315<x316));

	if (t54 != 58820257U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x317 = -1;
	int32_t x318 = -976689;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t55 = -112;

	t55 = ((x317*x318)+(x319<x320));

	if (t55 != 976690) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x321 = 0;
	static volatile int32_t x323 = -7;
	volatile int64_t x324 = INT64_MAX;
	volatile uint32_t t56 = 610618U;

	t56 = ((x321*x322)+(x323<x324));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x329 = INT8_MAX;
	uint32_t x330 = 11514839U;
	static uint16_t x331 = 162U;
	static uint64_t x332 = UINT64_MAX;

	t57 = ((x329*x330)+(x331<x332));

	if (t57 != 1462384554U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x341 = -1LL;
	static volatile int8_t x342 = -1;
	volatile uint64_t x343 = UINT64_MAX;

	t58 = ((x341*x342)+(x343<x344));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	int64_t t59 = -509795997106LL;

	t59 = ((x345*x346)+(x347<x348));

	if (t59 != 1173906219521LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x350 = INT8_MAX;
	int64_t x351 = -6367622LL;
	int16_t x352 = INT16_MAX;

	t60 = ((x349*x350)+(x351<x352));

	if (t60 != 4954) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int16_t x354 = -6;
	uint32_t x355 = 13523U;

	t61 = ((x353*x354)+(x355<x356));

	if (t61 != 6LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x362 = INT16_MIN;
	int8_t x363 = -1;
	uint64_t x364 = 13502LLU;
	volatile int32_t t62 = -29361734;

	t62 = ((x361*x362)+(x363<x364));

	if (t62 != -1867776) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x365 = 31900993U;
	volatile uint32_t x366 = UINT32_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile uint32_t t63 = 3615522U;

	t63 = ((x365*x366)+(x367<x368));

	if (t63 != 4263066303U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x369 = -1595;
	int64_t x370 = -1LL;
	volatile int8_t x371 = -2;
	int64_t x372 = INT64_MIN;
	volatile int64_t t64 = 24666969882LL;

	t64 = ((x369*x370)+(x371<x372));

	if (t64 != 1595LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x373 = INT16_MIN;
	int8_t x374 = 0;
	int32_t x376 = INT32_MAX;
	volatile int32_t t65 = -44923933;

	t65 = ((x373*x374)+(x375<x376));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x377 = 4000U;
	static volatile int16_t x378 = 6766;
	static int64_t x379 = 0LL;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t66 = 1;

	t66 = ((x377*x378)+(x379<x380));

	if (t66 != 27064000) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x381 = -1;
	uint64_t x382 = 5689922065514LLU;
	static int16_t x383 = 58;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t67 = 158895LLU;

	t67 = ((x381*x382)+(x383<x384));

	if (t67 != 18446738383787486103LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 625530U;
	static int16_t x387 = -1;
	volatile int32_t x388 = -11;
	volatile uint32_t t68 = 5276170U;

	t68 = ((x385*x386)+(x387<x388));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x389 = 67999134076449128LLU;
	int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	volatile int16_t x392 = INT16_MIN;
	volatile uint64_t t69 = 312682LLU;

	t69 = ((x389*x390)+(x391<x392));

	if (t69 != 17017809193064726528LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x393 = -1;
	static volatile int16_t x394 = INT16_MAX;
	uint64_t x395 = UINT64_MAX;
	int32_t t70 = 13747192;

	t70 = ((x393*x394)+(x395<x396));

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x397 = 89U;
	static int8_t x398 = 29;
	uint32_t x399 = 872034730U;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t71 = -13702919;

	t71 = ((x397*x398)+(x399<x400));

	if (t71 != 2581) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x401 = -1;
	uint64_t x402 = UINT64_MAX;
	static int32_t x403 = 23;
	int8_t x404 = 0;

	t72 = ((x401*x402)+(x403<x404));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x405 = 94U;
	int64_t x406 = -1LL;
	volatile int32_t x407 = -1;
	int64_t x408 = 88796657804LL;
	volatile int64_t t73 = -98671417774903213LL;

	t73 = ((x405*x406)+(x407<x408));

	if (t73 != -93LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x417 = 13187707774LL;
	uint16_t x420 = UINT16_MAX;
	int64_t t74 = 16692719053382054LL;

	t74 = ((x417*x418)+(x419<x420));

	if (t74 != 263173896337945LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x425 = INT8_MAX;
	int16_t x426 = INT16_MAX;
	int64_t x427 = INT64_MIN;
	int32_t x428 = -1;
	int32_t t75 = 5770;

	t75 = ((x425*x426)+(x427<x428));

	if (t75 != 4161410) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x434 = UINT8_MAX;
	uint16_t x435 = 1070U;

	t76 = ((x433*x434)+(x435<x436));

	if (t76 != 8355585) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x437 = -1LL;
	volatile uint32_t x439 = 18720U;
	int32_t x440 = 435133654;

	t77 = ((x437*x438)+(x439<x440));

	if (t77 != 2147483649LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x446 = INT8_MIN;
	int16_t x447 = -2;
	int8_t x448 = INT8_MIN;
	volatile int32_t t78 = 2468851;

	t78 = ((x445*x446)+(x447<x448));

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x449 = 464375U;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = -1;
	int32_t x452 = INT32_MIN;
	static uint64_t t79 = 1478145446121LLU;

	t79 = ((x449*x450)+(x451<x452));

	if (t79 != 18446744073709087241LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x453 = INT16_MIN;
	int16_t x455 = 0;
	int8_t x456 = INT8_MAX;
	uint64_t t80 = 8105198986426295LLU;

	t80 = ((x453*x454)+(x455<x456));

	if (t80 != 32769LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x461 = INT16_MIN;
	int64_t x462 = 3341529636LL;
	int16_t x463 = INT16_MIN;
	int64_t t81 = 2864048899012529LL;

	t81 = ((x461*x462)+(x463<x464));

	if (t81 != -109495243112448LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x465 = INT16_MIN;
	uint16_t x466 = 307U;
	int8_t x467 = 1;
	uint8_t x468 = 2U;
	int32_t t82 = -2;

	t82 = ((x465*x466)+(x467<x468));

	if (t82 != -10059775) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x469 = 0U;
	int64_t x470 = INT64_MIN;
	int16_t x471 = INT16_MIN;
	volatile int16_t x472 = INT16_MAX;
	int64_t t83 = -7LL;

	t83 = ((x469*x470)+(x471<x472));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x477 = 4U;
	int32_t x478 = 182;
	static int8_t x479 = -63;
	int32_t x480 = -1;
	int32_t t84 = -57;

	t84 = ((x477*x478)+(x479<x480));

	if (t84 != 729) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x481 = UINT8_MAX;
	int32_t x482 = 119559;
	int8_t x483 = -1;
	static volatile int16_t x484 = INT16_MIN;
	volatile int32_t t85 = -58;

	t85 = ((x481*x482)+(x483<x484));

	if (t85 != 30487545) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x486 = INT8_MAX;
	volatile int8_t x487 = INT8_MIN;
	volatile int8_t x488 = 1;
	volatile uint64_t t86 = 7467LLU;

	t86 = ((x485*x486)+(x487<x488));

	if (t86 != 8387012467488893581LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x489 = 776153853062LLU;
	int8_t x490 = -30;
	static volatile int32_t x491 = INT32_MAX;
	uint8_t x492 = 46U;
	static volatile uint64_t t87 = 1268600710800419948LLU;

	t87 = ((x489*x490)+(x491<x492));

	if (t87 != 18446720789093959756LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x493 = 0;
	volatile uint8_t x494 = UINT8_MAX;
	static uint8_t x495 = UINT8_MAX;
	static volatile uint32_t x496 = UINT32_MAX;
	int32_t t88 = -99150;

	t88 = ((x493*x494)+(x495<x496));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x497 = 0;
	uint32_t x498 = 990U;
	static uint32_t x499 = 104232U;
	uint32_t t89 = 649712U;

	t89 = ((x497*x498)+(x499<x500));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MIN;
	int16_t x503 = -1;
	volatile int64_t x504 = -1LL;
	volatile int32_t t90 = 1035686;

	t90 = ((x501*x502)+(x503<x504));

	if (t90 != 4194304) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x509 = 142497U;
	int32_t x510 = INT32_MAX;
	volatile int16_t x511 = INT16_MIN;
	uint32_t t91 = 6610U;

	t91 = ((x509*x510)+(x511<x512));

	if (t91 != 2147341152U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x517 = 48942081U;
	volatile int32_t x518 = INT32_MAX;
	int16_t x520 = INT16_MAX;

	t92 = ((x517*x518)+(x519<x520));

	if (t92 != 2098541568U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x521 = UINT8_MAX;
	uint16_t x522 = 62U;
	static uint32_t x523 = 22U;
	int8_t x524 = 1;
	volatile int32_t t93 = 1478;

	t93 = ((x521*x522)+(x523<x524));

	if (t93 != 15810) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x525 = 0U;
	static int8_t x526 = -1;
	int64_t x527 = -12659LL;
	int8_t x528 = 9;
	volatile int32_t t94 = -560;

	t94 = ((x525*x526)+(x527<x528));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x529 = 39068U;
	int32_t x530 = -322;
	uint16_t x531 = UINT16_MAX;
	volatile uint32_t t95 = 17U;

	t95 = ((x529*x530)+(x531<x532));

	if (t95 != 4282387400U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x534 = 530993071610161LLU;
	uint32_t x535 = UINT32_MAX;
	static int8_t x536 = INT8_MIN;
	volatile uint64_t t96 = 46616LLU;

	t96 = ((x533*x534)+(x535<x536));

	if (t96 != 530993071610161LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x537 = INT16_MAX;
	uint8_t x538 = 1U;
	static volatile int32_t x539 = -3;
	int32_t t97 = -6795;

	t97 = ((x537*x538)+(x539<x540));

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x541 = UINT32_MAX;
	int32_t x543 = INT32_MIN;
	static uint32_t t98 = 115221U;

	t98 = ((x541*x542)+(x543<x544));

	if (t98 != 2147483650U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x549 = -1;
	uint16_t x550 = 7U;
	static volatile int16_t x551 = INT16_MIN;
	static int32_t t99 = 1347088;

	t99 = ((x549*x550)+(x551<x552));

	if (t99 != -6) { NG(); } else { ; }
	
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

