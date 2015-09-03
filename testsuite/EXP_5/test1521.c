#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 57400LLU;
int8_t x14 = -1;
static int16_t x15 = INT16_MIN;
volatile int64_t x22 = -9763895268423298LL;
int64_t x25 = INT64_MAX;
uint32_t x29 = 1787U;
int8_t x33 = INT8_MIN;
int32_t x36 = INT32_MAX;
int64_t x37 = -1LL;
uint64_t x39 = 209LLU;
int8_t x40 = INT8_MIN;
uint32_t x44 = 1334U;
int16_t x49 = -330;
uint8_t x54 = 11U;
static uint16_t x65 = 136U;
int32_t x66 = INT32_MIN;
uint32_t x72 = UINT32_MAX;
int32_t t19 = 656;
static uint16_t x93 = UINT16_MAX;
volatile int8_t x96 = INT8_MIN;
uint16_t x100 = 0U;
uint32_t x106 = 18U;
int32_t t26 = -357062;
volatile uint32_t t27 = 27999825U;
int32_t t29 = 883;
int32_t x122 = INT32_MAX;
int64_t x124 = -1LL;
int64_t t30 = 11352LL;
volatile uint64_t x125 = UINT64_MAX;
static uint64_t t31 = 6976869069494LLU;
uint64_t x130 = 18922745130337149LLU;
uint32_t x135 = 564788U;
static volatile int32_t t33 = 106483;
int16_t x139 = INT16_MIN;
uint64_t x143 = UINT64_MAX;
static volatile int16_t x152 = -9306;
static uint16_t x157 = 0U;
uint8_t x160 = 9U;
int32_t x167 = -1;
int16_t x174 = INT16_MAX;
static int32_t t44 = -1226;
int32_t x181 = -1;
static uint16_t x183 = UINT16_MAX;
int16_t x189 = INT16_MIN;
int8_t x192 = 44;
static uint32_t x193 = UINT32_MAX;
static volatile int8_t x198 = INT8_MIN;
static int32_t x201 = -1;
int64_t x202 = INT64_MIN;
static int8_t x203 = INT8_MAX;
int32_t x211 = INT32_MIN;
static int32_t x213 = -104552;
volatile int32_t t53 = -468;
static int32_t x218 = -39130;
static volatile int8_t x220 = 1;
int16_t x222 = -798;
static volatile int64_t t55 = 29536476379160LL;
int16_t x225 = INT16_MIN;
uint32_t x229 = UINT32_MAX;
int32_t x231 = 45458;
static int8_t x232 = INT8_MIN;
volatile uint32_t t57 = 2032039629U;
int64_t x238 = INT64_MIN;
volatile uint64_t t61 = 2705486791619LLU;
volatile int16_t x249 = -1;
volatile int32_t x251 = -1110;
uint8_t x252 = 7U;
volatile int32_t t62 = 181331;
uint8_t x259 = 0U;
volatile uint64_t t65 = 231009LLU;
volatile int64_t t67 = -313209225347LL;
int16_t x273 = -67;
int8_t x276 = INT8_MIN;
volatile uint8_t x277 = 8U;
volatile uint64_t x280 = UINT64_MAX;
int16_t x281 = INT16_MIN;
volatile int32_t x284 = -1;
int16_t x286 = INT16_MIN;
volatile int16_t x297 = 6887;
volatile uint16_t x300 = 26U;
static volatile uint8_t x315 = 1U;
uint16_t x317 = 2968U;
int8_t x318 = INT8_MIN;
int16_t x323 = -6;
uint16_t x326 = 94U;
int64_t x328 = -1LL;
volatile int64_t x329 = INT64_MIN;
int64_t x336 = 76828366797537134LL;
volatile int32_t x342 = -1;
int8_t x345 = 1;
static uint32_t x351 = 61U;
uint32_t x352 = UINT32_MAX;
static int8_t x362 = -1;
uint64_t x372 = 3704095496545300LLU;
int16_t x377 = 82;
static uint32_t x389 = 2U;
uint64_t x395 = UINT64_MAX;


