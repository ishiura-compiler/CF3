#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MIN;
static volatile uint8_t x9 = UINT8_MAX;
static volatile int8_t x10 = INT8_MIN;
uint64_t x14 = UINT64_MAX;
int8_t x18 = INT8_MIN;
int64_t x21 = 1801681410LL;
uint8_t x24 = 55U;
uint8_t x25 = 77U;
volatile int32_t t6 = -93103668;
volatile int32_t t7 = 24476953;
int8_t x33 = INT8_MIN;
volatile int16_t x36 = -1;
int16_t x38 = 1;
volatile uint32_t t9 = 30483957U;
static int64_t x42 = INT64_MIN;
volatile int64_t t10 = INT64_MIN;
volatile uint32_t t11 = UINT32_MAX;
static volatile int64_t x49 = INT64_MIN;
uint64_t x53 = UINT64_MAX;
uint16_t x59 = 29U;
int32_t x60 = INT32_MIN;
int8_t x62 = INT8_MIN;
static int32_t x67 = -1;
static int8_t x70 = INT8_MAX;
static uint32_t x73 = UINT32_MAX;
int16_t x75 = -1;
uint32_t x76 = 86669U;
uint16_t x90 = 68U;
int32_t x93 = 53536979;
static int32_t t23 = 104231;
volatile int8_t x100 = -30;
int64_t x104 = INT64_MIN;
volatile uint64_t x108 = UINT64_MAX;
static int8_t x109 = INT8_MAX;
int32_t x114 = INT32_MIN;
uint32_t x127 = 28445U;
static volatile int64_t x145 = -1LL;
int8_t x146 = -61;
int64_t x150 = 31607027596LL;
int16_t x158 = INT16_MAX;
int16_t x162 = -2854;
volatile int16_t x169 = -488;
int64_t x170 = INT64_MAX;
volatile uint16_t x175 = 4697U;
uint8_t x181 = UINT8_MAX;
int32_t x184 = -1;
int16_t x185 = INT16_MIN;
int32_t x194 = -1;
volatile uint32_t x203 = UINT32_MAX;
static int8_t x208 = INT8_MIN;
volatile uint64_t t51 = 1178LLU;
int8_t x216 = INT8_MAX;
static int64_t x230 = -1LL;
static volatile int8_t x231 = INT8_MIN;
int64_t x233 = INT64_MIN;
uint8_t x238 = UINT8_MAX;
int64_t t59 = -3620416650LL;
volatile uint32_t x242 = 308U;
volatile uint32_t t60 = 25613691U;
volatile int64_t x248 = 5156363361951436LL;
volatile uint8_t x249 = 17U;
int8_t x251 = INT8_MIN;
static uint16_t x255 = 2U;
uint8_t x275 = UINT8_MAX;
uint64_t x285 = UINT64_MAX;
static int64_t x292 = -56774084LL;
volatile int32_t t72 = 1;
static int32_t x293 = INT32_MAX;
int8_t x300 = -1;
static uint32_t x301 = 57974392U;
int32_t x302 = INT32_MAX;
int16_t x305 = 3;
static int32_t x312 = INT32_MIN;
int16_t x313 = -1;
uint16_t x315 = 19U;
int16_t x317 = -1;
volatile int16_t x318 = INT16_MAX;
volatile int32_t t80 = -21;
int16_t x330 = INT16_MIN;
static volatile int64_t x332 = -1LL;
int16_t x338 = INT16_MAX;
volatile int64_t x345 = -1LL;
int32_t x347 = -230829596;
static int16_t x348 = INT16_MIN;
int32_t t87 = -6161366;
int64_t t88 = 4796984970LL;
static int32_t x358 = 1078576;
static volatile uint32_t x359 = 42U;
volatile int32_t x360 = -1;
static int64_t x367 = INT64_MIN;
uint64_t t91 = 5949575606323031LLU;
int32_t x371 = -16;
volatile int32_t t92 = -1;
uint8_t x373 = 1U;
uint32_t x379 = 254495U;
uint64_t x381 = 4593561LLU;
int16_t x395 = -15;
static int16_t x399 = 1;


