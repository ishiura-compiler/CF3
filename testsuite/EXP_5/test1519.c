#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
int64_t t3 = 142487098835LL;
uint64_t t4 = 3165379869LLU;
int64_t x21 = INT64_MAX;
volatile int32_t x24 = 63;
int64_t x26 = 22782542867968334LL;
int16_t x35 = 343;
volatile int64_t t8 = INT64_MIN;
int32_t x40 = INT32_MIN;
int8_t x43 = -2;
volatile uint16_t x47 = 0U;
int64_t x49 = -1LL;
int8_t x51 = -1;
int32_t x60 = INT32_MAX;
int8_t x63 = INT8_MAX;
uint64_t x67 = UINT64_MAX;
volatile uint8_t x75 = UINT8_MAX;
int64_t x76 = INT64_MIN;
int16_t x79 = -13;
uint64_t x86 = UINT64_MAX;
static volatile uint32_t t21 = 1U;
static volatile uint16_t x95 = 39U;
volatile int16_t x97 = INT16_MIN;
int32_t x100 = -1;
volatile int32_t t24 = 7;
static int64_t x105 = -14LL;
static int64_t x112 = -1LL;
int64_t t27 = -177689692LL;
uint64_t x115 = UINT64_MAX;
static int32_t t28 = -34854;
int32_t x117 = INT32_MIN;
uint8_t x127 = UINT8_MAX;
int64_t x128 = INT64_MIN;
static uint8_t x129 = UINT8_MAX;
int16_t x133 = 298;
uint8_t x138 = UINT8_MAX;
uint32_t x146 = UINT32_MAX;
static uint16_t x151 = 24U;
int8_t x160 = INT8_MIN;
uint16_t x163 = UINT16_MAX;
static uint64_t t40 = 11508760999898142LLU;
int64_t x168 = INT64_MIN;
int16_t x178 = INT16_MAX;
int8_t x179 = 44;
uint64_t t44 = 4749550849326565623LLU;
int32_t x193 = 166603;
static int32_t x204 = -97200;
static int32_t x206 = INT32_MAX;
volatile int8_t x211 = INT8_MAX;
volatile uint64_t t52 = 238833960795989938LLU;
int8_t x214 = INT8_MIN;
uint16_t x220 = UINT16_MAX;
static uint16_t x230 = 5403U;
static int16_t x233 = -1;
uint64_t t59 = 9409527928615521LLU;
int64_t x246 = -2076LL;
static int32_t x251 = INT32_MIN;
uint32_t x256 = 174755373U;
uint64_t x261 = 481559979262LLU;
int8_t x265 = INT8_MIN;
int32_t x266 = INT32_MAX;
int64_t x269 = INT64_MAX;
static volatile int64_t t67 = -656099LL;
int64_t x277 = -1LL;
int64_t x283 = -1LL;
uint32_t t70 = 302U;
uint32_t x286 = 1322718937U;
static int32_t x287 = -1;
int32_t x292 = INT32_MIN;
volatile int16_t x298 = 2004;
uint16_t x300 = 728U;
uint32_t x304 = 1306141334U;
volatile int64_t x307 = INT64_MAX;
int64_t x310 = -12661522629482855LL;
uint16_t x312 = UINT16_MAX;
int32_t x315 = INT32_MAX;
int8_t x320 = -1;
int64_t x328 = 211963425971794LL;
volatile uint16_t x331 = 1U;
int16_t x333 = -1;
uint32_t x335 = 97231U;
static int16_t x343 = INT16_MIN;
int32_t x347 = 3276031;
volatile int32_t x349 = INT32_MIN;
int16_t x358 = INT16_MIN;
uint16_t x367 = 5U;
int16_t x375 = -1;
int64_t t94 = 1904595374218LL;
int8_t x383 = INT8_MAX;
volatile int8_t x387 = INT8_MAX;
static int8_t x397 = INT8_MAX;
uint32_t x398 = UINT32_MAX;
int64_t x399 = -1LL;


