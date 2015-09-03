#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
uint64_t x7 = 203870318056413362LLU;
int8_t x10 = -1;
int64_t x23 = -1LL;
volatile int8_t x25 = INT8_MIN;
static uint64_t x32 = 3918392027420825LLU;
int64_t x43 = INT64_MIN;
static int32_t t10 = -1;
int64_t x58 = INT64_MIN;
volatile int64_t x60 = INT64_MIN;
uint32_t x67 = UINT32_MAX;
uint16_t x68 = 106U;
uint32_t t13 = 37174U;
int32_t x73 = -92;
volatile uint64_t x75 = 1852LLU;
static int8_t x77 = INT8_MIN;
static uint16_t x84 = 2523U;
volatile uint32_t t16 = 482146181U;
static int64_t x86 = -1LL;
volatile int64_t t17 = 33136043609LL;
int64_t t18 = -88465361941812LL;
int8_t x96 = 0;
static volatile int32_t t19 = -1;
int32_t t20 = 0;
uint64_t x120 = 93899073LLU;
uint8_t x128 = 0U;
volatile uint64_t t26 = 6263648865LLU;
int64_t x150 = -1LL;
int32_t t28 = 222263;
static int32_t x159 = INT32_MIN;
int16_t x160 = -8;
static volatile int32_t x161 = INT32_MIN;
int64_t x162 = INT64_MIN;
volatile int64_t t30 = -639776451LL;
static uint8_t x170 = UINT8_MAX;
static volatile int32_t t31 = 38095615;
int32_t x178 = INT32_MIN;
volatile uint16_t x179 = UINT16_MAX;
int8_t x181 = 1;
int8_t x194 = INT8_MIN;
static volatile uint8_t x196 = UINT8_MAX;
static volatile int64_t x204 = INT64_MIN;
static uint64_t x219 = 644819LLU;
int32_t x223 = -1;
int8_t x232 = 4;
int64_t x234 = INT64_MIN;
static int8_t x242 = 2;
volatile uint8_t x245 = UINT8_MAX;
int32_t t47 = 24532;
uint16_t x249 = 1633U;
static volatile int8_t x251 = 1;
volatile uint64_t x255 = UINT64_MAX;
uint32_t x271 = UINT32_MAX;
volatile int32_t x275 = INT32_MIN;
static volatile int64_t x276 = -1LL;
int64_t x283 = 3515411377LL;
volatile uint32_t x284 = 1U;
volatile uint64_t t57 = 282428664242LLU;
uint16_t x301 = UINT16_MAX;
uint8_t x306 = 1U;
volatile int64_t x308 = INT64_MIN;
int8_t x314 = 6;
int64_t x336 = -1LL;
uint32_t x342 = UINT32_MAX;
static int32_t x345 = -1;
uint16_t x346 = UINT16_MAX;
int8_t x348 = 3;
volatile uint8_t x352 = UINT8_MAX;
int64_t x353 = -21610996884030LL;
volatile int64_t t71 = -15376LL;
uint32_t x374 = 0U;
volatile uint8_t x381 = UINT8_MAX;
uint8_t x384 = 3U;
int8_t x385 = INT8_MAX;
static uint8_t x386 = 7U;
volatile uint8_t x388 = 2U;
int64_t x389 = -1LL;
static uint8_t x391 = 20U;
uint64_t x400 = UINT64_MAX;
volatile int64_t t79 = -7539473565551018LL;
int8_t x402 = -1;
uint8_t x403 = UINT8_MAX;
int64_t x405 = 24197792LL;
uint64_t x410 = 32277367954LLU;
uint64_t x417 = UINT64_MAX;
volatile uint64_t t83 = 14753157LLU;
int32_t x428 = INT32_MIN;
int64_t x429 = -63461LL;
static int64_t x430 = -1914562189LL;
volatile int64_t t87 = 5260097555456LL;
int64_t x438 = INT64_MIN;
int8_t x442 = INT8_MAX;
int8_t x443 = 2;
volatile int32_t x451 = -1;
int64_t x452 = -1LL;
volatile uint8_t x459 = 80U;
uint64_t x465 = 2680113754346572551LLU;
volatile uint64_t x467 = 35LLU;
int16_t x470 = INT16_MIN;
volatile int16_t x471 = INT16_MIN;
volatile uint32_t x477 = 1129U;
uint64_t x479 = UINT64_MAX;
int16_t x484 = -1;