void f0(void) {
	static uint16_t x1 = 2481U;
	int64_t x2 = INT64_MAX;
	int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -394596719350430LL;

	t0 = ((x1&x2)^(x3<x4));

	if (t0 != 2481LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = 1;
	int32_t t1 = INT32_MIN;

	t1 = ((x5&x6)^(x7<x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = 0;
	int32_t x12 = -1;
	static int32_t t2 = -40607;

	t2 = ((x9&x10)^(x11<x12));

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -11642347;
	int32_t x15 = -1;
	int32_t x16 = 199;
	uint64_t t3 = 112904715LLU;

	t3 = ((x13&x14)^(x15<x16));

	if (t3 != 18446744073697909268LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 376682LLU;
	int32_t x19 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 2003570615213LLU;

	t4 = ((x17&x18)^(x19<x20));

	if (t4 != 376576LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	int16_t x23 = -4;
	int64_t t5 = -143179299LL;

	t5 = ((x21&x22)^(x23<x24));

	if (t5 != 1801681409LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x26 = 2U;
	static int8_t x27 = -1;
	int8_t x28 = INT8_MIN;

	t6 = ((x25&x26)^(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	int16_t x30 = -174;
	static int64_t x31 = INT64_MAX;
	int64_t x32 = INT64_MAX;

	t7 = ((x29&x30)^(x31<x32));

	if (t7 != -174) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 27;
	volatile uint64_t x35 = 229242388340513LLU;
	volatile int32_t t8 = -870373;

	t8 = ((x33&x34)^(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 5133491U;
	volatile int16_t x39 = -276;
	int64_t x40 = INT64_MIN;

	t9 = ((x37&x38)^(x39<x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x43 = 6463U;
	int16_t x44 = 1043;

	t10 = ((x41&x42)^(x43<x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x46 = -1;
	uint8_t x47 = 12U;
	int32_t x48 = -172004228;

	t11 = ((x45&x46)^(x47<x48));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x50 = -1;
	int16_t x51 = INT16_MIN;
	volatile int32_t x52 = INT32_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = ((x49&x50)^(x51<x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 3LLU;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -1LL;
	volatile uint64_t t13 = 3237184LLU;

	t13 = ((x53&x54)^(x55<x56));

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	int32_t t14 = -1207;

	t14 = ((x57&x58)^(x59<x60));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int16_t x63 = 1;
	uint8_t x64 = 30U;
	volatile int32_t t15 = -15398;

	t15 = ((x61&x62)^(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -8;
	static volatile uint8_t x66 = 1U;
	uint64_t x68 = 7878991371554434LLU;
	static volatile int32_t t16 = -890813209;

	t16 = ((x65&x66)^(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 481152176259LLU;
	static int8_t x71 = -1;
	static uint8_t x72 = 1U;
	uint64_t t17 = 5844728566236258LLU;

	t17 = ((x69&x70)^(x71<x72));

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x74 = UINT64_MAX;
	uint64_t t18 = 55612276LLU;

	t18 = ((x73&x74)^(x75<x76));

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static int8_t x78 = INT8_MIN;
	volatile uint8_t x79 = 7U;
	volatile uint32_t x80 = 240030233U;
	uint32_t t19 = 1982337U;

	t19 = ((x77&x78)^(x79<x80));

	if (t19 != 4294967169U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -10504993;
	volatile int64_t x82 = 3061500084LL;
	volatile int32_t x83 = -1;
	volatile int8_t x84 = -1;
	static int64_t t20 = -169LL;

	t20 = ((x81&x82)^(x83<x84));

	if (t20 != 3059384468LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 0U;
	static volatile int32_t x86 = INT32_MIN;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t21 = -207621324;

	t21 = ((x85&x86)^(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static int16_t x91 = INT16_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -403450757;

	t22 = ((x89&x90)^(x91<x92));

	if (t22 != 68) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;
	static int32_t x95 = -260404456;
	static int16_t x96 = -251;

	t23 = ((x93&x94)^(x95<x96));

	if (t23 != 53536978) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MAX;
	volatile int32_t x99 = 187;
	volatile int32_t t24 = -9;

	t24 = ((x97&x98)^(x99<x100));

	if (t24 != 2147483520) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	uint16_t x103 = UINT16_MAX;
	static int64_t t25 = -52668447223571LL;

	t25 = ((x101&x102)^(x103<x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	uint64_t x106 = 253072120LLU;
	volatile uint16_t x107 = 0U;
	volatile uint64_t t26 = 4893373LLU;

	t26 = ((x105&x106)^(x107<x108));

	if (t26 != 253067265LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = UINT8_MAX;
	int32_t x111 = 3449275;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 17561;

	t27 = ((x109&x110)^(x111<x112));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 4637LL;
	volatile int8_t x115 = INT8_MAX;
	uint8_t x116 = UINT8_MAX;
	int64_t t28 = 2051612985LL;

	t28 = ((x113&x114)^(x115<x116));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint64_t x118 = UINT64_MAX;
	int8_t x119 = 0;
	int16_t x120 = 0;
	uint64_t t29 = 3441262848697021733LLU;

	t29 = ((x117&x118)^(x119<x120));

	if (t29 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 3LLU;
	int64_t x122 = 2LL;
	int64_t x123 = -58197476LL;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t30 = 16004LLU;

	t30 = ((x121&x122)^(x123<x124));

	if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 28U;
	int32_t x126 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = 717243;

	t31 = ((x125&x126)^(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	uint32_t x130 = 0U;
	uint64_t x131 = 271741235405LLU;
	static volatile uint64_t x132 = 100241171301946382LLU;
	static uint32_t t32 = 14461307U;

	t32 = ((x129&x130)^(x131<x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = -4;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = 214065;

	t33 = ((x133&x134)^(x135<x136));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t34 = 463772980664641240LLU;

	t34 = ((x137&x138)^(x139<x140));

	if (t34 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static volatile int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	static int16_t x144 = INT16_MIN;
	uint64_t t35 = 642841LLU;

	t35 = ((x141&x142)^(x143<x144));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x147 = 0U;
	int8_t x148 = -1;
	static volatile int64_t t36 = -102950247750733LL;

	t36 = ((x145&x146)^(x147<x148));

	if (t36 != -61LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int16_t x151 = 1;
	static int8_t x152 = 27;
	uint64_t t37 = 797995254LLU;

	t37 = ((x149&x150)^(x151<x152));

	if (t37 != 31607027597LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 46LL;
	static uint64_t x154 = UINT64_MAX;
	int32_t x155 = 195764;
	static int64_t x156 = -1LL;
	uint64_t t38 = 468527576828LLU;

	t38 = ((x153&x154)^(x155<x156));

	if (t38 != 46LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int64_t x159 = -67627147LL;
	uint32_t x160 = 0U;
	int32_t t39 = -5;

	t39 = ((x157&x158)^(x159<x160));

	if (t39 != 32766) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = -89296;

	t40 = ((x161&x162)^(x163<x164));

	if (t40 != 62683) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -939523619090206LL;
	static int16_t x166 = 1;
	volatile int64_t x167 = -1LL;
	uint64_t x168 = 468685394LLU;
	volatile int64_t t41 = 249953339773925LL;

	t41 = ((x165&x166)^(x167<x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MAX;
	volatile int64_t t42 = 804906522LL;

	t42 = ((x169&x170)^(x171<x172));

	if (t42 != 9223372036854775321LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -242347527LL;
	volatile int8_t x174 = -1;
	int64_t x176 = -100720548LL;
	volatile int64_t t43 = -38793LL;

	t43 = ((x173&x174)^(x175<x176));

	if (t43 != -242347527LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 165LLU;
	static uint16_t x178 = 712U;
	volatile uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = INT16_MIN;
	static volatile uint64_t t44 = 7770841489438LLU;

	t44 = ((x177&x178)^(x179<x180));

	if (t44 != 128LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 3LLU;
	int64_t t45 = -4353107344177426528LL;

	t45 = ((x181&x182)^(x183<x184));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MAX;
	static uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = 0U;
	int64_t t46 = 0LL;

	t46 = ((x185&x186)^(x187<x188));

	if (t46 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 30;
	uint8_t x190 = UINT8_MAX;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = -428903929;
	volatile int32_t t47 = 4;

	t47 = ((x189&x190)^(x191<x192));

	if (t47 != 30) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 279697693;
	uint8_t x195 = UINT8_MAX;
	volatile uint64_t x196 = 16247989752703LLU;
	volatile int32_t t48 = 876279807;

	t48 = ((x193&x194)^(x195<x196));

	if (t48 != 279697692) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 34U;
	int32_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = 2;
	static int32_t t49 = -927932910;

	t49 = ((x197&x198)^(x199<x200));

	if (t49 != 34) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	static int64_t x202 = INT64_MAX;
	int64_t x204 = INT64_MIN;
	volatile int64_t t50 = INT64_MAX;

	t50 = ((x201&x202)^(x203<x204));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	static int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MAX;

	t51 = ((x205&x206)^(x207<x208));

	if (t51 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	int8_t x210 = -53;
	uint64_t x211 = 49956933LLU;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 0;

	t52 = ((x209&x210)^(x211<x212));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint32_t x214 = 1U;
	int64_t x215 = INT64_MAX;
	static volatile int64_t t53 = -67780191294LL;

	t53 = ((x213&x214)^(x215<x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	uint32_t x218 = UINT32_MAX;
	static int8_t x219 = -1;
	volatile uint64_t x220 = 1765069976836LLU;
	volatile uint32_t t54 = 4U;

	t54 = ((x217&x218)^(x219<x220));

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 345161U;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = -95265396852317LL;
	volatile uint32_t t55 = 1494744541U;

	t55 = ((x221&x222)^(x223<x224));

	if (t55 != 17481U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 30U;
	static int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MAX;
	volatile uint8_t x228 = 61U;
	static uint32_t t56 = 344U;

	t56 = ((x225&x226)^(x227<x228));

	if (t56 != 30U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 1447728922150441LL;
	int32_t x232 = -96;
	int64_t t57 = 956106LL;

	t57 = ((x229&x230)^(x231<x232));

	if (t57 != 1447728922150440LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = 0;
	static int32_t x236 = INT32_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x233&x234)^(x235<x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 86592832068941894LL;
	volatile int16_t x239 = INT16_MIN;
	int8_t x240 = 20;

	t59 = ((x237&x238)^(x239<x240));

	if (t59 != 71LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x241 = -1;
	volatile int64_t x243 = -412959907072117610LL;
	volatile int32_t x244 = INT32_MIN;

	t60 = ((x241&x242)^(x243<x244));

	if (t60 != 309U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 0;
	uint32_t x246 = 1U;
	static volatile int64_t x247 = INT64_MAX;
	volatile uint32_t t61 = 251343U;

	t61 = ((x245&x246)^(x247<x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 5469976997565LLU;
	volatile int16_t x252 = INT16_MIN;
	volatile uint64_t t62 = 615886LLU;

	t62 = ((x249&x250)^(x251<x252));

	if (t62 != 17LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = 879U;
	int32_t x256 = INT32_MIN;
	volatile uint32_t t63 = 435461982U;

	t63 = ((x253&x254)^(x255<x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 0;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -252527LL;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t64 = 189564207772LLU;

	t64 = ((x257&x258)^(x259<x260));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;
	uint16_t x264 = 72U;
	volatile uint32_t t65 = 5719U;

	t65 = ((x261&x262)^(x263<x264));

	if (t65 != 254U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 46U;
	static int8_t x266 = 1;
	static uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 3;

	t66 = ((x265&x266)^(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	static int64_t x270 = -1LL;
	static int8_t x271 = INT8_MIN;
	volatile int64_t x272 = INT64_MAX;
	volatile int64_t t67 = -28482256LL;

	t67 = ((x269&x270)^(x271<x272));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 1350;
	int32_t x274 = INT32_MAX;
	int8_t x276 = -1;
	int32_t t68 = -118230932;

	t68 = ((x273&x274)^(x275<x276));

	if (t68 != 1350) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 177879LL;
	volatile int8_t x278 = INT8_MIN;
	volatile int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	int64_t t69 = -153710783546321LL;

	t69 = ((x277&x278)^(x279<x280));

	if (t69 != 177792LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	static uint32_t x282 = 25704815U;
	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;
	static volatile int64_t t70 = 45LL;

	t70 = ((x281&x282)^(x283<x284));

	if (t70 != 25704814LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 62U;
	int64_t x287 = INT64_MIN;
	int8_t x288 = 6;
	uint64_t t71 = 315567051368940456LLU;

	t71 = ((x285&x286)^(x287<x288));

	if (t71 != 63LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 2217917455080194LLU;

	t72 = ((x289&x290)^(x291<x292));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = 55245883LL;
	uint64_t x295 = 727562266LLU;
	int32_t x296 = INT32_MIN;
	volatile int64_t t73 = -1837747383943LL;

	t73 = ((x293&x294)^(x295<x296));

	if (t73 != 55245882LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	uint8_t x299 = 16U;
	int32_t t74 = INT32_MIN;

	t74 = ((x297&x298)^(x299<x300));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x303 = 26U;
	uint64_t x304 = 803844234LLU;
	volatile uint32_t t75 = 61U;

	t75 = ((x301&x302)^(x303<x304));

	if (t75 != 57974393U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = 0;
	static volatile int8_t x307 = INT8_MIN;
	static uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -123753446;

	t76 = ((x305&x306)^(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 3;
	static uint32_t x310 = 23861285U;
	uint32_t x311 = 1U;
	volatile uint32_t t77 = 164184U;

	t77 = ((x309&x310)^(x311<x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = INT64_MIN;
	static volatile int64_t x316 = 434082543848109430LL;
	int64_t t78 = 80LL;

	t78 = ((x313&x314)^(x315<x316));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = -8LL;
	static uint8_t x320 = UINT8_MAX;
	static int32_t t79 = 88522;

	t79 = ((x317&x318)^(x319<x320));

	if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	volatile uint16_t x322 = 5U;
	int16_t x323 = -2;
	uint64_t x324 = 2403646032LLU;

	t80 = ((x321&x322)^(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = 50035809726LLU;
	volatile int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	uint64_t t81 = 4367LLU;

	t81 = ((x325&x326)^(x327<x328));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int64_t x331 = INT64_MIN;
	int32_t t82 = 4093528;

	t82 = ((x329&x330)^(x331<x332));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 99256203U;
	int32_t x334 = INT32_MIN;
	static uint32_t x335 = 1958U;
	int32_t x336 = INT32_MIN;
	volatile uint32_t t83 = 397646U;

	t83 = ((x333&x334)^(x335<x336));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 0U;
	static int8_t x339 = INT8_MAX;
	uint32_t x340 = 83305014U;
	static volatile uint32_t t84 = 142759800U;

	t84 = ((x337&x338)^(x339<x340));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = -31;

	t85 = ((x341&x342)^(x343<x344));

	if (t85 != 65409) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MAX;
	volatile int64_t t86 = 160963563126LL;

	t86 = ((x345&x346)^(x347<x348));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = 2U;
	int64_t x351 = INT64_MIN;
	static uint8_t x352 = UINT8_MAX;

	t87 = ((x349&x350)^(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1758LL;
	uint32_t x354 = 24U;
	static int32_t x355 = 17;
	int64_t x356 = INT64_MIN;

	t88 = ((x353&x354)^(x355<x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int32_t t89 = -3;

	t89 = ((x357&x358)^(x359<x360));

	if (t89 != 1078577) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	static int64_t x362 = -1LL;
	static uint16_t x363 = UINT16_MAX;
	uint8_t x364 = 120U;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x361&x362)^(x363<x364));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 2LLU;
	int32_t x366 = INT32_MIN;
	uint8_t x368 = 2U;

	t91 = ((x365&x366)^(x367<x368));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 117U;
	int32_t x370 = INT32_MAX;
	volatile uint16_t x372 = UINT16_MAX;

	t92 = ((x369&x370)^(x371<x372));

	if (t92 != 116) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = -1;
	int32_t x375 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = -21448;

	t93 = ((x373&x374)^(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = 52LL;
	int16_t x378 = INT16_MIN;
	volatile uint32_t x380 = 122874U;
	volatile int64_t t94 = -194LL;

	t94 = ((x377&x378)^(x379<x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MIN;
	int16_t x383 = -723;
	volatile int64_t x384 = -1LL;
	static volatile uint64_t t95 = 321081LLU;

	t95 = ((x381&x382)^(x383<x384));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = 1341897202054790LL;
	volatile int16_t x386 = 6;
	int32_t x387 = INT32_MAX;
	int32_t x388 = -1;
	int64_t t96 = -316576564LL;

	t96 = ((x385&x386)^(x387<x388));

	if (t96 != 6LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -5052175LL;
	int32_t x390 = -1;
	uint16_t x391 = 231U;
	static uint8_t x392 = 26U;
	int64_t t97 = 191LL;

	t97 = ((x389&x390)^(x391<x392));

	if (t97 != -5052175LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile int64_t x394 = INT64_MIN;
	uint8_t x396 = 6U;
	volatile int64_t t98 = -5736433060111LL;

	t98 = ((x393&x394)^(x395<x396));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	uint16_t x398 = 12U;
	int16_t x400 = INT16_MAX;
	volatile int64_t t99 = -187781038LL;

	t99 = ((x397&x398)^(x399<x400));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

