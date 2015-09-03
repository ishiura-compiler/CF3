#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 43U;
static int8_t x7 = 26;
uint64_t x34 = 18563302669LLU;
int64_t x35 = INT64_MIN;
uint8_t x38 = 47U;
int32_t t5 = -1002;
static int8_t x56 = INT8_MAX;
int8_t x61 = -1;
volatile int64_t t10 = -47LL;
int32_t t11 = -1;
int32_t t12 = 2;
int16_t x82 = -1;
int64_t x84 = INT64_MIN;
static volatile uint32_t x85 = UINT32_MAX;
static int8_t x89 = -1;
uint64_t x90 = 28065780LLU;
int8_t x93 = -11;
static int32_t x94 = -1;
int8_t x101 = 12;
int32_t x103 = -24;
static volatile int32_t x106 = -60757328;
volatile uint16_t x117 = 7U;
static volatile int64_t x126 = 16633029868459877LL;
int32_t x131 = -1;
volatile uint64_t t23 = 7806777421983732682LLU;
int32_t x139 = INT32_MIN;
volatile uint16_t x140 = 17U;
static uint32_t x144 = 2548006U;
int16_t x146 = -1334;
uint8_t x148 = UINT8_MAX;
int32_t t26 = -13461;
int16_t x157 = -336;
uint8_t x169 = 122U;
uint32_t x171 = UINT32_MAX;
int16_t x175 = INT16_MIN;
static volatile uint64_t x182 = 2852215179027417293LLU;
int64_t x186 = -1LL;
static volatile uint8_t x187 = 0U;
static int16_t x197 = 854;
volatile int32_t t36 = 9;
int32_t x208 = INT32_MIN;
static int8_t x215 = -1;
int16_t x216 = -7;
uint64_t x220 = UINT64_MAX;
uint64_t t40 = 7LLU;
static volatile uint64_t x221 = UINT64_MAX;
int32_t x222 = INT32_MIN;
uint8_t x239 = UINT8_MAX;
int64_t x254 = INT64_MIN;
int32_t x256 = 4;
uint64_t x260 = 517126998084LLU;
volatile uint64_t t49 = 10433LLU;
static int32_t t55 = -74683422;
int32_t x306 = -1;
uint32_t t57 = 52832U;
uint16_t x318 = 238U;
static int32_t x326 = -1;
int16_t x330 = 0;
uint64_t t61 = 2008707090LLU;
uint32_t t63 = 4776U;
static int64_t x346 = 6990577119629930LL;
volatile int64_t t65 = -422193077LL;
static volatile int64_t x361 = 0LL;
int64_t x362 = -1LL;
int32_t x373 = INT32_MIN;
volatile int64_t x381 = 386LL;
int8_t x382 = INT8_MIN;
static int8_t x385 = 32;
static int32_t x388 = INT32_MIN;
int64_t x403 = -192217LL;
int64_t x409 = 63LL;
uint16_t x413 = 891U;
static uint32_t x414 = UINT32_MAX;
volatile uint16_t x415 = 1U;
volatile int16_t x418 = 0;
int8_t x431 = -1;
int64_t x436 = INT64_MAX;
static volatile int64_t t80 = 259443068LL;
int8_t x441 = INT8_MIN;
static int32_t x446 = -664;
int32_t x448 = INT32_MAX;
uint64_t x458 = UINT64_MAX;
static volatile uint16_t x485 = 87U;
uint32_t x488 = 27U;
uint32_t t88 = 6U;
int64_t t89 = -44794671789707875LL;
int8_t x496 = -10;
static volatile int32_t x502 = INT32_MAX;
static int64_t x503 = -132183761LL;
uint8_t x509 = UINT8_MAX;
volatile int16_t x512 = -1;
uint64_t t94 = 288LLU;
static uint32_t t95 = 19504U;
volatile int8_t x527 = INT8_MAX;
uint32_t x530 = UINT32_MAX;


