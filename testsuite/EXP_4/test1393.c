#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x20 = -1;
int32_t x36 = -136783469;
uint32_t x57 = 5157655U;
static uint32_t t6 = 469251227U;
uint16_t x65 = UINT16_MAX;
uint16_t x78 = UINT16_MAX;
volatile uint8_t x79 = 0U;
uint8_t x82 = 63U;
volatile int32_t t11 = -1036;
volatile int64_t x112 = 56017735887886LL;
static int64_t x125 = 1279464895LL;
uint16_t x154 = 5647U;
uint32_t x157 = 249361328U;
int64_t x168 = INT64_MAX;
int8_t x169 = -1;
int32_t t24 = 49484733;
int64_t x181 = 84970LL;
volatile uint32_t x187 = 193U;
volatile uint64_t t27 = 230757LLU;
static int8_t x199 = INT8_MIN;
static int32_t t30 = 36659;
int16_t x253 = -3;
int16_t x254 = 1462;
int8_t x271 = 1;
int64_t x275 = INT64_MIN;
uint8_t x312 = UINT8_MAX;
int32_t x339 = INT32_MIN;
int32_t x360 = INT32_MIN;
volatile int16_t x375 = 6;
volatile int32_t t40 = 0;
volatile int8_t x388 = -1;
uint64_t x402 = UINT64_MAX;
int16_t x430 = -1;
uint8_t x439 = UINT8_MAX;
int64_t x454 = 107LL;
int64_t x455 = -234824111045355LL;
volatile int64_t t47 = 1668LL;
int8_t x468 = INT8_MAX;
uint64_t t48 = 46041286917837LLU;
int8_t x488 = -1;
volatile uint64_t x491 = 3441192100959380631LLU;
volatile uint32_t x499 = 11U;
int32_t t52 = -179830382;
static uint64_t x502 = 3553478891908657079LLU;
volatile int16_t x505 = -67;
uint32_t x506 = UINT32_MAX;
static uint64_t x513 = 3997931966284536585LLU;
int16_t x533 = INT16_MAX;
int16_t x535 = INT16_MIN;
int64_t x536 = 7LL;
volatile uint64_t t57 = 55743616643LLU;
static uint16_t x540 = UINT16_MAX;
static int8_t x545 = INT8_MAX;
uint16_t x579 = 1913U;
int32_t x585 = -1;
volatile int32_t t61 = 44;
int32_t t62 = -1480662;
volatile int64_t x593 = 8622LL;
int16_t x640 = -6;
volatile int64_t t66 = -1394256LL;
static volatile uint8_t x649 = 2U;
uint32_t x682 = 1192473U;
uint32_t x687 = 80U;
uint64_t x688 = 1910624038LLU;
volatile int64_t x700 = 23492LL;
static volatile int32_t x706 = -1448;
int8_t x708 = INT8_MIN;
int64_t x709 = 126LL;
volatile int64_t t77 = 3633857256758244LL;
volatile int32_t x720 = INT32_MAX;
uint16_t x725 = UINT16_MAX;
volatile uint32_t t80 = 776644070U;
int64_t x731 = INT64_MIN;
static int32_t t81 = 46;
static int16_t x738 = -1;
uint16_t x755 = UINT16_MAX;
static int64_t x771 = INT64_MIN;
int8_t x790 = -3;
int16_t x791 = INT16_MIN;
int16_t x802 = INT16_MAX;
int64_t x804 = INT64_MAX;
volatile uint16_t x830 = UINT16_MAX;
int16_t x834 = -1;
int32_t t94 = -27337;
int64_t x846 = -1LL;
int16_t x849 = INT16_MIN;
uint8_t x861 = 8U;


