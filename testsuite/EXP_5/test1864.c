#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
volatile int64_t x2 = -1LL;
static int64_t t0 = -12576636177791094LL;
int32_t t1 = -3306;
int8_t x14 = INT8_MIN;
uint64_t x20 = 447122657622810LLU;
uint64_t t3 = 39LLU;
static int64_t x22 = INT64_MIN;
uint8_t x23 = UINT8_MAX;
int64_t t4 = 14800294LL;
volatile uint64_t x29 = UINT64_MAX;
uint16_t x31 = 826U;
int16_t x32 = INT16_MIN;
uint64_t t5 = 6623837375398187557LLU;
volatile int64_t t6 = 1320699724LL;
volatile uint32_t x42 = 6U;
int64_t x43 = -1LL;
static int8_t x47 = -1;
int32_t x48 = 464842063;
volatile int16_t x53 = INT16_MIN;
volatile uint64_t t10 = 2552721LLU;
static uint64_t t11 = 23023261061358LLU;
volatile uint64_t x72 = UINT64_MAX;
uint8_t x76 = 3U;
int16_t x86 = -1;
static int64_t x92 = INT64_MAX;
int8_t x95 = INT8_MAX;
uint64_t x100 = 10LLU;
int32_t x111 = INT32_MAX;
int8_t x117 = 11;
static volatile uint64_t t21 = 704LLU;
uint64_t x124 = UINT64_MAX;
static uint16_t x132 = UINT16_MAX;
static volatile uint32_t t24 = 2U;
int64_t t25 = 295603413LL;
static int64_t x142 = INT64_MIN;
int32_t x145 = 929;
uint64_t x147 = UINT64_MAX;
static int8_t x148 = INT8_MIN;
volatile int32_t x152 = -1;
static volatile int64_t x155 = -1LL;
static int64_t x170 = -1LL;
int64_t t33 = 29851601276267LL;
int16_t x188 = -1;
static int16_t x189 = 0;
int64_t x190 = -1LL;
volatile uint64_t t37 = 1446015656LLU;
volatile int64_t x197 = -1LL;
int64_t t38 = 158LL;
volatile uint16_t x204 = 14U;
volatile int32_t t39 = -474012394;
static int64_t x207 = INT64_MIN;
volatile int8_t x215 = INT8_MIN;
volatile int32_t t42 = -1;
int32_t x217 = 503;
uint64_t t43 = 1720014589305LLU;
volatile uint16_t x224 = 282U;
volatile int64_t t44 = 22295LL;
int64_t x225 = -15839867349LL;
static uint64_t x228 = UINT64_MAX;
uint8_t x229 = 1U;
static int8_t x230 = -1;
static uint32_t x231 = 519714779U;
int64_t x233 = INT64_MAX;
int64_t x236 = INT64_MAX;
volatile int32_t t48 = 13741199;
static int32_t x246 = INT32_MIN;
int32_t t50 = 1012922;
int32_t x254 = -5;
volatile int8_t x255 = INT8_MAX;
static int32_t x260 = 88;
static int8_t x261 = -7;
uint8_t x263 = 14U;
int16_t x267 = INT16_MAX;
uint32_t t54 = 1U;
int32_t x273 = -1;
uint32_t x275 = UINT32_MAX;
volatile uint32_t t56 = 203U;
uint64_t x282 = UINT64_MAX;
volatile int32_t t61 = -2;
static int64_t x307 = -1LL;
volatile uint64_t t66 = 2LLU;
volatile int32_t t70 = -77068518;
static int32_t x334 = 4181;
volatile uint64_t x339 = 1013LLU;
volatile int64_t x348 = -1LL;
uint32_t x349 = 89386U;
static int32_t x355 = INT32_MIN;
volatile int16_t x356 = INT16_MAX;
int8_t x358 = INT8_MIN;
int8_t x361 = INT8_MIN;
static int16_t x363 = INT16_MIN;
uint16_t x365 = 1458U;
uint32_t x368 = UINT32_MAX;
volatile int64_t x371 = 2006546039LL;
volatile int64_t t79 = 601LL;
static uint32_t x384 = 4001U;
static volatile int32_t t82 = -555295909;
uint8_t x390 = UINT8_MAX;
int8_t x395 = INT8_MAX;
static uint16_t x397 = UINT16_MAX;
int16_t x398 = INT16_MAX;
int8_t x402 = -1;
uint8_t x421 = 22U;
int32_t x423 = -1;
volatile int16_t x424 = -1;
int32_t x425 = INT32_MAX;
int64_t x431 = 0LL;
int16_t x450 = INT16_MIN;
static uint8_t x455 = UINT8_MAX;
int8_t x457 = INT8_MAX;
int64_t x461 = 3084126456361735LL;
volatile uint32_t x464 = 270U;