void f0(void) {
	volatile int32_t x2 = 120702486;
	volatile uint32_t x3 = UINT32_MAX;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 626309718053LL;

	t0 = (x1^((x2+x3)+x4));

	if (t0 != 120702527LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint16_t x6 = UINT16_MAX;
	int16_t x8 = -1;
	volatile int64_t t1 = -8LL;

	t1 = (x5^((x6+x7)+x8));

	if (t1 != -65561LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	uint64_t x10 = 57605795956058LLU;
	volatile int16_t x11 = -1;
	volatile int16_t x12 = INT16_MAX;
	uint64_t t2 = 943930LLU;

	t2 = (x9^((x10+x11)+x12));

	if (t2 != 57605795988775LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 1U;
	volatile int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	uint64_t t3 = 456955497LLU;

	t3 = (x25^((x26+x27)+x28));

	if (t3 != 2147483520LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = 21;
	int8_t x36 = -1;
	uint64_t t4 = 543647292474228001LLU;

	t4 = (x33^((x34+x35)+x36));

	if (t4 != 9223372055418078489LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = INT8_MAX;
	volatile int16_t x39 = -1;
	int16_t x40 = 167;

	t5 = (x37^((x38+x39)+x40));

	if (t5 != 170) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	uint32_t x42 = 7U;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = INT8_MAX;
	int64_t t6 = -350471LL;

	t6 = (x41^((x42+x43)+x44));

	if (t6 != 9223372036854775674LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -34;
	volatile int8_t x46 = -1;
	static uint64_t x47 = 14033651LLU;
	int8_t x48 = INT8_MIN;
	uint64_t t7 = 476521350196LLU;

	t7 = (x45^((x46+x47)+x48));

	if (t7 != 18446744073695518124LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x49 = -48;
	uint32_t x50 = 25611872U;
	static uint8_t x51 = 108U;
	static int8_t x52 = 0;
	uint32_t t8 = 208551508U;

	t8 = (x49^((x50+x51)+x52));

	if (t8 != 4269355292U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -24;
	int8_t x54 = INT8_MIN;
	int8_t x55 = 8;
	int32_t t9 = -234;

	t9 = (x53^((x54+x55)+x56));

	if (t9 != -17) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x62 = 106U;
	int32_t x63 = 197066;
	int64_t x64 = -1LL;

	t10 = (x61^((x62+x63)+x64));

	if (t10 != -197172LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = -8047053;
	volatile uint16_t x66 = 1525U;
	volatile int16_t x67 = 14;
	int16_t x68 = INT16_MAX;

	t11 = (x65^((x66+x67)+x68));

	if (t11 != -8015823) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 0U;
	static volatile uint16_t x74 = 398U;
	uint8_t x75 = UINT8_MAX;
	static uint8_t x76 = 26U;

	t12 = (x73^((x74+x75)+x76));

	if (t12 != 679) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int8_t x83 = 2;
	int64_t t13 = 52576657858LL;

	t13 = (x81^((x82+x83)+x84));

	if (t13 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x86 = INT8_MIN;
	uint32_t x87 = 11U;
	int32_t x88 = -1;
	volatile uint32_t t14 = 3U;

	t14 = (x85^((x86+x87)+x88));

	if (t14 != 117U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x91 = 3U;
	uint64_t x92 = 3911731097982926256LLU;
	static uint64_t t15 = 20910393LLU;

	t15 = (x89^((x90+x91)+x92));

	if (t15 != 14535012975698559576LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x95 = 164U;
	int8_t x96 = -1;
	int32_t t16 = -2490321;

	t16 = (x93^((x94+x95)+x96));

	if (t16 != -169) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x102 = -1;
	int64_t x104 = INT64_MAX;
	volatile int64_t t17 = 123282179LL;

	t17 = (x101^((x102+x103)+x104));

	if (t17 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -1;
	volatile int64_t x107 = -102804165347144LL;
	int64_t x108 = 7584LL;
	int64_t t18 = -29LL;

	t18 = (x105^((x106+x107)+x108));

	if (t18 != 102804226096887LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = -1;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 8718181621716374LLU;
	int8_t x116 = INT8_MAX;
	static uint64_t t19 = 24691344453345890LLU;

	t19 = (x113^((x114+x115)+x116));

	if (t19 != 9214653855233059306LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x118 = 1;
	static volatile int8_t x119 = INT8_MIN;
	static uint32_t x120 = 6U;
	volatile uint32_t t20 = 17075U;

	t20 = (x117^((x118+x119)+x120));

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 11;
	int16_t x123 = INT16_MIN;
	int16_t x124 = 23;
	int32_t t21 = 48232413;

	t21 = (x121^((x122+x123)+x124));

	if (t21 != 32674) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x125 = UINT8_MAX;
	volatile int8_t x127 = -15;
	static volatile int16_t x128 = INT16_MIN;
	int64_t t22 = 2756LL;

	t22 = (x125^((x126+x127)+x128));

	if (t22 != 16633029868427177LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = 2;
	volatile uint64_t x132 = 49LLU;

	t23 = (x129^((x130+x131)+x132));

	if (t23 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x137 = 0U;
	volatile uint16_t x138 = UINT16_MAX;
	int32_t t24 = 16582321;

	t24 = (x137^((x138+x139)+x140));

	if (t24 != -2147418096) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = 8;
	volatile uint32_t x143 = 8U;
	static volatile uint32_t t25 = 2036U;

	t25 = (x141^((x142+x143)+x144));

	if (t25 != 2498249U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x145 = 99U;
	int32_t x147 = -413940;

	t26 = (x145^((x146+x147)+x148));

	if (t26 != -415050) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MAX;
	int64_t x151 = -5775275536LL;
	static int16_t x152 = INT16_MIN;
	volatile int64_t t27 = 70672437266477177LL;

	t27 = (x149^((x150+x151)+x152));

	if (t27 != -7109626352LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x158 = INT8_MAX;
	int32_t x159 = -403170602;
	static int8_t x160 = 0;
	int32_t t28 = -16346504;

	t28 = (x157^((x158+x159)+x160));

	if (t28 != 403170789) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x161 = UINT16_MAX;
	volatile int8_t x162 = INT8_MIN;
	static volatile uint64_t x163 = 11025LLU;
	volatile int8_t x164 = -1;
	uint64_t t29 = 429324854075LLU;

	t29 = (x161^((x162+x163)+x164));

	if (t29 != 54639LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x170 = 184U;
	int32_t x172 = INT32_MIN;
	volatile uint32_t t30 = 8U;

	t30 = (x169^((x170+x171)+x172));

	if (t30 != 2147483853U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x173 = -1;
	int16_t x174 = 50;
	static uint16_t x176 = UINT16_MAX;
	int32_t t31 = 197;

	t31 = (x173^((x174+x175)+x176));

	if (t31 != -32818) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = 1964U;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = -452;
	volatile uint32_t t32 = 952793U;

	t32 = (x177^((x178+x179)+x180));

	if (t32 != 63768U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = 1;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t33 = 222339743LLU;

	t33 = (x181^((x182+x183)+x184));

	if (t33 != 2852215179027384781LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 46582699U;
	uint16_t x188 = UINT16_MAX;
	int64_t t34 = -104510LL;

	t34 = (x185^((x186+x187)+x188));

	if (t34 != 46543957LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = -1;
	static uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 928028688156LLU;
	int64_t x196 = INT64_MIN;
	uint64_t t35 = 503733242609449LLU;

	t35 = (x193^((x194+x195)+x196));

	if (t35 != 9223371108826022116LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x198 = INT8_MIN;
	int32_t x199 = 1;
	volatile int8_t x200 = INT8_MIN;

	t36 = (x197^((x198+x199)+x200));

	if (t36 != -937) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = UINT32_MAX;
	volatile uint16_t x203 = 31032U;
	static int32_t x204 = INT32_MIN;
	uint32_t t37 = 1493744564U;

	t37 = (x201^((x202+x203)+x204));

	if (t37 != 31031U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = -1;
	uint8_t x206 = 1U;
	int64_t x207 = 178292939LL;
	int64_t t38 = -107035945253998LL;

	t38 = (x205^((x206+x207)+x208));

	if (t38 != 1969190707LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x213 = -48655887;
	static int8_t x214 = INT8_MIN;
	volatile int32_t t39 = 105410070;

	t39 = (x213^((x214+x215)+x216));

	if (t39 != 48656009) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x217 = UINT64_MAX;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = 502;

	t40 = (x217^((x218+x219)+x220));

	if (t40 != 18446744073709551115LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x223 = 2;
	int8_t x224 = -1;
	uint64_t t41 = 264964637283LLU;

	t41 = (x221^((x222+x223)+x224));

	if (t41 != 2147483646LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int16_t x226 = INT16_MAX;
	volatile int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MAX;
	volatile int64_t t42 = -45925457199789784LL;

	t42 = (x225^((x226+x227)+x228));

	if (t42 != -9223372034707259647LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MIN;
	int64_t x231 = 369605703460LL;
	int16_t x232 = -1;
	volatile int64_t t43 = -92220284897602LL;

	t43 = (x229^((x230+x231)+x232));

	if (t43 != 9223371669396555996LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	static volatile int64_t x235 = INT64_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	static volatile int64_t t44 = -4LL;

	t44 = (x233^((x234+x235)+x236));

	if (t44 != 4294967550LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x237 = UINT32_MAX;
	volatile int16_t x238 = -956;
	volatile uint8_t x240 = UINT8_MAX;
	uint32_t t45 = 253741U;

	t45 = (x237^((x238+x239)+x240));

	if (t45 != 445U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = 1949611062U;
	uint32_t x242 = 27322U;
	static int64_t x243 = INT64_MIN;
	int64_t x244 = 144170639LL;
	int64_t t46 = 23LL;

	t46 = (x241^((x242+x243)+x244));

	if (t46 != -9223372034763063937LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = UINT16_MAX;
	uint16_t x250 = UINT16_MAX;
	volatile int32_t x251 = INT32_MIN;
	int16_t x252 = 156;
	volatile int32_t t47 = -5;

	t47 = (x249^((x250+x251)+x252));

	if (t47 != -2147352732) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = INT8_MIN;
	int8_t x255 = 1;
	volatile int64_t t48 = 22403471354LL;

	t48 = (x253^((x254+x255)+x256));

	if (t48 != 9223372036854775685LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MIN;
	volatile int16_t x259 = 0;

	t49 = (x257^((x258+x259)+x260));

	if (t49 != 517126965307LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x261 = 12839262U;
	static uint32_t x262 = UINT32_MAX;
	uint64_t x263 = 50445165742LLU;
	static int32_t x264 = -1;
	uint64_t t50 = 9647395LLU;

	t50 = (x261^((x262+x263)+x264));

	if (t50 != 54727790066LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	volatile uint64_t x267 = 5963405038LLU;
	static int32_t x268 = -1;
	uint64_t t51 = 1049101LLU;

	t51 = (x265^((x266+x267)+x268));

	if (t51 != 18446744067746146579LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x269 = 1U;
	volatile int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MAX;
	static int32_t x272 = 267983713;
	volatile int64_t t52 = 2429466906LL;

	t52 = (x269^((x270+x271)+x272));

	if (t52 != -9223372036586791967LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = -1;
	volatile uint32_t x294 = 121353U;
	int64_t x295 = INT64_MIN;
	int8_t x296 = -12;
	volatile int64_t t53 = 242606LL;

	t53 = (x293^((x294+x295)+x296));

	if (t53 != 9223372036854654466LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = INT32_MIN;
	static int8_t x298 = INT8_MAX;
	static uint16_t x299 = UINT16_MAX;
	int64_t x300 = -105645873458410000LL;
	static int64_t t54 = 81292444777071LL;

	t54 = (x297^((x298+x299)+x300));

	if (t54 != 105645873744547438LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x301 = 8U;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = 1;
	static int32_t x304 = 12;

	t55 = (x301^((x302+x303)+x304));

	if (t55 != 260) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x305 = -677387084;
	uint64_t x307 = 378385509589067933LLU;
	int64_t x308 = INT64_MIN;
	volatile uint64_t t56 = 1026431369133808394LLU;

	t56 = (x305^((x306+x307)+x308));

	if (t56 != 8844986527934696488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = INT8_MAX;
	volatile uint32_t x314 = 27238U;
	static int8_t x315 = 25;
	static uint8_t x316 = 85U;

	t57 = (x313^((x314+x315)+x316));

	if (t57 != 27307U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x317 = INT8_MIN;
	int8_t x319 = 0;
	int64_t x320 = INT64_MIN;
	volatile int64_t t58 = 3329LL;

	t58 = (x317^((x318+x319)+x320));

	if (t58 != 9223372036854775662LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = -1;
	int16_t x322 = 0;
	int64_t x323 = INT64_MAX;
	static int32_t x324 = -3;
	volatile int64_t t59 = 106LL;

	t59 = (x321^((x322+x323)+x324));

	if (t59 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x325 = INT16_MIN;
	int32_t x327 = -364;
	int16_t x328 = -1;
	volatile int32_t t60 = 10;

	t60 = (x325^((x326+x327)+x328));

	if (t60 != 32402) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x329 = 1818U;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = 772854522268LLU;

	t61 = (x329^((x330+x331)+x332));

	if (t61 != 770707039878LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x333 = -87222589LL;
	int16_t x334 = 7;
	uint8_t x335 = 18U;
	int16_t x336 = -1;
	volatile int64_t t62 = -14577004815287LL;

	t62 = (x333^((x334+x335)+x336));

	if (t62 != -87222565LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x341 = 74U;
	static uint32_t x342 = 357U;
	int32_t x343 = -1;
	static int32_t x344 = INT32_MIN;

	t63 = (x341^((x342+x343)+x344));

	if (t63 != 2147483950U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x345 = -1;
	volatile uint64_t x347 = 1644073771146LLU;
	int16_t x348 = INT16_MAX;
	static uint64_t t64 = 9LLU;

	t64 = (x345^((x346+x347)+x348));

	if (t64 != 18439751852516117772LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MAX;
	int64_t x360 = -1LL;

	t65 = (x357^((x358+x359)+x360));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x363 = INT8_MAX;
	static int16_t x364 = INT16_MIN;
	int64_t t66 = 1LL;

	t66 = (x361^((x362+x363)+x364));

	if (t66 != -32642LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x365 = INT8_MIN;
	static uint32_t x366 = 99U;
	static volatile int64_t x367 = -1LL;
	int32_t x368 = INT32_MIN;
	int64_t t67 = 2942665646453767LL;

	t67 = (x365^((x366+x367)+x368));

	if (t67 != 2147483618LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = 2300;
	uint16_t x370 = UINT16_MAX;
	uint32_t x371 = 0U;
	int16_t x372 = 221;
	uint32_t t68 = 956277184U;

	t68 = (x369^((x370+x371)+x372));

	if (t68 != 67616U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x374 = -2;
	volatile int32_t x375 = INT32_MAX;
	uint64_t x376 = 393210207LLU;
	uint64_t t69 = 2084800278942283LLU;

	t69 = (x373^((x374+x375)+x376));

	if (t69 != 18446744069807794524LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x383 = INT16_MIN;
	int16_t x384 = -1;
	static volatile int64_t t70 = -38LL;

	t70 = (x381^((x382+x383)+x384));

	if (t70 != -33027LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x386 = 63523LLU;
	volatile int64_t x387 = INT64_MIN;
	volatile uint64_t t71 = 8935LLU;

	t71 = (x385^((x386+x387)+x388));

	if (t71 != 9223372034707355651LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x401 = INT8_MAX;
	static int64_t x402 = -1LL;
	int32_t x404 = -929818;
	static volatile int64_t t72 = 61663233000818556LL;

	t72 = (x401^((x402+x403)+x404));

	if (t72 != -1121933LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x405 = INT64_MAX;
	int8_t x406 = -23;
	uint32_t x407 = 28461U;
	int16_t x408 = INT16_MIN;
	int64_t t73 = -253926329LL;

	t73 = (x405^((x406+x407)+x408));

	if (t73 != 9223372032559812841LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x410 = 749309985U;
	static int16_t x411 = INT16_MIN;
	uint8_t x412 = 2U;
	int64_t t74 = 18708895761104535LL;

	t74 = (x409^((x410+x411)+x412));

	if (t74 != 749277212LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x416 = -1;
	uint32_t t75 = 21U;

	t75 = (x413^((x414+x415)+x416));

	if (t75 != 4294966404U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x417 = 48279U;
	volatile uint32_t x419 = 121342409U;
	static int16_t x420 = -1;
	uint32_t t76 = 2784U;

	t76 = (x417^((x418+x419)+x420));

	if (t76 != 121320799U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x425 = -1LL;
	uint16_t x426 = 71U;
	volatile uint64_t x427 = UINT64_MAX;
	int16_t x428 = -1;
	volatile uint64_t t77 = 337309929960LLU;

	t77 = (x425^((x426+x427)+x428));

	if (t77 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x429 = INT32_MIN;
	static volatile int8_t x430 = 0;
	int8_t x432 = INT8_MAX;
	int32_t t78 = 2;

	t78 = (x429^((x430+x431)+x432));

	if (t78 != -2147483522) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x433 = 0;
	int64_t x434 = -510317LL;
	volatile int8_t x435 = -1;
	int64_t t79 = 754LL;

	t79 = (x433^((x434+x435)+x436));

	if (t79 != 9223372036854265489LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x437 = 522U;
	int16_t x438 = INT16_MIN;
	static int64_t x439 = -857088LL;
	int16_t x440 = -1123;

	t80 = (x437^((x438+x439)+x440));

	if (t80 != -891497LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x442 = -2;
	int16_t x443 = INT16_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t81 = 449249;

	t81 = (x441^((x442+x443)+x444));

	if (t81 != 32637) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x445 = 23023U;
	uint64_t x447 = UINT64_MAX;
	static volatile uint64_t t82 = 29982LLU;

	t82 = (x445^((x446+x447)+x448));

	if (t82 != 2147460233LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x449 = -20859344364LL;
	static volatile int8_t x450 = 0;
	int16_t x451 = INT16_MIN;
	uint32_t x452 = 280U;
	int64_t t83 = 371LL;

	t83 = (x449^((x450+x451)+x452));

	if (t83 != -17795372276LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	int8_t x455 = 7;
	int16_t x456 = 6943;
	volatile int32_t t84 = -867;

	t84 = (x453^((x454+x455)+x456));

	if (t84 != 2147476697) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x457 = UINT8_MAX;
	int16_t x459 = INT16_MIN;
	uint8_t x460 = 25U;
	static volatile uint64_t t85 = 33330273953LLU;

	t85 = (x457^((x458+x459)+x460));

	if (t85 != 18446744073709519079LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x465 = INT64_MIN;
	int8_t x466 = 9;
	uint32_t x467 = 14U;
	int32_t x468 = INT32_MIN;
	int64_t t86 = -1LL;

	t86 = (x465^((x466+x467)+x468));

	if (t86 != -9223372034707292137LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x477 = 5842;
	static int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MAX;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t87 = 4884219903745010LLU;

	t87 = (x477^((x478+x479)+x480));

	if (t87 != 5679LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x486 = -1;
	volatile uint16_t x487 = 11U;

	t88 = (x485^((x486+x487)+x488));

	if (t88 != 114U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x489 = 66457183454136LL;
	int8_t x490 = -27;
	int16_t x491 = 1918;
	uint8_t x492 = 27U;

	t89 = (x489^((x490+x491)+x492));

	if (t89 != 66457183454406LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x493 = -1;
	uint64_t x494 = UINT64_MAX;
	int16_t x495 = INT16_MIN;
	volatile uint64_t t90 = 167725LLU;

	t90 = (x493^((x494+x495)+x496));

	if (t90 != 32778LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x497 = INT32_MAX;
	volatile int16_t x498 = 0;
	static int16_t x499 = INT16_MAX;
	uint16_t x500 = UINT16_MAX;
	int32_t t91 = 8109;

	t91 = (x497^((x498+x499)+x500));

	if (t91 != 2147385345) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x501 = INT16_MIN;
	int16_t x504 = 426;
	int64_t t92 = -224208LL;

	t92 = (x501^((x502+x503)+x504));

	if (t92 != -2015327528LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x505 = 74834189345172LLU;
	int32_t x506 = -1;
	static uint32_t x507 = UINT32_MAX;
	int64_t x508 = 189944121LL;
	uint64_t t93 = 0LLU;

	t93 = (x505^((x506+x507)+x508));

	if (t93 != 74830042345635LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x510 = -8;
	uint64_t x511 = UINT64_MAX;

	t94 = (x509^((x510+x511)+x512));

	if (t94 != 18446744073709551369LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x513 = 1;
	int32_t x514 = INT32_MIN;
	static uint8_t x515 = UINT8_MAX;
	uint32_t x516 = 502641484U;

	t95 = (x513^((x514+x515)+x516));

	if (t95 != 2650125386U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = -1;
	volatile uint32_t x518 = UINT32_MAX;
	int64_t x519 = -3859LL;
	static uint16_t x520 = 9783U;
	int64_t t96 = 29LL;

	t96 = (x517^((x518+x519)+x520));

	if (t96 != -4294973220LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x525 = 413028998LLU;
	uint32_t x526 = 8019589U;
	uint32_t x528 = 2U;
	volatile uint64_t t97 = 586004484LLU;

	t97 = (x525^((x526+x527)+x528));

	if (t97 != 417598848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x529 = 6;
	static int16_t x531 = -14349;
	int64_t x532 = INT64_MIN;
	int64_t t98 = 568649339177853698LL;

	t98 = (x529^((x530+x531)+x532));

	if (t98 != -9223372032559822860LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x533 = 0LL;
	static volatile int8_t x534 = 18;
	uint32_t x535 = 1686765U;
	static uint16_t x536 = 413U;
	int64_t t99 = 4380LL;

	t99 = (x533^((x534+x535)+x536));

	if (t99 != 1687196LL) { NG(); } else { ; }
	
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

