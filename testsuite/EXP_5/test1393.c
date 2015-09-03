#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x9 = INT8_MAX;
int64_t x10 = INT64_MIN;
uint8_t x16 = 52U;
int16_t x20 = INT16_MIN;
uint32_t x24 = 64U;
int8_t x27 = -33;
volatile int16_t x29 = INT16_MIN;
int32_t t7 = -1;
uint32_t x35 = UINT32_MAX;
static uint16_t x37 = 5U;
static volatile int32_t t13 = -18341127;
int64_t x61 = -1LL;
int8_t x65 = INT8_MAX;
static int16_t x70 = INT16_MIN;
int32_t x71 = INT32_MAX;
volatile int8_t x75 = INT8_MIN;
volatile int8_t x76 = INT8_MAX;
int32_t t18 = -439790751;
volatile int16_t x79 = INT16_MAX;
static volatile uint8_t x83 = UINT8_MAX;
uint32_t x99 = UINT32_MAX;
volatile uint64_t x104 = 2480570557476639LLU;
static volatile uint32_t x108 = 95U;
volatile int16_t x116 = -1;
static int32_t t27 = 226186365;
int64_t x117 = INT64_MIN;
int32_t t29 = 3;
volatile int8_t x127 = INT8_MIN;
uint32_t x129 = 6U;
int32_t t32 = -29486353;
static int8_t x145 = -2;
static volatile int32_t x147 = -1;
int8_t x159 = INT8_MAX;
int64_t t38 = -382995383479476521LL;
uint16_t x161 = 54U;
static uint16_t x168 = UINT16_MAX;
static int64_t x170 = INT64_MIN;
static volatile int64_t t41 = 0LL;
uint64_t x173 = UINT64_MAX;
int8_t x179 = -2;
int64_t x181 = -3781LL;
int8_t x188 = -3;
uint16_t x192 = 2657U;
static volatile int64_t x196 = INT64_MAX;
static volatile int64_t t47 = -97129203LL;
int64_t x203 = INT64_MIN;
volatile int32_t t50 = -5443385;
uint64_t x213 = 5353680354027558LLU;
int64_t x216 = INT64_MIN;
int8_t x221 = INT8_MAX;
volatile uint32_t t54 = 64967010U;
int64_t x227 = INT64_MIN;
uint8_t x234 = 16U;
int64_t x243 = -7278558741LL;
uint64_t x249 = 32073LLU;
int16_t x254 = INT16_MIN;
volatile int64_t x264 = INT64_MIN;
uint8_t x268 = UINT8_MAX;
volatile int32_t t66 = INT32_MAX;
int8_t x278 = 0;
volatile int32_t t68 = 0;
int16_t x285 = INT16_MIN;
uint32_t x288 = 1842285U;
int32_t x290 = INT32_MIN;
uint32_t x298 = 2U;
static uint8_t x303 = 14U;
int64_t x310 = INT64_MIN;
volatile int64_t x313 = INT64_MIN;
int16_t x314 = INT16_MAX;
volatile int64_t t78 = 102585223587009103LL;
int16_t x339 = INT16_MIN;
int32_t x343 = 56881;
int64_t x348 = -1LL;
uint16_t x358 = 0U;
volatile int64_t t87 = -7120LL;
int32_t x374 = -35;
static volatile int64_t x377 = -1LL;
int16_t x380 = 253;
int64_t x386 = INT64_MIN;
static volatile int8_t x387 = -1;
int64_t x389 = INT64_MAX;
static int32_t x396 = INT32_MAX;
uint32_t x401 = 32301U;
static int32_t t98 = -1;
int16_t x411 = -1;


