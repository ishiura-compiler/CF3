#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MAX;
uint64_t x17 = 11917951188LLU;
int64_t x23 = -1LL;
int8_t x24 = -15;
uint8_t x29 = UINT8_MAX;
int16_t x37 = INT16_MAX;
volatile int16_t x38 = INT16_MIN;
int32_t x44 = -1;
static volatile int32_t t9 = 43170869;
uint32_t x48 = 11721U;
uint64_t x53 = 15606LLU;
volatile uint64_t t11 = 2613273LLU;
uint64_t t12 = UINT64_MAX;
volatile int8_t x64 = INT8_MIN;
static volatile uint32_t x76 = 2975U;
static int16_t x81 = -1;
int32_t x87 = INT32_MIN;
int8_t x91 = INT8_MAX;
uint16_t x92 = 2U;
uint64_t t20 = 3608379860909250LLU;
uint16_t x103 = 18U;
static volatile int32_t t22 = -164610;
int64_t x110 = INT64_MIN;
static int8_t x115 = INT8_MAX;
uint8_t x119 = UINT8_MAX;
uint32_t t25 = UINT32_MAX;
int8_t x129 = -7;
volatile int32_t x143 = INT32_MIN;
int64_t t29 = -1039871971837LL;
int64_t x146 = -1LL;
int32_t x157 = 59943095;
int16_t x159 = -1;
static volatile uint32_t t35 = 4U;
uint64_t x175 = UINT64_MAX;
static int16_t x179 = -1;
int64_t x183 = INT64_MIN;
static int16_t x188 = 4;
volatile int64_t t41 = -21994959885LL;
volatile int16_t x194 = -1;
uint8_t x195 = 12U;
int8_t x196 = -1;
uint16_t x202 = 6U;
uint16_t x203 = UINT16_MAX;
int64_t x208 = -171LL;
static uint8_t x209 = UINT8_MAX;
volatile int64_t t47 = -2851340LL;
volatile uint16_t x217 = 3584U;
volatile int8_t x220 = -1;
int64_t x223 = -475636LL;
int16_t x230 = INT16_MIN;
int32_t t51 = -23625;
static int16_t x265 = -1;
volatile int64_t x267 = INT64_MIN;
int32_t x270 = INT32_MAX;
int64_t x277 = INT64_MIN;
int64_t x279 = 2094LL;
volatile int64_t t57 = -267387123521581143LL;
int16_t x281 = INT16_MIN;
int8_t x283 = -1;
int64_t x284 = 3988714453LL;
static int16_t x287 = INT16_MIN;
int8_t x301 = -25;
static volatile int16_t x302 = INT16_MAX;
static volatile int8_t x311 = INT8_MIN;
volatile int64_t x312 = -1LL;
int8_t x314 = -1;
volatile int8_t x319 = -10;
int16_t x332 = INT16_MAX;
static int16_t x341 = INT16_MIN;
int64_t x343 = INT64_MIN;
static volatile int64_t t69 = -23061094683219356LL;
int8_t x354 = -1;
volatile int64_t t70 = -734356368683799LL;
static volatile int64_t t71 = 130295209198672197LL;
int16_t x366 = -15;
int16_t x368 = 2526;
int32_t t72 = 267755;
volatile int64_t t74 = 5351063523084275LL;
int64_t x384 = -58118646488332LL;
uint64_t x385 = 81693593309LLU;
int8_t x387 = -2;
volatile int32_t x393 = INT32_MAX;
static uint16_t x397 = UINT16_MAX;
static int64_t x405 = -1LL;
volatile int32_t x406 = INT32_MIN;
static int8_t x414 = INT8_MIN;
static uint8_t x418 = UINT8_MAX;
volatile uint64_t t84 = UINT64_MAX;
int16_t x423 = INT16_MIN;
static uint16_t x430 = 25U;
uint64_t x433 = 1150LLU;
static uint32_t x435 = 52558216U;
volatile int8_t x436 = 6;
uint16_t x447 = 3863U;
int16_t x448 = -1;
volatile int32_t t90 = 7;
uint8_t x457 = UINT8_MAX;
int8_t x458 = 0;
int64_t x474 = -1LL;
int16_t x484 = INT16_MIN;
static int64_t x492 = 1145326911LL;
int16_t x494 = INT16_MAX;


