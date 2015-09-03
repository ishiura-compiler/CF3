#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 49779775206920394LLU;
volatile uint16_t x11 = UINT16_MAX;
uint64_t x15 = 705790535005974LLU;
static uint32_t x21 = UINT32_MAX;
int64_t x24 = INT64_MAX;
int16_t x32 = -30;
static uint16_t x35 = 1U;
int8_t x39 = -1;
uint16_t x44 = 7U;
volatile int32_t t8 = -2379;
uint16_t x65 = 23U;
volatile int16_t x70 = 6375;
static uint64_t t14 = 959058247379LLU;
static volatile int32_t x73 = INT32_MIN;
volatile uint8_t x76 = 1U;
volatile uint32_t t15 = 1012647U;
uint8_t x79 = 2U;
static volatile uint16_t x87 = 10U;
volatile int64_t x96 = 29805260615LL;
static uint64_t x100 = 45336290LLU;
int32_t t22 = 282632349;
volatile uint64_t x106 = UINT64_MAX;
int16_t x107 = INT16_MIN;
volatile uint64_t t23 = 230679757853679LLU;
static volatile int8_t x113 = -27;
int8_t x118 = INT8_MIN;
uint32_t t26 = 130320U;
uint16_t x125 = UINT16_MAX;
uint32_t x128 = UINT32_MAX;
int64_t x131 = INT64_MAX;
volatile uint8_t x132 = 1U;
uint32_t x139 = 16U;
volatile int64_t x140 = 609412LL;
int32_t x141 = INT32_MAX;
int8_t x143 = -1;
int64_t t34 = -3796564676181LL;
int8_t x154 = INT8_MIN;
static int64_t x155 = -181LL;
int64_t x156 = -1LL;
int32_t x157 = INT32_MIN;
int16_t x158 = INT16_MIN;
int8_t x166 = -1;
volatile int64_t t40 = -3711LL;
int8_t x201 = -5;
int32_t x202 = -47904;
static int64_t x203 = -1LL;
uint64_t x205 = 6220LLU;
int16_t x206 = INT16_MAX;
static int32_t x208 = INT32_MIN;
volatile uint64_t t47 = 0LLU;
int64_t x210 = -17663597281384109LL;
int16_t x216 = INT16_MIN;
volatile int32_t t49 = -3;
int32_t x220 = 2311602;
int32_t x221 = -1;
static int8_t x223 = INT8_MAX;
int16_t x229 = 0;
static int32_t t53 = -104533819;
uint8_t x239 = UINT8_MAX;
int8_t x243 = -5;
volatile int64_t x251 = -1LL;
int16_t x254 = -1;
volatile int16_t x256 = INT16_MIN;
volatile int64_t x260 = INT64_MIN;
int16_t x271 = -291;
uint64_t x276 = 6010460039LLU;
static uint64_t t64 = 16410055019106LLU;
static volatile int8_t x279 = INT8_MIN;
int64_t x284 = 1338414LL;
int64_t t67 = -173131546951287945LL;
volatile int64_t x307 = -5672865541LL;
volatile uint16_t x312 = 6U;
static int8_t x317 = -1;
volatile int32_t t73 = -339573;
int64_t x330 = INT64_MIN;
int32_t x331 = 154149912;
volatile int64_t t76 = -3LL;
volatile uint16_t x342 = UINT16_MAX;
int16_t x344 = 184;
int32_t x349 = INT32_MAX;
uint16_t x355 = 14U;
static volatile int64_t x362 = INT64_MIN;
static int64_t x368 = INT64_MIN;
volatile uint64_t t81 = 36134LLU;
int16_t x369 = INT16_MAX;
volatile uint32_t x373 = 267U;
int64_t x374 = 802968297988LL;
volatile int16_t x379 = INT16_MAX;
static volatile uint64_t t84 = 9777757769143658LLU;
int32_t x382 = INT32_MAX;
static int64_t x383 = -231226668LL;
static volatile int8_t x384 = INT8_MAX;
static volatile int64_t t86 = 728331423008714344LL;
int64_t x390 = -1LL;
uint16_t x392 = 1U;
static int64_t t87 = 191LL;
int32_t x393 = INT32_MAX;
int8_t x394 = INT8_MIN;
volatile int32_t x397 = 59910268;
int32_t x398 = -28024;
volatile int32_t x399 = INT32_MAX;
uint64_t t90 = 840041982115975415LLU;
int16_t x413 = -863;
int64_t x420 = -1LL;
int8_t x423 = -1;
int64_t x429 = -1LL;
int8_t x435 = INT8_MIN;
volatile uint64_t t98 = 7286325505LLU;