void f0(void) {
	int8_t x1 = -37;
	volatile uint16_t x2 = UINT16_MAX;
	static volatile int8_t x3 = INT8_MAX;
	static int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -397934758994887608LL;

	t0 = (x1&((x2<x3)^x4));

	if (t0 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1503184461U;
	volatile int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	static int32_t x8 = -1;
	volatile uint32_t t1 = 1242027256U;

	t1 = (x5&((x6<x7)^x8));

	if (t1 != 1503184461U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1062;
	uint16_t x10 = UINT16_MAX;
	uint64_t x12 = 110LLU;
	static volatile uint64_t t2 = 1916711285LLU;

	t2 = (x9&((x10<x11)^x12));

	if (t2 != 74LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	static int8_t x14 = -5;
	volatile int64_t x15 = -1LL;
	volatile int32_t x16 = -213566096;

	t3 = (x13&((x14<x15)^x16));

	if (t3 != 9223372036641209713LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = 54;
	static int16_t x19 = INT16_MIN;
	int16_t x20 = 251;

	t4 = (x17&((x18<x19)^x20));

	if (t4 != 251LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 28320U;
	volatile int64_t x23 = -551LL;
	volatile int64_t t5 = 13326198LL;

	t5 = (x21&((x22<x23)^x24));

	if (t5 != 63LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 514U;
	volatile uint32_t t6 = 112622U;

	t6 = (x25&((x26<x27)^x28));

	if (t6 != 515U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	volatile int16_t x30 = 10417;
	uint8_t x31 = 5U;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -1940822;

	t7 = (x29&((x30<x31)^x32));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile int16_t x34 = 19;
	int32_t x36 = -1408800;

	t8 = (x33&((x34<x35)^x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MAX;
	volatile uint32_t x38 = UINT32_MAX;
	volatile uint16_t x39 = 10360U;
	int64_t t9 = -59118576LL;

	t9 = (x37&((x38<x39)^x40));

	if (t9 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MAX;
	static uint64_t x44 = UINT64_MAX;
	static uint64_t t10 = 99754043719LLU;

	t10 = (x41&((x42<x43)^x44));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int64_t x46 = -1LL;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 2;

	t11 = (x45&((x46<x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = UINT8_MAX;
	uint16_t x52 = 13453U;
	static int64_t t12 = -2424790291535248342LL;

	t12 = (x49&((x50<x51)^x52));

	if (t12 != 13453LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	uint32_t x55 = 734882868U;
	int32_t x56 = INT32_MIN;
	int32_t t13 = INT32_MIN;

	t13 = (x53&((x54<x55)^x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	volatile int64_t x58 = -1LL;
	static volatile int16_t x59 = INT16_MAX;
	volatile int32_t t14 = 31953;

	t14 = (x57&((x58<x59)^x60));

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x62 = 4217U;
	uint64_t x64 = 7888097870247539LLU;
	uint64_t t15 = 1049657LLU;

	t15 = (x61&((x62<x63)^x64));

	if (t15 != 7888097870217216LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -33551319912404LL;
	uint64_t x66 = UINT64_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 153974882LLU;

	t16 = (x65&((x66<x67)^x68));

	if (t16 != 18446710522389639212LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 170767U;
	uint64_t x70 = 145242LLU;
	int8_t x71 = 0;
	volatile uint8_t x72 = 42U;
	static volatile uint32_t t17 = 1U;

	t17 = (x69&((x70<x71)^x72));

	if (t17 != 10U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	int64_t t18 = INT64_MIN;

	t18 = (x73&((x74<x75)^x76));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 1926833999U;
	static uint16_t x80 = UINT16_MAX;
	static int32_t t19 = 6706;

	t19 = (x77&((x78<x79)^x80));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = 1;
	static uint8_t x82 = 1U;
	uint32_t x83 = 15874U;
	static int8_t x84 = INT8_MAX;
	int32_t t20 = 3016865;

	t20 = (x81&((x82<x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	volatile int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;

	t21 = (x85&((x86<x87)^x88));

	if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static volatile int64_t x90 = 0LL;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x89&((x90<x91)^x92));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 7688LLU;
	int8_t x94 = 1;
	static int8_t x96 = -1;
	static uint64_t t23 = 14805LLU;

	t23 = (x93&((x94<x95)^x96));

	if (t23 != 7688LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	int16_t x99 = -1;

	t24 = (x97&((x98<x99)^x100));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 27U;
	int64_t x102 = -396853536832LL;
	volatile int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;
	static int32_t t25 = 1;

	t25 = (x101&((x102<x103)^x104));

	if (t25 != 26) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	uint32_t x107 = 118U;
	uint8_t x108 = 20U;
	int64_t t26 = 4066029526143LL;

	t26 = (x105&((x106<x107)^x108));

	if (t26 != 16LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int64_t x110 = INT64_MAX;
	uint64_t x111 = UINT64_MAX;

	t27 = (x109&((x110<x111)^x112));

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 13;
	static volatile int32_t x114 = -1;
	uint8_t x116 = 43U;

	t28 = (x113&((x114<x115)^x116));

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 1U;
	static int32_t t29 = -8702309;

	t29 = (x117&((x118<x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MAX;
	volatile uint8_t x122 = 43U;
	int32_t x123 = 1;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 836096706999243LL;

	t30 = (x121&((x122<x123)^x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int16_t x126 = INT16_MIN;
	volatile int64_t t31 = -28890492052LL;

	t31 = (x125&((x126<x127)^x128));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	static int16_t x132 = INT16_MIN;
	int32_t t32 = -66366;

	t32 = (x129&((x130<x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 23;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t x136 = INT32_MIN;
	int32_t t33 = -122355;

	t33 = (x133&((x134<x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = UINT16_MAX;
	int8_t x139 = INT8_MIN;
	static volatile int16_t x140 = -1;
	volatile int32_t t34 = -244998;

	t34 = (x137&((x138<x139)^x140));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int8_t x142 = -1;
	volatile int64_t x143 = INT64_MIN;
	int32_t x144 = -1;
	volatile int32_t t35 = 364961642;

	t35 = (x141&((x142<x143)^x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x147 = 6U;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = 879844419U;

	t36 = (x145&((x146<x147)^x148));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = 0;
	int64_t x152 = -7LL;
	volatile int64_t t37 = 1848LL;

	t37 = (x149&((x150<x151)^x152));

	if (t37 != 2147483640LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 4348726U;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t38 = 29824;

	t38 = (x153&((x154<x155)^x156));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	uint32_t x158 = 1044684816U;
	volatile int8_t x159 = INT8_MAX;
	volatile int32_t t39 = 4;

	t39 = (x157&((x158<x159)^x160));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -14;
	int16_t x162 = -1;
	uint64_t x164 = 69112132877396569LLU;

	t40 = (x161&((x162<x163)^x164));

	if (t40 != 69112132877396560LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x165 = 33U;
	int64_t x166 = -10880644691908LL;
	static uint32_t x167 = 130914U;
	int64_t t41 = -4057120859456720392LL;

	t41 = (x165&((x166<x167)^x168));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static uint64_t x170 = 0LLU;
	int16_t x171 = INT16_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 15031;

	t42 = (x169&((x170<x171)^x172));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	int8_t x175 = 30;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 199943815;

	t43 = (x173&((x174<x175)^x176));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	uint64_t x180 = 4349132211LLU;

	t44 = (x177&((x178<x179)^x180));

	if (t44 != 4349132211LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	static int16_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MAX;
	int32_t t45 = -503569830;

	t45 = (x181&((x182<x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 3U;
	uint8_t x186 = 10U;
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MAX;
	static volatile int32_t t46 = 151;

	t46 = (x185&((x186<x187)^x188));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int8_t x190 = -13;
	static int8_t x191 = INT8_MAX;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 14497;

	t47 = (x189&((x190<x191)^x192));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MAX;
	volatile uint64_t x195 = UINT64_MAX;
	uint8_t x196 = 46U;
	int32_t t48 = 1249;

	t48 = (x193&((x194<x195)^x196));

	if (t48 != 11) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	volatile int64_t x198 = INT64_MAX;
	uint64_t x199 = 19859056685790314LLU;
	static volatile int8_t x200 = -2;
	volatile int32_t t49 = -57526741;

	t49 = (x197&((x198<x199)^x200));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	uint32_t x202 = 1031221U;
	int64_t x203 = -3LL;
	volatile int64_t t50 = 879965248531212583LL;

	t50 = (x201&((x202<x203)^x204));

	if (t50 != -97200LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 0U;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 4;

	t51 = (x205&((x206<x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -6369375168609LL;
	uint64_t x210 = UINT64_MAX;
	uint64_t x212 = 3864148LLU;

	t52 = (x209&((x210<x211)^x212));

	if (t52 != 2283028LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 67U;
	int64_t x215 = -265999038327LL;
	static int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 2880799;

	t53 = (x213&((x214<x215)^x216));

	if (t53 != 67) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static volatile int16_t x218 = INT16_MIN;
	volatile int64_t x219 = INT64_MIN;
	int32_t t54 = 24;

	t54 = (x217&((x218<x219)^x220));

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 36U;
	int8_t x222 = INT8_MAX;
	int8_t x223 = 8;
	volatile int32_t x224 = 107713872;
	static volatile int32_t t55 = -51528;

	t55 = (x221&((x222<x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MIN;
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t56 = 3239;

	t56 = (x225&((x226<x227)^x228));

	if (t56 != 2147483646) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	static uint16_t x231 = 3U;
	uint16_t x232 = 2U;
	int32_t t57 = -1046739;

	t57 = (x229&((x230<x231)^x232));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x234 = INT32_MIN;
	volatile int8_t x235 = -24;
	int16_t x236 = -1;
	int32_t t58 = -775;

	t58 = (x233&((x234<x235)^x236));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 49;
	uint16_t x238 = UINT16_MAX;
	volatile int64_t x239 = INT64_MIN;
	uint64_t x240 = 6132224590757725346LLU;

	t59 = (x237&((x238<x239)^x240));

	if (t59 != 32LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 23744194U;
	int16_t x242 = INT16_MIN;
	static int32_t x243 = -1;
	uint32_t x244 = UINT32_MAX;
	uint32_t t60 = 1010915248U;

	t60 = (x241&((x242<x243)^x244));

	if (t60 != 23744194U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 5540580733LLU;
	static int16_t x247 = -14;
	static int32_t x248 = INT32_MIN;
	uint64_t t61 = 41LLU;

	t61 = (x245&((x246<x247)^x248));

	if (t61 != 4294967297LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = INT32_MIN;

	t62 = (x249&((x250<x251)^x252));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -231519793752350LL;
	volatile uint32_t x254 = 748U;
	volatile int32_t x255 = INT32_MIN;
	static volatile int64_t t63 = -4396143268594683LL;

	t63 = (x253&((x254<x255)^x256));

	if (t63 != 141166112LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	volatile int8_t x258 = 0;
	int16_t x259 = INT16_MIN;
	static int16_t x260 = INT16_MIN;
	static int32_t t64 = -184858445;

	t64 = (x257&((x258<x259)^x260));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x262 = 0;
	volatile int32_t x263 = 4466;
	uint64_t x264 = 8083926654426LLU;
	uint64_t t65 = 33475225LLU;

	t65 = (x261&((x262<x263)^x264));

	if (t65 != 343850222810LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x267 = INT64_MIN;
	int16_t x268 = -601;
	volatile int32_t t66 = -37571829;

	t66 = (x265&((x266<x267)^x268));

	if (t66 != -640) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -1LL;
	static int64_t x271 = INT64_MIN;
	volatile int64_t x272 = INT64_MIN;

	t67 = (x269&((x270<x271)^x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	int64_t x274 = -1LL;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t x276 = INT64_MIN;
	int64_t t68 = INT64_MIN;

	t68 = (x273&((x274<x275)^x276));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	static uint16_t x279 = 1U;
	int32_t x280 = INT32_MIN;
	volatile int64_t t69 = 1238041361608702LL;

	t69 = (x277&((x278<x279)^x280));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 58785U;
	static uint16_t x282 = 3U;
	int8_t x284 = INT8_MIN;

	t70 = (x281&((x282<x283)^x284));

	if (t70 != 58752U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 7247463;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -132;

	t71 = (x285&((x286<x287)^x288));

	if (t71 != 7247361) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 106;
	static uint8_t x290 = 21U;
	uint8_t x291 = UINT8_MAX;
	int32_t t72 = 3815;

	t72 = (x289&((x290<x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	static uint32_t x294 = 464662658U;
	uint8_t x295 = 25U;
	int64_t x296 = 12435LL;
	volatile int64_t t73 = -2LL;

	t73 = (x293&((x294<x295)^x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x299 = 24;
	int32_t t74 = 353553;

	t74 = (x297&((x298<x299)^x300));

	if (t74 != 216) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	uint64_t x302 = UINT64_MAX;
	static int32_t x303 = 15014758;
	volatile uint32_t t75 = 4779U;

	t75 = (x301&((x302<x303)^x304));

	if (t75 != 22U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	int8_t x306 = -48;
	volatile int64_t x308 = -651572LL;
	volatile int64_t t76 = -31275LL;

	t76 = (x305&((x306<x307)^x308));

	if (t76 != 2146832077LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	static int16_t x311 = -1;
	volatile int32_t t77 = 1;

	t77 = (x309&((x310<x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MAX;
	int8_t x316 = -1;
	volatile int32_t t78 = 156;

	t78 = (x313&((x314<x315)^x316));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	uint16_t x318 = 10U;
	uint64_t x319 = UINT64_MAX;
	int32_t t79 = 0;

	t79 = (x317&((x318<x319)^x320));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint32_t x322 = 126301U;
	uint32_t x323 = 2893480U;
	int64_t x324 = -1LL;
	static int64_t t80 = -30904LL;

	t80 = (x321&((x322<x323)^x324));

	if (t80 != 2147483646LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	volatile int64_t t81 = -112959916562LL;

	t81 = (x325&((x326<x327)^x328));

	if (t81 != 211963425971712LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 16U;
	uint32_t x330 = 465U;
	int16_t x332 = -1;
	volatile uint32_t t82 = 50U;

	t82 = (x329&((x330<x331)^x332));

	if (t82 != 16U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 3U;
	static uint32_t x336 = 337397799U;
	volatile uint32_t t83 = 3U;

	t83 = (x333&((x334<x335)^x336));

	if (t83 != 337397798U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 0;
	int32_t x338 = -22182616;
	uint64_t x339 = 62875690314663008LLU;
	int8_t x340 = -1;
	int32_t t84 = -256175888;

	t84 = (x337&((x338<x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	volatile int16_t x342 = INT16_MIN;
	int32_t x344 = 1219791;
	int64_t t85 = 73LL;

	t85 = (x341&((x342<x343)^x344));

	if (t85 != 1219791LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	uint32_t x346 = 11748331U;
	int16_t x348 = -1;
	static volatile int32_t t86 = -54756228;

	t86 = (x345&((x346<x347)^x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x350 = 430;
	static int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = 7944726;

	t87 = (x349&((x350<x351)^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x353 = 0U;
	int32_t x354 = -156;
	int16_t x355 = 11419;
	volatile int64_t x356 = -23751LL;
	int64_t t88 = 2285278827579735361LL;

	t88 = (x353&((x354<x355)^x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -8;
	volatile int16_t x359 = INT16_MIN;
	volatile int8_t x360 = INT8_MAX;
	volatile int32_t t89 = -1;

	t89 = (x357&((x358<x359)^x360));

	if (t89 != 120) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	uint32_t x362 = 46835U;
	int8_t x363 = INT8_MIN;
	static int32_t x364 = INT32_MIN;
	static int64_t t90 = INT64_MIN;

	t90 = (x361&((x362<x363)^x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int8_t x366 = INT8_MIN;
	int32_t x368 = INT32_MIN;
	int32_t t91 = 118495919;

	t91 = (x365&((x366<x367)^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int64_t x370 = INT64_MAX;
	uint32_t x371 = UINT32_MAX;
	static int64_t x372 = INT64_MAX;
	int64_t t92 = 1LL;

	t92 = (x369&((x370<x371)^x372));

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = -8;
	int64_t x376 = INT64_MAX;
	volatile int64_t t93 = 147LL;

	t93 = (x373&((x374<x375)^x376));

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 18;
	uint8_t x378 = 95U;
	int8_t x379 = INT8_MAX;
	int64_t x380 = -1LL;

	t94 = (x377&((x378<x379)^x380));

	if (t94 != 18LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	volatile int64_t x382 = -4031799LL;
	volatile int16_t x384 = -2;
	int64_t t95 = -441967230972LL;

	t95 = (x381&((x382<x383)^x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = 8002U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x385&((x386<x387)^x388));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int16_t x390 = 16;
	static int32_t x391 = 11;
	volatile int64_t x392 = 12058544788LL;
	volatile int64_t t97 = -367746359568448617LL;

	t97 = (x389&((x390<x391)^x392));

	if (t97 != 51860LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = 16U;
	volatile uint32_t x395 = 16907U;
	volatile int64_t x396 = INT64_MIN;
	static int64_t t98 = INT64_MIN;

	t98 = (x393&((x394<x395)^x396));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x400 = -59606722606297114LL;
	int64_t t99 = 72556813450LL;

	t99 = (x397&((x398<x399)^x400));

	if (t99 != 102LL) { NG(); } else { ; }
	
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

