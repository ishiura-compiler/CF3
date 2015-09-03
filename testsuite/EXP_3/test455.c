#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = 1;
volatile int32_t t2 = 8010240;
int32_t x19 = INT32_MAX;
static int8_t x30 = INT8_MAX;
volatile int32_t t7 = -12289887;
static int32_t x46 = INT32_MAX;
uint16_t x49 = UINT16_MAX;
int32_t x51 = INT32_MIN;
int64_t t10 = -8314411LL;
int8_t x58 = -44;
int16_t x62 = 2;
int8_t x64 = -1;
int32_t t12 = -912896994;
uint32_t x75 = 1U;
int8_t x76 = INT8_MIN;
static uint64_t x92 = 107889LLU;
uint16_t x105 = 1U;
static int64_t t21 = 511188496012485988LL;
static volatile int32_t x124 = INT32_MIN;
int8_t x131 = -1;
static int32_t x141 = -3041002;
int8_t x148 = INT8_MIN;
static uint64_t t28 = 6267692552234223351LLU;
volatile uint64_t x154 = UINT64_MAX;
static int8_t x155 = INT8_MIN;
uint64_t x157 = 3217784817878LLU;
volatile int64_t x159 = 1977LL;
uint16_t x160 = 1U;
int64_t t31 = 1224224113106002LL;
uint64_t x175 = 272400655LLU;
static volatile uint64_t t34 = 92LLU;
volatile int32_t t35 = -6;
int16_t x183 = -1;
volatile int8_t x193 = INT8_MIN;
volatile int32_t t38 = 47803;
volatile int32_t t40 = -707581735;
static volatile int8_t x211 = INT8_MIN;
uint32_t t42 = 77U;
volatile int32_t x218 = INT32_MIN;
uint32_t x221 = UINT32_MAX;
int8_t x222 = INT8_MIN;
uint64_t x224 = 1359065434199970LLU;
int8_t x233 = INT8_MAX;
uint64_t x236 = 18246513176198LLU;
int32_t t48 = -61136314;
int16_t x251 = 218;
int8_t x262 = -53;
int64_t t52 = 15672876618LL;
uint32_t t55 = 670172189U;
static volatile uint8_t x277 = UINT8_MAX;
int16_t x280 = INT16_MIN;
int32_t t56 = -20796187;
static int16_t x285 = INT16_MIN;
int32_t x307 = INT32_MIN;
int32_t x310 = INT32_MAX;
int8_t x320 = -1;
volatile int32_t t63 = -123736849;
uint16_t x333 = UINT16_MAX;
int64_t x338 = 13LL;
static int8_t x349 = INT8_MAX;
uint32_t x352 = 6U;
uint32_t t67 = 147123679U;
int32_t x364 = -2;
int32_t t71 = -8066151;
uint8_t x379 = UINT8_MAX;
volatile uint64_t x384 = UINT64_MAX;
static int64_t x394 = INT64_MAX;
static int64_t x414 = INT64_MIN;
volatile int32_t x418 = INT32_MIN;
int8_t x419 = -20;
int32_t x423 = INT32_MAX;
int64_t x424 = -1LL;
int64_t t79 = 72841717LL;
static volatile int32_t t80 = -1;
int64_t x433 = -15819185466LL;
int16_t x441 = INT16_MIN;
int8_t x442 = INT8_MAX;
int8_t x446 = -1;
static int64_t x448 = -1LL;
int64_t x460 = 0LL;
static volatile int32_t x461 = INT32_MIN;
uint8_t x462 = 117U;
volatile int64_t x467 = -1719LL;
static volatile int8_t x468 = -1;
uint32_t x473 = 9980U;
volatile int32_t t90 = 68549;
int64_t x477 = INT64_MIN;
volatile int64_t x478 = INT64_MAX;
volatile uint8_t x479 = UINT8_MAX;
volatile int32_t t92 = -3;
int16_t x491 = INT16_MIN;
int32_t t94 = -719191;
volatile uint32_t t96 = 281836U;
uint64_t x503 = 3632347809307LLU;
uint16_t x506 = 1500U;
static uint16_t x508 = UINT16_MAX;
int64_t x510 = INT64_MAX;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 953U;

	t0 = ((x1<x2)^(x3*x4));

	if (t0 != 32768U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 252U;
	int8_t x10 = INT8_MAX;
	static volatile uint16_t x11 = 7025U;
	uint64_t x12 = 520084327639350690LLU;
	uint64_t t1 = 0LLU;

	t1 = ((x9<x10)^(x11*x12));

	if (t1 != 1137075071947377282LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = 0;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 713U;

	t2 = ((x13<x14)^(x15*x16));

	if (t2 != 712) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	static int16_t x18 = 3742;
	static uint64_t x20 = 3732191667113LLU;
	uint64_t t3 = 12947LLU;

	t3 = ((x17<x18)^(x19*x20));

	if (t3 != 8933644604889799766LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	static int64_t x26 = -1LL;
	static uint16_t x27 = UINT16_MAX;
	static int32_t x28 = 4176;
	volatile int32_t t4 = 2618;

	t4 = ((x25<x26)^(x27*x28));

	if (t4 != 273674161) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = -6;
	uint64_t x31 = 44LLU;
	static volatile int16_t x32 = -5;
	uint64_t t5 = 698124LLU;

	t5 = ((x29<x30)^(x31*x32));

	if (t5 != 18446744073709551397LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 26U;
	volatile uint64_t x34 = UINT64_MAX;
	int64_t x35 = -1LL;
	int64_t x36 = 100670LL;
	static volatile int64_t t6 = -40834788238230LL;

	t6 = ((x33<x34)^(x35*x36));

	if (t6 != -100669LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x41 = 21U;
	int16_t x42 = INT16_MAX;
	int8_t x43 = -27;
	static uint16_t x44 = UINT16_MAX;

	t7 = ((x41<x42)^(x43*x44));

	if (t7 != -1769446) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MIN;
	static int32_t x47 = -1;
	uint32_t x48 = 0U;
	volatile uint32_t t8 = 426022U;

	t8 = ((x45<x46)^(x47*x48));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x50 = UINT32_MAX;
	uint8_t x52 = 1U;
	int32_t t9 = 4736;

	t9 = ((x49<x50)^(x51*x52));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = -1;
	int8_t x55 = -1;
	static int64_t x56 = -1LL;

	t10 = ((x53<x54)^(x55*x56));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = -9;
	volatile int16_t x59 = INT16_MIN;
	uint8_t x60 = 1U;
	volatile int32_t t11 = -184873;

	t11 = ((x57<x58)^(x59*x60));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x61 = -4485746307352331LL;
	uint8_t x63 = 27U;

	t12 = ((x61<x62)^(x63*x64));

	if (t12 != -28) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	static int32_t x70 = INT32_MIN;
	int16_t x71 = 0;
	static volatile int8_t x72 = -1;
	volatile int32_t t13 = 468937;

	t13 = ((x69<x70)^(x71*x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -1399377562LL;
	static uint8_t x74 = UINT8_MAX;
	volatile uint32_t t14 = 94561U;

	t14 = ((x73<x74)^(x75*x76));

	if (t14 != 4294967169U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x77 = 1U;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MAX;
	volatile int64_t x80 = 7LL;
	volatile int64_t t15 = 526475125LL;

	t15 = ((x77<x78)^(x79*x80));

	if (t15 != 15032385529LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 914LLU;
	int64_t x82 = 1984LL;
	int16_t x83 = -6034;
	static int16_t x84 = -1;
	volatile int32_t t16 = 3521496;

	t16 = ((x81<x82)^(x83*x84));

	if (t16 != 6035) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = 186;
	int16_t x90 = -1;
	uint16_t x91 = 467U;
	uint64_t t17 = 1618LLU;

	t17 = ((x89<x90)^(x91*x92));

	if (t17 != 50384163LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	int16_t x94 = 56;
	static volatile int64_t x95 = INT64_MAX;
	int16_t x96 = -1;
	int64_t t18 = INT64_MIN;

	t18 = ((x93<x94)^(x95*x96));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x97 = INT32_MAX;
	static uint8_t x98 = 26U;
	static int16_t x99 = INT16_MAX;
	static uint8_t x100 = 59U;
	volatile int32_t t19 = -285820;

	t19 = ((x97<x98)^(x99*x100));

	if (t19 != 1933253) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = -1;
	uint8_t x103 = 0U;
	volatile int16_t x104 = -1;
	volatile int32_t t20 = -475832;

	t20 = ((x101<x102)^(x103*x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = 7179LL;

	t21 = ((x105<x106)^(x107*x108));

	if (t21 != 30833570210805LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 759390385U;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	uint64_t x112 = 65169224763079LLU;
	volatile uint64_t t22 = 1052LLU;

	t22 = ((x109<x110)^(x111*x112));

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = 1;
	volatile uint16_t x119 = 8106U;
	int8_t x120 = INT8_MAX;
	static volatile int32_t t23 = -231313549;

	t23 = ((x117<x118)^(x119*x120));

	if (t23 != 1029463) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MAX;
	uint8_t x122 = 126U;
	int16_t x123 = 0;
	static volatile int32_t t24 = -1406973;

	t24 = ((x121<x122)^(x123*x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = 13346767850043153LLU;
	uint32_t x126 = 682181025U;
	volatile int64_t x127 = -64900694580LL;
	static uint8_t x128 = 77U;
	volatile int64_t t25 = 2LL;

	t25 = ((x125<x126)^(x127*x128));

	if (t25 != -4997353482660LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x129 = -1;
	volatile int16_t x130 = INT16_MAX;
	uint8_t x132 = 35U;
	int32_t t26 = 61842;

	t26 = ((x129<x130)^(x131*x132));

	if (t26 != -36) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x142 = INT64_MAX;
	uint8_t x143 = 74U;
	volatile uint32_t x144 = UINT32_MAX;
	volatile uint32_t t27 = 81162249U;

	t27 = ((x141<x142)^(x143*x144));

	if (t27 != 4294967223U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	volatile int8_t x146 = -7;
	uint64_t x147 = UINT64_MAX;

	t28 = ((x145<x146)^(x147*x148));

	if (t28 != 129LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x149 = -8;
	uint64_t x150 = 509035167254016471LLU;
	uint8_t x151 = 2U;
	int8_t x152 = -34;
	static volatile int32_t t29 = 12;

	t29 = ((x149<x150)^(x151*x152));

	if (t29 != -68) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = -8232;
	int16_t x156 = INT16_MIN;
	volatile int32_t t30 = 280670;

	t30 = ((x153<x154)^(x155*x156));

	if (t30 != 4194305) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x158 = UINT64_MAX;

	t31 = ((x157<x158)^(x159*x160));

	if (t31 != 1976LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x161 = INT64_MAX;
	static int16_t x162 = INT16_MIN;
	uint32_t x163 = 117606041U;
	int32_t x164 = INT32_MIN;
	volatile uint32_t t32 = 3231619U;

	t32 = ((x161<x162)^(x163*x164));

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int8_t x170 = 3;
	static volatile uint16_t x171 = 1U;
	int8_t x172 = -1;
	int32_t t33 = 220897;

	t33 = ((x169<x170)^(x171*x172));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x173 = 16U;
	int16_t x174 = 28;
	volatile int16_t x176 = INT16_MIN;

	t34 = ((x173<x174)^(x175*x176));

	if (t34 != 18446735147684888577LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x177 = -2514245012LL;
	int64_t x178 = 46483293455466LL;
	static volatile int8_t x179 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;

	t35 = ((x177<x178)^(x179*x180));

	if (t35 != -32639) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = INT64_MIN;
	volatile uint8_t x182 = 0U;
	volatile int32_t x184 = 276;
	volatile int32_t t36 = -230;

	t36 = ((x181<x182)^(x183*x184));

	if (t36 != -275) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x186 = 5U;
	uint8_t x187 = 16U;
	int32_t x188 = -3;
	int32_t t37 = -43445;

	t37 = ((x185<x186)^(x187*x188));

	if (t37 != -48) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;
	uint8_t x196 = 7U;

	t38 = ((x193<x194)^(x195*x196));

	if (t38 != 888) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = 50;
	volatile int16_t x203 = -1;
	static volatile uint64_t x204 = UINT64_MAX;
	volatile uint64_t t39 = 1548666999625135317LLU;

	t39 = ((x201<x202)^(x203*x204));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	int8_t x208 = 1;

	t40 = ((x205<x206)^(x207*x208));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MIN;
	volatile uint8_t x210 = 2U;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t41 = 29956U;

	t41 = ((x209<x210)^(x211*x212));

	if (t41 != 129U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = 0U;
	uint32_t x214 = 14610576U;
	static volatile int8_t x215 = INT8_MAX;
	uint32_t x216 = 90417633U;

	t42 = ((x213<x214)^(x215*x216));

	if (t42 != 2893104798U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 1U;
	int8_t x219 = 4;
	uint16_t x220 = UINT16_MAX;
	int32_t t43 = 146275684;

	t43 = ((x217<x218)^(x219*x220));

	if (t43 != 262140) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x223 = 30485657;
	volatile uint64_t t44 = 33075401LLU;

	t44 = ((x221<x222)^(x223*x224));

	if (t44 != 615478024701900754LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = -1;
	static int32_t x226 = INT32_MIN;
	int64_t x227 = -1LL;
	static int16_t x228 = -1858;
	static int64_t t45 = -138557651260LL;

	t45 = ((x225<x226)^(x227*x228));

	if (t45 != 1858LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = INT8_MIN;
	static int32_t x230 = 16581537;
	static uint16_t x231 = 2153U;
	uint64_t x232 = UINT64_MAX;
	uint64_t t46 = 14486117LLU;

	t46 = ((x229<x230)^(x231*x232));

	if (t46 != 18446744073709549462LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x234 = 0;
	static int8_t x235 = -1;
	static volatile uint64_t t47 = 59LLU;

	t47 = ((x233<x234)^(x235*x236));

	if (t47 != 18446725827196375418LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = 2;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = 1;
	uint16_t x240 = 17U;

	t48 = ((x237<x238)^(x239*x240));

	if (t48 != 16) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x245 = -7415;
	volatile uint64_t x246 = 27636647LLU;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t49 = 1039385LLU;

	t49 = ((x245<x246)^(x247*x248));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x249 = 313093906066LL;
	uint64_t x250 = UINT64_MAX;
	static int16_t x252 = -37;
	int32_t t50 = 122987;

	t50 = ((x249<x250)^(x251*x252));

	if (t50 != -8065) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x257 = UINT8_MAX;
	int8_t x258 = -46;
	uint64_t x259 = 116668638006LLU;
	int8_t x260 = 13;
	volatile uint64_t t51 = 348LLU;

	t51 = ((x257<x258)^(x259*x260));

	if (t51 != 1516692294078LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x261 = UINT32_MAX;
	uint16_t x263 = UINT16_MAX;
	static int64_t x264 = -1LL;

	t52 = ((x261<x262)^(x263*x264));

	if (t52 != -65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = 1;
	int16_t x266 = -83;
	int8_t x267 = -1;
	int8_t x268 = INT8_MAX;
	volatile int32_t t53 = -521717104;

	t53 = ((x265<x266)^(x267*x268));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x269 = UINT8_MAX;
	volatile int8_t x270 = INT8_MIN;
	uint16_t x271 = 0U;
	volatile int64_t x272 = -1079869408067752LL;
	volatile int64_t t54 = -1121LL;

	t54 = ((x269<x270)^(x271*x272));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x273 = -1;
	int32_t x274 = -228482;
	uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 702U;

	t55 = ((x273<x274)^(x275*x276));

	if (t55 != 4294966594U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x278 = -1;
	uint16_t x279 = UINT16_MAX;

	t56 = ((x277<x278)^(x279*x280));

	if (t56 != -2147450880) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = -930;
	uint32_t x282 = UINT32_MAX;
	uint8_t x283 = 25U;
	uint16_t x284 = 31U;
	int32_t t57 = -9900410;

	t57 = ((x281<x282)^(x283*x284));

	if (t57 != 774) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	uint64_t x288 = 89671343LLU;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x285<x286)^(x287*x288));

	if (t58 != 385135485483727185LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = INT16_MAX;
	volatile uint16_t x290 = 28031U;
	volatile uint64_t x291 = 39261674LLU;
	uint64_t x292 = 3522006LLU;
	static uint64_t t59 = 3037212493525341180LLU;

	t59 = ((x289<x290)^(x291*x292));

	if (t59 != 138279851398044LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x305 = -1;
	int16_t x306 = -1;
	uint64_t x308 = 175982LLU;
	volatile uint64_t t60 = 245781073986LLU;

	t60 = ((x305<x306)^(x307*x308));

	if (t60 != 18446366155242209280LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x309 = UINT8_MAX;
	static uint16_t x311 = 117U;
	static volatile int16_t x312 = -1;
	int32_t t61 = -197013862;

	t61 = ((x309<x310)^(x311*x312));

	if (t61 != -118) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x317 = -1LL;
	static int32_t x318 = INT32_MIN;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t t62 = 4616;

	t62 = ((x317<x318)^(x319*x320));

	if (t62 != -255) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x325 = 8;
	int64_t x326 = 9855LL;
	int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;

	t63 = ((x325<x326)^(x327*x328));

	if (t63 != -4161535) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x329 = 239U;
	int16_t x330 = INT16_MAX;
	int64_t x331 = -1LL;
	static int8_t x332 = 3;
	int64_t t64 = 1162258995LL;

	t64 = ((x329<x330)^(x331*x332));

	if (t64 != -4LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x334 = -1;
	int8_t x335 = -1;
	static uint8_t x336 = UINT8_MAX;
	int32_t t65 = 1781;

	t65 = ((x333<x334)^(x335*x336));

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x337 = -1;
	int16_t x339 = -3901;
	volatile int8_t x340 = -1;
	volatile int32_t t66 = -1;

	t66 = ((x337<x338)^(x339*x340));

	if (t66 != 3900) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x350 = INT8_MAX;
	uint8_t x351 = 1U;

	t67 = ((x349<x350)^(x351*x352));

	if (t67 != 6U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x353 = 1266;
	uint16_t x354 = 10115U;
	uint32_t x355 = 1657670966U;
	static uint32_t x356 = UINT32_MAX;
	volatile uint32_t t68 = 979013743U;

	t68 = ((x353<x354)^(x355*x356));

	if (t68 != 2637296331U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x357 = -6572505;
	int32_t x358 = -2;
	static uint16_t x359 = 0U;
	static int16_t x360 = 3;
	static int32_t t69 = 139769638;

	t69 = ((x357<x358)^(x359*x360));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x361 = -1;
	int64_t x362 = INT64_MAX;
	static int8_t x363 = INT8_MAX;
	int32_t t70 = 178;

	t70 = ((x361<x362)^(x363*x364));

	if (t70 != -253) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x369 = 182387;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	volatile int8_t x372 = INT8_MIN;

	t71 = ((x369<x370)^(x371*x372));

	if (t71 != 4194304) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x377 = 203749820;
	static int64_t x378 = -1LL;
	volatile uint32_t x380 = 859U;
	volatile uint32_t t72 = 1477143182U;

	t72 = ((x377<x378)^(x379*x380));

	if (t72 != 219045U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x381 = -98;
	int16_t x382 = 35;
	static int64_t x383 = -1009674LL;
	uint64_t t73 = 195726564450549227LLU;

	t73 = ((x381<x382)^(x383*x384));

	if (t73 != 1009675LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x393 = INT16_MAX;
	static int16_t x395 = INT16_MIN;
	uint16_t x396 = 6350U;
	int32_t t74 = 72467586;

	t74 = ((x393<x394)^(x395*x396));

	if (t74 != -208076799) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x401 = -1;
	volatile int32_t x402 = -94;
	volatile int8_t x403 = 1;
	uint16_t x404 = UINT16_MAX;
	int32_t t75 = 2663635;

	t75 = ((x401<x402)^(x403*x404));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x409 = -1;
	uint32_t x410 = 251396U;
	static uint16_t x411 = UINT16_MAX;
	uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t76 = 3943406276164629LLU;

	t76 = ((x409<x410)^(x411*x412));

	if (t76 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x413 = -1LL;
	volatile int16_t x415 = -1;
	static uint64_t x416 = 169927208286351LLU;
	volatile uint64_t t77 = 81LLU;

	t77 = ((x413<x414)^(x415*x416));

	if (t77 != 18446574146501265265LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x420 = INT16_MIN;
	static int32_t t78 = 1036082297;

	t78 = ((x417<x418)^(x419*x420));

	if (t78 != 655360) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x421 = INT32_MAX;
	int32_t x422 = INT32_MIN;

	t79 = ((x421<x422)^(x423*x424));

	if (t79 != -2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int64_t x426 = INT64_MAX;
	volatile int16_t x427 = -1;
	int32_t x428 = -1;

	t80 = ((x425<x426)^(x427*x428));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x434 = INT32_MIN;
	volatile uint8_t x435 = 6U;
	volatile int64_t x436 = 178LL;
	int64_t t81 = 25827680173LL;

	t81 = ((x433<x434)^(x435*x436));

	if (t81 != 1069LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x437 = INT16_MAX;
	uint32_t x438 = UINT32_MAX;
	volatile int64_t x439 = -1LL;
	int16_t x440 = -1;
	static int64_t t82 = -244546796116LL;

	t82 = ((x437<x438)^(x439*x440));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x443 = INT64_MIN;
	volatile uint64_t x444 = 2249LLU;
	volatile uint64_t t83 = 2725LLU;

	t83 = ((x441<x442)^(x443*x444));

	if (t83 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x445 = -1;
	int16_t x447 = -1;
	int64_t t84 = 114LL;

	t84 = ((x445<x446)^(x447*x448));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x453 = -1;
	int64_t x454 = INT64_MIN;
	int8_t x455 = -1;
	volatile int16_t x456 = -1;
	int32_t t85 = 2397;

	t85 = ((x453<x454)^(x455*x456));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = INT64_MIN;
	uint64_t x459 = 758LLU;
	uint64_t t86 = 408LLU;

	t86 = ((x457<x458)^(x459*x460));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x463 = -1;
	int64_t x464 = -181557696621054324LL;
	int64_t t87 = 1745515LL;

	t87 = ((x461<x462)^(x463*x464));

	if (t87 != 181557696621054325LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x465 = INT16_MAX;
	static uint32_t x466 = UINT32_MAX;
	volatile int64_t t88 = -3LL;

	t88 = ((x465<x466)^(x467*x468));

	if (t88 != 1718LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x469 = UINT64_MAX;
	static int8_t x470 = 0;
	int8_t x471 = INT8_MIN;
	int32_t x472 = 5319;
	volatile int32_t t89 = 3338;

	t89 = ((x469<x470)^(x471*x472));

	if (t89 != -680832) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x474 = 4;
	int8_t x475 = 21;
	int32_t x476 = -1;

	t90 = ((x473<x474)^(x475*x476));

	if (t90 != -21) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x480 = -1LL;
	static volatile int64_t t91 = -541752590939947871LL;

	t91 = ((x477<x478)^(x479*x480));

	if (t91 != -256LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x481 = -1;
	uint64_t x482 = 62154924LLU;
	uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MIN;

	t92 = ((x481<x482)^(x483*x484));

	if (t92 != -32640) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x485 = INT32_MIN;
	volatile int16_t x486 = 14;
	int64_t x487 = -1LL;
	uint8_t x488 = UINT8_MAX;
	volatile int64_t t93 = 3LL;

	t93 = ((x485<x486)^(x487*x488));

	if (t93 != -256LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x489 = 1;
	int32_t x490 = INT32_MAX;
	uint16_t x492 = 0U;

	t94 = ((x489<x490)^(x491*x492));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x493 = 22U;
	static uint32_t x494 = 1972759U;
	uint16_t x495 = 3U;
	int16_t x496 = -293;
	static int32_t t95 = -158242;

	t95 = ((x493<x494)^(x495*x496));

	if (t95 != -880) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x497 = UINT64_MAX;
	volatile int8_t x498 = -1;
	uint16_t x499 = UINT16_MAX;
	uint32_t x500 = 3U;

	t96 = ((x497<x498)^(x499*x500));

	if (t96 != 196605U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x501 = INT16_MAX;
	uint16_t x502 = UINT16_MAX;
	uint32_t x504 = 6U;
	uint64_t t97 = 8719776433LLU;

	t97 = ((x501<x502)^(x503*x504));

	if (t97 != 21794086855843LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x505 = INT64_MAX;
	uint64_t x507 = 3010629478LLU;
	uint64_t t98 = 4185728052462LLU;

	t98 = ((x505<x506)^(x507*x508));

	if (t98 != 197301602840730LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x509 = INT8_MIN;
	static uint32_t x511 = 563042664U;
	uint8_t x512 = UINT8_MAX;
	static uint32_t t99 = 2080U;

	t99 = ((x509<x510)^(x511*x512));

	if (t99 != 1841958553U) { NG(); } else { ; }
	
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

