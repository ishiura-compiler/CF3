#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x4 = 574588;
static int8_t x5 = -2;
int16_t x11 = INT16_MAX;
int32_t x15 = -1;
volatile int32_t t5 = 125288;
int64_t x31 = 232806393LL;
volatile uint64_t t6 = 298236626314104LLU;
uint16_t x35 = 1U;
int32_t x37 = INT32_MAX;
int8_t x42 = 1;
uint16_t x44 = 2302U;
int8_t x57 = -1;
static int16_t x60 = 10;
int64_t x62 = 13692250LL;
int16_t x63 = INT16_MIN;
volatile uint32_t x67 = 499720020U;
uint16_t x69 = 6U;
static volatile int32_t x78 = 163469627;
int16_t x81 = INT16_MIN;
int8_t x86 = INT8_MIN;
uint8_t x87 = UINT8_MAX;
static int32_t x100 = INT32_MAX;
static int16_t x104 = INT16_MIN;
int32_t x109 = 3;
int32_t x118 = 770;
int16_t x120 = INT16_MAX;
static int64_t t25 = -1LL;
uint16_t x121 = 5437U;
int64_t t26 = -252915327078LL;
uint64_t x129 = 476834LLU;
static int32_t x136 = 1;
static uint16_t x141 = 14040U;
int32_t x142 = 232848;
volatile int8_t x147 = INT8_MIN;
static int16_t x149 = INT16_MAX;
uint64_t x151 = UINT64_MAX;
int16_t x157 = -3615;
int64_t x159 = INT64_MIN;
int16_t x177 = INT16_MIN;
uint16_t x182 = UINT16_MAX;
uint16_t x183 = UINT16_MAX;
int8_t x190 = 0;
uint16_t x194 = 0U;
int32_t x196 = -1;
int16_t x205 = -1;
volatile uint64_t x207 = 44338LLU;
int16_t x208 = -1;
static int32_t t44 = 499905;
volatile int64_t x209 = -4585831LL;
int32_t x212 = INT32_MIN;
int64_t t47 = -1LL;
int16_t x224 = INT16_MAX;
int32_t t48 = -159;
int32_t x232 = INT32_MIN;
int32_t t50 = -1;
static uint64_t x244 = UINT64_MAX;
volatile uint64_t t53 = 2038132258LLU;
static uint16_t x249 = UINT16_MAX;
int32_t t55 = 136140;
volatile int32_t t56 = -29;
int16_t x257 = -1;
uint32_t x272 = 5U;
volatile uint32_t t58 = 2U;
static volatile int16_t x276 = INT16_MIN;
volatile uint32_t t60 = 78U;
static int64_t x281 = -1LL;
int16_t x283 = INT16_MAX;
volatile int32_t x285 = -1;
int16_t x286 = INT16_MIN;
uint8_t x288 = 2U;
static uint16_t x290 = 4U;
int8_t x295 = -2;
volatile int32_t x299 = INT32_MIN;
int32_t t66 = -18;
int32_t x318 = -1;
volatile uint64_t t68 = 228688128212563518LLU;
static uint64_t x334 = UINT64_MAX;
uint64_t x349 = 465817750LLU;
volatile int8_t x353 = INT8_MIN;
volatile int64_t t75 = -4207LL;
uint32_t x359 = 2132U;
volatile int64_t t76 = 25352754091LL;
uint16_t x365 = 22U;
static int16_t x379 = -1;
uint16_t x380 = 12U;
int16_t x387 = INT16_MIN;
int8_t x393 = -1;
int8_t x401 = INT8_MIN;
static int16_t x410 = INT16_MIN;
volatile int32_t x416 = INT32_MIN;
volatile int32_t t88 = 31;
int64_t t89 = 59066453148618232LL;
volatile int8_t x426 = -1;
int32_t t92 = 153059;
volatile int8_t x434 = -3;
volatile uint32_t x445 = 277704U;
static int16_t x451 = -1017;
uint64_t x452 = 1646LLU;