void f0(void) {
	int64_t x5 = 5LL;
	static uint32_t x7 = 0U;
	int64_t x8 = INT64_MIN;
	volatile int64_t t0 = 11950465LL;

	t0 = (x5|((x6+x7)+x8));

	if (t0 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int16_t x11 = -1;
	int8_t x12 = -12;
	static int64_t t1 = -36676685068962LL;

	t1 = (x9|((x10+x11)+x12));

	if (t1 != -14LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	uint64_t x14 = UINT64_MAX;
	volatile int64_t x15 = -1LL;
	volatile int16_t x16 = 646;
	uint64_t t2 = 873382989LLU;

	t2 = (x13|((x14+x15)+x16));

	if (t2 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = 368U;
	uint16_t x19 = 12654U;
	static volatile int8_t x20 = 1;
	volatile uint64_t t3 = 46186LLU;

	t3 = (x17|((x18+x19)+x20));

	if (t3 != 11917963999LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = -1;
	int16_t x22 = 11036;
	volatile int64_t t4 = 3382335LL;

	t4 = (x21|((x22+x23)+x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 7677140945721541990LLU;
	static volatile int16_t x26 = -1;
	int16_t x27 = INT16_MAX;
	volatile int8_t x28 = INT8_MAX;
	static volatile uint64_t t5 = 28253249LLU;

	t5 = (x25|((x26+x27)+x28));

	if (t5 != 7677140945721542015LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = INT32_MIN;
	uint8_t x31 = UINT8_MAX;
	static int32_t x32 = 9;
	volatile int32_t t6 = -664;

	t6 = (x29|((x30+x31)+x32));

	if (t6 != -2147483137) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 0;
	static int64_t x34 = INT64_MAX;
	uint64_t x35 = 16854212856LLU;
	int16_t x36 = INT16_MIN;
	uint64_t t7 = 1881521441LLU;

	t7 = (x33|((x34+x35)+x36));

	if (t7 != 9223372053708955895LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x39 = 7U;
	uint32_t x40 = 40150325U;
	uint32_t t8 = 14013638U;

	t8 = (x37|((x38+x39)+x40));

	if (t8 != 40140799U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -8371753;
	uint16_t x42 = 3526U;
	int8_t x43 = INT8_MIN;

	t9 = (x41|((x42+x43)+x44));

	if (t9 != -8368681) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MAX;
	int32_t x46 = -309041617;
	volatile int8_t x47 = INT8_MIN;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x45|((x46+x47)+x48));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;

	t11 = (x53|((x54+x55)+x56));

	if (t11 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	volatile uint8_t x58 = 1U;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = UINT64_MAX;

	t12 = (x57|((x58+x59)+x60));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MAX;
	int64_t x62 = -25161542368686LL;
	static uint8_t x63 = 49U;
	volatile int64_t t13 = -778738LL;

	t13 = (x61|((x62+x63)+x64));

	if (t13 != -25161542368641LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = 152;
	int16_t x66 = -9319;
	volatile int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 27189U;
	volatile uint32_t t14 = 5198U;

	t14 = (x65|((x66+x67)+x68));

	if (t14 != 4294952414U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = 1905877;
	int32_t x74 = -1;
	int8_t x75 = INT8_MIN;
	volatile uint32_t t15 = 2023U;

	t15 = (x73|((x74+x75)+x76));

	if (t15 != 1908703U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = 231LLU;
	int8_t x78 = INT8_MAX;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	static volatile uint64_t t16 = 4779806565302558LLU;

	t16 = (x77|((x78+x79)+x80));

	if (t16 != 511LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x82 = -1;
	uint16_t x83 = 836U;
	int8_t x84 = -13;
	volatile int32_t t17 = -1;

	t17 = (x81|((x82+x83)+x84));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MAX;
	int8_t x86 = 51;
	static int32_t x88 = -1;
	int32_t t18 = -1;

	t18 = (x85|((x86+x87)+x88));

	if (t18 != -2147450881) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = 56974;
	int16_t x90 = INT16_MIN;
	volatile int32_t t19 = 106;

	t19 = (x89|((x90+x91)+x92));

	if (t19 != -8561) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 1818U;
	int32_t x94 = INT32_MIN;
	static uint16_t x95 = 0U;
	uint64_t x96 = UINT64_MAX;

	t20 = (x93|((x94+x95)+x96));

	if (t20 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = 1;
	static int32_t x102 = 14;
	static uint8_t x104 = 1U;
	static volatile int32_t t21 = -1;

	t21 = (x101|((x102+x103)+x104));

	if (t21 != 33) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	static volatile int32_t x106 = INT32_MIN;
	static int8_t x107 = INT8_MAX;
	uint16_t x108 = UINT16_MAX;

	t22 = (x105|((x106+x107)+x108));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x109 = 29138U;
	uint64_t x111 = UINT64_MAX;
	uint8_t x112 = 13U;
	uint64_t t23 = 642347LLU;

	t23 = (x109|((x110+x111)+x112));

	if (t23 != 9223372036854804958LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 838;
	uint64_t x114 = UINT64_MAX;
	static int64_t x116 = 2795480247LL;
	uint64_t t24 = 770LLU;

	t24 = (x113|((x114+x115)+x116));

	if (t24 != 2795480951LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x117 = UINT32_MAX;
	uint32_t x118 = UINT32_MAX;
	uint16_t x120 = UINT16_MAX;

	t25 = (x117|((x118+x119)+x120));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 5U;
	static int16_t x123 = INT16_MIN;
	static volatile uint64_t x124 = 587044994918LLU;
	volatile uint64_t t26 = 1043194965LLU;

	t26 = (x121|((x122+x123)+x124));

	if (t26 != 587044962303LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x130 = INT64_MIN;
	static volatile uint8_t x131 = UINT8_MAX;
	static uint8_t x132 = 17U;
	static int64_t t27 = 8694LL;

	t27 = (x129|((x130+x131)+x132));

	if (t27 != -7LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -8113;
	int8_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	volatile int16_t x136 = -1;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (x133|((x134+x135)+x136));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x141 = 1U;
	static uint16_t x142 = UINT16_MAX;
	int64_t x144 = INT64_MAX;

	t29 = (x141|((x142+x143)+x144));

	if (t29 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x145 = INT16_MAX;
	volatile int16_t x147 = -1934;
	volatile int64_t x148 = INT64_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x145|((x146+x147)+x148));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	int8_t x150 = 1;
	volatile int16_t x151 = INT16_MIN;
	uint16_t x152 = 10429U;
	static volatile uint32_t t31 = UINT32_MAX;

	t31 = (x149|((x150+x151)+x152));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x153 = -1139241096519257127LL;
	int16_t x154 = -6412;
	volatile uint8_t x155 = 0U;
	int16_t x156 = 39;
	volatile int64_t t32 = -3179939441001203124LL;

	t32 = (x153|((x154+x155)+x156));

	if (t32 != -2085LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x158 = INT8_MIN;
	int64_t x160 = -258076860LL;
	int64_t t33 = -1069176008414932LL;

	t33 = (x157|((x158+x159)+x160));

	if (t33 != -207704329LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 4120542155626292567LLU;
	volatile int64_t x162 = 23030486987LL;
	uint8_t x163 = 1U;
	uint8_t x164 = 39U;
	static uint64_t t34 = 1020100342LLU;

	t34 = (x161|((x162+x163)+x164));

	if (t34 != 4120542177379612663LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = UINT8_MAX;
	volatile uint32_t x166 = 3U;
	static int32_t x167 = -1;
	uint8_t x168 = 1U;

	t35 = (x165|((x166+x167)+x168));

	if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	static volatile uint64_t x171 = 98324502748LLU;
	int8_t x172 = -37;
	volatile uint64_t t36 = 226600550LLU;

	t36 = (x169|((x170+x171)+x172));

	if (t36 != 9223372135179278518LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = INT8_MIN;
	uint16_t x174 = 530U;
	static int64_t x176 = 184649859952LL;
	volatile uint64_t t37 = 200694964348319825LLU;

	t37 = (x173|((x174+x175)+x176));

	if (t37 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MAX;
	int64_t x178 = -2LL;
	int32_t x180 = 123;
	volatile int64_t t38 = -144436502223LL;

	t38 = (x177|((x178+x179)+x180));

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = 18556977LLU;
	int32_t x184 = 171879668;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x181|((x182+x183)+x184));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x185 = INT32_MIN;
	uint32_t x186 = 4U;
	volatile uint16_t x187 = UINT16_MAX;
	static volatile uint32_t t40 = 522789185U;

	t40 = (x185|((x186+x187)+x188));

	if (t40 != 2147549191U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = 0;

	t41 = (x189|((x190+x191)+x192));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x193 = INT32_MIN;
	static volatile int32_t t42 = 3355;

	t42 = (x193|((x194+x195)+x196));

	if (t42 != -2147483638) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x197 = 1626U;
	int16_t x198 = -1;
	uint64_t x199 = 105173LLU;
	int32_t x200 = INT32_MIN;
	uint64_t t43 = 213702805797LLU;

	t43 = (x197|((x198+x199)+x200));

	if (t43 != 18446744071562174174LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = INT64_MIN;
	static int16_t x204 = -5;
	static volatile int64_t t44 = -30884LL;

	t44 = (x201|((x202+x203)+x204));

	if (t44 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MAX;
	volatile int8_t x206 = 15;
	int16_t x207 = INT16_MIN;
	volatile int64_t t45 = 12518466537763508LL;

	t45 = (x205|((x206+x207)+x208));

	if (t45 != -32897LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x210 = UINT64_MAX;
	int32_t x211 = -14217;
	volatile int64_t x212 = INT64_MIN;
	uint64_t t46 = 1339159634533871LLU;

	t46 = (x209|((x210+x211)+x212));

	if (t46 != 9223372036854761727LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = UINT16_MAX;
	static volatile int16_t x214 = INT16_MIN;
	static int64_t x215 = -1LL;
	int32_t x216 = INT32_MIN;

	t47 = (x213|((x214+x215)+x216));

	if (t47 != -2147483649LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x218 = -1LL;
	volatile uint8_t x219 = UINT8_MAX;
	volatile int64_t t48 = -2LL;

	t48 = (x217|((x218+x219)+x220));

	if (t48 != 3837LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	static int32_t x222 = INT32_MIN;
	int8_t x224 = INT8_MAX;
	int64_t t49 = 2114LL;

	t49 = (x221|((x222+x223)+x224));

	if (t49 != -16757LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 459824U;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = 0;
	volatile uint8_t x228 = 60U;
	uint32_t t50 = 15474U;

	t50 = (x225|((x226+x227)+x228));

	if (t50 != 4294967228U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x229 = -1456;
	volatile int16_t x231 = 99;
	volatile uint16_t x232 = 0U;

	t51 = (x229|((x230+x231)+x232));

	if (t51 != -1421) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 0U;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 190615162U;
	int8_t x236 = -1;
	int64_t t52 = -219526170760LL;

	t52 = (x233|((x234+x235)+x236));

	if (t52 != -9223372036664160647LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x253 = 898U;
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = -1LL;
	int8_t x256 = INT8_MIN;
	int64_t t53 = 0LL;

	t53 = (x253|((x254+x255)+x256));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = -1;
	int64_t x258 = 96246050599011LL;
	volatile uint64_t x259 = UINT64_MAX;
	int32_t x260 = -1;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x257|((x258+x259)+x260));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x266 = 28U;
	int64_t x268 = -1LL;
	static int64_t t55 = 1405LL;

	t55 = (x265|((x266+x267)+x268));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = INT8_MIN;
	static uint32_t x271 = 618U;
	volatile int8_t x272 = INT8_MAX;
	uint32_t t56 = 3964U;

	t56 = (x269|((x270+x271)+x272));

	if (t56 != 4294967272U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x278 = UINT8_MAX;
	int8_t x280 = -1;

	t57 = (x277|((x278+x279)+x280));

	if (t57 != -9223372036854773460LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x282 = 1828553009LLU;
	volatile uint64_t t58 = 65513LLU;

	t58 = (x281|((x282+x283)+x284));

	if (t58 != 18446744073709548805LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x285 = -1LL;
	int16_t x286 = INT16_MAX;
	uint8_t x288 = UINT8_MAX;
	static volatile int64_t t59 = -1011168LL;

	t59 = (x285|((x286+x287)+x288));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = -2169451715849243752LL;
	int8_t x298 = INT8_MIN;
	uint16_t x299 = 3088U;
	static int32_t x300 = INT32_MIN;
	int64_t t60 = -566020198918162LL;

	t60 = (x297|((x298+x299)+x300));

	if (t60 != -1619936360LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x303 = INT64_MIN;
	uint32_t x304 = UINT32_MAX;
	int64_t t61 = 2387025990LL;

	t61 = (x301|((x302+x303)+x304));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = -15873860455678LL;
	uint8_t x306 = UINT8_MAX;
	static int16_t x307 = -12;
	uint8_t x308 = UINT8_MAX;
	volatile int64_t t62 = -968667153278718LL;

	t62 = (x305|((x306+x307)+x308));

	if (t62 != -15873860455438LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x309 = UINT32_MAX;
	volatile uint64_t x310 = 486387419775725870LLU;
	volatile uint64_t t63 = 6530LLU;

	t63 = (x309|((x310+x311)+x312));

	if (t63 != 486387424021184511LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x313 = 55003245475LL;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = -1;
	volatile int64_t t64 = 11700148330262616LL;

	t64 = (x313|((x314+x315)+x316));

	if (t64 != 55003250687LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x317 = 724;
	int8_t x318 = -1;
	int16_t x320 = -1;
	static volatile int32_t t65 = 1529297;

	t65 = (x317|((x318+x319)+x320));

	if (t65 != -12) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	static uint64_t x323 = 8628LLU;
	volatile int16_t x324 = INT16_MIN;
	uint64_t t66 = 26LLU;

	t66 = (x321|((x322+x323)+x324));

	if (t66 != 18446744071562043828LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x329 = INT32_MIN;
	uint32_t x330 = 394025611U;
	uint32_t x331 = 44U;
	volatile uint32_t t67 = 12U;

	t67 = (x329|((x330+x331)+x332));

	if (t67 != 2541542070U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x342 = 19862U;
	static int64_t x344 = 5610187LL;
	volatile int64_t t68 = 15770384LL;

	t68 = (x341|((x342+x343)+x344));

	if (t68 != -6047LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = -4682230084LL;
	static uint8_t x350 = UINT8_MAX;
	static volatile int16_t x351 = 163;
	volatile int8_t x352 = -1;

	t69 = (x349|((x350+x351)+x352));

	if (t69 != -4682229827LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = 2850023581LL;
	int8_t x355 = INT8_MAX;
	int32_t x356 = -2741;

	t70 = (x353|((x354+x355)+x356));

	if (t70 != -547LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = INT32_MAX;
	int64_t x364 = -1LL;

	t71 = (x361|((x362+x363)+x364));

	if (t71 != -32770LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = INT32_MIN;
	int8_t x367 = 2;

	t72 = (x365|((x366+x367)+x368));

	if (t72 != -2147481135) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x369 = INT64_MAX;
	uint8_t x370 = 6U;
	int16_t x371 = 13884;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t73 = 18570939158676838LLU;

	t73 = (x369|((x370+x371)+x372));

	if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = -25155721;
	int8_t x379 = -1;
	int64_t x380 = 205323091041LL;

	t74 = (x377|((x378+x379)+x380));

	if (t74 != -860494889LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x381 = 88397152U;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	uint64_t t75 = 1397488700760604915LLU;

	t75 = (x381|((x382+x383)+x384));

	if (t75 != 18446685955151493106LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x386 = 41910192LL;
	int64_t x388 = 113991972LL;
	volatile uint64_t t76 = 47200308946941749LLU;

	t76 = (x385|((x386+x387)+x388));

	if (t76 != 81828507359LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x389 = INT32_MIN;
	static int64_t x390 = -1LL;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 6198196104458LLU;
	volatile uint64_t t77 = 107108094669140004LLU;

	t77 = (x389|((x390+x391)+x392));

	if (t77 != 18446744072120364296LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x394 = 2206U;
	int8_t x395 = INT8_MIN;
	static int16_t x396 = -1;
	static volatile int32_t t78 = INT32_MAX;

	t78 = (x393|((x394+x395)+x396));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x398 = -1;
	static int32_t x399 = -1;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t79 = -11;

	t79 = (x397|((x398+x399)+x400));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x401 = INT32_MIN;
	static volatile int8_t x402 = -1;
	uint64_t x403 = 5854284661854546LLU;
	int16_t x404 = INT16_MIN;
	uint64_t t80 = 4507124593LLU;

	t80 = (x401|((x402+x403)+x404));

	if (t80 != 18446744073133789521LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x407 = INT64_MAX;
	int8_t x408 = -2;
	volatile int64_t t81 = -218LL;

	t81 = (x405|((x406+x407)+x408));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x409 = INT32_MAX;
	volatile int8_t x410 = -40;
	int32_t x411 = -1;
	uint32_t x412 = 65544U;
	volatile uint32_t t82 = 1524619U;

	t82 = (x409|((x410+x411)+x412));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x413 = UINT16_MAX;
	uint64_t x415 = UINT64_MAX;
	static uint32_t x416 = 7U;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x413|((x414+x415)+x416));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = -1;
	uint64_t x419 = 0LLU;
	static volatile int16_t x420 = -268;

	t84 = (x417|((x418+x419)+x420));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x421 = 0;
	uint64_t x422 = 3866966993LLU;
	int16_t x424 = INT16_MIN;
	static volatile uint64_t t85 = 1LLU;

	t85 = (x421|((x422+x423)+x424));

	if (t85 != 3866901457LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x425 = UINT8_MAX;
	static int64_t x426 = -1LL;
	static uint8_t x427 = UINT8_MAX;
	volatile uint32_t x428 = 658425326U;
	int64_t t86 = 0LL;

	t86 = (x425|((x426+x427)+x428));

	if (t86 != 658425599LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = INT16_MIN;
	volatile uint8_t x431 = UINT8_MAX;
	int8_t x432 = INT8_MAX;
	static volatile int32_t t87 = 0;

	t87 = (x429|((x430+x431)+x432));

	if (t87 != -32361) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x434 = INT16_MIN;
	uint64_t t88 = 785096LLU;

	t88 = (x433|((x434+x435)+x436));

	if (t88 != 52526590LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MIN;
	uint32_t x439 = 29757468U;
	uint16_t x440 = 239U;
	uint32_t t89 = 126207157U;

	t89 = (x437|((x438+x439)+x440));

	if (t89 != 4294938891U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x445 = INT32_MIN;
	uint16_t x446 = 11145U;

	t90 = (x445|((x446+x447)+x448));

	if (t90 != -2147468641) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = 1050901727719269LL;
	static int32_t x454 = -51333358;
	volatile int8_t x455 = -1;
	int8_t x456 = 59;
	int64_t t91 = -1631754998652719382LL;

	t91 = (x453|((x454+x455)+x456));

	if (t91 != -50544787LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x459 = 1914LLU;
	static int64_t x460 = INT64_MAX;
	volatile uint64_t t92 = 11016784922LLU;

	t92 = (x457|((x458+x459)+x460));

	if (t92 != 9223372036854777855LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = -69;
	int32_t x470 = -50239;
	int32_t x471 = 463234;
	uint16_t x472 = UINT16_MAX;
	int32_t t93 = -1526484;

	t93 = (x469|((x470+x471)+x472));

	if (t93 != -5) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x473 = INT16_MIN;
	static volatile int16_t x475 = INT16_MIN;
	int32_t x476 = INT32_MAX;
	volatile int64_t t94 = -52959157945157LL;

	t94 = (x473|((x474+x475)+x476));

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x477 = -51395LL;
	int64_t x478 = -1LL;
	uint64_t x479 = 1LLU;
	volatile int64_t x480 = INT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x477|((x478+x479)+x480));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x481 = UINT16_MAX;
	volatile uint64_t x482 = 32549776018LLU;
	static int64_t x483 = 728791LL;
	volatile uint64_t t96 = 108688057LLU;

	t96 = (x481|((x482+x483)+x484));

	if (t96 != 32550486015LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x485 = INT32_MIN;
	int8_t x486 = -16;
	int64_t x487 = -450793LL;
	int16_t x488 = -1;
	static volatile int64_t t97 = -671379084LL;

	t97 = (x485|((x486+x487)+x488));

	if (t97 != -450810LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x489 = UINT16_MAX;
	volatile int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MAX;
	volatile int64_t t98 = 2973571316367073LL;

	t98 = (x489|((x490+x491)+x492));

	if (t98 != 9223372035852664831LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x493 = INT64_MAX;
	int64_t x495 = -139528827356LL;
	uint8_t x496 = 1U;
	int64_t t99 = -15182LL;

	t99 = (x493|((x494+x495)+x496));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

