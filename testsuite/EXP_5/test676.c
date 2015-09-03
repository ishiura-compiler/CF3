#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MAX;
int64_t x9 = -62LL;
static int64_t t2 = 3000243275643LL;
int8_t x24 = -1;
int64_t x25 = 47940340247898LL;
volatile uint8_t x29 = UINT8_MAX;
int64_t t7 = 53373LL;
int16_t x38 = -1;
uint64_t x39 = 11LLU;
static int16_t x40 = -1;
uint64_t t8 = 1510361915LLU;
uint64_t x41 = 14241443277100822LLU;
static int16_t x42 = INT16_MAX;
static int8_t x44 = -1;
static volatile uint32_t x53 = 154054724U;
uint16_t x64 = 1528U;
static int64_t x65 = -17146615361LL;
int8_t x66 = -1;
int32_t x67 = INT32_MAX;
volatile int64_t t14 = -59509334LL;
uint64_t x69 = 6497222792179503418LLU;
volatile int64_t x70 = INT64_MIN;
static volatile int8_t x72 = INT8_MIN;
static int8_t x77 = INT8_MIN;
int32_t t18 = 611;
uint16_t x86 = 16U;
int32_t x88 = 91923757;
int32_t x90 = 2071709;
int64_t x92 = INT64_MIN;
uint64_t x95 = 4542676438889139487LLU;
int8_t x96 = -1;
int64_t x97 = -14110468117138LL;
int8_t x99 = INT8_MAX;
uint32_t x120 = UINT32_MAX;
volatile int32_t x121 = -87710;
static volatile int32_t t29 = 1960103;
static int64_t t30 = 7028623086805085LL;
uint64_t t32 = 240170021078694LLU;
volatile int64_t t33 = 534897741151LL;
uint8_t x152 = 0U;
volatile int32_t t34 = 1;
int8_t x153 = -1;
volatile int64_t x156 = INT64_MAX;
volatile int64_t t35 = INT64_MIN;
static int64_t t36 = -3361091621252LL;
volatile int32_t x165 = 210;
int32_t x168 = INT32_MAX;
int32_t t38 = 16;
int16_t x171 = 1583;
int64_t x187 = INT64_MIN;
int16_t x189 = 1;
volatile uint64_t x192 = UINT64_MAX;
uint64_t x197 = 807600151874107914LLU;
static volatile int64_t x208 = -1LL;
uint64_t x209 = 10LLU;
uint8_t x211 = 56U;
int16_t x212 = INT16_MIN;
int64_t x216 = -1LL;
uint64_t t51 = 2897764130LLU;
static int8_t x228 = INT8_MAX;
volatile int8_t x231 = -43;
uint32_t x233 = UINT32_MAX;
volatile uint8_t x235 = UINT8_MAX;
int8_t x241 = INT8_MAX;
static uint32_t x243 = UINT32_MAX;
int32_t x251 = INT32_MAX;
static volatile uint16_t x257 = 489U;
int64_t t59 = -62956LL;
int8_t x262 = -1;
uint8_t x263 = 66U;
static int16_t x266 = 62;
static volatile int8_t x267 = -1;
volatile int16_t x268 = INT16_MAX;
uint64_t x270 = 44694337587132760LLU;
uint32_t x290 = 0U;
static uint64_t t67 = 12799946211LLU;
int64_t x293 = -14922903256623LL;
static volatile uint8_t x305 = 38U;
int8_t x307 = INT8_MIN;
int32_t t72 = 670698;
int16_t x314 = INT16_MIN;
int32_t x322 = 5935054;
int64_t x326 = -1LL;
volatile int64_t t76 = 253828233105139039LL;
int16_t x329 = INT16_MIN;
int32_t t78 = -64365;
int32_t x339 = -95786330;
uint32_t x343 = 21456105U;
static int16_t x362 = 0;
int32_t t89 = -292303;
int8_t x381 = 4;
uint16_t x382 = 200U;
volatile int8_t x384 = 1;
static int32_t x387 = INT32_MAX;
static int8_t x396 = 1;
uint16_t x397 = UINT16_MAX;
int8_t x402 = 53;
static int16_t x404 = INT16_MAX;
uint8_t x409 = UINT8_MAX;
volatile int16_t x414 = 721;
int16_t x417 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = 508;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 17042775;

	t0 = (x1^((x2/x3)^x4));

	if (t0 != 2147483520) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 13684LLU;
	int32_t x6 = -213037;
	int8_t x7 = 46;
	static uint64_t x8 = 835866526074296LLU;
	static uint64_t t1 = 8LLU;

	t1 = (x5^((x6/x7)^x8));

	if (t1 != 18445908207183469861LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -22027;
	int64_t x11 = INT64_MAX;
	uint16_t x12 = UINT16_MAX;

	t2 = (x9^((x10/x11)^x12));

	if (t2 != -65475LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	uint8_t x16 = 62U;
	int64_t t3 = -1303312650335LL;

	t3 = (x13^((x14/x15)^x16));

	if (t3 != 9223372036854775489LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	static int16_t x22 = -1387;
	int8_t x23 = INT8_MAX;
	int32_t t4 = 29515209;

	t4 = (x21^((x22/x23)^x24));

	if (t4 != -2147483639) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	volatile uint16_t x27 = 13045U;
	int32_t x28 = -1;
	int64_t t5 = -1936017576887983LL;

	t5 = (x25^((x26/x27)^x28));

	if (t5 != -47940340247899LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = -105113;
	static volatile uint32_t x31 = 2535137U;
	int32_t x32 = -1;
	volatile uint32_t t6 = 30035U;

	t6 = (x29^((x30/x31)^x32));

	if (t6 != 4294965662U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 1;
	int64_t x34 = INT64_MAX;
	volatile int16_t x35 = -1749;
	int8_t x36 = INT8_MIN;

	t7 = (x33^((x34/x35)^x36));

	if (t7 != 5273511742055389LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;

	t8 = (x37^((x38/x39)^x40));

	if (t8 != 1676976733973595601LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = -1;
	volatile uint64_t t9 = 122879832LLU;

	t9 = (x41^((x42/x43)^x44));

	if (t9 != 14241443277089000LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MAX;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	int64_t x48 = INT64_MAX;
	uint64_t t10 = 1LLU;

	t10 = (x45^((x46/x47)^x48));

	if (t10 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = 1;
	volatile int64_t x55 = -1LL;
	volatile uint8_t x56 = 25U;
	static volatile int64_t t11 = -2LL;

	t11 = (x53^((x54/x55)^x56));

	if (t11 != -154054750LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	uint32_t x58 = 21206777U;
	int32_t x59 = INT32_MAX;
	uint32_t x60 = UINT32_MAX;
	uint32_t t12 = 3U;

	t12 = (x57^((x58/x59)^x60));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = 1210;
	volatile int32_t x62 = INT32_MIN;
	volatile int64_t x63 = INT64_MAX;
	volatile int64_t t13 = 38175983901990LL;

	t13 = (x61^((x62/x63)^x64));

	if (t13 != 322LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x68 = -106269180916473076LL;

	t14 = (x65^((x66/x67)^x68));

	if (t14 != 106269182695148211LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x71 = 5500816LL;
	volatile uint64_t t15 = 2LLU;

	t15 = (x69^((x70/x71)^x72));

	if (t15 != 6497221134929900100LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 3U;
	uint64_t x74 = 462704127130795LLU;
	volatile int8_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t16 = 6226720LLU;

	t16 = (x73^((x74/x75)^x76));

	if (t16 != 4294967292LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = UINT16_MAX;
	uint16_t x79 = 4U;
	static volatile int16_t x80 = -3878;
	volatile int32_t t17 = 482708338;

	t17 = (x77^((x78/x79)^x80));

	if (t17 != 12453) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 205U;
	volatile int16_t x83 = INT16_MAX;
	volatile uint16_t x84 = 27U;

	t18 = (x81^((x82/x83)^x84));

	if (t18 != 32740) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 597358166591406LLU;
	uint16_t x87 = UINT16_MAX;
	volatile uint64_t t19 = 720243787584073LLU;

	t19 = (x85^((x86/x87)^x88));

	if (t19 != 597358214144643LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	uint64_t x91 = 969LLU;
	uint64_t t20 = 586561317736976LLU;

	t20 = (x89^((x90/x91)^x92));

	if (t20 != 9223372036854777894LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	static int16_t x94 = -1615;
	volatile uint64_t t21 = 951LLU;

	t21 = (x93^((x94/x95)^x96));

	if (t21 != 18446744073709551364LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = INT64_MIN;
	uint32_t x100 = 757016U;
	int64_t t22 = -4049753017LL;

	t22 = (x97^((x98/x99)^x100));

	if (t22 != 72630290502868745LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = UINT64_MAX;
	uint64_t t23 = 47331325589203LLU;

	t23 = (x101^((x102/x103)^x104));

	if (t23 != 65536LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	static int64_t t24 = 25032183081042LL;

	t24 = (x109^((x110/x111)^x112));

	if (t24 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	static int32_t x114 = INT32_MIN;
	static uint64_t x115 = 467034712672394908LLU;
	volatile int16_t x116 = INT16_MIN;
	volatile uint64_t t25 = 62243029LLU;

	t25 = (x113^((x114/x115)^x116));

	if (t25 != 2147450919LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x117 = 1133738677451215933LLU;
	int64_t x118 = 1665967509695LL;
	int8_t x119 = -1;
	volatile uint64_t t26 = 247468LLU;

	t26 = (x117^((x118/x119)^x120));

	if (t26 != 17313005949849371779LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = INT32_MIN;
	uint32_t x123 = 2349975U;
	volatile int32_t x124 = -1;
	uint32_t t27 = 1U;

	t27 = (x121^((x122/x123)^x124));

	if (t27 != 87308U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -11006;
	int8_t x126 = 56;
	int64_t x127 = INT64_MAX;
	uint16_t x128 = 4701U;
	static int64_t t28 = 1806279632690409341LL;

	t28 = (x125^((x126/x127)^x128));

	if (t28 != -14497LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -1;
	volatile int16_t x130 = -1;
	uint16_t x131 = 100U;
	int8_t x132 = INT8_MIN;

	t29 = (x129^((x130/x131)^x132));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	int64_t x134 = -1LL;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = -1LL;

	t30 = (x133^((x134/x135)^x136));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = -280133345509507627LL;
	int16_t x138 = -5742;
	uint32_t x139 = UINT32_MAX;
	int16_t x140 = -1;
	volatile int64_t t31 = -18925527375987LL;

	t31 = (x137^((x138/x139)^x140));

	if (t31 != -280133348568464854LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -2LL;
	uint64_t x144 = UINT64_MAX;

	t32 = (x141^((x142/x143)^x144));

	if (t32 != 1073741951LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	static int32_t x146 = -1;
	static int64_t x147 = 4271674853031038LL;
	static int32_t x148 = -3;

	t33 = (x145^((x146/x147)^x148));

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1;
	volatile int8_t x150 = -1;
	static uint16_t x151 = 6626U;

	t34 = (x149^((x150/x151)^x152));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MIN;

	t35 = (x153^((x154/x155)^x156));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	static int64_t x158 = INT64_MIN;
	int16_t x159 = 1;
	static int32_t x160 = INT32_MIN;

	t36 = (x157^((x158/x159)^x160));

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MIN;
	static int8_t x162 = -1;
	int32_t x163 = 831677600;
	volatile uint32_t x164 = 17U;
	int64_t t37 = 3LL;

	t37 = (x161^((x162/x163)^x164));

	if (t37 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x166 = INT8_MIN;
	int32_t x167 = -1;

	t38 = (x165^((x166/x167)^x168));

	if (t38 != 2147483565) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x169 = 35479U;
	volatile uint16_t x170 = 28U;
	int32_t x172 = INT32_MIN;
	static uint32_t t39 = 86022U;

	t39 = (x169^((x170/x171)^x172));

	if (t39 != 2147519127U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = 36138786U;
	volatile int32_t x174 = INT32_MIN;
	uint8_t x175 = 1U;
	int64_t x176 = INT64_MAX;
	volatile int64_t t40 = 14120295536474527LL;

	t40 = (x173^((x174/x175)^x176));

	if (t40 != -9223372034743430947LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = -13;
	uint64_t x179 = UINT64_MAX;
	static int64_t x180 = INT64_MIN;
	volatile uint64_t t41 = 126081883543800780LLU;

	t41 = (x177^((x178/x179)^x180));

	if (t41 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -3844272908312559LL;
	int32_t x182 = INT32_MAX;
	static uint16_t x183 = 10767U;
	static int16_t x184 = -7;
	static int64_t t42 = -796240032LL;

	t42 = (x181^((x182/x183)^x184));

	if (t42 != 3844272908244210LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = -47191LL;
	uint8_t x188 = UINT8_MAX;
	static int64_t t43 = -242758LL;

	t43 = (x185^((x186/x187)^x188));

	if (t43 != 2147483392LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = -1;
	uint8_t x191 = 74U;
	uint64_t t44 = 44279LLU;

	t44 = (x189^((x190/x191)^x192));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x198 = 1;
	static uint16_t x199 = 13092U;
	uint8_t x200 = UINT8_MAX;
	static volatile uint64_t t45 = 78136726121605LLU;

	t45 = (x197^((x198/x199)^x200));

	if (t45 != 807600151874108149LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MAX;
	static uint16_t x204 = 1690U;
	uint64_t t46 = 1476563LLU;

	t46 = (x201^((x202/x203)^x204));

	if (t46 != 9222809069720959349LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 847U;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	int64_t t47 = 0LL;

	t47 = (x205^((x206/x207)^x208));

	if (t47 != -847LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x210 = 1015;
	uint64_t t48 = 918190781232LLU;

	t48 = (x209^((x210/x211)^x212));

	if (t48 != 18446744073709518872LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -6487402018597814LL;
	static volatile int8_t x214 = INT8_MAX;
	int32_t x215 = 162048;
	volatile int64_t t49 = -3062324897529LL;

	t49 = (x213^((x214/x215)^x216));

	if (t49 != 6487402018597813LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = -41906272341212LL;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = -1;
	int64_t x220 = INT64_MIN;
	uint64_t t50 = 49519LLU;

	t50 = (x217^((x218/x219)^x220));

	if (t50 != 9223330130582434597LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MAX;
	uint64_t x222 = 7532817LLU;
	int16_t x223 = 18;
	static int32_t x224 = -1;

	t51 = (x221^((x222/x223)^x224));

	if (t51 != 9223372036855194297LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = 0;
	int32_t x227 = INT32_MIN;
	volatile uint64_t t52 = 1501930738LLU;

	t52 = (x225^((x226/x227)^x228));

	if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x229 = -1;
	int16_t x230 = -1;
	int64_t x232 = INT64_MIN;
	int64_t t53 = INT64_MAX;

	t53 = (x229^((x230/x231)^x232));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x234 = 20U;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t54 = 0LLU;

	t54 = (x233^((x234/x235)^x236));

	if (t54 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x242 = -310043083LL;
	int32_t x244 = INT32_MAX;
	static int64_t t55 = -946LL;

	t55 = (x241^((x242/x243)^x244));

	if (t55 != 2147483520LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 1;
	volatile uint16_t x246 = 0U;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t56 = 17LL;

	t56 = (x245^((x246/x247)^x248));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MIN;
	volatile int8_t x250 = INT8_MIN;
	int64_t x252 = 120472727912316LL;
	static int64_t t57 = 757342LL;

	t57 = (x249^((x250/x251)^x252));

	if (t57 != -120472727912196LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = INT16_MAX;
	static int16_t x254 = -837;
	static int8_t x255 = -1;
	static uint32_t x256 = 171U;
	uint32_t t58 = 518869U;

	t58 = (x253^((x254/x255)^x256));

	if (t58 != 31761U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x258 = UINT16_MAX;
	int64_t x259 = -7797LL;
	static uint16_t x260 = UINT16_MAX;

	t59 = (x257^((x258/x259)^x260));

	if (t59 != -65042LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x261 = 42348602U;
	static uint32_t x264 = 55U;
	uint32_t t60 = 157012457U;

	t60 = (x261^((x262/x263)^x264));

	if (t60 != 42348557U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	static int32_t t61 = -11982;

	t61 = (x265^((x266/x267)^x268));

	if (t61 != 61) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 19525LLU;
	volatile int16_t x271 = -11;
	int32_t x272 = 75449;
	uint64_t t62 = 967807050170092LLU;

	t62 = (x269^((x270/x271)^x272));

	if (t62 != 92924LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x273 = 14LLU;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MAX;
	uint8_t x276 = UINT8_MAX;
	uint64_t t63 = 449571790341LLU;

	t63 = (x273^((x274/x275)^x276));

	if (t63 != 18446462590142643977LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x277 = 0U;
	volatile int32_t x278 = INT32_MAX;
	static uint64_t x279 = UINT64_MAX;
	int64_t x280 = -11LL;
	uint64_t t64 = 2029600LLU;

	t64 = (x277^((x278/x279)^x280));

	if (t64 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MIN;
	uint32_t x283 = UINT32_MAX;
	uint8_t x284 = 0U;
	volatile uint32_t t65 = 7730U;

	t65 = (x281^((x282/x283)^x284));

	if (t65 != 127U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 1991480LLU;
	int32_t x286 = -1;
	volatile int16_t x287 = -84;
	uint16_t x288 = 2267U;
	static volatile uint64_t t66 = 316924139561208LLU;

	t66 = (x285^((x286/x287)^x288));

	if (t66 != 1993699LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = -1552;
	static uint64_t x291 = 7887555LLU;
	uint8_t x292 = UINT8_MAX;

	t67 = (x289^((x290/x291)^x292));

	if (t67 != 18446744073709549839LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 31U;
	int64_t x296 = INT64_MIN;
	volatile int64_t t68 = -17LL;

	t68 = (x293^((x294/x295)^x296));

	if (t68 != 9223357113951519193LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MIN;
	static volatile uint16_t x298 = 15052U;
	volatile uint8_t x299 = 12U;
	int64_t x300 = INT64_MAX;
	int64_t t69 = 10660964438284LL;

	t69 = (x297^((x298/x299)^x300));

	if (t69 != -1255LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x301 = -1;
	volatile int16_t x302 = 20;
	static int64_t x303 = -1LL;
	int16_t x304 = INT16_MAX;
	int64_t t70 = -25917LL;

	t70 = (x301^((x302/x303)^x304));

	if (t70 != 32748LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x306 = 0U;
	uint32_t x308 = 39107283U;
	uint32_t t71 = 92U;

	t71 = (x305^((x306/x307)^x308));

	if (t71 != 39107317U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 78U;
	volatile int8_t x310 = -1;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;

	t72 = (x309^((x310/x311)^x312));

	if (t72 != 49) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x313 = 1U;
	volatile int8_t x315 = -1;
	uint64_t x316 = 2266821518560620815LLU;
	volatile uint64_t t73 = 67547933431482LLU;

	t73 = (x313^((x314/x315)^x316));

	if (t73 != 2266821518560653582LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MAX;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 2U;
	int64_t t74 = 147352519LL;

	t74 = (x317^((x318/x319)^x320));

	if (t74 != 4294934531LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	int32_t x323 = -170074;
	int16_t x324 = -1;
	static volatile int32_t t75 = 17711433;

	t75 = (x321^((x322/x323)^x324));

	if (t75 != -95) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x325 = 1134623749U;
	uint32_t x327 = 20U;
	int16_t x328 = -1;

	t76 = (x325^((x326/x327)^x328));

	if (t76 != -1134623750LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x330 = 1U;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	static volatile int32_t t77 = -215813841;

	t77 = (x329^((x330/x331)^x332));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x334 = -1;
	int8_t x335 = 1;
	int16_t x336 = -30;

	t78 = (x333^((x334/x335)^x336));

	if (t78 != -32739) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = UINT8_MAX;
	int16_t x338 = 2662;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t79 = 357U;

	t79 = (x337^((x338/x339)^x340));

	if (t79 != 4294967040U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MAX;
	uint8_t x342 = 2U;
	int16_t x344 = -1;
	volatile int64_t t80 = -113955477735LL;

	t80 = (x341^((x342/x343)^x344));

	if (t80 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x345 = INT32_MIN;
	uint8_t x346 = 25U;
	int8_t x347 = -4;
	int64_t x348 = -1597253089LL;
	volatile int64_t t81 = -240443456LL;

	t81 = (x345^((x346/x347)^x348));

	if (t81 != -550230555LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = INT64_MIN;
	volatile uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MIN;
	static uint64_t x352 = 14716952202187LLU;
	volatile uint64_t t82 = 0LLU;

	t82 = (x349^((x350/x351)^x352));

	if (t82 != 9223386753806977995LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x353 = INT64_MIN;
	volatile int32_t x354 = 125176;
	uint16_t x355 = 35U;
	int64_t x356 = INT64_MAX;
	static int64_t t83 = -4394551289706356LL;

	t83 = (x353^((x354/x355)^x356));

	if (t83 != -3577LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = 10730U;
	volatile uint32_t x358 = UINT32_MAX;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t84 = 8912U;

	t84 = (x357^((x358/x359)^x360));

	if (t84 != 4294956564U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x361 = UINT8_MAX;
	volatile int8_t x363 = -31;
	int16_t x364 = INT16_MIN;
	static int32_t t85 = 62013889;

	t85 = (x361^((x362/x363)^x364));

	if (t85 != -32513) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x365 = INT8_MIN;
	volatile uint64_t x366 = 7823096922887103LLU;
	uint16_t x367 = 5467U;
	uint16_t x368 = 2569U;
	uint64_t t86 = 50018949LLU;

	t86 = (x365^((x366/x367)^x368));

	if (t86 != 18446742642742493144LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int64_t x370 = INT64_MAX;
	static volatile uint32_t x371 = UINT32_MAX;
	volatile int64_t x372 = -1LL;
	static volatile uint64_t t87 = 493210579LLU;

	t87 = (x369^((x370/x371)^x372));

	if (t87 != 2147483648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x373 = 277U;
	static volatile int64_t x374 = -2568276337778441LL;
	static int32_t x375 = -42492455;
	int8_t x376 = 1;
	int64_t t88 = -21125LL;

	t88 = (x373^((x374/x375)^x376));

	if (t88 != 60441005LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	int8_t x380 = 1;

	t89 = (x377^((x378/x379)^x380));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x383 = 125U;
	static volatile uint32_t t90 = 4U;

	t90 = (x381^((x382/x383)^x384));

	if (t90 != 4U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x385 = -12;
	volatile int8_t x386 = INT8_MIN;
	static volatile int64_t x388 = INT64_MAX;
	volatile int64_t t91 = 934597925597753210LL;

	t91 = (x385^((x386/x387)^x388));

	if (t91 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MIN;
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = 7U;
	int64_t x392 = -1LL;
	volatile int64_t t92 = -541235270291LL;

	t92 = (x389^((x390/x391)^x392));

	if (t92 != -4664LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile uint64_t x394 = UINT64_MAX;
	volatile int16_t x395 = -1;
	uint64_t t93 = 3936798553876787880LLU;

	t93 = (x393^((x394/x395)^x396));

	if (t93 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x398 = UINT8_MAX;
	static volatile uint32_t x399 = 52U;
	int8_t x400 = 1;
	uint32_t t94 = 19U;

	t94 = (x397^((x398/x399)^x400));

	if (t94 != 65530U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x401 = 130722002LLU;
	volatile int16_t x403 = INT16_MIN;
	volatile uint64_t t95 = 13029125LLU;

	t95 = (x401^((x402/x403)^x404));

	if (t95 != 130733869LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = INT8_MIN;
	volatile int32_t x406 = 542517104;
	static int64_t x407 = -1LL;
	volatile int16_t x408 = INT16_MIN;
	int64_t t96 = 5510926LL;

	t96 = (x405^((x406/x407)^x408));

	if (t96 != -542529776LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x410 = 221U;
	uint32_t x411 = 11U;
	static uint16_t x412 = 5232U;
	uint32_t t97 = 7777844U;

	t97 = (x409^((x410/x411)^x412));

	if (t97 != 5275U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x413 = INT32_MAX;
	int32_t x415 = -5900;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t98 = -59;

	t98 = (x413^((x414/x415)^x416));

	if (t98 != 2147483392) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x418 = 13U;
	volatile int16_t x419 = 334;
	int16_t x420 = INT16_MIN;
	volatile int32_t t99 = 488514842;

	t99 = (x417^((x418/x419)^x420));

	if (t99 != 32767) { NG(); } else { ; }
	
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

