#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
volatile uint64_t t1 = 89LLU;
volatile uint32_t x17 = 15002343U;
volatile int16_t x24 = INT16_MIN;
static int32_t t5 = 514818;
static volatile int32_t x27 = -521909679;
uint16_t x35 = UINT16_MAX;
uint8_t x36 = 28U;
int16_t x41 = -578;
volatile int8_t x43 = 2;
static int32_t x45 = INT32_MAX;
uint32_t x46 = UINT32_MAX;
int32_t t11 = -385;
volatile int64_t t12 = 158134168572LL;
int32_t x53 = -14207328;
static volatile int64_t x57 = INT64_MAX;
volatile uint16_t x60 = 2U;
int64_t x63 = INT64_MAX;
volatile uint32_t x70 = 35460U;
int32_t x75 = -310794912;
volatile int64_t x76 = INT64_MAX;
int8_t x82 = INT8_MIN;
int64_t t20 = -7754873LL;
static volatile uint16_t x88 = 8199U;
volatile uint16_t x89 = UINT16_MAX;
volatile int32_t x94 = INT32_MAX;
volatile int32_t t23 = 1011359443;
int8_t x97 = INT8_MIN;
static int16_t x99 = -9526;
static int8_t x115 = -1;
uint8_t x121 = UINT8_MAX;
uint8_t x124 = 3U;
volatile int16_t x128 = INT16_MIN;
static int8_t x129 = 3;
static int64_t t32 = 4207190914411941LL;
uint64_t t34 = 7352248512848LLU;
int8_t x143 = INT8_MAX;
volatile int32_t t36 = 28;
volatile uint32_t x150 = 472944876U;
int32_t x154 = INT32_MIN;
volatile int32_t t38 = -503;
volatile int32_t t40 = -7;
int8_t x166 = INT8_MAX;
uint8_t x177 = UINT8_MAX;
int64_t x179 = 3000LL;
volatile int8_t x187 = 0;
int32_t x189 = INT32_MIN;
uint32_t x190 = 42U;
volatile int8_t x193 = INT8_MIN;
volatile int64_t t48 = -25708811910434159LL;
int16_t x199 = -1;
int8_t x200 = INT8_MAX;
static volatile int32_t t49 = 98445517;
static int32_t x201 = INT32_MIN;
uint32_t x202 = UINT32_MAX;
uint16_t x204 = 30941U;
static volatile uint16_t x207 = 856U;
int16_t x208 = INT16_MAX;
int32_t t51 = 13531614;
volatile int32_t t53 = INT32_MIN;
static uint32_t x222 = 32817U;
int64_t x226 = INT64_MIN;
int8_t x230 = INT8_MIN;
int32_t t58 = -14;
int8_t x238 = INT8_MAX;
int16_t x243 = -1;
int32_t x248 = INT32_MIN;
uint16_t x254 = 48U;
volatile int16_t x256 = -1;
static volatile int64_t t65 = 366429678800223LL;
volatile uint64_t x266 = 512700976LLU;
int64_t t66 = 267LL;
int64_t x270 = -38661924577049809LL;
volatile int64_t x271 = -1LL;
uint64_t x275 = 754606295946051LLU;
volatile uint32_t t68 = 89340U;
volatile int32_t t70 = INT32_MAX;
uint32_t x288 = 11411U;
volatile uint32_t t72 = 2U;
static volatile int32_t x294 = -30;
int16_t x295 = -1;
static uint16_t x296 = 2162U;
int16_t x298 = 0;
volatile uint32_t x299 = 1771768U;
uint8_t x304 = 0U;
volatile uint16_t x308 = 1550U;
int8_t x309 = INT8_MIN;
volatile int32_t x314 = INT32_MIN;
int64_t x315 = INT64_MIN;
int64_t x323 = 11LL;
static int64_t t81 = -10254205048130LL;
volatile int32_t x341 = INT32_MIN;
int32_t x342 = INT32_MIN;
int64_t x344 = INT64_MIN;
uint16_t x353 = UINT16_MAX;
int32_t x356 = -1;
static volatile uint32_t x359 = UINT32_MAX;
volatile uint32_t x368 = 36741628U;
int64_t x381 = 2860909245202418615LL;
int64_t t95 = -8112317346921993LL;
volatile int8_t x385 = INT8_MIN;
volatile int32_t t96 = -3;
int16_t x391 = INT16_MIN;
volatile int64_t t97 = -1762244444116213LL;
int8_t x398 = INT8_MAX;
int16_t x400 = -1;