void f0(void) {
	int32_t x2 = -1;
	static uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 26U;
	volatile int32_t t0 = 102;

	t0 = ((x1-x2)^(x3<x4));

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 126U;
	int64_t x6 = -18741LL;
	uint32_t x8 = 16923U;
	static volatile int64_t t1 = -2801745LL;

	t1 = ((x5-x6)^(x7<x8));

	if (t1 != 18867LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint32_t x11 = 1164931U;
	volatile int16_t x12 = 2;
	static int32_t t2 = -1;

	t2 = ((x9-x10)^(x11<x12));

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	int8_t x22 = -8;
	static int16_t x24 = -1;
	int32_t t3 = 3;

	t3 = ((x21-x22)^(x23<x24));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = -144974;
	static uint8_t x27 = 0U;
	uint32_t x28 = 60110U;
	int32_t t4 = -230;

	t4 = ((x25-x26)^(x27<x28));

	if (t4 != 144847) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MIN;
	int16_t x30 = -215;
	int32_t x31 = -1;
	volatile int32_t t5 = 264;

	t5 = ((x29-x30)^(x31<x32));

	if (t5 != -2147483433) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 89279;
	int8_t x34 = INT8_MAX;
	int8_t x35 = -54;
	int32_t x36 = INT32_MAX;
	static int32_t t6 = 100;

	t6 = ((x33-x34)^(x35<x36));

	if (t6 != 89153) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x42 = 1430147223U;
	int8_t x44 = 1;
	volatile uint32_t t7 = 422472160U;

	t7 = ((x41-x42)^(x43<x44));

	if (t7 != 717336424U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = -16287;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 2U;
	volatile int32_t t8 = 144357620;

	t8 = ((x45-x46)^(x47<x48));

	if (t8 != 16481) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x49 = -1;
	static int16_t x50 = -1;
	volatile uint64_t x51 = 1804336LLU;
	uint8_t x52 = 16U;
	volatile int32_t t9 = -72;

	t9 = ((x49-x50)^(x51<x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x53 = UINT16_MAX;
	static int32_t x54 = INT32_MAX;
	static uint8_t x55 = 35U;
	int8_t x56 = -56;

	t10 = ((x53-x54)^(x55<x56));

	if (t10 != -2147418112) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -1;
	int32_t x59 = -1;
	int64_t t11 = INT64_MAX;

	t11 = ((x57-x58)^(x59<x60));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 4U;
	static uint32_t x66 = UINT32_MAX;
	volatile uint32_t t12 = 30799U;

	t12 = ((x65-x66)^(x67<x68));

	if (t12 != 5U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 13263U;
	uint8_t x70 = 2U;
	static volatile int8_t x71 = -1;
	static int16_t x72 = -1;

	t13 = ((x69-x70)^(x71<x72));

	if (t13 != 13261U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	static int32_t t14 = 5;

	t14 = ((x73-x74)^(x75<x76));

	if (t14 != 2147483557) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = UINT32_MAX;
	static int64_t x80 = -4221291LL;
	static int32_t t15 = 198173;

	t15 = ((x77-x78)^(x79<x80));

	if (t15 != -383) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x81 = 19578U;
	int8_t x82 = 0;
	static int16_t x83 = -81;

	t16 = ((x81-x82)^(x83<x84));

	if (t16 != 19579U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	static volatile int16_t x88 = -1;

	t17 = ((x85-x86)^(x87<x88));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 703875U;
	volatile int64_t x90 = -71120472473608LL;
	int64_t x91 = -1LL;
	int32_t x92 = 11109984;

	t18 = ((x89-x90)^(x91<x92));

	if (t18 != 71120473177482LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = -1;
	volatile int32_t x94 = 99;
	uint64_t x95 = 200LLU;

	t19 = ((x93-x94)^(x95<x96));

	if (t19 != -100) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	uint8_t x98 = 20U;
	int32_t x99 = INT32_MAX;
	int8_t x100 = 3;

	t20 = ((x97-x98)^(x99<x100));

	if (t20 != 65515) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	int64_t x102 = INT64_MAX;
	uint8_t x103 = 89U;
	int32_t x104 = -59828248;
	static int64_t t21 = INT64_MIN;

	t21 = ((x101-x102)^(x103<x104));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = -42630528831865LL;
	volatile uint32_t x106 = UINT32_MAX;
	uint8_t x107 = 15U;
	volatile int32_t x108 = 23561662;
	static int64_t t22 = -91261717562054842LL;

	t22 = ((x105-x106)^(x107<x108));

	if (t22 != -42634823799159LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MAX;
	uint64_t x118 = 14585254896053LLU;
	static int8_t x119 = INT8_MIN;
	static volatile uint64_t t23 = 72811607444LLU;

	t23 = ((x117-x118)^(x119<x120));

	if (t23 != 18446729488454655690LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -2;
	volatile uint64_t x126 = 7LLU;
	int32_t x127 = -1;
	volatile uint64_t t24 = 13011LLU;

	t24 = ((x125-x126)^(x127<x128));

	if (t24 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 0U;
	volatile uint32_t x142 = 43U;
	uint8_t x143 = UINT8_MAX;
	static uint16_t x144 = 1527U;
	uint32_t t25 = 79901909U;

	t25 = ((x141-x142)^(x143<x144));

	if (t25 != 4294967252U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x145 = 2529867U;
	uint64_t x146 = 203930247374402LLU;
	int32_t x147 = -1;
	int32_t x148 = 8;

	t26 = ((x145-x146)^(x147<x148));

	if (t26 != 18446540143464707080LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = -1;
	uint64_t x151 = UINT64_MAX;
	volatile int32_t x152 = -981966;
	volatile int64_t t27 = -4LL;

	t27 = ((x149-x150)^(x151<x152));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -37598;
	int32_t x154 = INT32_MIN;
	volatile int16_t x155 = -20;
	volatile int64_t x156 = INT64_MAX;

	t28 = ((x153-x154)^(x155<x156));

	if (t28 != 2147446051) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x157 = 97U;
	int16_t x158 = INT16_MIN;
	volatile int32_t t29 = -7;

	t29 = ((x157-x158)^(x159<x160));

	if (t29 != 32864) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x163 = 4U;
	int8_t x164 = INT8_MIN;

	t30 = ((x161-x162)^(x163<x164));

	if (t30 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x169 = UINT8_MAX;
	uint16_t x171 = UINT16_MAX;
	static volatile uint64_t x172 = 7951455768494LLU;

	t31 = ((x169-x170)^(x171<x172));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x177 = INT16_MIN;
	static uint8_t x180 = UINT8_MAX;
	volatile int32_t t32 = -925031093;

	t32 = ((x177-x178)^(x179<x180));

	if (t32 != 2147450880) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x182 = -3148500;
	int16_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	int32_t t33 = -2724;

	t33 = ((x181-x182)^(x183<x184));

	if (t33 != 3148501) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 192194376U;
	uint16_t x186 = 4043U;
	static uint16_t x187 = 1U;
	int64_t x188 = INT64_MIN;
	volatile uint32_t t34 = 0U;

	t34 = ((x185-x186)^(x187<x188));

	if (t34 != 192190333U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = 111842457;
	static int32_t x195 = INT32_MIN;
	volatile int32_t t35 = 16111465;

	t35 = ((x193-x194)^(x195<x196));

	if (t35 != 111842584) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x197 = UINT16_MAX;
	int8_t x198 = -1;
	int64_t x199 = -493081162LL;
	static int16_t x200 = INT16_MIN;
	int32_t t36 = 932179;

	t36 = ((x197-x198)^(x199<x200));

	if (t36 != 65537) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = -136;
	int32_t x202 = 68381669;
	int32_t x203 = 3846;
	volatile int32_t t37 = 264335;

	t37 = ((x201-x202)^(x203<x204));

	if (t37 != -68381805) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 1841301201408589701LLU;
	uint16_t x206 = 30U;
	uint32_t x207 = 2U;
	uint32_t x208 = UINT32_MAX;
	volatile uint64_t t38 = 651077LLU;

	t38 = ((x205-x206)^(x207<x208));

	if (t38 != 1841301201408589670LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = 60;
	int16_t x210 = 15;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t39 = -961774762;

	t39 = ((x209-x210)^(x211<x212));

	if (t39 != 44) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x213 = 73U;
	uint8_t x214 = 108U;
	static int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t40 = 3;

	t40 = ((x213-x214)^(x215<x216));

	if (t40 != -36) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x217 = -1;
	static int16_t x218 = INT16_MIN;
	uint16_t x220 = 2092U;
	int32_t t41 = 637068;

	t41 = ((x217-x218)^(x219<x220));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MAX;
	uint16_t x222 = 6932U;
	uint16_t x224 = UINT16_MAX;
	int32_t t42 = -3798089;

	t42 = ((x221-x222)^(x223<x224));

	if (t42 != 25834) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x225 = 2U;
	int32_t x226 = INT32_MIN;
	static uint8_t x227 = 0U;
	static uint16_t x228 = UINT16_MAX;
	volatile uint32_t t43 = 3594U;

	t43 = ((x225-x226)^(x227<x228));

	if (t43 != 2147483651U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x229 = 8;
	uint64_t x230 = 16059827331805LLU;
	volatile uint64_t x231 = UINT64_MAX;
	volatile uint64_t t44 = 17367271LLU;

	t44 = ((x229-x230)^(x231<x232));

	if (t44 != 18446728013882219819LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = INT16_MIN;
	uint8_t x235 = 0U;
	int32_t x236 = 569499;
	int64_t t45 = -3997492171774406LL;

	t45 = ((x233-x234)^(x235<x236));

	if (t45 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = INT64_MAX;
	static volatile int64_t x243 = 191722LL;
	int8_t x244 = INT8_MIN;
	volatile int64_t t46 = -119075838223015LL;

	t46 = ((x241-x242)^(x243<x244));

	if (t46 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	static volatile int32_t x248 = -1;

	t47 = ((x245-x246)^(x247<x248));

	if (t47 != 256) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x250 = 16U;
	uint64_t x252 = 473228909LLU;
	volatile int32_t t48 = -213;

	t48 = ((x249-x250)^(x251<x252));

	if (t48 != 1616) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = INT16_MAX;
	uint32_t x254 = UINT32_MAX;
	int16_t x256 = INT16_MAX;
	static volatile uint32_t t49 = 150257857U;

	t49 = ((x253-x254)^(x255<x256));

	if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	int64_t x260 = INT64_MAX;
	volatile int32_t t50 = 55208116;

	t50 = ((x257-x258)^(x259<x260));

	if (t50 != 32894) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = -6;
	uint32_t x266 = 332U;
	static int16_t x267 = INT16_MAX;
	int16_t x268 = -1;
	uint32_t t51 = 8112823U;

	t51 = ((x265-x266)^(x267<x268));

	if (t51 != 4294966958U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x269 = UINT16_MAX;
	static uint32_t x270 = 934431883U;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint32_t t52 = 4880971U;

	t52 = ((x269-x270)^(x271<x272));

	if (t52 != 3360600949U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x273 = 6U;
	uint64_t x274 = 187392186425650427LLU;
	uint64_t t53 = 199950758LLU;

	t53 = ((x273-x274)^(x275<x276));

	if (t53 != 18259351887283901194LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x281 = 450235310158LLU;
	int32_t x282 = 613872;
	volatile uint64_t t54 = 21758169541351517LLU;

	t54 = ((x281-x282)^(x283<x284));

	if (t54 != 450234696286LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x285 = 6009LL;
	volatile int16_t x286 = -23;
	int16_t x287 = -1;
	static int32_t x288 = INT32_MIN;
	static volatile int64_t t55 = 96339LL;

	t55 = ((x285-x286)^(x287<x288));

	if (t55 != 6032LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x289 = 1U;
	static volatile int32_t x290 = -39438199;
	volatile uint64_t x291 = 14983LLU;
	static int16_t x292 = -1;
	static volatile int32_t t56 = -12800827;

	t56 = ((x289-x290)^(x291<x292));

	if (t56 != 39438201) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x293 = 6873235992LLU;
	uint32_t x294 = 1212U;
	int32_t x295 = -1;
	volatile int64_t x296 = -1LL;

	t57 = ((x293-x294)^(x295<x296));

	if (t57 != 6873234780LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x297 = 2U;
	volatile uint64_t x298 = 22762LLU;
	int32_t x299 = 537;
	uint64_t x300 = 1LLU;
	uint64_t t58 = 1547463608965152849LLU;

	t58 = ((x297-x298)^(x299<x300));

	if (t58 != 18446744073709528856LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t59 = -461995361;

	t59 = ((x301-x302)^(x303<x304));

	if (t59 != 65662) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x305 = 120U;
	int64_t x307 = -1LL;
	uint32_t t60 = 188080U;

	t60 = ((x305-x306)^(x307<x308));

	if (t60 != 119U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t61 = 788060787;

	t61 = ((x313-x314)^(x315<x316));

	if (t61 != -134) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x317 = 3389386087390329595LLU;
	int64_t x318 = INT64_MAX;
	static volatile uint32_t x319 = UINT32_MAX;
	uint64_t x320 = 486331858628LLU;
	uint64_t t62 = 336LLU;

	t62 = ((x317-x318)^(x319<x320));

	if (t62 != 12612758124245105405LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	static volatile uint16_t x323 = 76U;
	uint32_t x324 = UINT32_MAX;
	static volatile int64_t t63 = -155346824391823142LL;

	t63 = ((x321-x322)^(x323<x324));

	if (t63 != 257LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = -252LL;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = 1;
	int8_t x328 = -1;
	volatile int64_t t64 = 8LL;

	t64 = ((x325-x326)^(x327<x328));

	if (t64 != 2147483396LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x329 = INT64_MIN;
	static volatile int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MAX;
	static int64_t x332 = 162443430807815269LL;
	int64_t t65 = 1LL;

	t65 = ((x329-x330)^(x331<x332));

	if (t65 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = -70088LL;
	static volatile uint16_t x334 = 12698U;
	int64_t x335 = -31410LL;
	volatile int64_t t66 = 130927LL;

	t66 = ((x333-x334)^(x335<x336));

	if (t66 != -82785LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x337 = 11953U;
	volatile int16_t x338 = -348;
	int64_t x339 = INT64_MIN;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t67 = -1;

	t67 = ((x337-x338)^(x339<x340));

	if (t67 != 12300) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x341 = -1;
	int64_t x343 = INT64_MIN;
	static volatile int8_t x344 = -1;
	volatile uint32_t t68 = 19861241U;

	t68 = ((x341-x342)^(x343<x344));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x347 = 2296471U;
	int32_t t69 = 0;

	t69 = ((x345-x346)^(x347<x348));

	if (t69 != -65536) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	volatile int32_t x351 = INT32_MIN;
	static volatile int32_t t70 = -66938741;

	t70 = ((x349-x350)^(x351<x352));

	if (t70 != -2147483519) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x354 = INT32_MAX;
	static volatile int8_t x355 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;

	t71 = ((x353-x354)^(x355<x356));

	if (t71 != -21613144367678LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x361 = 18U;
	volatile uint8_t x362 = 56U;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t72 = 231303;

	t72 = ((x361-x362)^(x363<x364));

	if (t72 != -38) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MAX;
	volatile int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	int32_t t73 = 927;

	t73 = ((x365-x366)^(x367<x368));

	if (t73 != 2147483520) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x373 = 5067U;
	static int16_t x375 = -1;
	int32_t x376 = -79362954;
	static volatile uint32_t t74 = 138654U;

	t74 = ((x373-x374)^(x375<x376));

	if (t74 != 5067U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = 0;
	volatile int16_t x378 = INT16_MAX;
	int32_t x379 = -1;
	int16_t x380 = INT16_MAX;
	static int32_t t75 = -1744355;

	t75 = ((x377-x378)^(x379<x380));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x382 = -1;
	int16_t x383 = INT16_MAX;
	int32_t t76 = 1933197;

	t76 = ((x381-x382)^(x383<x384));

	if (t76 != 256) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x387 = INT8_MAX;
	static volatile int32_t t77 = -317447530;

	t77 = ((x385-x386)^(x387<x388));

	if (t77 != 120) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x390 = INT32_MIN;
	uint8_t x392 = UINT8_MAX;
	int64_t t78 = 217751674909903642LL;

	t78 = ((x389-x390)^(x391<x392));

	if (t78 != 2147483646LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = -1LL;
	int64_t x398 = INT64_MAX;
	static int16_t x399 = 806;

	t79 = ((x397-x398)^(x399<x400));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x401 = 72U;
	int8_t x404 = INT8_MIN;
	uint32_t t80 = 3858U;

	t80 = ((x401-x402)^(x403<x404));

	if (t80 != 73U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x406 = INT32_MIN;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = 0LL;
	int64_t t81 = -25024LL;

	t81 = ((x405-x406)^(x407<x408));

	if (t81 != 2171681441LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x409 = -4047;
	uint8_t x411 = 5U;
	static uint8_t x412 = UINT8_MAX;
	uint64_t t82 = 228972913036LLU;

	t82 = ((x409-x410)^(x411<x412));

	if (t82 != 18446744041432179614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x418 = 61;
	int8_t x419 = -1;
	int64_t x420 = INT64_MIN;

	t83 = ((x417-x418)^(x419<x420));

	if (t83 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x421 = -1;
	int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t84 = -718;

	t84 = ((x421-x422)^(x423<x424));

	if (t84 != 2147483646) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x425 = 168246U;
	uint64_t x426 = 4347LLU;
	static int32_t x427 = INT32_MIN;
	uint64_t t85 = 56535LLU;

	t85 = ((x425-x426)^(x427<x428));

	if (t85 != 163899LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x431 = 731061213665358LLU;
	int64_t x432 = 253325794419761LL;
	int64_t t86 = 391113309893411LL;

	t86 = ((x429-x430)^(x431<x432));

	if (t86 != 1914498728LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x433 = INT16_MAX;
	int64_t x434 = -1LL;
	int16_t x435 = INT16_MAX;
	int16_t x436 = -1;

	t87 = ((x433-x434)^(x435<x436));

	if (t87 != 32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x437 = INT16_MIN;
	int64_t x439 = -1LL;
	int32_t x440 = INT32_MIN;
	volatile int64_t t88 = -16155LL;

	t88 = ((x437-x438)^(x439<x440));

	if (t88 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x441 = -23959481;
	int16_t x444 = -28;
	static int32_t t89 = 56509110;

	t89 = ((x441-x442)^(x443<x444));

	if (t89 != -23959608) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x445 = -12;
	volatile int16_t x446 = INT16_MIN;
	int32_t x447 = 4794758;
	uint32_t x448 = UINT32_MAX;
	static int32_t t90 = 0;

	t90 = ((x445-x446)^(x447<x448));

	if (t90 != 32757) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x449 = INT32_MIN;
	int8_t x450 = INT8_MIN;
	volatile int32_t t91 = -94464431;

	t91 = ((x449-x450)^(x451<x452));

	if (t91 != -2147483520) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x453 = INT8_MIN;
	uint32_t x454 = UINT32_MAX;
	volatile int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MIN;
	volatile uint32_t t92 = 1649372785U;

	t92 = ((x453-x454)^(x455<x456));

	if (t92 != 4294967169U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x457 = UINT16_MAX;
	static uint8_t x458 = 3U;
	int16_t x460 = -30;
	int32_t t93 = -372709;

	t93 = ((x457-x458)^(x459<x460));

	if (t93 != 65532) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x461 = UINT16_MAX;
	uint64_t x462 = UINT64_MAX;
	int32_t x463 = 4531577;
	static int16_t x464 = 8070;
	volatile uint64_t t94 = 92366LLU;

	t94 = ((x461-x462)^(x463<x464));

	if (t94 != 65536LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x466 = UINT32_MAX;
	int32_t x468 = INT32_MIN;
	static uint64_t t95 = 273276319985830281LLU;

	t95 = ((x465-x466)^(x467<x468));

	if (t95 != 2680113750051605257LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x469 = INT16_MIN;
	int32_t x472 = -117872439;
	volatile int32_t t96 = -21727;

	t96 = ((x469-x470)^(x471<x472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x473 = UINT64_MAX;
	static int16_t x474 = -1;
	int32_t x475 = 4716815;
	int64_t x476 = -1LL;
	static volatile uint64_t t97 = 48735157LLU;

	t97 = ((x473-x474)^(x475<x476));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x478 = 2386770979032956LL;
	int8_t x480 = -1;
	int64_t t98 = -92LL;

	t98 = ((x477-x478)^(x479<x480));

	if (t98 != -2386770979031827LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x481 = 2;
	int8_t x482 = -1;
	int8_t x483 = -1;
	volatile int32_t t99 = -3;

	t99 = ((x481-x482)^(x483<x484));

	if (t99 != 3) { NG(); } else { ; }
	
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

