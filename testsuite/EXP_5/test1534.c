#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 9096944;
volatile int64_t t0 = 8168900588LL;
static int16_t x6 = INT16_MAX;
int16_t x11 = INT16_MAX;
static uint64_t x21 = UINT64_MAX;
static int32_t x23 = INT32_MIN;
uint32_t x26 = 18U;
uint64_t x28 = 29LLU;
volatile int32_t t7 = 784139246;
uint32_t x39 = 1516151535U;
int16_t x46 = -62;
int32_t x54 = -1;
static uint32_t t13 = 3687U;
static int64_t x62 = -1LL;
int32_t x75 = -1;
volatile uint64_t t18 = 136394561079036533LLU;
int64_t x85 = 9014030LL;
int16_t x101 = -18;
int64_t x102 = -16644454LL;
volatile int32_t x103 = 25;
static volatile int32_t t24 = -103;
uint16_t x111 = UINT16_MAX;
volatile int32_t t26 = 120;
int16_t x121 = -13315;
int64_t x122 = -1LL;
static int64_t x123 = INT64_MIN;
int16_t x135 = -31;
static volatile uint8_t x136 = 2U;
int64_t x140 = INT64_MAX;
int64_t x146 = 19512042651680438LL;
static volatile int16_t x151 = -1;
volatile uint64_t t36 = 333LLU;
static int8_t x157 = INT8_MIN;
static volatile uint32_t t38 = 1005U;
static int8_t x163 = INT8_MIN;
int32_t t40 = 13573;
static int32_t x171 = INT32_MIN;
int64_t x174 = -1LL;
int16_t x176 = INT16_MAX;
static int64_t x177 = 888580498181LL;
volatile int64_t x185 = INT64_MAX;
static int32_t t46 = -1;
uint8_t x199 = 4U;
uint32_t t48 = 126724U;
volatile uint32_t t49 = 15539722U;
static int64_t x205 = INT64_MAX;
int8_t x207 = -5;
volatile int16_t x208 = INT16_MIN;
static int8_t x209 = -6;
volatile uint32_t x212 = 6988U;
volatile int16_t x219 = 74;
int32_t x225 = INT32_MIN;
volatile int64_t x226 = INT64_MIN;
uint64_t x227 = 167639022811262619LLU;
int32_t t55 = -43691;
volatile int64_t x233 = -1LL;
uint32_t x235 = UINT32_MAX;
volatile int16_t x237 = 11;
int32_t t58 = -1040769420;
int8_t x248 = 2;
volatile uint64_t t60 = 63981LLU;
int32_t x254 = INT32_MIN;
int16_t x255 = -1;
volatile int32_t t61 = -54869;
int32_t t63 = -32;
int32_t t64 = 47;
int32_t t66 = 10854764;
int8_t x280 = 0;
int8_t x281 = 0;
static volatile int8_t x286 = INT8_MIN;
int32_t x287 = -484;
int32_t t70 = -167772766;
uint64_t x293 = UINT64_MAX;
uint32_t x295 = UINT32_MAX;
static int32_t x296 = -1;
static volatile uint64_t t71 = UINT64_MAX;
static int64_t x301 = INT64_MIN;
int32_t t74 = -43281;
int16_t x313 = 0;
volatile int16_t x315 = INT16_MIN;
int32_t t76 = -31;
uint64_t x319 = 1029271LLU;
uint16_t x327 = 14U;
static int8_t x328 = 9;
int32_t t79 = 416923711;
static int32_t x332 = -1;
volatile int16_t x335 = 647;
int32_t x337 = INT32_MIN;
static volatile int32_t x346 = 129639;
uint64_t x350 = 201887214794744LLU;
int8_t x359 = -1;
static volatile int32_t t87 = -50526;
int8_t x364 = INT8_MIN;
int32_t t88 = -659613636;
uint8_t x365 = 3U;
static int16_t x367 = -1;
int64_t x368 = -1LL;
volatile int64_t x378 = INT64_MAX;
int32_t t92 = -153;
volatile uint64_t t93 = 2598426262LLU;
uint8_t x392 = 18U;
static int32_t x398 = INT32_MIN;
int32_t t99 = 63843;