void f0(void) {
	uint16_t x1 = 18188U;
	uint8_t x2 = 27U;
	int32_t x3 = -1;
	static int64_t x4 = 10816622298LL;
	volatile int64_t t0 = -49980776LL;

	t0 = (x1^((x2<x3)^x4));

	if (t0 != 10816637398LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -457461;
	static int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	static uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 23104809;

	t1 = (x5^((x6<x7)^x8));

	if (t1 != -394507) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	volatile int64_t x10 = INT64_MAX;
	int32_t x12 = -3704;
	int32_t t2 = 914408;

	t2 = (x9^((x10<x11)^x12));

	if (t2 != -3593) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	volatile int16_t x16 = INT16_MAX;
	int32_t t3 = 0;

	t3 = (x13^((x14<x15)^x16));

	if (t3 != 32640) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 27U;
	volatile int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int8_t x20 = 14;
	volatile int32_t t4 = -245060;

	t4 = (x17^((x18<x19)^x20));

	if (t4 != 21) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 5;
	uint8_t x23 = UINT8_MAX;
	uint64_t x24 = 61506024078LLU;
	uint64_t t5 = 267890469436612LLU;

	t5 = (x21^((x22<x23)^x24));

	if (t5 != 61506024074LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = INT16_MAX;
	int8_t x27 = -9;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -8949254LL;

	t6 = (x25^((x26<x27)^x28));

	if (t6 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;
	static int64_t x32 = INT64_MAX;
	static volatile int64_t t7 = -36866682213648184LL;

	t7 = (x29^((x30<x31)^x32));

	if (t7 != 9223372036854774021LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x34 = INT64_MIN;
	uint8_t x35 = 3U;
	int32_t t8 = -529852;

	t8 = (x33^((x34<x35)^x36));

	if (t8 != -2147483522) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MAX;
	volatile int64_t t9 = 53652506389LL;

	t9 = (x37^((x38<x39)^x40));

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile int8_t x42 = -1;
	uint8_t x43 = UINT8_MAX;
	volatile uint32_t t10 = 93293197U;

	t10 = (x41^((x42<x43)^x44));

	if (t10 != 1352U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int8_t x46 = -1;
	static uint64_t x47 = UINT64_MAX;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x45^((x46<x47)^x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 22U;
	volatile int32_t t12 = -847018165;

	t12 = (x49^((x50<x51)^x52));

	if (t12 != -352) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	volatile uint32_t x56 = UINT32_MAX;
	volatile uint32_t t13 = 4U;

	t13 = (x53^((x54<x55)^x56));

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	volatile int16_t x58 = INT16_MIN;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = 1763310LL;
	static int64_t t14 = -1121953646706378LL;

	t14 = (x57^((x58<x59)^x60));

	if (t14 != -1742865LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile uint8_t x62 = 5U;
	int16_t x63 = INT16_MAX;
	uint32_t x64 = 5305707U;
	volatile uint32_t t15 = 21566281U;

	t15 = (x61^((x62<x63)^x64));

	if (t15 != 4289661589U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x67 = 0U;
	volatile uint16_t x68 = UINT16_MAX;
	static int32_t t16 = -909833793;

	t16 = (x65^((x66<x67)^x68));

	if (t16 != 65398) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 10U;
	int32_t x70 = -4947;
	uint8_t x71 = UINT8_MAX;
	static uint32_t t17 = 2567451U;

	t17 = (x69^((x70<x71)^x72));

	if (t17 != 4294967284U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	uint8_t x74 = UINT8_MAX;
	static uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 14;

	t18 = (x73^((x74<x75)^x76));

	if (t18 != 32641) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -2;
	int64_t x78 = 530624402511840808LL;
	uint64_t x79 = 1448825138585LLU;
	int8_t x80 = INT8_MIN;

	t19 = (x77^((x78<x79)^x80));

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MIN;
	static int32_t t20 = -261;

	t20 = (x81^((x82<x83)^x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 11710U;
	int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MAX;
	int64_t t21 = -8119710LL;

	t21 = (x85^((x86<x87)^x88));

	if (t21 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -309257127172313LL;
	static int8_t x90 = 0;
	int32_t x91 = -1;
	int32_t x92 = INT32_MIN;
	int64_t t22 = -1037690906029321276LL;

	t22 = (x89^((x90<x91)^x92));

	if (t22 != 309258965640999LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MAX;
	uint64_t x95 = 9084588960977LLU;
	volatile int32_t t23 = 1754;

	t23 = (x93^((x94<x95)^x96));

	if (t23 != -65410) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = UINT8_MAX;
	static uint16_t x99 = UINT16_MAX;
	volatile int64_t t24 = -22867537983912684LL;

	t24 = (x97^((x98<x99)^x100));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	static int16_t x102 = INT16_MAX;
	int32_t x103 = 194361;
	int64_t x104 = -1LL;
	volatile int64_t t25 = 23023684LL;

	t25 = (x101^((x102<x103)^x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	static int8_t x108 = -1;

	t26 = (x105^((x106<x107)^x108));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 16650717U;
	int16_t x110 = INT16_MAX;
	uint8_t x111 = 13U;
	static int32_t x112 = 121;

	t27 = (x109^((x110<x111)^x112));

	if (t27 != 16650660U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	static uint16_t x115 = 1U;
	int16_t x116 = INT16_MAX;
	volatile int64_t t28 = 65LL;

	t28 = (x113^((x114<x115)^x116));

	if (t28 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -4;
	int32_t x118 = -1;
	static int64_t x119 = -1LL;
	volatile int8_t x120 = INT8_MIN;

	t29 = (x117^((x118<x119)^x120));

	if (t29 != 124) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 377162941U;
	int16_t x123 = INT16_MIN;

	t30 = (x121^((x122<x123)^x124));

	if (t30 != -377162942LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	static uint32_t x128 = 31277U;

	t31 = (x125^((x126<x127)^x128));

	if (t31 != 18446744073709520338LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x131 = 44;
	uint32_t x132 = 1U;
	volatile int64_t t32 = 147LL;

	t32 = (x129^((x130<x131)^x132));

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile uint8_t x134 = 77U;
	int16_t x136 = INT16_MAX;

	t33 = (x133^((x134<x135)^x136));

	if (t33 != -2147450882) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1;
	static uint32_t x138 = UINT32_MAX;
	int8_t x140 = -1;
	static int32_t t34 = -4416887;

	t34 = (x137^((x138<x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	uint8_t x142 = 76U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 1656865;

	t35 = (x141^((x142<x143)^x144));

	if (t35 != 2147483646) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static uint64_t x146 = UINT64_MAX;
	static volatile uint32_t x147 = UINT32_MAX;
	static int8_t x148 = INT8_MIN;
	static int32_t t36 = -14;

	t36 = (x145^((x146<x147)^x148));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static volatile int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	static volatile int32_t t37 = -2;

	t37 = (x149^((x150<x151)^x152));

	if (t37 != 9255) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 0;
	volatile uint8_t x154 = 111U;
	static int8_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (x153^((x154<x155)^x156));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = 3963;
	volatile uint32_t x159 = 2041U;
	volatile int32_t t39 = 0;

	t39 = (x157^((x158<x159)^x160));

	if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = 876446042074560LLU;
	int16_t x163 = INT16_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 317277;

	t40 = (x161^((x162<x163)^x164));

	if (t40 != -2147418113) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 11;
	int16_t x166 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 5948160;

	t41 = (x165^((x166<x167)^x168));

	if (t41 != -32758) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 4390LLU;
	static int64_t x170 = -87972612143410LL;
	int8_t x171 = -1;
	uint16_t x172 = 154U;
	uint64_t t42 = 0LLU;

	t42 = (x169^((x170<x171)^x172));

	if (t42 != 4541LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -544366LL;
	int8_t x175 = INT8_MAX;
	int32_t x176 = -1;
	volatile int64_t t43 = 144412977LL;

	t43 = (x173^((x174<x175)^x176));

	if (t43 != 544365LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 24U;
	int64_t x178 = -1LL;
	static uint64_t x179 = 11648076LLU;
	int32_t x180 = INT32_MAX;

	t44 = (x177^((x178<x179)^x180));

	if (t44 != 2147483623) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -1LL;
	static int8_t x184 = 60;
	volatile int32_t t45 = 20989;

	t45 = (x181^((x182<x183)^x184));

	if (t45 != -62) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -26;
	static uint64_t x186 = 32144LLU;
	volatile int8_t x187 = INT8_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 223937955762040375LL;

	t46 = (x185^((x186<x187)^x188));

	if (t46 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x190 = 21U;
	volatile uint16_t x191 = 880U;
	volatile int32_t t47 = 0;

	t47 = (x189^((x190<x191)^x192));

	if (t47 != -32723) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MAX;
	uint64_t x195 = 7495584134970136170LLU;
	int8_t x196 = INT8_MIN;
	static volatile uint32_t t48 = 1795326U;

	t48 = (x193^((x194<x195)^x196));

	if (t48 != 127U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	static volatile uint64_t t49 = 932650069LLU;

	t49 = (x197^((x198<x199)^x200));

	if (t49 != 32766LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x204 = INT16_MIN;
	int32_t t50 = 52069;

	t50 = (x201^((x202<x203)^x204));

	if (t50 != 32766) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 260U;
	volatile int16_t x206 = -1552;
	volatile int32_t x207 = INT32_MIN;
	int32_t x208 = -1;
	int32_t t51 = 880330;

	t51 = (x205^((x206<x207)^x208));

	if (t51 != -261) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 143U;
	uint16_t x210 = UINT16_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 9035823;

	t52 = (x209^((x210<x211)^x212));

	if (t52 != -32625) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 2U;
	uint32_t x215 = 24467U;
	int8_t x216 = INT8_MAX;

	t53 = (x213^((x214<x215)^x216));

	if (t53 != -104474) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x219 = -116;
	int32_t t54 = -7562;

	t54 = (x217^((x218<x219)^x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static uint8_t x223 = 5U;
	int8_t x224 = INT8_MIN;

	t55 = (x221^((x222<x223)^x224));

	if (t55 != 126LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = 1;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 446147281;

	t56 = (x225^((x226<x227)^x228));

	if (t56 != 32640) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;

	t57 = (x229^((x230<x231)^x232));

	if (t57 != 126U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -64024LL;
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = -1;
	int8_t x236 = -1;
	volatile int64_t t58 = 25765168414134415LL;

	t58 = (x233^((x234<x235)^x236));

	if (t58 != 64022LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 1U;
	int64_t x239 = INT64_MIN;
	volatile uint8_t x240 = UINT8_MAX;
	static int32_t t59 = 53;

	t59 = (x237^((x238<x239)^x240));

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -1;
	static uint8_t x243 = UINT8_MAX;
	int64_t x244 = INT64_MIN;
	static int64_t t60 = 10698129858LL;

	t60 = (x241^((x242<x243)^x244));

	if (t60 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 987955436934LL;
	volatile int32_t x246 = -8986500;
	static int64_t x247 = -1LL;
	volatile uint64_t x248 = 52168508529712316LLU;

	t61 = (x245^((x246<x247)^x248));

	if (t61 != 52167555088613691LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MIN;

	t62 = (x249^((x250<x251)^x252));

	if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	int64_t x256 = -605892242106690LL;
	int64_t t63 = -1179197754LL;

	t63 = (x253^((x254<x255)^x256));

	if (t63 != 605892242106688LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 84U;
	uint32_t x260 = 60271059U;
	volatile uint32_t t64 = 254931299U;

	t64 = (x257^((x258<x259)^x260));

	if (t64 != 4234696275U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	volatile int32_t x264 = INT32_MAX;

	t65 = (x261^((x262<x263)^x264));

	if (t65 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x265 = INT32_MIN;
	uint16_t x266 = 1454U;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -2456;

	t66 = (x265^((x266<x267)^x268));

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 0U;
	int16_t x270 = INT16_MAX;
	int32_t x271 = INT32_MAX;
	int64_t x272 = 173275898LL;

	t67 = (x269^((x270<x271)^x272));

	if (t67 != 173275899LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = INT8_MIN;
	volatile int8_t x275 = -1;
	int32_t t68 = 76;

	t68 = (x273^((x274<x275)^x276));

	if (t68 != 60) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	uint16_t x279 = 170U;
	uint64_t t69 = 14LLU;

	t69 = (x277^((x278<x279)^x280));

	if (t69 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -135;
	uint32_t x283 = 639692U;
	static volatile int32_t t70 = -4705306;

	t70 = (x281^((x282<x283)^x284));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 0U;
	int32_t x287 = -1;
	static volatile int64_t x288 = 14836092916LL;
	volatile int64_t t71 = -17263515LL;

	t71 = (x285^((x286<x287)^x288));

	if (t71 != 14836092917LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	volatile int32_t x290 = INT32_MIN;
	uint16_t x291 = 4U;
	uint32_t x292 = 30383975U;
	volatile uint32_t t72 = 521289743U;

	t72 = (x289^((x290<x291)^x292));

	if (t72 != 4264566630U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 19LLU;
	uint32_t x294 = 44046499U;
	uint8_t x295 = UINT8_MAX;
	int64_t x296 = 1998LL;
	volatile uint64_t t73 = 150930LLU;

	t73 = (x293^((x294<x295)^x296));

	if (t73 != 2013LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = UINT32_MAX;
	volatile uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = 3;

	t74 = (x297^((x298<x299)^x300));

	if (t74 != 6909) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -59391993322359242LL;
	int32_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	int64_t t75 = 4019LL;

	t75 = (x301^((x302<x303)^x304));

	if (t75 != 59391995185247798LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	static volatile uint16_t x306 = 1821U;
	int32_t x307 = 13737684;
	volatile int64_t x308 = INT64_MIN;
	volatile uint64_t t76 = 8736408LLU;

	t76 = (x305^((x306<x307)^x308));

	if (t76 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	static volatile int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	uint8_t x312 = 1U;
	static volatile int64_t t77 = INT64_MIN;

	t77 = (x309^((x310<x311)^x312));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	uint8_t x316 = 60U;
	volatile int32_t t78 = -3630780;

	t78 = (x313^((x314<x315)^x316));

	if (t78 != -62) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x319 = -1;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t79 = -245508992325385671LL;

	t79 = (x317^((x318<x319)^x320));

	if (t79 != -9223372036854772839LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	int64_t x322 = INT64_MIN;
	static int16_t x324 = -152;
	int64_t t80 = 1465047863294518000LL;

	t80 = (x321^((x322<x323)^x324));

	if (t80 != 150LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -2;
	int16_t x327 = -1;
	int64_t t81 = 8783579723395605LL;

	t81 = (x325^((x326<x327)^x328));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 34062173144609493LLU;
	uint64_t x331 = 7494665009331351134LLU;
	int8_t x332 = -1;
	volatile int64_t t82 = -25411279800971LL;

	t82 = (x329^((x330<x331)^x332));

	if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = INT64_MIN;
	static volatile int8_t x335 = INT8_MIN;
	volatile int64_t t83 = 322LL;

	t83 = (x333^((x334<x335)^x336));

	if (t83 != 76828370299256976LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	volatile int8_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = -148202208;

	t84 = (x337^((x338<x339)^x340));

	if (t84 != -65409) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 393340457LLU;
	static int16_t x343 = 1526;
	uint16_t x344 = UINT16_MAX;
	volatile uint64_t t85 = 230215LLU;

	t85 = (x341^((x342<x343)^x344));

	if (t85 != 393288151LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = INT16_MIN;
	static int64_t x347 = INT64_MIN;
	static volatile int64_t x348 = INT64_MAX;
	volatile int64_t t86 = -8191421602531453LL;

	t86 = (x345^((x346<x347)^x348));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 552136643841373LLU;
	static int16_t x350 = 10505;
	static volatile uint64_t t87 = 29853534270940149LLU;

	t87 = (x349^((x350<x351)^x352));

	if (t87 != 552138102665890LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 9298402743LL;
	static int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MAX;
	int32_t x356 = 102742935;
	int64_t t88 = 81546495946LL;

	t88 = (x353^((x354<x355)^x356));

	if (t88 != 9330615840LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 32;
	volatile int64_t x358 = -1LL;
	static volatile uint64_t x359 = UINT64_MAX;
	int32_t x360 = 910621278;
	int32_t t89 = 58;

	t89 = (x357^((x358<x359)^x360));

	if (t89 != 910621310) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = -1LL;
	volatile int32_t x363 = 13907186;
	static uint16_t x364 = UINT16_MAX;
	volatile int64_t t90 = 1622393097LL;

	t90 = (x361^((x362<x363)^x364));

	if (t90 != -65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	int32_t x366 = -1;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MAX;
	int32_t t91 = INT32_MIN;

	t91 = (x365^((x366<x367)^x368));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = INT32_MIN;
	int32_t x371 = -1;
	volatile uint64_t t92 = 1146069LLU;

	t92 = (x369^((x370<x371)^x372));

	if (t92 != 3704091728862186LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	static uint8_t x376 = 2U;
	volatile uint64_t t93 = 6716588741279LLU;

	t93 = (x373^((x374<x375)^x376));

	if (t93 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x378 = 1;
	int16_t x379 = -1;
	static int8_t x380 = 1;
	int32_t t94 = 6210585;

	t94 = (x377^((x378<x379)^x380));

	if (t94 != 83) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -54755646LL;
	int8_t x382 = -1;
	static uint64_t x383 = UINT64_MAX;
	static uint8_t x384 = 6U;
	static int64_t t95 = 371LL;

	t95 = (x381^((x382<x383)^x384));

	if (t95 != -54755644LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	static volatile uint64_t x386 = 675430019412LLU;
	volatile uint16_t x387 = 21U;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = 363571113176LL;

	t96 = (x385^((x386<x387)^x388));

	if (t96 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 1357137U;
	uint8_t x391 = 8U;
	int32_t x392 = 34;
	volatile uint32_t t97 = 21889572U;

	t97 = (x389^((x390<x391)^x392));

	if (t97 != 32U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t98 = 39148U;

	t98 = (x393^((x394<x395)^x396));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	int64_t x398 = -1LL;
	volatile uint32_t x399 = 569460255U;
	volatile uint16_t x400 = 923U;
	static volatile int32_t t99 = -18852866;

	t99 = (x397^((x398<x399)^x400));

	if (t99 != -923) { NG(); } else { ; }
	
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