void f0(void) {
	volatile int64_t x1 = -1LL;
	static int8_t x2 = 0;
	int8_t x3 = 7;
	static int16_t x4 = -1;
	volatile int64_t t0 = -3100341LL;

	t0 = (x1-((x2<x3)/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -38;
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = 42U;
	int64_t x8 = 1602393068454084141LL;
	volatile int64_t t1 = -7LL;

	t1 = (x5-((x6<x7)/x8));

	if (t1 != -38LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = -1;
	static volatile int32_t t2 = -2553338;

	t2 = (x9-((x10<x11)/x12));

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	int8_t x14 = -31;
	static uint8_t x15 = UINT8_MAX;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13-((x14<x15)/x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int32_t x18 = INT32_MIN;
	int16_t x19 = -1;
	int64_t t4 = -3LL;

	t4 = (x17-((x18<x19)/x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint8_t x22 = 1U;
	uint16_t x23 = 2641U;
	volatile uint32_t t5 = 110085439U;

	t5 = (x21-((x22<x23)/x24));

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int16_t x26 = INT16_MAX;
	uint32_t x28 = 22012U;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25-((x26<x27)/x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = -1LL;
	int64_t x31 = -1LL;
	int8_t x32 = INT8_MIN;

	t7 = (x29-((x30<x31)/x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = -244;
	static int16_t x36 = 1;
	int64_t t8 = -38433448LL;

	t8 = (x33-((x34<x35)/x36));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	int16_t x39 = 8036;
	uint8_t x40 = 4U;
	static int32_t t9 = 3883;

	t9 = (x37-((x38<x39)/x40));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int32_t x43 = 314;
	uint16_t x44 = 475U;
	static int32_t t10 = -62;

	t10 = (x41-((x42<x43)/x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	static uint8_t x46 = 0U;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -9489;

	t11 = (x45-((x46<x47)/x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	uint64_t x51 = UINT64_MAX;
	static int64_t x52 = -1LL;
	int64_t t12 = -968269205LL;

	t12 = (x49-((x50<x51)/x52));

	if (t12 != 4294967296LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	static uint8_t x54 = 0U;
	int32_t x55 = -1;
	static int32_t x56 = INT32_MAX;

	t13 = (x53-((x54<x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static int16_t x58 = -1;
	volatile int32_t x59 = INT32_MAX;
	volatile int8_t x60 = INT8_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = (x57-((x58<x59)/x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = -1;
	int16_t x63 = -1;
	uint16_t x64 = 3608U;
	volatile int64_t t15 = 217950102176LL;

	t15 = (x61-((x62<x63)/x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = -1;
	int16_t x67 = INT16_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	int32_t t16 = 50236;

	t16 = (x65-((x66<x67)/x68));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int32_t x72 = 23007404;
	int32_t t17 = 736;

	t17 = (x69-((x70<x71)/x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 0U;
	int16_t x74 = 91;

	t18 = (x73-((x74<x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static int32_t x78 = INT32_MAX;
	int64_t x80 = 38616119237LL;
	volatile int64_t t19 = 857276893LL;

	t19 = (x77-((x78<x79)/x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static int64_t x82 = INT64_MIN;
	volatile int16_t x84 = 1;
	volatile int32_t t20 = -180;

	t20 = (x81-((x82<x83)/x84));

	if (t20 != -32769) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = 6622793432750LL;
	int16_t x87 = -672;
	volatile uint32_t x88 = UINT32_MAX;
	uint32_t t21 = 9463536U;

	t21 = (x85-((x86<x87)/x88));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	uint64_t x94 = 74040LLU;
	int16_t x95 = 285;
	int16_t x96 = INT16_MAX;
	static int32_t t22 = INT32_MAX;

	t22 = (x93-((x94<x95)/x96));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = 3938;
	int8_t x98 = -1;
	static volatile uint8_t x100 = 2U;
	int32_t t23 = -345;

	t23 = (x97-((x98<x99)/x100));

	if (t23 != 3938) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 60860922U;
	int8_t x102 = 1;
	volatile int16_t x103 = 13797;
	volatile uint64_t t24 = 215300508630LLU;

	t24 = (x101-((x102<x103)/x104));

	if (t24 != 60860922LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MAX;
	int8_t x107 = -30;
	static volatile uint32_t t25 = 207632255U;

	t25 = (x105-((x106<x107)/x108));

	if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 2487U;
	int8_t x110 = 45;
	uint16_t x111 = 5U;
	static int64_t x112 = -1LL;
	volatile int64_t t26 = 162805LL;

	t26 = (x109-((x110<x111)/x112));

	if (t26 != 2487LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile uint32_t x114 = 624975U;
	uint16_t x115 = UINT16_MAX;

	t27 = (x113-((x114<x115)/x116));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -1;
	uint16_t x119 = 9454U;
	uint8_t x120 = 122U;
	int64_t t28 = INT64_MIN;

	t28 = (x117-((x118<x119)/x120));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = UINT16_MAX;
	uint64_t x122 = 3133079076LLU;
	int32_t x123 = -1;
	int8_t x124 = INT8_MAX;

	t29 = (x121-((x122<x123)/x124));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 47;
	volatile int32_t x126 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t30 = -1;

	t30 = (x125-((x126<x127)/x128));

	if (t30 != 47) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = INT32_MIN;
	uint8_t x131 = 0U;
	static uint16_t x132 = 7812U;
	static uint32_t t31 = 783U;

	t31 = (x129-((x130<x131)/x132));

	if (t31 != 6U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MIN;

	t32 = (x133-((x134<x135)/x136));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	uint32_t x138 = 7143U;
	uint64_t x139 = 54885456561LLU;
	static int8_t x140 = -1;
	static uint32_t t33 = 2385U;

	t33 = (x137-((x138<x139)/x140));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = UINT16_MAX;
	uint16_t x142 = 95U;
	uint16_t x143 = 0U;
	uint32_t x144 = UINT32_MAX;
	static uint32_t t34 = 31501566U;

	t34 = (x141-((x142<x143)/x144));

	if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x146 = 21216U;
	uint32_t x148 = 221350U;
	volatile uint32_t t35 = 109U;

	t35 = (x145-((x146<x147)/x148));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 249U;
	int16_t x150 = INT16_MAX;
	volatile uint16_t x151 = 5292U;
	uint32_t x152 = UINT32_MAX;
	uint32_t t36 = 0U;

	t36 = (x149-((x150<x151)/x152));

	if (t36 != 249U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 55U;
	int32_t x154 = -1;
	int16_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	uint64_t t37 = 4019560LLU;

	t37 = (x153-((x154<x155)/x156));

	if (t37 != 55LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -14;
	int16_t x158 = 0;
	static int64_t x160 = INT64_MIN;

	t38 = (x157-((x158<x159)/x160));

	if (t38 != -14LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x162 = 49U;
	volatile int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MIN;
	int64_t t39 = -67LL;

	t39 = (x161-((x162<x163)/x164));

	if (t39 != 54LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MAX;
	int32_t x167 = 921;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x165-((x166<x167)/x168));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = UINT32_MAX;
	static volatile int16_t x171 = 7636;
	int64_t x172 = -10486LL;

	t41 = (x169-((x170<x171)/x172));

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x174 = -3;
	int8_t x175 = INT8_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x173-((x174<x175)/x176));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -110894;
	uint16_t x178 = 50U;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t43 = 3;

	t43 = (x177-((x178<x179)/x180));

	if (t43 != -110894) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = -21;
	int8_t x183 = 0;
	volatile int16_t x184 = -1;
	volatile int64_t t44 = 57LL;

	t44 = (x181-((x182<x183)/x184));

	if (t44 != -3780LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = 6U;
	uint32_t x187 = UINT32_MAX;
	int32_t t45 = 454;

	t45 = (x185-((x186<x187)/x188));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -28796058LL;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = UINT64_MAX;
	volatile int64_t t46 = -3197LL;

	t46 = (x189-((x190<x191)/x192));

	if (t46 != -28796058LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = 74695LL;

	t47 = (x193-((x194<x195)/x196));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 22748U;
	int64_t x198 = INT64_MIN;
	int16_t x199 = -12197;
	int32_t x200 = INT32_MAX;
	uint32_t t48 = 32465U;

	t48 = (x197-((x198<x199)/x200));

	if (t48 != 22748U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	static int64_t x204 = 634339597LL;
	static volatile int64_t t49 = 4288306268LL;

	t49 = (x201-((x202<x203)/x204));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = -6;
	static volatile int64_t x207 = INT64_MIN;
	static int16_t x208 = -35;

	t50 = (x205-((x206<x207)/x208));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -2570;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	static int16_t x212 = -183;
	int32_t t51 = -909174;

	t51 = (x209-((x210<x211)/x212));

	if (t51 != -2570) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x214 = INT16_MIN;
	static uint32_t x215 = UINT32_MAX;
	volatile uint64_t t52 = 32LLU;

	t52 = (x213-((x214<x215)/x216));

	if (t52 != 5353680354027558LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MAX;
	int16_t x218 = -85;
	volatile int32_t x219 = INT32_MAX;
	int32_t x220 = INT32_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x217-((x218<x219)/x220));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x222 = -1;
	uint64_t x223 = 3847448623335842442LLU;
	static uint32_t x224 = UINT32_MAX;

	t54 = (x221-((x222<x223)/x224));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int64_t x228 = -1LL;
	volatile int64_t t55 = 205904750572253406LL;

	t55 = (x225-((x226<x227)/x228));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -47;
	int64_t x230 = 134069603545LL;
	volatile uint16_t x231 = 6658U;
	uint16_t x232 = 1816U;
	static volatile int32_t t56 = -6767;

	t56 = (x229-((x230<x231)/x232));

	if (t56 != -47) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	int8_t x235 = -1;
	volatile uint64_t x236 = 216278817LLU;
	uint64_t t57 = 8LLU;

	t57 = (x233-((x234<x235)/x236));

	if (t57 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 917504939028150LLU;
	int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MIN;
	uint64_t t58 = 101960LLU;

	t58 = (x237-((x238<x239)/x240));

	if (t58 != 917504939028150LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = UINT8_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	int8_t x244 = INT8_MAX;
	int32_t t59 = 7633317;

	t59 = (x241-((x242<x243)/x244));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	static int16_t x246 = INT16_MAX;
	static int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MIN;
	volatile int64_t t60 = 763LL;

	t60 = (x245-((x246<x247)/x248));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x250 = INT32_MIN;
	static volatile int64_t x251 = INT64_MAX;
	int8_t x252 = INT8_MIN;
	uint64_t t61 = 3324LLU;

	t61 = (x249-((x250<x251)/x252));

	if (t61 != 32073LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x253 = -1005919134718314331LL;
	static int16_t x255 = 124;
	uint8_t x256 = 1U;
	volatile int64_t t62 = 45978750989332LL;

	t62 = (x253-((x254<x255)/x256));

	if (t62 != -1005919134718314332LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 828U;
	uint16_t x258 = 7U;
	int32_t x259 = 226332;
	static int8_t x260 = INT8_MIN;
	int32_t t63 = 4024516;

	t63 = (x257-((x258<x259)/x260));

	if (t63 != 828) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 3151031083656728LLU;
	static int16_t x262 = 25;
	static int32_t x263 = -581975227;
	volatile uint64_t t64 = 253375734912090828LLU;

	t64 = (x261-((x262<x263)/x264));

	if (t64 != 3151031083656728LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = -211;
	volatile int8_t x266 = INT8_MIN;
	static volatile uint8_t x267 = UINT8_MAX;
	int32_t t65 = -23367;

	t65 = (x265-((x266<x267)/x268));

	if (t65 != -211) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	volatile int8_t x272 = INT8_MAX;

	t66 = (x269-((x270<x271)/x272));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -50;
	volatile uint8_t x274 = 3U;
	int64_t x275 = INT64_MAX;
	uint8_t x276 = 1U;
	static volatile int32_t t67 = 1;

	t67 = (x273-((x274<x275)/x276));

	if (t67 != -51) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	volatile int64_t x279 = INT64_MIN;
	static int8_t x280 = INT8_MIN;

	t68 = (x277-((x278<x279)/x280));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x281 = INT64_MIN;
	static uint64_t x282 = 24650LLU;
	uint32_t x283 = UINT32_MAX;
	volatile int64_t x284 = INT64_MIN;
	int64_t t69 = INT64_MIN;

	t69 = (x281-((x282<x283)/x284));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x286 = -70131;
	volatile int16_t x287 = -43;
	uint32_t t70 = 7U;

	t70 = (x285-((x286<x287)/x288));

	if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MIN;
	int32_t x291 = -1;
	volatile int32_t x292 = -1;
	static int32_t t71 = 249;

	t71 = (x289-((x290<x291)/x292));

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	volatile int16_t x295 = -1;
	int32_t x296 = -1;
	int32_t t72 = 723;

	t72 = (x293-((x294<x295)/x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	uint64_t x299 = 472180LLU;
	volatile uint32_t x300 = 264391618U;
	uint32_t t73 = UINT32_MAX;

	t73 = (x297-((x298<x299)/x300));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 25372U;
	volatile uint8_t x302 = 75U;
	volatile uint8_t x304 = 42U;
	uint32_t t74 = 24195U;

	t74 = (x301-((x302<x303)/x304));

	if (t74 != 25372U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x309 = 1U;
	int32_t x311 = INT32_MIN;
	static volatile uint8_t x312 = UINT8_MAX;
	static volatile int32_t t75 = 13;

	t75 = (x309-((x310<x311)/x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x315 = -171;
	uint32_t x316 = 2602U;
	static int64_t t76 = INT64_MIN;

	t76 = (x313-((x314<x315)/x316));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x317 = 1768U;
	int32_t x318 = INT32_MAX;
	static int64_t x319 = -37811053534275418LL;
	int32_t x320 = 5;
	uint32_t t77 = 58824U;

	t77 = (x317-((x318<x319)/x320));

	if (t77 != 1768U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = INT8_MAX;
	uint64_t x322 = 11367522LLU;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MIN;

	t78 = (x321-((x322<x323)/x324));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 20U;
	static int64_t x326 = 165783LL;
	static uint64_t x327 = UINT64_MAX;
	volatile int8_t x328 = INT8_MAX;
	static int32_t t79 = -117843104;

	t79 = (x325-((x326<x327)/x328));

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MAX;
	uint32_t x330 = 235U;
	static int64_t x331 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	static volatile int64_t t80 = INT64_MAX;

	t80 = (x329-((x330<x331)/x332));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = UINT32_MAX;
	int16_t x334 = -1;
	static int8_t x335 = -1;
	int32_t x336 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x333-((x334<x335)/x336));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 68969165081220971LLU;
	int8_t x338 = INT8_MIN;
	static uint8_t x340 = UINT8_MAX;
	uint64_t t82 = 4256794391578614LLU;

	t82 = (x337-((x338<x339)/x340));

	if (t82 != 68969165081220971LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x341 = UINT8_MAX;
	int8_t x342 = -1;
	uint16_t x344 = 6545U;
	int32_t t83 = 4;

	t83 = (x341-((x342<x343)/x344));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 17152328752910LLU;
	int8_t x346 = -4;
	uint8_t x347 = 95U;
	uint64_t t84 = 26377135704892LLU;

	t84 = (x345-((x346<x347)/x348));

	if (t84 != 17152328752911LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = 6U;
	int8_t x352 = INT8_MAX;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x349-((x350<x351)/x352));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x353 = 120U;
	uint32_t x354 = 34345596U;
	int64_t x355 = INT64_MAX;
	int16_t x356 = -8119;
	int32_t t86 = 216618;

	t86 = (x353-((x354<x355)/x356));

	if (t86 != 120) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MAX;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int64_t x360 = INT64_MAX;

	t87 = (x357-((x358<x359)/x360));

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -1LL;
	int8_t x366 = INT8_MIN;
	static uint64_t x367 = 10984077207696439LLU;
	volatile int8_t x368 = INT8_MIN;
	volatile int64_t t88 = -3973402732LL;

	t88 = (x365-((x366<x367)/x368));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = INT32_MAX;
	static int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MAX;
	uint32_t x372 = 626U;
	static volatile uint32_t t89 = 27693996U;

	t89 = (x369-((x370<x371)/x372));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = 4550193U;
	int8_t x375 = INT8_MAX;
	volatile uint8_t x376 = 26U;
	volatile uint32_t t90 = 0U;

	t90 = (x373-((x374<x375)/x376));

	if (t90 != 4550193U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x378 = 99;
	uint16_t x379 = 2U;
	int64_t t91 = -5LL;

	t91 = (x377-((x378<x379)/x380));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = UINT8_MAX;
	static int16_t x382 = INT16_MIN;
	int32_t x383 = -2860;
	uint16_t x384 = 2053U;
	volatile int32_t t92 = -27213483;

	t92 = (x381-((x382<x383)/x384));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MAX;
	int32_t x388 = INT32_MIN;
	static int64_t t93 = INT64_MAX;

	t93 = (x385-((x386<x387)/x388));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = -1;
	int16_t x391 = 2;
	int8_t x392 = 2;
	static volatile int64_t t94 = INT64_MAX;

	t94 = (x389-((x390<x391)/x392));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MIN;
	static int16_t x395 = -139;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x393-((x394<x395)/x396));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x397 = 12U;
	volatile int16_t x398 = -1;
	uint32_t x399 = 30U;
	int8_t x400 = 1;
	static int32_t t96 = -506402797;

	t96 = (x397-((x398<x399)/x400));

	if (t96 != 12) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x402 = INT16_MAX;
	static int32_t x403 = -110;
	int32_t x404 = INT32_MIN;
	volatile uint32_t t97 = 169U;

	t97 = (x401-((x402<x403)/x404));

	if (t97 != 32301U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x406 = UINT64_MAX;
	static int32_t x407 = -1;
	volatile int8_t x408 = 1;

	t98 = (x405-((x406<x407)/x408));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MAX;
	static int64_t x410 = -1LL;
	uint8_t x412 = 6U;
	int32_t t99 = INT32_MAX;

	t99 = (x409-((x410<x411)/x412));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

