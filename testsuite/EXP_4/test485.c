#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
static int8_t x7 = INT8_MIN;
int64_t x15 = -1LL;
int8_t x20 = -43;
int32_t x22 = -27;
static uint16_t x30 = 6404U;
uint32_t x35 = 900012480U;
uint64_t t6 = 128430378605641LLU;
static int8_t x38 = INT8_MIN;
volatile int32_t t7 = -875;
int32_t x41 = -3;
static int64_t x44 = INT64_MIN;
int16_t x47 = INT16_MIN;
volatile uint8_t x50 = 0U;
static volatile int8_t x53 = -1;
static int8_t x54 = INT8_MIN;
volatile uint32_t t11 = 182U;
static volatile int64_t t12 = 46049762597427LL;
uint16_t x62 = 18420U;
volatile int32_t x63 = -4895;
uint8_t x65 = 123U;
int16_t x66 = INT16_MAX;
int32_t x70 = INT32_MAX;
uint8_t x71 = 6U;
static int16_t x74 = -1;
volatile uint32_t x75 = 25933U;
int16_t x83 = -1;
int64_t x86 = 96910800061442298LL;
int16_t x87 = -13;
uint16_t x90 = 198U;
uint64_t x100 = UINT64_MAX;
static int32_t x103 = 10;
static int16_t x104 = INT16_MAX;
volatile uint32_t t22 = 57800142U;
int8_t x109 = 10;
int16_t x119 = 111;
int64_t x123 = -1LL;
int64_t x128 = 83913848370024355LL;
static volatile uint64_t t26 = 36LLU;
volatile int32_t t27 = -128;
int64_t x134 = 13837246LL;
volatile uint32_t x135 = 422U;
uint64_t x148 = 4253781670LLU;
uint64_t t30 = 3058LLU;
int8_t x155 = INT8_MAX;
volatile uint64_t t32 = 832698504240580326LLU;
uint32_t t34 = 0U;
uint64_t t36 = 365514391LLU;
volatile uint8_t x177 = 0U;
static int16_t x183 = -1;
static int16_t x184 = -1;
int16_t x186 = INT16_MAX;
int32_t x191 = INT32_MIN;
static int32_t x193 = INT32_MIN;
static int32_t x195 = -1690265;
int8_t x196 = INT8_MIN;
volatile uint32_t t42 = 82143U;
uint16_t x206 = 734U;
int32_t x216 = -1;
int64_t x222 = -1LL;
uint64_t x224 = 3LLU;
int8_t x237 = -18;
volatile int32_t t51 = 49795;
int8_t x247 = INT8_MIN;
uint32_t x262 = 7446204U;
static volatile uint64_t t55 = 0LLU;
volatile int64_t x276 = -1LL;
int32_t x303 = -954815;
uint8_t x304 = 2U;
volatile uint64_t x305 = 34884032730LLU;
uint64_t x317 = 62149763111563LLU;
int32_t x318 = 49836;
volatile uint64_t t63 = 63LLU;
uint32_t x336 = UINT32_MAX;
volatile uint64_t t65 = 6309LLU;
uint64_t x337 = 2049682369418LLU;
int16_t x339 = INT16_MIN;
int16_t x342 = INT16_MIN;
uint32_t x343 = UINT32_MAX;
int64_t x349 = INT64_MIN;
int32_t t69 = -300300778;
int64_t x361 = -13282278364LL;
uint16_t x371 = 6U;
uint8_t x373 = UINT8_MAX;
int32_t x375 = -1;
int32_t t74 = 474239;
static int32_t x379 = -1;
uint64_t t75 = 1115217868337569LLU;
volatile uint64_t t76 = 77766264183616LLU;
static uint32_t x390 = 5318U;
static int32_t x391 = -1;
int64_t t78 = -10004383046LL;
int32_t t79 = 339043;
static int16_t x405 = INT16_MIN;
int32_t x412 = -1;
uint8_t x418 = 95U;
int32_t x430 = INT32_MAX;
volatile uint64_t t85 = 483744549140639LLU;
uint16_t x434 = 4129U;
int64_t x436 = -1LL;
int64_t t86 = -1007829LL;
int32_t x440 = 51203427;
int16_t x442 = INT16_MIN;
uint16_t x446 = UINT16_MAX;
static int8_t x455 = INT8_MIN;
uint32_t x456 = UINT32_MAX;
volatile uint32_t t91 = 3U;
uint64_t t93 = 0LLU;
uint8_t x470 = 0U;
static int64_t x474 = INT64_MAX;
int16_t x476 = -6;
volatile uint64_t t98 = 272045092632LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 15589LLU;
	int64_t x4 = -1LL;
	uint64_t t0 = 1630LLU;

	t0 = (x1/(x2|(x3*x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 134U;
	uint8_t x8 = 39U;
	volatile int32_t t1 = 205663;

	t1 = (x5/(x6|(x7*x8)));

	if (t1 != -13) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	static int16_t x14 = 8326;
	int64_t x16 = -233212477974117LL;
	volatile int64_t t2 = 15452240594428LL;

	t2 = (x13/(x14|(x15*x16)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MAX;
	uint8_t x18 = UINT8_MAX;
	int16_t x19 = -49;
	static int64_t t3 = 17849263335947836LL;

	t3 = (x17/(x18|(x19*x20)));

	if (t3 != 4004937923080666LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	static int32_t x23 = 1;
	uint32_t x24 = UINT32_MAX;
	uint32_t t4 = 2305090U;

	t4 = (x21/(x22|(x23*x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MIN;
	uint64_t x31 = 57LLU;
	volatile int8_t x32 = INT8_MAX;
	volatile uint64_t t5 = 1045221LLU;

	t5 = (x29/(x30|(x31*x32)));

	if (t5 != 1230603340474286LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = 1275LLU;
	int8_t x34 = 1;
	static volatile int8_t x36 = 1;

	t6 = (x33/(x34|(x35*x36)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = 1U;
	static int8_t x39 = -1;
	volatile int8_t x40 = 9;

	t7 = (x37/(x38|(x39*x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x42 = 13245631U;
	uint16_t x43 = 0U;
	volatile int64_t t8 = -1924176552LL;

	t8 = (x41/(x42|(x43*x44)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = UINT8_MAX;
	uint64_t x46 = 1479795083881429056LLU;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t9 = 104486633LLU;

	t9 = (x45/(x46|(x47*x48)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = 1065;
	int32_t x51 = INT32_MAX;
	int8_t x52 = -1;
	volatile int32_t t10 = -17877;

	t10 = (x49/(x50|(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x55 = 138276U;
	int16_t x56 = INT16_MAX;

	t11 = (x53/(x54|(x55*x56)));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 5LL;
	static volatile int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 746023631U;

	t12 = (x57/(x58|(x59*x60)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 4454549;

	t13 = (x61/(x62|(x63*x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x67 = 58;
	int64_t x68 = -240912LL;
	static int64_t t14 = 23294510578035984LL;

	t14 = (x65/(x66|(x67*x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	int16_t x72 = -220;
	int64_t t15 = 265399724534444655LL;

	t15 = (x69/(x70|(x71*x72)));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	int8_t x76 = 0;
	int64_t t16 = -1126LL;

	t16 = (x73/(x74|(x75*x76)));

	if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MAX;
	static volatile int8_t x84 = INT8_MIN;
	static volatile int64_t t17 = -734323398991LL;

	t17 = (x81/(x82|(x83*x84)));

	if (t17 != -281483566907400LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = 164931845;
	volatile int16_t x88 = INT16_MAX;
	int64_t t18 = 2LL;

	t18 = (x85/(x86|(x87*x88)));

	if (t18 != -7405LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	volatile int16_t x91 = -1;
	int16_t x92 = INT16_MIN;
	int32_t t19 = -4545319;

	t19 = (x89/(x90|(x91*x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = UINT8_MAX;
	uint8_t x98 = 2U;
	int8_t x99 = 4;
	uint64_t t20 = 20918310329LLU;

	t20 = (x97/(x98|(x99*x100)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	static volatile int32_t x102 = INT32_MAX;
	volatile int32_t t21 = 1;

	t21 = (x101/(x102|(x103*x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	static uint8_t x106 = UINT8_MAX;
	int8_t x107 = -1;
	uint32_t x108 = 1474U;

	t22 = (x105/(x106|(x107*x108)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = 26;
	uint8_t x111 = 24U;
	uint8_t x112 = 23U;
	int32_t t23 = -337796841;

	t23 = (x109/(x110|(x111*x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MIN;
	uint16_t x118 = 5U;
	static int64_t x120 = -34018LL;
	int64_t t24 = 220709654927LL;

	t24 = (x117/(x118|(x119*x120)));

	if (t24 != 568LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	int32_t x124 = -48715230;
	int64_t t25 = 4LL;

	t25 = (x121/(x122|(x123*x124)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = INT32_MAX;
	uint64_t x127 = 3351524LLU;

	t26 = (x125/(x126|(x127*x128)));

	if (t26 != 85LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = 3;
	static uint16_t x130 = UINT16_MAX;
	int8_t x131 = 1;
	uint8_t x132 = UINT8_MAX;

	t27 = (x129/(x130|(x131*x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MAX;
	static int32_t x136 = -98378955;
	int64_t t28 = -203693202188408521LL;

	t28 = (x133/(x134|(x135*x136)));

	if (t28 != 6394983004LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MAX;
	static uint32_t x138 = 3512787U;
	int32_t x139 = -4;
	int64_t x140 = -1LL;
	int64_t t29 = 113538523LL;

	t29 = (x137/(x138|(x139*x140)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x145 = 55LLU;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 3U;

	t30 = (x145/(x146|(x147*x148)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = 95524137;
	volatile int64_t x151 = -1LL;
	int16_t x152 = -1;
	int64_t t31 = 199563404101113430LL;

	t31 = (x149/(x150|(x151*x152)));

	if (t31 != -96555408156LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x153 = 20;
	int8_t x154 = -1;
	volatile uint64_t x156 = 4124362829861781245LLU;

	t32 = (x153/(x154|(x155*x156)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = 45980272LL;
	int8_t x158 = -2;
	int8_t x159 = -42;
	static int8_t x160 = -1;
	volatile int64_t t33 = -60LL;

	t33 = (x157/(x158|(x159*x160)));

	if (t33 != -22990136LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x161 = INT8_MIN;
	uint16_t x162 = UINT16_MAX;
	volatile uint32_t x163 = 1U;
	static int32_t x164 = INT32_MAX;

	t34 = (x161/(x162|(x163*x164)));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 55503345503463LLU;
	int64_t x166 = -7207341375005838LL;
	static int32_t x167 = INT32_MIN;
	uint32_t x168 = 0U;
	uint64_t t35 = 262546LLU;

	t35 = (x165/(x166|(x167*x168)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	volatile int64_t x170 = INT64_MAX;
	uint64_t x171 = 10011LLU;
	int8_t x172 = -1;

	t36 = (x169/(x170|(x171*x172)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -3;
	int32_t x174 = INT32_MIN;
	int16_t x175 = 1;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t37 = 290607480;

	t37 = (x173/(x174|(x175*x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MIN;
	static volatile uint16_t x180 = UINT16_MAX;
	static volatile int64_t t38 = 2732540224518LL;

	t38 = (x177/(x178|(x179*x180)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MIN;
	volatile int32_t x182 = INT32_MAX;
	static volatile int32_t t39 = -1;

	t39 = (x181/(x182|(x183*x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x185 = -4;
	uint8_t x187 = UINT8_MAX;
	uint8_t x188 = UINT8_MAX;
	int32_t t40 = -119167;

	t40 = (x185/(x186|(x187*x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MAX;
	volatile uint64_t x192 = 2LLU;
	static uint64_t t41 = 62143401759LLU;

	t41 = (x189/(x190|(x191*x192)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x194 = 467564U;

	t42 = (x193/(x194|(x195*x196)));

	if (t42 != 9U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 1LLU;
	uint16_t x198 = 414U;
	int32_t x199 = -1;
	int32_t x200 = -1;
	uint64_t t43 = 22270771949688LLU;

	t43 = (x197/(x198|(x199*x200)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = INT16_MIN;
	static uint8_t x202 = 6U;
	int16_t x203 = 0;
	uint64_t x204 = 3089LLU;
	static volatile uint64_t t44 = 668664618LLU;

	t44 = (x201/(x202|(x203*x204)));

	if (t44 != 3074457345618253141LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 211166742LLU;
	int64_t x207 = INT64_MIN;
	static uint64_t x208 = 600222LLU;
	volatile uint64_t t45 = 110479256LLU;

	t45 = (x205/(x206|(x207*x208)));

	if (t45 != 287693LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x213 = 852384737403586841LL;
	int32_t x214 = 19467;
	int16_t x215 = -234;
	volatile int64_t t46 = 8LL;

	t46 = (x213/(x214|(x215*x216)));

	if (t46 != 43288037042485LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MAX;
	static volatile int16_t x223 = INT16_MAX;
	static uint64_t t47 = 29912096840LLU;

	t47 = (x221/(x222|(x223*x224)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x225 = 2986971632121LL;
	int32_t x226 = -160520;
	uint64_t x227 = 1701126955309LLU;
	uint16_t x228 = UINT16_MAX;
	uint64_t t48 = 111805736438532068LLU;

	t48 = (x225/(x226|(x227*x228)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x229 = UINT8_MAX;
	static uint16_t x230 = UINT16_MAX;
	volatile int32_t x231 = -1;
	int8_t x232 = INT8_MAX;
	static int32_t t49 = 8956;

	t49 = (x229/(x230|(x231*x232)));

	if (t49 != -255) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x238 = INT8_MAX;
	uint64_t x239 = 4265933613335546768LLU;
	volatile int64_t x240 = INT64_MAX;
	static uint64_t t50 = 6130312166LLU;

	t50 = (x237/(x238|(x239*x240)));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x241 = -1;
	int8_t x242 = -1;
	static int16_t x243 = 108;
	int8_t x244 = INT8_MAX;

	t51 = (x241/(x242|(x243*x244)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x245 = 425U;
	int64_t x246 = 3816621LL;
	int16_t x248 = -1509;
	int64_t t52 = 89611131LL;

	t52 = (x245/(x246|(x247*x248)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = INT8_MAX;
	volatile int16_t x251 = -1;
	volatile uint8_t x252 = 125U;
	static int32_t t53 = -1618;

	t53 = (x249/(x250|(x251*x252)));

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x263 = INT32_MAX;
	static uint64_t x264 = 564377800596172929LLU;
	uint64_t t54 = 311480164388132237LLU;

	t54 = (x261/(x262|(x263*x264)));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = 12721LLU;
	volatile uint8_t x266 = UINT8_MAX;
	uint8_t x267 = 24U;
	static int16_t x268 = 1461;

	t55 = (x265/(x266|(x267*x268)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x273 = -1595515775498409LL;
	static uint8_t x274 = 1U;
	int8_t x275 = INT8_MIN;
	volatile int64_t t56 = 34289163961LL;

	t56 = (x273/(x274|(x275*x276)));

	if (t56 != -12368339344948LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = -1LL;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = INT8_MIN;
	static uint16_t x280 = 7657U;
	volatile int64_t t57 = 23041700685LL;

	t57 = (x277/(x278|(x279*x280)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x285 = UINT32_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	uint16_t x287 = UINT16_MAX;
	static int16_t x288 = INT16_MIN;
	static uint64_t t58 = 4033667229961781833LLU;

	t58 = (x285/(x286|(x287*x288)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x297 = -21;
	int16_t x298 = -1;
	static int32_t x299 = -1;
	volatile uint32_t x300 = 4U;
	static volatile uint32_t t59 = 384558U;

	t59 = (x297/(x298|(x299*x300)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x301 = -1LL;
	static int16_t x302 = INT16_MAX;
	int64_t t60 = -1970341823948LL;

	t60 = (x301/(x302|(x303*x304)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x306 = -1LL;
	int16_t x307 = INT16_MAX;
	int8_t x308 = -1;
	static uint64_t t61 = 32299684LLU;

	t61 = (x305/(x306|(x307*x308)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 3U;
	uint8_t x311 = UINT8_MAX;
	static int16_t x312 = INT16_MIN;
	volatile uint32_t t62 = 80822825U;

	t62 = (x309/(x310|(x311*x312)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x319 = -1;
	uint16_t x320 = 4U;

	t63 = (x317/(x318|(x319*x320)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x329 = INT64_MIN;
	volatile int64_t x330 = INT64_MIN;
	uint64_t x331 = 349459468793425LLU;
	volatile uint8_t x332 = 38U;
	volatile uint64_t t64 = 4710653533916510311LLU;

	t64 = (x329/(x330|(x331*x332)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = 0;
	static uint64_t x334 = UINT64_MAX;
	static uint16_t x335 = 3U;

	t65 = (x333/(x334|(x335*x336)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x338 = 198118694578515374LL;
	static volatile int64_t x340 = 3821LL;
	uint64_t t66 = 7400825588177LLU;

	t66 = (x337/(x338|(x339*x340)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	volatile uint32_t x344 = 1465394U;
	volatile uint32_t t67 = 1483224931U;

	t67 = (x341/(x342|(x343*x344)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x350 = -4769;
	uint8_t x351 = 1U;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t68 = 82580693994LLU;

	t68 = (x349/(x350|(x351*x352)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MAX;
	volatile uint16_t x355 = 111U;
	uint16_t x356 = UINT16_MAX;

	t69 = (x353/(x354|(x355*x356)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = INT8_MIN;
	static int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MAX;
	static uint32_t x360 = 1651646208U;
	volatile uint32_t t70 = 15040U;

	t70 = (x357/(x358|(x359*x360)));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = 7208;
	int16_t x364 = INT16_MIN;
	int64_t t71 = -6LL;

	t71 = (x361/(x362|(x363*x364)));

	if (t71 != 56LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x365 = -171345621;
	volatile int64_t x366 = -1LL;
	uint64_t x367 = 65245061348LLU;
	int64_t x368 = INT64_MAX;
	uint64_t t72 = 1117313671LLU;

	t72 = (x365/(x366|(x367*x368)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = 1;
	int32_t x370 = -1;
	uint64_t x372 = 3LLU;
	volatile uint64_t t73 = 282811883113489LLU;

	t73 = (x369/(x370|(x371*x372)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x374 = INT32_MIN;
	uint8_t x376 = UINT8_MAX;

	t74 = (x373/(x374|(x375*x376)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x377 = INT64_MAX;
	int8_t x378 = 0;
	uint64_t x380 = 3723638535LLU;

	t75 = (x377/(x378|(x379*x380)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x386 = 185320LL;
	int8_t x387 = -1;
	int16_t x388 = INT16_MIN;

	t76 = (x385/(x386|(x387*x388)));

	if (t76 != 99539952912311LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x389 = 2361U;
	static volatile uint64_t x392 = 1LLU;
	volatile uint64_t t77 = 5826654340803LLU;

	t77 = (x389/(x390|(x391*x392)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x393 = -217818500LL;
	int16_t x394 = INT16_MIN;
	volatile int16_t x395 = -1;
	int64_t x396 = -1LL;

	t78 = (x393/(x394|(x395*x396)));

	if (t78 != 6647LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x401 = UINT16_MAX;
	static uint8_t x402 = 1U;
	static int16_t x403 = INT16_MIN;
	uint8_t x404 = 83U;

	t79 = (x401/(x402|(x403*x404)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x406 = UINT8_MAX;
	int64_t x407 = 1122LL;
	uint32_t x408 = 305500U;
	static volatile int64_t t80 = 1310433229079199LL;

	t80 = (x405/(x406|(x407*x408)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x409 = INT32_MAX;
	static uint32_t x410 = 15057U;
	volatile uint8_t x411 = UINT8_MAX;
	uint32_t t81 = 38313U;

	t81 = (x409/(x410|(x411*x412)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x413 = 3U;
	static int32_t x414 = INT32_MIN;
	uint64_t x415 = 773864800LLU;
	uint64_t x416 = 1613812584LLU;
	uint64_t t82 = 362861LLU;

	t82 = (x413/(x414|(x415*x416)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = -1LL;
	int16_t x419 = INT16_MAX;
	volatile uint64_t x420 = 1035410685333460LLU;
	volatile uint64_t t83 = 360752462131852660LLU;

	t83 = (x417/(x418|(x419*x420)));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = 3217U;
	int16_t x422 = -1;
	static int8_t x423 = -1;
	int8_t x424 = 27;
	volatile int32_t t84 = 1;

	t84 = (x421/(x422|(x423*x424)));

	if (t84 != -3217) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x429 = INT8_MIN;
	int32_t x431 = -1;
	static uint64_t x432 = 1406994513808808LLU;

	t85 = (x429/(x430|(x431*x432)));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = INT32_MIN;
	static int32_t x435 = -7;

	t86 = (x433/(x434|(x435*x436)));

	if (t86 != -519343LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x437 = 1LL;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = -1;
	volatile int64_t t87 = -431966726LL;

	t87 = (x437/(x438|(x439*x440)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x441 = 3U;
	uint64_t x443 = 12LLU;
	volatile int8_t x444 = -1;
	static uint64_t t88 = 31481LLU;

	t88 = (x441/(x442|(x443*x444)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = INT8_MAX;
	int16_t x447 = INT16_MAX;
	volatile int32_t x448 = -1;
	volatile int32_t t89 = -281523;

	t89 = (x445/(x446|(x447*x448)));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x449 = -1;
	uint32_t x450 = 614U;
	static volatile int32_t x451 = INT32_MIN;
	uint64_t x452 = 575LLU;
	uint64_t t90 = 7648812999LLU;

	t90 = (x449/(x450|(x451*x452)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x453 = INT32_MIN;
	static volatile uint8_t x454 = 3U;

	t91 = (x453/(x454|(x455*x456)));

	if (t91 != 16393004U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x457 = 0U;
	uint16_t x458 = 829U;
	int64_t x459 = -1LL;
	int64_t x460 = INT64_MAX;
	static int64_t t92 = 191363452LL;

	t92 = (x457/(x458|(x459*x460)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x461 = INT64_MIN;
	uint64_t x462 = 77526177959460220LLU;
	int8_t x463 = INT8_MIN;
	static uint8_t x464 = UINT8_MAX;

	t93 = (x461/(x462|(x463*x464)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x465 = INT8_MAX;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = 1;
	int64_t x468 = -1LL;
	volatile uint64_t t94 = 1985LLU;

	t94 = (x465/(x466|(x467*x468)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x469 = INT32_MIN;
	static volatile int64_t x471 = -1LL;
	uint16_t x472 = 31U;
	static int64_t t95 = 480008866183015LL;

	t95 = (x469/(x470|(x471*x472)));

	if (t95 != 69273666LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x473 = 0U;
	int8_t x475 = -1;
	int64_t t96 = 521233956911427320LL;

	t96 = (x473/(x474|(x475*x476)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x489 = INT16_MAX;
	static uint64_t x490 = 30882893074666864LLU;
	int16_t x491 = -1;
	volatile int16_t x492 = INT16_MIN;
	uint64_t t97 = 1995703888LLU;

	t97 = (x489/(x490|(x491*x492)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x501 = INT64_MIN;
	uint64_t x502 = 361411562174793067LLU;
	volatile int8_t x503 = -13;
	int8_t x504 = INT8_MIN;

	t98 = (x501/(x502|(x503*x504)));

	if (t98 != 25LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x505 = 27862U;
	int16_t x506 = -10435;
	volatile uint32_t x507 = 7U;
	uint8_t x508 = 9U;
	static volatile uint32_t t99 = 391086U;

	t99 = (x505/(x506|(x507*x508)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

