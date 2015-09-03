#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 7U;
uint64_t x6 = UINT64_MAX;
int64_t x7 = 38947809LL;
volatile int32_t x11 = INT32_MIN;
int16_t x23 = -1;
uint32_t x40 = 0U;
uint32_t x42 = 93U;
int64_t x46 = INT64_MAX;
int32_t x52 = INT32_MAX;
uint64_t x58 = 5803335LLU;
volatile int32_t x73 = -1;
uint8_t x75 = UINT8_MAX;
int64_t x80 = -698664373516782285LL;
int8_t x83 = -1;
int8_t x93 = INT8_MIN;
volatile int32_t x100 = INT32_MIN;
static uint64_t x101 = 251744469312256056LLU;
int8_t x102 = -1;
static int64_t x109 = INT64_MIN;
int64_t x112 = -1LL;
static int64_t x115 = 15939132695992LL;
uint64_t t23 = 0LLU;
int32_t x123 = -14203;
volatile uint64_t t26 = 7LLU;
int8_t x144 = INT8_MIN;
volatile uint8_t x147 = UINT8_MAX;
int32_t t30 = 5;
volatile uint16_t x165 = UINT16_MAX;
volatile int16_t x175 = INT16_MIN;
int32_t x176 = 82;
static volatile uint32_t x179 = 3097184U;
static int32_t x180 = -59;
static uint64_t t37 = 6LLU;
static int64_t x186 = INT64_MIN;
int32_t x194 = INT32_MAX;
uint32_t x195 = UINT32_MAX;
uint64_t t40 = 11250918LLU;
int32_t x201 = INT32_MAX;
int16_t x202 = INT16_MIN;
uint32_t t41 = 65582U;
int16_t x210 = INT16_MIN;
static int32_t x211 = INT32_MIN;
int16_t x214 = -1;
int64_t x215 = INT64_MIN;
int32_t x222 = -8922;
int32_t t48 = 28321473;
volatile int64_t x233 = 2359512122088080LL;
int64_t x234 = 13329661394950863LL;
uint32_t x237 = UINT32_MAX;
uint8_t x247 = 0U;
volatile int16_t x248 = INT16_MIN;
int64_t x252 = -1LL;
int32_t x257 = INT32_MIN;
uint8_t x260 = 5U;
volatile uint32_t t60 = 13710833U;
volatile int32_t t61 = -603;
int8_t x287 = -2;
uint64_t x288 = UINT64_MAX;
static uint64_t x290 = 1446290597690606929LLU;
volatile uint8_t x291 = 45U;
int16_t x297 = INT16_MAX;
uint16_t x310 = UINT16_MAX;
volatile uint16_t x315 = 25U;
uint32_t x321 = 235U;
int64_t x325 = 0LL;
volatile uint32_t t75 = 28U;
volatile int64_t x344 = -1LL;
uint32_t x345 = 1246U;
uint16_t x350 = 14433U;
int8_t x358 = INT8_MIN;
uint32_t x362 = 4796112U;
static uint16_t x364 = UINT16_MAX;
uint32_t t81 = 194217507U;
int64_t x365 = -14541394058865LL;
volatile uint16_t x369 = 98U;
int32_t x377 = -1;
int16_t x386 = -8408;
static int8_t x411 = INT8_MIN;
volatile int64_t t88 = 50221693831LL;
static int64_t x419 = INT64_MAX;
static uint64_t x421 = 2258482LLU;
volatile uint64_t t91 = 224379980260LLU;
uint64_t x427 = 10LLU;
uint8_t x443 = 1U;
volatile int32_t x445 = INT32_MIN;
volatile int32_t x457 = INT32_MIN;
static uint64_t t97 = 1215LLU;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = -1;
	uint8_t x4 = 0U;
	static volatile uint32_t t0 = 128812U;

	t0 = ((x1/x2)^(x3-x4));

	if (t0 != 6U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 970755;
	int16_t x8 = 0;
	static uint64_t t1 = 2102836650405648LLU;

	t1 = ((x5/x6)^(x7-x8));

	if (t1 != 38947809LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = 214423203;

	t2 = ((x9/x10)^(x11-x12));

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t3 = 3881461071967LLU;

	t3 = ((x13/x14)^(x15-x16));

	if (t3 != 18446744073709485953LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = INT64_MIN;
	volatile uint64_t x22 = 53904229734430909LLU;
	static int64_t x24 = INT64_MIN;
	volatile uint64_t t4 = 336804LLU;

	t4 = ((x21/x22)^(x23-x24));

	if (t4 != 9223372036854775636LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MAX;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	int64_t t5 = 446416644105LL;

	t5 = ((x25/x26)^(x27-x28));

	if (t5 != 33022LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -46785225LL;
	uint8_t x30 = UINT8_MAX;
	static int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	int64_t t6 = 27166240726086LL;

	t6 = ((x29/x30)^(x31-x32));

	if (t6 != -183471LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -243300332822969724LL;
	uint64_t x38 = 17408627069LLU;
	int64_t x39 = INT64_MAX;
	volatile uint64_t t7 = 408894772418331529LLU;

	t7 = ((x37/x38)^(x39-x40));

	if (t7 != 9223372035809119325LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 57U;
	uint64_t x43 = 2543530467418230LLU;
	int32_t x44 = -67;
	uint64_t t8 = 17420986134953LLU;

	t8 = ((x41/x42)^(x43-x44));

	if (t8 != 2543530467418297LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 215;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MAX;
	static volatile int64_t t9 = -1961399372966920154LL;

	t9 = ((x45/x46)^(x47-x48));

	if (t9 != -32895LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x49 = 1793490;
	uint16_t x50 = 14U;
	uint64_t x51 = UINT64_MAX;
	volatile uint64_t t10 = 182745668608498LLU;

	t10 = ((x49/x50)^(x51-x52));

	if (t10 != 18446744071562196074LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	volatile int8_t x54 = INT8_MAX;
	volatile uint16_t x55 = 1U;
	static int16_t x56 = -82;
	volatile int32_t t11 = 280;

	t11 = ((x53/x54)^(x55-x56));

	if (t11 != 16909403) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int32_t x59 = INT32_MAX;
	volatile int16_t x60 = 79;
	volatile uint64_t t12 = 51783236550LLU;

	t12 = ((x57/x58)^(x59-x60));

	if (t12 != 3180053686750LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MAX;
	uint32_t x63 = 64582316U;
	int32_t x64 = INT32_MIN;
	uint32_t t13 = 1U;

	t13 = ((x61/x62)^(x63-x64));

	if (t13 != 2212065964U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x74 = 18U;
	uint32_t x76 = UINT32_MAX;
	static volatile uint32_t t14 = 0U;

	t14 = ((x73/x74)^(x75-x76));

	if (t14 != 256U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 1U;
	uint8_t x78 = 117U;
	int64_t x79 = -1690689880939139LL;
	int64_t t15 = -5123880019LL;

	t15 = ((x77/x78)^(x79-x80));

	if (t15 != 696973683635843146LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int16_t x82 = -1;
	int8_t x84 = 1;
	volatile int32_t t16 = -1;

	t16 = ((x81/x82)^(x83-x84));

	if (t16 != -32770) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = 24;
	int32_t x86 = -50;
	int64_t x87 = 583171422LL;
	uint8_t x88 = 34U;
	volatile int64_t t17 = 46219451533412LL;

	t17 = ((x85/x86)^(x87-x88));

	if (t17 != 583171388LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x94 = INT64_MIN;
	static int64_t x95 = 39794294089LL;
	uint64_t x96 = 1590088477446265048LLU;
	static volatile uint64_t t18 = 6234629738LLU;

	t18 = ((x93/x94)^(x95-x96));

	if (t18 != 16856655636057580657LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -1;
	volatile int32_t x98 = INT32_MAX;
	static int8_t x99 = INT8_MIN;
	static volatile int32_t t19 = -1642;

	t19 = ((x97/x98)^(x99-x100));

	if (t19 != 2147483520) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x103 = INT32_MAX;
	uint64_t x104 = UINT64_MAX;
	uint64_t t20 = 5341092LLU;

	t20 = ((x101/x102)^(x103-x104));

	if (t20 != 2147483648LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x110 = 917;
	int64_t x111 = INT64_MIN;
	static int64_t t21 = 3LL;

	t21 = ((x109/x110)^(x111-x112));

	if (t21 != 9213313833979252606LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = -123377473647443863LL;
	static uint32_t x116 = 0U;
	volatile int64_t t22 = 4220145108785LL;

	t22 = ((x113/x114)^(x115-x116));

	if (t22 != 15939132695992LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = -8012852;
	uint64_t x118 = 11048522LLU;
	int32_t x119 = -772761728;
	static volatile int8_t x120 = INT8_MAX;

	t23 = ((x117/x118)^(x119-x120));

	if (t23 != 18446742404801281304LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = -1;
	volatile int64_t x122 = INT64_MIN;
	uint32_t x124 = 100U;
	static volatile int64_t t24 = -2498851343295921LL;

	t24 = ((x121/x122)^(x123-x124));

	if (t24 != 4294952993LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = INT32_MAX;
	int64_t x126 = INT64_MAX;
	int32_t x127 = -1;
	volatile int32_t x128 = INT32_MAX;
	int64_t t25 = -20172454LL;

	t25 = ((x125/x126)^(x127-x128));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 11U;
	volatile int32_t x130 = INT32_MAX;
	uint64_t x131 = 1447372494827501LLU;
	volatile int8_t x132 = 14;

	t26 = ((x129/x130)^(x131-x132));

	if (t26 != 1447372494827487LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 74925769855LLU;
	volatile uint64_t x136 = 639728398494446LLU;
	static uint64_t t27 = 6702LLU;

	t27 = ((x133/x134)^(x135-x136));

	if (t27 != 18446104420236827025LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MIN;
	volatile int32_t x142 = INT32_MIN;
	static volatile int16_t x143 = 6790;
	volatile int32_t t28 = -16858;

	t28 = ((x141/x142)^(x143-x144));

	if (t28 != 6918) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -115;
	volatile int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t29 = -1;

	t29 = ((x145/x146)^(x147-x148));

	if (t29 != 33023) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = 762495242;
	int8_t x151 = -1;
	uint8_t x152 = 3U;

	t30 = ((x149/x150)^(x151-x152));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = INT64_MAX;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t31 = -1939312895164589494LL;

	t31 = ((x153/x154)^(x155-x156));

	if (t31 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = INT16_MAX;
	uint64_t x158 = UINT64_MAX;
	uint64_t x159 = 15526530493615718LLU;
	uint32_t x160 = UINT32_MAX;
	uint64_t t32 = 511005137146445862LLU;

	t32 = ((x157/x158)^(x159-x160));

	if (t32 != 15526526198648423LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = -6;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = 1U;
	uint8_t x164 = 0U;
	volatile int32_t t33 = 486963;

	t33 = ((x161/x162)^(x163-x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x166 = 126959688376200LLU;
	static uint8_t x167 = 19U;
	int8_t x168 = -5;
	uint64_t t34 = 10620057782486593LLU;

	t34 = ((x165/x166)^(x167-x168));

	if (t34 != 24LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -25945982;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = 1;
	int64_t x172 = -3298786936007449LL;
	int64_t t35 = -75008118286806LL;

	t35 = ((x169/x170)^(x171-x172));

	if (t35 != 3298786936007450LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 357U;
	static volatile int64_t t36 = 1659LL;

	t36 = ((x173/x174)^(x175-x176));

	if (t36 != 25835776013565963LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;

	t37 = ((x177/x178)^(x179-x180));

	if (t37 != 3097243LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x185 = 89LL;
	uint16_t x187 = 1567U;
	static int64_t x188 = INT64_MAX;
	volatile int64_t t38 = 49909961014810836LL;

	t38 = ((x185/x186)^(x187-x188));

	if (t38 != -9223372036854774240LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = 98U;
	int16_t x191 = -1;
	int32_t x192 = INT32_MAX;
	int32_t t39 = -5;

	t39 = ((x189/x190)^(x191-x192));

	if (t39 != 2125570550) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x193 = 1U;
	uint64_t x196 = 0LLU;

	t40 = ((x193/x194)^(x195-x196));

	if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x203 = 0U;
	volatile uint32_t x204 = 51956867U;

	t41 = ((x201/x202)^(x203-x204));

	if (t41 != 51917692U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x205 = UINT8_MAX;
	uint16_t x206 = 7U;
	int32_t x207 = 31983700;
	uint64_t x208 = 25150LLU;
	volatile uint64_t t42 = 6894090495380LLU;

	t42 = ((x205/x206)^(x207-x208));

	if (t42 != 31958578LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x209 = 438U;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t43 = 265507169065630987LL;

	t43 = ((x209/x210)^(x211-x212));

	if (t43 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = 5658055LLU;
	int16_t x216 = -32;
	volatile uint64_t t44 = 2LLU;

	t44 = ((x213/x214)^(x215-x216));

	if (t44 != 9223372036854775840LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	int32_t x219 = 507169363;
	uint16_t x220 = 5U;
	volatile uint32_t t45 = 29617U;

	t45 = ((x217/x218)^(x219-x220));

	if (t45 != 507169358U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x223 = -1LL;
	int8_t x224 = -1;
	volatile int64_t t46 = -336055732344754LL;

	t46 = ((x221/x222)^(x223-x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	int8_t x227 = 1;
	static volatile uint8_t x228 = UINT8_MAX;
	static int32_t t47 = 0;

	t47 = ((x225/x226)^(x227-x228));

	if (t47 != -254) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x229 = INT8_MIN;
	int8_t x230 = 32;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;

	t48 = ((x229/x230)^(x231-x232));

	if (t48 != -4) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MAX;
	uint64_t t49 = 722105775835LLU;

	t49 = ((x233/x234)^(x235-x236));

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x238 = INT64_MIN;
	uint32_t x239 = UINT32_MAX;
	volatile int8_t x240 = INT8_MIN;
	int64_t t50 = 65545442304LL;

	t50 = ((x237/x238)^(x239-x240));

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x241 = -2897145970188548LL;
	int32_t x242 = 150670;
	int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	int64_t t51 = -17652269070387LL;

	t51 = ((x241/x242)^(x243-x244));

	if (t51 != -9223372017626356282LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x245 = 2608225004193LLU;
	static int16_t x246 = -1;
	uint64_t t52 = 359337LLU;

	t52 = ((x245/x246)^(x247-x248));

	if (t52 != 32768LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = -1;
	static uint8_t x251 = 94U;
	int64_t t53 = -5788343039LL;

	t53 = ((x249/x250)^(x251-x252));

	if (t53 != 223LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 13412041540984072LLU;
	volatile uint32_t x254 = 1U;
	static int16_t x255 = -7;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t54 = 165538213958LLU;

	t54 = ((x253/x254)^(x255-x256));

	if (t54 != 9209959995313791729LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x258 = -21742251;
	volatile int8_t x259 = -1;
	volatile int32_t t55 = -95288078;

	t55 = ((x257/x258)^(x259-x260));

	if (t55 != -104) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x261 = 6929U;
	int64_t x262 = -56838523816LL;
	uint16_t x263 = 876U;
	int32_t x264 = -1;
	volatile int64_t t56 = 112063169567LL;

	t56 = ((x261/x262)^(x263-x264));

	if (t56 != 877LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = 1506861533090946047LLU;
	uint32_t x266 = 1U;
	int64_t x267 = 4193713832723789352LL;
	static uint16_t x268 = 4363U;
	static volatile uint64_t t57 = 12753128979LLU;

	t57 = ((x265/x266)^(x267-x268));

	if (t57 != 3376118718851628770LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x269 = UINT8_MAX;
	static int8_t x270 = -15;
	volatile int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t58 = -126152941;

	t58 = ((x269/x270)^(x271-x272));

	if (t58 != -240) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x273 = UINT32_MAX;
	uint64_t x274 = 67013LLU;
	static int64_t x275 = -59LL;
	volatile int64_t x276 = 18591LL;
	volatile uint64_t t59 = 2098709043124391927LLU;

	t59 = ((x273/x274)^(x275-x276));

	if (t59 != 18446744073709505917LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x277 = -57;
	uint32_t x278 = 25997U;
	int8_t x279 = 55;
	volatile int8_t x280 = INT8_MIN;

	t60 = ((x277/x278)^(x279-x280));

	if (t60 != 165357U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = 51;
	int16_t x282 = INT16_MIN;
	int16_t x283 = 35;
	static volatile int8_t x284 = -1;

	t61 = ((x281/x282)^(x283-x284));

	if (t61 != 36) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = -91899614;
	int8_t x286 = -1;
	uint64_t t62 = 2659179254656LLU;

	t62 = ((x285/x286)^(x287-x288));

	if (t62 != 18446744073617652001LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MIN;
	static uint16_t x292 = 0U;
	uint64_t t63 = 66820358LLU;

	t63 = ((x289/x290)^(x291-x292));

	if (t63 != 33LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = INT16_MIN;
	volatile uint64_t t64 = 8048917100652LLU;

	t64 = ((x293/x294)^(x295-x296));

	if (t64 != 33023LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x298 = INT32_MIN;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	static uint64_t t65 = 1355561812429370765LLU;

	t65 = ((x297/x298)^(x299-x300));

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = -13;
	int8_t x303 = INT8_MAX;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t66 = 151;

	t66 = ((x301/x302)^(x303-x304));

	if (t66 != 32886) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x305 = 0U;
	static uint16_t x306 = 167U;
	uint32_t x307 = 56U;
	int32_t x308 = -1;
	static uint32_t t67 = 7286574U;

	t67 = ((x305/x306)^(x307-x308));

	if (t67 != 57U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -111039707;
	int16_t x311 = INT16_MIN;
	int64_t x312 = 35083955914801879LL;
	int64_t t68 = -1254737730297608LL;

	t68 = ((x309/x310)^(x311-x312));

	if (t68 != 35083955914835019LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x313 = INT8_MAX;
	uint32_t x314 = 2002800U;
	int64_t x316 = -1LL;
	int64_t t69 = -1265983307201018775LL;

	t69 = ((x313/x314)^(x315-x316));

	if (t69 != 26LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = -105165652;
	int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	static uint32_t x320 = 2937791U;
	volatile uint32_t t70 = 1U;

	t70 = ((x317/x318)^(x319-x320));

	if (t70 != 4291996737U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x322 = 3837;
	volatile int64_t x323 = INT64_MIN;
	static volatile int8_t x324 = -1;
	volatile int64_t t71 = -877LL;

	t71 = ((x321/x322)^(x323-x324));

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x326 = INT8_MAX;
	uint16_t x327 = 7236U;
	static uint32_t x328 = 335U;
	int64_t t72 = 1736LL;

	t72 = ((x325/x326)^(x327-x328));

	if (t72 != 6901LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = -1LL;
	uint8_t x330 = 7U;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = 6;
	static int64_t t73 = 20763768754LL;

	t73 = ((x329/x330)^(x331-x332));

	if (t73 != -134LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	static volatile int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MAX;
	volatile int64_t t74 = -141161598LL;

	t74 = ((x333/x334)^(x335-x336));

	if (t74 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = -1;
	static uint32_t x338 = 1131400151U;
	int8_t x339 = 0;
	volatile uint16_t x340 = 354U;

	t75 = ((x337/x338)^(x339-x340));

	if (t75 != 4294966941U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x341 = INT64_MIN;
	static uint32_t x342 = UINT32_MAX;
	int32_t x343 = -108;
	int64_t t76 = 122092032536LL;

	t76 = ((x341/x342)^(x343-x344));

	if (t76 != 2147483541LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x346 = UINT64_MAX;
	uint32_t x347 = 1654128U;
	static volatile uint8_t x348 = UINT8_MAX;
	uint64_t t77 = 3665LLU;

	t77 = ((x345/x346)^(x347-x348));

	if (t77 != 1653873LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = 5451943807LL;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	volatile int64_t t78 = 309604960456LL;

	t78 = ((x349/x350)^(x351-x352));

	if (t78 != -9223372034706914419LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = 15U;
	int8_t x354 = 19;
	int32_t x355 = INT32_MIN;
	uint16_t x356 = 0U;
	volatile int32_t t79 = INT32_MIN;

	t79 = ((x353/x354)^(x355-x356));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = UINT64_MAX;
	int8_t x359 = -1;
	int16_t x360 = -1;
	volatile uint64_t t80 = 9815260799649LLU;

	t80 = ((x357/x358)^(x359-x360));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = -1;
	static volatile uint16_t x363 = 31U;

	t81 = ((x361/x362)^(x363-x364));

	if (t81 != 4294902623U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x366 = 1U;
	static uint8_t x367 = UINT8_MAX;
	static int16_t x368 = -500;
	int64_t t82 = 72LL;

	t82 = ((x365/x366)^(x367-x368));

	if (t82 != -14541394058372LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -1;
	volatile int8_t x372 = INT8_MIN;
	int32_t t83 = -255685576;

	t83 = ((x369/x370)^(x371-x372));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = 23200305007767803LLU;
	static volatile uint64_t t84 = 0LLU;

	t84 = ((x377/x378)^(x379-x380));

	if (t84 != 18423543768701783685LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	int32_t x383 = 145;
	uint32_t x384 = 1U;
	int64_t t85 = 3409734LL;

	t85 = ((x381/x382)^(x383-x384));

	if (t85 != -281474976710511LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = 115;
	uint8_t x387 = UINT8_MAX;
	uint8_t x388 = 69U;
	int32_t t86 = -39773;

	t86 = ((x385/x386)^(x387-x388));

	if (t86 != 186) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x401 = UINT32_MAX;
	int64_t x402 = -4139867164996045LL;
	volatile int8_t x403 = -1;
	static uint8_t x404 = 56U;
	int64_t t87 = 551804784924LL;

	t87 = ((x401/x402)^(x403-x404));

	if (t87 != -57LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = -1LL;
	int64_t x410 = 1324926979LL;
	volatile int32_t x412 = -1;

	t88 = ((x409/x410)^(x411-x412));

	if (t88 != -127LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x413 = INT8_MIN;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	static uint64_t t89 = 1484536707LLU;

	t89 = ((x413/x414)^(x415-x416));

	if (t89 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int16_t x418 = INT16_MIN;
	uint64_t x420 = 1464500597741LLU;
	volatile uint64_t t90 = 247770LLU;

	t90 = ((x417/x418)^(x419-x420));

	if (t90 != 9223370572354178067LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x422 = -1;
	int32_t x423 = -1;
	static int64_t x424 = INT64_MAX;

	t91 = ((x421/x422)^(x423-x424));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = INT64_MIN;
	uint8_t x426 = UINT8_MAX;
	static int64_t x428 = -1341076772LL;
	static volatile uint64_t t92 = 17421003333681680LLU;

	t92 = ((x425/x426)^(x427-x428));

	if (t92 != 18410573985966213806LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = 93416772024039LL;
	int16_t x434 = INT16_MIN;
	volatile int64_t x435 = INT64_MIN;
	static int32_t x436 = INT32_MIN;
	int64_t t93 = -7199018924922LL;

	t93 = ((x433/x434)^(x435-x436));

	if (t93 != 9223372036151405818LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = -5;
	volatile uint32_t x442 = 1223U;
	int8_t x444 = INT8_MIN;
	uint32_t t94 = 972U;

	t94 = ((x441/x442)^(x443-x444));

	if (t94 != 3511956U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x446 = 336008928U;
	int8_t x447 = -4;
	uint8_t x448 = 5U;
	uint32_t t95 = 50211035U;

	t95 = ((x445/x446)^(x447-x448));

	if (t95 != 4294967281U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x449 = 247574792888242LL;
	static int32_t x450 = INT32_MIN;
	uint32_t x451 = UINT32_MAX;
	uint16_t x452 = 332U;
	static volatile int64_t t96 = 588972105LL;

	t96 = ((x449/x450)^(x451-x452));

	if (t96 != -4294851816LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x458 = INT8_MIN;
	static uint64_t x459 = UINT64_MAX;
	uint8_t x460 = 2U;

	t97 = ((x457/x458)^(x459-x460));

	if (t97 != 18446744073692774397LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x461 = INT64_MIN;
	uint32_t x462 = 98314U;
	int16_t x463 = INT16_MAX;
	volatile uint64_t x464 = 61LLU;
	volatile uint64_t t98 = 253880517312LLU;

	t98 = ((x461/x462)^(x463-x464));

	if (t98 != 18446650258260694893LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x465 = UINT32_MAX;
	volatile int64_t x466 = INT64_MIN;
	int32_t x467 = -619;
	int8_t x468 = -1;
	volatile int64_t t99 = -11139411459130199LL;

	t99 = ((x465/x466)^(x467-x468));

	if (t99 != -618LL) { NG(); } else { ; }
	
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