void f0(void) {
	int16_t x1 = 3;
	uint64_t x2 = 6464727213078LLU;
	int32_t x3 = -1;
	uint16_t x4 = 53U;
	uint64_t t0 = 700361LLU;

	t0 = (x1&(x2+(x3&x4)));

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	static int64_t x7 = INT64_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 24908676661LL;

	t1 = (x5&(x6+(x7&x8)));

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 3;
	static int64_t x12 = -1LL;
	volatile uint64_t t2 = 49431838880077718LLU;

	t2 = (x9&(x10+(x11&x12)));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int32_t x14 = -1;
	int16_t x16 = INT16_MAX;
	volatile uint64_t t3 = 0LLU;

	t3 = (x13&(x14+(x15&x16)));

	if (t3 != 30485LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = INT64_MIN;
	int16_t x23 = 1512;
	int64_t t4 = -6LL;

	t4 = (x21&(x22+(x23&x24)));

	if (t4 != 1512LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 4U;
	uint16_t x30 = UINT16_MAX;
	int16_t x31 = -1;
	static uint32_t t5 = 15207U;

	t5 = (x29&(x30+(x31&x32)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = 1U;
	static int8_t x36 = 1;
	volatile int32_t t6 = -31402;

	t6 = (x33&(x34+(x35&x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MIN;
	uint8_t x38 = UINT8_MAX;
	volatile uint8_t x40 = 4U;
	volatile int32_t t7 = -2376199;

	t7 = (x37&(x38+(x39&x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MAX;

	t8 = (x41&(x42+(x43&x44)));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	static int8_t x46 = -1;
	int16_t x47 = -3;
	int8_t x48 = INT8_MIN;
	int64_t t9 = -1677318LL;

	t9 = (x45&(x46+(x47&x48)));

	if (t9 != -129LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	static uint64_t x50 = 11770608LLU;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 1346164978LLU;
	uint64_t t10 = 681361666962LLU;

	t10 = (x49&(x50+(x51&x52)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MAX;
	static volatile uint64_t x54 = 3391270034018273661LLU;
	volatile uint32_t x55 = 104341102U;
	volatile int8_t x56 = INT8_MIN;
	uint64_t t11 = 2852505961910399649LLU;

	t11 = (x53&(x54+(x55&x56)));

	if (t11 != 10109LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 5980U;
	static uint16_t x58 = 164U;
	static volatile uint8_t x59 = UINT8_MAX;
	int32_t x60 = INT32_MAX;
	volatile uint32_t t12 = 605815792U;

	t12 = (x57&(x58+(x59&x60)));

	if (t12 != 256U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = 15U;
	int64_t x67 = INT64_MIN;
	int32_t x68 = 2;
	volatile int64_t t13 = 681774241379LL;

	t13 = (x65&(x66+(x67&x68)));

	if (t13 != 7LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x69 = -158034201;
	static int8_t x71 = INT8_MAX;
	volatile uint64_t x72 = 7144110626LLU;

	t14 = (x69&(x70+(x71&x72)));

	if (t14 != 4097LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x74 = 66106854U;
	int16_t x75 = -1;

	t15 = (x73&(x74+(x75&x76)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x77 = 2U;
	static int16_t x78 = -2752;
	int64_t x80 = -1744066524108095895LL;
	volatile int64_t t16 = -17051984820943LL;

	t16 = (x77&(x78+(x79&x80)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 157721980160204719LL;
	volatile int16_t x82 = -1040;
	int32_t x83 = -14434;
	uint16_t x84 = 1244U;
	int64_t t17 = 207155LL;

	t17 = (x81&(x82+(x83&x84)));

	if (t17 != 140LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	static int8_t x86 = -1;
	static int32_t x88 = -1;
	volatile uint32_t t18 = 937997U;

	t18 = (x85&(x86+(x87&x88)));

	if (t18 != 9U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = 501;
	int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MIN;
	static volatile int16_t x92 = INT16_MIN;
	int32_t t19 = -616915;

	t19 = (x89&(x90+(x91&x92)));

	if (t19 != 501) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	static volatile int16_t x95 = 874;
	static volatile int64_t t20 = INT64_MIN;

	t20 = (x93&(x94+(x95&x96)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x97 = 9477U;
	static uint32_t x98 = 53740U;
	int64_t x99 = -1LL;
	static uint64_t t21 = 106281764082574LLU;

	t21 = (x97&(x98+(x99&x100)));

	if (t21 != 4LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x101 = 0U;
	int8_t x102 = -1;
	int16_t x103 = -1;
	int8_t x104 = INT8_MAX;

	t22 = (x101&(x102+(x103&x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 125U;
	static int8_t x108 = 7;

	t23 = (x105&(x106+(x107&x108)));

	if (t23 != 125LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 1580209LLU;
	int8_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	static uint64_t x112 = UINT64_MAX;
	uint64_t t24 = 265LLU;

	t24 = (x109&(x110+(x111&x112)));

	if (t24 != 7344LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = -379105;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = UINT8_MAX;
	static int32_t t25 = -12;

	t25 = (x113&(x114+(x115&x116)));

	if (t25 != -379131) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x117 = 4U;
	uint32_t x119 = 25151108U;
	int16_t x120 = -1;

	t26 = (x117&(x118+(x119&x120)));

	if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = UINT32_MAX;
	static int16_t x122 = 2;
	uint8_t x123 = UINT8_MAX;
	int32_t x124 = -3915932;
	volatile uint32_t t27 = 775193948U;

	t27 = (x121&(x122+(x123&x124)));

	if (t27 != 102U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = 0U;
	volatile uint32_t t28 = 7295742U;

	t28 = (x125&(x126+(x127&x128)));

	if (t28 != 65408U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	static int8_t x130 = INT8_MAX;
	static int64_t t29 = 1LL;

	t29 = (x129&(x130+(x131&x132)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	static uint64_t x134 = 23094025861LLU;
	volatile int64_t x135 = -17440156174398LL;
	static uint16_t x136 = 57U;
	volatile uint64_t t30 = 473055721513462494LLU;

	t30 = (x133&(x134+(x135&x136)));

	if (t30 != 23094025861LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 6370LL;
	int16_t x138 = 2;
	volatile int64_t t31 = 24290815103LL;

	t31 = (x137&(x138+(x139&x140)));

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = INT16_MIN;
	uint16_t x144 = 34U;
	volatile int32_t t32 = 0;

	t32 = (x141&(x142+(x143&x144)));

	if (t32 != 2147450914) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = 1U;
	uint32_t x146 = UINT32_MAX;
	volatile int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MAX;
	int64_t t33 = 2497215774621862506LL;

	t33 = (x145&(x146+(x147&x148)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	static int32_t x150 = 235335357;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = UINT32_MAX;

	t34 = (x149&(x150+(x151&x152)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 36;
	volatile int64_t t35 = -27786354459328LL;

	t35 = (x153&(x154+(x155&x156)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t36 = INT32_MIN;

	t36 = (x157&(x158+(x159&x160)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x162 = -1LL;
	uint16_t x163 = 64U;
	int32_t x164 = 17713281;
	int64_t t37 = 328225928436640231LL;

	t37 = (x161&(x162+(x163&x164)));

	if (t37 != 65535LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = -1;
	uint16_t x167 = 240U;
	int32_t x168 = INT32_MAX;
	static int32_t t38 = -49862;

	t38 = (x165&(x166+(x167&x168)));

	if (t38 != 239) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x169 = 667U;
	static int8_t x170 = -1;
	static int16_t x171 = -3799;
	int8_t x172 = -41;
	volatile int32_t t39 = 802589203;

	t39 = (x169&(x170+(x171&x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = 117361575LL;
	volatile uint32_t x174 = 8U;
	static uint32_t x175 = 14054993U;
	uint32_t x176 = 42U;

	t40 = (x173&(x174+(x175&x176)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	int32_t x178 = -1;
	uint64_t x179 = 2886957686LLU;
	int8_t x180 = -1;
	uint64_t t41 = 174551LLU;

	t41 = (x177&(x178+(x179&x180)));

	if (t41 != 2886957685LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MAX;
	uint8_t x182 = 23U;
	int8_t x183 = INT8_MIN;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t42 = -16307;

	t42 = (x181&(x182+(x183&x184)));

	if (t42 != 65431) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -2501801120954LL;
	static volatile int64_t t43 = -7178459LL;

	t43 = (x185&(x186+(x187&x188)));

	if (t43 != 17301504LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = 0;
	uint16_t x194 = 5U;
	volatile int8_t x195 = 8;
	int8_t x196 = -1;
	volatile int32_t t44 = 804989214;

	t44 = (x193&(x194+(x195&x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	volatile uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 1706482011191946LLU;
	int32_t x200 = 217398;
	static volatile uint64_t t45 = 94787330566334LLU;

	t45 = (x197&(x198+(x199&x200)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x204 = 111056;
	volatile int64_t t46 = -26972085LL;

	t46 = (x201&(x202+(x203&x204)));

	if (t46 != 63152LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x207 = 24356U;

	t47 = (x205&(x206+(x207&x208)));

	if (t47 != 6220LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 1U;
	volatile uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 15U;
	int64_t t48 = 103906782LL;

	t48 = (x209&(x210+(x211&x212)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x213 = 79U;
	static volatile uint8_t x214 = UINT8_MAX;
	int32_t x215 = INT32_MIN;

	t49 = (x213&(x214+(x215&x216)));

	if (t49 != 79) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = 6;
	int8_t x219 = -1;
	int32_t t50 = 3;

	t50 = (x217&(x218+(x219&x220)));

	if (t50 != 2293760) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x222 = -1;
	static int16_t x224 = 1;
	static volatile int32_t t51 = 0;

	t51 = (x221&(x222+(x223&x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MAX;
	int8_t x226 = -1;
	volatile int8_t x227 = INT8_MIN;
	uint64_t x228 = 127785LLU;
	uint64_t t52 = 819889376LLU;

	t52 = (x225&(x226+(x227&x228)));

	if (t52 != 127743LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = 89582;
	uint16_t x232 = 49U;

	t53 = (x229&(x230+(x231&x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = 21U;
	int8_t x235 = 0;
	int8_t x236 = INT8_MIN;
	volatile int64_t t54 = 745805LL;

	t54 = (x233&(x234+(x235&x236)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = UINT32_MAX;
	int32_t x238 = -1;
	volatile int16_t x240 = INT16_MAX;
	static volatile uint32_t t55 = 61072630U;

	t55 = (x237&(x238+(x239&x240)));

	if (t55 != 254U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x241 = -1;
	uint16_t x242 = 19367U;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t56 = 123158;

	t56 = (x241&(x242+(x243&x244)));

	if (t56 != 19618) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = -3982161413867680750LL;
	volatile int64_t x246 = INT64_MAX;
	static uint16_t x247 = 16U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t57 = 96674494455068715LL;

	t57 = (x245&(x246+(x247&x248)));

	if (t57 != 5241210622987095058LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x250 = 169U;
	uint8_t x252 = UINT8_MAX;
	volatile int64_t t58 = -690284078113LL;

	t58 = (x249&(x250+(x251&x252)));

	if (t58 != 384LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -1;
	int64_t x255 = -11629976026607LL;
	int64_t t59 = 508LL;

	t59 = (x253&(x254+(x255&x256)));

	if (t59 != -11629976027137LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 5U;
	int32_t x258 = 0;
	volatile uint8_t x259 = UINT8_MAX;
	int64_t t60 = -29236233085566964LL;

	t60 = (x257&(x258+(x259&x260)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -1LL;
	static volatile uint32_t x262 = 941603U;
	int8_t x263 = -1;
	int32_t x264 = -1;
	static int64_t t61 = -45266410LL;

	t61 = (x261&(x262+(x263&x264)));

	if (t61 != 941602LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = 1;
	int8_t x267 = -63;
	uint64_t x268 = 30186LLU;
	volatile uint64_t t62 = 11250LLU;

	t62 = (x265&(x266+(x267&x268)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = 72696U;
	static int32_t x270 = -2;
	volatile uint16_t x272 = 10U;
	uint32_t t63 = 268628U;

	t63 = (x269&(x270+(x271&x272)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	static int32_t x274 = INT32_MAX;
	uint32_t x275 = 47434U;

	t64 = (x273&(x274+(x275&x276)));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = -1;
	uint64_t x278 = 0LLU;
	volatile int32_t x280 = INT32_MIN;
	volatile uint64_t t65 = 1446LLU;

	t65 = (x277&(x278+(x279&x280)));

	if (t65 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = INT32_MAX;
	uint64_t x282 = 1LLU;
	int32_t x283 = INT32_MIN;
	volatile uint64_t t66 = 0LLU;

	t66 = (x281&(x282+(x283&x284)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 9U;
	static int32_t x294 = 508006763;
	int64_t x295 = -11623727LL;
	int32_t x296 = 478891;

	t67 = (x293&(x294+(x295&x296)));

	if (t67 != 8LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = 1;
	int8_t x298 = INT8_MAX;
	uint16_t x299 = 0U;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t68 = 24697711;

	t68 = (x297&(x298+(x299&x300)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x305 = 1;
	static volatile int8_t x306 = -1;
	int32_t x308 = INT32_MAX;
	volatile int64_t t69 = 39592553LL;

	t69 = (x305&(x306+(x307&x308)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	static int8_t x311 = -1;
	static volatile int64_t t70 = INT64_MIN;

	t70 = (x309&(x310+(x311&x312)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = INT16_MIN;
	volatile uint32_t x314 = UINT32_MAX;
	static uint32_t x315 = 1224543U;
	volatile uint16_t x316 = UINT16_MAX;
	uint32_t t71 = 13129U;

	t71 = (x313&(x314+(x315&x316)));

	if (t71 != 32768U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x318 = INT32_MAX;
	uint64_t x319 = 2LLU;
	uint64_t x320 = UINT64_MAX;
	uint64_t t72 = 14204850203639397LLU;

	t72 = (x317&(x318+(x319&x320)));

	if (t72 != 2147483649LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = -1;
	uint8_t x323 = 1U;
	int32_t x324 = -100754;

	t73 = (x321&(x322+(x323&x324)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = -1LL;
	volatile int32_t x332 = -1;
	int64_t t74 = -558246888LL;

	t74 = (x329&(x330+(x331&x332)));

	if (t74 != -9223372036700625896LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -92LL;
	int64_t x334 = INT64_MIN;
	volatile int16_t x335 = INT16_MAX;
	volatile uint32_t x336 = UINT32_MAX;
	static volatile int64_t t75 = 6180309057563LL;

	t75 = (x333&(x334+(x335&x336)));

	if (t75 != -9223372036854743132LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x337 = 58U;
	uint8_t x338 = 0U;
	volatile int64_t x339 = INT64_MIN;
	int8_t x340 = -1;

	t76 = (x337&(x338+(x339&x340)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 1U;
	static volatile int8_t x343 = -1;
	static volatile uint32_t t77 = 2073416837U;

	t77 = (x341&(x342+(x343&x344)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x350 = 4;
	int16_t x351 = INT16_MAX;
	int32_t x352 = -1;
	int32_t t78 = -296763;

	t78 = (x349&(x350+(x351&x352)));

	if (t78 != 32771) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x353 = 0U;
	int8_t x354 = INT8_MIN;
	static int64_t x356 = INT64_MIN;
	volatile int64_t t79 = 713527564853981862LL;

	t79 = (x353&(x354+(x355&x356)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = 417868518;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MAX;
	volatile int64_t t80 = -42266LL;

	t80 = (x361&(x362+(x363&x364)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = 768159066LLU;
	volatile int64_t x366 = 148822LL;
	int16_t x367 = -710;

	t81 = (x365&(x366+(x367&x368)));

	if (t81 != 1362LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x370 = INT8_MAX;
	static int16_t x371 = 0;
	int64_t x372 = -1LL;
	static int64_t t82 = -11LL;

	t82 = (x369&(x370+(x371&x372)));

	if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x375 = 600561U;
	int32_t x376 = 4805509;
	static int64_t t83 = -671474898LL;

	t83 = (x373&(x374+(x375&x376)));

	if (t83 != 257LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = UINT64_MAX;
	volatile uint8_t x378 = 11U;
	int8_t x380 = -1;

	t84 = (x377&(x378+(x379&x380)));

	if (t84 != 32778LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = INT16_MIN;
	volatile int64_t t85 = 5228672923983LL;

	t85 = (x381&(x382+(x383&x384)));

	if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = 78U;
	int32_t x386 = INT32_MIN;
	static int64_t x387 = INT64_MAX;
	uint16_t x388 = 15886U;

	t86 = (x385&(x386+(x387&x388)));

	if (t86 != 14LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = -119;
	int64_t x391 = 3997829LL;

	t87 = (x389&(x390+(x391&x392)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x395 = UINT16_MAX;
	uint16_t x396 = UINT16_MAX;
	int32_t t88 = 229;

	t88 = (x393&(x394+(x395&x396)));

	if (t88 != 65407) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x400 = UINT8_MAX;
	static volatile int32_t t89 = -3861665;

	t89 = (x397&(x398+(x399&x400)));

	if (t89 != 59899908) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = -1;
	volatile uint64_t x402 = UINT64_MAX;
	static volatile int16_t x403 = -1;
	uint32_t x404 = 93718U;

	t90 = (x401&(x402+(x403&x404)));

	if (t90 != 93717LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -1;
	uint64_t x407 = UINT64_MAX;
	volatile int32_t x408 = INT32_MIN;
	uint64_t t91 = 223182781337917134LLU;

	t91 = (x405&(x406+(x407&x408)));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x409 = 3634624239128054LLU;
	volatile uint16_t x410 = 18U;
	uint16_t x411 = 24272U;
	volatile uint16_t x412 = 1U;
	static uint64_t t92 = 29357217029LLU;

	t92 = (x409&(x410+(x411&x412)));

	if (t92 != 18LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x414 = UINT8_MAX;
	int32_t x415 = 6102866;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t93 = 0;

	t93 = (x413&(x414+(x415&x416)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x417 = 10U;
	int32_t x418 = -1;
	uint64_t x419 = 27LLU;
	volatile uint64_t t94 = 1679184LLU;

	t94 = (x417&(x418+(x419&x420)));

	if (t94 != 10LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x421 = -55;
	int16_t x422 = 6260;
	uint16_t x424 = 47U;
	int32_t t95 = -20168597;

	t95 = (x421&(x422+(x423&x424)));

	if (t95 != 6273) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x425 = 7U;
	int16_t x426 = -1;
	static uint8_t x427 = 8U;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t96 = -450421996;

	t96 = (x425&(x426+(x427&x428)));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x430 = 1512;
	int8_t x431 = INT8_MIN;
	int16_t x432 = 2557;
	int64_t t97 = 2517648884LL;

	t97 = (x429&(x430+(x431&x432)));

	if (t97 != 3944LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x433 = 262LLU;
	int32_t x434 = INT32_MIN;
	volatile uint32_t x436 = 1U;

	t98 = (x433&(x434+(x435&x436)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = -1;
	int16_t x438 = 6318;
	uint32_t x439 = 127260553U;
	static volatile int32_t x440 = 0;
	static uint32_t t99 = 1U;

	t99 = (x437&(x438+(x439&x440)));

	if (t99 != 6318U) { NG(); } else { ; }
	
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

