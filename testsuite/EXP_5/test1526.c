#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
int32_t t1 = -3;
int32_t x9 = INT32_MIN;
int8_t x10 = -1;
static int64_t x11 = -1419625685LL;
volatile int32_t t2 = 3812624;
volatile int16_t x13 = -468;
int32_t x19 = 10168;
volatile uint8_t x33 = 4U;
int16_t x34 = INT16_MIN;
static int32_t t7 = 2;
volatile int32_t x45 = INT32_MIN;
int32_t x72 = -84330;
int64_t x76 = INT64_MIN;
int64_t t15 = -122207191540LL;
volatile int32_t t17 = -1;
static int16_t x95 = 7;
int16_t x104 = INT16_MIN;
int32_t x106 = INT32_MAX;
volatile uint8_t x112 = 103U;
volatile int32_t t25 = -421;
static int16_t x124 = INT16_MIN;
volatile int32_t x146 = INT32_MAX;
volatile int32_t t33 = 775;
int8_t x150 = INT8_MIN;
static volatile uint64_t x153 = 22018311411513998LLU;
volatile uint64_t x161 = 12LLU;
int32_t x164 = INT32_MIN;
int16_t x173 = -18;
static volatile int16_t x176 = INT16_MIN;
volatile uint64_t x178 = UINT64_MAX;
uint16_t x179 = UINT16_MAX;
static int32_t x180 = INT32_MIN;
uint8_t x183 = UINT8_MAX;
static uint8_t x186 = UINT8_MAX;
int32_t x207 = 250966136;
int64_t t48 = -37609291672108286LL;
uint64_t x211 = 293737131604495LLU;
int64_t x212 = INT64_MIN;
int64_t t49 = -4214848323LL;
static uint32_t x214 = 4152766U;
volatile int64_t x224 = INT64_MIN;
int64_t t52 = -22996155762LL;
int64_t x225 = INT64_MIN;
volatile int64_t t53 = -2491958154497LL;
uint16_t x234 = 18633U;
int8_t x235 = 2;
volatile uint32_t x237 = 26U;
int64_t x244 = -1618476201997893090LL;
volatile uint64_t t57 = 1503821LLU;
int8_t x248 = INT8_MIN;
int32_t x255 = INT32_MIN;
volatile int16_t x262 = INT16_MIN;
volatile uint32_t t61 = 227073U;
volatile uint32_t x271 = UINT32_MAX;
uint32_t x272 = 475957012U;
volatile int64_t t62 = -2973068759686930LL;
uint32_t x281 = UINT32_MAX;
int32_t x288 = 30877;
volatile int32_t t68 = 732556377;
volatile uint32_t t70 = 127113U;
static uint16_t x328 = 3073U;
static int64_t x330 = -1LL;
int64_t x332 = 2209595410449068LL;
int16_t x337 = INT16_MIN;
int8_t x338 = INT8_MAX;
static uint16_t x342 = UINT16_MAX;
static int16_t x344 = INT16_MIN;
uint8_t x356 = UINT8_MAX;
volatile int32_t t79 = -426196;
uint64_t t80 = 1095308005805078501LLU;
uint64_t x368 = 1633LLU;
static volatile uint64_t t82 = 29389LLU;
volatile int32_t t84 = 262;
static int64_t x388 = 103LL;
int32_t x393 = -1;
int8_t x400 = INT8_MIN;
uint64_t x401 = UINT64_MAX;
int32_t x403 = 2;
uint32_t t93 = 3U;
int16_t x413 = INT16_MIN;
volatile uint64_t t94 = 214LLU;
volatile int32_t x417 = -1;
volatile int32_t t95 = -15474;
int32_t x422 = -1;
volatile int8_t x433 = INT8_MIN;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = -1;
	int64_t x3 = -174780460LL;
	static int64_t t0 = 136LL;

	t0 = (x1%((x2<=x3)+x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	static volatile int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MAX;
	static uint8_t x8 = 58U;

	t1 = (x5%((x6<=x7)+x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x12 = INT32_MIN;

	t2 = (x9%((x10<=x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 4219U;
	int64_t x15 = 1LL;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 22428245075LL;

	t3 = (x13%((x14<=x15)+x16));

	if (t3 != -468LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -48;
	uint64_t x18 = 195285LLU;
	int64_t x20 = 76758LL;
	volatile int64_t t4 = 8774985339930466LL;

	t4 = (x17%((x18<=x19)+x20));

	if (t4 != -48LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	static int64_t x26 = -192676452316447LL;
	volatile int64_t x27 = 6092299459940LL;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 41031022;

	t5 = (x25%((x26<=x27)+x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = INT16_MAX;
	int64_t x30 = -1LL;
	static int8_t x31 = INT8_MIN;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = -282466373;

	t6 = (x29%((x30<=x31)+x32));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x35 = INT8_MIN;
	static int32_t x36 = INT32_MIN;

	t7 = (x33%((x34<=x35)+x36));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint64_t x42 = 423797928915768LLU;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 0U;
	uint32_t t8 = 28U;

	t8 = (x41%((x42<=x43)+x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x46 = 19192464852468LLU;
	int32_t x47 = 144921119;
	int8_t x48 = -1;
	static volatile int32_t t9 = -246;

	t9 = (x45%((x46<=x47)+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MIN;
	static int64_t x51 = 12121931616LL;
	int16_t x52 = 8;
	int64_t t10 = 1064619614775122374LL;

	t10 = (x49%((x50<=x51)+x52));

	if (t10 != -8LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -39;
	int8_t x54 = INT8_MIN;
	static uint16_t x55 = 26U;
	static volatile int16_t x56 = INT16_MIN;
	volatile int32_t t11 = -1342407;

	t11 = (x53%((x54<=x55)+x56));

	if (t11 != -39) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = INT64_MIN;
	static uint32_t x58 = UINT32_MAX;
	uint8_t x59 = 0U;
	uint16_t x60 = UINT16_MAX;
	int64_t t12 = -56866030LL;

	t12 = (x57%((x58<=x59)+x60));

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x65 = 37472LLU;
	int64_t x66 = INT64_MAX;
	int8_t x67 = INT8_MIN;
	int64_t x68 = 847898900249068475LL;
	uint64_t t13 = 52018067889075LLU;

	t13 = (x65%((x66<=x67)+x68));

	if (t13 != 37472LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	volatile uint64_t x70 = 3401276LLU;
	static uint64_t x71 = 17296LLU;
	static int32_t t14 = -5519;

	t14 = (x69%((x70<=x71)+x72));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x73 = UINT32_MAX;
	volatile uint8_t x74 = 79U;
	int8_t x75 = -22;

	t15 = (x73%((x74<=x75)+x76));

	if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 1674723U;
	static int8_t x78 = INT8_MIN;
	int16_t x79 = -1;
	int8_t x80 = INT8_MIN;
	uint32_t t16 = 9759U;

	t16 = (x77%((x78<=x79)+x80));

	if (t16 != 1674723U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 45U;
	volatile uint8_t x82 = 0U;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = 1U;

	t17 = (x81%((x82<=x83)+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = 544;
	static int8_t x86 = INT8_MIN;
	static int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t18 = 11;

	t18 = (x85%((x86<=x87)+x88));

	if (t18 != 544) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	volatile uint32_t x90 = 764640444U;
	volatile int16_t x91 = 2006;
	volatile uint32_t x92 = UINT32_MAX;
	static volatile uint32_t t19 = 60033U;

	t19 = (x89%((x90<=x91)+x92));

	if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 2952LLU;
	static volatile int16_t x94 = 11;
	static int8_t x96 = INT8_MIN;
	static volatile uint64_t t20 = 4638233359LLU;

	t20 = (x93%((x94<=x95)+x96));

	if (t20 != 2952LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x97 = -1028506845713622307LL;
	int16_t x98 = INT16_MAX;
	uint16_t x99 = 16U;
	int16_t x100 = -3695;
	static int64_t t21 = -331975848417853668LL;

	t21 = (x97%((x98<=x99)+x100));

	if (t21 != -1567LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = -6;
	uint16_t x103 = 8U;
	static int32_t t22 = 1;

	t22 = (x101%((x102<=x103)+x104));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x105 = -1;
	int8_t x107 = -1;
	int8_t x108 = INT8_MAX;
	static int32_t t23 = 7322044;

	t23 = (x105%((x106<=x107)+x108));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x110 = INT8_MAX;
	int32_t x111 = -1;
	int32_t t24 = 48;

	t24 = (x109%((x110<=x111)+x112));

	if (t24 != -83) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	volatile int32_t x114 = INT32_MAX;
	volatile uint8_t x115 = 20U;
	uint16_t x116 = 20804U;

	t25 = (x113%((x114<=x115)+x116));

	if (t25 != -11552) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = -1;
	int8_t x119 = INT8_MIN;
	volatile int8_t x120 = 2;
	uint64_t t26 = 1729LLU;

	t26 = (x117%((x118<=x119)+x120));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x122 = 35759LLU;
	volatile int16_t x123 = INT16_MIN;
	volatile int32_t t27 = -3825904;

	t27 = (x121%((x122<=x123)+x124));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = -1LL;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 20795U;
	uint32_t x128 = 112U;
	int64_t t28 = 11484123533653861LL;

	t28 = (x125%((x126<=x127)+x128));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = 655;
	uint8_t x130 = 10U;
	int64_t x131 = -1LL;
	int16_t x132 = INT16_MAX;
	static int32_t t29 = -1556;

	t29 = (x129%((x130<=x131)+x132));

	if (t29 != 655) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 17202026U;
	volatile int64_t x134 = -1LL;
	static int16_t x135 = -11606;
	static int8_t x136 = INT8_MAX;
	volatile uint32_t t30 = 1965U;

	t30 = (x133%((x134<=x135)+x136));

	if (t30 != 3U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = UINT64_MAX;
	static uint8_t x138 = 0U;
	volatile int8_t x139 = INT8_MIN;
	static int32_t x140 = -114223;
	volatile uint64_t t31 = 39875331LLU;

	t31 = (x137%((x138<=x139)+x140));

	if (t31 != 114222LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int8_t x144 = 3;
	int32_t t32 = -55322;

	t32 = (x141%((x142<=x143)+x144));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	int16_t x148 = -1;

	t33 = (x145%((x146<=x147)+x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t34 = -37260;

	t34 = (x149%((x150<=x151)+x152));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x154 = 69169293096697LLU;
	volatile uint32_t x155 = UINT32_MAX;
	static int8_t x156 = -1;
	static volatile uint64_t t35 = 3477514274198LLU;

	t35 = (x153%((x154<=x155)+x156));

	if (t35 != 22018311411513998LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 13282479LLU;
	int16_t x159 = -2329;
	uint32_t x160 = 228U;
	uint32_t t36 = 55U;

	t36 = (x157%((x158<=x159)+x160));

	if (t36 != 195U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = -11;
	uint64_t x163 = 64523LLU;
	uint64_t t37 = 3956LLU;

	t37 = (x161%((x162<=x163)+x164));

	if (t37 != 12LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = 1;
	static uint8_t x168 = UINT8_MAX;
	int32_t t38 = -176234359;

	t38 = (x165%((x166<=x167)+x168));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = -6LL;
	uint8_t x171 = 4U;
	uint32_t x172 = 2339948U;
	volatile uint32_t t39 = 306402983U;

	t39 = (x169%((x170<=x171)+x172));

	if (t39 != 1160753U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x174 = 115LL;
	static int8_t x175 = -1;
	volatile int32_t t40 = -573249;

	t40 = (x173%((x174<=x175)+x176));

	if (t40 != -18) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int32_t t41 = -7772959;

	t41 = (x177%((x178<=x179)+x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x181 = 127018341602302547LL;
	static int64_t x182 = -1LL;
	int8_t x184 = -13;
	int64_t t42 = 22423LL;

	t42 = (x181%((x182<=x183)+x184));

	if (t42 != 11LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = 1834LLU;
	int16_t x187 = INT16_MAX;
	int32_t x188 = INT32_MIN;
	uint64_t t43 = 7185522054031886723LLU;

	t43 = (x185%((x186<=x187)+x188));

	if (t43 != 1834LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x189 = 1877LLU;
	static uint8_t x190 = 2U;
	volatile int8_t x191 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;
	uint64_t t44 = 35407714750385LLU;

	t44 = (x189%((x190<=x191)+x192));

	if (t44 != 92LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MIN;
	static int32_t x194 = -389889;
	uint64_t x195 = 12731LLU;
	int64_t x196 = INT64_MIN;
	volatile int64_t t45 = -63LL;

	t45 = (x193%((x194<=x195)+x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 610546U;
	int16_t x198 = INT16_MIN;
	static int64_t x199 = INT64_MIN;
	int8_t x200 = -1;
	volatile uint32_t t46 = 16283U;

	t46 = (x197%((x198<=x199)+x200));

	if (t46 != 610546U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = 486872328LL;
	int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	volatile uint16_t x204 = 8344U;
	int64_t t47 = 550858462580612393LL;

	t47 = (x201%((x202<=x203)+x204));

	if (t47 != 8338LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	int64_t x208 = INT64_MIN;

	t48 = (x205%((x206<=x207)+x208));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 0U;
	int8_t x210 = INT8_MIN;

	t49 = (x209%((x210<=x211)+x212));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = -1;
	int64_t x215 = -207LL;
	volatile int8_t x216 = INT8_MAX;
	int32_t t50 = -312;

	t50 = (x213%((x214<=x215)+x216));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x217 = -4;
	int32_t x218 = -30056;
	uint64_t x219 = UINT64_MAX;
	static uint32_t x220 = 9U;
	uint32_t t51 = 1100243391U;

	t51 = (x217%((x218<=x219)+x220));

	if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MAX;
	uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 23646U;

	t52 = (x221%((x222<=x223)+x224));

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x226 = UINT64_MAX;
	static int8_t x227 = 42;
	int64_t x228 = INT64_MIN;

	t53 = (x225%((x226<=x227)+x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	volatile int8_t x232 = INT8_MAX;
	uint32_t t54 = 32919057U;

	t54 = (x229%((x230<=x231)+x232));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x233 = INT64_MIN;
	static int64_t x236 = -3190472309096LL;
	volatile int64_t t55 = -704LL;

	t55 = (x233%((x234<=x235)+x236));

	if (t55 != -543293749352LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x238 = 0;
	int8_t x239 = -31;
	volatile int8_t x240 = 52;
	volatile uint32_t t56 = 2U;

	t56 = (x237%((x238<=x239)+x240));

	if (t56 != 26U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = 2480LLU;
	static volatile int32_t x242 = 203221057;
	int32_t x243 = INT32_MIN;

	t57 = (x241%((x242<=x243)+x244));

	if (t57 != 2480LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	volatile int32_t t58 = 84226;

	t58 = (x245%((x246<=x247)+x248));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x253 = -2449;
	static int32_t x254 = -1;
	int16_t x256 = -33;
	int32_t t59 = 0;

	t59 = (x253%((x254<=x255)+x256));

	if (t59 != -7) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = 1;
	volatile int64_t x260 = INT64_MIN;
	int64_t t60 = -295LL;

	t60 = (x257%((x258<=x259)+x260));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = INT32_MAX;
	int8_t x263 = -1;
	uint32_t x264 = 15213U;

	t61 = (x261%((x262<=x263)+x264));

	if (t61 != 12333U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -1LL;
	int32_t x270 = INT32_MAX;

	t62 = (x269%((x270<=x271)+x272));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x273 = 190U;
	uint64_t x274 = 2080365LLU;
	volatile uint8_t x275 = 0U;
	static volatile uint64_t x276 = 70943356077402837LLU;
	uint64_t t63 = 247429556206591574LLU;

	t63 = (x273%((x274<=x275)+x276));

	if (t63 != 190LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x277 = 3U;
	int32_t x278 = INT32_MAX;
	volatile uint32_t x279 = 56650356U;
	int8_t x280 = INT8_MAX;
	int32_t t64 = 9;

	t64 = (x277%((x278<=x279)+x280));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x282 = INT16_MIN;
	uint32_t x283 = 23026U;
	volatile uint8_t x284 = UINT8_MAX;
	volatile uint32_t t65 = 6845U;

	t65 = (x281%((x282<=x283)+x284));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = -1;
	int32_t x286 = -1;
	int8_t x287 = -1;
	int32_t t66 = 187583;

	t66 = (x285%((x286<=x287)+x288));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = 1;
	static uint64_t x290 = 110482806780933335LLU;
	int16_t x291 = -1;
	int16_t x292 = -13;
	static volatile int32_t t67 = -124197865;

	t67 = (x289%((x290<=x291)+x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x297 = INT16_MIN;
	static int64_t x298 = 335182140LL;
	int64_t x299 = INT64_MIN;
	static int16_t x300 = 51;

	t68 = (x297%((x298<=x299)+x300));

	if (t68 != -26) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = 109U;
	int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MAX;
	static volatile int32_t x304 = INT32_MIN;
	int32_t t69 = -13506;

	t69 = (x301%((x302<=x303)+x304));

	if (t69 != 109) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x313 = 459780097U;
	static volatile uint32_t x314 = UINT32_MAX;
	uint8_t x315 = UINT8_MAX;
	uint32_t x316 = 121429859U;

	t70 = (x313%((x314<=x315)+x316));

	if (t70 != 95490520U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x321 = 155LL;
	static volatile int8_t x322 = INT8_MIN;
	uint16_t x323 = 4U;
	static int32_t x324 = INT32_MIN;
	static volatile int64_t t71 = 8734264348841LL;

	t71 = (x321%((x322<=x323)+x324));

	if (t71 != 155LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MAX;
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MIN;
	int32_t t72 = 244;

	t72 = (x325%((x326<=x327)+x328));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = -1;
	int64_t x331 = -1LL;
	volatile int64_t t73 = 21881LL;

	t73 = (x329%((x330<=x331)+x332));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = -1;
	int64_t x334 = INT64_MIN;
	uint64_t x335 = 5LLU;
	uint16_t x336 = UINT16_MAX;
	int32_t t74 = -98244;

	t74 = (x333%((x334<=x335)+x336));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x339 = -5;
	uint16_t x340 = UINT16_MAX;
	static int32_t t75 = -802428192;

	t75 = (x337%((x338<=x339)+x340));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x341 = INT16_MAX;
	int32_t x343 = 104009;
	static volatile int32_t t76 = 19116;

	t76 = (x341%((x342<=x343)+x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MAX;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MAX;
	volatile int64_t x348 = -1LL;
	int64_t t77 = -945LL;

	t77 = (x345%((x346<=x347)+x348));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x349 = -1LL;
	uint64_t x350 = 3013743663311LLU;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = -1;
	static int64_t t78 = 8571233270LL;

	t78 = (x349%((x350<=x351)+x352));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = -1;
	uint32_t x354 = 135389409U;
	static uint16_t x355 = UINT16_MAX;

	t79 = (x353%((x354<=x355)+x356));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x357 = 22887366496251954LLU;
	volatile int64_t x358 = 389524572903545LL;
	volatile uint8_t x359 = UINT8_MAX;
	uint8_t x360 = UINT8_MAX;

	t80 = (x357%((x358<=x359)+x360));

	if (t80 != 84LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = 58;
	static uint64_t x363 = 1LLU;
	static int64_t x364 = INT64_MAX;
	static int64_t t81 = -128316016LL;

	t81 = (x361%((x362<=x363)+x364));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = -958;
	int8_t x366 = -1;
	int32_t x367 = 2;

	t82 = (x365%((x366<=x367)+x368));

	if (t82 != 674LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = -1;
	static int64_t x370 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t83 = -565;

	t83 = (x369%((x370<=x371)+x372));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x373 = 2487U;
	int64_t x374 = INT64_MIN;
	volatile uint64_t x375 = UINT64_MAX;
	uint8_t x376 = 16U;

	t84 = (x373%((x374<=x375)+x376));

	if (t84 != 5) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = INT32_MIN;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	int32_t x380 = -124196;
	int32_t t85 = -13501;

	t85 = (x377%((x378<=x379)+x380));

	if (t85 != -10612) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x381 = 4U;
	int8_t x382 = -1;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = -5209;
	static int32_t t86 = -12092536;

	t86 = (x381%((x382<=x383)+x384));

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x385 = INT8_MIN;
	static uint16_t x386 = 275U;
	int8_t x387 = 1;
	int64_t t87 = 23270115852979LL;

	t87 = (x385%((x386<=x387)+x388));

	if (t87 != -25LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x389 = UINT8_MAX;
	uint16_t x390 = UINT16_MAX;
	int16_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t88 = -1064392001;

	t88 = (x389%((x390<=x391)+x392));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x394 = INT16_MIN;
	uint8_t x395 = 94U;
	uint16_t x396 = 31353U;
	volatile int32_t t89 = -2;

	t89 = (x393%((x394<=x395)+x396));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x397 = INT8_MAX;
	static uint64_t x398 = UINT64_MAX;
	static uint8_t x399 = 1U;
	static int32_t t90 = -364;

	t90 = (x397%((x398<=x399)+x400));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x402 = 368184648U;
	static volatile uint8_t x404 = UINT8_MAX;
	volatile uint64_t t91 = 9055LLU;

	t91 = (x401%((x402<=x403)+x404));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = 3U;
	uint16_t x406 = 57U;
	int8_t x407 = -43;
	volatile int32_t x408 = INT32_MIN;
	int32_t t92 = 172939014;

	t92 = (x405%((x406<=x407)+x408));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	uint16_t x410 = 2U;
	static uint64_t x411 = 1LLU;
	uint32_t x412 = 3U;

	t93 = (x409%((x410<=x411)+x412));

	if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = 15409LL;
	volatile uint64_t x416 = 30428053014502328LLU;

	t94 = (x413%((x414<=x415)+x416));

	if (t94 != 7343946921108080LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x418 = 13U;
	static int64_t x419 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;

	t95 = (x417%((x418<=x419)+x420));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = 100742U;
	int16_t x423 = -3;
	uint16_t x424 = UINT16_MAX;
	uint32_t t96 = 280876868U;

	t96 = (x421%((x422<=x423)+x424));

	if (t96 != 35207U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x425 = 784730716U;
	volatile int16_t x426 = INT16_MIN;
	volatile int64_t x427 = 142851301LL;
	static volatile int32_t x428 = INT32_MIN;
	volatile uint32_t t97 = 1780932U;

	t97 = (x425%((x426<=x427)+x428));

	if (t97 != 784730716U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x429 = 14;
	int64_t x430 = -768970342631LL;
	int16_t x431 = INT16_MAX;
	static uint64_t x432 = 40144712719529601LLU;
	uint64_t t98 = 197992073842LLU;

	t98 = (x429%((x430<=x431)+x432));

	if (t98 != 14LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x434 = 715768LL;
	int8_t x435 = INT8_MAX;
	int16_t x436 = 6209;
	int32_t t99 = -7;

	t99 = (x433%((x434<=x435)+x436));

	if (t99 != -128) { NG(); } else { ; }
	
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