void f0(void) {
	static uint64_t x5 = UINT64_MAX;
	uint16_t x6 = 3908U;
	int64_t x7 = -17866643LL;
	int64_t x8 = -1LL;
	uint64_t t0 = 1577LLU;

	t0 = (x5-(x6/(x7<x8)));

	if (t0 != 18446744073709547707LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MAX;
	int16_t x10 = 1;
	volatile uint32_t x11 = 1437993709U;
	uint32_t x12 = UINT32_MAX;
	static volatile int64_t t1 = 208215351LL;

	t1 = (x9-(x10/(x11<x12)));

	if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 49385649445LLU;
	uint64_t x14 = 445733732LLU;
	static volatile int32_t x15 = -1;
	int64_t x16 = 2013LL;
	volatile uint64_t t2 = 5LLU;

	t2 = (x13-(x14/(x15<x16)));

	if (t2 != 48939915713LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 0U;
	static int8_t x18 = 23;
	uint64_t x19 = 14690LLU;
	volatile int32_t t3 = -12432955;

	t3 = (x17-(x18/(x19<x20)));

	if (t3 != -23) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	volatile uint32_t x30 = 5230U;
	static uint64_t x31 = 8959045751706378848LLU;
	int8_t x32 = -1;
	volatile uint32_t t4 = 495541909U;

	t4 = (x29-(x30/(x31<x32)));

	if (t4 != 4294962193U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = -5;
	static uint64_t x34 = UINT64_MAX;
	int64_t x35 = INT64_MIN;
	uint64_t t5 = 145LLU;

	t5 = (x33-(x34/(x35<x36)));

	if (t5 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x58 = 151305864U;
	int64_t x59 = -1181LL;
	uint16_t x60 = 424U;

	t6 = (x57-(x58/(x59<x60)));

	if (t6 != 4148819087U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MAX;
	volatile uint32_t t7 = 1583U;

	t7 = (x65-(x66/(x67<x68)));

	if (t7 != 65536U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x69 = -1LL;
	int32_t x70 = 5;
	int16_t x71 = -1055;
	static volatile uint8_t x72 = UINT8_MAX;
	int64_t t8 = 1LL;

	t8 = (x69-(x70/(x71<x72)));

	if (t8 != -6LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = -1;
	static int64_t x74 = INT64_MIN;
	int16_t x75 = -1;
	uint16_t x76 = 7U;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x73-(x74/(x75<x76)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x77 = 24940LLU;
	uint8_t x80 = 2U;
	uint64_t t10 = 29823217LLU;

	t10 = (x77-(x78/(x79<x80)));

	if (t10 != 18446744073709511021LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = 512;
	static int8_t x83 = INT8_MIN;
	int16_t x84 = 0;

	t11 = (x81-(x82/(x83<x84)));

	if (t11 != 449) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x97 = INT32_MAX;
	int64_t x98 = -76002035620130LL;
	uint16_t x99 = 1U;
	uint16_t x100 = 142U;
	volatile int64_t t12 = 30768472LL;

	t12 = (x97-(x98/(x99<x100)));

	if (t12 != 76004183103777LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x101 = INT8_MIN;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MIN;
	static volatile uint32_t t13 = 295509U;

	t13 = (x101-(x102/(x103<x104)));

	if (t13 != 4294967169U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x109 = -144;
	volatile int16_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	static volatile int32_t t14 = -55;

	t14 = (x109-(x110/(x111<x112)));

	if (t14 != -143) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = INT64_MIN;
	static int16_t x115 = INT16_MIN;
	volatile uint8_t x116 = 68U;
	volatile int64_t t15 = -15LL;

	t15 = (x113-(x114/(x115<x116)));

	if (t15 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x117 = -1;
	static volatile int8_t x118 = 1;
	int8_t x119 = -2;
	int64_t x120 = -1LL;
	int32_t t16 = 2;

	t16 = (x117-(x118/(x119<x120)));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x126 = -1;
	int64_t x127 = -1LL;
	int64_t x128 = 1LL;
	volatile int64_t t17 = -1LL;

	t17 = (x125-(x126/(x127<x128)));

	if (t17 != 1279464896LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x133 = 107439558LLU;
	uint8_t x134 = 99U;
	volatile int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile uint64_t t18 = 7490374663LLU;

	t18 = (x133-(x134/(x135<x136)));

	if (t18 != 107439459LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x137 = 5U;
	int64_t x138 = INT64_MAX;
	static uint16_t x139 = 4368U;
	uint64_t x140 = UINT64_MAX;
	volatile int64_t t19 = -997545121576485LL;

	t19 = (x137-(x138/(x139<x140)));

	if (t19 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = 253;
	static int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	int32_t t20 = 43;

	t20 = (x149-(x150/(x151<x152)));

	if (t20 != -33021) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x153 = INT8_MIN;
	int8_t x155 = 21;
	static uint64_t x156 = 60837542LLU;
	int32_t t21 = 97;

	t21 = (x153-(x154/(x155<x156)));

	if (t21 != -5775) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x158 = INT32_MIN;
	volatile uint8_t x159 = 5U;
	volatile int8_t x160 = 16;
	volatile uint32_t t22 = 8561U;

	t22 = (x157-(x158/(x159<x160)));

	if (t22 != 2396844976U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x165 = 25508718U;
	uint16_t x166 = UINT16_MAX;
	uint32_t x167 = 99977U;
	static volatile uint32_t t23 = 2109887U;

	t23 = (x165-(x166/(x167<x168)));

	if (t23 != 25443183U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x170 = 58583700;
	volatile int8_t x171 = 28;
	uint64_t x172 = 1120LLU;

	t24 = (x169-(x170/(x171<x172)));

	if (t24 != -58583701) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	volatile int16_t x184 = -1;
	int64_t t25 = 1328LL;

	t25 = (x181-(x182/(x183<x184)));

	if (t25 != 85098LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	volatile int8_t x188 = INT8_MIN;
	static uint64_t t26 = 362997623027LLU;

	t26 = (x185-(x186/(x187<x188)));

	if (t26 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x189 = -3308;
	volatile uint64_t x190 = 33386123941610LLU;
	int64_t x191 = INT64_MIN;
	int8_t x192 = -1;

	t27 = (x189-(x190/(x191<x192)));

	if (t27 != 18446710687585606698LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x197 = -2;
	uint8_t x198 = UINT8_MAX;
	int16_t x200 = -1;
	volatile int32_t t28 = -1;

	t28 = (x197-(x198/(x199<x200)));

	if (t28 != -257) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x209 = -157;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -44;
	uint16_t x212 = 220U;
	volatile int32_t t29 = -36671035;

	t29 = (x209-(x210/(x211<x212)));

	if (t29 != 32611) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x217 = INT32_MAX;
	int32_t x218 = INT32_MAX;
	int16_t x219 = -1;
	int8_t x220 = 1;

	t30 = (x217-(x218/(x219<x220)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x225 = 0U;
	uint16_t x226 = 1213U;
	static int64_t x227 = INT64_MIN;
	static uint16_t x228 = 1U;
	static volatile int32_t t31 = -630862686;

	t31 = (x225-(x226/(x227<x228)));

	if (t31 != -1213) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MAX;
	int32_t t32 = -1076076;

	t32 = (x253-(x254/(x255<x256)));

	if (t32 != -1465) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x269 = -1213;
	int8_t x270 = -1;
	uint64_t x272 = 185875902814813616LLU;
	volatile int32_t t33 = -7117067;

	t33 = (x269-(x270/(x271<x272)));

	if (t33 != -1212) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x273 = -3;
	uint8_t x274 = 7U;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t34 = -809539922;

	t34 = (x273-(x274/(x275<x276)));

	if (t34 != -10) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x309 = 1760959970036039LLU;
	volatile uint64_t x310 = 3567208LLU;
	int16_t x311 = -1;
	static volatile uint64_t t35 = 4140732967LLU;

	t35 = (x309-(x310/(x311<x312)));

	if (t35 != 1760959966468831LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x313 = 71U;
	volatile uint32_t x314 = 1442217U;
	uint32_t x315 = 7242399U;
	volatile int8_t x316 = INT8_MIN;
	static uint32_t t36 = 2U;

	t36 = (x313-(x314/(x315<x316)));

	if (t36 != 4293525150U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x337 = 3U;
	int8_t x338 = 1;
	int32_t x340 = -1;
	volatile int32_t t37 = 584544770;

	t37 = (x337-(x338/(x339<x340)));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x345 = 14011093LLU;
	int8_t x346 = INT8_MIN;
	volatile uint16_t x347 = 118U;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t38 = 2188823126459958LLU;

	t38 = (x345-(x346/(x347<x348)));

	if (t38 != 14011221LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x357 = 5LLU;
	volatile int64_t x358 = INT64_MIN;
	static uint32_t x359 = 17U;
	static uint64_t t39 = 12354LLU;

	t39 = (x357-(x358/(x359<x360)));

	if (t39 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x373 = UINT8_MAX;
	volatile int16_t x374 = INT16_MAX;
	int64_t x376 = INT64_MAX;

	t40 = (x373-(x374/(x375<x376)));

	if (t40 != -32512) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x385 = 880780430;
	int8_t x386 = 36;
	static volatile uint32_t x387 = 5577585U;
	static int32_t t41 = -11235;

	t41 = (x385-(x386/(x387<x388)));

	if (t41 != 880780394) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x401 = 0;
	uint32_t x403 = 231U;
	static volatile int32_t x404 = -1;
	static uint64_t t42 = 656310LLU;

	t42 = (x401-(x402/(x403<x404)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 4715984328LLU;
	int32_t x408 = INT32_MIN;
	int32_t t43 = 0;

	t43 = (x405-(x406/(x407<x408)));

	if (t43 != -2147450880) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x409 = -1;
	static int16_t x410 = 52;
	volatile int32_t x411 = -1;
	int8_t x412 = 45;
	volatile int32_t t44 = 15603;

	t44 = (x409-(x410/(x411<x412)));

	if (t44 != -53) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x429 = INT8_MIN;
	volatile int8_t x431 = INT8_MIN;
	volatile uint32_t x432 = UINT32_MAX;
	volatile int32_t t45 = -12;

	t45 = (x429-(x430/(x431<x432)));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x437 = UINT64_MAX;
	volatile uint8_t x438 = 22U;
	uint16_t x440 = 431U;
	uint64_t t46 = 5456276314492319LLU;

	t46 = (x437-(x438/(x439<x440)));

	if (t46 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x453 = UINT8_MAX;
	volatile int16_t x456 = 23;

	t47 = (x453-(x454/(x455<x456)));

	if (t47 != 148LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x465 = 40LLU;
	uint64_t x466 = UINT64_MAX;
	static int16_t x467 = INT16_MIN;

	t48 = (x465-(x466/(x467<x468)));

	if (t48 != 41LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x469 = INT8_MIN;
	static int16_t x470 = -1;
	volatile int16_t x471 = INT16_MAX;
	uint64_t x472 = 14140717291762285LLU;
	int32_t t49 = 189688651;

	t49 = (x469-(x470/(x471<x472)));

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MIN;
	int64_t x487 = INT64_MIN;
	int32_t t50 = 1333265;

	t50 = (x485-(x486/(x487<x488)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x489 = 5172U;
	uint64_t x490 = 4679LLU;
	int32_t x492 = INT32_MIN;
	static uint64_t t51 = 88433621LLU;

	t51 = (x489-(x490/(x491<x492)));

	if (t51 != 493LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x497 = INT8_MIN;
	static uint16_t x498 = 2U;
	static volatile int16_t x500 = INT16_MAX;

	t52 = (x497-(x498/(x499<x500)));

	if (t52 != -130) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x501 = -21;
	static int64_t x503 = -1LL;
	int8_t x504 = 5;
	static volatile uint64_t t53 = 12619800554983LLU;

	t53 = (x501-(x502/(x503<x504)));

	if (t53 != 14893265181800894516LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x507 = INT32_MIN;
	static int64_t x508 = -349941LL;
	volatile uint32_t t54 = 40917U;

	t54 = (x505-(x506/(x507<x508)));

	if (t54 != 4294967230U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x509 = UINT16_MAX;
	uint16_t x510 = 53U;
	static int64_t x511 = INT64_MIN;
	int32_t x512 = -209337993;
	static volatile int32_t t55 = -1134;

	t55 = (x509-(x510/(x511<x512)));

	if (t55 != 65482) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x514 = UINT16_MAX;
	int64_t x515 = INT64_MIN;
	uint8_t x516 = UINT8_MAX;
	volatile uint64_t t56 = 1237452237261LLU;

	t56 = (x513-(x514/(x515<x516)));

	if (t56 != 3997931966284471050LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x534 = 353758LLU;

	t57 = (x533-(x534/(x535<x536)));

	if (t57 != 18446744073709230625LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x537 = 26;
	int8_t x538 = INT8_MIN;
	int16_t x539 = -1;
	volatile int32_t t58 = -30;

	t58 = (x537-(x538/(x539<x540)));

	if (t58 != 154) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x546 = -619;
	uint32_t x547 = 9872U;
	int16_t x548 = -55;
	volatile int32_t t59 = -202327363;

	t59 = (x545-(x546/(x547<x548)));

	if (t59 != 746) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x577 = 3U;
	int16_t x578 = 11;
	static int32_t x580 = INT32_MAX;
	volatile int32_t t60 = 883;

	t60 = (x577-(x578/(x579<x580)));

	if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x586 = 5U;
	uint8_t x587 = 0U;
	uint16_t x588 = 261U;

	t61 = (x585-(x586/(x587<x588)));

	if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x589 = INT32_MAX;
	uint16_t x590 = 15U;
	int16_t x591 = INT16_MIN;
	int16_t x592 = 5003;

	t62 = (x589-(x590/(x591<x592)));

	if (t62 != 2147483632) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x594 = -1;
	int64_t x595 = -1LL;
	uint8_t x596 = 4U;
	int64_t t63 = -174085892LL;

	t63 = (x593-(x594/(x595<x596)));

	if (t63 != 8623LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x597 = 1U;
	static int16_t x598 = INT16_MIN;
	uint32_t x599 = 140574U;
	volatile int64_t x600 = INT64_MAX;
	int32_t t64 = -113816982;

	t64 = (x597-(x598/(x599<x600)));

	if (t64 != 32769) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x637 = -1;
	static int8_t x638 = INT8_MIN;
	static int64_t x639 = -965LL;
	volatile int32_t t65 = 2887301;

	t65 = (x637-(x638/(x639<x640)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x641 = -1LL;
	int32_t x642 = INT32_MIN;
	uint64_t x643 = 5496419030LLU;
	uint64_t x644 = UINT64_MAX;

	t66 = (x641-(x642/(x643<x644)));

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x650 = UINT16_MAX;
	int64_t x651 = -1LL;
	uint8_t x652 = 1U;
	int32_t t67 = 290;

	t67 = (x649-(x650/(x651<x652)));

	if (t67 != -65533) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x653 = INT32_MIN;
	int16_t x654 = -1;
	int64_t x655 = 3564LL;
	volatile int64_t x656 = INT64_MAX;
	static volatile int32_t t68 = 1;

	t68 = (x653-(x654/(x655<x656)));

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x657 = -1;
	volatile int8_t x658 = 15;
	uint32_t x659 = 100U;
	volatile uint8_t x660 = UINT8_MAX;
	int32_t t69 = -290321;

	t69 = (x657-(x658/(x659<x660)));

	if (t69 != -16) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x669 = 1025133294U;
	volatile int32_t x670 = -15527796;
	int32_t x671 = -362436;
	volatile uint8_t x672 = 3U;
	uint32_t t70 = 30794U;

	t70 = (x669-(x670/(x671<x672)));

	if (t70 != 1040661090U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x677 = UINT32_MAX;
	int8_t x678 = INT8_MIN;
	static uint16_t x679 = 1U;
	uint32_t x680 = 85211U;
	volatile uint32_t t71 = 29903648U;

	t71 = (x677-(x678/(x679<x680)));

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x681 = INT16_MAX;
	uint64_t x683 = 205325LLU;
	static uint64_t x684 = UINT64_MAX;
	static volatile uint32_t t72 = 115799287U;

	t72 = (x681-(x682/(x683<x684)));

	if (t72 != 4293807590U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x685 = 0U;
	static uint16_t x686 = 1U;
	int32_t t73 = -2;

	t73 = (x685-(x686/(x687<x688)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x689 = INT8_MIN;
	int16_t x690 = -96;
	volatile int32_t x691 = INT32_MIN;
	volatile int16_t x692 = INT16_MIN;
	volatile int32_t t74 = -115;

	t74 = (x689-(x690/(x691<x692)));

	if (t74 != -32) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x697 = -1LL;
	volatile uint16_t x698 = UINT16_MAX;
	static int8_t x699 = INT8_MAX;
	int64_t t75 = -2267473LL;

	t75 = (x697-(x698/(x699<x700)));

	if (t75 != -65536LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x705 = 515138;
	int16_t x707 = INT16_MIN;
	int32_t t76 = -5;

	t76 = (x705-(x706/(x707<x708)));

	if (t76 != 516586) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x710 = 1966;
	static volatile int8_t x711 = INT8_MIN;
	volatile int8_t x712 = 0;

	t77 = (x709-(x710/(x711<x712)));

	if (t77 != -1840LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x717 = 5;
	int16_t x718 = 1;
	int16_t x719 = INT16_MAX;
	int32_t t78 = -2364;

	t78 = (x717-(x718/(x719<x720)));

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x721 = 15011U;
	uint16_t x722 = 242U;
	int64_t x723 = INT64_MIN;
	static int16_t x724 = -1688;
	int32_t t79 = 1;

	t79 = (x721-(x722/(x723<x724)));

	if (t79 != 14769) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x726 = 10633U;
	int16_t x727 = INT16_MAX;
	uint32_t x728 = UINT32_MAX;

	t80 = (x725-(x726/(x727<x728)));

	if (t80 != 54902U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x729 = 32458;
	int32_t x730 = -201414617;
	static volatile int8_t x732 = INT8_MAX;

	t81 = (x729-(x730/(x731<x732)));

	if (t81 != 201447075) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x733 = -2;
	int64_t x734 = 4LL;
	volatile uint64_t x735 = 6282128490251409LLU;
	int32_t x736 = -1;
	volatile int64_t t82 = -1727587213713724LL;

	t82 = (x733-(x734/(x735<x736)));

	if (t82 != -6LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x737 = -1;
	int32_t x739 = INT32_MIN;
	static int16_t x740 = INT16_MIN;
	int32_t t83 = 20;

	t83 = (x737-(x738/(x739<x740)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x753 = 223U;
	int8_t x754 = -1;
	int32_t x756 = INT32_MAX;
	int32_t t84 = 558018;

	t84 = (x753-(x754/(x755<x756)));

	if (t84 != 224) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x757 = 5952U;
	static volatile int32_t x758 = INT32_MIN;
	int8_t x759 = -6;
	int8_t x760 = 26;
	volatile uint32_t t85 = 30005U;

	t85 = (x757-(x758/(x759<x760)));

	if (t85 != 2147489600U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x761 = 3057;
	int64_t x762 = -1LL;
	volatile int32_t x763 = INT32_MIN;
	int8_t x764 = INT8_MIN;
	volatile int64_t t86 = 4599LL;

	t86 = (x761-(x762/(x763<x764)));

	if (t86 != 3058LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x769 = 102U;
	volatile int64_t x770 = -72814407985929473LL;
	int16_t x772 = INT16_MIN;
	int64_t t87 = 18401064LL;

	t87 = (x769-(x770/(x771<x772)));

	if (t87 != 72814407985929575LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x789 = INT16_MIN;
	int64_t x792 = -1LL;
	int32_t t88 = -373753;

	t88 = (x789-(x790/(x791<x792)));

	if (t88 != -32765) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x801 = 207U;
	static uint8_t x803 = 0U;
	uint32_t t89 = 3522U;

	t89 = (x801-(x802/(x803<x804)));

	if (t89 != 4294934736U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x805 = -1;
	int16_t x806 = INT16_MAX;
	volatile int32_t x807 = -1;
	int64_t x808 = INT64_MAX;
	volatile int32_t t90 = -31;

	t90 = (x805-(x806/(x807<x808)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x813 = -438270LL;
	int32_t x814 = INT32_MIN;
	int16_t x815 = -3;
	int64_t x816 = INT64_MAX;
	volatile int64_t t91 = -3446548LL;

	t91 = (x813-(x814/(x815<x816)));

	if (t91 != 2147045378LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x825 = UINT16_MAX;
	static uint8_t x826 = 0U;
	volatile int16_t x827 = INT16_MAX;
	uint16_t x828 = UINT16_MAX;
	volatile int32_t t92 = -527522133;

	t92 = (x825-(x826/(x827<x828)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x829 = 108U;
	int32_t x831 = -30441450;
	int16_t x832 = 7285;
	volatile int32_t t93 = 1862795;

	t93 = (x829-(x830/(x831<x832)));

	if (t93 != -65427) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x833 = INT16_MAX;
	volatile uint64_t x835 = 822784344271LLU;
	int32_t x836 = INT32_MIN;

	t94 = (x833-(x834/(x835<x836)));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x845 = -1;
	static volatile int32_t x847 = INT32_MIN;
	int16_t x848 = INT16_MIN;
	volatile int64_t t95 = -16443029LL;

	t95 = (x845-(x846/(x847<x848)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x850 = -1;
	uint8_t x851 = 31U;
	int16_t x852 = INT16_MAX;
	volatile int32_t t96 = -2558;

	t96 = (x849-(x850/(x851<x852)));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x853 = 12691;
	uint16_t x854 = 89U;
	volatile int32_t x855 = -5;
	uint64_t x856 = UINT64_MAX;
	volatile int32_t t97 = 17233;

	t97 = (x853-(x854/(x855<x856)));

	if (t97 != 12602) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x862 = 62;
	int8_t x863 = INT8_MAX;
	int64_t x864 = INT64_MAX;
	volatile int32_t t98 = -655592217;

	t98 = (x861-(x862/(x863<x864)));

	if (t98 != -54) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x865 = UINT32_MAX;
	int64_t x866 = -1LL;
	int64_t x867 = -1LL;
	int32_t x868 = 392147514;
	int64_t t99 = 359881132426809766LL;

	t99 = (x865-(x866/(x867<x868)));

	if (t99 != 4294967296LL) { NG(); } else { ; }
	
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