void f0(void) {
	static int16_t x1 = -1;
	int8_t x3 = 7;
	int64_t x4 = -203279LL;
	int64_t t0 = 8097LL;

	t0 = (x1^((x2<x3)+x4));

	if (t0 != 203277LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = 7508046273108976646LLU;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 32LLU;

	t1 = (x5^((x6<x7)+x8));

	if (t1 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x10 = 0U;
	int8_t x11 = 1;
	static int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 1856721985009553LL;

	t2 = (x9^((x10<x11)+x12));

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 0LLU;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 3565LLU;

	t3 = (x13^((x14<x15)+x16));

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	volatile uint8_t x19 = UINT8_MAX;
	int8_t x20 = 48;
	static volatile uint32_t t4 = 8691394U;

	t4 = (x17^((x18<x19)+x20));

	if (t4 != 15002326U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = 17U;
	volatile int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;

	t5 = (x21^((x22<x23)+x24));

	if (t5 != -32751) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	uint64_t x26 = 47222139750LLU;
	int64_t x28 = 875458349675742439LL;
	int64_t t6 = 50255LL;

	t6 = (x25^((x26<x27)+x28));

	if (t6 != -875458349675772696LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	uint8_t x30 = 1U;
	uint64_t x31 = 584LLU;
	volatile uint64_t x32 = 4173635524773LLU;
	uint64_t t7 = 1080026848857242LLU;

	t7 = (x29^((x30<x31)+x32));

	if (t7 != 4171485931353LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 5;
	volatile int16_t x34 = INT16_MIN;
	volatile int32_t t8 = -924633;

	t8 = (x33^((x34<x35)+x36));

	if (t8 != 24) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -6;
	int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 32661U;
	volatile int32_t t9 = 1931458;

	t9 = (x37^((x38<x39)+x40));

	if (t9 != -32657) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = 56;
	int16_t x44 = 5194;
	volatile int32_t t10 = -1;

	t10 = (x41^((x42<x43)+x44));

	if (t10 != -5644) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = INT64_MIN;
	static int32_t x48 = 411176055;

	t11 = (x45^((x46<x47)+x48));

	if (t11 != 1736307592) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = -32211;
	volatile int32_t x51 = -1;
	static uint8_t x52 = 42U;

	t12 = (x49^((x50<x51)+x52));

	if (t12 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 26LLU;
	int16_t x56 = -5;
	int32_t t13 = -74747;

	t13 = (x53^((x54<x55)+x56));

	if (t13 != 14207323) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 5U;
	static uint32_t x59 = 11541759U;
	static volatile int64_t t14 = -3398664781LL;

	t14 = (x57^((x58<x59)+x60));

	if (t14 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 78U;
	static uint32_t x62 = 32U;
	int8_t x64 = -1;
	int32_t t15 = 383200;

	t15 = (x61^((x62<x63)+x64));

	if (t15 != 78) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 63U;
	volatile int64_t x66 = INT64_MIN;
	static volatile uint16_t x67 = 19U;
	volatile uint32_t x68 = 1252369967U;
	volatile uint32_t t16 = 1665255U;

	t16 = (x65^((x66<x67)+x68));

	if (t16 != 1252369935U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	static int16_t x71 = 59;
	int16_t x72 = INT16_MIN;
	int32_t t17 = -7003;

	t17 = (x69^((x70<x71)+x72));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint8_t x74 = 0U;
	static volatile int64_t t18 = -1250LL;

	t18 = (x73^((x74<x75)+x76));

	if (t18 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 61U;
	int32_t x78 = INT32_MAX;
	static int8_t x79 = INT8_MIN;
	static int32_t x80 = INT32_MAX;
	static volatile int32_t t19 = -8896714;

	t19 = (x77^((x78<x79)+x80));

	if (t19 != 2147483586) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int32_t x83 = 6;
	int16_t x84 = -1;

	t20 = (x81^((x82<x83)+x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 3U;
	int8_t x86 = INT8_MIN;
	uint32_t x87 = 6139133U;
	uint32_t t21 = 902U;

	t21 = (x85^((x86<x87)+x88));

	if (t21 != 8196U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	int8_t x91 = 1;
	static int32_t x92 = -1;
	volatile int32_t t22 = 3;

	t22 = (x89^((x90<x91)+x92));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static volatile uint16_t x95 = 8606U;
	volatile int8_t x96 = 0;

	t23 = (x93^((x94<x95)+x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = 153704LL;
	static int64_t x100 = -1LL;
	volatile int64_t t24 = -1LL;

	t24 = (x97^((x98<x99)+x100));

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int32_t x102 = 2084935;
	volatile int32_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 3U;

	t25 = (x101^((x102<x103)+x104));

	if (t25 != 4294901760U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 108U;
	uint64_t x106 = 5438467328397LLU;
	int64_t x107 = -42424398LL;
	volatile int8_t x108 = INT8_MIN;
	static int32_t t26 = 117;

	t26 = (x105^((x106<x107)+x108));

	if (t26 != -19) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = -331922LL;
	static uint64_t x111 = 1399LLU;
	volatile int64_t x112 = INT64_MIN;
	volatile uint64_t t27 = 4506LLU;

	t27 = (x109^((x110<x111)+x112));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 53871813973146088LLU;
	int64_t x114 = INT64_MIN;
	volatile int8_t x116 = INT8_MIN;
	volatile uint64_t t28 = 42203052838209668LLU;

	t28 = (x113^((x114<x115)+x116));

	if (t28 != 18392872259736405609LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 942434732775129LLU;
	uint64_t x118 = 26LLU;
	static int32_t x119 = INT32_MAX;
	uint8_t x120 = 1U;
	volatile uint64_t t29 = 246463586051778630LLU;

	t29 = (x117^((x118<x119)+x120));

	if (t29 != 942434732775131LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = 2264;
	volatile int32_t t30 = -1;

	t30 = (x121^((x122<x123)+x124));

	if (t30 != 251) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = INT8_MIN;
	int8_t x127 = -1;
	int64_t t31 = -83031LL;

	t31 = (x125^((x126<x127)+x128));

	if (t31 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 7586836545LLU;
	int64_t x131 = 1090752050681737LL;
	int64_t x132 = -8991LL;

	t32 = (x129^((x130<x131)+x132));

	if (t32 != -8991LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MAX;
	volatile int32_t x134 = 74;
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	int32_t t33 = 895445;

	t33 = (x133^((x134<x135)+x136));

	if (t33 != -2147483521) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 2U;
	static uint16_t x138 = UINT16_MAX;
	static volatile uint16_t x139 = 1U;
	static uint64_t x140 = 185589536245LLU;

	t34 = (x137^((x138<x139)+x140));

	if (t34 != 185589536247LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = 3U;
	int8_t x142 = -1;
	int64_t x144 = INT64_MIN;
	volatile int64_t t35 = 53731868044LL;

	t35 = (x141^((x142<x143)+x144));

	if (t35 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -6;
	int8_t x146 = INT8_MIN;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;

	t36 = (x145^((x146<x147)+x148));

	if (t36 != 122) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -105;
	static volatile uint32_t x151 = 209068469U;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t37 = 34358000034LLU;

	t37 = (x149^((x150<x151)+x152));

	if (t37 != 104LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x155 = 86LLU;
	int8_t x156 = INT8_MAX;

	t38 = (x153^((x154<x155)+x156));

	if (t38 != -2147483521) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 85U;
	uint8_t x158 = 5U;
	uint8_t x159 = UINT8_MAX;
	static int64_t x160 = -1LL;
	static int64_t t39 = -19037LL;

	t39 = (x157^((x158<x159)+x160));

	if (t39 != 85LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	uint8_t x162 = 0U;
	volatile int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;

	t40 = (x161^((x162<x163)+x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static int64_t x167 = 1019025397LL;
	static int64_t x168 = INT64_MIN;
	static volatile int64_t t41 = -16566719237727LL;

	t41 = (x165^((x166<x167)+x168));

	if (t41 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 2037582996220LLU;
	static int16_t x170 = 37;
	int64_t x171 = 518148581660LL;
	int8_t x172 = -3;
	uint64_t t42 = 210LLU;

	t42 = (x169^((x170<x171)+x172));

	if (t42 != 18446742036126555394LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 457958U;
	uint16_t x174 = 15215U;
	int64_t x175 = 35051910LL;
	volatile int16_t x176 = -1;
	uint32_t t43 = 14U;

	t43 = (x173^((x174<x175)+x176));

	if (t43 != 457958U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 243085517428045035LLU;
	static uint16_t x180 = 1U;
	volatile int32_t t44 = 158638337;

	t44 = (x177^((x178<x179)+x180));

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	static int16_t x182 = -1891;
	int8_t x183 = INT8_MIN;
	static uint32_t x184 = UINT32_MAX;
	uint32_t t45 = 5074U;

	t45 = (x181^((x182<x183)+x184));

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MAX;
	int16_t x186 = 607;
	volatile int16_t x188 = -1;
	volatile int32_t t46 = -203;

	t46 = (x185^((x186<x187)+x188));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x191 = -1;
	volatile int16_t x192 = -107;
	volatile int32_t t47 = -19056;

	t47 = (x189^((x190<x191)+x192));

	if (t47 != 2147483542) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = 35U;
	int64_t x195 = INT64_MAX;
	int64_t x196 = INT64_MIN;

	t48 = (x193^((x194<x195)+x196));

	if (t48 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 94U;
	int32_t x198 = INT32_MIN;

	t49 = (x197^((x198<x199)+x200));

	if (t49 != 222) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x203 = 0;
	static volatile int32_t t50 = 258648;

	t50 = (x201^((x202<x203)+x204));

	if (t50 != -2147452707) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 33;
	static int8_t x206 = INT8_MIN;

	t51 = (x205^((x206<x207)+x208));

	if (t51 != 32801) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 41U;
	int16_t x210 = -1;
	volatile uint16_t x211 = 17U;
	int32_t x212 = -35548361;
	int32_t t52 = 2441;

	t52 = (x209^((x210<x211)+x212));

	if (t52 != -35548399) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	uint64_t x214 = 22110899LLU;
	int16_t x215 = INT16_MIN;
	int8_t x216 = -2;

	t53 = (x213^((x214<x215)+x216));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int64_t x218 = 3941897402951473LL;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	int32_t t54 = 801;

	t54 = (x217^((x218<x219)+x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x223 = -1LL;
	static volatile int16_t x224 = INT16_MAX;
	int32_t t55 = 521970865;

	t55 = (x221^((x222<x223)+x224));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int64_t x227 = INT64_MIN;
	static volatile uint32_t x228 = 1392710U;
	static volatile int64_t t56 = 18874590314LL;

	t56 = (x225^((x226<x227)+x228));

	if (t56 != -1392711LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x231 = -2;
	static volatile int32_t x232 = -3455;
	uint64_t t57 = 162LLU;

	t57 = (x229^((x230<x231)+x232));

	if (t57 != 3453LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 1;
	int16_t x234 = INT16_MIN;
	int32_t x235 = -82;
	uint16_t x236 = UINT16_MAX;

	t58 = (x233^((x234<x235)+x236));

	if (t58 != 65537) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int64_t x239 = -1LL;
	volatile int32_t x240 = -264933;
	static int32_t t59 = -197;

	t59 = (x237^((x238<x239)+x240));

	if (t59 != 292123) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static uint8_t x242 = 81U;
	int32_t x244 = -3413879;
	int32_t t60 = -106810589;

	t60 = (x241^((x242<x243)+x244));

	if (t60 != 2144069769) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 1927632757U;
	volatile int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MIN;
	static volatile uint32_t t61 = 655U;

	t61 = (x245^((x246<x247)+x248));

	if (t61 != 4075116405U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int8_t x250 = 6;
	int16_t x251 = INT16_MIN;
	int32_t x252 = -1;
	volatile int32_t t62 = -2;

	t62 = (x249^((x250<x251)+x252));

	if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	static int16_t x255 = INT16_MAX;
	volatile int32_t t63 = 61205565;

	t63 = (x253^((x254<x255)+x256));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = -1;
	uint32_t x259 = 3U;
	static uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = -5530711;

	t64 = (x257^((x258<x259)+x260));

	if (t64 != 32512) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MAX;
	int8_t x263 = -1;
	uint32_t x264 = 4326U;

	t65 = (x261^((x262<x263)+x264));

	if (t65 != -9223372036854771482LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	volatile int32_t x267 = INT32_MIN;
	uint32_t x268 = 13605U;

	t66 = (x265^((x266<x267)+x268));

	if (t66 != -13607LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 3LLU;
	volatile int8_t x272 = 49;
	static volatile uint64_t t67 = 3405044920679322LLU;

	t67 = (x269^((x270<x271)+x272));

	if (t67 != 49LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 36U;
	uint16_t x274 = 7469U;
	static volatile int8_t x276 = INT8_MAX;

	t68 = (x273^((x274<x275)+x276));

	if (t68 != 164U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -50140300LL;
	volatile int16_t x278 = -12105;
	uint8_t x279 = 0U;
	static uint8_t x280 = 11U;
	static int64_t t69 = -8277989151911407LL;

	t69 = (x277^((x278<x279)+x280));

	if (t69 != -50140296LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MAX;
	int16_t x283 = -1;
	static int32_t x284 = -1;

	t70 = (x281^((x282<x283)+x284));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	uint16_t x286 = UINT16_MAX;
	uint32_t x287 = 81099695U;
	volatile int64_t t71 = -621790LL;

	t71 = (x285^((x286<x287)+x288));

	if (t71 != -9223372036854764396LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 13795U;
	volatile int32_t x290 = -1;
	volatile int32_t x291 = INT32_MIN;
	static int16_t x292 = -3;

	t72 = (x289^((x290<x291)+x292));

	if (t72 != 4294953502U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int32_t t73 = 230678005;

	t73 = (x293^((x294<x295)+x296));

	if (t73 != -2147481485) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = INT32_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t74 = 1LLU;

	t74 = (x297^((x298<x299)+x300));

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	static uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	volatile int32_t t75 = -784075273;

	t75 = (x301^((x302<x303)+x304));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	volatile uint8_t x306 = 35U;
	volatile int16_t x307 = INT16_MIN;
	int32_t t76 = 118769516;

	t76 = (x305^((x306<x307)+x308));

	if (t76 != -1551) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MIN;
	static int32_t t77 = 12956;

	t77 = (x309^((x310<x311)+x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = 1U;

	t78 = (x313^((x314<x315)+x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 2308428U;
	int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	int8_t x320 = INT8_MIN;
	uint32_t t79 = 7592U;

	t79 = (x317^((x318<x319)+x320));

	if (t79 != 4292658893U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MIN;
	static int64_t x324 = INT64_MIN;
	volatile uint64_t t80 = 478LLU;

	t80 = (x321^((x322<x323)+x324));

	if (t80 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int64_t x326 = -729243818242665076LL;
	volatile int8_t x327 = -1;
	int64_t x328 = INT64_MIN;

	t81 = (x325^((x326<x327)+x328));

	if (t81 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	volatile uint64_t x330 = UINT64_MAX;
	uint16_t x331 = UINT16_MAX;
	uint64_t x332 = 28737188229715LLU;
	uint64_t t82 = 13LLU;

	t82 = (x329^((x330<x331)+x332));

	if (t82 != 18446715336521321900LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 3U;
	int16_t x334 = -1;
	volatile int8_t x335 = INT8_MAX;
	volatile int16_t x336 = 1;
	int32_t t83 = -22;

	t83 = (x333^((x334<x335)+x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	volatile uint8_t x338 = 13U;
	volatile uint8_t x339 = 2U;
	volatile uint32_t x340 = 60303991U;
	uint32_t t84 = 81139759U;

	t84 = (x337^((x338<x339)+x340));

	if (t84 != 60304008U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = INT16_MAX;
	volatile int64_t t85 = 535985743698LL;

	t85 = (x341^((x342<x343)+x344));

	if (t85 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x346 = 775414147U;
	static int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 14054796;

	t86 = (x345^((x346<x347)+x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 896U;
	static volatile int8_t x350 = 12;
	volatile int8_t x351 = INT8_MAX;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -1389678;

	t87 = (x349^((x350<x351)+x352));

	if (t87 != -2147482751) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = UINT64_MAX;
	volatile int16_t x355 = INT16_MAX;
	static int32_t t88 = 1627745;

	t88 = (x353^((x354<x355)+x356));

	if (t88 != -65536) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MAX;
	int16_t x360 = INT16_MAX;
	int64_t t89 = 0LL;

	t89 = (x357^((x358<x359)+x360));

	if (t89 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int32_t x362 = -784244634;
	static int32_t x363 = INT32_MAX;
	int32_t x364 = INT32_MIN;
	static int64_t t90 = -516191804345709770LL;

	t90 = (x361^((x362<x363)+x364));

	if (t90 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	int16_t x366 = -1;
	int64_t x367 = INT64_MIN;
	volatile uint32_t t91 = 14348U;

	t91 = (x365^((x366<x367)+x368));

	if (t91 != 36724227U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 3U;
	static int8_t x370 = -1;
	int16_t x371 = INT16_MAX;
	volatile uint64_t x372 = 325LLU;
	volatile uint64_t t92 = 219839599LLU;

	t92 = (x369^((x370<x371)+x372));

	if (t92 != 325LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = UINT16_MAX;
	static int8_t x376 = -1;
	int32_t t93 = INT32_MAX;

	t93 = (x373^((x374<x375)+x376));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	static int8_t x378 = -1;
	static int8_t x379 = -5;
	static uint16_t x380 = 1U;
	int64_t t94 = 233670LL;

	t94 = (x377^((x378<x379)+x380));

	if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -1;
	uint64_t x383 = 382717090LLU;
	int64_t x384 = INT64_MAX;

	t95 = (x381^((x382<x383)+x384));

	if (t95 != 6362462791652357192LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MIN;
	static volatile int8_t x388 = 0;

	t96 = (x385^((x386<x387)+x388));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile int16_t x390 = INT16_MIN;
	volatile int64_t x392 = INT64_MAX;

	t97 = (x389^((x390<x391)+x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 49;
	volatile uint16_t x394 = 1U;
	static volatile int64_t x395 = INT64_MIN;
	uint32_t x396 = 14U;
	volatile uint32_t t98 = 423963917U;

	t98 = (x393^((x394<x395)+x396));

	if (t98 != 63U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -28;
	static int32_t x399 = -1;
	volatile int32_t t99 = 2;

	t99 = (x397^((x398<x399)+x400));

	if (t99 != 27) { NG(); } else { ; }
	
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