void f0(void) {
	volatile int8_t x1 = -1;
	int16_t x2 = -3885;
	int32_t x3 = -2675;
	int32_t t0 = 12744;

	t0 = (x1*((x2<x3)*x4));

	if (t0 != -574588) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 500U;
	uint32_t x7 = 313019260U;
	static int64_t x8 = -3503LL;
	volatile int64_t t1 = -1353857LL;

	t1 = (x5*((x6<x7)*x8));

	if (t1 != 7006LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	uint64_t x10 = 1672884561580875LLU;
	volatile int32_t x12 = -1;
	static volatile int64_t t2 = -8415LL;

	t2 = (x9*((x10<x11)*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	static int32_t x14 = INT32_MIN;
	int16_t x16 = -9440;
	uint32_t t3 = 167U;

	t3 = (x13*((x14<x15)*x16));

	if (t3 != 9440U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 3U;
	int16_t x22 = 10652;
	uint64_t x23 = 85745340LLU;
	uint16_t x24 = 2U;
	static volatile int32_t t4 = 92;

	t4 = (x21*((x22<x23)*x24));

	if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	volatile uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 10500030500610LLU;
	int8_t x28 = 4;

	t5 = (x25*((x26<x27)*x28));

	if (t5 != -4) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 12U;
	static uint8_t x30 = 51U;
	uint64_t x32 = 5856559870LLU;

	t6 = (x29*((x30<x31)*x32));

	if (t6 != 70278718440LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 3094682U;
	static uint64_t x34 = UINT64_MAX;
	int16_t x36 = INT16_MAX;
	uint32_t t7 = 3288U;

	t7 = (x33*((x34<x35)*x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MIN;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = -1;
	static volatile int32_t t8 = 31;

	t8 = (x37*((x38<x39)*x40));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	static int64_t x43 = INT64_MIN;
	int64_t t9 = -3940LL;

	t9 = (x41*((x42<x43)*x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	uint32_t x46 = UINT32_MAX;
	static uint64_t x47 = UINT64_MAX;
	int32_t x48 = -1;
	int32_t t10 = -805;

	t10 = (x45*((x46<x47)*x48));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	int64_t x50 = INT64_MIN;
	static int64_t x51 = -1LL;
	static int64_t x52 = 954976948159866LL;
	int64_t t11 = 500082957989LL;

	t11 = (x49*((x50<x51)*x52));

	if (t11 != 954976948159866LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 23U;
	int32_t x54 = INT32_MIN;
	static uint64_t x55 = 256245418996576LLU;
	int8_t x56 = INT8_MAX;
	volatile int32_t t12 = 3835660;

	t12 = (x53*((x54<x55)*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x58 = 126985U;
	static int16_t x59 = INT16_MIN;
	int32_t t13 = 56862673;

	t13 = (x57*((x58<x59)*x60));

	if (t13 != -10) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int64_t x64 = INT64_MIN;
	int64_t t14 = -1070307994LL;

	t14 = (x61*((x62<x63)*x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = 40U;
	volatile int64_t x66 = INT64_MIN;
	uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 2373059U;

	t15 = (x65*((x66<x67)*x68));

	if (t15 != 4294967256U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	int32_t t16 = 23;

	t16 = (x69*((x70<x71)*x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	static int16_t x79 = INT16_MIN;
	int32_t x80 = 1465294;
	int32_t t17 = 15383977;

	t17 = (x77*((x78<x79)*x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x82 = INT64_MIN;
	uint8_t x83 = 118U;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t18 = 16;

	t18 = (x81*((x82<x83)*x84));

	if (t18 != 1073741824) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 7395U;
	int8_t x88 = -25;
	volatile int32_t t19 = 921481;

	t19 = (x85*((x86<x87)*x88));

	if (t19 != -184875) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = INT8_MIN;
	uint16_t x94 = 576U;
	uint8_t x95 = 87U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t20 = -7791;

	t20 = (x93*((x94<x95)*x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x97 = 82U;
	volatile int32_t x98 = INT32_MAX;
	int8_t x99 = 4;
	volatile int32_t t21 = -24695;

	t21 = (x97*((x98<x99)*x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -1432869LL;
	static int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	static volatile int64_t t22 = 51LL;

	t22 = (x101*((x102<x103)*x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = -2280679LL;
	static volatile int64_t x106 = -1LL;
	static uint64_t x107 = 70983192340LLU;
	static volatile uint32_t x108 = 117051792U;
	int64_t t23 = 128166394587LL;

	t23 = (x105*((x106<x107)*x108));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x110 = INT8_MIN;
	static uint64_t x111 = 60185432939LLU;
	volatile uint16_t x112 = 14874U;
	volatile int32_t t24 = -113;

	t24 = (x109*((x110<x111)*x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = 40821LL;
	int32_t x119 = -1;

	t25 = (x117*((x118<x119)*x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x122 = 24216U;
	static uint64_t x123 = 34542695329431LLU;
	int64_t x124 = -1LL;

	t26 = (x121*((x122<x123)*x124));

	if (t26 != -5437LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x125 = 6594894U;
	int32_t x126 = INT32_MIN;
	static int8_t x127 = -1;
	int8_t x128 = -1;
	uint32_t t27 = 1152674U;

	t27 = (x125*((x126<x127)*x128));

	if (t27 != 4288372402U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x130 = -14;
	uint32_t x131 = 2945706U;
	int16_t x132 = -10872;
	volatile uint64_t t28 = 951751LLU;

	t28 = (x129*((x130<x131)*x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x134 = -1;
	int32_t x135 = -4391899;
	volatile uint64_t t29 = 15086412676746308LLU;

	t29 = (x133*((x134<x135)*x136));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = INT8_MIN;
	static volatile int64_t t30 = -2747987772LL;

	t30 = (x137*((x138<x139)*x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t31 = -23241;

	t31 = (x141*((x142<x143)*x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -12;
	int64_t x146 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t32 = 1;

	t32 = (x145*((x146<x147)*x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = -19;
	uint16_t x152 = 228U;
	static volatile int32_t t33 = 7;

	t33 = (x149*((x150<x151)*x152));

	if (t33 != 7470876) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 6701448LLU;
	uint8_t x154 = 56U;
	int64_t x155 = 769288594587458LL;
	int16_t x156 = -1;
	uint64_t t34 = 4282227753941264LLU;

	t34 = (x153*((x154<x155)*x156));

	if (t34 != 18446744073702850168LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x158 = 6385046LLU;
	uint64_t x160 = 126848367812800LLU;
	static uint64_t t35 = 16LLU;

	t35 = (x157*((x158<x159)*x160));

	if (t35 != 17988187224066279616LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x165 = INT16_MIN;
	int16_t x166 = -15;
	int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t36 = 127149U;

	t36 = (x165*((x166<x167)*x168));

	if (t36 != 32768U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 49712572U;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = UINT8_MAX;
	volatile int8_t x172 = -1;
	volatile uint32_t t37 = 15U;

	t37 = (x169*((x170<x171)*x172));

	if (t37 != 4245254724U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	volatile uint16_t x175 = 2U;
	int64_t x176 = 63815548485LL;
	int64_t t38 = 599675863494LL;

	t38 = (x173*((x174<x175)*x176));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = -1;
	int64_t x179 = -39LL;
	static uint32_t x180 = UINT32_MAX;
	volatile uint32_t t39 = 2209U;

	t39 = (x177*((x178<x179)*x180));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MIN;
	int64_t x184 = -1733403614LL;
	int64_t t40 = 38048496410109LL;

	t40 = (x181*((x182<x183)*x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = 0U;
	uint64_t x186 = 535850286192022LLU;
	uint8_t x187 = 5U;
	static int8_t x188 = -19;
	volatile int32_t t41 = -2699;

	t41 = (x185*((x186<x187)*x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -464;
	int32_t x191 = INT32_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t42 = 244781;

	t42 = (x189*((x190<x191)*x192));

	if (t42 != -58928) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = 2;
	int8_t x195 = -1;
	int32_t t43 = -3160230;

	t43 = (x193*((x194<x195)*x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x206 = INT64_MIN;

	t44 = (x205*((x206<x207)*x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	int64_t t45 = -1071949238585334029LL;

	t45 = (x209*((x210<x211)*x212));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = 15359;
	int8_t x214 = -1;
	static int64_t x215 = -1LL;
	uint8_t x216 = 7U;
	volatile int32_t t46 = -14839;

	t46 = (x213*((x214<x215)*x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x217 = -1LL;
	int16_t x218 = -1;
	int32_t x219 = 39988931;
	int16_t x220 = INT16_MIN;

	t47 = (x217*((x218<x219)*x220));

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x222 = UINT8_MAX;
	uint16_t x223 = 9804U;

	t48 = (x221*((x222<x223)*x224));

	if (t48 != 1073676289) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 67746032449LLU;
	static uint8_t x226 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = 4;
	volatile uint64_t t49 = 5762629831103LLU;

	t49 = (x225*((x226<x227)*x228));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = 3;

	t50 = (x229*((x230<x231)*x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x233 = INT64_MIN;
	static uint8_t x234 = UINT8_MAX;
	static int32_t x235 = INT32_MIN;
	int16_t x236 = 0;
	volatile int64_t t51 = -61901379143047LL;

	t51 = (x233*((x234<x235)*x236));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	volatile int32_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int16_t x240 = -1;
	int32_t t52 = 2;

	t52 = (x237*((x238<x239)*x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = 3U;
	static volatile int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MIN;

	t53 = (x241*((x242<x243)*x244));

	if (t53 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = -2535066295LL;
	volatile int8_t x247 = INT8_MIN;
	static volatile int64_t x248 = 18LL;
	volatile int64_t t54 = -1LL;

	t54 = (x245*((x246<x247)*x248));

	if (t54 != 2286LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MIN;

	t55 = (x249*((x250<x251)*x252));

	if (t55 != -2147450880) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = 3;
	volatile int32_t x254 = INT32_MAX;
	static volatile int8_t x255 = -1;
	int32_t x256 = -1;

	t56 = (x253*((x254<x255)*x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x258 = -13;
	volatile int8_t x259 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;
	static volatile int32_t t57 = 4606;

	t57 = (x257*((x258<x259)*x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	volatile uint32_t x271 = 198969U;

	t58 = (x269*((x270<x271)*x272));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = 18U;
	static int8_t x274 = -42;
	uint32_t x275 = 8212U;
	volatile uint32_t t59 = 44428795U;

	t59 = (x273*((x274<x275)*x276));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -1;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MAX;

	t60 = (x277*((x278<x279)*x280));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x282 = UINT64_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile int64_t t61 = -78779996278302942LL;

	t61 = (x281*((x282<x283)*x284));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x287 = 29656LLU;
	static volatile int32_t t62 = 6;

	t62 = (x285*((x286<x287)*x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x289 = UINT8_MAX;
	static int32_t x291 = 2446;
	static int16_t x292 = INT16_MAX;
	int32_t t63 = 778445242;

	t63 = (x289*((x290<x291)*x292));

	if (t63 != 8355585) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	uint16_t x294 = 15880U;
	int16_t x296 = -1;
	volatile int32_t t64 = 1;

	t64 = (x293*((x294<x295)*x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x297 = 482U;
	static volatile uint32_t x298 = 19085689U;
	static volatile uint16_t x300 = 7141U;
	int32_t t65 = -82441497;

	t65 = (x297*((x298<x299)*x300));

	if (t65 != 3441962) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = 16969U;
	static int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MAX;
	volatile int8_t x304 = INT8_MIN;

	t66 = (x301*((x302<x303)*x304));

	if (t66 != -2172032) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 11U;
	volatile uint64_t x306 = 90485LLU;
	static int64_t x307 = -4594100988962646376LL;
	int16_t x308 = INT16_MIN;
	int32_t t67 = -464053010;

	t67 = (x305*((x306<x307)*x308));

	if (t67 != -360448) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MAX;
	volatile uint32_t x319 = 16U;
	uint64_t x320 = 46817941227865477LLU;

	t68 = (x317*((x318<x319)*x320));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -1;
	int8_t x322 = 8;
	int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MAX;
	static int32_t t69 = -12;

	t69 = (x321*((x322<x323)*x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = -4901;
	static int64_t x326 = INT64_MIN;
	uint64_t x327 = 6132025246865LLU;
	uint32_t x328 = UINT32_MAX;
	uint32_t t70 = 76130U;

	t70 = (x325*((x326<x327)*x328));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = -3;
	uint32_t x330 = 458U;
	int64_t x331 = INT64_MIN;
	uint16_t x332 = 27U;
	int32_t t71 = 0;

	t71 = (x329*((x330<x331)*x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x333 = 2160U;
	int32_t x335 = 33;
	int64_t x336 = -1LL;
	volatile int64_t t72 = -1074647318476LL;

	t72 = (x333*((x334<x335)*x336));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = 4569713315185119694LLU;
	static int16_t x342 = -313;
	int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t73 = 7429945047LLU;

	t73 = (x341*((x342<x343)*x344));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x350 = 9;
	int32_t x351 = INT32_MIN;
	static int32_t x352 = 851021483;
	volatile uint64_t t74 = 90732497347LLU;

	t74 = (x349*((x350<x351)*x352));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x354 = 4U;
	volatile int64_t x355 = INT64_MIN;
	int64_t x356 = INT64_MIN;

	t75 = (x353*((x354<x355)*x356));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -1775943LL;
	int32_t x358 = INT32_MAX;
	static volatile int32_t x360 = -1;

	t76 = (x357*((x358<x359)*x360));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x366 = 11U;
	volatile int64_t x367 = -22316679339LL;
	volatile int8_t x368 = INT8_MAX;
	int32_t t77 = -2748;

	t77 = (x365*((x366<x367)*x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = 589;
	uint16_t x371 = 427U;
	volatile int32_t x372 = INT32_MIN;
	int64_t t78 = 184521735LL;

	t78 = (x369*((x370<x371)*x372));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x373 = 5U;
	uint64_t x374 = 1234680694417726LLU;
	volatile int8_t x375 = INT8_MAX;
	volatile uint8_t x376 = 38U;
	static int32_t t79 = 1933753;

	t79 = (x373*((x374<x375)*x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = 4;
	int32_t x378 = INT32_MIN;
	int32_t t80 = -9414960;

	t80 = (x377*((x378<x379)*x380));

	if (t80 != 48) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = UINT32_MAX;
	volatile uint32_t x383 = 124203666U;
	int32_t x384 = -21803;
	int32_t t81 = 15718;

	t81 = (x381*((x382<x383)*x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = -1LL;
	uint64_t x386 = 60341649416978150LLU;
	int16_t x388 = INT16_MAX;
	static volatile int64_t t82 = 46500LL;

	t82 = (x385*((x386<x387)*x388));

	if (t82 != -32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MAX;
	uint32_t x391 = 12530845U;
	int32_t x392 = INT32_MIN;
	static uint32_t t83 = 60784U;

	t83 = (x389*((x390<x391)*x392));

	if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x394 = 11LLU;
	volatile int64_t x395 = INT64_MAX;
	volatile uint32_t x396 = 63245726U;
	static uint32_t t84 = 202243241U;

	t84 = (x393*((x394<x395)*x396));

	if (t84 != 4231721570U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MAX;
	uint16_t x404 = 1589U;
	int32_t t85 = 150959899;

	t85 = (x401*((x402<x403)*x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = -1;
	static int64_t x406 = -2358738LL;
	uint16_t x407 = UINT16_MAX;
	volatile int8_t x408 = INT8_MIN;
	volatile int32_t t86 = 21036205;

	t86 = (x405*((x406<x407)*x408));

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = -1LL;
	uint64_t x411 = 983751650870LLU;
	int64_t x412 = INT64_MIN;
	int64_t t87 = 1LL;

	t87 = (x409*((x410<x411)*x412));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 31;
	static uint64_t x414 = 1128551237348422220LLU;
	int32_t x415 = 37115109;

	t88 = (x413*((x414<x415)*x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x417 = INT64_MAX;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MIN;

	t89 = (x417*((x418<x419)*x420));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x421 = INT16_MAX;
	int16_t x422 = -1;
	int16_t x423 = INT16_MIN;
	int32_t x424 = 10;
	volatile int32_t t90 = -723;

	t90 = (x421*((x422<x423)*x424));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x425 = 40314U;
	int8_t x427 = INT8_MIN;
	int32_t x428 = 13;
	static uint32_t t91 = 152261451U;

	t91 = (x425*((x426<x427)*x428));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = 1;
	uint64_t x430 = 13421128LLU;
	static volatile uint32_t x431 = 4974U;
	volatile int32_t x432 = INT32_MIN;

	t92 = (x429*((x430<x431)*x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x433 = UINT8_MAX;
	int64_t x435 = -34435495LL;
	uint64_t x436 = 3LLU;
	static uint64_t t93 = 435619514189681LLU;

	t93 = (x433*((x434<x435)*x436));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = -1LL;
	uint8_t x438 = 59U;
	int32_t x439 = -30486;
	uint32_t x440 = 76U;
	volatile int64_t t94 = 0LL;

	t94 = (x437*((x438<x439)*x440));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x441 = -1LL;
	static uint64_t x442 = UINT64_MAX;
	static uint64_t x443 = UINT64_MAX;
	int64_t x444 = INT64_MAX;
	volatile int64_t t95 = -7803678319LL;

	t95 = (x441*((x442<x443)*x444));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x446 = UINT64_MAX;
	static volatile uint32_t x447 = 711743901U;
	volatile uint32_t x448 = 1U;
	uint32_t t96 = 63810499U;

	t96 = (x445*((x446<x447)*x448));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = -1;
	uint16_t x450 = UINT16_MAX;
	static uint64_t t97 = 1735269719538435LLU;

	t97 = (x449*((x450<x451)*x452));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x453 = UINT64_MAX;
	uint16_t x454 = 2643U;
	uint64_t x455 = 2283167413156371422LLU;
	static int16_t x456 = -1;
	uint64_t t98 = 933044328LLU;

	t98 = (x453*((x454<x455)*x456));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = -13;
	volatile int64_t x458 = INT64_MAX;
	volatile uint8_t x459 = 0U;
	int64_t x460 = -1LL;
	int64_t t99 = 102680942068555034LL;

	t99 = (x457*((x458<x459)*x460));

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