void f0(void) {
	int8_t x3 = INT8_MAX;
	static volatile int64_t x4 = INT64_MAX;

	t0 = (x1%((x2|x3)+x4));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -106;
	int8_t x6 = INT8_MIN;
	volatile uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MAX;

	t1 = (x5%((x6|x7)+x8));

	if (t1 != -106) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x15 = 102366328971510562LLU;
	static int64_t x16 = -4793592LL;
	static uint64_t t2 = 354130LLU;

	t2 = (x13%((x14|x15)+x16));

	if (t2 != 4793558LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint16_t x18 = UINT16_MAX;
	int32_t x19 = -50141;

	t3 = (x17%((x18|x19)+x20));

	if (t3 != 125855411471756LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -19LL;
	int64_t x24 = INT64_MAX;

	t4 = (x21%((x22|x23)+x24));

	if (t4 != -19LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x30 = UINT8_MAX;

	t5 = (x29%((x30|x31)+x32));

	if (t5 != 31744LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = INT64_MIN;
	static int32_t x38 = -2518618;
	static volatile uint32_t x39 = 20328U;
	volatile int64_t x40 = INT64_MIN;

	t6 = (x37%((x38|x39)+x40));

	if (t6 != -4292468718LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = 9;
	int8_t x44 = INT8_MIN;
	static volatile int64_t t7 = -1776070692098516LL;

	t7 = (x41%((x42|x43)+x44));

	if (t7 != 9LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	int8_t x46 = 10;
	int32_t t8 = 232940;

	t8 = (x45%((x46|x47)+x48));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x54 = 1423801172403LL;
	uint8_t x55 = 1U;
	int8_t x56 = -1;
	int64_t t9 = 0LL;

	t9 = (x53%((x54|x55)+x56));

	if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	static uint64_t x58 = 0LLU;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;

	t10 = (x57%((x58|x59)+x60));

	if (t10 != 128LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 62LLU;
	int8_t x66 = INT8_MIN;
	int8_t x67 = -1;
	int8_t x68 = INT8_MIN;

	t11 = (x65%((x66|x67)+x68));

	if (t11 != 62LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 41U;
	volatile uint64_t t12 = 26LLU;

	t12 = (x69%((x70|x71)+x72));

	if (t12 != 7LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = -1;
	uint16_t x74 = 10471U;
	uint32_t x75 = 54192U;
	uint32_t t13 = 2U;

	t13 = (x73%((x74|x75)+x76));

	if (t13 != 28803U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	static uint16_t x80 = 1487U;
	int64_t t14 = 4367665170LL;

	t14 = (x77%((x78|x79)+x80));

	if (t14 != -1406LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -51830;
	static int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t15 = -425241;

	t15 = (x85%((x86|x87)+x88));

	if (t15 != -44) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -11251;
	int8_t x90 = -1;
	static int64_t x91 = 489LL;
	volatile int64_t t16 = -4079726LL;

	t16 = (x89%((x90|x91)+x92));

	if (t16 != -11251LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MIN;
	static volatile uint32_t x94 = 42129117U;
	uint32_t x96 = UINT32_MAX;
	static int64_t t17 = -929504094LL;

	t17 = (x93%((x94|x95)+x96));

	if (t17 != -15636608LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = 882;
	int8_t x98 = 1;
	uint16_t x99 = UINT16_MAX;
	volatile uint64_t t18 = 1865901234LLU;

	t18 = (x97%((x98|x99)+x100));

	if (t18 != 882LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = 4;
	int32_t x107 = INT32_MAX;
	uint32_t x108 = 122U;
	volatile uint32_t t19 = 796356U;

	t19 = (x105%((x106|x107)+x108));

	if (t19 != 2147450759U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = 136;
	static int8_t x110 = INT8_MAX;
	int64_t x112 = 1LL;
	volatile int64_t t20 = 8605033649647LL;

	t20 = (x109%((x110|x111)+x112));

	if (t20 != 136LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x118 = -22368LL;
	volatile int64_t x119 = INT64_MAX;
	uint64_t x120 = UINT64_MAX;

	t21 = (x117%((x118|x119)+x120));

	if (t21 != 11LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = INT32_MAX;
	volatile int16_t x122 = INT16_MAX;
	static uint32_t x123 = UINT32_MAX;
	uint64_t t22 = 12641147LLU;

	t22 = (x121%((x122|x123)+x124));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = 3U;
	volatile int8_t x126 = INT8_MAX;
	static uint32_t x127 = 21609130U;
	int64_t x128 = INT64_MIN;
	volatile int64_t t23 = 15831698848770128LL;

	t23 = (x125%((x126|x127)+x128));

	if (t23 != 3LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = 26;
	static uint32_t x130 = 214205257U;
	int8_t x131 = -1;

	t24 = (x129%((x130|x131)+x132));

	if (t24 != 26U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	volatile int16_t x140 = INT16_MIN;

	t25 = (x137%((x138|x139)+x140));

	if (t25 != 2684370943LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x141 = 1954386U;
	volatile uint64_t x143 = 1611LLU;
	int64_t x144 = 1857LL;
	volatile uint64_t t26 = 1629597675LLU;

	t26 = (x141%((x142|x143)+x144));

	if (t26 != 1954386LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x146 = INT8_MAX;
	static volatile uint64_t t27 = 1441343LLU;

	t27 = (x145%((x146|x147)+x148));

	if (t27 != 929LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x149 = -592270612352LL;
	volatile int64_t x150 = INT64_MAX;
	int32_t x151 = -1;
	int64_t t28 = 7LL;

	t28 = (x149%((x150|x151)+x152));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x153 = 107U;
	static volatile int16_t x154 = -922;
	int64_t x156 = -27475822796LL;
	int64_t t29 = -2368183546LL;

	t29 = (x153%((x154|x155)+x156));

	if (t29 != 107LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = 10646;
	static volatile int8_t x158 = 0;
	volatile uint64_t x159 = 7220912819043639509LLU;
	int8_t x160 = -1;
	uint64_t t30 = 190632462649LLU;

	t30 = (x157%((x158|x159)+x160));

	if (t30 != 10646LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = -498;
	int16_t x162 = 610;
	static int16_t x163 = 0;
	volatile int32_t x164 = INT32_MIN;
	static int32_t t31 = 1200323;

	t31 = (x161%((x162|x163)+x164));

	if (t31 != -498) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x165 = 0U;
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	volatile int8_t x168 = -8;
	volatile int64_t t32 = -338688766181423712LL;

	t32 = (x165%((x166|x167)+x168));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x169 = INT8_MIN;
	int32_t x171 = -6;
	volatile uint16_t x172 = 79U;

	t33 = (x169%((x170|x171)+x172));

	if (t33 != -50LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = 6U;
	int32_t x175 = -1;
	static int16_t x176 = -75;
	uint64_t t34 = 836292074063897LLU;

	t34 = (x173%((x174|x175)+x176));

	if (t34 != 75LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x185 = 107LL;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = 2794389;
	volatile uint64_t t35 = 48743LLU;

	t35 = (x185%((x186|x187)+x188));

	if (t35 != 107LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x191 = -1;
	static int64_t x192 = INT64_MAX;
	int64_t t36 = -462873857396757716LL;

	t36 = (x189%((x190|x191)+x192));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x193 = 80678071996939518LLU;
	uint8_t x194 = 4U;
	static volatile uint8_t x195 = 9U;
	static int64_t x196 = INT64_MIN;

	t37 = (x193%((x194|x195)+x196));

	if (t37 != 80678071996939518LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x198 = 0;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = INT32_MIN;

	t38 = (x197%((x198|x199)+x200));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile int8_t x202 = INT8_MAX;
	uint16_t x203 = 397U;

	t39 = (x201%((x202|x203)+x204));

	if (t39 != -23) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x205 = 2;
	int64_t x206 = -1LL;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t40 = 3004327496287362735LLU;

	t40 = (x205%((x206|x207)+x208));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 14U;
	int16_t x212 = 12;
	int32_t t41 = -212;

	t41 = (x209%((x210|x211)+x212));

	if (t41 != 25) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = 37U;
	volatile int16_t x214 = INT16_MIN;
	uint16_t x216 = 19392U;

	t42 = (x213%((x214|x215)+x216));

	if (t42 != 37) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x218 = 13234LLU;
	static int16_t x219 = 110;
	uint32_t x220 = 2U;

	t43 = (x217%((x218|x219)+x220));

	if (t43 != 503LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x221 = -1LL;
	static uint32_t x222 = 42258U;
	static uint16_t x223 = 2523U;

	t44 = (x221%((x222|x223)+x224));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x226 = INT32_MAX;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t45 = 329433995405LLU;

	t45 = (x225%((x226|x227)+x228));

	if (t45 != 18446744057869684267LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x232 = 4U;
	volatile uint32_t t46 = 59U;

	t46 = (x229%((x230|x231)+x232));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x234 = INT32_MIN;
	volatile int8_t x235 = -52;
	volatile int64_t t47 = 513425404969161LL;

	t47 = (x233%((x234|x235)+x236));

	if (t47 != 52LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x241 = -2;
	static int16_t x242 = INT16_MAX;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;

	t48 = (x241%((x242|x243)+x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x245 = INT64_MIN;
	volatile int32_t x247 = INT32_MIN;
	uint64_t x248 = 2LLU;
	uint64_t t49 = 259917165149LLU;

	t49 = (x245%((x246|x247)+x248));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -1;

	t50 = (x249%((x250|x251)+x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x253 = INT16_MAX;
	int32_t x256 = INT32_MAX;
	volatile int32_t t51 = 23947;

	t51 = (x253%((x254|x255)+x256));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x258 = 16U;
	uint64_t x259 = 3LLU;
	static volatile uint64_t t52 = 1655735LLU;

	t52 = (x257%((x258|x259)+x260));

	if (t52 != 41LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x262 = INT64_MIN;
	volatile int32_t x264 = -1;
	static int64_t t53 = 101LL;

	t53 = (x261%((x262|x263)+x264));

	if (t53 != -7LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	uint32_t x268 = UINT32_MAX;

	t54 = (x265%((x266|x267)+x268));

	if (t54 != 4294967168U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x269 = INT16_MIN;
	volatile int64_t x270 = -552LL;
	static int32_t x271 = INT32_MAX;
	static volatile int8_t x272 = 0;
	volatile int64_t t55 = 2163247537317LL;

	t55 = (x269%((x270|x271)+x272));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x274 = INT8_MIN;
	uint32_t x276 = 242313528U;

	t56 = (x273%((x274|x275)+x276));

	if (t56 != 175637336U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x277 = -9;
	static uint16_t x278 = 3002U;
	uint32_t x279 = 0U;
	volatile int8_t x280 = 6;
	volatile uint32_t t57 = 408U;

	t57 = (x277%((x278|x279)+x280));

	if (t57 != 503U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = -209;
	int64_t x283 = -2LL;
	uint16_t x284 = 52U;
	static uint64_t t58 = 72340LLU;

	t58 = (x281%((x282|x283)+x284));

	if (t58 != 47LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x285 = INT8_MAX;
	int16_t x286 = -1;
	volatile int16_t x287 = -7;
	int32_t x288 = INT32_MAX;
	int32_t t59 = 142640;

	t59 = (x285%((x286|x287)+x288));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = 4;
	uint64_t x290 = 1728846438328338585LLU;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MIN;
	uint64_t t60 = 31768LLU;

	t60 = (x289%((x290|x291)+x292));

	if (t60 != 4LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int32_t x295 = INT32_MIN;
	volatile uint8_t x296 = UINT8_MAX;

	t61 = (x293%((x294|x295)+x296));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 53316U;
	int8_t x298 = INT8_MAX;
	uint16_t x299 = 1U;
	int16_t x300 = INT16_MAX;
	uint32_t t62 = 20U;

	t62 = (x297%((x298|x299)+x300));

	if (t62 != 20422U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = INT64_MIN;
	int8_t x302 = 11;
	static volatile int32_t x303 = -1;
	uint8_t x304 = 7U;
	volatile int64_t t63 = 226246126401LL;

	t63 = (x301%((x302|x303)+x304));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x305 = INT8_MIN;
	volatile int16_t x306 = -1;
	uint64_t x308 = 242362795LLU;
	volatile uint64_t t64 = 197656593032LLU;

	t64 = (x305%((x306|x307)+x308));

	if (t64 != 136456700LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x310 = 0;
	static int64_t x311 = -1LL;
	int32_t x312 = 2792620;
	volatile int64_t t65 = -1LL;

	t65 = (x309%((x310|x311)+x312));

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = -1LL;
	uint64_t x314 = 545950196466LLU;
	int16_t x315 = -1;
	int16_t x316 = INT16_MIN;

	t66 = (x313%((x314|x315)+x316));

	if (t66 != 32768LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MIN;
	static volatile uint8_t x319 = 6U;
	int8_t x320 = INT8_MAX;
	int32_t t67 = -840485778;

	t67 = (x317%((x318|x319)+x320));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x321 = INT8_MIN;
	int16_t x322 = 44;
	volatile int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	static int64_t t68 = -1LL;

	t68 = (x321%((x322|x323)+x324));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = -224969;
	static uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	static int64_t x328 = INT64_MAX;
	uint64_t t69 = 34772479775007LLU;

	t69 = (x325%((x326|x327)+x328));

	if (t69 != 9223372036854550841LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	int16_t x331 = -1;
	int32_t x332 = -644128866;

	t70 = (x329%((x330|x331)+x332));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = INT32_MAX;
	int8_t x335 = -1;
	uint64_t x336 = 142560012473758611LLU;
	volatile uint64_t t71 = 15LLU;

	t71 = (x333%((x334|x335)+x336));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	uint64_t t72 = 1362173971808047LLU;

	t72 = (x337%((x338|x339)+x340));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -3562;
	volatile uint8_t x346 = 16U;
	static volatile uint8_t x347 = 3U;
	int64_t t73 = 34LL;

	t73 = (x345%((x346|x347)+x348));

	if (t73 != -16LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x350 = 102U;
	uint64_t x351 = 889794LLU;
	uint32_t x352 = 55U;
	static volatile uint64_t t74 = 2663LLU;

	t74 = (x349%((x350|x351)+x352));

	if (t74 != 89386LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = -1;
	int8_t x354 = -1;
	volatile int32_t t75 = 8;

	t75 = (x353%((x354|x355)+x356));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = -1;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = -1;
	static int32_t t76 = 1416;

	t76 = (x357%((x358|x359)+x360));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x362 = 40;
	int8_t x364 = -6;
	volatile int32_t t77 = -4;

	t77 = (x361%((x362|x363)+x364));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x366 = -1571;
	volatile uint64_t x367 = UINT64_MAX;
	volatile uint64_t t78 = 16231601LLU;

	t78 = (x365%((x366|x367)+x368));

	if (t78 != 1458LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = 59723U;
	int16_t x370 = INT16_MIN;
	int8_t x372 = 1;

	t79 = (x369%((x370|x371)+x372));

	if (t79 != 1163LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = 25U;
	static uint16_t x374 = 20U;
	int64_t x375 = -68206225910584LL;
	static int32_t x376 = -9926533;
	int64_t t80 = 2522650672173LL;

	t80 = (x373%((x374|x375)+x376));

	if (t80 != 25LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x381 = 2U;
	int32_t x382 = 0;
	int8_t x383 = INT8_MIN;
	uint32_t t81 = 12432709U;

	t81 = (x381%((x382|x383)+x384));

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MIN;
	static int32_t x386 = INT32_MIN;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;

	t82 = (x385%((x386|x387)+x388));

	if (t82 != -8) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x389 = 31;
	int8_t x391 = 27;
	uint8_t x392 = 2U;
	int32_t t83 = 489686491;

	t83 = (x389%((x390|x391)+x392));

	if (t83 != 31) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = -20;
	volatile int64_t x394 = 87748750176LL;
	volatile int8_t x396 = INT8_MIN;
	int64_t t84 = -766LL;

	t84 = (x393%((x394|x395)+x396));

	if (t84 != -20LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x399 = INT64_MIN;
	volatile uint8_t x400 = 3U;
	volatile int64_t t85 = 978619LL;

	t85 = (x397%((x398|x399)+x400));

	if (t85 != 65535LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = INT64_MAX;
	int64_t x403 = -1LL;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int64_t t86 = 4675LL;

	t86 = (x401%((x402|x403)+x404));

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x413 = 0U;
	int32_t x414 = 19546;
	static int64_t x415 = INT64_MIN;
	static int16_t x416 = -565;
	int64_t t87 = -541337694008267449LL;

	t87 = (x413%((x414|x415)+x416));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x417 = UINT64_MAX;
	int16_t x418 = -1;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	uint64_t t88 = 460LLU;

	t88 = (x417%((x418|x419)+x420));

	if (t88 != 32768LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x422 = 250;
	int32_t t89 = 1;

	t89 = (x421%((x422|x423)+x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x426 = -30;
	int64_t x427 = INT64_MAX;
	uint64_t x428 = UINT64_MAX;
	uint64_t t90 = 11095993119559109LLU;

	t90 = (x425%((x426|x427)+x428));

	if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x429 = UINT8_MAX;
	int8_t x430 = -15;
	volatile uint8_t x432 = UINT8_MAX;
	volatile int64_t t91 = -198789003152351533LL;

	t91 = (x429%((x430|x431)+x432));

	if (t91 != 15LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	uint32_t x435 = 20044U;
	int8_t x436 = INT8_MIN;
	volatile uint32_t t92 = 72629U;

	t92 = (x433%((x434|x435)+x436));

	if (t92 != 5634U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = 432995LL;
	uint32_t x438 = UINT32_MAX;
	volatile uint16_t x439 = 26U;
	int64_t x440 = -76LL;
	int64_t t93 = 163382866817593LL;

	t93 = (x437%((x438|x439)+x440));

	if (t93 != 432995LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x445 = 26U;
	int8_t x446 = INT8_MIN;
	uint8_t x447 = 78U;
	int32_t x448 = -1;
	volatile uint32_t t94 = 420U;

	t94 = (x445%((x446|x447)+x448));

	if (t94 != 26U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = INT64_MIN;
	uint8_t x451 = UINT8_MAX;
	static int32_t x452 = -1;
	volatile int64_t t95 = -13185169LL;

	t95 = (x449%((x450|x451)+x452));

	if (t95 != -16256LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -1;
	static int8_t x454 = 0;
	uint32_t x456 = 81980U;
	volatile uint32_t t96 = 642151U;

	t96 = (x453%((x454|x455)+x456));

	if (t96 != 79950U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x458 = -13;
	uint32_t x459 = 252054110U;
	volatile uint64_t x460 = 3LLU;
	uint64_t t97 = 940673912324692898LLU;

	t97 = (x457%((x458|x459)+x460));

	if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x462 = 10962;
	uint16_t x463 = 3U;
	volatile int64_t t98 = -3677132122LL;

	t98 = (x461%((x462|x463)+x464));

	if (t98 != 1820LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = 3654012838030415518LL;
	int32_t x466 = INT32_MIN;
	volatile int16_t x467 = INT16_MAX;
	uint32_t x468 = UINT32_MAX;
	static volatile int64_t t99 = 46335000537LL;

	t99 = (x465%((x466|x467)+x468));

	if (t99 != 1405022478LL) { NG(); } else { ; }
	
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