void f0(void) {
	static int64_t x1 = -123320865182LL;
	int16_t x2 = INT16_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1^((x2<=x3)+x4));

	if (t0 != -123320865182LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile int32_t x7 = -1;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = -131323;

	t1 = (x5^((x6<=x7)+x8));

	if (t1 != -2147483521) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int8_t x10 = -1;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9^((x10<=x11)+x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int64_t x14 = INT64_MIN;
	int8_t x15 = -15;
	volatile int8_t x16 = 1;
	volatile int32_t t3 = 3;

	t3 = (x13^((x14<=x15)+x16));

	if (t3 != -2147483646) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 60U;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 12U;
	static uint32_t t4 = 3034439U;

	t4 = (x17^((x18<=x19)+x20));

	if (t4 != 48U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = 243071613LL;
	volatile int64_t x24 = INT64_MIN;
	uint64_t t5 = 5787164589329LLU;

	t5 = (x21^((x22<=x23)+x24));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 651U;
	static int16_t x27 = INT16_MIN;
	static volatile uint64_t t6 = 27759025LLU;

	t6 = (x25^((x26<=x27)+x28));

	if (t6 != 661LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 0;
	int32_t x30 = 2038042;
	uint16_t x31 = UINT16_MAX;
	volatile uint16_t x32 = 59U;

	t7 = (x29^((x30<=x31)+x32));

	if (t7 != 59) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	static volatile uint64_t x36 = 25479343489624851LLU;
	volatile uint64_t t8 = 44497588561LLU;

	t8 = (x33^((x34<=x35)+x36));

	if (t8 != 18421264730219926675LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MIN;
	volatile uint32_t x40 = 7U;
	static uint64_t t9 = 2963853LLU;

	t9 = (x37^((x38<=x39)+x40));

	if (t9 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint8_t x42 = 4U;
	int8_t x43 = INT8_MIN;
	static uint16_t x44 = 506U;
	static uint32_t t10 = 57U;

	t10 = (x41^((x42<=x43)+x44));

	if (t10 != 4294966789U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	volatile uint8_t x47 = 0U;
	volatile uint32_t x48 = 496620941U;
	uint32_t t11 = 70123U;

	t11 = (x45^((x46<=x47)+x48));

	if (t11 != 3798357390U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 388U;
	static int64_t x50 = 1979519LL;
	volatile int8_t x51 = INT8_MIN;
	int64_t x52 = -107252340137245174LL;
	int64_t t12 = -403662582471LL;

	t12 = (x49^((x50<=x51)+x52));

	if (t12 != -107252340137244786LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 5670U;
	static uint16_t x55 = 4U;
	int16_t x56 = INT16_MIN;

	t13 = (x53^((x54<=x55)+x56));

	if (t13 != 4294940199U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	volatile uint8_t x63 = UINT8_MAX;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t14 = -3662069953802LL;

	t14 = (x61^((x62<=x63)+x64));

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 2;
	static int64_t x66 = 561163994075LL;
	int16_t x67 = -13967;
	static volatile int32_t x68 = INT32_MIN;
	int32_t t15 = 89519935;

	t15 = (x65^((x66<=x67)+x68));

	if (t15 != -2147483646) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -63;
	volatile uint8_t x71 = 2U;
	int32_t x72 = -1;
	int32_t t16 = 15;

	t16 = (x69^((x70<=x71)+x72));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = UINT16_MAX;
	volatile int64_t x74 = -771905374LL;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 0;

	t17 = (x73^((x74<=x75)+x76));

	if (t17 != -65410) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	uint32_t x78 = UINT32_MAX;
	static int64_t x79 = 320180LL;
	uint64_t x80 = 40902269LLU;

	t18 = (x77^((x78<=x79)+x80));

	if (t18 != 4254065026LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	volatile uint16_t x82 = UINT16_MAX;
	static int64_t x83 = INT64_MIN;
	volatile uint16_t x84 = 76U;
	int32_t t19 = 204;

	t19 = (x81^((x82<=x83)+x84));

	if (t19 != -2147483572) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x86 = UINT8_MAX;
	uint16_t x87 = UINT16_MAX;
	int16_t x88 = 1;
	volatile int64_t t20 = 31LL;

	t20 = (x85^((x86<=x87)+x88));

	if (t20 != 9014028LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = UINT16_MAX;
	int8_t x90 = 61;
	static volatile uint8_t x91 = 10U;
	static int16_t x92 = -1;
	volatile int32_t t21 = -395;

	t21 = (x89^((x90<=x91)+x92));

	if (t21 != -65536) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = 49;
	static int64_t x94 = INT64_MAX;
	int64_t x95 = INT64_MIN;
	uint8_t x96 = 33U;
	int32_t t22 = 288;

	t22 = (x93^((x94<=x95)+x96));

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x98 = 2U;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = 1U;
	int32_t t23 = 7656;

	t23 = (x97^((x98<=x99)+x100));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x104 = -6;

	t24 = (x101^((x102<=x103)+x104));

	if (t24 != 21) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 6;
	volatile int64_t x106 = INT64_MIN;
	static int32_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = 238;

	t25 = (x105^((x106<=x107)+x108));

	if (t25 != -32761) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 10532U;
	int32_t x110 = INT32_MIN;
	int32_t x112 = 91251;

	t26 = (x109^((x110<=x111)+x112));

	if (t26 != 85328) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -1;
	volatile uint16_t x114 = 14575U;
	uint64_t x115 = 1LLU;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t27 = -260702;

	t27 = (x113^((x114<=x115)+x116));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -1;
	uint8_t x118 = 26U;
	volatile int32_t x119 = INT32_MAX;
	int8_t x120 = -1;
	int32_t t28 = -41149;

	t28 = (x117^((x118<=x119)+x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x124 = 24726U;
	uint32_t t29 = 13U;

	t29 = (x121^((x122<=x123)+x124));

	if (t29 != 4294945643U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 32287682U;
	static uint32_t x126 = UINT32_MAX;
	volatile uint8_t x127 = 44U;
	int8_t x128 = 5;
	uint32_t t30 = 126073U;

	t30 = (x125^((x126<=x127)+x128));

	if (t30 != 32287687U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 1;
	int32_t x130 = INT32_MAX;
	static int64_t x131 = -6110682LL;
	int8_t x132 = -1;
	volatile int32_t t31 = 2779014;

	t31 = (x129^((x130<=x131)+x132));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int32_t t32 = -48007;

	t32 = (x133^((x134<=x135)+x136));

	if (t32 != -2147483645) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	volatile uint16_t x138 = 5U;
	int16_t x139 = INT16_MIN;
	volatile int64_t t33 = 186834720286230853LL;

	t33 = (x137^((x138<=x139)+x140));

	if (t33 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MAX;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 259LLU;
	static volatile uint64_t t34 = 263662442LLU;

	t34 = (x141^((x142<=x143)+x144));

	if (t34 != 380LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 5;
	volatile int8_t x147 = INT8_MIN;
	static uint32_t x148 = 791786365U;
	uint32_t t35 = 766U;

	t35 = (x145^((x146<=x147)+x148));

	if (t35 != 791786360U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x149 = INT8_MIN;
	int32_t x150 = -1;
	static uint64_t x152 = 115705391LLU;

	t36 = (x149^((x150<=x151)+x152));

	if (t36 != 18446744073593846192LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -808748;
	uint16_t x154 = 11U;
	volatile int64_t x155 = -1LL;
	int64_t x156 = INT64_MIN;
	volatile int64_t t37 = -12182810LL;

	t37 = (x153^((x154<=x155)+x156));

	if (t37 != 9223372036853967060LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = 1;
	static uint8_t x159 = 15U;
	uint32_t x160 = 1737599U;

	t38 = (x157^((x158<=x159)+x160));

	if (t38 != 4293229568U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 1LL;
	volatile int32_t x162 = -79999213;
	static volatile uint16_t x164 = UINT16_MAX;
	volatile int64_t t39 = -1371443092LL;

	t39 = (x161^((x162<=x163)+x164));

	if (t39 != 65537LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 65U;
	volatile uint32_t x167 = 814U;
	int16_t x168 = INT16_MAX;

	t40 = (x165^((x166<=x167)+x168));

	if (t40 != -65536) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x169 = 0U;
	int32_t x170 = INT32_MIN;
	int16_t x172 = -943;
	int32_t t41 = 11;

	t41 = (x169^((x170<=x171)+x172));

	if (t41 != -942) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	int32_t x175 = 3654526;
	volatile int32_t t42 = 7498932;

	t42 = (x173^((x174<=x175)+x176));

	if (t42 != -32896) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = -1LL;
	volatile int16_t x179 = INT16_MIN;
	uint32_t x180 = 236490U;
	int64_t t43 = -130947397788585335LL;

	t43 = (x177^((x178<=x179)+x180));

	if (t43 != 888580470991LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MAX;
	uint32_t x182 = 376223U;
	static uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t44 = -63;

	t44 = (x181^((x182<=x183)+x184));

	if (t44 != 2147450880) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x186 = -1LL;
	int32_t x187 = INT32_MAX;
	int8_t x188 = 2;
	volatile int64_t t45 = 5850LL;

	t45 = (x185^((x186<=x187)+x188));

	if (t45 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 30793U;
	int64_t x190 = -1LL;
	static int8_t x191 = -1;
	int16_t x192 = -1;

	t46 = (x189^((x190<=x191)+x192));

	if (t46 != 30793) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x193 = 5U;
	static int64_t x194 = -1125710741354655LL;
	uint64_t x195 = 2360194088627589701LLU;
	int16_t x196 = -9;
	int32_t t47 = -1602580;

	t47 = (x193^((x194<=x195)+x196));

	if (t47 != -14) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = INT16_MIN;
	uint32_t x200 = 1415619U;

	t48 = (x197^((x198<=x199)+x200));

	if (t48 != 2148899268U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x201 = UINT8_MAX;
	int8_t x202 = -21;
	int16_t x203 = -1;
	uint32_t x204 = 28432117U;

	t49 = (x201^((x202<=x203)+x204));

	if (t49 != 28431881U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x206 = UINT64_MAX;
	int64_t t50 = 6492014109110029LL;

	t50 = (x205^((x206<=x207)+x208));

	if (t50 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = INT8_MAX;
	int8_t x211 = INT8_MIN;
	uint32_t t51 = 192U;

	t51 = (x209^((x210<=x211)+x212));

	if (t51 != 4294960310U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = -1;
	int64_t x215 = -19907285213844LL;
	volatile int64_t x216 = 52693LL;
	volatile uint64_t t52 = 986904545058LLU;

	t52 = (x213^((x214<=x215)+x216));

	if (t52 != 18446744073709498922LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x217 = UINT64_MAX;
	int64_t x218 = -1LL;
	int32_t x220 = INT32_MIN;
	uint64_t t53 = 176808566708491914LLU;

	t53 = (x217^((x218<=x219)+x220));

	if (t53 != 2147483646LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 1;
	int64_t x222 = INT64_MIN;
	int64_t x223 = 33625261913352388LL;
	static int16_t x224 = INT16_MAX;
	static int32_t t54 = -9387;

	t54 = (x221^((x222<=x223)+x224));

	if (t54 != 32769) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x228 = 5U;

	t55 = (x225^((x226<=x227)+x228));

	if (t55 != -2147483643) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	int32_t x231 = -1;
	int8_t x232 = -22;
	int32_t t56 = 93124671;

	t56 = (x229^((x230<=x231)+x232));

	if (t56 != 107) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x234 = UINT8_MAX;
	volatile int8_t x236 = -1;
	int64_t t57 = 164508566509179482LL;

	t57 = (x233^((x234<=x235)+x236));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x238 = 812581087U;
	int64_t x239 = INT64_MIN;
	static int32_t x240 = -3366666;

	t58 = (x237^((x238<=x239)+x240));

	if (t58 != -3366659) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = 3630;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MIN;
	static int64_t x244 = INT64_MIN;
	int64_t t59 = 9393LL;

	t59 = (x241^((x242<=x243)+x244));

	if (t59 != -9223372036854772178LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 16432606LLU;
	uint64_t x246 = 23317266693648717LLU;
	int32_t x247 = INT32_MIN;

	t60 = (x245^((x246<=x247)+x248));

	if (t60 != 16432605LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -1;
	static uint8_t x256 = 41U;

	t61 = (x253^((x254<=x255)+x256));

	if (t61 != -43) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x257 = INT32_MIN;
	uint32_t x258 = 2U;
	uint64_t x259 = 89196590LLU;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t62 = 7;

	t62 = (x257^((x258<=x259)+x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	volatile int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = -1100;

	t63 = (x261^((x262<=x263)+x264));

	if (t63 != 31668) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MAX;
	static uint8_t x266 = 0U;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;

	t64 = (x265^((x266<=x267)+x268));

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 30;
	static volatile uint32_t x270 = 3967861U;
	uint32_t x271 = 358142015U;
	static int8_t x272 = -1;
	int32_t t65 = 120224151;

	t65 = (x269^((x270<=x271)+x272));

	if (t65 != 30) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -206;
	static uint8_t x274 = UINT8_MAX;
	volatile int32_t x275 = INT32_MAX;
	static uint8_t x276 = 26U;

	t66 = (x273^((x274<=x275)+x276));

	if (t66 != -215) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	int32_t x278 = 104;
	int64_t x279 = -20321891618497LL;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x277^((x278<=x279)+x280));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x282 = 4U;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x281^((x282<=x283)+x284));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 2229U;
	uint8_t x288 = 12U;
	volatile uint32_t t69 = 640440465U;

	t69 = (x285^((x286<=x287)+x288));

	if (t69 != 2233U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = 8849129;
	int8_t x290 = 35;
	volatile uint32_t x291 = 305044480U;
	int8_t x292 = INT8_MAX;

	t70 = (x289^((x290<=x291)+x292));

	if (t70 != 8849001) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x294 = 61U;

	t71 = (x293^((x294<=x295)+x296));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 384636U;
	int32_t x298 = -1;
	uint16_t x299 = 0U;
	static int32_t x300 = INT32_MIN;
	volatile uint32_t t72 = 220U;

	t72 = (x297^((x298<=x299)+x300));

	if (t72 != 2147868285U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x302 = -5;
	volatile int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = 62U;
	int64_t t73 = -45294526057054LL;

	t73 = (x301^((x302<=x303)+x304));

	if (t73 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	uint16_t x307 = 4694U;
	int32_t x308 = INT32_MIN;

	t74 = (x305^((x306<=x307)+x308));

	if (t74 != 2147450881) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -1;
	int64_t x310 = 490135768531148LL;
	int16_t x311 = -16161;
	static int8_t x312 = INT8_MAX;
	static int32_t t75 = 407877;

	t75 = (x309^((x310<=x311)+x312));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = INT16_MIN;

	t76 = (x313^((x314<=x315)+x316));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -15987;
	uint16_t x318 = 0U;
	uint8_t x320 = 15U;
	int32_t t77 = -6228459;

	t77 = (x317^((x318<=x319)+x320));

	if (t77 != -15971) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 362U;
	uint64_t x322 = 20887123362580748LLU;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = 7U;
	uint32_t t78 = 175071990U;

	t78 = (x321^((x322<=x323)+x324));

	if (t78 != 354U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;

	t79 = (x325^((x326<=x327)+x328));

	if (t79 != -119) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	volatile int32_t t80 = 59743074;

	t80 = (x329^((x330<=x331)+x332));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = 709U;
	int64_t x334 = INT64_MAX;
	volatile int64_t x336 = 9487LL;
	static int64_t t81 = 568951323400062692LL;

	t81 = (x333^((x334<=x335)+x336));

	if (t81 != 10186LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x338 = -780;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 97U;
	int32_t t82 = 6475;

	t82 = (x337^((x338<=x339)+x340));

	if (t82 != -2147483551) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = 10U;
	uint8_t x344 = 8U;
	int32_t t83 = 329;

	t83 = (x341^((x342<=x343)+x344));

	if (t83 != -9) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = INT8_MIN;
	int8_t x347 = -1;
	volatile int8_t x348 = INT8_MIN;
	int32_t t84 = -284755077;

	t84 = (x345^((x346<=x347)+x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	uint64_t x351 = 7242LLU;
	int64_t x352 = -1LL;
	volatile int64_t t85 = 34633744LL;

	t85 = (x349^((x350<=x351)+x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	static uint8_t x355 = UINT8_MAX;
	int8_t x356 = 28;
	volatile int32_t t86 = 61;

	t86 = (x353^((x354<=x355)+x356));

	if (t86 != -29) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = 0;
	int16_t x360 = 18;

	t87 = (x357^((x358<=x359)+x360));

	if (t87 != -32750) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = -990930792;
	int8_t x363 = INT8_MAX;

	t88 = (x361^((x362<=x363)+x364));

	if (t88 != 2147483521) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x366 = -1;
	volatile int64_t t89 = 0LL;

	t89 = (x365^((x366<=x367)+x368));

	if (t89 != 3LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -1;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 2U;
	static int64_t x372 = -36389981LL;
	static int64_t t90 = -57LL;

	t90 = (x369^((x370<=x371)+x372));

	if (t90 != 36389979LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	static uint8_t x374 = UINT8_MAX;
	int8_t x375 = INT8_MAX;
	int16_t x376 = -6534;
	int32_t t91 = -48759615;

	t91 = (x373^((x374<=x375)+x376));

	if (t91 != 6650) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x377 = -1;
	int16_t x379 = 3029;
	int16_t x380 = INT16_MIN;

	t92 = (x377^((x378<=x379)+x380));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 937127LLU;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	int32_t x384 = -1;

	t93 = (x381^((x382<=x383)+x384));

	if (t93 != 18446744073708614488LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = 708U;
	uint64_t x386 = 19575873700265898LLU;
	int8_t x387 = 0;
	int64_t x388 = 3286219624LL;
	volatile int64_t t94 = 7005946LL;

	t94 = (x385^((x386<=x387)+x388));

	if (t94 != 3286219180LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -1;
	static uint16_t x390 = 30U;
	int8_t x391 = INT8_MAX;
	volatile int32_t t95 = 1661749;

	t95 = (x389^((x390<=x391)+x392));

	if (t95 != -20) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x393 = -7517;
	uint16_t x394 = 2U;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	static volatile int64_t t96 = -32144231046LL;

	t96 = (x393^((x394<=x395)+x396));

	if (t96 != 7516LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = -1;
	static int32_t x399 = -134;
	static uint8_t x400 = 1U;
	int32_t t97 = 0;

	t97 = (x397^((x398<=x399)+x400));

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x401 = 1U;
	volatile uint64_t x402 = 329593425243LLU;
	int16_t x403 = 93;
	int16_t x404 = INT16_MIN;
	int32_t t98 = -1873469;

	t98 = (x401^((x402<=x403)+x404));

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = 69U;
	volatile uint64_t x406 = UINT64_MAX;
	uint16_t x407 = UINT16_MAX;
	static volatile int16_t x408 = INT16_MIN;

	t99 = (x405^((x406<=x407)+x408));

	if (t99 != -32699) { NG(); } else { ; }
	
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

